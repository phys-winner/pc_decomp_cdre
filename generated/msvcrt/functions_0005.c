#define RECOMP_GENERATED_CODE

#include "functions.h"

void sub_150325F0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x150325F0u);

L_150325F0:
    edi = edi; /* 0x150325F0: mov edi, edi */
    PUSH32(esp, ebp); /* 0x150325F2: push ebp */
    ebp = esp; /* 0x150325F3: mov ebp, esp */
    PUSH32(esp, 1); /* 0x150325F5: push 1 */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x150325F7: push dword ptr [ebp + 0x10] */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x150325FA: push dword ptr [ebp + 0xc] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x150325FD: push dword ptr [ebp + 8] */
    PUSH32(esp, MEM32(ebp + 0x14)); /* 0x15032600: push dword ptr [ebp + 0x14] */
    RECOMP_CALL(sub_1503227D); /* 0x15032603: call 0x1503227d */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x14u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x14u; /* 0x15032608: add esp, 0x14 */
    _flag_k = FK_ADD;
    ebp = POP32_VAL(esp); /* 0x1503260B: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1503260C: ret  */
    RECOMP_REGS_OUT();
}

void sub_15032613(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x15032613u);

L_15032613:
    edi = edi; /* 0x15032613: mov edi, edi */
    PUSH32(esp, ebp); /* 0x15032615: push ebp */
    ebp = esp; /* 0x15032616: mov ebp, esp */
    PUSH32(esp, 0); /* 0x15032618: push 0 */
    PUSH32(esp, MEM32(ebp + 0x18)); /* 0x1503261A: push dword ptr [ebp + 0x18] */
    PUSH32(esp, MEM32(ebp + 0x14)); /* 0x1503261D: push dword ptr [ebp + 0x14] */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x15032620: push dword ptr [ebp + 0x10] */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x15032623: push dword ptr [ebp + 0xc] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x15032626: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_15032639); /* 0x15032629: call 0x15032639 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x18u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x18u; /* 0x1503262E: add esp, 0x18 */
    _flag_k = FK_ADD;
    ebp = POP32_VAL(esp); /* 0x15032631: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x15032632: ret  */
    RECOMP_REGS_OUT();
}

void sub_15032639(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x15032639u);

L_15032639:
    edi = edi; /* 0x15032639: mov edi, edi */
    PUSH32(esp, ebp); /* 0x1503263B: push ebp */
    ebp = esp; /* 0x1503263C: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x24u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x24u; /* 0x1503263E: sub esp, 0x24 */
    _flag_k = FK_CMP;
    ecx = ebp + (-0x24); /* 0x15032641: lea ecx, [ebp - 0x24] */
    PUSH32(esp, ebx); /* 0x15032644: push ebx */
    PUSH32(esp, esi); /* 0x15032645: push esi */
    PUSH32(esp, edi); /* 0x15032646: push edi */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x15032647: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_1502F870); /* 0x1503264A: call 0x1502f870 */
    RECOMP_FLAGS_IN();
    eax = MEM32(ebp + 0x10); /* 0x1503264F: mov eax, dword ptr [ebp + 0x10] */
    esi = MEM32(ebp + 0xC); /* 0x15032652: mov esi, dword ptr [ebp + 0xc] */
    /* test eax, eax */ /* 0x15032655: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1503265B; /* 0x15032657: je 0x1503265b */
L_15032659:
    MEM32(eax) = esi; /* 0x15032659: mov dword ptr [eax], esi */
L_1503265B:
    /* test esi, esi */ /* 0x1503265B: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_15032670; /* 0x1503265D: je 0x15032670 */
L_1503265F:
    edi = MEM32(ebp + 0x14); /* 0x1503265F: mov edi, dword ptr [ebp + 0x14] */
    /* test edi, edi */ /* 0x15032662: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1503268F; /* 0x15032664: je 0x1503268f */
L_15032666:
    /* cmp edi, 2 */ /* 0x15032666: cmp edi, 2 */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_L(_flag_a, _flag_b)) goto L_15032670; /* 0x15032669: jl 0x15032670 */
L_1503266B:
    /* cmp edi, 0x24u */ /* 0x1503266B: cmp edi, 0x24 */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(0x24u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_LE(_flag_a, _flag_b)) goto L_1503268F; /* 0x1503266E: jle 0x1503268f */
L_15032670:
    RECOMP_CALL(sub_15036430); /* 0x15032670: call 0x15036430 */
    RECOMP_FLAGS_IN();
    MEM32(eax) = 0x16u; /* 0x15032675: mov dword ptr [eax], 0x16 */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1503267B: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, eax); /* 0x1503267D: push eax */
    PUSH32(esp, eax); /* 0x1503267E: push eax */
    PUSH32(esp, eax); /* 0x1503267F: push eax */
    PUSH32(esp, eax); /* 0x15032680: push eax */
    PUSH32(esp, eax); /* 0x15032681: push eax */
    RECOMP_CALL(sub_1505A110); /* 0x15032682: call 0x1505a110 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x14u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x14u; /* 0x15032687: add esp, 0x14 */
    _flag_k = FK_ADD;
    goto L_15032860; /* 0x1503268A: jmp 0x15032860 */
L_1503268F:
    RECOMP_CALL(sub_15036430); /* 0x1503268F: call 0x15036430 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(MEM32(eax)); _flag_b = (uint32_t)(0);
    MEM32(eax) = MEM32(eax) & 0; /* 0x15032694: and dword ptr [eax], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ebx = 0; /* 0x15032697: xor ebx, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
    edi = MEM32(ebp + (-0x24)); /* 0x15032699: mov edi, dword ptr [ebp - 0x24] */
L_1503269C:
    SET_LO8(ecx, MEM8(esi)); /* 0x1503269C: mov cl, byte ptr [esi] */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi + 1; /* 0x1503269E: inc esi */
    _flag_k = FK_INC;
    /* cmp MEM32(edi + 0xAC), 1 */ /* 0x1503269F: cmp dword ptr [edi + 0xac], 1 */
    _flag_a = (uint32_t)(MEM32(edi + 0xAC)); _flag_b = (uint32_t)(1);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    MEM8(ebp + (-0x1)) = (uint8_t)(LO8(ecx)); /* 0x150326A6: mov byte ptr [ebp - 1], cl */
    edx = (uint32_t)LO8(ecx); /* 0x150326A9: movzx edx, cl */
    if (CMP_LE(_flag_a, _flag_b)) goto L_150326C5; /* 0x150326AC: jle 0x150326c5 */
L_150326AE:
    eax = ebp + (-0x24); /* 0x150326AE: lea eax, [ebp - 0x24] */
    PUSH32(esp, eax); /* 0x150326B1: push eax */
    PUSH32(esp, 8); /* 0x150326B2: push 8 */
    PUSH32(esp, edx); /* 0x150326B4: push edx */
    RECOMP_CALL(sub_150305E0); /* 0x150326B5: call 0x150305e0 */
    RECOMP_FLAGS_IN();
    SET_LO8(ecx, MEM8(ebp + (-0x1))); /* 0x150326BA: mov cl, byte ptr [ebp - 1] */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x150326BD: add esp, 0xc */
    _flag_k = FK_ADD;
    edi = MEM32(ebp + (-0x24)); /* 0x150326C0: mov edi, dword ptr [ebp - 0x24] */
    goto L_150326D2; /* 0x150326C3: jmp 0x150326d2 */
L_150326C5:
    eax = MEM32(edi + 0xC8); /* 0x150326C5: mov eax, dword ptr [edi + 0xc8] */
    eax = (uint32_t)MEM16(eax + edx * 2); /* 0x150326CB: movzx eax, word ptr [eax + edx*2] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(8);
    eax = eax & 8; /* 0x150326CF: and eax, 8 */
    _cf = 0;
    _flag_k = FK_TEST;
L_150326D2:
    /* test eax, eax */ /* 0x150326D2: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1503269C; /* 0x150326D4: jne 0x1503269c */
L_150326D6:
    eax = MEM32(ebp + 0x18); /* 0x150326D6: mov eax, dword ptr [ebp + 0x18] */
    /* cmp LO8(ecx), 0x2Du */ /* 0x150326D9: cmp cl, 0x2d */
    _flag_a = (uint32_t)(LO8(ecx)) << 24; _flag_b = (uint32_t)(0x2Du) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_150326E3; /* 0x150326DC: jne 0x150326e3 */
L_150326DE:
    _flag_a = (uint32_t)((eax | 2)); _flag_b = (uint32_t)((eax | 2));
    eax = eax | 2; /* 0x150326DE: or eax, 2 */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_150326E8; /* 0x150326E1: jmp 0x150326e8 */
L_150326E3:
    /* cmp LO8(ecx), 0x2Bu */ /* 0x150326E3: cmp cl, 0x2b */
    _flag_a = (uint32_t)(LO8(ecx)) << 24; _flag_b = (uint32_t)(0x2Bu) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_150326EE; /* 0x150326E6: jne 0x150326ee */
L_150326E8:
    SET_LO8(ecx, MEM8(esi)); /* 0x150326E8: mov cl, byte ptr [esi] */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi + 1; /* 0x150326EA: inc esi */
    _flag_k = FK_INC;
    MEM8(ebp + (-0x1)) = (uint8_t)(LO8(ecx)); /* 0x150326EB: mov byte ptr [ebp - 1], cl */
L_150326EE:
    edi = MEM32(ebp + 0x14); /* 0x150326EE: mov edi, dword ptr [ebp + 0x14] */
    MEM32(ebp + (-0x8)) = eax; /* 0x150326F1: mov dword ptr [ebp - 8], eax */
    /* test edi, edi */ /* 0x150326F4: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_15032854; /* 0x150326F6: js 0x15032854 */
L_150326FC:
    /* cmp edi, 1 */ /* 0x150326FC: cmp edi, 1 */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(1);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_15032854; /* 0x150326FF: je 0x15032854 */
L_15032705:
    /* cmp edi, 0x24u */ /* 0x15032705: cmp edi, 0x24 */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(0x24u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_G(_flag_a, _flag_b)) goto L_15032854; /* 0x15032708: jg 0x15032854 */
L_1503270E:
    /* test edi, edi */ /* 0x1503270E: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1503272F; /* 0x15032710: jne 0x1503272f */
L_15032712:
    /* cmp LO8(ecx), 0x30u */ /* 0x15032712: cmp cl, 0x30 */
    _flag_a = (uint32_t)(LO8(ecx)) << 24; _flag_b = (uint32_t)(0x30u) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1503271C; /* 0x15032715: je 0x1503271c */
L_15032717:
    PUSH32(esp, 0xAu); /* 0x15032717: push 0xa */
L_15032719:
    edi = POP32_VAL(esp); /* 0x15032719: pop edi */
    goto L_1503274C; /* 0x1503271A: jmp 0x1503274c */
L_1503271C:
    SET_LO8(eax, MEM8(esi)); /* 0x1503271C: mov al, byte ptr [esi] */
    /* cmp LO8(eax), 0x78u */ /* 0x1503271E: cmp al, 0x78 */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(0x78u) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1503272A; /* 0x15032720: je 0x1503272a */
L_15032722:
    /* cmp LO8(eax), 0x58u */ /* 0x15032722: cmp al, 0x58 */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(0x58u) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1503272A; /* 0x15032724: je 0x1503272a */
L_15032726:
    PUSH32(esp, 8); /* 0x15032726: push 8 */
    RECOMP_BACKEDGE();
    goto L_15032719; /* 0x15032728: jmp 0x15032719 */
L_1503272A:
    PUSH32(esp, 0x10u); /* 0x1503272A: push 0x10 */
    edi = POP32_VAL(esp); /* 0x1503272C: pop edi */
    goto L_15032739; /* 0x1503272D: jmp 0x15032739 */
L_1503272F:
    /* cmp edi, 0x10u */ /* 0x1503272F: cmp edi, 0x10 */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_1503274C; /* 0x15032732: jne 0x1503274c */
L_15032734:
    /* cmp LO8(ecx), 0x30u */ /* 0x15032734: cmp cl, 0x30 */
    _flag_a = (uint32_t)(LO8(ecx)) << 24; _flag_b = (uint32_t)(0x30u) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_1503274C; /* 0x15032737: jne 0x1503274c */
L_15032739:
    SET_LO8(eax, MEM8(esi)); /* 0x15032739: mov al, byte ptr [esi] */
    /* cmp LO8(eax), 0x78u */ /* 0x1503273B: cmp al, 0x78 */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(0x78u) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_15032743; /* 0x1503273D: je 0x15032743 */
L_1503273F:
    /* cmp LO8(eax), 0x58u */ /* 0x1503273F: cmp al, 0x58 */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(0x58u) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_1503274C; /* 0x15032741: jne 0x1503274c */
L_15032743:
    SET_LO8(ecx, MEM8(esi + 0x1)); /* 0x15032743: mov cl, byte ptr [esi + 1] */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esi = esi + 2; /* 0x15032746: add esi, 2 */
    _flag_k = FK_ADD;
    MEM8(ebp + (-0x1)) = (uint8_t)(LO8(ecx)); /* 0x15032749: mov byte ptr [ebp - 1], cl */
L_1503274C:
    _flag_a = (uint32_t)((eax | 0xFFFFFFFFu)); _flag_b = (uint32_t)((eax | 0xFFFFFFFFu));
    eax = eax | 0xFFFFFFFFu; /* 0x1503274C: or eax, 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edx = 0; /* 0x1503274F: xor edx, edx */
    _cf = 0;
    _flag_k = FK_TEST;
    { uint64_t _dividend = ((uint64_t)edx << 32) | eax; uint32_t _dv = (uint32_t)edi; /* 0x15032751: div edi */
      if (_dv) { eax = (uint32_t)(_dividend / _dv); edx = (uint32_t)(_dividend % _dv); }
      else { eax = 0; edx = 0; } }
    edx = MEM32(ebp + (-0x24)); /* 0x15032753: mov edx, dword ptr [ebp - 0x24] */
    MEM32(ebp + (-0x10)) = eax; /* 0x15032756: mov dword ptr [ebp - 0x10], eax */
    eax = MEM32(edx + 0xC8); /* 0x15032759: mov eax, dword ptr [edx + 0xc8] */
    MEM32(ebp + (-0x14)) = eax; /* 0x1503275F: mov dword ptr [ebp - 0x14], eax */
L_15032762:
    ecx = (uint32_t)LO8(ecx); /* 0x15032762: movzx ecx, cl */
    ecx = (uint32_t)MEM16(eax + ecx * 2); /* 0x15032765: movzx ecx, word ptr [eax + ecx*2] */
    eax = ecx; /* 0x15032769: mov eax, ecx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(4);
    eax = eax & 4; /* 0x1503276B: and eax, 4 */
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_15032779; /* 0x1503276E: je 0x15032779 */
L_15032770:
    edx = (int32_t)(int8_t)MEM8(ebp + (-0x1)); /* 0x15032770: movsx edx, byte ptr [ebp - 1] */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(0x30u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    edx = edx - 0x30u; /* 0x15032774: sub edx, 0x30 */
    _flag_k = FK_CMP;
    goto L_15032796; /* 0x15032777: jmp 0x15032796 */
L_15032779:
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x103u);
    ecx = ecx & 0x103u; /* 0x15032779: and ecx, 0x103 */
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_150327E1; /* 0x1503277F: je 0x150327e1 */
L_15032781:
    SET_LO8(ecx, MEM8(ebp + (-0x1))); /* 0x15032781: mov cl, byte ptr [ebp - 1] */
    eax = (int32_t)(int8_t)LO8(ecx); /* 0x15032784: movsx eax, cl */
    _flag_a = (uint32_t)(LO8(ecx)) << 24; _flag_b = (uint32_t)(0x61u) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    SET_LO8(ecx, LO8(ecx) - 0x61u); /* 0x15032787: sub cl, 0x61 */
    _flag_k = FK_NARROW(FK_CMP, 24);
    /* cmp LO8(ecx), 0x19u */ /* 0x1503278A: cmp cl, 0x19 */
    _flag_a = (uint32_t)(LO8(ecx)) << 24; _flag_b = (uint32_t)(0x19u) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    edx = eax + (-0x20); /* 0x1503278D: lea edx, [eax - 0x20] */
    if (CMP_A(_flag_a, _flag_b)) { edx = eax; } /* 0x15032790: cmova edx, eax */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(0x37u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    edx = edx - 0x37u; /* 0x15032793: sub edx, 0x37 */
    _flag_k = FK_CMP;
L_15032796:
    ecx = MEM32(ebp + (-0x8)); /* 0x15032796: mov ecx, dword ptr [ebp - 8] */
    MEM32(ebp + (-0xC)) = edx; /* 0x15032799: mov dword ptr [ebp - 0xc], edx */
    /* cmp edx, edi */ /* 0x1503279C: cmp edx, edi */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_AE(_flag_a, _flag_b)) goto L_150327E4; /* 0x1503279E: jae 0x150327e4 */
L_150327A0:
    _flag_a = (uint32_t)((ecx | 8)); _flag_b = (uint32_t)((ecx | 8));
    ecx = ecx | 8; /* 0x150327A0: or ecx, 8 */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp MEM32(ebp + 0x1C), 0 */ /* 0x150327A3: cmp dword ptr [ebp + 0x1c], 0 */
    _flag_a = (uint32_t)(MEM32(ebp + 0x1C)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    MEM32(ebp + (-0x8)) = ecx; /* 0x150327A7: mov dword ptr [ebp - 8], ecx */
    if (CMP_NE(_flag_a, _flag_b)) goto L_150327D1; /* 0x150327AA: jne 0x150327d1 */
L_150327AC:
    /* cmp ebx, MEM32(ebp + (-0x10)) */ /* 0x150327AC: cmp ebx, dword ptr [ebp - 0x10] */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(MEM32(ebp + (-0x10)));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_B(_flag_a, _flag_b)) goto L_150327D1; /* 0x150327AF: jb 0x150327d1 */
L_150327B1:
    if (CMP_NE(_flag_a, _flag_b)) goto L_150327BF; /* 0x150327B1: jne 0x150327bf */
L_150327B3:
    _flag_a = (uint32_t)((eax | 0xFFFFFFFFu)); _flag_b = (uint32_t)((eax | 0xFFFFFFFFu));
    eax = eax | 0xFFFFFFFFu; /* 0x150327B3: or eax, 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edx = 0; /* 0x150327B6: xor edx, edx */
    _cf = 0;
    _flag_k = FK_TEST;
    { uint64_t _dividend = ((uint64_t)edx << 32) | eax; uint32_t _dv = (uint32_t)edi; /* 0x150327B8: div edi */
      if (_dv) { eax = (uint32_t)(_dividend / _dv); edx = (uint32_t)(_dividend % _dv); }
      else { eax = 0; edx = 0; } }
    /* cmp MEM32(ebp + (-0xC)), edx */ /* 0x150327BA: cmp dword ptr [ebp - 0xc], edx */
    _flag_a = (uint32_t)(MEM32(ebp + (-0xC))); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_150327CE; /* 0x150327BD: jbe 0x150327ce */
L_150327BF:
    eax = MEM32(ebp + 0x10); /* 0x150327BF: mov eax, dword ptr [ebp + 0x10] */
    _flag_a = (uint32_t)((ecx | 4)); _flag_b = (uint32_t)((ecx | 4));
    ecx = ecx | 4; /* 0x150327C2: or ecx, 4 */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x8)) = ecx; /* 0x150327C5: mov dword ptr [ebp - 8], ecx */
    /* test eax, eax */ /* 0x150327C8: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_150327E7; /* 0x150327CA: je 0x150327e7 */
L_150327CC:
    goto L_150327D6; /* 0x150327CC: jmp 0x150327d6 */
L_150327CE:
    edx = MEM32(ebp + (-0xC)); /* 0x150327CE: mov edx, dword ptr [ebp - 0xc] */
L_150327D1:
    ebx = (uint32_t)((int32_t)ebx * (int32_t)edi); /* 0x150327D1: imul ebx, edi */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ebx = ebx + edx; /* 0x150327D4: add ebx, edx */
    _flag_k = FK_ADD;
L_150327D6:
    SET_LO8(ecx, MEM8(esi)); /* 0x150327D6: mov cl, byte ptr [esi] */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi + 1; /* 0x150327D8: inc esi */
    _flag_k = FK_INC;
    eax = MEM32(ebp + (-0x14)); /* 0x150327D9: mov eax, dword ptr [ebp - 0x14] */
    MEM8(ebp + (-0x1)) = (uint8_t)(LO8(ecx)); /* 0x150327DC: mov byte ptr [ebp - 1], cl */
    RECOMP_BACKEDGE();
    goto L_15032762; /* 0x150327DF: jmp 0x15032762 */
L_150327E1:
    ecx = MEM32(ebp + (-0x8)); /* 0x150327E1: mov ecx, dword ptr [ebp - 8] */
L_150327E4:
    eax = MEM32(ebp + 0x10); /* 0x150327E4: mov eax, dword ptr [ebp + 0x10] */
L_150327E7:
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi - 1; /* 0x150327E7: dec esi */
    _flag_k = FK_DEC;
    /* test LO8(ecx), 8 */ /* 0x150327E8: test cl, 8 */
    _flag_a = (uint32_t)(LO8(ecx)) << 24; _flag_b = (uint32_t)(8) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_150327F7; /* 0x150327EB: jne 0x150327f7 */
L_150327ED:
    /* test eax, eax */ /* 0x150327ED: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) { esi = MEM32(ebp + 0xC); } /* 0x150327EF: cmovne esi, dword ptr [ebp + 0xc] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ebx = 0; /* 0x150327F3: xor ebx, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_15032842; /* 0x150327F5: jmp 0x15032842 */
L_150327F7:
    edi = 0x7FFFFFFFu; /* 0x150327F7: mov edi, 0x7fffffff */
    /* test LO8(ecx), 4 */ /* 0x150327FC: test cl, 4 */
    _flag_a = (uint32_t)(LO8(ecx)) << 24; _flag_b = (uint32_t)(4) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_15032819; /* 0x150327FF: jne 0x15032819 */
L_15032801:
    /* test LO8(ecx), 1 */ /* 0x15032801: test cl, 1 */
    _flag_a = (uint32_t)(LO8(ecx)) << 24; _flag_b = (uint32_t)(1) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_15032842; /* 0x15032804: jne 0x15032842 */
L_15032806:
    /* test LO8(ecx), 2 */ /* 0x15032806: test cl, 2 */
    _flag_a = (uint32_t)(LO8(ecx)) << 24; _flag_b = (uint32_t)(2) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_15032815; /* 0x15032809: je 0x15032815 */
L_1503280B:
    /* cmp ebx, 0x80000000u */ /* 0x1503280B: cmp ebx, 0x80000000 */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(0x80000000u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_A(_flag_a, _flag_b)) goto L_15032819; /* 0x15032811: ja 0x15032819 */
L_15032813:
    goto L_15032842; /* 0x15032813: jmp 0x15032842 */
L_15032815:
    /* cmp ebx, edi */ /* 0x15032815: cmp ebx, edi */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_15032842; /* 0x15032817: jbe 0x15032842 */
L_15032819:
    /* cmp MEM32(ebp + 0x1C), 0 */ /* 0x15032819: cmp dword ptr [ebp + 0x1c], 0 */
    _flag_a = (uint32_t)(MEM32(ebp + 0x1C)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_15032842; /* 0x1503281D: jne 0x15032842 */
L_1503281F:
    RECOMP_CALL(sub_15036430); /* 0x1503281F: call 0x15036430 */
    RECOMP_FLAGS_IN();
    ecx = MEM32(ebp + (-0x8)); /* 0x15032824: mov ecx, dword ptr [ebp - 8] */
    MEM32(eax) = 0x22u; /* 0x15032827: mov dword ptr [eax], 0x22 */
    /* test LO8(ecx), 1 */ /* 0x1503282D: test cl, 1 */
    _flag_a = (uint32_t)(LO8(ecx)) << 24; _flag_b = (uint32_t)(1) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_15032837; /* 0x15032830: je 0x15032837 */
L_15032832:
    _flag_a = (uint32_t)((ebx | 0xFFFFFFFFu)); _flag_b = (uint32_t)((ebx | 0xFFFFFFFFu));
    ebx = ebx | 0xFFFFFFFFu; /* 0x15032832: or ebx, 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_15032842; /* 0x15032835: jmp 0x15032842 */
L_15032837:
    /* test LO8(ecx), 2 */ /* 0x15032837: test cl, 2 */
    _flag_a = (uint32_t)(LO8(ecx)) << 24; _flag_b = (uint32_t)(2) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    PUSH32(esp, 0); /* 0x1503283A: push 0 */
    ebx = POP32_VAL(esp); /* 0x1503283C: pop ebx */
    SET_LO8(ebx, (TEST_NZ(_flag_a, _flag_b)) ? 1 : 0); /* 0x1503283D: setne bl */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ebx = ebx + edi; /* 0x15032840: add ebx, edi */
    _flag_k = FK_ADD;
L_15032842:
    eax = MEM32(ebp + 0x10); /* 0x15032842: mov eax, dword ptr [ebp + 0x10] */
    /* test eax, eax */ /* 0x15032845: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1503284B; /* 0x15032847: je 0x1503284b */
L_15032849:
    MEM32(eax) = esi; /* 0x15032849: mov dword ptr [eax], esi */
L_1503284B:
    /* test LO8(ecx), 2 */ /* 0x1503284B: test cl, 2 */
    _flag_a = (uint32_t)(LO8(ecx)) << 24; _flag_b = (uint32_t)(2) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_15032862; /* 0x1503284E: je 0x15032862 */
L_15032850:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(ebx);
    _cf = (ebx) != 0;
    ebx = (uint32_t)(-(int32_t)ebx); /* 0x15032850: neg ebx */
    _flag_k = FK_CMP;
    goto L_15032862; /* 0x15032852: jmp 0x15032862 */
L_15032854:
    eax = MEM32(ebp + 0x10); /* 0x15032854: mov eax, dword ptr [ebp + 0x10] */
    /* test eax, eax */ /* 0x15032857: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_15032860; /* 0x15032859: je 0x15032860 */
L_1503285B:
    edx = MEM32(ebp + 0xC); /* 0x1503285B: mov edx, dword ptr [ebp + 0xc] */
    MEM32(eax) = edx; /* 0x1503285E: mov dword ptr [eax], edx */
L_15032860:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ebx = 0; /* 0x15032860: xor ebx, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
L_15032862:
    /* cmp MEM8(ebp + (-0x18)), 0 */ /* 0x15032862: cmp byte ptr [ebp - 0x18], 0 */
    _flag_a = (uint32_t)(MEM8(ebp + (-0x18))) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1503286F; /* 0x15032866: je 0x1503286f */
L_15032868:
    ecx = MEM32(ebp + (-0x1C)); /* 0x15032868: mov ecx, dword ptr [ebp - 0x1c] */
    _flag_a = (uint32_t)(MEM32(ecx + 0x70)); _flag_b = (uint32_t)(0xFFFFFFFDu);
    MEM32(ecx + 0x70) = MEM32(ecx + 0x70) & 0xFFFFFFFDu; /* 0x1503286B: and dword ptr [ecx + 0x70], 0xfffffffd */
    _cf = 0;
    _flag_k = FK_TEST;
L_1503286F:
    edi = POP32_VAL(esp); /* 0x1503286F: pop edi */
    esi = POP32_VAL(esp); /* 0x15032870: pop esi */
    eax = ebx; /* 0x15032871: mov eax, ebx */
    ebx = POP32_VAL(esp); /* 0x15032873: pop ebx */
    esp = ebp; ebp = POP32_VAL(esp); /* 0x15032874: leave  */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x15032875: ret  */
    RECOMP_REGS_OUT();
}

void sub_15032880(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x15032880u);

L_15032880:
    edi = edi; /* 0x15032880: mov edi, edi */
    PUSH32(esp, ebp); /* 0x15032882: push ebp */
    ebp = esp; /* 0x15032883: mov ebp, esp */
    PUSH32(esp, 0); /* 0x15032885: push 0 */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x15032887: push dword ptr [ebp + 0x10] */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x1503288A: push dword ptr [ebp + 0xc] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x1503288D: push dword ptr [ebp + 8] */
    PUSH32(esp, MEM32(ebp + 0x14)); /* 0x15032890: push dword ptr [ebp + 0x14] */
    RECOMP_CALL(sub_15032613); /* 0x15032893: call 0x15032613 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x14u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x14u; /* 0x15032898: add esp, 0x14 */
    _flag_k = FK_ADD;
    ebp = POP32_VAL(esp); /* 0x1503289B: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1503289C: ret  */
    RECOMP_REGS_OUT();
}

void sub_150328B0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x150328B0u);

L_150328B0:
    edi = edi; /* 0x150328B0: mov edi, edi */
    PUSH32(esp, ebp); /* 0x150328B2: push ebp */
    ebp = esp; /* 0x150328B3: mov ebp, esp */
    PUSH32(esp, 1); /* 0x150328B5: push 1 */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x150328B7: push dword ptr [ebp + 0x10] */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x150328BA: push dword ptr [ebp + 0xc] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x150328BD: push dword ptr [ebp + 8] */
    PUSH32(esp, MEM32(ebp + 0x14)); /* 0x150328C0: push dword ptr [ebp + 0x14] */
    RECOMP_CALL(sub_15032613); /* 0x150328C3: call 0x15032613 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x14u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x14u; /* 0x150328C8: add esp, 0x14 */
    _flag_k = FK_ADD;
    ebp = POP32_VAL(esp); /* 0x150328CB: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x150328CC: ret  */
    RECOMP_REGS_OUT();
}

void sub_150328E0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x150328E0u);

L_150328E0:
    edi = edi; /* 0x150328E0: mov edi, edi */
    PUSH32(esp, ebp); /* 0x150328E2: push ebp */
    ebp = esp; /* 0x150328E3: mov ebp, esp */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x150328E5: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, eax); /* 0x150328E7: push eax */
    PUSH32(esp, eax); /* 0x150328E8: push eax */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x150328E9: push dword ptr [ebp + 0x10] */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x150328EC: push dword ptr [ebp + 0xc] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x150328EF: push dword ptr [ebp + 8] */
    /* cmp MEM32(0x150BDBA0), eax */ /* 0x150328F2: cmp dword ptr [0x150bdba0], eax */
    _flag_a = (uint32_t)(MEM32(0x150BDBA0)); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_15032901; /* 0x150328F8: jne 0x15032901 */
L_150328FA:
    PUSH32(esp, 0x15001298u); /* 0x150328FA: push 0x15001298 */
    goto L_15032902; /* 0x150328FF: jmp 0x15032902 */
L_15032901:
    PUSH32(esp, eax); /* 0x15032901: push eax */
L_15032902:
    RECOMP_CALL(sub_15032639); /* 0x15032902: call 0x15032639 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x18u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x18u; /* 0x15032907: add esp, 0x18 */
    _flag_k = FK_ADD;
    ebp = POP32_VAL(esp); /* 0x1503290A: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1503290B: ret  */
    RECOMP_REGS_OUT();
}

void sub_15032912(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x15032912u);

L_15032912:
    edi = edi; /* 0x15032912: mov edi, edi */
    PUSH32(esp, ebp); /* 0x15032914: push ebp */
    ebp = esp; /* 0x15032915: mov ebp, esp */
    /* cmp MEM32(0x150BDBA0), 0 */ /* 0x15032917: cmp dword ptr [0x150bdba0], 0 */
    _flag_a = (uint32_t)(MEM32(0x150BDBA0)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    PUSH32(esp, MEM32(ebp + 0x14)); /* 0x1503291E: push dword ptr [ebp + 0x14] */
    PUSH32(esp, 0); /* 0x15032921: push 0 */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x15032923: push dword ptr [ebp + 0x10] */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x15032926: push dword ptr [ebp + 0xc] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x15032929: push dword ptr [ebp + 8] */
    if (CMP_NE(_flag_a, _flag_b)) goto L_15032935; /* 0x1503292C: jne 0x15032935 */
L_1503292E:
    PUSH32(esp, 0x15001298u); /* 0x1503292E: push 0x15001298 */
    goto L_15032937; /* 0x15032933: jmp 0x15032937 */
L_15032935:
    PUSH32(esp, 0); /* 0x15032935: push 0 */
L_15032937:
    RECOMP_CALL(sub_15032639); /* 0x15032937: call 0x15032639 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x18u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x18u; /* 0x1503293C: add esp, 0x18 */
    _flag_k = FK_ADD;
    ebp = POP32_VAL(esp); /* 0x1503293F: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x15032940: ret  */
    RECOMP_REGS_OUT();
}

void sub_15032950(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x15032950u);

L_15032950:
    edi = edi; /* 0x15032950: mov edi, edi */
    PUSH32(esp, ebp); /* 0x15032952: push ebp */
    ebp = esp; /* 0x15032953: mov ebp, esp */
    /* cmp MEM32(0x150BDBA0), 0 */ /* 0x15032955: cmp dword ptr [0x150bdba0], 0 */
    _flag_a = (uint32_t)(MEM32(0x150BDBA0)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    PUSH32(esp, 0); /* 0x1503295C: push 0 */
    PUSH32(esp, 1); /* 0x1503295E: push 1 */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x15032960: push dword ptr [ebp + 0x10] */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x15032963: push dword ptr [ebp + 0xc] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x15032966: push dword ptr [ebp + 8] */
    if (CMP_NE(_flag_a, _flag_b)) goto L_15032972; /* 0x15032969: jne 0x15032972 */
L_1503296B:
    PUSH32(esp, 0x15001298u); /* 0x1503296B: push 0x15001298 */
    goto L_15032974; /* 0x15032970: jmp 0x15032974 */
L_15032972:
    PUSH32(esp, 0); /* 0x15032972: push 0 */
L_15032974:
    RECOMP_CALL(sub_15032639); /* 0x15032974: call 0x15032639 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x18u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x18u; /* 0x15032979: add esp, 0x18 */
    _flag_k = FK_ADD;
    ebp = POP32_VAL(esp); /* 0x1503297C: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1503297D: ret  */
    RECOMP_REGS_OUT();
}

void sub_15032990(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x15032990u);

L_15032990:
    edi = edi; /* 0x15032990: mov edi, edi */
    PUSH32(esp, ebp); /* 0x15032992: push ebp */
    ebp = esp; /* 0x15032993: mov ebp, esp */
    edx = MEM32(ebp + 0x8); /* 0x15032995: mov edx, dword ptr [ebp + 8] */
    /* test edx, edx */ /* 0x15032998: test edx, edx */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(edx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_150329B8; /* 0x1503299A: jne 0x150329b8 */
L_1503299C:
    RECOMP_CALL(sub_15036430); /* 0x1503299C: call 0x15036430 */
    RECOMP_FLAGS_IN();
    MEM32(eax) = 0x16u; /* 0x150329A1: mov dword ptr [eax], 0x16 */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x150329A7: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, eax); /* 0x150329A9: push eax */
    PUSH32(esp, eax); /* 0x150329AA: push eax */
    PUSH32(esp, eax); /* 0x150329AB: push eax */
    PUSH32(esp, eax); /* 0x150329AC: push eax */
    PUSH32(esp, eax); /* 0x150329AD: push eax */
    RECOMP_CALL(sub_1505A110); /* 0x150329AE: call 0x1505a110 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x14u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x14u; /* 0x150329B3: add esp, 0x14 */
    _flag_k = FK_ADD;
    ebp = POP32_VAL(esp); /* 0x150329B6: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x150329B7: ret  */
L_150329B8:
    PUSH32(esp, esi); /* 0x150329B8: push esi */
    esi = MEM32(ebp + 0xC); /* 0x150329B9: mov esi, dword ptr [ebp + 0xc] */
    /* test esi, esi */ /* 0x150329BC: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_150329DC; /* 0x150329BE: jne 0x150329dc */
L_150329C0:
    RECOMP_CALL(sub_15036430); /* 0x150329C0: call 0x15036430 */
    RECOMP_FLAGS_IN();
    MEM32(eax) = 0x16u; /* 0x150329C5: mov dword ptr [eax], 0x16 */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x150329CB: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, eax); /* 0x150329CD: push eax */
    PUSH32(esp, eax); /* 0x150329CE: push eax */
    PUSH32(esp, eax); /* 0x150329CF: push eax */
    PUSH32(esp, eax); /* 0x150329D0: push eax */
    PUSH32(esp, eax); /* 0x150329D1: push eax */
    RECOMP_CALL(sub_1505A110); /* 0x150329D2: call 0x1505a110 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x14u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x14u; /* 0x150329D7: add esp, 0x14 */
    _flag_k = FK_ADD;
    goto L_15032A21; /* 0x150329DA: jmp 0x15032a21 */
L_150329DC:
    PUSH32(esp, edi); /* 0x150329DC: push edi */
    edi = MEM32(ebp + 0x10); /* 0x150329DD: mov edi, dword ptr [ebp + 0x10] */
    /* test edi, edi */ /* 0x150329E0: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) == 0u)) goto L_15032A00; /* 0x150329E2: jns 0x15032a00 */
L_150329E4:
    RECOMP_CALL(sub_15036430); /* 0x150329E4: call 0x15036430 */
    RECOMP_FLAGS_IN();
    MEM32(eax) = 0x16u; /* 0x150329E9: mov dword ptr [eax], 0x16 */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x150329EF: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, eax); /* 0x150329F1: push eax */
    PUSH32(esp, eax); /* 0x150329F2: push eax */
    PUSH32(esp, eax); /* 0x150329F3: push eax */
    PUSH32(esp, eax); /* 0x150329F4: push eax */
    PUSH32(esp, eax); /* 0x150329F5: push eax */
    RECOMP_CALL(sub_1505A110); /* 0x150329F6: call 0x1505a110 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x14u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x14u; /* 0x150329FB: add esp, 0x14 */
    _flag_k = FK_ADD;
    goto L_15032A20; /* 0x150329FE: jmp 0x15032a20 */
L_15032A00:
    /* cmp edi, 1 */ /* 0x15032A00: cmp edi, 1 */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(1);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_LE(_flag_a, _flag_b)) goto L_15032A20; /* 0x15032A03: jle 0x15032a20 */
L_15032A05:
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(0xFFFFFFFEu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edi = edi + 0xFFFFFFFEu; /* 0x15032A05: add edi, -2 */
    _flag_k = FK_ADD;
    if (1u) _cf = (((edi) >> 0) & 1u); /* 0x15032A08: shr edi, 1 */
    if (1u) { _flag_a = recomp_flags_pack((edi >> 1u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    edi = edi >> 1u; /* 0x15032A08: shr edi, 1 */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(1);
    edi = edi + 1; /* 0x15032A0A: inc edi */
    _flag_k = FK_INC;
L_15032A0B:
    SET_LO8(eax, MEM8(edx + 0x1)); /* 0x15032A0B: mov al, byte ptr [edx + 1] */
    SET_LO8(ecx, MEM8(edx)); /* 0x15032A0E: mov cl, byte ptr [edx] */
    edx = edx + 0x2; /* 0x15032A10: lea edx, [edx + 2] */
    MEM8(esi) = (uint8_t)(LO8(eax)); /* 0x15032A13: mov byte ptr [esi], al */
    esi = esi + 0x2; /* 0x15032A15: lea esi, [esi + 2] */
    MEM8(esi + (-0x1)) = (uint8_t)(LO8(ecx)); /* 0x15032A18: mov byte ptr [esi - 1], cl */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(1);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    edi = edi - 1; /* 0x15032A1B: sub edi, 1 */
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (/* sub result */ CMP_NE(_flag_a, _flag_b)) goto L_15032A0B; /* 0x15032A1E: jne 0x15032a0b */
L_15032A20:
    edi = POP32_VAL(esp); /* 0x15032A20: pop edi */
L_15032A21:
    esi = POP32_VAL(esp); /* 0x15032A21: pop esi */
    ebp = POP32_VAL(esp); /* 0x15032A22: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x15032A23: ret  */
    RECOMP_REGS_OUT();
}

void sub_15032A30(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x15032A30u);

L_15032A30:
    edi = edi; /* 0x15032A30: mov edi, edi */
    PUSH32(esp, ebp); /* 0x15032A32: push ebp */
    ebp = esp; /* 0x15032A33: mov ebp, esp */
    eax = MEM32(ebp + 0x8); /* 0x15032A35: mov eax, dword ptr [ebp + 8] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x20u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 0x20u; /* 0x15032A38: add eax, 0x20 */
    _flag_k = FK_ADD;
    ebp = POP32_VAL(esp); /* 0x15032A3B: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x15032A3C: ret  */
    RECOMP_REGS_OUT();
}

void sub_15032A50(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x15032A50u);

L_15032A50:
    edi = edi; /* 0x15032A50: mov edi, edi */
    PUSH32(esp, ebp); /* 0x15032A52: push ebp */
    ebp = esp; /* 0x15032A53: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x1Cu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x1Cu; /* 0x15032A55: sub esp, 0x1c */
    _flag_k = FK_CMP;
    ecx = ebp + (-0x1C); /* 0x15032A58: lea ecx, [ebp - 0x1c] */
    PUSH32(esp, ebx); /* 0x15032A5B: push ebx */
    PUSH32(esp, edi); /* 0x15032A5C: push edi */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x15032A5D: push dword ptr [ebp + 0xc] */
    RECOMP_CALL(sub_1502F870); /* 0x15032A60: call 0x1502f870 */
    RECOMP_FLAGS_IN();
    ebx = MEM32(ebp + 0x8); /* 0x15032A65: mov ebx, dword ptr [ebp + 8] */
    edi = 0x100u; /* 0x15032A68: mov edi, 0x100 */
    /* cmp ebx, edi */ /* 0x15032A6D: cmp ebx, edi */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_AE(_flag_a, _flag_b)) goto L_15032AD6; /* 0x15032A6F: jae 0x15032ad6 */
L_15032A71:
    ecx = MEM32(ebp + (-0x1C)); /* 0x15032A71: mov ecx, dword ptr [ebp - 0x1c] */
    /* cmp MEM32(ecx + 0xAC), 1 */ /* 0x15032A74: cmp dword ptr [ecx + 0xac], 1 */
    _flag_a = (uint32_t)(MEM32(ecx + 0xAC)); _flag_b = (uint32_t)(1);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_LE(_flag_a, _flag_b)) goto L_15032A91; /* 0x15032A7B: jle 0x15032a91 */
L_15032A7D:
    eax = ebp + (-0x1C); /* 0x15032A7D: lea eax, [ebp - 0x1c] */
    PUSH32(esp, eax); /* 0x15032A80: push eax */
    PUSH32(esp, 1); /* 0x15032A81: push 1 */
    PUSH32(esp, ebx); /* 0x15032A83: push ebx */
    RECOMP_CALL(sub_150305E0); /* 0x15032A84: call 0x150305e0 */
    RECOMP_FLAGS_IN();
    ecx = MEM32(ebp + (-0x1C)); /* 0x15032A89: mov ecx, dword ptr [ebp - 0x1c] */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x15032A8C: add esp, 0xc */
    _flag_k = FK_ADD;
    goto L_15032A9E; /* 0x15032A8F: jmp 0x15032a9e */
L_15032A91:
    eax = MEM32(ecx + 0xC8); /* 0x15032A91: mov eax, dword ptr [ecx + 0xc8] */
    eax = (uint32_t)MEM16(eax + ebx * 2); /* 0x15032A97: movzx eax, word ptr [eax + ebx*2] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax & 1; /* 0x15032A9B: and eax, 1 */
    _cf = 0;
    _flag_k = FK_TEST;
L_15032A9E:
    /* test eax, eax */ /* 0x15032A9E: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_15032AC0; /* 0x15032AA0: je 0x15032ac0 */
L_15032AA2:
    /* cmp MEM8(ebp + (-0x10)), 0 */ /* 0x15032AA2: cmp byte ptr [ebp - 0x10], 0 */
    _flag_a = (uint32_t)(MEM8(ebp + (-0x10))) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    eax = MEM32(ecx + 0xCC); /* 0x15032AA6: mov eax, dword ptr [ecx + 0xcc] */
    ecx = (uint32_t)MEM8(eax + ebx); /* 0x15032AAC: movzx ecx, byte ptr [eax + ebx] */
    if (CMP_EQ(_flag_a, _flag_b)) goto L_15032AB9; /* 0x15032AB0: je 0x15032ab9 */
L_15032AB2:
    eax = MEM32(ebp + (-0x14)); /* 0x15032AB2: mov eax, dword ptr [ebp - 0x14] */
    _flag_a = (uint32_t)(MEM32(eax + 0x70)); _flag_b = (uint32_t)(0xFFFFFFFDu);
    MEM32(eax + 0x70) = MEM32(eax + 0x70) & 0xFFFFFFFDu; /* 0x15032AB5: and dword ptr [eax + 0x70], 0xfffffffd */
    _cf = 0;
    _flag_k = FK_TEST;
L_15032AB9:
    eax = ecx; /* 0x15032AB9: mov eax, ecx */
    goto L_15032B8F; /* 0x15032ABB: jmp 0x15032b8f */
L_15032AC0:
    /* cmp MEM8(ebp + (-0x10)), 0 */ /* 0x15032AC0: cmp byte ptr [ebp - 0x10], 0 */
    _flag_a = (uint32_t)(MEM8(ebp + (-0x10))) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_15032B57; /* 0x15032AC4: je 0x15032b57 */
L_15032ACA:
    eax = MEM32(ebp + (-0x14)); /* 0x15032ACA: mov eax, dword ptr [ebp - 0x14] */
    _flag_a = (uint32_t)(MEM32(eax + 0x70)); _flag_b = (uint32_t)(0xFFFFFFFDu);
    MEM32(eax + 0x70) = MEM32(eax + 0x70) & 0xFFFFFFFDu; /* 0x15032ACD: and dword ptr [eax + 0x70], 0xfffffffd */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_15032B57; /* 0x15032AD1: jmp 0x15032b57 */
L_15032AD6:
    eax = MEM32(ebp + (-0x1C)); /* 0x15032AD6: mov eax, dword ptr [ebp - 0x1c] */
    /* cmp MEM32(eax + 0xAC), 1 */ /* 0x15032AD9: cmp dword ptr [eax + 0xac], 1 */
    _flag_a = (uint32_t)(MEM32(eax + 0xAC)); _flag_b = (uint32_t)(1);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_LE(_flag_a, _flag_b)) goto L_15032B0F; /* 0x15032AE0: jle 0x15032b0f */
L_15032AE2:
    eax = ebx; /* 0x15032AE2: mov eax, ebx */
    ecx = ebp + (-0x1C); /* 0x15032AE4: lea ecx, [ebp - 0x1c] */
    if (8u) _cf = (((eax) >> 7) & 1u); /* 0x15032AE7: sar eax, 8 */
    if (8u) { _flag_a = recomp_flags_pack(((uint32_t)((int32_t)eax >> 8u)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = (uint32_t)((int32_t)eax >> 8u);
    MEM32(ebp + (-0xC)) = eax; /* 0x15032AEA: mov dword ptr [ebp - 0xc], eax */
    PUSH32(esp, ecx); /* 0x15032AED: push ecx */
    eax = (uint32_t)LO8(eax); /* 0x15032AEE: movzx eax, al */
    PUSH32(esp, eax); /* 0x15032AF1: push eax */
    RECOMP_CALL(sub_15031550); /* 0x15032AF2: call 0x15031550 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x15032AF7: pop ecx */
    ecx = POP32_VAL(esp); /* 0x15032AF8: pop ecx */
    /* test eax, eax */ /* 0x15032AF9: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_15032B0F; /* 0x15032AFB: je 0x15032b0f */
L_15032AFD:
    eax = MEM32(ebp + (-0xC)); /* 0x15032AFD: mov eax, dword ptr [ebp - 0xc] */
    PUSH32(esp, 2); /* 0x15032B00: push 2 */
    MEM8(ebp + (-0x4)) = (uint8_t)(LO8(eax)); /* 0x15032B02: mov byte ptr [ebp - 4], al */
    MEM8(ebp + (-0x3)) = (uint8_t)(LO8(ebx)); /* 0x15032B05: mov byte ptr [ebp - 3], bl */
    MEM8(ebp + (-0x2)) = (uint8_t)(0); /* 0x15032B08: mov byte ptr [ebp - 2], 0 */
    ecx = POP32_VAL(esp); /* 0x15032B0C: pop ecx */
    goto L_15032B24; /* 0x15032B0D: jmp 0x15032b24 */
L_15032B0F:
    RECOMP_CALL(sub_15036430); /* 0x15032B0F: call 0x15036430 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x15032B14: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx + 1; /* 0x15032B16: inc ecx */
    _flag_k = FK_INC;
    MEM32(eax) = 0x2Au; /* 0x15032B17: mov dword ptr [eax], 0x2a */
    MEM8(ebp + (-0x4)) = (uint8_t)(LO8(ebx)); /* 0x15032B1D: mov byte ptr [ebp - 4], bl */
    MEM8(ebp + (-0x3)) = (uint8_t)(0); /* 0x15032B20: mov byte ptr [ebp - 3], 0 */
L_15032B24:
    eax = MEM32(ebp + (-0x1C)); /* 0x15032B24: mov eax, dword ptr [ebp - 0x1c] */
    edx = ebp + (-0x8); /* 0x15032B27: lea edx, [ebp - 8] */
    PUSH32(esp, 1); /* 0x15032B2A: push 1 */
    PUSH32(esp, MEM32(eax + 0x4)); /* 0x15032B2C: push dword ptr [eax + 4] */
    PUSH32(esp, 3); /* 0x15032B2F: push 3 */
    PUSH32(esp, edx); /* 0x15032B31: push edx */
    PUSH32(esp, ecx); /* 0x15032B32: push ecx */
    ecx = ebp + (-0x4); /* 0x15032B33: lea ecx, [ebp - 4] */
    PUSH32(esp, ecx); /* 0x15032B36: push ecx */
    PUSH32(esp, edi); /* 0x15032B37: push edi */
    PUSH32(esp, MEM32(eax + 0x14)); /* 0x15032B38: push dword ptr [eax + 0x14] */
    eax = ebp + (-0x1C); /* 0x15032B3B: lea eax, [ebp - 0x1c] */
    PUSH32(esp, eax); /* 0x15032B3E: push eax */
    RECOMP_CALL(sub_15058910); /* 0x15032B3F: call 0x15058910 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x24u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x24u; /* 0x15032B44: add esp, 0x24 */
    _flag_k = FK_ADD;
    /* test eax, eax */ /* 0x15032B47: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_15032B5B; /* 0x15032B49: jne 0x15032b5b */
L_15032B4B:
    /* cmp MEM8(ebp + (-0x10)), LO8(eax) */ /* 0x15032B4B: cmp byte ptr [ebp - 0x10], al */
    _flag_a = (uint32_t)(MEM8(ebp + (-0x10))) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_15032B57; /* 0x15032B4E: je 0x15032b57 */
L_15032B50:
    ecx = MEM32(ebp + (-0x14)); /* 0x15032B50: mov ecx, dword ptr [ebp - 0x14] */
    _flag_a = (uint32_t)(MEM32(ecx + 0x70)); _flag_b = (uint32_t)(0xFFFFFFFDu);
    MEM32(ecx + 0x70) = MEM32(ecx + 0x70) & 0xFFFFFFFDu; /* 0x15032B53: and dword ptr [ecx + 0x70], 0xfffffffd */
    _cf = 0;
    _flag_k = FK_TEST;
L_15032B57:
    eax = ebx; /* 0x15032B57: mov eax, ebx */
    goto L_15032B8F; /* 0x15032B59: jmp 0x15032b8f */
L_15032B5B:
    /* cmp eax, 1 */ /* 0x15032B5B: cmp eax, 1 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_15032B73; /* 0x15032B5E: jne 0x15032b73 */
L_15032B60:
    /* cmp MEM8(ebp + (-0x10)), 0 */ /* 0x15032B60: cmp byte ptr [ebp - 0x10], 0 */
    _flag_a = (uint32_t)(MEM8(ebp + (-0x10))) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    eax = (uint32_t)MEM8(ebp + (-0x8)); /* 0x15032B64: movzx eax, byte ptr [ebp - 8] */
    if (CMP_EQ(_flag_a, _flag_b)) goto L_15032B8F; /* 0x15032B68: je 0x15032b8f */
L_15032B6A:
    ecx = MEM32(ebp + (-0x14)); /* 0x15032B6A: mov ecx, dword ptr [ebp - 0x14] */
    _flag_a = (uint32_t)(MEM32(ecx + 0x70)); _flag_b = (uint32_t)(0xFFFFFFFDu);
    MEM32(ecx + 0x70) = MEM32(ecx + 0x70) & 0xFFFFFFFDu; /* 0x15032B6D: and dword ptr [ecx + 0x70], 0xfffffffd */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_15032B8F; /* 0x15032B71: jmp 0x15032b8f */
L_15032B73:
    edx = (uint32_t)MEM8(ebp + (-0x8)); /* 0x15032B73: movzx edx, byte ptr [ebp - 8] */
    eax = (uint32_t)MEM8(ebp + (-0x7)); /* 0x15032B77: movzx eax, byte ptr [ebp - 7] */
    if (8u) _cf = (((edx) >> 24) & 1u); /* 0x15032B7B: shl edx, 8 */
    if (8u) { _flag_a = recomp_flags_pack((edx << 8u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    edx = edx << 8u; /* 0x15032B7B: shl edx, 8 */
    _flag_a = (uint32_t)((edx | eax)); _flag_b = (uint32_t)((edx | eax));
    edx = edx | eax; /* 0x15032B7E: or edx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp MEM8(ebp + (-0x10)), 0 */ /* 0x15032B80: cmp byte ptr [ebp - 0x10], 0 */
    _flag_a = (uint32_t)(MEM8(ebp + (-0x10))) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_15032B8D; /* 0x15032B84: je 0x15032b8d */
L_15032B86:
    ecx = MEM32(ebp + (-0x14)); /* 0x15032B86: mov ecx, dword ptr [ebp - 0x14] */
    _flag_a = (uint32_t)(MEM32(ecx + 0x70)); _flag_b = (uint32_t)(0xFFFFFFFDu);
    MEM32(ecx + 0x70) = MEM32(ecx + 0x70) & 0xFFFFFFFDu; /* 0x15032B89: and dword ptr [ecx + 0x70], 0xfffffffd */
    _cf = 0;
    _flag_k = FK_TEST;
L_15032B8D:
    eax = edx; /* 0x15032B8D: mov eax, edx */
L_15032B8F:
    edi = POP32_VAL(esp); /* 0x15032B8F: pop edi */
    ebx = POP32_VAL(esp); /* 0x15032B90: pop ebx */
    esp = ebp; ebp = POP32_VAL(esp); /* 0x15032B91: leave  */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x15032B92: ret  */
    RECOMP_REGS_OUT();
}

void sub_15032BA0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x15032BA0u);

L_15032BA0:
    edi = edi; /* 0x15032BA0: mov edi, edi */
    PUSH32(esp, ebp); /* 0x15032BA2: push ebp */
    ebp = esp; /* 0x15032BA3: mov ebp, esp */
    /* cmp MEM32(0x150BDBA0), 0 */ /* 0x15032BA5: cmp dword ptr [0x150bdba0], 0 */
    _flag_a = (uint32_t)(MEM32(0x150BDBA0)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    edx = MEM32(ebp + 0x8); /* 0x15032BAC: mov edx, dword ptr [ebp + 8] */
    if (CMP_NE(_flag_a, _flag_b)) goto L_15032BBF; /* 0x15032BAF: jne 0x15032bbf */
L_15032BB1:
    ecx = edx + (-0x41); /* 0x15032BB1: lea ecx, [edx - 0x41] */
    /* cmp ecx, 0x19u */ /* 0x15032BB4: cmp ecx, 0x19 */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x19u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    eax = edx + 0x20; /* 0x15032BB7: lea eax, [edx + 0x20] */
    if (CMP_A(_flag_a, _flag_b)) { eax = edx; } /* 0x15032BBA: cmova eax, edx */
    ebp = POP32_VAL(esp); /* 0x15032BBD: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x15032BBE: ret  */
L_15032BBF:
    PUSH32(esp, 0); /* 0x15032BBF: push 0 */
    PUSH32(esp, edx); /* 0x15032BC1: push edx */
    RECOMP_CALL(sub_15032A50); /* 0x15032BC2: call 0x15032a50 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x15032BC7: pop ecx */
    ecx = POP32_VAL(esp); /* 0x15032BC8: pop ecx */
    ebp = POP32_VAL(esp); /* 0x15032BC9: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x15032BCA: ret  */
    RECOMP_REGS_OUT();
}

void sub_15032BE0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x15032BE0u);

L_15032BE0:
    edi = edi; /* 0x15032BE0: mov edi, edi */
    PUSH32(esp, ebp); /* 0x15032BE2: push ebp */
    ebp = esp; /* 0x15032BE3: mov ebp, esp */
    eax = MEM32(ebp + 0x8); /* 0x15032BE5: mov eax, dword ptr [ebp + 8] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xFFFFFFE0u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 0xFFFFFFE0u; /* 0x15032BE8: add eax, -0x20 */
    _flag_k = FK_ADD;
    ebp = POP32_VAL(esp); /* 0x15032BEB: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x15032BEC: ret  */
    RECOMP_REGS_OUT();
}

void sub_15032C00(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x15032C00u);

L_15032C00:
    edi = edi; /* 0x15032C00: mov edi, edi */
    PUSH32(esp, ebp); /* 0x15032C02: push ebp */
    ebp = esp; /* 0x15032C03: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x1Cu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x1Cu; /* 0x15032C05: sub esp, 0x1c */
    _flag_k = FK_CMP;
    ecx = ebp + (-0x1C); /* 0x15032C08: lea ecx, [ebp - 0x1c] */
    PUSH32(esp, ebx); /* 0x15032C0B: push ebx */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x15032C0C: push dword ptr [ebp + 0xc] */
    RECOMP_CALL(sub_1502F870); /* 0x15032C0F: call 0x1502f870 */
    RECOMP_FLAGS_IN();
    ebx = MEM32(ebp + 0x8); /* 0x15032C14: mov ebx, dword ptr [ebp + 8] */
    /* cmp ebx, 0x100u */ /* 0x15032C17: cmp ebx, 0x100 */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(0x100u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_AE(_flag_a, _flag_b)) goto L_15032C84; /* 0x15032C1D: jae 0x15032c84 */
L_15032C1F:
    ecx = MEM32(ebp + (-0x1C)); /* 0x15032C1F: mov ecx, dword ptr [ebp - 0x1c] */
    /* cmp MEM32(ecx + 0xAC), 1 */ /* 0x15032C22: cmp dword ptr [ecx + 0xac], 1 */
    _flag_a = (uint32_t)(MEM32(ecx + 0xAC)); _flag_b = (uint32_t)(1);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_LE(_flag_a, _flag_b)) goto L_15032C3F; /* 0x15032C29: jle 0x15032c3f */
L_15032C2B:
    eax = ebp + (-0x1C); /* 0x15032C2B: lea eax, [ebp - 0x1c] */
    PUSH32(esp, eax); /* 0x15032C2E: push eax */
    PUSH32(esp, 2); /* 0x15032C2F: push 2 */
    PUSH32(esp, ebx); /* 0x15032C31: push ebx */
    RECOMP_CALL(sub_150305E0); /* 0x15032C32: call 0x150305e0 */
    RECOMP_FLAGS_IN();
    ecx = MEM32(ebp + (-0x1C)); /* 0x15032C37: mov ecx, dword ptr [ebp - 0x1c] */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x15032C3A: add esp, 0xc */
    _flag_k = FK_ADD;
    goto L_15032C4C; /* 0x15032C3D: jmp 0x15032c4c */
L_15032C3F:
    eax = MEM32(ecx + 0xC8); /* 0x15032C3F: mov eax, dword ptr [ecx + 0xc8] */
    eax = (uint32_t)MEM16(eax + ebx * 2); /* 0x15032C45: movzx eax, word ptr [eax + ebx*2] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(2);
    eax = eax & 2; /* 0x15032C49: and eax, 2 */
    _cf = 0;
    _flag_k = FK_TEST;
L_15032C4C:
    /* test eax, eax */ /* 0x15032C4C: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_15032C6E; /* 0x15032C4E: je 0x15032c6e */
L_15032C50:
    /* cmp MEM8(ebp + (-0x10)), 0 */ /* 0x15032C50: cmp byte ptr [ebp - 0x10], 0 */
    _flag_a = (uint32_t)(MEM8(ebp + (-0x10))) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    eax = MEM32(ecx + 0xD0); /* 0x15032C54: mov eax, dword ptr [ecx + 0xd0] */
    ecx = (uint32_t)MEM8(eax + ebx); /* 0x15032C5A: movzx ecx, byte ptr [eax + ebx] */
    if (CMP_EQ(_flag_a, _flag_b)) goto L_15032C67; /* 0x15032C5E: je 0x15032c67 */
L_15032C60:
    eax = MEM32(ebp + (-0x14)); /* 0x15032C60: mov eax, dword ptr [ebp - 0x14] */
    _flag_a = (uint32_t)(MEM32(eax + 0x70)); _flag_b = (uint32_t)(0xFFFFFFFDu);
    MEM32(eax + 0x70) = MEM32(eax + 0x70) & 0xFFFFFFFDu; /* 0x15032C63: and dword ptr [eax + 0x70], 0xfffffffd */
    _cf = 0;
    _flag_k = FK_TEST;
L_15032C67:
    eax = ecx; /* 0x15032C67: mov eax, ecx */
    goto L_15032D41; /* 0x15032C69: jmp 0x15032d41 */
L_15032C6E:
    /* cmp MEM8(ebp + (-0x10)), 0 */ /* 0x15032C6E: cmp byte ptr [ebp - 0x10], 0 */
    _flag_a = (uint32_t)(MEM8(ebp + (-0x10))) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_15032D09; /* 0x15032C72: je 0x15032d09 */
L_15032C78:
    eax = MEM32(ebp + (-0x14)); /* 0x15032C78: mov eax, dword ptr [ebp - 0x14] */
    _flag_a = (uint32_t)(MEM32(eax + 0x70)); _flag_b = (uint32_t)(0xFFFFFFFDu);
    MEM32(eax + 0x70) = MEM32(eax + 0x70) & 0xFFFFFFFDu; /* 0x15032C7B: and dword ptr [eax + 0x70], 0xfffffffd */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_15032D09; /* 0x15032C7F: jmp 0x15032d09 */
L_15032C84:
    eax = MEM32(ebp + (-0x1C)); /* 0x15032C84: mov eax, dword ptr [ebp - 0x1c] */
    /* cmp MEM32(eax + 0xAC), 1 */ /* 0x15032C87: cmp dword ptr [eax + 0xac], 1 */
    _flag_a = (uint32_t)(MEM32(eax + 0xAC)); _flag_b = (uint32_t)(1);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_LE(_flag_a, _flag_b)) goto L_15032CBD; /* 0x15032C8E: jle 0x15032cbd */
L_15032C90:
    eax = ebx; /* 0x15032C90: mov eax, ebx */
    ecx = ebp + (-0x1C); /* 0x15032C92: lea ecx, [ebp - 0x1c] */
    if (8u) _cf = (((eax) >> 7) & 1u); /* 0x15032C95: sar eax, 8 */
    if (8u) { _flag_a = recomp_flags_pack(((uint32_t)((int32_t)eax >> 8u)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = (uint32_t)((int32_t)eax >> 8u);
    MEM32(ebp + (-0xC)) = eax; /* 0x15032C98: mov dword ptr [ebp - 0xc], eax */
    PUSH32(esp, ecx); /* 0x15032C9B: push ecx */
    eax = (uint32_t)LO8(eax); /* 0x15032C9C: movzx eax, al */
    PUSH32(esp, eax); /* 0x15032C9F: push eax */
    RECOMP_CALL(sub_15031550); /* 0x15032CA0: call 0x15031550 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x15032CA5: pop ecx */
    ecx = POP32_VAL(esp); /* 0x15032CA6: pop ecx */
    /* test eax, eax */ /* 0x15032CA7: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_15032CBD; /* 0x15032CA9: je 0x15032cbd */
L_15032CAB:
    eax = MEM32(ebp + (-0xC)); /* 0x15032CAB: mov eax, dword ptr [ebp - 0xc] */
    PUSH32(esp, 2); /* 0x15032CAE: push 2 */
    MEM8(ebp + (-0x4)) = (uint8_t)(LO8(eax)); /* 0x15032CB0: mov byte ptr [ebp - 4], al */
    MEM8(ebp + (-0x3)) = (uint8_t)(LO8(ebx)); /* 0x15032CB3: mov byte ptr [ebp - 3], bl */
    MEM8(ebp + (-0x2)) = (uint8_t)(0); /* 0x15032CB6: mov byte ptr [ebp - 2], 0 */
    ecx = POP32_VAL(esp); /* 0x15032CBA: pop ecx */
    goto L_15032CD2; /* 0x15032CBB: jmp 0x15032cd2 */
L_15032CBD:
    RECOMP_CALL(sub_15036430); /* 0x15032CBD: call 0x15036430 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x15032CC2: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx + 1; /* 0x15032CC4: inc ecx */
    _flag_k = FK_INC;
    MEM32(eax) = 0x2Au; /* 0x15032CC5: mov dword ptr [eax], 0x2a */
    MEM8(ebp + (-0x4)) = (uint8_t)(LO8(ebx)); /* 0x15032CCB: mov byte ptr [ebp - 4], bl */
    MEM8(ebp + (-0x3)) = (uint8_t)(0); /* 0x15032CCE: mov byte ptr [ebp - 3], 0 */
L_15032CD2:
    eax = MEM32(ebp + (-0x1C)); /* 0x15032CD2: mov eax, dword ptr [ebp - 0x1c] */
    edx = ebp + (-0x8); /* 0x15032CD5: lea edx, [ebp - 8] */
    PUSH32(esp, 1); /* 0x15032CD8: push 1 */
    PUSH32(esp, MEM32(eax + 0x4)); /* 0x15032CDA: push dword ptr [eax + 4] */
    PUSH32(esp, 3); /* 0x15032CDD: push 3 */
    PUSH32(esp, edx); /* 0x15032CDF: push edx */
    PUSH32(esp, ecx); /* 0x15032CE0: push ecx */
    ecx = ebp + (-0x4); /* 0x15032CE1: lea ecx, [ebp - 4] */
    PUSH32(esp, ecx); /* 0x15032CE4: push ecx */
    PUSH32(esp, 0x200u); /* 0x15032CE5: push 0x200 */
    PUSH32(esp, MEM32(eax + 0x14)); /* 0x15032CEA: push dword ptr [eax + 0x14] */
    eax = ebp + (-0x1C); /* 0x15032CED: lea eax, [ebp - 0x1c] */
    PUSH32(esp, eax); /* 0x15032CF0: push eax */
    RECOMP_CALL(sub_15058910); /* 0x15032CF1: call 0x15058910 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x24u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x24u; /* 0x15032CF6: add esp, 0x24 */
    _flag_k = FK_ADD;
    /* test eax, eax */ /* 0x15032CF9: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_15032D0D; /* 0x15032CFB: jne 0x15032d0d */
L_15032CFD:
    /* cmp MEM8(ebp + (-0x10)), LO8(eax) */ /* 0x15032CFD: cmp byte ptr [ebp - 0x10], al */
    _flag_a = (uint32_t)(MEM8(ebp + (-0x10))) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_15032D09; /* 0x15032D00: je 0x15032d09 */
L_15032D02:
    ecx = MEM32(ebp + (-0x14)); /* 0x15032D02: mov ecx, dword ptr [ebp - 0x14] */
    _flag_a = (uint32_t)(MEM32(ecx + 0x70)); _flag_b = (uint32_t)(0xFFFFFFFDu);
    MEM32(ecx + 0x70) = MEM32(ecx + 0x70) & 0xFFFFFFFDu; /* 0x15032D05: and dword ptr [ecx + 0x70], 0xfffffffd */
    _cf = 0;
    _flag_k = FK_TEST;
L_15032D09:
    eax = ebx; /* 0x15032D09: mov eax, ebx */
    goto L_15032D41; /* 0x15032D0B: jmp 0x15032d41 */
L_15032D0D:
    /* cmp eax, 1 */ /* 0x15032D0D: cmp eax, 1 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_15032D25; /* 0x15032D10: jne 0x15032d25 */
L_15032D12:
    /* cmp MEM8(ebp + (-0x10)), 0 */ /* 0x15032D12: cmp byte ptr [ebp - 0x10], 0 */
    _flag_a = (uint32_t)(MEM8(ebp + (-0x10))) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    eax = (uint32_t)MEM8(ebp + (-0x8)); /* 0x15032D16: movzx eax, byte ptr [ebp - 8] */
    if (CMP_EQ(_flag_a, _flag_b)) goto L_15032D41; /* 0x15032D1A: je 0x15032d41 */
L_15032D1C:
    ecx = MEM32(ebp + (-0x14)); /* 0x15032D1C: mov ecx, dword ptr [ebp - 0x14] */
    _flag_a = (uint32_t)(MEM32(ecx + 0x70)); _flag_b = (uint32_t)(0xFFFFFFFDu);
    MEM32(ecx + 0x70) = MEM32(ecx + 0x70) & 0xFFFFFFFDu; /* 0x15032D1F: and dword ptr [ecx + 0x70], 0xfffffffd */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_15032D41; /* 0x15032D23: jmp 0x15032d41 */
L_15032D25:
    edx = (uint32_t)MEM8(ebp + (-0x8)); /* 0x15032D25: movzx edx, byte ptr [ebp - 8] */
    eax = (uint32_t)MEM8(ebp + (-0x7)); /* 0x15032D29: movzx eax, byte ptr [ebp - 7] */
    if (8u) _cf = (((edx) >> 24) & 1u); /* 0x15032D2D: shl edx, 8 */
    if (8u) { _flag_a = recomp_flags_pack((edx << 8u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    edx = edx << 8u; /* 0x15032D2D: shl edx, 8 */
    _flag_a = (uint32_t)((edx | eax)); _flag_b = (uint32_t)((edx | eax));
    edx = edx | eax; /* 0x15032D30: or edx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp MEM8(ebp + (-0x10)), 0 */ /* 0x15032D32: cmp byte ptr [ebp - 0x10], 0 */
    _flag_a = (uint32_t)(MEM8(ebp + (-0x10))) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_15032D3F; /* 0x15032D36: je 0x15032d3f */
L_15032D38:
    ecx = MEM32(ebp + (-0x14)); /* 0x15032D38: mov ecx, dword ptr [ebp - 0x14] */
    _flag_a = (uint32_t)(MEM32(ecx + 0x70)); _flag_b = (uint32_t)(0xFFFFFFFDu);
    MEM32(ecx + 0x70) = MEM32(ecx + 0x70) & 0xFFFFFFFDu; /* 0x15032D3B: and dword ptr [ecx + 0x70], 0xfffffffd */
    _cf = 0;
    _flag_k = FK_TEST;
L_15032D3F:
    eax = edx; /* 0x15032D3F: mov eax, edx */
L_15032D41:
    ebx = POP32_VAL(esp); /* 0x15032D41: pop ebx */
    esp = ebp; ebp = POP32_VAL(esp); /* 0x15032D42: leave  */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x15032D43: ret  */
    RECOMP_REGS_OUT();
}

void sub_15032D50(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x15032D50u);

L_15032D50:
    edi = edi; /* 0x15032D50: mov edi, edi */
    PUSH32(esp, ebp); /* 0x15032D52: push ebp */
    ebp = esp; /* 0x15032D53: mov ebp, esp */
    /* cmp MEM32(0x150BDBA0), 0 */ /* 0x15032D55: cmp dword ptr [0x150bdba0], 0 */
    _flag_a = (uint32_t)(MEM32(0x150BDBA0)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    edx = MEM32(ebp + 0x8); /* 0x15032D5C: mov edx, dword ptr [ebp + 8] */
    if (CMP_NE(_flag_a, _flag_b)) goto L_15032D6F; /* 0x15032D5F: jne 0x15032d6f */
L_15032D61:
    ecx = edx + (-0x61); /* 0x15032D61: lea ecx, [edx - 0x61] */
    /* cmp ecx, 0x19u */ /* 0x15032D64: cmp ecx, 0x19 */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x19u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    eax = edx + (-0x20); /* 0x15032D67: lea eax, [edx - 0x20] */
    if (CMP_A(_flag_a, _flag_b)) { eax = edx; } /* 0x15032D6A: cmova eax, edx */
    ebp = POP32_VAL(esp); /* 0x15032D6D: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x15032D6E: ret  */
L_15032D6F:
    PUSH32(esp, 0); /* 0x15032D6F: push 0 */
    PUSH32(esp, edx); /* 0x15032D71: push edx */
    RECOMP_CALL(sub_15032C00); /* 0x15032D72: call 0x15032c00 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x15032D77: pop ecx */
    ecx = POP32_VAL(esp); /* 0x15032D78: pop ecx */
    ebp = POP32_VAL(esp); /* 0x15032D79: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x15032D7A: ret  */
    RECOMP_REGS_OUT();
}

void sub_15032D90(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x15032D90u);

L_15032D90:
    edi = edi; /* 0x15032D90: mov edi, edi */
    PUSH32(esp, ebp); /* 0x15032D92: push ebp */
    ebp = esp; /* 0x15032D93: mov ebp, esp */
    eax = 0xFFFFu; /* 0x15032D95: mov eax, 0xffff */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x14u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x14u; /* 0x15032D9A: sub esp, 0x14 */
    _flag_k = FK_CMP;
    /* cmp MEM16(ebp + 0x8), LO16(eax) */ /* 0x15032D9D: cmp word ptr [ebp + 8], ax */
    _flag_a = (uint32_t)(MEM16(ebp + 0x8)) << 16; _flag_b = (uint32_t)(LO16(eax)) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_15032E4F; /* 0x15032DA1: je 0x15032e4f */
L_15032DA7:
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x15032DA7: push dword ptr [ebp + 0xc] */
    ecx = ebp + (-0x14); /* 0x15032DAA: lea ecx, [ebp - 0x14] */
    RECOMP_CALL(sub_1502F870); /* 0x15032DAD: call 0x1502f870 */
    RECOMP_FLAGS_IN();
    eax = MEM32(ebp + (-0x14)); /* 0x15032DB2: mov eax, dword ptr [ebp - 0x14] */
    /* cmp MEM32(eax + 0x14), 0 */ /* 0x15032DB5: cmp dword ptr [eax + 0x14], 0 */
    _flag_a = (uint32_t)(MEM32(eax + 0x14)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_15032DD3; /* 0x15032DB9: jne 0x15032dd3 */
L_15032DBB:
    ecx = MEM32(ebp + 0x8); /* 0x15032DBB: mov ecx, dword ptr [ebp + 8] */
    eax = ecx + (-0x41); /* 0x15032DBE: lea eax, [ecx - 0x41] */
    /* cmp LO16(eax), 0x19u */ /* 0x15032DC1: cmp ax, 0x19 */
    _flag_a = (uint32_t)(LO16(eax)) << 16; _flag_b = (uint32_t)(0x19u) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    if (CMP_A(_flag_a, _flag_b)) goto L_15032DCB; /* 0x15032DC5: ja 0x15032dcb */
L_15032DC7:
    _flag_a = (uint32_t)(LO16(ecx)) << 16; _flag_b = (uint32_t)(0x20u) << 16;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    SET_LO16(ecx, LO16(ecx) + 0x20u); /* 0x15032DC7: add cx, 0x20 */
    _flag_k = FK_NARROW(FK_ADD, 16);
L_15032DCB:
    eax = (uint32_t)LO16(ecx); /* 0x15032DCB: movzx eax, cx */
    eax = (uint32_t)LO16(eax); /* 0x15032DCE: movzx eax, ax */
    goto L_15032DF7; /* 0x15032DD1: jmp 0x15032df7 */
L_15032DD3:
    edx = 0x100u; /* 0x15032DD3: mov edx, 0x100 */
    /* cmp MEM16(ebp + 0x8), LO16(edx) */ /* 0x15032DD8: cmp word ptr [ebp + 8], dx */
    _flag_a = (uint32_t)(MEM16(ebp + 0x8)) << 16; _flag_b = (uint32_t)(LO16(edx)) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    if (CMP_AE(_flag_a, _flag_b)) goto L_15032E12; /* 0x15032DDC: jae 0x15032e12 */
L_15032DDE:
    eax = ebp + (-0x14); /* 0x15032DDE: lea eax, [ebp - 0x14] */
    PUSH32(esp, eax); /* 0x15032DE1: push eax */
    PUSH32(esp, 1); /* 0x15032DE2: push 1 */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x15032DE4: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_15031890); /* 0x15032DE7: call 0x15031890 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x15032DEC: add esp, 0xc */
    _flag_k = FK_ADD;
    /* test eax, eax */ /* 0x15032DEF: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_15032DFC; /* 0x15032DF1: jne 0x15032dfc */
L_15032DF3:
    eax = (uint32_t)MEM16(ebp + 0x8); /* 0x15032DF3: movzx eax, word ptr [ebp + 8] */
L_15032DF7:
    eax = (uint32_t)LO16(eax); /* 0x15032DF7: movzx eax, ax */
    goto L_15032E0D; /* 0x15032DFA: jmp 0x15032e0d */
L_15032DFC:
    eax = MEM32(ebp + (-0x14)); /* 0x15032DFC: mov eax, dword ptr [ebp - 0x14] */
    ecx = (uint32_t)MEM16(ebp + 0x8); /* 0x15032DFF: movzx ecx, word ptr [ebp + 8] */
    eax = MEM32(eax + 0xCC); /* 0x15032E03: mov eax, dword ptr [eax + 0xcc] */
    eax = (uint32_t)MEM8(eax + ecx); /* 0x15032E09: movzx eax, byte ptr [eax + ecx] */
L_15032E0D:
    eax = (uint32_t)LO16(eax); /* 0x15032E0D: movzx eax, ax */
    goto L_15032E39; /* 0x15032E10: jmp 0x15032e39 */
L_15032E12:
    PUSH32(esp, MEM32(eax + 0x4)); /* 0x15032E12: push dword ptr [eax + 4] */
    ecx = ebp + (-0x4); /* 0x15032E15: lea ecx, [ebp - 4] */
    PUSH32(esp, 1); /* 0x15032E18: push 1 */
    PUSH32(esp, ecx); /* 0x15032E1A: push ecx */
    PUSH32(esp, 1); /* 0x15032E1B: push 1 */
    ecx = ebp + 0x8; /* 0x15032E1D: lea ecx, [ebp + 8] */
    PUSH32(esp, ecx); /* 0x15032E20: push ecx */
    PUSH32(esp, edx); /* 0x15032E21: push edx */
    PUSH32(esp, MEM32(eax + 0x14)); /* 0x15032E22: push dword ptr [eax + 0x14] */
    eax = ebp + (-0x14); /* 0x15032E25: lea eax, [ebp - 0x14] */
    PUSH32(esp, eax); /* 0x15032E28: push eax */
    RECOMP_CALL(sub_15058960); /* 0x15032E29: call 0x15058960 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x20u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x20u; /* 0x15032E2E: add esp, 0x20 */
    _flag_k = FK_ADD;
    /* test eax, eax */ /* 0x15032E31: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_15032E3E; /* 0x15032E33: jne 0x15032e3e */
L_15032E35:
    eax = (uint32_t)MEM16(ebp + 0x8); /* 0x15032E35: movzx eax, word ptr [ebp + 8] */
L_15032E39:
    eax = (uint32_t)LO16(eax); /* 0x15032E39: movzx eax, ax */
    goto L_15032E42; /* 0x15032E3C: jmp 0x15032e42 */
L_15032E3E:
    eax = (uint32_t)MEM16(ebp + (-0x4)); /* 0x15032E3E: movzx eax, word ptr [ebp - 4] */
L_15032E42:
    /* cmp MEM8(ebp + (-0x8)), 0 */ /* 0x15032E42: cmp byte ptr [ebp - 8], 0 */
    _flag_a = (uint32_t)(MEM8(ebp + (-0x8))) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_15032E4F; /* 0x15032E46: je 0x15032e4f */
L_15032E48:
    ecx = MEM32(ebp + (-0xC)); /* 0x15032E48: mov ecx, dword ptr [ebp - 0xc] */
    _flag_a = (uint32_t)(MEM32(ecx + 0x70)); _flag_b = (uint32_t)(0xFFFFFFFDu);
    MEM32(ecx + 0x70) = MEM32(ecx + 0x70) & 0xFFFFFFFDu; /* 0x15032E4B: and dword ptr [ecx + 0x70], 0xfffffffd */
    _cf = 0;
    _flag_k = FK_TEST;
L_15032E4F:
    esp = ebp; ebp = POP32_VAL(esp); /* 0x15032E4F: leave  */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x15032E50: ret  */
    RECOMP_REGS_OUT();
}

void sub_15032E60(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x15032E60u);

L_15032E60:
    edi = edi; /* 0x15032E60: mov edi, edi */
    PUSH32(esp, ebp); /* 0x15032E62: push ebp */
    ebp = esp; /* 0x15032E63: mov ebp, esp */
    PUSH32(esp, 0); /* 0x15032E65: push 0 */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x15032E67: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_15032D90); /* 0x15032E6A: call 0x15032d90 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x15032E6F: pop ecx */
    ecx = POP32_VAL(esp); /* 0x15032E70: pop ecx */
    ebp = POP32_VAL(esp); /* 0x15032E71: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x15032E72: ret  */
    RECOMP_REGS_OUT();
}

void sub_15032E80(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x15032E80u);

L_15032E80:
    edi = edi; /* 0x15032E80: mov edi, edi */
    PUSH32(esp, ebp); /* 0x15032E82: push ebp */
    ebp = esp; /* 0x15032E83: mov ebp, esp */
    eax = 0xFFFFu; /* 0x15032E85: mov eax, 0xffff */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x14u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x14u; /* 0x15032E8A: sub esp, 0x14 */
    _flag_k = FK_CMP;
    /* cmp MEM16(ebp + 0x8), LO16(eax) */ /* 0x15032E8D: cmp word ptr [ebp + 8], ax */
    _flag_a = (uint32_t)(MEM16(ebp + 0x8)) << 16; _flag_b = (uint32_t)(LO16(eax)) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_15032F43; /* 0x15032E91: je 0x15032f43 */
L_15032E97:
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x15032E97: push dword ptr [ebp + 0xc] */
    ecx = ebp + (-0x14); /* 0x15032E9A: lea ecx, [ebp - 0x14] */
    RECOMP_CALL(sub_1502F870); /* 0x15032E9D: call 0x1502f870 */
    RECOMP_FLAGS_IN();
    eax = MEM32(ebp + (-0x14)); /* 0x15032EA2: mov eax, dword ptr [ebp - 0x14] */
    /* cmp MEM32(eax + 0x14), 0 */ /* 0x15032EA5: cmp dword ptr [eax + 0x14], 0 */
    _flag_a = (uint32_t)(MEM32(eax + 0x14)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_15032EC3; /* 0x15032EA9: jne 0x15032ec3 */
L_15032EAB:
    ecx = MEM32(ebp + 0x8); /* 0x15032EAB: mov ecx, dword ptr [ebp + 8] */
    eax = ecx + (-0x61); /* 0x15032EAE: lea eax, [ecx - 0x61] */
    /* cmp LO16(eax), 0x19u */ /* 0x15032EB1: cmp ax, 0x19 */
    _flag_a = (uint32_t)(LO16(eax)) << 16; _flag_b = (uint32_t)(0x19u) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    if (CMP_A(_flag_a, _flag_b)) goto L_15032EBB; /* 0x15032EB5: ja 0x15032ebb */
L_15032EB7:
    _flag_a = (uint32_t)(LO16(ecx)) << 16; _flag_b = (uint32_t)(0x20u) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    SET_LO16(ecx, LO16(ecx) - 0x20u); /* 0x15032EB7: sub cx, 0x20 */
    _flag_k = FK_NARROW(FK_CMP, 16);
L_15032EBB:
    eax = (uint32_t)LO16(ecx); /* 0x15032EBB: movzx eax, cx */
    eax = (uint32_t)LO16(eax); /* 0x15032EBE: movzx eax, ax */
    goto L_15032EE7; /* 0x15032EC1: jmp 0x15032ee7 */
L_15032EC3:
    ecx = 0x100u; /* 0x15032EC3: mov ecx, 0x100 */
    /* cmp MEM16(ebp + 0x8), LO16(ecx) */ /* 0x15032EC8: cmp word ptr [ebp + 8], cx */
    _flag_a = (uint32_t)(MEM16(ebp + 0x8)) << 16; _flag_b = (uint32_t)(LO16(ecx)) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    if (CMP_AE(_flag_a, _flag_b)) goto L_15032F02; /* 0x15032ECC: jae 0x15032f02 */
L_15032ECE:
    eax = ebp + (-0x14); /* 0x15032ECE: lea eax, [ebp - 0x14] */
    PUSH32(esp, eax); /* 0x15032ED1: push eax */
    PUSH32(esp, 2); /* 0x15032ED2: push 2 */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x15032ED4: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_15031890); /* 0x15032ED7: call 0x15031890 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x15032EDC: add esp, 0xc */
    _flag_k = FK_ADD;
    /* test eax, eax */ /* 0x15032EDF: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_15032EEC; /* 0x15032EE1: jne 0x15032eec */
L_15032EE3:
    eax = (uint32_t)MEM16(ebp + 0x8); /* 0x15032EE3: movzx eax, word ptr [ebp + 8] */
L_15032EE7:
    eax = (uint32_t)LO16(eax); /* 0x15032EE7: movzx eax, ax */
    goto L_15032EFD; /* 0x15032EEA: jmp 0x15032efd */
L_15032EEC:
    eax = MEM32(ebp + (-0x14)); /* 0x15032EEC: mov eax, dword ptr [ebp - 0x14] */
    ecx = (uint32_t)MEM16(ebp + 0x8); /* 0x15032EEF: movzx ecx, word ptr [ebp + 8] */
    eax = MEM32(eax + 0xD0); /* 0x15032EF3: mov eax, dword ptr [eax + 0xd0] */
    eax = (uint32_t)MEM8(eax + ecx); /* 0x15032EF9: movzx eax, byte ptr [eax + ecx] */
L_15032EFD:
    eax = (uint32_t)LO16(eax); /* 0x15032EFD: movzx eax, ax */
    goto L_15032F2D; /* 0x15032F00: jmp 0x15032f2d */
L_15032F02:
    PUSH32(esp, MEM32(eax + 0x4)); /* 0x15032F02: push dword ptr [eax + 4] */
    ecx = ebp + (-0x4); /* 0x15032F05: lea ecx, [ebp - 4] */
    PUSH32(esp, 1); /* 0x15032F08: push 1 */
    PUSH32(esp, ecx); /* 0x15032F0A: push ecx */
    PUSH32(esp, 1); /* 0x15032F0B: push 1 */
    ecx = ebp + 0x8; /* 0x15032F0D: lea ecx, [ebp + 8] */
    PUSH32(esp, ecx); /* 0x15032F10: push ecx */
    PUSH32(esp, 0x200u); /* 0x15032F11: push 0x200 */
    PUSH32(esp, MEM32(eax + 0x14)); /* 0x15032F16: push dword ptr [eax + 0x14] */
    eax = ebp + (-0x14); /* 0x15032F19: lea eax, [ebp - 0x14] */
    PUSH32(esp, eax); /* 0x15032F1C: push eax */
    RECOMP_CALL(sub_15058960); /* 0x15032F1D: call 0x15058960 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x20u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x20u; /* 0x15032F22: add esp, 0x20 */
    _flag_k = FK_ADD;
    /* test eax, eax */ /* 0x15032F25: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_15032F32; /* 0x15032F27: jne 0x15032f32 */
L_15032F29:
    eax = (uint32_t)MEM16(ebp + 0x8); /* 0x15032F29: movzx eax, word ptr [ebp + 8] */
L_15032F2D:
    eax = (uint32_t)LO16(eax); /* 0x15032F2D: movzx eax, ax */
    goto L_15032F36; /* 0x15032F30: jmp 0x15032f36 */
L_15032F32:
    eax = (uint32_t)MEM16(ebp + (-0x4)); /* 0x15032F32: movzx eax, word ptr [ebp - 4] */
L_15032F36:
    /* cmp MEM8(ebp + (-0x8)), 0 */ /* 0x15032F36: cmp byte ptr [ebp - 8], 0 */
    _flag_a = (uint32_t)(MEM8(ebp + (-0x8))) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_15032F43; /* 0x15032F3A: je 0x15032f43 */
L_15032F3C:
    ecx = MEM32(ebp + (-0xC)); /* 0x15032F3C: mov ecx, dword ptr [ebp - 0xc] */
    _flag_a = (uint32_t)(MEM32(ecx + 0x70)); _flag_b = (uint32_t)(0xFFFFFFFDu);
    MEM32(ecx + 0x70) = MEM32(ecx + 0x70) & 0xFFFFFFFDu; /* 0x15032F3F: and dword ptr [ecx + 0x70], 0xfffffffd */
    _cf = 0;
    _flag_k = FK_TEST;
L_15032F43:
    esp = ebp; ebp = POP32_VAL(esp); /* 0x15032F43: leave  */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x15032F44: ret  */
    RECOMP_REGS_OUT();
}

void sub_15032F50(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x15032F50u);

L_15032F50:
    edi = edi; /* 0x15032F50: mov edi, edi */
    PUSH32(esp, ebp); /* 0x15032F52: push ebp */
    ebp = esp; /* 0x15032F53: mov ebp, esp */
    PUSH32(esp, 0); /* 0x15032F55: push 0 */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x15032F57: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_15032E80); /* 0x15032F5A: call 0x15032e80 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x15032F5F: pop ecx */
    ecx = POP32_VAL(esp); /* 0x15032F60: pop ecx */
    ebp = POP32_VAL(esp); /* 0x15032F61: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x15032F62: ret  */
    RECOMP_REGS_OUT();
}

void sub_15032F70(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x15032F70u);

L_15032F70:
    edi = edi; /* 0x15032F70: mov edi, edi */
    PUSH32(esp, ebp); /* 0x15032F72: push ebp */
    ebp = esp; /* 0x15032F73: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x3Cu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x3Cu; /* 0x15032F75: sub esp, 0x3c */
    _flag_k = FK_CMP;
    eax = MEM32(0x150BD340); /* 0x15032F78: mov eax, dword ptr [0x150bd340] */
    _flag_a = (uint32_t)((eax ^ ebp)); _flag_b = (uint32_t)((eax ^ ebp));
    eax = eax ^ ebp; /* 0x15032F7D: xor eax, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x4)) = eax; /* 0x15032F7F: mov dword ptr [ebp - 4], eax */
    eax = MEM32(ebp + 0x8); /* 0x15032F82: mov eax, dword ptr [ebp + 8] */
    ecx = ebp + (-0x3C); /* 0x15032F85: lea ecx, [ebp - 0x3c] */
    PUSH32(esp, esi); /* 0x15032F88: push esi */
    PUSH32(esp, edi); /* 0x15032F89: push edi */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x15032F8A: push dword ptr [ebp + 0x10] */
    edi = MEM32(ebp + 0xC); /* 0x15032F8D: mov edi, dword ptr [ebp + 0xc] */
    esi = eax; /* 0x15032F90: mov esi, eax */
    MEM32(ebp + (-0x24)) = eax; /* 0x15032F92: mov dword ptr [ebp - 0x24], eax */
    MEM32(ebp + (-0x20)) = eax; /* 0x15032F95: mov dword ptr [ebp - 0x20], eax */
    RECOMP_CALL(sub_1502F870); /* 0x15032F98: call 0x1502f870 */
    RECOMP_FLAGS_IN();
    eax = esi; /* 0x15032F9D: mov eax, esi */
    /* test edi, edi */ /* 0x15032F9F: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_15032FA5; /* 0x15032FA1: je 0x15032fa5 */
L_15032FA3:
    MEM32(edi) = eax; /* 0x15032FA3: mov dword ptr [edi], eax */
L_15032FA5:
    /* test eax, eax */ /* 0x15032FA5: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_15032FC8; /* 0x15032FA7: jne 0x15032fc8 */
L_15032FA9:
    RECOMP_CALL(sub_15036430); /* 0x15032FA9: call 0x15036430 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    esi = 0; /* 0x15032FAE: xor esi, esi */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, esi); /* 0x15032FB0: push esi */
    PUSH32(esp, esi); /* 0x15032FB1: push esi */
    PUSH32(esp, esi); /* 0x15032FB2: push esi */
    PUSH32(esp, esi); /* 0x15032FB3: push esi */
    PUSH32(esp, esi); /* 0x15032FB4: push esi */
    MEM32(eax) = 0x16u; /* 0x15032FB5: mov dword ptr [eax], 0x16 */
    RECOMP_CALL(sub_1505A110); /* 0x15032FBB: call 0x1505a110 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x14u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x14u; /* 0x15032FC0: add esp, 0x14 */
    _flag_k = FK_ADD;
    goto L_150330B2; /* 0x15032FC3: jmp 0x150330b2 */
L_15032FC8:
    eax = (uint32_t)MEM16(eax); /* 0x15032FC8: movzx eax, word ptr [eax] */
    ecx = ebp + (-0x3C); /* 0x15032FCB: lea ecx, [ebp - 0x3c] */
    PUSH32(esp, ecx); /* 0x15032FCE: push ecx */
    PUSH32(esp, 8); /* 0x15032FCF: push 8 */
    PUSH32(esp, eax); /* 0x15032FD1: push eax */
    RECOMP_CALL(sub_15031890); /* 0x15032FD2: call 0x15031890 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x15032FD7: add esp, 0xc */
    _flag_k = FK_ADD;
    /* test eax, eax */ /* 0x15032FDA: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_15032FFA; /* 0x15032FDC: je 0x15032ffa */
L_15032FDE:
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esi = esi + 2; /* 0x15032FDE: add esi, 2 */
    _flag_k = FK_ADD;
    ecx = ebp + (-0x3C); /* 0x15032FE1: lea ecx, [ebp - 0x3c] */
    PUSH32(esp, ecx); /* 0x15032FE4: push ecx */
    PUSH32(esp, 8); /* 0x15032FE5: push 8 */
    eax = (uint32_t)MEM16(esi); /* 0x15032FE7: movzx eax, word ptr [esi] */
    PUSH32(esp, eax); /* 0x15032FEA: push eax */
    RECOMP_CALL(sub_15031890); /* 0x15032FEB: call 0x15031890 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x15032FF0: add esp, 0xc */
    _flag_k = FK_ADD;
    /* test eax, eax */ /* 0x15032FF3: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_15032FDE; /* 0x15032FF5: jne 0x15032fde */
L_15032FF7:
    MEM32(ebp + (-0x20)) = esi; /* 0x15032FF7: mov dword ptr [ebp - 0x20], esi */
L_15032FFA:
    ecx = esi; /* 0x15032FFA: mov ecx, esi */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    esi = 0; /* 0x15032FFC: xor esi, esi */
    _cf = 0;
    _flag_k = FK_TEST;
    edx = ecx + 0x2; /* 0x15032FFE: lea edx, [ecx + 2] */
L_15033001:
    SET_LO16(eax, MEM16(ecx)); /* 0x15033001: mov ax, word ptr [ecx] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 2; /* 0x15033004: add ecx, 2 */
    _flag_k = FK_ADD;
    /* cmp LO16(eax), LO16(esi) */ /* 0x15033007: cmp ax, si */
    _flag_a = (uint32_t)(LO16(eax)) << 16; _flag_b = (uint32_t)(LO16(esi)) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    RECOMP_BACKEDGE();
    if (CMP_NE(_flag_a, _flag_b)) goto L_15033001; /* 0x1503300A: jne 0x15033001 */
L_1503300C:
    eax = ebp + (-0x3C); /* 0x1503300C: lea eax, [ebp - 0x3c] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ecx = ecx - edx; /* 0x1503300F: sub ecx, edx */
    _flag_k = FK_CMP;
    PUSH32(esp, eax); /* 0x15033011: push eax */
    PUSH32(esp, esi); /* 0x15033012: push esi */
    PUSH32(esp, esi); /* 0x15033013: push esi */
    if (1u) _cf = (((ecx) >> 0) & 1u); /* 0x15033014: sar ecx, 1 */
    if (1u) { _flag_a = recomp_flags_pack(((uint32_t)((int32_t)ecx >> 1u)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ecx = (uint32_t)((int32_t)ecx >> 1u);
    eax = ebp + (-0x1C); /* 0x15033016: lea eax, [ebp - 0x1c] */
    PUSH32(esp, ecx); /* 0x15033019: push ecx */
    PUSH32(esp, MEM32(ebp + (-0x20))); /* 0x1503301A: push dword ptr [ebp - 0x20] */
    PUSH32(esp, eax); /* 0x1503301D: push eax */
    RECOMP_CALL(sub_15098030); /* 0x1503301E: call 0x15098030 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x18u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x18u; /* 0x15033023: add esp, 0x18 */
    _flag_k = FK_ADD;
    MEM32(ebp + (-0x28)) = eax; /* 0x15033026: mov dword ptr [ebp - 0x28], eax */
    /* test edi, edi */ /* 0x15033029: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_15033038; /* 0x1503302B: je 0x15033038 */
L_1503302D:
    ecx = MEM32(eax + 0x4); /* 0x1503302D: mov ecx, dword ptr [eax + 4] */
    eax = MEM32(ebp + (-0x20)); /* 0x15033030: mov eax, dword ptr [ebp - 0x20] */
    ecx = eax + ecx * 2; /* 0x15033033: lea ecx, [eax + ecx*2] */
    MEM32(edi) = ecx; /* 0x15033036: mov dword ptr [edi], ecx */
L_15033038:
    RECOMP_CALL(sub_15036430); /* 0x15033038: call 0x15036430 */
    RECOMP_FLAGS_IN();
    ecx = MEM32(ebp + (-0x28)); /* 0x1503303D: mov ecx, dword ptr [ebp - 0x28] */
    MEM32(eax) = esi; /* 0x15033040: mov dword ptr [eax], esi */
    /* test MEM32(ecx), 0x240u */ /* 0x15033042: test dword ptr [ecx], 0x240 */
    _flag_a = (uint32_t)(MEM32(ecx)); _flag_b = (uint32_t)(0x240u);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_15033058; /* 0x15033048: je 0x15033058 */
L_1503304A:
    { xmm_t _s = _xmm[0]; for (int _k = 0; _k < 4; _k++) _xmm[0].u32[_k] = _xmm[0].u32[_k] ^ _s.u32[_k]; } /* 0x1503304A: xorps xmm0, xmm0 */
    /* test edi, edi */ /* 0x1503304D: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_150330BC; /* 0x1503304F: je 0x150330bc */
L_15033051:
    eax = MEM32(ebp + (-0x24)); /* 0x15033051: mov eax, dword ptr [ebp - 0x24] */
    MEM32(edi) = eax; /* 0x15033054: mov dword ptr [edi], eax */
    goto L_150330BC; /* 0x15033056: jmp 0x150330bc */
L_15033058:
    /* test MEM8(ecx), 0x81u */ /* 0x15033058: test byte ptr [ecx], 0x81 */
    _flag_a = (uint32_t)(MEM8(ecx)) << 24; _flag_b = (uint32_t)(0x81u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_1503308C; /* 0x1503305B: je 0x1503308c */
L_1503305D:
    eax = MEM32(ebp + (-0x20)); /* 0x1503305D: mov eax, dword ptr [ebp - 0x20] */
    _xmm[0].u64[0] = MEM64(0x150BD7E0); _xmm[0].u64[1] = 0; /* 0x15033060: movsd xmm0, qword ptr [0x150bd7e0] */
    /* cmp MEM16(eax), 0x2Du */ /* 0x15033068: cmp word ptr [eax], 0x2d */
    _flag_a = (uint32_t)(MEM16(eax)) << 16; _flag_b = (uint32_t)(0x2Du) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    if (CMP_NE(_flag_a, _flag_b)) goto L_15033075; /* 0x1503306C: jne 0x15033075 */
L_1503306E:
    { xmm_t _s = xmm_ld(0x15003C80); for (int _k = 0; _k < 4; _k++) _xmm[0].u32[_k] = _xmm[0].u32[_k] ^ _s.u32[_k]; } /* 0x1503306E: xorps xmm0, xmmword ptr [0x15003c80] */
L_15033075:
    MEM64(ebp + (-0x2C)) = _xmm[0].u64[0]; /* 0x15033075: movsd qword ptr [ebp - 0x2c], xmm0 */
    RECOMP_CALL(sub_15036430); /* 0x1503307A: call 0x15036430 */
    RECOMP_FLAGS_IN();
    _xmm[0].u64[0] = MEM64(ebp + (-0x2C)); _xmm[0].u64[1] = 0; /* 0x1503307F: movsd xmm0, qword ptr [ebp - 0x2c] */
    MEM32(eax) = 0x22u; /* 0x15033084: mov dword ptr [eax], 0x22 */
    goto L_150330BC; /* 0x1503308A: jmp 0x150330bc */
L_1503308C:
    /* test MEM32(ecx), 0x100u */ /* 0x1503308C: test dword ptr [ecx], 0x100 */
    _flag_a = (uint32_t)(MEM32(ecx)); _flag_b = (uint32_t)(0x100u);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_150330B7; /* 0x15033092: je 0x150330b7 */
L_15033094:
    _xmm[0].u64[0] = MEM64(ecx + 0x10); _xmm[0].u64[1] = 0; /* 0x15033094: movsd xmm0, qword ptr [ecx + 0x10] */
    _flag_a = SSE_COMI(_xmm[0].f64[0], sse_f64(MEM64(0x15003C70))); _flag_b = 0; _cf = _flag_a & 1u; /* 0x15033099: ucomisd xmm0, qword ptr [0x15003c70] */
    _flag_k = FK_EFLAGS;
    SET_HI8(eax, (recomp_eflags(_flag_k, _flag_a, _flag_b, _cf, _df) & 0xD5u) | 2u); /* 0x150330A1: lahf  */
    /* test HI8(eax), 0x44u */ /* 0x150330A2: test ah, 0x44 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(0x44u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (RECOMP_PF((_flag_a & _flag_b), 24)) goto L_150330B7; /* 0x150330A5: jp 0x150330b7 */
L_150330A7:
    RECOMP_CALL(sub_15036430); /* 0x150330A7: call 0x15036430 */
    RECOMP_FLAGS_IN();
    MEM32(eax) = 0x22u; /* 0x150330AC: mov dword ptr [eax], 0x22 */
L_150330B2:
    { xmm_t _s = _xmm[0]; for (int _k = 0; _k < 4; _k++) _xmm[0].u32[_k] = _xmm[0].u32[_k] ^ _s.u32[_k]; } /* 0x150330B2: xorps xmm0, xmm0 */
    goto L_150330BC; /* 0x150330B5: jmp 0x150330bc */
L_150330B7:
    _xmm[0].u64[0] = MEM64(ecx + 0x10); _xmm[0].u64[1] = 0; /* 0x150330B7: movsd xmm0, qword ptr [ecx + 0x10] */
L_150330BC:
    /* cmp MEM8(ebp + (-0x30)), 0 */ /* 0x150330BC: cmp byte ptr [ebp - 0x30], 0 */
    _flag_a = (uint32_t)(MEM8(ebp + (-0x30))) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    edi = POP32_VAL(esp); /* 0x150330C0: pop edi */
    MEM64(ebp + (-0x2C)) = _xmm[0].u64[0]; /* 0x150330C1: movsd qword ptr [ebp - 0x2c], xmm0 */
    esi = POP32_VAL(esp); /* 0x150330C6: pop esi */
    if (CMP_EQ(_flag_a, _flag_b)) goto L_150330D0; /* 0x150330C7: je 0x150330d0 */
L_150330C9:
    eax = MEM32(ebp + (-0x34)); /* 0x150330C9: mov eax, dword ptr [ebp - 0x34] */
    _flag_a = (uint32_t)(MEM32(eax + 0x70)); _flag_b = (uint32_t)(0xFFFFFFFDu);
    MEM32(eax + 0x70) = MEM32(eax + 0x70) & 0xFFFFFFFDu; /* 0x150330CC: and dword ptr [eax + 0x70], 0xfffffffd */
    _cf = 0;
    _flag_k = FK_TEST;
L_150330D0:
    ecx = MEM32(ebp + (-0x4)); /* 0x150330D0: mov ecx, dword ptr [ebp - 4] */
    fp_push(*(double*)ADDR(ebp + (-0x2C))); /* 0x150330D3: fld qword ptr [ebp - 0x2c] */
    _flag_a = (uint32_t)((ecx ^ ebp)); _flag_b = (uint32_t)((ecx ^ ebp));
    ecx = ecx ^ ebp; /* 0x150330D6: xor ecx, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_1505E540); /* 0x150330D8: call 0x1505e540 */
    RECOMP_FLAGS_IN();
    esp = ebp; ebp = POP32_VAL(esp); /* 0x150330DD: leave  */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x150330DE: ret  */
    RECOMP_REGS_OUT();
}

void sub_150330F0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x150330F0u);

L_150330F0:
    edi = edi; /* 0x150330F0: mov edi, edi */
    PUSH32(esp, ebp); /* 0x150330F2: push ebp */
    ebp = esp; /* 0x150330F3: mov ebp, esp */
    PUSH32(esp, 0); /* 0x150330F5: push 0 */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x150330F7: push dword ptr [ebp + 0xc] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x150330FA: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_15032F70); /* 0x150330FD: call 0x15032f70 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x15033102: add esp, 0xc */
    _flag_k = FK_ADD;
    ebp = POP32_VAL(esp); /* 0x15033105: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x15033106: ret  */
    RECOMP_REGS_OUT();
}

void sub_1503310D(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1503310Du);

L_1503310D:
    edi = edi; /* 0x1503310D: mov edi, edi */
    PUSH32(esp, ebp); /* 0x1503310F: push ebp */
    ebp = esp; /* 0x15033110: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x38u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x38u; /* 0x15033112: sub esp, 0x38 */
    _flag_k = FK_CMP;
    PUSH32(esp, ebx); /* 0x15033115: push ebx */
    PUSH32(esp, esi); /* 0x15033116: push esi */
    PUSH32(esp, edi); /* 0x15033117: push edi */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x15033118: push dword ptr [ebp + 8] */
    edi = MEM32(ebp + 0x14); /* 0x1503311B: mov edi, dword ptr [ebp + 0x14] */
    ecx = ebp + (-0x38); /* 0x1503311E: lea ecx, [ebp - 0x38] */
    MEM32(ebp + (-0x4)) = edi; /* 0x15033121: mov dword ptr [ebp - 4], edi */
    RECOMP_CALL(sub_1502F870); /* 0x15033124: call 0x1502f870 */
    RECOMP_FLAGS_IN();
    eax = MEM32(ebp + 0x10); /* 0x15033129: mov eax, dword ptr [ebp + 0x10] */
    /* test eax, eax */ /* 0x1503312C: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_15033135; /* 0x1503312E: je 0x15033135 */
L_15033130:
    ecx = MEM32(ebp + 0xC); /* 0x15033130: mov ecx, dword ptr [ebp + 0xc] */
    MEM32(eax) = ecx; /* 0x15033133: mov dword ptr [eax], ecx */
L_15033135:
    eax = MEM32(ebp + 0xC); /* 0x15033135: mov eax, dword ptr [ebp + 0xc] */
    /* test eax, eax */ /* 0x15033138: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1503314A; /* 0x1503313A: je 0x1503314a */
L_1503313C:
    /* test edi, edi */ /* 0x1503313C: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_15033169; /* 0x1503313E: je 0x15033169 */
L_15033140:
    /* cmp edi, 2 */ /* 0x15033140: cmp edi, 2 */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_L(_flag_a, _flag_b)) goto L_1503314A; /* 0x15033143: jl 0x1503314a */
L_15033145:
    /* cmp edi, 0x24u */ /* 0x15033145: cmp edi, 0x24 */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(0x24u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_LE(_flag_a, _flag_b)) goto L_15033169; /* 0x15033148: jle 0x15033169 */
L_1503314A:
    RECOMP_CALL(sub_15036430); /* 0x1503314A: call 0x15036430 */
    RECOMP_FLAGS_IN();
    MEM32(eax) = 0x16u; /* 0x1503314F: mov dword ptr [eax], 0x16 */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x15033155: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, eax); /* 0x15033157: push eax */
    PUSH32(esp, eax); /* 0x15033158: push eax */
    PUSH32(esp, eax); /* 0x15033159: push eax */
    PUSH32(esp, eax); /* 0x1503315A: push eax */
    PUSH32(esp, eax); /* 0x1503315B: push eax */
    RECOMP_CALL(sub_1505A110); /* 0x1503315C: call 0x1505a110 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x14u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x14u; /* 0x15033161: add esp, 0x14 */
    _flag_k = FK_ADD;
    goto L_15033401; /* 0x15033164: jmp 0x15033401 */
L_15033169:
    ebx = (uint32_t)MEM16(eax); /* 0x15033169: movzx ebx, word ptr [eax] */
    esi = eax + 0x2; /* 0x1503316C: lea esi, [eax + 2] */
    eax = ebp + (-0x38); /* 0x1503316F: lea eax, [ebp - 0x38] */
    MEM32(ebp + (-0xC)) = ebx; /* 0x15033172: mov dword ptr [ebp - 0xc], ebx */
    PUSH32(esp, eax); /* 0x15033175: push eax */
    { xmm_t _s = _xmm[0]; for (int _k = 0; _k < 4; _k++) _xmm[0].u32[_k] = _xmm[0].u32[_k] ^ _s.u32[_k]; } /* 0x15033176: xorps xmm0, xmm0 */
    PUSH32(esp, 8); /* 0x15033179: push 8 */
    PUSH32(esp, ebx); /* 0x1503317B: push ebx */
    MEM64(ebp + (-0x20)) = _xmm[0].u64[0]; /* 0x1503317C: movlpd qword ptr [ebp - 0x20], xmm0 */
    RECOMP_CALL(sub_15031890); /* 0x15033181: call 0x15031890 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x15033186: add esp, 0xc */
    _flag_k = FK_ADD;
    /* test eax, eax */ /* 0x15033189: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_150331B0; /* 0x1503318B: je 0x150331b0 */
L_1503318D:
    eax = (uint32_t)MEM16(esi); /* 0x1503318D: movzx eax, word ptr [esi] */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esi = esi + 2; /* 0x15033190: add esi, 2 */
    _flag_k = FK_ADD;
    /* cmp LO16(eax), LO16(ebx) */ /* 0x15033193: cmp ax, bx */
    _flag_a = (uint32_t)(LO16(eax)) << 16; _flag_b = (uint32_t)(LO16(ebx)) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    RECOMP_BACKEDGE();
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1503318D; /* 0x15033196: je 0x1503318d */
L_15033198:
    ecx = ebp + (-0x38); /* 0x15033198: lea ecx, [ebp - 0x38] */
    ebx = eax; /* 0x1503319B: mov ebx, eax */
    PUSH32(esp, ecx); /* 0x1503319D: push ecx */
    PUSH32(esp, 8); /* 0x1503319E: push 8 */
    PUSH32(esp, eax); /* 0x150331A0: push eax */
    RECOMP_CALL(sub_15031890); /* 0x150331A1: call 0x15031890 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x150331A6: add esp, 0xc */
    _flag_k = FK_ADD;
    /* test eax, eax */ /* 0x150331A9: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1503318D; /* 0x150331AB: jne 0x1503318d */
L_150331AD:
    MEM32(ebp + (-0xC)) = ebx; /* 0x150331AD: mov dword ptr [ebp - 0xc], ebx */
L_150331B0:
    eax = MEM32(ebp + 0x18); /* 0x150331B0: mov eax, dword ptr [ebp + 0x18] */
    /* cmp LO16(ebx), 0x2Du */ /* 0x150331B3: cmp bx, 0x2d */
    _flag_a = (uint32_t)(LO16(ebx)) << 16; _flag_b = (uint32_t)(0x2Du) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    if (CMP_NE(_flag_a, _flag_b)) goto L_150331BE; /* 0x150331B7: jne 0x150331be */
L_150331B9:
    _flag_a = (uint32_t)((eax | 2)); _flag_b = (uint32_t)((eax | 2));
    eax = eax | 2; /* 0x150331B9: or eax, 2 */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_150331C4; /* 0x150331BC: jmp 0x150331c4 */
L_150331BE:
    /* cmp LO16(ebx), 0x2Bu */ /* 0x150331BE: cmp bx, 0x2b */
    _flag_a = (uint32_t)(LO16(ebx)) << 16; _flag_b = (uint32_t)(0x2Bu) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    if (CMP_NE(_flag_a, _flag_b)) goto L_150331CD; /* 0x150331C2: jne 0x150331cd */
L_150331C4:
    ebx = (uint32_t)MEM16(esi); /* 0x150331C4: movzx ebx, word ptr [esi] */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esi = esi + 2; /* 0x150331C7: add esi, 2 */
    _flag_k = FK_ADD;
    MEM32(ebp + (-0xC)) = ebx; /* 0x150331CA: mov dword ptr [ebp - 0xc], ebx */
L_150331CD:
    MEM32(ebp + (-0x8)) = eax; /* 0x150331CD: mov dword ptr [ebp - 8], eax */
    /* test edi, edi */ /* 0x150331D0: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_150333F5; /* 0x150331D2: js 0x150333f5 */
L_150331D8:
    /* cmp edi, 1 */ /* 0x150331D8: cmp edi, 1 */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(1);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_150333F5; /* 0x150331DB: je 0x150333f5 */
L_150331E1:
    /* cmp edi, 0x24u */ /* 0x150331E1: cmp edi, 0x24 */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(0x24u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_G(_flag_a, _flag_b)) goto L_150333F5; /* 0x150331E4: jg 0x150333f5 */
L_150331EA:
    /* test edi, edi */ /* 0x150331EA: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_15033221; /* 0x150331EC: jne 0x15033221 */
L_150331EE:
    PUSH32(esp, ebx); /* 0x150331EE: push ebx */
    RECOMP_CALL(sub_1503496F); /* 0x150331EF: call 0x1503496f */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x150331F4: pop ecx */
    /* test eax, eax */ /* 0x150331F5: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_15033201; /* 0x150331F7: je 0x15033201 */
L_150331F9:
    PUSH32(esp, 0xAu); /* 0x150331F9: push 0xa */
L_150331FB:
    eax = POP32_VAL(esp); /* 0x150331FB: pop eax */
    MEM32(ebp + (-0x4)) = eax; /* 0x150331FC: mov dword ptr [ebp - 4], eax */
    goto L_15033255; /* 0x150331FF: jmp 0x15033255 */
L_15033201:
    eax = (uint32_t)MEM16(esi); /* 0x15033201: movzx eax, word ptr [esi] */
    PUSH32(esp, 0x78u); /* 0x15033204: push 0x78 */
    edi = POP32_VAL(esp); /* 0x15033206: pop edi */
    /* cmp LO16(eax), LO16(edi) */ /* 0x15033207: cmp ax, di */
    _flag_a = (uint32_t)(LO16(eax)) << 16; _flag_b = (uint32_t)(LO16(edi)) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_15033218; /* 0x1503320A: je 0x15033218 */
L_1503320C:
    PUSH32(esp, 0x58u); /* 0x1503320C: push 0x58 */
    ecx = POP32_VAL(esp); /* 0x1503320E: pop ecx */
    /* cmp LO16(eax), LO16(ecx) */ /* 0x1503320F: cmp ax, cx */
    _flag_a = (uint32_t)(LO16(eax)) << 16; _flag_b = (uint32_t)(LO16(ecx)) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_15033218; /* 0x15033212: je 0x15033218 */
L_15033214:
    PUSH32(esp, 8); /* 0x15033214: push 8 */
    RECOMP_BACKEDGE();
    goto L_150331FB; /* 0x15033216: jmp 0x150331fb */
L_15033218:
    MEM32(ebp + (-0x4)) = 0x10u; /* 0x15033218: mov dword ptr [ebp - 4], 0x10 */
    goto L_1503322D; /* 0x1503321F: jmp 0x1503322d */
L_15033221:
    /* cmp edi, 0x10u */ /* 0x15033221: cmp edi, 0x10 */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_1503331E; /* 0x15033224: jne 0x1503331e */
L_1503322A:
    PUSH32(esp, 0x78u); /* 0x1503322A: push 0x78 */
    edi = POP32_VAL(esp); /* 0x1503322C: pop edi */
L_1503322D:
    PUSH32(esp, ebx); /* 0x1503322D: push ebx */
    RECOMP_CALL(sub_1503496F); /* 0x1503322E: call 0x1503496f */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x15033233: pop ecx */
    /* test eax, eax */ /* 0x15033234: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_15033252; /* 0x15033236: jne 0x15033252 */
L_15033238:
    eax = (uint32_t)MEM16(esi); /* 0x15033238: movzx eax, word ptr [esi] */
    /* cmp LO16(eax), LO16(edi) */ /* 0x1503323B: cmp ax, di */
    _flag_a = (uint32_t)(LO16(eax)) << 16; _flag_b = (uint32_t)(LO16(edi)) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_15033248; /* 0x1503323E: je 0x15033248 */
L_15033240:
    PUSH32(esp, 0x58u); /* 0x15033240: push 0x58 */
    ecx = POP32_VAL(esp); /* 0x15033242: pop ecx */
    /* cmp LO16(eax), LO16(ecx) */ /* 0x15033243: cmp ax, cx */
    _flag_a = (uint32_t)(LO16(eax)) << 16; _flag_b = (uint32_t)(LO16(ecx)) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    if (CMP_NE(_flag_a, _flag_b)) goto L_15033252; /* 0x15033246: jne 0x15033252 */
L_15033248:
    eax = (uint32_t)MEM16(esi + 0x2); /* 0x15033248: movzx eax, word ptr [esi + 2] */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esi = esi + 4; /* 0x1503324C: add esi, 4 */
    _flag_k = FK_ADD;
    MEM32(ebp + (-0xC)) = eax; /* 0x1503324F: mov dword ptr [ebp - 0xc], eax */
L_15033252:
    eax = MEM32(ebp + (-0x4)); /* 0x15033252: mov eax, dword ptr [ebp - 4] */
L_15033255:
    PUSH32(esp, 0); /* 0x15033255: push 0 */
    PUSH32(esp, eax); /* 0x15033257: push eax */
    PUSH32(esp, 0xFFFFFFFFu); /* 0x15033258: push -1 */
    PUSH32(esp, 0xFFFFFFFFu); /* 0x1503325A: push -1 */
    RECOMP_CALL(sub_15049320); /* 0x1503325C: call 0x15049320 */
    RECOMP_FLAGS_IN();
    edi = MEM32(ebp + (-0x1C)); /* 0x15033261: mov edi, dword ptr [ebp - 0x1c] */
    ebx = MEM32(ebp + (-0x20)); /* 0x15033264: mov ebx, dword ptr [ebp - 0x20] */
    MEM32(ebp + (-0x14)) = eax; /* 0x15033267: mov dword ptr [ebp - 0x14], eax */
    eax = MEM32(ebp + (-0xC)); /* 0x1503326A: mov eax, dword ptr [ebp - 0xc] */
    MEM32(ebp + (-0x18)) = edx; /* 0x1503326D: mov dword ptr [ebp - 0x18], edx */
    MEM32(ebp + (-0x24)) = 0x19u; /* 0x15033270: mov dword ptr [ebp - 0x24], 0x19 */
L_15033277:
    ecx = (uint32_t)LO16(eax); /* 0x15033277: movzx ecx, ax */
    PUSH32(esp, eax); /* 0x1503327A: push eax */
    MEM32(ebp + (-0x1C)) = ecx; /* 0x1503327B: mov dword ptr [ebp - 0x1c], ecx */
    RECOMP_CALL(sub_1503496F); /* 0x1503327E: call 0x1503496f */
    RECOMP_FLAGS_IN();
    edx = eax; /* 0x15033283: mov edx, eax */
    MEM32(ebp + (-0x10)) = eax; /* 0x15033285: mov dword ptr [ebp - 0x10], eax */
    ecx = POP32_VAL(esp); /* 0x15033288: pop ecx */
    /* cmp edx, 0xFFFFFFFFu */ /* 0x15033289: cmp edx, -1 */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(0xFFFFFFFFu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_150332C7; /* 0x1503328C: jne 0x150332c7 */
L_1503328E:
    edx = MEM32(ebp + (-0xC)); /* 0x1503328E: mov edx, dword ptr [ebp - 0xc] */
    PUSH32(esp, 0x41u); /* 0x15033291: push 0x41 */
    eax = POP32_VAL(esp); /* 0x15033293: pop eax */
    /* cmp LO16(eax), LO16(edx) */ /* 0x15033294: cmp ax, dx */
    _flag_a = (uint32_t)(LO16(eax)) << 16; _flag_b = (uint32_t)(LO16(edx)) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    if (CMP_A(_flag_a, _flag_b)) goto L_1503329F; /* 0x15033297: ja 0x1503329f */
L_15033299:
    /* cmp LO16(edx), 0x5Au */ /* 0x15033299: cmp dx, 0x5a */
    _flag_a = (uint32_t)(LO16(edx)) << 16; _flag_b = (uint32_t)(0x5Au) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    if (CMP_BE(_flag_a, _flag_b)) goto L_150332AE; /* 0x1503329D: jbe 0x150332ae */
L_1503329F:
    PUSH32(esp, 0x19u); /* 0x1503329F: push 0x19 */
    eax = edx + (-0x61); /* 0x150332A1: lea eax, [edx - 0x61] */
    ecx = POP32_VAL(esp); /* 0x150332A4: pop ecx */
    /* cmp LO16(eax), LO16(ecx) */ /* 0x150332A5: cmp ax, cx */
    _flag_a = (uint32_t)(LO16(eax)) << 16; _flag_b = (uint32_t)(LO16(ecx)) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    if (CMP_A(_flag_a, _flag_b)) goto L_15033353; /* 0x150332A8: ja 0x15033353 */
L_150332AE:
    eax = MEM32(ebp + (-0x1C)); /* 0x150332AE: mov eax, dword ptr [ebp - 0x1c] */
    ecx = (uint32_t)LO16(eax); /* 0x150332B1: movzx ecx, ax */
    eax = edx + (-0x61); /* 0x150332B4: lea eax, [edx - 0x61] */
    /* cmp LO16(eax), MEM16(ebp + (-0x24)) */ /* 0x150332B7: cmp ax, word ptr [ebp - 0x24] */
    _flag_a = (uint32_t)(LO16(eax)) << 16; _flag_b = (uint32_t)(MEM16(ebp + (-0x24))) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    edx = ecx + (-0x20); /* 0x150332BB: lea edx, [ecx - 0x20] */
    if (CMP_A(_flag_a, _flag_b)) { edx = ecx; } /* 0x150332BE: cmova edx, ecx */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(0x37u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    edx = edx - 0x37u; /* 0x150332C1: sub edx, 0x37 */
    _flag_k = FK_CMP;
    MEM32(ebp + (-0x10)) = edx; /* 0x150332C4: mov dword ptr [ebp - 0x10], edx */
L_150332C7:
    eax = MEM32(ebp + (-0x4)); /* 0x150332C7: mov eax, dword ptr [ebp - 4] */
    /* cmp edx, eax */ /* 0x150332CA: cmp edx, eax */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_AE(_flag_a, _flag_b)) goto L_15033353; /* 0x150332CC: jae 0x15033353 */
L_150332D2:
    _flag_a = (uint32_t)((MEM32(ebp + (-0x8)) | 8)); _flag_b = (uint32_t)((MEM32(ebp + (-0x8)) | 8));
    MEM32(ebp + (-0x8)) = MEM32(ebp + (-0x8)) | 8; /* 0x150332D2: or dword ptr [ebp - 8], 8 */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp edi, MEM32(ebp + (-0x18)) */ /* 0x150332D6: cmp edi, dword ptr [ebp - 0x18] */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(MEM32(ebp + (-0x18)));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_B(_flag_a, _flag_b)) goto L_15033325; /* 0x150332D9: jb 0x15033325 */
L_150332DB:
    ecx = MEM32(ebp + (-0x14)); /* 0x150332DB: mov ecx, dword ptr [ebp - 0x14] */
    if (CMP_A(_flag_a, _flag_b)) goto L_150332E4; /* 0x150332DE: ja 0x150332e4 */
L_150332E0:
    /* cmp ebx, ecx */ /* 0x150332E0: cmp ebx, ecx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_B(_flag_a, _flag_b)) goto L_15033325; /* 0x150332E2: jb 0x15033325 */
L_150332E4:
    /* cmp ebx, ecx */ /* 0x150332E4: cmp ebx, ecx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_1503330C; /* 0x150332E6: jne 0x1503330c */
L_150332E8:
    /* cmp edi, MEM32(ebp + (-0x18)) */ /* 0x150332E8: cmp edi, dword ptr [ebp - 0x18] */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(MEM32(ebp + (-0x18)));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_1503330C; /* 0x150332EB: jne 0x1503330c */
L_150332ED:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x150332ED: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, ecx); /* 0x150332EF: push ecx */
    PUSH32(esp, eax); /* 0x150332F0: push eax */
    PUSH32(esp, 0xFFFFFFFFu); /* 0x150332F1: push -1 */
    PUSH32(esp, 0xFFFFFFFFu); /* 0x150332F3: push -1 */
    MEM32(ebp + (-0xC)) = ecx; /* 0x150332F5: mov dword ptr [ebp - 0xc], ecx */
    RECOMP_CALL(sub_15049390); /* 0x150332F8: call 0x15049390 */
    RECOMP_FLAGS_IN();
    ecx = eax; /* 0x150332FD: mov ecx, eax */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x150332FF: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp eax, edx */ /* 0x15033301: cmp eax, edx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_B(_flag_a, _flag_b)) goto L_1503332E; /* 0x15033303: jb 0x1503332e */
L_15033305:
    if (CMP_A(_flag_a, _flag_b)) goto L_1503330C; /* 0x15033305: ja 0x1503330c */
L_15033307:
    /* cmp MEM32(ebp + (-0x10)), ecx */ /* 0x15033307: cmp dword ptr [ebp - 0x10], ecx */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x10))); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_1503332E; /* 0x1503330A: jbe 0x1503332e */
L_1503330C:
    eax = MEM32(ebp + (-0x8)); /* 0x1503330C: mov eax, dword ptr [ebp - 8] */
    ecx = MEM32(ebp + 0x10); /* 0x1503330F: mov ecx, dword ptr [ebp + 0x10] */
    _flag_a = (uint32_t)((eax | 4)); _flag_b = (uint32_t)((eax | 4));
    eax = eax | 4; /* 0x15033312: or eax, 4 */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x8)) = eax; /* 0x15033315: mov dword ptr [ebp - 8], eax */
    /* test ecx, ecx */ /* 0x15033318: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_15033359; /* 0x1503331A: je 0x15033359 */
L_1503331C:
    goto L_15033345; /* 0x1503331C: jmp 0x15033345 */
L_1503331E:
    eax = edi; /* 0x1503331E: mov eax, edi */
    RECOMP_BACKEDGE();
    goto L_15033255; /* 0x15033320: jmp 0x15033255 */
L_15033325:
    _flag_a = (uint32_t)(MEM32(ebp + (-0xC))); _flag_b = (uint32_t)(0);
    MEM32(ebp + (-0xC)) = MEM32(ebp + (-0xC)) & 0; /* 0x15033325: and dword ptr [ebp - 0xc], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x10)) = edx; /* 0x15033329: mov dword ptr [ebp - 0x10], edx */
    goto L_15033331; /* 0x1503332C: jmp 0x15033331 */
L_1503332E:
    eax = MEM32(ebp + (-0x4)); /* 0x1503332E: mov eax, dword ptr [ebp - 4] */
L_15033331:
    PUSH32(esp, edi); /* 0x15033331: push edi */
    PUSH32(esp, ebx); /* 0x15033332: push ebx */
    PUSH32(esp, 0); /* 0x15033333: push 0 */
    PUSH32(esp, eax); /* 0x15033335: push eax */
    RECOMP_CALL(sub_150492E0); /* 0x15033336: call 0x150492e0 */
    RECOMP_FLAGS_IN();
    ebx = eax; /* 0x1503333B: mov ebx, eax */
    edi = edx; /* 0x1503333D: mov edi, edx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(MEM32(ebp + (-0x10)));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ebx = ebx + MEM32(ebp + (-0x10)); /* 0x1503333F: add ebx, dword ptr [ebp - 0x10] */
    _flag_k = FK_ADD;
    { uint32_t _aa = edi, _ab = MEM32(ebp + (-0xC)), _ac = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x15033342: adc edi, dword ptr [ebp - 0xc] */
      edi = _aa + _ab + _ac;
      _flag_a = recomp_flags_adc(_aa, _ab, _ac); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
L_15033345:
    eax = (uint32_t)MEM16(esi); /* 0x15033345: movzx eax, word ptr [esi] */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esi = esi + 2; /* 0x15033348: add esi, 2 */
    _flag_k = FK_ADD;
    MEM32(ebp + (-0xC)) = eax; /* 0x1503334B: mov dword ptr [ebp - 0xc], eax */
    RECOMP_BACKEDGE();
    goto L_15033277; /* 0x1503334E: jmp 0x15033277 */
L_15033353:
    ecx = MEM32(ebp + 0x10); /* 0x15033353: mov ecx, dword ptr [ebp + 0x10] */
    eax = MEM32(ebp + (-0x8)); /* 0x15033356: mov eax, dword ptr [ebp - 8] */
L_15033359:
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esi = esi - 2; /* 0x15033359: sub esi, 2 */
    _flag_k = FK_CMP;
    /* test LO8(eax), 8 */ /* 0x1503335C: test al, 8 */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(8) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_15033376; /* 0x1503335E: jne 0x15033376 */
L_15033360:
    { xmm_t _s = _xmm[0]; for (int _k = 0; _k < 4; _k++) _xmm[0].u32[_k] = _xmm[0].u32[_k] ^ _s.u32[_k]; } /* 0x15033360: xorps xmm0, xmm0 */
    /* test ecx, ecx */ /* 0x15033363: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    MEM64(ebp + (-0x20)) = _xmm[0].u64[0]; /* 0x15033365: movlpd qword ptr [ebp - 0x20], xmm0 */
    if (TEST_NZ(_flag_a, _flag_b)) { esi = MEM32(ebp + 0xC); } /* 0x1503336A: cmovne esi, dword ptr [ebp + 0xc] */
    edi = MEM32(ebp + (-0x1C)); /* 0x1503336E: mov edi, dword ptr [ebp - 0x1c] */
    ebx = MEM32(ebp + (-0x20)); /* 0x15033371: mov ebx, dword ptr [ebp - 0x20] */
    goto L_150333DF; /* 0x15033374: jmp 0x150333df */
L_15033376:
    /* test LO8(eax), 4 */ /* 0x15033376: test al, 4 */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(4) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_150333A1; /* 0x15033378: jne 0x150333a1 */
L_1503337A:
    /* test LO8(eax), 1 */ /* 0x1503337A: test al, 1 */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(1) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_150333DF; /* 0x1503337C: jne 0x150333df */
L_1503337E:
    /* test LO8(eax), 2 */ /* 0x1503337E: test al, 2 */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(2) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_15033392; /* 0x15033380: je 0x15033392 */
L_15033382:
    /* cmp edi, 0x80000000u */ /* 0x15033382: cmp edi, 0x80000000 */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(0x80000000u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_A(_flag_a, _flag_b)) goto L_150333A1; /* 0x15033388: ja 0x150333a1 */
L_1503338A:
    if (CMP_B(_flag_a, _flag_b)) goto L_150333DF; /* 0x1503338A: jb 0x150333df */
L_1503338C:
    /* test ebx, ebx */ /* 0x1503338C: test ebx, ebx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ebx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_150333A1; /* 0x1503338E: jne 0x150333a1 */
L_15033390:
    goto L_150333DF; /* 0x15033390: jmp 0x150333df */
L_15033392:
    /* cmp edi, 0x7FFFFFFFu */ /* 0x15033392: cmp edi, 0x7fffffff */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(0x7FFFFFFFu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_B(_flag_a, _flag_b)) goto L_150333DF; /* 0x15033398: jb 0x150333df */
L_1503339A:
    if (CMP_A(_flag_a, _flag_b)) goto L_150333A1; /* 0x1503339A: ja 0x150333a1 */
L_1503339C:
    /* cmp ebx, 0xFFFFFFFFu */ /* 0x1503339C: cmp ebx, -1 */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(0xFFFFFFFFu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_150333DF; /* 0x1503339F: jbe 0x150333df */
L_150333A1:
    ecx = MEM32(ebp + 0x1C); /* 0x150333A1: mov ecx, dword ptr [ebp + 0x1c] */
    /* test ecx, ecx */ /* 0x150333A4: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_150333B8; /* 0x150333A6: jne 0x150333b8 */
L_150333A8:
    RECOMP_CALL(sub_15036430); /* 0x150333A8: call 0x15036430 */
    RECOMP_FLAGS_IN();
    MEM32(eax) = 0x22u; /* 0x150333AD: mov dword ptr [eax], 0x22 */
    eax = MEM32(ebp + (-0x8)); /* 0x150333B3: mov eax, dword ptr [ebp - 8] */
    goto L_150333BE; /* 0x150333B6: jmp 0x150333be */
L_150333B8:
    MEM32(ecx) = 0x22u; /* 0x150333B8: mov dword ptr [ecx], 0x22 */
L_150333BE:
    /* test LO8(eax), 1 */ /* 0x150333BE: test al, 1 */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(1) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_150333CA; /* 0x150333C0: je 0x150333ca */
L_150333C2:
    _flag_a = (uint32_t)((ebx | 0xFFFFFFFFu)); _flag_b = (uint32_t)((ebx | 0xFFFFFFFFu));
    ebx = ebx | 0xFFFFFFFFu; /* 0x150333C2: or ebx, 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)((edi | 0xFFFFFFFFu)); _flag_b = (uint32_t)((edi | 0xFFFFFFFFu));
    edi = edi | 0xFFFFFFFFu; /* 0x150333C5: or edi, 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_150333DF; /* 0x150333C8: jmp 0x150333df */
L_150333CA:
    /* test LO8(eax), 2 */ /* 0x150333CA: test al, 2 */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(2) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_150333D7; /* 0x150333CC: je 0x150333d7 */
L_150333CE:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ebx = 0; /* 0x150333CE: xor ebx, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
    edi = 0x80000000u; /* 0x150333D0: mov edi, 0x80000000 */
    goto L_150333DF; /* 0x150333D5: jmp 0x150333df */
L_150333D7:
    _flag_a = (uint32_t)((ebx | 0xFFFFFFFFu)); _flag_b = (uint32_t)((ebx | 0xFFFFFFFFu));
    ebx = ebx | 0xFFFFFFFFu; /* 0x150333D7: or ebx, 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    edi = 0x7FFFFFFFu; /* 0x150333DA: mov edi, 0x7fffffff */
L_150333DF:
    ecx = MEM32(ebp + 0x10); /* 0x150333DF: mov ecx, dword ptr [ebp + 0x10] */
    /* test ecx, ecx */ /* 0x150333E2: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_150333E8; /* 0x150333E4: je 0x150333e8 */
L_150333E6:
    MEM32(ecx) = esi; /* 0x150333E6: mov dword ptr [ecx], esi */
L_150333E8:
    /* test LO8(eax), 2 */ /* 0x150333E8: test al, 2 */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(2) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_1503340F; /* 0x150333EA: je 0x1503340f */
L_150333EC:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(ebx);
    _cf = (ebx) != 0;
    ebx = (uint32_t)(-(int32_t)ebx); /* 0x150333EC: neg ebx */
    _flag_k = FK_CMP;
    { uint32_t _aa = edi, _ab = 0, _ac = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x150333EE: adc edi, 0 */
      edi = _aa + _ab + _ac;
      _flag_a = recomp_flags_adc(_aa, _ab, _ac); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(edi);
    _cf = (edi) != 0;
    edi = (uint32_t)(-(int32_t)edi); /* 0x150333F1: neg edi */
    _flag_k = FK_CMP;
    goto L_1503340F; /* 0x150333F3: jmp 0x1503340f */
L_150333F5:
    eax = MEM32(ebp + 0x10); /* 0x150333F5: mov eax, dword ptr [ebp + 0x10] */
    /* test eax, eax */ /* 0x150333F8: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_15033401; /* 0x150333FA: je 0x15033401 */
L_150333FC:
    ecx = MEM32(ebp + 0xC); /* 0x150333FC: mov ecx, dword ptr [ebp + 0xc] */
    MEM32(eax) = ecx; /* 0x150333FF: mov dword ptr [eax], ecx */
L_15033401:
    { xmm_t _s = _xmm[0]; for (int _k = 0; _k < 4; _k++) _xmm[0].u32[_k] = _xmm[0].u32[_k] ^ _s.u32[_k]; } /* 0x15033401: xorps xmm0, xmm0 */
    MEM64(ebp + (-0x28)) = _xmm[0].u64[0]; /* 0x15033404: movlpd qword ptr [ebp - 0x28], xmm0 */
    edi = MEM32(ebp + (-0x24)); /* 0x15033409: mov edi, dword ptr [ebp - 0x24] */
    ebx = MEM32(ebp + (-0x28)); /* 0x1503340C: mov ebx, dword ptr [ebp - 0x28] */
L_1503340F:
    /* cmp MEM8(ebp + (-0x2C)), 0 */ /* 0x1503340F: cmp byte ptr [ebp - 0x2c], 0 */
    _flag_a = (uint32_t)(MEM8(ebp + (-0x2C))) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1503341C; /* 0x15033413: je 0x1503341c */
L_15033415:
    ecx = MEM32(ebp + (-0x30)); /* 0x15033415: mov ecx, dword ptr [ebp - 0x30] */
    _flag_a = (uint32_t)(MEM32(ecx + 0x70)); _flag_b = (uint32_t)(0xFFFFFFFDu);
    MEM32(ecx + 0x70) = MEM32(ecx + 0x70) & 0xFFFFFFFDu; /* 0x15033418: and dword ptr [ecx + 0x70], 0xfffffffd */
    _cf = 0;
    _flag_k = FK_TEST;
L_1503341C:
    edx = edi; /* 0x1503341C: mov edx, edi */
    eax = ebx; /* 0x1503341E: mov eax, ebx */
    edi = POP32_VAL(esp); /* 0x15033420: pop edi */
    esi = POP32_VAL(esp); /* 0x15033421: pop esi */
    ebx = POP32_VAL(esp); /* 0x15033422: pop ebx */
    esp = ebp; ebp = POP32_VAL(esp); /* 0x15033423: leave  */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x15033424: ret  */
    RECOMP_REGS_OUT();
}

void sub_15033430(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x15033430u);

L_15033430:
    edi = edi; /* 0x15033430: mov edi, edi */
    PUSH32(esp, ebp); /* 0x15033432: push ebp */
    ebp = esp; /* 0x15033433: mov ebp, esp */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x15033435: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, eax); /* 0x15033437: push eax */
    PUSH32(esp, eax); /* 0x15033438: push eax */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x15033439: push dword ptr [ebp + 0x10] */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x1503343C: push dword ptr [ebp + 0xc] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x1503343F: push dword ptr [ebp + 8] */
    /* cmp MEM32(0x150BDBA0), eax */ /* 0x15033442: cmp dword ptr [0x150bdba0], eax */
    _flag_a = (uint32_t)(MEM32(0x150BDBA0)); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_15033451; /* 0x15033448: jne 0x15033451 */
L_1503344A:
    PUSH32(esp, 0x15001298u); /* 0x1503344A: push 0x15001298 */
    goto L_15033452; /* 0x1503344F: jmp 0x15033452 */
L_15033451:
    PUSH32(esp, eax); /* 0x15033451: push eax */
L_15033452:
    RECOMP_CALL(sub_1503310D); /* 0x15033452: call 0x1503310d */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x18u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x18u; /* 0x15033457: add esp, 0x18 */
    _flag_k = FK_ADD;
    ebp = POP32_VAL(esp); /* 0x1503345A: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1503345B: ret  */
    RECOMP_REGS_OUT();
}

void sub_15033470(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x15033470u);

L_15033470:
    edi = edi; /* 0x15033470: mov edi, edi */
    PUSH32(esp, ebp); /* 0x15033472: push ebp */
    ebp = esp; /* 0x15033473: mov ebp, esp */
    PUSH32(esp, 0); /* 0x15033475: push 0 */
    PUSH32(esp, 0); /* 0x15033477: push 0 */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x15033479: push dword ptr [ebp + 0x10] */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x1503347C: push dword ptr [ebp + 0xc] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x1503347F: push dword ptr [ebp + 8] */
    PUSH32(esp, MEM32(ebp + 0x14)); /* 0x15033482: push dword ptr [ebp + 0x14] */
    RECOMP_CALL(sub_1503310D); /* 0x15033485: call 0x1503310d */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x18u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x18u; /* 0x1503348A: add esp, 0x18 */
    _flag_k = FK_ADD;
    ebp = POP32_VAL(esp); /* 0x1503348D: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1503348E: ret  */
    RECOMP_REGS_OUT();
}

void sub_150334A0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x150334A0u);

L_150334A0:
    edi = edi; /* 0x150334A0: mov edi, edi */
    PUSH32(esp, ebp); /* 0x150334A2: push ebp */
    ebp = esp; /* 0x150334A3: mov ebp, esp */
    /* cmp MEM32(0x150BDBA0), 0 */ /* 0x150334A5: cmp dword ptr [0x150bdba0], 0 */
    _flag_a = (uint32_t)(MEM32(0x150BDBA0)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    PUSH32(esp, 0); /* 0x150334AC: push 0 */
    PUSH32(esp, 1); /* 0x150334AE: push 1 */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x150334B0: push dword ptr [ebp + 0x10] */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x150334B3: push dword ptr [ebp + 0xc] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x150334B6: push dword ptr [ebp + 8] */
    if (CMP_NE(_flag_a, _flag_b)) goto L_150334C2; /* 0x150334B9: jne 0x150334c2 */
L_150334BB:
    PUSH32(esp, 0x15001298u); /* 0x150334BB: push 0x15001298 */
    goto L_150334C4; /* 0x150334C0: jmp 0x150334c4 */
L_150334C2:
    PUSH32(esp, 0); /* 0x150334C2: push 0 */
L_150334C4:
    RECOMP_CALL(sub_1503310D); /* 0x150334C4: call 0x1503310d */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x18u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x18u; /* 0x150334C9: add esp, 0x18 */
    _flag_k = FK_ADD;
    ebp = POP32_VAL(esp); /* 0x150334CC: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x150334CD: ret  */
    RECOMP_REGS_OUT();
}

void sub_150334E0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x150334E0u);

L_150334E0:
    edi = edi; /* 0x150334E0: mov edi, edi */
    PUSH32(esp, ebp); /* 0x150334E2: push ebp */
    ebp = esp; /* 0x150334E3: mov ebp, esp */
    PUSH32(esp, 0); /* 0x150334E5: push 0 */
    PUSH32(esp, 1); /* 0x150334E7: push 1 */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x150334E9: push dword ptr [ebp + 0x10] */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x150334EC: push dword ptr [ebp + 0xc] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x150334EF: push dword ptr [ebp + 8] */
    PUSH32(esp, MEM32(ebp + 0x14)); /* 0x150334F2: push dword ptr [ebp + 0x14] */
    RECOMP_CALL(sub_1503310D); /* 0x150334F5: call 0x1503310d */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x18u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x18u; /* 0x150334FA: add esp, 0x18 */
    _flag_k = FK_ADD;
    ebp = POP32_VAL(esp); /* 0x150334FD: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x150334FE: ret  */
    RECOMP_REGS_OUT();
}

void sub_15033505(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x15033505u);

L_15033505:
    edi = edi; /* 0x15033505: mov edi, edi */
    PUSH32(esp, ebp); /* 0x15033507: push ebp */
    ebp = esp; /* 0x15033508: mov ebp, esp */
    PUSH32(esp, 0); /* 0x1503350A: push 0 */
    PUSH32(esp, MEM32(ebp + 0x18)); /* 0x1503350C: push dword ptr [ebp + 0x18] */
    PUSH32(esp, MEM32(ebp + 0x14)); /* 0x1503350F: push dword ptr [ebp + 0x14] */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x15033512: push dword ptr [ebp + 0x10] */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x15033515: push dword ptr [ebp + 0xc] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x15033518: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_1503352B); /* 0x1503351B: call 0x1503352b */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x18u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x18u; /* 0x15033520: add esp, 0x18 */
    _flag_k = FK_ADD;
    ebp = POP32_VAL(esp); /* 0x15033523: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x15033524: ret  */
    RECOMP_REGS_OUT();
}

void sub_1503352B(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1503352Bu);

L_1503352B:
    edi = edi; /* 0x1503352B: mov edi, edi */
    PUSH32(esp, ebp); /* 0x1503352D: push ebp */
    ebp = esp; /* 0x1503352E: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x24u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x24u; /* 0x15033530: sub esp, 0x24 */
    _flag_k = FK_CMP;
    PUSH32(esp, ebx); /* 0x15033533: push ebx */
    ebx = MEM32(ebp + 0x14); /* 0x15033534: mov ebx, dword ptr [ebp + 0x14] */
    ecx = ebp + (-0x24); /* 0x15033537: lea ecx, [ebp - 0x24] */
    PUSH32(esp, esi); /* 0x1503353A: push esi */
    PUSH32(esp, edi); /* 0x1503353B: push edi */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x1503353C: push dword ptr [ebp + 8] */
    MEM32(ebp + (-0x4)) = ebx; /* 0x1503353F: mov dword ptr [ebp - 4], ebx */
    RECOMP_CALL(sub_1502F870); /* 0x15033542: call 0x1502f870 */
    RECOMP_FLAGS_IN();
    eax = MEM32(ebp + 0x10); /* 0x15033547: mov eax, dword ptr [ebp + 0x10] */
    esi = MEM32(ebp + 0xC); /* 0x1503354A: mov esi, dword ptr [ebp + 0xc] */
    /* test eax, eax */ /* 0x1503354D: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_15033553; /* 0x1503354F: je 0x15033553 */
L_15033551:
    MEM32(eax) = esi; /* 0x15033551: mov dword ptr [eax], esi */
L_15033553:
    /* test esi, esi */ /* 0x15033553: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_15033565; /* 0x15033555: je 0x15033565 */
L_15033557:
    /* test ebx, ebx */ /* 0x15033557: test ebx, ebx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ebx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_15033584; /* 0x15033559: je 0x15033584 */
L_1503355B:
    /* cmp ebx, 2 */ /* 0x1503355B: cmp ebx, 2 */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_L(_flag_a, _flag_b)) goto L_15033565; /* 0x1503355E: jl 0x15033565 */
L_15033560:
    /* cmp ebx, 0x24u */ /* 0x15033560: cmp ebx, 0x24 */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(0x24u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_LE(_flag_a, _flag_b)) goto L_15033584; /* 0x15033563: jle 0x15033584 */
L_15033565:
    RECOMP_CALL(sub_15036430); /* 0x15033565: call 0x15036430 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edi = 0; /* 0x1503356A: xor edi, edi */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, edi); /* 0x1503356C: push edi */
    PUSH32(esp, edi); /* 0x1503356D: push edi */
    PUSH32(esp, edi); /* 0x1503356E: push edi */
    PUSH32(esp, edi); /* 0x1503356F: push edi */
    PUSH32(esp, edi); /* 0x15033570: push edi */
    MEM32(eax) = 0x16u; /* 0x15033571: mov dword ptr [eax], 0x16 */
    RECOMP_CALL(sub_1505A110); /* 0x15033577: call 0x1505a110 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x14u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x14u; /* 0x1503357C: add esp, 0x14 */
    _flag_k = FK_ADD;
    goto L_15033762; /* 0x1503357F: jmp 0x15033762 */
L_15033584:
    RECOMP_CALL(sub_15036430); /* 0x15033584: call 0x15036430 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edi = 0; /* 0x15033589: xor edi, edi */
    _cf = 0;
    _flag_k = FK_TEST;
    ebx = edi; /* 0x1503358B: mov ebx, edi */
    MEM32(eax) = edi; /* 0x1503358D: mov dword ptr [eax], edi */
L_1503358F:
    eax = (uint32_t)MEM16(esi); /* 0x1503358F: movzx eax, word ptr [esi] */
    ecx = ebp + (-0x24); /* 0x15033592: lea ecx, [ebp - 0x24] */
    PUSH32(esp, ecx); /* 0x15033595: push ecx */
    PUSH32(esp, 8); /* 0x15033596: push 8 */
    PUSH32(esp, eax); /* 0x15033598: push eax */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esi = esi + 2; /* 0x15033599: add esi, 2 */
    _flag_k = FK_ADD;
    MEM32(ebp + (-0xC)) = eax; /* 0x1503359C: mov dword ptr [ebp - 0xc], eax */
    RECOMP_CALL(sub_15031890); /* 0x1503359F: call 0x15031890 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x150335A4: add esp, 0xc */
    _flag_k = FK_ADD;
    /* test eax, eax */ /* 0x150335A7: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1503358F; /* 0x150335A9: jne 0x1503358f */
L_150335AB:
    ecx = MEM32(ebp + (-0xC)); /* 0x150335AB: mov ecx, dword ptr [ebp - 0xc] */
    eax = MEM32(ebp + 0x18); /* 0x150335AE: mov eax, dword ptr [ebp + 0x18] */
    /* cmp LO16(ecx), 0x2Du */ /* 0x150335B1: cmp cx, 0x2d */
    _flag_a = (uint32_t)(LO16(ecx)) << 16; _flag_b = (uint32_t)(0x2Du) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    if (CMP_NE(_flag_a, _flag_b)) goto L_150335BC; /* 0x150335B5: jne 0x150335bc */
L_150335B7:
    _flag_a = (uint32_t)((eax | 2)); _flag_b = (uint32_t)((eax | 2));
    eax = eax | 2; /* 0x150335B7: or eax, 2 */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_150335C2; /* 0x150335BA: jmp 0x150335c2 */
L_150335BC:
    /* cmp LO16(ecx), 0x2Bu */ /* 0x150335BC: cmp cx, 0x2b */
    _flag_a = (uint32_t)(LO16(ecx)) << 16; _flag_b = (uint32_t)(0x2Bu) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    if (CMP_NE(_flag_a, _flag_b)) goto L_150335CB; /* 0x150335C0: jne 0x150335cb */
L_150335C2:
    ecx = (uint32_t)MEM16(esi); /* 0x150335C2: movzx ecx, word ptr [esi] */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esi = esi + 2; /* 0x150335C5: add esi, 2 */
    _flag_k = FK_ADD;
    MEM32(ebp + (-0xC)) = ecx; /* 0x150335C8: mov dword ptr [ebp - 0xc], ecx */
L_150335CB:
    MEM32(ebp + (-0x8)) = eax; /* 0x150335CB: mov dword ptr [ebp - 8], eax */
    eax = MEM32(ebp + (-0x4)); /* 0x150335CE: mov eax, dword ptr [ebp - 4] */
    /* test eax, eax */ /* 0x150335D1: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_15033608; /* 0x150335D3: jne 0x15033608 */
L_150335D5:
    PUSH32(esp, ecx); /* 0x150335D5: push ecx */
    RECOMP_CALL(sub_1503496F); /* 0x150335D6: call 0x1503496f */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x150335DB: pop ecx */
    /* test eax, eax */ /* 0x150335DC: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_150335E8; /* 0x150335DE: je 0x150335e8 */
L_150335E0:
    PUSH32(esp, 0xAu); /* 0x150335E0: push 0xa */
L_150335E2:
    ecx = POP32_VAL(esp); /* 0x150335E2: pop ecx */
    MEM32(ebp + (-0x4)) = ecx; /* 0x150335E3: mov dword ptr [ebp - 4], ecx */
    goto L_1503363F; /* 0x150335E6: jmp 0x1503363f */
L_150335E8:
    eax = (uint32_t)MEM16(esi); /* 0x150335E8: movzx eax, word ptr [esi] */
    PUSH32(esp, 0x78u); /* 0x150335EB: push 0x78 */
    ecx = POP32_VAL(esp); /* 0x150335ED: pop ecx */
    /* cmp LO16(eax), LO16(ecx) */ /* 0x150335EE: cmp ax, cx */
    _flag_a = (uint32_t)(LO16(eax)) << 16; _flag_b = (uint32_t)(LO16(ecx)) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_150335FF; /* 0x150335F1: je 0x150335ff */
L_150335F3:
    PUSH32(esp, 0x58u); /* 0x150335F3: push 0x58 */
    ecx = POP32_VAL(esp); /* 0x150335F5: pop ecx */
    /* cmp LO16(eax), LO16(ecx) */ /* 0x150335F6: cmp ax, cx */
    _flag_a = (uint32_t)(LO16(eax)) << 16; _flag_b = (uint32_t)(LO16(ecx)) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_150335FF; /* 0x150335F9: je 0x150335ff */
L_150335FB:
    PUSH32(esp, 8); /* 0x150335FB: push 8 */
    RECOMP_BACKEDGE();
    goto L_150335E2; /* 0x150335FD: jmp 0x150335e2 */
L_150335FF:
    MEM32(ebp + (-0x4)) = 0x10u; /* 0x150335FF: mov dword ptr [ebp - 4], 0x10 */
    goto L_15033611; /* 0x15033606: jmp 0x15033611 */
L_15033608:
    /* cmp eax, 0x10u */ /* 0x15033608: cmp eax, 0x10 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_150336CF; /* 0x1503360B: jne 0x150336cf */
L_15033611:
    eax = MEM32(ebp + (-0xC)); /* 0x15033611: mov eax, dword ptr [ebp - 0xc] */
    PUSH32(esp, eax); /* 0x15033614: push eax */
    RECOMP_CALL(sub_1503496F); /* 0x15033615: call 0x1503496f */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1503361A: pop ecx */
    /* test eax, eax */ /* 0x1503361B: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1503363C; /* 0x1503361D: jne 0x1503363c */
L_1503361F:
    eax = (uint32_t)MEM16(esi); /* 0x1503361F: movzx eax, word ptr [esi] */
    PUSH32(esp, 0x78u); /* 0x15033622: push 0x78 */
    ecx = POP32_VAL(esp); /* 0x15033624: pop ecx */
    /* cmp LO16(eax), LO16(ecx) */ /* 0x15033625: cmp ax, cx */
    _flag_a = (uint32_t)(LO16(eax)) << 16; _flag_b = (uint32_t)(LO16(ecx)) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_15033632; /* 0x15033628: je 0x15033632 */
L_1503362A:
    PUSH32(esp, 0x58u); /* 0x1503362A: push 0x58 */
    ecx = POP32_VAL(esp); /* 0x1503362C: pop ecx */
    /* cmp LO16(eax), LO16(ecx) */ /* 0x1503362D: cmp ax, cx */
    _flag_a = (uint32_t)(LO16(eax)) << 16; _flag_b = (uint32_t)(LO16(ecx)) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    if (CMP_NE(_flag_a, _flag_b)) goto L_1503363C; /* 0x15033630: jne 0x1503363c */
L_15033632:
    eax = (uint32_t)MEM16(esi + 0x2); /* 0x15033632: movzx eax, word ptr [esi + 2] */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esi = esi + 4; /* 0x15033636: add esi, 4 */
    _flag_k = FK_ADD;
    MEM32(ebp + (-0xC)) = eax; /* 0x15033639: mov dword ptr [ebp - 0xc], eax */
L_1503363C:
    ecx = MEM32(ebp + (-0x4)); /* 0x1503363C: mov ecx, dword ptr [ebp - 4] */
L_1503363F:
    _flag_a = (uint32_t)((eax | 0xFFFFFFFFu)); _flag_b = (uint32_t)((eax | 0xFFFFFFFFu));
    eax = eax | 0xFFFFFFFFu; /* 0x1503363F: or eax, 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    edi = MEM32(ebp + (-0xC)); /* 0x15033642: mov edi, dword ptr [ebp - 0xc] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edx = 0; /* 0x15033645: xor edx, edx */
    _cf = 0;
    _flag_k = FK_TEST;
    { uint64_t _dividend = ((uint64_t)edx << 32) | eax; uint32_t _dv = (uint32_t)ecx; /* 0x15033647: div ecx */
      if (_dv) { eax = (uint32_t)(_dividend / _dv); edx = (uint32_t)(_dividend % _dv); }
      else { eax = 0; edx = 0; } }
    MEM32(ebp + (-0x14)) = eax; /* 0x15033649: mov dword ptr [ebp - 0x14], eax */
L_1503364C:
    eax = (uint32_t)LO16(edi); /* 0x1503364C: movzx eax, di */
    PUSH32(esp, edi); /* 0x1503364F: push edi */
    MEM32(ebp + (-0x10)) = eax; /* 0x15033650: mov dword ptr [ebp - 0x10], eax */
    RECOMP_CALL(sub_1503496F); /* 0x15033653: call 0x1503496f */
    RECOMP_FLAGS_IN();
    edx = eax; /* 0x15033658: mov edx, eax */
    MEM32(ebp + (-0xC)) = eax; /* 0x1503365A: mov dword ptr [ebp - 0xc], eax */
    ecx = POP32_VAL(esp); /* 0x1503365D: pop ecx */
    /* cmp edx, 0xFFFFFFFFu */ /* 0x1503365E: cmp edx, -1 */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(0xFFFFFFFFu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_15033697; /* 0x15033661: jne 0x15033697 */
L_15033663:
    PUSH32(esp, 0x41u); /* 0x15033663: push 0x41 */
    eax = POP32_VAL(esp); /* 0x15033665: pop eax */
    /* cmp LO16(eax), LO16(edi) */ /* 0x15033666: cmp ax, di */
    _flag_a = (uint32_t)(LO16(eax)) << 16; _flag_b = (uint32_t)(LO16(edi)) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    if (CMP_A(_flag_a, _flag_b)) goto L_15033671; /* 0x15033669: ja 0x15033671 */
L_1503366B:
    /* cmp LO16(edi), 0x5Au */ /* 0x1503366B: cmp di, 0x5a */
    _flag_a = (uint32_t)(LO16(edi)) << 16; _flag_b = (uint32_t)(0x5Au) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    if (CMP_BE(_flag_a, _flag_b)) goto L_1503367C; /* 0x1503366F: jbe 0x1503367c */
L_15033671:
    PUSH32(esp, 0x19u); /* 0x15033671: push 0x19 */
    eax = edi + (-0x61); /* 0x15033673: lea eax, [edi - 0x61] */
    ecx = POP32_VAL(esp); /* 0x15033676: pop ecx */
    /* cmp LO16(eax), LO16(ecx) */ /* 0x15033677: cmp ax, cx */
    _flag_a = (uint32_t)(LO16(eax)) << 16; _flag_b = (uint32_t)(LO16(ecx)) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    if (CMP_A(_flag_a, _flag_b)) goto L_150336E9; /* 0x1503367A: ja 0x150336e9 */
L_1503367C:
    eax = MEM32(ebp + (-0x10)); /* 0x1503367C: mov eax, dword ptr [ebp - 0x10] */
    ecx = (uint32_t)LO16(eax); /* 0x1503367F: movzx ecx, ax */
    eax = edi + (-0x61); /* 0x15033682: lea eax, [edi - 0x61] */
    PUSH32(esp, 0x19u); /* 0x15033685: push 0x19 */
    edi = POP32_VAL(esp); /* 0x15033687: pop edi */
    /* cmp LO16(eax), LO16(edi) */ /* 0x15033688: cmp ax, di */
    _flag_a = (uint32_t)(LO16(eax)) << 16; _flag_b = (uint32_t)(LO16(edi)) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    edx = ecx + (-0x20); /* 0x1503368B: lea edx, [ecx - 0x20] */
    if (CMP_A(_flag_a, _flag_b)) { edx = ecx; } /* 0x1503368E: cmova edx, ecx */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(0x37u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    edx = edx - 0x37u; /* 0x15033691: sub edx, 0x37 */
    _flag_k = FK_CMP;
    MEM32(ebp + (-0xC)) = edx; /* 0x15033694: mov dword ptr [ebp - 0xc], edx */
L_15033697:
    edi = MEM32(ebp + (-0x4)); /* 0x15033697: mov edi, dword ptr [ebp - 4] */
    ecx = MEM32(ebp + (-0x8)); /* 0x1503369A: mov ecx, dword ptr [ebp - 8] */
    /* cmp edx, edi */ /* 0x1503369D: cmp edx, edi */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_AE(_flag_a, _flag_b)) goto L_150336EC; /* 0x1503369F: jae 0x150336ec */
L_150336A1:
    _flag_a = (uint32_t)((ecx | 8)); _flag_b = (uint32_t)((ecx | 8));
    ecx = ecx | 8; /* 0x150336A1: or ecx, 8 */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp MEM32(ebp + 0x1C), 0 */ /* 0x150336A4: cmp dword ptr [ebp + 0x1c], 0 */
    _flag_a = (uint32_t)(MEM32(ebp + 0x1C)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    MEM32(ebp + (-0x8)) = ecx; /* 0x150336A8: mov dword ptr [ebp - 8], ecx */
    if (CMP_NE(_flag_a, _flag_b)) goto L_150336D9; /* 0x150336AB: jne 0x150336d9 */
L_150336AD:
    /* cmp ebx, MEM32(ebp + (-0x14)) */ /* 0x150336AD: cmp ebx, dword ptr [ebp - 0x14] */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(MEM32(ebp + (-0x14)));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_B(_flag_a, _flag_b)) goto L_150336D9; /* 0x150336B0: jb 0x150336d9 */
L_150336B2:
    if (CMP_NE(_flag_a, _flag_b)) goto L_150336C0; /* 0x150336B2: jne 0x150336c0 */
L_150336B4:
    _flag_a = (uint32_t)((eax | 0xFFFFFFFFu)); _flag_b = (uint32_t)((eax | 0xFFFFFFFFu));
    eax = eax | 0xFFFFFFFFu; /* 0x150336B4: or eax, 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edx = 0; /* 0x150336B7: xor edx, edx */
    _cf = 0;
    _flag_k = FK_TEST;
    { uint64_t _dividend = ((uint64_t)edx << 32) | eax; uint32_t _dv = (uint32_t)edi; /* 0x150336B9: div edi */
      if (_dv) { eax = (uint32_t)(_dividend / _dv); edx = (uint32_t)(_dividend % _dv); }
      else { eax = 0; edx = 0; } }
    /* cmp MEM32(ebp + (-0xC)), edx */ /* 0x150336BB: cmp dword ptr [ebp - 0xc], edx */
    _flag_a = (uint32_t)(MEM32(ebp + (-0xC))); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_150336D6; /* 0x150336BE: jbe 0x150336d6 */
L_150336C0:
    eax = MEM32(ebp + 0x10); /* 0x150336C0: mov eax, dword ptr [ebp + 0x10] */
    _flag_a = (uint32_t)((ecx | 4)); _flag_b = (uint32_t)((ecx | 4));
    ecx = ecx | 4; /* 0x150336C3: or ecx, 4 */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x8)) = ecx; /* 0x150336C6: mov dword ptr [ebp - 8], ecx */
    /* test eax, eax */ /* 0x150336C9: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_150336EF; /* 0x150336CB: je 0x150336ef */
L_150336CD:
    goto L_150336DE; /* 0x150336CD: jmp 0x150336de */
L_150336CF:
    ecx = eax; /* 0x150336CF: mov ecx, eax */
    RECOMP_BACKEDGE();
    goto L_1503363F; /* 0x150336D1: jmp 0x1503363f */
L_150336D6:
    edx = MEM32(ebp + (-0xC)); /* 0x150336D6: mov edx, dword ptr [ebp - 0xc] */
L_150336D9:
    ebx = (uint32_t)((int32_t)ebx * (int32_t)edi); /* 0x150336D9: imul ebx, edi */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ebx = ebx + edx; /* 0x150336DC: add ebx, edx */
    _flag_k = FK_ADD;
L_150336DE:
    edi = (uint32_t)MEM16(esi); /* 0x150336DE: movzx edi, word ptr [esi] */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esi = esi + 2; /* 0x150336E1: add esi, 2 */
    _flag_k = FK_ADD;
    RECOMP_BACKEDGE();
    goto L_1503364C; /* 0x150336E4: jmp 0x1503364c */
L_150336E9:
    ecx = MEM32(ebp + (-0x8)); /* 0x150336E9: mov ecx, dword ptr [ebp - 8] */
L_150336EC:
    eax = MEM32(ebp + 0x10); /* 0x150336EC: mov eax, dword ptr [ebp + 0x10] */
L_150336EF:
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esi = esi - 2; /* 0x150336EF: sub esi, 2 */
    _flag_k = FK_CMP;
    PUSH32(esp, 0); /* 0x150336F2: push 0 */
    edi = POP32_VAL(esp); /* 0x150336F4: pop edi */
    /* test LO8(ecx), 8 */ /* 0x150336F5: test cl, 8 */
    _flag_a = (uint32_t)(LO8(ecx)) << 24; _flag_b = (uint32_t)(8) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_15033704; /* 0x150336F8: jne 0x15033704 */
L_150336FA:
    /* test eax, eax */ /* 0x150336FA: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    ebx = edi; /* 0x150336FC: mov ebx, edi */
    if (TEST_NZ(_flag_a, _flag_b)) { esi = MEM32(ebp + 0xC); } /* 0x150336FE: cmovne esi, dword ptr [ebp + 0xc] */
    goto L_1503374F; /* 0x15033702: jmp 0x1503374f */
L_15033704:
    edi = 0x7FFFFFFFu; /* 0x15033704: mov edi, 0x7fffffff */
    /* test LO8(ecx), 4 */ /* 0x15033709: test cl, 4 */
    _flag_a = (uint32_t)(LO8(ecx)) << 24; _flag_b = (uint32_t)(4) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_15033726; /* 0x1503370C: jne 0x15033726 */
L_1503370E:
    /* test LO8(ecx), 1 */ /* 0x1503370E: test cl, 1 */
    _flag_a = (uint32_t)(LO8(ecx)) << 24; _flag_b = (uint32_t)(1) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1503374F; /* 0x15033711: jne 0x1503374f */
L_15033713:
    /* test LO8(ecx), 2 */ /* 0x15033713: test cl, 2 */
    _flag_a = (uint32_t)(LO8(ecx)) << 24; _flag_b = (uint32_t)(2) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_15033722; /* 0x15033716: je 0x15033722 */
L_15033718:
    /* cmp ebx, 0x80000000u */ /* 0x15033718: cmp ebx, 0x80000000 */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(0x80000000u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_A(_flag_a, _flag_b)) goto L_15033726; /* 0x1503371E: ja 0x15033726 */
L_15033720:
    goto L_1503374F; /* 0x15033720: jmp 0x1503374f */
L_15033722:
    /* cmp ebx, edi */ /* 0x15033722: cmp ebx, edi */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_1503374F; /* 0x15033724: jbe 0x1503374f */
L_15033726:
    /* cmp MEM32(ebp + 0x1C), 0 */ /* 0x15033726: cmp dword ptr [ebp + 0x1c], 0 */
    _flag_a = (uint32_t)(MEM32(ebp + 0x1C)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_1503374F; /* 0x1503372A: jne 0x1503374f */
L_1503372C:
    RECOMP_CALL(sub_15036430); /* 0x1503372C: call 0x15036430 */
    RECOMP_FLAGS_IN();
    ecx = MEM32(ebp + (-0x8)); /* 0x15033731: mov ecx, dword ptr [ebp - 8] */
    MEM32(eax) = 0x22u; /* 0x15033734: mov dword ptr [eax], 0x22 */
    /* test LO8(ecx), 1 */ /* 0x1503373A: test cl, 1 */
    _flag_a = (uint32_t)(LO8(ecx)) << 24; _flag_b = (uint32_t)(1) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_15033744; /* 0x1503373D: je 0x15033744 */
L_1503373F:
    _flag_a = (uint32_t)((ebx | 0xFFFFFFFFu)); _flag_b = (uint32_t)((ebx | 0xFFFFFFFFu));
    ebx = ebx | 0xFFFFFFFFu; /* 0x1503373F: or ebx, 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_1503374F; /* 0x15033742: jmp 0x1503374f */
L_15033744:
    /* test LO8(ecx), 2 */ /* 0x15033744: test cl, 2 */
    _flag_a = (uint32_t)(LO8(ecx)) << 24; _flag_b = (uint32_t)(2) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    PUSH32(esp, 0); /* 0x15033747: push 0 */
    ebx = POP32_VAL(esp); /* 0x15033749: pop ebx */
    SET_LO8(ebx, (TEST_NZ(_flag_a, _flag_b)) ? 1 : 0); /* 0x1503374A: setne bl */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ebx = ebx + edi; /* 0x1503374D: add ebx, edi */
    _flag_k = FK_ADD;
L_1503374F:
    eax = MEM32(ebp + 0x10); /* 0x1503374F: mov eax, dword ptr [ebp + 0x10] */
    /* test eax, eax */ /* 0x15033752: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_15033758; /* 0x15033754: je 0x15033758 */
L_15033756:
    MEM32(eax) = esi; /* 0x15033756: mov dword ptr [eax], esi */
L_15033758:
    edi = ebx; /* 0x15033758: mov edi, ebx */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(edi);
    _cf = (edi) != 0;
    edi = (uint32_t)(-(int32_t)edi); /* 0x1503375A: neg edi */
    _flag_k = FK_CMP;
    /* test LO8(ecx), 2 */ /* 0x1503375C: test cl, 2 */
    _flag_a = (uint32_t)(LO8(ecx)) << 24; _flag_b = (uint32_t)(2) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) { edi = ebx; } /* 0x1503375F: cmove edi, ebx */
L_15033762:
    /* cmp MEM8(ebp + (-0x18)), 0 */ /* 0x15033762: cmp byte ptr [ebp - 0x18], 0 */
    _flag_a = (uint32_t)(MEM8(ebp + (-0x18))) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1503376F; /* 0x15033766: je 0x1503376f */
L_15033768:
    ecx = MEM32(ebp + (-0x1C)); /* 0x15033768: mov ecx, dword ptr [ebp - 0x1c] */
    _flag_a = (uint32_t)(MEM32(ecx + 0x70)); _flag_b = (uint32_t)(0xFFFFFFFDu);
    MEM32(ecx + 0x70) = MEM32(ecx + 0x70) & 0xFFFFFFFDu; /* 0x1503376B: and dword ptr [ecx + 0x70], 0xfffffffd */
    _cf = 0;
    _flag_k = FK_TEST;
L_1503376F:
    eax = edi; /* 0x1503376F: mov eax, edi */
    edi = POP32_VAL(esp); /* 0x15033771: pop edi */
    esi = POP32_VAL(esp); /* 0x15033772: pop esi */
    ebx = POP32_VAL(esp); /* 0x15033773: pop ebx */
    esp = ebp; ebp = POP32_VAL(esp); /* 0x15033774: leave  */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x15033775: ret  */
    RECOMP_REGS_OUT();
}

void sub_15033780(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x15033780u);

L_15033780:
    edi = edi; /* 0x15033780: mov edi, edi */
    PUSH32(esp, ebp); /* 0x15033782: push ebp */
    ebp = esp; /* 0x15033783: mov ebp, esp */
    PUSH32(esp, 0); /* 0x15033785: push 0 */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x15033787: push dword ptr [ebp + 0x10] */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x1503378A: push dword ptr [ebp + 0xc] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x1503378D: push dword ptr [ebp + 8] */
    PUSH32(esp, MEM32(ebp + 0x14)); /* 0x15033790: push dword ptr [ebp + 0x14] */
    RECOMP_CALL(sub_15033505); /* 0x15033793: call 0x15033505 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x14u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x14u; /* 0x15033798: add esp, 0x14 */
    _flag_k = FK_ADD;
    ebp = POP32_VAL(esp); /* 0x1503379B: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1503379C: ret  */
    RECOMP_REGS_OUT();
}

void sub_150337B0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x150337B0u);

L_150337B0:
    edi = edi; /* 0x150337B0: mov edi, edi */
    PUSH32(esp, ebp); /* 0x150337B2: push ebp */
    ebp = esp; /* 0x150337B3: mov ebp, esp */
    PUSH32(esp, 1); /* 0x150337B5: push 1 */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x150337B7: push dword ptr [ebp + 0x10] */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x150337BA: push dword ptr [ebp + 0xc] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x150337BD: push dword ptr [ebp + 8] */
    PUSH32(esp, MEM32(ebp + 0x14)); /* 0x150337C0: push dword ptr [ebp + 0x14] */
    RECOMP_CALL(sub_15033505); /* 0x150337C3: call 0x15033505 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x14u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x14u; /* 0x150337C8: add esp, 0x14 */
    _flag_k = FK_ADD;
    ebp = POP32_VAL(esp); /* 0x150337CB: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x150337CC: ret  */
    RECOMP_REGS_OUT();
}

void sub_150337E0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x150337E0u);

L_150337E0:
    edi = edi; /* 0x150337E0: mov edi, edi */
    PUSH32(esp, ebp); /* 0x150337E2: push ebp */
    ebp = esp; /* 0x150337E3: mov ebp, esp */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x150337E5: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, eax); /* 0x150337E7: push eax */
    PUSH32(esp, eax); /* 0x150337E8: push eax */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x150337E9: push dword ptr [ebp + 0x10] */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x150337EC: push dword ptr [ebp + 0xc] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x150337EF: push dword ptr [ebp + 8] */
    /* cmp MEM32(0x150BDBA0), eax */ /* 0x150337F2: cmp dword ptr [0x150bdba0], eax */
    _flag_a = (uint32_t)(MEM32(0x150BDBA0)); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_15033801; /* 0x150337F8: jne 0x15033801 */
L_150337FA:
    PUSH32(esp, 0x15001298u); /* 0x150337FA: push 0x15001298 */
    goto L_15033802; /* 0x150337FF: jmp 0x15033802 */
L_15033801:
    PUSH32(esp, eax); /* 0x15033801: push eax */
L_15033802:
    RECOMP_CALL(sub_1503352B); /* 0x15033802: call 0x1503352b */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x18u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x18u; /* 0x15033807: add esp, 0x18 */
    _flag_k = FK_ADD;
    ebp = POP32_VAL(esp); /* 0x1503380A: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1503380B: ret  */
    RECOMP_REGS_OUT();
}

void sub_15033812(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x15033812u);

L_15033812:
    edi = edi; /* 0x15033812: mov edi, edi */
    PUSH32(esp, ebp); /* 0x15033814: push ebp */
    ebp = esp; /* 0x15033815: mov ebp, esp */
    /* cmp MEM32(0x150BDBA0), 0 */ /* 0x15033817: cmp dword ptr [0x150bdba0], 0 */
    _flag_a = (uint32_t)(MEM32(0x150BDBA0)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    PUSH32(esp, MEM32(ebp + 0x14)); /* 0x1503381E: push dword ptr [ebp + 0x14] */
    PUSH32(esp, 0); /* 0x15033821: push 0 */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x15033823: push dword ptr [ebp + 0x10] */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x15033826: push dword ptr [ebp + 0xc] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x15033829: push dword ptr [ebp + 8] */
    if (CMP_NE(_flag_a, _flag_b)) goto L_15033835; /* 0x1503382C: jne 0x15033835 */
L_1503382E:
    PUSH32(esp, 0x15001298u); /* 0x1503382E: push 0x15001298 */
    goto L_15033837; /* 0x15033833: jmp 0x15033837 */
L_15033835:
    PUSH32(esp, 0); /* 0x15033835: push 0 */
L_15033837:
    RECOMP_CALL(sub_1503352B); /* 0x15033837: call 0x1503352b */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x18u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x18u; /* 0x1503383C: add esp, 0x18 */
    _flag_k = FK_ADD;
    ebp = POP32_VAL(esp); /* 0x1503383F: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x15033840: ret  */
    RECOMP_REGS_OUT();
}

void sub_15033850(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x15033850u);

L_15033850:
    edi = edi; /* 0x15033850: mov edi, edi */
    PUSH32(esp, ebp); /* 0x15033852: push ebp */
    ebp = esp; /* 0x15033853: mov ebp, esp */
    /* cmp MEM32(0x150BDBA0), 0 */ /* 0x15033855: cmp dword ptr [0x150bdba0], 0 */
    _flag_a = (uint32_t)(MEM32(0x150BDBA0)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    PUSH32(esp, 0); /* 0x1503385C: push 0 */
    PUSH32(esp, 1); /* 0x1503385E: push 1 */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x15033860: push dword ptr [ebp + 0x10] */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x15033863: push dword ptr [ebp + 0xc] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x15033866: push dword ptr [ebp + 8] */
    if (CMP_NE(_flag_a, _flag_b)) goto L_15033872; /* 0x15033869: jne 0x15033872 */
L_1503386B:
    PUSH32(esp, 0x15001298u); /* 0x1503386B: push 0x15001298 */
    goto L_15033874; /* 0x15033870: jmp 0x15033874 */
L_15033872:
    PUSH32(esp, 0); /* 0x15033872: push 0 */
L_15033874:
    RECOMP_CALL(sub_1503352B); /* 0x15033874: call 0x1503352b */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x18u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x18u; /* 0x15033879: add esp, 0x18 */
    _flag_k = FK_ADD;
    ebp = POP32_VAL(esp); /* 0x1503387C: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1503387D: ret  */
    RECOMP_REGS_OUT();
}

void sub_15033890(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x15033890u);

L_15033890:
    edi = edi; /* 0x15033890: mov edi, edi */
    PUSH32(esp, ebp); /* 0x15033892: push ebp */
    ebp = esp; /* 0x15033893: mov ebp, esp */
    ebp = POP32_VAL(esp); /* 0x15033895: pop ebp */
    goto L_150338A1; /* 0x15033896: jmp 0x150338a1 */
L_150338A1:
    edi = edi; /* 0x150338A1: mov edi, edi */
    PUSH32(esp, ebp); /* 0x150338A3: push ebp */
    ebp = esp; /* 0x150338A4: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x2Cu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x2Cu; /* 0x150338A6: sub esp, 0x2c */
    _flag_k = FK_CMP;
    eax = MEM32(0x150BD340); /* 0x150338A9: mov eax, dword ptr [0x150bd340] */
    _flag_a = (uint32_t)((eax ^ ebp)); _flag_b = (uint32_t)((eax ^ ebp));
    eax = eax ^ ebp; /* 0x150338AE: xor eax, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x4)) = eax; /* 0x150338B0: mov dword ptr [ebp - 4], eax */
    eax = MEM32(ebp + 0x8); /* 0x150338B3: mov eax, dword ptr [ebp + 8] */
    PUSH32(esp, ebx); /* 0x150338B6: push ebx */
    ebx = MEM32(ebp + 0x10); /* 0x150338B7: mov ebx, dword ptr [ebp + 0x10] */
    PUSH32(esp, esi); /* 0x150338BA: push esi */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    esi = 0; /* 0x150338BB: xor esi, esi */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x18)) = eax; /* 0x150338BD: mov dword ptr [ebp - 0x18], eax */
    MEM32(ebp + (-0x10)) = esi; /* 0x150338C0: mov dword ptr [ebp - 0x10], esi */
    PUSH32(esp, edi); /* 0x150338C3: push edi */
    edi = MEM32(ebp + 0xC); /* 0x150338C4: mov edi, dword ptr [ebp + 0xc] */
    MEM32(ebp + (-0x14)) = edi; /* 0x150338C7: mov dword ptr [ebp - 0x14], edi */
    /* test eax, eax */ /* 0x150338CA: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_150338D9; /* 0x150338CC: je 0x150338d9 */
L_150338CE:
    /* test ebx, ebx */ /* 0x150338CE: test ebx, ebx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ebx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_150338D9; /* 0x150338D0: jne 0x150338d9 */
L_150338D2:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x150338D2: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_15033AED; /* 0x150338D4: jmp 0x15033aed */
L_150338D9:
    /* test edi, edi */ /* 0x150338D9: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_150338FD; /* 0x150338DB: jne 0x150338fd */
L_150338DD:
    RECOMP_CALL(sub_15036430); /* 0x150338DD: call 0x15036430 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, esi); /* 0x150338E2: push esi */
    PUSH32(esp, esi); /* 0x150338E3: push esi */
    PUSH32(esp, esi); /* 0x150338E4: push esi */
    PUSH32(esp, esi); /* 0x150338E5: push esi */
    PUSH32(esp, esi); /* 0x150338E6: push esi */
    MEM32(eax) = 0x16u; /* 0x150338E7: mov dword ptr [eax], 0x16 */
    RECOMP_CALL(sub_1505A110); /* 0x150338ED: call 0x1505a110 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x14u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x14u; /* 0x150338F2: add esp, 0x14 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)((eax | 0xFFFFFFFFu)); _flag_b = (uint32_t)((eax | 0xFFFFFFFFu));
    eax = eax | 0xFFFFFFFFu; /* 0x150338F5: or eax, 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_15033AED; /* 0x150338F8: jmp 0x15033aed */
L_150338FD:
    /* cmp ebx, 0x7FFFFFFFu */ /* 0x150338FD: cmp ebx, 0x7fffffff */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(0x7FFFFFFFu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_A(_flag_a, _flag_b)) goto L_150338DD; /* 0x15033903: ja 0x150338dd */
L_15033905:
    PUSH32(esp, MEM32(ebp + 0x14)); /* 0x15033905: push dword ptr [ebp + 0x14] */
    ecx = ebp + (-0x2C); /* 0x15033908: lea ecx, [ebp - 0x2c] */
    RECOMP_CALL(sub_1502F870); /* 0x1503390B: call 0x1502f870 */
    RECOMP_FLAGS_IN();
    ecx = MEM32(ebp + (-0x18)); /* 0x15033910: mov ecx, dword ptr [ebp - 0x18] */
    /* test ecx, ecx */ /* 0x15033913: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_15033A92; /* 0x15033915: je 0x15033a92 */
L_1503391B:
    edx = MEM32(ebp + (-0x2C)); /* 0x1503391B: mov edx, dword ptr [ebp - 0x2c] */
    /* cmp MEM32(edx + 0x14), esi */ /* 0x1503391E: cmp dword ptr [edx + 0x14], esi */
    _flag_a = (uint32_t)(MEM32(edx + 0x14)); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_15033957; /* 0x15033921: jne 0x15033957 */
L_15033923:
    /* test ebx, ebx */ /* 0x15033923: test ebx, ebx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ebx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_15033A8E; /* 0x15033925: je 0x15033a8e */
L_1503392B:
    eax = 0xFFu; /* 0x1503392B: mov eax, 0xff */
    /* cmp MEM16(edi), LO16(eax) */ /* 0x15033930: cmp word ptr [edi], ax */
    _flag_a = (uint32_t)(MEM16(edi)) << 16; _flag_b = (uint32_t)(LO16(eax)) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    if (CMP_A(_flag_a, _flag_b)) goto L_15033A80; /* 0x15033933: ja 0x15033a80 */
L_15033939:
    SET_LO8(eax, MEM8(edi)); /* 0x15033939: mov al, byte ptr [edi] */
    MEM8(ecx + esi) = (uint8_t)(LO8(eax)); /* 0x1503393B: mov byte ptr [ecx + esi], al */
    SET_LO16(eax, MEM16(edi)); /* 0x1503393E: mov ax, word ptr [edi] */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edi = edi + 2; /* 0x15033941: add edi, 2 */
    _flag_k = FK_ADD;
    /* test LO16(eax), LO16(eax) */ /* 0x15033944: test ax, ax */
    _flag_a = (uint32_t)(LO16(eax)) << 16; _flag_b = (uint32_t)(LO16(eax)) << 16;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 16);
    if (TEST_Z(_flag_a, _flag_b)) goto L_15033A8E; /* 0x15033947: je 0x15033a8e */
L_1503394D:
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi + 1; /* 0x1503394D: inc esi */
    _flag_k = FK_INC;
    /* cmp esi, ebx */ /* 0x1503394E: cmp esi, ebx */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_1503392B; /* 0x15033950: jb 0x1503392b */
L_15033952:
    goto L_15033A8E; /* 0x15033952: jmp 0x15033a8e */
L_15033957:
    /* cmp MEM32(edx + 0xAC), 1 */ /* 0x15033957: cmp dword ptr [edx + 0xac], 1 */
    _flag_a = (uint32_t)(MEM32(edx + 0xAC)); _flag_b = (uint32_t)(1);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_150339BB; /* 0x1503395E: jne 0x150339bb */
L_15033960:
    /* test ebx, ebx */ /* 0x15033960: test ebx, ebx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ebx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_15033980; /* 0x15033962: je 0x15033980 */
L_15033964:
    eax = edi; /* 0x15033964: mov eax, edi */
    MEM32(ebp + (-0x14)) = ebx; /* 0x15033966: mov dword ptr [ebp - 0x14], ebx */
L_15033969:
    /* cmp MEM16(eax), LO16(esi) */ /* 0x15033969: cmp word ptr [eax], si */
    _flag_a = (uint32_t)(MEM16(eax)) << 16; _flag_b = (uint32_t)(LO16(esi)) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_15033979; /* 0x1503396C: je 0x15033979 */
L_1503396E:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 2; /* 0x1503396E: add eax, 2 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(MEM32(ebp + (-0x14))); _flag_b = (uint32_t)(1);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    MEM32(ebp + (-0x14)) = MEM32(ebp + (-0x14)) - 1; /* 0x15033971: sub dword ptr [ebp - 0x14], 1 */
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (/* sub result */ CMP_NE(_flag_a, _flag_b)) goto L_15033969; /* 0x15033975: jne 0x15033969 */
L_15033977:
    goto L_15033980; /* 0x15033977: jmp 0x15033980 */
L_15033979:
    ebx = eax; /* 0x15033979: mov ebx, eax */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ebx = ebx - edi; /* 0x1503397B: sub ebx, edi */
    _flag_k = FK_CMP;
    if (1u) _cf = (((ebx) >> 0) & 1u); /* 0x1503397D: sar ebx, 1 */
    if (1u) { _flag_a = recomp_flags_pack(((uint32_t)((int32_t)ebx >> 1u)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ebx = (uint32_t)((int32_t)ebx >> 1u);
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(1);
    ebx = ebx + 1; /* 0x1503397F: inc ebx */
    _flag_k = FK_INC;
L_15033980:
    eax = ebp + (-0x10); /* 0x15033980: lea eax, [ebp - 0x10] */
    PUSH32(esp, eax); /* 0x15033983: push eax */
    PUSH32(esp, esi); /* 0x15033984: push esi */
    PUSH32(esp, ebx); /* 0x15033985: push ebx */
    PUSH32(esp, ecx); /* 0x15033986: push ecx */
    PUSH32(esp, ebx); /* 0x15033987: push ebx */
    PUSH32(esp, edi); /* 0x15033988: push edi */
    PUSH32(esp, esi); /* 0x15033989: push esi */
    PUSH32(esp, MEM32(edx + 0x4)); /* 0x1503398A: push dword ptr [edx + 4] */
    RECOMP_ICALL(MEM32(0x150C0248)); /* 0x1503398D: call dword ptr [0x150c0248] */
    RECOMP_FLAGS_IN();
    esi = eax; /* 0x15033993: mov esi, eax */
    /* test esi, esi */ /* 0x15033995: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_15033A80; /* 0x15033997: je 0x15033a80 */
L_1503399D:
    /* cmp MEM32(ebp + (-0x10)), 0 */ /* 0x1503399D: cmp dword ptr [ebp - 0x10], 0 */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x10))); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_15033A80; /* 0x150339A1: jne 0x15033a80 */
L_150339A7:
    eax = MEM32(ebp + (-0x18)); /* 0x150339A7: mov eax, dword ptr [ebp - 0x18] */
    /* cmp MEM8(eax + esi + (-0x1)), 0 */ /* 0x150339AA: cmp byte ptr [eax + esi - 1], 0 */
    _flag_a = (uint32_t)(MEM8(eax + esi + (-0x1))) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_15033A8E; /* 0x150339AF: jne 0x15033a8e */
L_150339B5:
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi - 1; /* 0x150339B5: dec esi */
    _flag_k = FK_DEC;
    goto L_15033A8E; /* 0x150339B6: jmp 0x15033a8e */
L_150339BB:
    eax = ebp + (-0x10); /* 0x150339BB: lea eax, [ebp - 0x10] */
    PUSH32(esp, eax); /* 0x150339BE: push eax */
    PUSH32(esp, esi); /* 0x150339BF: push esi */
    PUSH32(esp, ebx); /* 0x150339C0: push ebx */
    PUSH32(esp, ecx); /* 0x150339C1: push ecx */
    PUSH32(esp, 0xFFFFFFFFu); /* 0x150339C2: push -1 */
    PUSH32(esp, edi); /* 0x150339C4: push edi */
    PUSH32(esp, esi); /* 0x150339C5: push esi */
    PUSH32(esp, MEM32(edx + 0x4)); /* 0x150339C6: push dword ptr [edx + 4] */
    RECOMP_ICALL(MEM32(0x150C0248)); /* 0x150339C9: call dword ptr [0x150c0248] */
    RECOMP_FLAGS_IN();
    edi = eax; /* 0x150339CF: mov edi, eax */
    /* cmp MEM32(ebp + (-0x10)), esi */ /* 0x150339D1: cmp dword ptr [ebp - 0x10], esi */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x10))); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_15033A80; /* 0x150339D4: jne 0x15033a80 */
L_150339DA:
    /* test edi, edi */ /* 0x150339DA: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_150339E6; /* 0x150339DC: je 0x150339e6 */
L_150339DE:
    esi = edi + (-0x1); /* 0x150339DE: lea esi, [edi - 1] */
    goto L_15033A8E; /* 0x150339E1: jmp 0x15033a8e */
L_150339E6:
    RECOMP_ICALL(MEM32(0x150C006C)); /* 0x150339E6: call dword ptr [0x150c006c] */
    RECOMP_FLAGS_IN();
    /* cmp eax, 0x7Au */ /* 0x150339EC: cmp eax, 0x7a */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x7Au);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_15033A80; /* 0x150339EF: jne 0x15033a80 */
L_150339F5:
    /* test ebx, ebx */ /* 0x150339F5: test ebx, ebx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ebx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_15033ADE; /* 0x150339F7: je 0x15033ade */
L_150339FD:
    eax = MEM32(ebp + (-0x14)); /* 0x150339FD: mov eax, dword ptr [ebp - 0x14] */
L_15033A00:
    ecx = ebp + (-0x10); /* 0x15033A00: lea ecx, [ebp - 0x10] */
    PUSH32(esp, ecx); /* 0x15033A03: push ecx */
    ecx = MEM32(ebp + (-0x2C)); /* 0x15033A04: mov ecx, dword ptr [ebp - 0x2c] */
    edx = ebp + (-0xC); /* 0x15033A07: lea edx, [ebp - 0xc] */
    PUSH32(esp, esi); /* 0x15033A0A: push esi */
    PUSH32(esp, MEM32(ecx + 0xAC)); /* 0x15033A0B: push dword ptr [ecx + 0xac] */
    PUSH32(esp, edx); /* 0x15033A11: push edx */
    PUSH32(esp, 1); /* 0x15033A12: push 1 */
    PUSH32(esp, eax); /* 0x15033A14: push eax */
    PUSH32(esp, esi); /* 0x15033A15: push esi */
    PUSH32(esp, MEM32(ecx + 0x4)); /* 0x15033A16: push dword ptr [ecx + 4] */
    RECOMP_ICALL(MEM32(0x150C0248)); /* 0x15033A19: call dword ptr [0x150c0248] */
    RECOMP_FLAGS_IN();
    edx = eax; /* 0x15033A1F: mov edx, eax */
    /* test edx, edx */ /* 0x15033A21: test edx, edx */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(edx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_15033AD0; /* 0x15033A23: je 0x15033ad0 */
L_15033A29:
    /* cmp MEM32(ebp + (-0x10)), esi */ /* 0x15033A29: cmp dword ptr [ebp - 0x10], esi */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x10))); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_15033AD0; /* 0x15033A2C: jne 0x15033ad0 */
L_15033A32:
    /* test edx, edx */ /* 0x15033A32: test edx, edx */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(edx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_15033AD0; /* 0x15033A34: js 0x15033ad0 */
L_15033A3A:
    /* cmp edx, 5 */ /* 0x15033A3A: cmp edx, 5 */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(5);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_A(_flag_a, _flag_b)) goto L_15033AD0; /* 0x15033A3D: ja 0x15033ad0 */
L_15033A43:
    eax = edx + edi; /* 0x15033A43: lea eax, [edx + edi] */
    /* cmp eax, ebx */ /* 0x15033A46: cmp eax, ebx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_A(_flag_a, _flag_b)) goto L_15033ADE; /* 0x15033A48: ja 0x15033ade */
L_15033A4E:
    eax = esi; /* 0x15033A4E: mov eax, esi */
    MEM32(ebp + (-0x1C)) = eax; /* 0x15033A50: mov dword ptr [ebp - 0x1c], eax */
    /* test edx, edx */ /* 0x15033A53: test edx, edx */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(edx);
    _cf = 0;
    _flag_k = FK_TEST;
    if ((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) == 0u || (((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_15033A71; /* 0x15033A55: jle 0x15033a71 */
L_15033A57:
    ecx = MEM32(ebp + (-0x18)); /* 0x15033A57: mov ecx, dword ptr [ebp - 0x18] */
L_15033A5A:
    SET_LO8(eax, MEM8(ebp + eax + (-0xC))); /* 0x15033A5A: mov al, byte ptr [ebp + eax - 0xc] */
    MEM8(ecx + edi) = (uint8_t)(LO8(eax)); /* 0x15033A5E: mov byte ptr [ecx + edi], al */
    /* test LO8(eax), LO8(eax) */ /* 0x15033A61: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_15033ADE; /* 0x15033A63: je 0x15033ade */
L_15033A65:
    eax = MEM32(ebp + (-0x1C)); /* 0x15033A65: mov eax, dword ptr [ebp - 0x1c] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x15033A68: inc eax */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(1);
    edi = edi + 1; /* 0x15033A69: inc edi */
    _flag_k = FK_INC;
    MEM32(ebp + (-0x1C)) = eax; /* 0x15033A6A: mov dword ptr [ebp - 0x1c], eax */
    /* cmp eax, edx */ /* 0x15033A6D: cmp eax, edx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_L(_flag_a, _flag_b)) goto L_15033A5A; /* 0x15033A6F: jl 0x15033a5a */
L_15033A71:
    eax = MEM32(ebp + (-0x14)); /* 0x15033A71: mov eax, dword ptr [ebp - 0x14] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 2; /* 0x15033A74: add eax, 2 */
    _flag_k = FK_ADD;
    MEM32(ebp + (-0x14)) = eax; /* 0x15033A77: mov dword ptr [ebp - 0x14], eax */
    /* cmp edi, ebx */ /* 0x15033A7A: cmp edi, ebx */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_15033A00; /* 0x15033A7C: jb 0x15033a00 */
L_15033A7E:
    goto L_15033ADE; /* 0x15033A7E: jmp 0x15033ade */
L_15033A80:
    RECOMP_CALL(sub_15036430); /* 0x15033A80: call 0x15036430 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)((esi | 0xFFFFFFFFu)); _flag_b = (uint32_t)((esi | 0xFFFFFFFFu));
    esi = esi | 0xFFFFFFFFu; /* 0x15033A85: or esi, 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(eax) = 0x2Au; /* 0x15033A88: mov dword ptr [eax], 0x2a */
L_15033A8E:
    edi = esi; /* 0x15033A8E: mov edi, esi */
    goto L_15033ADE; /* 0x15033A90: jmp 0x15033ade */
L_15033A92:
    eax = MEM32(ebp + (-0x2C)); /* 0x15033A92: mov eax, dword ptr [ebp - 0x2c] */
    /* cmp MEM32(eax + 0x14), esi */ /* 0x15033A95: cmp dword ptr [eax + 0x14], esi */
    _flag_a = (uint32_t)(MEM32(eax + 0x14)); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_15033AAE; /* 0x15033A98: jne 0x15033aae */
L_15033A9A:
    ecx = edi + 0x2; /* 0x15033A9A: lea ecx, [edi + 2] */
L_15033A9D:
    SET_LO16(eax, MEM16(edi)); /* 0x15033A9D: mov ax, word ptr [edi] */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edi = edi + 2; /* 0x15033AA0: add edi, 2 */
    _flag_k = FK_ADD;
    /* cmp LO16(eax), LO16(esi) */ /* 0x15033AA3: cmp ax, si */
    _flag_a = (uint32_t)(LO16(eax)) << 16; _flag_b = (uint32_t)(LO16(esi)) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    RECOMP_BACKEDGE();
    if (CMP_NE(_flag_a, _flag_b)) goto L_15033A9D; /* 0x15033AA6: jne 0x15033a9d */
L_15033AA8:
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    edi = edi - ecx; /* 0x15033AA8: sub edi, ecx */
    _flag_k = FK_CMP;
    if (1u) _cf = (((edi) >> 0) & 1u); /* 0x15033AAA: sar edi, 1 */
    if (1u) { _flag_a = recomp_flags_pack(((uint32_t)((int32_t)edi >> 1u)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    edi = (uint32_t)((int32_t)edi >> 1u);
    goto L_15033ADE; /* 0x15033AAC: jmp 0x15033ade */
L_15033AAE:
    ecx = ebp + (-0x10); /* 0x15033AAE: lea ecx, [ebp - 0x10] */
    PUSH32(esp, ecx); /* 0x15033AB1: push ecx */
    PUSH32(esp, esi); /* 0x15033AB2: push esi */
    PUSH32(esp, esi); /* 0x15033AB3: push esi */
    PUSH32(esp, esi); /* 0x15033AB4: push esi */
    PUSH32(esp, 0xFFFFFFFFu); /* 0x15033AB5: push -1 */
    PUSH32(esp, edi); /* 0x15033AB7: push edi */
    PUSH32(esp, esi); /* 0x15033AB8: push esi */
    PUSH32(esp, MEM32(eax + 0x4)); /* 0x15033AB9: push dword ptr [eax + 4] */
    RECOMP_ICALL(MEM32(0x150C0248)); /* 0x15033ABC: call dword ptr [0x150c0248] */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x15033AC2: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_15033AD0; /* 0x15033AC4: je 0x15033ad0 */
L_15033AC6:
    /* cmp MEM32(ebp + (-0x10)), esi */ /* 0x15033AC6: cmp dword ptr [ebp - 0x10], esi */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x10))); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_15033AD0; /* 0x15033AC9: jne 0x15033ad0 */
L_15033ACB:
    edi = eax + (-0x1); /* 0x15033ACB: lea edi, [eax - 1] */
    goto L_15033ADE; /* 0x15033ACE: jmp 0x15033ade */
L_15033AD0:
    RECOMP_CALL(sub_15036430); /* 0x15033AD0: call 0x15036430 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)((edi | 0xFFFFFFFFu)); _flag_b = (uint32_t)((edi | 0xFFFFFFFFu));
    edi = edi | 0xFFFFFFFFu; /* 0x15033AD5: or edi, 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(eax) = 0x2Au; /* 0x15033AD8: mov dword ptr [eax], 0x2a */
L_15033ADE:
    /* cmp MEM8(ebp + (-0x20)), 0 */ /* 0x15033ADE: cmp byte ptr [ebp - 0x20], 0 */
    _flag_a = (uint32_t)(MEM8(ebp + (-0x20))) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_15033AEB; /* 0x15033AE2: je 0x15033aeb */
L_15033AE4:
    ecx = MEM32(ebp + (-0x24)); /* 0x15033AE4: mov ecx, dword ptr [ebp - 0x24] */
    _flag_a = (uint32_t)(MEM32(ecx + 0x70)); _flag_b = (uint32_t)(0xFFFFFFFDu);
    MEM32(ecx + 0x70) = MEM32(ecx + 0x70) & 0xFFFFFFFDu; /* 0x15033AE7: and dword ptr [ecx + 0x70], 0xfffffffd */
    _cf = 0;
    _flag_k = FK_TEST;
L_15033AEB:
    eax = edi; /* 0x15033AEB: mov eax, edi */
L_15033AED:
    ecx = MEM32(ebp + (-0x4)); /* 0x15033AED: mov ecx, dword ptr [ebp - 4] */
    edi = POP32_VAL(esp); /* 0x15033AF0: pop edi */
    esi = POP32_VAL(esp); /* 0x15033AF1: pop esi */
    _flag_a = (uint32_t)((ecx ^ ebp)); _flag_b = (uint32_t)((ecx ^ ebp));
    ecx = ecx ^ ebp; /* 0x15033AF2: xor ecx, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    ebx = POP32_VAL(esp); /* 0x15033AF4: pop ebx */
    RECOMP_CALL(sub_1505E540); /* 0x15033AF5: call 0x1505e540 */
    RECOMP_FLAGS_IN();
    esp = ebp; ebp = POP32_VAL(esp); /* 0x15033AFA: leave  */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x15033AFB: ret  */
    RECOMP_REGS_OUT();
}

void sub_150338A1(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x150338A1u);

L_150338A1:
    edi = edi; /* 0x150338A1: mov edi, edi */
    PUSH32(esp, ebp); /* 0x150338A3: push ebp */
    ebp = esp; /* 0x150338A4: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x2Cu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x2Cu; /* 0x150338A6: sub esp, 0x2c */
    _flag_k = FK_CMP;
    eax = MEM32(0x150BD340); /* 0x150338A9: mov eax, dword ptr [0x150bd340] */
    _flag_a = (uint32_t)((eax ^ ebp)); _flag_b = (uint32_t)((eax ^ ebp));
    eax = eax ^ ebp; /* 0x150338AE: xor eax, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x4)) = eax; /* 0x150338B0: mov dword ptr [ebp - 4], eax */
    eax = MEM32(ebp + 0x8); /* 0x150338B3: mov eax, dword ptr [ebp + 8] */
    PUSH32(esp, ebx); /* 0x150338B6: push ebx */
    ebx = MEM32(ebp + 0x10); /* 0x150338B7: mov ebx, dword ptr [ebp + 0x10] */
    PUSH32(esp, esi); /* 0x150338BA: push esi */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    esi = 0; /* 0x150338BB: xor esi, esi */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x18)) = eax; /* 0x150338BD: mov dword ptr [ebp - 0x18], eax */
    MEM32(ebp + (-0x10)) = esi; /* 0x150338C0: mov dword ptr [ebp - 0x10], esi */
    PUSH32(esp, edi); /* 0x150338C3: push edi */
    edi = MEM32(ebp + 0xC); /* 0x150338C4: mov edi, dword ptr [ebp + 0xc] */
    MEM32(ebp + (-0x14)) = edi; /* 0x150338C7: mov dword ptr [ebp - 0x14], edi */
    /* test eax, eax */ /* 0x150338CA: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_150338D9; /* 0x150338CC: je 0x150338d9 */
L_150338CE:
    /* test ebx, ebx */ /* 0x150338CE: test ebx, ebx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ebx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_150338D9; /* 0x150338D0: jne 0x150338d9 */
L_150338D2:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x150338D2: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_15033AED; /* 0x150338D4: jmp 0x15033aed */
L_150338D9:
    /* test edi, edi */ /* 0x150338D9: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_150338FD; /* 0x150338DB: jne 0x150338fd */
L_150338DD:
    RECOMP_CALL(sub_15036430); /* 0x150338DD: call 0x15036430 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, esi); /* 0x150338E2: push esi */
    PUSH32(esp, esi); /* 0x150338E3: push esi */
    PUSH32(esp, esi); /* 0x150338E4: push esi */
    PUSH32(esp, esi); /* 0x150338E5: push esi */
    PUSH32(esp, esi); /* 0x150338E6: push esi */
    MEM32(eax) = 0x16u; /* 0x150338E7: mov dword ptr [eax], 0x16 */
    RECOMP_CALL(sub_1505A110); /* 0x150338ED: call 0x1505a110 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x14u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x14u; /* 0x150338F2: add esp, 0x14 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)((eax | 0xFFFFFFFFu)); _flag_b = (uint32_t)((eax | 0xFFFFFFFFu));
    eax = eax | 0xFFFFFFFFu; /* 0x150338F5: or eax, 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_15033AED; /* 0x150338F8: jmp 0x15033aed */
L_150338FD:
    /* cmp ebx, 0x7FFFFFFFu */ /* 0x150338FD: cmp ebx, 0x7fffffff */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(0x7FFFFFFFu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_A(_flag_a, _flag_b)) goto L_150338DD; /* 0x15033903: ja 0x150338dd */
L_15033905:
    PUSH32(esp, MEM32(ebp + 0x14)); /* 0x15033905: push dword ptr [ebp + 0x14] */
    ecx = ebp + (-0x2C); /* 0x15033908: lea ecx, [ebp - 0x2c] */
    RECOMP_CALL(sub_1502F870); /* 0x1503390B: call 0x1502f870 */
    RECOMP_FLAGS_IN();
    ecx = MEM32(ebp + (-0x18)); /* 0x15033910: mov ecx, dword ptr [ebp - 0x18] */
    /* test ecx, ecx */ /* 0x15033913: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_15033A92; /* 0x15033915: je 0x15033a92 */
L_1503391B:
    edx = MEM32(ebp + (-0x2C)); /* 0x1503391B: mov edx, dword ptr [ebp - 0x2c] */
    /* cmp MEM32(edx + 0x14), esi */ /* 0x1503391E: cmp dword ptr [edx + 0x14], esi */
    _flag_a = (uint32_t)(MEM32(edx + 0x14)); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_15033957; /* 0x15033921: jne 0x15033957 */
L_15033923:
    /* test ebx, ebx */ /* 0x15033923: test ebx, ebx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ebx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_15033A8E; /* 0x15033925: je 0x15033a8e */
L_1503392B:
    eax = 0xFFu; /* 0x1503392B: mov eax, 0xff */
    /* cmp MEM16(edi), LO16(eax) */ /* 0x15033930: cmp word ptr [edi], ax */
    _flag_a = (uint32_t)(MEM16(edi)) << 16; _flag_b = (uint32_t)(LO16(eax)) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    if (CMP_A(_flag_a, _flag_b)) goto L_15033A80; /* 0x15033933: ja 0x15033a80 */
L_15033939:
    SET_LO8(eax, MEM8(edi)); /* 0x15033939: mov al, byte ptr [edi] */
    MEM8(ecx + esi) = (uint8_t)(LO8(eax)); /* 0x1503393B: mov byte ptr [ecx + esi], al */
    SET_LO16(eax, MEM16(edi)); /* 0x1503393E: mov ax, word ptr [edi] */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edi = edi + 2; /* 0x15033941: add edi, 2 */
    _flag_k = FK_ADD;
    /* test LO16(eax), LO16(eax) */ /* 0x15033944: test ax, ax */
    _flag_a = (uint32_t)(LO16(eax)) << 16; _flag_b = (uint32_t)(LO16(eax)) << 16;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 16);
    if (TEST_Z(_flag_a, _flag_b)) goto L_15033A8E; /* 0x15033947: je 0x15033a8e */
L_1503394D:
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi + 1; /* 0x1503394D: inc esi */
    _flag_k = FK_INC;
    /* cmp esi, ebx */ /* 0x1503394E: cmp esi, ebx */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_1503392B; /* 0x15033950: jb 0x1503392b */
L_15033952:
    goto L_15033A8E; /* 0x15033952: jmp 0x15033a8e */
L_15033957:
    /* cmp MEM32(edx + 0xAC), 1 */ /* 0x15033957: cmp dword ptr [edx + 0xac], 1 */
    _flag_a = (uint32_t)(MEM32(edx + 0xAC)); _flag_b = (uint32_t)(1);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_150339BB; /* 0x1503395E: jne 0x150339bb */
L_15033960:
    /* test ebx, ebx */ /* 0x15033960: test ebx, ebx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ebx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_15033980; /* 0x15033962: je 0x15033980 */
L_15033964:
    eax = edi; /* 0x15033964: mov eax, edi */
    MEM32(ebp + (-0x14)) = ebx; /* 0x15033966: mov dword ptr [ebp - 0x14], ebx */
L_15033969:
    /* cmp MEM16(eax), LO16(esi) */ /* 0x15033969: cmp word ptr [eax], si */
    _flag_a = (uint32_t)(MEM16(eax)) << 16; _flag_b = (uint32_t)(LO16(esi)) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_15033979; /* 0x1503396C: je 0x15033979 */
L_1503396E:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 2; /* 0x1503396E: add eax, 2 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(MEM32(ebp + (-0x14))); _flag_b = (uint32_t)(1);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    MEM32(ebp + (-0x14)) = MEM32(ebp + (-0x14)) - 1; /* 0x15033971: sub dword ptr [ebp - 0x14], 1 */
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (/* sub result */ CMP_NE(_flag_a, _flag_b)) goto L_15033969; /* 0x15033975: jne 0x15033969 */
L_15033977:
    goto L_15033980; /* 0x15033977: jmp 0x15033980 */
L_15033979:
    ebx = eax; /* 0x15033979: mov ebx, eax */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ebx = ebx - edi; /* 0x1503397B: sub ebx, edi */
    _flag_k = FK_CMP;
    if (1u) _cf = (((ebx) >> 0) & 1u); /* 0x1503397D: sar ebx, 1 */
    if (1u) { _flag_a = recomp_flags_pack(((uint32_t)((int32_t)ebx >> 1u)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ebx = (uint32_t)((int32_t)ebx >> 1u);
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(1);
    ebx = ebx + 1; /* 0x1503397F: inc ebx */
    _flag_k = FK_INC;
L_15033980:
    eax = ebp + (-0x10); /* 0x15033980: lea eax, [ebp - 0x10] */
    PUSH32(esp, eax); /* 0x15033983: push eax */
    PUSH32(esp, esi); /* 0x15033984: push esi */
    PUSH32(esp, ebx); /* 0x15033985: push ebx */
    PUSH32(esp, ecx); /* 0x15033986: push ecx */
    PUSH32(esp, ebx); /* 0x15033987: push ebx */
    PUSH32(esp, edi); /* 0x15033988: push edi */
    PUSH32(esp, esi); /* 0x15033989: push esi */
    PUSH32(esp, MEM32(edx + 0x4)); /* 0x1503398A: push dword ptr [edx + 4] */
    RECOMP_ICALL(MEM32(0x150C0248)); /* 0x1503398D: call dword ptr [0x150c0248] */
    RECOMP_FLAGS_IN();
    esi = eax; /* 0x15033993: mov esi, eax */
    /* test esi, esi */ /* 0x15033995: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_15033A80; /* 0x15033997: je 0x15033a80 */
L_1503399D:
    /* cmp MEM32(ebp + (-0x10)), 0 */ /* 0x1503399D: cmp dword ptr [ebp - 0x10], 0 */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x10))); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_15033A80; /* 0x150339A1: jne 0x15033a80 */
L_150339A7:
    eax = MEM32(ebp + (-0x18)); /* 0x150339A7: mov eax, dword ptr [ebp - 0x18] */
    /* cmp MEM8(eax + esi + (-0x1)), 0 */ /* 0x150339AA: cmp byte ptr [eax + esi - 1], 0 */
    _flag_a = (uint32_t)(MEM8(eax + esi + (-0x1))) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_15033A8E; /* 0x150339AF: jne 0x15033a8e */
L_150339B5:
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi - 1; /* 0x150339B5: dec esi */
    _flag_k = FK_DEC;
    goto L_15033A8E; /* 0x150339B6: jmp 0x15033a8e */
L_150339BB:
    eax = ebp + (-0x10); /* 0x150339BB: lea eax, [ebp - 0x10] */
    PUSH32(esp, eax); /* 0x150339BE: push eax */
    PUSH32(esp, esi); /* 0x150339BF: push esi */
    PUSH32(esp, ebx); /* 0x150339C0: push ebx */
    PUSH32(esp, ecx); /* 0x150339C1: push ecx */
    PUSH32(esp, 0xFFFFFFFFu); /* 0x150339C2: push -1 */
    PUSH32(esp, edi); /* 0x150339C4: push edi */
    PUSH32(esp, esi); /* 0x150339C5: push esi */
    PUSH32(esp, MEM32(edx + 0x4)); /* 0x150339C6: push dword ptr [edx + 4] */
    RECOMP_ICALL(MEM32(0x150C0248)); /* 0x150339C9: call dword ptr [0x150c0248] */
    RECOMP_FLAGS_IN();
    edi = eax; /* 0x150339CF: mov edi, eax */
    /* cmp MEM32(ebp + (-0x10)), esi */ /* 0x150339D1: cmp dword ptr [ebp - 0x10], esi */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x10))); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_15033A80; /* 0x150339D4: jne 0x15033a80 */
L_150339DA:
    /* test edi, edi */ /* 0x150339DA: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_150339E6; /* 0x150339DC: je 0x150339e6 */
L_150339DE:
    esi = edi + (-0x1); /* 0x150339DE: lea esi, [edi - 1] */
    goto L_15033A8E; /* 0x150339E1: jmp 0x15033a8e */
L_150339E6:
    RECOMP_ICALL(MEM32(0x150C006C)); /* 0x150339E6: call dword ptr [0x150c006c] */
    RECOMP_FLAGS_IN();
    /* cmp eax, 0x7Au */ /* 0x150339EC: cmp eax, 0x7a */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x7Au);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_15033A80; /* 0x150339EF: jne 0x15033a80 */
L_150339F5:
    /* test ebx, ebx */ /* 0x150339F5: test ebx, ebx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ebx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_15033ADE; /* 0x150339F7: je 0x15033ade */
L_150339FD:
    eax = MEM32(ebp + (-0x14)); /* 0x150339FD: mov eax, dword ptr [ebp - 0x14] */
L_15033A00:
    ecx = ebp + (-0x10); /* 0x15033A00: lea ecx, [ebp - 0x10] */
    PUSH32(esp, ecx); /* 0x15033A03: push ecx */
    ecx = MEM32(ebp + (-0x2C)); /* 0x15033A04: mov ecx, dword ptr [ebp - 0x2c] */
    edx = ebp + (-0xC); /* 0x15033A07: lea edx, [ebp - 0xc] */
    PUSH32(esp, esi); /* 0x15033A0A: push esi */
    PUSH32(esp, MEM32(ecx + 0xAC)); /* 0x15033A0B: push dword ptr [ecx + 0xac] */
    PUSH32(esp, edx); /* 0x15033A11: push edx */
    PUSH32(esp, 1); /* 0x15033A12: push 1 */
    PUSH32(esp, eax); /* 0x15033A14: push eax */
    PUSH32(esp, esi); /* 0x15033A15: push esi */
    PUSH32(esp, MEM32(ecx + 0x4)); /* 0x15033A16: push dword ptr [ecx + 4] */
    RECOMP_ICALL(MEM32(0x150C0248)); /* 0x15033A19: call dword ptr [0x150c0248] */
    RECOMP_FLAGS_IN();
    edx = eax; /* 0x15033A1F: mov edx, eax */
    /* test edx, edx */ /* 0x15033A21: test edx, edx */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(edx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_15033AD0; /* 0x15033A23: je 0x15033ad0 */
L_15033A29:
    /* cmp MEM32(ebp + (-0x10)), esi */ /* 0x15033A29: cmp dword ptr [ebp - 0x10], esi */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x10))); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_15033AD0; /* 0x15033A2C: jne 0x15033ad0 */
L_15033A32:
    /* test edx, edx */ /* 0x15033A32: test edx, edx */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(edx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_15033AD0; /* 0x15033A34: js 0x15033ad0 */
L_15033A3A:
    /* cmp edx, 5 */ /* 0x15033A3A: cmp edx, 5 */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(5);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_A(_flag_a, _flag_b)) goto L_15033AD0; /* 0x15033A3D: ja 0x15033ad0 */
L_15033A43:
    eax = edx + edi; /* 0x15033A43: lea eax, [edx + edi] */
    /* cmp eax, ebx */ /* 0x15033A46: cmp eax, ebx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_A(_flag_a, _flag_b)) goto L_15033ADE; /* 0x15033A48: ja 0x15033ade */
L_15033A4E:
    eax = esi; /* 0x15033A4E: mov eax, esi */
    MEM32(ebp + (-0x1C)) = eax; /* 0x15033A50: mov dword ptr [ebp - 0x1c], eax */
    /* test edx, edx */ /* 0x15033A53: test edx, edx */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(edx);
    _cf = 0;
    _flag_k = FK_TEST;
    if ((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) == 0u || (((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_15033A71; /* 0x15033A55: jle 0x15033a71 */
L_15033A57:
    ecx = MEM32(ebp + (-0x18)); /* 0x15033A57: mov ecx, dword ptr [ebp - 0x18] */
L_15033A5A:
    SET_LO8(eax, MEM8(ebp + eax + (-0xC))); /* 0x15033A5A: mov al, byte ptr [ebp + eax - 0xc] */
    MEM8(ecx + edi) = (uint8_t)(LO8(eax)); /* 0x15033A5E: mov byte ptr [ecx + edi], al */
    /* test LO8(eax), LO8(eax) */ /* 0x15033A61: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_15033ADE; /* 0x15033A63: je 0x15033ade */
L_15033A65:
    eax = MEM32(ebp + (-0x1C)); /* 0x15033A65: mov eax, dword ptr [ebp - 0x1c] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x15033A68: inc eax */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(1);
    edi = edi + 1; /* 0x15033A69: inc edi */
    _flag_k = FK_INC;
    MEM32(ebp + (-0x1C)) = eax; /* 0x15033A6A: mov dword ptr [ebp - 0x1c], eax */
    /* cmp eax, edx */ /* 0x15033A6D: cmp eax, edx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_L(_flag_a, _flag_b)) goto L_15033A5A; /* 0x15033A6F: jl 0x15033a5a */
L_15033A71:
    eax = MEM32(ebp + (-0x14)); /* 0x15033A71: mov eax, dword ptr [ebp - 0x14] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 2; /* 0x15033A74: add eax, 2 */
    _flag_k = FK_ADD;
    MEM32(ebp + (-0x14)) = eax; /* 0x15033A77: mov dword ptr [ebp - 0x14], eax */
    /* cmp edi, ebx */ /* 0x15033A7A: cmp edi, ebx */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_15033A00; /* 0x15033A7C: jb 0x15033a00 */
L_15033A7E:
    goto L_15033ADE; /* 0x15033A7E: jmp 0x15033ade */
L_15033A80:
    RECOMP_CALL(sub_15036430); /* 0x15033A80: call 0x15036430 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)((esi | 0xFFFFFFFFu)); _flag_b = (uint32_t)((esi | 0xFFFFFFFFu));
    esi = esi | 0xFFFFFFFFu; /* 0x15033A85: or esi, 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(eax) = 0x2Au; /* 0x15033A88: mov dword ptr [eax], 0x2a */
L_15033A8E:
    edi = esi; /* 0x15033A8E: mov edi, esi */
    goto L_15033ADE; /* 0x15033A90: jmp 0x15033ade */
L_15033A92:
    eax = MEM32(ebp + (-0x2C)); /* 0x15033A92: mov eax, dword ptr [ebp - 0x2c] */
    /* cmp MEM32(eax + 0x14), esi */ /* 0x15033A95: cmp dword ptr [eax + 0x14], esi */
    _flag_a = (uint32_t)(MEM32(eax + 0x14)); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_15033AAE; /* 0x15033A98: jne 0x15033aae */
L_15033A9A:
    ecx = edi + 0x2; /* 0x15033A9A: lea ecx, [edi + 2] */
L_15033A9D:
    SET_LO16(eax, MEM16(edi)); /* 0x15033A9D: mov ax, word ptr [edi] */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edi = edi + 2; /* 0x15033AA0: add edi, 2 */
    _flag_k = FK_ADD;
    /* cmp LO16(eax), LO16(esi) */ /* 0x15033AA3: cmp ax, si */
    _flag_a = (uint32_t)(LO16(eax)) << 16; _flag_b = (uint32_t)(LO16(esi)) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    RECOMP_BACKEDGE();
    if (CMP_NE(_flag_a, _flag_b)) goto L_15033A9D; /* 0x15033AA6: jne 0x15033a9d */
L_15033AA8:
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    edi = edi - ecx; /* 0x15033AA8: sub edi, ecx */
    _flag_k = FK_CMP;
    if (1u) _cf = (((edi) >> 0) & 1u); /* 0x15033AAA: sar edi, 1 */
    if (1u) { _flag_a = recomp_flags_pack(((uint32_t)((int32_t)edi >> 1u)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    edi = (uint32_t)((int32_t)edi >> 1u);
    goto L_15033ADE; /* 0x15033AAC: jmp 0x15033ade */
L_15033AAE:
    ecx = ebp + (-0x10); /* 0x15033AAE: lea ecx, [ebp - 0x10] */
    PUSH32(esp, ecx); /* 0x15033AB1: push ecx */
    PUSH32(esp, esi); /* 0x15033AB2: push esi */
    PUSH32(esp, esi); /* 0x15033AB3: push esi */
    PUSH32(esp, esi); /* 0x15033AB4: push esi */
    PUSH32(esp, 0xFFFFFFFFu); /* 0x15033AB5: push -1 */
    PUSH32(esp, edi); /* 0x15033AB7: push edi */
    PUSH32(esp, esi); /* 0x15033AB8: push esi */
    PUSH32(esp, MEM32(eax + 0x4)); /* 0x15033AB9: push dword ptr [eax + 4] */
    RECOMP_ICALL(MEM32(0x150C0248)); /* 0x15033ABC: call dword ptr [0x150c0248] */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x15033AC2: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_15033AD0; /* 0x15033AC4: je 0x15033ad0 */
L_15033AC6:
    /* cmp MEM32(ebp + (-0x10)), esi */ /* 0x15033AC6: cmp dword ptr [ebp - 0x10], esi */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x10))); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_15033AD0; /* 0x15033AC9: jne 0x15033ad0 */
L_15033ACB:
    edi = eax + (-0x1); /* 0x15033ACB: lea edi, [eax - 1] */
    goto L_15033ADE; /* 0x15033ACE: jmp 0x15033ade */
L_15033AD0:
    RECOMP_CALL(sub_15036430); /* 0x15033AD0: call 0x15036430 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)((edi | 0xFFFFFFFFu)); _flag_b = (uint32_t)((edi | 0xFFFFFFFFu));
    edi = edi | 0xFFFFFFFFu; /* 0x15033AD5: or edi, 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(eax) = 0x2Au; /* 0x15033AD8: mov dword ptr [eax], 0x2a */
L_15033ADE:
    /* cmp MEM8(ebp + (-0x20)), 0 */ /* 0x15033ADE: cmp byte ptr [ebp - 0x20], 0 */
    _flag_a = (uint32_t)(MEM8(ebp + (-0x20))) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_15033AEB; /* 0x15033AE2: je 0x15033aeb */
L_15033AE4:
    ecx = MEM32(ebp + (-0x24)); /* 0x15033AE4: mov ecx, dword ptr [ebp - 0x24] */
    _flag_a = (uint32_t)(MEM32(ecx + 0x70)); _flag_b = (uint32_t)(0xFFFFFFFDu);
    MEM32(ecx + 0x70) = MEM32(ecx + 0x70) & 0xFFFFFFFDu; /* 0x15033AE7: and dword ptr [ecx + 0x70], 0xfffffffd */
    _cf = 0;
    _flag_k = FK_TEST;
L_15033AEB:
    eax = edi; /* 0x15033AEB: mov eax, edi */
L_15033AED:
    ecx = MEM32(ebp + (-0x4)); /* 0x15033AED: mov ecx, dword ptr [ebp - 4] */
    edi = POP32_VAL(esp); /* 0x15033AF0: pop edi */
    esi = POP32_VAL(esp); /* 0x15033AF1: pop esi */
    _flag_a = (uint32_t)((ecx ^ ebp)); _flag_b = (uint32_t)((ecx ^ ebp));
    ecx = ecx ^ ebp; /* 0x15033AF2: xor ecx, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    ebx = POP32_VAL(esp); /* 0x15033AF4: pop ebx */
    RECOMP_CALL(sub_1505E540); /* 0x15033AF5: call 0x1505e540 */
    RECOMP_FLAGS_IN();
    esp = ebp; ebp = POP32_VAL(esp); /* 0x15033AFA: leave  */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x15033AFB: ret  */
    RECOMP_REGS_OUT();
}

void sub_15033B10(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x15033B10u);

L_15033B10:
    edi = edi; /* 0x15033B10: mov edi, edi */
    PUSH32(esp, ebp); /* 0x15033B12: push ebp */
    ebp = esp; /* 0x15033B13: mov ebp, esp */
    PUSH32(esp, ecx); /* 0x15033B15: push ecx */
    PUSH32(esp, ebx); /* 0x15033B16: push ebx */
    PUSH32(esp, esi); /* 0x15033B17: push esi */
    esi = MEM32(ebp + 0xC); /* 0x15033B18: mov esi, dword ptr [ebp + 0xc] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ebx = 0; /* 0x15033B1B: xor ebx, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x4)) = ebx; /* 0x15033B1D: mov dword ptr [ebp - 4], ebx */
    PUSH32(esp, edi); /* 0x15033B20: push edi */
    edi = MEM32(ebp + 0x10); /* 0x15033B21: mov edi, dword ptr [ebp + 0x10] */
    /* test esi, esi */ /* 0x15033B24: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_15033B34; /* 0x15033B26: je 0x15033b34 */
L_15033B28:
    /* test edi, edi */ /* 0x15033B28: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_15033BC7; /* 0x15033B2A: je 0x15033bc7 */
L_15033B30:
    MEM8(esi) = (uint8_t)(LO8(ebx)); /* 0x15033B30: mov byte ptr [esi], bl */
    goto L_15033B3C; /* 0x15033B32: jmp 0x15033b3c */
L_15033B34:
    /* test edi, edi */ /* 0x15033B34: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_15033BC7; /* 0x15033B36: jne 0x15033bc7 */
L_15033B3C:
    ebx = MEM32(ebp + 0x8); /* 0x15033B3C: mov ebx, dword ptr [ebp + 8] */
    /* test ebx, ebx */ /* 0x15033B3F: test ebx, ebx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ebx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_15033B46; /* 0x15033B41: je 0x15033b46 */
L_15033B43:
    _flag_a = (uint32_t)(MEM32(ebx)); _flag_b = (uint32_t)(0);
    MEM32(ebx) = MEM32(ebx) & 0; /* 0x15033B43: and dword ptr [ebx], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
L_15033B46:
    eax = MEM32(ebp + 0x18); /* 0x15033B46: mov eax, dword ptr [ebp + 0x18] */
    /* cmp eax, edi */ /* 0x15033B49: cmp eax, edi */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_A(_flag_a, _flag_b)) { eax = edi; } /* 0x15033B4B: cmova eax, edi */
    /* cmp eax, 0x7FFFFFFFu */ /* 0x15033B4E: cmp eax, 0x7fffffff */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x7FFFFFFFu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_15033B68; /* 0x15033B53: jbe 0x15033b68 */
L_15033B55:
    RECOMP_CALL(sub_15036430); /* 0x15033B55: call 0x15036430 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0x16u); /* 0x15033B5A: push 0x16 */
    esi = POP32_VAL(esp); /* 0x15033B5C: pop esi */
    MEM32(eax) = esi; /* 0x15033B5D: mov dword ptr [eax], esi */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x15033B5F: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, eax); /* 0x15033B61: push eax */
    PUSH32(esp, eax); /* 0x15033B62: push eax */
    PUSH32(esp, eax); /* 0x15033B63: push eax */
    PUSH32(esp, eax); /* 0x15033B64: push eax */
    PUSH32(esp, eax); /* 0x15033B65: push eax */
    goto L_15033BD6; /* 0x15033B66: jmp 0x15033bd6 */
L_15033B68:
    PUSH32(esp, MEM32(ebp + 0x1C)); /* 0x15033B68: push dword ptr [ebp + 0x1c] */
    PUSH32(esp, eax); /* 0x15033B6B: push eax */
    PUSH32(esp, MEM32(ebp + 0x14)); /* 0x15033B6C: push dword ptr [ebp + 0x14] */
    PUSH32(esp, esi); /* 0x15033B6F: push esi */
    RECOMP_CALL(sub_150338A1); /* 0x15033B70: call 0x150338a1 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x10u; /* 0x15033B75: add esp, 0x10 */
    _flag_k = FK_ADD;
    /* cmp eax, 0xFFFFFFFFu */ /* 0x15033B78: cmp eax, -1 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xFFFFFFFFu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_15033B8D; /* 0x15033B7B: jne 0x15033b8d */
L_15033B7D:
    /* test esi, esi */ /* 0x15033B7D: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_15033B84; /* 0x15033B7F: je 0x15033b84 */
L_15033B81:
    MEM8(esi) = (uint8_t)(0); /* 0x15033B81: mov byte ptr [esi], 0 */
L_15033B84:
    RECOMP_CALL(sub_15036430); /* 0x15033B84: call 0x15036430 */
    RECOMP_FLAGS_IN();
    eax = MEM32(eax); /* 0x15033B89: mov eax, dword ptr [eax] */
    goto L_15033BE0; /* 0x15033B8B: jmp 0x15033be0 */
L_15033B8D:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x15033B8D: inc eax */
    _flag_k = FK_INC;
    /* test esi, esi */ /* 0x15033B8E: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_15033BBA; /* 0x15033B90: je 0x15033bba */
L_15033B92:
    /* cmp eax, edi */ /* 0x15033B92: cmp eax, edi */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_15033BB0; /* 0x15033B94: jbe 0x15033bb0 */
L_15033B96:
    /* cmp MEM32(ebp + 0x18), 0xFFFFFFFFu */ /* 0x15033B96: cmp dword ptr [ebp + 0x18], -1 */
    _flag_a = (uint32_t)(MEM32(ebp + 0x18)); _flag_b = (uint32_t)(0xFFFFFFFFu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_15033BA9; /* 0x15033B9A: je 0x15033ba9 */
L_15033B9C:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ebx = 0; /* 0x15033B9C: xor ebx, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM8(esi) = (uint8_t)(LO8(ebx)); /* 0x15033B9E: mov byte ptr [esi], bl */
    RECOMP_CALL(sub_15036430); /* 0x15033BA0: call 0x15036430 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0x22u); /* 0x15033BA5: push 0x22 */
    goto L_15033BCE; /* 0x15033BA7: jmp 0x15033bce */
L_15033BA9:
    PUSH32(esp, 0x50u); /* 0x15033BA9: push 0x50 */
    eax = edi; /* 0x15033BAB: mov eax, edi */
    ecx = POP32_VAL(esp); /* 0x15033BAD: pop ecx */
    goto L_15033BB3; /* 0x15033BAE: jmp 0x15033bb3 */
L_15033BB0:
    ecx = MEM32(ebp + (-0x4)); /* 0x15033BB0: mov ecx, dword ptr [ebp - 4] */
L_15033BB3:
    MEM8(eax + esi + (-0x1)) = (uint8_t)(0); /* 0x15033BB3: mov byte ptr [eax + esi - 1], 0 */
    goto L_15033BBD; /* 0x15033BB8: jmp 0x15033bbd */
L_15033BBA:
    ecx = MEM32(ebp + (-0x4)); /* 0x15033BBA: mov ecx, dword ptr [ebp - 4] */
L_15033BBD:
    /* test ebx, ebx */ /* 0x15033BBD: test ebx, ebx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ebx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_15033BC3; /* 0x15033BBF: je 0x15033bc3 */
L_15033BC1:
    MEM32(ebx) = eax; /* 0x15033BC1: mov dword ptr [ebx], eax */
L_15033BC3:
    eax = ecx; /* 0x15033BC3: mov eax, ecx */
    goto L_15033BE0; /* 0x15033BC5: jmp 0x15033be0 */
L_15033BC7:
    RECOMP_CALL(sub_15036430); /* 0x15033BC7: call 0x15036430 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0x16u); /* 0x15033BCC: push 0x16 */
L_15033BCE:
    esi = POP32_VAL(esp); /* 0x15033BCE: pop esi */
    PUSH32(esp, ebx); /* 0x15033BCF: push ebx */
    PUSH32(esp, ebx); /* 0x15033BD0: push ebx */
    PUSH32(esp, ebx); /* 0x15033BD1: push ebx */
    PUSH32(esp, ebx); /* 0x15033BD2: push ebx */
    PUSH32(esp, ebx); /* 0x15033BD3: push ebx */
    MEM32(eax) = esi; /* 0x15033BD4: mov dword ptr [eax], esi */
L_15033BD6:
    RECOMP_CALL(sub_1505A110); /* 0x15033BD6: call 0x1505a110 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x14u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x14u; /* 0x15033BDB: add esp, 0x14 */
    _flag_k = FK_ADD;
    eax = esi; /* 0x15033BDE: mov eax, esi */
L_15033BE0:
    edi = POP32_VAL(esp); /* 0x15033BE0: pop edi */
    esi = POP32_VAL(esp); /* 0x15033BE1: pop esi */
    ebx = POP32_VAL(esp); /* 0x15033BE2: pop ebx */
    esp = ebp; ebp = POP32_VAL(esp); /* 0x15033BE3: leave  */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x15033BE4: ret  */
    RECOMP_REGS_OUT();
}

void sub_15033BF0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x15033BF0u);

L_15033BF0:
    edi = edi; /* 0x15033BF0: mov edi, edi */
    PUSH32(esp, ebp); /* 0x15033BF2: push ebp */
    ebp = esp; /* 0x15033BF3: mov ebp, esp */
    PUSH32(esp, 0); /* 0x15033BF5: push 0 */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x15033BF7: push dword ptr [ebp + 0x10] */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x15033BFA: push dword ptr [ebp + 0xc] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x15033BFD: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_150338A1); /* 0x15033C00: call 0x150338a1 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x10u; /* 0x15033C05: add esp, 0x10 */
    _flag_k = FK_ADD;
    ebp = POP32_VAL(esp); /* 0x15033C08: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x15033C09: ret  */
    RECOMP_REGS_OUT();
}

void sub_15033C10(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x15033C10u);

L_15033C10:
    edi = edi; /* 0x15033C10: mov edi, edi */
    PUSH32(esp, ebp); /* 0x15033C12: push ebp */
    ebp = esp; /* 0x15033C13: mov ebp, esp */
    PUSH32(esp, 0); /* 0x15033C15: push 0 */
    PUSH32(esp, MEM32(ebp + 0x18)); /* 0x15033C17: push dword ptr [ebp + 0x18] */
    PUSH32(esp, MEM32(ebp + 0x14)); /* 0x15033C1A: push dword ptr [ebp + 0x14] */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x15033C1D: push dword ptr [ebp + 0x10] */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x15033C20: push dword ptr [ebp + 0xc] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x15033C23: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_15033B10); /* 0x15033C26: call 0x15033b10 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x18u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x18u; /* 0x15033C2B: add esp, 0x18 */
    _flag_k = FK_ADD;
    ebp = POP32_VAL(esp); /* 0x15033C2E: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x15033C2F: ret  */
    RECOMP_REGS_OUT();
}

void sub_15033C40(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x15033C40u);

L_15033C40:
    edi = edi; /* 0x15033C40: mov edi, edi */
    PUSH32(esp, ebp); /* 0x15033C42: push ebp */
    ebp = esp; /* 0x15033C43: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x14u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x14u; /* 0x15033C45: sub esp, 0x14 */
    _flag_k = FK_CMP;
    PUSH32(esp, esi); /* 0x15033C48: push esi */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x15033C49: push dword ptr [ebp + 0x10] */
    _flag_a = (uint32_t)((esi | 0xFFFFFFFFu)); _flag_b = (uint32_t)((esi | 0xFFFFFFFFu));
    esi = esi | 0xFFFFFFFFu; /* 0x15033C4C: or esi, 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = ebp + (-0x14); /* 0x15033C4F: lea ecx, [ebp - 0x14] */
    MEM32(ebp + (-0x4)) = esi; /* 0x15033C52: mov dword ptr [ebp - 4], esi */
    RECOMP_CALL(sub_1502F870); /* 0x15033C55: call 0x1502f870 */
    RECOMP_FLAGS_IN();
    eax = MEM32(ebp + (-0x14)); /* 0x15033C5A: mov eax, dword ptr [ebp - 0x14] */
    ecx = ebp + (-0x14); /* 0x15033C5D: lea ecx, [ebp - 0x14] */
    PUSH32(esp, ecx); /* 0x15033C60: push ecx */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x15033C61: push dword ptr [ebp + 0xc] */
    PUSH32(esp, MEM32(eax + 0xAC)); /* 0x15033C64: push dword ptr [eax + 0xac] */
    eax = ebp + (-0x4); /* 0x15033C6A: lea eax, [ebp - 4] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x15033C6D: push dword ptr [ebp + 8] */
    PUSH32(esp, eax); /* 0x15033C70: push eax */
    RECOMP_CALL(sub_15033CA0); /* 0x15033C71: call 0x15033ca0 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x14u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x14u; /* 0x15033C76: add esp, 0x14 */
    _flag_k = FK_ADD;
    /* test eax, eax */ /* 0x15033C79: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) { esi = MEM32(ebp + (-0x4)); } /* 0x15033C7B: cmove esi, dword ptr [ebp - 4] */
    /* cmp MEM8(ebp + (-0x8)), 0 */ /* 0x15033C7F: cmp byte ptr [ebp - 8], 0 */
    _flag_a = (uint32_t)(MEM8(ebp + (-0x8))) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_15033C8C; /* 0x15033C83: je 0x15033c8c */
L_15033C85:
    ecx = MEM32(ebp + (-0xC)); /* 0x15033C85: mov ecx, dword ptr [ebp - 0xc] */
    _flag_a = (uint32_t)(MEM32(ecx + 0x70)); _flag_b = (uint32_t)(0xFFFFFFFDu);
    MEM32(ecx + 0x70) = MEM32(ecx + 0x70) & 0xFFFFFFFDu; /* 0x15033C88: and dword ptr [ecx + 0x70], 0xfffffffd */
    _cf = 0;
    _flag_k = FK_TEST;
L_15033C8C:
    eax = esi; /* 0x15033C8C: mov eax, esi */
    esi = POP32_VAL(esp); /* 0x15033C8E: pop esi */
    esp = ebp; ebp = POP32_VAL(esp); /* 0x15033C8F: leave  */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x15033C90: ret  */
    RECOMP_REGS_OUT();
}

void sub_15033CA0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x15033CA0u);

L_15033CA0:
    edi = edi; /* 0x15033CA0: mov edi, edi */
    PUSH32(esp, ebp); /* 0x15033CA2: push ebp */
    ebp = esp; /* 0x15033CA3: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x14u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x14u; /* 0x15033CA5: sub esp, 0x14 */
    _flag_k = FK_CMP;
    PUSH32(esp, ebx); /* 0x15033CA8: push ebx */
    ebx = MEM32(ebp + 0xC); /* 0x15033CA9: mov ebx, dword ptr [ebp + 0xc] */
    PUSH32(esp, edi); /* 0x15033CAC: push edi */
    edi = MEM32(ebp + 0x10); /* 0x15033CAD: mov edi, dword ptr [ebp + 0x10] */
    /* test ebx, ebx */ /* 0x15033CB0: test ebx, ebx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ebx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_15033CC9; /* 0x15033CB2: jne 0x15033cc9 */
L_15033CB4:
    /* test edi, edi */ /* 0x15033CB4: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_15033CC9; /* 0x15033CB6: je 0x15033cc9 */
L_15033CB8:
    eax = MEM32(ebp + 0x8); /* 0x15033CB8: mov eax, dword ptr [ebp + 8] */
    /* test eax, eax */ /* 0x15033CBB: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_15033CC2; /* 0x15033CBD: je 0x15033cc2 */
L_15033CBF:
    _flag_a = (uint32_t)(MEM32(eax)); _flag_b = (uint32_t)(0);
    MEM32(eax) = MEM32(eax) & 0; /* 0x15033CBF: and dword ptr [eax], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
L_15033CC2:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x15033CC2: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_15033D4B; /* 0x15033CC4: jmp 0x15033d4b */
L_15033CC9:
    eax = MEM32(ebp + 0x8); /* 0x15033CC9: mov eax, dword ptr [ebp + 8] */
    /* test eax, eax */ /* 0x15033CCC: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_15033CD3; /* 0x15033CCE: je 0x15033cd3 */
L_15033CD0:
    _flag_a = (uint32_t)((MEM32(eax) | 0xFFFFFFFFu)); _flag_b = (uint32_t)((MEM32(eax) | 0xFFFFFFFFu));
    MEM32(eax) = MEM32(eax) | 0xFFFFFFFFu; /* 0x15033CD0: or dword ptr [eax], 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
L_15033CD3:
    PUSH32(esp, esi); /* 0x15033CD3: push esi */
    /* cmp edi, 0x7FFFFFFFu */ /* 0x15033CD4: cmp edi, 0x7fffffff */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(0x7FFFFFFFu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_15033CF9; /* 0x15033CDA: jbe 0x15033cf9 */
L_15033CDC:
    RECOMP_CALL(sub_15036430); /* 0x15033CDC: call 0x15036430 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0x16u); /* 0x15033CE1: push 0x16 */
    edi = POP32_VAL(esp); /* 0x15033CE3: pop edi */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    esi = 0; /* 0x15033CE4: xor esi, esi */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, esi); /* 0x15033CE6: push esi */
    PUSH32(esp, esi); /* 0x15033CE7: push esi */
    PUSH32(esp, esi); /* 0x15033CE8: push esi */
    PUSH32(esp, esi); /* 0x15033CE9: push esi */
    PUSH32(esp, esi); /* 0x15033CEA: push esi */
    MEM32(eax) = edi; /* 0x15033CEB: mov dword ptr [eax], edi */
    RECOMP_CALL(sub_1505A110); /* 0x15033CED: call 0x1505a110 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x14u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x14u; /* 0x15033CF2: add esp, 0x14 */
    _flag_k = FK_ADD;
    eax = edi; /* 0x15033CF5: mov eax, edi */
    goto L_15033D4A; /* 0x15033CF7: jmp 0x15033d4a */
L_15033CF9:
    PUSH32(esp, MEM32(ebp + 0x18)); /* 0x15033CF9: push dword ptr [ebp + 0x18] */
    ecx = ebp + (-0x14); /* 0x15033CFC: lea ecx, [ebp - 0x14] */
    RECOMP_CALL(sub_1502F870); /* 0x15033CFF: call 0x1502f870 */
    RECOMP_FLAGS_IN();
    eax = MEM32(ebp + (-0x14)); /* 0x15033D04: mov eax, dword ptr [ebp - 0x14] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    esi = 0; /* 0x15033D07: xor esi, esi */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp MEM32(eax + 0x14), esi */ /* 0x15033D09: cmp dword ptr [eax + 0x14], esi */
    _flag_a = (uint32_t)(MEM32(eax + 0x14)); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_15033D6A; /* 0x15033D0C: jne 0x15033d6a */
L_15033D0E:
    SET_LO16(eax, MEM16(ebp + 0x14)); /* 0x15033D0E: mov ax, word ptr [ebp + 0x14] */
    ecx = 0xFFu; /* 0x15033D12: mov ecx, 0xff */
    /* cmp LO16(eax), LO16(ecx) */ /* 0x15033D17: cmp ax, cx */
    _flag_a = (uint32_t)(LO16(eax)) << 16; _flag_b = (uint32_t)(LO16(ecx)) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    if (CMP_BE(_flag_a, _flag_b)) goto L_15033D4F; /* 0x15033D1A: jbe 0x15033d4f */
L_15033D1C:
    /* test ebx, ebx */ /* 0x15033D1C: test ebx, ebx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ebx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_15033D2F; /* 0x15033D1E: je 0x15033d2f */
L_15033D20:
    /* test edi, edi */ /* 0x15033D20: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_15033D2F; /* 0x15033D22: je 0x15033d2f */
L_15033D24:
    PUSH32(esp, edi); /* 0x15033D24: push edi */
    PUSH32(esp, esi); /* 0x15033D25: push esi */
    PUSH32(esp, ebx); /* 0x15033D26: push ebx */
    RECOMP_CALL(sub_1508E3D0); /* 0x15033D27: call 0x1508e3d0 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x15033D2C: add esp, 0xc */
    _flag_k = FK_ADD;
L_15033D2F:
    RECOMP_CALL(sub_15036430); /* 0x15033D2F: call 0x15036430 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0x2Au); /* 0x15033D34: push 0x2a */
    edi = POP32_VAL(esp); /* 0x15033D36: pop edi */
    MEM32(eax) = edi; /* 0x15033D37: mov dword ptr [eax], edi */
L_15033D39:
    esi = edi; /* 0x15033D39: mov esi, edi */
L_15033D3B:
    /* cmp MEM8(ebp + (-0x8)), 0 */ /* 0x15033D3B: cmp byte ptr [ebp - 8], 0 */
    _flag_a = (uint32_t)(MEM8(ebp + (-0x8))) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_15033D48; /* 0x15033D3F: je 0x15033d48 */
L_15033D41:
    ecx = MEM32(ebp + (-0xC)); /* 0x15033D41: mov ecx, dword ptr [ebp - 0xc] */
    _flag_a = (uint32_t)(MEM32(ecx + 0x70)); _flag_b = (uint32_t)(0xFFFFFFFDu);
    MEM32(ecx + 0x70) = MEM32(ecx + 0x70) & 0xFFFFFFFDu; /* 0x15033D44: and dword ptr [ecx + 0x70], 0xfffffffd */
    _cf = 0;
    _flag_k = FK_TEST;
L_15033D48:
    eax = esi; /* 0x15033D48: mov eax, esi */
L_15033D4A:
    esi = POP32_VAL(esp); /* 0x15033D4A: pop esi */
L_15033D4B:
    edi = POP32_VAL(esp); /* 0x15033D4B: pop edi */
    ebx = POP32_VAL(esp); /* 0x15033D4C: pop ebx */
    esp = ebp; ebp = POP32_VAL(esp); /* 0x15033D4D: leave  */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x15033D4E: ret  */
L_15033D4F:
    /* test ebx, ebx */ /* 0x15033D4F: test ebx, ebx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ebx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_15033D59; /* 0x15033D51: je 0x15033d59 */
L_15033D53:
    /* test edi, edi */ /* 0x15033D53: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_15033DB8; /* 0x15033D55: je 0x15033db8 */
L_15033D57:
    MEM8(ebx) = (uint8_t)(LO8(eax)); /* 0x15033D57: mov byte ptr [ebx], al */
L_15033D59:
    eax = MEM32(ebp + 0x8); /* 0x15033D59: mov eax, dword ptr [ebp + 8] */
    /* test eax, eax */ /* 0x15033D5C: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_15033D66; /* 0x15033D5E: je 0x15033d66 */
L_15033D60:
    MEM32(eax) = 1; /* 0x15033D60: mov dword ptr [eax], 1 */
L_15033D66:
    edi = esi; /* 0x15033D66: mov edi, esi */
    RECOMP_BACKEDGE();
    goto L_15033D39; /* 0x15033D68: jmp 0x15033d39 */
L_15033D6A:
    ecx = ebp + (-0x4); /* 0x15033D6A: lea ecx, [ebp - 4] */
    MEM32(ebp + (-0x4)) = esi; /* 0x15033D6D: mov dword ptr [ebp - 4], esi */
    PUSH32(esp, ecx); /* 0x15033D70: push ecx */
    PUSH32(esp, esi); /* 0x15033D71: push esi */
    PUSH32(esp, edi); /* 0x15033D72: push edi */
    PUSH32(esp, ebx); /* 0x15033D73: push ebx */
    PUSH32(esp, 1); /* 0x15033D74: push 1 */
    ecx = ebp + 0x14; /* 0x15033D76: lea ecx, [ebp + 0x14] */
    PUSH32(esp, ecx); /* 0x15033D79: push ecx */
    PUSH32(esp, esi); /* 0x15033D7A: push esi */
    PUSH32(esp, MEM32(eax + 0x4)); /* 0x15033D7B: push dword ptr [eax + 4] */
    RECOMP_ICALL(MEM32(0x150C0248)); /* 0x15033D7E: call dword ptr [0x150c0248] */
    RECOMP_FLAGS_IN();
    ecx = eax; /* 0x15033D84: mov ecx, eax */
    /* test ecx, ecx */ /* 0x15033D86: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_15033D9A; /* 0x15033D88: je 0x15033d9a */
L_15033D8A:
    /* cmp MEM32(ebp + (-0x4)), esi */ /* 0x15033D8A: cmp dword ptr [ebp - 4], esi */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x4))); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_NE(_flag_a, _flag_b)) goto L_15033D2F; /* 0x15033D8D: jne 0x15033d2f */
L_15033D8F:
    eax = MEM32(ebp + 0x8); /* 0x15033D8F: mov eax, dword ptr [ebp + 8] */
    /* test eax, eax */ /* 0x15033D92: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_Z(_flag_a, _flag_b)) goto L_15033D3B; /* 0x15033D94: je 0x15033d3b */
L_15033D96:
    MEM32(eax) = ecx; /* 0x15033D96: mov dword ptr [eax], ecx */
    RECOMP_BACKEDGE();
    goto L_15033D3B; /* 0x15033D98: jmp 0x15033d3b */
L_15033D9A:
    RECOMP_ICALL(MEM32(0x150C006C)); /* 0x15033D9A: call dword ptr [0x150c006c] */
    RECOMP_FLAGS_IN();
    /* cmp eax, 0x7Au */ /* 0x15033DA0: cmp eax, 0x7a */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x7Au);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_NE(_flag_a, _flag_b)) goto L_15033D2F; /* 0x15033DA3: jne 0x15033d2f */
L_15033DA5:
    /* test ebx, ebx */ /* 0x15033DA5: test ebx, ebx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ebx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_15033DB8; /* 0x15033DA7: je 0x15033db8 */
L_15033DA9:
    /* test edi, edi */ /* 0x15033DA9: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_15033DB8; /* 0x15033DAB: je 0x15033db8 */
L_15033DAD:
    PUSH32(esp, edi); /* 0x15033DAD: push edi */
    PUSH32(esp, esi); /* 0x15033DAE: push esi */
    PUSH32(esp, ebx); /* 0x15033DAF: push ebx */
    RECOMP_CALL(sub_1508E3D0); /* 0x15033DB0: call 0x1508e3d0 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x15033DB5: add esp, 0xc */
    _flag_k = FK_ADD;
L_15033DB8:
    RECOMP_CALL(sub_15036430); /* 0x15033DB8: call 0x15036430 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0x22u); /* 0x15033DBD: push 0x22 */
    edi = POP32_VAL(esp); /* 0x15033DBF: pop edi */
    PUSH32(esp, esi); /* 0x15033DC0: push esi */
    PUSH32(esp, esi); /* 0x15033DC1: push esi */
    PUSH32(esp, esi); /* 0x15033DC2: push esi */
    PUSH32(esp, esi); /* 0x15033DC3: push esi */
    PUSH32(esp, esi); /* 0x15033DC4: push esi */
    MEM32(eax) = edi; /* 0x15033DC5: mov dword ptr [eax], edi */
    RECOMP_CALL(sub_1505A110); /* 0x15033DC7: call 0x1505a110 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x14u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x14u; /* 0x15033DCC: add esp, 0x14 */
    _flag_k = FK_ADD;
    RECOMP_BACKEDGE();
    goto L_15033D39; /* 0x15033DCF: jmp 0x15033d39 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    RECOMP_REGS_OUT();
}

void sub_15033DE0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x15033DE0u);

L_15033DE0:
    edi = edi; /* 0x15033DE0: mov edi, edi */
    PUSH32(esp, ebp); /* 0x15033DE2: push ebp */
    ebp = esp; /* 0x15033DE3: mov ebp, esp */
    PUSH32(esp, ecx); /* 0x15033DE5: push ecx */
    PUSH32(esp, esi); /* 0x15033DE6: push esi */
    PUSH32(esp, 0); /* 0x15033DE7: push 0 */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x15033DE9: push dword ptr [ebp + 0xc] */
    eax = ebp + (-0x4); /* 0x15033DEC: lea eax, [ebp - 4] */
    _flag_a = (uint32_t)((esi | 0xFFFFFFFFu)); _flag_b = (uint32_t)((esi | 0xFFFFFFFFu));
    esi = esi | 0xFFFFFFFFu; /* 0x15033DEF: or esi, 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, MEM32(0x150BD314)); /* 0x15033DF2: push dword ptr [0x150bd314] */
    MEM32(ebp + (-0x4)) = esi; /* 0x15033DF8: mov dword ptr [ebp - 4], esi */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x15033DFB: push dword ptr [ebp + 8] */
    PUSH32(esp, eax); /* 0x15033DFE: push eax */
    RECOMP_CALL(sub_15033CA0); /* 0x15033DFF: call 0x15033ca0 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x14u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x14u; /* 0x15033E04: add esp, 0x14 */
    _flag_k = FK_ADD;
    /* test eax, eax */ /* 0x15033E07: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) { esi = MEM32(ebp + (-0x4)); } /* 0x15033E09: cmove esi, dword ptr [ebp - 4] */
    eax = esi; /* 0x15033E0D: mov eax, esi */
    esi = POP32_VAL(esp); /* 0x15033E0F: pop esi */
    esp = ebp; ebp = POP32_VAL(esp); /* 0x15033E10: leave  */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x15033E11: ret  */
    RECOMP_REGS_OUT();
}

void sub_15033E20(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x15033E20u);

L_15033E20:
    edi = edi; /* 0x15033E20: mov edi, edi */
    PUSH32(esp, ebp); /* 0x15033E22: push ebp */
    ebp = esp; /* 0x15033E23: mov ebp, esp */
    PUSH32(esp, 0); /* 0x15033E25: push 0 */
    PUSH32(esp, MEM32(ebp + 0x14)); /* 0x15033E27: push dword ptr [ebp + 0x14] */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x15033E2A: push dword ptr [ebp + 0x10] */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x15033E2D: push dword ptr [ebp + 0xc] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x15033E30: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_15033CA0); /* 0x15033E33: call 0x15033ca0 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x14u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x14u; /* 0x15033E38: add esp, 0x14 */
    _flag_k = FK_ADD;
    ebp = POP32_VAL(esp); /* 0x15033E3B: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x15033E3C: ret  */
    RECOMP_REGS_OUT();
}

void sub_15033E50(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x15033E50u);

L_15033E50:
    edi = edi; /* 0x15033E50: mov edi, edi */
    PUSH32(esp, ebp); /* 0x15033E52: push ebp */
    ebp = esp; /* 0x15033E53: mov ebp, esp */
    PUSH32(esp, 0); /* 0x15033E55: push 0 */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x15033E57: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_15033E70); /* 0x15033E5A: call 0x15033e70 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x15033E5F: pop ecx */
    ecx = POP32_VAL(esp); /* 0x15033E60: pop ecx */
    ebp = POP32_VAL(esp); /* 0x15033E61: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x15033E62: ret  */
    RECOMP_REGS_OUT();
}

void sub_15033E70(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x15033E70u);

L_15033E70:
    edi = edi; /* 0x15033E70: mov edi, edi */
    PUSH32(esp, ebp); /* 0x15033E72: push ebp */
    ebp = esp; /* 0x15033E73: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x34u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x34u; /* 0x15033E75: sub esp, 0x34 */
    _flag_k = FK_CMP;
    eax = MEM32(0x150BD340); /* 0x15033E78: mov eax, dword ptr [0x150bd340] */
    _flag_a = (uint32_t)((eax ^ ebp)); _flag_b = (uint32_t)((eax ^ ebp));
    eax = eax ^ ebp; /* 0x15033E7D: xor eax, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x4)) = eax; /* 0x15033E7F: mov dword ptr [ebp - 4], eax */
    PUSH32(esp, esi); /* 0x15033E82: push esi */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x15033E83: push dword ptr [ebp + 0xc] */
    esi = MEM32(ebp + 0x8); /* 0x15033E86: mov esi, dword ptr [ebp + 8] */
    ecx = ebp + (-0x34); /* 0x15033E89: lea ecx, [ebp - 0x34] */
    RECOMP_CALL(sub_1502F870); /* 0x15033E8C: call 0x1502f870 */
    RECOMP_FLAGS_IN();
    /* test esi, esi */ /* 0x15033E91: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_15033EB7; /* 0x15033E93: jne 0x15033eb7 */
L_15033E95:
    RECOMP_CALL(sub_15036430); /* 0x15033E95: call 0x15036430 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x15033E9A: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, ecx); /* 0x15033E9C: push ecx */
    PUSH32(esp, ecx); /* 0x15033E9D: push ecx */
    PUSH32(esp, ecx); /* 0x15033E9E: push ecx */
    PUSH32(esp, ecx); /* 0x15033E9F: push ecx */
    PUSH32(esp, ecx); /* 0x15033EA0: push ecx */
    MEM32(eax) = 0x16u; /* 0x15033EA1: mov dword ptr [eax], 0x16 */
    RECOMP_CALL(sub_1505A110); /* 0x15033EA7: call 0x1505a110 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x14u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x14u; /* 0x15033EAC: add esp, 0x14 */
    _flag_k = FK_ADD;
    { xmm_t _s = _xmm[0]; for (int _k = 0; _k < 4; _k++) _xmm[0].u32[_k] = _xmm[0].u32[_k] ^ _s.u32[_k]; } /* 0x15033EAF: xorps xmm0, xmm0 */
    goto L_15033EFE; /* 0x15033EB2: jmp 0x15033efe */
L_15033EB4:
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esi = esi + 2; /* 0x15033EB4: add esi, 2 */
    _flag_k = FK_ADD;
L_15033EB7:
    eax = (uint32_t)MEM16(esi); /* 0x15033EB7: movzx eax, word ptr [esi] */
    ecx = ebp + (-0x34); /* 0x15033EBA: lea ecx, [ebp - 0x34] */
    PUSH32(esp, ecx); /* 0x15033EBD: push ecx */
    PUSH32(esp, 8); /* 0x15033EBE: push 8 */
    PUSH32(esp, eax); /* 0x15033EC0: push eax */
    RECOMP_CALL(sub_15031890); /* 0x15033EC1: call 0x15031890 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x15033EC6: add esp, 0xc */
    _flag_k = FK_ADD;
    /* test eax, eax */ /* 0x15033EC9: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_15033EB4; /* 0x15033ECB: jne 0x15033eb4 */
L_15033ECD:
    edx = esi; /* 0x15033ECD: mov edx, esi */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x15033ECF: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, edi); /* 0x15033ED1: push edi */
    edi = edx + 0x2; /* 0x15033ED2: lea edi, [edx + 2] */
L_15033ED5:
    SET_LO16(eax, MEM16(edx)); /* 0x15033ED5: mov ax, word ptr [edx] */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edx = edx + 2; /* 0x15033ED8: add edx, 2 */
    _flag_k = FK_ADD;
    /* cmp LO16(eax), LO16(ecx) */ /* 0x15033EDB: cmp ax, cx */
    _flag_a = (uint32_t)(LO16(eax)) << 16; _flag_b = (uint32_t)(LO16(ecx)) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    RECOMP_BACKEDGE();
    if (CMP_NE(_flag_a, _flag_b)) goto L_15033ED5; /* 0x15033EDE: jne 0x15033ed5 */
L_15033EE0:
    eax = ebp + (-0x34); /* 0x15033EE0: lea eax, [ebp - 0x34] */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    edx = edx - edi; /* 0x15033EE3: sub edx, edi */
    _flag_k = FK_CMP;
    PUSH32(esp, eax); /* 0x15033EE5: push eax */
    PUSH32(esp, ecx); /* 0x15033EE6: push ecx */
    PUSH32(esp, ecx); /* 0x15033EE7: push ecx */
    if (1u) _cf = (((edx) >> 0) & 1u); /* 0x15033EE8: sar edx, 1 */
    if (1u) { _flag_a = recomp_flags_pack(((uint32_t)((int32_t)edx >> 1u)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    edx = (uint32_t)((int32_t)edx >> 1u);
    eax = ebp + (-0x1C); /* 0x15033EEA: lea eax, [ebp - 0x1c] */
    PUSH32(esp, edx); /* 0x15033EED: push edx */
    PUSH32(esp, esi); /* 0x15033EEE: push esi */
    PUSH32(esp, eax); /* 0x15033EEF: push eax */
    RECOMP_CALL(sub_15098030); /* 0x15033EF0: call 0x15098030 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x18u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x18u; /* 0x15033EF5: add esp, 0x18 */
    _flag_k = FK_ADD;
    _xmm[0].u64[0] = MEM64(eax + 0x10); _xmm[0].u64[1] = 0; /* 0x15033EF8: movsd xmm0, qword ptr [eax + 0x10] */
    edi = POP32_VAL(esp); /* 0x15033EFD: pop edi */
L_15033EFE:
    /* cmp MEM8(ebp + (-0x28)), 0 */ /* 0x15033EFE: cmp byte ptr [ebp - 0x28], 0 */
    _flag_a = (uint32_t)(MEM8(ebp + (-0x28))) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    MEM64(ebp + (-0x24)) = _xmm[0].u64[0]; /* 0x15033F02: movsd qword ptr [ebp - 0x24], xmm0 */
    esi = POP32_VAL(esp); /* 0x15033F07: pop esi */
    if (CMP_EQ(_flag_a, _flag_b)) goto L_15033F11; /* 0x15033F08: je 0x15033f11 */
L_15033F0A:
    eax = MEM32(ebp + (-0x2C)); /* 0x15033F0A: mov eax, dword ptr [ebp - 0x2c] */
    _flag_a = (uint32_t)(MEM32(eax + 0x70)); _flag_b = (uint32_t)(0xFFFFFFFDu);
    MEM32(eax + 0x70) = MEM32(eax + 0x70) & 0xFFFFFFFDu; /* 0x15033F0D: and dword ptr [eax + 0x70], 0xfffffffd */
    _cf = 0;
    _flag_k = FK_TEST;
L_15033F11:
    ecx = MEM32(ebp + (-0x4)); /* 0x15033F11: mov ecx, dword ptr [ebp - 4] */
    fp_push(*(double*)ADDR(ebp + (-0x24))); /* 0x15033F14: fld qword ptr [ebp - 0x24] */
    _flag_a = (uint32_t)((ecx ^ ebp)); _flag_b = (uint32_t)((ecx ^ ebp));
    ecx = ecx ^ ebp; /* 0x15033F17: xor ecx, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_1505E540); /* 0x15033F19: call 0x1505e540 */
    RECOMP_FLAGS_IN();
    esp = ebp; ebp = POP32_VAL(esp); /* 0x15033F1E: leave  */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x15033F1F: ret  */
    RECOMP_REGS_OUT();
}

void sub_15033F30(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x15033F30u);

L_15033F30:
    edi = edi; /* 0x15033F30: mov edi, edi */
    PUSH32(esp, ebp); /* 0x15033F32: push ebp */
    ebp = esp; /* 0x15033F33: mov ebp, esp */
    ebp = POP32_VAL(esp); /* 0x15033F35: pop ebp */
    goto L_15033FC0; /* 0x15033F36: jmp 0x15033fc0 */
L_15033FC0:
    edi = edi; /* 0x15033FC0: mov edi, edi */
    PUSH32(esp, ebp); /* 0x15033FC2: push ebp */
    ebp = esp; /* 0x15033FC3: mov ebp, esp */
    /* cmp MEM32(ebp + 0x8), 0 */ /* 0x15033FC5: cmp dword ptr [ebp + 8], 0 */
    _flag_a = (uint32_t)(MEM32(ebp + 0x8)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_15033FCF; /* 0x15033FC9: jne 0x15033fcf */
L_15033FCB:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x15033FCB: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    ebp = POP32_VAL(esp); /* 0x15033FCD: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x15033FCE: ret  */
L_15033FCF:
    PUSH32(esp, 1); /* 0x15033FCF: push 1 */
    PUSH32(esp, 0xAu); /* 0x15033FD1: push 0xa */
    PUSH32(esp, 0); /* 0x15033FD3: push 0 */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x15033FD5: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_15033812); /* 0x15033FD8: call 0x15033812 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x10u; /* 0x15033FDD: add esp, 0x10 */
    _flag_k = FK_ADD;
    ebp = POP32_VAL(esp); /* 0x15033FE0: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x15033FE1: ret  */
    RECOMP_REGS_OUT();
}

void sub_15033F50(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x15033F50u);

L_15033F50:
    edi = edi; /* 0x15033F50: mov edi, edi */
    PUSH32(esp, ebp); /* 0x15033F52: push ebp */
    ebp = esp; /* 0x15033F53: mov ebp, esp */
    /* cmp MEM32(ebp + 0x8), 0 */ /* 0x15033F55: cmp dword ptr [ebp + 8], 0 */
    _flag_a = (uint32_t)(MEM32(ebp + 0x8)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_15033F61; /* 0x15033F59: jne 0x15033f61 */
L_15033F5B:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x15033F5B: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edx = 0; /* 0x15033F5D: xor edx, edx */
    _cf = 0;
    _flag_k = FK_TEST;
    ebp = POP32_VAL(esp); /* 0x15033F5F: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x15033F60: ret  */
L_15033F61:
    PUSH32(esp, 0xAu); /* 0x15033F61: push 0xa */
    PUSH32(esp, 0); /* 0x15033F63: push 0 */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x15033F65: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_15033430); /* 0x15033F68: call 0x15033430 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x15033F6D: add esp, 0xc */
    _flag_k = FK_ADD;
    ebp = POP32_VAL(esp); /* 0x15033F70: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x15033F71: ret  */
    RECOMP_REGS_OUT();
}

void sub_15033F80(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x15033F80u);

L_15033F80:
    edi = edi; /* 0x15033F80: mov edi, edi */
    PUSH32(esp, ebp); /* 0x15033F82: push ebp */
    ebp = esp; /* 0x15033F83: mov ebp, esp */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x15033F85: push dword ptr [ebp + 0xc] */
    PUSH32(esp, 0xAu); /* 0x15033F88: push 0xa */
    PUSH32(esp, 0); /* 0x15033F8A: push 0 */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x15033F8C: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_15033470); /* 0x15033F8F: call 0x15033470 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x10u; /* 0x15033F94: add esp, 0x10 */
    _flag_k = FK_ADD;
    ebp = POP32_VAL(esp); /* 0x15033F97: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x15033F98: ret  */
    RECOMP_REGS_OUT();
}

void sub_15033FA0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x15033FA0u);

L_15033FA0:
    edi = edi; /* 0x15033FA0: mov edi, edi */
    PUSH32(esp, ebp); /* 0x15033FA2: push ebp */
    ebp = esp; /* 0x15033FA3: mov ebp, esp */
    ebp = POP32_VAL(esp); /* 0x15033FA5: pop ebp */
    goto L_15033FF0; /* 0x15033FA6: jmp 0x15033ff0 */
L_15033FF0:
    edi = edi; /* 0x15033FF0: mov edi, edi */
    PUSH32(esp, ebp); /* 0x15033FF2: push ebp */
    ebp = esp; /* 0x15033FF3: mov ebp, esp */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x15033FF5: push dword ptr [ebp + 0xc] */
    PUSH32(esp, 0xAu); /* 0x15033FF8: push 0xa */
    PUSH32(esp, 0); /* 0x15033FFA: push 0 */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x15033FFC: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_15033780); /* 0x15033FFF: call 0x15033780 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x10u; /* 0x15034004: add esp, 0x10 */
    _flag_k = FK_ADD;
    ebp = POP32_VAL(esp); /* 0x15034007: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x15034008: ret  */
    RECOMP_REGS_OUT();
}

void sub_15033FC0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x15033FC0u);

L_15033FC0:
    edi = edi; /* 0x15033FC0: mov edi, edi */
    PUSH32(esp, ebp); /* 0x15033FC2: push ebp */
    ebp = esp; /* 0x15033FC3: mov ebp, esp */
    /* cmp MEM32(ebp + 0x8), 0 */ /* 0x15033FC5: cmp dword ptr [ebp + 8], 0 */
    _flag_a = (uint32_t)(MEM32(ebp + 0x8)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_15033FCF; /* 0x15033FC9: jne 0x15033fcf */
L_15033FCB:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x15033FCB: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    ebp = POP32_VAL(esp); /* 0x15033FCD: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x15033FCE: ret  */
L_15033FCF:
    PUSH32(esp, 1); /* 0x15033FCF: push 1 */
    PUSH32(esp, 0xAu); /* 0x15033FD1: push 0xa */
    PUSH32(esp, 0); /* 0x15033FD3: push 0 */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x15033FD5: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_15033812); /* 0x15033FD8: call 0x15033812 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x10u; /* 0x15033FDD: add esp, 0x10 */
    _flag_k = FK_ADD;
    ebp = POP32_VAL(esp); /* 0x15033FE0: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x15033FE1: ret  */
    RECOMP_REGS_OUT();
}

void sub_15033FF0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x15033FF0u);

L_15033FF0:
    edi = edi; /* 0x15033FF0: mov edi, edi */
    PUSH32(esp, ebp); /* 0x15033FF2: push ebp */
    ebp = esp; /* 0x15033FF3: mov ebp, esp */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x15033FF5: push dword ptr [ebp + 0xc] */
    PUSH32(esp, 0xAu); /* 0x15033FF8: push 0xa */
    PUSH32(esp, 0); /* 0x15033FFA: push 0 */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x15033FFC: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_15033780); /* 0x15033FFF: call 0x15033780 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x10u; /* 0x15034004: add esp, 0x10 */
    _flag_k = FK_ADD;
    ebp = POP32_VAL(esp); /* 0x15034007: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x15034008: ret  */
    RECOMP_REGS_OUT();
}

void sub_1503400F(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1503400Fu);

L_1503400F:
    edi = edi; /* 0x1503400F: mov edi, edi */
    PUSH32(esp, ebp); /* 0x15034011: push ebp */
    ebp = esp; /* 0x15034012: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x10u; /* 0x15034014: sub esp, 0x10 */
    _flag_k = FK_CMP;
    PUSH32(esp, ebx); /* 0x15034017: push ebx */
    PUSH32(esp, edi); /* 0x15034018: push edi */
    edi = MEM32(ebp + 0xC); /* 0x15034019: mov edi, dword ptr [ebp + 0xc] */
    /* test edi, edi */ /* 0x1503401C: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_15034025; /* 0x1503401E: je 0x15034025 */
L_15034020:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x15034020: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM16(edi) = (uint16_t)(LO16(eax)); /* 0x15034022: mov word ptr [edi], ax */
L_15034025:
    ebx = MEM32(ebp + 0x10); /* 0x15034025: mov ebx, dword ptr [ebp + 0x10] */
    /* test ebx, ebx */ /* 0x15034028: test ebx, ebx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ebx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1503419E; /* 0x1503402A: je 0x1503419e */
L_15034030:
    /* cmp MEM32(ebp + 0x14), 0 */ /* 0x15034030: cmp dword ptr [ebp + 0x14], 0 */
    _flag_a = (uint32_t)(MEM32(ebp + 0x14)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1503419E; /* 0x15034034: je 0x1503419e */
L_1503403A:
    /* cmp MEM8(ebx), 0 */ /* 0x1503403A: cmp byte ptr [ebx], 0 */
    _flag_a = (uint32_t)(MEM8(ebx)) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1503419E; /* 0x1503403D: je 0x1503419e */
L_15034043:
    PUSH32(esp, esi); /* 0x15034043: push esi */
    PUSH32(esp, MEM32(ebp + 0x1C)); /* 0x15034044: push dword ptr [ebp + 0x1c] */
    ecx = ebp + (-0x10); /* 0x15034047: lea ecx, [ebp - 0x10] */
    RECOMP_CALL(sub_1502F870); /* 0x1503404A: call 0x1502f870 */
    RECOMP_FLAGS_IN();
    ecx = MEM32(ebp + (-0x10)); /* 0x1503404F: mov ecx, dword ptr [ebp - 0x10] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    esi = 0; /* 0x15034052: xor esi, esi */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp MEM32(ecx + 0x14), esi */ /* 0x15034054: cmp dword ptr [ecx + 0x14], esi */
    _flag_a = (uint32_t)(MEM32(ecx + 0x14)); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_15034085; /* 0x15034057: jne 0x15034085 */
L_15034059:
    /* test edi, edi */ /* 0x15034059: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_15034063; /* 0x1503405B: je 0x15034063 */
L_1503405D:
    eax = (uint32_t)MEM8(ebx); /* 0x1503405D: movzx eax, byte ptr [ebx] */
    MEM16(edi) = (uint16_t)(LO16(eax)); /* 0x15034060: mov word ptr [edi], ax */
L_15034063:
    eax = MEM32(ebp + 0x8); /* 0x15034063: mov eax, dword ptr [ebp + 8] */
    /* test eax, eax */ /* 0x15034066: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_15034070; /* 0x15034068: je 0x15034070 */
L_1503406A:
    MEM32(eax) = 1; /* 0x1503406A: mov dword ptr [eax], 1 */
L_15034070:
    /* cmp MEM8(ebp + (-0x4)), 0 */ /* 0x15034070: cmp byte ptr [ebp - 4], 0 */
    _flag_a = (uint32_t)(MEM8(ebp + (-0x4))) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1503407D; /* 0x15034074: je 0x1503407d */
L_15034076:
    ecx = MEM32(ebp + (-0x8)); /* 0x15034076: mov ecx, dword ptr [ebp - 8] */
    _flag_a = (uint32_t)(MEM32(ecx + 0x70)); _flag_b = (uint32_t)(0xFFFFFFFDu);
    MEM32(ecx + 0x70) = MEM32(ecx + 0x70) & 0xFFFFFFFDu; /* 0x15034079: and dword ptr [ecx + 0x70], 0xfffffffd */
    _cf = 0;
    _flag_k = FK_TEST;
L_1503407D:
    eax = esi; /* 0x1503407D: mov eax, esi */
    esi = POP32_VAL(esp); /* 0x1503407F: pop esi */
    goto L_150341AA; /* 0x15034080: jmp 0x150341aa */
L_15034085:
    eax = MEM32(ebp + 0x18); /* 0x15034085: mov eax, dword ptr [ebp + 0x18] */
    /* cmp MEM32(eax), esi */ /* 0x15034088: cmp dword ptr [eax], esi */
    _flag_a = (uint32_t)(MEM32(eax)); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_150340D5; /* 0x1503408A: je 0x150340d5 */
L_1503408C:
    SET_LO8(eax, MEM8(ebx)); /* 0x1503408C: mov al, byte ptr [ebx] */
    ebx = MEM32(ebp + 0x18); /* 0x1503408E: mov ebx, dword ptr [ebp + 0x18] */
    MEM8(ebx + 0x1) = (uint8_t)(LO8(eax)); /* 0x15034091: mov byte ptr [ebx + 1], al */
    /* cmp MEM32(ecx + 0xAC), 1 */ /* 0x15034094: cmp dword ptr [ecx + 0xac], 1 */
    _flag_a = (uint32_t)(MEM32(ecx + 0xAC)); _flag_b = (uint32_t)(1);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_LE(_flag_a, _flag_b)) goto L_150340CE; /* 0x1503409B: jle 0x150340ce */
L_1503409D:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1503409D: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    /* test edi, edi */ /* 0x1503409F: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    SET_LO8(eax, (TEST_NZ(_flag_a, _flag_b)) ? 1 : 0); /* 0x150340A1: setne al */
    PUSH32(esp, eax); /* 0x150340A4: push eax */
    PUSH32(esp, edi); /* 0x150340A5: push edi */
    PUSH32(esp, 2); /* 0x150340A6: push 2 */
    PUSH32(esp, ebx); /* 0x150340A8: push ebx */
    PUSH32(esp, 9); /* 0x150340A9: push 9 */
    PUSH32(esp, MEM32(ecx + 0x4)); /* 0x150340AB: push dword ptr [ecx + 4] */
    RECOMP_ICALL(MEM32(0x150C024C)); /* 0x150340AE: call dword ptr [0x150c024c] */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x150340B4: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_150340CE; /* 0x150340B6: je 0x150340ce */
L_150340B8:
    ecx = MEM32(ebp + 0x8); /* 0x150340B8: mov ecx, dword ptr [ebp + 8] */
    MEM32(ebx) = esi; /* 0x150340BB: mov dword ptr [ebx], esi */
    /* test ecx, ecx */ /* 0x150340BD: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_Z(_flag_a, _flag_b)) goto L_15034070; /* 0x150340BF: je 0x15034070 */
L_150340C1:
    eax = MEM32(ebp + (-0x10)); /* 0x150340C1: mov eax, dword ptr [ebp - 0x10] */
    eax = MEM32(eax + 0xAC); /* 0x150340C4: mov eax, dword ptr [eax + 0xac] */
    MEM32(ecx) = eax; /* 0x150340CA: mov dword ptr [ecx], eax */
    RECOMP_BACKEDGE();
    goto L_15034070; /* 0x150340CC: jmp 0x15034070 */
L_150340CE:
    MEM32(ebx) = esi; /* 0x150340CE: mov dword ptr [ebx], esi */
    goto L_1503417C; /* 0x150340D0: jmp 0x1503417c */
L_150340D5:
    eax = (uint32_t)MEM8(ebx); /* 0x150340D5: movzx eax, byte ptr [ebx] */
    ecx = ebp + (-0x10); /* 0x150340D8: lea ecx, [ebp - 0x10] */
    PUSH32(esp, ecx); /* 0x150340DB: push ecx */
    PUSH32(esp, eax); /* 0x150340DC: push eax */
    RECOMP_CALL(sub_15031550); /* 0x150340DD: call 0x15031550 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x150340E2: pop ecx */
    ecx = POP32_VAL(esp); /* 0x150340E3: pop ecx */
    /* test eax, eax */ /* 0x150340E4: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1503415A; /* 0x150340E6: je 0x1503415a */
L_150340E8:
    ecx = MEM32(ebp + (-0x10)); /* 0x150340E8: mov ecx, dword ptr [ebp - 0x10] */
    edx = MEM32(ecx + 0xAC); /* 0x150340EB: mov edx, dword ptr [ecx + 0xac] */
    /* cmp MEM32(ebp + 0x14), edx */ /* 0x150340F1: cmp dword ptr [ebp + 0x14], edx */
    _flag_a = (uint32_t)(MEM32(ebp + 0x14)); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_AE(_flag_a, _flag_b)) goto L_15034113; /* 0x150340F4: jae 0x15034113 */
L_150340F6:
    ecx = MEM32(ebp + 0x18); /* 0x150340F6: mov ecx, dword ptr [ebp + 0x18] */
    SET_LO8(eax, MEM8(ebx)); /* 0x150340F9: mov al, byte ptr [ebx] */
    MEM8(ecx) = (uint8_t)(LO8(eax)); /* 0x150340FB: mov byte ptr [ecx], al */
    eax = MEM32(ebp + 0x8); /* 0x150340FD: mov eax, dword ptr [ebp + 8] */
    /* test eax, eax */ /* 0x15034100: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_Z(_flag_a, _flag_b)) goto L_15034070; /* 0x15034102: je 0x15034070 */
L_15034108:
    MEM32(eax) = 0xFFFFFFFEu; /* 0x15034108: mov dword ptr [eax], 0xfffffffe */
    RECOMP_BACKEDGE();
    goto L_15034070; /* 0x1503410E: jmp 0x15034070 */
L_15034113:
    /* cmp edx, 1 */ /* 0x15034113: cmp edx, 1 */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(1);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_LE(_flag_a, _flag_b)) goto L_15034135; /* 0x15034116: jle 0x15034135 */
L_15034118:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x15034118: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    /* test edi, edi */ /* 0x1503411A: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    SET_LO8(eax, (TEST_NZ(_flag_a, _flag_b)) ? 1 : 0); /* 0x1503411C: setne al */
    PUSH32(esp, eax); /* 0x1503411F: push eax */
    PUSH32(esp, edi); /* 0x15034120: push edi */
    PUSH32(esp, edx); /* 0x15034121: push edx */
    PUSH32(esp, ebx); /* 0x15034122: push ebx */
    PUSH32(esp, 9); /* 0x15034123: push 9 */
    PUSH32(esp, MEM32(ecx + 0x4)); /* 0x15034125: push dword ptr [ecx + 4] */
    RECOMP_ICALL(MEM32(0x150C024C)); /* 0x15034128: call dword ptr [0x150c024c] */
    RECOMP_FLAGS_IN();
    ecx = MEM32(ebp + (-0x10)); /* 0x1503412E: mov ecx, dword ptr [ebp - 0x10] */
    /* test eax, eax */ /* 0x15034131: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_15034142; /* 0x15034133: jne 0x15034142 */
L_15034135:
    /* cmp MEM8(ebx + 0x1), 0 */ /* 0x15034135: cmp byte ptr [ebx + 1], 0 */
    _flag_a = (uint32_t)(MEM8(ebx + 0x1)) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_15034142; /* 0x15034139: jne 0x15034142 */
L_1503413B:
    eax = MEM32(ebp + 0x18); /* 0x1503413B: mov eax, dword ptr [ebp + 0x18] */
    MEM32(eax) = esi; /* 0x1503413E: mov dword ptr [eax], esi */
    goto L_1503417C; /* 0x15034140: jmp 0x1503417c */
L_15034142:
    edx = MEM32(ebp + 0x8); /* 0x15034142: mov edx, dword ptr [ebp + 8] */
    /* test edx, edx */ /* 0x15034145: test edx, edx */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(edx);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_Z(_flag_a, _flag_b)) goto L_15034070; /* 0x15034147: je 0x15034070 */
L_1503414D:
    eax = MEM32(ecx + 0xAC); /* 0x1503414D: mov eax, dword ptr [ecx + 0xac] */
    MEM32(edx) = eax; /* 0x15034153: mov dword ptr [edx], eax */
    RECOMP_BACKEDGE();
    goto L_15034070; /* 0x15034155: jmp 0x15034070 */
L_1503415A:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1503415A: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    /* test edi, edi */ /* 0x1503415C: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    SET_LO8(eax, (TEST_NZ(_flag_a, _flag_b)) ? 1 : 0); /* 0x1503415E: setne al */
    PUSH32(esp, eax); /* 0x15034161: push eax */
    eax = MEM32(ebp + (-0x10)); /* 0x15034162: mov eax, dword ptr [ebp - 0x10] */
    PUSH32(esp, edi); /* 0x15034165: push edi */
    PUSH32(esp, 1); /* 0x15034166: push 1 */
    PUSH32(esp, ebx); /* 0x15034168: push ebx */
    PUSH32(esp, 9); /* 0x15034169: push 9 */
    PUSH32(esp, MEM32(eax + 0x4)); /* 0x1503416B: push dword ptr [eax + 4] */
    RECOMP_ICALL(MEM32(0x150C024C)); /* 0x1503416E: call dword ptr [0x150c024c] */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x15034174: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_15034063; /* 0x15034176: jne 0x15034063 */
L_1503417C:
    /* test edi, edi */ /* 0x1503417C: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_15034185; /* 0x1503417E: je 0x15034185 */
L_15034180:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x15034180: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM16(edi) = (uint16_t)(LO16(eax)); /* 0x15034182: mov word ptr [edi], ax */
L_15034185:
    eax = MEM32(ebp + 0x8); /* 0x15034185: mov eax, dword ptr [ebp + 8] */
    /* test eax, eax */ /* 0x15034188: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1503418F; /* 0x1503418A: je 0x1503418f */
L_1503418C:
    _flag_a = (uint32_t)((MEM32(eax) | 0xFFFFFFFFu)); _flag_b = (uint32_t)((MEM32(eax) | 0xFFFFFFFFu));
    MEM32(eax) = MEM32(eax) | 0xFFFFFFFFu; /* 0x1503418C: or dword ptr [eax], 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
L_1503418F:
    RECOMP_CALL(sub_15036430); /* 0x1503418F: call 0x15036430 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0x2Au); /* 0x15034194: push 0x2a */
    esi = POP32_VAL(esp); /* 0x15034196: pop esi */
    MEM32(eax) = esi; /* 0x15034197: mov dword ptr [eax], esi */
    RECOMP_BACKEDGE();
    goto L_15034070; /* 0x15034199: jmp 0x15034070 */
L_1503419E:
    eax = MEM32(ebp + 0x8); /* 0x1503419E: mov eax, dword ptr [ebp + 8] */
    /* test eax, eax */ /* 0x150341A1: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_150341A8; /* 0x150341A3: je 0x150341a8 */
L_150341A5:
    _flag_a = (uint32_t)(MEM32(eax)); _flag_b = (uint32_t)(0);
    MEM32(eax) = MEM32(eax) & 0; /* 0x150341A5: and dword ptr [eax], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
L_150341A8:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x150341A8: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
L_150341AA:
    edi = POP32_VAL(esp); /* 0x150341AA: pop edi */
    ebx = POP32_VAL(esp); /* 0x150341AB: pop ebx */
    esp = ebp; ebp = POP32_VAL(esp); /* 0x150341AC: leave  */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x150341AD: ret  */
    RECOMP_REGS_OUT();
}

void sub_150341B4(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x150341B4u);

L_150341B4:
    edi = edi; /* 0x150341B4: mov edi, edi */
    PUSH32(esp, ebp); /* 0x150341B6: push ebp */
    ebp = esp; /* 0x150341B7: mov ebp, esp */
    eax = MEM32(ebp + 0xC); /* 0x150341B9: mov eax, dword ptr [ebp + 0xc] */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x1Cu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x1Cu; /* 0x150341BC: sub esp, 0x1c */
    _flag_k = FK_CMP;
    PUSH32(esp, esi); /* 0x150341BF: push esi */
    /* test eax, eax */ /* 0x150341C0: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_150341E6; /* 0x150341C2: jne 0x150341e6 */
L_150341C4:
    RECOMP_CALL(sub_15036430); /* 0x150341C4: call 0x15036430 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    esi = 0; /* 0x150341C9: xor esi, esi */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, esi); /* 0x150341CB: push esi */
    PUSH32(esp, esi); /* 0x150341CC: push esi */
    PUSH32(esp, esi); /* 0x150341CD: push esi */
    PUSH32(esp, esi); /* 0x150341CE: push esi */
    PUSH32(esp, esi); /* 0x150341CF: push esi */
    MEM32(eax) = 0x16u; /* 0x150341D0: mov dword ptr [eax], 0x16 */
    RECOMP_CALL(sub_1505A110); /* 0x150341D6: call 0x1505a110 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x14u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x14u; /* 0x150341DB: add esp, 0x14 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)((eax | 0xFFFFFFFFu)); _flag_b = (uint32_t)((eax | 0xFFFFFFFFu));
    eax = eax | 0xFFFFFFFFu; /* 0x150341DE: or eax, 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_150342BB; /* 0x150341E1: jmp 0x150342bb */
L_150341E6:
    PUSH32(esp, ebx); /* 0x150341E6: push ebx */
    ebx = MEM32(eax); /* 0x150341E7: mov ebx, dword ptr [eax] */
    ecx = ebp + (-0x1C); /* 0x150341E9: lea ecx, [ebp - 0x1c] */
    PUSH32(esp, edi); /* 0x150341EC: push edi */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    esi = 0; /* 0x150341ED: xor esi, esi */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, esi); /* 0x150341EF: push esi */
    MEM32(ebp + (-0x8)) = esi; /* 0x150341F0: mov dword ptr [ebp - 8], esi */
    edi = esi; /* 0x150341F3: mov edi, esi */
    RECOMP_CALL(sub_1502F870); /* 0x150341F5: call 0x1502f870 */
    RECOMP_FLAGS_IN();
    /* cmp MEM32(ebp + 0x14), esi */ /* 0x150341FA: cmp dword ptr [ebp + 0x14], esi */
    _flag_a = (uint32_t)(MEM32(ebp + 0x14)); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    eax = 0x150BDAF0u; /* 0x150341FD: mov eax, 0x150bdaf0 */
    ecx = MEM32(ebp + 0x8); /* 0x15034202: mov ecx, dword ptr [ebp + 8] */
    if (CMP_NE(_flag_a, _flag_b)) { eax = MEM32(ebp + 0x14); } /* 0x15034205: cmovne eax, dword ptr [ebp + 0x14] */
    MEM32(ebp + (-0xC)) = eax; /* 0x15034209: mov dword ptr [ebp - 0xc], eax */
    /* test ecx, ecx */ /* 0x1503420C: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_15034261; /* 0x1503420E: jne 0x15034261 */
L_15034210:
    ecx = ebp + (-0x1C); /* 0x15034210: lea ecx, [ebp - 0x1c] */
    PUSH32(esp, ecx); /* 0x15034213: push ecx */
    PUSH32(esp, eax); /* 0x15034214: push eax */
    PUSH32(esp, 0x7FFFFFFFu); /* 0x15034215: push 0x7fffffff */
    PUSH32(esp, ebx); /* 0x1503421A: push ebx */
    eax = ebp + (-0x4); /* 0x1503421B: lea eax, [ebp - 4] */
    PUSH32(esp, eax); /* 0x1503421E: push eax */
    eax = ebp + (-0x8); /* 0x1503421F: lea eax, [ebp - 8] */
    PUSH32(esp, eax); /* 0x15034222: push eax */
    RECOMP_CALL(sub_1503400F); /* 0x15034223: call 0x1503400f */
    RECOMP_FLAGS_IN();
    eax = MEM32(ebp + (-0x8)); /* 0x15034228: mov eax, dword ptr [ebp - 8] */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x18u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x18u; /* 0x1503422B: add esp, 0x18 */
    _flag_k = FK_ADD;
    /* test eax, eax */ /* 0x1503422E: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_1503425C; /* 0x15034230: js 0x1503425c */
L_15034232:
    esi = MEM32(ebp + (-0xC)); /* 0x15034232: mov esi, dword ptr [ebp - 0xc] */
L_15034235:
    if (recomp_cond_cf(_flag_k, _flag_a, _flag_b, CC_E, _cf)) goto L_150342AA; /* 0x15034235: je 0x150342aa */
L_15034237:
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ebx = ebx + eax; /* 0x15034237: add ebx, eax */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(1);
    edi = edi + 1; /* 0x15034239: inc edi */
    _flag_k = FK_INC;
    eax = ebp + (-0x1C); /* 0x1503423A: lea eax, [ebp - 0x1c] */
    PUSH32(esp, eax); /* 0x1503423D: push eax */
    PUSH32(esp, esi); /* 0x1503423E: push esi */
    PUSH32(esp, 0x7FFFFFFFu); /* 0x1503423F: push 0x7fffffff */
    PUSH32(esp, ebx); /* 0x15034244: push ebx */
    eax = ebp + (-0x4); /* 0x15034245: lea eax, [ebp - 4] */
    PUSH32(esp, eax); /* 0x15034248: push eax */
    eax = ebp + (-0x8); /* 0x15034249: lea eax, [ebp - 8] */
    PUSH32(esp, eax); /* 0x1503424C: push eax */
    RECOMP_CALL(sub_1503400F); /* 0x1503424D: call 0x1503400f */
    RECOMP_FLAGS_IN();
    eax = MEM32(ebp + (-0x8)); /* 0x15034252: mov eax, dword ptr [ebp - 8] */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x18u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x18u; /* 0x15034255: add esp, 0x18 */
    _flag_k = FK_ADD;
    /* test eax, eax */ /* 0x15034258: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) == 0u)) goto L_15034235; /* 0x1503425A: jns 0x15034235 */
L_1503425C:
    _flag_a = (uint32_t)((edi | 0xFFFFFFFFu)); _flag_b = (uint32_t)((edi | 0xFFFFFFFFu));
    edi = edi | 0xFFFFFFFFu; /* 0x1503425C: or edi, 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_150342AA; /* 0x1503425F: jmp 0x150342aa */
L_15034261:
    /* cmp MEM32(ebp + 0x10), esi */ /* 0x15034261: cmp dword ptr [ebp + 0x10], esi */
    _flag_a = (uint32_t)(MEM32(ebp + 0x10)); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_150342A5; /* 0x15034264: jbe 0x150342a5 */
L_15034266:
    edx = ebp + (-0x1C); /* 0x15034266: lea edx, [ebp - 0x1c] */
    PUSH32(esp, edx); /* 0x15034269: push edx */
    PUSH32(esp, eax); /* 0x1503426A: push eax */
    PUSH32(esp, 0x7FFFFFFFu); /* 0x1503426B: push 0x7fffffff */
    PUSH32(esp, ebx); /* 0x15034270: push ebx */
    PUSH32(esp, ecx); /* 0x15034271: push ecx */
    eax = ebp + (-0x8); /* 0x15034272: lea eax, [ebp - 8] */
    PUSH32(esp, eax); /* 0x15034275: push eax */
    RECOMP_CALL(sub_1503400F); /* 0x15034276: call 0x1503400f */
    RECOMP_FLAGS_IN();
    eax = MEM32(ebp + (-0x8)); /* 0x1503427B: mov eax, dword ptr [ebp - 8] */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x18u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x18u; /* 0x1503427E: add esp, 0x18 */
    _flag_k = FK_ADD;
    /* test eax, eax */ /* 0x15034281: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_150342A2; /* 0x15034283: js 0x150342a2 */
L_15034285:
    if (TEST_Z(_flag_a, _flag_b)) goto L_1503429E; /* 0x15034285: je 0x1503429e */
L_15034287:
    ecx = MEM32(ebp + 0x8); /* 0x15034287: mov ecx, dword ptr [ebp + 8] */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ebx = ebx + eax; /* 0x1503428A: add ebx, eax */
    _flag_k = FK_ADD;
    eax = MEM32(ebp + (-0xC)); /* 0x1503428C: mov eax, dword ptr [ebp - 0xc] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 2; /* 0x1503428F: add ecx, 2 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(1);
    edi = edi + 1; /* 0x15034292: inc edi */
    _flag_k = FK_INC;
    MEM32(ebp + 0x8) = ecx; /* 0x15034293: mov dword ptr [ebp + 8], ecx */
    _flag_a = (uint32_t)(MEM32(ebp + 0x10)); _flag_b = (uint32_t)(1);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    MEM32(ebp + 0x10) = MEM32(ebp + 0x10) - 1; /* 0x15034296: sub dword ptr [ebp + 0x10], 1 */
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (/* sub result */ CMP_NE(_flag_a, _flag_b)) goto L_15034266; /* 0x1503429A: jne 0x15034266 */
L_1503429C:
    goto L_150342A5; /* 0x1503429C: jmp 0x150342a5 */
L_1503429E:
    ebx = esi; /* 0x1503429E: mov ebx, esi */
    goto L_150342A5; /* 0x150342A0: jmp 0x150342a5 */
L_150342A2:
    _flag_a = (uint32_t)((edi | 0xFFFFFFFFu)); _flag_b = (uint32_t)((edi | 0xFFFFFFFFu));
    edi = edi | 0xFFFFFFFFu; /* 0x150342A2: or edi, 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
L_150342A5:
    eax = MEM32(ebp + 0xC); /* 0x150342A5: mov eax, dword ptr [ebp + 0xc] */
    MEM32(eax) = ebx; /* 0x150342A8: mov dword ptr [eax], ebx */
L_150342AA:
    /* cmp MEM8(ebp + (-0x10)), 0 */ /* 0x150342AA: cmp byte ptr [ebp - 0x10], 0 */
    _flag_a = (uint32_t)(MEM8(ebp + (-0x10))) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_150342B7; /* 0x150342AE: je 0x150342b7 */
L_150342B0:
    ecx = MEM32(ebp + (-0x14)); /* 0x150342B0: mov ecx, dword ptr [ebp - 0x14] */
    _flag_a = (uint32_t)(MEM32(ecx + 0x70)); _flag_b = (uint32_t)(0xFFFFFFFDu);
    MEM32(ecx + 0x70) = MEM32(ecx + 0x70) & 0xFFFFFFFDu; /* 0x150342B3: and dword ptr [ecx + 0x70], 0xfffffffd */
    _cf = 0;
    _flag_k = FK_TEST;
L_150342B7:
    eax = edi; /* 0x150342B7: mov eax, edi */
    edi = POP32_VAL(esp); /* 0x150342B9: pop edi */
    ebx = POP32_VAL(esp); /* 0x150342BA: pop ebx */
L_150342BB:
    esi = POP32_VAL(esp); /* 0x150342BB: pop esi */
    esp = ebp; ebp = POP32_VAL(esp); /* 0x150342BC: leave  */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x150342BD: ret  */
    RECOMP_REGS_OUT();
}

void sub_150342D0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x150342D0u);

L_150342D0:
    edi = edi; /* 0x150342D0: mov edi, edi */
    PUSH32(esp, ebp); /* 0x150342D2: push ebp */
    ebp = esp; /* 0x150342D3: mov ebp, esp */
    eax = MEM32(ebp + 0x8); /* 0x150342D5: mov eax, dword ptr [ebp + 8] */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x10u; /* 0x150342D8: sub esp, 0x10 */
    _flag_k = FK_CMP;
    /* cmp eax, 0xFFFFFFFFu */ /* 0x150342DB: cmp eax, -1 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xFFFFFFFFu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_150342E7; /* 0x150342DE: jne 0x150342e7 */
L_150342E0:
    eax = 0xFFFFu; /* 0x150342E0: mov eax, 0xffff */
    esp = ebp; ebp = POP32_VAL(esp); /* 0x150342E5: leave  */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x150342E6: ret  */
L_150342E7:
    _flag_a = (uint32_t)(MEM32(ebp + (-0x10))); _flag_b = (uint32_t)(0);
    MEM32(ebp + (-0x10)) = MEM32(ebp + (-0x10)) & 0; /* 0x150342E7: and dword ptr [ebp - 0x10], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)((MEM32(ebp + (-0xC)) | 0xFFFFFFFFu)); _flag_b = (uint32_t)((MEM32(ebp + (-0xC)) | 0xFFFFFFFFu));
    MEM32(ebp + (-0xC)) = MEM32(ebp + (-0xC)) | 0xFFFFFFFFu; /* 0x150342EB: or dword ptr [ebp - 0xc], 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM8(ebp + (-0x1)) = (uint8_t)(LO8(eax)); /* 0x150342EF: mov byte ptr [ebp - 1], al */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x150342F2: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, eax); /* 0x150342F4: push eax */
    MEM16(ebp + (-0x8)) = (uint16_t)(LO16(eax)); /* 0x150342F5: mov word ptr [ebp - 8], ax */
    eax = ebp + (-0x10); /* 0x150342F9: lea eax, [ebp - 0x10] */
    PUSH32(esp, eax); /* 0x150342FC: push eax */
    PUSH32(esp, 1); /* 0x150342FD: push 1 */
    eax = ebp + (-0x1); /* 0x150342FF: lea eax, [ebp - 1] */
    PUSH32(esp, eax); /* 0x15034302: push eax */
    eax = ebp + (-0x8); /* 0x15034303: lea eax, [ebp - 8] */
    PUSH32(esp, eax); /* 0x15034306: push eax */
    eax = ebp + (-0xC); /* 0x15034307: lea eax, [ebp - 0xc] */
    PUSH32(esp, eax); /* 0x1503430A: push eax */
    RECOMP_CALL(sub_1503400F); /* 0x1503430B: call 0x1503400f */
    RECOMP_FLAGS_IN();
    eax = (uint32_t)MEM16(ebp + (-0x8)); /* 0x15034310: movzx eax, word ptr [ebp - 8] */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x18u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x18u; /* 0x15034314: add esp, 0x18 */
    _flag_k = FK_ADD;
    /* cmp MEM32(ebp + (-0xC)), 0 */ /* 0x15034317: cmp dword ptr [ebp - 0xc], 0 */
    _flag_a = (uint32_t)(MEM32(ebp + (-0xC))); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    ecx = 0xFFFFu; /* 0x1503431B: mov ecx, 0xffff */
    if (CMP_L(_flag_a, _flag_b)) { eax = ecx; } /* 0x15034320: cmovl eax, ecx */
    esp = ebp; ebp = POP32_VAL(esp); /* 0x15034323: leave  */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x15034324: ret  */
    RECOMP_REGS_OUT();
}

void sub_15034330(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x15034330u);

L_15034330:
    edi = edi; /* 0x15034330: mov edi, edi */
    PUSH32(esp, ebp); /* 0x15034332: push ebp */
    ebp = esp; /* 0x15034333: mov ebp, esp */
    PUSH32(esp, ecx); /* 0x15034335: push ecx */
    _flag_a = (uint32_t)((MEM32(ebp + (-0x4)) | 0xFFFFFFFFu)); _flag_b = (uint32_t)((MEM32(ebp + (-0x4)) | 0xFFFFFFFFu));
    MEM32(ebp + (-0x4)) = MEM32(ebp + (-0x4)) | 0xFFFFFFFFu; /* 0x15034336: or dword ptr [ebp - 4], 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    eax = 0x150BDAE8u; /* 0x1503433A: mov eax, 0x150bdae8 */
    /* cmp MEM32(ebp + 0x10), 0 */ /* 0x1503433F: cmp dword ptr [ebp + 0x10], 0 */
    _flag_a = (uint32_t)(MEM32(ebp + 0x10)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    PUSH32(esp, 0); /* 0x15034343: push 0 */
    if (CMP_NE(_flag_a, _flag_b)) { eax = MEM32(ebp + 0x10); } /* 0x15034345: cmovne eax, dword ptr [ebp + 0x10] */
    PUSH32(esp, eax); /* 0x15034349: push eax */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x1503434A: push dword ptr [ebp + 0xc] */
    eax = ebp + (-0x4); /* 0x1503434D: lea eax, [ebp - 4] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x15034350: push dword ptr [ebp + 8] */
    PUSH32(esp, 0); /* 0x15034353: push 0 */
    PUSH32(esp, eax); /* 0x15034355: push eax */
    RECOMP_CALL(sub_1503400F); /* 0x15034356: call 0x1503400f */
    RECOMP_FLAGS_IN();
    eax = MEM32(ebp + (-0x4)); /* 0x1503435B: mov eax, dword ptr [ebp - 4] */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x18u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x18u; /* 0x1503435E: add esp, 0x18 */
    _flag_k = FK_ADD;
    esp = ebp; ebp = POP32_VAL(esp); /* 0x15034361: leave  */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x15034362: ret  */
    RECOMP_REGS_OUT();
}

void sub_15034370(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x15034370u);

L_15034370:
    edi = edi; /* 0x15034370: mov edi, edi */
    PUSH32(esp, ebp); /* 0x15034372: push ebp */
    ebp = esp; /* 0x15034373: mov ebp, esp */
    PUSH32(esp, ecx); /* 0x15034375: push ecx */
    _flag_a = (uint32_t)((MEM32(ebp + (-0x4)) | 0xFFFFFFFFu)); _flag_b = (uint32_t)((MEM32(ebp + (-0x4)) | 0xFFFFFFFFu));
    MEM32(ebp + (-0x4)) = MEM32(ebp + (-0x4)) | 0xFFFFFFFFu; /* 0x15034376: or dword ptr [ebp - 4], 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    eax = 0x150BDAECu; /* 0x1503437A: mov eax, 0x150bdaec */
    /* cmp MEM32(ebp + 0x14), 0 */ /* 0x1503437F: cmp dword ptr [ebp + 0x14], 0 */
    _flag_a = (uint32_t)(MEM32(ebp + 0x14)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    ecx = MEM32(ebp + 0xC); /* 0x15034383: mov ecx, dword ptr [ebp + 0xc] */
    if (CMP_NE(_flag_a, _flag_b)) { eax = MEM32(ebp + 0x14); } /* 0x15034386: cmovne eax, dword ptr [ebp + 0x14] */
    edx = MEM32(ebp + 0x10); /* 0x1503438A: mov edx, dword ptr [ebp + 0x10] */
    PUSH32(esp, esi); /* 0x1503438D: push esi */
    esi = MEM32(ebp + 0x8); /* 0x1503438E: mov esi, dword ptr [ebp + 8] */
    PUSH32(esp, 0); /* 0x15034391: push 0 */
    PUSH32(esp, eax); /* 0x15034393: push eax */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x15034394: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x15034396: inc eax */
    _flag_k = FK_INC;
    /* test ecx, ecx */ /* 0x15034397: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) { edx = eax; } /* 0x15034399: cmove edx, eax */
    eax = 0x15003C90u; /* 0x1503439C: mov eax, 0x15003c90 */
    if (TEST_NZ(_flag_a, _flag_b)) { eax = ecx; } /* 0x150343A1: cmovne eax, ecx */
    PUSH32(esp, edx); /* 0x150343A4: push edx */
    PUSH32(esp, eax); /* 0x150343A5: push eax */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x150343A6: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    /* test ecx, ecx */ /* 0x150343A8: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) { esi = eax; } /* 0x150343AA: cmove esi, eax */
    eax = ebp + (-0x4); /* 0x150343AD: lea eax, [ebp - 4] */
    PUSH32(esp, esi); /* 0x150343B0: push esi */
    PUSH32(esp, eax); /* 0x150343B1: push eax */
    RECOMP_CALL(sub_1503400F); /* 0x150343B2: call 0x1503400f */
    RECOMP_FLAGS_IN();
    eax = MEM32(ebp + (-0x4)); /* 0x150343B7: mov eax, dword ptr [ebp - 4] */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x18u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x18u; /* 0x150343BA: add esp, 0x18 */
    _flag_k = FK_ADD;
    esi = POP32_VAL(esp); /* 0x150343BD: pop esi */
    esp = ebp; ebp = POP32_VAL(esp); /* 0x150343BE: leave  */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x150343BF: ret  */
    RECOMP_REGS_OUT();
}

void sub_150343D0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x150343D0u);

    goto L_150343D0;
L_150341B4:
    edi = edi; /* 0x150341B4: mov edi, edi */
    PUSH32(esp, ebp); /* 0x150341B6: push ebp */
    ebp = esp; /* 0x150341B7: mov ebp, esp */
    eax = MEM32(ebp + 0xC); /* 0x150341B9: mov eax, dword ptr [ebp + 0xc] */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x1Cu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x1Cu; /* 0x150341BC: sub esp, 0x1c */
    _flag_k = FK_CMP;
    PUSH32(esp, esi); /* 0x150341BF: push esi */
    /* test eax, eax */ /* 0x150341C0: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_150341E6; /* 0x150341C2: jne 0x150341e6 */
L_150341C4:
    RECOMP_CALL(sub_15036430); /* 0x150341C4: call 0x15036430 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    esi = 0; /* 0x150341C9: xor esi, esi */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, esi); /* 0x150341CB: push esi */
    PUSH32(esp, esi); /* 0x150341CC: push esi */
    PUSH32(esp, esi); /* 0x150341CD: push esi */
    PUSH32(esp, esi); /* 0x150341CE: push esi */
    PUSH32(esp, esi); /* 0x150341CF: push esi */
    MEM32(eax) = 0x16u; /* 0x150341D0: mov dword ptr [eax], 0x16 */
    RECOMP_CALL(sub_1505A110); /* 0x150341D6: call 0x1505a110 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x14u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x14u; /* 0x150341DB: add esp, 0x14 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)((eax | 0xFFFFFFFFu)); _flag_b = (uint32_t)((eax | 0xFFFFFFFFu));
    eax = eax | 0xFFFFFFFFu; /* 0x150341DE: or eax, 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_150342BB; /* 0x150341E1: jmp 0x150342bb */
L_150341E6:
    PUSH32(esp, ebx); /* 0x150341E6: push ebx */
    ebx = MEM32(eax); /* 0x150341E7: mov ebx, dword ptr [eax] */
    ecx = ebp + (-0x1C); /* 0x150341E9: lea ecx, [ebp - 0x1c] */
    PUSH32(esp, edi); /* 0x150341EC: push edi */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    esi = 0; /* 0x150341ED: xor esi, esi */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, esi); /* 0x150341EF: push esi */
    MEM32(ebp + (-0x8)) = esi; /* 0x150341F0: mov dword ptr [ebp - 8], esi */
    edi = esi; /* 0x150341F3: mov edi, esi */
    RECOMP_CALL(sub_1502F870); /* 0x150341F5: call 0x1502f870 */
    RECOMP_FLAGS_IN();
    /* cmp MEM32(ebp + 0x14), esi */ /* 0x150341FA: cmp dword ptr [ebp + 0x14], esi */
    _flag_a = (uint32_t)(MEM32(ebp + 0x14)); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    eax = 0x150BDAF0u; /* 0x150341FD: mov eax, 0x150bdaf0 */
    ecx = MEM32(ebp + 0x8); /* 0x15034202: mov ecx, dword ptr [ebp + 8] */
    if (CMP_NE(_flag_a, _flag_b)) { eax = MEM32(ebp + 0x14); } /* 0x15034205: cmovne eax, dword ptr [ebp + 0x14] */
    MEM32(ebp + (-0xC)) = eax; /* 0x15034209: mov dword ptr [ebp - 0xc], eax */
    /* test ecx, ecx */ /* 0x1503420C: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_15034261; /* 0x1503420E: jne 0x15034261 */
L_15034210:
    ecx = ebp + (-0x1C); /* 0x15034210: lea ecx, [ebp - 0x1c] */
    PUSH32(esp, ecx); /* 0x15034213: push ecx */
    PUSH32(esp, eax); /* 0x15034214: push eax */
    PUSH32(esp, 0x7FFFFFFFu); /* 0x15034215: push 0x7fffffff */
    PUSH32(esp, ebx); /* 0x1503421A: push ebx */
    eax = ebp + (-0x4); /* 0x1503421B: lea eax, [ebp - 4] */
    PUSH32(esp, eax); /* 0x1503421E: push eax */
    eax = ebp + (-0x8); /* 0x1503421F: lea eax, [ebp - 8] */
    PUSH32(esp, eax); /* 0x15034222: push eax */
    RECOMP_CALL(sub_1503400F); /* 0x15034223: call 0x1503400f */
    RECOMP_FLAGS_IN();
    eax = MEM32(ebp + (-0x8)); /* 0x15034228: mov eax, dword ptr [ebp - 8] */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x18u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x18u; /* 0x1503422B: add esp, 0x18 */
    _flag_k = FK_ADD;
    /* test eax, eax */ /* 0x1503422E: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_1503425C; /* 0x15034230: js 0x1503425c */
L_15034232:
    esi = MEM32(ebp + (-0xC)); /* 0x15034232: mov esi, dword ptr [ebp - 0xc] */
L_15034235:
    if (recomp_cond_cf(_flag_k, _flag_a, _flag_b, CC_E, _cf)) goto L_150342AA; /* 0x15034235: je 0x150342aa */
L_15034237:
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ebx = ebx + eax; /* 0x15034237: add ebx, eax */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(1);
    edi = edi + 1; /* 0x15034239: inc edi */
    _flag_k = FK_INC;
    eax = ebp + (-0x1C); /* 0x1503423A: lea eax, [ebp - 0x1c] */
    PUSH32(esp, eax); /* 0x1503423D: push eax */
    PUSH32(esp, esi); /* 0x1503423E: push esi */
    PUSH32(esp, 0x7FFFFFFFu); /* 0x1503423F: push 0x7fffffff */
    PUSH32(esp, ebx); /* 0x15034244: push ebx */
    eax = ebp + (-0x4); /* 0x15034245: lea eax, [ebp - 4] */
    PUSH32(esp, eax); /* 0x15034248: push eax */
    eax = ebp + (-0x8); /* 0x15034249: lea eax, [ebp - 8] */
    PUSH32(esp, eax); /* 0x1503424C: push eax */
    RECOMP_CALL(sub_1503400F); /* 0x1503424D: call 0x1503400f */
    RECOMP_FLAGS_IN();
    eax = MEM32(ebp + (-0x8)); /* 0x15034252: mov eax, dword ptr [ebp - 8] */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x18u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x18u; /* 0x15034255: add esp, 0x18 */
    _flag_k = FK_ADD;
    /* test eax, eax */ /* 0x15034258: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) == 0u)) goto L_15034235; /* 0x1503425A: jns 0x15034235 */
L_1503425C:
    _flag_a = (uint32_t)((edi | 0xFFFFFFFFu)); _flag_b = (uint32_t)((edi | 0xFFFFFFFFu));
    edi = edi | 0xFFFFFFFFu; /* 0x1503425C: or edi, 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_150342AA; /* 0x1503425F: jmp 0x150342aa */
L_15034261:
    /* cmp MEM32(ebp + 0x10), esi */ /* 0x15034261: cmp dword ptr [ebp + 0x10], esi */
    _flag_a = (uint32_t)(MEM32(ebp + 0x10)); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_150342A5; /* 0x15034264: jbe 0x150342a5 */
L_15034266:
    edx = ebp + (-0x1C); /* 0x15034266: lea edx, [ebp - 0x1c] */
    PUSH32(esp, edx); /* 0x15034269: push edx */
    PUSH32(esp, eax); /* 0x1503426A: push eax */
    PUSH32(esp, 0x7FFFFFFFu); /* 0x1503426B: push 0x7fffffff */
    PUSH32(esp, ebx); /* 0x15034270: push ebx */
    PUSH32(esp, ecx); /* 0x15034271: push ecx */
    eax = ebp + (-0x8); /* 0x15034272: lea eax, [ebp - 8] */
    PUSH32(esp, eax); /* 0x15034275: push eax */
    RECOMP_CALL(sub_1503400F); /* 0x15034276: call 0x1503400f */
    RECOMP_FLAGS_IN();
    eax = MEM32(ebp + (-0x8)); /* 0x1503427B: mov eax, dword ptr [ebp - 8] */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x18u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x18u; /* 0x1503427E: add esp, 0x18 */
    _flag_k = FK_ADD;
    /* test eax, eax */ /* 0x15034281: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_150342A2; /* 0x15034283: js 0x150342a2 */
L_15034285:
    if (TEST_Z(_flag_a, _flag_b)) goto L_1503429E; /* 0x15034285: je 0x1503429e */
L_15034287:
    ecx = MEM32(ebp + 0x8); /* 0x15034287: mov ecx, dword ptr [ebp + 8] */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ebx = ebx + eax; /* 0x1503428A: add ebx, eax */
    _flag_k = FK_ADD;
    eax = MEM32(ebp + (-0xC)); /* 0x1503428C: mov eax, dword ptr [ebp - 0xc] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 2; /* 0x1503428F: add ecx, 2 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(1);
    edi = edi + 1; /* 0x15034292: inc edi */
    _flag_k = FK_INC;
    MEM32(ebp + 0x8) = ecx; /* 0x15034293: mov dword ptr [ebp + 8], ecx */
    _flag_a = (uint32_t)(MEM32(ebp + 0x10)); _flag_b = (uint32_t)(1);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    MEM32(ebp + 0x10) = MEM32(ebp + 0x10) - 1; /* 0x15034296: sub dword ptr [ebp + 0x10], 1 */
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (/* sub result */ CMP_NE(_flag_a, _flag_b)) goto L_15034266; /* 0x1503429A: jne 0x15034266 */
L_1503429C:
    goto L_150342A5; /* 0x1503429C: jmp 0x150342a5 */
L_1503429E:
    ebx = esi; /* 0x1503429E: mov ebx, esi */
    goto L_150342A5; /* 0x150342A0: jmp 0x150342a5 */
L_150342A2:
    _flag_a = (uint32_t)((edi | 0xFFFFFFFFu)); _flag_b = (uint32_t)((edi | 0xFFFFFFFFu));
    edi = edi | 0xFFFFFFFFu; /* 0x150342A2: or edi, 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
L_150342A5:
    eax = MEM32(ebp + 0xC); /* 0x150342A5: mov eax, dword ptr [ebp + 0xc] */
    MEM32(eax) = ebx; /* 0x150342A8: mov dword ptr [eax], ebx */
L_150342AA:
    /* cmp MEM8(ebp + (-0x10)), 0 */ /* 0x150342AA: cmp byte ptr [ebp - 0x10], 0 */
    _flag_a = (uint32_t)(MEM8(ebp + (-0x10))) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_150342B7; /* 0x150342AE: je 0x150342b7 */
L_150342B0:
    ecx = MEM32(ebp + (-0x14)); /* 0x150342B0: mov ecx, dword ptr [ebp - 0x14] */
    _flag_a = (uint32_t)(MEM32(ecx + 0x70)); _flag_b = (uint32_t)(0xFFFFFFFDu);
    MEM32(ecx + 0x70) = MEM32(ecx + 0x70) & 0xFFFFFFFDu; /* 0x150342B3: and dword ptr [ecx + 0x70], 0xfffffffd */
    _cf = 0;
    _flag_k = FK_TEST;
L_150342B7:
    eax = edi; /* 0x150342B7: mov eax, edi */
    edi = POP32_VAL(esp); /* 0x150342B9: pop edi */
    ebx = POP32_VAL(esp); /* 0x150342BA: pop ebx */
L_150342BB:
    esi = POP32_VAL(esp); /* 0x150342BB: pop esi */
    esp = ebp; ebp = POP32_VAL(esp); /* 0x150342BC: leave  */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x150342BD: ret  */
L_150343D0:
    edi = edi; /* 0x150343D0: mov edi, edi */
    PUSH32(esp, ebp); /* 0x150343D2: push ebp */
    ebp = esp; /* 0x150343D3: mov ebp, esp */
    ebp = POP32_VAL(esp); /* 0x150343D5: pop ebp */
    RECOMP_BACKEDGE();
    goto L_150341B4; /* 0x150343D6: jmp 0x150341b4 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    RECOMP_REGS_OUT();
}

void sub_150343F0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x150343F0u);

L_150343F0:
    edi = edi; /* 0x150343F0: mov edi, edi */
    PUSH32(esp, ebp); /* 0x150343F2: push ebp */
    ebp = esp; /* 0x150343F3: mov ebp, esp */
    PUSH32(esp, ebx); /* 0x150343F5: push ebx */
    ebx = MEM32(ebp + 0x8); /* 0x150343F6: mov ebx, dword ptr [ebp + 8] */
    PUSH32(esp, esi); /* 0x150343F9: push esi */
    PUSH32(esp, edi); /* 0x150343FA: push edi */
    /* test ebx, ebx */ /* 0x150343FB: test ebx, ebx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ebx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_15034402; /* 0x150343FD: je 0x15034402 */
L_150343FF:
    _flag_a = (uint32_t)((MEM32(ebx) | 0xFFFFFFFFu)); _flag_b = (uint32_t)((MEM32(ebx) | 0xFFFFFFFFu));
    MEM32(ebx) = MEM32(ebx) | 0xFFFFFFFFu; /* 0x150343FF: or dword ptr [ebx], 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
L_15034402:
    esi = MEM32(ebp + 0xC); /* 0x15034402: mov esi, dword ptr [ebp + 0xc] */
    edi = MEM32(ebp + 0x10); /* 0x15034405: mov edi, dword ptr [ebp + 0x10] */
    /* test esi, esi */ /* 0x15034408: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_15034430; /* 0x1503440A: jne 0x15034430 */
L_1503440C:
    /* test edi, edi */ /* 0x1503440C: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_15034439; /* 0x1503440E: je 0x15034439 */
L_15034410:
    RECOMP_CALL(sub_15036430); /* 0x15034410: call 0x15036430 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0x16u); /* 0x15034415: push 0x16 */
    esi = POP32_VAL(esp); /* 0x15034417: pop esi */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x15034418: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, ecx); /* 0x1503441A: push ecx */
    PUSH32(esp, ecx); /* 0x1503441B: push ecx */
    PUSH32(esp, ecx); /* 0x1503441C: push ecx */
    PUSH32(esp, ecx); /* 0x1503441D: push ecx */
    PUSH32(esp, ecx); /* 0x1503441E: push ecx */
    MEM32(eax) = esi; /* 0x1503441F: mov dword ptr [eax], esi */
    RECOMP_CALL(sub_1505A110); /* 0x15034421: call 0x1505a110 */
    RECOMP_FLAGS_IN();
    eax = esi; /* 0x15034426: mov eax, esi */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x14u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x14u; /* 0x15034428: add esp, 0x14 */
    _flag_k = FK_ADD;
L_1503442B:
    edi = POP32_VAL(esp); /* 0x1503442B: pop edi */
    esi = POP32_VAL(esp); /* 0x1503442C: pop esi */
    ebx = POP32_VAL(esp); /* 0x1503442D: pop ebx */
    ebp = POP32_VAL(esp); /* 0x1503442E: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1503442F: ret  */
L_15034430:
    /* test edi, edi */ /* 0x15034430: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_Z(_flag_a, _flag_b)) goto L_15034410; /* 0x15034432: je 0x15034410 */
L_15034434:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x15034434: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM16(esi) = (uint16_t)(LO16(eax)); /* 0x15034436: mov word ptr [esi], ax */
L_15034439:
    /* cmp MEM32(ebp + 0x14), 0 */ /* 0x15034439: cmp dword ptr [ebp + 0x14], 0 */
    _flag_a = (uint32_t)(MEM32(ebp + 0x14)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_EQ(_flag_a, _flag_b)) goto L_15034410; /* 0x1503443D: je 0x15034410 */
L_1503443F:
    eax = MEM32(ebp + 0x18); /* 0x1503443F: mov eax, dword ptr [ebp + 0x18] */
    /* cmp eax, edi */ /* 0x15034442: cmp eax, edi */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    PUSH32(esp, MEM32(ebp + 0x1C)); /* 0x15034444: push dword ptr [ebp + 0x1c] */
    if (CMP_A(_flag_a, _flag_b)) { eax = edi; } /* 0x15034447: cmova eax, edi */
    PUSH32(esp, eax); /* 0x1503444A: push eax */
    PUSH32(esp, MEM32(ebp + 0x14)); /* 0x1503444B: push dword ptr [ebp + 0x14] */
    PUSH32(esp, esi); /* 0x1503444E: push esi */
    RECOMP_CALL(sub_150341B4); /* 0x1503444F: call 0x150341b4 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x10u; /* 0x15034454: add esp, 0x10 */
    _flag_k = FK_ADD;
    /* cmp eax, 0xFFFFFFFFu */ /* 0x15034457: cmp eax, -1 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xFFFFFFFFu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_1503446E; /* 0x1503445A: jne 0x1503446e */
L_1503445C:
    /* test esi, esi */ /* 0x1503445C: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_15034465; /* 0x1503445E: je 0x15034465 */
L_15034460:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x15034460: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM16(esi) = (uint16_t)(LO16(eax)); /* 0x15034462: mov word ptr [esi], ax */
L_15034465:
    RECOMP_CALL(sub_15036430); /* 0x15034465: call 0x15036430 */
    RECOMP_FLAGS_IN();
    eax = MEM32(eax); /* 0x1503446A: mov eax, dword ptr [eax] */
    RECOMP_BACKEDGE();
    goto L_1503442B; /* 0x1503446C: jmp 0x1503442b */
L_1503446E:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x1503446E: inc eax */
    _flag_k = FK_INC;
    /* test esi, esi */ /* 0x1503446F: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_15034483; /* 0x15034471: je 0x15034483 */
L_15034473:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x15034473: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp eax, edi */ /* 0x15034475: cmp eax, edi */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_1503447E; /* 0x15034477: jbe 0x1503447e */
L_15034479:
    MEM16(esi) = (uint16_t)(LO16(ecx)); /* 0x15034479: mov word ptr [esi], cx */
    goto L_15034483; /* 0x1503447C: jmp 0x15034483 */
L_1503447E:
    MEM16(esi + eax * 2 + (-0x2)) = (uint16_t)(LO16(ecx)); /* 0x1503447E: mov word ptr [esi + eax*2 - 2], cx */
L_15034483:
    /* test ebx, ebx */ /* 0x15034483: test ebx, ebx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ebx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_15034489; /* 0x15034485: je 0x15034489 */
L_15034487:
    MEM32(ebx) = eax; /* 0x15034487: mov dword ptr [ebx], eax */
L_15034489:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x15034489: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    goto L_1503442B; /* 0x1503448B: jmp 0x1503442b */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    RECOMP_REGS_OUT();
}

void sub_15034493(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x15034493u);

L_15034493:
    edi = edi; /* 0x15034493: mov edi, edi */
    PUSH32(esp, ebp); /* 0x15034495: push ebp */
    ebp = esp; /* 0x15034496: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x14u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x14u; /* 0x15034498: sub esp, 0x14 */
    _flag_k = FK_CMP;
    ecx = ebp + (-0x14); /* 0x1503449B: lea ecx, [ebp - 0x14] */
    PUSH32(esp, esi); /* 0x1503449E: push esi */
    PUSH32(esp, MEM32(ebp + 0x1C)); /* 0x1503449F: push dword ptr [ebp + 0x1c] */
    RECOMP_CALL(sub_1502F870); /* 0x150344A2: call 0x1502f870 */
    RECOMP_FLAGS_IN();
    eax = MEM32(ebp + 0x18); /* 0x150344A7: mov eax, dword ptr [ebp + 0x18] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    esi = 0; /* 0x150344AA: xor esi, esi */
    _cf = 0;
    _flag_k = FK_TEST;
    /* test eax, eax */ /* 0x150344AC: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_150344B2; /* 0x150344AE: je 0x150344b2 */
L_150344B0:
    MEM32(eax) = esi; /* 0x150344B0: mov dword ptr [eax], esi */
L_150344B2:
    eax = MEM32(ebp + (-0x14)); /* 0x150344B2: mov eax, dword ptr [ebp - 0x14] */
    /* cmp MEM32(eax + 0x14), esi */ /* 0x150344B5: cmp dword ptr [eax + 0x14], esi */
    _flag_a = (uint32_t)(MEM32(eax + 0x14)); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_150344DC; /* 0x150344B8: jne 0x150344dc */
L_150344BA:
    SET_LO16(ecx, MEM16(ebp + 0x14)); /* 0x150344BA: mov cx, word ptr [ebp + 0x14] */
    eax = 0xFFu; /* 0x150344BE: mov eax, 0xff */
    /* cmp LO16(ecx), LO16(eax) */ /* 0x150344C3: cmp cx, ax */
    _flag_a = (uint32_t)(LO16(ecx)) << 16; _flag_b = (uint32_t)(LO16(eax)) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    if (CMP_A(_flag_a, _flag_b)) goto L_1503450E; /* 0x150344C6: ja 0x1503450e */
L_150344C8:
    eax = MEM32(ebp + 0xC); /* 0x150344C8: mov eax, dword ptr [ebp + 0xc] */
    MEM8(eax) = (uint8_t)(LO8(ecx)); /* 0x150344CB: mov byte ptr [eax], cl */
    eax = MEM32(ebp + 0x8); /* 0x150344CD: mov eax, dword ptr [ebp + 8] */
    /* test eax, eax */ /* 0x150344D0: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_15034522; /* 0x150344D2: je 0x15034522 */
L_150344D4:
    MEM32(eax) = 1; /* 0x150344D4: mov dword ptr [eax], 1 */
    goto L_15034522; /* 0x150344DA: jmp 0x15034522 */
L_150344DC:
    ecx = ebp + (-0x4); /* 0x150344DC: lea ecx, [ebp - 4] */
    MEM32(ebp + (-0x4)) = esi; /* 0x150344DF: mov dword ptr [ebp - 4], esi */
    PUSH32(esp, ecx); /* 0x150344E2: push ecx */
    PUSH32(esp, esi); /* 0x150344E3: push esi */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x150344E4: push dword ptr [ebp + 0x10] */
    ecx = ebp + 0x14; /* 0x150344E7: lea ecx, [ebp + 0x14] */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x150344EA: push dword ptr [ebp + 0xc] */
    PUSH32(esp, 1); /* 0x150344ED: push 1 */
    PUSH32(esp, ecx); /* 0x150344EF: push ecx */
    PUSH32(esp, esi); /* 0x150344F0: push esi */
    PUSH32(esp, MEM32(eax + 0x4)); /* 0x150344F1: push dword ptr [eax + 4] */
    RECOMP_ICALL(MEM32(0x150C0248)); /* 0x150344F4: call dword ptr [0x150c0248] */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x150344FA: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1503450E; /* 0x150344FC: je 0x1503450e */
L_150344FE:
    /* cmp MEM32(ebp + (-0x4)), esi */ /* 0x150344FE: cmp dword ptr [ebp - 4], esi */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x4))); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_1503450E; /* 0x15034501: jne 0x1503450e */
L_15034503:
    ecx = MEM32(ebp + 0x8); /* 0x15034503: mov ecx, dword ptr [ebp + 8] */
    /* test ecx, ecx */ /* 0x15034506: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_15034522; /* 0x15034508: je 0x15034522 */
L_1503450A:
    MEM32(ecx) = eax; /* 0x1503450A: mov dword ptr [ecx], eax */
    goto L_15034522; /* 0x1503450C: jmp 0x15034522 */
L_1503450E:
    eax = MEM32(ebp + 0x8); /* 0x1503450E: mov eax, dword ptr [ebp + 8] */
    /* test eax, eax */ /* 0x15034511: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_15034518; /* 0x15034513: je 0x15034518 */
L_15034515:
    _flag_a = (uint32_t)((MEM32(eax) | 0xFFFFFFFFu)); _flag_b = (uint32_t)((MEM32(eax) | 0xFFFFFFFFu));
    MEM32(eax) = MEM32(eax) | 0xFFFFFFFFu; /* 0x15034515: or dword ptr [eax], 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
L_15034518:
    RECOMP_CALL(sub_15036430); /* 0x15034518: call 0x15036430 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0x2Au); /* 0x1503451D: push 0x2a */
    esi = POP32_VAL(esp); /* 0x1503451F: pop esi */
    MEM32(eax) = esi; /* 0x15034520: mov dword ptr [eax], esi */
L_15034522:
    /* cmp MEM8(ebp + (-0x8)), 0 */ /* 0x15034522: cmp byte ptr [ebp - 8], 0 */
    _flag_a = (uint32_t)(MEM8(ebp + (-0x8))) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1503452F; /* 0x15034526: je 0x1503452f */
L_15034528:
    ecx = MEM32(ebp + (-0xC)); /* 0x15034528: mov ecx, dword ptr [ebp - 0xc] */
    _flag_a = (uint32_t)(MEM32(ecx + 0x70)); _flag_b = (uint32_t)(0xFFFFFFFDu);
    MEM32(ecx + 0x70) = MEM32(ecx + 0x70) & 0xFFFFFFFDu; /* 0x1503452B: and dword ptr [ecx + 0x70], 0xfffffffd */
    _cf = 0;
    _flag_k = FK_TEST;
L_1503452F:
    eax = esi; /* 0x1503452F: mov eax, esi */
    esi = POP32_VAL(esp); /* 0x15034531: pop esi */
    esp = ebp; ebp = POP32_VAL(esp); /* 0x15034532: leave  */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x15034533: ret  */
    RECOMP_REGS_OUT();
}

void sub_1503453A(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1503453Au);

L_1503453A:
    edi = edi; /* 0x1503453A: mov edi, edi */
    PUSH32(esp, ebp); /* 0x1503453C: push ebp */
    ebp = esp; /* 0x1503453D: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x30u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x30u; /* 0x1503453F: sub esp, 0x30 */
    _flag_k = FK_CMP;
    eax = MEM32(0x150BD340); /* 0x15034542: mov eax, dword ptr [0x150bd340] */
    _flag_a = (uint32_t)((eax ^ ebp)); _flag_b = (uint32_t)((eax ^ ebp));
    eax = eax ^ ebp; /* 0x15034547: xor eax, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x4)) = eax; /* 0x15034549: mov dword ptr [ebp - 4], eax */
    eax = MEM32(ebp + 0x8); /* 0x1503454C: mov eax, dword ptr [ebp + 8] */
    ecx = MEM32(ebp + 0x14); /* 0x1503454F: mov ecx, dword ptr [ebp + 0x14] */
    MEM32(ebp + (-0x14)) = eax; /* 0x15034552: mov dword ptr [ebp - 0x14], eax */
    eax = MEM32(ebp + 0xC); /* 0x15034555: mov eax, dword ptr [ebp + 0xc] */
    MEM32(ebp + (-0x1C)) = eax; /* 0x15034558: mov dword ptr [ebp - 0x1c], eax */
    MEM32(ebp + (-0x18)) = ecx; /* 0x1503455B: mov dword ptr [ebp - 0x18], ecx */
    PUSH32(esp, esi); /* 0x1503455E: push esi */
    /* test eax, eax */ /* 0x1503455F: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_15034585; /* 0x15034561: jne 0x15034585 */
L_15034563:
    RECOMP_CALL(sub_15036430); /* 0x15034563: call 0x15036430 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    esi = 0; /* 0x15034568: xor esi, esi */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, esi); /* 0x1503456A: push esi */
    PUSH32(esp, esi); /* 0x1503456B: push esi */
    PUSH32(esp, esi); /* 0x1503456C: push esi */
    PUSH32(esp, esi); /* 0x1503456D: push esi */
    PUSH32(esp, esi); /* 0x1503456E: push esi */
    MEM32(eax) = 0x16u; /* 0x1503456F: mov dword ptr [eax], 0x16 */
    RECOMP_CALL(sub_1505A110); /* 0x15034575: call 0x1505a110 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x14u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x14u; /* 0x1503457A: add esp, 0x14 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)((eax | 0xFFFFFFFFu)); _flag_b = (uint32_t)((eax | 0xFFFFFFFFu));
    eax = eax | 0xFFFFFFFFu; /* 0x1503457D: or eax, 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_15034684; /* 0x15034580: jmp 0x15034684 */
L_15034585:
    PUSH32(esp, ebx); /* 0x15034585: push ebx */
    ebx = MEM32(eax); /* 0x15034586: mov ebx, dword ptr [eax] */
    ecx = ebp + (-0x30); /* 0x15034588: lea ecx, [ebp - 0x30] */
    PUSH32(esp, edi); /* 0x1503458B: push edi */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    esi = 0; /* 0x1503458C: xor esi, esi */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, esi); /* 0x1503458E: push esi */
    MEM32(ebp + (-0x10)) = esi; /* 0x1503458F: mov dword ptr [ebp - 0x10], esi */
    edi = esi; /* 0x15034592: mov edi, esi */
    RECOMP_CALL(sub_1502F870); /* 0x15034594: call 0x1502f870 */
    RECOMP_FLAGS_IN();
    /* cmp MEM32(ebp + (-0x14)), esi */ /* 0x15034599: cmp dword ptr [ebp - 0x14], esi */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x14))); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_150345E1; /* 0x1503459C: jne 0x150345e1 */
L_1503459E:
    esi = MEM32(ebp + (-0x18)); /* 0x1503459E: mov esi, dword ptr [ebp - 0x18] */
    goto L_150345AF; /* 0x150345A1: jmp 0x150345af */
L_150345A3:
    /* cmp MEM8(ebp + eax + (-0xD)), 0 */ /* 0x150345A3: cmp byte ptr [ebp + eax - 0xd], 0 */
    _flag_a = (uint32_t)(MEM8(ebp + eax + (-0xD))) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_150345D9; /* 0x150345A8: je 0x150345d9 */
L_150345AA:
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edi = edi + eax; /* 0x150345AA: add edi, eax */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ebx = ebx + 2; /* 0x150345AC: add ebx, 2 */
    _flag_k = FK_ADD;
L_150345AF:
    eax = ebp + (-0x30); /* 0x150345AF: lea eax, [ebp - 0x30] */
    PUSH32(esp, eax); /* 0x150345B2: push eax */
    eax = (uint32_t)MEM16(ebx); /* 0x150345B3: movzx eax, word ptr [ebx] */
    PUSH32(esp, esi); /* 0x150345B6: push esi */
    PUSH32(esp, eax); /* 0x150345B7: push eax */
    PUSH32(esp, 5); /* 0x150345B8: push 5 */
    eax = ebp + (-0xC); /* 0x150345BA: lea eax, [ebp - 0xc] */
    PUSH32(esp, eax); /* 0x150345BD: push eax */
    eax = ebp + (-0x10); /* 0x150345BE: lea eax, [ebp - 0x10] */
    PUSH32(esp, eax); /* 0x150345C1: push eax */
    RECOMP_CALL(sub_15034493); /* 0x150345C2: call 0x15034493 */
    RECOMP_FLAGS_IN();
    eax = MEM32(ebp + (-0x10)); /* 0x150345C7: mov eax, dword ptr [ebp - 0x10] */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x18u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x18u; /* 0x150345CA: add esp, 0x18 */
    _flag_k = FK_ADD;
    /* test eax, eax */ /* 0x150345CD: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if ((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) != 0u && (((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) == 0u)) goto L_150345A3; /* 0x150345CF: jg 0x150345a3 */
L_150345D1:
    _flag_a = (uint32_t)((edi | 0xFFFFFFFFu)); _flag_b = (uint32_t)((edi | 0xFFFFFFFFu));
    edi = edi | 0xFFFFFFFFu; /* 0x150345D1: or edi, 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_15034673; /* 0x150345D4: jmp 0x15034673 */
L_150345D9:
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(1);
    edi = edi - 1; /* 0x150345D9: dec edi */
    _flag_k = FK_DEC;
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edi = edi + eax; /* 0x150345DA: add edi, eax */
    _flag_k = FK_ADD;
    goto L_15034673; /* 0x150345DC: jmp 0x15034673 */
L_150345E1:
    edx = MEM32(ebp + 0x10); /* 0x150345E1: mov edx, dword ptr [ebp + 0x10] */
    /* test edx, edx */ /* 0x150345E4: test edx, edx */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(edx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1503466E; /* 0x150345E6: je 0x1503466e */
L_150345EC:
    eax = MEM32(ebp + (-0x30)); /* 0x150345EC: mov eax, dword ptr [ebp - 0x30] */
    ecx = MEM32(eax + 0xAC); /* 0x150345EF: mov ecx, dword ptr [eax + 0xac] */
    eax = ebp + (-0x30); /* 0x150345F5: lea eax, [ebp - 0x30] */
    PUSH32(esp, eax); /* 0x150345F8: push eax */
    PUSH32(esp, MEM32(ebp + (-0x18))); /* 0x150345F9: push dword ptr [ebp - 0x18] */
    eax = (uint32_t)MEM16(ebx); /* 0x150345FC: movzx eax, word ptr [ebx] */
    /* cmp edx, ecx */ /* 0x150345FF: cmp edx, ecx */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    PUSH32(esp, eax); /* 0x15034601: push eax */
    edx = ebp + (-0xC); /* 0x15034602: lea edx, [ebp - 0xc] */
    if (CMP_AE(_flag_a, _flag_b)) { edx = MEM32(ebp + (-0x14)); } /* 0x15034605: cmovae edx, dword ptr [ebp - 0x14] */
    eax = ebp + (-0x10); /* 0x15034609: lea eax, [ebp - 0x10] */
    PUSH32(esp, ecx); /* 0x1503460C: push ecx */
    PUSH32(esp, edx); /* 0x1503460D: push edx */
    PUSH32(esp, eax); /* 0x1503460E: push eax */
    MEM32(ebp + (-0x20)) = edx; /* 0x1503460F: mov dword ptr [ebp - 0x20], edx */
    RECOMP_CALL(sub_15034493); /* 0x15034612: call 0x15034493 */
    RECOMP_FLAGS_IN();
    ecx = MEM32(ebp + (-0x10)); /* 0x15034617: mov ecx, dword ptr [ebp - 0x10] */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x18u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x18u; /* 0x1503461A: add esp, 0x18 */
    _flag_k = FK_ADD;
    /* test ecx, ecx */ /* 0x1503461D: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if ((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) == 0u || (((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_1503466B; /* 0x1503461F: jle 0x1503466b */
L_15034621:
    eax = MEM32(ebp + (-0x14)); /* 0x15034621: mov eax, dword ptr [ebp - 0x14] */
    /* cmp eax, MEM32(ebp + (-0x20)) */ /* 0x15034624: cmp eax, dword ptr [ebp - 0x20] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(ebp + (-0x20)));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_15034645; /* 0x15034627: je 0x15034645 */
L_15034629:
    edx = MEM32(ebp + 0x10); /* 0x15034629: mov edx, dword ptr [ebp + 0x10] */
    /* cmp edx, ecx */ /* 0x1503462C: cmp edx, ecx */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_B(_flag_a, _flag_b)) goto L_1503466E; /* 0x1503462E: jb 0x1503466e */
L_15034630:
    PUSH32(esp, ecx); /* 0x15034630: push ecx */
    ecx = ebp + (-0xC); /* 0x15034631: lea ecx, [ebp - 0xc] */
    PUSH32(esp, ecx); /* 0x15034634: push ecx */
    PUSH32(esp, edx); /* 0x15034635: push edx */
    PUSH32(esp, eax); /* 0x15034636: push eax */
    RECOMP_CALL(sub_1508DF60); /* 0x15034637: call 0x1508df60 */
    RECOMP_FLAGS_IN();
    eax = MEM32(ebp + (-0x14)); /* 0x1503463C: mov eax, dword ptr [ebp - 0x14] */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x10u; /* 0x1503463F: add esp, 0x10 */
    _flag_k = FK_ADD;
    ecx = MEM32(ebp + (-0x10)); /* 0x15034642: mov ecx, dword ptr [ebp - 0x10] */
L_15034645:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + ecx; /* 0x15034645: add eax, ecx */
    _flag_k = FK_ADD;
    MEM32(ebp + (-0x14)) = eax; /* 0x15034647: mov dword ptr [ebp - 0x14], eax */
    /* cmp MEM8(eax + (-0x1)), 0 */ /* 0x1503464A: cmp byte ptr [eax - 1], 0 */
    _flag_a = (uint32_t)(MEM8(eax + (-0x1))) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_15034661; /* 0x1503464E: je 0x15034661 */
L_15034650:
    edx = MEM32(ebp + 0x10); /* 0x15034650: mov edx, dword ptr [ebp + 0x10] */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edi = edi + ecx; /* 0x15034653: add edi, ecx */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ebx = ebx + 2; /* 0x15034655: add ebx, 2 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    edx = edx - ecx; /* 0x15034658: sub edx, ecx */
    _flag_k = FK_CMP;
    MEM32(ebp + 0x10) = edx; /* 0x1503465A: mov dword ptr [ebp + 0x10], edx */
    RECOMP_BACKEDGE();
    if (/* sub result */ CMP_NE(_flag_a, _flag_b)) goto L_150345EC; /* 0x1503465D: jne 0x150345ec */
L_1503465F:
    goto L_1503466E; /* 0x1503465F: jmp 0x1503466e */
L_15034661:
    eax = MEM32(ebp + (-0x1C)); /* 0x15034661: mov eax, dword ptr [ebp - 0x1c] */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(1);
    edi = edi - 1; /* 0x15034664: dec edi */
    _flag_k = FK_DEC;
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edi = edi + ecx; /* 0x15034665: add edi, ecx */
    _flag_k = FK_ADD;
    MEM32(eax) = esi; /* 0x15034667: mov dword ptr [eax], esi */
    goto L_15034673; /* 0x15034669: jmp 0x15034673 */
L_1503466B:
    _flag_a = (uint32_t)((edi | 0xFFFFFFFFu)); _flag_b = (uint32_t)((edi | 0xFFFFFFFFu));
    edi = edi | 0xFFFFFFFFu; /* 0x1503466B: or edi, 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
L_1503466E:
    eax = MEM32(ebp + (-0x1C)); /* 0x1503466E: mov eax, dword ptr [ebp - 0x1c] */
    MEM32(eax) = ebx; /* 0x15034671: mov dword ptr [eax], ebx */
L_15034673:
    /* cmp MEM8(ebp + (-0x24)), 0 */ /* 0x15034673: cmp byte ptr [ebp - 0x24], 0 */
    _flag_a = (uint32_t)(MEM8(ebp + (-0x24))) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_15034680; /* 0x15034677: je 0x15034680 */
L_15034679:
    ecx = MEM32(ebp + (-0x28)); /* 0x15034679: mov ecx, dword ptr [ebp - 0x28] */
    _flag_a = (uint32_t)(MEM32(ecx + 0x70)); _flag_b = (uint32_t)(0xFFFFFFFDu);
    MEM32(ecx + 0x70) = MEM32(ecx + 0x70) & 0xFFFFFFFDu; /* 0x1503467C: and dword ptr [ecx + 0x70], 0xfffffffd */
    _cf = 0;
    _flag_k = FK_TEST;
L_15034680:
    eax = edi; /* 0x15034680: mov eax, edi */
    edi = POP32_VAL(esp); /* 0x15034682: pop edi */
    ebx = POP32_VAL(esp); /* 0x15034683: pop ebx */
L_15034684:
    ecx = MEM32(ebp + (-0x4)); /* 0x15034684: mov ecx, dword ptr [ebp - 4] */
    _flag_a = (uint32_t)((ecx ^ ebp)); _flag_b = (uint32_t)((ecx ^ ebp));
    ecx = ecx ^ ebp; /* 0x15034687: xor ecx, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    esi = POP32_VAL(esp); /* 0x15034689: pop esi */
    RECOMP_CALL(sub_1505E540); /* 0x1503468A: call 0x1505e540 */
    RECOMP_FLAGS_IN();
    esp = ebp; ebp = POP32_VAL(esp); /* 0x1503468F: leave  */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x15034690: ret  */
    RECOMP_REGS_OUT();
}

void sub_150346A0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x150346A0u);

L_150346A0:
    edi = edi; /* 0x150346A0: mov edi, edi */
    PUSH32(esp, ebp); /* 0x150346A2: push ebp */
    ebp = esp; /* 0x150346A3: mov ebp, esp */
    PUSH32(esp, ecx); /* 0x150346A5: push ecx */
    _flag_a = (uint32_t)((MEM32(ebp + (-0x4)) | 0xFFFFFFFFu)); _flag_b = (uint32_t)((MEM32(ebp + (-0x4)) | 0xFFFFFFFFu));
    MEM32(ebp + (-0x4)) = MEM32(ebp + (-0x4)) | 0xFFFFFFFFu; /* 0x150346A6: or dword ptr [ebp - 4], 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x150346AA: push dword ptr [ebp + 0x10] */
    eax = MEM32(ebp + 0x8); /* 0x150346AD: mov eax, dword ptr [ebp + 8] */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x150346B0: push dword ptr [ebp + 0xc] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(eax);
    _cf = (eax) != 0;
    eax = (uint32_t)(-(int32_t)eax); /* 0x150346B3: neg eax */
    _flag_k = FK_CMP;
    { uint32_t _sa = eax, _sb = eax, _sc = (uint32_t)CMP_B(_flag_a, _flag_b); /* 0x150346B5: sbb eax, eax */
      eax = _sc ? 0xFFFFFFFFu : 0;
      _flag_a = recomp_flags_sbb(_sa, _sb, _sc); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(5);
    eax = eax & 5; /* 0x150346B7: and eax, 5 */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, eax); /* 0x150346BA: push eax */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x150346BB: push dword ptr [ebp + 8] */
    eax = ebp + (-0x4); /* 0x150346BE: lea eax, [ebp - 4] */
    PUSH32(esp, eax); /* 0x150346C1: push eax */
    RECOMP_CALL(sub_150346E0); /* 0x150346C2: call 0x150346e0 */
    RECOMP_FLAGS_IN();
    eax = MEM32(ebp + (-0x4)); /* 0x150346C7: mov eax, dword ptr [ebp - 4] */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x14u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x14u; /* 0x150346CA: add esp, 0x14 */
    _flag_k = FK_ADD;
    esp = ebp; ebp = POP32_VAL(esp); /* 0x150346CD: leave  */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x150346CE: ret  */
    RECOMP_REGS_OUT();
}

void sub_150346E0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x150346E0u);

L_150346E0:
    edi = edi; /* 0x150346E0: mov edi, edi */
    PUSH32(esp, ebp); /* 0x150346E2: push ebp */
    ebp = esp; /* 0x150346E3: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x10u; /* 0x150346E5: sub esp, 0x10 */
    _flag_k = FK_CMP;
    eax = MEM32(0x150BD340); /* 0x150346E8: mov eax, dword ptr [0x150bd340] */
    _flag_a = (uint32_t)((eax ^ ebp)); _flag_b = (uint32_t)((eax ^ ebp));
    eax = eax ^ ebp; /* 0x150346ED: xor eax, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x4)) = eax; /* 0x150346EF: mov dword ptr [ebp - 4], eax */
    eax = MEM32(ebp + 0xC); /* 0x150346F2: mov eax, dword ptr [ebp + 0xc] */
    _flag_a = (uint32_t)((MEM32(ebp + (-0x10)) | 0xFFFFFFFFu)); _flag_b = (uint32_t)((MEM32(ebp + (-0x10)) | 0xFFFFFFFFu));
    MEM32(ebp + (-0x10)) = MEM32(ebp + (-0x10)) | 0xFFFFFFFFu; /* 0x150346F5: or dword ptr [ebp - 0x10], 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = MEM32(ebp + 0x18); /* 0x150346F9: mov ecx, dword ptr [ebp + 0x18] */
    PUSH32(esp, esi); /* 0x150346FC: push esi */
    esi = MEM32(ebp + 0x8); /* 0x150346FD: mov esi, dword ptr [ebp + 8] */
    /* test eax, eax */ /* 0x15034700: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_15034733; /* 0x15034702: jne 0x15034733 */
L_15034704:
    /* cmp MEM32(ebp + 0x10), eax */ /* 0x15034704: cmp dword ptr [ebp + 0x10], eax */
    _flag_a = (uint32_t)(MEM32(ebp + 0x10)); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_15034726; /* 0x15034707: je 0x15034726 */
L_15034709:
    RECOMP_CALL(sub_15036430); /* 0x15034709: call 0x15036430 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0x16u); /* 0x1503470E: push 0x16 */
    esi = POP32_VAL(esp); /* 0x15034710: pop esi */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x15034711: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, ecx); /* 0x15034713: push ecx */
    PUSH32(esp, ecx); /* 0x15034714: push ecx */
    PUSH32(esp, ecx); /* 0x15034715: push ecx */
    PUSH32(esp, ecx); /* 0x15034716: push ecx */
    PUSH32(esp, ecx); /* 0x15034717: push ecx */
    MEM32(eax) = esi; /* 0x15034718: mov dword ptr [eax], esi */
    RECOMP_CALL(sub_1505A110); /* 0x1503471A: call 0x1505a110 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x14u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x14u; /* 0x1503471F: add esp, 0x14 */
    _flag_k = FK_ADD;
    eax = esi; /* 0x15034722: mov eax, esi */
    goto L_15034756; /* 0x15034724: jmp 0x15034756 */
L_15034726:
    PUSH32(esp, 0); /* 0x15034726: push 0 */
    PUSH32(esp, ecx); /* 0x15034728: push ecx */
    PUSH32(esp, MEM32(ebp + 0x14)); /* 0x15034729: push dword ptr [ebp + 0x14] */
    eax = ebp + (-0xC); /* 0x1503472C: lea eax, [ebp - 0xc] */
    PUSH32(esp, 5); /* 0x1503472F: push 5 */
    goto L_1503473C; /* 0x15034731: jmp 0x1503473c */
L_15034733:
    PUSH32(esp, 0); /* 0x15034733: push 0 */
    PUSH32(esp, ecx); /* 0x15034735: push ecx */
    PUSH32(esp, MEM32(ebp + 0x14)); /* 0x15034736: push dword ptr [ebp + 0x14] */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x15034739: push dword ptr [ebp + 0x10] */
L_1503473C:
    PUSH32(esp, eax); /* 0x1503473C: push eax */
    eax = ebp + (-0x10); /* 0x1503473D: lea eax, [ebp - 0x10] */
    PUSH32(esp, eax); /* 0x15034740: push eax */
    RECOMP_CALL(sub_15034493); /* 0x15034741: call 0x15034493 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x18u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x18u; /* 0x15034746: add esp, 0x18 */
    _flag_k = FK_ADD;
    ecx = eax; /* 0x15034749: mov ecx, eax */
    /* test esi, esi */ /* 0x1503474B: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_15034754; /* 0x1503474D: je 0x15034754 */
L_1503474F:
    eax = MEM32(ebp + (-0x10)); /* 0x1503474F: mov eax, dword ptr [ebp - 0x10] */
    MEM32(esi) = eax; /* 0x15034752: mov dword ptr [esi], eax */
L_15034754:
    eax = ecx; /* 0x15034754: mov eax, ecx */
L_15034756:
    ecx = MEM32(ebp + (-0x4)); /* 0x15034756: mov ecx, dword ptr [ebp - 4] */
    _flag_a = (uint32_t)((ecx ^ ebp)); _flag_b = (uint32_t)((ecx ^ ebp));
    ecx = ecx ^ ebp; /* 0x15034759: xor ecx, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    esi = POP32_VAL(esp); /* 0x1503475B: pop esi */
    RECOMP_CALL(sub_1505E540); /* 0x1503475C: call 0x1505e540 */
    RECOMP_FLAGS_IN();
    esp = ebp; ebp = POP32_VAL(esp); /* 0x15034761: leave  */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x15034762: ret  */
    RECOMP_REGS_OUT();
}

void sub_15034770(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x15034770u);

    goto L_15034770;
L_1503453A:
    edi = edi; /* 0x1503453A: mov edi, edi */
    PUSH32(esp, ebp); /* 0x1503453C: push ebp */
    ebp = esp; /* 0x1503453D: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x30u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x30u; /* 0x1503453F: sub esp, 0x30 */
    _flag_k = FK_CMP;
    eax = MEM32(0x150BD340); /* 0x15034542: mov eax, dword ptr [0x150bd340] */
    _flag_a = (uint32_t)((eax ^ ebp)); _flag_b = (uint32_t)((eax ^ ebp));
    eax = eax ^ ebp; /* 0x15034547: xor eax, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x4)) = eax; /* 0x15034549: mov dword ptr [ebp - 4], eax */
    eax = MEM32(ebp + 0x8); /* 0x1503454C: mov eax, dword ptr [ebp + 8] */
    ecx = MEM32(ebp + 0x14); /* 0x1503454F: mov ecx, dword ptr [ebp + 0x14] */
    MEM32(ebp + (-0x14)) = eax; /* 0x15034552: mov dword ptr [ebp - 0x14], eax */
    eax = MEM32(ebp + 0xC); /* 0x15034555: mov eax, dword ptr [ebp + 0xc] */
    MEM32(ebp + (-0x1C)) = eax; /* 0x15034558: mov dword ptr [ebp - 0x1c], eax */
    MEM32(ebp + (-0x18)) = ecx; /* 0x1503455B: mov dword ptr [ebp - 0x18], ecx */
    PUSH32(esp, esi); /* 0x1503455E: push esi */
    /* test eax, eax */ /* 0x1503455F: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_15034585; /* 0x15034561: jne 0x15034585 */
L_15034563:
    RECOMP_CALL(sub_15036430); /* 0x15034563: call 0x15036430 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    esi = 0; /* 0x15034568: xor esi, esi */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, esi); /* 0x1503456A: push esi */
    PUSH32(esp, esi); /* 0x1503456B: push esi */
    PUSH32(esp, esi); /* 0x1503456C: push esi */
    PUSH32(esp, esi); /* 0x1503456D: push esi */
    PUSH32(esp, esi); /* 0x1503456E: push esi */
    MEM32(eax) = 0x16u; /* 0x1503456F: mov dword ptr [eax], 0x16 */
    RECOMP_CALL(sub_1505A110); /* 0x15034575: call 0x1505a110 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x14u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x14u; /* 0x1503457A: add esp, 0x14 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)((eax | 0xFFFFFFFFu)); _flag_b = (uint32_t)((eax | 0xFFFFFFFFu));
    eax = eax | 0xFFFFFFFFu; /* 0x1503457D: or eax, 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_15034684; /* 0x15034580: jmp 0x15034684 */
L_15034585:
    PUSH32(esp, ebx); /* 0x15034585: push ebx */
    ebx = MEM32(eax); /* 0x15034586: mov ebx, dword ptr [eax] */
    ecx = ebp + (-0x30); /* 0x15034588: lea ecx, [ebp - 0x30] */
    PUSH32(esp, edi); /* 0x1503458B: push edi */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    esi = 0; /* 0x1503458C: xor esi, esi */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, esi); /* 0x1503458E: push esi */
    MEM32(ebp + (-0x10)) = esi; /* 0x1503458F: mov dword ptr [ebp - 0x10], esi */
    edi = esi; /* 0x15034592: mov edi, esi */
    RECOMP_CALL(sub_1502F870); /* 0x15034594: call 0x1502f870 */
    RECOMP_FLAGS_IN();
    /* cmp MEM32(ebp + (-0x14)), esi */ /* 0x15034599: cmp dword ptr [ebp - 0x14], esi */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x14))); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_150345E1; /* 0x1503459C: jne 0x150345e1 */
L_1503459E:
    esi = MEM32(ebp + (-0x18)); /* 0x1503459E: mov esi, dword ptr [ebp - 0x18] */
    goto L_150345AF; /* 0x150345A1: jmp 0x150345af */
L_150345A3:
    /* cmp MEM8(ebp + eax + (-0xD)), 0 */ /* 0x150345A3: cmp byte ptr [ebp + eax - 0xd], 0 */
    _flag_a = (uint32_t)(MEM8(ebp + eax + (-0xD))) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_150345D9; /* 0x150345A8: je 0x150345d9 */
L_150345AA:
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edi = edi + eax; /* 0x150345AA: add edi, eax */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ebx = ebx + 2; /* 0x150345AC: add ebx, 2 */
    _flag_k = FK_ADD;
L_150345AF:
    eax = ebp + (-0x30); /* 0x150345AF: lea eax, [ebp - 0x30] */
    PUSH32(esp, eax); /* 0x150345B2: push eax */
    eax = (uint32_t)MEM16(ebx); /* 0x150345B3: movzx eax, word ptr [ebx] */
    PUSH32(esp, esi); /* 0x150345B6: push esi */
    PUSH32(esp, eax); /* 0x150345B7: push eax */
    PUSH32(esp, 5); /* 0x150345B8: push 5 */
    eax = ebp + (-0xC); /* 0x150345BA: lea eax, [ebp - 0xc] */
    PUSH32(esp, eax); /* 0x150345BD: push eax */
    eax = ebp + (-0x10); /* 0x150345BE: lea eax, [ebp - 0x10] */
    PUSH32(esp, eax); /* 0x150345C1: push eax */
    RECOMP_CALL(sub_15034493); /* 0x150345C2: call 0x15034493 */
    RECOMP_FLAGS_IN();
    eax = MEM32(ebp + (-0x10)); /* 0x150345C7: mov eax, dword ptr [ebp - 0x10] */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x18u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x18u; /* 0x150345CA: add esp, 0x18 */
    _flag_k = FK_ADD;
    /* test eax, eax */ /* 0x150345CD: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if ((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) != 0u && (((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) == 0u)) goto L_150345A3; /* 0x150345CF: jg 0x150345a3 */
L_150345D1:
    _flag_a = (uint32_t)((edi | 0xFFFFFFFFu)); _flag_b = (uint32_t)((edi | 0xFFFFFFFFu));
    edi = edi | 0xFFFFFFFFu; /* 0x150345D1: or edi, 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_15034673; /* 0x150345D4: jmp 0x15034673 */
L_150345D9:
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(1);
    edi = edi - 1; /* 0x150345D9: dec edi */
    _flag_k = FK_DEC;
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edi = edi + eax; /* 0x150345DA: add edi, eax */
    _flag_k = FK_ADD;
    goto L_15034673; /* 0x150345DC: jmp 0x15034673 */
L_150345E1:
    edx = MEM32(ebp + 0x10); /* 0x150345E1: mov edx, dword ptr [ebp + 0x10] */
    /* test edx, edx */ /* 0x150345E4: test edx, edx */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(edx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1503466E; /* 0x150345E6: je 0x1503466e */
L_150345EC:
    eax = MEM32(ebp + (-0x30)); /* 0x150345EC: mov eax, dword ptr [ebp - 0x30] */
    ecx = MEM32(eax + 0xAC); /* 0x150345EF: mov ecx, dword ptr [eax + 0xac] */
    eax = ebp + (-0x30); /* 0x150345F5: lea eax, [ebp - 0x30] */
    PUSH32(esp, eax); /* 0x150345F8: push eax */
    PUSH32(esp, MEM32(ebp + (-0x18))); /* 0x150345F9: push dword ptr [ebp - 0x18] */
    eax = (uint32_t)MEM16(ebx); /* 0x150345FC: movzx eax, word ptr [ebx] */
    /* cmp edx, ecx */ /* 0x150345FF: cmp edx, ecx */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    PUSH32(esp, eax); /* 0x15034601: push eax */
    edx = ebp + (-0xC); /* 0x15034602: lea edx, [ebp - 0xc] */
    if (CMP_AE(_flag_a, _flag_b)) { edx = MEM32(ebp + (-0x14)); } /* 0x15034605: cmovae edx, dword ptr [ebp - 0x14] */
    eax = ebp + (-0x10); /* 0x15034609: lea eax, [ebp - 0x10] */
    PUSH32(esp, ecx); /* 0x1503460C: push ecx */
    PUSH32(esp, edx); /* 0x1503460D: push edx */
    PUSH32(esp, eax); /* 0x1503460E: push eax */
    MEM32(ebp + (-0x20)) = edx; /* 0x1503460F: mov dword ptr [ebp - 0x20], edx */
    RECOMP_CALL(sub_15034493); /* 0x15034612: call 0x15034493 */
    RECOMP_FLAGS_IN();
    ecx = MEM32(ebp + (-0x10)); /* 0x15034617: mov ecx, dword ptr [ebp - 0x10] */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x18u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x18u; /* 0x1503461A: add esp, 0x18 */
    _flag_k = FK_ADD;
    /* test ecx, ecx */ /* 0x1503461D: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if ((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) == 0u || (((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_1503466B; /* 0x1503461F: jle 0x1503466b */
L_15034621:
    eax = MEM32(ebp + (-0x14)); /* 0x15034621: mov eax, dword ptr [ebp - 0x14] */
    /* cmp eax, MEM32(ebp + (-0x20)) */ /* 0x15034624: cmp eax, dword ptr [ebp - 0x20] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(ebp + (-0x20)));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_15034645; /* 0x15034627: je 0x15034645 */
L_15034629:
    edx = MEM32(ebp + 0x10); /* 0x15034629: mov edx, dword ptr [ebp + 0x10] */
    /* cmp edx, ecx */ /* 0x1503462C: cmp edx, ecx */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_B(_flag_a, _flag_b)) goto L_1503466E; /* 0x1503462E: jb 0x1503466e */
L_15034630:
    PUSH32(esp, ecx); /* 0x15034630: push ecx */
    ecx = ebp + (-0xC); /* 0x15034631: lea ecx, [ebp - 0xc] */
    PUSH32(esp, ecx); /* 0x15034634: push ecx */
    PUSH32(esp, edx); /* 0x15034635: push edx */
    PUSH32(esp, eax); /* 0x15034636: push eax */
    RECOMP_CALL(sub_1508DF60); /* 0x15034637: call 0x1508df60 */
    RECOMP_FLAGS_IN();
    eax = MEM32(ebp + (-0x14)); /* 0x1503463C: mov eax, dword ptr [ebp - 0x14] */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x10u; /* 0x1503463F: add esp, 0x10 */
    _flag_k = FK_ADD;
    ecx = MEM32(ebp + (-0x10)); /* 0x15034642: mov ecx, dword ptr [ebp - 0x10] */
L_15034645:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + ecx; /* 0x15034645: add eax, ecx */
    _flag_k = FK_ADD;
    MEM32(ebp + (-0x14)) = eax; /* 0x15034647: mov dword ptr [ebp - 0x14], eax */
    /* cmp MEM8(eax + (-0x1)), 0 */ /* 0x1503464A: cmp byte ptr [eax - 1], 0 */
    _flag_a = (uint32_t)(MEM8(eax + (-0x1))) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_15034661; /* 0x1503464E: je 0x15034661 */
L_15034650:
    edx = MEM32(ebp + 0x10); /* 0x15034650: mov edx, dword ptr [ebp + 0x10] */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edi = edi + ecx; /* 0x15034653: add edi, ecx */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ebx = ebx + 2; /* 0x15034655: add ebx, 2 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    edx = edx - ecx; /* 0x15034658: sub edx, ecx */
    _flag_k = FK_CMP;
    MEM32(ebp + 0x10) = edx; /* 0x1503465A: mov dword ptr [ebp + 0x10], edx */
    RECOMP_BACKEDGE();
    if (/* sub result */ CMP_NE(_flag_a, _flag_b)) goto L_150345EC; /* 0x1503465D: jne 0x150345ec */
L_1503465F:
    goto L_1503466E; /* 0x1503465F: jmp 0x1503466e */
L_15034661:
    eax = MEM32(ebp + (-0x1C)); /* 0x15034661: mov eax, dword ptr [ebp - 0x1c] */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(1);
    edi = edi - 1; /* 0x15034664: dec edi */
    _flag_k = FK_DEC;
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edi = edi + ecx; /* 0x15034665: add edi, ecx */
    _flag_k = FK_ADD;
    MEM32(eax) = esi; /* 0x15034667: mov dword ptr [eax], esi */
    goto L_15034673; /* 0x15034669: jmp 0x15034673 */
L_1503466B:
    _flag_a = (uint32_t)((edi | 0xFFFFFFFFu)); _flag_b = (uint32_t)((edi | 0xFFFFFFFFu));
    edi = edi | 0xFFFFFFFFu; /* 0x1503466B: or edi, 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
L_1503466E:
    eax = MEM32(ebp + (-0x1C)); /* 0x1503466E: mov eax, dword ptr [ebp - 0x1c] */
    MEM32(eax) = ebx; /* 0x15034671: mov dword ptr [eax], ebx */
L_15034673:
    /* cmp MEM8(ebp + (-0x24)), 0 */ /* 0x15034673: cmp byte ptr [ebp - 0x24], 0 */
    _flag_a = (uint32_t)(MEM8(ebp + (-0x24))) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_15034680; /* 0x15034677: je 0x15034680 */
L_15034679:
    ecx = MEM32(ebp + (-0x28)); /* 0x15034679: mov ecx, dword ptr [ebp - 0x28] */
    _flag_a = (uint32_t)(MEM32(ecx + 0x70)); _flag_b = (uint32_t)(0xFFFFFFFDu);
    MEM32(ecx + 0x70) = MEM32(ecx + 0x70) & 0xFFFFFFFDu; /* 0x1503467C: and dword ptr [ecx + 0x70], 0xfffffffd */
    _cf = 0;
    _flag_k = FK_TEST;
L_15034680:
    eax = edi; /* 0x15034680: mov eax, edi */
    edi = POP32_VAL(esp); /* 0x15034682: pop edi */
    ebx = POP32_VAL(esp); /* 0x15034683: pop ebx */
L_15034684:
    ecx = MEM32(ebp + (-0x4)); /* 0x15034684: mov ecx, dword ptr [ebp - 4] */
    _flag_a = (uint32_t)((ecx ^ ebp)); _flag_b = (uint32_t)((ecx ^ ebp));
    ecx = ecx ^ ebp; /* 0x15034687: xor ecx, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    esi = POP32_VAL(esp); /* 0x15034689: pop esi */
    RECOMP_CALL(sub_1505E540); /* 0x1503468A: call 0x1505e540 */
    RECOMP_FLAGS_IN();
    esp = ebp; ebp = POP32_VAL(esp); /* 0x1503468F: leave  */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x15034690: ret  */
L_15034770:
    edi = edi; /* 0x15034770: mov edi, edi */
    PUSH32(esp, ebp); /* 0x15034772: push ebp */
    ebp = esp; /* 0x15034773: mov ebp, esp */
    ebp = POP32_VAL(esp); /* 0x15034775: pop ebp */
    RECOMP_BACKEDGE();
    goto L_1503453A; /* 0x15034776: jmp 0x1503453a */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    RECOMP_REGS_OUT();
}

void sub_15034790(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x15034790u);

L_15034790:
    edi = edi; /* 0x15034790: mov edi, edi */
    PUSH32(esp, ebp); /* 0x15034792: push ebp */
    ebp = esp; /* 0x15034793: mov ebp, esp */
    PUSH32(esp, ebx); /* 0x15034795: push ebx */
    PUSH32(esp, esi); /* 0x15034796: push esi */
    PUSH32(esp, edi); /* 0x15034797: push edi */
    edi = MEM32(ebp + 0x8); /* 0x15034798: mov edi, dword ptr [ebp + 8] */
    /* test edi, edi */ /* 0x1503479B: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_150347A2; /* 0x1503479D: je 0x150347a2 */
L_1503479F:
    _flag_a = (uint32_t)((MEM32(edi) | 0xFFFFFFFFu)); _flag_b = (uint32_t)((MEM32(edi) | 0xFFFFFFFFu));
    MEM32(edi) = MEM32(edi) | 0xFFFFFFFFu; /* 0x1503479F: or dword ptr [edi], 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
L_150347A2:
    esi = MEM32(ebp + 0xC); /* 0x150347A2: mov esi, dword ptr [ebp + 0xc] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ebx = 0; /* 0x150347A5: xor ebx, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = MEM32(ebp + 0x10); /* 0x150347A7: mov ecx, dword ptr [ebp + 0x10] */
    /* test esi, esi */ /* 0x150347AA: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_150347D2; /* 0x150347AC: jne 0x150347d2 */
L_150347AE:
    /* test ecx, ecx */ /* 0x150347AE: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_150347D8; /* 0x150347B0: je 0x150347d8 */
L_150347B2:
    RECOMP_CALL(sub_15036430); /* 0x150347B2: call 0x15036430 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ebx = 0; /* 0x150347B7: xor ebx, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
L_150347B9:
    PUSH32(esp, 0x16u); /* 0x150347B9: push 0x16 */
L_150347BB:
    esi = POP32_VAL(esp); /* 0x150347BB: pop esi */
    PUSH32(esp, ebx); /* 0x150347BC: push ebx */
    PUSH32(esp, ebx); /* 0x150347BD: push ebx */
    PUSH32(esp, ebx); /* 0x150347BE: push ebx */
    PUSH32(esp, ebx); /* 0x150347BF: push ebx */
    PUSH32(esp, ebx); /* 0x150347C0: push ebx */
    MEM32(eax) = esi; /* 0x150347C1: mov dword ptr [eax], esi */
    RECOMP_CALL(sub_1505A110); /* 0x150347C3: call 0x1505a110 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x14u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x14u; /* 0x150347C8: add esp, 0x14 */
    _flag_k = FK_ADD;
    eax = esi; /* 0x150347CB: mov eax, esi */
L_150347CD:
    edi = POP32_VAL(esp); /* 0x150347CD: pop edi */
    esi = POP32_VAL(esp); /* 0x150347CE: pop esi */
    ebx = POP32_VAL(esp); /* 0x150347CF: pop ebx */
    ebp = POP32_VAL(esp); /* 0x150347D0: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x150347D1: ret  */
L_150347D2:
    /* test ecx, ecx */ /* 0x150347D2: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_Z(_flag_a, _flag_b)) goto L_150347B2; /* 0x150347D4: je 0x150347b2 */
L_150347D6:
    MEM8(esi) = (uint8_t)(LO8(ebx)); /* 0x150347D6: mov byte ptr [esi], bl */
L_150347D8:
    /* cmp MEM32(ebp + 0x14), ebx */ /* 0x150347D8: cmp dword ptr [ebp + 0x14], ebx */
    _flag_a = (uint32_t)(MEM32(ebp + 0x14)); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_150347E4; /* 0x150347DB: jne 0x150347e4 */
L_150347DD:
    RECOMP_CALL(sub_15036430); /* 0x150347DD: call 0x15036430 */
    RECOMP_FLAGS_IN();
    RECOMP_BACKEDGE();
    goto L_150347B9; /* 0x150347E2: jmp 0x150347b9 */
L_150347E4:
    eax = MEM32(ebp + 0x18); /* 0x150347E4: mov eax, dword ptr [ebp + 0x18] */
    /* cmp eax, ecx */ /* 0x150347E7: cmp eax, ecx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    PUSH32(esp, MEM32(ebp + 0x1C)); /* 0x150347E9: push dword ptr [ebp + 0x1c] */
    if (CMP_A(_flag_a, _flag_b)) { eax = ecx; } /* 0x150347EC: cmova eax, ecx */
    PUSH32(esp, eax); /* 0x150347EF: push eax */
    PUSH32(esp, MEM32(ebp + 0x14)); /* 0x150347F0: push dword ptr [ebp + 0x14] */
    PUSH32(esp, esi); /* 0x150347F3: push esi */
    RECOMP_CALL(sub_1503453A); /* 0x150347F4: call 0x1503453a */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x10u; /* 0x150347F9: add esp, 0x10 */
    _flag_k = FK_ADD;
    /* cmp eax, 0xFFFFFFFFu */ /* 0x150347FC: cmp eax, -1 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xFFFFFFFFu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_15034810; /* 0x150347FF: jne 0x15034810 */
L_15034801:
    /* test esi, esi */ /* 0x15034801: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_15034807; /* 0x15034803: je 0x15034807 */
L_15034805:
    MEM8(esi) = (uint8_t)(LO8(ebx)); /* 0x15034805: mov byte ptr [esi], bl */
L_15034807:
    RECOMP_CALL(sub_15036430); /* 0x15034807: call 0x15036430 */
    RECOMP_FLAGS_IN();
    eax = MEM32(eax); /* 0x1503480C: mov eax, dword ptr [eax] */
    RECOMP_BACKEDGE();
    goto L_150347CD; /* 0x1503480E: jmp 0x150347cd */
L_15034810:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x15034810: inc eax */
    _flag_k = FK_INC;
    /* test esi, esi */ /* 0x15034811: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_15034829; /* 0x15034813: je 0x15034829 */
L_15034815:
    /* cmp eax, MEM32(ebp + 0x10) */ /* 0x15034815: cmp eax, dword ptr [ebp + 0x10] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(ebp + 0x10));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_15034825; /* 0x15034818: jbe 0x15034825 */
L_1503481A:
    MEM8(esi) = (uint8_t)(LO8(ebx)); /* 0x1503481A: mov byte ptr [esi], bl */
    RECOMP_CALL(sub_15036430); /* 0x1503481C: call 0x15036430 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0x22u); /* 0x15034821: push 0x22 */
    RECOMP_BACKEDGE();
    goto L_150347BB; /* 0x15034823: jmp 0x150347bb */
L_15034825:
    MEM8(eax + esi + (-0x1)) = (uint8_t)(LO8(ebx)); /* 0x15034825: mov byte ptr [eax + esi - 1], bl */
L_15034829:
    /* test edi, edi */ /* 0x15034829: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1503482F; /* 0x1503482B: je 0x1503482f */
L_1503482D:
    MEM32(edi) = eax; /* 0x1503482D: mov dword ptr [edi], eax */
L_1503482F:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1503482F: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    goto L_150347CD; /* 0x15034831: jmp 0x150347cd */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    RECOMP_REGS_OUT();
}

void sub_15034840(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x15034840u);

L_15034840:
    edi = edi; /* 0x15034840: mov edi, edi */
    PUSH32(esp, ebp); /* 0x15034842: push ebp */
    ebp = esp; /* 0x15034843: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x10u; /* 0x15034845: sub esp, 0x10 */
    _flag_k = FK_CMP;
    eax = MEM32(0x150BD340); /* 0x15034848: mov eax, dword ptr [0x150bd340] */
    _flag_a = (uint32_t)((eax ^ ebp)); _flag_b = (uint32_t)((eax ^ ebp));
    eax = eax ^ ebp; /* 0x1503484D: xor eax, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x4)) = eax; /* 0x1503484F: mov dword ptr [ebp - 4], eax */
    eax = 0xFFFFu; /* 0x15034852: mov eax, 0xffff */
    /* cmp MEM16(ebp + 0x8), LO16(eax) */ /* 0x15034857: cmp word ptr [ebp + 8], ax */
    _flag_a = (uint32_t)(MEM16(ebp + 0x8)) << 16; _flag_b = (uint32_t)(LO16(eax)) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1503488A; /* 0x1503485B: je 0x1503488a */
L_1503485D:
    _flag_a = (uint32_t)((MEM32(ebp + (-0x10)) | 0xFFFFFFFFu)); _flag_b = (uint32_t)((MEM32(ebp + (-0x10)) | 0xFFFFFFFFu));
    MEM32(ebp + (-0x10)) = MEM32(ebp + (-0x10)) | 0xFFFFFFFFu; /* 0x1503485D: or dword ptr [ebp - 0x10], 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    eax = ebp + (-0xC); /* 0x15034861: lea eax, [ebp - 0xc] */
    PUSH32(esp, 0); /* 0x15034864: push 0 */
    PUSH32(esp, 0); /* 0x15034866: push 0 */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x15034868: push dword ptr [ebp + 8] */
    PUSH32(esp, 5); /* 0x1503486B: push 5 */
    PUSH32(esp, eax); /* 0x1503486D: push eax */
    eax = ebp + (-0x10); /* 0x1503486E: lea eax, [ebp - 0x10] */
    PUSH32(esp, eax); /* 0x15034871: push eax */
    RECOMP_CALL(sub_15034493); /* 0x15034872: call 0x15034493 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x18u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x18u; /* 0x15034877: add esp, 0x18 */
    _flag_k = FK_ADD;
    /* test eax, eax */ /* 0x1503487A: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1503488A; /* 0x1503487C: jne 0x1503488a */
L_1503487E:
    /* cmp MEM32(ebp + (-0x10)), 1 */ /* 0x1503487E: cmp dword ptr [ebp - 0x10], 1 */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x10))); _flag_b = (uint32_t)(1);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_1503488A; /* 0x15034882: jne 0x1503488a */
L_15034884:
    eax = (int32_t)(int8_t)MEM8(ebp + (-0xC)); /* 0x15034884: movsx eax, byte ptr [ebp - 0xc] */
    goto L_1503488D; /* 0x15034888: jmp 0x1503488d */
L_1503488A:
    _flag_a = (uint32_t)((eax | 0xFFFFFFFFu)); _flag_b = (uint32_t)((eax | 0xFFFFFFFFu));
    eax = eax | 0xFFFFFFFFu; /* 0x1503488A: or eax, 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
L_1503488D:
    ecx = MEM32(ebp + (-0x4)); /* 0x1503488D: mov ecx, dword ptr [ebp - 4] */
    _flag_a = (uint32_t)((ecx ^ ebp)); _flag_b = (uint32_t)((ecx ^ ebp));
    ecx = ecx ^ ebp; /* 0x15034890: xor ecx, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_1505E540); /* 0x15034892: call 0x1505e540 */
    RECOMP_FLAGS_IN();
    esp = ebp; ebp = POP32_VAL(esp); /* 0x15034897: leave  */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x15034898: ret  */
    RECOMP_REGS_OUT();
}

void sub_1503489F(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1503489Fu);

L_1503489F:
    edi = edi; /* 0x1503489F: mov edi, edi */
    PUSH32(esp, ebp); /* 0x150348A1: push ebp */
    ebp = esp; /* 0x150348A2: mov ebp, esp */
    edx = MEM32(ebp + 0x8); /* 0x150348A4: mov edx, dword ptr [ebp + 8] */
    PUSH32(esp, ebx); /* 0x150348A7: push ebx */
    PUSH32(esp, esi); /* 0x150348A8: push esi */
    esi = MEM32(ebp + 0x14); /* 0x150348A9: mov esi, dword ptr [ebp + 0x14] */
    PUSH32(esp, edi); /* 0x150348AC: push edi */
    edi = MEM32(esi + 0xC); /* 0x150348AD: mov edi, dword ptr [esi + 0xc] */
    /* test edx, edx */ /* 0x150348B0: test edx, edx */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(edx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_150348D4; /* 0x150348B2: jne 0x150348d4 */
L_150348B4:
    RECOMP_CALL(sub_15036430); /* 0x150348B4: call 0x15036430 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ebx = 0; /* 0x150348B9: xor ebx, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
L_150348BB:
    PUSH32(esp, 0x16u); /* 0x150348BB: push 0x16 */
L_150348BD:
    esi = POP32_VAL(esp); /* 0x150348BD: pop esi */
    PUSH32(esp, ebx); /* 0x150348BE: push ebx */
    PUSH32(esp, ebx); /* 0x150348BF: push ebx */
    PUSH32(esp, ebx); /* 0x150348C0: push ebx */
    PUSH32(esp, ebx); /* 0x150348C1: push ebx */
    PUSH32(esp, ebx); /* 0x150348C2: push ebx */
    MEM32(eax) = esi; /* 0x150348C3: mov dword ptr [eax], esi */
    RECOMP_CALL(sub_1505A110); /* 0x150348C5: call 0x1505a110 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x14u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x14u; /* 0x150348CA: add esp, 0x14 */
    _flag_k = FK_ADD;
    eax = esi; /* 0x150348CD: mov eax, esi */
    goto L_15034964; /* 0x150348CF: jmp 0x15034964 */
L_150348D4:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ebx = 0; /* 0x150348D4: xor ebx, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp MEM32(ebp + 0xC), ebx */ /* 0x150348D6: cmp dword ptr [ebp + 0xc], ebx */
    _flag_a = (uint32_t)(MEM32(ebp + 0xC)); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_A(_flag_a, _flag_b)) goto L_150348E2; /* 0x150348D9: ja 0x150348e2 */
L_150348DB:
    RECOMP_CALL(sub_15036430); /* 0x150348DB: call 0x15036430 */
    RECOMP_FLAGS_IN();
    RECOMP_BACKEDGE();
    goto L_150348BB; /* 0x150348E0: jmp 0x150348bb */
L_150348E2:
    ecx = MEM32(ebp + 0x10); /* 0x150348E2: mov ecx, dword ptr [ebp + 0x10] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x150348E5: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    /* test ecx, ecx */ /* 0x150348E7: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    MEM8(edx) = (uint8_t)(LO8(ebx)); /* 0x150348E9: mov byte ptr [edx], bl */
    if ((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) != 0u && (((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) == 0u)) { eax = ecx; } /* 0x150348EB: cmovg eax, ecx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x150348EE: inc eax */
    _flag_k = FK_INC;
    /* cmp MEM32(ebp + 0xC), eax */ /* 0x150348EF: cmp dword ptr [ebp + 0xc], eax */
    _flag_a = (uint32_t)(MEM32(ebp + 0xC)); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_A(_flag_a, _flag_b)) goto L_150348FD; /* 0x150348F2: ja 0x150348fd */
L_150348F4:
    RECOMP_CALL(sub_15036430); /* 0x150348F4: call 0x15036430 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0x22u); /* 0x150348F9: push 0x22 */
    RECOMP_BACKEDGE();
    goto L_150348BD; /* 0x150348FB: jmp 0x150348bd */
L_150348FD:
    MEM8(edx) = (uint8_t)(0x30u); /* 0x150348FD: mov byte ptr [edx], 0x30 */
    eax = edx + 0x1; /* 0x15034900: lea eax, [edx + 1] */
    /* test ecx, ecx */ /* 0x15034903: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if ((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) == 0u || (((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_1503491D; /* 0x15034905: jle 0x1503491d */
L_15034907:
    SET_LO8(edx, MEM8(edi)); /* 0x15034907: mov dl, byte ptr [edi] */
    /* test LO8(edx), LO8(edx) */ /* 0x15034909: test dl, dl */
    _flag_a = (uint32_t)(LO8(edx)) << 24; _flag_b = (uint32_t)(LO8(edx)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_15034910; /* 0x1503490B: je 0x15034910 */
L_1503490D:
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(1);
    edi = edi + 1; /* 0x1503490D: inc edi */
    _flag_k = FK_INC;
    goto L_15034912; /* 0x1503490E: jmp 0x15034912 */
L_15034910:
    SET_LO8(edx, 0x30u); /* 0x15034910: mov dl, 0x30 */
L_15034912:
    MEM8(eax) = (uint8_t)(LO8(edx)); /* 0x15034912: mov byte ptr [eax], dl */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x15034914: inc eax */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx - 1; /* 0x15034915: dec ecx */
    _flag_k = FK_DEC;
    /* test ecx, ecx */ /* 0x15034916: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if ((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) != 0u && (((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) == 0u)) goto L_15034907; /* 0x15034918: jg 0x15034907 */
L_1503491A:
    edx = MEM32(ebp + 0x8); /* 0x1503491A: mov edx, dword ptr [ebp + 8] */
L_1503491D:
    MEM8(eax) = (uint8_t)(LO8(ebx)); /* 0x1503491D: mov byte ptr [eax], bl */
    /* test ecx, ecx */ /* 0x1503491F: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_15034939; /* 0x15034921: js 0x15034939 */
L_15034923:
    /* cmp MEM8(edi), 0x35u */ /* 0x15034923: cmp byte ptr [edi], 0x35 */
    _flag_a = (uint32_t)(MEM8(edi)) << 24; _flag_b = (uint32_t)(0x35u) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_L(_flag_a, _flag_b)) goto L_15034939; /* 0x15034926: jl 0x15034939 */
L_15034928:
    goto L_1503492D; /* 0x15034928: jmp 0x1503492d */
L_1503492A:
    MEM8(eax) = (uint8_t)(0x30u); /* 0x1503492A: mov byte ptr [eax], 0x30 */
L_1503492D:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax - 1; /* 0x1503492D: dec eax */
    _flag_k = FK_DEC;
    SET_LO8(ecx, MEM8(eax)); /* 0x1503492E: mov cl, byte ptr [eax] */
    /* cmp LO8(ecx), 0x39u */ /* 0x15034930: cmp cl, 0x39 */
    _flag_a = (uint32_t)(LO8(ecx)) << 24; _flag_b = (uint32_t)(0x39u) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    RECOMP_BACKEDGE();
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1503492A; /* 0x15034933: je 0x1503492a */
L_15034935:
    _flag_a = (uint32_t)(LO8(ecx)) << 24; _flag_b = (uint32_t)(1) << 24;
    SET_LO8(ecx, LO8(ecx) + 1); /* 0x15034935: inc cl */
    _flag_k = FK_NARROW(FK_INC, 24);
    MEM8(eax) = (uint8_t)(LO8(ecx)); /* 0x15034937: mov byte ptr [eax], cl */
L_15034939:
    /* cmp MEM8(edx), 0x31u */ /* 0x15034939: cmp byte ptr [edx], 0x31 */
    _flag_a = (uint32_t)(MEM8(edx)) << 24; _flag_b = (uint32_t)(0x31u) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_15034943; /* 0x1503493C: jne 0x15034943 */
L_1503493E:
    _flag_a = (uint32_t)(MEM32(esi + 0x4)); _flag_b = (uint32_t)(1);
    MEM32(esi + 0x4) = MEM32(esi + 0x4) + 1; /* 0x1503493E: inc dword ptr [esi + 4] */
    _flag_k = FK_INC;
    goto L_15034962; /* 0x15034941: jmp 0x15034962 */
L_15034943:
    edi = edx + 0x1; /* 0x15034943: lea edi, [edx + 1] */
    ecx = edi; /* 0x15034946: mov ecx, edi */
    esi = ecx + 0x1; /* 0x15034948: lea esi, [ecx + 1] */
L_1503494B:
    SET_LO8(eax, MEM8(ecx)); /* 0x1503494B: mov al, byte ptr [ecx] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx + 1; /* 0x1503494D: inc ecx */
    _flag_k = FK_INC;
    /* test LO8(eax), LO8(eax) */ /* 0x1503494E: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1503494B; /* 0x15034950: jne 0x1503494b */
L_15034952:
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ecx = ecx - esi; /* 0x15034952: sub ecx, esi */
    _flag_k = FK_CMP;
    eax = ecx + 0x1; /* 0x15034954: lea eax, [ecx + 1] */
    PUSH32(esp, eax); /* 0x15034957: push eax */
    PUSH32(esp, edi); /* 0x15034958: push edi */
    PUSH32(esp, edx); /* 0x15034959: push edx */
    RECOMP_CALL(sub_1508E000); /* 0x1503495A: call 0x1508e000 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x1503495F: add esp, 0xc */
    _flag_k = FK_ADD;
L_15034962:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x15034962: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
L_15034964:
    edi = POP32_VAL(esp); /* 0x15034964: pop edi */
    esi = POP32_VAL(esp); /* 0x15034965: pop esi */
    ebx = POP32_VAL(esp); /* 0x15034966: pop ebx */
    ebp = POP32_VAL(esp); /* 0x15034967: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x15034968: ret  */
    RECOMP_REGS_OUT();
}

void sub_1503496F(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1503496Fu);

L_1503496F:
    edi = edi; /* 0x1503496F: mov edi, edi */
    PUSH32(esp, ebp); /* 0x15034971: push ebp */
    ebp = esp; /* 0x15034972: mov ebp, esp */
    SET_LO16(eax, MEM16(ebp + 0x8)); /* 0x15034974: mov ax, word ptr [ebp + 8] */
    PUSH32(esp, 0x30u); /* 0x15034978: push 0x30 */
    ecx = POP32_VAL(esp); /* 0x1503497A: pop ecx */
    /* cmp LO16(eax), LO16(ecx) */ /* 0x1503497B: cmp ax, cx */
    _flag_a = (uint32_t)(LO16(eax)) << 16; _flag_b = (uint32_t)(LO16(ecx)) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    if (CMP_B(_flag_a, _flag_b)) goto L_15034B04; /* 0x1503497E: jb 0x15034b04 */
L_15034984:
    /* cmp LO16(eax), 0x3Au */ /* 0x15034984: cmp ax, 0x3a */
    _flag_a = (uint32_t)(LO16(eax)) << 16; _flag_b = (uint32_t)(0x3Au) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    if (CMP_AE(_flag_a, _flag_b)) goto L_15034991; /* 0x15034988: jae 0x15034991 */
L_1503498A:
    eax = (uint32_t)LO16(eax); /* 0x1503498A: movzx eax, ax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - ecx; /* 0x1503498D: sub eax, ecx */
    _flag_k = FK_CMP;
    ebp = POP32_VAL(esp); /* 0x1503498F: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x15034990: ret  */
L_15034991:
    edx = 0xFF10u; /* 0x15034991: mov edx, 0xff10 */
    /* cmp LO16(eax), LO16(edx) */ /* 0x15034996: cmp ax, dx */
    _flag_a = (uint32_t)(LO16(eax)) << 16; _flag_b = (uint32_t)(LO16(edx)) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    if (CMP_AE(_flag_a, _flag_b)) goto L_15034B09; /* 0x15034999: jae 0x15034b09 */
L_1503499F:
    edx = 0x660u; /* 0x1503499F: mov edx, 0x660 */
    /* cmp LO16(eax), LO16(edx) */ /* 0x150349A4: cmp ax, dx */
    _flag_a = (uint32_t)(LO16(eax)) << 16; _flag_b = (uint32_t)(LO16(edx)) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    if (CMP_B(_flag_a, _flag_b)) goto L_15034B04; /* 0x150349A7: jb 0x15034b04 */
L_150349AD:
    ecx = edx + 0xA; /* 0x150349AD: lea ecx, [edx + 0xa] */
    /* cmp LO16(eax), LO16(ecx) */ /* 0x150349B0: cmp ax, cx */
    _flag_a = (uint32_t)(LO16(eax)) << 16; _flag_b = (uint32_t)(LO16(ecx)) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    if (CMP_AE(_flag_a, _flag_b)) goto L_150349BC; /* 0x150349B3: jae 0x150349bc */
L_150349B5:
    eax = (uint32_t)LO16(eax); /* 0x150349B5: movzx eax, ax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - edx; /* 0x150349B8: sub eax, edx */
    _flag_k = FK_CMP;
    ebp = POP32_VAL(esp); /* 0x150349BA: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x150349BB: ret  */
L_150349BC:
    edx = 0x6F0u; /* 0x150349BC: mov edx, 0x6f0 */
    /* cmp LO16(eax), LO16(edx) */ /* 0x150349C1: cmp ax, dx */
    _flag_a = (uint32_t)(LO16(eax)) << 16; _flag_b = (uint32_t)(LO16(edx)) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    if (CMP_B(_flag_a, _flag_b)) goto L_15034B04; /* 0x150349C4: jb 0x15034b04 */
L_150349CA:
    ecx = edx + 0xA; /* 0x150349CA: lea ecx, [edx + 0xa] */
    /* cmp LO16(eax), LO16(ecx) */ /* 0x150349CD: cmp ax, cx */
    _flag_a = (uint32_t)(LO16(eax)) << 16; _flag_b = (uint32_t)(LO16(ecx)) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_150349B5; /* 0x150349D0: jb 0x150349b5 */
L_150349D2:
    edx = 0x966u; /* 0x150349D2: mov edx, 0x966 */
    /* cmp LO16(eax), LO16(edx) */ /* 0x150349D7: cmp ax, dx */
    _flag_a = (uint32_t)(LO16(eax)) << 16; _flag_b = (uint32_t)(LO16(edx)) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    if (CMP_B(_flag_a, _flag_b)) goto L_15034B04; /* 0x150349DA: jb 0x15034b04 */
L_150349E0:
    ecx = edx + 0xA; /* 0x150349E0: lea ecx, [edx + 0xa] */
    /* cmp LO16(eax), LO16(ecx) */ /* 0x150349E3: cmp ax, cx */
    _flag_a = (uint32_t)(LO16(eax)) << 16; _flag_b = (uint32_t)(LO16(ecx)) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_150349B5; /* 0x150349E6: jb 0x150349b5 */
L_150349E8:
    edx = ecx + 0x76; /* 0x150349E8: lea edx, [ecx + 0x76] */
    /* cmp LO16(eax), LO16(edx) */ /* 0x150349EB: cmp ax, dx */
    _flag_a = (uint32_t)(LO16(eax)) << 16; _flag_b = (uint32_t)(LO16(edx)) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    if (CMP_B(_flag_a, _flag_b)) goto L_15034B04; /* 0x150349EE: jb 0x15034b04 */
L_150349F4:
    ecx = edx + 0xA; /* 0x150349F4: lea ecx, [edx + 0xa] */
    /* cmp LO16(eax), LO16(ecx) */ /* 0x150349F7: cmp ax, cx */
    _flag_a = (uint32_t)(LO16(eax)) << 16; _flag_b = (uint32_t)(LO16(ecx)) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_150349B5; /* 0x150349FA: jb 0x150349b5 */
L_150349FC:
    edx = ecx + 0x76; /* 0x150349FC: lea edx, [ecx + 0x76] */
    /* cmp LO16(eax), LO16(edx) */ /* 0x150349FF: cmp ax, dx */
    _flag_a = (uint32_t)(LO16(eax)) << 16; _flag_b = (uint32_t)(LO16(edx)) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    if (CMP_B(_flag_a, _flag_b)) goto L_15034B04; /* 0x15034A02: jb 0x15034b04 */
L_15034A08:
    ecx = edx + 0xA; /* 0x15034A08: lea ecx, [edx + 0xa] */
    /* cmp LO16(eax), LO16(ecx) */ /* 0x15034A0B: cmp ax, cx */
    _flag_a = (uint32_t)(LO16(eax)) << 16; _flag_b = (uint32_t)(LO16(ecx)) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_150349B5; /* 0x15034A0E: jb 0x150349b5 */
L_15034A10:
    edx = ecx + 0x76; /* 0x15034A10: lea edx, [ecx + 0x76] */
    /* cmp LO16(eax), LO16(edx) */ /* 0x15034A13: cmp ax, dx */
    _flag_a = (uint32_t)(LO16(eax)) << 16; _flag_b = (uint32_t)(LO16(edx)) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    if (CMP_B(_flag_a, _flag_b)) goto L_15034B04; /* 0x15034A16: jb 0x15034b04 */
L_15034A1C:
    ecx = edx + 0xA; /* 0x15034A1C: lea ecx, [edx + 0xa] */
    /* cmp LO16(eax), LO16(ecx) */ /* 0x15034A1F: cmp ax, cx */
    _flag_a = (uint32_t)(LO16(eax)) << 16; _flag_b = (uint32_t)(LO16(ecx)) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_150349B5; /* 0x15034A22: jb 0x150349b5 */
L_15034A24:
    edx = ecx + 0x76; /* 0x15034A24: lea edx, [ecx + 0x76] */
    /* cmp LO16(eax), LO16(edx) */ /* 0x15034A27: cmp ax, dx */
    _flag_a = (uint32_t)(LO16(eax)) << 16; _flag_b = (uint32_t)(LO16(edx)) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    if (CMP_B(_flag_a, _flag_b)) goto L_15034B04; /* 0x15034A2A: jb 0x15034b04 */
L_15034A30:
    ecx = edx + 0xA; /* 0x15034A30: lea ecx, [edx + 0xa] */
    /* cmp LO16(eax), LO16(ecx) */ /* 0x15034A33: cmp ax, cx */
    _flag_a = (uint32_t)(LO16(eax)) << 16; _flag_b = (uint32_t)(LO16(ecx)) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_150349B5; /* 0x15034A36: jb 0x150349b5 */
L_15034A3C:
    edx = 0xC66u; /* 0x15034A3C: mov edx, 0xc66 */
    /* cmp LO16(eax), LO16(edx) */ /* 0x15034A41: cmp ax, dx */
    _flag_a = (uint32_t)(LO16(eax)) << 16; _flag_b = (uint32_t)(LO16(edx)) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    if (CMP_B(_flag_a, _flag_b)) goto L_15034B04; /* 0x15034A44: jb 0x15034b04 */
L_15034A4A:
    ecx = edx + 0xA; /* 0x15034A4A: lea ecx, [edx + 0xa] */
    /* cmp LO16(eax), LO16(ecx) */ /* 0x15034A4D: cmp ax, cx */
    _flag_a = (uint32_t)(LO16(eax)) << 16; _flag_b = (uint32_t)(LO16(ecx)) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_150349B5; /* 0x15034A50: jb 0x150349b5 */
L_15034A56:
    edx = ecx + 0x76; /* 0x15034A56: lea edx, [ecx + 0x76] */
    /* cmp LO16(eax), LO16(edx) */ /* 0x15034A59: cmp ax, dx */
    _flag_a = (uint32_t)(LO16(eax)) << 16; _flag_b = (uint32_t)(LO16(edx)) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    if (CMP_B(_flag_a, _flag_b)) goto L_15034B04; /* 0x15034A5C: jb 0x15034b04 */
L_15034A62:
    ecx = edx + 0xA; /* 0x15034A62: lea ecx, [edx + 0xa] */
    /* cmp LO16(eax), LO16(ecx) */ /* 0x15034A65: cmp ax, cx */
    _flag_a = (uint32_t)(LO16(eax)) << 16; _flag_b = (uint32_t)(LO16(ecx)) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_150349B5; /* 0x15034A68: jb 0x150349b5 */
L_15034A6E:
    edx = ecx + 0x76; /* 0x15034A6E: lea edx, [ecx + 0x76] */
    /* cmp LO16(eax), LO16(edx) */ /* 0x15034A71: cmp ax, dx */
    _flag_a = (uint32_t)(LO16(eax)) << 16; _flag_b = (uint32_t)(LO16(edx)) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    if (CMP_B(_flag_a, _flag_b)) goto L_15034B04; /* 0x15034A74: jb 0x15034b04 */
L_15034A7A:
    ecx = edx + 0xA; /* 0x15034A7A: lea ecx, [edx + 0xa] */
    /* cmp LO16(eax), LO16(ecx) */ /* 0x15034A7D: cmp ax, cx */
    _flag_a = (uint32_t)(LO16(eax)) << 16; _flag_b = (uint32_t)(LO16(ecx)) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_150349B5; /* 0x15034A80: jb 0x150349b5 */
L_15034A86:
    edx = 0xE50u; /* 0x15034A86: mov edx, 0xe50 */
    /* cmp LO16(eax), LO16(edx) */ /* 0x15034A8B: cmp ax, dx */
    _flag_a = (uint32_t)(LO16(eax)) << 16; _flag_b = (uint32_t)(LO16(edx)) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    if (CMP_B(_flag_a, _flag_b)) goto L_15034B04; /* 0x15034A8E: jb 0x15034b04 */
L_15034A90:
    ecx = edx + 0xA; /* 0x15034A90: lea ecx, [edx + 0xa] */
    /* cmp LO16(eax), LO16(ecx) */ /* 0x15034A93: cmp ax, cx */
    _flag_a = (uint32_t)(LO16(eax)) << 16; _flag_b = (uint32_t)(LO16(ecx)) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_150349B5; /* 0x15034A96: jb 0x150349b5 */
L_15034A9C:
    edx = ecx + 0x76; /* 0x15034A9C: lea edx, [ecx + 0x76] */
    /* cmp LO16(eax), LO16(edx) */ /* 0x15034A9F: cmp ax, dx */
    _flag_a = (uint32_t)(LO16(eax)) << 16; _flag_b = (uint32_t)(LO16(edx)) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    if (CMP_B(_flag_a, _flag_b)) goto L_15034B04; /* 0x15034AA2: jb 0x15034b04 */
L_15034AA4:
    ecx = edx + 0xA; /* 0x15034AA4: lea ecx, [edx + 0xa] */
    /* cmp LO16(eax), LO16(ecx) */ /* 0x15034AA7: cmp ax, cx */
    _flag_a = (uint32_t)(LO16(eax)) << 16; _flag_b = (uint32_t)(LO16(ecx)) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_150349B5; /* 0x15034AAA: jb 0x150349b5 */
L_15034AB0:
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(0x50u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edx = edx + 0x50u; /* 0x15034AB0: add edx, 0x50 */
    _flag_k = FK_ADD;
    /* cmp LO16(eax), LO16(edx) */ /* 0x15034AB3: cmp ax, dx */
    _flag_a = (uint32_t)(LO16(eax)) << 16; _flag_b = (uint32_t)(LO16(edx)) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    if (CMP_B(_flag_a, _flag_b)) goto L_15034B04; /* 0x15034AB6: jb 0x15034b04 */
L_15034AB8:
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x50u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 0x50u; /* 0x15034AB8: add ecx, 0x50 */
    _flag_k = FK_ADD;
    /* cmp LO16(eax), LO16(ecx) */ /* 0x15034ABB: cmp ax, cx */
    _flag_a = (uint32_t)(LO16(eax)) << 16; _flag_b = (uint32_t)(LO16(ecx)) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_150349B5; /* 0x15034ABE: jb 0x150349b5 */
L_15034AC4:
    edx = 0x1040u; /* 0x15034AC4: mov edx, 0x1040 */
    /* cmp LO16(eax), LO16(edx) */ /* 0x15034AC9: cmp ax, dx */
    _flag_a = (uint32_t)(LO16(eax)) << 16; _flag_b = (uint32_t)(LO16(edx)) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    if (CMP_B(_flag_a, _flag_b)) goto L_15034B04; /* 0x15034ACC: jb 0x15034b04 */
L_15034ACE:
    ecx = edx + 0xA; /* 0x15034ACE: lea ecx, [edx + 0xa] */
    /* cmp LO16(eax), LO16(ecx) */ /* 0x15034AD1: cmp ax, cx */
    _flag_a = (uint32_t)(LO16(eax)) << 16; _flag_b = (uint32_t)(LO16(ecx)) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_150349B5; /* 0x15034AD4: jb 0x150349b5 */
L_15034ADA:
    edx = 0x17E0u; /* 0x15034ADA: mov edx, 0x17e0 */
    /* cmp LO16(eax), LO16(edx) */ /* 0x15034ADF: cmp ax, dx */
    _flag_a = (uint32_t)(LO16(eax)) << 16; _flag_b = (uint32_t)(LO16(edx)) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    if (CMP_B(_flag_a, _flag_b)) goto L_15034B04; /* 0x15034AE2: jb 0x15034b04 */
L_15034AE4:
    ecx = edx + 0xA; /* 0x15034AE4: lea ecx, [edx + 0xa] */
    /* cmp LO16(eax), LO16(ecx) */ /* 0x15034AE7: cmp ax, cx */
    _flag_a = (uint32_t)(LO16(eax)) << 16; _flag_b = (uint32_t)(LO16(ecx)) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_150349B5; /* 0x15034AEA: jb 0x150349b5 */
L_15034AF0:
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(0x30u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edx = edx + 0x30u; /* 0x15034AF0: add edx, 0x30 */
    _flag_k = FK_ADD;
    /* cmp LO16(eax), LO16(edx) */ /* 0x15034AF3: cmp ax, dx */
    _flag_a = (uint32_t)(LO16(eax)) << 16; _flag_b = (uint32_t)(LO16(edx)) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    if (CMP_B(_flag_a, _flag_b)) goto L_15034B04; /* 0x15034AF6: jb 0x15034b04 */
L_15034AF8:
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x30u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 0x30u; /* 0x15034AF8: add ecx, 0x30 */
    _flag_k = FK_ADD;
L_15034AFB:
    /* cmp LO16(eax), LO16(ecx) */ /* 0x15034AFB: cmp ax, cx */
    _flag_a = (uint32_t)(LO16(eax)) << 16; _flag_b = (uint32_t)(LO16(ecx)) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_150349B5; /* 0x15034AFE: jb 0x150349b5 */
L_15034B04:
    _flag_a = (uint32_t)((eax | 0xFFFFFFFFu)); _flag_b = (uint32_t)((eax | 0xFFFFFFFFu));
    eax = eax | 0xFFFFFFFFu; /* 0x15034B04: or eax, 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    ebp = POP32_VAL(esp); /* 0x15034B07: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x15034B08: ret  */
L_15034B09:
    ecx = 0xFF1Au; /* 0x15034B09: mov ecx, 0xff1a */
    RECOMP_BACKEDGE();
    goto L_15034AFB; /* 0x15034B0E: jmp 0x15034afb */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    RECOMP_REGS_OUT();
}

void sub_15034B20(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x15034B20u);

L_15034B20:
    edi = edi; /* 0x15034B20: mov edi, edi */
    PUSH32(esp, ebp); /* 0x15034B22: push ebp */
    ebp = esp; /* 0x15034B23: mov ebp, esp */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x15034B25: push dword ptr [ebp + 0xc] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x15034B28: push dword ptr [ebp + 8] */
    RECOMP_ICALL(MEM32(0x150C029C)); /* 0x15034B2B: call dword ptr [0x150c029c] */
    RECOMP_FLAGS_IN();
    ebp = POP32_VAL(esp); /* 0x15034B31: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x15034B32: ret  */
    RECOMP_REGS_OUT();
}

void sub_15034B40(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x15034B40u);

L_15034B40:
    edi = edi; /* 0x15034B40: mov edi, edi */
    PUSH32(esp, ebp); /* 0x15034B42: push ebp */
    ebp = esp; /* 0x15034B43: mov ebp, esp */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x15034B45: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x15034B47: inc eax */
    _flag_k = FK_INC;
    /* cmp MEM32(ebp + 0x8), 0 */ /* 0x15034B48: cmp dword ptr [ebp + 8], 0 */
    _flag_a = (uint32_t)(MEM32(ebp + 0x8)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) { eax = MEM32(ebp + 0x8); } /* 0x15034B4C: cmovne eax, dword ptr [ebp + 8] */
    PUSH32(esp, eax); /* 0x15034B50: push eax */
    RECOMP_ICALL(MEM32(0x150C0274)); /* 0x15034B51: call dword ptr [0x150c0274] */
    RECOMP_FLAGS_IN();
    ebp = POP32_VAL(esp); /* 0x15034B57: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x15034B58: ret  */
    RECOMP_REGS_OUT();
}

void sub_15034B5F(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x15034B5Fu);

L_15034B5F:
    edi = edi; /* 0x15034B5F: mov edi, edi */
    PUSH32(esp, ebp); /* 0x15034B61: push ebp */
    ebp = esp; /* 0x15034B62: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x1Cu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x1Cu; /* 0x15034B64: sub esp, 0x1c */
    _flag_k = FK_CMP;
    eax = MEM32(0x150BD340); /* 0x15034B67: mov eax, dword ptr [0x150bd340] */
    _flag_a = (uint32_t)((eax ^ ebp)); _flag_b = (uint32_t)((eax ^ ebp));
    eax = eax ^ ebp; /* 0x15034B6C: xor eax, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x4)) = eax; /* 0x15034B6E: mov dword ptr [ebp - 4], eax */
    eax = MEM32(ebp + 0x8); /* 0x15034B71: mov eax, dword ptr [ebp + 8] */
    /* cmp MEM32(eax), 0 */ /* 0x15034B74: cmp dword ptr [eax], 0 */
    _flag_a = (uint32_t)(MEM32(eax)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_15034B7F; /* 0x15034B77: jne 0x15034b7f */
L_15034B79:
    /* cmp MEM32(eax + 0x4), 0 */ /* 0x15034B79: cmp dword ptr [eax + 4], 0 */
    _flag_a = (uint32_t)(MEM32(eax + 0x4)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_15034BCA; /* 0x15034B7D: je 0x15034bca */
L_15034B7F:
    ecx = ebp + (-0x1C); /* 0x15034B7F: lea ecx, [ebp - 0x1c] */
    PUSH32(esp, ecx); /* 0x15034B82: push ecx */
    PUSH32(esp, eax); /* 0x15034B83: push eax */
    RECOMP_ICALL(MEM32(0x150C008C)); /* 0x15034B84: call dword ptr [0x150c008c] */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x15034B8A: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_15034BCA; /* 0x15034B8C: je 0x15034bca */
L_15034B8E:
    eax = ebp + (-0x14); /* 0x15034B8E: lea eax, [ebp - 0x14] */
    PUSH32(esp, eax); /* 0x15034B91: push eax */
    eax = ebp + (-0x1C); /* 0x15034B92: lea eax, [ebp - 0x1c] */
    PUSH32(esp, eax); /* 0x15034B95: push eax */
    RECOMP_ICALL(MEM32(0x150C0000)); /* 0x15034B96: call dword ptr [0x150c0000] */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x15034B9C: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_15034BCA; /* 0x15034B9E: je 0x15034bca */
L_15034BA0:
    eax = (uint32_t)MEM16(ebp + (-0x8)); /* 0x15034BA0: movzx eax, word ptr [ebp - 8] */
    PUSH32(esp, 0); /* 0x15034BA4: push 0 */
    PUSH32(esp, eax); /* 0x15034BA6: push eax */
    eax = (uint32_t)MEM16(ebp + (-0xA)); /* 0x15034BA7: movzx eax, word ptr [ebp - 0xa] */
    PUSH32(esp, eax); /* 0x15034BAB: push eax */
    eax = (uint32_t)MEM16(ebp + (-0xC)); /* 0x15034BAC: movzx eax, word ptr [ebp - 0xc] */
    PUSH32(esp, eax); /* 0x15034BB0: push eax */
    eax = (uint32_t)MEM16(ebp + (-0xE)); /* 0x15034BB1: movzx eax, word ptr [ebp - 0xe] */
    PUSH32(esp, eax); /* 0x15034BB5: push eax */
    eax = (uint32_t)MEM16(ebp + (-0x12)); /* 0x15034BB6: movzx eax, word ptr [ebp - 0x12] */
    PUSH32(esp, eax); /* 0x15034BBA: push eax */
    eax = (uint32_t)MEM16(ebp + (-0x14)); /* 0x15034BBB: movzx eax, word ptr [ebp - 0x14] */
    PUSH32(esp, eax); /* 0x15034BBF: push eax */
    RECOMP_CALL(sub_1509577E); /* 0x15034BC0: call 0x1509577e */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x1Cu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x1Cu; /* 0x15034BC5: add esp, 0x1c */
    _flag_k = FK_ADD;
    goto L_15034BCD; /* 0x15034BC8: jmp 0x15034bcd */
L_15034BCA:
    _flag_a = (uint32_t)((eax | 0xFFFFFFFFu)); _flag_b = (uint32_t)((eax | 0xFFFFFFFFu));
    eax = eax | 0xFFFFFFFFu; /* 0x15034BCA: or eax, 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
L_15034BCD:
    ecx = MEM32(ebp + (-0x4)); /* 0x15034BCD: mov ecx, dword ptr [ebp - 4] */
    _flag_a = (uint32_t)((ecx ^ ebp)); _flag_b = (uint32_t)((ecx ^ ebp));
    ecx = ecx ^ ebp; /* 0x15034BD0: xor ecx, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_1505E540); /* 0x15034BD2: call 0x1505e540 */
    RECOMP_FLAGS_IN();
    esp = ebp; ebp = POP32_VAL(esp); /* 0x15034BD7: leave  */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x15034BD8: ret  */
    RECOMP_REGS_OUT();
}

void sub_15034BE0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x15034BE0u);

L_15034BE0:
    edi = edi; /* 0x15034BE0: mov edi, edi */
    PUSH32(esp, ebp); /* 0x15034BE2: push ebp */
    ebp = esp; /* 0x15034BE3: mov ebp, esp */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x15034BE5: push dword ptr [ebp + 8] */
    RECOMP_ICALL(MEM32(0x150C0090)); /* 0x15034BE8: call dword ptr [0x150c0090] */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x15034BEE: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_15034C02; /* 0x15034BF0: jne 0x15034c02 */
L_15034BF2:
    RECOMP_CALL(sub_15036430); /* 0x15034BF2: call 0x15036430 */
    RECOMP_FLAGS_IN();
    MEM32(eax) = 0x16u; /* 0x15034BF7: mov dword ptr [eax], 0x16 */
    _flag_a = (uint32_t)((eax | 0xFFFFFFFFu)); _flag_b = (uint32_t)((eax | 0xFFFFFFFFu));
    eax = eax | 0xFFFFFFFFu; /* 0x15034BFD: or eax, 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    ebp = POP32_VAL(esp); /* 0x15034C00: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x15034C01: ret  */
L_15034C02:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x15034C02: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    ebp = POP32_VAL(esp); /* 0x15034C04: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x15034C05: ret  */
    RECOMP_REGS_OUT();
}

void sub_15034C10(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x15034C10u);

L_15034C10:
    edi = edi; /* 0x15034C10: mov edi, edi */
    PUSH32(esp, ebp); /* 0x15034C12: push ebp */
    ebp = esp; /* 0x15034C13: mov ebp, esp */
    ebp = POP32_VAL(esp); /* 0x15034C15: pop ebp */
    goto L_15034C21; /* 0x15034C16: jmp 0x15034c21 */
L_15034C21:
    edi = edi; /* 0x15034C21: mov edi, edi */
    PUSH32(esp, ebp); /* 0x15034C23: push ebp */
    ebp = esp; /* 0x15034C24: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x144u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x144u; /* 0x15034C26: sub esp, 0x144 */
    _flag_k = FK_CMP;
    eax = MEM32(0x150BD340); /* 0x15034C2C: mov eax, dword ptr [0x150bd340] */
    _flag_a = (uint32_t)((eax ^ ebp)); _flag_b = (uint32_t)((eax ^ ebp));
    eax = eax ^ ebp; /* 0x15034C31: xor eax, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x4)) = eax; /* 0x15034C33: mov dword ptr [ebp - 4], eax */
    eax = MEM32(ebp + 0x8); /* 0x15034C36: mov eax, dword ptr [ebp + 8] */
    PUSH32(esp, esi); /* 0x15034C39: push esi */
    esi = MEM32(ebp + 0xC); /* 0x15034C3A: mov esi, dword ptr [ebp + 0xc] */
    /* test esi, esi */ /* 0x15034C3D: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_15034C63; /* 0x15034C3F: jne 0x15034c63 */
L_15034C41:
    RECOMP_CALL(sub_15036430); /* 0x15034C41: call 0x15036430 */
    RECOMP_FLAGS_IN();
    MEM32(eax) = 0x16u; /* 0x15034C46: mov dword ptr [eax], 0x16 */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x15034C4C: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, eax); /* 0x15034C4E: push eax */
    PUSH32(esp, eax); /* 0x15034C4F: push eax */
    PUSH32(esp, eax); /* 0x15034C50: push eax */
    PUSH32(esp, eax); /* 0x15034C51: push eax */
    PUSH32(esp, eax); /* 0x15034C52: push eax */
    RECOMP_CALL(sub_1505A110); /* 0x15034C53: call 0x1505a110 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x14u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x14u; /* 0x15034C58: add esp, 0x14 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)((eax | 0xFFFFFFFFu)); _flag_b = (uint32_t)((eax | 0xFFFFFFFFu));
    eax = eax | 0xFFFFFFFFu; /* 0x15034C5B: or eax, 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_15034D35; /* 0x15034C5E: jmp 0x15034d35 */
L_15034C63:
    /* test eax, eax */ /* 0x15034C63: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_Z(_flag_a, _flag_b)) goto L_15034C41; /* 0x15034C65: je 0x15034c41 */
L_15034C67:
    PUSH32(esp, edi); /* 0x15034C67: push edi */
    ecx = ebp + (-0x144); /* 0x15034C68: lea ecx, [ebp - 0x144] */
    PUSH32(esp, ecx); /* 0x15034C6E: push ecx */
    PUSH32(esp, eax); /* 0x15034C6F: push eax */
    RECOMP_ICALL(MEM32(0x150C0114)); /* 0x15034C70: call dword ptr [0x150c0114] */
    RECOMP_FLAGS_IN();
    edi = eax; /* 0x15034C76: mov edi, eax */
    /* cmp edi, 0xFFFFFFFFu */ /* 0x15034C78: cmp edi, -1 */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(0xFFFFFFFFu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_15034CBF; /* 0x15034C7B: jne 0x15034cbf */
L_15034C7D:
    RECOMP_ICALL(MEM32(0x150C006C)); /* 0x15034C7D: call dword ptr [0x150c006c] */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 2); /* 0x15034C83: push 2 */
    esi = POP32_VAL(esp); /* 0x15034C85: pop esi */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - esi; /* 0x15034C86: sub eax, esi */
    _flag_k = FK_CMP;
    if (/* sub result */ CMP_EQ(_flag_a, _flag_b)) goto L_15034CB3; /* 0x15034C88: je 0x15034cb3 */
L_15034C8A:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - 1; /* 0x15034C8A: sub eax, 1 */
    _flag_k = FK_CMP;
    if (/* sub result */ CMP_EQ(_flag_a, _flag_b)) goto L_15034CB3; /* 0x15034C8D: je 0x15034cb3 */
L_15034C8F:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(5);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - 5; /* 0x15034C8F: sub eax, 5 */
    _flag_k = FK_CMP;
    if (/* sub result */ CMP_EQ(_flag_a, _flag_b)) goto L_15034CA6; /* 0x15034C92: je 0x15034ca6 */
L_15034C94:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xAu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - 0xAu; /* 0x15034C94: sub eax, 0xa */
    _flag_k = FK_CMP;
    if (/* sub result */ CMP_EQ(_flag_a, _flag_b)) goto L_15034CB3; /* 0x15034C97: je 0x15034cb3 */
L_15034C99:
    RECOMP_CALL(sub_15036430); /* 0x15034C99: call 0x15036430 */
    RECOMP_FLAGS_IN();
    MEM32(eax) = 0x16u; /* 0x15034C9E: mov dword ptr [eax], 0x16 */
    goto L_15034CBA; /* 0x15034CA4: jmp 0x15034cba */
L_15034CA6:
    RECOMP_CALL(sub_15036430); /* 0x15034CA6: call 0x15036430 */
    RECOMP_FLAGS_IN();
    MEM32(eax) = 0xCu; /* 0x15034CAB: mov dword ptr [eax], 0xc */
    goto L_15034CBA; /* 0x15034CB1: jmp 0x15034cba */
L_15034CB3:
    RECOMP_CALL(sub_15036430); /* 0x15034CB3: call 0x15036430 */
    RECOMP_FLAGS_IN();
    MEM32(eax) = esi; /* 0x15034CB8: mov dword ptr [eax], esi */
L_15034CBA:
    _flag_a = (uint32_t)((eax | 0xFFFFFFFFu)); _flag_b = (uint32_t)((eax | 0xFFFFFFFFu));
    eax = eax | 0xFFFFFFFFu; /* 0x15034CBA: or eax, 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_15034D34; /* 0x15034CBD: jmp 0x15034d34 */
L_15034CBF:
    eax = MEM32(ebp + (-0x144)); /* 0x15034CBF: mov eax, dword ptr [ebp - 0x144] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x15034CC5: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp eax, 0x80u */ /* 0x15034CC7: cmp eax, 0x80 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x80u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) { eax = ecx; } /* 0x15034CCC: cmove eax, ecx */
    MEM32(esi) = eax; /* 0x15034CCF: mov dword ptr [esi], eax */
    eax = ebp + (-0x140); /* 0x15034CD1: lea eax, [ebp - 0x140] */
    PUSH32(esp, eax); /* 0x15034CD7: push eax */
    RECOMP_CALL(sub_15034B5F); /* 0x15034CD8: call 0x15034b5f */
    RECOMP_FLAGS_IN();
    MEM32(esi + 0x4) = eax; /* 0x15034CDD: mov dword ptr [esi + 4], eax */
    eax = ebp + (-0x138); /* 0x15034CE0: lea eax, [ebp - 0x138] */
    PUSH32(esp, eax); /* 0x15034CE6: push eax */
    RECOMP_CALL(sub_15034B5F); /* 0x15034CE7: call 0x15034b5f */
    RECOMP_FLAGS_IN();
    MEM32(esi + 0x8) = eax; /* 0x15034CEC: mov dword ptr [esi + 8], eax */
    eax = ebp + (-0x130); /* 0x15034CEF: lea eax, [ebp - 0x130] */
    PUSH32(esp, eax); /* 0x15034CF5: push eax */
    RECOMP_CALL(sub_15034B5F); /* 0x15034CF6: call 0x15034b5f */
    RECOMP_FLAGS_IN();
    MEM32(esi + 0xC) = eax; /* 0x15034CFB: mov dword ptr [esi + 0xc], eax */
    eax = MEM32(ebp + (-0x124)); /* 0x15034CFE: mov eax, dword ptr [ebp - 0x124] */
    MEM32(esi + 0x10) = eax; /* 0x15034D04: mov dword ptr [esi + 0x10], eax */
    eax = ebp + (-0x118); /* 0x15034D07: lea eax, [ebp - 0x118] */
    PUSH32(esp, eax); /* 0x15034D0D: push eax */
    eax = esi + 0x14; /* 0x15034D0E: lea eax, [esi + 0x14] */
    PUSH32(esp, 0x104u); /* 0x15034D11: push 0x104 */
    PUSH32(esp, eax); /* 0x15034D16: push eax */
    RECOMP_CALL(sub_1508E640); /* 0x15034D17: call 0x1508e640 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x18u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x18u; /* 0x15034D1C: add esp, 0x18 */
    _flag_k = FK_ADD;
    /* test eax, eax */ /* 0x15034D1F: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_15034D32; /* 0x15034D21: je 0x15034d32 */
L_15034D23:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x15034D23: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, eax); /* 0x15034D25: push eax */
    PUSH32(esp, eax); /* 0x15034D26: push eax */
    PUSH32(esp, eax); /* 0x15034D27: push eax */
    PUSH32(esp, eax); /* 0x15034D28: push eax */
    PUSH32(esp, eax); /* 0x15034D29: push eax */
    RECOMP_CALL(sub_1505A11B); /* 0x15034D2A: call 0x1505a11b */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x14u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x14u; /* 0x15034D2F: add esp, 0x14 */
    _flag_k = FK_ADD;
L_15034D32:
    eax = edi; /* 0x15034D32: mov eax, edi */
L_15034D34:
    edi = POP32_VAL(esp); /* 0x15034D34: pop edi */
L_15034D35:
    ecx = MEM32(ebp + (-0x4)); /* 0x15034D35: mov ecx, dword ptr [ebp - 4] */
    _flag_a = (uint32_t)((ecx ^ ebp)); _flag_b = (uint32_t)((ecx ^ ebp));
    ecx = ecx ^ ebp; /* 0x15034D38: xor ecx, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    esi = POP32_VAL(esp); /* 0x15034D3A: pop esi */
    RECOMP_CALL(sub_1505E540); /* 0x15034D3B: call 0x1505e540 */
    RECOMP_FLAGS_IN();
    esp = ebp; ebp = POP32_VAL(esp); /* 0x15034D40: leave  */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x15034D41: ret  */
    RECOMP_REGS_OUT();
}

void sub_15034C21(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x15034C21u);

L_15034C21:
    edi = edi; /* 0x15034C21: mov edi, edi */
    PUSH32(esp, ebp); /* 0x15034C23: push ebp */
    ebp = esp; /* 0x15034C24: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x144u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x144u; /* 0x15034C26: sub esp, 0x144 */
    _flag_k = FK_CMP;
    eax = MEM32(0x150BD340); /* 0x15034C2C: mov eax, dword ptr [0x150bd340] */
    _flag_a = (uint32_t)((eax ^ ebp)); _flag_b = (uint32_t)((eax ^ ebp));
    eax = eax ^ ebp; /* 0x15034C31: xor eax, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x4)) = eax; /* 0x15034C33: mov dword ptr [ebp - 4], eax */
    eax = MEM32(ebp + 0x8); /* 0x15034C36: mov eax, dword ptr [ebp + 8] */
    PUSH32(esp, esi); /* 0x15034C39: push esi */
    esi = MEM32(ebp + 0xC); /* 0x15034C3A: mov esi, dword ptr [ebp + 0xc] */
    /* test esi, esi */ /* 0x15034C3D: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_15034C63; /* 0x15034C3F: jne 0x15034c63 */
L_15034C41:
    RECOMP_CALL(sub_15036430); /* 0x15034C41: call 0x15036430 */
    RECOMP_FLAGS_IN();
    MEM32(eax) = 0x16u; /* 0x15034C46: mov dword ptr [eax], 0x16 */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x15034C4C: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, eax); /* 0x15034C4E: push eax */
    PUSH32(esp, eax); /* 0x15034C4F: push eax */
    PUSH32(esp, eax); /* 0x15034C50: push eax */
    PUSH32(esp, eax); /* 0x15034C51: push eax */
    PUSH32(esp, eax); /* 0x15034C52: push eax */
    RECOMP_CALL(sub_1505A110); /* 0x15034C53: call 0x1505a110 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x14u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x14u; /* 0x15034C58: add esp, 0x14 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)((eax | 0xFFFFFFFFu)); _flag_b = (uint32_t)((eax | 0xFFFFFFFFu));
    eax = eax | 0xFFFFFFFFu; /* 0x15034C5B: or eax, 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_15034D35; /* 0x15034C5E: jmp 0x15034d35 */
L_15034C63:
    /* test eax, eax */ /* 0x15034C63: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_Z(_flag_a, _flag_b)) goto L_15034C41; /* 0x15034C65: je 0x15034c41 */
L_15034C67:
    PUSH32(esp, edi); /* 0x15034C67: push edi */
    ecx = ebp + (-0x144); /* 0x15034C68: lea ecx, [ebp - 0x144] */
    PUSH32(esp, ecx); /* 0x15034C6E: push ecx */
    PUSH32(esp, eax); /* 0x15034C6F: push eax */
    RECOMP_ICALL(MEM32(0x150C0114)); /* 0x15034C70: call dword ptr [0x150c0114] */
    RECOMP_FLAGS_IN();
    edi = eax; /* 0x15034C76: mov edi, eax */
    /* cmp edi, 0xFFFFFFFFu */ /* 0x15034C78: cmp edi, -1 */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(0xFFFFFFFFu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_15034CBF; /* 0x15034C7B: jne 0x15034cbf */
L_15034C7D:
    RECOMP_ICALL(MEM32(0x150C006C)); /* 0x15034C7D: call dword ptr [0x150c006c] */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 2); /* 0x15034C83: push 2 */
    esi = POP32_VAL(esp); /* 0x15034C85: pop esi */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - esi; /* 0x15034C86: sub eax, esi */
    _flag_k = FK_CMP;
    if (/* sub result */ CMP_EQ(_flag_a, _flag_b)) goto L_15034CB3; /* 0x15034C88: je 0x15034cb3 */
L_15034C8A:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - 1; /* 0x15034C8A: sub eax, 1 */
    _flag_k = FK_CMP;
    if (/* sub result */ CMP_EQ(_flag_a, _flag_b)) goto L_15034CB3; /* 0x15034C8D: je 0x15034cb3 */
L_15034C8F:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(5);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - 5; /* 0x15034C8F: sub eax, 5 */
    _flag_k = FK_CMP;
    if (/* sub result */ CMP_EQ(_flag_a, _flag_b)) goto L_15034CA6; /* 0x15034C92: je 0x15034ca6 */
L_15034C94:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xAu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - 0xAu; /* 0x15034C94: sub eax, 0xa */
    _flag_k = FK_CMP;
    if (/* sub result */ CMP_EQ(_flag_a, _flag_b)) goto L_15034CB3; /* 0x15034C97: je 0x15034cb3 */
L_15034C99:
    RECOMP_CALL(sub_15036430); /* 0x15034C99: call 0x15036430 */
    RECOMP_FLAGS_IN();
    MEM32(eax) = 0x16u; /* 0x15034C9E: mov dword ptr [eax], 0x16 */
    goto L_15034CBA; /* 0x15034CA4: jmp 0x15034cba */
L_15034CA6:
    RECOMP_CALL(sub_15036430); /* 0x15034CA6: call 0x15036430 */
    RECOMP_FLAGS_IN();
    MEM32(eax) = 0xCu; /* 0x15034CAB: mov dword ptr [eax], 0xc */
    goto L_15034CBA; /* 0x15034CB1: jmp 0x15034cba */
L_15034CB3:
    RECOMP_CALL(sub_15036430); /* 0x15034CB3: call 0x15036430 */
    RECOMP_FLAGS_IN();
    MEM32(eax) = esi; /* 0x15034CB8: mov dword ptr [eax], esi */
L_15034CBA:
    _flag_a = (uint32_t)((eax | 0xFFFFFFFFu)); _flag_b = (uint32_t)((eax | 0xFFFFFFFFu));
    eax = eax | 0xFFFFFFFFu; /* 0x15034CBA: or eax, 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_15034D34; /* 0x15034CBD: jmp 0x15034d34 */
L_15034CBF:
    eax = MEM32(ebp + (-0x144)); /* 0x15034CBF: mov eax, dword ptr [ebp - 0x144] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x15034CC5: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp eax, 0x80u */ /* 0x15034CC7: cmp eax, 0x80 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x80u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) { eax = ecx; } /* 0x15034CCC: cmove eax, ecx */
    MEM32(esi) = eax; /* 0x15034CCF: mov dword ptr [esi], eax */
    eax = ebp + (-0x140); /* 0x15034CD1: lea eax, [ebp - 0x140] */
    PUSH32(esp, eax); /* 0x15034CD7: push eax */
    RECOMP_CALL(sub_15034B5F); /* 0x15034CD8: call 0x15034b5f */
    RECOMP_FLAGS_IN();
    MEM32(esi + 0x4) = eax; /* 0x15034CDD: mov dword ptr [esi + 4], eax */
    eax = ebp + (-0x138); /* 0x15034CE0: lea eax, [ebp - 0x138] */
    PUSH32(esp, eax); /* 0x15034CE6: push eax */
    RECOMP_CALL(sub_15034B5F); /* 0x15034CE7: call 0x15034b5f */
    RECOMP_FLAGS_IN();
    MEM32(esi + 0x8) = eax; /* 0x15034CEC: mov dword ptr [esi + 8], eax */
    eax = ebp + (-0x130); /* 0x15034CEF: lea eax, [ebp - 0x130] */
    PUSH32(esp, eax); /* 0x15034CF5: push eax */
    RECOMP_CALL(sub_15034B5F); /* 0x15034CF6: call 0x15034b5f */
    RECOMP_FLAGS_IN();
    MEM32(esi + 0xC) = eax; /* 0x15034CFB: mov dword ptr [esi + 0xc], eax */
    eax = MEM32(ebp + (-0x124)); /* 0x15034CFE: mov eax, dword ptr [ebp - 0x124] */
    MEM32(esi + 0x10) = eax; /* 0x15034D04: mov dword ptr [esi + 0x10], eax */
    eax = ebp + (-0x118); /* 0x15034D07: lea eax, [ebp - 0x118] */
    PUSH32(esp, eax); /* 0x15034D0D: push eax */
    eax = esi + 0x14; /* 0x15034D0E: lea eax, [esi + 0x14] */
    PUSH32(esp, 0x104u); /* 0x15034D11: push 0x104 */
    PUSH32(esp, eax); /* 0x15034D16: push eax */
    RECOMP_CALL(sub_1508E640); /* 0x15034D17: call 0x1508e640 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x18u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x18u; /* 0x15034D1C: add esp, 0x18 */
    _flag_k = FK_ADD;
    /* test eax, eax */ /* 0x15034D1F: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_15034D32; /* 0x15034D21: je 0x15034d32 */
L_15034D23:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x15034D23: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, eax); /* 0x15034D25: push eax */
    PUSH32(esp, eax); /* 0x15034D26: push eax */
    PUSH32(esp, eax); /* 0x15034D27: push eax */
    PUSH32(esp, eax); /* 0x15034D28: push eax */
    PUSH32(esp, eax); /* 0x15034D29: push eax */
    RECOMP_CALL(sub_1505A11B); /* 0x15034D2A: call 0x1505a11b */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x14u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x14u; /* 0x15034D2F: add esp, 0x14 */
    _flag_k = FK_ADD;
L_15034D32:
    eax = edi; /* 0x15034D32: mov eax, edi */
L_15034D34:
    edi = POP32_VAL(esp); /* 0x15034D34: pop edi */
L_15034D35:
    ecx = MEM32(ebp + (-0x4)); /* 0x15034D35: mov ecx, dword ptr [ebp - 4] */
    _flag_a = (uint32_t)((ecx ^ ebp)); _flag_b = (uint32_t)((ecx ^ ebp));
    ecx = ecx ^ ebp; /* 0x15034D38: xor ecx, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    esi = POP32_VAL(esp); /* 0x15034D3A: pop esi */
    RECOMP_CALL(sub_1505E540); /* 0x15034D3B: call 0x1505e540 */
    RECOMP_FLAGS_IN();
    esp = ebp; ebp = POP32_VAL(esp); /* 0x15034D40: leave  */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x15034D41: ret  */
    RECOMP_REGS_OUT();
}

void sub_15034D50(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x15034D50u);

L_15034D50:
    edi = edi; /* 0x15034D50: mov edi, edi */
    PUSH32(esp, ebp); /* 0x15034D52: push ebp */
    ebp = esp; /* 0x15034D53: mov ebp, esp */
    ebp = POP32_VAL(esp); /* 0x15034D55: pop ebp */
    goto L_15034D61; /* 0x15034D56: jmp 0x15034d61 */
L_15034D61:
    edi = edi; /* 0x15034D61: mov edi, edi */
    PUSH32(esp, ebp); /* 0x15034D63: push ebp */
    ebp = esp; /* 0x15034D64: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x144u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x144u; /* 0x15034D66: sub esp, 0x144 */
    _flag_k = FK_CMP;
    eax = MEM32(0x150BD340); /* 0x15034D6C: mov eax, dword ptr [0x150bd340] */
    _flag_a = (uint32_t)((eax ^ ebp)); _flag_b = (uint32_t)((eax ^ ebp));
    eax = eax ^ ebp; /* 0x15034D71: xor eax, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x4)) = eax; /* 0x15034D73: mov dword ptr [ebp - 4], eax */
    eax = MEM32(ebp + 0x8); /* 0x15034D76: mov eax, dword ptr [ebp + 8] */
    PUSH32(esp, esi); /* 0x15034D79: push esi */
    esi = MEM32(ebp + 0xC); /* 0x15034D7A: mov esi, dword ptr [ebp + 0xc] */
    /* cmp eax, 0xFFFFFFFFu */ /* 0x15034D7D: cmp eax, -1 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xFFFFFFFFu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_15034DA4; /* 0x15034D80: jne 0x15034da4 */
L_15034D82:
    RECOMP_CALL(sub_15036430); /* 0x15034D82: call 0x15036430 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x15034D87: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, ecx); /* 0x15034D89: push ecx */
    PUSH32(esp, ecx); /* 0x15034D8A: push ecx */
    PUSH32(esp, ecx); /* 0x15034D8B: push ecx */
    PUSH32(esp, ecx); /* 0x15034D8C: push ecx */
    PUSH32(esp, ecx); /* 0x15034D8D: push ecx */
    MEM32(eax) = 0x16u; /* 0x15034D8E: mov dword ptr [eax], 0x16 */
    RECOMP_CALL(sub_1505A110); /* 0x15034D94: call 0x1505a110 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x14u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x14u; /* 0x15034D99: add esp, 0x14 */
    _flag_k = FK_ADD;
L_15034D9C:
    _flag_a = (uint32_t)((eax | 0xFFFFFFFFu)); _flag_b = (uint32_t)((eax | 0xFFFFFFFFu));
    eax = eax | 0xFFFFFFFFu; /* 0x15034D9C: or eax, 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_15034E6E; /* 0x15034D9F: jmp 0x15034e6e */
L_15034DA4:
    /* test esi, esi */ /* 0x15034DA4: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_Z(_flag_a, _flag_b)) goto L_15034D82; /* 0x15034DA6: je 0x15034d82 */
L_15034DA8:
    ecx = ebp + (-0x144); /* 0x15034DA8: lea ecx, [ebp - 0x144] */
    PUSH32(esp, ecx); /* 0x15034DAE: push ecx */
    PUSH32(esp, eax); /* 0x15034DAF: push eax */
    RECOMP_ICALL(MEM32(0x150C00A8)); /* 0x15034DB0: call dword ptr [0x150c00a8] */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x15034DB6: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_15034DF9; /* 0x15034DB8: jne 0x15034df9 */
L_15034DBA:
    RECOMP_ICALL(MEM32(0x150C006C)); /* 0x15034DBA: call dword ptr [0x150c006c] */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 2); /* 0x15034DC0: push 2 */
    esi = POP32_VAL(esp); /* 0x15034DC2: pop esi */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - esi; /* 0x15034DC3: sub eax, esi */
    _flag_k = FK_CMP;
    if (/* sub result */ CMP_EQ(_flag_a, _flag_b)) goto L_15034DF0; /* 0x15034DC5: je 0x15034df0 */
L_15034DC7:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - 1; /* 0x15034DC7: sub eax, 1 */
    _flag_k = FK_CMP;
    if (/* sub result */ CMP_EQ(_flag_a, _flag_b)) goto L_15034DF0; /* 0x15034DCA: je 0x15034df0 */
L_15034DCC:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(5);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - 5; /* 0x15034DCC: sub eax, 5 */
    _flag_k = FK_CMP;
    if (/* sub result */ CMP_EQ(_flag_a, _flag_b)) goto L_15034DE3; /* 0x15034DCF: je 0x15034de3 */
L_15034DD1:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xAu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - 0xAu; /* 0x15034DD1: sub eax, 0xa */
    _flag_k = FK_CMP;
    if (/* sub result */ CMP_EQ(_flag_a, _flag_b)) goto L_15034DF0; /* 0x15034DD4: je 0x15034df0 */
L_15034DD6:
    RECOMP_CALL(sub_15036430); /* 0x15034DD6: call 0x15036430 */
    RECOMP_FLAGS_IN();
    MEM32(eax) = 0x16u; /* 0x15034DDB: mov dword ptr [eax], 0x16 */
    RECOMP_BACKEDGE();
    goto L_15034D9C; /* 0x15034DE1: jmp 0x15034d9c */
L_15034DE3:
    RECOMP_CALL(sub_15036430); /* 0x15034DE3: call 0x15036430 */
    RECOMP_FLAGS_IN();
    MEM32(eax) = 0xCu; /* 0x15034DE8: mov dword ptr [eax], 0xc */
    RECOMP_BACKEDGE();
    goto L_15034D9C; /* 0x15034DEE: jmp 0x15034d9c */
L_15034DF0:
    RECOMP_CALL(sub_15036430); /* 0x15034DF0: call 0x15036430 */
    RECOMP_FLAGS_IN();
    MEM32(eax) = esi; /* 0x15034DF5: mov dword ptr [eax], esi */
    RECOMP_BACKEDGE();
    goto L_15034D9C; /* 0x15034DF7: jmp 0x15034d9c */
L_15034DF9:
    eax = MEM32(ebp + (-0x144)); /* 0x15034DF9: mov eax, dword ptr [ebp - 0x144] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x15034DFF: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp eax, 0x80u */ /* 0x15034E01: cmp eax, 0x80 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x80u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) { eax = ecx; } /* 0x15034E06: cmove eax, ecx */
    MEM32(esi) = eax; /* 0x15034E09: mov dword ptr [esi], eax */
    eax = ebp + (-0x140); /* 0x15034E0B: lea eax, [ebp - 0x140] */
    PUSH32(esp, eax); /* 0x15034E11: push eax */
    RECOMP_CALL(sub_15034B5F); /* 0x15034E12: call 0x15034b5f */
    RECOMP_FLAGS_IN();
    MEM32(esi + 0x4) = eax; /* 0x15034E17: mov dword ptr [esi + 4], eax */
    eax = ebp + (-0x138); /* 0x15034E1A: lea eax, [ebp - 0x138] */
    PUSH32(esp, eax); /* 0x15034E20: push eax */
    RECOMP_CALL(sub_15034B5F); /* 0x15034E21: call 0x15034b5f */
    RECOMP_FLAGS_IN();
    MEM32(esi + 0x8) = eax; /* 0x15034E26: mov dword ptr [esi + 8], eax */
    eax = ebp + (-0x130); /* 0x15034E29: lea eax, [ebp - 0x130] */
    PUSH32(esp, eax); /* 0x15034E2F: push eax */
    RECOMP_CALL(sub_15034B5F); /* 0x15034E30: call 0x15034b5f */
    RECOMP_FLAGS_IN();
    MEM32(esi + 0xC) = eax; /* 0x15034E35: mov dword ptr [esi + 0xc], eax */
    eax = MEM32(ebp + (-0x124)); /* 0x15034E38: mov eax, dword ptr [ebp - 0x124] */
    MEM32(esi + 0x10) = eax; /* 0x15034E3E: mov dword ptr [esi + 0x10], eax */
    eax = ebp + (-0x118); /* 0x15034E41: lea eax, [ebp - 0x118] */
    PUSH32(esp, eax); /* 0x15034E47: push eax */
    eax = esi + 0x14; /* 0x15034E48: lea eax, [esi + 0x14] */
    PUSH32(esp, 0x104u); /* 0x15034E4B: push 0x104 */
    PUSH32(esp, eax); /* 0x15034E50: push eax */
    RECOMP_CALL(sub_1508E640); /* 0x15034E51: call 0x1508e640 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x18u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x18u; /* 0x15034E56: add esp, 0x18 */
    _flag_k = FK_ADD;
    /* test eax, eax */ /* 0x15034E59: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_15034E6C; /* 0x15034E5B: je 0x15034e6c */
L_15034E5D:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x15034E5D: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, ecx); /* 0x15034E5F: push ecx */
    PUSH32(esp, ecx); /* 0x15034E60: push ecx */
    PUSH32(esp, ecx); /* 0x15034E61: push ecx */
    PUSH32(esp, ecx); /* 0x15034E62: push ecx */
    PUSH32(esp, ecx); /* 0x15034E63: push ecx */
    RECOMP_CALL(sub_1505A11B); /* 0x15034E64: call 0x1505a11b */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x14u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x14u; /* 0x15034E69: add esp, 0x14 */
    _flag_k = FK_ADD;
L_15034E6C:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x15034E6C: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
L_15034E6E:
    ecx = MEM32(ebp + (-0x4)); /* 0x15034E6E: mov ecx, dword ptr [ebp - 4] */
    _flag_a = (uint32_t)((ecx ^ ebp)); _flag_b = (uint32_t)((ecx ^ ebp));
    ecx = ecx ^ ebp; /* 0x15034E71: xor ecx, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    esi = POP32_VAL(esp); /* 0x15034E73: pop esi */
    RECOMP_CALL(sub_1505E540); /* 0x15034E74: call 0x1505e540 */
    RECOMP_FLAGS_IN();
    esp = ebp; ebp = POP32_VAL(esp); /* 0x15034E79: leave  */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x15034E7A: ret  */
    RECOMP_REGS_OUT();
}

void sub_15034D61(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x15034D61u);

L_15034D61:
    edi = edi; /* 0x15034D61: mov edi, edi */
    PUSH32(esp, ebp); /* 0x15034D63: push ebp */
    ebp = esp; /* 0x15034D64: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x144u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x144u; /* 0x15034D66: sub esp, 0x144 */
    _flag_k = FK_CMP;
    eax = MEM32(0x150BD340); /* 0x15034D6C: mov eax, dword ptr [0x150bd340] */
    _flag_a = (uint32_t)((eax ^ ebp)); _flag_b = (uint32_t)((eax ^ ebp));
    eax = eax ^ ebp; /* 0x15034D71: xor eax, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x4)) = eax; /* 0x15034D73: mov dword ptr [ebp - 4], eax */
    eax = MEM32(ebp + 0x8); /* 0x15034D76: mov eax, dword ptr [ebp + 8] */
    PUSH32(esp, esi); /* 0x15034D79: push esi */
    esi = MEM32(ebp + 0xC); /* 0x15034D7A: mov esi, dword ptr [ebp + 0xc] */
    /* cmp eax, 0xFFFFFFFFu */ /* 0x15034D7D: cmp eax, -1 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xFFFFFFFFu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_15034DA4; /* 0x15034D80: jne 0x15034da4 */
L_15034D82:
    RECOMP_CALL(sub_15036430); /* 0x15034D82: call 0x15036430 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x15034D87: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, ecx); /* 0x15034D89: push ecx */
    PUSH32(esp, ecx); /* 0x15034D8A: push ecx */
    PUSH32(esp, ecx); /* 0x15034D8B: push ecx */
    PUSH32(esp, ecx); /* 0x15034D8C: push ecx */
    PUSH32(esp, ecx); /* 0x15034D8D: push ecx */
    MEM32(eax) = 0x16u; /* 0x15034D8E: mov dword ptr [eax], 0x16 */
    RECOMP_CALL(sub_1505A110); /* 0x15034D94: call 0x1505a110 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x14u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x14u; /* 0x15034D99: add esp, 0x14 */
    _flag_k = FK_ADD;
L_15034D9C:
    _flag_a = (uint32_t)((eax | 0xFFFFFFFFu)); _flag_b = (uint32_t)((eax | 0xFFFFFFFFu));
    eax = eax | 0xFFFFFFFFu; /* 0x15034D9C: or eax, 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_15034E6E; /* 0x15034D9F: jmp 0x15034e6e */
L_15034DA4:
    /* test esi, esi */ /* 0x15034DA4: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_Z(_flag_a, _flag_b)) goto L_15034D82; /* 0x15034DA6: je 0x15034d82 */
L_15034DA8:
    ecx = ebp + (-0x144); /* 0x15034DA8: lea ecx, [ebp - 0x144] */
    PUSH32(esp, ecx); /* 0x15034DAE: push ecx */
    PUSH32(esp, eax); /* 0x15034DAF: push eax */
    RECOMP_ICALL(MEM32(0x150C00A8)); /* 0x15034DB0: call dword ptr [0x150c00a8] */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x15034DB6: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_15034DF9; /* 0x15034DB8: jne 0x15034df9 */
L_15034DBA:
    RECOMP_ICALL(MEM32(0x150C006C)); /* 0x15034DBA: call dword ptr [0x150c006c] */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 2); /* 0x15034DC0: push 2 */
    esi = POP32_VAL(esp); /* 0x15034DC2: pop esi */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - esi; /* 0x15034DC3: sub eax, esi */
    _flag_k = FK_CMP;
    if (/* sub result */ CMP_EQ(_flag_a, _flag_b)) goto L_15034DF0; /* 0x15034DC5: je 0x15034df0 */
L_15034DC7:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - 1; /* 0x15034DC7: sub eax, 1 */
    _flag_k = FK_CMP;
    if (/* sub result */ CMP_EQ(_flag_a, _flag_b)) goto L_15034DF0; /* 0x15034DCA: je 0x15034df0 */
L_15034DCC:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(5);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - 5; /* 0x15034DCC: sub eax, 5 */
    _flag_k = FK_CMP;
    if (/* sub result */ CMP_EQ(_flag_a, _flag_b)) goto L_15034DE3; /* 0x15034DCF: je 0x15034de3 */
L_15034DD1:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xAu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - 0xAu; /* 0x15034DD1: sub eax, 0xa */
    _flag_k = FK_CMP;
    if (/* sub result */ CMP_EQ(_flag_a, _flag_b)) goto L_15034DF0; /* 0x15034DD4: je 0x15034df0 */
L_15034DD6:
    RECOMP_CALL(sub_15036430); /* 0x15034DD6: call 0x15036430 */
    RECOMP_FLAGS_IN();
    MEM32(eax) = 0x16u; /* 0x15034DDB: mov dword ptr [eax], 0x16 */
    RECOMP_BACKEDGE();
    goto L_15034D9C; /* 0x15034DE1: jmp 0x15034d9c */
L_15034DE3:
    RECOMP_CALL(sub_15036430); /* 0x15034DE3: call 0x15036430 */
    RECOMP_FLAGS_IN();
    MEM32(eax) = 0xCu; /* 0x15034DE8: mov dword ptr [eax], 0xc */
    RECOMP_BACKEDGE();
    goto L_15034D9C; /* 0x15034DEE: jmp 0x15034d9c */
L_15034DF0:
    RECOMP_CALL(sub_15036430); /* 0x15034DF0: call 0x15036430 */
    RECOMP_FLAGS_IN();
    MEM32(eax) = esi; /* 0x15034DF5: mov dword ptr [eax], esi */
    RECOMP_BACKEDGE();
    goto L_15034D9C; /* 0x15034DF7: jmp 0x15034d9c */
L_15034DF9:
    eax = MEM32(ebp + (-0x144)); /* 0x15034DF9: mov eax, dword ptr [ebp - 0x144] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x15034DFF: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp eax, 0x80u */ /* 0x15034E01: cmp eax, 0x80 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x80u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) { eax = ecx; } /* 0x15034E06: cmove eax, ecx */
    MEM32(esi) = eax; /* 0x15034E09: mov dword ptr [esi], eax */
    eax = ebp + (-0x140); /* 0x15034E0B: lea eax, [ebp - 0x140] */
    PUSH32(esp, eax); /* 0x15034E11: push eax */
    RECOMP_CALL(sub_15034B5F); /* 0x15034E12: call 0x15034b5f */
    RECOMP_FLAGS_IN();
    MEM32(esi + 0x4) = eax; /* 0x15034E17: mov dword ptr [esi + 4], eax */
    eax = ebp + (-0x138); /* 0x15034E1A: lea eax, [ebp - 0x138] */
    PUSH32(esp, eax); /* 0x15034E20: push eax */
    RECOMP_CALL(sub_15034B5F); /* 0x15034E21: call 0x15034b5f */
    RECOMP_FLAGS_IN();
    MEM32(esi + 0x8) = eax; /* 0x15034E26: mov dword ptr [esi + 8], eax */
    eax = ebp + (-0x130); /* 0x15034E29: lea eax, [ebp - 0x130] */
    PUSH32(esp, eax); /* 0x15034E2F: push eax */
    RECOMP_CALL(sub_15034B5F); /* 0x15034E30: call 0x15034b5f */
    RECOMP_FLAGS_IN();
    MEM32(esi + 0xC) = eax; /* 0x15034E35: mov dword ptr [esi + 0xc], eax */
    eax = MEM32(ebp + (-0x124)); /* 0x15034E38: mov eax, dword ptr [ebp - 0x124] */
    MEM32(esi + 0x10) = eax; /* 0x15034E3E: mov dword ptr [esi + 0x10], eax */
    eax = ebp + (-0x118); /* 0x15034E41: lea eax, [ebp - 0x118] */
    PUSH32(esp, eax); /* 0x15034E47: push eax */
    eax = esi + 0x14; /* 0x15034E48: lea eax, [esi + 0x14] */
    PUSH32(esp, 0x104u); /* 0x15034E4B: push 0x104 */
    PUSH32(esp, eax); /* 0x15034E50: push eax */
    RECOMP_CALL(sub_1508E640); /* 0x15034E51: call 0x1508e640 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x18u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x18u; /* 0x15034E56: add esp, 0x18 */
    _flag_k = FK_ADD;
    /* test eax, eax */ /* 0x15034E59: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_15034E6C; /* 0x15034E5B: je 0x15034e6c */
L_15034E5D:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x15034E5D: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, ecx); /* 0x15034E5F: push ecx */
    PUSH32(esp, ecx); /* 0x15034E60: push ecx */
    PUSH32(esp, ecx); /* 0x15034E61: push ecx */
    PUSH32(esp, ecx); /* 0x15034E62: push ecx */
    PUSH32(esp, ecx); /* 0x15034E63: push ecx */
    RECOMP_CALL(sub_1505A11B); /* 0x15034E64: call 0x1505a11b */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x14u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x14u; /* 0x15034E69: add esp, 0x14 */
    _flag_k = FK_ADD;
L_15034E6C:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x15034E6C: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
L_15034E6E:
    ecx = MEM32(ebp + (-0x4)); /* 0x15034E6E: mov ecx, dword ptr [ebp - 4] */
    _flag_a = (uint32_t)((ecx ^ ebp)); _flag_b = (uint32_t)((ecx ^ ebp));
    ecx = ecx ^ ebp; /* 0x15034E71: xor ecx, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    esi = POP32_VAL(esp); /* 0x15034E73: pop esi */
    RECOMP_CALL(sub_1505E540); /* 0x15034E74: call 0x1505e540 */
    RECOMP_FLAGS_IN();
    esp = ebp; ebp = POP32_VAL(esp); /* 0x15034E79: leave  */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x15034E7A: ret  */
    RECOMP_REGS_OUT();
}

void sub_15034E90(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x15034E90u);

L_15034E90:
    edi = edi; /* 0x15034E90: mov edi, edi */
    PUSH32(esp, ebp); /* 0x15034E92: push ebp */
    ebp = esp; /* 0x15034E93: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x144u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x144u; /* 0x15034E95: sub esp, 0x144 */
    _flag_k = FK_CMP;
    eax = MEM32(0x150BD340); /* 0x15034E9B: mov eax, dword ptr [0x150bd340] */
    _flag_a = (uint32_t)((eax ^ ebp)); _flag_b = (uint32_t)((eax ^ ebp));
    eax = eax ^ ebp; /* 0x15034EA0: xor eax, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x4)) = eax; /* 0x15034EA2: mov dword ptr [ebp - 4], eax */
    eax = MEM32(ebp + 0x8); /* 0x15034EA5: mov eax, dword ptr [ebp + 8] */
    PUSH32(esp, esi); /* 0x15034EA8: push esi */
    PUSH32(esp, edi); /* 0x15034EA9: push edi */
    edi = MEM32(ebp + 0xC); /* 0x15034EAA: mov edi, dword ptr [ebp + 0xc] */
    /* test edi, edi */ /* 0x15034EAD: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_15034ED3; /* 0x15034EAF: jne 0x15034ed3 */
L_15034EB1:
    RECOMP_CALL(sub_15036430); /* 0x15034EB1: call 0x15036430 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    esi = 0; /* 0x15034EB6: xor esi, esi */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, esi); /* 0x15034EB8: push esi */
    PUSH32(esp, esi); /* 0x15034EB9: push esi */
    PUSH32(esp, esi); /* 0x15034EBA: push esi */
    PUSH32(esp, esi); /* 0x15034EBB: push esi */
    PUSH32(esp, esi); /* 0x15034EBC: push esi */
    MEM32(eax) = 0x16u; /* 0x15034EBD: mov dword ptr [eax], 0x16 */
    RECOMP_CALL(sub_1505A110); /* 0x15034EC3: call 0x1505a110 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x14u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x14u; /* 0x15034EC8: add esp, 0x14 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)((eax | 0xFFFFFFFFu)); _flag_b = (uint32_t)((eax | 0xFFFFFFFFu));
    eax = eax | 0xFFFFFFFFu; /* 0x15034ECB: or eax, 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_15034FBF; /* 0x15034ECE: jmp 0x15034fbf */
L_15034ED3:
    /* test eax, eax */ /* 0x15034ED3: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_Z(_flag_a, _flag_b)) goto L_15034EB1; /* 0x15034ED5: je 0x15034eb1 */
L_15034ED7:
    PUSH32(esp, ebx); /* 0x15034ED7: push ebx */
    ecx = ebp + (-0x144); /* 0x15034ED8: lea ecx, [ebp - 0x144] */
    PUSH32(esp, ecx); /* 0x15034EDE: push ecx */
    PUSH32(esp, eax); /* 0x15034EDF: push eax */
    RECOMP_ICALL(MEM32(0x150C0114)); /* 0x15034EE0: call dword ptr [0x150c0114] */
    RECOMP_FLAGS_IN();
    ebx = eax; /* 0x15034EE6: mov ebx, eax */
    /* cmp ebx, 0xFFFFFFFFu */ /* 0x15034EE8: cmp ebx, -1 */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(0xFFFFFFFFu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_15034F32; /* 0x15034EEB: jne 0x15034f32 */
L_15034EED:
    RECOMP_ICALL(MEM32(0x150C006C)); /* 0x15034EED: call dword ptr [0x150c006c] */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 2); /* 0x15034EF3: push 2 */
    esi = POP32_VAL(esp); /* 0x15034EF5: pop esi */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - esi; /* 0x15034EF6: sub eax, esi */
    _flag_k = FK_CMP;
    if (/* sub result */ CMP_EQ(_flag_a, _flag_b)) goto L_15034F23; /* 0x15034EF8: je 0x15034f23 */
L_15034EFA:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - 1; /* 0x15034EFA: sub eax, 1 */
    _flag_k = FK_CMP;
    if (/* sub result */ CMP_EQ(_flag_a, _flag_b)) goto L_15034F23; /* 0x15034EFD: je 0x15034f23 */
L_15034EFF:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(5);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - 5; /* 0x15034EFF: sub eax, 5 */
    _flag_k = FK_CMP;
    if (/* sub result */ CMP_EQ(_flag_a, _flag_b)) goto L_15034F16; /* 0x15034F02: je 0x15034f16 */
L_15034F04:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xAu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - 0xAu; /* 0x15034F04: sub eax, 0xa */
    _flag_k = FK_CMP;
    if (/* sub result */ CMP_EQ(_flag_a, _flag_b)) goto L_15034F23; /* 0x15034F07: je 0x15034f23 */
L_15034F09:
    RECOMP_CALL(sub_15036430); /* 0x15034F09: call 0x15036430 */
    RECOMP_FLAGS_IN();
    MEM32(eax) = 0x16u; /* 0x15034F0E: mov dword ptr [eax], 0x16 */
    goto L_15034F2A; /* 0x15034F14: jmp 0x15034f2a */
L_15034F16:
    RECOMP_CALL(sub_15036430); /* 0x15034F16: call 0x15036430 */
    RECOMP_FLAGS_IN();
    MEM32(eax) = 0xCu; /* 0x15034F1B: mov dword ptr [eax], 0xc */
    goto L_15034F2A; /* 0x15034F21: jmp 0x15034f2a */
L_15034F23:
    RECOMP_CALL(sub_15036430); /* 0x15034F23: call 0x15036430 */
    RECOMP_FLAGS_IN();
    MEM32(eax) = esi; /* 0x15034F28: mov dword ptr [eax], esi */
L_15034F2A:
    _flag_a = (uint32_t)((eax | 0xFFFFFFFFu)); _flag_b = (uint32_t)((eax | 0xFFFFFFFFu));
    eax = eax | 0xFFFFFFFFu; /* 0x15034F2A: or eax, 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_15034FBE; /* 0x15034F2D: jmp 0x15034fbe */
L_15034F32:
    eax = MEM32(ebp + (-0x144)); /* 0x15034F32: mov eax, dword ptr [ebp - 0x144] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x15034F38: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp eax, 0x80u */ /* 0x15034F3A: cmp eax, 0x80 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x80u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) { eax = ecx; } /* 0x15034F3F: cmove eax, ecx */
    MEM32(edi) = eax; /* 0x15034F42: mov dword ptr [edi], eax */
    eax = ebp + (-0x140); /* 0x15034F44: lea eax, [ebp - 0x140] */
    PUSH32(esp, eax); /* 0x15034F4A: push eax */
    RECOMP_CALL(sub_15035C71); /* 0x15034F4B: call 0x15035c71 */
    RECOMP_FLAGS_IN();
    MEM32(edi + 0x8) = eax; /* 0x15034F50: mov dword ptr [edi + 8], eax */
    eax = ebp + (-0x138); /* 0x15034F53: lea eax, [ebp - 0x138] */
    PUSH32(esp, eax); /* 0x15034F59: push eax */
    MEM32(edi + 0xC) = edx; /* 0x15034F5A: mov dword ptr [edi + 0xc], edx */
    RECOMP_CALL(sub_15035C71); /* 0x15034F5D: call 0x15035c71 */
    RECOMP_FLAGS_IN();
    MEM32(edi + 0x10) = eax; /* 0x15034F62: mov dword ptr [edi + 0x10], eax */
    eax = ebp + (-0x130); /* 0x15034F65: lea eax, [ebp - 0x130] */
    PUSH32(esp, eax); /* 0x15034F6B: push eax */
    MEM32(edi + 0x14) = edx; /* 0x15034F6C: mov dword ptr [edi + 0x14], edx */
    RECOMP_CALL(sub_15035C71); /* 0x15034F6F: call 0x15035c71 */
    RECOMP_FLAGS_IN();
    ecx = MEM32(ebp + (-0x128)); /* 0x15034F74: mov ecx, dword ptr [ebp - 0x128] */
    MEM32(edi + 0x18) = eax; /* 0x15034F7A: mov dword ptr [edi + 0x18], eax */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x15034F7D: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(ebp + (-0x124)));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + MEM32(ebp + (-0x124)); /* 0x15034F7F: add eax, dword ptr [ebp - 0x124] */
    _flag_k = FK_ADD;
    PUSH32(esp, 0); /* 0x15034F85: push 0 */
    esi = POP32_VAL(esp); /* 0x15034F87: pop esi */
    MEM32(edi + 0x20) = eax; /* 0x15034F88: mov dword ptr [edi + 0x20], eax */
    { uint32_t _aa = ecx, _ab = esi, _ac = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x15034F8B: adc ecx, esi */
      ecx = _aa + _ab + _ac;
      _flag_a = recomp_flags_adc(_aa, _ab, _ac); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    eax = ebp + (-0x118); /* 0x15034F8D: lea eax, [ebp - 0x118] */
    MEM32(edi + 0x1C) = edx; /* 0x15034F93: mov dword ptr [edi + 0x1c], edx */
    PUSH32(esp, eax); /* 0x15034F96: push eax */
    eax = edi + 0x28; /* 0x15034F97: lea eax, [edi + 0x28] */
    MEM32(edi + 0x24) = ecx; /* 0x15034F9A: mov dword ptr [edi + 0x24], ecx */
    PUSH32(esp, 0x104u); /* 0x15034F9D: push 0x104 */
    PUSH32(esp, eax); /* 0x15034FA2: push eax */
    RECOMP_CALL(sub_1508E640); /* 0x15034FA3: call 0x1508e640 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x18u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x18u; /* 0x15034FA8: add esp, 0x18 */
    _flag_k = FK_ADD;
    /* test eax, eax */ /* 0x15034FAB: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_15034FBC; /* 0x15034FAD: je 0x15034fbc */
L_15034FAF:
    PUSH32(esp, esi); /* 0x15034FAF: push esi */
    PUSH32(esp, esi); /* 0x15034FB0: push esi */
    PUSH32(esp, esi); /* 0x15034FB1: push esi */
    PUSH32(esp, esi); /* 0x15034FB2: push esi */
    PUSH32(esp, esi); /* 0x15034FB3: push esi */
    RECOMP_CALL(sub_1505A11B); /* 0x15034FB4: call 0x1505a11b */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x14u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x14u; /* 0x15034FB9: add esp, 0x14 */
    _flag_k = FK_ADD;
L_15034FBC:
    eax = ebx; /* 0x15034FBC: mov eax, ebx */
L_15034FBE:
    ebx = POP32_VAL(esp); /* 0x15034FBE: pop ebx */
L_15034FBF:
    ecx = MEM32(ebp + (-0x4)); /* 0x15034FBF: mov ecx, dword ptr [ebp - 4] */
    edi = POP32_VAL(esp); /* 0x15034FC2: pop edi */
    _flag_a = (uint32_t)((ecx ^ ebp)); _flag_b = (uint32_t)((ecx ^ ebp));
    ecx = ecx ^ ebp; /* 0x15034FC3: xor ecx, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    esi = POP32_VAL(esp); /* 0x15034FC5: pop esi */
    RECOMP_CALL(sub_1505E540); /* 0x15034FC6: call 0x1505e540 */
    RECOMP_FLAGS_IN();
    esp = ebp; ebp = POP32_VAL(esp); /* 0x15034FCB: leave  */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x15034FCC: ret  */
    RECOMP_REGS_OUT();
}

void sub_15034FE0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x15034FE0u);

L_15034FE0:
    edi = edi; /* 0x15034FE0: mov edi, edi */
    PUSH32(esp, ebp); /* 0x15034FE2: push ebp */
    ebp = esp; /* 0x15034FE3: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x144u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x144u; /* 0x15034FE5: sub esp, 0x144 */
    _flag_k = FK_CMP;
    eax = MEM32(0x150BD340); /* 0x15034FEB: mov eax, dword ptr [0x150bd340] */
    _flag_a = (uint32_t)((eax ^ ebp)); _flag_b = (uint32_t)((eax ^ ebp));
    eax = eax ^ ebp; /* 0x15034FF0: xor eax, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x4)) = eax; /* 0x15034FF2: mov dword ptr [ebp - 4], eax */
    eax = MEM32(ebp + 0x8); /* 0x15034FF5: mov eax, dword ptr [ebp + 8] */
    PUSH32(esp, esi); /* 0x15034FF8: push esi */
    PUSH32(esp, edi); /* 0x15034FF9: push edi */
    edi = MEM32(ebp + 0xC); /* 0x15034FFA: mov edi, dword ptr [ebp + 0xc] */
    /* cmp eax, 0xFFFFFFFFu */ /* 0x15034FFD: cmp eax, -1 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xFFFFFFFFu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_15035024; /* 0x15035000: jne 0x15035024 */
L_15035002:
    RECOMP_CALL(sub_15036430); /* 0x15035002: call 0x15036430 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    esi = 0; /* 0x15035007: xor esi, esi */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, esi); /* 0x15035009: push esi */
    PUSH32(esp, esi); /* 0x1503500A: push esi */
    PUSH32(esp, esi); /* 0x1503500B: push esi */
    PUSH32(esp, esi); /* 0x1503500C: push esi */
    PUSH32(esp, esi); /* 0x1503500D: push esi */
    MEM32(eax) = 0x16u; /* 0x1503500E: mov dword ptr [eax], 0x16 */
    RECOMP_CALL(sub_1505A110); /* 0x15035014: call 0x1505a110 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x14u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x14u; /* 0x15035019: add esp, 0x14 */
    _flag_k = FK_ADD;
L_1503501C:
    _flag_a = (uint32_t)((eax | 0xFFFFFFFFu)); _flag_b = (uint32_t)((eax | 0xFFFFFFFFu));
    eax = eax | 0xFFFFFFFFu; /* 0x1503501C: or eax, 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_15035105; /* 0x1503501F: jmp 0x15035105 */
L_15035024:
    /* test edi, edi */ /* 0x15035024: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_Z(_flag_a, _flag_b)) goto L_15035002; /* 0x15035026: je 0x15035002 */
L_15035028:
    ecx = ebp + (-0x144); /* 0x15035028: lea ecx, [ebp - 0x144] */
    PUSH32(esp, ecx); /* 0x1503502E: push ecx */
    PUSH32(esp, eax); /* 0x1503502F: push eax */
    RECOMP_ICALL(MEM32(0x150C00A8)); /* 0x15035030: call dword ptr [0x150c00a8] */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x15035036: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_15035079; /* 0x15035038: jne 0x15035079 */
L_1503503A:
    RECOMP_ICALL(MEM32(0x150C006C)); /* 0x1503503A: call dword ptr [0x150c006c] */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 2); /* 0x15035040: push 2 */
    esi = POP32_VAL(esp); /* 0x15035042: pop esi */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - esi; /* 0x15035043: sub eax, esi */
    _flag_k = FK_CMP;
    if (/* sub result */ CMP_EQ(_flag_a, _flag_b)) goto L_15035070; /* 0x15035045: je 0x15035070 */
L_15035047:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - 1; /* 0x15035047: sub eax, 1 */
    _flag_k = FK_CMP;
    if (/* sub result */ CMP_EQ(_flag_a, _flag_b)) goto L_15035070; /* 0x1503504A: je 0x15035070 */
L_1503504C:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(5);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - 5; /* 0x1503504C: sub eax, 5 */
    _flag_k = FK_CMP;
    if (/* sub result */ CMP_EQ(_flag_a, _flag_b)) goto L_15035063; /* 0x1503504F: je 0x15035063 */
L_15035051:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xAu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - 0xAu; /* 0x15035051: sub eax, 0xa */
    _flag_k = FK_CMP;
    if (/* sub result */ CMP_EQ(_flag_a, _flag_b)) goto L_15035070; /* 0x15035054: je 0x15035070 */
L_15035056:
    RECOMP_CALL(sub_15036430); /* 0x15035056: call 0x15036430 */
    RECOMP_FLAGS_IN();
    MEM32(eax) = 0x16u; /* 0x1503505B: mov dword ptr [eax], 0x16 */
    RECOMP_BACKEDGE();
    goto L_1503501C; /* 0x15035061: jmp 0x1503501c */
L_15035063:
    RECOMP_CALL(sub_15036430); /* 0x15035063: call 0x15036430 */
    RECOMP_FLAGS_IN();
    MEM32(eax) = 0xCu; /* 0x15035068: mov dword ptr [eax], 0xc */
    RECOMP_BACKEDGE();
    goto L_1503501C; /* 0x1503506E: jmp 0x1503501c */
L_15035070:
    RECOMP_CALL(sub_15036430); /* 0x15035070: call 0x15036430 */
    RECOMP_FLAGS_IN();
    MEM32(eax) = esi; /* 0x15035075: mov dword ptr [eax], esi */
    RECOMP_BACKEDGE();
    goto L_1503501C; /* 0x15035077: jmp 0x1503501c */
L_15035079:
    eax = MEM32(ebp + (-0x144)); /* 0x15035079: mov eax, dword ptr [ebp - 0x144] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x1503507F: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp eax, 0x80u */ /* 0x15035081: cmp eax, 0x80 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x80u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) { eax = ecx; } /* 0x15035086: cmove eax, ecx */
    MEM32(edi) = eax; /* 0x15035089: mov dword ptr [edi], eax */
    eax = ebp + (-0x140); /* 0x1503508B: lea eax, [ebp - 0x140] */
    PUSH32(esp, eax); /* 0x15035091: push eax */
    RECOMP_CALL(sub_15035C71); /* 0x15035092: call 0x15035c71 */
    RECOMP_FLAGS_IN();
    MEM32(edi + 0x8) = eax; /* 0x15035097: mov dword ptr [edi + 8], eax */
    eax = ebp + (-0x138); /* 0x1503509A: lea eax, [ebp - 0x138] */
    PUSH32(esp, eax); /* 0x150350A0: push eax */
    MEM32(edi + 0xC) = edx; /* 0x150350A1: mov dword ptr [edi + 0xc], edx */
    RECOMP_CALL(sub_15035C71); /* 0x150350A4: call 0x15035c71 */
    RECOMP_FLAGS_IN();
    MEM32(edi + 0x10) = eax; /* 0x150350A9: mov dword ptr [edi + 0x10], eax */
    eax = ebp + (-0x130); /* 0x150350AC: lea eax, [ebp - 0x130] */
    PUSH32(esp, eax); /* 0x150350B2: push eax */
    MEM32(edi + 0x14) = edx; /* 0x150350B3: mov dword ptr [edi + 0x14], edx */
    RECOMP_CALL(sub_15035C71); /* 0x150350B6: call 0x15035c71 */
    RECOMP_FLAGS_IN();
    ecx = MEM32(ebp + (-0x128)); /* 0x150350BB: mov ecx, dword ptr [ebp - 0x128] */
    MEM32(edi + 0x18) = eax; /* 0x150350C1: mov dword ptr [edi + 0x18], eax */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x150350C4: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(ebp + (-0x124)));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + MEM32(ebp + (-0x124)); /* 0x150350C6: add eax, dword ptr [ebp - 0x124] */
    _flag_k = FK_ADD;
    PUSH32(esp, 0); /* 0x150350CC: push 0 */
    esi = POP32_VAL(esp); /* 0x150350CE: pop esi */
    MEM32(edi + 0x20) = eax; /* 0x150350CF: mov dword ptr [edi + 0x20], eax */
    { uint32_t _aa = ecx, _ab = esi, _ac = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x150350D2: adc ecx, esi */
      ecx = _aa + _ab + _ac;
      _flag_a = recomp_flags_adc(_aa, _ab, _ac); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    eax = ebp + (-0x118); /* 0x150350D4: lea eax, [ebp - 0x118] */
    MEM32(edi + 0x1C) = edx; /* 0x150350DA: mov dword ptr [edi + 0x1c], edx */
    PUSH32(esp, eax); /* 0x150350DD: push eax */
    eax = edi + 0x28; /* 0x150350DE: lea eax, [edi + 0x28] */
    MEM32(edi + 0x24) = ecx; /* 0x150350E1: mov dword ptr [edi + 0x24], ecx */
    PUSH32(esp, 0x104u); /* 0x150350E4: push 0x104 */
    PUSH32(esp, eax); /* 0x150350E9: push eax */
    RECOMP_CALL(sub_1508E640); /* 0x150350EA: call 0x1508e640 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x18u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x18u; /* 0x150350EF: add esp, 0x18 */
    _flag_k = FK_ADD;
    /* test eax, eax */ /* 0x150350F2: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_15035103; /* 0x150350F4: je 0x15035103 */
L_150350F6:
    PUSH32(esp, esi); /* 0x150350F6: push esi */
    PUSH32(esp, esi); /* 0x150350F7: push esi */
    PUSH32(esp, esi); /* 0x150350F8: push esi */
    PUSH32(esp, esi); /* 0x150350F9: push esi */
    PUSH32(esp, esi); /* 0x150350FA: push esi */
    RECOMP_CALL(sub_1505A11B); /* 0x150350FB: call 0x1505a11b */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x14u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x14u; /* 0x15035100: add esp, 0x14 */
    _flag_k = FK_ADD;
L_15035103:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x15035103: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
L_15035105:
    ecx = MEM32(ebp + (-0x4)); /* 0x15035105: mov ecx, dword ptr [ebp - 4] */
    edi = POP32_VAL(esp); /* 0x15035108: pop edi */
    _flag_a = (uint32_t)((ecx ^ ebp)); _flag_b = (uint32_t)((ecx ^ ebp));
    ecx = ecx ^ ebp; /* 0x15035109: xor ecx, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    esi = POP32_VAL(esp); /* 0x1503510B: pop esi */
    RECOMP_CALL(sub_1505E540); /* 0x1503510C: call 0x1505e540 */
    RECOMP_FLAGS_IN();
    esp = ebp; ebp = POP32_VAL(esp); /* 0x15035111: leave  */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x15035112: ret  */
    RECOMP_REGS_OUT();
}

void sub_15035119(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x15035119u);

L_15035119:
    edi = edi; /* 0x15035119: mov edi, edi */
    PUSH32(esp, ebp); /* 0x1503511B: push ebp */
    ebp = esp; /* 0x1503511C: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x144u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x144u; /* 0x1503511E: sub esp, 0x144 */
    _flag_k = FK_CMP;
    eax = MEM32(0x150BD340); /* 0x15035124: mov eax, dword ptr [0x150bd340] */
    _flag_a = (uint32_t)((eax ^ ebp)); _flag_b = (uint32_t)((eax ^ ebp));
    eax = eax ^ ebp; /* 0x15035129: xor eax, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x4)) = eax; /* 0x1503512B: mov dword ptr [ebp - 4], eax */
    eax = MEM32(ebp + 0x8); /* 0x1503512E: mov eax, dword ptr [ebp + 8] */
    PUSH32(esp, esi); /* 0x15035131: push esi */
    PUSH32(esp, edi); /* 0x15035132: push edi */
    edi = MEM32(ebp + 0xC); /* 0x15035133: mov edi, dword ptr [ebp + 0xc] */
    /* test edi, edi */ /* 0x15035136: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1503515C; /* 0x15035138: jne 0x1503515c */
L_1503513A:
    RECOMP_CALL(sub_15036430); /* 0x1503513A: call 0x15036430 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    esi = 0; /* 0x1503513F: xor esi, esi */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, esi); /* 0x15035141: push esi */
    PUSH32(esp, esi); /* 0x15035142: push esi */
    PUSH32(esp, esi); /* 0x15035143: push esi */
    PUSH32(esp, esi); /* 0x15035144: push esi */
    PUSH32(esp, esi); /* 0x15035145: push esi */
    MEM32(eax) = 0x16u; /* 0x15035146: mov dword ptr [eax], 0x16 */
    RECOMP_CALL(sub_1505A110); /* 0x1503514C: call 0x1505a110 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x14u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x14u; /* 0x15035151: add esp, 0x14 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)((eax | 0xFFFFFFFFu)); _flag_b = (uint32_t)((eax | 0xFFFFFFFFu));
    eax = eax | 0xFFFFFFFFu; /* 0x15035154: or eax, 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_1503523F; /* 0x15035157: jmp 0x1503523f */
L_1503515C:
    /* test eax, eax */ /* 0x1503515C: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_Z(_flag_a, _flag_b)) goto L_1503513A; /* 0x1503515E: je 0x1503513a */
L_15035160:
    PUSH32(esp, ebx); /* 0x15035160: push ebx */
    ecx = ebp + (-0x144); /* 0x15035161: lea ecx, [ebp - 0x144] */
    PUSH32(esp, ecx); /* 0x15035167: push ecx */
    PUSH32(esp, eax); /* 0x15035168: push eax */
    RECOMP_ICALL(MEM32(0x150C0114)); /* 0x15035169: call dword ptr [0x150c0114] */
    RECOMP_FLAGS_IN();
    ebx = eax; /* 0x1503516F: mov ebx, eax */
    /* cmp ebx, 0xFFFFFFFFu */ /* 0x15035171: cmp ebx, -1 */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(0xFFFFFFFFu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_150351BB; /* 0x15035174: jne 0x150351bb */
L_15035176:
    RECOMP_ICALL(MEM32(0x150C006C)); /* 0x15035176: call dword ptr [0x150c006c] */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 2); /* 0x1503517C: push 2 */
    esi = POP32_VAL(esp); /* 0x1503517E: pop esi */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - esi; /* 0x1503517F: sub eax, esi */
    _flag_k = FK_CMP;
    if (/* sub result */ CMP_EQ(_flag_a, _flag_b)) goto L_150351AC; /* 0x15035181: je 0x150351ac */
L_15035183:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - 1; /* 0x15035183: sub eax, 1 */
    _flag_k = FK_CMP;
    if (/* sub result */ CMP_EQ(_flag_a, _flag_b)) goto L_150351AC; /* 0x15035186: je 0x150351ac */
L_15035188:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(5);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - 5; /* 0x15035188: sub eax, 5 */
    _flag_k = FK_CMP;
    if (/* sub result */ CMP_EQ(_flag_a, _flag_b)) goto L_1503519F; /* 0x1503518B: je 0x1503519f */
L_1503518D:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xAu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - 0xAu; /* 0x1503518D: sub eax, 0xa */
    _flag_k = FK_CMP;
    if (/* sub result */ CMP_EQ(_flag_a, _flag_b)) goto L_150351AC; /* 0x15035190: je 0x150351ac */
L_15035192:
    RECOMP_CALL(sub_15036430); /* 0x15035192: call 0x15036430 */
    RECOMP_FLAGS_IN();
    MEM32(eax) = 0x16u; /* 0x15035197: mov dword ptr [eax], 0x16 */
    goto L_150351B3; /* 0x1503519D: jmp 0x150351b3 */
L_1503519F:
    RECOMP_CALL(sub_15036430); /* 0x1503519F: call 0x15036430 */
    RECOMP_FLAGS_IN();
    MEM32(eax) = 0xCu; /* 0x150351A4: mov dword ptr [eax], 0xc */
    goto L_150351B3; /* 0x150351AA: jmp 0x150351b3 */
L_150351AC:
    RECOMP_CALL(sub_15036430); /* 0x150351AC: call 0x15036430 */
    RECOMP_FLAGS_IN();
    MEM32(eax) = esi; /* 0x150351B1: mov dword ptr [eax], esi */
L_150351B3:
    _flag_a = (uint32_t)((eax | 0xFFFFFFFFu)); _flag_b = (uint32_t)((eax | 0xFFFFFFFFu));
    eax = eax | 0xFFFFFFFFu; /* 0x150351B3: or eax, 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_1503523E; /* 0x150351B6: jmp 0x1503523e */
L_150351BB:
    eax = MEM32(ebp + (-0x144)); /* 0x150351BB: mov eax, dword ptr [ebp - 0x144] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x150351C1: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp eax, 0x80u */ /* 0x150351C3: cmp eax, 0x80 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x80u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) { eax = ecx; } /* 0x150351C8: cmove eax, ecx */
    MEM32(edi) = eax; /* 0x150351CB: mov dword ptr [edi], eax */
    eax = ebp + (-0x140); /* 0x150351CD: lea eax, [ebp - 0x140] */
    PUSH32(esp, eax); /* 0x150351D3: push eax */
    RECOMP_CALL(sub_15034B5F); /* 0x150351D4: call 0x15034b5f */
    RECOMP_FLAGS_IN();
    MEM32(edi + 0x4) = eax; /* 0x150351D9: mov dword ptr [edi + 4], eax */
    eax = ebp + (-0x138); /* 0x150351DC: lea eax, [ebp - 0x138] */
    PUSH32(esp, eax); /* 0x150351E2: push eax */
    RECOMP_CALL(sub_15034B5F); /* 0x150351E3: call 0x15034b5f */
    RECOMP_FLAGS_IN();
    MEM32(edi + 0x8) = eax; /* 0x150351E8: mov dword ptr [edi + 8], eax */
    eax = ebp + (-0x130); /* 0x150351EB: lea eax, [ebp - 0x130] */
    PUSH32(esp, eax); /* 0x150351F1: push eax */
    RECOMP_CALL(sub_15034B5F); /* 0x150351F2: call 0x15034b5f */
    RECOMP_FLAGS_IN();
    ecx = MEM32(ebp + (-0x128)); /* 0x150351F7: mov ecx, dword ptr [ebp - 0x128] */
    MEM32(edi + 0xC) = eax; /* 0x150351FD: mov dword ptr [edi + 0xc], eax */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x15035200: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(ebp + (-0x124)));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + MEM32(ebp + (-0x124)); /* 0x15035202: add eax, dword ptr [ebp - 0x124] */
    _flag_k = FK_ADD;
    PUSH32(esp, 0); /* 0x15035208: push 0 */
    esi = POP32_VAL(esp); /* 0x1503520A: pop esi */
    MEM32(edi + 0x10) = eax; /* 0x1503520B: mov dword ptr [edi + 0x10], eax */
    { uint32_t _aa = ecx, _ab = esi, _ac = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x1503520E: adc ecx, esi */
      ecx = _aa + _ab + _ac;
      _flag_a = recomp_flags_adc(_aa, _ab, _ac); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    eax = ebp + (-0x118); /* 0x15035210: lea eax, [ebp - 0x118] */
    MEM32(edi + 0x14) = ecx; /* 0x15035216: mov dword ptr [edi + 0x14], ecx */
    PUSH32(esp, eax); /* 0x15035219: push eax */
    eax = edi + 0x18; /* 0x1503521A: lea eax, [edi + 0x18] */
    PUSH32(esp, 0x104u); /* 0x1503521D: push 0x104 */
    PUSH32(esp, eax); /* 0x15035222: push eax */
    RECOMP_CALL(sub_1508E640); /* 0x15035223: call 0x1508e640 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x18u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x18u; /* 0x15035228: add esp, 0x18 */
    _flag_k = FK_ADD;
    /* test eax, eax */ /* 0x1503522B: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1503523C; /* 0x1503522D: je 0x1503523c */
L_1503522F:
    PUSH32(esp, esi); /* 0x1503522F: push esi */
    PUSH32(esp, esi); /* 0x15035230: push esi */
    PUSH32(esp, esi); /* 0x15035231: push esi */
    PUSH32(esp, esi); /* 0x15035232: push esi */
    PUSH32(esp, esi); /* 0x15035233: push esi */
    RECOMP_CALL(sub_1505A11B); /* 0x15035234: call 0x1505a11b */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x14u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x14u; /* 0x15035239: add esp, 0x14 */
    _flag_k = FK_ADD;
L_1503523C:
    eax = ebx; /* 0x1503523C: mov eax, ebx */
L_1503523E:
    ebx = POP32_VAL(esp); /* 0x1503523E: pop ebx */
L_1503523F:
    ecx = MEM32(ebp + (-0x4)); /* 0x1503523F: mov ecx, dword ptr [ebp - 4] */
    edi = POP32_VAL(esp); /* 0x15035242: pop edi */
    _flag_a = (uint32_t)((ecx ^ ebp)); _flag_b = (uint32_t)((ecx ^ ebp));
    ecx = ecx ^ ebp; /* 0x15035243: xor ecx, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    esi = POP32_VAL(esp); /* 0x15035245: pop esi */
    RECOMP_CALL(sub_1505E540); /* 0x15035246: call 0x1505e540 */
    RECOMP_FLAGS_IN();
    esp = ebp; ebp = POP32_VAL(esp); /* 0x1503524B: leave  */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1503524C: ret  */
    RECOMP_REGS_OUT();
}

void sub_15035260(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x15035260u);

    goto L_15035260;
L_15035119:
    edi = edi; /* 0x15035119: mov edi, edi */
    PUSH32(esp, ebp); /* 0x1503511B: push ebp */
    ebp = esp; /* 0x1503511C: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x144u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x144u; /* 0x1503511E: sub esp, 0x144 */
    _flag_k = FK_CMP;
    eax = MEM32(0x150BD340); /* 0x15035124: mov eax, dword ptr [0x150bd340] */
    _flag_a = (uint32_t)((eax ^ ebp)); _flag_b = (uint32_t)((eax ^ ebp));
    eax = eax ^ ebp; /* 0x15035129: xor eax, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x4)) = eax; /* 0x1503512B: mov dword ptr [ebp - 4], eax */
    eax = MEM32(ebp + 0x8); /* 0x1503512E: mov eax, dword ptr [ebp + 8] */
    PUSH32(esp, esi); /* 0x15035131: push esi */
    PUSH32(esp, edi); /* 0x15035132: push edi */
    edi = MEM32(ebp + 0xC); /* 0x15035133: mov edi, dword ptr [ebp + 0xc] */
    /* test edi, edi */ /* 0x15035136: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1503515C; /* 0x15035138: jne 0x1503515c */
L_1503513A:
    RECOMP_CALL(sub_15036430); /* 0x1503513A: call 0x15036430 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    esi = 0; /* 0x1503513F: xor esi, esi */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, esi); /* 0x15035141: push esi */
    PUSH32(esp, esi); /* 0x15035142: push esi */
    PUSH32(esp, esi); /* 0x15035143: push esi */
    PUSH32(esp, esi); /* 0x15035144: push esi */
    PUSH32(esp, esi); /* 0x15035145: push esi */
    MEM32(eax) = 0x16u; /* 0x15035146: mov dword ptr [eax], 0x16 */
    RECOMP_CALL(sub_1505A110); /* 0x1503514C: call 0x1505a110 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x14u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x14u; /* 0x15035151: add esp, 0x14 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)((eax | 0xFFFFFFFFu)); _flag_b = (uint32_t)((eax | 0xFFFFFFFFu));
    eax = eax | 0xFFFFFFFFu; /* 0x15035154: or eax, 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_1503523F; /* 0x15035157: jmp 0x1503523f */
L_1503515C:
    /* test eax, eax */ /* 0x1503515C: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_Z(_flag_a, _flag_b)) goto L_1503513A; /* 0x1503515E: je 0x1503513a */
L_15035160:
    PUSH32(esp, ebx); /* 0x15035160: push ebx */
    ecx = ebp + (-0x144); /* 0x15035161: lea ecx, [ebp - 0x144] */
    PUSH32(esp, ecx); /* 0x15035167: push ecx */
    PUSH32(esp, eax); /* 0x15035168: push eax */
    RECOMP_ICALL(MEM32(0x150C0114)); /* 0x15035169: call dword ptr [0x150c0114] */
    RECOMP_FLAGS_IN();
    ebx = eax; /* 0x1503516F: mov ebx, eax */
    /* cmp ebx, 0xFFFFFFFFu */ /* 0x15035171: cmp ebx, -1 */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(0xFFFFFFFFu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_150351BB; /* 0x15035174: jne 0x150351bb */
L_15035176:
    RECOMP_ICALL(MEM32(0x150C006C)); /* 0x15035176: call dword ptr [0x150c006c] */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 2); /* 0x1503517C: push 2 */
    esi = POP32_VAL(esp); /* 0x1503517E: pop esi */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - esi; /* 0x1503517F: sub eax, esi */
    _flag_k = FK_CMP;
    if (/* sub result */ CMP_EQ(_flag_a, _flag_b)) goto L_150351AC; /* 0x15035181: je 0x150351ac */
L_15035183:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - 1; /* 0x15035183: sub eax, 1 */
    _flag_k = FK_CMP;
    if (/* sub result */ CMP_EQ(_flag_a, _flag_b)) goto L_150351AC; /* 0x15035186: je 0x150351ac */
L_15035188:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(5);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - 5; /* 0x15035188: sub eax, 5 */
    _flag_k = FK_CMP;
    if (/* sub result */ CMP_EQ(_flag_a, _flag_b)) goto L_1503519F; /* 0x1503518B: je 0x1503519f */
L_1503518D:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xAu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - 0xAu; /* 0x1503518D: sub eax, 0xa */
    _flag_k = FK_CMP;
    if (/* sub result */ CMP_EQ(_flag_a, _flag_b)) goto L_150351AC; /* 0x15035190: je 0x150351ac */
L_15035192:
    RECOMP_CALL(sub_15036430); /* 0x15035192: call 0x15036430 */
    RECOMP_FLAGS_IN();
    MEM32(eax) = 0x16u; /* 0x15035197: mov dword ptr [eax], 0x16 */
    goto L_150351B3; /* 0x1503519D: jmp 0x150351b3 */
L_1503519F:
    RECOMP_CALL(sub_15036430); /* 0x1503519F: call 0x15036430 */
    RECOMP_FLAGS_IN();
    MEM32(eax) = 0xCu; /* 0x150351A4: mov dword ptr [eax], 0xc */
    goto L_150351B3; /* 0x150351AA: jmp 0x150351b3 */
L_150351AC:
    RECOMP_CALL(sub_15036430); /* 0x150351AC: call 0x15036430 */
    RECOMP_FLAGS_IN();
    MEM32(eax) = esi; /* 0x150351B1: mov dword ptr [eax], esi */
L_150351B3:
    _flag_a = (uint32_t)((eax | 0xFFFFFFFFu)); _flag_b = (uint32_t)((eax | 0xFFFFFFFFu));
    eax = eax | 0xFFFFFFFFu; /* 0x150351B3: or eax, 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_1503523E; /* 0x150351B6: jmp 0x1503523e */
L_150351BB:
    eax = MEM32(ebp + (-0x144)); /* 0x150351BB: mov eax, dword ptr [ebp - 0x144] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x150351C1: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp eax, 0x80u */ /* 0x150351C3: cmp eax, 0x80 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x80u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) { eax = ecx; } /* 0x150351C8: cmove eax, ecx */
    MEM32(edi) = eax; /* 0x150351CB: mov dword ptr [edi], eax */
    eax = ebp + (-0x140); /* 0x150351CD: lea eax, [ebp - 0x140] */
    PUSH32(esp, eax); /* 0x150351D3: push eax */
    RECOMP_CALL(sub_15034B5F); /* 0x150351D4: call 0x15034b5f */
    RECOMP_FLAGS_IN();
    MEM32(edi + 0x4) = eax; /* 0x150351D9: mov dword ptr [edi + 4], eax */
    eax = ebp + (-0x138); /* 0x150351DC: lea eax, [ebp - 0x138] */
    PUSH32(esp, eax); /* 0x150351E2: push eax */
    RECOMP_CALL(sub_15034B5F); /* 0x150351E3: call 0x15034b5f */
    RECOMP_FLAGS_IN();
    MEM32(edi + 0x8) = eax; /* 0x150351E8: mov dword ptr [edi + 8], eax */
    eax = ebp + (-0x130); /* 0x150351EB: lea eax, [ebp - 0x130] */
    PUSH32(esp, eax); /* 0x150351F1: push eax */
    RECOMP_CALL(sub_15034B5F); /* 0x150351F2: call 0x15034b5f */
    RECOMP_FLAGS_IN();
    ecx = MEM32(ebp + (-0x128)); /* 0x150351F7: mov ecx, dword ptr [ebp - 0x128] */
    MEM32(edi + 0xC) = eax; /* 0x150351FD: mov dword ptr [edi + 0xc], eax */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x15035200: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(ebp + (-0x124)));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + MEM32(ebp + (-0x124)); /* 0x15035202: add eax, dword ptr [ebp - 0x124] */
    _flag_k = FK_ADD;
    PUSH32(esp, 0); /* 0x15035208: push 0 */
    esi = POP32_VAL(esp); /* 0x1503520A: pop esi */
    MEM32(edi + 0x10) = eax; /* 0x1503520B: mov dword ptr [edi + 0x10], eax */
    { uint32_t _aa = ecx, _ab = esi, _ac = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x1503520E: adc ecx, esi */
      ecx = _aa + _ab + _ac;
      _flag_a = recomp_flags_adc(_aa, _ab, _ac); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    eax = ebp + (-0x118); /* 0x15035210: lea eax, [ebp - 0x118] */
    MEM32(edi + 0x14) = ecx; /* 0x15035216: mov dword ptr [edi + 0x14], ecx */
    PUSH32(esp, eax); /* 0x15035219: push eax */
    eax = edi + 0x18; /* 0x1503521A: lea eax, [edi + 0x18] */
    PUSH32(esp, 0x104u); /* 0x1503521D: push 0x104 */
    PUSH32(esp, eax); /* 0x15035222: push eax */
    RECOMP_CALL(sub_1508E640); /* 0x15035223: call 0x1508e640 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x18u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x18u; /* 0x15035228: add esp, 0x18 */
    _flag_k = FK_ADD;
    /* test eax, eax */ /* 0x1503522B: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1503523C; /* 0x1503522D: je 0x1503523c */
L_1503522F:
    PUSH32(esp, esi); /* 0x1503522F: push esi */
    PUSH32(esp, esi); /* 0x15035230: push esi */
    PUSH32(esp, esi); /* 0x15035231: push esi */
    PUSH32(esp, esi); /* 0x15035232: push esi */
    PUSH32(esp, esi); /* 0x15035233: push esi */
    RECOMP_CALL(sub_1505A11B); /* 0x15035234: call 0x1505a11b */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x14u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x14u; /* 0x15035239: add esp, 0x14 */
    _flag_k = FK_ADD;
L_1503523C:
    eax = ebx; /* 0x1503523C: mov eax, ebx */
L_1503523E:
    ebx = POP32_VAL(esp); /* 0x1503523E: pop ebx */
L_1503523F:
    ecx = MEM32(ebp + (-0x4)); /* 0x1503523F: mov ecx, dword ptr [ebp - 4] */
    edi = POP32_VAL(esp); /* 0x15035242: pop edi */
    _flag_a = (uint32_t)((ecx ^ ebp)); _flag_b = (uint32_t)((ecx ^ ebp));
    ecx = ecx ^ ebp; /* 0x15035243: xor ecx, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    esi = POP32_VAL(esp); /* 0x15035245: pop esi */
    RECOMP_CALL(sub_1505E540); /* 0x15035246: call 0x1505e540 */
    RECOMP_FLAGS_IN();
    esp = ebp; ebp = POP32_VAL(esp); /* 0x1503524B: leave  */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1503524C: ret  */
L_15035260:
    edi = edi; /* 0x15035260: mov edi, edi */
    PUSH32(esp, ebp); /* 0x15035262: push ebp */
    ebp = esp; /* 0x15035263: mov ebp, esp */
    ebp = POP32_VAL(esp); /* 0x15035265: pop ebp */
    RECOMP_BACKEDGE();
    goto L_15035119; /* 0x15035266: jmp 0x15035119 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    RECOMP_REGS_OUT();
}

void sub_15035271(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x15035271u);

L_15035271:
    edi = edi; /* 0x15035271: mov edi, edi */
    PUSH32(esp, ebp); /* 0x15035273: push ebp */
    ebp = esp; /* 0x15035274: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x144u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x144u; /* 0x15035276: sub esp, 0x144 */
    _flag_k = FK_CMP;
    eax = MEM32(0x150BD340); /* 0x1503527C: mov eax, dword ptr [0x150bd340] */
    _flag_a = (uint32_t)((eax ^ ebp)); _flag_b = (uint32_t)((eax ^ ebp));
    eax = eax ^ ebp; /* 0x15035281: xor eax, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x4)) = eax; /* 0x15035283: mov dword ptr [ebp - 4], eax */
    eax = MEM32(ebp + 0x8); /* 0x15035286: mov eax, dword ptr [ebp + 8] */
    PUSH32(esp, esi); /* 0x15035289: push esi */
    PUSH32(esp, edi); /* 0x1503528A: push edi */
    edi = MEM32(ebp + 0xC); /* 0x1503528B: mov edi, dword ptr [ebp + 0xc] */
    /* cmp eax, 0xFFFFFFFFu */ /* 0x1503528E: cmp eax, -1 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xFFFFFFFFu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_150352B5; /* 0x15035291: jne 0x150352b5 */
L_15035293:
    RECOMP_CALL(sub_15036430); /* 0x15035293: call 0x15036430 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    esi = 0; /* 0x15035298: xor esi, esi */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, esi); /* 0x1503529A: push esi */
    PUSH32(esp, esi); /* 0x1503529B: push esi */
    PUSH32(esp, esi); /* 0x1503529C: push esi */
    PUSH32(esp, esi); /* 0x1503529D: push esi */
    PUSH32(esp, esi); /* 0x1503529E: push esi */
    MEM32(eax) = 0x16u; /* 0x1503529F: mov dword ptr [eax], 0x16 */
    RECOMP_CALL(sub_1505A110); /* 0x150352A5: call 0x1505a110 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x14u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x14u; /* 0x150352AA: add esp, 0x14 */
    _flag_k = FK_ADD;
L_150352AD:
    _flag_a = (uint32_t)((eax | 0xFFFFFFFFu)); _flag_b = (uint32_t)((eax | 0xFFFFFFFFu));
    eax = eax | 0xFFFFFFFFu; /* 0x150352AD: or eax, 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_1503538D; /* 0x150352B0: jmp 0x1503538d */
L_150352B5:
    /* test edi, edi */ /* 0x150352B5: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_Z(_flag_a, _flag_b)) goto L_15035293; /* 0x150352B7: je 0x15035293 */
L_150352B9:
    ecx = ebp + (-0x144); /* 0x150352B9: lea ecx, [ebp - 0x144] */
    PUSH32(esp, ecx); /* 0x150352BF: push ecx */
    PUSH32(esp, eax); /* 0x150352C0: push eax */
    RECOMP_ICALL(MEM32(0x150C00A8)); /* 0x150352C1: call dword ptr [0x150c00a8] */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x150352C7: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1503530A; /* 0x150352C9: jne 0x1503530a */
L_150352CB:
    RECOMP_ICALL(MEM32(0x150C006C)); /* 0x150352CB: call dword ptr [0x150c006c] */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 2); /* 0x150352D1: push 2 */
    esi = POP32_VAL(esp); /* 0x150352D3: pop esi */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - esi; /* 0x150352D4: sub eax, esi */
    _flag_k = FK_CMP;
    if (/* sub result */ CMP_EQ(_flag_a, _flag_b)) goto L_15035301; /* 0x150352D6: je 0x15035301 */
L_150352D8:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - 1; /* 0x150352D8: sub eax, 1 */
    _flag_k = FK_CMP;
    if (/* sub result */ CMP_EQ(_flag_a, _flag_b)) goto L_15035301; /* 0x150352DB: je 0x15035301 */
L_150352DD:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(5);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - 5; /* 0x150352DD: sub eax, 5 */
    _flag_k = FK_CMP;
    if (/* sub result */ CMP_EQ(_flag_a, _flag_b)) goto L_150352F4; /* 0x150352E0: je 0x150352f4 */
L_150352E2:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xAu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - 0xAu; /* 0x150352E2: sub eax, 0xa */
    _flag_k = FK_CMP;
    if (/* sub result */ CMP_EQ(_flag_a, _flag_b)) goto L_15035301; /* 0x150352E5: je 0x15035301 */
L_150352E7:
    RECOMP_CALL(sub_15036430); /* 0x150352E7: call 0x15036430 */
    RECOMP_FLAGS_IN();
    MEM32(eax) = 0x16u; /* 0x150352EC: mov dword ptr [eax], 0x16 */
    RECOMP_BACKEDGE();
    goto L_150352AD; /* 0x150352F2: jmp 0x150352ad */
L_150352F4:
    RECOMP_CALL(sub_15036430); /* 0x150352F4: call 0x15036430 */
    RECOMP_FLAGS_IN();
    MEM32(eax) = 0xCu; /* 0x150352F9: mov dword ptr [eax], 0xc */
    RECOMP_BACKEDGE();
    goto L_150352AD; /* 0x150352FF: jmp 0x150352ad */
L_15035301:
    RECOMP_CALL(sub_15036430); /* 0x15035301: call 0x15036430 */
    RECOMP_FLAGS_IN();
    MEM32(eax) = esi; /* 0x15035306: mov dword ptr [eax], esi */
    RECOMP_BACKEDGE();
    goto L_150352AD; /* 0x15035308: jmp 0x150352ad */
L_1503530A:
    eax = MEM32(ebp + (-0x144)); /* 0x1503530A: mov eax, dword ptr [ebp - 0x144] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x15035310: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp eax, 0x80u */ /* 0x15035312: cmp eax, 0x80 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x80u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) { eax = ecx; } /* 0x15035317: cmove eax, ecx */
    MEM32(edi) = eax; /* 0x1503531A: mov dword ptr [edi], eax */
    eax = ebp + (-0x140); /* 0x1503531C: lea eax, [ebp - 0x140] */
    PUSH32(esp, eax); /* 0x15035322: push eax */
    RECOMP_CALL(sub_15034B5F); /* 0x15035323: call 0x15034b5f */
    RECOMP_FLAGS_IN();
    MEM32(edi + 0x4) = eax; /* 0x15035328: mov dword ptr [edi + 4], eax */
    eax = ebp + (-0x138); /* 0x1503532B: lea eax, [ebp - 0x138] */
    PUSH32(esp, eax); /* 0x15035331: push eax */
    RECOMP_CALL(sub_15034B5F); /* 0x15035332: call 0x15034b5f */
    RECOMP_FLAGS_IN();
    MEM32(edi + 0x8) = eax; /* 0x15035337: mov dword ptr [edi + 8], eax */
    eax = ebp + (-0x130); /* 0x1503533A: lea eax, [ebp - 0x130] */
    PUSH32(esp, eax); /* 0x15035340: push eax */
    RECOMP_CALL(sub_15034B5F); /* 0x15035341: call 0x15034b5f */
    RECOMP_FLAGS_IN();
    ecx = MEM32(ebp + (-0x128)); /* 0x15035346: mov ecx, dword ptr [ebp - 0x128] */
    MEM32(edi + 0xC) = eax; /* 0x1503534C: mov dword ptr [edi + 0xc], eax */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1503534F: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(ebp + (-0x124)));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + MEM32(ebp + (-0x124)); /* 0x15035351: add eax, dword ptr [ebp - 0x124] */
    _flag_k = FK_ADD;
    PUSH32(esp, 0); /* 0x15035357: push 0 */
    esi = POP32_VAL(esp); /* 0x15035359: pop esi */
    MEM32(edi + 0x10) = eax; /* 0x1503535A: mov dword ptr [edi + 0x10], eax */
    { uint32_t _aa = ecx, _ab = esi, _ac = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x1503535D: adc ecx, esi */
      ecx = _aa + _ab + _ac;
      _flag_a = recomp_flags_adc(_aa, _ab, _ac); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    eax = ebp + (-0x118); /* 0x1503535F: lea eax, [ebp - 0x118] */
    MEM32(edi + 0x14) = ecx; /* 0x15035365: mov dword ptr [edi + 0x14], ecx */
    PUSH32(esp, eax); /* 0x15035368: push eax */
    eax = edi + 0x18; /* 0x15035369: lea eax, [edi + 0x18] */
    PUSH32(esp, 0x104u); /* 0x1503536C: push 0x104 */
    PUSH32(esp, eax); /* 0x15035371: push eax */
    RECOMP_CALL(sub_1508E640); /* 0x15035372: call 0x1508e640 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x18u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x18u; /* 0x15035377: add esp, 0x18 */
    _flag_k = FK_ADD;
    /* test eax, eax */ /* 0x1503537A: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1503538B; /* 0x1503537C: je 0x1503538b */
L_1503537E:
    PUSH32(esp, esi); /* 0x1503537E: push esi */
    PUSH32(esp, esi); /* 0x1503537F: push esi */
    PUSH32(esp, esi); /* 0x15035380: push esi */
    PUSH32(esp, esi); /* 0x15035381: push esi */
    PUSH32(esp, esi); /* 0x15035382: push esi */
    RECOMP_CALL(sub_1505A11B); /* 0x15035383: call 0x1505a11b */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x14u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x14u; /* 0x15035388: add esp, 0x14 */
    _flag_k = FK_ADD;
L_1503538B:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1503538B: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
L_1503538D:
    ecx = MEM32(ebp + (-0x4)); /* 0x1503538D: mov ecx, dword ptr [ebp - 4] */
    edi = POP32_VAL(esp); /* 0x15035390: pop edi */
    _flag_a = (uint32_t)((ecx ^ ebp)); _flag_b = (uint32_t)((ecx ^ ebp));
    ecx = ecx ^ ebp; /* 0x15035391: xor ecx, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    esi = POP32_VAL(esp); /* 0x15035393: pop esi */
    RECOMP_CALL(sub_1505E540); /* 0x15035394: call 0x1505e540 */
    RECOMP_FLAGS_IN();
    esp = ebp; ebp = POP32_VAL(esp); /* 0x15035399: leave  */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1503539A: ret  */
    RECOMP_REGS_OUT();
}

void sub_150353B0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x150353B0u);

    goto L_150353B0;
L_15035271:
    edi = edi; /* 0x15035271: mov edi, edi */
    PUSH32(esp, ebp); /* 0x15035273: push ebp */
    ebp = esp; /* 0x15035274: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x144u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x144u; /* 0x15035276: sub esp, 0x144 */
    _flag_k = FK_CMP;
    eax = MEM32(0x150BD340); /* 0x1503527C: mov eax, dword ptr [0x150bd340] */
    _flag_a = (uint32_t)((eax ^ ebp)); _flag_b = (uint32_t)((eax ^ ebp));
    eax = eax ^ ebp; /* 0x15035281: xor eax, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x4)) = eax; /* 0x15035283: mov dword ptr [ebp - 4], eax */
    eax = MEM32(ebp + 0x8); /* 0x15035286: mov eax, dword ptr [ebp + 8] */
    PUSH32(esp, esi); /* 0x15035289: push esi */
    PUSH32(esp, edi); /* 0x1503528A: push edi */
    edi = MEM32(ebp + 0xC); /* 0x1503528B: mov edi, dword ptr [ebp + 0xc] */
    /* cmp eax, 0xFFFFFFFFu */ /* 0x1503528E: cmp eax, -1 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xFFFFFFFFu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_150352B5; /* 0x15035291: jne 0x150352b5 */
L_15035293:
    RECOMP_CALL(sub_15036430); /* 0x15035293: call 0x15036430 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    esi = 0; /* 0x15035298: xor esi, esi */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, esi); /* 0x1503529A: push esi */
    PUSH32(esp, esi); /* 0x1503529B: push esi */
    PUSH32(esp, esi); /* 0x1503529C: push esi */
    PUSH32(esp, esi); /* 0x1503529D: push esi */
    PUSH32(esp, esi); /* 0x1503529E: push esi */
    MEM32(eax) = 0x16u; /* 0x1503529F: mov dword ptr [eax], 0x16 */
    RECOMP_CALL(sub_1505A110); /* 0x150352A5: call 0x1505a110 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x14u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x14u; /* 0x150352AA: add esp, 0x14 */
    _flag_k = FK_ADD;
L_150352AD:
    _flag_a = (uint32_t)((eax | 0xFFFFFFFFu)); _flag_b = (uint32_t)((eax | 0xFFFFFFFFu));
    eax = eax | 0xFFFFFFFFu; /* 0x150352AD: or eax, 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_1503538D; /* 0x150352B0: jmp 0x1503538d */
L_150352B5:
    /* test edi, edi */ /* 0x150352B5: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_Z(_flag_a, _flag_b)) goto L_15035293; /* 0x150352B7: je 0x15035293 */
L_150352B9:
    ecx = ebp + (-0x144); /* 0x150352B9: lea ecx, [ebp - 0x144] */
    PUSH32(esp, ecx); /* 0x150352BF: push ecx */
    PUSH32(esp, eax); /* 0x150352C0: push eax */
    RECOMP_ICALL(MEM32(0x150C00A8)); /* 0x150352C1: call dword ptr [0x150c00a8] */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x150352C7: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1503530A; /* 0x150352C9: jne 0x1503530a */
L_150352CB:
    RECOMP_ICALL(MEM32(0x150C006C)); /* 0x150352CB: call dword ptr [0x150c006c] */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 2); /* 0x150352D1: push 2 */
    esi = POP32_VAL(esp); /* 0x150352D3: pop esi */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - esi; /* 0x150352D4: sub eax, esi */
    _flag_k = FK_CMP;
    if (/* sub result */ CMP_EQ(_flag_a, _flag_b)) goto L_15035301; /* 0x150352D6: je 0x15035301 */
L_150352D8:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - 1; /* 0x150352D8: sub eax, 1 */
    _flag_k = FK_CMP;
    if (/* sub result */ CMP_EQ(_flag_a, _flag_b)) goto L_15035301; /* 0x150352DB: je 0x15035301 */
L_150352DD:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(5);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - 5; /* 0x150352DD: sub eax, 5 */
    _flag_k = FK_CMP;
    if (/* sub result */ CMP_EQ(_flag_a, _flag_b)) goto L_150352F4; /* 0x150352E0: je 0x150352f4 */
L_150352E2:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xAu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - 0xAu; /* 0x150352E2: sub eax, 0xa */
    _flag_k = FK_CMP;
    if (/* sub result */ CMP_EQ(_flag_a, _flag_b)) goto L_15035301; /* 0x150352E5: je 0x15035301 */
L_150352E7:
    RECOMP_CALL(sub_15036430); /* 0x150352E7: call 0x15036430 */
    RECOMP_FLAGS_IN();
    MEM32(eax) = 0x16u; /* 0x150352EC: mov dword ptr [eax], 0x16 */
    RECOMP_BACKEDGE();
    goto L_150352AD; /* 0x150352F2: jmp 0x150352ad */
L_150352F4:
    RECOMP_CALL(sub_15036430); /* 0x150352F4: call 0x15036430 */
    RECOMP_FLAGS_IN();
    MEM32(eax) = 0xCu; /* 0x150352F9: mov dword ptr [eax], 0xc */
    RECOMP_BACKEDGE();
    goto L_150352AD; /* 0x150352FF: jmp 0x150352ad */
L_15035301:
    RECOMP_CALL(sub_15036430); /* 0x15035301: call 0x15036430 */
    RECOMP_FLAGS_IN();
    MEM32(eax) = esi; /* 0x15035306: mov dword ptr [eax], esi */
    RECOMP_BACKEDGE();
    goto L_150352AD; /* 0x15035308: jmp 0x150352ad */
L_1503530A:
    eax = MEM32(ebp + (-0x144)); /* 0x1503530A: mov eax, dword ptr [ebp - 0x144] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x15035310: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp eax, 0x80u */ /* 0x15035312: cmp eax, 0x80 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x80u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) { eax = ecx; } /* 0x15035317: cmove eax, ecx */
    MEM32(edi) = eax; /* 0x1503531A: mov dword ptr [edi], eax */
    eax = ebp + (-0x140); /* 0x1503531C: lea eax, [ebp - 0x140] */
    PUSH32(esp, eax); /* 0x15035322: push eax */
    RECOMP_CALL(sub_15034B5F); /* 0x15035323: call 0x15034b5f */
    RECOMP_FLAGS_IN();
    MEM32(edi + 0x4) = eax; /* 0x15035328: mov dword ptr [edi + 4], eax */
    eax = ebp + (-0x138); /* 0x1503532B: lea eax, [ebp - 0x138] */
    PUSH32(esp, eax); /* 0x15035331: push eax */
    RECOMP_CALL(sub_15034B5F); /* 0x15035332: call 0x15034b5f */
    RECOMP_FLAGS_IN();
    MEM32(edi + 0x8) = eax; /* 0x15035337: mov dword ptr [edi + 8], eax */
    eax = ebp + (-0x130); /* 0x1503533A: lea eax, [ebp - 0x130] */
    PUSH32(esp, eax); /* 0x15035340: push eax */
    RECOMP_CALL(sub_15034B5F); /* 0x15035341: call 0x15034b5f */
    RECOMP_FLAGS_IN();
    ecx = MEM32(ebp + (-0x128)); /* 0x15035346: mov ecx, dword ptr [ebp - 0x128] */
    MEM32(edi + 0xC) = eax; /* 0x1503534C: mov dword ptr [edi + 0xc], eax */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1503534F: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(ebp + (-0x124)));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + MEM32(ebp + (-0x124)); /* 0x15035351: add eax, dword ptr [ebp - 0x124] */
    _flag_k = FK_ADD;
    PUSH32(esp, 0); /* 0x15035357: push 0 */
    esi = POP32_VAL(esp); /* 0x15035359: pop esi */
    MEM32(edi + 0x10) = eax; /* 0x1503535A: mov dword ptr [edi + 0x10], eax */
    { uint32_t _aa = ecx, _ab = esi, _ac = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x1503535D: adc ecx, esi */
      ecx = _aa + _ab + _ac;
      _flag_a = recomp_flags_adc(_aa, _ab, _ac); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    eax = ebp + (-0x118); /* 0x1503535F: lea eax, [ebp - 0x118] */
    MEM32(edi + 0x14) = ecx; /* 0x15035365: mov dword ptr [edi + 0x14], ecx */
    PUSH32(esp, eax); /* 0x15035368: push eax */
    eax = edi + 0x18; /* 0x15035369: lea eax, [edi + 0x18] */
    PUSH32(esp, 0x104u); /* 0x1503536C: push 0x104 */
    PUSH32(esp, eax); /* 0x15035371: push eax */
    RECOMP_CALL(sub_1508E640); /* 0x15035372: call 0x1508e640 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x18u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x18u; /* 0x15035377: add esp, 0x18 */
    _flag_k = FK_ADD;
    /* test eax, eax */ /* 0x1503537A: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1503538B; /* 0x1503537C: je 0x1503538b */
L_1503537E:
    PUSH32(esp, esi); /* 0x1503537E: push esi */
    PUSH32(esp, esi); /* 0x1503537F: push esi */
    PUSH32(esp, esi); /* 0x15035380: push esi */
    PUSH32(esp, esi); /* 0x15035381: push esi */
    PUSH32(esp, esi); /* 0x15035382: push esi */
    RECOMP_CALL(sub_1505A11B); /* 0x15035383: call 0x1505a11b */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x14u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x14u; /* 0x15035388: add esp, 0x14 */
    _flag_k = FK_ADD;
L_1503538B:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1503538B: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
L_1503538D:
    ecx = MEM32(ebp + (-0x4)); /* 0x1503538D: mov ecx, dword ptr [ebp - 4] */
    edi = POP32_VAL(esp); /* 0x15035390: pop edi */
    _flag_a = (uint32_t)((ecx ^ ebp)); _flag_b = (uint32_t)((ecx ^ ebp));
    ecx = ecx ^ ebp; /* 0x15035391: xor ecx, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    esi = POP32_VAL(esp); /* 0x15035393: pop esi */
    RECOMP_CALL(sub_1505E540); /* 0x15035394: call 0x1505e540 */
    RECOMP_FLAGS_IN();
    esp = ebp; ebp = POP32_VAL(esp); /* 0x15035399: leave  */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1503539A: ret  */
L_150353B0:
    edi = edi; /* 0x150353B0: mov edi, edi */
    PUSH32(esp, ebp); /* 0x150353B2: push ebp */
    ebp = esp; /* 0x150353B3: mov ebp, esp */
    ebp = POP32_VAL(esp); /* 0x150353B5: pop ebp */
    RECOMP_BACKEDGE();
    goto L_15035271; /* 0x150353B6: jmp 0x15035271 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    RECOMP_REGS_OUT();
}

void sub_150353D0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x150353D0u);

L_150353D0:
    edi = edi; /* 0x150353D0: mov edi, edi */
    PUSH32(esp, ebp); /* 0x150353D2: push ebp */
    ebp = esp; /* 0x150353D3: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0xCu; /* 0x150353D5: sub esp, 0xc */
    _flag_k = FK_CMP;
    eax = MEM32(0x150BD340); /* 0x150353D8: mov eax, dword ptr [0x150bd340] */
    _flag_a = (uint32_t)((eax ^ ebp)); _flag_b = (uint32_t)((eax ^ ebp));
    eax = eax ^ ebp; /* 0x150353DD: xor eax, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x4)) = eax; /* 0x150353DF: mov dword ptr [ebp - 4], eax */
    ecx = MEM32(ebp + 0xC); /* 0x150353E2: mov ecx, dword ptr [ebp + 0xc] */
    /* test ecx, ecx */ /* 0x150353E5: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_15035408; /* 0x150353E7: jne 0x15035408 */
L_150353E9:
    RECOMP_CALL(sub_15036430); /* 0x150353E9: call 0x15036430 */
    RECOMP_FLAGS_IN();
    MEM32(eax) = 0x16u; /* 0x150353EE: mov dword ptr [eax], 0x16 */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x150353F4: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, eax); /* 0x150353F6: push eax */
    PUSH32(esp, eax); /* 0x150353F7: push eax */
    PUSH32(esp, eax); /* 0x150353F8: push eax */
    PUSH32(esp, eax); /* 0x150353F9: push eax */
    PUSH32(esp, eax); /* 0x150353FA: push eax */
    RECOMP_CALL(sub_1505A110); /* 0x150353FB: call 0x1505a110 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x14u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x14u; /* 0x15035400: add esp, 0x14 */
    _flag_k = FK_ADD;
    PUSH32(esp, 0x57u); /* 0x15035403: push 0x57 */
    eax = POP32_VAL(esp); /* 0x15035405: pop eax */
    goto L_15035478; /* 0x15035406: jmp 0x15035478 */
L_15035408:
    edx = MEM32(ebp + 0x8); /* 0x15035408: mov edx, dword ptr [ebp + 8] */
    /* cmp edx, 0x1Au */ /* 0x1503540B: cmp edx, 0x1a */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(0x1Au);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_A(_flag_a, _flag_b)) goto L_150353E9; /* 0x1503540E: ja 0x150353e9 */
L_15035410:
    PUSH32(esp, esi); /* 0x15035410: push esi */
    PUSH32(esp, edi); /* 0x15035411: push edi */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x15035412: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    edi = ecx; /* 0x15035414: mov edi, ecx */
    MEM32(edi) = eax; edi += _df * 4; /* 0x15035416: stosd dword ptr es:[edi], eax */
    MEM32(edi) = eax; edi += _df * 4; /* 0x15035417: stosd dword ptr es:[edi], eax */
    MEM32(edi) = eax; edi += _df * 4; /* 0x15035418: stosd dword ptr es:[edi], eax */
    MEM32(edi) = eax; edi += _df * 4; /* 0x15035419: stosd dword ptr es:[edi], eax */
    /* test edx, edx */ /* 0x1503541A: test edx, edx */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(edx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_15035422; /* 0x1503541C: jne 0x15035422 */
L_1503541E:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    esi = 0; /* 0x1503541E: xor esi, esi */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_15035440; /* 0x15035420: jmp 0x15035440 */
L_15035422:
    eax = edx + 0x40; /* 0x15035422: lea eax, [edx + 0x40] */
    PUSH32(esp, 0x3Au); /* 0x15035425: push 0x3a */
    MEM16(ebp + (-0xC)) = (uint16_t)(LO16(eax)); /* 0x15035427: mov word ptr [ebp - 0xc], ax */
    esi = ebp + (-0xC); /* 0x1503542B: lea esi, [ebp - 0xc] */
    eax = POP32_VAL(esp); /* 0x1503542E: pop eax */
    MEM16(ebp + (-0xA)) = (uint16_t)(LO16(eax)); /* 0x1503542F: mov word ptr [ebp - 0xa], ax */
    PUSH32(esp, 0x5Cu); /* 0x15035433: push 0x5c */
    eax = POP32_VAL(esp); /* 0x15035435: pop eax */
    MEM16(ebp + (-0x8)) = (uint16_t)(LO16(eax)); /* 0x15035436: mov word ptr [ebp - 8], ax */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1503543A: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM16(ebp + (-0x6)) = (uint16_t)(LO16(eax)); /* 0x1503543C: mov word ptr [ebp - 6], ax */
L_15035440:
    PUSH32(esp, ecx); /* 0x15035440: push ecx */
    eax = ecx + 0x4; /* 0x15035441: lea eax, [ecx + 4] */
    PUSH32(esp, eax); /* 0x15035444: push eax */
    eax = ecx + 0xC; /* 0x15035445: lea eax, [ecx + 0xc] */
    PUSH32(esp, eax); /* 0x15035448: push eax */
    eax = ecx + 0x8; /* 0x15035449: lea eax, [ecx + 8] */
    PUSH32(esp, eax); /* 0x1503544C: push eax */
    PUSH32(esp, esi); /* 0x1503544D: push esi */
    RECOMP_ICALL(MEM32(0x150C0094)); /* 0x1503544E: call dword ptr [0x150c0094] */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x15035454: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_15035474; /* 0x15035456: jne 0x15035474 */
L_15035458:
    RECOMP_ICALL(MEM32(0x150C006C)); /* 0x15035458: call dword ptr [0x150c006c] */
    RECOMP_FLAGS_IN();
    edi = eax; /* 0x1503545E: mov edi, eax */
    RECOMP_CALL(sub_15036430); /* 0x15035460: call 0x15036430 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, edi); /* 0x15035465: push edi */
    esi = eax; /* 0x15035466: mov esi, eax */
    RECOMP_CALL(sub_150364C5); /* 0x15035468: call 0x150364c5 */
    RECOMP_FLAGS_IN();
    MEM32(esi) = eax; /* 0x1503546D: mov dword ptr [esi], eax */
    eax = edi; /* 0x1503546F: mov eax, edi */
    ecx = POP32_VAL(esp); /* 0x15035471: pop ecx */
    goto L_15035476; /* 0x15035472: jmp 0x15035476 */
L_15035474:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x15035474: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
L_15035476:
    edi = POP32_VAL(esp); /* 0x15035476: pop edi */
    esi = POP32_VAL(esp); /* 0x15035477: pop esi */
L_15035478:
    ecx = MEM32(ebp + (-0x4)); /* 0x15035478: mov ecx, dword ptr [ebp - 4] */
    _flag_a = (uint32_t)((ecx ^ ebp)); _flag_b = (uint32_t)((ecx ^ ebp));
    ecx = ecx ^ ebp; /* 0x1503547B: xor ecx, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_1505E540); /* 0x1503547D: call 0x1505e540 */
    RECOMP_FLAGS_IN();
    esp = ebp; ebp = POP32_VAL(esp); /* 0x15035482: leave  */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x15035483: ret  */
    RECOMP_REGS_OUT();
}

void sub_15035490(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x15035490u);

L_15035490:
    { _itail_tgt = (uint32_t)(MEM32(0x150C0098)); goto _ljump; }
    { RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_150354A0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x150354A0u);

L_150354A0:
    edi = edi; /* 0x150354A0: mov edi, edi */
    PUSH32(esp, ebp); /* 0x150354A2: push ebp */
    ebp = esp; /* 0x150354A3: mov ebp, esp */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x150354A5: push dword ptr [ebp + 8] */
    RECOMP_ICALL(MEM32(0x150C0068)); /* 0x150354A8: call dword ptr [0x150c0068] */
    RECOMP_FLAGS_IN();
    ebp = POP32_VAL(esp); /* 0x150354AE: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x150354AF: ret  */
    RECOMP_REGS_OUT();
}

void sub_150354C0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x150354C0u);

L_150354C0:
    edi = edi; /* 0x150354C0: mov edi, edi */
    PUSH32(esp, ebp); /* 0x150354C2: push ebp */
    ebp = esp; /* 0x150354C3: mov ebp, esp */
    ebp = POP32_VAL(esp); /* 0x150354C5: pop ebp */
    goto L_150354D1; /* 0x150354C6: jmp 0x150354d1 */
L_150354D1:
    edi = edi; /* 0x150354D1: mov edi, edi */
    PUSH32(esp, ebp); /* 0x150354D3: push ebp */
    ebp = esp; /* 0x150354D4: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x254u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x254u; /* 0x150354D6: sub esp, 0x254 */
    _flag_k = FK_CMP;
    eax = MEM32(0x150BD340); /* 0x150354DC: mov eax, dword ptr [0x150bd340] */
    _flag_a = (uint32_t)((eax ^ ebp)); _flag_b = (uint32_t)((eax ^ ebp));
    eax = eax ^ ebp; /* 0x150354E1: xor eax, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x4)) = eax; /* 0x150354E3: mov dword ptr [ebp - 4], eax */
    eax = MEM32(ebp + 0x8); /* 0x150354E6: mov eax, dword ptr [ebp + 8] */
    PUSH32(esp, esi); /* 0x150354E9: push esi */
    esi = MEM32(ebp + 0xC); /* 0x150354EA: mov esi, dword ptr [ebp + 0xc] */
    /* test esi, esi */ /* 0x150354ED: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_15035513; /* 0x150354EF: jne 0x15035513 */
L_150354F1:
    RECOMP_CALL(sub_15036430); /* 0x150354F1: call 0x15036430 */
    RECOMP_FLAGS_IN();
    MEM32(eax) = 0x16u; /* 0x150354F6: mov dword ptr [eax], 0x16 */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x150354FC: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, eax); /* 0x150354FE: push eax */
    PUSH32(esp, eax); /* 0x150354FF: push eax */
    PUSH32(esp, eax); /* 0x15035500: push eax */
    PUSH32(esp, eax); /* 0x15035501: push eax */
    PUSH32(esp, eax); /* 0x15035502: push eax */
    RECOMP_CALL(sub_1505A110); /* 0x15035503: call 0x1505a110 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x14u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x14u; /* 0x15035508: add esp, 0x14 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)((eax | 0xFFFFFFFFu)); _flag_b = (uint32_t)((eax | 0xFFFFFFFFu));
    eax = eax | 0xFFFFFFFFu; /* 0x1503550B: or eax, 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_150355E5; /* 0x1503550E: jmp 0x150355e5 */
L_15035513:
    /* test eax, eax */ /* 0x15035513: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_Z(_flag_a, _flag_b)) goto L_150354F1; /* 0x15035515: je 0x150354f1 */
L_15035517:
    PUSH32(esp, edi); /* 0x15035517: push edi */
    ecx = ebp + (-0x254); /* 0x15035518: lea ecx, [ebp - 0x254] */
    PUSH32(esp, ecx); /* 0x1503551E: push ecx */
    PUSH32(esp, eax); /* 0x1503551F: push eax */
    RECOMP_ICALL(MEM32(0x150C009C)); /* 0x15035520: call dword ptr [0x150c009c] */
    RECOMP_FLAGS_IN();
    edi = eax; /* 0x15035526: mov edi, eax */
    /* cmp edi, 0xFFFFFFFFu */ /* 0x15035528: cmp edi, -1 */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(0xFFFFFFFFu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_1503556F; /* 0x1503552B: jne 0x1503556f */
L_1503552D:
    RECOMP_ICALL(MEM32(0x150C006C)); /* 0x1503552D: call dword ptr [0x150c006c] */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 2); /* 0x15035533: push 2 */
    esi = POP32_VAL(esp); /* 0x15035535: pop esi */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - esi; /* 0x15035536: sub eax, esi */
    _flag_k = FK_CMP;
    if (/* sub result */ CMP_EQ(_flag_a, _flag_b)) goto L_15035563; /* 0x15035538: je 0x15035563 */
L_1503553A:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - 1; /* 0x1503553A: sub eax, 1 */
    _flag_k = FK_CMP;
    if (/* sub result */ CMP_EQ(_flag_a, _flag_b)) goto L_15035563; /* 0x1503553D: je 0x15035563 */
L_1503553F:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(5);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - 5; /* 0x1503553F: sub eax, 5 */
    _flag_k = FK_CMP;
    if (/* sub result */ CMP_EQ(_flag_a, _flag_b)) goto L_15035556; /* 0x15035542: je 0x15035556 */
L_15035544:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xAu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - 0xAu; /* 0x15035544: sub eax, 0xa */
    _flag_k = FK_CMP;
    if (/* sub result */ CMP_EQ(_flag_a, _flag_b)) goto L_15035563; /* 0x15035547: je 0x15035563 */
L_15035549:
    RECOMP_CALL(sub_15036430); /* 0x15035549: call 0x15036430 */
    RECOMP_FLAGS_IN();
    MEM32(eax) = 0x16u; /* 0x1503554E: mov dword ptr [eax], 0x16 */
    goto L_1503556A; /* 0x15035554: jmp 0x1503556a */
L_15035556:
    RECOMP_CALL(sub_15036430); /* 0x15035556: call 0x15036430 */
    RECOMP_FLAGS_IN();
    MEM32(eax) = 0xCu; /* 0x1503555B: mov dword ptr [eax], 0xc */
    goto L_1503556A; /* 0x15035561: jmp 0x1503556a */
L_15035563:
    RECOMP_CALL(sub_15036430); /* 0x15035563: call 0x15036430 */
    RECOMP_FLAGS_IN();
    MEM32(eax) = esi; /* 0x15035568: mov dword ptr [eax], esi */
L_1503556A:
    _flag_a = (uint32_t)((eax | 0xFFFFFFFFu)); _flag_b = (uint32_t)((eax | 0xFFFFFFFFu));
    eax = eax | 0xFFFFFFFFu; /* 0x1503556A: or eax, 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_150355E4; /* 0x1503556D: jmp 0x150355e4 */
L_1503556F:
    eax = MEM32(ebp + (-0x254)); /* 0x1503556F: mov eax, dword ptr [ebp - 0x254] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x15035575: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp eax, 0x80u */ /* 0x15035577: cmp eax, 0x80 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x80u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) { eax = ecx; } /* 0x1503557C: cmove eax, ecx */
    MEM32(esi) = eax; /* 0x1503557F: mov dword ptr [esi], eax */
    eax = ebp + (-0x250); /* 0x15035581: lea eax, [ebp - 0x250] */
    PUSH32(esp, eax); /* 0x15035587: push eax */
    RECOMP_CALL(sub_15034B5F); /* 0x15035588: call 0x15034b5f */
    RECOMP_FLAGS_IN();
    MEM32(esi + 0x4) = eax; /* 0x1503558D: mov dword ptr [esi + 4], eax */
    eax = ebp + (-0x248); /* 0x15035590: lea eax, [ebp - 0x248] */
    PUSH32(esp, eax); /* 0x15035596: push eax */
    RECOMP_CALL(sub_15034B5F); /* 0x15035597: call 0x15034b5f */
    RECOMP_FLAGS_IN();
    MEM32(esi + 0x8) = eax; /* 0x1503559C: mov dword ptr [esi + 8], eax */
    eax = ebp + (-0x240); /* 0x1503559F: lea eax, [ebp - 0x240] */
    PUSH32(esp, eax); /* 0x150355A5: push eax */
    RECOMP_CALL(sub_15034B5F); /* 0x150355A6: call 0x15034b5f */
    RECOMP_FLAGS_IN();
    MEM32(esi + 0xC) = eax; /* 0x150355AB: mov dword ptr [esi + 0xc], eax */
    eax = MEM32(ebp + (-0x234)); /* 0x150355AE: mov eax, dword ptr [ebp - 0x234] */
    MEM32(esi + 0x10) = eax; /* 0x150355B4: mov dword ptr [esi + 0x10], eax */
    eax = ebp + (-0x228); /* 0x150355B7: lea eax, [ebp - 0x228] */
    PUSH32(esp, eax); /* 0x150355BD: push eax */
    eax = esi + 0x14; /* 0x150355BE: lea eax, [esi + 0x14] */
    PUSH32(esp, 0x104u); /* 0x150355C1: push 0x104 */
    PUSH32(esp, eax); /* 0x150355C6: push eax */
    RECOMP_CALL(sub_1508F250); /* 0x150355C7: call 0x1508f250 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x18u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x18u; /* 0x150355CC: add esp, 0x18 */
    _flag_k = FK_ADD;
    /* test eax, eax */ /* 0x150355CF: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_150355E2; /* 0x150355D1: je 0x150355e2 */
L_150355D3:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x150355D3: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, eax); /* 0x150355D5: push eax */
    PUSH32(esp, eax); /* 0x150355D6: push eax */
    PUSH32(esp, eax); /* 0x150355D7: push eax */
    PUSH32(esp, eax); /* 0x150355D8: push eax */
    PUSH32(esp, eax); /* 0x150355D9: push eax */
    RECOMP_CALL(sub_1505A11B); /* 0x150355DA: call 0x1505a11b */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x14u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x14u; /* 0x150355DF: add esp, 0x14 */
    _flag_k = FK_ADD;
L_150355E2:
    eax = edi; /* 0x150355E2: mov eax, edi */
L_150355E4:
    edi = POP32_VAL(esp); /* 0x150355E4: pop edi */
L_150355E5:
    ecx = MEM32(ebp + (-0x4)); /* 0x150355E5: mov ecx, dword ptr [ebp - 4] */
    _flag_a = (uint32_t)((ecx ^ ebp)); _flag_b = (uint32_t)((ecx ^ ebp));
    ecx = ecx ^ ebp; /* 0x150355E8: xor ecx, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    esi = POP32_VAL(esp); /* 0x150355EA: pop esi */
    RECOMP_CALL(sub_1505E540); /* 0x150355EB: call 0x1505e540 */
    RECOMP_FLAGS_IN();
    esp = ebp; ebp = POP32_VAL(esp); /* 0x150355F0: leave  */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x150355F1: ret  */
    RECOMP_REGS_OUT();
}

void sub_150354D1(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x150354D1u);

L_150354D1:
    edi = edi; /* 0x150354D1: mov edi, edi */
    PUSH32(esp, ebp); /* 0x150354D3: push ebp */
    ebp = esp; /* 0x150354D4: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x254u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x254u; /* 0x150354D6: sub esp, 0x254 */
    _flag_k = FK_CMP;
    eax = MEM32(0x150BD340); /* 0x150354DC: mov eax, dword ptr [0x150bd340] */
    _flag_a = (uint32_t)((eax ^ ebp)); _flag_b = (uint32_t)((eax ^ ebp));
    eax = eax ^ ebp; /* 0x150354E1: xor eax, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x4)) = eax; /* 0x150354E3: mov dword ptr [ebp - 4], eax */
    eax = MEM32(ebp + 0x8); /* 0x150354E6: mov eax, dword ptr [ebp + 8] */
    PUSH32(esp, esi); /* 0x150354E9: push esi */
    esi = MEM32(ebp + 0xC); /* 0x150354EA: mov esi, dword ptr [ebp + 0xc] */
    /* test esi, esi */ /* 0x150354ED: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_15035513; /* 0x150354EF: jne 0x15035513 */
L_150354F1:
    RECOMP_CALL(sub_15036430); /* 0x150354F1: call 0x15036430 */
    RECOMP_FLAGS_IN();
    MEM32(eax) = 0x16u; /* 0x150354F6: mov dword ptr [eax], 0x16 */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x150354FC: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, eax); /* 0x150354FE: push eax */
    PUSH32(esp, eax); /* 0x150354FF: push eax */
    PUSH32(esp, eax); /* 0x15035500: push eax */
    PUSH32(esp, eax); /* 0x15035501: push eax */
    PUSH32(esp, eax); /* 0x15035502: push eax */
    RECOMP_CALL(sub_1505A110); /* 0x15035503: call 0x1505a110 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x14u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x14u; /* 0x15035508: add esp, 0x14 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)((eax | 0xFFFFFFFFu)); _flag_b = (uint32_t)((eax | 0xFFFFFFFFu));
    eax = eax | 0xFFFFFFFFu; /* 0x1503550B: or eax, 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_150355E5; /* 0x1503550E: jmp 0x150355e5 */
L_15035513:
    /* test eax, eax */ /* 0x15035513: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_Z(_flag_a, _flag_b)) goto L_150354F1; /* 0x15035515: je 0x150354f1 */
L_15035517:
    PUSH32(esp, edi); /* 0x15035517: push edi */
    ecx = ebp + (-0x254); /* 0x15035518: lea ecx, [ebp - 0x254] */
    PUSH32(esp, ecx); /* 0x1503551E: push ecx */
    PUSH32(esp, eax); /* 0x1503551F: push eax */
    RECOMP_ICALL(MEM32(0x150C009C)); /* 0x15035520: call dword ptr [0x150c009c] */
    RECOMP_FLAGS_IN();
    edi = eax; /* 0x15035526: mov edi, eax */
    /* cmp edi, 0xFFFFFFFFu */ /* 0x15035528: cmp edi, -1 */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(0xFFFFFFFFu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_1503556F; /* 0x1503552B: jne 0x1503556f */
L_1503552D:
    RECOMP_ICALL(MEM32(0x150C006C)); /* 0x1503552D: call dword ptr [0x150c006c] */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 2); /* 0x15035533: push 2 */
    esi = POP32_VAL(esp); /* 0x15035535: pop esi */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - esi; /* 0x15035536: sub eax, esi */
    _flag_k = FK_CMP;
    if (/* sub result */ CMP_EQ(_flag_a, _flag_b)) goto L_15035563; /* 0x15035538: je 0x15035563 */
L_1503553A:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - 1; /* 0x1503553A: sub eax, 1 */
    _flag_k = FK_CMP;
    if (/* sub result */ CMP_EQ(_flag_a, _flag_b)) goto L_15035563; /* 0x1503553D: je 0x15035563 */
L_1503553F:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(5);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - 5; /* 0x1503553F: sub eax, 5 */
    _flag_k = FK_CMP;
    if (/* sub result */ CMP_EQ(_flag_a, _flag_b)) goto L_15035556; /* 0x15035542: je 0x15035556 */
L_15035544:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xAu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - 0xAu; /* 0x15035544: sub eax, 0xa */
    _flag_k = FK_CMP;
    if (/* sub result */ CMP_EQ(_flag_a, _flag_b)) goto L_15035563; /* 0x15035547: je 0x15035563 */
L_15035549:
    RECOMP_CALL(sub_15036430); /* 0x15035549: call 0x15036430 */
    RECOMP_FLAGS_IN();
    MEM32(eax) = 0x16u; /* 0x1503554E: mov dword ptr [eax], 0x16 */
    goto L_1503556A; /* 0x15035554: jmp 0x1503556a */
L_15035556:
    RECOMP_CALL(sub_15036430); /* 0x15035556: call 0x15036430 */
    RECOMP_FLAGS_IN();
    MEM32(eax) = 0xCu; /* 0x1503555B: mov dword ptr [eax], 0xc */
    goto L_1503556A; /* 0x15035561: jmp 0x1503556a */
L_15035563:
    RECOMP_CALL(sub_15036430); /* 0x15035563: call 0x15036430 */
    RECOMP_FLAGS_IN();
    MEM32(eax) = esi; /* 0x15035568: mov dword ptr [eax], esi */
L_1503556A:
    _flag_a = (uint32_t)((eax | 0xFFFFFFFFu)); _flag_b = (uint32_t)((eax | 0xFFFFFFFFu));
    eax = eax | 0xFFFFFFFFu; /* 0x1503556A: or eax, 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_150355E4; /* 0x1503556D: jmp 0x150355e4 */
L_1503556F:
    eax = MEM32(ebp + (-0x254)); /* 0x1503556F: mov eax, dword ptr [ebp - 0x254] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x15035575: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp eax, 0x80u */ /* 0x15035577: cmp eax, 0x80 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x80u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) { eax = ecx; } /* 0x1503557C: cmove eax, ecx */
    MEM32(esi) = eax; /* 0x1503557F: mov dword ptr [esi], eax */
    eax = ebp + (-0x250); /* 0x15035581: lea eax, [ebp - 0x250] */
    PUSH32(esp, eax); /* 0x15035587: push eax */
    RECOMP_CALL(sub_15034B5F); /* 0x15035588: call 0x15034b5f */
    RECOMP_FLAGS_IN();
    MEM32(esi + 0x4) = eax; /* 0x1503558D: mov dword ptr [esi + 4], eax */
    eax = ebp + (-0x248); /* 0x15035590: lea eax, [ebp - 0x248] */
    PUSH32(esp, eax); /* 0x15035596: push eax */
    RECOMP_CALL(sub_15034B5F); /* 0x15035597: call 0x15034b5f */
    RECOMP_FLAGS_IN();
    MEM32(esi + 0x8) = eax; /* 0x1503559C: mov dword ptr [esi + 8], eax */
    eax = ebp + (-0x240); /* 0x1503559F: lea eax, [ebp - 0x240] */
    PUSH32(esp, eax); /* 0x150355A5: push eax */
    RECOMP_CALL(sub_15034B5F); /* 0x150355A6: call 0x15034b5f */
    RECOMP_FLAGS_IN();
    MEM32(esi + 0xC) = eax; /* 0x150355AB: mov dword ptr [esi + 0xc], eax */
    eax = MEM32(ebp + (-0x234)); /* 0x150355AE: mov eax, dword ptr [ebp - 0x234] */
    MEM32(esi + 0x10) = eax; /* 0x150355B4: mov dword ptr [esi + 0x10], eax */
    eax = ebp + (-0x228); /* 0x150355B7: lea eax, [ebp - 0x228] */
    PUSH32(esp, eax); /* 0x150355BD: push eax */
    eax = esi + 0x14; /* 0x150355BE: lea eax, [esi + 0x14] */
    PUSH32(esp, 0x104u); /* 0x150355C1: push 0x104 */
    PUSH32(esp, eax); /* 0x150355C6: push eax */
    RECOMP_CALL(sub_1508F250); /* 0x150355C7: call 0x1508f250 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x18u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x18u; /* 0x150355CC: add esp, 0x18 */
    _flag_k = FK_ADD;
    /* test eax, eax */ /* 0x150355CF: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_150355E2; /* 0x150355D1: je 0x150355e2 */
L_150355D3:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x150355D3: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, eax); /* 0x150355D5: push eax */
    PUSH32(esp, eax); /* 0x150355D6: push eax */
    PUSH32(esp, eax); /* 0x150355D7: push eax */
    PUSH32(esp, eax); /* 0x150355D8: push eax */
    PUSH32(esp, eax); /* 0x150355D9: push eax */
    RECOMP_CALL(sub_1505A11B); /* 0x150355DA: call 0x1505a11b */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x14u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x14u; /* 0x150355DF: add esp, 0x14 */
    _flag_k = FK_ADD;
L_150355E2:
    eax = edi; /* 0x150355E2: mov eax, edi */
L_150355E4:
    edi = POP32_VAL(esp); /* 0x150355E4: pop edi */
L_150355E5:
    ecx = MEM32(ebp + (-0x4)); /* 0x150355E5: mov ecx, dword ptr [ebp - 4] */
    _flag_a = (uint32_t)((ecx ^ ebp)); _flag_b = (uint32_t)((ecx ^ ebp));
    ecx = ecx ^ ebp; /* 0x150355E8: xor ecx, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    esi = POP32_VAL(esp); /* 0x150355EA: pop esi */
    RECOMP_CALL(sub_1505E540); /* 0x150355EB: call 0x1505e540 */
    RECOMP_FLAGS_IN();
    esp = ebp; ebp = POP32_VAL(esp); /* 0x150355F0: leave  */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x150355F1: ret  */
    RECOMP_REGS_OUT();
}

void sub_15035600(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x15035600u);

L_15035600:
    edi = edi; /* 0x15035600: mov edi, edi */
    PUSH32(esp, ebp); /* 0x15035602: push ebp */
    ebp = esp; /* 0x15035603: mov ebp, esp */
    ebp = POP32_VAL(esp); /* 0x15035605: pop ebp */
    goto L_15035611; /* 0x15035606: jmp 0x15035611 */
L_15035611:
    edi = edi; /* 0x15035611: mov edi, edi */
    PUSH32(esp, ebp); /* 0x15035613: push ebp */
    ebp = esp; /* 0x15035614: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x254u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x254u; /* 0x15035616: sub esp, 0x254 */
    _flag_k = FK_CMP;
    eax = MEM32(0x150BD340); /* 0x1503561C: mov eax, dword ptr [0x150bd340] */
    _flag_a = (uint32_t)((eax ^ ebp)); _flag_b = (uint32_t)((eax ^ ebp));
    eax = eax ^ ebp; /* 0x15035621: xor eax, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x4)) = eax; /* 0x15035623: mov dword ptr [ebp - 4], eax */
    eax = MEM32(ebp + 0x8); /* 0x15035626: mov eax, dword ptr [ebp + 8] */
    PUSH32(esp, esi); /* 0x15035629: push esi */
    esi = MEM32(ebp + 0xC); /* 0x1503562A: mov esi, dword ptr [ebp + 0xc] */
    /* cmp eax, 0xFFFFFFFFu */ /* 0x1503562D: cmp eax, -1 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xFFFFFFFFu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_15035654; /* 0x15035630: jne 0x15035654 */
L_15035632:
    RECOMP_CALL(sub_15036430); /* 0x15035632: call 0x15036430 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x15035637: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, ecx); /* 0x15035639: push ecx */
    PUSH32(esp, ecx); /* 0x1503563A: push ecx */
    PUSH32(esp, ecx); /* 0x1503563B: push ecx */
    PUSH32(esp, ecx); /* 0x1503563C: push ecx */
    PUSH32(esp, ecx); /* 0x1503563D: push ecx */
    MEM32(eax) = 0x16u; /* 0x1503563E: mov dword ptr [eax], 0x16 */
    RECOMP_CALL(sub_1505A110); /* 0x15035644: call 0x1505a110 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x14u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x14u; /* 0x15035649: add esp, 0x14 */
    _flag_k = FK_ADD;
L_1503564C:
    _flag_a = (uint32_t)((eax | 0xFFFFFFFFu)); _flag_b = (uint32_t)((eax | 0xFFFFFFFFu));
    eax = eax | 0xFFFFFFFFu; /* 0x1503564C: or eax, 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_1503571E; /* 0x1503564F: jmp 0x1503571e */
L_15035654:
    /* test esi, esi */ /* 0x15035654: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_Z(_flag_a, _flag_b)) goto L_15035632; /* 0x15035656: je 0x15035632 */
L_15035658:
    ecx = ebp + (-0x254); /* 0x15035658: lea ecx, [ebp - 0x254] */
    PUSH32(esp, ecx); /* 0x1503565E: push ecx */
    PUSH32(esp, eax); /* 0x1503565F: push eax */
    RECOMP_ICALL(MEM32(0x150C00A0)); /* 0x15035660: call dword ptr [0x150c00a0] */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x15035666: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_150356A9; /* 0x15035668: jne 0x150356a9 */
L_1503566A:
    RECOMP_ICALL(MEM32(0x150C006C)); /* 0x1503566A: call dword ptr [0x150c006c] */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 2); /* 0x15035670: push 2 */
    esi = POP32_VAL(esp); /* 0x15035672: pop esi */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - esi; /* 0x15035673: sub eax, esi */
    _flag_k = FK_CMP;
    if (/* sub result */ CMP_EQ(_flag_a, _flag_b)) goto L_150356A0; /* 0x15035675: je 0x150356a0 */
L_15035677:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - 1; /* 0x15035677: sub eax, 1 */
    _flag_k = FK_CMP;
    if (/* sub result */ CMP_EQ(_flag_a, _flag_b)) goto L_150356A0; /* 0x1503567A: je 0x150356a0 */
L_1503567C:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(5);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - 5; /* 0x1503567C: sub eax, 5 */
    _flag_k = FK_CMP;
    if (/* sub result */ CMP_EQ(_flag_a, _flag_b)) goto L_15035693; /* 0x1503567F: je 0x15035693 */
L_15035681:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xAu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - 0xAu; /* 0x15035681: sub eax, 0xa */
    _flag_k = FK_CMP;
    if (/* sub result */ CMP_EQ(_flag_a, _flag_b)) goto L_150356A0; /* 0x15035684: je 0x150356a0 */
L_15035686:
    RECOMP_CALL(sub_15036430); /* 0x15035686: call 0x15036430 */
    RECOMP_FLAGS_IN();
    MEM32(eax) = 0x16u; /* 0x1503568B: mov dword ptr [eax], 0x16 */
    RECOMP_BACKEDGE();
    goto L_1503564C; /* 0x15035691: jmp 0x1503564c */
L_15035693:
    RECOMP_CALL(sub_15036430); /* 0x15035693: call 0x15036430 */
    RECOMP_FLAGS_IN();
    MEM32(eax) = 0xCu; /* 0x15035698: mov dword ptr [eax], 0xc */
    RECOMP_BACKEDGE();
    goto L_1503564C; /* 0x1503569E: jmp 0x1503564c */
L_150356A0:
    RECOMP_CALL(sub_15036430); /* 0x150356A0: call 0x15036430 */
    RECOMP_FLAGS_IN();
    MEM32(eax) = esi; /* 0x150356A5: mov dword ptr [eax], esi */
    RECOMP_BACKEDGE();
    goto L_1503564C; /* 0x150356A7: jmp 0x1503564c */
L_150356A9:
    eax = MEM32(ebp + (-0x254)); /* 0x150356A9: mov eax, dword ptr [ebp - 0x254] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x150356AF: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp eax, 0x80u */ /* 0x150356B1: cmp eax, 0x80 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x80u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) { eax = ecx; } /* 0x150356B6: cmove eax, ecx */
    MEM32(esi) = eax; /* 0x150356B9: mov dword ptr [esi], eax */
    eax = ebp + (-0x250); /* 0x150356BB: lea eax, [ebp - 0x250] */
    PUSH32(esp, eax); /* 0x150356C1: push eax */
    RECOMP_CALL(sub_15034B5F); /* 0x150356C2: call 0x15034b5f */
    RECOMP_FLAGS_IN();
    MEM32(esi + 0x4) = eax; /* 0x150356C7: mov dword ptr [esi + 4], eax */
    eax = ebp + (-0x248); /* 0x150356CA: lea eax, [ebp - 0x248] */
    PUSH32(esp, eax); /* 0x150356D0: push eax */
    RECOMP_CALL(sub_15034B5F); /* 0x150356D1: call 0x15034b5f */
    RECOMP_FLAGS_IN();
    MEM32(esi + 0x8) = eax; /* 0x150356D6: mov dword ptr [esi + 8], eax */
    eax = ebp + (-0x240); /* 0x150356D9: lea eax, [ebp - 0x240] */
    PUSH32(esp, eax); /* 0x150356DF: push eax */
    RECOMP_CALL(sub_15034B5F); /* 0x150356E0: call 0x15034b5f */
    RECOMP_FLAGS_IN();
    MEM32(esi + 0xC) = eax; /* 0x150356E5: mov dword ptr [esi + 0xc], eax */
    eax = MEM32(ebp + (-0x234)); /* 0x150356E8: mov eax, dword ptr [ebp - 0x234] */
    MEM32(esi + 0x10) = eax; /* 0x150356EE: mov dword ptr [esi + 0x10], eax */
    eax = ebp + (-0x228); /* 0x150356F1: lea eax, [ebp - 0x228] */
    PUSH32(esp, eax); /* 0x150356F7: push eax */
    eax = esi + 0x14; /* 0x150356F8: lea eax, [esi + 0x14] */
    PUSH32(esp, 0x104u); /* 0x150356FB: push 0x104 */
    PUSH32(esp, eax); /* 0x15035700: push eax */
    RECOMP_CALL(sub_1508F250); /* 0x15035701: call 0x1508f250 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x18u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x18u; /* 0x15035706: add esp, 0x18 */
    _flag_k = FK_ADD;
    /* test eax, eax */ /* 0x15035709: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1503571C; /* 0x1503570B: je 0x1503571c */
L_1503570D:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x1503570D: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, ecx); /* 0x1503570F: push ecx */
    PUSH32(esp, ecx); /* 0x15035710: push ecx */
    PUSH32(esp, ecx); /* 0x15035711: push ecx */
    PUSH32(esp, ecx); /* 0x15035712: push ecx */
    PUSH32(esp, ecx); /* 0x15035713: push ecx */
    RECOMP_CALL(sub_1505A11B); /* 0x15035714: call 0x1505a11b */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x14u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x14u; /* 0x15035719: add esp, 0x14 */
    _flag_k = FK_ADD;
L_1503571C:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1503571C: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
L_1503571E:
    ecx = MEM32(ebp + (-0x4)); /* 0x1503571E: mov ecx, dword ptr [ebp - 4] */
    _flag_a = (uint32_t)((ecx ^ ebp)); _flag_b = (uint32_t)((ecx ^ ebp));
    ecx = ecx ^ ebp; /* 0x15035721: xor ecx, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    esi = POP32_VAL(esp); /* 0x15035723: pop esi */
    RECOMP_CALL(sub_1505E540); /* 0x15035724: call 0x1505e540 */
    RECOMP_FLAGS_IN();
    esp = ebp; ebp = POP32_VAL(esp); /* 0x15035729: leave  */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1503572A: ret  */
    RECOMP_REGS_OUT();
}

void sub_15035611(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x15035611u);

L_15035611:
    edi = edi; /* 0x15035611: mov edi, edi */
    PUSH32(esp, ebp); /* 0x15035613: push ebp */
    ebp = esp; /* 0x15035614: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x254u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x254u; /* 0x15035616: sub esp, 0x254 */
    _flag_k = FK_CMP;
    eax = MEM32(0x150BD340); /* 0x1503561C: mov eax, dword ptr [0x150bd340] */
    _flag_a = (uint32_t)((eax ^ ebp)); _flag_b = (uint32_t)((eax ^ ebp));
    eax = eax ^ ebp; /* 0x15035621: xor eax, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x4)) = eax; /* 0x15035623: mov dword ptr [ebp - 4], eax */
    eax = MEM32(ebp + 0x8); /* 0x15035626: mov eax, dword ptr [ebp + 8] */
    PUSH32(esp, esi); /* 0x15035629: push esi */
    esi = MEM32(ebp + 0xC); /* 0x1503562A: mov esi, dword ptr [ebp + 0xc] */
    /* cmp eax, 0xFFFFFFFFu */ /* 0x1503562D: cmp eax, -1 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xFFFFFFFFu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_15035654; /* 0x15035630: jne 0x15035654 */
L_15035632:
    RECOMP_CALL(sub_15036430); /* 0x15035632: call 0x15036430 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x15035637: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, ecx); /* 0x15035639: push ecx */
    PUSH32(esp, ecx); /* 0x1503563A: push ecx */
    PUSH32(esp, ecx); /* 0x1503563B: push ecx */
    PUSH32(esp, ecx); /* 0x1503563C: push ecx */
    PUSH32(esp, ecx); /* 0x1503563D: push ecx */
    MEM32(eax) = 0x16u; /* 0x1503563E: mov dword ptr [eax], 0x16 */
    RECOMP_CALL(sub_1505A110); /* 0x15035644: call 0x1505a110 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x14u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x14u; /* 0x15035649: add esp, 0x14 */
    _flag_k = FK_ADD;
L_1503564C:
    _flag_a = (uint32_t)((eax | 0xFFFFFFFFu)); _flag_b = (uint32_t)((eax | 0xFFFFFFFFu));
    eax = eax | 0xFFFFFFFFu; /* 0x1503564C: or eax, 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_1503571E; /* 0x1503564F: jmp 0x1503571e */
L_15035654:
    /* test esi, esi */ /* 0x15035654: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_Z(_flag_a, _flag_b)) goto L_15035632; /* 0x15035656: je 0x15035632 */
L_15035658:
    ecx = ebp + (-0x254); /* 0x15035658: lea ecx, [ebp - 0x254] */
    PUSH32(esp, ecx); /* 0x1503565E: push ecx */
    PUSH32(esp, eax); /* 0x1503565F: push eax */
    RECOMP_ICALL(MEM32(0x150C00A0)); /* 0x15035660: call dword ptr [0x150c00a0] */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x15035666: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_150356A9; /* 0x15035668: jne 0x150356a9 */
L_1503566A:
    RECOMP_ICALL(MEM32(0x150C006C)); /* 0x1503566A: call dword ptr [0x150c006c] */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 2); /* 0x15035670: push 2 */
    esi = POP32_VAL(esp); /* 0x15035672: pop esi */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - esi; /* 0x15035673: sub eax, esi */
    _flag_k = FK_CMP;
    if (/* sub result */ CMP_EQ(_flag_a, _flag_b)) goto L_150356A0; /* 0x15035675: je 0x150356a0 */
L_15035677:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - 1; /* 0x15035677: sub eax, 1 */
    _flag_k = FK_CMP;
    if (/* sub result */ CMP_EQ(_flag_a, _flag_b)) goto L_150356A0; /* 0x1503567A: je 0x150356a0 */
L_1503567C:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(5);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - 5; /* 0x1503567C: sub eax, 5 */
    _flag_k = FK_CMP;
    if (/* sub result */ CMP_EQ(_flag_a, _flag_b)) goto L_15035693; /* 0x1503567F: je 0x15035693 */
L_15035681:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xAu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - 0xAu; /* 0x15035681: sub eax, 0xa */
    _flag_k = FK_CMP;
    if (/* sub result */ CMP_EQ(_flag_a, _flag_b)) goto L_150356A0; /* 0x15035684: je 0x150356a0 */
L_15035686:
    RECOMP_CALL(sub_15036430); /* 0x15035686: call 0x15036430 */
    RECOMP_FLAGS_IN();
    MEM32(eax) = 0x16u; /* 0x1503568B: mov dword ptr [eax], 0x16 */
    RECOMP_BACKEDGE();
    goto L_1503564C; /* 0x15035691: jmp 0x1503564c */
L_15035693:
    RECOMP_CALL(sub_15036430); /* 0x15035693: call 0x15036430 */
    RECOMP_FLAGS_IN();
    MEM32(eax) = 0xCu; /* 0x15035698: mov dword ptr [eax], 0xc */
    RECOMP_BACKEDGE();
    goto L_1503564C; /* 0x1503569E: jmp 0x1503564c */
L_150356A0:
    RECOMP_CALL(sub_15036430); /* 0x150356A0: call 0x15036430 */
    RECOMP_FLAGS_IN();
    MEM32(eax) = esi; /* 0x150356A5: mov dword ptr [eax], esi */
    RECOMP_BACKEDGE();
    goto L_1503564C; /* 0x150356A7: jmp 0x1503564c */
L_150356A9:
    eax = MEM32(ebp + (-0x254)); /* 0x150356A9: mov eax, dword ptr [ebp - 0x254] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x150356AF: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp eax, 0x80u */ /* 0x150356B1: cmp eax, 0x80 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x80u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) { eax = ecx; } /* 0x150356B6: cmove eax, ecx */
    MEM32(esi) = eax; /* 0x150356B9: mov dword ptr [esi], eax */
    eax = ebp + (-0x250); /* 0x150356BB: lea eax, [ebp - 0x250] */
    PUSH32(esp, eax); /* 0x150356C1: push eax */
    RECOMP_CALL(sub_15034B5F); /* 0x150356C2: call 0x15034b5f */
    RECOMP_FLAGS_IN();
    MEM32(esi + 0x4) = eax; /* 0x150356C7: mov dword ptr [esi + 4], eax */
    eax = ebp + (-0x248); /* 0x150356CA: lea eax, [ebp - 0x248] */
    PUSH32(esp, eax); /* 0x150356D0: push eax */
    RECOMP_CALL(sub_15034B5F); /* 0x150356D1: call 0x15034b5f */
    RECOMP_FLAGS_IN();
    MEM32(esi + 0x8) = eax; /* 0x150356D6: mov dword ptr [esi + 8], eax */
    eax = ebp + (-0x240); /* 0x150356D9: lea eax, [ebp - 0x240] */
    PUSH32(esp, eax); /* 0x150356DF: push eax */
    RECOMP_CALL(sub_15034B5F); /* 0x150356E0: call 0x15034b5f */
    RECOMP_FLAGS_IN();
    MEM32(esi + 0xC) = eax; /* 0x150356E5: mov dword ptr [esi + 0xc], eax */
    eax = MEM32(ebp + (-0x234)); /* 0x150356E8: mov eax, dword ptr [ebp - 0x234] */
    MEM32(esi + 0x10) = eax; /* 0x150356EE: mov dword ptr [esi + 0x10], eax */
    eax = ebp + (-0x228); /* 0x150356F1: lea eax, [ebp - 0x228] */
    PUSH32(esp, eax); /* 0x150356F7: push eax */
    eax = esi + 0x14; /* 0x150356F8: lea eax, [esi + 0x14] */
    PUSH32(esp, 0x104u); /* 0x150356FB: push 0x104 */
    PUSH32(esp, eax); /* 0x15035700: push eax */
    RECOMP_CALL(sub_1508F250); /* 0x15035701: call 0x1508f250 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x18u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x18u; /* 0x15035706: add esp, 0x18 */
    _flag_k = FK_ADD;
    /* test eax, eax */ /* 0x15035709: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1503571C; /* 0x1503570B: je 0x1503571c */
L_1503570D:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x1503570D: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, ecx); /* 0x1503570F: push ecx */
    PUSH32(esp, ecx); /* 0x15035710: push ecx */
    PUSH32(esp, ecx); /* 0x15035711: push ecx */
    PUSH32(esp, ecx); /* 0x15035712: push ecx */
    PUSH32(esp, ecx); /* 0x15035713: push ecx */
    RECOMP_CALL(sub_1505A11B); /* 0x15035714: call 0x1505a11b */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x14u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x14u; /* 0x15035719: add esp, 0x14 */
    _flag_k = FK_ADD;
L_1503571C:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1503571C: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
L_1503571E:
    ecx = MEM32(ebp + (-0x4)); /* 0x1503571E: mov ecx, dword ptr [ebp - 4] */
    _flag_a = (uint32_t)((ecx ^ ebp)); _flag_b = (uint32_t)((ecx ^ ebp));
    ecx = ecx ^ ebp; /* 0x15035721: xor ecx, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    esi = POP32_VAL(esp); /* 0x15035723: pop esi */
    RECOMP_CALL(sub_1505E540); /* 0x15035724: call 0x1505e540 */
    RECOMP_FLAGS_IN();
    esp = ebp; ebp = POP32_VAL(esp); /* 0x15035729: leave  */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1503572A: ret  */
    RECOMP_REGS_OUT();
}

void sub_15035740(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x15035740u);

L_15035740:
    edi = edi; /* 0x15035740: mov edi, edi */
    PUSH32(esp, ebp); /* 0x15035742: push ebp */
    ebp = esp; /* 0x15035743: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x254u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x254u; /* 0x15035745: sub esp, 0x254 */
    _flag_k = FK_CMP;
    eax = MEM32(0x150BD340); /* 0x1503574B: mov eax, dword ptr [0x150bd340] */
    _flag_a = (uint32_t)((eax ^ ebp)); _flag_b = (uint32_t)((eax ^ ebp));
    eax = eax ^ ebp; /* 0x15035750: xor eax, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x4)) = eax; /* 0x15035752: mov dword ptr [ebp - 4], eax */
    eax = MEM32(ebp + 0x8); /* 0x15035755: mov eax, dword ptr [ebp + 8] */
    PUSH32(esp, esi); /* 0x15035758: push esi */
    PUSH32(esp, edi); /* 0x15035759: push edi */
    edi = MEM32(ebp + 0xC); /* 0x1503575A: mov edi, dword ptr [ebp + 0xc] */
    /* test edi, edi */ /* 0x1503575D: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_15035783; /* 0x1503575F: jne 0x15035783 */
L_15035761:
    RECOMP_CALL(sub_15036430); /* 0x15035761: call 0x15036430 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    esi = 0; /* 0x15035766: xor esi, esi */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, esi); /* 0x15035768: push esi */
    PUSH32(esp, esi); /* 0x15035769: push esi */
    PUSH32(esp, esi); /* 0x1503576A: push esi */
    PUSH32(esp, esi); /* 0x1503576B: push esi */
    PUSH32(esp, esi); /* 0x1503576C: push esi */
    MEM32(eax) = 0x16u; /* 0x1503576D: mov dword ptr [eax], 0x16 */
    RECOMP_CALL(sub_1505A110); /* 0x15035773: call 0x1505a110 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x14u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x14u; /* 0x15035778: add esp, 0x14 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)((eax | 0xFFFFFFFFu)); _flag_b = (uint32_t)((eax | 0xFFFFFFFFu));
    eax = eax | 0xFFFFFFFFu; /* 0x1503577B: or eax, 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_1503586F; /* 0x1503577E: jmp 0x1503586f */
L_15035783:
    /* test eax, eax */ /* 0x15035783: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_Z(_flag_a, _flag_b)) goto L_15035761; /* 0x15035785: je 0x15035761 */
L_15035787:
    PUSH32(esp, ebx); /* 0x15035787: push ebx */
    ecx = ebp + (-0x254); /* 0x15035788: lea ecx, [ebp - 0x254] */
    PUSH32(esp, ecx); /* 0x1503578E: push ecx */
    PUSH32(esp, eax); /* 0x1503578F: push eax */
    RECOMP_ICALL(MEM32(0x150C009C)); /* 0x15035790: call dword ptr [0x150c009c] */
    RECOMP_FLAGS_IN();
    ebx = eax; /* 0x15035796: mov ebx, eax */
    /* cmp ebx, 0xFFFFFFFFu */ /* 0x15035798: cmp ebx, -1 */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(0xFFFFFFFFu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_150357E2; /* 0x1503579B: jne 0x150357e2 */
L_1503579D:
    RECOMP_ICALL(MEM32(0x150C006C)); /* 0x1503579D: call dword ptr [0x150c006c] */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 2); /* 0x150357A3: push 2 */
    esi = POP32_VAL(esp); /* 0x150357A5: pop esi */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - esi; /* 0x150357A6: sub eax, esi */
    _flag_k = FK_CMP;
    if (/* sub result */ CMP_EQ(_flag_a, _flag_b)) goto L_150357D3; /* 0x150357A8: je 0x150357d3 */
L_150357AA:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - 1; /* 0x150357AA: sub eax, 1 */
    _flag_k = FK_CMP;
    if (/* sub result */ CMP_EQ(_flag_a, _flag_b)) goto L_150357D3; /* 0x150357AD: je 0x150357d3 */
L_150357AF:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(5);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - 5; /* 0x150357AF: sub eax, 5 */
    _flag_k = FK_CMP;
    if (/* sub result */ CMP_EQ(_flag_a, _flag_b)) goto L_150357C6; /* 0x150357B2: je 0x150357c6 */
L_150357B4:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xAu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - 0xAu; /* 0x150357B4: sub eax, 0xa */
    _flag_k = FK_CMP;
    if (/* sub result */ CMP_EQ(_flag_a, _flag_b)) goto L_150357D3; /* 0x150357B7: je 0x150357d3 */
L_150357B9:
    RECOMP_CALL(sub_15036430); /* 0x150357B9: call 0x15036430 */
    RECOMP_FLAGS_IN();
    MEM32(eax) = 0x16u; /* 0x150357BE: mov dword ptr [eax], 0x16 */
    goto L_150357DA; /* 0x150357C4: jmp 0x150357da */
L_150357C6:
    RECOMP_CALL(sub_15036430); /* 0x150357C6: call 0x15036430 */
    RECOMP_FLAGS_IN();
    MEM32(eax) = 0xCu; /* 0x150357CB: mov dword ptr [eax], 0xc */
    goto L_150357DA; /* 0x150357D1: jmp 0x150357da */
L_150357D3:
    RECOMP_CALL(sub_15036430); /* 0x150357D3: call 0x15036430 */
    RECOMP_FLAGS_IN();
    MEM32(eax) = esi; /* 0x150357D8: mov dword ptr [eax], esi */
L_150357DA:
    _flag_a = (uint32_t)((eax | 0xFFFFFFFFu)); _flag_b = (uint32_t)((eax | 0xFFFFFFFFu));
    eax = eax | 0xFFFFFFFFu; /* 0x150357DA: or eax, 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_1503586E; /* 0x150357DD: jmp 0x1503586e */
L_150357E2:
    eax = MEM32(ebp + (-0x254)); /* 0x150357E2: mov eax, dword ptr [ebp - 0x254] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x150357E8: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp eax, 0x80u */ /* 0x150357EA: cmp eax, 0x80 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x80u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) { eax = ecx; } /* 0x150357EF: cmove eax, ecx */
    MEM32(edi) = eax; /* 0x150357F2: mov dword ptr [edi], eax */
    eax = ebp + (-0x250); /* 0x150357F4: lea eax, [ebp - 0x250] */
    PUSH32(esp, eax); /* 0x150357FA: push eax */
    RECOMP_CALL(sub_15035C71); /* 0x150357FB: call 0x15035c71 */
    RECOMP_FLAGS_IN();
    MEM32(edi + 0x8) = eax; /* 0x15035800: mov dword ptr [edi + 8], eax */
    eax = ebp + (-0x248); /* 0x15035803: lea eax, [ebp - 0x248] */
    PUSH32(esp, eax); /* 0x15035809: push eax */
    MEM32(edi + 0xC) = edx; /* 0x1503580A: mov dword ptr [edi + 0xc], edx */
    RECOMP_CALL(sub_15035C71); /* 0x1503580D: call 0x15035c71 */
    RECOMP_FLAGS_IN();
    MEM32(edi + 0x10) = eax; /* 0x15035812: mov dword ptr [edi + 0x10], eax */
    eax = ebp + (-0x240); /* 0x15035815: lea eax, [ebp - 0x240] */
    PUSH32(esp, eax); /* 0x1503581B: push eax */
    MEM32(edi + 0x14) = edx; /* 0x1503581C: mov dword ptr [edi + 0x14], edx */
    RECOMP_CALL(sub_15035C71); /* 0x1503581F: call 0x15035c71 */
    RECOMP_FLAGS_IN();
    ecx = MEM32(ebp + (-0x238)); /* 0x15035824: mov ecx, dword ptr [ebp - 0x238] */
    MEM32(edi + 0x18) = eax; /* 0x1503582A: mov dword ptr [edi + 0x18], eax */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1503582D: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(ebp + (-0x234)));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + MEM32(ebp + (-0x234)); /* 0x1503582F: add eax, dword ptr [ebp - 0x234] */
    _flag_k = FK_ADD;
    PUSH32(esp, 0); /* 0x15035835: push 0 */
    esi = POP32_VAL(esp); /* 0x15035837: pop esi */
    MEM32(edi + 0x20) = eax; /* 0x15035838: mov dword ptr [edi + 0x20], eax */
    { uint32_t _aa = ecx, _ab = esi, _ac = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x1503583B: adc ecx, esi */
      ecx = _aa + _ab + _ac;
      _flag_a = recomp_flags_adc(_aa, _ab, _ac); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    eax = ebp + (-0x228); /* 0x1503583D: lea eax, [ebp - 0x228] */
    MEM32(edi + 0x1C) = edx; /* 0x15035843: mov dword ptr [edi + 0x1c], edx */
    PUSH32(esp, eax); /* 0x15035846: push eax */
    eax = edi + 0x28; /* 0x15035847: lea eax, [edi + 0x28] */
    MEM32(edi + 0x24) = ecx; /* 0x1503584A: mov dword ptr [edi + 0x24], ecx */
    PUSH32(esp, 0x104u); /* 0x1503584D: push 0x104 */
    PUSH32(esp, eax); /* 0x15035852: push eax */
    RECOMP_CALL(sub_1508F250); /* 0x15035853: call 0x1508f250 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x18u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x18u; /* 0x15035858: add esp, 0x18 */
    _flag_k = FK_ADD;
    /* test eax, eax */ /* 0x1503585B: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1503586C; /* 0x1503585D: je 0x1503586c */
L_1503585F:
    PUSH32(esp, esi); /* 0x1503585F: push esi */
    PUSH32(esp, esi); /* 0x15035860: push esi */
    PUSH32(esp, esi); /* 0x15035861: push esi */
    PUSH32(esp, esi); /* 0x15035862: push esi */
    PUSH32(esp, esi); /* 0x15035863: push esi */
    RECOMP_CALL(sub_1505A11B); /* 0x15035864: call 0x1505a11b */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x14u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x14u; /* 0x15035869: add esp, 0x14 */
    _flag_k = FK_ADD;
L_1503586C:
    eax = ebx; /* 0x1503586C: mov eax, ebx */
L_1503586E:
    ebx = POP32_VAL(esp); /* 0x1503586E: pop ebx */
L_1503586F:
    ecx = MEM32(ebp + (-0x4)); /* 0x1503586F: mov ecx, dword ptr [ebp - 4] */
    edi = POP32_VAL(esp); /* 0x15035872: pop edi */
    _flag_a = (uint32_t)((ecx ^ ebp)); _flag_b = (uint32_t)((ecx ^ ebp));
    ecx = ecx ^ ebp; /* 0x15035873: xor ecx, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    esi = POP32_VAL(esp); /* 0x15035875: pop esi */
    RECOMP_CALL(sub_1505E540); /* 0x15035876: call 0x1505e540 */
    RECOMP_FLAGS_IN();
    esp = ebp; ebp = POP32_VAL(esp); /* 0x1503587B: leave  */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1503587C: ret  */
    RECOMP_REGS_OUT();
}

void sub_15035890(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x15035890u);

L_15035890:
    edi = edi; /* 0x15035890: mov edi, edi */
    PUSH32(esp, ebp); /* 0x15035892: push ebp */
    ebp = esp; /* 0x15035893: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x254u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x254u; /* 0x15035895: sub esp, 0x254 */
    _flag_k = FK_CMP;
    eax = MEM32(0x150BD340); /* 0x1503589B: mov eax, dword ptr [0x150bd340] */
    _flag_a = (uint32_t)((eax ^ ebp)); _flag_b = (uint32_t)((eax ^ ebp));
    eax = eax ^ ebp; /* 0x150358A0: xor eax, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x4)) = eax; /* 0x150358A2: mov dword ptr [ebp - 4], eax */
    eax = MEM32(ebp + 0x8); /* 0x150358A5: mov eax, dword ptr [ebp + 8] */
    PUSH32(esp, esi); /* 0x150358A8: push esi */
    PUSH32(esp, edi); /* 0x150358A9: push edi */
    edi = MEM32(ebp + 0xC); /* 0x150358AA: mov edi, dword ptr [ebp + 0xc] */
    /* cmp eax, 0xFFFFFFFFu */ /* 0x150358AD: cmp eax, -1 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xFFFFFFFFu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_150358D4; /* 0x150358B0: jne 0x150358d4 */
L_150358B2:
    RECOMP_CALL(sub_15036430); /* 0x150358B2: call 0x15036430 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    esi = 0; /* 0x150358B7: xor esi, esi */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, esi); /* 0x150358B9: push esi */
    PUSH32(esp, esi); /* 0x150358BA: push esi */
    PUSH32(esp, esi); /* 0x150358BB: push esi */
    PUSH32(esp, esi); /* 0x150358BC: push esi */
    PUSH32(esp, esi); /* 0x150358BD: push esi */
    MEM32(eax) = 0x16u; /* 0x150358BE: mov dword ptr [eax], 0x16 */
    RECOMP_CALL(sub_1505A110); /* 0x150358C4: call 0x1505a110 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x14u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x14u; /* 0x150358C9: add esp, 0x14 */
    _flag_k = FK_ADD;
L_150358CC:
    _flag_a = (uint32_t)((eax | 0xFFFFFFFFu)); _flag_b = (uint32_t)((eax | 0xFFFFFFFFu));
    eax = eax | 0xFFFFFFFFu; /* 0x150358CC: or eax, 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_150359B5; /* 0x150358CF: jmp 0x150359b5 */
L_150358D4:
    /* test edi, edi */ /* 0x150358D4: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_Z(_flag_a, _flag_b)) goto L_150358B2; /* 0x150358D6: je 0x150358b2 */
L_150358D8:
    ecx = ebp + (-0x254); /* 0x150358D8: lea ecx, [ebp - 0x254] */
    PUSH32(esp, ecx); /* 0x150358DE: push ecx */
    PUSH32(esp, eax); /* 0x150358DF: push eax */
    RECOMP_ICALL(MEM32(0x150C00A0)); /* 0x150358E0: call dword ptr [0x150c00a0] */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x150358E6: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_15035929; /* 0x150358E8: jne 0x15035929 */
L_150358EA:
    RECOMP_ICALL(MEM32(0x150C006C)); /* 0x150358EA: call dword ptr [0x150c006c] */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 2); /* 0x150358F0: push 2 */
    esi = POP32_VAL(esp); /* 0x150358F2: pop esi */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - esi; /* 0x150358F3: sub eax, esi */
    _flag_k = FK_CMP;
    if (/* sub result */ CMP_EQ(_flag_a, _flag_b)) goto L_15035920; /* 0x150358F5: je 0x15035920 */
L_150358F7:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - 1; /* 0x150358F7: sub eax, 1 */
    _flag_k = FK_CMP;
    if (/* sub result */ CMP_EQ(_flag_a, _flag_b)) goto L_15035920; /* 0x150358FA: je 0x15035920 */
L_150358FC:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(5);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - 5; /* 0x150358FC: sub eax, 5 */
    _flag_k = FK_CMP;
    if (/* sub result */ CMP_EQ(_flag_a, _flag_b)) goto L_15035913; /* 0x150358FF: je 0x15035913 */
L_15035901:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xAu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - 0xAu; /* 0x15035901: sub eax, 0xa */
    _flag_k = FK_CMP;
    if (/* sub result */ CMP_EQ(_flag_a, _flag_b)) goto L_15035920; /* 0x15035904: je 0x15035920 */
L_15035906:
    RECOMP_CALL(sub_15036430); /* 0x15035906: call 0x15036430 */
    RECOMP_FLAGS_IN();
    MEM32(eax) = 0x16u; /* 0x1503590B: mov dword ptr [eax], 0x16 */
    RECOMP_BACKEDGE();
    goto L_150358CC; /* 0x15035911: jmp 0x150358cc */
L_15035913:
    RECOMP_CALL(sub_15036430); /* 0x15035913: call 0x15036430 */
    RECOMP_FLAGS_IN();
    MEM32(eax) = 0xCu; /* 0x15035918: mov dword ptr [eax], 0xc */
    RECOMP_BACKEDGE();
    goto L_150358CC; /* 0x1503591E: jmp 0x150358cc */
L_15035920:
    RECOMP_CALL(sub_15036430); /* 0x15035920: call 0x15036430 */
    RECOMP_FLAGS_IN();
    MEM32(eax) = esi; /* 0x15035925: mov dword ptr [eax], esi */
    RECOMP_BACKEDGE();
    goto L_150358CC; /* 0x15035927: jmp 0x150358cc */
L_15035929:
    eax = MEM32(ebp + (-0x254)); /* 0x15035929: mov eax, dword ptr [ebp - 0x254] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x1503592F: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp eax, 0x80u */ /* 0x15035931: cmp eax, 0x80 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x80u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) { eax = ecx; } /* 0x15035936: cmove eax, ecx */
    MEM32(edi) = eax; /* 0x15035939: mov dword ptr [edi], eax */
    eax = ebp + (-0x250); /* 0x1503593B: lea eax, [ebp - 0x250] */
    PUSH32(esp, eax); /* 0x15035941: push eax */
    RECOMP_CALL(sub_15035C71); /* 0x15035942: call 0x15035c71 */
    RECOMP_FLAGS_IN();
    MEM32(edi + 0x8) = eax; /* 0x15035947: mov dword ptr [edi + 8], eax */
    eax = ebp + (-0x248); /* 0x1503594A: lea eax, [ebp - 0x248] */
    PUSH32(esp, eax); /* 0x15035950: push eax */
    MEM32(edi + 0xC) = edx; /* 0x15035951: mov dword ptr [edi + 0xc], edx */
    RECOMP_CALL(sub_15035C71); /* 0x15035954: call 0x15035c71 */
    RECOMP_FLAGS_IN();
    MEM32(edi + 0x10) = eax; /* 0x15035959: mov dword ptr [edi + 0x10], eax */
    eax = ebp + (-0x240); /* 0x1503595C: lea eax, [ebp - 0x240] */
    PUSH32(esp, eax); /* 0x15035962: push eax */
    MEM32(edi + 0x14) = edx; /* 0x15035963: mov dword ptr [edi + 0x14], edx */
    RECOMP_CALL(sub_15035C71); /* 0x15035966: call 0x15035c71 */
    RECOMP_FLAGS_IN();
    ecx = MEM32(ebp + (-0x238)); /* 0x1503596B: mov ecx, dword ptr [ebp - 0x238] */
    MEM32(edi + 0x18) = eax; /* 0x15035971: mov dword ptr [edi + 0x18], eax */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x15035974: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(ebp + (-0x234)));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + MEM32(ebp + (-0x234)); /* 0x15035976: add eax, dword ptr [ebp - 0x234] */
    _flag_k = FK_ADD;
    PUSH32(esp, 0); /* 0x1503597C: push 0 */
    esi = POP32_VAL(esp); /* 0x1503597E: pop esi */
    MEM32(edi + 0x20) = eax; /* 0x1503597F: mov dword ptr [edi + 0x20], eax */
    { uint32_t _aa = ecx, _ab = esi, _ac = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x15035982: adc ecx, esi */
      ecx = _aa + _ab + _ac;
      _flag_a = recomp_flags_adc(_aa, _ab, _ac); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    eax = ebp + (-0x228); /* 0x15035984: lea eax, [ebp - 0x228] */
    MEM32(edi + 0x1C) = edx; /* 0x1503598A: mov dword ptr [edi + 0x1c], edx */
    PUSH32(esp, eax); /* 0x1503598D: push eax */
    eax = edi + 0x28; /* 0x1503598E: lea eax, [edi + 0x28] */
    MEM32(edi + 0x24) = ecx; /* 0x15035991: mov dword ptr [edi + 0x24], ecx */
    PUSH32(esp, 0x104u); /* 0x15035994: push 0x104 */
    PUSH32(esp, eax); /* 0x15035999: push eax */
    RECOMP_CALL(sub_1508F250); /* 0x1503599A: call 0x1508f250 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x18u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x18u; /* 0x1503599F: add esp, 0x18 */
    _flag_k = FK_ADD;
    /* test eax, eax */ /* 0x150359A2: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_150359B3; /* 0x150359A4: je 0x150359b3 */
L_150359A6:
    PUSH32(esp, esi); /* 0x150359A6: push esi */
    PUSH32(esp, esi); /* 0x150359A7: push esi */
    PUSH32(esp, esi); /* 0x150359A8: push esi */
    PUSH32(esp, esi); /* 0x150359A9: push esi */
    PUSH32(esp, esi); /* 0x150359AA: push esi */
    RECOMP_CALL(sub_1505A11B); /* 0x150359AB: call 0x1505a11b */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x14u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x14u; /* 0x150359B0: add esp, 0x14 */
    _flag_k = FK_ADD;
L_150359B3:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x150359B3: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
L_150359B5:
    ecx = MEM32(ebp + (-0x4)); /* 0x150359B5: mov ecx, dword ptr [ebp - 4] */
    edi = POP32_VAL(esp); /* 0x150359B8: pop edi */
    _flag_a = (uint32_t)((ecx ^ ebp)); _flag_b = (uint32_t)((ecx ^ ebp));
    ecx = ecx ^ ebp; /* 0x150359B9: xor ecx, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    esi = POP32_VAL(esp); /* 0x150359BB: pop esi */
    RECOMP_CALL(sub_1505E540); /* 0x150359BC: call 0x1505e540 */
    RECOMP_FLAGS_IN();
    esp = ebp; ebp = POP32_VAL(esp); /* 0x150359C1: leave  */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x150359C2: ret  */
    RECOMP_REGS_OUT();
}

void sub_150359C9(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x150359C9u);

L_150359C9:
    edi = edi; /* 0x150359C9: mov edi, edi */
    PUSH32(esp, ebp); /* 0x150359CB: push ebp */
    ebp = esp; /* 0x150359CC: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x254u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x254u; /* 0x150359CE: sub esp, 0x254 */
    _flag_k = FK_CMP;
    eax = MEM32(0x150BD340); /* 0x150359D4: mov eax, dword ptr [0x150bd340] */
    _flag_a = (uint32_t)((eax ^ ebp)); _flag_b = (uint32_t)((eax ^ ebp));
    eax = eax ^ ebp; /* 0x150359D9: xor eax, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x4)) = eax; /* 0x150359DB: mov dword ptr [ebp - 4], eax */
    eax = MEM32(ebp + 0x8); /* 0x150359DE: mov eax, dword ptr [ebp + 8] */
    PUSH32(esp, esi); /* 0x150359E1: push esi */
    PUSH32(esp, edi); /* 0x150359E2: push edi */
    edi = MEM32(ebp + 0xC); /* 0x150359E3: mov edi, dword ptr [ebp + 0xc] */
    /* test edi, edi */ /* 0x150359E6: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_15035A0C; /* 0x150359E8: jne 0x15035a0c */
L_150359EA:
    RECOMP_CALL(sub_15036430); /* 0x150359EA: call 0x15036430 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    esi = 0; /* 0x150359EF: xor esi, esi */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, esi); /* 0x150359F1: push esi */
    PUSH32(esp, esi); /* 0x150359F2: push esi */
    PUSH32(esp, esi); /* 0x150359F3: push esi */
    PUSH32(esp, esi); /* 0x150359F4: push esi */
    PUSH32(esp, esi); /* 0x150359F5: push esi */
    MEM32(eax) = 0x16u; /* 0x150359F6: mov dword ptr [eax], 0x16 */
    RECOMP_CALL(sub_1505A110); /* 0x150359FC: call 0x1505a110 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x14u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x14u; /* 0x15035A01: add esp, 0x14 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)((eax | 0xFFFFFFFFu)); _flag_b = (uint32_t)((eax | 0xFFFFFFFFu));
    eax = eax | 0xFFFFFFFFu; /* 0x15035A04: or eax, 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_15035AEF; /* 0x15035A07: jmp 0x15035aef */
L_15035A0C:
    /* test eax, eax */ /* 0x15035A0C: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_Z(_flag_a, _flag_b)) goto L_150359EA; /* 0x15035A0E: je 0x150359ea */
L_15035A10:
    PUSH32(esp, ebx); /* 0x15035A10: push ebx */
    ecx = ebp + (-0x254); /* 0x15035A11: lea ecx, [ebp - 0x254] */
    PUSH32(esp, ecx); /* 0x15035A17: push ecx */
    PUSH32(esp, eax); /* 0x15035A18: push eax */
    RECOMP_ICALL(MEM32(0x150C009C)); /* 0x15035A19: call dword ptr [0x150c009c] */
    RECOMP_FLAGS_IN();
    ebx = eax; /* 0x15035A1F: mov ebx, eax */
    /* cmp ebx, 0xFFFFFFFFu */ /* 0x15035A21: cmp ebx, -1 */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(0xFFFFFFFFu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_15035A6B; /* 0x15035A24: jne 0x15035a6b */
L_15035A26:
    RECOMP_ICALL(MEM32(0x150C006C)); /* 0x15035A26: call dword ptr [0x150c006c] */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 2); /* 0x15035A2C: push 2 */
    esi = POP32_VAL(esp); /* 0x15035A2E: pop esi */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - esi; /* 0x15035A2F: sub eax, esi */
    _flag_k = FK_CMP;
    if (/* sub result */ CMP_EQ(_flag_a, _flag_b)) goto L_15035A5C; /* 0x15035A31: je 0x15035a5c */
L_15035A33:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - 1; /* 0x15035A33: sub eax, 1 */
    _flag_k = FK_CMP;
    if (/* sub result */ CMP_EQ(_flag_a, _flag_b)) goto L_15035A5C; /* 0x15035A36: je 0x15035a5c */
L_15035A38:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(5);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - 5; /* 0x15035A38: sub eax, 5 */
    _flag_k = FK_CMP;
    if (/* sub result */ CMP_EQ(_flag_a, _flag_b)) goto L_15035A4F; /* 0x15035A3B: je 0x15035a4f */
L_15035A3D:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xAu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - 0xAu; /* 0x15035A3D: sub eax, 0xa */
    _flag_k = FK_CMP;
    if (/* sub result */ CMP_EQ(_flag_a, _flag_b)) goto L_15035A5C; /* 0x15035A40: je 0x15035a5c */
L_15035A42:
    RECOMP_CALL(sub_15036430); /* 0x15035A42: call 0x15036430 */
    RECOMP_FLAGS_IN();
    MEM32(eax) = 0x16u; /* 0x15035A47: mov dword ptr [eax], 0x16 */
    goto L_15035A63; /* 0x15035A4D: jmp 0x15035a63 */
L_15035A4F:
    RECOMP_CALL(sub_15036430); /* 0x15035A4F: call 0x15036430 */
    RECOMP_FLAGS_IN();
    MEM32(eax) = 0xCu; /* 0x15035A54: mov dword ptr [eax], 0xc */
    goto L_15035A63; /* 0x15035A5A: jmp 0x15035a63 */
L_15035A5C:
    RECOMP_CALL(sub_15036430); /* 0x15035A5C: call 0x15036430 */
    RECOMP_FLAGS_IN();
    MEM32(eax) = esi; /* 0x15035A61: mov dword ptr [eax], esi */
L_15035A63:
    _flag_a = (uint32_t)((eax | 0xFFFFFFFFu)); _flag_b = (uint32_t)((eax | 0xFFFFFFFFu));
    eax = eax | 0xFFFFFFFFu; /* 0x15035A63: or eax, 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_15035AEE; /* 0x15035A66: jmp 0x15035aee */
L_15035A6B:
    eax = MEM32(ebp + (-0x254)); /* 0x15035A6B: mov eax, dword ptr [ebp - 0x254] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x15035A71: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp eax, 0x80u */ /* 0x15035A73: cmp eax, 0x80 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x80u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) { eax = ecx; } /* 0x15035A78: cmove eax, ecx */
    MEM32(edi) = eax; /* 0x15035A7B: mov dword ptr [edi], eax */
    eax = ebp + (-0x250); /* 0x15035A7D: lea eax, [ebp - 0x250] */
    PUSH32(esp, eax); /* 0x15035A83: push eax */
    RECOMP_CALL(sub_15034B5F); /* 0x15035A84: call 0x15034b5f */
    RECOMP_FLAGS_IN();
    MEM32(edi + 0x4) = eax; /* 0x15035A89: mov dword ptr [edi + 4], eax */
    eax = ebp + (-0x248); /* 0x15035A8C: lea eax, [ebp - 0x248] */
    PUSH32(esp, eax); /* 0x15035A92: push eax */
    RECOMP_CALL(sub_15034B5F); /* 0x15035A93: call 0x15034b5f */
    RECOMP_FLAGS_IN();
    MEM32(edi + 0x8) = eax; /* 0x15035A98: mov dword ptr [edi + 8], eax */
    eax = ebp + (-0x240); /* 0x15035A9B: lea eax, [ebp - 0x240] */
    PUSH32(esp, eax); /* 0x15035AA1: push eax */
    RECOMP_CALL(sub_15034B5F); /* 0x15035AA2: call 0x15034b5f */
    RECOMP_FLAGS_IN();
    ecx = MEM32(ebp + (-0x238)); /* 0x15035AA7: mov ecx, dword ptr [ebp - 0x238] */
    MEM32(edi + 0xC) = eax; /* 0x15035AAD: mov dword ptr [edi + 0xc], eax */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x15035AB0: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(ebp + (-0x234)));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + MEM32(ebp + (-0x234)); /* 0x15035AB2: add eax, dword ptr [ebp - 0x234] */
    _flag_k = FK_ADD;
    PUSH32(esp, 0); /* 0x15035AB8: push 0 */
    esi = POP32_VAL(esp); /* 0x15035ABA: pop esi */
    MEM32(edi + 0x10) = eax; /* 0x15035ABB: mov dword ptr [edi + 0x10], eax */
    { uint32_t _aa = ecx, _ab = esi, _ac = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x15035ABE: adc ecx, esi */
      ecx = _aa + _ab + _ac;
      _flag_a = recomp_flags_adc(_aa, _ab, _ac); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    eax = ebp + (-0x228); /* 0x15035AC0: lea eax, [ebp - 0x228] */
    MEM32(edi + 0x14) = ecx; /* 0x15035AC6: mov dword ptr [edi + 0x14], ecx */
    PUSH32(esp, eax); /* 0x15035AC9: push eax */
    eax = edi + 0x18; /* 0x15035ACA: lea eax, [edi + 0x18] */
    PUSH32(esp, 0x104u); /* 0x15035ACD: push 0x104 */
    PUSH32(esp, eax); /* 0x15035AD2: push eax */
    RECOMP_CALL(sub_1508F250); /* 0x15035AD3: call 0x1508f250 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x18u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x18u; /* 0x15035AD8: add esp, 0x18 */
    _flag_k = FK_ADD;
    /* test eax, eax */ /* 0x15035ADB: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_15035AEC; /* 0x15035ADD: je 0x15035aec */
L_15035ADF:
    PUSH32(esp, esi); /* 0x15035ADF: push esi */
    PUSH32(esp, esi); /* 0x15035AE0: push esi */
    PUSH32(esp, esi); /* 0x15035AE1: push esi */
    PUSH32(esp, esi); /* 0x15035AE2: push esi */
    PUSH32(esp, esi); /* 0x15035AE3: push esi */
    RECOMP_CALL(sub_1505A11B); /* 0x15035AE4: call 0x1505a11b */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x14u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x14u; /* 0x15035AE9: add esp, 0x14 */
    _flag_k = FK_ADD;
L_15035AEC:
    eax = ebx; /* 0x15035AEC: mov eax, ebx */
L_15035AEE:
    ebx = POP32_VAL(esp); /* 0x15035AEE: pop ebx */
L_15035AEF:
    ecx = MEM32(ebp + (-0x4)); /* 0x15035AEF: mov ecx, dword ptr [ebp - 4] */
    edi = POP32_VAL(esp); /* 0x15035AF2: pop edi */
    _flag_a = (uint32_t)((ecx ^ ebp)); _flag_b = (uint32_t)((ecx ^ ebp));
    ecx = ecx ^ ebp; /* 0x15035AF3: xor ecx, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    esi = POP32_VAL(esp); /* 0x15035AF5: pop esi */
    RECOMP_CALL(sub_1505E540); /* 0x15035AF6: call 0x1505e540 */
    RECOMP_FLAGS_IN();
    esp = ebp; ebp = POP32_VAL(esp); /* 0x15035AFB: leave  */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x15035AFC: ret  */
    RECOMP_REGS_OUT();
}

void sub_15035B10(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x15035B10u);

    goto L_15035B10;
L_150359C9:
    edi = edi; /* 0x150359C9: mov edi, edi */
    PUSH32(esp, ebp); /* 0x150359CB: push ebp */
    ebp = esp; /* 0x150359CC: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x254u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x254u; /* 0x150359CE: sub esp, 0x254 */
    _flag_k = FK_CMP;
    eax = MEM32(0x150BD340); /* 0x150359D4: mov eax, dword ptr [0x150bd340] */
    _flag_a = (uint32_t)((eax ^ ebp)); _flag_b = (uint32_t)((eax ^ ebp));
    eax = eax ^ ebp; /* 0x150359D9: xor eax, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x4)) = eax; /* 0x150359DB: mov dword ptr [ebp - 4], eax */
    eax = MEM32(ebp + 0x8); /* 0x150359DE: mov eax, dword ptr [ebp + 8] */
    PUSH32(esp, esi); /* 0x150359E1: push esi */
    PUSH32(esp, edi); /* 0x150359E2: push edi */
    edi = MEM32(ebp + 0xC); /* 0x150359E3: mov edi, dword ptr [ebp + 0xc] */
    /* test edi, edi */ /* 0x150359E6: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_15035A0C; /* 0x150359E8: jne 0x15035a0c */
L_150359EA:
    RECOMP_CALL(sub_15036430); /* 0x150359EA: call 0x15036430 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    esi = 0; /* 0x150359EF: xor esi, esi */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, esi); /* 0x150359F1: push esi */
    PUSH32(esp, esi); /* 0x150359F2: push esi */
    PUSH32(esp, esi); /* 0x150359F3: push esi */
    PUSH32(esp, esi); /* 0x150359F4: push esi */
    PUSH32(esp, esi); /* 0x150359F5: push esi */
    MEM32(eax) = 0x16u; /* 0x150359F6: mov dword ptr [eax], 0x16 */
    RECOMP_CALL(sub_1505A110); /* 0x150359FC: call 0x1505a110 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x14u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x14u; /* 0x15035A01: add esp, 0x14 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)((eax | 0xFFFFFFFFu)); _flag_b = (uint32_t)((eax | 0xFFFFFFFFu));
    eax = eax | 0xFFFFFFFFu; /* 0x15035A04: or eax, 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_15035AEF; /* 0x15035A07: jmp 0x15035aef */
L_15035A0C:
    /* test eax, eax */ /* 0x15035A0C: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_Z(_flag_a, _flag_b)) goto L_150359EA; /* 0x15035A0E: je 0x150359ea */
L_15035A10:
    PUSH32(esp, ebx); /* 0x15035A10: push ebx */
    ecx = ebp + (-0x254); /* 0x15035A11: lea ecx, [ebp - 0x254] */
    PUSH32(esp, ecx); /* 0x15035A17: push ecx */
    PUSH32(esp, eax); /* 0x15035A18: push eax */
    RECOMP_ICALL(MEM32(0x150C009C)); /* 0x15035A19: call dword ptr [0x150c009c] */
    RECOMP_FLAGS_IN();
    ebx = eax; /* 0x15035A1F: mov ebx, eax */
    /* cmp ebx, 0xFFFFFFFFu */ /* 0x15035A21: cmp ebx, -1 */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(0xFFFFFFFFu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_15035A6B; /* 0x15035A24: jne 0x15035a6b */
L_15035A26:
    RECOMP_ICALL(MEM32(0x150C006C)); /* 0x15035A26: call dword ptr [0x150c006c] */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 2); /* 0x15035A2C: push 2 */
    esi = POP32_VAL(esp); /* 0x15035A2E: pop esi */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - esi; /* 0x15035A2F: sub eax, esi */
    _flag_k = FK_CMP;
    if (/* sub result */ CMP_EQ(_flag_a, _flag_b)) goto L_15035A5C; /* 0x15035A31: je 0x15035a5c */
L_15035A33:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - 1; /* 0x15035A33: sub eax, 1 */
    _flag_k = FK_CMP;
    if (/* sub result */ CMP_EQ(_flag_a, _flag_b)) goto L_15035A5C; /* 0x15035A36: je 0x15035a5c */
L_15035A38:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(5);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - 5; /* 0x15035A38: sub eax, 5 */
    _flag_k = FK_CMP;
    if (/* sub result */ CMP_EQ(_flag_a, _flag_b)) goto L_15035A4F; /* 0x15035A3B: je 0x15035a4f */
L_15035A3D:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xAu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - 0xAu; /* 0x15035A3D: sub eax, 0xa */
    _flag_k = FK_CMP;
    if (/* sub result */ CMP_EQ(_flag_a, _flag_b)) goto L_15035A5C; /* 0x15035A40: je 0x15035a5c */
L_15035A42:
    RECOMP_CALL(sub_15036430); /* 0x15035A42: call 0x15036430 */
    RECOMP_FLAGS_IN();
    MEM32(eax) = 0x16u; /* 0x15035A47: mov dword ptr [eax], 0x16 */
    goto L_15035A63; /* 0x15035A4D: jmp 0x15035a63 */
L_15035A4F:
    RECOMP_CALL(sub_15036430); /* 0x15035A4F: call 0x15036430 */
    RECOMP_FLAGS_IN();
    MEM32(eax) = 0xCu; /* 0x15035A54: mov dword ptr [eax], 0xc */
    goto L_15035A63; /* 0x15035A5A: jmp 0x15035a63 */
L_15035A5C:
    RECOMP_CALL(sub_15036430); /* 0x15035A5C: call 0x15036430 */
    RECOMP_FLAGS_IN();
    MEM32(eax) = esi; /* 0x15035A61: mov dword ptr [eax], esi */
L_15035A63:
    _flag_a = (uint32_t)((eax | 0xFFFFFFFFu)); _flag_b = (uint32_t)((eax | 0xFFFFFFFFu));
    eax = eax | 0xFFFFFFFFu; /* 0x15035A63: or eax, 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_15035AEE; /* 0x15035A66: jmp 0x15035aee */
L_15035A6B:
    eax = MEM32(ebp + (-0x254)); /* 0x15035A6B: mov eax, dword ptr [ebp - 0x254] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x15035A71: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp eax, 0x80u */ /* 0x15035A73: cmp eax, 0x80 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x80u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) { eax = ecx; } /* 0x15035A78: cmove eax, ecx */
    MEM32(edi) = eax; /* 0x15035A7B: mov dword ptr [edi], eax */
    eax = ebp + (-0x250); /* 0x15035A7D: lea eax, [ebp - 0x250] */
    PUSH32(esp, eax); /* 0x15035A83: push eax */
    RECOMP_CALL(sub_15034B5F); /* 0x15035A84: call 0x15034b5f */
    RECOMP_FLAGS_IN();
    MEM32(edi + 0x4) = eax; /* 0x15035A89: mov dword ptr [edi + 4], eax */
    eax = ebp + (-0x248); /* 0x15035A8C: lea eax, [ebp - 0x248] */
    PUSH32(esp, eax); /* 0x15035A92: push eax */
    RECOMP_CALL(sub_15034B5F); /* 0x15035A93: call 0x15034b5f */
    RECOMP_FLAGS_IN();
    MEM32(edi + 0x8) = eax; /* 0x15035A98: mov dword ptr [edi + 8], eax */
    eax = ebp + (-0x240); /* 0x15035A9B: lea eax, [ebp - 0x240] */
    PUSH32(esp, eax); /* 0x15035AA1: push eax */
    RECOMP_CALL(sub_15034B5F); /* 0x15035AA2: call 0x15034b5f */
    RECOMP_FLAGS_IN();
    ecx = MEM32(ebp + (-0x238)); /* 0x15035AA7: mov ecx, dword ptr [ebp - 0x238] */
    MEM32(edi + 0xC) = eax; /* 0x15035AAD: mov dword ptr [edi + 0xc], eax */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x15035AB0: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(ebp + (-0x234)));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + MEM32(ebp + (-0x234)); /* 0x15035AB2: add eax, dword ptr [ebp - 0x234] */
    _flag_k = FK_ADD;
    PUSH32(esp, 0); /* 0x15035AB8: push 0 */
    esi = POP32_VAL(esp); /* 0x15035ABA: pop esi */
    MEM32(edi + 0x10) = eax; /* 0x15035ABB: mov dword ptr [edi + 0x10], eax */
    { uint32_t _aa = ecx, _ab = esi, _ac = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x15035ABE: adc ecx, esi */
      ecx = _aa + _ab + _ac;
      _flag_a = recomp_flags_adc(_aa, _ab, _ac); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    eax = ebp + (-0x228); /* 0x15035AC0: lea eax, [ebp - 0x228] */
    MEM32(edi + 0x14) = ecx; /* 0x15035AC6: mov dword ptr [edi + 0x14], ecx */
    PUSH32(esp, eax); /* 0x15035AC9: push eax */
    eax = edi + 0x18; /* 0x15035ACA: lea eax, [edi + 0x18] */
    PUSH32(esp, 0x104u); /* 0x15035ACD: push 0x104 */
    PUSH32(esp, eax); /* 0x15035AD2: push eax */
    RECOMP_CALL(sub_1508F250); /* 0x15035AD3: call 0x1508f250 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x18u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x18u; /* 0x15035AD8: add esp, 0x18 */
    _flag_k = FK_ADD;
    /* test eax, eax */ /* 0x15035ADB: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_15035AEC; /* 0x15035ADD: je 0x15035aec */
L_15035ADF:
    PUSH32(esp, esi); /* 0x15035ADF: push esi */
    PUSH32(esp, esi); /* 0x15035AE0: push esi */
    PUSH32(esp, esi); /* 0x15035AE1: push esi */
    PUSH32(esp, esi); /* 0x15035AE2: push esi */
    PUSH32(esp, esi); /* 0x15035AE3: push esi */
    RECOMP_CALL(sub_1505A11B); /* 0x15035AE4: call 0x1505a11b */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x14u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x14u; /* 0x15035AE9: add esp, 0x14 */
    _flag_k = FK_ADD;
L_15035AEC:
    eax = ebx; /* 0x15035AEC: mov eax, ebx */
L_15035AEE:
    ebx = POP32_VAL(esp); /* 0x15035AEE: pop ebx */
L_15035AEF:
    ecx = MEM32(ebp + (-0x4)); /* 0x15035AEF: mov ecx, dword ptr [ebp - 4] */
    edi = POP32_VAL(esp); /* 0x15035AF2: pop edi */
    _flag_a = (uint32_t)((ecx ^ ebp)); _flag_b = (uint32_t)((ecx ^ ebp));
    ecx = ecx ^ ebp; /* 0x15035AF3: xor ecx, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    esi = POP32_VAL(esp); /* 0x15035AF5: pop esi */
    RECOMP_CALL(sub_1505E540); /* 0x15035AF6: call 0x1505e540 */
    RECOMP_FLAGS_IN();
    esp = ebp; ebp = POP32_VAL(esp); /* 0x15035AFB: leave  */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x15035AFC: ret  */
L_15035B10:
    edi = edi; /* 0x15035B10: mov edi, edi */
    PUSH32(esp, ebp); /* 0x15035B12: push ebp */
    ebp = esp; /* 0x15035B13: mov ebp, esp */
    ebp = POP32_VAL(esp); /* 0x15035B15: pop ebp */
    RECOMP_BACKEDGE();
    goto L_150359C9; /* 0x15035B16: jmp 0x150359c9 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    RECOMP_REGS_OUT();
}

void sub_15035B21(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x15035B21u);

L_15035B21:
    edi = edi; /* 0x15035B21: mov edi, edi */
    PUSH32(esp, ebp); /* 0x15035B23: push ebp */
    ebp = esp; /* 0x15035B24: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x254u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x254u; /* 0x15035B26: sub esp, 0x254 */
    _flag_k = FK_CMP;
    eax = MEM32(0x150BD340); /* 0x15035B2C: mov eax, dword ptr [0x150bd340] */
    _flag_a = (uint32_t)((eax ^ ebp)); _flag_b = (uint32_t)((eax ^ ebp));
    eax = eax ^ ebp; /* 0x15035B31: xor eax, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x4)) = eax; /* 0x15035B33: mov dword ptr [ebp - 4], eax */
    eax = MEM32(ebp + 0x8); /* 0x15035B36: mov eax, dword ptr [ebp + 8] */
    PUSH32(esp, esi); /* 0x15035B39: push esi */
    PUSH32(esp, edi); /* 0x15035B3A: push edi */
    edi = MEM32(ebp + 0xC); /* 0x15035B3B: mov edi, dword ptr [ebp + 0xc] */
    /* cmp eax, 0xFFFFFFFFu */ /* 0x15035B3E: cmp eax, -1 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xFFFFFFFFu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_15035B65; /* 0x15035B41: jne 0x15035b65 */
L_15035B43:
    RECOMP_CALL(sub_15036430); /* 0x15035B43: call 0x15036430 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    esi = 0; /* 0x15035B48: xor esi, esi */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, esi); /* 0x15035B4A: push esi */
    PUSH32(esp, esi); /* 0x15035B4B: push esi */
    PUSH32(esp, esi); /* 0x15035B4C: push esi */
    PUSH32(esp, esi); /* 0x15035B4D: push esi */
    PUSH32(esp, esi); /* 0x15035B4E: push esi */
    MEM32(eax) = 0x16u; /* 0x15035B4F: mov dword ptr [eax], 0x16 */
    RECOMP_CALL(sub_1505A110); /* 0x15035B55: call 0x1505a110 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x14u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x14u; /* 0x15035B5A: add esp, 0x14 */
    _flag_k = FK_ADD;
L_15035B5D:
    _flag_a = (uint32_t)((eax | 0xFFFFFFFFu)); _flag_b = (uint32_t)((eax | 0xFFFFFFFFu));
    eax = eax | 0xFFFFFFFFu; /* 0x15035B5D: or eax, 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_15035C3D; /* 0x15035B60: jmp 0x15035c3d */
L_15035B65:
    /* test edi, edi */ /* 0x15035B65: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_Z(_flag_a, _flag_b)) goto L_15035B43; /* 0x15035B67: je 0x15035b43 */
L_15035B69:
    ecx = ebp + (-0x254); /* 0x15035B69: lea ecx, [ebp - 0x254] */
    PUSH32(esp, ecx); /* 0x15035B6F: push ecx */
    PUSH32(esp, eax); /* 0x15035B70: push eax */
    RECOMP_ICALL(MEM32(0x150C00A0)); /* 0x15035B71: call dword ptr [0x150c00a0] */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x15035B77: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_15035BBA; /* 0x15035B79: jne 0x15035bba */
L_15035B7B:
    RECOMP_ICALL(MEM32(0x150C006C)); /* 0x15035B7B: call dword ptr [0x150c006c] */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 2); /* 0x15035B81: push 2 */
    esi = POP32_VAL(esp); /* 0x15035B83: pop esi */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - esi; /* 0x15035B84: sub eax, esi */
    _flag_k = FK_CMP;
    if (/* sub result */ CMP_EQ(_flag_a, _flag_b)) goto L_15035BB1; /* 0x15035B86: je 0x15035bb1 */
L_15035B88:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - 1; /* 0x15035B88: sub eax, 1 */
    _flag_k = FK_CMP;
    if (/* sub result */ CMP_EQ(_flag_a, _flag_b)) goto L_15035BB1; /* 0x15035B8B: je 0x15035bb1 */
L_15035B8D:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(5);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - 5; /* 0x15035B8D: sub eax, 5 */
    _flag_k = FK_CMP;
    if (/* sub result */ CMP_EQ(_flag_a, _flag_b)) goto L_15035BA4; /* 0x15035B90: je 0x15035ba4 */
L_15035B92:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xAu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - 0xAu; /* 0x15035B92: sub eax, 0xa */
    _flag_k = FK_CMP;
    if (/* sub result */ CMP_EQ(_flag_a, _flag_b)) goto L_15035BB1; /* 0x15035B95: je 0x15035bb1 */
L_15035B97:
    RECOMP_CALL(sub_15036430); /* 0x15035B97: call 0x15036430 */
    RECOMP_FLAGS_IN();
    MEM32(eax) = 0x16u; /* 0x15035B9C: mov dword ptr [eax], 0x16 */
    RECOMP_BACKEDGE();
    goto L_15035B5D; /* 0x15035BA2: jmp 0x15035b5d */
L_15035BA4:
    RECOMP_CALL(sub_15036430); /* 0x15035BA4: call 0x15036430 */
    RECOMP_FLAGS_IN();
    MEM32(eax) = 0xCu; /* 0x15035BA9: mov dword ptr [eax], 0xc */
    RECOMP_BACKEDGE();
    goto L_15035B5D; /* 0x15035BAF: jmp 0x15035b5d */
L_15035BB1:
    RECOMP_CALL(sub_15036430); /* 0x15035BB1: call 0x15036430 */
    RECOMP_FLAGS_IN();
    MEM32(eax) = esi; /* 0x15035BB6: mov dword ptr [eax], esi */
    RECOMP_BACKEDGE();
    goto L_15035B5D; /* 0x15035BB8: jmp 0x15035b5d */
L_15035BBA:
    eax = MEM32(ebp + (-0x254)); /* 0x15035BBA: mov eax, dword ptr [ebp - 0x254] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x15035BC0: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp eax, 0x80u */ /* 0x15035BC2: cmp eax, 0x80 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x80u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) { eax = ecx; } /* 0x15035BC7: cmove eax, ecx */
    MEM32(edi) = eax; /* 0x15035BCA: mov dword ptr [edi], eax */
    eax = ebp + (-0x250); /* 0x15035BCC: lea eax, [ebp - 0x250] */
    PUSH32(esp, eax); /* 0x15035BD2: push eax */
    RECOMP_CALL(sub_15034B5F); /* 0x15035BD3: call 0x15034b5f */
    RECOMP_FLAGS_IN();
    MEM32(edi + 0x4) = eax; /* 0x15035BD8: mov dword ptr [edi + 4], eax */
    eax = ebp + (-0x248); /* 0x15035BDB: lea eax, [ebp - 0x248] */
    PUSH32(esp, eax); /* 0x15035BE1: push eax */
    RECOMP_CALL(sub_15034B5F); /* 0x15035BE2: call 0x15034b5f */
    RECOMP_FLAGS_IN();
    MEM32(edi + 0x8) = eax; /* 0x15035BE7: mov dword ptr [edi + 8], eax */
    eax = ebp + (-0x240); /* 0x15035BEA: lea eax, [ebp - 0x240] */
    PUSH32(esp, eax); /* 0x15035BF0: push eax */
    RECOMP_CALL(sub_15034B5F); /* 0x15035BF1: call 0x15034b5f */
    RECOMP_FLAGS_IN();
    ecx = MEM32(ebp + (-0x238)); /* 0x15035BF6: mov ecx, dword ptr [ebp - 0x238] */
    MEM32(edi + 0xC) = eax; /* 0x15035BFC: mov dword ptr [edi + 0xc], eax */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x15035BFF: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(ebp + (-0x234)));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + MEM32(ebp + (-0x234)); /* 0x15035C01: add eax, dword ptr [ebp - 0x234] */
    _flag_k = FK_ADD;
    PUSH32(esp, 0); /* 0x15035C07: push 0 */
    esi = POP32_VAL(esp); /* 0x15035C09: pop esi */
    MEM32(edi + 0x10) = eax; /* 0x15035C0A: mov dword ptr [edi + 0x10], eax */
    { uint32_t _aa = ecx, _ab = esi, _ac = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x15035C0D: adc ecx, esi */
      ecx = _aa + _ab + _ac;
      _flag_a = recomp_flags_adc(_aa, _ab, _ac); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    eax = ebp + (-0x228); /* 0x15035C0F: lea eax, [ebp - 0x228] */
    MEM32(edi + 0x14) = ecx; /* 0x15035C15: mov dword ptr [edi + 0x14], ecx */
    PUSH32(esp, eax); /* 0x15035C18: push eax */
    eax = edi + 0x18; /* 0x15035C19: lea eax, [edi + 0x18] */
    PUSH32(esp, 0x104u); /* 0x15035C1C: push 0x104 */
    PUSH32(esp, eax); /* 0x15035C21: push eax */
    RECOMP_CALL(sub_1508F250); /* 0x15035C22: call 0x1508f250 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x18u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x18u; /* 0x15035C27: add esp, 0x18 */
    _flag_k = FK_ADD;
    /* test eax, eax */ /* 0x15035C2A: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_15035C3B; /* 0x15035C2C: je 0x15035c3b */
L_15035C2E:
    PUSH32(esp, esi); /* 0x15035C2E: push esi */
    PUSH32(esp, esi); /* 0x15035C2F: push esi */
    PUSH32(esp, esi); /* 0x15035C30: push esi */
    PUSH32(esp, esi); /* 0x15035C31: push esi */
    PUSH32(esp, esi); /* 0x15035C32: push esi */
    RECOMP_CALL(sub_1505A11B); /* 0x15035C33: call 0x1505a11b */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x14u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x14u; /* 0x15035C38: add esp, 0x14 */
    _flag_k = FK_ADD;
L_15035C3B:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x15035C3B: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
L_15035C3D:
    ecx = MEM32(ebp + (-0x4)); /* 0x15035C3D: mov ecx, dword ptr [ebp - 4] */
    edi = POP32_VAL(esp); /* 0x15035C40: pop edi */
    _flag_a = (uint32_t)((ecx ^ ebp)); _flag_b = (uint32_t)((ecx ^ ebp));
    ecx = ecx ^ ebp; /* 0x15035C41: xor ecx, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    esi = POP32_VAL(esp); /* 0x15035C43: pop esi */
    RECOMP_CALL(sub_1505E540); /* 0x15035C44: call 0x1505e540 */
    RECOMP_FLAGS_IN();
    esp = ebp; ebp = POP32_VAL(esp); /* 0x15035C49: leave  */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x15035C4A: ret  */
    RECOMP_REGS_OUT();
}

void sub_15035C60(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x15035C60u);

    goto L_15035C60;
L_15035B21:
    edi = edi; /* 0x15035B21: mov edi, edi */
    PUSH32(esp, ebp); /* 0x15035B23: push ebp */
    ebp = esp; /* 0x15035B24: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x254u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x254u; /* 0x15035B26: sub esp, 0x254 */
    _flag_k = FK_CMP;
    eax = MEM32(0x150BD340); /* 0x15035B2C: mov eax, dword ptr [0x150bd340] */
    _flag_a = (uint32_t)((eax ^ ebp)); _flag_b = (uint32_t)((eax ^ ebp));
    eax = eax ^ ebp; /* 0x15035B31: xor eax, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x4)) = eax; /* 0x15035B33: mov dword ptr [ebp - 4], eax */
    eax = MEM32(ebp + 0x8); /* 0x15035B36: mov eax, dword ptr [ebp + 8] */
    PUSH32(esp, esi); /* 0x15035B39: push esi */
    PUSH32(esp, edi); /* 0x15035B3A: push edi */
    edi = MEM32(ebp + 0xC); /* 0x15035B3B: mov edi, dword ptr [ebp + 0xc] */
    /* cmp eax, 0xFFFFFFFFu */ /* 0x15035B3E: cmp eax, -1 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xFFFFFFFFu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_15035B65; /* 0x15035B41: jne 0x15035b65 */
L_15035B43:
    RECOMP_CALL(sub_15036430); /* 0x15035B43: call 0x15036430 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    esi = 0; /* 0x15035B48: xor esi, esi */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, esi); /* 0x15035B4A: push esi */
    PUSH32(esp, esi); /* 0x15035B4B: push esi */
    PUSH32(esp, esi); /* 0x15035B4C: push esi */
    PUSH32(esp, esi); /* 0x15035B4D: push esi */
    PUSH32(esp, esi); /* 0x15035B4E: push esi */
    MEM32(eax) = 0x16u; /* 0x15035B4F: mov dword ptr [eax], 0x16 */
    RECOMP_CALL(sub_1505A110); /* 0x15035B55: call 0x1505a110 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x14u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x14u; /* 0x15035B5A: add esp, 0x14 */
    _flag_k = FK_ADD;
L_15035B5D:
    _flag_a = (uint32_t)((eax | 0xFFFFFFFFu)); _flag_b = (uint32_t)((eax | 0xFFFFFFFFu));
    eax = eax | 0xFFFFFFFFu; /* 0x15035B5D: or eax, 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_15035C3D; /* 0x15035B60: jmp 0x15035c3d */
L_15035B65:
    /* test edi, edi */ /* 0x15035B65: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_Z(_flag_a, _flag_b)) goto L_15035B43; /* 0x15035B67: je 0x15035b43 */
L_15035B69:
    ecx = ebp + (-0x254); /* 0x15035B69: lea ecx, [ebp - 0x254] */
    PUSH32(esp, ecx); /* 0x15035B6F: push ecx */
    PUSH32(esp, eax); /* 0x15035B70: push eax */
    RECOMP_ICALL(MEM32(0x150C00A0)); /* 0x15035B71: call dword ptr [0x150c00a0] */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x15035B77: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_15035BBA; /* 0x15035B79: jne 0x15035bba */
L_15035B7B:
    RECOMP_ICALL(MEM32(0x150C006C)); /* 0x15035B7B: call dword ptr [0x150c006c] */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 2); /* 0x15035B81: push 2 */
    esi = POP32_VAL(esp); /* 0x15035B83: pop esi */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - esi; /* 0x15035B84: sub eax, esi */
    _flag_k = FK_CMP;
    if (/* sub result */ CMP_EQ(_flag_a, _flag_b)) goto L_15035BB1; /* 0x15035B86: je 0x15035bb1 */
L_15035B88:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - 1; /* 0x15035B88: sub eax, 1 */
    _flag_k = FK_CMP;
    if (/* sub result */ CMP_EQ(_flag_a, _flag_b)) goto L_15035BB1; /* 0x15035B8B: je 0x15035bb1 */
L_15035B8D:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(5);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - 5; /* 0x15035B8D: sub eax, 5 */
    _flag_k = FK_CMP;
    if (/* sub result */ CMP_EQ(_flag_a, _flag_b)) goto L_15035BA4; /* 0x15035B90: je 0x15035ba4 */
L_15035B92:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xAu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - 0xAu; /* 0x15035B92: sub eax, 0xa */
    _flag_k = FK_CMP;
    if (/* sub result */ CMP_EQ(_flag_a, _flag_b)) goto L_15035BB1; /* 0x15035B95: je 0x15035bb1 */
L_15035B97:
    RECOMP_CALL(sub_15036430); /* 0x15035B97: call 0x15036430 */
    RECOMP_FLAGS_IN();
    MEM32(eax) = 0x16u; /* 0x15035B9C: mov dword ptr [eax], 0x16 */
    RECOMP_BACKEDGE();
    goto L_15035B5D; /* 0x15035BA2: jmp 0x15035b5d */
L_15035BA4:
    RECOMP_CALL(sub_15036430); /* 0x15035BA4: call 0x15036430 */
    RECOMP_FLAGS_IN();
    MEM32(eax) = 0xCu; /* 0x15035BA9: mov dword ptr [eax], 0xc */
    RECOMP_BACKEDGE();
    goto L_15035B5D; /* 0x15035BAF: jmp 0x15035b5d */
L_15035BB1:
    RECOMP_CALL(sub_15036430); /* 0x15035BB1: call 0x15036430 */
    RECOMP_FLAGS_IN();
    MEM32(eax) = esi; /* 0x15035BB6: mov dword ptr [eax], esi */
    RECOMP_BACKEDGE();
    goto L_15035B5D; /* 0x15035BB8: jmp 0x15035b5d */
L_15035BBA:
    eax = MEM32(ebp + (-0x254)); /* 0x15035BBA: mov eax, dword ptr [ebp - 0x254] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x15035BC0: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp eax, 0x80u */ /* 0x15035BC2: cmp eax, 0x80 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x80u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) { eax = ecx; } /* 0x15035BC7: cmove eax, ecx */
    MEM32(edi) = eax; /* 0x15035BCA: mov dword ptr [edi], eax */
    eax = ebp + (-0x250); /* 0x15035BCC: lea eax, [ebp - 0x250] */
    PUSH32(esp, eax); /* 0x15035BD2: push eax */
    RECOMP_CALL(sub_15034B5F); /* 0x15035BD3: call 0x15034b5f */
    RECOMP_FLAGS_IN();
    MEM32(edi + 0x4) = eax; /* 0x15035BD8: mov dword ptr [edi + 4], eax */
    eax = ebp + (-0x248); /* 0x15035BDB: lea eax, [ebp - 0x248] */
    PUSH32(esp, eax); /* 0x15035BE1: push eax */
    RECOMP_CALL(sub_15034B5F); /* 0x15035BE2: call 0x15034b5f */
    RECOMP_FLAGS_IN();
    MEM32(edi + 0x8) = eax; /* 0x15035BE7: mov dword ptr [edi + 8], eax */
    eax = ebp + (-0x240); /* 0x15035BEA: lea eax, [ebp - 0x240] */
    PUSH32(esp, eax); /* 0x15035BF0: push eax */
    RECOMP_CALL(sub_15034B5F); /* 0x15035BF1: call 0x15034b5f */
    RECOMP_FLAGS_IN();
    ecx = MEM32(ebp + (-0x238)); /* 0x15035BF6: mov ecx, dword ptr [ebp - 0x238] */
    MEM32(edi + 0xC) = eax; /* 0x15035BFC: mov dword ptr [edi + 0xc], eax */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x15035BFF: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(ebp + (-0x234)));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + MEM32(ebp + (-0x234)); /* 0x15035C01: add eax, dword ptr [ebp - 0x234] */
    _flag_k = FK_ADD;
    PUSH32(esp, 0); /* 0x15035C07: push 0 */
    esi = POP32_VAL(esp); /* 0x15035C09: pop esi */
    MEM32(edi + 0x10) = eax; /* 0x15035C0A: mov dword ptr [edi + 0x10], eax */
    { uint32_t _aa = ecx, _ab = esi, _ac = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x15035C0D: adc ecx, esi */
      ecx = _aa + _ab + _ac;
      _flag_a = recomp_flags_adc(_aa, _ab, _ac); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    eax = ebp + (-0x228); /* 0x15035C0F: lea eax, [ebp - 0x228] */
    MEM32(edi + 0x14) = ecx; /* 0x15035C15: mov dword ptr [edi + 0x14], ecx */
    PUSH32(esp, eax); /* 0x15035C18: push eax */
    eax = edi + 0x18; /* 0x15035C19: lea eax, [edi + 0x18] */
    PUSH32(esp, 0x104u); /* 0x15035C1C: push 0x104 */
    PUSH32(esp, eax); /* 0x15035C21: push eax */
    RECOMP_CALL(sub_1508F250); /* 0x15035C22: call 0x1508f250 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x18u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x18u; /* 0x15035C27: add esp, 0x18 */
    _flag_k = FK_ADD;
    /* test eax, eax */ /* 0x15035C2A: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_15035C3B; /* 0x15035C2C: je 0x15035c3b */
L_15035C2E:
    PUSH32(esp, esi); /* 0x15035C2E: push esi */
    PUSH32(esp, esi); /* 0x15035C2F: push esi */
    PUSH32(esp, esi); /* 0x15035C30: push esi */
    PUSH32(esp, esi); /* 0x15035C31: push esi */
    PUSH32(esp, esi); /* 0x15035C32: push esi */
    RECOMP_CALL(sub_1505A11B); /* 0x15035C33: call 0x1505a11b */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x14u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x14u; /* 0x15035C38: add esp, 0x14 */
    _flag_k = FK_ADD;
L_15035C3B:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x15035C3B: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
L_15035C3D:
    ecx = MEM32(ebp + (-0x4)); /* 0x15035C3D: mov ecx, dword ptr [ebp - 4] */
    edi = POP32_VAL(esp); /* 0x15035C40: pop edi */
    _flag_a = (uint32_t)((ecx ^ ebp)); _flag_b = (uint32_t)((ecx ^ ebp));
    ecx = ecx ^ ebp; /* 0x15035C41: xor ecx, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    esi = POP32_VAL(esp); /* 0x15035C43: pop esi */
    RECOMP_CALL(sub_1505E540); /* 0x15035C44: call 0x1505e540 */
    RECOMP_FLAGS_IN();
    esp = ebp; ebp = POP32_VAL(esp); /* 0x15035C49: leave  */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x15035C4A: ret  */
L_15035C60:
    edi = edi; /* 0x15035C60: mov edi, edi */
    PUSH32(esp, ebp); /* 0x15035C62: push ebp */
    ebp = esp; /* 0x15035C63: mov ebp, esp */
    ebp = POP32_VAL(esp); /* 0x15035C65: pop ebp */
    RECOMP_BACKEDGE();
    goto L_15035B21; /* 0x15035C66: jmp 0x15035b21 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    RECOMP_REGS_OUT();
}

void sub_15035C71(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x15035C71u);

L_15035C71:
    edi = edi; /* 0x15035C71: mov edi, edi */
    PUSH32(esp, ebp); /* 0x15035C73: push ebp */
    ebp = esp; /* 0x15035C74: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x1Cu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x1Cu; /* 0x15035C76: sub esp, 0x1c */
    _flag_k = FK_CMP;
    eax = MEM32(0x150BD340); /* 0x15035C79: mov eax, dword ptr [0x150bd340] */
    _flag_a = (uint32_t)((eax ^ ebp)); _flag_b = (uint32_t)((eax ^ ebp));
    eax = eax ^ ebp; /* 0x15035C7E: xor eax, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x4)) = eax; /* 0x15035C80: mov dword ptr [ebp - 4], eax */
    eax = MEM32(ebp + 0x8); /* 0x15035C83: mov eax, dword ptr [ebp + 8] */
    /* cmp MEM32(eax), 0 */ /* 0x15035C86: cmp dword ptr [eax], 0 */
    _flag_a = (uint32_t)(MEM32(eax)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_15035C91; /* 0x15035C89: jne 0x15035c91 */
L_15035C8B:
    /* cmp MEM32(eax + 0x4), 0 */ /* 0x15035C8B: cmp dword ptr [eax + 4], 0 */
    _flag_a = (uint32_t)(MEM32(eax + 0x4)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_15035CDC; /* 0x15035C8F: je 0x15035cdc */
L_15035C91:
    ecx = ebp + (-0x1C); /* 0x15035C91: lea ecx, [ebp - 0x1c] */
    PUSH32(esp, ecx); /* 0x15035C94: push ecx */
    PUSH32(esp, eax); /* 0x15035C95: push eax */
    RECOMP_ICALL(MEM32(0x150C008C)); /* 0x15035C96: call dword ptr [0x150c008c] */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x15035C9C: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_15035CDC; /* 0x15035C9E: je 0x15035cdc */
L_15035CA0:
    eax = ebp + (-0x14); /* 0x15035CA0: lea eax, [ebp - 0x14] */
    PUSH32(esp, eax); /* 0x15035CA3: push eax */
    eax = ebp + (-0x1C); /* 0x15035CA4: lea eax, [ebp - 0x1c] */
    PUSH32(esp, eax); /* 0x15035CA7: push eax */
    RECOMP_ICALL(MEM32(0x150C0000)); /* 0x15035CA8: call dword ptr [0x150c0000] */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x15035CAE: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_15035CDC; /* 0x15035CB0: je 0x15035cdc */
L_15035CB2:
    eax = (uint32_t)MEM16(ebp + (-0x8)); /* 0x15035CB2: movzx eax, word ptr [ebp - 8] */
    PUSH32(esp, 0xFFFFFFFFu); /* 0x15035CB6: push -1 */
    PUSH32(esp, eax); /* 0x15035CB8: push eax */
    eax = (uint32_t)MEM16(ebp + (-0xA)); /* 0x15035CB9: movzx eax, word ptr [ebp - 0xa] */
    PUSH32(esp, eax); /* 0x15035CBD: push eax */
    eax = (uint32_t)MEM16(ebp + (-0xC)); /* 0x15035CBE: movzx eax, word ptr [ebp - 0xc] */
    PUSH32(esp, eax); /* 0x15035CC2: push eax */
    eax = (uint32_t)MEM16(ebp + (-0xE)); /* 0x15035CC3: movzx eax, word ptr [ebp - 0xe] */
    PUSH32(esp, eax); /* 0x15035CC7: push eax */
    eax = (uint32_t)MEM16(ebp + (-0x12)); /* 0x15035CC8: movzx eax, word ptr [ebp - 0x12] */
    PUSH32(esp, eax); /* 0x15035CCC: push eax */
    eax = (uint32_t)MEM16(ebp + (-0x14)); /* 0x15035CCD: movzx eax, word ptr [ebp - 0x14] */
    PUSH32(esp, eax); /* 0x15035CD1: push eax */
    RECOMP_CALL(sub_1509599D); /* 0x15035CD2: call 0x1509599d */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x1Cu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x1Cu; /* 0x15035CD7: add esp, 0x1c */
    _flag_k = FK_ADD;
    goto L_15035CE1; /* 0x15035CDA: jmp 0x15035ce1 */
L_15035CDC:
    _flag_a = (uint32_t)((edx | 0xFFFFFFFFu)); _flag_b = (uint32_t)((edx | 0xFFFFFFFFu));
    edx = edx | 0xFFFFFFFFu; /* 0x15035CDC: or edx, 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    eax = edx; /* 0x15035CDF: mov eax, edx */
L_15035CE1:
    ecx = MEM32(ebp + (-0x4)); /* 0x15035CE1: mov ecx, dword ptr [ebp - 4] */
    _flag_a = (uint32_t)((ecx ^ ebp)); _flag_b = (uint32_t)((ecx ^ ebp));
    ecx = ecx ^ ebp; /* 0x15035CE4: xor ecx, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_1505E540); /* 0x15035CE6: call 0x1505e540 */
    RECOMP_FLAGS_IN();
    esp = ebp; ebp = POP32_VAL(esp); /* 0x15035CEB: leave  */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x15035CEC: ret  */
    RECOMP_REGS_OUT();
}

void sub_15035CF3(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x15035CF3u);

L_15035CF3:
    PUSH32(esp, 8); /* 0x15035CF3: push 8 */
    PUSH32(esp, 0x150AFB38u); /* 0x15035CF5: push 0x150afb38 */
    RECOMP_CALL(sub_1505E988); /* 0x15035CFA: call 0x1505e988 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0); /* 0x15035CFF: push 0 */
    RECOMP_ICALL(MEM32(0x150C0178)); /* 0x15035D01: call dword ptr [0x150c0178] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(MEM32(ebp + (-0x4))); _flag_b = (uint32_t)(0);
    MEM32(ebp + (-0x4)) = MEM32(ebp + (-0x4)) & 0; /* 0x15035D07: and dword ptr [ebp - 4], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    /* test eax, eax */ /* 0x15035D0B: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_15035D3C; /* 0x15035D0D: je 0x15035d3c */
L_15035D0F:
    /* cmp eax, 0xFFFFFFFFu */ /* 0x15035D0F: cmp eax, -1 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xFFFFFFFFu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_15035D3C; /* 0x15035D12: je 0x15035d3c */
L_15035D14:
    ecx = 0x5A4Du; /* 0x15035D14: mov ecx, 0x5a4d */
    /* cmp MEM16(eax), LO16(ecx) */ /* 0x15035D19: cmp word ptr [eax], cx */
    _flag_a = (uint32_t)(MEM16(eax)) << 16; _flag_b = (uint32_t)(LO16(ecx)) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    if (CMP_NE(_flag_a, _flag_b)) goto L_15035D3C; /* 0x15035D1C: jne 0x15035d3c */
L_15035D1E:
    ecx = MEM32(eax + 0x3C); /* 0x15035D1E: mov ecx, dword ptr [eax + 0x3c] */
    /* test ecx, ecx */ /* 0x15035D21: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_15035D3C; /* 0x15035D23: js 0x15035d3c */
L_15035D25:
    /* cmp MEM32(ecx + eax), 0x4550u */ /* 0x15035D25: cmp dword ptr [ecx + eax], 0x4550 */
    _flag_a = (uint32_t)(MEM32(ecx + eax)); _flag_b = (uint32_t)(0x4550u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_15035D3C; /* 0x15035D2C: jne 0x15035d3c */
L_15035D2E:
    /* cmp MEM8(ecx + eax + 0x1A), 2 */ /* 0x15035D2E: cmp byte ptr [ecx + eax + 0x1a], 2 */
    _flag_a = (uint32_t)(MEM8(ecx + eax + 0x1A)) << 24; _flag_b = (uint32_t)(2) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_15035D3C; /* 0x15035D33: jne 0x15035d3c */
L_15035D35:
    /* cmp MEM8(ecx + eax + 0x1B), 0x37u */ /* 0x15035D35: cmp byte ptr [ecx + eax + 0x1b], 0x37 */
    _flag_a = (uint32_t)(MEM8(ecx + eax + 0x1B)) << 24; _flag_b = (uint32_t)(0x37u) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_15035D4F; /* 0x15035D3A: je 0x15035d4f */
L_15035D3C:
    eax = MEM32(ebp + 0x8); /* 0x15035D3C: mov eax, dword ptr [ebp + 8] */
    eax = MEM32(eax); /* 0x15035D3F: mov eax, dword ptr [eax] */
    MEM32(0x150BDB78) = eax; /* 0x15035D41: mov dword ptr [0x150bdb78], eax */
    goto L_15035D56; /* 0x15035D46: jmp 0x15035d56 */
L_15035D4F:
    _flag_a = (uint32_t)(MEM32(0x150BDB78)); _flag_b = (uint32_t)(0);
    MEM32(0x150BDB78) = MEM32(0x150BDB78) & 0; /* 0x15035D4F: and dword ptr [0x150bdb78], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
L_15035D56:
    MEM32(ebp + (-0x4)) = 0xFFFFFFFEu; /* 0x15035D56: mov dword ptr [ebp - 4], 0xfffffffe */
    ecx = MEM32(ebp + (-0x10)); /* 0x15035D5D: mov ecx, dword ptr [ebp - 0x10] */
    MEM32(FS_BASE + (0)) = ecx; /* 0x15035D60: mov dword ptr fs:[0], ecx */
    ecx = POP32_VAL(esp); /* 0x15035D67: pop ecx */
    edi = POP32_VAL(esp); /* 0x15035D68: pop edi */
    esi = POP32_VAL(esp); /* 0x15035D69: pop esi */
    ebx = POP32_VAL(esp); /* 0x15035D6A: pop ebx */
    esp = ebp; ebp = POP32_VAL(esp); /* 0x15035D6B: leave  */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x15035D6C: ret  */
    RECOMP_REGS_OUT();
}

void sub_15035D80(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x15035D80u);

L_15035D80:
    edi = edi; /* 0x15035D80: mov edi, edi */
    PUSH32(esp, ebp); /* 0x15035D82: push ebp */
    ebp = esp; /* 0x15035D83: mov ebp, esp */
    /* cmp MEM32(ebp + 0xC), 1 */ /* 0x15035D85: cmp dword ptr [ebp + 0xc], 1 */
    _flag_a = (uint32_t)(MEM32(ebp + 0xC)); _flag_b = (uint32_t)(1);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_15035D90; /* 0x15035D89: jne 0x15035d90 */
L_15035D8B:
    RECOMP_CALL(sub_1505E7D5); /* 0x15035D8B: call 0x1505e7d5 */
    RECOMP_FLAGS_IN();
L_15035D90:
    ebp = POP32_VAL(esp); /* 0x15035D90: pop ebp */
    goto L_15035D9C; /* 0x15035D91: jmp 0x15035d9c */
L_15035D9C:
    edi = edi; /* 0x15035D9C: mov edi, edi */
    PUSH32(esp, ebp); /* 0x15035D9E: push ebp */
    ebp = esp; /* 0x15035D9F: mov ebp, esp */
    eax = MEM32(ebp + 0xC); /* 0x15035DA1: mov eax, dword ptr [ebp + 0xc] */
    PUSH32(esp, esi); /* 0x15035DA4: push esi */
    /* cmp eax, 1 */ /* 0x15035DA5: cmp eax, 1 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_15035E18; /* 0x15035DA8: jne 0x15035e18 */
L_15035DAA:
    RECOMP_CALL(sub_150361D9); /* 0x15035DAA: call 0x150361d9 */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x15035DAF: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_15035DC6; /* 0x15035DB1: je 0x15035dc6 */
L_15035DB3:
    RECOMP_CALL(sub_1504940B); /* 0x15035DB3: call 0x1504940b */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x15035DB8: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) == 0u)) goto L_15035DCD; /* 0x15035DBA: jns 0x15035dcd */
L_15035DBC:
    RECOMP_CALL(sub_150689EC); /* 0x15035DBC: call 0x150689ec */
    RECOMP_FLAGS_IN();
    RECOMP_CALL(sub_150467A2); /* 0x15035DC1: call 0x150467a2 */
    RECOMP_FLAGS_IN();
L_15035DC6:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x15035DC6: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_15035EBF; /* 0x15035DC8: jmp 0x15035ebf */
L_15035DCD:
    RECOMP_CALL(sub_1505E8DE); /* 0x15035DCD: call 0x1505e8de */
    RECOMP_FLAGS_IN();
    MEM32(0x150BDAF4) = eax; /* 0x15035DD2: mov dword ptr [0x150bdaf4], eax */
    RECOMP_ICALL(MEM32(0x150C01CC)); /* 0x15035DD7: call dword ptr [0x150c01cc] */
    RECOMP_FLAGS_IN();
    MEM32(0x150BDAFC) = eax; /* 0x15035DDD: mov dword ptr [0x150bdafc], eax */
    RECOMP_CALL(sub_1505E979); /* 0x15035DE2: call 0x1505e979 */
    RECOMP_FLAGS_IN();
    MEM32(0x150BDB00) = eax; /* 0x15035DE7: mov dword ptr [0x150bdb00], eax */
    RECOMP_CALL(sub_1504FDE5); /* 0x15035DEC: call 0x1504fde5 */
    RECOMP_FLAGS_IN();
    RECOMP_CALL(sub_15069C63); /* 0x15035DF1: call 0x15069c63 */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x15035DF6: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_15035E11; /* 0x15035DF8: js 0x15035e11 */
L_15035DFA:
    PUSH32(esp, 0); /* 0x15035DFA: push 0 */
    RECOMP_CALL(sub_15068105); /* 0x15035DFC: call 0x15068105 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x15035E01: pop ecx */
    /* test eax, eax */ /* 0x15035E02: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_15035E11; /* 0x15035E04: jne 0x15035e11 */
L_15035E06:
    _flag_a = (uint32_t)(MEM32(0x150BDB10)); _flag_b = (uint32_t)(1);
    MEM32(0x150BDB10) = MEM32(0x150BDB10) + 1; /* 0x15035E06: inc dword ptr [0x150bdb10] */
    _flag_k = FK_INC;
    goto L_15035EBC; /* 0x15035E0C: jmp 0x15035ebc */
L_15035E11:
    RECOMP_CALL(sub_15049650); /* 0x15035E11: call 0x15049650 */
    RECOMP_FLAGS_IN();
    RECOMP_BACKEDGE();
    goto L_15035DBC; /* 0x15035E16: jmp 0x15035dbc */
L_15035E18:
    /* test eax, eax */ /* 0x15035E18: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_15035E55; /* 0x15035E1A: jne 0x15035e55 */
L_15035E1C:
    eax = MEM32(0x150BDB10); /* 0x15035E1C: mov eax, dword ptr [0x150bdb10] */
    /* test eax, eax */ /* 0x15035E21: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if ((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) == 0u || (((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_15035DC6; /* 0x15035E23: jle 0x15035dc6 */
L_15035E25:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax - 1; /* 0x15035E25: dec eax */
    _flag_k = FK_DEC;
    /* cmp MEM32(0x150BDFB4), 0 */ /* 0x15035E26: cmp dword ptr [0x150bdfb4], 0 */
    _flag_a = (uint32_t)(MEM32(0x150BDFB4)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    MEM32(0x150BDB10) = eax; /* 0x15035E2D: mov dword ptr [0x150bdb10], eax */
    if (CMP_NE(_flag_a, _flag_b)) goto L_15035E39; /* 0x15035E32: jne 0x15035e39 */
L_15035E34:
    RECOMP_CALL(sub_150680F0); /* 0x15035E34: call 0x150680f0 */
    RECOMP_FLAGS_IN();
L_15035E39:
    RECOMP_CALL(sub_1506803E); /* 0x15035E39: call 0x1506803e */
    RECOMP_FLAGS_IN();
    /* cmp MEM32(ebp + 0x10), 0 */ /* 0x15035E3E: cmp dword ptr [ebp + 0x10], 0 */
    _flag_a = (uint32_t)(MEM32(ebp + 0x10)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_15035EBC; /* 0x15035E42: jne 0x15035ebc */
L_15035E44:
    RECOMP_CALL(sub_15049650); /* 0x15035E44: call 0x15049650 */
    RECOMP_FLAGS_IN();
    RECOMP_CALL(sub_150689EC); /* 0x15035E49: call 0x150689ec */
    RECOMP_FLAGS_IN();
    RECOMP_CALL(sub_150467A2); /* 0x15035E4E: call 0x150467a2 */
    RECOMP_FLAGS_IN();
    goto L_15035EBC; /* 0x15035E53: jmp 0x15035ebc */
L_15035E55:
    /* cmp eax, 2 */ /* 0x15035E55: cmp eax, 2 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_15035EAF; /* 0x15035E58: jne 0x15035eaf */
L_15035E5A:
    RECOMP_CALL(sub_15036310); /* 0x15035E5A: call 0x15036310 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, MEM32(0x150BD674)); /* 0x15035E5F: push dword ptr [0x150bd674] */
    RECOMP_ICALL(MEM32(0x150C0080)); /* 0x15035E65: call dword ptr [0x150c0080] */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x15035E6B: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_15035EBC; /* 0x15035E6D: jne 0x15035ebc */
L_15035E6F:
    PUSH32(esp, 0x214u); /* 0x15035E6F: push 0x214 */
    PUSH32(esp, 1); /* 0x15035E74: push 1 */
    RECOMP_CALL(sub_15048EE2); /* 0x15035E76: call 0x15048ee2 */
    RECOMP_FLAGS_IN();
    esi = eax; /* 0x15035E7B: mov esi, eax */
    ecx = POP32_VAL(esp); /* 0x15035E7D: pop ecx */
    ecx = POP32_VAL(esp); /* 0x15035E7E: pop ecx */
    /* test esi, esi */ /* 0x15035E7F: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_Z(_flag_a, _flag_b)) goto L_15035DC6; /* 0x15035E81: je 0x15035dc6 */
L_15035E87:
    PUSH32(esp, esi); /* 0x15035E87: push esi */
    PUSH32(esp, MEM32(0x150BD674)); /* 0x15035E88: push dword ptr [0x150bd674] */
    RECOMP_ICALL(MEM32(0x150C0084)); /* 0x15035E8E: call dword ptr [0x150c0084] */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x15035E94: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_15035EA3; /* 0x15035E96: je 0x15035ea3 */
L_15035E98:
    PUSH32(esp, 0); /* 0x15035E98: push 0 */
    PUSH32(esp, esi); /* 0x15035E9A: push esi */
    RECOMP_CALL(sub_150688AD); /* 0x15035E9B: call 0x150688ad */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x15035EA0: pop ecx */
    goto L_15035EBB; /* 0x15035EA1: jmp 0x15035ebb */
L_15035EA3:
    PUSH32(esp, esi); /* 0x15035EA3: push esi */
    RECOMP_CALL(sub_15048840); /* 0x15035EA4: call 0x15048840 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x15035EA9: pop ecx */
    RECOMP_BACKEDGE();
    goto L_15035DC6; /* 0x15035EAA: jmp 0x15035dc6 */
L_15035EAF:
    /* cmp eax, 3 */ /* 0x15035EAF: cmp eax, 3 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(3);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_15035EBC; /* 0x15035EB2: jne 0x15035ebc */
L_15035EB4:
    PUSH32(esp, 0); /* 0x15035EB4: push 0 */
    RECOMP_CALL(sub_150687E3); /* 0x15035EB6: call 0x150687e3 */
    RECOMP_FLAGS_IN();
L_15035EBB:
    ecx = POP32_VAL(esp); /* 0x15035EBB: pop ecx */
L_15035EBC:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x15035EBC: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x15035EBE: inc eax */
    _flag_k = FK_INC;
L_15035EBF:
    esi = POP32_VAL(esp); /* 0x15035EBF: pop esi */
    ebp = POP32_VAL(esp); /* 0x15035EC0: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 16; { RECOMP_REGS_OUT(); return; } /* 0x15035EC1: ret 0xc */
    RECOMP_REGS_OUT();
}

void sub_15035D9C(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x15035D9Cu);

L_15035D9C:
    edi = edi; /* 0x15035D9C: mov edi, edi */
    PUSH32(esp, ebp); /* 0x15035D9E: push ebp */
    ebp = esp; /* 0x15035D9F: mov ebp, esp */
    eax = MEM32(ebp + 0xC); /* 0x15035DA1: mov eax, dword ptr [ebp + 0xc] */
    PUSH32(esp, esi); /* 0x15035DA4: push esi */
    /* cmp eax, 1 */ /* 0x15035DA5: cmp eax, 1 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_15035E18; /* 0x15035DA8: jne 0x15035e18 */
L_15035DAA:
    RECOMP_CALL(sub_150361D9); /* 0x15035DAA: call 0x150361d9 */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x15035DAF: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_15035DC6; /* 0x15035DB1: je 0x15035dc6 */
L_15035DB3:
    RECOMP_CALL(sub_1504940B); /* 0x15035DB3: call 0x1504940b */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x15035DB8: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) == 0u)) goto L_15035DCD; /* 0x15035DBA: jns 0x15035dcd */
L_15035DBC:
    RECOMP_CALL(sub_150689EC); /* 0x15035DBC: call 0x150689ec */
    RECOMP_FLAGS_IN();
    RECOMP_CALL(sub_150467A2); /* 0x15035DC1: call 0x150467a2 */
    RECOMP_FLAGS_IN();
L_15035DC6:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x15035DC6: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_15035EBF; /* 0x15035DC8: jmp 0x15035ebf */
L_15035DCD:
    RECOMP_CALL(sub_1505E8DE); /* 0x15035DCD: call 0x1505e8de */
    RECOMP_FLAGS_IN();
    MEM32(0x150BDAF4) = eax; /* 0x15035DD2: mov dword ptr [0x150bdaf4], eax */
    RECOMP_ICALL(MEM32(0x150C01CC)); /* 0x15035DD7: call dword ptr [0x150c01cc] */
    RECOMP_FLAGS_IN();
    MEM32(0x150BDAFC) = eax; /* 0x15035DDD: mov dword ptr [0x150bdafc], eax */
    RECOMP_CALL(sub_1505E979); /* 0x15035DE2: call 0x1505e979 */
    RECOMP_FLAGS_IN();
    MEM32(0x150BDB00) = eax; /* 0x15035DE7: mov dword ptr [0x150bdb00], eax */
    RECOMP_CALL(sub_1504FDE5); /* 0x15035DEC: call 0x1504fde5 */
    RECOMP_FLAGS_IN();
    RECOMP_CALL(sub_15069C63); /* 0x15035DF1: call 0x15069c63 */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x15035DF6: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_15035E11; /* 0x15035DF8: js 0x15035e11 */
L_15035DFA:
    PUSH32(esp, 0); /* 0x15035DFA: push 0 */
    RECOMP_CALL(sub_15068105); /* 0x15035DFC: call 0x15068105 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x15035E01: pop ecx */
    /* test eax, eax */ /* 0x15035E02: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_15035E11; /* 0x15035E04: jne 0x15035e11 */
L_15035E06:
    _flag_a = (uint32_t)(MEM32(0x150BDB10)); _flag_b = (uint32_t)(1);
    MEM32(0x150BDB10) = MEM32(0x150BDB10) + 1; /* 0x15035E06: inc dword ptr [0x150bdb10] */
    _flag_k = FK_INC;
    goto L_15035EBC; /* 0x15035E0C: jmp 0x15035ebc */
L_15035E11:
    RECOMP_CALL(sub_15049650); /* 0x15035E11: call 0x15049650 */
    RECOMP_FLAGS_IN();
    RECOMP_BACKEDGE();
    goto L_15035DBC; /* 0x15035E16: jmp 0x15035dbc */
L_15035E18:
    /* test eax, eax */ /* 0x15035E18: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_15035E55; /* 0x15035E1A: jne 0x15035e55 */
L_15035E1C:
    eax = MEM32(0x150BDB10); /* 0x15035E1C: mov eax, dword ptr [0x150bdb10] */
    /* test eax, eax */ /* 0x15035E21: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if ((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) == 0u || (((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_15035DC6; /* 0x15035E23: jle 0x15035dc6 */
L_15035E25:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax - 1; /* 0x15035E25: dec eax */
    _flag_k = FK_DEC;
    /* cmp MEM32(0x150BDFB4), 0 */ /* 0x15035E26: cmp dword ptr [0x150bdfb4], 0 */
    _flag_a = (uint32_t)(MEM32(0x150BDFB4)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    MEM32(0x150BDB10) = eax; /* 0x15035E2D: mov dword ptr [0x150bdb10], eax */
    if (CMP_NE(_flag_a, _flag_b)) goto L_15035E39; /* 0x15035E32: jne 0x15035e39 */
L_15035E34:
    RECOMP_CALL(sub_150680F0); /* 0x15035E34: call 0x150680f0 */
    RECOMP_FLAGS_IN();
L_15035E39:
    RECOMP_CALL(sub_1506803E); /* 0x15035E39: call 0x1506803e */
    RECOMP_FLAGS_IN();
    /* cmp MEM32(ebp + 0x10), 0 */ /* 0x15035E3E: cmp dword ptr [ebp + 0x10], 0 */
    _flag_a = (uint32_t)(MEM32(ebp + 0x10)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_15035EBC; /* 0x15035E42: jne 0x15035ebc */
L_15035E44:
    RECOMP_CALL(sub_15049650); /* 0x15035E44: call 0x15049650 */
    RECOMP_FLAGS_IN();
    RECOMP_CALL(sub_150689EC); /* 0x15035E49: call 0x150689ec */
    RECOMP_FLAGS_IN();
    RECOMP_CALL(sub_150467A2); /* 0x15035E4E: call 0x150467a2 */
    RECOMP_FLAGS_IN();
    goto L_15035EBC; /* 0x15035E53: jmp 0x15035ebc */
L_15035E55:
    /* cmp eax, 2 */ /* 0x15035E55: cmp eax, 2 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_15035EAF; /* 0x15035E58: jne 0x15035eaf */
L_15035E5A:
    RECOMP_CALL(sub_15036310); /* 0x15035E5A: call 0x15036310 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, MEM32(0x150BD674)); /* 0x15035E5F: push dword ptr [0x150bd674] */
    RECOMP_ICALL(MEM32(0x150C0080)); /* 0x15035E65: call dword ptr [0x150c0080] */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x15035E6B: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_15035EBC; /* 0x15035E6D: jne 0x15035ebc */
L_15035E6F:
    PUSH32(esp, 0x214u); /* 0x15035E6F: push 0x214 */
    PUSH32(esp, 1); /* 0x15035E74: push 1 */
    RECOMP_CALL(sub_15048EE2); /* 0x15035E76: call 0x15048ee2 */
    RECOMP_FLAGS_IN();
    esi = eax; /* 0x15035E7B: mov esi, eax */
    ecx = POP32_VAL(esp); /* 0x15035E7D: pop ecx */
    ecx = POP32_VAL(esp); /* 0x15035E7E: pop ecx */
    /* test esi, esi */ /* 0x15035E7F: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_Z(_flag_a, _flag_b)) goto L_15035DC6; /* 0x15035E81: je 0x15035dc6 */
L_15035E87:
    PUSH32(esp, esi); /* 0x15035E87: push esi */
    PUSH32(esp, MEM32(0x150BD674)); /* 0x15035E88: push dword ptr [0x150bd674] */
    RECOMP_ICALL(MEM32(0x150C0084)); /* 0x15035E8E: call dword ptr [0x150c0084] */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x15035E94: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_15035EA3; /* 0x15035E96: je 0x15035ea3 */
L_15035E98:
    PUSH32(esp, 0); /* 0x15035E98: push 0 */
    PUSH32(esp, esi); /* 0x15035E9A: push esi */
    RECOMP_CALL(sub_150688AD); /* 0x15035E9B: call 0x150688ad */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x15035EA0: pop ecx */
    goto L_15035EBB; /* 0x15035EA1: jmp 0x15035ebb */
L_15035EA3:
    PUSH32(esp, esi); /* 0x15035EA3: push esi */
    RECOMP_CALL(sub_15048840); /* 0x15035EA4: call 0x15048840 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x15035EA9: pop ecx */
    RECOMP_BACKEDGE();
    goto L_15035DC6; /* 0x15035EAA: jmp 0x15035dc6 */
L_15035EAF:
    /* cmp eax, 3 */ /* 0x15035EAF: cmp eax, 3 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(3);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_15035EBC; /* 0x15035EB2: jne 0x15035ebc */
L_15035EB4:
    PUSH32(esp, 0); /* 0x15035EB4: push 0 */
    RECOMP_CALL(sub_150687E3); /* 0x15035EB6: call 0x150687e3 */
    RECOMP_FLAGS_IN();
L_15035EBB:
    ecx = POP32_VAL(esp); /* 0x15035EBB: pop ecx */
L_15035EBC:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x15035EBC: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x15035EBE: inc eax */
    _flag_k = FK_INC;
L_15035EBF:
    esi = POP32_VAL(esp); /* 0x15035EBF: pop esi */
    ebp = POP32_VAL(esp); /* 0x15035EC0: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 16; { RECOMP_REGS_OUT(); return; } /* 0x15035EC1: ret 0xc */
    RECOMP_REGS_OUT();
}

void sub_15035ED0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x15035ED0u);

L_15035ED0:
    edi = edi; /* 0x15035ED0: mov edi, edi */
    PUSH32(esp, ebp); /* 0x15035ED2: push ebp */
    ebp = esp; /* 0x15035ED3: mov ebp, esp */
    PUSH32(esp, MEM32(ebp + 0x18)); /* 0x15035ED5: push dword ptr [ebp + 0x18] */
    RECOMP_CALL(sub_15035CF3); /* 0x15035ED8: call 0x15035cf3 */
    RECOMP_FLAGS_IN();
    /* cmp MEM32(ebp + 0x14), 0 */ /* 0x15035EDD: cmp dword ptr [ebp + 0x14], 0 */
    _flag_a = (uint32_t)(MEM32(ebp + 0x14)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    ecx = POP32_VAL(esp); /* 0x15035EE1: pop ecx */
    if (CMP_EQ(_flag_a, _flag_b)) goto L_15035EEB; /* 0x15035EE2: je 0x15035eeb */
L_15035EE4:
    RECOMP_CALL(sub_15069252); /* 0x15035EE4: call 0x15069252 */
    RECOMP_FLAGS_IN();
    goto L_15035EF0; /* 0x15035EE9: jmp 0x15035ef0 */
L_15035EEB:
    RECOMP_CALL(sub_15068F76); /* 0x15035EEB: call 0x15068f76 */
    RECOMP_FLAGS_IN();
L_15035EF0:
    edx = eax; /* 0x15035EF0: mov edx, eax */
    /* test edx, edx */ /* 0x15035EF2: test edx, edx */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(edx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) == 0u)) goto L_15035EFE; /* 0x15035EF4: jns 0x15035efe */
L_15035EF6:
    PUSH32(esp, 0xFFFFFFFFu); /* 0x15035EF6: push -1 */
    RECOMP_ICALL(MEM32(0x150C0204)); /* 0x15035EF8: call dword ptr [0x150c0204] */
    RECOMP_FLAGS_IN();
L_15035EFE:
    ecx = MEM32(ebp + 0x8); /* 0x15035EFE: mov ecx, dword ptr [ebp + 8] */
    eax = MEM32(0x150BDFC0); /* 0x15035F01: mov eax, dword ptr [0x150bdfc0] */
    MEM32(ecx) = eax; /* 0x15035F06: mov dword ptr [ecx], eax */
    ecx = MEM32(ebp + 0xC); /* 0x15035F08: mov ecx, dword ptr [ebp + 0xc] */
    eax = MEM32(0x150BDFC4); /* 0x15035F0B: mov eax, dword ptr [0x150bdfc4] */
    MEM32(ecx) = eax; /* 0x15035F10: mov dword ptr [ecx], eax */
    ecx = MEM32(ebp + 0x10); /* 0x15035F12: mov ecx, dword ptr [ebp + 0x10] */
    eax = MEM32(0x150BDFCC); /* 0x15035F15: mov eax, dword ptr [0x150bdfcc] */
    MEM32(ecx) = eax; /* 0x15035F1A: mov dword ptr [ecx], eax */
    eax = edx; /* 0x15035F1C: mov eax, edx */
    ebp = POP32_VAL(esp); /* 0x15035F1E: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x15035F1F: ret  */
    RECOMP_REGS_OUT();
}

void sub_15035F30(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x15035F30u);

L_15035F30:
    eax = 0x150BDFC0u; /* 0x15035F30: mov eax, 0x150bdfc0 */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x15035F35: ret  */
    RECOMP_REGS_OUT();
}

void sub_15035F40(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x15035F40u);

L_15035F40:
    eax = 0x150BDFC4u; /* 0x15035F40: mov eax, 0x150bdfc4 */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x15035F45: ret  */
    RECOMP_REGS_OUT();
}
