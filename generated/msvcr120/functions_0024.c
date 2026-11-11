#define RECOMP_GENERATED_CODE

#include "functions.h"

void sub_100846D6(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x100846D6u);

L_100846D6:
    PUSH32(esp, ebp); /* 0x100846D6: push ebp */
    ebp = esp; /* 0x100846D7: mov ebp, esp */
    PUSH32(esp, MEM32(ebp + 0x14)); /* 0x100846D9: push dword ptr [ebp + 0x14] */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x100846DC: push dword ptr [ebp + 0x10] */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x100846DF: push dword ptr [ebp + 0xc] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x100846E2: push dword ptr [ebp + 8] */
    PUSH32(esp, 0x1008F202u); /* 0x100846E5: push 0x1008f202 */
    RECOMP_CALL(sub_1008472F); /* 0x100846EA: call 0x1008472f */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x14u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x14u; /* 0x100846EF: add esp, 0x14 */
    _flag_k = FK_ADD;
    ebp = POP32_VAL(esp); /* 0x100846F2: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x100846F3: ret  */
    RECOMP_REGS_OUT();
}

void sub_100846F4(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x100846F4u);

L_100846F4:
    PUSH32(esp, ebp); /* 0x100846F4: push ebp */
    ebp = esp; /* 0x100846F5: mov ebp, esp */
    PUSH32(esp, MEM32(ebp + 0x14)); /* 0x100846F7: push dword ptr [ebp + 0x14] */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x100846FA: push dword ptr [ebp + 0x10] */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x100846FD: push dword ptr [ebp + 0xc] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x10084700: push dword ptr [ebp + 8] */
    PUSH32(esp, 0x10013BECu); /* 0x10084703: push 0x10013bec */
    RECOMP_CALL(sub_1008472F); /* 0x10084708: call 0x1008472f */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x14u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x14u; /* 0x1008470D: add esp, 0x14 */
    _flag_k = FK_ADD;
    ebp = POP32_VAL(esp); /* 0x10084710: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x10084711: ret  */
    RECOMP_REGS_OUT();
}

void sub_10084712(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x10084712u);

L_10084712:
    PUSH32(esp, ebp); /* 0x10084712: push ebp */
    ebp = esp; /* 0x10084713: mov ebp, esp */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x10084715: push dword ptr [ebp + 0x10] */
    PUSH32(esp, 0); /* 0x10084718: push 0 */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x1008471A: push dword ptr [ebp + 0xc] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x1008471D: push dword ptr [ebp + 8] */
    PUSH32(esp, 0x10016C0Fu); /* 0x10084720: push 0x10016c0f */
    RECOMP_CALL(sub_1008472F); /* 0x10084725: call 0x1008472f */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x14u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x14u; /* 0x1008472A: add esp, 0x14 */
    _flag_k = FK_ADD;
    ebp = POP32_VAL(esp); /* 0x1008472D: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1008472E: ret  */
    RECOMP_REGS_OUT();
}

void sub_1008472F(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1008472Fu);

L_1008472F:
    PUSH32(esp, 0xCu); /* 0x1008472F: push 0xc */
    PUSH32(esp, 0x10084840u); /* 0x10084731: push 0x10084840 */
    RECOMP_CALL(sub_1000ED7E); /* 0x10084736: call 0x1000ed7e */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ebx = 0; /* 0x1008473B: xor ebx, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x1C)) = ebx; /* 0x1008473D: mov dword ptr [ebp - 0x1c], ebx */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x10084740: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    edi = MEM32(ebp + 0xC); /* 0x10084742: mov edi, dword ptr [ebp + 0xc] */
    /* test edi, edi */ /* 0x10084745: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    SET_LO8(eax, (TEST_NZ(_flag_a, _flag_b)) ? 1 : 0); /* 0x10084747: setne al */
    /* test eax, eax */ /* 0x1008474A: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_10084766; /* 0x1008474C: jne 0x10084766 */
L_1008474E:
    RECOMP_CALL(sub_1001177D); /* 0x1008474E: call 0x1001177d */
    RECOMP_FLAGS_IN();
    MEM32(eax) = 0x16u; /* 0x10084753: mov dword ptr [eax], 0x16 */
    RECOMP_CALL(sub_100A4670); /* 0x10084759: call 0x100a4670 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)((eax | 0xFFFFFFFFu)); _flag_b = (uint32_t)((eax | 0xFFFFFFFFu));
    eax = eax | 0xFFFFFFFFu; /* 0x1008475E: or eax, 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_1008482C; /* 0x10084761: jmp 0x1008482c */
L_10084766:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x10084766: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp MEM32(ebp + 0x10), eax */ /* 0x10084768: cmp dword ptr [ebp + 0x10], eax */
    _flag_a = (uint32_t)(MEM32(ebp + 0x10)); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    SET_LO8(eax, (CMP_NE(_flag_a, _flag_b)) ? 1 : 0); /* 0x1008476B: setne al */
    /* test eax, eax */ /* 0x1008476E: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_Z(_flag_a, _flag_b)) goto L_1008474E; /* 0x10084770: je 0x1008474e */
L_10084772:
    MEM32(ebp + 0xC) = edi; /* 0x10084772: mov dword ptr [ebp + 0xc], edi */
    PUSH32(esp, edi); /* 0x10084775: push edi */
    RECOMP_CALL(sub_10014B96); /* 0x10084776: call 0x10014b96 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1008477B: pop ecx */
    MEM32(ebp + (-0x4)) = ebx; /* 0x1008477C: mov dword ptr [ebp - 4], ebx */
    /* test MEM8(edi + 0xC), 0x40u */ /* 0x1008477F: test byte ptr [edi + 0xc], 0x40 */
    _flag_a = (uint32_t)(MEM8(edi + 0xC)) << 24; _flag_b = (uint32_t)(0x40u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_100847F6; /* 0x10084783: jne 0x100847f6 */
L_10084785:
    PUSH32(esp, edi); /* 0x10084785: push edi */
    RECOMP_CALL(sub_1001427C); /* 0x10084786: call 0x1001427c */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1008478B: pop ecx */
    edx = eax; /* 0x1008478C: mov edx, eax */
    /* cmp edx, 0xFFFFFFFFu */ /* 0x1008478E: cmp edx, -1 */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(0xFFFFFFFFu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_100847AC; /* 0x10084791: je 0x100847ac */
L_10084793:
    /* cmp edx, 0xFFFFFFFEu */ /* 0x10084793: cmp edx, -2 */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(0xFFFFFFFEu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_100847AC; /* 0x10084796: je 0x100847ac */
L_10084798:
    ecx = edx; /* 0x10084798: mov ecx, edx */
    if (5u) _cf = (((ecx) >> 4) & 1u); /* 0x1008479A: sar ecx, 5 */
    if (5u) { _flag_a = recomp_flags_pack(((uint32_t)((int32_t)ecx >> 5u)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ecx = (uint32_t)((int32_t)ecx >> 5u);
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x1Fu);
    eax = eax & 0x1Fu; /* 0x1008479D: and eax, 0x1f */
    _cf = 0;
    _flag_k = FK_TEST;
    if (6u) _cf = (((eax) >> 26) & 1u); /* 0x100847A0: shl eax, 6 */
    if (6u) { _flag_a = recomp_flags_pack((eax << 6u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax << 6u; /* 0x100847A0: shl eax, 6 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(ecx * 4 + 0x100DF640));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + MEM32(ecx * 4 + 0x100DF640); /* 0x100847A3: add eax, dword ptr [ecx*4 + 0x100df640] */
    _flag_k = FK_ADD;
    goto L_100847B1; /* 0x100847AA: jmp 0x100847b1 */
L_100847AC:
    eax = 0x100DF520u; /* 0x100847AC: mov eax, 0x100df520 */
L_100847B1:
    /* test MEM8(eax + 0x24), 0x7Fu */ /* 0x100847B1: test byte ptr [eax + 0x24], 0x7f */
    _flag_a = (uint32_t)(MEM8(eax + 0x24)) << 24; _flag_b = (uint32_t)(0x7Fu) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_100847E0; /* 0x100847B5: jne 0x100847e0 */
L_100847B7:
    /* cmp edx, 0xFFFFFFFFu */ /* 0x100847B7: cmp edx, -1 */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(0xFFFFFFFFu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_100847D5; /* 0x100847BA: je 0x100847d5 */
L_100847BC:
    /* cmp edx, 0xFFFFFFFEu */ /* 0x100847BC: cmp edx, -2 */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(0xFFFFFFFEu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_100847D5; /* 0x100847BF: je 0x100847d5 */
L_100847C1:
    eax = edx; /* 0x100847C1: mov eax, edx */
    if (5u) _cf = (((eax) >> 4) & 1u); /* 0x100847C3: sar eax, 5 */
    if (5u) { _flag_a = recomp_flags_pack(((uint32_t)((int32_t)eax >> 5u)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = (uint32_t)((int32_t)eax >> 5u);
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(0x1Fu);
    edx = edx & 0x1Fu; /* 0x100847C6: and edx, 0x1f */
    _cf = 0;
    _flag_k = FK_TEST;
    if (6u) _cf = (((edx) >> 26) & 1u); /* 0x100847C9: shl edx, 6 */
    if (6u) { _flag_a = recomp_flags_pack((edx << 6u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    edx = edx << 6u; /* 0x100847C9: shl edx, 6 */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(MEM32(eax * 4 + 0x100DF640));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edx = edx + MEM32(eax * 4 + 0x100DF640); /* 0x100847CC: add edx, dword ptr [eax*4 + 0x100df640] */
    _flag_k = FK_ADD;
    goto L_100847DA; /* 0x100847D3: jmp 0x100847da */
L_100847D5:
    edx = 0x100DF520u; /* 0x100847D5: mov edx, 0x100df520 */
L_100847DA:
    /* test MEM8(edx + 0x24), 0x80u */ /* 0x100847DA: test byte ptr [edx + 0x24], 0x80 */
    _flag_a = (uint32_t)(MEM8(edx + 0x24)) << 24; _flag_b = (uint32_t)(0x80u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_100847F6; /* 0x100847DE: je 0x100847f6 */
L_100847E0:
    RECOMP_CALL(sub_1001177D); /* 0x100847E0: call 0x1001177d */
    RECOMP_FLAGS_IN();
    MEM32(eax) = 0x16u; /* 0x100847E5: mov dword ptr [eax], 0x16 */
    RECOMP_CALL(sub_100A4670); /* 0x100847EB: call 0x100a4670 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)((ebx | 0xFFFFFFFFu)); _flag_b = (uint32_t)((ebx | 0xFFFFFFFFu));
    ebx = ebx | 0xFFFFFFFFu; /* 0x100847F0: or ebx, 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x1C)) = ebx; /* 0x100847F3: mov dword ptr [ebp - 0x1c], ebx */
L_100847F6:
    /* test ebx, ebx */ /* 0x100847F6: test ebx, ebx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ebx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1008481E; /* 0x100847F8: jne 0x1008481e */
L_100847FA:
    PUSH32(esp, edi); /* 0x100847FA: push edi */
    RECOMP_CALL(sub_10020477); /* 0x100847FB: call 0x10020477 */
    RECOMP_FLAGS_IN();
    esi = eax; /* 0x10084800: mov esi, eax */
    PUSH32(esp, MEM32(ebp + 0x18)); /* 0x10084802: push dword ptr [ebp + 0x18] */
    PUSH32(esp, MEM32(ebp + 0x14)); /* 0x10084805: push dword ptr [ebp + 0x14] */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x10084808: push dword ptr [ebp + 0x10] */
    PUSH32(esp, edi); /* 0x1008480B: push edi */
    RECOMP_ICALL(MEM32(ebp + 0x8)); /* 0x1008480C: call dword ptr [ebp + 8] */
    RECOMP_FLAGS_IN();
    ebx = eax; /* 0x1008480F: mov ebx, eax */
    MEM32(ebp + (-0x1C)) = ebx; /* 0x10084811: mov dword ptr [ebp - 0x1c], ebx */
    PUSH32(esp, edi); /* 0x10084814: push edi */
    PUSH32(esp, esi); /* 0x10084815: push esi */
    RECOMP_CALL(sub_100204F6); /* 0x10084816: call 0x100204f6 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x1Cu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x1Cu; /* 0x1008481B: add esp, 0x1c */
    _flag_k = FK_ADD;
L_1008481E:
    MEM32(ebp + (-0x4)) = 0xFFFFFFFEu; /* 0x1008481E: mov dword ptr [ebp - 4], 0xfffffffe */
    RECOMP_CALL(sub_10084838); /* 0x10084825: call 0x10084838 */
    RECOMP_FLAGS_IN();
    eax = ebx; /* 0x1008482A: mov eax, ebx */
L_1008482C:
    RECOMP_CALL(sub_1000EDC3); /* 0x1008482C: call 0x1000edc3 */
    RECOMP_FLAGS_IN();
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x10084831: ret  */
    RECOMP_REGS_OUT();
}

void sub_10084838(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x10084838u);

L_10084838:
    PUSH32(esp, edi); /* 0x10084838: push edi */
    RECOMP_CALL(sub_10014B60); /* 0x10084839: call 0x10014b60 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1008483E: pop ecx */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1008483F: ret  */
    RECOMP_REGS_OUT();
}

void sub_1008485C(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1008485Cu);

L_1008485C:
    PUSH32(esp, ebp); /* 0x1008485C: push ebp */
    ebp = esp; /* 0x1008485D: mov ebp, esp */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x1008485F: push dword ptr [ebp + 0x10] */
    PUSH32(esp, 0); /* 0x10084862: push 0 */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x10084864: push dword ptr [ebp + 0xc] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x10084867: push dword ptr [ebp + 8] */
    PUSH32(esp, 0x10013BECu); /* 0x1008486A: push 0x10013bec */
    RECOMP_CALL(sub_1008472F); /* 0x1008486F: call 0x1008472f */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x14u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x14u; /* 0x10084874: add esp, 0x14 */
    _flag_k = FK_ADD;
    ebp = POP32_VAL(esp); /* 0x10084877: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x10084878: ret  */
    RECOMP_REGS_OUT();
}

void sub_10084879(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x10084879u);

L_10084879:
    PUSH32(esp, ebp); /* 0x10084879: push ebp */
    ebp = esp; /* 0x1008487A: mov ebp, esp */
    PUSH32(esp, MEM32(ebp + 0x14)); /* 0x1008487C: push dword ptr [ebp + 0x14] */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x1008487F: push dword ptr [ebp + 0x10] */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x10084882: push dword ptr [ebp + 0xc] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x10084885: push dword ptr [ebp + 8] */
    PUSH32(esp, 0x1001D315u); /* 0x10084888: push 0x1001d315 */
    RECOMP_CALL(sub_1002E996); /* 0x1008488D: call 0x1002e996 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x14u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x14u; /* 0x10084892: add esp, 0x14 */
    _flag_k = FK_ADD;
    ebp = POP32_VAL(esp); /* 0x10084895: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x10084896: ret  */
    RECOMP_REGS_OUT();
}

void sub_10084897(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x10084897u);

L_10084897:
    PUSH32(esp, ebp); /* 0x10084897: push ebp */
    ebp = esp; /* 0x10084898: mov ebp, esp */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x1008489A: push dword ptr [ebp + 0x10] */
    PUSH32(esp, 0); /* 0x1008489D: push 0 */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x1008489F: push dword ptr [ebp + 0xc] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x100848A2: push dword ptr [ebp + 8] */
    PUSH32(esp, 0x100907DDu); /* 0x100848A5: push 0x100907dd */
    RECOMP_CALL(sub_1002E996); /* 0x100848AA: call 0x1002e996 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x14u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x14u; /* 0x100848AF: add esp, 0x14 */
    _flag_k = FK_ADD;
    ebp = POP32_VAL(esp); /* 0x100848B2: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x100848B3: ret  */
    RECOMP_REGS_OUT();
}

void sub_100848B4(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x100848B4u);

L_100848B4:
    PUSH32(esp, ebp); /* 0x100848B4: push ebp */
    ebp = esp; /* 0x100848B5: mov ebp, esp */
    PUSH32(esp, MEM32(ebp + 0x14)); /* 0x100848B7: push dword ptr [ebp + 0x14] */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x100848BA: push dword ptr [ebp + 0x10] */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x100848BD: push dword ptr [ebp + 0xc] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x100848C0: push dword ptr [ebp + 8] */
    PUSH32(esp, 0x100907DDu); /* 0x100848C3: push 0x100907dd */
    RECOMP_CALL(sub_1002E996); /* 0x100848C8: call 0x1002e996 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x14u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x14u; /* 0x100848CD: add esp, 0x14 */
    _flag_k = FK_ADD;
    ebp = POP32_VAL(esp); /* 0x100848D0: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x100848D1: ret  */
    RECOMP_REGS_OUT();
}

void sub_100848D2(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x100848D2u);

L_100848D2:
    PUSH32(esp, ebp); /* 0x100848D2: push ebp */
    ebp = esp; /* 0x100848D3: mov ebp, esp */
    PUSH32(esp, MEM32(ebp + 0x14)); /* 0x100848D5: push dword ptr [ebp + 0x14] */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x100848D8: push dword ptr [ebp + 0x10] */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x100848DB: push dword ptr [ebp + 0xc] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x100848DE: push dword ptr [ebp + 8] */
    PUSH32(esp, 0x1001D716u); /* 0x100848E1: push 0x1001d716 */
    RECOMP_CALL(sub_1002E996); /* 0x100848E6: call 0x1002e996 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x14u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x14u; /* 0x100848EB: add esp, 0x14 */
    _flag_k = FK_ADD;
    ebp = POP32_VAL(esp); /* 0x100848EE: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x100848EF: ret  */
    RECOMP_REGS_OUT();
}

void sub_100848F0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x100848F0u);

L_100848F0:
    PUSH32(esp, ebp); /* 0x100848F0: push ebp */
    ebp = esp; /* 0x100848F1: mov ebp, esp */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x100848F3: push dword ptr [ebp + 0x10] */
    PUSH32(esp, 0); /* 0x100848F6: push 0 */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x100848F8: push dword ptr [ebp + 0xc] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x100848FB: push dword ptr [ebp + 8] */
    PUSH32(esp, 0x1001D716u); /* 0x100848FE: push 0x1001d716 */
    RECOMP_CALL(sub_1002E996); /* 0x10084903: call 0x1002e996 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x14u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x14u; /* 0x10084908: add esp, 0x14 */
    _flag_k = FK_ADD;
    ebp = POP32_VAL(esp); /* 0x1008490B: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1008490C: ret  */
    RECOMP_REGS_OUT();
}

void sub_1008490D(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1008490Du);

L_1008490D:
    PUSH32(esp, ebp); /* 0x1008490D: push ebp */
    ebp = esp; /* 0x1008490E: mov ebp, esp */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x10084910: push dword ptr [ebp + 0xc] */
    PUSH32(esp, 0); /* 0x10084913: push 0 */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x10084915: push dword ptr [ebp + 8] */
    PUSH32(esp, 0x10016C0Fu); /* 0x10084918: push 0x10016c0f */
    RECOMP_CALL(sub_1001E050); /* 0x1008491D: call 0x1001e050 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x10u; /* 0x10084922: add esp, 0x10 */
    _flag_k = FK_ADD;
    ebp = POP32_VAL(esp); /* 0x10084925: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x10084926: ret  */
    RECOMP_REGS_OUT();
}

void sub_10084927(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x10084927u);

L_10084927:
    PUSH32(esp, ebp); /* 0x10084927: push ebp */
    ebp = esp; /* 0x10084928: mov ebp, esp */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x1008492A: push dword ptr [ebp + 0x10] */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x1008492D: push dword ptr [ebp + 0xc] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x10084930: push dword ptr [ebp + 8] */
    PUSH32(esp, 0x10016C0Fu); /* 0x10084933: push 0x10016c0f */
    RECOMP_CALL(sub_1001E050); /* 0x10084938: call 0x1001e050 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x10u; /* 0x1008493D: add esp, 0x10 */
    _flag_k = FK_ADD;
    ebp = POP32_VAL(esp); /* 0x10084940: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x10084941: ret  */
    RECOMP_REGS_OUT();
}

void sub_10084942(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x10084942u);

L_10084942:
    PUSH32(esp, ebp); /* 0x10084942: push ebp */
    ebp = esp; /* 0x10084943: mov ebp, esp */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x10084945: push dword ptr [ebp + 0xc] */
    PUSH32(esp, 0); /* 0x10084948: push 0 */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x1008494A: push dword ptr [ebp + 8] */
    PUSH32(esp, 0x1008F202u); /* 0x1008494D: push 0x1008f202 */
    RECOMP_CALL(sub_1001E050); /* 0x10084952: call 0x1001e050 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x10u; /* 0x10084957: add esp, 0x10 */
    _flag_k = FK_ADD;
    ebp = POP32_VAL(esp); /* 0x1008495A: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1008495B: ret  */
    RECOMP_REGS_OUT();
}

void sub_1008495C(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1008495Cu);

L_1008495C:
    PUSH32(esp, ebp); /* 0x1008495C: push ebp */
    ebp = esp; /* 0x1008495D: mov ebp, esp */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x1008495F: push dword ptr [ebp + 0x10] */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x10084962: push dword ptr [ebp + 0xc] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x10084965: push dword ptr [ebp + 8] */
    PUSH32(esp, 0x1008F202u); /* 0x10084968: push 0x1008f202 */
    RECOMP_CALL(sub_1001E050); /* 0x1008496D: call 0x1001e050 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x10u; /* 0x10084972: add esp, 0x10 */
    _flag_k = FK_ADD;
    ebp = POP32_VAL(esp); /* 0x10084975: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x10084976: ret  */
    RECOMP_REGS_OUT();
}

void sub_10084977(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x10084977u);

L_10084977:
    PUSH32(esp, ebp); /* 0x10084977: push ebp */
    ebp = esp; /* 0x10084978: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x20u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x20u; /* 0x1008497A: sub esp, 0x20 */
    _flag_k = FK_CMP;
    _flag_a = (uint32_t)(MEM32(ebp + (-0x20))); _flag_b = (uint32_t)(0);
    MEM32(ebp + (-0x20)) = MEM32(ebp + (-0x20)) & 0; /* 0x1008497D: and dword ptr [ebp - 0x20], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x10084981: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, edi); /* 0x10084983: push edi */
    edi = ebp + (-0x1C); /* 0x10084984: lea edi, [ebp - 0x1c] */
    PUSH32(esp, 7); /* 0x10084987: push 7 */
    ecx = POP32_VAL(esp); /* 0x10084989: pop ecx */
    { uint32_t _n = ecx, _b = _n * 4u; /* 0x1008498A: rep stosd dword ptr es:[edi], eax */ if (_df > 0) { MEMSET32((void*)ADDR(edi), eax, _n); edi += _b; } else { MEMSET32((void*)ADDR(edi - _b + 4u), eax, _n); edi -= _b; } ecx = 0; }
    edi = POP32_VAL(esp); /* 0x1008498C: pop edi */
    /* cmp MEM32(ebp + 0xC), eax */ /* 0x1008498D: cmp dword ptr [ebp + 0xc], eax */
    _flag_a = (uint32_t)(MEM32(ebp + 0xC)); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_100849A7; /* 0x10084990: jne 0x100849a7 */
L_10084992:
    RECOMP_CALL(sub_1001177D); /* 0x10084992: call 0x1001177d */
    RECOMP_FLAGS_IN();
    MEM32(eax) = 0x16u; /* 0x10084997: mov dword ptr [eax], 0x16 */
    RECOMP_CALL(sub_100A4670); /* 0x1008499D: call 0x100a4670 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)((eax | 0xFFFFFFFFu)); _flag_b = (uint32_t)((eax | 0xFFFFFFFFu));
    eax = eax | 0xFFFFFFFFu; /* 0x100849A2: or eax, 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_100849F7; /* 0x100849A5: jmp 0x100849f7 */
L_100849A7:
    eax = MEM32(ebp + 0x8); /* 0x100849A7: mov eax, dword ptr [ebp + 8] */
    /* test eax, eax */ /* 0x100849AA: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_Z(_flag_a, _flag_b)) goto L_10084992; /* 0x100849AC: je 0x10084992 */
L_100849AE:
    PUSH32(esp, esi); /* 0x100849AE: push esi */
    PUSH32(esp, MEM32(ebp + 0x14)); /* 0x100849AF: push dword ptr [ebp + 0x14] */
    MEM32(ebp + (-0x18)) = eax; /* 0x100849B2: mov dword ptr [ebp - 0x18], eax */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x100849B5: push dword ptr [ebp + 0x10] */
    MEM32(ebp + (-0x20)) = eax; /* 0x100849B8: mov dword ptr [ebp - 0x20], eax */
    eax = ebp + (-0x20); /* 0x100849BB: lea eax, [ebp - 0x20] */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x100849BE: push dword ptr [ebp + 0xc] */
    MEM32(ebp + (-0x1C)) = 0x7FFFFFFFu; /* 0x100849C1: mov dword ptr [ebp - 0x1c], 0x7fffffff */
    PUSH32(esp, eax); /* 0x100849C8: push eax */
    MEM32(ebp + (-0x14)) = 0x42u; /* 0x100849C9: mov dword ptr [ebp - 0x14], 0x42 */
    RECOMP_CALL(sub_10016C0F); /* 0x100849D0: call 0x10016c0f */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x10u; /* 0x100849D5: add esp, 0x10 */
    _flag_k = FK_ADD;
    esi = eax; /* 0x100849D8: mov esi, eax */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x1C))); _flag_b = (uint32_t)(1);
    MEM32(ebp + (-0x1C)) = MEM32(ebp + (-0x1C)) - 1; /* 0x100849DA: dec dword ptr [ebp - 0x1c] */
    _flag_k = FK_DEC;
    if (/* dec result */ CMP_S(_flag_a, _flag_b)) goto L_100849E7; /* 0x100849DD: js 0x100849e7 */
L_100849DF:
    ecx = MEM32(ebp + (-0x20)); /* 0x100849DF: mov ecx, dword ptr [ebp - 0x20] */
    MEM8(ecx) = (uint8_t)(0); /* 0x100849E2: mov byte ptr [ecx], 0 */
    goto L_100849F4; /* 0x100849E5: jmp 0x100849f4 */
L_100849E7:
    eax = ebp + (-0x20); /* 0x100849E7: lea eax, [ebp - 0x20] */
    PUSH32(esp, eax); /* 0x100849EA: push eax */
    PUSH32(esp, 0); /* 0x100849EB: push 0 */
    RECOMP_CALL(sub_1002C35B); /* 0x100849ED: call 0x1002c35b */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x100849F2: pop ecx */
    ecx = POP32_VAL(esp); /* 0x100849F3: pop ecx */
L_100849F4:
    eax = esi; /* 0x100849F4: mov eax, esi */
    esi = POP32_VAL(esp); /* 0x100849F6: pop esi */
L_100849F7:
    esp = ebp; /* 0x100849F7: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x100849F9: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x100849FA: ret  */
    RECOMP_REGS_OUT();
}

void sub_100849FB(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x100849FBu);

L_100849FB:
    PUSH32(esp, ebp); /* 0x100849FB: push ebp */
    ebp = esp; /* 0x100849FC: mov ebp, esp */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x100849FE: push dword ptr [ebp + 0x10] */
    PUSH32(esp, 0); /* 0x10084A01: push 0 */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x10084A03: push dword ptr [ebp + 0xc] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x10084A06: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_10084977); /* 0x10084A09: call 0x10084977 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x10u; /* 0x10084A0E: add esp, 0x10 */
    _flag_k = FK_ADD;
    ebp = POP32_VAL(esp); /* 0x10084A11: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x10084A12: ret  */
    RECOMP_REGS_OUT();
}

void sub_10084A13(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x10084A13u);

L_10084A13:
    PUSH32(esp, ebp); /* 0x10084A13: push ebp */
    ebp = esp; /* 0x10084A14: mov ebp, esp */
    PUSH32(esp, MEM32(ebp + 0x14)); /* 0x10084A16: push dword ptr [ebp + 0x14] */
    PUSH32(esp, 0); /* 0x10084A19: push 0 */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x10084A1B: push dword ptr [ebp + 0x10] */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x10084A1E: push dword ptr [ebp + 0xc] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x10084A21: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_10084A2E); /* 0x10084A24: call 0x10084a2e */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x14u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x14u; /* 0x10084A29: add esp, 0x14 */
    _flag_k = FK_ADD;
    ebp = POP32_VAL(esp); /* 0x10084A2C: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x10084A2D: ret  */
    RECOMP_REGS_OUT();
}

void sub_10084A2E(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x10084A2Eu);

L_10084A2E:
    PUSH32(esp, ebp); /* 0x10084A2E: push ebp */
    ebp = esp; /* 0x10084A2F: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x20u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x20u; /* 0x10084A31: sub esp, 0x20 */
    _flag_k = FK_CMP;
    _flag_a = (uint32_t)(MEM32(ebp + (-0x20))); _flag_b = (uint32_t)(0);
    MEM32(ebp + (-0x20)) = MEM32(ebp + (-0x20)) & 0; /* 0x10084A34: and dword ptr [ebp - 0x20], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x10084A38: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, edi); /* 0x10084A3A: push edi */
    edi = ebp + (-0x1C); /* 0x10084A3B: lea edi, [ebp - 0x1c] */
    PUSH32(esp, 7); /* 0x10084A3E: push 7 */
    ecx = POP32_VAL(esp); /* 0x10084A40: pop ecx */
    { uint32_t _n = ecx, _b = _n * 4u; /* 0x10084A41: rep stosd dword ptr es:[edi], eax */ if (_df > 0) { MEMSET32((void*)ADDR(edi), eax, _n); edi += _b; } else { MEMSET32((void*)ADDR(edi - _b + 4u), eax, _n); edi -= _b; } ecx = 0; }
    /* cmp MEM32(ebp + 0x10), eax */ /* 0x10084A43: cmp dword ptr [ebp + 0x10], eax */
    _flag_a = (uint32_t)(MEM32(ebp + 0x10)); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_10084A5D; /* 0x10084A46: jne 0x10084a5d */
L_10084A48:
    RECOMP_CALL(sub_1001177D); /* 0x10084A48: call 0x1001177d */
    RECOMP_FLAGS_IN();
    MEM32(eax) = 0x16u; /* 0x10084A4D: mov dword ptr [eax], 0x16 */
    RECOMP_CALL(sub_100A4670); /* 0x10084A53: call 0x100a4670 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)((eax | 0xFFFFFFFFu)); _flag_b = (uint32_t)((eax | 0xFFFFFFFFu));
    eax = eax | 0xFFFFFFFFu; /* 0x10084A58: or eax, 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_10084AD5; /* 0x10084A5B: jmp 0x10084ad5 */
L_10084A5D:
    eax = MEM32(ebp + 0xC); /* 0x10084A5D: mov eax, dword ptr [ebp + 0xc] */
    PUSH32(esp, esi); /* 0x10084A60: push esi */
    esi = MEM32(ebp + 0x8); /* 0x10084A61: mov esi, dword ptr [ebp + 8] */
    /* test eax, eax */ /* 0x10084A64: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_10084A81; /* 0x10084A66: je 0x10084a81 */
L_10084A68:
    /* test esi, esi */ /* 0x10084A68: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_10084A81; /* 0x10084A6A: jne 0x10084a81 */
L_10084A6C:
    RECOMP_CALL(sub_1001177D); /* 0x10084A6C: call 0x1001177d */
    RECOMP_FLAGS_IN();
    MEM32(eax) = 0x16u; /* 0x10084A71: mov dword ptr [eax], 0x16 */
    RECOMP_CALL(sub_100A4670); /* 0x10084A77: call 0x100a4670 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)((eax | 0xFFFFFFFFu)); _flag_b = (uint32_t)((eax | 0xFFFFFFFFu));
    eax = eax | 0xFFFFFFFFu; /* 0x10084A7C: or eax, 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_10084AD4; /* 0x10084A7F: jmp 0x10084ad4 */
L_10084A81:
    ecx = 0x7FFFFFFFu; /* 0x10084A81: mov ecx, 0x7fffffff */
    MEM32(ebp + (-0x1C)) = ecx; /* 0x10084A86: mov dword ptr [ebp - 0x1c], ecx */
    /* cmp eax, ecx */ /* 0x10084A89: cmp eax, ecx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_A(_flag_a, _flag_b)) goto L_10084A90; /* 0x10084A8B: ja 0x10084a90 */
L_10084A8D:
    MEM32(ebp + (-0x1C)) = eax; /* 0x10084A8D: mov dword ptr [ebp - 0x1c], eax */
L_10084A90:
    PUSH32(esp, MEM32(ebp + 0x18)); /* 0x10084A90: push dword ptr [ebp + 0x18] */
    eax = ebp + (-0x20); /* 0x10084A93: lea eax, [ebp - 0x20] */
    MEM32(ebp + (-0x14)) = 0x42u; /* 0x10084A96: mov dword ptr [ebp - 0x14], 0x42 */
    PUSH32(esp, MEM32(ebp + 0x14)); /* 0x10084A9D: push dword ptr [ebp + 0x14] */
    MEM32(ebp + (-0x18)) = esi; /* 0x10084AA0: mov dword ptr [ebp - 0x18], esi */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x10084AA3: push dword ptr [ebp + 0x10] */
    MEM32(ebp + (-0x20)) = esi; /* 0x10084AA6: mov dword ptr [ebp - 0x20], esi */
    PUSH32(esp, eax); /* 0x10084AA9: push eax */
    RECOMP_CALL(sub_10016C0F); /* 0x10084AAA: call 0x10016c0f */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x10u; /* 0x10084AAF: add esp, 0x10 */
    _flag_k = FK_ADD;
    edi = eax; /* 0x10084AB2: mov edi, eax */
    /* test esi, esi */ /* 0x10084AB4: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_10084AD4; /* 0x10084AB6: je 0x10084ad4 */
L_10084AB8:
    _flag_a = (uint32_t)(MEM32(ebp + (-0x1C))); _flag_b = (uint32_t)(1);
    MEM32(ebp + (-0x1C)) = MEM32(ebp + (-0x1C)) - 1; /* 0x10084AB8: dec dword ptr [ebp - 0x1c] */
    _flag_k = FK_DEC;
    if (/* dec result */ CMP_S(_flag_a, _flag_b)) goto L_10084AC5; /* 0x10084ABB: js 0x10084ac5 */
L_10084ABD:
    eax = MEM32(ebp + (-0x20)); /* 0x10084ABD: mov eax, dword ptr [ebp - 0x20] */
    MEM8(eax) = (uint8_t)(0); /* 0x10084AC0: mov byte ptr [eax], 0 */
    goto L_10084AD2; /* 0x10084AC3: jmp 0x10084ad2 */
L_10084AC5:
    eax = ebp + (-0x20); /* 0x10084AC5: lea eax, [ebp - 0x20] */
    PUSH32(esp, eax); /* 0x10084AC8: push eax */
    PUSH32(esp, 0); /* 0x10084AC9: push 0 */
    RECOMP_CALL(sub_1002C35B); /* 0x10084ACB: call 0x1002c35b */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x10084AD0: pop ecx */
    ecx = POP32_VAL(esp); /* 0x10084AD1: pop ecx */
L_10084AD2:
    eax = edi; /* 0x10084AD2: mov eax, edi */
L_10084AD4:
    esi = POP32_VAL(esp); /* 0x10084AD4: pop esi */
L_10084AD5:
    edi = POP32_VAL(esp); /* 0x10084AD5: pop edi */
    esp = ebp; /* 0x10084AD6: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x10084AD8: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x10084AD9: ret  */
    RECOMP_REGS_OUT();
}

void sub_10084ADA(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x10084ADAu);

L_10084ADA:
    PUSH32(esp, ebp); /* 0x10084ADA: push ebp */
    ebp = esp; /* 0x10084ADB: mov ebp, esp */
    PUSH32(esp, MEM32(ebp + 0x14)); /* 0x10084ADD: push dword ptr [ebp + 0x14] */
    PUSH32(esp, 0); /* 0x10084AE0: push 0 */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x10084AE2: push dword ptr [ebp + 0x10] */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x10084AE5: push dword ptr [ebp + 0xc] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x10084AE8: push dword ptr [ebp + 8] */
    PUSH32(esp, 0x10016C0Fu); /* 0x10084AEB: push 0x10016c0f */
    RECOMP_CALL(sub_10013E6C); /* 0x10084AF0: call 0x10013e6c */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x18u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x18u; /* 0x10084AF5: add esp, 0x18 */
    _flag_k = FK_ADD;
    /* test eax, eax */ /* 0x10084AF8: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) == 0u)) goto L_10084AFF; /* 0x10084AFA: jns 0x10084aff */
L_10084AFC:
    _flag_a = (uint32_t)((eax | 0xFFFFFFFFu)); _flag_b = (uint32_t)((eax | 0xFFFFFFFFu));
    eax = eax | 0xFFFFFFFFu; /* 0x10084AFC: or eax, 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
L_10084AFF:
    ebp = POP32_VAL(esp); /* 0x10084AFF: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x10084B00: ret  */
    RECOMP_REGS_OUT();
}

void sub_10084B01(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x10084B01u);

L_10084B01:
    PUSH32(esp, ebp); /* 0x10084B01: push ebp */
    ebp = esp; /* 0x10084B02: mov ebp, esp */
    PUSH32(esp, MEM32(ebp + 0x18)); /* 0x10084B04: push dword ptr [ebp + 0x18] */
    PUSH32(esp, MEM32(ebp + 0x14)); /* 0x10084B07: push dword ptr [ebp + 0x14] */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x10084B0A: push dword ptr [ebp + 0x10] */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x10084B0D: push dword ptr [ebp + 0xc] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x10084B10: push dword ptr [ebp + 8] */
    PUSH32(esp, 0x10016C0Fu); /* 0x10084B13: push 0x10016c0f */
    RECOMP_CALL(sub_10013E6C); /* 0x10084B18: call 0x10013e6c */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x18u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x18u; /* 0x10084B1D: add esp, 0x18 */
    _flag_k = FK_ADD;
    /* test eax, eax */ /* 0x10084B20: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) == 0u)) goto L_10084B27; /* 0x10084B22: jns 0x10084b27 */
L_10084B24:
    _flag_a = (uint32_t)((eax | 0xFFFFFFFFu)); _flag_b = (uint32_t)((eax | 0xFFFFFFFFu));
    eax = eax | 0xFFFFFFFFu; /* 0x10084B24: or eax, 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
L_10084B27:
    ebp = POP32_VAL(esp); /* 0x10084B27: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x10084B28: ret  */
    RECOMP_REGS_OUT();
}

void sub_10084B29(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x10084B29u);

L_10084B29:
    PUSH32(esp, ebp); /* 0x10084B29: push ebp */
    ebp = esp; /* 0x10084B2A: mov ebp, esp */
    PUSH32(esp, MEM32(ebp + 0x18)); /* 0x10084B2C: push dword ptr [ebp + 0x18] */
    PUSH32(esp, 0); /* 0x10084B2F: push 0 */
    PUSH32(esp, MEM32(ebp + 0x14)); /* 0x10084B31: push dword ptr [ebp + 0x14] */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x10084B34: push dword ptr [ebp + 0x10] */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x10084B37: push dword ptr [ebp + 0xc] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x10084B3A: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_10084B47); /* 0x10084B3D: call 0x10084b47 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x18u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x18u; /* 0x10084B42: add esp, 0x18 */
    _flag_k = FK_ADD;
    ebp = POP32_VAL(esp); /* 0x10084B45: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x10084B46: ret  */
    RECOMP_REGS_OUT();
}

void sub_10084B47(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x10084B47u);

L_10084B47:
    PUSH32(esp, ebp); /* 0x10084B47: push ebp */
    ebp = esp; /* 0x10084B48: mov ebp, esp */
    PUSH32(esp, ecx); /* 0x10084B4A: push ecx */
    /* cmp MEM32(ebp + 0x14), 0 */ /* 0x10084B4B: cmp dword ptr [ebp + 0x14], 0 */
    _flag_a = (uint32_t)(MEM32(ebp + 0x14)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_10084B69; /* 0x10084B4F: jne 0x10084b69 */
L_10084B51:
    RECOMP_CALL(sub_1001177D); /* 0x10084B51: call 0x1001177d */
    RECOMP_FLAGS_IN();
    MEM32(eax) = 0x16u; /* 0x10084B56: mov dword ptr [eax], 0x16 */
    RECOMP_CALL(sub_100A4670); /* 0x10084B5C: call 0x100a4670 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)((eax | 0xFFFFFFFFu)); _flag_b = (uint32_t)((eax | 0xFFFFFFFFu));
    eax = eax | 0xFFFFFFFFu; /* 0x10084B61: or eax, 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_10084C43; /* 0x10084B64: jmp 0x10084c43 */
L_10084B69:
    PUSH32(esp, ebx); /* 0x10084B69: push ebx */
    PUSH32(esp, esi); /* 0x10084B6A: push esi */
    esi = MEM32(ebp + 0x8); /* 0x10084B6B: mov esi, dword ptr [ebp + 8] */
    PUSH32(esp, edi); /* 0x10084B6E: push edi */
    edi = MEM32(ebp + 0x10); /* 0x10084B6F: mov edi, dword ptr [ebp + 0x10] */
    /* test edi, edi */ /* 0x10084B72: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_10084B8A; /* 0x10084B74: jne 0x10084b8a */
L_10084B76:
    /* test esi, esi */ /* 0x10084B76: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_10084B92; /* 0x10084B78: jne 0x10084b92 */
L_10084B7A:
    /* cmp MEM32(ebp + 0xC), esi */ /* 0x10084B7A: cmp dword ptr [ebp + 0xc], esi */
    _flag_a = (uint32_t)(MEM32(ebp + 0xC)); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_10084C2D; /* 0x10084B7D: jne 0x10084c2d */
L_10084B83:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x10084B83: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_10084C40; /* 0x10084B85: jmp 0x10084c40 */
L_10084B8A:
    /* test esi, esi */ /* 0x10084B8A: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_10084C2D; /* 0x10084B8C: je 0x10084c2d */
L_10084B92:
    ebx = MEM32(ebp + 0xC); /* 0x10084B92: mov ebx, dword ptr [ebp + 0xc] */
    /* test ebx, ebx */ /* 0x10084B95: test ebx, ebx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ebx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_10084C2D; /* 0x10084B97: je 0x10084c2d */
L_10084B9D:
    RECOMP_CALL(sub_1001177D); /* 0x10084B9D: call 0x1001177d */
    RECOMP_FLAGS_IN();
    PUSH32(esp, MEM32(ebp + 0x1C)); /* 0x10084BA2: push dword ptr [ebp + 0x1c] */
    PUSH32(esp, MEM32(ebp + 0x18)); /* 0x10084BA5: push dword ptr [ebp + 0x18] */
    PUSH32(esp, MEM32(ebp + 0x14)); /* 0x10084BA8: push dword ptr [ebp + 0x14] */
    /* cmp ebx, edi */ /* 0x10084BAB: cmp ebx, edi */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_10084BDB; /* 0x10084BAD: jbe 0x10084bdb */
L_10084BAF:
    ebx = MEM32(eax); /* 0x10084BAF: mov ebx, dword ptr [eax] */
    eax = edi + 0x1; /* 0x10084BB1: lea eax, [edi + 1] */
    PUSH32(esp, eax); /* 0x10084BB4: push eax */
    PUSH32(esp, esi); /* 0x10084BB5: push esi */
    PUSH32(esp, 0x10013BECu); /* 0x10084BB6: push 0x10013bec */
    RECOMP_CALL(sub_10013E6C); /* 0x10084BBB: call 0x10013e6c */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x18u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x18u; /* 0x10084BC0: add esp, 0x18 */
    _flag_k = FK_ADD;
    /* cmp eax, 0xFFFFFFFEu */ /* 0x10084BC3: cmp eax, -2 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xFFFFFFFEu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_10084C14; /* 0x10084BC6: jne 0x10084c14 */
L_10084BC8:
    RECOMP_CALL(sub_1001177D); /* 0x10084BC8: call 0x1001177d */
    RECOMP_FLAGS_IN();
    /* cmp MEM32(eax), 0x22u */ /* 0x10084BCD: cmp dword ptr [eax], 0x22 */
    _flag_a = (uint32_t)(MEM32(eax)); _flag_b = (uint32_t)(0x22u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_10084C3D; /* 0x10084BD0: jne 0x10084c3d */
L_10084BD2:
    RECOMP_CALL(sub_1001177D); /* 0x10084BD2: call 0x1001177d */
    RECOMP_FLAGS_IN();
    MEM32(eax) = ebx; /* 0x10084BD7: mov dword ptr [eax], ebx */
    goto L_10084C3D; /* 0x10084BD9: jmp 0x10084c3d */
L_10084BDB:
    eax = MEM32(eax); /* 0x10084BDB: mov eax, dword ptr [eax] */
    PUSH32(esp, ebx); /* 0x10084BDD: push ebx */
    PUSH32(esp, esi); /* 0x10084BDE: push esi */
    PUSH32(esp, 0x10013BECu); /* 0x10084BDF: push 0x10013bec */
    MEM32(ebp + (-0x4)) = eax; /* 0x10084BE4: mov dword ptr [ebp - 4], eax */
    RECOMP_CALL(sub_10013E6C); /* 0x10084BE7: call 0x10013e6c */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x18u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x18u; /* 0x10084BEC: add esp, 0x18 */
    _flag_k = FK_ADD;
    MEM8(esi + ebx + (-0x1)) = (uint8_t)(0); /* 0x10084BEF: mov byte ptr [esi + ebx - 1], 0 */
    /* cmp eax, 0xFFFFFFFEu */ /* 0x10084BF4: cmp eax, -2 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xFFFFFFFEu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_10084C14; /* 0x10084BF7: jne 0x10084c14 */
L_10084BF9:
    /* cmp edi, 0xFFFFFFFFu */ /* 0x10084BF9: cmp edi, -1 */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(0xFFFFFFFFu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_10084C18; /* 0x10084BFC: jne 0x10084c18 */
L_10084BFE:
    RECOMP_CALL(sub_1001177D); /* 0x10084BFE: call 0x1001177d */
    RECOMP_FLAGS_IN();
    /* cmp MEM32(eax), 0x22u */ /* 0x10084C03: cmp dword ptr [eax], 0x22 */
    _flag_a = (uint32_t)(MEM32(eax)); _flag_b = (uint32_t)(0x22u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_10084C3D; /* 0x10084C06: jne 0x10084c3d */
L_10084C08:
    RECOMP_CALL(sub_1001177D); /* 0x10084C08: call 0x1001177d */
    RECOMP_FLAGS_IN();
    ecx = MEM32(ebp + (-0x4)); /* 0x10084C0D: mov ecx, dword ptr [ebp - 4] */
    MEM32(eax) = ecx; /* 0x10084C10: mov dword ptr [eax], ecx */
    goto L_10084C3D; /* 0x10084C12: jmp 0x10084c3d */
L_10084C14:
    /* test eax, eax */ /* 0x10084C14: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) == 0u)) goto L_10084C40; /* 0x10084C16: jns 0x10084c40 */
L_10084C18:
    MEM8(esi) = (uint8_t)(0); /* 0x10084C18: mov byte ptr [esi], 0 */
    /* cmp eax, 0xFFFFFFFEu */ /* 0x10084C1B: cmp eax, -2 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xFFFFFFFEu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_10084C3D; /* 0x10084C1E: jne 0x10084c3d */
L_10084C20:
    RECOMP_CALL(sub_1001177D); /* 0x10084C20: call 0x1001177d */
    RECOMP_FLAGS_IN();
    MEM32(eax) = 0x22u; /* 0x10084C25: mov dword ptr [eax], 0x22 */
    goto L_10084C38; /* 0x10084C2B: jmp 0x10084c38 */
L_10084C2D:
    RECOMP_CALL(sub_1001177D); /* 0x10084C2D: call 0x1001177d */
    RECOMP_FLAGS_IN();
    MEM32(eax) = 0x16u; /* 0x10084C32: mov dword ptr [eax], 0x16 */
L_10084C38:
    RECOMP_CALL(sub_100A4670); /* 0x10084C38: call 0x100a4670 */
    RECOMP_FLAGS_IN();
L_10084C3D:
    _flag_a = (uint32_t)((eax | 0xFFFFFFFFu)); _flag_b = (uint32_t)((eax | 0xFFFFFFFFu));
    eax = eax | 0xFFFFFFFFu; /* 0x10084C3D: or eax, 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
L_10084C40:
    edi = POP32_VAL(esp); /* 0x10084C40: pop edi */
    esi = POP32_VAL(esp); /* 0x10084C41: pop esi */
    ebx = POP32_VAL(esp); /* 0x10084C42: pop ebx */
L_10084C43:
    esp = ebp; /* 0x10084C43: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x10084C45: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x10084C46: ret  */
    RECOMP_REGS_OUT();
}

void sub_10084C47(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x10084C47u);

L_10084C47:
    PUSH32(esp, ebp); /* 0x10084C47: push ebp */
    ebp = esp; /* 0x10084C48: mov ebp, esp */
    PUSH32(esp, MEM32(ebp + 0x14)); /* 0x10084C4A: push dword ptr [ebp + 0x14] */
    PUSH32(esp, 0); /* 0x10084C4D: push 0 */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x10084C4F: push dword ptr [ebp + 0x10] */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x10084C52: push dword ptr [ebp + 0xc] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x10084C55: push dword ptr [ebp + 8] */
    PUSH32(esp, 0x1008F202u); /* 0x10084C58: push 0x1008f202 */
    RECOMP_CALL(sub_10013E6C); /* 0x10084C5D: call 0x10013e6c */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x18u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x18u; /* 0x10084C62: add esp, 0x18 */
    _flag_k = FK_ADD;
    /* test eax, eax */ /* 0x10084C65: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) == 0u)) goto L_10084C6C; /* 0x10084C67: jns 0x10084c6c */
L_10084C69:
    _flag_a = (uint32_t)((eax | 0xFFFFFFFFu)); _flag_b = (uint32_t)((eax | 0xFFFFFFFFu));
    eax = eax | 0xFFFFFFFFu; /* 0x10084C69: or eax, 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
L_10084C6C:
    ebp = POP32_VAL(esp); /* 0x10084C6C: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x10084C6D: ret  */
    RECOMP_REGS_OUT();
}

void sub_10084C6E(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x10084C6Eu);

L_10084C6E:
    PUSH32(esp, ebp); /* 0x10084C6E: push ebp */
    ebp = esp; /* 0x10084C6F: mov ebp, esp */
    PUSH32(esp, MEM32(ebp + 0x18)); /* 0x10084C71: push dword ptr [ebp + 0x18] */
    PUSH32(esp, MEM32(ebp + 0x14)); /* 0x10084C74: push dword ptr [ebp + 0x14] */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x10084C77: push dword ptr [ebp + 0x10] */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x10084C7A: push dword ptr [ebp + 0xc] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x10084C7D: push dword ptr [ebp + 8] */
    PUSH32(esp, 0x1008F202u); /* 0x10084C80: push 0x1008f202 */
    RECOMP_CALL(sub_10013E6C); /* 0x10084C85: call 0x10013e6c */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x18u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x18u; /* 0x10084C8A: add esp, 0x18 */
    _flag_k = FK_ADD;
    /* test eax, eax */ /* 0x10084C8D: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) == 0u)) goto L_10084C94; /* 0x10084C8F: jns 0x10084c94 */
L_10084C91:
    _flag_a = (uint32_t)((eax | 0xFFFFFFFFu)); _flag_b = (uint32_t)((eax | 0xFFFFFFFFu));
    eax = eax | 0xFFFFFFFFu; /* 0x10084C91: or eax, 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
L_10084C94:
    ebp = POP32_VAL(esp); /* 0x10084C94: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x10084C95: ret  */
    RECOMP_REGS_OUT();
}

void sub_10084C96(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x10084C96u);

L_10084C96:
    PUSH32(esp, ebp); /* 0x10084C96: push ebp */
    ebp = esp; /* 0x10084C97: mov ebp, esp */
    ebp = POP32_VAL(esp); /* 0x10084C99: pop ebp */
    goto L_10084D04; /* 0x10084C9A: jmp 0x10084d04 */
L_10084D04:
    PUSH32(esp, ebp); /* 0x10084D04: push ebp */
    ebp = esp; /* 0x10084D05: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x20u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x20u; /* 0x10084D07: sub esp, 0x20 */
    _flag_k = FK_CMP;
    PUSH32(esp, ebx); /* 0x10084D0A: push ebx */
    PUSH32(esp, edi); /* 0x10084D0B: push edi */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ebx = 0; /* 0x10084D0C: xor ebx, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
    edi = ebp + (-0x1C); /* 0x10084D0E: lea edi, [ebp - 0x1c] */
    PUSH32(esp, 7); /* 0x10084D11: push 7 */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x10084D13: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x20)) = ebx; /* 0x10084D15: mov dword ptr [ebp - 0x20], ebx */
    ecx = POP32_VAL(esp); /* 0x10084D18: pop ecx */
    { uint32_t _n = ecx, _b = _n * 4u; /* 0x10084D19: rep stosd dword ptr es:[edi], eax */ if (_df > 0) { MEMSET32((void*)ADDR(edi), eax, _n); edi += _b; } else { MEMSET32((void*)ADDR(edi - _b + 4u), eax, _n); edi -= _b; } ecx = 0; }
    /* cmp MEM32(ebp + 0xC), eax */ /* 0x10084D1B: cmp dword ptr [ebp + 0xc], eax */
    _flag_a = (uint32_t)(MEM32(ebp + 0xC)); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_10084D35; /* 0x10084D1E: jne 0x10084d35 */
L_10084D20:
    RECOMP_CALL(sub_1001177D); /* 0x10084D20: call 0x1001177d */
    RECOMP_FLAGS_IN();
    MEM32(eax) = 0x16u; /* 0x10084D25: mov dword ptr [eax], 0x16 */
    RECOMP_CALL(sub_100A4670); /* 0x10084D2B: call 0x100a4670 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)((eax | 0xFFFFFFFFu)); _flag_b = (uint32_t)((eax | 0xFFFFFFFFu));
    eax = eax | 0xFFFFFFFFu; /* 0x10084D30: or eax, 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_10084DA2; /* 0x10084D33: jmp 0x10084da2 */
L_10084D35:
    eax = MEM32(ebp + 0x8); /* 0x10084D35: mov eax, dword ptr [ebp + 8] */
    /* test eax, eax */ /* 0x10084D38: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_Z(_flag_a, _flag_b)) goto L_10084D20; /* 0x10084D3A: je 0x10084d20 */
L_10084D3C:
    PUSH32(esp, esi); /* 0x10084D3C: push esi */
    PUSH32(esp, MEM32(ebp + 0x14)); /* 0x10084D3D: push dword ptr [ebp + 0x14] */
    MEM32(ebp + (-0x18)) = eax; /* 0x10084D40: mov dword ptr [ebp - 0x18], eax */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x10084D43: push dword ptr [ebp + 0x10] */
    MEM32(ebp + (-0x20)) = eax; /* 0x10084D46: mov dword ptr [ebp - 0x20], eax */
    eax = ebp + (-0x20); /* 0x10084D49: lea eax, [ebp - 0x20] */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x10084D4C: push dword ptr [ebp + 0xc] */
    MEM32(ebp + (-0x14)) = 0x42u; /* 0x10084D4F: mov dword ptr [ebp - 0x14], 0x42 */
    PUSH32(esp, eax); /* 0x10084D56: push eax */
    MEM32(ebp + (-0x1C)) = 0x7FFFFFFFu; /* 0x10084D57: mov dword ptr [ebp - 0x1c], 0x7fffffff */
    RECOMP_CALL(sub_1001D315); /* 0x10084D5E: call 0x1001d315 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x10u; /* 0x10084D63: add esp, 0x10 */
    _flag_k = FK_ADD;
    esi = eax; /* 0x10084D66: mov esi, eax */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x1C))); _flag_b = (uint32_t)(1);
    MEM32(ebp + (-0x1C)) = MEM32(ebp + (-0x1C)) - 1; /* 0x10084D68: dec dword ptr [ebp - 0x1c] */
    _flag_k = FK_DEC;
    if (/* dec result */ CMP_S(_flag_a, _flag_b)) goto L_10084D7B; /* 0x10084D6B: js 0x10084d7b */
L_10084D6D:
    ecx = MEM32(ebp + (-0x20)); /* 0x10084D6D: mov ecx, dword ptr [ebp - 0x20] */
    MEM8(ecx) = (uint8_t)(LO8(ebx)); /* 0x10084D70: mov byte ptr [ecx], bl */
    ecx = MEM32(ebp + (-0x20)); /* 0x10084D72: mov ecx, dword ptr [ebp - 0x20] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx + 1; /* 0x10084D75: inc ecx */
    _flag_k = FK_INC;
    MEM32(ebp + (-0x20)) = ecx; /* 0x10084D76: mov dword ptr [ebp - 0x20], ecx */
    goto L_10084D8A; /* 0x10084D79: jmp 0x10084d8a */
L_10084D7B:
    eax = ebp + (-0x20); /* 0x10084D7B: lea eax, [ebp - 0x20] */
    PUSH32(esp, eax); /* 0x10084D7E: push eax */
    PUSH32(esp, ebx); /* 0x10084D7F: push ebx */
    RECOMP_CALL(sub_1002C35B); /* 0x10084D80: call 0x1002c35b */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x10084D85: pop ecx */
    ecx = POP32_VAL(esp); /* 0x10084D86: pop ecx */
    ecx = MEM32(ebp + (-0x20)); /* 0x10084D87: mov ecx, dword ptr [ebp - 0x20] */
L_10084D8A:
    _flag_a = (uint32_t)(MEM32(ebp + (-0x1C))); _flag_b = (uint32_t)(1);
    MEM32(ebp + (-0x1C)) = MEM32(ebp + (-0x1C)) - 1; /* 0x10084D8A: dec dword ptr [ebp - 0x1c] */
    _flag_k = FK_DEC;
    if (/* dec result */ CMP_S(_flag_a, _flag_b)) goto L_10084D93; /* 0x10084D8D: js 0x10084d93 */
L_10084D8F:
    MEM8(ecx) = (uint8_t)(LO8(ebx)); /* 0x10084D8F: mov byte ptr [ecx], bl */
    goto L_10084D9F; /* 0x10084D91: jmp 0x10084d9f */
L_10084D93:
    eax = ebp + (-0x20); /* 0x10084D93: lea eax, [ebp - 0x20] */
    PUSH32(esp, eax); /* 0x10084D96: push eax */
    PUSH32(esp, ebx); /* 0x10084D97: push ebx */
    RECOMP_CALL(sub_1002C35B); /* 0x10084D98: call 0x1002c35b */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x10084D9D: pop ecx */
    ecx = POP32_VAL(esp); /* 0x10084D9E: pop ecx */
L_10084D9F:
    eax = esi; /* 0x10084D9F: mov eax, esi */
    esi = POP32_VAL(esp); /* 0x10084DA1: pop esi */
L_10084DA2:
    edi = POP32_VAL(esp); /* 0x10084DA2: pop edi */
    ebx = POP32_VAL(esp); /* 0x10084DA3: pop ebx */
    esp = ebp; /* 0x10084DA4: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x10084DA6: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x10084DA7: ret  */
    RECOMP_REGS_OUT();
}

void sub_10084C9C(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x10084C9Cu);

L_10084C9C:
    PUSH32(esp, ebp); /* 0x10084C9C: push ebp */
    ebp = esp; /* 0x10084C9D: mov ebp, esp */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x10084C9F: push dword ptr [ebp + 0x10] */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x10084CA2: push dword ptr [ebp + 0xc] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x10084CA5: push dword ptr [ebp + 8] */
    PUSH32(esp, 0x1001D315u); /* 0x10084CA8: push 0x1001d315 */
    RECOMP_CALL(sub_1001E050); /* 0x10084CAD: call 0x1001e050 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x10u; /* 0x10084CB2: add esp, 0x10 */
    _flag_k = FK_ADD;
    ebp = POP32_VAL(esp); /* 0x10084CB5: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x10084CB6: ret  */
    RECOMP_REGS_OUT();
}

void sub_10084CB7(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x10084CB7u);

L_10084CB7:
    PUSH32(esp, ebp); /* 0x10084CB7: push ebp */
    ebp = esp; /* 0x10084CB8: mov ebp, esp */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x10084CBA: push dword ptr [ebp + 0xc] */
    PUSH32(esp, 0); /* 0x10084CBD: push 0 */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x10084CBF: push dword ptr [ebp + 8] */
    PUSH32(esp, 0x100907DDu); /* 0x10084CC2: push 0x100907dd */
    RECOMP_CALL(sub_1001E050); /* 0x10084CC7: call 0x1001e050 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x10u; /* 0x10084CCC: add esp, 0x10 */
    _flag_k = FK_ADD;
    ebp = POP32_VAL(esp); /* 0x10084CCF: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x10084CD0: ret  */
    RECOMP_REGS_OUT();
}

void sub_10084CD1(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x10084CD1u);

L_10084CD1:
    PUSH32(esp, ebp); /* 0x10084CD1: push ebp */
    ebp = esp; /* 0x10084CD2: mov ebp, esp */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x10084CD4: push dword ptr [ebp + 0x10] */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x10084CD7: push dword ptr [ebp + 0xc] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x10084CDA: push dword ptr [ebp + 8] */
    PUSH32(esp, 0x100907DDu); /* 0x10084CDD: push 0x100907dd */
    RECOMP_CALL(sub_1001E050); /* 0x10084CE2: call 0x1001e050 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x10u; /* 0x10084CE7: add esp, 0x10 */
    _flag_k = FK_ADD;
    ebp = POP32_VAL(esp); /* 0x10084CEA: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x10084CEB: ret  */
    RECOMP_REGS_OUT();
}

void sub_10084CEC(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x10084CECu);

L_10084CEC:
    PUSH32(esp, ebp); /* 0x10084CEC: push ebp */
    ebp = esp; /* 0x10084CED: mov ebp, esp */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x10084CEF: push dword ptr [ebp + 0x10] */
    PUSH32(esp, 0); /* 0x10084CF2: push 0 */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x10084CF4: push dword ptr [ebp + 0xc] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x10084CF7: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_10084D04); /* 0x10084CFA: call 0x10084d04 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x10u; /* 0x10084CFF: add esp, 0x10 */
    _flag_k = FK_ADD;
    ebp = POP32_VAL(esp); /* 0x10084D02: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x10084D03: ret  */
    RECOMP_REGS_OUT();
}

void sub_10084D04(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x10084D04u);

L_10084D04:
    PUSH32(esp, ebp); /* 0x10084D04: push ebp */
    ebp = esp; /* 0x10084D05: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x20u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x20u; /* 0x10084D07: sub esp, 0x20 */
    _flag_k = FK_CMP;
    PUSH32(esp, ebx); /* 0x10084D0A: push ebx */
    PUSH32(esp, edi); /* 0x10084D0B: push edi */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ebx = 0; /* 0x10084D0C: xor ebx, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
    edi = ebp + (-0x1C); /* 0x10084D0E: lea edi, [ebp - 0x1c] */
    PUSH32(esp, 7); /* 0x10084D11: push 7 */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x10084D13: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x20)) = ebx; /* 0x10084D15: mov dword ptr [ebp - 0x20], ebx */
    ecx = POP32_VAL(esp); /* 0x10084D18: pop ecx */
    { uint32_t _n = ecx, _b = _n * 4u; /* 0x10084D19: rep stosd dword ptr es:[edi], eax */ if (_df > 0) { MEMSET32((void*)ADDR(edi), eax, _n); edi += _b; } else { MEMSET32((void*)ADDR(edi - _b + 4u), eax, _n); edi -= _b; } ecx = 0; }
    /* cmp MEM32(ebp + 0xC), eax */ /* 0x10084D1B: cmp dword ptr [ebp + 0xc], eax */
    _flag_a = (uint32_t)(MEM32(ebp + 0xC)); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_10084D35; /* 0x10084D1E: jne 0x10084d35 */
L_10084D20:
    RECOMP_CALL(sub_1001177D); /* 0x10084D20: call 0x1001177d */
    RECOMP_FLAGS_IN();
    MEM32(eax) = 0x16u; /* 0x10084D25: mov dword ptr [eax], 0x16 */
    RECOMP_CALL(sub_100A4670); /* 0x10084D2B: call 0x100a4670 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)((eax | 0xFFFFFFFFu)); _flag_b = (uint32_t)((eax | 0xFFFFFFFFu));
    eax = eax | 0xFFFFFFFFu; /* 0x10084D30: or eax, 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_10084DA2; /* 0x10084D33: jmp 0x10084da2 */
L_10084D35:
    eax = MEM32(ebp + 0x8); /* 0x10084D35: mov eax, dword ptr [ebp + 8] */
    /* test eax, eax */ /* 0x10084D38: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_Z(_flag_a, _flag_b)) goto L_10084D20; /* 0x10084D3A: je 0x10084d20 */
L_10084D3C:
    PUSH32(esp, esi); /* 0x10084D3C: push esi */
    PUSH32(esp, MEM32(ebp + 0x14)); /* 0x10084D3D: push dword ptr [ebp + 0x14] */
    MEM32(ebp + (-0x18)) = eax; /* 0x10084D40: mov dword ptr [ebp - 0x18], eax */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x10084D43: push dword ptr [ebp + 0x10] */
    MEM32(ebp + (-0x20)) = eax; /* 0x10084D46: mov dword ptr [ebp - 0x20], eax */
    eax = ebp + (-0x20); /* 0x10084D49: lea eax, [ebp - 0x20] */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x10084D4C: push dword ptr [ebp + 0xc] */
    MEM32(ebp + (-0x14)) = 0x42u; /* 0x10084D4F: mov dword ptr [ebp - 0x14], 0x42 */
    PUSH32(esp, eax); /* 0x10084D56: push eax */
    MEM32(ebp + (-0x1C)) = 0x7FFFFFFFu; /* 0x10084D57: mov dword ptr [ebp - 0x1c], 0x7fffffff */
    RECOMP_CALL(sub_1001D315); /* 0x10084D5E: call 0x1001d315 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x10u; /* 0x10084D63: add esp, 0x10 */
    _flag_k = FK_ADD;
    esi = eax; /* 0x10084D66: mov esi, eax */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x1C))); _flag_b = (uint32_t)(1);
    MEM32(ebp + (-0x1C)) = MEM32(ebp + (-0x1C)) - 1; /* 0x10084D68: dec dword ptr [ebp - 0x1c] */
    _flag_k = FK_DEC;
    if (/* dec result */ CMP_S(_flag_a, _flag_b)) goto L_10084D7B; /* 0x10084D6B: js 0x10084d7b */
L_10084D6D:
    ecx = MEM32(ebp + (-0x20)); /* 0x10084D6D: mov ecx, dword ptr [ebp - 0x20] */
    MEM8(ecx) = (uint8_t)(LO8(ebx)); /* 0x10084D70: mov byte ptr [ecx], bl */
    ecx = MEM32(ebp + (-0x20)); /* 0x10084D72: mov ecx, dword ptr [ebp - 0x20] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx + 1; /* 0x10084D75: inc ecx */
    _flag_k = FK_INC;
    MEM32(ebp + (-0x20)) = ecx; /* 0x10084D76: mov dword ptr [ebp - 0x20], ecx */
    goto L_10084D8A; /* 0x10084D79: jmp 0x10084d8a */
L_10084D7B:
    eax = ebp + (-0x20); /* 0x10084D7B: lea eax, [ebp - 0x20] */
    PUSH32(esp, eax); /* 0x10084D7E: push eax */
    PUSH32(esp, ebx); /* 0x10084D7F: push ebx */
    RECOMP_CALL(sub_1002C35B); /* 0x10084D80: call 0x1002c35b */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x10084D85: pop ecx */
    ecx = POP32_VAL(esp); /* 0x10084D86: pop ecx */
    ecx = MEM32(ebp + (-0x20)); /* 0x10084D87: mov ecx, dword ptr [ebp - 0x20] */
L_10084D8A:
    _flag_a = (uint32_t)(MEM32(ebp + (-0x1C))); _flag_b = (uint32_t)(1);
    MEM32(ebp + (-0x1C)) = MEM32(ebp + (-0x1C)) - 1; /* 0x10084D8A: dec dword ptr [ebp - 0x1c] */
    _flag_k = FK_DEC;
    if (/* dec result */ CMP_S(_flag_a, _flag_b)) goto L_10084D93; /* 0x10084D8D: js 0x10084d93 */
L_10084D8F:
    MEM8(ecx) = (uint8_t)(LO8(ebx)); /* 0x10084D8F: mov byte ptr [ecx], bl */
    goto L_10084D9F; /* 0x10084D91: jmp 0x10084d9f */
L_10084D93:
    eax = ebp + (-0x20); /* 0x10084D93: lea eax, [ebp - 0x20] */
    PUSH32(esp, eax); /* 0x10084D96: push eax */
    PUSH32(esp, ebx); /* 0x10084D97: push ebx */
    RECOMP_CALL(sub_1002C35B); /* 0x10084D98: call 0x1002c35b */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x10084D9D: pop ecx */
    ecx = POP32_VAL(esp); /* 0x10084D9E: pop ecx */
L_10084D9F:
    eax = esi; /* 0x10084D9F: mov eax, esi */
    esi = POP32_VAL(esp); /* 0x10084DA1: pop esi */
L_10084DA2:
    edi = POP32_VAL(esp); /* 0x10084DA2: pop edi */
    ebx = POP32_VAL(esp); /* 0x10084DA3: pop ebx */
    esp = ebp; /* 0x10084DA4: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x10084DA6: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x10084DA7: ret  */
    RECOMP_REGS_OUT();
}

void sub_10084DA8(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x10084DA8u);

L_10084DA8:
    PUSH32(esp, ebp); /* 0x10084DA8: push ebp */
    ebp = esp; /* 0x10084DA9: mov ebp, esp */
    PUSH32(esp, MEM32(ebp + 0x14)); /* 0x10084DAB: push dword ptr [ebp + 0x14] */
    PUSH32(esp, 0); /* 0x10084DAE: push 0 */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x10084DB0: push dword ptr [ebp + 0x10] */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x10084DB3: push dword ptr [ebp + 0xc] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x10084DB6: push dword ptr [ebp + 8] */
    PUSH32(esp, 0x1001D315u); /* 0x10084DB9: push 0x1001d315 */
    RECOMP_CALL(sub_1001D645); /* 0x10084DBE: call 0x1001d645 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x18u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x18u; /* 0x10084DC3: add esp, 0x18 */
    _flag_k = FK_ADD;
    /* test eax, eax */ /* 0x10084DC6: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) == 0u)) goto L_10084DCD; /* 0x10084DC8: jns 0x10084dcd */
L_10084DCA:
    _flag_a = (uint32_t)((eax | 0xFFFFFFFFu)); _flag_b = (uint32_t)((eax | 0xFFFFFFFFu));
    eax = eax | 0xFFFFFFFFu; /* 0x10084DCA: or eax, 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
L_10084DCD:
    ebp = POP32_VAL(esp); /* 0x10084DCD: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x10084DCE: ret  */
    RECOMP_REGS_OUT();
}

void sub_10084DCF(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x10084DCFu);

L_10084DCF:
    PUSH32(esp, ebp); /* 0x10084DCF: push ebp */
    ebp = esp; /* 0x10084DD0: mov ebp, esp */
    PUSH32(esp, MEM32(ebp + 0x18)); /* 0x10084DD2: push dword ptr [ebp + 0x18] */
    PUSH32(esp, MEM32(ebp + 0x14)); /* 0x10084DD5: push dword ptr [ebp + 0x14] */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x10084DD8: push dword ptr [ebp + 0x10] */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x10084DDB: push dword ptr [ebp + 0xc] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x10084DDE: push dword ptr [ebp + 8] */
    PUSH32(esp, 0x1001D315u); /* 0x10084DE1: push 0x1001d315 */
    RECOMP_CALL(sub_1001D645); /* 0x10084DE6: call 0x1001d645 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x18u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x18u; /* 0x10084DEB: add esp, 0x18 */
    _flag_k = FK_ADD;
    /* test eax, eax */ /* 0x10084DEE: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) == 0u)) goto L_10084DF5; /* 0x10084DF0: jns 0x10084df5 */
L_10084DF2:
    _flag_a = (uint32_t)((eax | 0xFFFFFFFFu)); _flag_b = (uint32_t)((eax | 0xFFFFFFFFu));
    eax = eax | 0xFFFFFFFFu; /* 0x10084DF2: or eax, 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
L_10084DF5:
    ebp = POP32_VAL(esp); /* 0x10084DF5: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x10084DF6: ret  */
    RECOMP_REGS_OUT();
}

void sub_10084DF7(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x10084DF7u);

L_10084DF7:
    PUSH32(esp, ebp); /* 0x10084DF7: push ebp */
    ebp = esp; /* 0x10084DF8: mov ebp, esp */
    PUSH32(esp, MEM32(ebp + 0x14)); /* 0x10084DFA: push dword ptr [ebp + 0x14] */
    PUSH32(esp, 0); /* 0x10084DFD: push 0 */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x10084DFF: push dword ptr [ebp + 0x10] */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x10084E02: push dword ptr [ebp + 0xc] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x10084E05: push dword ptr [ebp + 8] */
    PUSH32(esp, 0x100907DDu); /* 0x10084E08: push 0x100907dd */
    RECOMP_CALL(sub_1001D645); /* 0x10084E0D: call 0x1001d645 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x18u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x18u; /* 0x10084E12: add esp, 0x18 */
    _flag_k = FK_ADD;
    /* test eax, eax */ /* 0x10084E15: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) == 0u)) goto L_10084E1C; /* 0x10084E17: jns 0x10084e1c */
L_10084E19:
    _flag_a = (uint32_t)((eax | 0xFFFFFFFFu)); _flag_b = (uint32_t)((eax | 0xFFFFFFFFu));
    eax = eax | 0xFFFFFFFFu; /* 0x10084E19: or eax, 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
L_10084E1C:
    ebp = POP32_VAL(esp); /* 0x10084E1C: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x10084E1D: ret  */
    RECOMP_REGS_OUT();
}

void sub_10084E1E(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x10084E1Eu);

L_10084E1E:
    PUSH32(esp, ebp); /* 0x10084E1E: push ebp */
    ebp = esp; /* 0x10084E1F: mov ebp, esp */
    PUSH32(esp, MEM32(ebp + 0x18)); /* 0x10084E21: push dword ptr [ebp + 0x18] */
    PUSH32(esp, MEM32(ebp + 0x14)); /* 0x10084E24: push dword ptr [ebp + 0x14] */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x10084E27: push dword ptr [ebp + 0x10] */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x10084E2A: push dword ptr [ebp + 0xc] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x10084E2D: push dword ptr [ebp + 8] */
    PUSH32(esp, 0x100907DDu); /* 0x10084E30: push 0x100907dd */
    RECOMP_CALL(sub_1001D645); /* 0x10084E35: call 0x1001d645 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x18u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x18u; /* 0x10084E3A: add esp, 0x18 */
    _flag_k = FK_ADD;
    /* test eax, eax */ /* 0x10084E3D: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) == 0u)) goto L_10084E44; /* 0x10084E3F: jns 0x10084e44 */
L_10084E41:
    _flag_a = (uint32_t)((eax | 0xFFFFFFFFu)); _flag_b = (uint32_t)((eax | 0xFFFFFFFFu));
    eax = eax | 0xFFFFFFFFu; /* 0x10084E41: or eax, 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
L_10084E44:
    ebp = POP32_VAL(esp); /* 0x10084E44: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x10084E45: ret  */
    RECOMP_REGS_OUT();
}

void sub_10084E46(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x10084E46u);

L_10084E46:
    PUSH32(esp, ebp); /* 0x10084E46: push ebp */
    ebp = esp; /* 0x10084E47: mov ebp, esp */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x10084E49: push dword ptr [ebp + 0x10] */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x10084E4C: push dword ptr [ebp + 0xc] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x10084E4F: push dword ptr [ebp + 8] */
    PUSH32(esp, 0x1001D315u); /* 0x10084E52: push 0x1001d315 */
    RECOMP_CALL(sub_10084ECB); /* 0x10084E57: call 0x10084ecb */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x10u; /* 0x10084E5C: add esp, 0x10 */
    _flag_k = FK_ADD;
    ebp = POP32_VAL(esp); /* 0x10084E5F: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x10084E60: ret  */
    RECOMP_REGS_OUT();
}

void sub_10084E61(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x10084E61u);

L_10084E61:
    PUSH32(esp, ebp); /* 0x10084E61: push ebp */
    ebp = esp; /* 0x10084E62: mov ebp, esp */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x10084E64: push dword ptr [ebp + 0xc] */
    PUSH32(esp, 0); /* 0x10084E67: push 0 */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x10084E69: push dword ptr [ebp + 8] */
    PUSH32(esp, 0x100907DDu); /* 0x10084E6C: push 0x100907dd */
    RECOMP_CALL(sub_10084ECB); /* 0x10084E71: call 0x10084ecb */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x10u; /* 0x10084E76: add esp, 0x10 */
    _flag_k = FK_ADD;
    ebp = POP32_VAL(esp); /* 0x10084E79: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x10084E7A: ret  */
    RECOMP_REGS_OUT();
}

void sub_10084E7B(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x10084E7Bu);

L_10084E7B:
    PUSH32(esp, ebp); /* 0x10084E7B: push ebp */
    ebp = esp; /* 0x10084E7C: mov ebp, esp */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x10084E7E: push dword ptr [ebp + 0x10] */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x10084E81: push dword ptr [ebp + 0xc] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x10084E84: push dword ptr [ebp + 8] */
    PUSH32(esp, 0x100907DDu); /* 0x10084E87: push 0x100907dd */
    RECOMP_CALL(sub_10084ECB); /* 0x10084E8C: call 0x10084ecb */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x10u; /* 0x10084E91: add esp, 0x10 */
    _flag_k = FK_ADD;
    ebp = POP32_VAL(esp); /* 0x10084E94: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x10084E95: ret  */
    RECOMP_REGS_OUT();
}

void sub_10084E96(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x10084E96u);

L_10084E96:
    PUSH32(esp, ebp); /* 0x10084E96: push ebp */
    ebp = esp; /* 0x10084E97: mov ebp, esp */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x10084E99: push dword ptr [ebp + 0x10] */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x10084E9C: push dword ptr [ebp + 0xc] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x10084E9F: push dword ptr [ebp + 8] */
    PUSH32(esp, 0x1001D716u); /* 0x10084EA2: push 0x1001d716 */
    RECOMP_CALL(sub_10084ECB); /* 0x10084EA7: call 0x10084ecb */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x10u; /* 0x10084EAC: add esp, 0x10 */
    _flag_k = FK_ADD;
    ebp = POP32_VAL(esp); /* 0x10084EAF: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x10084EB0: ret  */
    RECOMP_REGS_OUT();
}

void sub_10084EB1(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x10084EB1u);

L_10084EB1:
    PUSH32(esp, ebp); /* 0x10084EB1: push ebp */
    ebp = esp; /* 0x10084EB2: mov ebp, esp */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x10084EB4: push dword ptr [ebp + 0xc] */
    PUSH32(esp, 0); /* 0x10084EB7: push 0 */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x10084EB9: push dword ptr [ebp + 8] */
    PUSH32(esp, 0x1001D315u); /* 0x10084EBC: push 0x1001d315 */
    RECOMP_CALL(sub_10084ECB); /* 0x10084EC1: call 0x10084ecb */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x10u; /* 0x10084EC6: add esp, 0x10 */
    _flag_k = FK_ADD;
    ebp = POP32_VAL(esp); /* 0x10084EC9: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x10084ECA: ret  */
    RECOMP_REGS_OUT();
}

void sub_10084ECB(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x10084ECBu);

L_10084ECB:
    PUSH32(esp, 0x10u); /* 0x10084ECB: push 0x10 */
    PUSH32(esp, 0x10084F58u); /* 0x10084ECD: push 0x10084f58 */
    RECOMP_CALL(sub_1000ED7E); /* 0x10084ED2: call 0x1000ed7e */
    RECOMP_FLAGS_IN();
    RECOMP_CALL(sub_100142B5); /* 0x10084ED7: call 0x100142b5 */
    RECOMP_FLAGS_IN();
    edi = eax + 0x20; /* 0x10084EDC: lea edi, [eax + 0x20] */
    MEM32(ebp + (-0x20)) = edi; /* 0x10084EDF: mov dword ptr [ebp - 0x20], edi */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x1C))); _flag_b = (uint32_t)(0);
    MEM32(ebp + (-0x1C)) = MEM32(ebp + (-0x1C)) & 0; /* 0x10084EE2: and dword ptr [ebp - 0x1c], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x10084EE6: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp MEM32(ebp + 0xC), ecx */ /* 0x10084EE8: cmp dword ptr [ebp + 0xc], ecx */
    _flag_a = (uint32_t)(MEM32(ebp + 0xC)); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    SET_LO8(ecx, (CMP_NE(_flag_a, _flag_b)) ? 1 : 0); /* 0x10084EEB: setne cl */
    /* test ecx, ecx */ /* 0x10084EEE: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_10084F07; /* 0x10084EF0: jne 0x10084f07 */
L_10084EF2:
    RECOMP_CALL(sub_1001177D); /* 0x10084EF2: call 0x1001177d */
    RECOMP_FLAGS_IN();
    MEM32(eax) = 0x16u; /* 0x10084EF7: mov dword ptr [eax], 0x16 */
    RECOMP_CALL(sub_100A4670); /* 0x10084EFD: call 0x100a4670 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)((eax | 0xFFFFFFFFu)); _flag_b = (uint32_t)((eax | 0xFFFFFFFFu));
    eax = eax | 0xFFFFFFFFu; /* 0x10084F02: or eax, 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_10084F44; /* 0x10084F05: jmp 0x10084f44 */
L_10084F07:
    PUSH32(esp, edi); /* 0x10084F07: push edi */
    RECOMP_CALL(sub_10014B96); /* 0x10084F08: call 0x10014b96 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x10084F0D: pop ecx */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x4))); _flag_b = (uint32_t)(0);
    MEM32(ebp + (-0x4)) = MEM32(ebp + (-0x4)) & 0; /* 0x10084F0E: and dword ptr [ebp - 4], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, edi); /* 0x10084F12: push edi */
    RECOMP_CALL(sub_10020477); /* 0x10084F13: call 0x10020477 */
    RECOMP_FLAGS_IN();
    esi = eax; /* 0x10084F18: mov esi, eax */
    PUSH32(esp, MEM32(ebp + 0x14)); /* 0x10084F1A: push dword ptr [ebp + 0x14] */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x10084F1D: push dword ptr [ebp + 0x10] */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x10084F20: push dword ptr [ebp + 0xc] */
    PUSH32(esp, edi); /* 0x10084F23: push edi */
    RECOMP_ICALL(MEM32(ebp + 0x8)); /* 0x10084F24: call dword ptr [ebp + 8] */
    RECOMP_FLAGS_IN();
    ebx = eax; /* 0x10084F27: mov ebx, eax */
    MEM32(ebp + (-0x1C)) = ebx; /* 0x10084F29: mov dword ptr [ebp - 0x1c], ebx */
    PUSH32(esp, edi); /* 0x10084F2C: push edi */
    PUSH32(esp, esi); /* 0x10084F2D: push esi */
    RECOMP_CALL(sub_100204F6); /* 0x10084F2E: call 0x100204f6 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x1Cu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x1Cu; /* 0x10084F33: add esp, 0x1c */
    _flag_k = FK_ADD;
    MEM32(ebp + (-0x4)) = 0xFFFFFFFEu; /* 0x10084F36: mov dword ptr [ebp - 4], 0xfffffffe */
    RECOMP_CALL(sub_10084F50); /* 0x10084F3D: call 0x10084f50 */
    RECOMP_FLAGS_IN();
    eax = ebx; /* 0x10084F42: mov eax, ebx */
L_10084F44:
    RECOMP_CALL(sub_1000EDC3); /* 0x10084F44: call 0x1000edc3 */
    RECOMP_FLAGS_IN();
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x10084F49: ret  */
    RECOMP_REGS_OUT();
}

void sub_10084F50(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x10084F50u);

L_10084F50:
    PUSH32(esp, edi); /* 0x10084F50: push edi */
    RECOMP_CALL(sub_10014B60); /* 0x10084F51: call 0x10014b60 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x10084F56: pop ecx */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x10084F57: ret  */
    RECOMP_REGS_OUT();
}

void sub_10084F74(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x10084F74u);

L_10084F74:
    PUSH32(esp, ebp); /* 0x10084F74: push ebp */
    ebp = esp; /* 0x10084F75: mov ebp, esp */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x10084F77: push dword ptr [ebp + 0xc] */
    PUSH32(esp, 0); /* 0x10084F7A: push 0 */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x10084F7C: push dword ptr [ebp + 8] */
    PUSH32(esp, 0x1001D716u); /* 0x10084F7F: push 0x1001d716 */
    RECOMP_CALL(sub_10084ECB); /* 0x10084F84: call 0x10084ecb */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x10u; /* 0x10084F89: add esp, 0x10 */
    _flag_k = FK_ADD;
    ebp = POP32_VAL(esp); /* 0x10084F8C: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x10084F8D: ret  */
    RECOMP_REGS_OUT();
}

void sub_10084F8E(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x10084F8Eu);

L_10084F8E:
    PUSH32(esp, 8); /* 0x10084F8E: push 8 */
    PUSH32(esp, 0x10085128u); /* 0x10084F90: push 0x10085128 */
    RECOMP_CALL(sub_1000ED7E); /* 0x10084F95: call 0x1000ed7e */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x10084F9A: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    edx = MEM32(ebp + 0xC); /* 0x10084F9C: mov edx, dword ptr [ebp + 0xc] */
    /* test edx, edx */ /* 0x10084F9F: test edx, edx */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(edx);
    _cf = 0;
    _flag_k = FK_TEST;
    SET_LO8(eax, (TEST_NZ(_flag_a, _flag_b)) ? 1 : 0); /* 0x10084FA1: setne al */
    /* test eax, eax */ /* 0x10084FA4: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_10084FB8; /* 0x10084FA6: jne 0x10084fb8 */
L_10084FA8:
    RECOMP_CALL(sub_1001177D); /* 0x10084FA8: call 0x1001177d */
    RECOMP_FLAGS_IN();
    MEM32(eax) = 0x16u; /* 0x10084FAD: mov dword ptr [eax], 0x16 */
    goto L_10085118; /* 0x10084FB3: jmp 0x10085118 */
L_10084FB8:
    edi = MEM32(ebp + 0x8); /* 0x10084FB8: mov edi, dword ptr [ebp + 8] */
    /* cmp edi, 0xFFFFFFFEu */ /* 0x10084FBB: cmp edi, -2 */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(0xFFFFFFFEu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_10084FD0; /* 0x10084FBE: jne 0x10084fd0 */
L_10084FC0:
    RECOMP_CALL(sub_1001177D); /* 0x10084FC0: call 0x1001177d */
    RECOMP_FLAGS_IN();
    MEM32(eax) = 9; /* 0x10084FC5: mov dword ptr [eax], 9 */
    goto L_1008511D; /* 0x10084FCB: jmp 0x1008511d */
L_10084FD0:
    /* test edi, edi */ /* 0x10084FD0: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_1008510D; /* 0x10084FD2: js 0x1008510d */
L_10084FD8:
    /* cmp edi, MEM32(0x100DFDD8) */ /* 0x10084FD8: cmp edi, dword ptr [0x100dfdd8] */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(MEM32(0x100DFDD8));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_AE(_flag_a, _flag_b)) goto L_1008510D; /* 0x10084FDE: jae 0x1008510d */
L_10084FE4:
    eax = edi; /* 0x10084FE4: mov eax, edi */
    if (5u) _cf = (((eax) >> 4) & 1u); /* 0x10084FE6: sar eax, 5 */
    if (5u) { _flag_a = recomp_flags_pack(((uint32_t)((int32_t)eax >> 5u)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = (uint32_t)((int32_t)eax >> 5u);
    ecx = edi; /* 0x10084FE9: mov ecx, edi */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x1Fu);
    ecx = ecx & 0x1Fu; /* 0x10084FEB: and ecx, 0x1f */
    _cf = 0;
    _flag_k = FK_TEST;
    if (6u) _cf = (((ecx) >> 26) & 1u); /* 0x10084FEE: shl ecx, 6 */
    if (6u) { _flag_a = recomp_flags_pack((ecx << 6u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ecx = ecx << 6u; /* 0x10084FEE: shl ecx, 6 */
    eax = MEM32(eax * 4 + 0x100DF640); /* 0x10084FF1: mov eax, dword ptr [eax*4 + 0x100df640] */
    eax = (int32_t)(int8_t)MEM8(eax + ecx + 0x4); /* 0x10084FF8: movsx eax, byte ptr [eax + ecx + 4] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax & 1; /* 0x10084FFD: and eax, 1 */
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1008510D; /* 0x10085000: je 0x1008510d */
L_10085006:
    PUSH32(esp, 0x20u); /* 0x10085006: push 0x20 */
    eax = POP32_VAL(esp); /* 0x10085008: pop eax */
    goto L_1008500E; /* 0x10085009: jmp 0x1008500e */
L_1008500B:
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edx = edx + 2; /* 0x1008500B: add edx, 2 */
    _flag_k = FK_ADD;
L_1008500E:
    /* cmp MEM16(edx), LO16(eax) */ /* 0x1008500E: cmp word ptr [edx], ax */
    _flag_a = (uint32_t)(MEM16(edx)) << 16; _flag_b = (uint32_t)(LO16(eax)) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    RECOMP_BACKEDGE();
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1008500B; /* 0x10085011: je 0x1008500b */
L_10085013:
    eax = (uint32_t)MEM16(edx); /* 0x10085013: movzx eax, word ptr [edx] */
    /* cmp eax, 0x61u */ /* 0x10085016: cmp eax, 0x61 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x61u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_10085025; /* 0x10085019: je 0x10085025 */
L_1008501B:
    /* cmp eax, 0x72u */ /* 0x1008501B: cmp eax, 0x72 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x72u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1008503A; /* 0x1008501E: je 0x1008503a */
L_10085020:
    /* cmp eax, 0x77u */ /* 0x10085020: cmp eax, 0x77 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x77u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_NE(_flag_a, _flag_b)) goto L_10084FA8; /* 0x10085023: jne 0x10084fa8 */
L_10085025:
    PUSH32(esp, 2); /* 0x10085025: push 2 */
    ebx = POP32_VAL(esp); /* 0x10085027: pop ebx */
L_10085028:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x10085028: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx + 1; /* 0x1008502A: inc ecx */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1008502B: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    esi = eax; /* 0x1008502D: mov esi, eax */
    MEM32(ebp + 0xC) = eax; /* 0x1008502F: mov dword ptr [ebp + 0xc], eax */
    _flag_a = (uint32_t)((ebx | MEM32(0x100DF638))); _flag_b = (uint32_t)((ebx | MEM32(0x100DF638)));
    ebx = ebx | MEM32(0x100DF638); /* 0x10085032: or ebx, dword ptr [0x100df638] */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_100850A2; /* 0x10085038: jmp 0x100850a2 */
L_1008503A:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ebx = 0; /* 0x1008503A: xor ebx, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(1);
    ebx = ebx + 1; /* 0x1008503C: inc ebx */
    _flag_k = FK_INC;
    RECOMP_BACKEDGE();
    goto L_10085028; /* 0x1008503D: jmp 0x10085028 */
L_1008503F:
    /* test ecx, ecx */ /* 0x1008503F: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_100850AD; /* 0x10085041: je 0x100850ad */
L_10085043:
    eax = (uint32_t)LO16(eax); /* 0x10085043: movzx eax, ax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x20u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - 0x20u; /* 0x10085046: sub eax, 0x20 */
    _flag_k = FK_CMP;
    if (/* sub result */ CMP_EQ(_flag_a, _flag_b)) goto L_100850A2; /* 0x10085049: je 0x100850a2 */
L_1008504B:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xBu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - 0xBu; /* 0x1008504B: sub eax, 0xb */
    _flag_k = FK_CMP;
    if (/* sub result */ CMP_EQ(_flag_a, _flag_b)) goto L_1008508F; /* 0x1008504E: je 0x1008508f */
L_10085050:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x37u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - 0x37u; /* 0x10085050: sub eax, 0x37 */
    _flag_k = FK_CMP;
    if (/* sub result */ CMP_EQ(_flag_a, _flag_b)) goto L_10085066; /* 0x10085053: je 0x10085066 */
L_10085055:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax - 1; /* 0x10085055: dec eax */
    _flag_k = FK_DEC;
    if (/* dec result */ CMP_EQ(_flag_a, _flag_b)) goto L_10085082; /* 0x10085056: je 0x10085082 */
L_10085058:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xBu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - 0xBu; /* 0x10085058: sub eax, 0xb */
    _flag_k = FK_CMP;
    if (/* sub result */ CMP_EQ(_flag_a, _flag_b)) goto L_10085075; /* 0x1008505B: je 0x10085075 */
L_1008505D:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(6);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - 6; /* 0x1008505D: sub eax, 6 */
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (/* sub result */ CMP_NE(_flag_a, _flag_b)) goto L_10084FA8; /* 0x10085060: jne 0x10084fa8 */
L_10085066:
    /* cmp MEM32(ebp + 0xC), 0 */ /* 0x10085066: cmp dword ptr [ebp + 0xc], 0 */
    _flag_a = (uint32_t)(MEM32(ebp + 0xC)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_10085093; /* 0x1008506A: jne 0x10085093 */
L_1008506C:
    MEM32(ebp + 0xC) = 1; /* 0x1008506C: mov dword ptr [ebp + 0xc], 1 */
    goto L_100850A2; /* 0x10085073: jmp 0x100850a2 */
L_10085075:
    /* test esi, esi */ /* 0x10085075: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_10085093; /* 0x10085077: jne 0x10085093 */
L_10085079:
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi + 1; /* 0x10085079: inc esi */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(0xFFFFBFFFu);
    ebx = ebx & 0xFFFFBFFFu; /* 0x1008507A: and ebx, 0xffffbfff */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_100850A2; /* 0x10085080: jmp 0x100850a2 */
L_10085082:
    /* test esi, esi */ /* 0x10085082: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_10085093; /* 0x10085084: jne 0x10085093 */
L_10085086:
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi + 1; /* 0x10085086: inc esi */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)((ebx | 0x4000u)); _flag_b = (uint32_t)((ebx | 0x4000u));
    ebx = ebx | 0x4000u; /* 0x10085087: or ebx, 0x4000 */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_100850A2; /* 0x1008508D: jmp 0x100850a2 */
L_1008508F:
    /* test LO8(ebx), LO8(ebx) */ /* 0x1008508F: test bl, bl */
    _flag_a = (uint32_t)(LO8(ebx)) << 24; _flag_b = (uint32_t)(LO8(ebx)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) == 0u)) goto L_10085099; /* 0x10085091: jns 0x10085099 */
L_10085093:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x10085093: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = eax; /* 0x10085095: mov ecx, eax */
    goto L_100850A2; /* 0x10085097: jmp 0x100850a2 */
L_10085099:
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(0xFFFFFFFCu);
    ebx = ebx & 0xFFFFFFFCu; /* 0x10085099: and ebx, 0xfffffffc */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)((ebx | 0x80u)); _flag_b = (uint32_t)((ebx | 0x80u));
    ebx = ebx | 0x80u; /* 0x1008509C: or ebx, 0x80 */
    _cf = 0;
    _flag_k = FK_TEST;
L_100850A2:
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edx = edx + 2; /* 0x100850A2: add edx, 2 */
    _flag_k = FK_ADD;
    eax = (uint32_t)MEM16(edx); /* 0x100850A5: movzx eax, word ptr [edx] */
    /* test LO16(eax), LO16(eax) */ /* 0x100850A8: test ax, ax */
    _flag_a = (uint32_t)(LO16(eax)) << 16; _flag_b = (uint32_t)(LO16(eax)) << 16;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 16);
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1008503F; /* 0x100850AB: jne 0x1008503f */
L_100850AD:
    PUSH32(esp, 0x20u); /* 0x100850AD: push 0x20 */
    eax = POP32_VAL(esp); /* 0x100850AF: pop eax */
    goto L_100850B5; /* 0x100850B0: jmp 0x100850b5 */
L_100850B2:
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edx = edx + 2; /* 0x100850B2: add edx, 2 */
    _flag_k = FK_ADD;
L_100850B5:
    /* cmp MEM16(edx), LO16(eax) */ /* 0x100850B5: cmp word ptr [edx], ax */
    _flag_a = (uint32_t)(MEM16(edx)) << 16; _flag_b = (uint32_t)(LO16(eax)) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    RECOMP_BACKEDGE();
    if (CMP_EQ(_flag_a, _flag_b)) goto L_100850B2; /* 0x100850B8: je 0x100850b2 */
L_100850BA:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x100850BA: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x100850BC: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp MEM16(edx), LO16(ecx) */ /* 0x100850BE: cmp word ptr [edx], cx */
    _flag_a = (uint32_t)(MEM16(edx)) << 16; _flag_b = (uint32_t)(LO16(ecx)) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    SET_LO8(eax, (CMP_EQ(_flag_a, _flag_b)) ? 1 : 0); /* 0x100850C1: sete al */
    /* test eax, eax */ /* 0x100850C4: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_Z(_flag_a, _flag_b)) goto L_10084FA8; /* 0x100850C6: je 0x10084fa8 */
L_100850CC:
    RECOMP_CALL(sub_10015857); /* 0x100850CC: call 0x10015857 */
    RECOMP_FLAGS_IN();
    esi = eax; /* 0x100850D1: mov esi, eax */
    MEM32(ebp + 0xC) = esi; /* 0x100850D3: mov dword ptr [ebp + 0xc], esi */
    /* test esi, esi */ /* 0x100850D6: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_100850E7; /* 0x100850D8: jne 0x100850e7 */
L_100850DA:
    RECOMP_CALL(sub_1001177D); /* 0x100850DA: call 0x1001177d */
    RECOMP_FLAGS_IN();
    MEM32(eax) = 0x18u; /* 0x100850DF: mov dword ptr [eax], 0x18 */
    goto L_1008511D; /* 0x100850E5: jmp 0x1008511d */
L_100850E7:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x100850E7: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x4)) = eax; /* 0x100850E9: mov dword ptr [ebp - 4], eax */
    MEM32(esi + 0xC) = ebx; /* 0x100850EC: mov dword ptr [esi + 0xc], ebx */
    MEM32(esi + 0x10) = edi; /* 0x100850EF: mov dword ptr [esi + 0x10], edi */
    MEM32(ebp + (-0x4)) = 0xFFFFFFFEu; /* 0x100850F2: mov dword ptr [ebp - 4], 0xfffffffe */
    RECOMP_CALL(sub_10085105); /* 0x100850F9: call 0x10085105 */
    RECOMP_FLAGS_IN();
    eax = esi; /* 0x100850FE: mov eax, esi */
    goto L_1008511F; /* 0x10085100: jmp 0x1008511f */
L_1008510D:
    RECOMP_CALL(sub_1001177D); /* 0x1008510D: call 0x1001177d */
    RECOMP_FLAGS_IN();
    MEM32(eax) = 9; /* 0x10085112: mov dword ptr [eax], 9 */
L_10085118:
    RECOMP_CALL(sub_100A4670); /* 0x10085118: call 0x100a4670 */
    RECOMP_FLAGS_IN();
L_1008511D:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1008511D: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
L_1008511F:
    RECOMP_CALL(sub_1000EDC3); /* 0x1008511F: call 0x1000edc3 */
    RECOMP_FLAGS_IN();
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x10085124: ret  */
    RECOMP_REGS_OUT();
}

void sub_10085105(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x10085105u);

L_10085105:
    PUSH32(esp, esi); /* 0x10085105: push esi */
    RECOMP_CALL(sub_10014B60); /* 0x10085106: call 0x10014b60 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1008510B: pop ecx */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1008510C: ret  */
    RECOMP_REGS_OUT();
}

void sub_10085144(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x10085144u);

L_10085144:
    PUSH32(esp, ebp); /* 0x10085144: push ebp */
    ebp = esp; /* 0x10085145: mov ebp, esp */
    PUSH32(esp, 0x40u); /* 0x10085147: push 0x40 */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x10085149: push dword ptr [ebp + 0xc] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x1008514C: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_1002C1BA); /* 0x1008514F: call 0x1002c1ba */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x10085154: add esp, 0xc */
    _flag_k = FK_ADD;
    ebp = POP32_VAL(esp); /* 0x10085157: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x10085158: ret  */
    RECOMP_REGS_OUT();
}

void sub_10085159(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x10085159u);

L_10085159:
    PUSH32(esp, ebp); /* 0x10085159: push ebp */
    ebp = esp; /* 0x1008515A: mov ebp, esp */
    PUSH32(esp, ecx); /* 0x1008515C: push ecx */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x4))); _flag_b = (uint32_t)(0);
    MEM32(ebp + (-0x4)) = MEM32(ebp + (-0x4)) & 0; /* 0x1008515D: and dword ptr [ebp - 4], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    eax = ebp + (-0x4); /* 0x10085161: lea eax, [ebp - 4] */
    PUSH32(esp, 0x40u); /* 0x10085164: push 0x40 */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x10085166: push dword ptr [ebp + 0x10] */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x10085169: push dword ptr [ebp + 0xc] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x1008516C: push dword ptr [ebp + 8] */
    PUSH32(esp, eax); /* 0x1008516F: push eax */
    RECOMP_CALL(sub_1008517F); /* 0x10085170: call 0x1008517f */
    RECOMP_FLAGS_IN();
    eax = MEM32(ebp + (-0x4)); /* 0x10085175: mov eax, dword ptr [ebp - 4] */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x14u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x14u; /* 0x10085178: add esp, 0x14 */
    _flag_k = FK_ADD;
    esp = ebp; /* 0x1008517B: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x1008517D: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1008517E: ret  */
    RECOMP_REGS_OUT();
}

void sub_1008517F(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1008517Fu);

L_1008517F:
    PUSH32(esp, 0xCu); /* 0x1008517F: push 0xc */
    PUSH32(esp, 0x10085258u); /* 0x10085181: push 0x10085258 */
    RECOMP_CALL(sub_1000ED7E); /* 0x10085186: call 0x1000ed7e */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1008518B: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    ebx = MEM32(ebp + 0x8); /* 0x1008518D: mov ebx, dword ptr [ebp + 8] */
    /* test ebx, ebx */ /* 0x10085190: test ebx, ebx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ebx);
    _cf = 0;
    _flag_k = FK_TEST;
    SET_LO8(eax, (TEST_NZ(_flag_a, _flag_b)) ? 1 : 0); /* 0x10085192: setne al */
    /* test eax, eax */ /* 0x10085195: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_100851AC; /* 0x10085197: jne 0x100851ac */
L_10085199:
    RECOMP_CALL(sub_1001177D); /* 0x10085199: call 0x1001177d */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0x16u); /* 0x1008519E: push 0x16 */
    esi = POP32_VAL(esp); /* 0x100851A0: pop esi */
    MEM32(eax) = esi; /* 0x100851A1: mov dword ptr [eax], esi */
    RECOMP_CALL(sub_100A4670); /* 0x100851A3: call 0x100a4670 */
    RECOMP_FLAGS_IN();
    eax = esi; /* 0x100851A8: mov eax, esi */
    goto L_100851EF; /* 0x100851AA: jmp 0x100851ef */
L_100851AC:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edi = 0; /* 0x100851AC: xor edi, edi */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebx) = edi; /* 0x100851AE: mov dword ptr [ebx], edi */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x100851B0: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = MEM32(ebp + 0xC); /* 0x100851B2: mov ecx, dword ptr [ebp + 0xc] */
    /* test ecx, ecx */ /* 0x100851B5: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    SET_LO8(eax, (TEST_NZ(_flag_a, _flag_b)) ? 1 : 0); /* 0x100851B7: setne al */
    /* test eax, eax */ /* 0x100851BA: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_Z(_flag_a, _flag_b)) goto L_10085199; /* 0x100851BC: je 0x10085199 */
L_100851BE:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x100851BE: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp MEM32(ebp + 0x10), eax */ /* 0x100851C0: cmp dword ptr [ebp + 0x10], eax */
    _flag_a = (uint32_t)(MEM32(ebp + 0x10)); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    SET_LO8(eax, (CMP_NE(_flag_a, _flag_b)) ? 1 : 0); /* 0x100851C3: setne al */
    /* test eax, eax */ /* 0x100851C6: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_Z(_flag_a, _flag_b)) goto L_10085199; /* 0x100851C8: je 0x10085199 */
L_100851CA:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x100851CA: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    esi = MEM32(ebp + 0x14); /* 0x100851CC: mov esi, dword ptr [ebp + 0x14] */
    /* test esi, esi */ /* 0x100851CF: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    SET_LO8(eax, (TEST_NZ(_flag_a, _flag_b)) ? 1 : 0); /* 0x100851D1: setne al */
    /* test eax, eax */ /* 0x100851D4: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_Z(_flag_a, _flag_b)) goto L_10085199; /* 0x100851D6: je 0x10085199 */
L_100851D8:
    /* cmp MEM16(ecx), LO16(edi) */ /* 0x100851D8: cmp word ptr [ecx], di */
    _flag_a = (uint32_t)(MEM16(ecx)) << 16; _flag_b = (uint32_t)(LO16(edi)) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    if (CMP_NE(_flag_a, _flag_b)) goto L_100851F5; /* 0x100851DB: jne 0x100851f5 */
L_100851DD:
    RECOMP_CALL(sub_1001177D); /* 0x100851DD: call 0x1001177d */
    RECOMP_FLAGS_IN();
    MEM32(eax) = 0x16u; /* 0x100851E2: mov dword ptr [eax], 0x16 */
L_100851E8:
    RECOMP_CALL(sub_1001177D); /* 0x100851E8: call 0x1001177d */
    RECOMP_FLAGS_IN();
    eax = MEM32(eax); /* 0x100851ED: mov eax, dword ptr [eax] */
L_100851EF:
    RECOMP_CALL(sub_1000EDC3); /* 0x100851EF: call 0x1000edc3 */
    RECOMP_FLAGS_IN();
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x100851F4: ret  */
L_100851F5:
    MEM32(ebp + (-0x1C)) = esi; /* 0x100851F5: mov dword ptr [ebp - 0x1c], esi */
    PUSH32(esp, esi); /* 0x100851F8: push esi */
    RECOMP_CALL(sub_10014B96); /* 0x100851F9: call 0x10014b96 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x100851FE: pop ecx */
    MEM32(ebp + (-0x4)) = edi; /* 0x100851FF: mov dword ptr [ebp - 4], edi */
    /* test MEM8(esi + 0xC), 0x83u */ /* 0x10085202: test byte ptr [esi + 0xc], 0x83 */
    _flag_a = (uint32_t)(MEM8(esi + 0xC)) << 24; _flag_b = (uint32_t)(0x83u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_1008520F; /* 0x10085206: je 0x1008520f */
L_10085208:
    PUSH32(esp, esi); /* 0x10085208: push esi */
    RECOMP_CALL(sub_10014F4C); /* 0x10085209: call 0x10014f4c */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1008520E: pop ecx */
L_1008520F:
    MEM32(esi + 0x8) = edi; /* 0x1008520F: mov dword ptr [esi + 8], edi */
    MEM32(esi) = edi; /* 0x10085212: mov dword ptr [esi], edi */
    MEM32(esi + 0xC) = edi; /* 0x10085214: mov dword ptr [esi + 0xc], edi */
    MEM32(esi + 0x4) = edi; /* 0x10085217: mov dword ptr [esi + 4], edi */
    PUSH32(esp, esi); /* 0x1008521A: push esi */
    PUSH32(esp, MEM32(ebp + 0x18)); /* 0x1008521B: push dword ptr [ebp + 0x18] */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x1008521E: push dword ptr [ebp + 0x10] */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x10085221: push dword ptr [ebp + 0xc] */
    RECOMP_CALL(sub_1002C264); /* 0x10085224: call 0x1002c264 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x10u; /* 0x10085229: add esp, 0x10 */
    _flag_k = FK_ADD;
    MEM32(ebx) = eax; /* 0x1008522C: mov dword ptr [ebx], eax */
    MEM32(ebp + (-0x4)) = 0xFFFFFFFEu; /* 0x1008522E: mov dword ptr [ebp - 4], 0xfffffffe */
    RECOMP_CALL(sub_1008524A); /* 0x10085235: call 0x1008524a */
    RECOMP_FLAGS_IN();
    /* cmp MEM32(ebx), edi */ /* 0x1008523A: cmp dword ptr [ebx], edi */
    _flag_a = (uint32_t)(MEM32(ebx)); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_EQ(_flag_a, _flag_b)) goto L_100851E8; /* 0x1008523C: je 0x100851e8 */
L_1008523E:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1008523E: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    goto L_100851EF; /* 0x10085240: jmp 0x100851ef */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    RECOMP_REGS_OUT();
}

void sub_1008524A(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1008524Au);

L_1008524A:
    PUSH32(esp, esi); /* 0x1008524A: push esi */
    RECOMP_CALL(sub_10014B60); /* 0x1008524B: call 0x10014b60 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x10085250: pop ecx */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x10085251: ret  */
    RECOMP_REGS_OUT();
}

void sub_10085274(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x10085274u);

L_10085274:
    PUSH32(esp, ebp); /* 0x10085274: push ebp */
    ebp = esp; /* 0x10085275: mov ebp, esp */
    PUSH32(esp, 0x80u); /* 0x10085277: push 0x80 */
    PUSH32(esp, MEM32(ebp + 0x14)); /* 0x1008527C: push dword ptr [ebp + 0x14] */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x1008527F: push dword ptr [ebp + 0x10] */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x10085282: push dword ptr [ebp + 0xc] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x10085285: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_1008517F); /* 0x10085288: call 0x1008517f */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x14u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x14u; /* 0x1008528D: add esp, 0x14 */
    _flag_k = FK_ADD;
    ebp = POP32_VAL(esp); /* 0x10085290: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x10085291: ret  */
    RECOMP_REGS_OUT();
}

void sub_10085292(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x10085292u);

L_10085292:
    PUSH32(esp, ebp); /* 0x10085292: push ebp */
    ebp = esp; /* 0x10085293: mov ebp, esp */
    eax = ebp + 0x10; /* 0x10085295: lea eax, [ebp + 0x10] */
    PUSH32(esp, eax); /* 0x10085298: push eax */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x10085299: push dword ptr [ebp + 0xc] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x1008529C: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_10084E46); /* 0x1008529F: call 0x10084e46 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x100852A4: add esp, 0xc */
    _flag_k = FK_ADD;
    ebp = POP32_VAL(esp); /* 0x100852A7: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x100852A8: ret  */
    RECOMP_REGS_OUT();
}

void sub_100852A9(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x100852A9u);

L_100852A9:
    PUSH32(esp, ebp); /* 0x100852A9: push ebp */
    ebp = esp; /* 0x100852AA: mov ebp, esp */
    eax = ebp + 0xC; /* 0x100852AC: lea eax, [ebp + 0xc] */
    PUSH32(esp, eax); /* 0x100852AF: push eax */
    PUSH32(esp, 0); /* 0x100852B0: push 0 */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x100852B2: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_10084E7B); /* 0x100852B5: call 0x10084e7b */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x100852BA: add esp, 0xc */
    _flag_k = FK_ADD;
    ebp = POP32_VAL(esp); /* 0x100852BD: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x100852BE: ret  */
    RECOMP_REGS_OUT();
}

void sub_100852BF(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x100852BFu);

L_100852BF:
    PUSH32(esp, ebp); /* 0x100852BF: push ebp */
    ebp = esp; /* 0x100852C0: mov ebp, esp */
    eax = ebp + 0x10; /* 0x100852C2: lea eax, [ebp + 0x10] */
    PUSH32(esp, eax); /* 0x100852C5: push eax */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x100852C6: push dword ptr [ebp + 0xc] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x100852C9: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_10084E7B); /* 0x100852CC: call 0x10084e7b */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x100852D1: add esp, 0xc */
    _flag_k = FK_ADD;
    ebp = POP32_VAL(esp); /* 0x100852D4: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x100852D5: ret  */
    RECOMP_REGS_OUT();
}

void sub_100852D6(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x100852D6u);

L_100852D6:
    PUSH32(esp, ebp); /* 0x100852D6: push ebp */
    ebp = esp; /* 0x100852D7: mov ebp, esp */
    eax = ebp + 0x10; /* 0x100852D9: lea eax, [ebp + 0x10] */
    PUSH32(esp, eax); /* 0x100852DC: push eax */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x100852DD: push dword ptr [ebp + 0xc] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x100852E0: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_10084E96); /* 0x100852E3: call 0x10084e96 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x100852E8: add esp, 0xc */
    _flag_k = FK_ADD;
    ebp = POP32_VAL(esp); /* 0x100852EB: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x100852EC: ret  */
    RECOMP_REGS_OUT();
}

void sub_100852ED(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x100852EDu);

L_100852ED:
    PUSH32(esp, 0xCu); /* 0x100852ED: push 0xc */
    PUSH32(esp, 0x100853A0u); /* 0x100852EF: push 0x100853a0 */
    RECOMP_CALL(sub_1000ED7E); /* 0x100852F4: call 0x1000ed7e */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edi = 0; /* 0x100852F9: xor edi, edi */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x1C)) = edi; /* 0x100852FB: mov dword ptr [ebp - 0x1c], edi */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x100852FE: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp MEM32(ebp + 0x8), eax */ /* 0x10085300: cmp dword ptr [ebp + 8], eax */
    _flag_a = (uint32_t)(MEM32(ebp + 0x8)); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    SET_LO8(eax, (CMP_NE(_flag_a, _flag_b)) ? 1 : 0); /* 0x10085303: setne al */
    /* test eax, eax */ /* 0x10085306: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1008531F; /* 0x10085308: jne 0x1008531f */
L_1008530A:
    RECOMP_CALL(sub_1001177D); /* 0x1008530A: call 0x1001177d */
    RECOMP_FLAGS_IN();
    MEM32(eax) = 0x16u; /* 0x1008530F: mov dword ptr [eax], 0x16 */
    RECOMP_CALL(sub_100A4670); /* 0x10085315: call 0x100a4670 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)((eax | 0xFFFFFFFFu)); _flag_b = (uint32_t)((eax | 0xFFFFFFFFu));
    eax = eax | 0xFFFFFFFFu; /* 0x1008531A: or eax, 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_10085380; /* 0x1008531D: jmp 0x10085380 */
L_1008531F:
    RECOMP_CALL(sub_100142B5); /* 0x1008531F: call 0x100142b5 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x20u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 0x20u; /* 0x10085324: add eax, 0x20 */
    _flag_k = FK_ADD;
    PUSH32(esp, eax); /* 0x10085327: push eax */
    PUSH32(esp, 1); /* 0x10085328: push 1 */
    RECOMP_CALL(sub_100142FC); /* 0x1008532A: call 0x100142fc */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1008532F: pop ecx */
    ecx = POP32_VAL(esp); /* 0x10085330: pop ecx */
    MEM32(ebp + (-0x4)) = edi; /* 0x10085331: mov dword ptr [ebp - 4], edi */
    RECOMP_CALL(sub_100142B5); /* 0x10085334: call 0x100142b5 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x20u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 0x20u; /* 0x10085339: add eax, 0x20 */
    _flag_k = FK_ADD;
    PUSH32(esp, eax); /* 0x1008533C: push eax */
    RECOMP_CALL(sub_10020477); /* 0x1008533D: call 0x10020477 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x10085342: pop ecx */
    esi = eax; /* 0x10085343: mov esi, eax */
    eax = ebp + 0xC; /* 0x10085345: lea eax, [ebp + 0xc] */
    PUSH32(esp, eax); /* 0x10085348: push eax */
    PUSH32(esp, edi); /* 0x10085349: push edi */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x1008534A: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_100142B5); /* 0x1008534D: call 0x100142b5 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x20u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 0x20u; /* 0x10085352: add eax, 0x20 */
    _flag_k = FK_ADD;
    PUSH32(esp, eax); /* 0x10085355: push eax */
    RECOMP_CALL(sub_1001D315); /* 0x10085356: call 0x1001d315 */
    RECOMP_FLAGS_IN();
    edi = eax; /* 0x1008535B: mov edi, eax */
    MEM32(ebp + (-0x1C)) = edi; /* 0x1008535D: mov dword ptr [ebp - 0x1c], edi */
    RECOMP_CALL(sub_100142B5); /* 0x10085360: call 0x100142b5 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x20u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 0x20u; /* 0x10085365: add eax, 0x20 */
    _flag_k = FK_ADD;
    PUSH32(esp, eax); /* 0x10085368: push eax */
    PUSH32(esp, esi); /* 0x10085369: push esi */
    RECOMP_CALL(sub_100204F6); /* 0x1008536A: call 0x100204f6 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x18u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x18u; /* 0x1008536F: add esp, 0x18 */
    _flag_k = FK_ADD;
    MEM32(ebp + (-0x4)) = 0xFFFFFFFEu; /* 0x10085372: mov dword ptr [ebp - 4], 0xfffffffe */
    RECOMP_CALL(sub_10085389); /* 0x10085379: call 0x10085389 */
    RECOMP_FLAGS_IN();
    eax = edi; /* 0x1008537E: mov eax, edi */
L_10085380:
    RECOMP_CALL(sub_1000EDC3); /* 0x10085380: call 0x1000edc3 */
    RECOMP_FLAGS_IN();
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x10085385: ret  */
    RECOMP_REGS_OUT();
}

void sub_10085389(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x10085389u);

L_10085389:
    RECOMP_CALL(sub_100142B5); /* 0x10085389: call 0x100142b5 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x20u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 0x20u; /* 0x1008538E: add eax, 0x20 */
    _flag_k = FK_ADD;
    PUSH32(esp, eax); /* 0x10085391: push eax */
    PUSH32(esp, 1); /* 0x10085392: push 1 */
    RECOMP_CALL(sub_10020611); /* 0x10085394: call 0x10020611 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x10085399: pop ecx */
    ecx = POP32_VAL(esp); /* 0x1008539A: pop ecx */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1008539B: ret  */
    RECOMP_REGS_OUT();
}

void sub_100853BC(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x100853BCu);

L_100853BC:
    PUSH32(esp, ebp); /* 0x100853BC: push ebp */
    ebp = esp; /* 0x100853BD: mov ebp, esp */
    eax = ebp + 0xC; /* 0x100853BF: lea eax, [ebp + 0xc] */
    PUSH32(esp, eax); /* 0x100853C2: push eax */
    PUSH32(esp, 0); /* 0x100853C3: push 0 */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x100853C5: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_10084E96); /* 0x100853C8: call 0x10084e96 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x100853CD: add esp, 0xc */
    _flag_k = FK_ADD;
    ebp = POP32_VAL(esp); /* 0x100853D0: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x100853D1: ret  */
    RECOMP_REGS_OUT();
}

void sub_100853D2(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x100853D2u);

L_100853D2:
    PUSH32(esp, ebp); /* 0x100853D2: push ebp */
    ebp = esp; /* 0x100853D3: mov ebp, esp */
    eax = ebp + 0x10; /* 0x100853D5: lea eax, [ebp + 0x10] */
    PUSH32(esp, eax); /* 0x100853D8: push eax */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x100853D9: push dword ptr [ebp + 0xc] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x100853DC: push dword ptr [ebp + 8] */
    PUSH32(esp, 0x1003320Eu); /* 0x100853DF: push 0x1003320e */
    RECOMP_CALL(sub_10085424); /* 0x100853E4: call 0x10085424 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x10u; /* 0x100853E9: add esp, 0x10 */
    _flag_k = FK_ADD;
    ebp = POP32_VAL(esp); /* 0x100853EC: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x100853ED: ret  */
    RECOMP_REGS_OUT();
}

void sub_100853EE(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x100853EEu);

L_100853EE:
    PUSH32(esp, ebp); /* 0x100853EE: push ebp */
    ebp = esp; /* 0x100853EF: mov ebp, esp */
    eax = ebp + 0x10; /* 0x100853F1: lea eax, [ebp + 0x10] */
    PUSH32(esp, eax); /* 0x100853F4: push eax */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x100853F5: push dword ptr [ebp + 0xc] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x100853F8: push dword ptr [ebp + 8] */
    PUSH32(esp, 0x1001E5DDu); /* 0x100853FB: push 0x1001e5dd */
    RECOMP_CALL(sub_10085424); /* 0x10085400: call 0x10085424 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x10u; /* 0x10085405: add esp, 0x10 */
    _flag_k = FK_ADD;
    ebp = POP32_VAL(esp); /* 0x10085408: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x10085409: ret  */
    RECOMP_REGS_OUT();
}

void sub_1008540A(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1008540Au);

L_1008540A:
    PUSH32(esp, ebp); /* 0x1008540A: push ebp */
    ebp = esp; /* 0x1008540B: mov ebp, esp */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x1008540D: push dword ptr [ebp + 0xc] */
    PUSH32(esp, 0); /* 0x10085410: push 0 */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x10085412: push dword ptr [ebp + 8] */
    PUSH32(esp, 0x1003320Eu); /* 0x10085415: push 0x1003320e */
    RECOMP_CALL(sub_10085424); /* 0x1008541A: call 0x10085424 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x10u; /* 0x1008541F: add esp, 0x10 */
    _flag_k = FK_ADD;
    ebp = POP32_VAL(esp); /* 0x10085422: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x10085423: ret  */
    RECOMP_REGS_OUT();
}

void sub_10085424(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x10085424u);

L_10085424:
    PUSH32(esp, 0xCu); /* 0x10085424: push 0xc */
    PUSH32(esp, 0x100854B0u); /* 0x10085426: push 0x100854b0 */
    RECOMP_CALL(sub_1000ED7E); /* 0x1008542B: call 0x1000ed7e */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(MEM32(ebp + (-0x1C))); _flag_b = (uint32_t)(0);
    MEM32(ebp + (-0x1C)) = MEM32(ebp + (-0x1C)) & 0; /* 0x10085430: and dword ptr [ebp - 0x1c], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x10085434: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp MEM32(ebp + 0xC), eax */ /* 0x10085436: cmp dword ptr [ebp + 0xc], eax */
    _flag_a = (uint32_t)(MEM32(ebp + 0xC)); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    SET_LO8(eax, (CMP_NE(_flag_a, _flag_b)) ? 1 : 0); /* 0x10085439: setne al */
    /* test eax, eax */ /* 0x1008543C: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_10085455; /* 0x1008543E: jne 0x10085455 */
L_10085440:
    RECOMP_CALL(sub_1001177D); /* 0x10085440: call 0x1001177d */
    RECOMP_FLAGS_IN();
    MEM32(eax) = 0x16u; /* 0x10085445: mov dword ptr [eax], 0x16 */
    RECOMP_CALL(sub_100A4670); /* 0x1008544B: call 0x100a4670 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)((eax | 0xFFFFFFFFu)); _flag_b = (uint32_t)((eax | 0xFFFFFFFFu));
    eax = eax | 0xFFFFFFFFu; /* 0x10085450: or eax, 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_10085490; /* 0x10085453: jmp 0x10085490 */
L_10085455:
    RECOMP_CALL(sub_100142B5); /* 0x10085455: call 0x100142b5 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, eax); /* 0x1008545A: push eax */
    PUSH32(esp, 0); /* 0x1008545B: push 0 */
    RECOMP_CALL(sub_100142FC); /* 0x1008545D: call 0x100142fc */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x10085462: pop ecx */
    ecx = POP32_VAL(esp); /* 0x10085463: pop ecx */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x4))); _flag_b = (uint32_t)(0);
    MEM32(ebp + (-0x4)) = MEM32(ebp + (-0x4)) & 0; /* 0x10085464: and dword ptr [ebp - 4], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, MEM32(ebp + 0x14)); /* 0x10085468: push dword ptr [ebp + 0x14] */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x1008546B: push dword ptr [ebp + 0x10] */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x1008546E: push dword ptr [ebp + 0xc] */
    RECOMP_CALL(sub_100142B5); /* 0x10085471: call 0x100142b5 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, eax); /* 0x10085476: push eax */
    RECOMP_ICALL(MEM32(ebp + 0x8)); /* 0x10085477: call dword ptr [ebp + 8] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x10u; /* 0x1008547A: add esp, 0x10 */
    _flag_k = FK_ADD;
    esi = eax; /* 0x1008547D: mov esi, eax */
    MEM32(ebp + (-0x1C)) = esi; /* 0x1008547F: mov dword ptr [ebp - 0x1c], esi */
    MEM32(ebp + (-0x4)) = 0xFFFFFFFEu; /* 0x10085482: mov dword ptr [ebp - 4], 0xfffffffe */
    RECOMP_CALL(sub_10085499); /* 0x10085489: call 0x10085499 */
    RECOMP_FLAGS_IN();
    eax = esi; /* 0x1008548E: mov eax, esi */
L_10085490:
    RECOMP_CALL(sub_1000EDC3); /* 0x10085490: call 0x1000edc3 */
    RECOMP_FLAGS_IN();
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x10085495: ret  */
    RECOMP_REGS_OUT();
}

void sub_10085499(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x10085499u);

L_10085499:
    RECOMP_CALL(sub_100142B5); /* 0x10085499: call 0x100142b5 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, eax); /* 0x1008549E: push eax */
    PUSH32(esp, 0); /* 0x1008549F: push 0 */
    RECOMP_CALL(sub_10020611); /* 0x100854A1: call 0x10020611 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x100854A6: pop ecx */
    ecx = POP32_VAL(esp); /* 0x100854A7: pop ecx */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x100854A8: ret  */
    RECOMP_REGS_OUT();
}

void sub_100854CC(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x100854CCu);

L_100854CC:
    PUSH32(esp, ebp); /* 0x100854CC: push ebp */
    ebp = esp; /* 0x100854CD: mov ebp, esp */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x100854CF: push dword ptr [ebp + 0xc] */
    PUSH32(esp, 0); /* 0x100854D2: push 0 */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x100854D4: push dword ptr [ebp + 8] */
    PUSH32(esp, 0x1001E5DDu); /* 0x100854D7: push 0x1001e5dd */
    RECOMP_CALL(sub_10085424); /* 0x100854DC: call 0x10085424 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x10u; /* 0x100854E1: add esp, 0x10 */
    _flag_k = FK_ADD;
    ebp = POP32_VAL(esp); /* 0x100854E4: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x100854E5: ret  */
    RECOMP_REGS_OUT();
}

void sub_100854E6(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x100854E6u);

L_100854E6:
    PUSH32(esp, ebp); /* 0x100854E6: push ebp */
    ebp = esp; /* 0x100854E7: mov ebp, esp */
    eax = ebp + 0xC; /* 0x100854E9: lea eax, [ebp + 0xc] */
    PUSH32(esp, eax); /* 0x100854EC: push eax */
    PUSH32(esp, 0); /* 0x100854ED: push 0 */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x100854EF: push dword ptr [ebp + 8] */
    PUSH32(esp, 0x1003320Eu); /* 0x100854F2: push 0x1003320e */
    RECOMP_CALL(sub_10085424); /* 0x100854F7: call 0x10085424 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x10u; /* 0x100854FC: add esp, 0x10 */
    _flag_k = FK_ADD;
    ebp = POP32_VAL(esp); /* 0x100854FF: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x10085500: ret  */
    RECOMP_REGS_OUT();
}

void sub_10085501(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x10085501u);

L_10085501:
    PUSH32(esp, ebp); /* 0x10085501: push ebp */
    ebp = esp; /* 0x10085502: mov ebp, esp */
    eax = ebp + 0xC; /* 0x10085504: lea eax, [ebp + 0xc] */
    PUSH32(esp, eax); /* 0x10085507: push eax */
    PUSH32(esp, 0); /* 0x10085508: push 0 */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x1008550A: push dword ptr [ebp + 8] */
    PUSH32(esp, 0x1001E5DDu); /* 0x1008550D: push 0x1001e5dd */
    RECOMP_CALL(sub_10085424); /* 0x10085512: call 0x10085424 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x10u; /* 0x10085517: add esp, 0x10 */
    _flag_k = FK_ADD;
    ebp = POP32_VAL(esp); /* 0x1008551A: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1008551B: ret  */
    RECOMP_REGS_OUT();
}

void sub_1008551C(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1008551Cu);

L_1008551C:
    PUSH32(esp, 0x1Cu); /* 0x1008551C: push 0x1c */
    PUSH32(esp, 0x10085750u); /* 0x1008551E: push 0x10085750 */
    RECOMP_CALL(sub_1000ED7E); /* 0x10085523: call 0x1000ed7e */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    esi = 0; /* 0x10085528: xor esi, esi */
    _cf = 0;
    _flag_k = FK_TEST;
    edi = esi; /* 0x1008552A: mov edi, esi */
    MEM32(ebp + (-0x24)) = edi; /* 0x1008552C: mov dword ptr [ebp - 0x24], edi */
    MEM32(ebp + (-0x1C)) = esi; /* 0x1008552F: mov dword ptr [ebp - 0x1c], esi */
    PUSH32(esp, 2); /* 0x10085532: push 2 */
    RECOMP_CALL(sub_100145F8); /* 0x10085534: call 0x100145f8 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x10085539: pop ecx */
    /* test eax, eax */ /* 0x1008553A: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1008572F; /* 0x1008553C: je 0x1008572f */
L_10085542:
    PUSH32(esp, 0x10085744u); /* 0x10085542: push 0x10085744 */
    PUSH32(esp, esi); /* 0x10085547: push esi */
    eax = ebp + (-0x1C); /* 0x10085548: lea eax, [ebp - 0x1c] */
    PUSH32(esp, eax); /* 0x1008554B: push eax */
    RECOMP_CALL(sub_1002E415); /* 0x1008554C: call 0x1002e415 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x10085551: add esp, 0xc */
    _flag_k = FK_ADD;
    /* test eax, eax */ /* 0x10085554: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1008556B; /* 0x10085556: je 0x1008556b */
L_10085558:
    /* cmp eax, 0x16u */ /* 0x10085558: cmp eax, 0x16 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x16u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_10085567; /* 0x1008555B: jne 0x10085567 */
L_1008555D:
    PUSH32(esp, esi); /* 0x1008555D: push esi */
    PUSH32(esp, esi); /* 0x1008555E: push esi */
    PUSH32(esp, esi); /* 0x1008555F: push esi */
    PUSH32(esp, esi); /* 0x10085560: push esi */
    PUSH32(esp, esi); /* 0x10085561: push esi */
    RECOMP_CALL(sub_100A469B); /* 0x10085562: call 0x100a469b */
    RECOMP_FLAGS_IN();
L_10085567:
    /* test eax, eax */ /* 0x10085567: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_10085584; /* 0x10085569: jne 0x10085584 */
L_1008556B:
    /* cmp MEM32(ebp + (-0x1C)), esi */ /* 0x1008556B: cmp dword ptr [ebp - 0x1c], esi */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x1C))); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_10085584; /* 0x1008556E: je 0x10085584 */
L_10085570:
    PUSH32(esp, esi); /* 0x10085570: push esi */
    PUSH32(esp, MEM32(ebp + (-0x1C))); /* 0x10085571: push dword ptr [ebp - 0x1c] */
    RECOMP_CALL(sub_1001EE42); /* 0x10085574: call 0x1001ee42 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x10085579: pop ecx */
    ecx = POP32_VAL(esp); /* 0x1008557A: pop ecx */
    /* test eax, eax */ /* 0x1008557B: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_10085584; /* 0x1008557D: jne 0x10085584 */
L_1008557F:
    ebx = MEM32(ebp + (-0x1C)); /* 0x1008557F: mov ebx, dword ptr [ebp - 0x1c] */
    goto L_100855B3; /* 0x10085582: jmp 0x100855b3 */
L_10085584:
    ebx = MEM32(ebp + 0x8); /* 0x10085584: mov ebx, dword ptr [ebp + 8] */
    /* test ebx, ebx */ /* 0x10085587: test ebx, ebx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ebx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_10085598; /* 0x10085589: je 0x10085598 */
L_1008558B:
    PUSH32(esp, esi); /* 0x1008558B: push esi */
    PUSH32(esp, ebx); /* 0x1008558C: push ebx */
    RECOMP_CALL(sub_1001EE42); /* 0x1008558D: call 0x1001ee42 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x10085592: pop ecx */
    ecx = POP32_VAL(esp); /* 0x10085593: pop ecx */
    /* test eax, eax */ /* 0x10085594: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_100855B3; /* 0x10085596: je 0x100855b3 */
L_10085598:
    PUSH32(esp, esi); /* 0x10085598: push esi */
    PUSH32(esp, 0x1006218Cu); /* 0x10085599: push 0x1006218c */
    RECOMP_CALL(sub_1001EE42); /* 0x1008559E: call 0x1001ee42 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x100855A3: pop ecx */
    ecx = POP32_VAL(esp); /* 0x100855A4: pop ecx */
    /* test eax, eax */ /* 0x100855A5: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    ebx = 0x1006218Cu; /* 0x100855A7: mov ebx, 0x1006218c */
    if (TEST_Z(_flag_a, _flag_b)) goto L_100855B3; /* 0x100855AC: je 0x100855b3 */
L_100855AE:
    ebx = 0x100282D8u; /* 0x100855AE: mov ebx, 0x100282d8 */
L_100855B3:
    /* cmp MEM32(ebp + 0xC), esi */ /* 0x100855B3: cmp dword ptr [ebp + 0xc], esi */
    _flag_a = (uint32_t)(MEM32(ebp + 0xC)); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_100855C6; /* 0x100855B6: je 0x100855c6 */
L_100855B8:
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x100855B8: push dword ptr [ebp + 0xc] */
    RECOMP_CALL(sub_1000F1F3); /* 0x100855BB: call 0x1000f1f3 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x100855C0: pop ecx */
    edi = eax; /* 0x100855C1: mov edi, eax */
    MEM32(ebp + (-0x24)) = eax; /* 0x100855C3: mov dword ptr [ebp - 0x24], eax */
L_100855C6:
    PUSH32(esp, ebx); /* 0x100855C6: push ebx */
    RECOMP_CALL(sub_1000F1F3); /* 0x100855C7: call 0x1000f1f3 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edi = edi + 0xCu; /* 0x100855CC: add edi, 0xc */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + edi; /* 0x100855CF: add eax, edi */
    _flag_k = FK_ADD;
    MEM32(ebp + (-0x20)) = eax; /* 0x100855D1: mov dword ptr [ebp - 0x20], eax */
    PUSH32(esp, 2); /* 0x100855D4: push 2 */
    PUSH32(esp, eax); /* 0x100855D6: push eax */
    RECOMP_CALL(sub_1001CBFF); /* 0x100855D7: call 0x1001cbff */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x100855DC: add esp, 0xc */
    _flag_k = FK_ADD;
    edi = eax; /* 0x100855DF: mov edi, eax */
    MEM32(ebp + (-0x28)) = edi; /* 0x100855E1: mov dword ptr [ebp - 0x28], edi */
    /* test edi, edi */ /* 0x100855E4: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1008571D; /* 0x100855E6: je 0x1008571d */
L_100855EC:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x100855EC: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM16(edi) = (uint16_t)(LO16(eax)); /* 0x100855EE: mov word ptr [edi], ax */
    PUSH32(esp, ebx); /* 0x100855F1: push ebx */
    PUSH32(esp, MEM32(ebp + (-0x20))); /* 0x100855F2: push dword ptr [ebp - 0x20] */
    PUSH32(esp, edi); /* 0x100855F5: push edi */
    RECOMP_CALL(sub_1001212A); /* 0x100855F6: call 0x1001212a */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x100855FB: add esp, 0xc */
    _flag_k = FK_ADD;
    /* test eax, eax */ /* 0x100855FE: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1008555D; /* 0x10085600: jne 0x1008555d */
L_10085606:
    PUSH32(esp, ebx); /* 0x10085606: push ebx */
    RECOMP_CALL(sub_1000F1F3); /* 0x10085607: call 0x1000f1f3 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1008560C: pop ecx */
    eax = ebx + eax * 2; /* 0x1008560D: lea eax, [ebx + eax*2] */
    eax = (uint32_t)MEM16(eax + (-0x2)); /* 0x10085610: movzx eax, word ptr [eax - 2] */
    ebx = MEM32(ebp + (-0x20)); /* 0x10085614: mov ebx, dword ptr [ebp - 0x20] */
    /* cmp eax, 0x5Cu */ /* 0x10085617: cmp eax, 0x5c */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x5Cu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_10085638; /* 0x1008561A: je 0x10085638 */
L_1008561C:
    /* cmp eax, 0x2Fu */ /* 0x1008561C: cmp eax, 0x2f */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x2Fu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_10085638; /* 0x1008561F: je 0x10085638 */
L_10085621:
    PUSH32(esp, 0x1006218Cu); /* 0x10085621: push 0x1006218c */
    PUSH32(esp, ebx); /* 0x10085626: push ebx */
    PUSH32(esp, edi); /* 0x10085627: push edi */
    RECOMP_CALL(sub_1001212A); /* 0x10085628: call 0x1001212a */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x1008562D: add esp, 0xc */
    _flag_k = FK_ADD;
    /* test eax, eax */ /* 0x10085630: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1008555D; /* 0x10085632: jne 0x1008555d */
L_10085638:
    /* cmp MEM32(ebp + 0xC), esi */ /* 0x10085638: cmp dword ptr [ebp + 0xc], esi */
    _flag_a = (uint32_t)(MEM32(ebp + 0xC)); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_10085652; /* 0x1008563B: je 0x10085652 */
L_1008563D:
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x1008563D: push dword ptr [ebp + 0xc] */
    PUSH32(esp, ebx); /* 0x10085640: push ebx */
    PUSH32(esp, edi); /* 0x10085641: push edi */
    RECOMP_CALL(sub_1001212A); /* 0x10085642: call 0x1001212a */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x10085647: add esp, 0xc */
    _flag_k = FK_ADD;
    /* test eax, eax */ /* 0x1008564A: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1008555D; /* 0x1008564C: jne 0x1008555d */
L_10085652:
    PUSH32(esp, edi); /* 0x10085652: push edi */
    RECOMP_CALL(sub_1000F1F3); /* 0x10085653: call 0x1000f1f3 */
    RECOMP_FLAGS_IN();
    eax = edi + eax * 2; /* 0x10085658: lea eax, [edi + eax*2] */
    MEM32(ebp + (-0x20)) = eax; /* 0x1008565B: mov dword ptr [ebp - 0x20], eax */
    PUSH32(esp, 2); /* 0x1008565E: push 2 */
    RECOMP_CALL(sub_1000EDD7); /* 0x10085660: call 0x1000edd7 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x10085665: pop ecx */
    ecx = POP32_VAL(esp); /* 0x10085666: pop ecx */
    MEM32(ebp + (-0x4)) = esi; /* 0x10085667: mov dword ptr [ebp - 4], esi */
    eax = MEM32(ebp + (-0x24)); /* 0x1008566A: mov eax, dword ptr [ebp - 0x24] */
    /* cmp MEM32(0x100E3CC4), eax */ /* 0x1008566D: cmp dword ptr [0x100e3cc4], eax */
    _flag_a = (uint32_t)(MEM32(0x100E3CC4)); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_AE(_flag_a, _flag_b)) goto L_1008567F; /* 0x10085673: jae 0x1008567f */
L_10085675:
    MEM32(0x100E1490) = 1; /* 0x10085675: mov dword ptr [0x100e1490], 1 */
L_1008567F:
    MEM32(0x100E3CC4) = eax; /* 0x1008567F: mov dword ptr [0x100e3cc4], eax */
    eax = MEM32(0x100E1490); /* 0x10085684: mov eax, dword ptr [0x100e1490] */
    MEM32(ebp + (-0x2C)) = eax; /* 0x10085689: mov dword ptr [ebp - 0x2c], eax */
    RECOMP_CALL(sub_1001177D); /* 0x1008568C: call 0x1001177d */
    RECOMP_FLAGS_IN();
    eax = MEM32(eax); /* 0x10085691: mov eax, dword ptr [eax] */
    MEM32(ebp + (-0x24)) = eax; /* 0x10085693: mov dword ptr [ebp - 0x24], eax */
L_10085696:
    edx = MEM32(0x100E1490); /* 0x10085696: mov edx, dword ptr [0x100e1490] */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(1);
    edx = edx + 1; /* 0x1008569C: inc edx */
    _flag_k = FK_INC;
    MEM32(0x100E1490) = edx; /* 0x1008569D: mov dword ptr [0x100e1490], edx */
    eax = edx; /* 0x100856A3: mov eax, edx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(ebp + (-0x2C)));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - MEM32(ebp + (-0x2C)); /* 0x100856A5: sub eax, dword ptr [ebp - 0x2c] */
    _flag_k = FK_CMP;
    /* cmp eax, 0x7FFFFFFFu */ /* 0x100856A8: cmp eax, 0x7fffffff */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x7FFFFFFFu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_A(_flag_a, _flag_b)) goto L_100856FB; /* 0x100856AD: ja 0x100856fb */
L_100856AF:
    PUSH32(esp, 0xAu); /* 0x100856AF: push 0xa */
    ecx = MEM32(ebp + (-0x20)); /* 0x100856B1: mov ecx, dword ptr [ebp - 0x20] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ecx = ecx - edi; /* 0x100856B4: sub ecx, edi */
    _flag_k = FK_CMP;
    if (1u) _cf = (((ecx) >> 0) & 1u); /* 0x100856B6: sar ecx, 1 */
    if (1u) { _flag_a = recomp_flags_pack(((uint32_t)((int32_t)ecx >> 1u)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ecx = (uint32_t)((int32_t)ecx >> 1u);
    eax = ebx; /* 0x100856B8: mov eax, ebx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - ecx; /* 0x100856BA: sub eax, ecx */
    _flag_k = FK_CMP;
    PUSH32(esp, eax); /* 0x100856BC: push eax */
    PUSH32(esp, MEM32(ebp + (-0x20))); /* 0x100856BD: push dword ptr [ebp - 0x20] */
    PUSH32(esp, edx); /* 0x100856C0: push edx */
    RECOMP_CALL(sub_1001F407); /* 0x100856C1: call 0x1001f407 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x10u; /* 0x100856C6: add esp, 0x10 */
    _flag_k = FK_ADD;
    /* test eax, eax */ /* 0x100856C9: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1008555D; /* 0x100856CB: jne 0x1008555d */
L_100856D1:
    RECOMP_CALL(sub_1001177D); /* 0x100856D1: call 0x1001177d */
    RECOMP_FLAGS_IN();
    MEM32(eax) = esi; /* 0x100856D6: mov dword ptr [eax], esi */
    PUSH32(esp, esi); /* 0x100856D8: push esi */
    PUSH32(esp, edi); /* 0x100856D9: push edi */
    RECOMP_CALL(sub_1001EE42); /* 0x100856DA: call 0x1001ee42 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x100856DF: pop ecx */
    ecx = POP32_VAL(esp); /* 0x100856E0: pop ecx */
    /* test eax, eax */ /* 0x100856E1: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_Z(_flag_a, _flag_b)) goto L_10085696; /* 0x100856E3: je 0x10085696 */
L_100856E5:
    RECOMP_CALL(sub_1001177D); /* 0x100856E5: call 0x1001177d */
    RECOMP_FLAGS_IN();
    /* cmp MEM32(eax), 0xDu */ /* 0x100856EA: cmp dword ptr [eax], 0xd */
    _flag_a = (uint32_t)(MEM32(eax)); _flag_b = (uint32_t)(0xDu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_EQ(_flag_a, _flag_b)) goto L_10085696; /* 0x100856ED: je 0x10085696 */
L_100856EF:
    RECOMP_CALL(sub_1001177D); /* 0x100856EF: call 0x1001177d */
    RECOMP_FLAGS_IN();
    ecx = MEM32(ebp + (-0x24)); /* 0x100856F4: mov ecx, dword ptr [ebp - 0x24] */
    MEM32(eax) = ecx; /* 0x100856F7: mov dword ptr [eax], ecx */
    goto L_10085711; /* 0x100856F9: jmp 0x10085711 */
L_100856FB:
    RECOMP_CALL(sub_1001177D); /* 0x100856FB: call 0x1001177d */
    RECOMP_FLAGS_IN();
    ecx = MEM32(ebp + (-0x24)); /* 0x10085700: mov ecx, dword ptr [ebp - 0x24] */
    MEM32(eax) = ecx; /* 0x10085703: mov dword ptr [eax], ecx */
    PUSH32(esp, edi); /* 0x10085705: push edi */
    RECOMP_CALL(sub_1000ECE0); /* 0x10085706: call 0x1000ece0 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1008570B: pop ecx */
    edi = esi; /* 0x1008570C: mov edi, esi */
    MEM32(ebp + (-0x28)) = edi; /* 0x1008570E: mov dword ptr [ebp - 0x28], edi */
L_10085711:
    MEM32(ebp + (-0x4)) = 0xFFFFFFFEu; /* 0x10085711: mov dword ptr [ebp - 4], 0xfffffffe */
    RECOMP_CALL(sub_1008573A); /* 0x10085718: call 0x1008573a */
    RECOMP_FLAGS_IN();
L_1008571D:
    PUSH32(esp, MEM32(ebp + (-0x1C))); /* 0x1008571D: push dword ptr [ebp - 0x1c] */
    RECOMP_CALL(sub_1000ECE0); /* 0x10085720: call 0x1000ece0 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, esi); /* 0x10085725: push esi */
    RECOMP_CALL(sub_1000ECE0); /* 0x10085726: call 0x1000ece0 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1008572B: pop ecx */
    ecx = POP32_VAL(esp); /* 0x1008572C: pop ecx */
    eax = edi; /* 0x1008572D: mov eax, edi */
L_1008572F:
    RECOMP_CALL(sub_1000EDC3); /* 0x1008572F: call 0x1000edc3 */
    RECOMP_FLAGS_IN();
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x10085734: ret  */
    RECOMP_REGS_OUT();
}

void sub_1008573A(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1008573Au);

L_1008573A:
    PUSH32(esp, 2); /* 0x1008573A: push 2 */
    RECOMP_CALL(sub_1000EDFC); /* 0x1008573C: call 0x1000edfc */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x10085741: pop ecx */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x10085742: ret  */
    RECOMP_REGS_OUT();
}

void sub_10085744(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x10085744u);

L_10085744:
    PUSH32(esp, esp); /* 0x10085744: push esp */
    _flag_a = (uint32_t)(MEM8(ebp)) << 24; _flag_b = (uint32_t)(LO8(ecx)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(ebp) = (uint8_t)(MEM8(ebp) + LO8(ecx)); /* 0x10085745: add byte ptr [ebp], cl */
    _flag_k = FK_NARROW(FK_ADD, 24);
    PUSH32(esp, eax); /* 0x10085748: push eax */
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x10085749: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax + (-0x16F6F70))) << 24; _flag_b = (uint32_t)(LO8(edx)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax + (-0x16F6F70)) = (uint8_t)(MEM8(eax + (-0x16F6F70)) + LO8(edx)); /* 0x1008574B: add byte ptr [eax - 0x16f6f70], dl */
    _flag_k = FK_NARROW(FK_ADD, 24);
    RECOMP_ITAIL(0x10085751u); { RECOMP_REGS_OUT(); return; } /* falls through */
    RECOMP_REGS_OUT();
}

void sub_1008576C(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1008576Cu);

L_1008576C:
    PUSH32(esp, ebp); /* 0x1008576C: push ebp */
    ebp = esp; /* 0x1008576D: mov ebp, esp */
    PUSH32(esp, ecx); /* 0x1008576F: push ecx */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x4))); _flag_b = (uint32_t)(0);
    MEM32(ebp + (-0x4)) = MEM32(ebp + (-0x4)) & 0; /* 0x10085770: and dword ptr [ebp - 4], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    eax = ebp + (-0x4); /* 0x10085774: lea eax, [ebp - 4] */
    PUSH32(esp, eax); /* 0x10085777: push eax */
    PUSH32(esp, 0x7FFFu); /* 0x10085778: push 0x7fff */
    PUSH32(esp, 0); /* 0x1008577D: push 0 */
    PUSH32(esp, 0xFFFFFFFFu); /* 0x1008577F: push -1 */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x10085781: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_10085793); /* 0x10085784: call 0x10085793 */
    RECOMP_FLAGS_IN();
    eax = MEM32(ebp + (-0x4)); /* 0x10085789: mov eax, dword ptr [ebp - 4] */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x14u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x14u; /* 0x1008578C: add esp, 0x14 */
    _flag_k = FK_ADD;
    esp = ebp; /* 0x1008578F: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x10085791: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x10085792: ret  */
    RECOMP_REGS_OUT();
}

void sub_10085793(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x10085793u);

L_10085793:
    PUSH32(esp, 0x14u); /* 0x10085793: push 0x14 */
    PUSH32(esp, 0x100858E8u); /* 0x10085795: push 0x100858e8 */
    RECOMP_CALL(sub_1000ED7E); /* 0x1008579A: call 0x1000ed7e */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    esi = 0; /* 0x1008579F: xor esi, esi */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x1C)) = esi; /* 0x100857A1: mov dword ptr [ebp - 0x1c], esi */
    RECOMP_CALL(sub_1001177D); /* 0x100857A4: call 0x1001177d */
    RECOMP_FLAGS_IN();
    eax = MEM32(eax); /* 0x100857A9: mov eax, dword ptr [eax] */
    MEM32(ebp + (-0x24)) = eax; /* 0x100857AB: mov dword ptr [ebp - 0x24], eax */
    PUSH32(esp, 2); /* 0x100857AE: push 2 */
    RECOMP_CALL(sub_100145F8); /* 0x100857B0: call 0x100145f8 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x100857B5: pop ecx */
    /* test eax, eax */ /* 0x100857B6: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_100857CB; /* 0x100857B8: jne 0x100857cb */
L_100857BA:
    eax = MEM32(ebp + 0x18); /* 0x100857BA: mov eax, dword ptr [ebp + 0x18] */
    MEM32(eax) = esi; /* 0x100857BD: mov dword ptr [eax], esi */
    RECOMP_CALL(sub_1001177D); /* 0x100857BF: call 0x1001177d */
    RECOMP_FLAGS_IN();
    eax = MEM32(eax); /* 0x100857C4: mov eax, dword ptr [eax] */
    goto L_100858DC; /* 0x100857C6: jmp 0x100858dc */
L_100857CB:
    PUSH32(esp, 2); /* 0x100857CB: push 2 */
    RECOMP_CALL(sub_1000EDD7); /* 0x100857CD: call 0x1000edd7 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x100857D2: pop ecx */
    MEM32(ebp + (-0x4)) = esi; /* 0x100857D3: mov dword ptr [ebp - 4], esi */
    ebx = MEM32(ebp + 0x10); /* 0x100857D6: mov ebx, dword ptr [ebp + 0x10] */
    /* test ebx, ebx */ /* 0x100857D9: test ebx, ebx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ebx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_100857E6; /* 0x100857DB: jne 0x100857e6 */
L_100857DD:
    edi = 0x100E3E00u; /* 0x100857DD: mov edi, 0x100e3e00 */
    PUSH32(esp, 0xEu); /* 0x100857E2: push 0xe */
    goto L_100857ED; /* 0x100857E4: jmp 0x100857ed */
L_100857E6:
    edi = 0x100E3E1Cu; /* 0x100857E6: mov edi, 0x100e3e1c */
    PUSH32(esp, 0x12u); /* 0x100857EB: push 0x12 */
L_100857ED:
    eax = POP32_VAL(esp); /* 0x100857ED: pop eax */
    MEM32(ebp + (-0x20)) = eax; /* 0x100857EE: mov dword ptr [ebp - 0x20], eax */
    /* cmp MEM16(edi), LO16(esi) */ /* 0x100857F1: cmp word ptr [edi], si */
    _flag_a = (uint32_t)(MEM16(edi)) << 16; _flag_b = (uint32_t)(LO16(esi)) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    if (CMP_NE(_flag_a, _flag_b)) goto L_100857FF; /* 0x100857F4: jne 0x100857ff */
L_100857F6:
    PUSH32(esp, ebx); /* 0x100857F6: push ebx */
    RECOMP_CALL(sub_100859D8); /* 0x100857F7: call 0x100859d8 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x100857FC: pop ecx */
    goto L_1008580C; /* 0x100857FD: jmp 0x1008580c */
L_100857FF:
    PUSH32(esp, MEM32(ebp + 0x14)); /* 0x100857FF: push dword ptr [ebp + 0x14] */
    PUSH32(esp, eax); /* 0x10085802: push eax */
L_10085803:
    PUSH32(esp, edi); /* 0x10085803: push edi */
    RECOMP_CALL(sub_10085940); /* 0x10085804: call 0x10085940 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x10085809: add esp, 0xc */
    _flag_k = FK_ADD;
L_1008580C:
    /* test eax, eax */ /* 0x1008580C: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1008583C; /* 0x1008580E: jne 0x1008583c */
L_10085810:
    PUSH32(esp, esi); /* 0x10085810: push esi */
    PUSH32(esp, edi); /* 0x10085811: push edi */
    RECOMP_CALL(sub_1001EE42); /* 0x10085812: call 0x1001ee42 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x10085817: pop ecx */
    ecx = POP32_VAL(esp); /* 0x10085818: pop ecx */
    /* test eax, eax */ /* 0x10085819: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_10085825; /* 0x1008581B: jne 0x10085825 */
L_1008581D:
    PUSH32(esp, MEM32(ebp + 0x14)); /* 0x1008581D: push dword ptr [ebp + 0x14] */
    PUSH32(esp, MEM32(ebp + (-0x20))); /* 0x10085820: push dword ptr [ebp - 0x20] */
    RECOMP_BACKEDGE();
    goto L_10085803; /* 0x10085823: jmp 0x10085803 */
L_10085825:
    /* cmp MEM32(ebp + 0x8), 0 */ /* 0x10085825: cmp dword ptr [ebp + 8], 0 */
    _flag_a = (uint32_t)(MEM32(ebp + 0x8)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_10085897; /* 0x10085829: jne 0x10085897 */
L_1008582B:
    RECOMP_CALL(sub_1000F720); /* 0x1008582B: call 0x1000f720 */
    RECOMP_FLAGS_IN();
    ebx = eax; /* 0x10085830: mov ebx, eax */
    /* test ebx, ebx */ /* 0x10085832: test ebx, ebx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ebx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_10085860; /* 0x10085834: jne 0x10085860 */
L_10085836:
    PUSH32(esp, 0xCu); /* 0x10085836: push 0xc */
    esi = POP32_VAL(esp); /* 0x10085838: pop esi */
    MEM32(ebp + (-0x1C)) = esi; /* 0x10085839: mov dword ptr [ebp - 0x1c], esi */
L_1008583C:
    MEM32(ebp + (-0x4)) = 0xFFFFFFFEu; /* 0x1008583C: mov dword ptr [ebp - 4], 0xfffffffe */
    edi = MEM32(ebp + (-0x24)); /* 0x10085843: mov edi, dword ptr [ebp - 0x24] */
    RECOMP_CALL(sub_100858CF); /* 0x10085846: call 0x100858cf */
    RECOMP_FLAGS_IN();
    ecx = MEM32(ebp + 0x18); /* 0x1008584B: mov ecx, dword ptr [ebp + 0x18] */
    eax = MEM32(ebp + 0x8); /* 0x1008584E: mov eax, dword ptr [ebp + 8] */
    MEM32(ecx) = eax; /* 0x10085851: mov dword ptr [ecx], eax */
    RECOMP_CALL(sub_1001177D); /* 0x10085853: call 0x1001177d */
    RECOMP_FLAGS_IN();
    /* test esi, esi */ /* 0x10085858: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_100858D8; /* 0x1008585A: je 0x100858d8 */
L_1008585C:
    MEM32(eax) = esi; /* 0x1008585C: mov dword ptr [eax], esi */
    goto L_100858DA; /* 0x1008585E: jmp 0x100858da */
L_10085860:
    /* cmp MEM32(ebx + 0x30), esi */ /* 0x10085860: cmp dword ptr [ebx + 0x30], esi */
    _flag_a = (uint32_t)(MEM32(ebx + 0x30)); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_10085877; /* 0x10085863: jne 0x10085877 */
L_10085865:
    PUSH32(esp, 2); /* 0x10085865: push 2 */
    PUSH32(esp, 0xEu); /* 0x10085867: push 0xe */
    RECOMP_CALL(sub_10011208); /* 0x10085869: call 0x10011208 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1008586E: pop ecx */
    ecx = POP32_VAL(esp); /* 0x1008586F: pop ecx */
    MEM32(ebx + 0x30) = eax; /* 0x10085870: mov dword ptr [ebx + 0x30], eax */
    /* test eax, eax */ /* 0x10085873: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_Z(_flag_a, _flag_b)) goto L_10085836; /* 0x10085875: je 0x10085836 */
L_10085877:
    eax = MEM32(ebx + 0x30); /* 0x10085877: mov eax, dword ptr [ebx + 0x30] */
    MEM32(ebp + 0x8) = eax; /* 0x1008587A: mov dword ptr [ebp + 8], eax */
    PUSH32(esp, edi); /* 0x1008587D: push edi */
    PUSH32(esp, 0xEu); /* 0x1008587E: push 0xe */
    PUSH32(esp, eax); /* 0x10085880: push eax */
L_10085881:
    RECOMP_CALL(sub_10011693); /* 0x10085881: call 0x10011693 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x10085886: add esp, 0xc */
    _flag_k = FK_ADD;
    /* test eax, eax */ /* 0x10085889: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_Z(_flag_a, _flag_b)) goto L_1008583C; /* 0x1008588B: je 0x1008583c */
L_1008588D:
    PUSH32(esp, esi); /* 0x1008588D: push esi */
    PUSH32(esp, esi); /* 0x1008588E: push esi */
    PUSH32(esp, esi); /* 0x1008588F: push esi */
    PUSH32(esp, esi); /* 0x10085890: push esi */
    PUSH32(esp, esi); /* 0x10085891: push esi */
    RECOMP_CALL(sub_100A469B); /* 0x10085892: call 0x100a469b */
    RECOMP_FLAGS_IN();
L_10085897:
    /* test ebx, ebx */ /* 0x10085897: test ebx, ebx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ebx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_100858C0; /* 0x10085899: je 0x100858c0 */
L_1008589B:
    PUSH32(esp, edi); /* 0x1008589B: push edi */
    RECOMP_CALL(sub_1000F1F3); /* 0x1008589C: call 0x1000f1f3 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x100858A1: pop ecx */
    /* cmp eax, MEM32(ebp + 0xC) */ /* 0x100858A2: cmp eax, dword ptr [ebp + 0xc] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(ebp + 0xC));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_B(_flag_a, _flag_b)) goto L_100858C0; /* 0x100858A5: jb 0x100858c0 */
L_100858A7:
    PUSH32(esp, 0x22u); /* 0x100858A7: push 0x22 */
    esi = POP32_VAL(esp); /* 0x100858A9: pop esi */
    MEM32(ebp + (-0x1C)) = esi; /* 0x100858AA: mov dword ptr [ebp - 0x1c], esi */
    /* cmp MEM32(ebp + 0xC), 0 */ /* 0x100858AD: cmp dword ptr [ebp + 0xc], 0 */
    _flag_a = (uint32_t)(MEM32(ebp + 0xC)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1008583C; /* 0x100858B1: je 0x1008583c */
L_100858B3:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x100858B3: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    eax = MEM32(ebp + 0x8); /* 0x100858B5: mov eax, dword ptr [ebp + 8] */
    MEM16(eax) = (uint16_t)(LO16(ecx)); /* 0x100858B8: mov word ptr [eax], cx */
    RECOMP_BACKEDGE();
    goto L_1008583C; /* 0x100858BB: jmp 0x1008583c */
L_100858C0:
    PUSH32(esp, edi); /* 0x100858C0: push edi */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x100858C1: push dword ptr [ebp + 0xc] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x100858C4: push dword ptr [ebp + 8] */
    RECOMP_BACKEDGE();
    goto L_10085881; /* 0x100858C7: jmp 0x10085881 */
L_100858D8:
    MEM32(eax) = edi; /* 0x100858D8: mov dword ptr [eax], edi */
L_100858DA:
    eax = esi; /* 0x100858DA: mov eax, esi */
L_100858DC:
    RECOMP_CALL(sub_1000EDC3); /* 0x100858DC: call 0x1000edc3 */
    RECOMP_FLAGS_IN();
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x100858E1: ret  */
    RECOMP_REGS_OUT();
}

void sub_100858CF(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x100858CFu);

L_100858CF:
    PUSH32(esp, 2); /* 0x100858CF: push 2 */
    RECOMP_CALL(sub_1000EDFC); /* 0x100858D1: call 0x1000edfc */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x100858D6: pop ecx */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x100858D7: ret  */
    RECOMP_REGS_OUT();
}

void sub_10085904(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x10085904u);

L_10085904:
    PUSH32(esp, ebp); /* 0x10085904: push ebp */
    ebp = esp; /* 0x10085905: mov ebp, esp */
    PUSH32(esp, ecx); /* 0x10085907: push ecx */
    /* cmp MEM32(ebp + 0x8), 0 */ /* 0x10085908: cmp dword ptr [ebp + 8], 0 */
    _flag_a = (uint32_t)(MEM32(ebp + 0x8)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_10085923; /* 0x1008590C: jne 0x10085923 */
L_1008590E:
    RECOMP_CALL(sub_1001177D); /* 0x1008590E: call 0x1001177d */
    RECOMP_FLAGS_IN();
    MEM32(eax) = 0x16u; /* 0x10085913: mov dword ptr [eax], 0x16 */
    RECOMP_CALL(sub_100A4670); /* 0x10085919: call 0x100a4670 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0x16u); /* 0x1008591E: push 0x16 */
    eax = POP32_VAL(esp); /* 0x10085920: pop eax */
    goto L_1008593C; /* 0x10085921: jmp 0x1008593c */
L_10085923:
    eax = ebp + (-0x4); /* 0x10085923: lea eax, [ebp - 4] */
    PUSH32(esp, eax); /* 0x10085926: push eax */
    PUSH32(esp, 0x7FFFFFFFu); /* 0x10085927: push 0x7fffffff */
    PUSH32(esp, 2); /* 0x1008592C: push 2 */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x1008592E: push dword ptr [ebp + 0xc] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x10085931: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_10085793); /* 0x10085934: call 0x10085793 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x14u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x14u; /* 0x10085939: add esp, 0x14 */
    _flag_k = FK_ADD;
L_1008593C:
    esp = ebp; /* 0x1008593C: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x1008593E: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1008593F: ret  */
    RECOMP_REGS_OUT();
}

void sub_10085940(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x10085940u);

L_10085940:
    PUSH32(esp, ebp); /* 0x10085940: push ebp */
    ebp = esp; /* 0x10085941: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x14u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x14u; /* 0x10085943: sub esp, 0x14 */
    _flag_k = FK_CMP;
    eax = MEM32(0x100DF7B8); /* 0x10085946: mov eax, dword ptr [0x100df7b8] */
    _flag_a = (uint32_t)((eax ^ ebp)); _flag_b = (uint32_t)((eax ^ ebp));
    eax = eax ^ ebp; /* 0x1008594B: xor eax, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x4)) = eax; /* 0x1008594D: mov dword ptr [ebp - 4], eax */
    PUSH32(esp, ebx); /* 0x10085950: push ebx */
    ebx = MEM32(ebp + 0x8); /* 0x10085951: mov ebx, dword ptr [ebp + 8] */
    PUSH32(esp, esi); /* 0x10085954: push esi */
    PUSH32(esp, edi); /* 0x10085955: push edi */
    PUSH32(esp, 0x2Eu); /* 0x10085956: push 0x2e */
    PUSH32(esp, ebx); /* 0x10085958: push ebx */
    RECOMP_CALL(sub_10011E16); /* 0x10085959: call 0x10011e16 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1008595E: pop ecx */
    ecx = POP32_VAL(esp); /* 0x1008595F: pop ecx */
    esi = eax + 0x2; /* 0x10085960: lea esi, [eax + 2] */
    /* cmp esi, ebx */ /* 0x10085963: cmp esi, ebx */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_B(_flag_a, _flag_b)) goto L_100859B2; /* 0x10085965: jb 0x100859b2 */
L_10085967:
    edi = esi; /* 0x10085967: mov edi, esi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    edi = edi - ebx; /* 0x10085969: sub edi, ebx */
    _flag_k = FK_CMP;
    ebx = MEM32(ebp + 0xC); /* 0x1008596B: mov ebx, dword ptr [ebp + 0xc] */
    if (1u) _cf = (((edi) >> 0) & 1u); /* 0x1008596E: sar edi, 1 */
    if (1u) { _flag_a = recomp_flags_pack(((uint32_t)((int32_t)edi >> 1u)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    edi = (uint32_t)((int32_t)edi >> 1u);
    /* cmp ebx, edi */ /* 0x10085970: cmp ebx, edi */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_100859B2; /* 0x10085972: jbe 0x100859b2 */
L_10085974:
    PUSH32(esp, 0x20u); /* 0x10085974: push 0x20 */
    PUSH32(esp, 0); /* 0x10085976: push 0 */
    PUSH32(esp, esi); /* 0x10085978: push esi */
    RECOMP_CALL(sub_1001E4FE); /* 0x10085979: call 0x1001e4fe */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x1008597E: add esp, 0xc */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x10085981: inc eax */
    _flag_k = FK_INC;
    /* cmp eax, MEM32(ebp + 0x10) */ /* 0x10085982: cmp eax, dword ptr [ebp + 0x10] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(ebp + 0x10));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_AE(_flag_a, _flag_b)) goto L_100859B7; /* 0x10085985: jae 0x100859b7 */
L_10085987:
    PUSH32(esp, 0x20u); /* 0x10085987: push 0x20 */
    PUSH32(esp, 8); /* 0x10085989: push 8 */
    ecx = ebp + (-0x14); /* 0x1008598B: lea ecx, [ebp - 0x14] */
    PUSH32(esp, ecx); /* 0x1008598E: push ecx */
    PUSH32(esp, eax); /* 0x1008598F: push eax */
    RECOMP_CALL(sub_1001F407); /* 0x10085990: call 0x1001f407 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x10u; /* 0x10085995: add esp, 0x10 */
    _flag_k = FK_ADD;
    /* test eax, eax */ /* 0x10085998: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_100859CB; /* 0x1008599A: jne 0x100859cb */
L_1008599C:
    eax = ebp + (-0x14); /* 0x1008599C: lea eax, [ebp - 0x14] */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ebx = ebx - edi; /* 0x1008599F: sub ebx, edi */
    _flag_k = FK_CMP;
    PUSH32(esp, eax); /* 0x100859A1: push eax */
    PUSH32(esp, ebx); /* 0x100859A2: push ebx */
    PUSH32(esp, esi); /* 0x100859A3: push esi */
    RECOMP_CALL(sub_10011693); /* 0x100859A4: call 0x10011693 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x100859A9: add esp, 0xc */
    _flag_k = FK_ADD;
    /* test eax, eax */ /* 0x100859AC: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_100859BA; /* 0x100859AE: je 0x100859ba */
L_100859B0:
    goto L_100859CB; /* 0x100859B0: jmp 0x100859cb */
L_100859B2:
    RECOMP_CALL(sub_100A4670); /* 0x100859B2: call 0x100a4670 */
    RECOMP_FLAGS_IN();
L_100859B7:
    _flag_a = (uint32_t)((eax | 0xFFFFFFFFu)); _flag_b = (uint32_t)((eax | 0xFFFFFFFFu));
    eax = eax | 0xFFFFFFFFu; /* 0x100859B7: or eax, 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
L_100859BA:
    ecx = MEM32(ebp + (-0x4)); /* 0x100859BA: mov ecx, dword ptr [ebp - 4] */
    edi = POP32_VAL(esp); /* 0x100859BD: pop edi */
    esi = POP32_VAL(esp); /* 0x100859BE: pop esi */
    _flag_a = (uint32_t)((ecx ^ ebp)); _flag_b = (uint32_t)((ecx ^ ebp));
    ecx = ecx ^ ebp; /* 0x100859BF: xor ecx, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    ebx = POP32_VAL(esp); /* 0x100859C1: pop ebx */
    RECOMP_CALL(sub_1000F7C6); /* 0x100859C2: call 0x1000f7c6 */
    RECOMP_FLAGS_IN();
    esp = ebp; /* 0x100859C7: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x100859C9: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x100859CA: ret  */
L_100859CB:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x100859CB: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, eax); /* 0x100859CD: push eax */
    PUSH32(esp, eax); /* 0x100859CE: push eax */
    PUSH32(esp, eax); /* 0x100859CF: push eax */
    PUSH32(esp, eax); /* 0x100859D0: push eax */
    PUSH32(esp, eax); /* 0x100859D1: push eax */
    RECOMP_CALL(sub_100A469B); /* 0x100859D2: call 0x100a469b */
    RECOMP_FLAGS_IN();
    void_lift_trap(0x100859D7u, "int3 ");
    { RECOMP_REGS_OUT(); return; } /* end of function */
    RECOMP_REGS_OUT();
}

void sub_100859D8(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x100859D8u);

L_100859D8:
    PUSH32(esp, ebp); /* 0x100859D8: push ebp */
    ebp = esp; /* 0x100859D9: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x20Cu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x20Cu; /* 0x100859DB: sub esp, 0x20c */
    _flag_k = FK_CMP;
    eax = MEM32(0x100DF7B8); /* 0x100859E1: mov eax, dword ptr [0x100df7b8] */
    _flag_a = (uint32_t)((eax ^ ebp)); _flag_b = (uint32_t)((eax ^ ebp));
    eax = eax ^ ebp; /* 0x100859E6: xor eax, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x4)) = eax; /* 0x100859E8: mov dword ptr [ebp - 4], eax */
    PUSH32(esp, ebx); /* 0x100859EB: push ebx */
    PUSH32(esp, esi); /* 0x100859EC: push esi */
    PUSH32(esp, edi); /* 0x100859ED: push edi */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x100859EE: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ebx = 0; /* 0x100859F0: xor ebx, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, 0x206u); /* 0x100859F2: push 0x206 */
    MEM16(ebp + (-0x20C)) = (uint16_t)(LO16(eax)); /* 0x100859F7: mov word ptr [ebp - 0x20c], ax */
    esi = ebx; /* 0x100859FE: mov esi, ebx */
    eax = ebp + (-0x20A); /* 0x10085A00: lea eax, [ebp - 0x20a] */
    PUSH32(esp, ebx); /* 0x10085A06: push ebx */
    PUSH32(esp, eax); /* 0x10085A07: push eax */
    RECOMP_CALL(sub_10011533); /* 0x10085A08: call 0x10011533 */
    RECOMP_FLAGS_IN();
    eax = MEM32(ebp + 0x8); /* 0x10085A0D: mov eax, dword ptr [ebp + 8] */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x10085A10: add esp, 0xc */
    _flag_k = FK_ADD;
    edi = ebx; /* 0x10085A13: mov edi, ebx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - ebx; /* 0x10085A15: sub eax, ebx */
    _flag_k = FK_CMP;
    if (/* sub result */ CMP_EQ(_flag_a, _flag_b)) goto L_10085A6E; /* 0x10085A17: je 0x10085a6e */
L_10085A19:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax - 1; /* 0x10085A19: dec eax */
    _flag_k = FK_DEC;
    if (/* dec result */ CMP_EQ(_flag_a, _flag_b)) goto L_10085A62; /* 0x10085A1A: je 0x10085a62 */
L_10085A1C:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax - 1; /* 0x10085A1C: dec eax */
    _flag_k = FK_DEC;
    if (/* dec result */ CMP_NE(_flag_a, _flag_b)) goto L_10085A76; /* 0x10085A1D: jne 0x10085a76 */
L_10085A1F:
    PUSH32(esp, 0x12u); /* 0x10085A1F: push 0x12 */
    esi = 0x100E3E1Cu; /* 0x10085A21: mov esi, 0x100e3e1c */
    edi = POP32_VAL(esp); /* 0x10085A26: pop edi */
L_10085A27:
    PUSH32(esp, 0x1006218Cu); /* 0x10085A27: push 0x1006218c */
    PUSH32(esp, edi); /* 0x10085A2C: push edi */
    PUSH32(esp, esi); /* 0x10085A2D: push esi */
    RECOMP_CALL(sub_10011693); /* 0x10085A2E: call 0x10011693 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x10085A33: add esp, 0xc */
    _flag_k = FK_ADD;
    /* test eax, eax */ /* 0x10085A36: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_10085B0E; /* 0x10085A38: jne 0x10085b0e */
L_10085A3E:
    edx = esi + 0x2; /* 0x10085A3E: lea edx, [esi + 2] */
L_10085A41:
    eax = (uint32_t)MEM16(edx + (-0x2)); /* 0x10085A41: movzx eax, word ptr [edx - 2] */
    PUSH32(esp, 0x5Cu); /* 0x10085A45: push 0x5c */
    ecx = POP32_VAL(esp); /* 0x10085A47: pop ecx */
    /* cmp LO16(eax), LO16(ecx) */ /* 0x10085A48: cmp ax, cx */
    _flag_a = (uint32_t)(LO16(eax)) << 16; _flag_b = (uint32_t)(LO16(ecx)) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_10085A58; /* 0x10085A4B: je 0x10085a58 */
L_10085A4D:
    /* cmp eax, 0x2Fu */ /* 0x10085A4D: cmp eax, 0x2f */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x2Fu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_10085A58; /* 0x10085A50: je 0x10085a58 */
L_10085A52:
    MEM16(edx) = (uint16_t)(LO16(ecx)); /* 0x10085A52: mov word ptr [edx], cx */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edx = edx + 2; /* 0x10085A55: add edx, 2 */
    _flag_k = FK_ADD;
L_10085A58:
    /* cmp MEM32(ebp + 0x8), 1 */ /* 0x10085A58: cmp dword ptr [ebp + 8], 1 */
    _flag_a = (uint32_t)(MEM32(ebp + 0x8)); _flag_b = (uint32_t)(1);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_10085AD2; /* 0x10085A5C: jne 0x10085ad2 */
L_10085A5E:
    PUSH32(esp, 0x74u); /* 0x10085A5E: push 0x74 */
    goto L_10085AD4; /* 0x10085A60: jmp 0x10085ad4 */
L_10085A62:
    esi = 0x100E3E40u; /* 0x10085A62: mov esi, 0x100e3e40 */
    edi = 0x110u; /* 0x10085A67: mov edi, 0x110 */
    goto L_10085A7C; /* 0x10085A6C: jmp 0x10085a7c */
L_10085A6E:
    PUSH32(esp, 0xEu); /* 0x10085A6E: push 0xe */
    esi = 0x100E3E00u; /* 0x10085A70: mov esi, 0x100e3e00 */
    edi = POP32_VAL(esp); /* 0x10085A75: pop edi */
L_10085A76:
    /* cmp MEM32(ebp + 0x8), 1 */ /* 0x10085A76: cmp dword ptr [ebp + 8], 1 */
    _flag_a = (uint32_t)(MEM32(ebp + 0x8)); _flag_b = (uint32_t)(1);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_NE(_flag_a, _flag_b)) goto L_10085A27; /* 0x10085A7A: jne 0x10085a27 */
L_10085A7C:
    eax = ebp + (-0x20C); /* 0x10085A7C: lea eax, [ebp - 0x20c] */
    PUSH32(esp, eax); /* 0x10085A82: push eax */
    PUSH32(esp, 0x104u); /* 0x10085A83: push 0x104 */
    RECOMP_ICALL(MEM32(0x100E5104)); /* 0x10085A88: call dword ptr [0x100e5104] */
    RECOMP_FLAGS_IN();
    ebx = eax; /* 0x10085A8E: mov ebx, eax */
    /* test ebx, ebx */ /* 0x10085A90: test ebx, ebx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ebx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_10085ABE; /* 0x10085A92: je 0x10085abe */
L_10085A94:
    /* cmp ebx, 0x104u */ /* 0x10085A94: cmp ebx, 0x104 */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(0x104u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_A(_flag_a, _flag_b)) goto L_10085ABE; /* 0x10085A9A: ja 0x10085abe */
L_10085A9C:
    eax = ebp + (-0x20C); /* 0x10085A9C: lea eax, [ebp - 0x20c] */
    PUSH32(esp, eax); /* 0x10085AA2: push eax */
    ecx = ebx + 0x1; /* 0x10085AA3: lea ecx, [ebx + 1] */
    PUSH32(esp, ecx); /* 0x10085AA6: push ecx */
    PUSH32(esp, esi); /* 0x10085AA7: push esi */
    RECOMP_CALL(sub_10011693); /* 0x10085AA8: call 0x10011693 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x10085AAD: add esp, 0xc */
    _flag_k = FK_ADD;
    /* test eax, eax */ /* 0x10085AB0: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_10085B15; /* 0x10085AB2: jne 0x10085b15 */
L_10085AB4:
    edx = ebx + (-0x1); /* 0x10085AB4: lea edx, [ebx - 1] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ebx = 0; /* 0x10085AB7: xor ebx, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
    edx = esi + edx * 2; /* 0x10085AB9: lea edx, [esi + edx*2] */
    RECOMP_BACKEDGE();
    goto L_10085A41; /* 0x10085ABC: jmp 0x10085a41 */
L_10085ABE:
    _flag_a = (uint32_t)((eax | 0xFFFFFFFFu)); _flag_b = (uint32_t)((eax | 0xFFFFFFFFu));
    eax = eax | 0xFFFFFFFFu; /* 0x10085ABE: or eax, 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
L_10085AC1:
    ecx = MEM32(ebp + (-0x4)); /* 0x10085AC1: mov ecx, dword ptr [ebp - 4] */
    edi = POP32_VAL(esp); /* 0x10085AC4: pop edi */
    esi = POP32_VAL(esp); /* 0x10085AC5: pop esi */
    _flag_a = (uint32_t)((ecx ^ ebp)); _flag_b = (uint32_t)((ecx ^ ebp));
    ecx = ecx ^ ebp; /* 0x10085AC6: xor ecx, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    ebx = POP32_VAL(esp); /* 0x10085AC8: pop ebx */
    RECOMP_CALL(sub_1000F7C6); /* 0x10085AC9: call 0x1000f7c6 */
    RECOMP_FLAGS_IN();
    esp = ebp; /* 0x10085ACE: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x10085AD0: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x10085AD1: ret  */
L_10085AD2:
    PUSH32(esp, 0x73u); /* 0x10085AD2: push 0x73 */
L_10085AD4:
    eax = POP32_VAL(esp); /* 0x10085AD4: pop eax */
    MEM16(edx) = (uint16_t)(LO16(eax)); /* 0x10085AD5: mov word ptr [edx], ax */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edx = edx + 2; /* 0x10085AD8: add edx, 2 */
    _flag_k = FK_ADD;
    ecx = edx; /* 0x10085ADB: mov ecx, edx */
    eax = edi; /* 0x10085ADD: mov eax, edi */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ecx = ecx - esi; /* 0x10085ADF: sub ecx, esi */
    _flag_k = FK_CMP;
    if (1u) _cf = (((ecx) >> 0) & 1u); /* 0x10085AE1: sar ecx, 1 */
    if (1u) { _flag_a = recomp_flags_pack(((uint32_t)((int32_t)ecx >> 1u)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ecx = (uint32_t)((int32_t)ecx >> 1u);
    PUSH32(esp, 0x20u); /* 0x10085AE3: push 0x20 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - ecx; /* 0x10085AE5: sub eax, ecx */
    _flag_k = FK_CMP;
    PUSH32(esp, eax); /* 0x10085AE7: push eax */
    PUSH32(esp, edx); /* 0x10085AE8: push edx */
    RECOMP_CALL(sub_1007E384); /* 0x10085AE9: call 0x1007e384 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, eax); /* 0x10085AEE: push eax */
    RECOMP_CALL(sub_1001F407); /* 0x10085AEF: call 0x1001f407 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x10u; /* 0x10085AF4: add esp, 0x10 */
    _flag_k = FK_ADD;
    /* test eax, eax */ /* 0x10085AF7: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_10085B0E; /* 0x10085AF9: jne 0x10085b0e */
L_10085AFB:
    PUSH32(esp, 0x100282D8u); /* 0x10085AFB: push 0x100282d8 */
    PUSH32(esp, edi); /* 0x10085B00: push edi */
    PUSH32(esp, esi); /* 0x10085B01: push esi */
    RECOMP_CALL(sub_1001212A); /* 0x10085B02: call 0x1001212a */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x10085B07: add esp, 0xc */
    _flag_k = FK_ADD;
    /* test eax, eax */ /* 0x10085B0A: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_Z(_flag_a, _flag_b)) goto L_10085AC1; /* 0x10085B0C: je 0x10085ac1 */
L_10085B0E:
    PUSH32(esp, ebx); /* 0x10085B0E: push ebx */
    PUSH32(esp, ebx); /* 0x10085B0F: push ebx */
    PUSH32(esp, ebx); /* 0x10085B10: push ebx */
    PUSH32(esp, ebx); /* 0x10085B11: push ebx */
    PUSH32(esp, ebx); /* 0x10085B12: push ebx */
    goto L_10085B1C; /* 0x10085B13: jmp 0x10085b1c */
L_10085B15:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x10085B15: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, eax); /* 0x10085B17: push eax */
    PUSH32(esp, eax); /* 0x10085B18: push eax */
    PUSH32(esp, eax); /* 0x10085B19: push eax */
    PUSH32(esp, eax); /* 0x10085B1A: push eax */
    PUSH32(esp, eax); /* 0x10085B1B: push eax */
L_10085B1C:
    RECOMP_CALL(sub_100A469B); /* 0x10085B1C: call 0x100a469b */
    RECOMP_FLAGS_IN();
    void_lift_trap(0x10085B21u, "int3 ");
    { RECOMP_REGS_OUT(); return; } /* end of function */
    RECOMP_REGS_OUT();
}

void sub_10085B22(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x10085B22u);

L_10085B22:
    PUSH32(esp, 0xCu); /* 0x10085B22: push 0xc */
    PUSH32(esp, 0x10085BF8u); /* 0x10085B24: push 0x10085bf8 */
    RECOMP_CALL(sub_1000ED7E); /* 0x10085B29: call 0x1000ed7e */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)((esi | 0xFFFFFFFFu)); _flag_b = (uint32_t)((esi | 0xFFFFFFFFu));
    esi = esi | 0xFFFFFFFFu; /* 0x10085B2E: or esi, 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x1C)) = esi; /* 0x10085B31: mov dword ptr [ebp - 0x1c], esi */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x10085B34: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    ebx = MEM32(ebp + 0x8); /* 0x10085B36: mov ebx, dword ptr [ebp + 8] */
    /* test ebx, ebx */ /* 0x10085B39: test ebx, ebx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ebx);
    _cf = 0;
    _flag_k = FK_TEST;
    SET_LO8(eax, (TEST_NZ(_flag_a, _flag_b)) ? 1 : 0); /* 0x10085B3B: setne al */
    /* test eax, eax */ /* 0x10085B3E: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_10085B5A; /* 0x10085B40: jne 0x10085b5a */
L_10085B42:
    RECOMP_CALL(sub_1001177D); /* 0x10085B42: call 0x1001177d */
    RECOMP_FLAGS_IN();
    MEM32(eax) = 0x16u; /* 0x10085B47: mov dword ptr [eax], 0x16 */
    RECOMP_CALL(sub_100A4670); /* 0x10085B4D: call 0x100a4670 */
    RECOMP_FLAGS_IN();
L_10085B52:
    eax = esi; /* 0x10085B52: mov eax, esi */
    RECOMP_CALL(sub_1000EDC3); /* 0x10085B54: call 0x1000edc3 */
    RECOMP_FLAGS_IN();
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x10085B59: ret  */
L_10085B5A:
    PUSH32(esp, 9); /* 0x10085B5A: push 9 */
    RECOMP_CALL(sub_100145F8); /* 0x10085B5C: call 0x100145f8 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x10085B61: pop ecx */
    /* test eax, eax */ /* 0x10085B62: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_Z(_flag_a, _flag_b)) goto L_10085B52; /* 0x10085B64: je 0x10085b52 */
L_10085B66:
    PUSH32(esp, 9); /* 0x10085B66: push 9 */
    RECOMP_CALL(sub_1000EDD7); /* 0x10085B68: call 0x1000edd7 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x10085B6D: pop ecx */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x4))); _flag_b = (uint32_t)(0);
    MEM32(ebp + (-0x4)) = MEM32(ebp + (-0x4)) & 0; /* 0x10085B6E: and dword ptr [ebp - 4], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, ebx); /* 0x10085B72: push ebx */
    RECOMP_CALL(sub_1008613C); /* 0x10085B73: call 0x1008613c */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x10085B78: pop ecx */
    edi = eax; /* 0x10085B79: mov edi, eax */
    /* test edi, edi */ /* 0x10085B7B: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_10085B8C; /* 0x10085B7D: jne 0x10085b8c */
L_10085B7F:
    RECOMP_CALL(sub_1001177D); /* 0x10085B7F: call 0x1001177d */
    RECOMP_FLAGS_IN();
    MEM32(eax) = 9; /* 0x10085B84: mov dword ptr [eax], 9 */
    goto L_10085BD4; /* 0x10085B8A: jmp 0x10085bd4 */
L_10085B8C:
    PUSH32(esp, ebx); /* 0x10085B8C: push ebx */
    RECOMP_CALL(sub_10014F9E); /* 0x10085B8D: call 0x10014f9e */
    RECOMP_FLAGS_IN();
    RECOMP_CALL(sub_1001177D); /* 0x10085B92: call 0x1001177d */
    RECOMP_FLAGS_IN();
    ebx = MEM32(eax); /* 0x10085B97: mov ebx, dword ptr [eax] */
    RECOMP_CALL(sub_1001177D); /* 0x10085B99: call 0x1001177d */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(MEM32(eax)); _flag_b = (uint32_t)(0);
    MEM32(eax) = MEM32(eax) & 0; /* 0x10085B9E: and dword ptr [eax], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, 1); /* 0x10085BA1: push 1 */
    PUSH32(esp, MEM32(edi + 0x4)); /* 0x10085BA3: push dword ptr [edi + 4] */
    eax = ebp + 0x8; /* 0x10085BA6: lea eax, [ebp + 8] */
    PUSH32(esp, eax); /* 0x10085BA9: push eax */
    RECOMP_CALL(sub_100809BB); /* 0x10085BAA: call 0x100809bb */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x10u; /* 0x10085BAF: add esp, 0x10 */
    _flag_k = FK_ADD;
    /* cmp eax, esi */ /* 0x10085BB2: cmp eax, esi */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_10085BC0; /* 0x10085BB4: jne 0x10085bc0 */
L_10085BB6:
    RECOMP_CALL(sub_1001177D); /* 0x10085BB6: call 0x1001177d */
    RECOMP_FLAGS_IN();
    /* cmp MEM32(eax), 4 */ /* 0x10085BBB: cmp dword ptr [eax], 4 */
    _flag_a = (uint32_t)(MEM32(eax)); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_10085BC6; /* 0x10085BBE: jne 0x10085bc6 */
L_10085BC0:
    esi = MEM32(ebp + 0x8); /* 0x10085BC0: mov esi, dword ptr [ebp + 8] */
    MEM32(ebp + (-0x1C)) = esi; /* 0x10085BC3: mov dword ptr [ebp - 0x1c], esi */
L_10085BC6:
    RECOMP_CALL(sub_1001177D); /* 0x10085BC6: call 0x1001177d */
    RECOMP_FLAGS_IN();
    MEM32(eax) = ebx; /* 0x10085BCB: mov dword ptr [eax], ebx */
    _flag_a = (uint32_t)(MEM32(edi)); _flag_b = (uint32_t)(0);
    MEM32(edi) = MEM32(edi) & 0; /* 0x10085BCD: and dword ptr [edi], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(MEM32(edi + 0x4)); _flag_b = (uint32_t)(0);
    MEM32(edi + 0x4) = MEM32(edi + 0x4) & 0; /* 0x10085BD0: and dword ptr [edi + 4], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
L_10085BD4:
    MEM32(ebp + (-0x4)) = 0xFFFFFFFEu; /* 0x10085BD4: mov dword ptr [ebp - 4], 0xfffffffe */
    RECOMP_CALL(sub_10085BE8); /* 0x10085BDB: call 0x10085be8 */
    RECOMP_FLAGS_IN();
    RECOMP_BACKEDGE();
    goto L_10085B52; /* 0x10085BE0: jmp 0x10085b52 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    RECOMP_REGS_OUT();
}

void sub_10085BE8(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x10085BE8u);

L_10085BE8:
    PUSH32(esp, 9); /* 0x10085BE8: push 9 */
    RECOMP_CALL(sub_1000EDFC); /* 0x10085BEA: call 0x1000edfc */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x10085BEF: pop ecx */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x10085BF0: ret  */
    RECOMP_REGS_OUT();
}

void sub_10085C14(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x10085C14u);

L_10085C14:
    PUSH32(esp, 0x9Cu); /* 0x10085C14: push 0x9c */
    PUSH32(esp, 0x10086120u); /* 0x10085C19: push 0x10086120 */
    RECOMP_CALL(sub_1000ED7E); /* 0x10085C1E: call 0x1000ed7e */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x10085C23: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    edx = eax; /* 0x10085C25: mov edx, eax */
    MEM32(ebp + (-0x38)) = eax; /* 0x10085C27: mov dword ptr [ebp - 0x38], eax */
    ebx = eax; /* 0x10085C2A: mov ebx, eax */
    MEM32(ebp + (-0x3C)) = ebx; /* 0x10085C2C: mov dword ptr [ebp - 0x3c], ebx */
    MEM32(ebp + (-0x34)) = eax; /* 0x10085C2F: mov dword ptr [ebp - 0x34], eax */
    MEM16(ebp + (-0x20)) = (uint16_t)(LO16(eax)); /* 0x10085C32: mov word ptr [ebp - 0x20], ax */
    MEM8(ebp + (-0x1E)) = (uint8_t)(LO8(eax)); /* 0x10085C36: mov byte ptr [ebp - 0x1e], al */
    MEM32(ebp + (-0x48)) = eax; /* 0x10085C39: mov dword ptr [ebp - 0x48], eax */
    /* cmp MEM32(ebp + 0x8), eax */ /* 0x10085C3C: cmp dword ptr [ebp + 8], eax */
    _flag_a = (uint32_t)(MEM32(ebp + 0x8)); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    SET_LO8(eax, (CMP_NE(_flag_a, _flag_b)) ? 1 : 0); /* 0x10085C3F: setne al */
    /* test eax, eax */ /* 0x10085C42: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_10085C5D; /* 0x10085C44: jne 0x10085c5d */
L_10085C46:
    RECOMP_CALL(sub_1001177D); /* 0x10085C46: call 0x1001177d */
    RECOMP_FLAGS_IN();
    MEM32(eax) = 0x16u; /* 0x10085C4B: mov dword ptr [eax], 0x16 */
    RECOMP_CALL(sub_100A4670); /* 0x10085C51: call 0x100a4670 */
    RECOMP_FLAGS_IN();
L_10085C56:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x10085C56: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_10086105; /* 0x10085C58: jmp 0x10086105 */
L_10085C5D:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x10085C5D: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = MEM32(ebp + 0xC); /* 0x10085C5F: mov ecx, dword ptr [ebp + 0xc] */
    /* test ecx, ecx */ /* 0x10085C62: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    SET_LO8(eax, (TEST_NZ(_flag_a, _flag_b)) ? 1 : 0); /* 0x10085C64: setne al */
    /* test eax, eax */ /* 0x10085C67: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_10085C6E; /* 0x10085C69: jne 0x10085c6e */
L_10085C6B:
    RECOMP_BACKEDGE();
    goto L_10085C46; /* 0x10085C6B: jmp 0x10085c46 */
L_10085C6D:
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx + 1; /* 0x10085C6D: inc ecx */
    _flag_k = FK_INC;
L_10085C6E:
    /* cmp MEM8(ecx), 0x20u */ /* 0x10085C6E: cmp byte ptr [ecx], 0x20 */
    _flag_a = (uint32_t)(MEM8(ecx)) << 24; _flag_b = (uint32_t)(0x20u) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    RECOMP_BACKEDGE();
    if (CMP_EQ(_flag_a, _flag_b)) goto L_10085C6D; /* 0x10085C71: je 0x10085c6d */
L_10085C73:
    SET_LO8(eax, MEM8(ecx)); /* 0x10085C73: mov al, byte ptr [ecx] */
    /* cmp LO8(eax), 0x77u */ /* 0x10085C75: cmp al, 0x77 */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(0x77u) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_10085C7D; /* 0x10085C77: je 0x10085c7d */
L_10085C79:
    /* cmp LO8(eax), 0x72u */ /* 0x10085C79: cmp al, 0x72 */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(0x72u) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    RECOMP_BACKEDGE();
    if (CMP_NE(_flag_a, _flag_b)) goto L_10085C46; /* 0x10085C7B: jne 0x10085c46 */
L_10085C7D:
    MEM8(ebp + (-0x20)) = (uint8_t)(LO8(eax)); /* 0x10085C7D: mov byte ptr [ebp - 0x20], al */
L_10085C80:
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx + 1; /* 0x10085C80: inc ecx */
    _flag_k = FK_INC;
    /* cmp MEM8(ecx), 0x20u */ /* 0x10085C81: cmp byte ptr [ecx], 0x20 */
    _flag_a = (uint32_t)(MEM8(ecx)) << 24; _flag_b = (uint32_t)(0x20u) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    RECOMP_BACKEDGE();
    if (CMP_EQ(_flag_a, _flag_b)) goto L_10085C80; /* 0x10085C84: je 0x10085c80 */
L_10085C86:
    SET_LO8(eax, MEM8(ecx)); /* 0x10085C86: mov al, byte ptr [ecx] */
    /* test LO8(eax), LO8(eax) */ /* 0x10085C88: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_10085C94; /* 0x10085C8A: je 0x10085c94 */
L_10085C8C:
    /* cmp LO8(eax), 0x74u */ /* 0x10085C8C: cmp al, 0x74 */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(0x74u) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_10085C94; /* 0x10085C8E: je 0x10085c94 */
L_10085C90:
    /* cmp LO8(eax), 0x62u */ /* 0x10085C90: cmp al, 0x62 */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(0x62u) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    RECOMP_BACKEDGE();
    if (CMP_NE(_flag_a, _flag_b)) goto L_10085C46; /* 0x10085C92: jne 0x10085c46 */
L_10085C94:
    MEM8(ebp + (-0x1F)) = (uint8_t)(LO8(eax)); /* 0x10085C94: mov byte ptr [ebp - 0x1f], al */
    /* cmp LO8(eax), 0x74u */ /* 0x10085C97: cmp al, 0x74 */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(0x74u) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_10085CA2; /* 0x10085C99: jne 0x10085ca2 */
L_10085C9B:
    edx = 0x4000u; /* 0x10085C9B: mov edx, 0x4000 */
    goto L_10085CAB; /* 0x10085CA0: jmp 0x10085cab */
L_10085CA2:
    /* cmp LO8(eax), 0x62u */ /* 0x10085CA2: cmp al, 0x62 */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(0x62u) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_10085CAB; /* 0x10085CA4: jne 0x10085cab */
L_10085CA6:
    edx = 0x8000u; /* 0x10085CA6: mov edx, 0x8000 */
L_10085CAB:
    _flag_a = (uint32_t)((edx | 0x80u)); _flag_b = (uint32_t)((edx | 0x80u));
    edx = edx | 0x80u; /* 0x10085CAB: or edx, 0x80 */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, edx); /* 0x10085CB1: push edx */
    PUSH32(esp, 0x400u); /* 0x10085CB2: push 0x400 */
    eax = ebp + (-0x44); /* 0x10085CB7: lea eax, [ebp - 0x44] */
    PUSH32(esp, eax); /* 0x10085CBA: push eax */
    RECOMP_CALL(sub_100A1D74); /* 0x10085CBB: call 0x100a1d74 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x10085CC0: add esp, 0xc */
    _flag_k = FK_ADD;
    /* cmp eax, 0xFFFFFFFFu */ /* 0x10085CC3: cmp eax, -1 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xFFFFFFFFu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_10086103; /* 0x10085CC6: je 0x10086103 */
L_10085CCC:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edi = 0; /* 0x10085CCC: xor edi, edi */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp MEM8(ebp + (-0x20)), 0x77u */ /* 0x10085CCE: cmp byte ptr [ebp - 0x20], 0x77 */
    _flag_a = (uint32_t)(MEM8(ebp + (-0x20))) << 24; _flag_b = (uint32_t)(0x77u) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_10085CDF; /* 0x10085CD2: jne 0x10085cdf */
L_10085CD4:
    _flag_a = (uint32_t)(MEM32(ebp + (-0x1C))); _flag_b = (uint32_t)(ebx);
    MEM32(ebp + (-0x1C)) = MEM32(ebp + (-0x1C)) & ebx; /* 0x10085CD4: and dword ptr [ebp - 0x1c], ebx */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    esi = 0; /* 0x10085CD7: xor esi, esi */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(1);
    edi = edi + 1; /* 0x10085CD9: inc edi */
    _flag_k = FK_INC;
    MEM32(ebp + (-0x2C)) = edi; /* 0x10085CDA: mov dword ptr [ebp - 0x2c], edi */
    goto L_10085CE8; /* 0x10085CDD: jmp 0x10085ce8 */
L_10085CDF:
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(1);
    edi = edi + 1; /* 0x10085CDF: inc edi */
    _flag_k = FK_INC;
    MEM32(ebp + (-0x1C)) = edi; /* 0x10085CE0: mov dword ptr [ebp - 0x1c], edi */
    esi = edi; /* 0x10085CE3: mov esi, edi */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x2C))); _flag_b = (uint32_t)(ebx);
    MEM32(ebp + (-0x2C)) = MEM32(ebp + (-0x2C)) & ebx; /* 0x10085CE5: and dword ptr [ebp - 0x2c], ebx */
    _cf = 0;
    _flag_k = FK_TEST;
L_10085CE8:
    MEM32(ebp + (-0x30)) = esi; /* 0x10085CE8: mov dword ptr [ebp - 0x30], esi */
    PUSH32(esp, 9); /* 0x10085CEB: push 9 */
    RECOMP_CALL(sub_100145F8); /* 0x10085CED: call 0x100145f8 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x10085CF2: pop ecx */
    /* test eax, eax */ /* 0x10085CF3: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_10085D0E; /* 0x10085CF5: jne 0x10085d0e */
L_10085CF7:
    PUSH32(esp, MEM32(ebp + (-0x44))); /* 0x10085CF7: push dword ptr [ebp - 0x44] */
    RECOMP_CALL(sub_10014EA2); /* 0x10085CFA: call 0x10014ea2 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, MEM32(ebp + (-0x40))); /* 0x10085CFF: push dword ptr [ebp - 0x40] */
    RECOMP_CALL(sub_10014EA2); /* 0x10085D02: call 0x10014ea2 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x10085D07: pop ecx */
    ecx = POP32_VAL(esp); /* 0x10085D08: pop ecx */
    RECOMP_BACKEDGE();
    goto L_10085C56; /* 0x10085D09: jmp 0x10085c56 */
L_10085D0E:
    PUSH32(esp, 9); /* 0x10085D0E: push 9 */
    RECOMP_CALL(sub_1000EDD7); /* 0x10085D10: call 0x1000edd7 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x10085D15: pop ecx */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x4))); _flag_b = (uint32_t)(ebx);
    MEM32(ebp + (-0x4)) = MEM32(ebp + (-0x4)) & ebx; /* 0x10085D16: and dword ptr [ebp - 4], ebx */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x4C)) = edi; /* 0x10085D19: mov dword ptr [ebp - 0x4c], edi */
    MEM32(ebp + (-0x50)) = edi; /* 0x10085D1C: mov dword ptr [ebp - 0x50], edi */
    RECOMP_ICALL(MEM32(0x100E510C)); /* 0x10085D1F: call dword ptr [0x100e510c] */
    RECOMP_FLAGS_IN();
    edx = eax; /* 0x10085D25: mov edx, eax */
    ecx = MEM32(ebp + esi * 4 + (-0x44)); /* 0x10085D27: mov ecx, dword ptr [ebp + esi*4 - 0x44] */
    PUSH32(esp, 2); /* 0x10085D2B: push 2 */
    PUSH32(esp, edi); /* 0x10085D2D: push edi */
    PUSH32(esp, 0); /* 0x10085D2E: push 0 */
    eax = ebp + (-0x38); /* 0x10085D30: lea eax, [ebp - 0x38] */
    PUSH32(esp, eax); /* 0x10085D33: push eax */
    PUSH32(esp, edx); /* 0x10085D34: push edx */
    eax = ecx; /* 0x10085D35: mov eax, ecx */
    if (5u) _cf = (((eax) >> 4) & 1u); /* 0x10085D37: sar eax, 5 */
    if (5u) { _flag_a = recomp_flags_pack(((uint32_t)((int32_t)eax >> 5u)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = (uint32_t)((int32_t)eax >> 5u);
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x1Fu);
    ecx = ecx & 0x1Fu; /* 0x10085D3A: and ecx, 0x1f */
    _cf = 0;
    _flag_k = FK_TEST;
    if (6u) _cf = (((ecx) >> 26) & 1u); /* 0x10085D3D: shl ecx, 6 */
    if (6u) { _flag_a = recomp_flags_pack((ecx << 6u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ecx = ecx << 6u; /* 0x10085D3D: shl ecx, 6 */
    eax = MEM32(eax * 4 + 0x100DF640); /* 0x10085D40: mov eax, dword ptr [eax*4 + 0x100df640] */
    PUSH32(esp, MEM32(ecx + eax)); /* 0x10085D47: push dword ptr [ecx + eax] */
    PUSH32(esp, edx); /* 0x10085D4A: push edx */
    RECOMP_ICALL(MEM32(0x100E5108)); /* 0x10085D4B: call dword ptr [0x100e5108] */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x10085D51: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_100860D2; /* 0x10085D53: je 0x100860d2 */
L_10085D59:
    PUSH32(esp, MEM32(ebp + esi * 4 + (-0x44))); /* 0x10085D59: push dword ptr [ebp + esi*4 - 0x44] */
    RECOMP_CALL(sub_10014EA2); /* 0x10085D5D: call 0x10014ea2 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(MEM32(ebp + esi * 4 + (-0x50))); _flag_b = (uint32_t)(0);
    MEM32(ebp + esi * 4 + (-0x50)) = MEM32(ebp + esi * 4 + (-0x50)) & 0; /* 0x10085D62: and dword ptr [ebp + esi*4 - 0x50], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    eax = ebp + (-0x20); /* 0x10085D67: lea eax, [ebp - 0x20] */
    PUSH32(esp, eax); /* 0x10085D6A: push eax */
    eax = MEM32(ebp + (-0x2C)); /* 0x10085D6B: mov eax, dword ptr [ebp - 0x2c] */
    PUSH32(esp, MEM32(ebp + eax * 4 + (-0x44))); /* 0x10085D6E: push dword ptr [ebp + eax*4 - 0x44] */
    RECOMP_CALL(sub_100162EA); /* 0x10085D72: call 0x100162ea */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x10085D77: add esp, 0xc */
    _flag_k = FK_ADD;
    ebx = eax; /* 0x10085D7A: mov ebx, eax */
    MEM32(ebp + (-0x3C)) = ebx; /* 0x10085D7C: mov dword ptr [ebp - 0x3c], ebx */
    /* test ebx, ebx */ /* 0x10085D7F: test ebx, ebx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ebx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_100860D2; /* 0x10085D81: je 0x100860d2 */
L_10085D87:
    PUSH32(esp, 0); /* 0x10085D87: push 0 */
    RECOMP_CALL(sub_1008613C); /* 0x10085D89: call 0x1008613c */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x10085D8E: pop ecx */
    MEM32(ebp + (-0x54)) = eax; /* 0x10085D8F: mov dword ptr [ebp - 0x54], eax */
    /* test eax, eax */ /* 0x10085D92: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_100860BC; /* 0x10085D94: je 0x100860bc */
L_10085D9A:
    PUSH32(esp, 0x10062168u); /* 0x10085D9A: push 0x10062168 */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    esi = 0; /* 0x10085D9F: xor esi, esi */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, esi); /* 0x10085DA1: push esi */
    eax = ebp + (-0x34); /* 0x10085DA2: lea eax, [ebp - 0x34] */
    PUSH32(esp, eax); /* 0x10085DA5: push eax */
    RECOMP_CALL(sub_100A5072); /* 0x10085DA6: call 0x100a5072 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x10085DAB: add esp, 0xc */
    _flag_k = FK_ADD;
    /* test eax, eax */ /* 0x10085DAE: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_10085DC5; /* 0x10085DB0: je 0x10085dc5 */
L_10085DB2:
    /* cmp eax, 0x16u */ /* 0x10085DB2: cmp eax, 0x16 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x16u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_10085DC1; /* 0x10085DB5: jne 0x10085dc1 */
L_10085DB7:
    PUSH32(esp, esi); /* 0x10085DB7: push esi */
    PUSH32(esp, esi); /* 0x10085DB8: push esi */
    PUSH32(esp, esi); /* 0x10085DB9: push esi */
    PUSH32(esp, esi); /* 0x10085DBA: push esi */
    PUSH32(esp, esi); /* 0x10085DBB: push esi */
L_10085DBC:
    RECOMP_CALL(sub_100A469B); /* 0x10085DBC: call 0x100a469b */
    RECOMP_FLAGS_IN();
L_10085DC1:
    /* test eax, eax */ /* 0x10085DC1: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_10085DCF; /* 0x10085DC3: jne 0x10085dcf */
L_10085DC5:
    esi = MEM32(ebp + (-0x34)); /* 0x10085DC5: mov esi, dword ptr [ebp - 0x34] */
    MEM32(ebp + (-0x24)) = esi; /* 0x10085DC8: mov dword ptr [ebp - 0x24], esi */
    /* test esi, esi */ /* 0x10085DCB: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_10085DD7; /* 0x10085DCD: jne 0x10085dd7 */
L_10085DCF:
    esi = 0x10062170u; /* 0x10085DCF: mov esi, 0x10062170 */
    MEM32(ebp + (-0x24)) = esi; /* 0x10085DD4: mov dword ptr [ebp - 0x24], esi */
L_10085DD7:
    PUSH32(esp, 0x44u); /* 0x10085DD7: push 0x44 */
    esi = POP32_VAL(esp); /* 0x10085DD9: pop esi */
    PUSH32(esp, esi); /* 0x10085DDA: push esi */
    PUSH32(esp, 0); /* 0x10085DDB: push 0 */
    eax = ebp + (-0xAC); /* 0x10085DDD: lea eax, [ebp - 0xac] */
    PUSH32(esp, eax); /* 0x10085DE3: push eax */
    RECOMP_CALL(sub_10011533); /* 0x10085DE4: call 0x10011533 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x10085DE9: add esp, 0xc */
    _flag_k = FK_ADD;
    MEM32(ebp + (-0xAC)) = esi; /* 0x10085DEC: mov dword ptr [ebp - 0xac], esi */
    MEM32(ebp + (-0x80)) = 0x100u; /* 0x10085DF2: mov dword ptr [ebp - 0x80], 0x100 */
    edx = MEM32(ebp + (-0x1C)); /* 0x10085DF9: mov edx, dword ptr [ebp - 0x1c] */
    ecx = MEM32(0x100DF640); /* 0x10085DFC: mov ecx, dword ptr [0x100df640] */
    /* test edx, edx */ /* 0x10085E02: test edx, edx */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(edx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_10085E0E; /* 0x10085E04: jne 0x10085e0e */
L_10085E06:
    eax = MEM32(ebp + (-0x38)); /* 0x10085E06: mov eax, dword ptr [ebp - 0x38] */
    MEM32(ebp + (-0x1C)) = eax; /* 0x10085E09: mov dword ptr [ebp - 0x1c], eax */
    goto L_10085E16; /* 0x10085E0C: jmp 0x10085e16 */
L_10085E0E:
    eax = MEM32(ecx); /* 0x10085E0E: mov eax, dword ptr [ecx] */
    MEM32(ebp + (-0x1C)) = eax; /* 0x10085E10: mov dword ptr [ebp - 0x1c], eax */
    eax = MEM32(ebp + (-0x38)); /* 0x10085E13: mov eax, dword ptr [ebp - 0x38] */
L_10085E16:
    esi = MEM32(ebp + (-0x1C)); /* 0x10085E16: mov esi, dword ptr [ebp - 0x1c] */
    MEM32(ebp + (-0x74)) = esi; /* 0x10085E19: mov dword ptr [ebp - 0x74], esi */
    /* cmp edx, edi */ /* 0x10085E1C: cmp edx, edi */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_10085E23; /* 0x10085E1E: je 0x10085e23 */
L_10085E20:
    eax = MEM32(ecx + 0x40); /* 0x10085E20: mov eax, dword ptr [ecx + 0x40] */
L_10085E23:
    MEM32(ebp + (-0x70)) = eax; /* 0x10085E23: mov dword ptr [ebp - 0x70], eax */
    eax = MEM32(ecx + 0x80); /* 0x10085E26: mov eax, dword ptr [ecx + 0x80] */
    MEM32(ebp + (-0x6C)) = eax; /* 0x10085E2C: mov dword ptr [ebp - 0x6c], eax */
    esi = MEM32(ebp + (-0x24)); /* 0x10085E2F: mov esi, dword ptr [ebp - 0x24] */
    PUSH32(esp, esi); /* 0x10085E32: push esi */
    RECOMP_CALL(sub_100129AF); /* 0x10085E33: call 0x100129af */
    RECOMP_FLAGS_IN();
    esi = eax; /* 0x10085E38: mov esi, eax */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x10085E3A: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_100129AF); /* 0x10085E3D: call 0x100129af */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esi = esi + eax; /* 0x10085E42: add esi, eax */
    _flag_k = FK_ADD;
    PUSH32(esp, 0x10086118u); /* 0x10085E44: push 0x10086118 */
    RECOMP_CALL(sub_100129AF); /* 0x10085E49: call 0x100129af */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi + 1; /* 0x10085E4E: inc esi */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + esi; /* 0x10085E4F: add eax, esi */
    _flag_k = FK_ADD;
    MEM32(ebp + (-0x28)) = eax; /* 0x10085E51: mov dword ptr [ebp - 0x28], eax */
    PUSH32(esp, edi); /* 0x10085E54: push edi */
    PUSH32(esp, eax); /* 0x10085E55: push eax */
    RECOMP_CALL(sub_10011208); /* 0x10085E56: call 0x10011208 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x14u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x14u; /* 0x10085E5B: add esp, 0x14 */
    _flag_k = FK_ADD;
    esi = eax; /* 0x10085E5E: mov esi, eax */
    MEM32(ebp + (-0x1C)) = esi; /* 0x10085E60: mov dword ptr [ebp - 0x1c], esi */
    /* test esi, esi */ /* 0x10085E63: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_100860B9; /* 0x10085E65: je 0x100860b9 */
L_10085E6B:
    PUSH32(esp, MEM32(ebp + (-0x24))); /* 0x10085E6B: push dword ptr [ebp - 0x24] */
    PUSH32(esp, MEM32(ebp + (-0x28))); /* 0x10085E6E: push dword ptr [ebp - 0x28] */
    PUSH32(esp, esi); /* 0x10085E71: push esi */
    RECOMP_CALL(sub_100147CD); /* 0x10085E72: call 0x100147cd */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x10085E77: add esp, 0xc */
    _flag_k = FK_ADD;
    /* test eax, eax */ /* 0x10085E7A: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_10085F56; /* 0x10085E7C: jne 0x10085f56 */
L_10085E82:
    PUSH32(esp, 0x10086118u); /* 0x10085E82: push 0x10086118 */
    PUSH32(esp, MEM32(ebp + (-0x28))); /* 0x10085E87: push dword ptr [ebp - 0x28] */
    PUSH32(esp, esi); /* 0x10085E8A: push esi */
    RECOMP_CALL(sub_1002E676); /* 0x10085E8B: call 0x1002e676 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x10085E90: add esp, 0xc */
    _flag_k = FK_ADD;
    /* test eax, eax */ /* 0x10085E93: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_10085F56; /* 0x10085E95: jne 0x10085f56 */
L_10085E9B:
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x10085E9B: push dword ptr [ebp + 8] */
    PUSH32(esp, MEM32(ebp + (-0x28))); /* 0x10085E9E: push dword ptr [ebp - 0x28] */
    PUSH32(esp, esi); /* 0x10085EA1: push esi */
    RECOMP_CALL(sub_1002E676); /* 0x10085EA2: call 0x1002e676 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x10085EA7: add esp, 0xc */
    _flag_k = FK_ADD;
    /* test eax, eax */ /* 0x10085EAA: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_10085F56; /* 0x10085EAC: jne 0x10085f56 */
L_10085EB2:
    PUSH32(esp, 0x10u); /* 0x10085EB2: push 0x10 */
    PUSH32(esp, eax); /* 0x10085EB4: push eax */
    eax = ebp + (-0x68); /* 0x10085EB5: lea eax, [ebp - 0x68] */
    PUSH32(esp, eax); /* 0x10085EB8: push eax */
    RECOMP_CALL(sub_10011533); /* 0x10085EB9: call 0x10011533 */
    RECOMP_FLAGS_IN();
    RECOMP_CALL(sub_1001177D); /* 0x10085EBE: call 0x1001177d */
    RECOMP_FLAGS_IN();
    eax = MEM32(eax); /* 0x10085EC3: mov eax, dword ptr [eax] */
    MEM32(ebp + (-0x28)) = eax; /* 0x10085EC5: mov dword ptr [ebp - 0x28], eax */
    PUSH32(esp, 0); /* 0x10085EC8: push 0 */
    PUSH32(esp, MEM32(ebp + (-0x24))); /* 0x10085ECA: push dword ptr [ebp - 0x24] */
    RECOMP_CALL(sub_1007E270); /* 0x10085ECD: call 0x1007e270 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x14u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x14u; /* 0x10085ED2: add esp, 0x14 */
    _flag_k = FK_ADD;
    /* test eax, eax */ /* 0x10085ED5: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_10085EFD; /* 0x10085ED7: jne 0x10085efd */
L_10085ED9:
    eax = ebp + (-0x68); /* 0x10085ED9: lea eax, [ebp - 0x68] */
    PUSH32(esp, eax); /* 0x10085EDC: push eax */
    eax = ebp + (-0xAC); /* 0x10085EDD: lea eax, [ebp - 0xac] */
    PUSH32(esp, eax); /* 0x10085EE3: push eax */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x10085EE4: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, eax); /* 0x10085EE6: push eax */
    PUSH32(esp, eax); /* 0x10085EE7: push eax */
    PUSH32(esp, eax); /* 0x10085EE8: push eax */
    PUSH32(esp, edi); /* 0x10085EE9: push edi */
    PUSH32(esp, eax); /* 0x10085EEA: push eax */
    PUSH32(esp, eax); /* 0x10085EEB: push eax */
    PUSH32(esp, esi); /* 0x10085EEC: push esi */
    PUSH32(esp, MEM32(ebp + (-0x24))); /* 0x10085EED: push dword ptr [ebp - 0x24] */
    RECOMP_ICALL(MEM32(0x100E50EC)); /* 0x10085EF0: call dword ptr [0x100e50ec] */
    RECOMP_FLAGS_IN();
    edi = eax; /* 0x10085EF6: mov edi, eax */
    goto L_10086077; /* 0x10085EF8: jmp 0x10086077 */
L_10085EFD:
    _flag_a = (uint32_t)(MEM32(ebp + 0x8)); _flag_b = (uint32_t)(0);
    MEM32(ebp + 0x8) = MEM32(ebp + 0x8) & 0; /* 0x10085EFD: and dword ptr [ebp + 8], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, edi); /* 0x10085F01: push edi */
    PUSH32(esp, 0x104u); /* 0x10085F02: push 0x104 */
    RECOMP_CALL(sub_10011208); /* 0x10085F07: call 0x10011208 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x10085F0C: pop ecx */
    ecx = POP32_VAL(esp); /* 0x10085F0D: pop ecx */
    edi = eax; /* 0x10085F0E: mov edi, eax */
    /* test edi, edi */ /* 0x10085F10: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_10085F3A; /* 0x10085F12: jne 0x10085f3a */
L_10085F14:
    PUSH32(esp, eax); /* 0x10085F14: push eax */
    RECOMP_CALL(sub_1000ECE0); /* 0x10085F15: call 0x1000ece0 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, esi); /* 0x10085F1A: push esi */
    RECOMP_CALL(sub_1000ECE0); /* 0x10085F1B: call 0x1000ece0 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, MEM32(ebp + (-0x34))); /* 0x10085F20: push dword ptr [ebp - 0x34] */
    RECOMP_CALL(sub_1000ECE0); /* 0x10085F23: call 0x1000ece0 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x10085F28: add esp, 0xc */
    _flag_k = FK_ADD;
L_10085F2B:
    RECOMP_CALL(sub_1001177D); /* 0x10085F2B: call 0x1001177d */
    RECOMP_FLAGS_IN();
    ecx = MEM32(ebp + (-0x28)); /* 0x10085F30: mov ecx, dword ptr [ebp - 0x28] */
    MEM32(eax) = ecx; /* 0x10085F33: mov dword ptr [eax], ecx */
    goto L_100860B9; /* 0x10085F35: jmp 0x100860b9 */
L_10085F3A:
    PUSH32(esp, 0x1006215Cu); /* 0x10085F3A: push 0x1006215c */
    PUSH32(esp, 0); /* 0x10085F3F: push 0 */
    eax = ebp + 0x8; /* 0x10085F41: lea eax, [ebp + 8] */
    PUSH32(esp, eax); /* 0x10085F44: push eax */
    RECOMP_CALL(sub_100A5072); /* 0x10085F45: call 0x100a5072 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x10085F4A: add esp, 0xc */
    _flag_k = FK_ADD;
    /* test eax, eax */ /* 0x10085F4D: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_10085F87; /* 0x10085F4F: je 0x10085f87 */
L_10085F51:
    /* cmp eax, 0x16u */ /* 0x10085F51: cmp eax, 0x16 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x16u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_10085F62; /* 0x10085F54: jne 0x10085f62 */
L_10085F56:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x10085F56: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, eax); /* 0x10085F58: push eax */
    PUSH32(esp, eax); /* 0x10085F59: push eax */
    PUSH32(esp, eax); /* 0x10085F5A: push eax */
    PUSH32(esp, eax); /* 0x10085F5B: push eax */
    PUSH32(esp, eax); /* 0x10085F5C: push eax */
    RECOMP_BACKEDGE();
    goto L_10085DBC; /* 0x10085F5D: jmp 0x10085dbc */
L_10085F62:
    /* test eax, eax */ /* 0x10085F62: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_10085F87; /* 0x10085F64: je 0x10085f87 */
L_10085F66:
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x10085F66: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_1000ECE0); /* 0x10085F69: call 0x1000ece0 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, edi); /* 0x10085F6E: push edi */
    RECOMP_CALL(sub_1000ECE0); /* 0x10085F6F: call 0x1000ece0 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, esi); /* 0x10085F74: push esi */
    RECOMP_CALL(sub_1000ECE0); /* 0x10085F75: call 0x1000ece0 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, MEM32(ebp + (-0x34))); /* 0x10085F7A: push dword ptr [ebp - 0x34] */
    RECOMP_CALL(sub_1000ECE0); /* 0x10085F7D: call 0x1000ece0 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x10u; /* 0x10085F82: add esp, 0x10 */
    _flag_k = FK_ADD;
    RECOMP_BACKEDGE();
    goto L_10085F2B; /* 0x10085F85: jmp 0x10085f2b */
L_10085F87:
    eax = MEM32(ebp + 0x8); /* 0x10085F87: mov eax, dword ptr [ebp + 8] */
L_10085F8A:
    PUSH32(esp, 0x103u); /* 0x10085F8A: push 0x103 */
    PUSH32(esp, edi); /* 0x10085F8F: push edi */
    PUSH32(esp, eax); /* 0x10085F90: push eax */
    RECOMP_CALL(sub_100A525C); /* 0x10085F91: call 0x100a525c */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x10085F96: add esp, 0xc */
    _flag_k = FK_ADD;
    MEM32(ebp + (-0x58)) = eax; /* 0x10085F99: mov dword ptr [ebp - 0x58], eax */
    /* test eax, eax */ /* 0x10085F9C: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_10086064; /* 0x10085F9E: je 0x10086064 */
L_10085FA4:
    /* cmp MEM8(edi), 0 */ /* 0x10085FA4: cmp byte ptr [edi], 0 */
    _flag_a = (uint32_t)(MEM8(edi)) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_10086064; /* 0x10085FA7: je 0x10086064 */
L_10085FAD:
    PUSH32(esp, edi); /* 0x10085FAD: push edi */
    RECOMP_CALL(sub_100129AF); /* 0x10085FAE: call 0x100129af */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x10085FB3: pop ecx */
    esi = edi + (-0x1); /* 0x10085FB4: lea esi, [edi - 1] */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esi = esi + eax; /* 0x10085FB7: add esi, eax */
    _flag_k = FK_ADD;
    SET_LO8(eax, MEM8(esi)); /* 0x10085FB9: mov al, byte ptr [esi] */
    /* cmp LO8(eax), 0x5Cu */ /* 0x10085FBB: cmp al, 0x5c */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(0x5Cu) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_1008604F; /* 0x10085FBD: jne 0x1008604f */
L_10085FC3:
    PUSH32(esp, 0x5Cu); /* 0x10085FC3: push 0x5c */
    PUSH32(esp, edi); /* 0x10085FC5: push edi */
    RECOMP_CALL(sub_1008E5B2); /* 0x10085FC6: call 0x1008e5b2 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x10085FCB: pop ecx */
    ecx = POP32_VAL(esp); /* 0x10085FCC: pop ecx */
    /* cmp esi, eax */ /* 0x10085FCD: cmp esi, eax */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
L_10085FCF:
    if (recomp_cond_cf(_flag_k, _flag_a, _flag_b, CC_E, _cf)) goto L_10085FEC; /* 0x10085FCF: je 0x10085fec */
L_10085FD1:
    PUSH32(esp, 0x10062164u); /* 0x10085FD1: push 0x10062164 */
    PUSH32(esp, 0x104u); /* 0x10085FD6: push 0x104 */
    PUSH32(esp, edi); /* 0x10085FDB: push edi */
    RECOMP_CALL(sub_1002E676); /* 0x10085FDC: call 0x1002e676 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x10085FE1: add esp, 0xc */
    _flag_k = FK_ADD;
    /* test eax, eax */ /* 0x10085FE4: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_10085F56; /* 0x10085FE6: jne 0x10085f56 */
L_10085FEC:
    PUSH32(esp, MEM32(ebp + (-0x24))); /* 0x10085FEC: push dword ptr [ebp - 0x24] */
    RECOMP_CALL(sub_100129AF); /* 0x10085FEF: call 0x100129af */
    RECOMP_FLAGS_IN();
    esi = eax; /* 0x10085FF4: mov esi, eax */
    PUSH32(esp, edi); /* 0x10085FF6: push edi */
    RECOMP_CALL(sub_100129AF); /* 0x10085FF7: call 0x100129af */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x10085FFC: pop ecx */
    ecx = POP32_VAL(esp); /* 0x10085FFD: pop ecx */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esi = esi + eax; /* 0x10085FFE: add esi, eax */
    _flag_k = FK_ADD;
    eax = 0x104u; /* 0x10086000: mov eax, 0x104 */
    /* cmp esi, eax */ /* 0x10086005: cmp esi, eax */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_AE(_flag_a, _flag_b)) goto L_10086061; /* 0x10086007: jae 0x10086061 */
L_10086009:
    PUSH32(esp, MEM32(ebp + (-0x24))); /* 0x10086009: push dword ptr [ebp - 0x24] */
    PUSH32(esp, eax); /* 0x1008600C: push eax */
    PUSH32(esp, edi); /* 0x1008600D: push edi */
    RECOMP_CALL(sub_1002E676); /* 0x1008600E: call 0x1002e676 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x10086013: add esp, 0xc */
    _flag_k = FK_ADD;
    /* test eax, eax */ /* 0x10086016: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_10085F56; /* 0x10086018: jne 0x10085f56 */
L_1008601E:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    esi = 0; /* 0x1008601E: xor esi, esi */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, esi); /* 0x10086020: push esi */
    PUSH32(esp, edi); /* 0x10086021: push edi */
    RECOMP_CALL(sub_1007E270); /* 0x10086022: call 0x1007e270 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x10086027: pop ecx */
    ecx = POP32_VAL(esp); /* 0x10086028: pop ecx */
    /* test eax, eax */ /* 0x10086029: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_10086056; /* 0x1008602B: jne 0x10086056 */
L_1008602D:
    eax = ebp + (-0x68); /* 0x1008602D: lea eax, [ebp - 0x68] */
    PUSH32(esp, eax); /* 0x10086030: push eax */
    eax = ebp + (-0xAC); /* 0x10086031: lea eax, [ebp - 0xac] */
    PUSH32(esp, eax); /* 0x10086037: push eax */
    PUSH32(esp, esi); /* 0x10086038: push esi */
    PUSH32(esp, esi); /* 0x10086039: push esi */
    PUSH32(esp, esi); /* 0x1008603A: push esi */
    PUSH32(esp, 1); /* 0x1008603B: push 1 */
    PUSH32(esp, esi); /* 0x1008603D: push esi */
    PUSH32(esp, esi); /* 0x1008603E: push esi */
    esi = MEM32(ebp + (-0x1C)); /* 0x1008603F: mov esi, dword ptr [ebp - 0x1c] */
    PUSH32(esp, esi); /* 0x10086042: push esi */
    PUSH32(esp, edi); /* 0x10086043: push edi */
    RECOMP_ICALL(MEM32(0x100E50EC)); /* 0x10086044: call dword ptr [0x100e50ec] */
    RECOMP_FLAGS_IN();
    MEM32(ebp + (-0x48)) = eax; /* 0x1008604A: mov dword ptr [ebp - 0x48], eax */
    goto L_10086064; /* 0x1008604D: jmp 0x10086064 */
L_1008604F:
    /* cmp LO8(eax), 0x2Fu */ /* 0x1008604F: cmp al, 0x2f */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(0x2Fu) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    RECOMP_BACKEDGE();
    goto L_10085FCF; /* 0x10086051: jmp 0x10085fcf */
L_10086056:
    esi = MEM32(ebp + (-0x1C)); /* 0x10086056: mov esi, dword ptr [ebp - 0x1c] */
    eax = MEM32(ebp + (-0x58)); /* 0x10086059: mov eax, dword ptr [ebp - 0x58] */
    RECOMP_BACKEDGE();
    goto L_10085F8A; /* 0x1008605C: jmp 0x10085f8a */
L_10086061:
    esi = MEM32(ebp + (-0x1C)); /* 0x10086061: mov esi, dword ptr [ebp - 0x1c] */
L_10086064:
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x10086064: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_1000ECE0); /* 0x10086067: call 0x1000ece0 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, edi); /* 0x1008606C: push edi */
    RECOMP_CALL(sub_1000ECE0); /* 0x1008606D: call 0x1000ece0 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x10086072: pop ecx */
    ecx = POP32_VAL(esp); /* 0x10086073: pop ecx */
    edi = MEM32(ebp + (-0x48)); /* 0x10086074: mov edi, dword ptr [ebp - 0x48] */
L_10086077:
    PUSH32(esp, esi); /* 0x10086077: push esi */
    RECOMP_CALL(sub_1000ECE0); /* 0x10086078: call 0x1000ece0 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, MEM32(ebp + (-0x34))); /* 0x1008607D: push dword ptr [ebp - 0x34] */
    RECOMP_CALL(sub_1000ECE0); /* 0x10086080: call 0x1000ece0 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x10086085: pop ecx */
    ecx = POP32_VAL(esp); /* 0x10086086: pop ecx */
    PUSH32(esp, MEM32(ebp + (-0x38))); /* 0x10086087: push dword ptr [ebp - 0x38] */
    esi = MEM32(0x100E5074); /* 0x1008608A: mov esi, dword ptr [0x100e5074] */
    RECOMP_ICALL(esi); /* 0x10086090: call esi */
    RECOMP_FLAGS_IN();
    /* test edi, edi */ /* 0x10086092: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1008609B; /* 0x10086094: je 0x1008609b */
L_10086096:
    PUSH32(esp, MEM32(ebp + (-0x64))); /* 0x10086096: push dword ptr [ebp - 0x64] */
    RECOMP_ICALL(esi); /* 0x10086099: call esi */
    RECOMP_FLAGS_IN();
L_1008609B:
    RECOMP_CALL(sub_1001177D); /* 0x1008609B: call 0x1001177d */
    RECOMP_FLAGS_IN();
    ecx = MEM32(ebp + (-0x28)); /* 0x100860A0: mov ecx, dword ptr [ebp - 0x28] */
    MEM32(eax) = ecx; /* 0x100860A3: mov dword ptr [eax], ecx */
    ecx = MEM32(ebp + (-0x54)); /* 0x100860A5: mov ecx, dword ptr [ebp - 0x54] */
    /* test edi, edi */ /* 0x100860A8: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_100860B6; /* 0x100860AA: je 0x100860b6 */
L_100860AC:
    eax = MEM32(ebp + (-0x68)); /* 0x100860AC: mov eax, dword ptr [ebp - 0x68] */
    MEM32(ecx + 0x4) = eax; /* 0x100860AF: mov dword ptr [ecx + 4], eax */
    MEM32(ecx) = ebx; /* 0x100860B2: mov dword ptr [ecx], ebx */
    goto L_100860F7; /* 0x100860B4: jmp 0x100860f7 */
L_100860B6:
    _flag_a = (uint32_t)(MEM32(ecx)); _flag_b = (uint32_t)(0);
    MEM32(ecx) = MEM32(ecx) & 0; /* 0x100860B6: and dword ptr [ecx], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
L_100860B9:
    esi = MEM32(ebp + (-0x30)); /* 0x100860B9: mov esi, dword ptr [ebp - 0x30] */
L_100860BC:
    PUSH32(esp, ebx); /* 0x100860BC: push ebx */
    RECOMP_CALL(sub_10014F9E); /* 0x100860BD: call 0x10014f9e */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x100860C2: pop ecx */
    edi = MEM32(ebp + (-0x2C)); /* 0x100860C3: mov edi, dword ptr [ebp - 0x2c] */
    _flag_a = (uint32_t)(MEM32(ebp + edi * 4 + (-0x50))); _flag_b = (uint32_t)(0);
    MEM32(ebp + edi * 4 + (-0x50)) = MEM32(ebp + edi * 4 + (-0x50)) & 0; /* 0x100860C6: and dword ptr [ebp + edi*4 - 0x50], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ebx = 0; /* 0x100860CB: xor ebx, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x3C)) = ebx; /* 0x100860CD: mov dword ptr [ebp - 0x3c], ebx */
    goto L_100860D5; /* 0x100860D0: jmp 0x100860d5 */
L_100860D2:
    edi = MEM32(ebp + (-0x2C)); /* 0x100860D2: mov edi, dword ptr [ebp - 0x2c] */
L_100860D5:
    /* cmp MEM32(ebp + esi * 4 + (-0x50)), 0 */ /* 0x100860D5: cmp dword ptr [ebp + esi*4 - 0x50], 0 */
    _flag_a = (uint32_t)(MEM32(ebp + esi * 4 + (-0x50))); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_100860E6; /* 0x100860DA: je 0x100860e6 */
L_100860DC:
    PUSH32(esp, MEM32(ebp + esi * 4 + (-0x44))); /* 0x100860DC: push dword ptr [ebp + esi*4 - 0x44] */
    RECOMP_CALL(sub_10014EA2); /* 0x100860E0: call 0x10014ea2 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x100860E5: pop ecx */
L_100860E6:
    /* cmp MEM32(ebp + edi * 4 + (-0x50)), 0 */ /* 0x100860E6: cmp dword ptr [ebp + edi*4 - 0x50], 0 */
    _flag_a = (uint32_t)(MEM32(ebp + edi * 4 + (-0x50))); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_100860F7; /* 0x100860EB: je 0x100860f7 */
L_100860ED:
    PUSH32(esp, MEM32(ebp + edi * 4 + (-0x44))); /* 0x100860ED: push dword ptr [ebp + edi*4 - 0x44] */
    RECOMP_CALL(sub_10014EA2); /* 0x100860F1: call 0x10014ea2 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x100860F6: pop ecx */
L_100860F7:
    MEM32(ebp + (-0x4)) = 0xFFFFFFFEu; /* 0x100860F7: mov dword ptr [ebp - 4], 0xfffffffe */
    RECOMP_CALL(sub_1008610E); /* 0x100860FE: call 0x1008610e */
    RECOMP_FLAGS_IN();
L_10086103:
    eax = ebx; /* 0x10086103: mov eax, ebx */
L_10086105:
    RECOMP_CALL(sub_1000EDC3); /* 0x10086105: call 0x1000edc3 */
    RECOMP_FLAGS_IN();
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1008610A: ret  */
    RECOMP_REGS_OUT();
}

void sub_1008610E(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1008610Eu);

L_1008610E:
    PUSH32(esp, 9); /* 0x1008610E: push 9 */
    RECOMP_CALL(sub_1000EDFC); /* 0x10086110: call 0x1000edfc */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x10086115: pop ecx */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x10086116: ret  */
    RECOMP_REGS_OUT();
}

void sub_10086118(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x10086118u);

L_10086118:
    _flag_a = (uint32_t)(MEM8(edi)) << 24; _flag_b = (uint32_t)(HI8(ecx)) << 24;
    MEM8(edi) = (uint8_t)(MEM8(edi) & HI8(ecx)); /* 0x10086118: and byte ptr [edi], ch */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    void_lift_trap(0x1008611Au, "arpl word ptr [eax], sp");
    _flag_a = (uint32_t)(MEM8(eax + (-0x16F70))) << 24; _flag_b = (uint32_t)(LO8(edx)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax + (-0x16F70)) = (uint8_t)(MEM8(eax + (-0x16F70)) + LO8(edx)); /* 0x1008611C: add byte ptr [eax - 0x16f70], dl */
    _flag_k = FK_NARROW(FK_ADD, 24);
    RECOMP_ITAIL(0x10086122u); { RECOMP_REGS_OUT(); return; } /* falls through */
    RECOMP_REGS_OUT();
}

void sub_1008613C(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1008613Cu);

L_1008613C:
    PUSH32(esp, ebp); /* 0x1008613C: push ebp */
    ebp = esp; /* 0x1008613D: mov ebp, esp */
    ecx = MEM32(0x100E4060); /* 0x1008613F: mov ecx, dword ptr [0x100e4060] */
    PUSH32(esp, esi); /* 0x10086145: push esi */
    esi = MEM32(0x100E4064); /* 0x10086146: mov esi, dword ptr [0x100e4064] */
    eax = esi; /* 0x1008614C: mov eax, esi */
    PUSH32(esp, edi); /* 0x1008614E: push edi */
    edi = MEM32(ebp + 0x8); /* 0x1008614F: mov edi, dword ptr [ebp + 8] */
    edx = esi + ecx * 8; /* 0x10086152: lea edx, [esi + ecx*8] */
    goto L_1008615E; /* 0x10086155: jmp 0x1008615e */
L_10086157:
    /* cmp MEM32(eax), edi */ /* 0x10086157: cmp dword ptr [eax], edi */
    _flag_a = (uint32_t)(MEM32(eax)); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_10086162; /* 0x10086159: je 0x10086162 */
L_1008615B:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 8; /* 0x1008615B: add eax, 8 */
    _flag_k = FK_ADD;
L_1008615E:
    /* cmp eax, edx */ /* 0x1008615E: cmp eax, edx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_10086157; /* 0x10086160: jb 0x10086157 */
L_10086162:
    /* cmp eax, edx */ /* 0x10086162: cmp eax, edx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_B(_flag_a, _flag_b)) goto L_100861A1; /* 0x10086164: jb 0x100861a1 */
L_10086166:
    /* test edi, edi */ /* 0x10086166: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1008619F; /* 0x10086168: jne 0x1008619f */
L_1008616A:
    eax = ecx + 0x1; /* 0x1008616A: lea eax, [ecx + 1] */
    /* cmp eax, ecx */ /* 0x1008616D: cmp eax, ecx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_B(_flag_a, _flag_b)) goto L_1008619F; /* 0x1008616F: jb 0x1008619f */
L_10086171:
    /* cmp eax, 0x1FFFFFFFu */ /* 0x10086171: cmp eax, 0x1fffffff */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x1FFFFFFFu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_AE(_flag_a, _flag_b)) goto L_1008619F; /* 0x10086176: jae 0x1008619f */
L_10086178:
    PUSH32(esp, 8); /* 0x10086178: push 8 */
    PUSH32(esp, eax); /* 0x1008617A: push eax */
    PUSH32(esp, esi); /* 0x1008617B: push esi */
    RECOMP_CALL(sub_100A02C4); /* 0x1008617C: call 0x100a02c4 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x10086181: add esp, 0xc */
    _flag_k = FK_ADD;
    /* test eax, eax */ /* 0x10086184: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1008619F; /* 0x10086186: je 0x1008619f */
L_10086188:
    ecx = MEM32(0x100E4060); /* 0x10086188: mov ecx, dword ptr [0x100e4060] */
    MEM32(0x100E4064) = eax; /* 0x1008618E: mov dword ptr [0x100e4064], eax */
    eax = eax + ecx * 8; /* 0x10086193: lea eax, [eax + ecx*8] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx + 1; /* 0x10086196: inc ecx */
    _flag_k = FK_INC;
    MEM32(0x100E4060) = ecx; /* 0x10086197: mov dword ptr [0x100e4060], ecx */
    goto L_100861A1; /* 0x1008619D: jmp 0x100861a1 */
L_1008619F:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1008619F: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
L_100861A1:
    edi = POP32_VAL(esp); /* 0x100861A1: pop edi */
    esi = POP32_VAL(esp); /* 0x100861A2: pop esi */
    ebp = POP32_VAL(esp); /* 0x100861A3: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x100861A4: ret  */
    RECOMP_REGS_OUT();
}

void sub_100861A5(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x100861A5u);

L_100861A5:
    PUSH32(esp, 0xA8u); /* 0x100861A5: push 0xa8 */
    PUSH32(esp, 0x100866C8u); /* 0x100861AA: push 0x100866c8 */
    RECOMP_CALL(sub_100353E2); /* 0x100861AF: call 0x100353e2 */
    RECOMP_FLAGS_IN();
    ecx = MEM32(ebp + 0x8); /* 0x100861B4: mov ecx, dword ptr [ebp + 8] */
    MEM32(ebp + (-0x44)) = ecx; /* 0x100861B7: mov dword ptr [ebp - 0x44], ecx */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edi = 0; /* 0x100861BA: xor edi, edi */
    _cf = 0;
    _flag_k = FK_TEST;
    edx = edi; /* 0x100861BC: mov edx, edi */
    MEM32(ebp + (-0x40)) = edi; /* 0x100861BE: mov dword ptr [ebp - 0x40], edi */
    ebx = edi; /* 0x100861C1: mov ebx, edi */
    MEM32(ebp + (-0x48)) = ebx; /* 0x100861C3: mov dword ptr [ebp - 0x48], ebx */
    MEM32(ebp + (-0x34)) = edi; /* 0x100861C6: mov dword ptr [ebp - 0x34], edi */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x100861C9: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x24)) = eax; /* 0x100861CB: mov dword ptr [ebp - 0x24], eax */
    MEM16(ebp + (-0x20)) = (uint16_t)(LO16(eax)); /* 0x100861CE: mov word ptr [ebp - 0x20], ax */
    MEM32(ebp + (-0x58)) = eax; /* 0x100861D2: mov dword ptr [ebp - 0x58], eax */
    /* test ecx, ecx */ /* 0x100861D5: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    SET_LO8(eax, (TEST_NZ(_flag_a, _flag_b)) ? 1 : 0); /* 0x100861D7: setne al */
    /* test eax, eax */ /* 0x100861DA: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_100861F5; /* 0x100861DC: jne 0x100861f5 */
L_100861DE:
    RECOMP_CALL(sub_1001177D); /* 0x100861DE: call 0x1001177d */
    RECOMP_FLAGS_IN();
    MEM32(eax) = 0x16u; /* 0x100861E3: mov dword ptr [eax], 0x16 */
    RECOMP_CALL(sub_100A4670); /* 0x100861E9: call 0x100a4670 */
    RECOMP_FLAGS_IN();
L_100861EE:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x100861EE: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_100866AA; /* 0x100861F0: jmp 0x100866aa */
L_100861F5:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x100861F5: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = MEM32(ebp + 0xC); /* 0x100861F7: mov ecx, dword ptr [ebp + 0xc] */
    /* test ecx, ecx */ /* 0x100861FA: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    SET_LO8(eax, (TEST_NZ(_flag_a, _flag_b)) ? 1 : 0); /* 0x100861FC: setne al */
    /* test eax, eax */ /* 0x100861FF: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_Z(_flag_a, _flag_b)) goto L_100861DE; /* 0x10086201: je 0x100861de */
L_10086203:
    PUSH32(esp, 0x20u); /* 0x10086203: push 0x20 */
    esi = POP32_VAL(esp); /* 0x10086205: pop esi */
    goto L_1008620B; /* 0x10086206: jmp 0x1008620b */
L_10086208:
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 2; /* 0x10086208: add ecx, 2 */
    _flag_k = FK_ADD;
L_1008620B:
    /* cmp MEM16(ecx), LO16(esi) */ /* 0x1008620B: cmp word ptr [ecx], si */
    _flag_a = (uint32_t)(MEM16(ecx)) << 16; _flag_b = (uint32_t)(LO16(esi)) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    RECOMP_BACKEDGE();
    if (CMP_EQ(_flag_a, _flag_b)) goto L_10086208; /* 0x1008620E: je 0x10086208 */
L_10086210:
    eax = (uint32_t)MEM16(ecx); /* 0x10086210: movzx eax, word ptr [ecx] */
    MEM32(ebp + (-0x28)) = 0x77u; /* 0x10086213: mov dword ptr [ebp - 0x28], 0x77 */
    /* cmp LO16(eax), MEM16(ebp + (-0x28)) */ /* 0x1008621A: cmp ax, word ptr [ebp - 0x28] */
    _flag_a = (uint32_t)(LO16(eax)) << 16; _flag_b = (uint32_t)(MEM16(ebp + (-0x28))) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_10086225; /* 0x1008621E: je 0x10086225 */
L_10086220:
    /* cmp eax, 0x72u */ /* 0x10086220: cmp eax, 0x72 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x72u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_NE(_flag_a, _flag_b)) goto L_100861DE; /* 0x10086223: jne 0x100861de */
L_10086225:
    MEM16(ebp + (-0x24)) = (uint16_t)(LO16(eax)); /* 0x10086225: mov word ptr [ebp - 0x24], ax */
L_10086229:
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 2; /* 0x10086229: add ecx, 2 */
    _flag_k = FK_ADD;
    /* cmp MEM16(ecx), LO16(esi) */ /* 0x1008622C: cmp word ptr [ecx], si */
    _flag_a = (uint32_t)(MEM16(ecx)) << 16; _flag_b = (uint32_t)(LO16(esi)) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    RECOMP_BACKEDGE();
    if (CMP_EQ(_flag_a, _flag_b)) goto L_10086229; /* 0x1008622F: je 0x10086229 */
L_10086231:
    eax = (uint32_t)MEM16(ecx); /* 0x10086231: movzx eax, word ptr [ecx] */
    PUSH32(esp, 0x74u); /* 0x10086234: push 0x74 */
    esi = POP32_VAL(esp); /* 0x10086236: pop esi */
    PUSH32(esp, 0x62u); /* 0x10086237: push 0x62 */
    ecx = POP32_VAL(esp); /* 0x10086239: pop ecx */
    /* test LO16(eax), LO16(eax) */ /* 0x1008623A: test ax, ax */
    _flag_a = (uint32_t)(LO16(eax)) << 16; _flag_b = (uint32_t)(LO16(eax)) << 16;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 16);
    if (TEST_Z(_flag_a, _flag_b)) goto L_10086249; /* 0x1008623D: je 0x10086249 */
L_1008623F:
    /* cmp LO16(eax), LO16(esi) */ /* 0x1008623F: cmp ax, si */
    _flag_a = (uint32_t)(LO16(eax)) << 16; _flag_b = (uint32_t)(LO16(esi)) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_10086249; /* 0x10086242: je 0x10086249 */
L_10086244:
    /* cmp LO16(eax), LO16(ecx) */ /* 0x10086244: cmp ax, cx */
    _flag_a = (uint32_t)(LO16(eax)) << 16; _flag_b = (uint32_t)(LO16(ecx)) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    RECOMP_BACKEDGE();
    if (CMP_NE(_flag_a, _flag_b)) goto L_100861DE; /* 0x10086247: jne 0x100861de */
L_10086249:
    MEM16(ebp + (-0x22)) = (uint16_t)(LO16(eax)); /* 0x10086249: mov word ptr [ebp - 0x22], ax */
    /* cmp LO16(eax), LO16(esi) */ /* 0x1008624D: cmp ax, si */
    _flag_a = (uint32_t)(LO16(eax)) << 16; _flag_b = (uint32_t)(LO16(esi)) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    if (CMP_NE(_flag_a, _flag_b)) goto L_10086259; /* 0x10086250: jne 0x10086259 */
L_10086252:
    edx = 0x4000u; /* 0x10086252: mov edx, 0x4000 */
    goto L_10086263; /* 0x10086257: jmp 0x10086263 */
L_10086259:
    /* cmp LO16(eax), LO16(ecx) */ /* 0x10086259: cmp ax, cx */
    _flag_a = (uint32_t)(LO16(eax)) << 16; _flag_b = (uint32_t)(LO16(ecx)) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    if (CMP_NE(_flag_a, _flag_b)) goto L_10086263; /* 0x1008625C: jne 0x10086263 */
L_1008625E:
    edx = 0x8000u; /* 0x1008625E: mov edx, 0x8000 */
L_10086263:
    _flag_a = (uint32_t)((edx | 0x80u)); _flag_b = (uint32_t)((edx | 0x80u));
    edx = edx | 0x80u; /* 0x10086263: or edx, 0x80 */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, edx); /* 0x10086269: push edx */
    PUSH32(esp, 0x400u); /* 0x1008626A: push 0x400 */
    eax = ebp + (-0x50); /* 0x1008626F: lea eax, [ebp - 0x50] */
    PUSH32(esp, eax); /* 0x10086272: push eax */
    RECOMP_CALL(sub_100A1D74); /* 0x10086273: call 0x100a1d74 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x10086278: add esp, 0xc */
    _flag_k = FK_ADD;
    /* cmp eax, 0xFFFFFFFFu */ /* 0x1008627B: cmp eax, -1 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xFFFFFFFFu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_100866A8; /* 0x1008627E: je 0x100866a8 */
L_10086284:
    eax = MEM32(ebp + (-0x28)); /* 0x10086284: mov eax, dword ptr [ebp - 0x28] */
    /* cmp MEM16(ebp + (-0x24)), LO16(eax) */ /* 0x10086287: cmp word ptr [ebp - 0x24], ax */
    _flag_a = (uint32_t)(MEM16(ebp + (-0x24))) << 16; _flag_b = (uint32_t)(LO16(eax)) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    if (CMP_NE(_flag_a, _flag_b)) goto L_1008629A; /* 0x1008628B: jne 0x1008629a */
L_1008628D:
    MEM32(ebp + (-0x28)) = edi; /* 0x1008628D: mov dword ptr [ebp - 0x28], edi */
    esi = edi; /* 0x10086290: mov esi, edi */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edi = 0; /* 0x10086292: xor edi, edi */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(1);
    edi = edi + 1; /* 0x10086294: inc edi */
    _flag_k = FK_INC;
    MEM32(ebp + (-0x38)) = edi; /* 0x10086295: mov dword ptr [ebp - 0x38], edi */
    goto L_100862A5; /* 0x10086298: jmp 0x100862a5 */
L_1008629A:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edi = 0; /* 0x1008629A: xor edi, edi */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(1);
    edi = edi + 1; /* 0x1008629C: inc edi */
    _flag_k = FK_INC;
    MEM32(ebp + (-0x28)) = edi; /* 0x1008629D: mov dword ptr [ebp - 0x28], edi */
    esi = edi; /* 0x100862A0: mov esi, edi */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x38))); _flag_b = (uint32_t)(ebx);
    MEM32(ebp + (-0x38)) = MEM32(ebp + (-0x38)) & ebx; /* 0x100862A2: and dword ptr [ebp - 0x38], ebx */
    _cf = 0;
    _flag_k = FK_TEST;
L_100862A5:
    MEM32(ebp + (-0x3C)) = esi; /* 0x100862A5: mov dword ptr [ebp - 0x3c], esi */
    PUSH32(esp, 9); /* 0x100862A8: push 9 */
    RECOMP_CALL(sub_100145F8); /* 0x100862AA: call 0x100145f8 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x100862AF: pop ecx */
    /* test eax, eax */ /* 0x100862B0: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_100862CB; /* 0x100862B2: jne 0x100862cb */
L_100862B4:
    PUSH32(esp, MEM32(ebp + (-0x50))); /* 0x100862B4: push dword ptr [ebp - 0x50] */
    RECOMP_CALL(sub_10014EA2); /* 0x100862B7: call 0x10014ea2 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, MEM32(ebp + (-0x4C))); /* 0x100862BC: push dword ptr [ebp - 0x4c] */
    RECOMP_CALL(sub_10014EA2); /* 0x100862BF: call 0x10014ea2 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x100862C4: pop ecx */
    ecx = POP32_VAL(esp); /* 0x100862C5: pop ecx */
    RECOMP_BACKEDGE();
    goto L_100861EE; /* 0x100862C6: jmp 0x100861ee */
L_100862CB:
    PUSH32(esp, 9); /* 0x100862CB: push 9 */
    RECOMP_CALL(sub_1000EDD7); /* 0x100862CD: call 0x1000edd7 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x100862D2: pop ecx */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x4))); _flag_b = (uint32_t)(ebx);
    MEM32(ebp + (-0x4)) = MEM32(ebp + (-0x4)) & ebx; /* 0x100862D3: and dword ptr [ebp - 4], ebx */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x5C)) = edi; /* 0x100862D6: mov dword ptr [ebp - 0x5c], edi */
    MEM32(ebp + (-0x60)) = edi; /* 0x100862D9: mov dword ptr [ebp - 0x60], edi */
    RECOMP_ICALL(MEM32(0x100E510C)); /* 0x100862DC: call dword ptr [0x100e510c] */
    RECOMP_FLAGS_IN();
    edx = eax; /* 0x100862E2: mov edx, eax */
    ecx = MEM32(ebp + esi * 4 + (-0x50)); /* 0x100862E4: mov ecx, dword ptr [ebp + esi*4 - 0x50] */
    PUSH32(esp, 2); /* 0x100862E8: push 2 */
    PUSH32(esp, edi); /* 0x100862EA: push edi */
    PUSH32(esp, 0); /* 0x100862EB: push 0 */
    eax = ebp + (-0x40); /* 0x100862ED: lea eax, [ebp - 0x40] */
    PUSH32(esp, eax); /* 0x100862F0: push eax */
    PUSH32(esp, edx); /* 0x100862F1: push edx */
    eax = ecx; /* 0x100862F2: mov eax, ecx */
    if (5u) _cf = (((eax) >> 4) & 1u); /* 0x100862F4: sar eax, 5 */
    if (5u) { _flag_a = recomp_flags_pack(((uint32_t)((int32_t)eax >> 5u)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = (uint32_t)((int32_t)eax >> 5u);
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x1Fu);
    ecx = ecx & 0x1Fu; /* 0x100862F7: and ecx, 0x1f */
    _cf = 0;
    _flag_k = FK_TEST;
    if (6u) _cf = (((ecx) >> 26) & 1u); /* 0x100862FA: shl ecx, 6 */
    if (6u) { _flag_a = recomp_flags_pack((ecx << 6u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ecx = ecx << 6u; /* 0x100862FA: shl ecx, 6 */
    eax = MEM32(eax * 4 + 0x100DF640); /* 0x100862FD: mov eax, dword ptr [eax*4 + 0x100df640] */
    PUSH32(esp, MEM32(ecx + eax)); /* 0x10086304: push dword ptr [ecx + eax] */
    PUSH32(esp, edx); /* 0x10086307: push edx */
    RECOMP_ICALL(MEM32(0x100E5108)); /* 0x10086308: call dword ptr [0x100e5108] */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x1008630E: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_10086675; /* 0x10086310: je 0x10086675 */
L_10086316:
    PUSH32(esp, MEM32(ebp + esi * 4 + (-0x50))); /* 0x10086316: push dword ptr [ebp + esi*4 - 0x50] */
    RECOMP_CALL(sub_10014EA2); /* 0x1008631A: call 0x10014ea2 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(MEM32(ebp + esi * 4 + (-0x60))); _flag_b = (uint32_t)(0);
    MEM32(ebp + esi * 4 + (-0x60)) = MEM32(ebp + esi * 4 + (-0x60)) & 0; /* 0x1008631F: and dword ptr [ebp + esi*4 - 0x60], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    eax = ebp + (-0x24); /* 0x10086324: lea eax, [ebp - 0x24] */
    PUSH32(esp, eax); /* 0x10086327: push eax */
    eax = MEM32(ebp + (-0x38)); /* 0x10086328: mov eax, dword ptr [ebp - 0x38] */
    PUSH32(esp, MEM32(ebp + eax * 4 + (-0x50))); /* 0x1008632B: push dword ptr [ebp + eax*4 - 0x50] */
    RECOMP_CALL(sub_10084F8E); /* 0x1008632F: call 0x10084f8e */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x10086334: add esp, 0xc */
    _flag_k = FK_ADD;
    ebx = eax; /* 0x10086337: mov ebx, eax */
    MEM32(ebp + (-0x48)) = ebx; /* 0x10086339: mov dword ptr [ebp - 0x48], ebx */
    /* test ebx, ebx */ /* 0x1008633C: test ebx, ebx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ebx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_10086675; /* 0x1008633E: je 0x10086675 */
L_10086344:
    PUSH32(esp, 0); /* 0x10086344: push 0 */
    RECOMP_CALL(sub_1008613C); /* 0x10086346: call 0x1008613c */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1008634B: pop ecx */
    MEM32(ebp + (-0x64)) = eax; /* 0x1008634C: mov dword ptr [ebp - 0x64], eax */
    /* test eax, eax */ /* 0x1008634F: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_10086660; /* 0x10086351: je 0x10086660 */
L_10086357:
    PUSH32(esp, 0x10062190u); /* 0x10086357: push 0x10062190 */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    esi = 0; /* 0x1008635C: xor esi, esi */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, esi); /* 0x1008635E: push esi */
    eax = ebp + (-0x34); /* 0x1008635F: lea eax, [ebp - 0x34] */
    PUSH32(esp, eax); /* 0x10086362: push eax */
    RECOMP_CALL(sub_1002E415); /* 0x10086363: call 0x1002e415 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x10086368: add esp, 0xc */
    _flag_k = FK_ADD;
    /* test eax, eax */ /* 0x1008636B: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_10086382; /* 0x1008636D: je 0x10086382 */
L_1008636F:
    /* cmp eax, 0x16u */ /* 0x1008636F: cmp eax, 0x16 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x16u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_1008637E; /* 0x10086372: jne 0x1008637e */
L_10086374:
    PUSH32(esp, esi); /* 0x10086374: push esi */
    PUSH32(esp, esi); /* 0x10086375: push esi */
    PUSH32(esp, esi); /* 0x10086376: push esi */
    PUSH32(esp, esi); /* 0x10086377: push esi */
    PUSH32(esp, esi); /* 0x10086378: push esi */
L_10086379:
    RECOMP_CALL(sub_100A469B); /* 0x10086379: call 0x100a469b */
    RECOMP_FLAGS_IN();
L_1008637E:
    /* test eax, eax */ /* 0x1008637E: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1008638C; /* 0x10086380: jne 0x1008638c */
L_10086382:
    esi = MEM32(ebp + (-0x34)); /* 0x10086382: mov esi, dword ptr [ebp - 0x34] */
    MEM32(ebp + (-0x30)) = esi; /* 0x10086385: mov dword ptr [ebp - 0x30], esi */
    /* test esi, esi */ /* 0x10086388: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_10086393; /* 0x1008638A: jne 0x10086393 */
L_1008638C:
    MEM32(ebp + (-0x30)) = 0x100621A0u; /* 0x1008638C: mov dword ptr [ebp - 0x30], 0x100621a0 */
L_10086393:
    PUSH32(esp, 0x44u); /* 0x10086393: push 0x44 */
    esi = POP32_VAL(esp); /* 0x10086395: pop esi */
    PUSH32(esp, esi); /* 0x10086396: push esi */
    PUSH32(esp, 0); /* 0x10086397: push 0 */
    eax = ebp + (-0xB8); /* 0x10086399: lea eax, [ebp - 0xb8] */
    PUSH32(esp, eax); /* 0x1008639F: push eax */
    RECOMP_CALL(sub_10011533); /* 0x100863A0: call 0x10011533 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x100863A5: add esp, 0xc */
    _flag_k = FK_ADD;
    MEM32(ebp + (-0xB8)) = esi; /* 0x100863A8: mov dword ptr [ebp - 0xb8], esi */
    MEM32(ebp + (-0x8C)) = 0x100u; /* 0x100863AE: mov dword ptr [ebp - 0x8c], 0x100 */
    edx = MEM32(ebp + (-0x28)); /* 0x100863B8: mov edx, dword ptr [ebp - 0x28] */
    eax = MEM32(ebp + (-0x40)); /* 0x100863BB: mov eax, dword ptr [ebp - 0x40] */
    ecx = MEM32(0x100DF640); /* 0x100863BE: mov ecx, dword ptr [0x100df640] */
    /* test edx, edx */ /* 0x100863C4: test edx, edx */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(edx);
    _cf = 0;
    _flag_k = FK_TEST;
    esi = eax; /* 0x100863C6: mov esi, eax */
    if (TEST_Z(_flag_a, _flag_b)) goto L_100863CC; /* 0x100863C8: je 0x100863cc */
L_100863CA:
    esi = MEM32(ecx); /* 0x100863CA: mov esi, dword ptr [ecx] */
L_100863CC:
    MEM32(ebp + (-0x80)) = esi; /* 0x100863CC: mov dword ptr [ebp - 0x80], esi */
    /* cmp edx, edi */ /* 0x100863CF: cmp edx, edi */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_100863D6; /* 0x100863D1: je 0x100863d6 */
L_100863D3:
    eax = MEM32(ecx + 0x40); /* 0x100863D3: mov eax, dword ptr [ecx + 0x40] */
L_100863D6:
    MEM32(ebp + (-0x7C)) = eax; /* 0x100863D6: mov dword ptr [ebp - 0x7c], eax */
    eax = MEM32(ecx + 0x80); /* 0x100863D9: mov eax, dword ptr [ecx + 0x80] */
    MEM32(ebp + (-0x78)) = eax; /* 0x100863DF: mov dword ptr [ebp - 0x78], eax */
    PUSH32(esp, MEM32(ebp + (-0x44))); /* 0x100863E2: push dword ptr [ebp - 0x44] */
    RECOMP_CALL(sub_1000F1F3); /* 0x100863E5: call 0x1000f1f3 */
    RECOMP_FLAGS_IN();
    esi = eax; /* 0x100863EA: mov esi, eax */
    PUSH32(esp, MEM32(ebp + (-0x30))); /* 0x100863EC: push dword ptr [ebp - 0x30] */
    RECOMP_CALL(sub_1000F1F3); /* 0x100863EF: call 0x1000f1f3 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esi = esi + eax; /* 0x100863F4: add esi, eax */
    _flag_k = FK_ADD;
    PUSH32(esp, 0x100866BCu); /* 0x100863F6: push 0x100866bc */
    RECOMP_CALL(sub_1000F1F3); /* 0x100863FB: call 0x1000f1f3 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi + 1; /* 0x10086400: inc esi */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + esi; /* 0x10086401: add eax, esi */
    _flag_k = FK_ADD;
    MEM32(ebp + (-0x2C)) = eax; /* 0x10086403: mov dword ptr [ebp - 0x2c], eax */
    PUSH32(esp, 2); /* 0x10086406: push 2 */
    PUSH32(esp, eax); /* 0x10086408: push eax */
    RECOMP_CALL(sub_10011208); /* 0x10086409: call 0x10011208 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x14u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x14u; /* 0x1008640E: add esp, 0x14 */
    _flag_k = FK_ADD;
    esi = eax; /* 0x10086411: mov esi, eax */
    MEM32(ebp + (-0x54)) = esi; /* 0x10086413: mov dword ptr [ebp - 0x54], esi */
    /* test esi, esi */ /* 0x10086416: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1008665D; /* 0x10086418: je 0x1008665d */
L_1008641E:
    PUSH32(esp, MEM32(ebp + (-0x30))); /* 0x1008641E: push dword ptr [ebp - 0x30] */
    PUSH32(esp, MEM32(ebp + (-0x2C))); /* 0x10086421: push dword ptr [ebp - 0x2c] */
    PUSH32(esp, esi); /* 0x10086424: push esi */
    RECOMP_CALL(sub_10011693); /* 0x10086425: call 0x10011693 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x1008642A: add esp, 0xc */
    _flag_k = FK_ADD;
    /* test eax, eax */ /* 0x1008642D: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1008650A; /* 0x1008642F: jne 0x1008650a */
L_10086435:
    PUSH32(esp, 0x100866BCu); /* 0x10086435: push 0x100866bc */
    PUSH32(esp, MEM32(ebp + (-0x2C))); /* 0x1008643A: push dword ptr [ebp - 0x2c] */
    PUSH32(esp, esi); /* 0x1008643D: push esi */
    RECOMP_CALL(sub_1001212A); /* 0x1008643E: call 0x1001212a */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x10086443: add esp, 0xc */
    _flag_k = FK_ADD;
    /* test eax, eax */ /* 0x10086446: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1008650A; /* 0x10086448: jne 0x1008650a */
L_1008644E:
    PUSH32(esp, MEM32(ebp + (-0x44))); /* 0x1008644E: push dword ptr [ebp - 0x44] */
    PUSH32(esp, MEM32(ebp + (-0x2C))); /* 0x10086451: push dword ptr [ebp - 0x2c] */
    PUSH32(esp, esi); /* 0x10086454: push esi */
    RECOMP_CALL(sub_1001212A); /* 0x10086455: call 0x1001212a */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x1008645A: add esp, 0xc */
    _flag_k = FK_ADD;
    /* test eax, eax */ /* 0x1008645D: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1008650A; /* 0x1008645F: jne 0x1008650a */
L_10086465:
    PUSH32(esp, 0x10u); /* 0x10086465: push 0x10 */
    PUSH32(esp, eax); /* 0x10086467: push eax */
    eax = ebp + (-0x74); /* 0x10086468: lea eax, [ebp - 0x74] */
    PUSH32(esp, eax); /* 0x1008646B: push eax */
    RECOMP_CALL(sub_10011533); /* 0x1008646C: call 0x10011533 */
    RECOMP_FLAGS_IN();
    RECOMP_CALL(sub_1001177D); /* 0x10086471: call 0x1001177d */
    RECOMP_FLAGS_IN();
    eax = MEM32(eax); /* 0x10086476: mov eax, dword ptr [eax] */
    MEM32(ebp + (-0x28)) = eax; /* 0x10086478: mov dword ptr [ebp - 0x28], eax */
    PUSH32(esp, 0); /* 0x1008647B: push 0 */
    PUSH32(esp, MEM32(ebp + (-0x30))); /* 0x1008647D: push dword ptr [ebp - 0x30] */
    RECOMP_CALL(sub_1001EE42); /* 0x10086480: call 0x1001ee42 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x14u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x14u; /* 0x10086485: add esp, 0x14 */
    _flag_k = FK_ADD;
    /* test eax, eax */ /* 0x10086488: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_100864B0; /* 0x1008648A: jne 0x100864b0 */
L_1008648C:
    eax = ebp + (-0x74); /* 0x1008648C: lea eax, [ebp - 0x74] */
    PUSH32(esp, eax); /* 0x1008648F: push eax */
    eax = ebp + (-0xB8); /* 0x10086490: lea eax, [ebp - 0xb8] */
    PUSH32(esp, eax); /* 0x10086496: push eax */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x10086497: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, eax); /* 0x10086499: push eax */
    PUSH32(esp, eax); /* 0x1008649A: push eax */
    PUSH32(esp, eax); /* 0x1008649B: push eax */
    PUSH32(esp, edi); /* 0x1008649C: push edi */
    PUSH32(esp, eax); /* 0x1008649D: push eax */
    PUSH32(esp, eax); /* 0x1008649E: push eax */
    PUSH32(esp, esi); /* 0x1008649F: push esi */
    PUSH32(esp, MEM32(ebp + (-0x30))); /* 0x100864A0: push dword ptr [ebp - 0x30] */
    RECOMP_ICALL(MEM32(0x100E50F8)); /* 0x100864A3: call dword ptr [0x100e50f8] */
    RECOMP_FLAGS_IN();
    edi = eax; /* 0x100864A9: mov edi, eax */
    goto L_1008661A; /* 0x100864AB: jmp 0x1008661a */
L_100864B0:
    _flag_a = (uint32_t)(MEM32(ebp + (-0x2C))); _flag_b = (uint32_t)(0);
    MEM32(ebp + (-0x2C)) = MEM32(ebp + (-0x2C)) & 0; /* 0x100864B0: and dword ptr [ebp - 0x2c], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, 2); /* 0x100864B4: push 2 */
    PUSH32(esp, 0x104u); /* 0x100864B6: push 0x104 */
    RECOMP_CALL(sub_10011208); /* 0x100864BB: call 0x10011208 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x100864C0: pop ecx */
    ecx = POP32_VAL(esp); /* 0x100864C1: pop ecx */
    edi = eax; /* 0x100864C2: mov edi, eax */
    /* test edi, edi */ /* 0x100864C4: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_100864EE; /* 0x100864C6: jne 0x100864ee */
L_100864C8:
    PUSH32(esp, eax); /* 0x100864C8: push eax */
    RECOMP_CALL(sub_1000ECE0); /* 0x100864C9: call 0x1000ece0 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, esi); /* 0x100864CE: push esi */
    RECOMP_CALL(sub_1000ECE0); /* 0x100864CF: call 0x1000ece0 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, MEM32(ebp + (-0x34))); /* 0x100864D4: push dword ptr [ebp - 0x34] */
    RECOMP_CALL(sub_1000ECE0); /* 0x100864D7: call 0x1000ece0 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x100864DC: add esp, 0xc */
    _flag_k = FK_ADD;
L_100864DF:
    RECOMP_CALL(sub_1001177D); /* 0x100864DF: call 0x1001177d */
    RECOMP_FLAGS_IN();
    ecx = MEM32(ebp + (-0x28)); /* 0x100864E4: mov ecx, dword ptr [ebp - 0x28] */
    MEM32(eax) = ecx; /* 0x100864E7: mov dword ptr [eax], ecx */
    goto L_1008665D; /* 0x100864E9: jmp 0x1008665d */
L_100864EE:
    PUSH32(esp, 0x10062180u); /* 0x100864EE: push 0x10062180 */
    PUSH32(esp, 0); /* 0x100864F3: push 0 */
    eax = ebp + (-0x2C); /* 0x100864F5: lea eax, [ebp - 0x2c] */
    PUSH32(esp, eax); /* 0x100864F8: push eax */
    RECOMP_CALL(sub_1002E415); /* 0x100864F9: call 0x1002e415 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x100864FE: add esp, 0xc */
    _flag_k = FK_ADD;
    /* test eax, eax */ /* 0x10086501: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1008653B; /* 0x10086503: je 0x1008653b */
L_10086505:
    /* cmp eax, 0x16u */ /* 0x10086505: cmp eax, 0x16 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x16u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_10086516; /* 0x10086508: jne 0x10086516 */
L_1008650A:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1008650A: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, eax); /* 0x1008650C: push eax */
    PUSH32(esp, eax); /* 0x1008650D: push eax */
    PUSH32(esp, eax); /* 0x1008650E: push eax */
    PUSH32(esp, eax); /* 0x1008650F: push eax */
    PUSH32(esp, eax); /* 0x10086510: push eax */
    RECOMP_BACKEDGE();
    goto L_10086379; /* 0x10086511: jmp 0x10086379 */
L_10086516:
    /* test eax, eax */ /* 0x10086516: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1008653B; /* 0x10086518: je 0x1008653b */
L_1008651A:
    PUSH32(esp, MEM32(ebp + (-0x2C))); /* 0x1008651A: push dword ptr [ebp - 0x2c] */
    RECOMP_CALL(sub_1000ECE0); /* 0x1008651D: call 0x1000ece0 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, edi); /* 0x10086522: push edi */
    RECOMP_CALL(sub_1000ECE0); /* 0x10086523: call 0x1000ece0 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, esi); /* 0x10086528: push esi */
    RECOMP_CALL(sub_1000ECE0); /* 0x10086529: call 0x1000ece0 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, MEM32(ebp + (-0x34))); /* 0x1008652E: push dword ptr [ebp - 0x34] */
    RECOMP_CALL(sub_1000ECE0); /* 0x10086531: call 0x1000ece0 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x10u; /* 0x10086536: add esp, 0x10 */
    _flag_k = FK_ADD;
    RECOMP_BACKEDGE();
    goto L_100864DF; /* 0x10086539: jmp 0x100864df */
L_1008653B:
    eax = MEM32(ebp + (-0x2C)); /* 0x1008653B: mov eax, dword ptr [ebp - 0x2c] */
L_1008653E:
    PUSH32(esp, 0x103u); /* 0x1008653E: push 0x103 */
    PUSH32(esp, edi); /* 0x10086543: push edi */
    PUSH32(esp, eax); /* 0x10086544: push eax */
    RECOMP_CALL(sub_1002EFAF); /* 0x10086545: call 0x1002efaf */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x1008654A: add esp, 0xc */
    _flag_k = FK_ADD;
    MEM32(ebp + (-0x44)) = eax; /* 0x1008654D: mov dword ptr [ebp - 0x44], eax */
    /* test eax, eax */ /* 0x10086550: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_10086607; /* 0x10086552: je 0x10086607 */
L_10086558:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x10086558: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp MEM16(edi), LO16(eax) */ /* 0x1008655A: cmp word ptr [edi], ax */
    _flag_a = (uint32_t)(MEM16(edi)) << 16; _flag_b = (uint32_t)(LO16(eax)) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_10086607; /* 0x1008655D: je 0x10086607 */
L_10086563:
    PUSH32(esp, edi); /* 0x10086563: push edi */
    RECOMP_CALL(sub_1000F1F3); /* 0x10086564: call 0x1000f1f3 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x10086569: pop ecx */
    eax = edi + eax * 2; /* 0x1008656A: lea eax, [edi + eax*2] */
    eax = (uint32_t)MEM16(eax + (-0x2)); /* 0x1008656D: movzx eax, word ptr [eax - 2] */
    /* cmp eax, 0x5Cu */ /* 0x10086571: cmp eax, 0x5c */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x5Cu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_10086596; /* 0x10086574: je 0x10086596 */
L_10086576:
    /* cmp eax, 0x2Fu */ /* 0x10086576: cmp eax, 0x2f */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x2Fu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_10086596; /* 0x10086579: je 0x10086596 */
L_1008657B:
    PUSH32(esp, 0x1006218Cu); /* 0x1008657B: push 0x1006218c */
    PUSH32(esp, 0x104u); /* 0x10086580: push 0x104 */
    PUSH32(esp, edi); /* 0x10086585: push edi */
    RECOMP_CALL(sub_1001212A); /* 0x10086586: call 0x1001212a */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x1008658B: add esp, 0xc */
    _flag_k = FK_ADD;
    /* test eax, eax */ /* 0x1008658E: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1008650A; /* 0x10086590: jne 0x1008650a */
L_10086596:
    PUSH32(esp, MEM32(ebp + (-0x30))); /* 0x10086596: push dword ptr [ebp - 0x30] */
    RECOMP_CALL(sub_1000F1F3); /* 0x10086599: call 0x1000f1f3 */
    RECOMP_FLAGS_IN();
    esi = eax; /* 0x1008659E: mov esi, eax */
    PUSH32(esp, edi); /* 0x100865A0: push edi */
    RECOMP_CALL(sub_1000F1F3); /* 0x100865A1: call 0x1000f1f3 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x100865A6: pop ecx */
    ecx = POP32_VAL(esp); /* 0x100865A7: pop ecx */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esi = esi + eax; /* 0x100865A8: add esi, eax */
    _flag_k = FK_ADD;
    eax = 0x104u; /* 0x100865AA: mov eax, 0x104 */
    /* cmp esi, eax */ /* 0x100865AF: cmp esi, eax */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_AE(_flag_a, _flag_b)) goto L_10086604; /* 0x100865B1: jae 0x10086604 */
L_100865B3:
    PUSH32(esp, MEM32(ebp + (-0x30))); /* 0x100865B3: push dword ptr [ebp - 0x30] */
    PUSH32(esp, eax); /* 0x100865B6: push eax */
    PUSH32(esp, edi); /* 0x100865B7: push edi */
    RECOMP_CALL(sub_1001212A); /* 0x100865B8: call 0x1001212a */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x100865BD: add esp, 0xc */
    _flag_k = FK_ADD;
    /* test eax, eax */ /* 0x100865C0: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1008650A; /* 0x100865C2: jne 0x1008650a */
L_100865C8:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    esi = 0; /* 0x100865C8: xor esi, esi */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, esi); /* 0x100865CA: push esi */
    PUSH32(esp, edi); /* 0x100865CB: push edi */
    RECOMP_CALL(sub_1001EE42); /* 0x100865CC: call 0x1001ee42 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x100865D1: pop ecx */
    ecx = POP32_VAL(esp); /* 0x100865D2: pop ecx */
    /* test eax, eax */ /* 0x100865D3: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_100865F9; /* 0x100865D5: jne 0x100865f9 */
L_100865D7:
    eax = ebp + (-0x74); /* 0x100865D7: lea eax, [ebp - 0x74] */
    PUSH32(esp, eax); /* 0x100865DA: push eax */
    eax = ebp + (-0xB8); /* 0x100865DB: lea eax, [ebp - 0xb8] */
    PUSH32(esp, eax); /* 0x100865E1: push eax */
    PUSH32(esp, esi); /* 0x100865E2: push esi */
    PUSH32(esp, esi); /* 0x100865E3: push esi */
    PUSH32(esp, esi); /* 0x100865E4: push esi */
    PUSH32(esp, 1); /* 0x100865E5: push 1 */
    PUSH32(esp, esi); /* 0x100865E7: push esi */
    PUSH32(esp, esi); /* 0x100865E8: push esi */
    esi = MEM32(ebp + (-0x54)); /* 0x100865E9: mov esi, dword ptr [ebp - 0x54] */
    PUSH32(esp, esi); /* 0x100865EC: push esi */
    PUSH32(esp, edi); /* 0x100865ED: push edi */
    RECOMP_ICALL(MEM32(0x100E50F8)); /* 0x100865EE: call dword ptr [0x100e50f8] */
    RECOMP_FLAGS_IN();
    MEM32(ebp + (-0x58)) = eax; /* 0x100865F4: mov dword ptr [ebp - 0x58], eax */
    goto L_10086607; /* 0x100865F7: jmp 0x10086607 */
L_100865F9:
    esi = MEM32(ebp + (-0x54)); /* 0x100865F9: mov esi, dword ptr [ebp - 0x54] */
    eax = MEM32(ebp + (-0x44)); /* 0x100865FC: mov eax, dword ptr [ebp - 0x44] */
    RECOMP_BACKEDGE();
    goto L_1008653E; /* 0x100865FF: jmp 0x1008653e */
L_10086604:
    esi = MEM32(ebp + (-0x54)); /* 0x10086604: mov esi, dword ptr [ebp - 0x54] */
L_10086607:
    PUSH32(esp, MEM32(ebp + (-0x2C))); /* 0x10086607: push dword ptr [ebp - 0x2c] */
    RECOMP_CALL(sub_1000ECE0); /* 0x1008660A: call 0x1000ece0 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, edi); /* 0x1008660F: push edi */
    RECOMP_CALL(sub_1000ECE0); /* 0x10086610: call 0x1000ece0 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x10086615: pop ecx */
    ecx = POP32_VAL(esp); /* 0x10086616: pop ecx */
    edi = MEM32(ebp + (-0x58)); /* 0x10086617: mov edi, dword ptr [ebp - 0x58] */
L_1008661A:
    PUSH32(esp, esi); /* 0x1008661A: push esi */
    RECOMP_CALL(sub_1000ECE0); /* 0x1008661B: call 0x1000ece0 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, MEM32(ebp + (-0x34))); /* 0x10086620: push dword ptr [ebp - 0x34] */
    RECOMP_CALL(sub_1000ECE0); /* 0x10086623: call 0x1000ece0 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x10086628: pop ecx */
    ecx = POP32_VAL(esp); /* 0x10086629: pop ecx */
    PUSH32(esp, MEM32(ebp + (-0x40))); /* 0x1008662A: push dword ptr [ebp - 0x40] */
    esi = MEM32(0x100E5074); /* 0x1008662D: mov esi, dword ptr [0x100e5074] */
    RECOMP_ICALL(esi); /* 0x10086633: call esi */
    RECOMP_FLAGS_IN();
    /* test edi, edi */ /* 0x10086635: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1008663E; /* 0x10086637: je 0x1008663e */
L_10086639:
    PUSH32(esp, MEM32(ebp + (-0x70))); /* 0x10086639: push dword ptr [ebp - 0x70] */
    RECOMP_ICALL(esi); /* 0x1008663C: call esi */
    RECOMP_FLAGS_IN();
L_1008663E:
    RECOMP_CALL(sub_1001177D); /* 0x1008663E: call 0x1001177d */
    RECOMP_FLAGS_IN();
    ecx = MEM32(ebp + (-0x28)); /* 0x10086643: mov ecx, dword ptr [ebp - 0x28] */
    MEM32(eax) = ecx; /* 0x10086646: mov dword ptr [eax], ecx */
    ecx = MEM32(ebp + (-0x64)); /* 0x10086648: mov ecx, dword ptr [ebp - 0x64] */
    /* test edi, edi */ /* 0x1008664B: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_10086659; /* 0x1008664D: je 0x10086659 */
L_1008664F:
    eax = MEM32(ebp + (-0x74)); /* 0x1008664F: mov eax, dword ptr [ebp - 0x74] */
    MEM32(ecx + 0x4) = eax; /* 0x10086652: mov dword ptr [ecx + 4], eax */
    MEM32(ecx) = ebx; /* 0x10086655: mov dword ptr [ecx], ebx */
    goto L_1008669C; /* 0x10086657: jmp 0x1008669c */
L_10086659:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x10086659: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ecx) = eax; /* 0x1008665B: mov dword ptr [ecx], eax */
L_1008665D:
    esi = MEM32(ebp + (-0x3C)); /* 0x1008665D: mov esi, dword ptr [ebp - 0x3c] */
L_10086660:
    PUSH32(esp, ebx); /* 0x10086660: push ebx */
    RECOMP_CALL(sub_10014F9E); /* 0x10086661: call 0x10014f9e */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x10086666: pop ecx */
    edi = MEM32(ebp + (-0x38)); /* 0x10086667: mov edi, dword ptr [ebp - 0x38] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ebx = 0; /* 0x1008666A: xor ebx, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + edi * 4 + (-0x60)) = ebx; /* 0x1008666C: mov dword ptr [ebp + edi*4 - 0x60], ebx */
    MEM32(ebp + (-0x48)) = ebx; /* 0x10086670: mov dword ptr [ebp - 0x48], ebx */
    goto L_10086678; /* 0x10086673: jmp 0x10086678 */
L_10086675:
    edi = MEM32(ebp + (-0x38)); /* 0x10086675: mov edi, dword ptr [ebp - 0x38] */
L_10086678:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x10086678: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp MEM32(ebp + esi * 4 + (-0x60)), eax */ /* 0x1008667A: cmp dword ptr [ebp + esi*4 - 0x60], eax */
    _flag_a = (uint32_t)(MEM32(ebp + esi * 4 + (-0x60))); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1008668C; /* 0x1008667E: je 0x1008668c */
L_10086680:
    PUSH32(esp, MEM32(ebp + esi * 4 + (-0x50))); /* 0x10086680: push dword ptr [ebp + esi*4 - 0x50] */
    RECOMP_CALL(sub_10014EA2); /* 0x10086684: call 0x10014ea2 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x10086689: pop ecx */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1008668A: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
L_1008668C:
    /* cmp MEM32(ebp + edi * 4 + (-0x60)), eax */ /* 0x1008668C: cmp dword ptr [ebp + edi*4 - 0x60], eax */
    _flag_a = (uint32_t)(MEM32(ebp + edi * 4 + (-0x60))); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1008669C; /* 0x10086690: je 0x1008669c */
L_10086692:
    PUSH32(esp, MEM32(ebp + edi * 4 + (-0x50))); /* 0x10086692: push dword ptr [ebp + edi*4 - 0x50] */
    RECOMP_CALL(sub_10014EA2); /* 0x10086696: call 0x10014ea2 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1008669B: pop ecx */
L_1008669C:
    MEM32(ebp + (-0x4)) = 0xFFFFFFFEu; /* 0x1008669C: mov dword ptr [ebp - 4], 0xfffffffe */
    RECOMP_CALL(sub_100866B3); /* 0x100866A3: call 0x100866b3 */
    RECOMP_FLAGS_IN();
L_100866A8:
    eax = ebx; /* 0x100866A8: mov eax, ebx */
L_100866AA:
    RECOMP_CALL(sub_1003542A); /* 0x100866AA: call 0x1003542a */
    RECOMP_FLAGS_IN();
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x100866AF: ret  */
    RECOMP_REGS_OUT();
}

void sub_100866B3(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x100866B3u);

L_100866B3:
    PUSH32(esp, 9); /* 0x100866B3: push 9 */
    RECOMP_CALL(sub_1000EDFC); /* 0x100866B5: call 0x1000edfc */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x100866BA: pop ecx */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x100866BB: ret  */
    RECOMP_REGS_OUT();
}

void sub_100866BC(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x100866BCu);

L_100866BC:
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    MEM8(eax) = (uint8_t)(MEM8(eax) & LO8(eax)); /* 0x100866BC: and byte ptr [eax], al */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    void_lift_trap(0x100866BEu, "das ");
    _flag_a = (uint32_t)(MEM8(ebx)) << 24; _flag_b = (uint32_t)(HI8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(ebx) = (uint8_t)(MEM8(ebx) + HI8(eax)); /* 0x100866BF: add byte ptr [ebx], ah */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    MEM8(eax) = (uint8_t)(MEM8(eax) & LO8(eax)); /* 0x100866C2: and byte ptr [eax], al */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x100866C4: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    /* nop */ /* 0x100866C6: nop  */
    /* nop */ /* 0x100866C7: nop  */
    /* in: no port I/O under Win32 */ /* 0x100866C8: in al, 0xff */
    RECOMP_ITAIL(0x100866CAu); { RECOMP_REGS_OUT(); return; } /* falls through */
    RECOMP_REGS_OUT();
}

void sub_100866C8(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x100866C8u);

L_100866C8:
    /* in: no port I/O under Win32 */ /* 0x100866C8: in al, 0xff */
    RECOMP_ITAIL(0x100866CAu); { RECOMP_REGS_OUT(); return; } /* falls through */
    RECOMP_REGS_OUT();
}

void sub_100866E4(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x100866E4u);

L_100866E4:
    PUSH32(esp, ebp); /* 0x100866E4: push ebp */
    ebp = esp; /* 0x100866E5: mov ebp, esp */
    ecx = MEM32(ebp + 0x8); /* 0x100866E7: mov ecx, dword ptr [ebp + 8] */
    PUSH32(esp, esi); /* 0x100866EA: push esi */
    /* test ecx, ecx */ /* 0x100866EB: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_10086713; /* 0x100866ED: je 0x10086713 */
L_100866EF:
    eax = MEM32(ebp + 0xC); /* 0x100866EF: mov eax, dword ptr [ebp + 0xc] */
    /* test eax, eax */ /* 0x100866F2: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_10086713; /* 0x100866F4: je 0x10086713 */
L_100866F6:
    /* cmp MEM8(ecx), 0 */ /* 0x100866F6: cmp byte ptr [ecx], 0 */
    _flag_a = (uint32_t)(MEM8(ecx)) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    edx = ecx; /* 0x100866F9: mov edx, ecx */
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1008670D; /* 0x100866FB: je 0x1008670d */
L_100866FD:
    PUSH32(esp, ebx); /* 0x100866FD: push ebx */
    ebx = MEM32(ebp + 0x10); /* 0x100866FE: mov ebx, dword ptr [ebp + 0x10] */
L_10086701:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax - 1; /* 0x10086701: dec eax */
    _flag_k = FK_DEC;
    if (/* dec result */ CMP_EQ(_flag_a, _flag_b)) goto L_1008670C; /* 0x10086702: je 0x1008670c */
L_10086704:
    MEM8(edx) = (uint8_t)(LO8(ebx)); /* 0x10086704: mov byte ptr [edx], bl */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(1);
    edx = edx + 1; /* 0x10086706: inc edx */
    _flag_k = FK_INC;
    /* cmp MEM8(edx), 0 */ /* 0x10086707: cmp byte ptr [edx], 0 */
    _flag_a = (uint32_t)(MEM8(edx)) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    RECOMP_BACKEDGE();
    if (CMP_NE(_flag_a, _flag_b)) goto L_10086701; /* 0x1008670A: jne 0x10086701 */
L_1008670C:
    ebx = POP32_VAL(esp); /* 0x1008670C: pop ebx */
L_1008670D:
    /* test eax, eax */ /* 0x1008670D: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_10086727; /* 0x1008670F: jne 0x10086727 */
L_10086711:
    MEM8(ecx) = (uint8_t)(LO8(eax)); /* 0x10086711: mov byte ptr [ecx], al */
L_10086713:
    RECOMP_CALL(sub_1001177D); /* 0x10086713: call 0x1001177d */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0x16u); /* 0x10086718: push 0x16 */
    esi = POP32_VAL(esp); /* 0x1008671A: pop esi */
    MEM32(eax) = esi; /* 0x1008671B: mov dword ptr [eax], esi */
    RECOMP_CALL(sub_100A4670); /* 0x1008671D: call 0x100a4670 */
    RECOMP_FLAGS_IN();
    eax = esi; /* 0x10086722: mov eax, esi */
L_10086724:
    esi = POP32_VAL(esp); /* 0x10086724: pop esi */
    ebp = POP32_VAL(esp); /* 0x10086725: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x10086726: ret  */
L_10086727:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x10086727: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    goto L_10086724; /* 0x10086729: jmp 0x10086724 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    RECOMP_REGS_OUT();
}

void sub_1008672B(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1008672Bu);

L_1008672B:
    PUSH32(esp, ebp); /* 0x1008672B: push ebp */
    ebp = esp; /* 0x1008672C: mov ebp, esp */
    ecx = MEM32(ebp + 0x8); /* 0x1008672E: mov ecx, dword ptr [ebp + 8] */
    PUSH32(esp, esi); /* 0x10086731: push esi */
    esi = MEM32(ebp + 0x14); /* 0x10086732: mov esi, dword ptr [ebp + 0x14] */
    /* test esi, esi */ /* 0x10086735: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_10086746; /* 0x10086737: jne 0x10086746 */
L_10086739:
    /* test ecx, ecx */ /* 0x10086739: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1008674A; /* 0x1008673B: jne 0x1008674a */
L_1008673D:
    /* cmp MEM32(ebp + 0xC), ecx */ /* 0x1008673D: cmp dword ptr [ebp + 0xc], ecx */
    _flag_a = (uint32_t)(MEM32(ebp + 0xC)); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_10086782; /* 0x10086740: jne 0x10086782 */
L_10086742:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x10086742: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_10086793; /* 0x10086744: jmp 0x10086793 */
L_10086746:
    /* test ecx, ecx */ /* 0x10086746: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_10086782; /* 0x10086748: je 0x10086782 */
L_1008674A:
    edx = MEM32(ebp + 0xC); /* 0x1008674A: mov edx, dword ptr [ebp + 0xc] */
    /* test edx, edx */ /* 0x1008674D: test edx, edx */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(edx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_10086782; /* 0x1008674F: je 0x10086782 */
L_10086751:
    /* cmp MEM8(ecx), 0 */ /* 0x10086751: cmp byte ptr [ecx], 0 */
    _flag_a = (uint32_t)(MEM8(ecx)) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    eax = ecx; /* 0x10086754: mov eax, ecx */
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1008676D; /* 0x10086756: je 0x1008676d */
L_10086758:
    PUSH32(esp, ebx); /* 0x10086758: push ebx */
    ebx = MEM32(ebp + 0x10); /* 0x10086759: mov ebx, dword ptr [ebp + 0x10] */
L_1008675C:
    /* test esi, esi */ /* 0x1008675C: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1008676C; /* 0x1008675E: je 0x1008676c */
L_10086760:
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(1);
    edx = edx - 1; /* 0x10086760: dec edx */
    _flag_k = FK_DEC;
    if (/* dec result */ CMP_EQ(_flag_a, _flag_b)) goto L_1008676C; /* 0x10086761: je 0x1008676c */
L_10086763:
    MEM8(eax) = (uint8_t)(LO8(ebx)); /* 0x10086763: mov byte ptr [eax], bl */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x10086765: inc eax */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi - 1; /* 0x10086766: dec esi */
    _flag_k = FK_DEC;
    /* cmp MEM8(eax), 0 */ /* 0x10086767: cmp byte ptr [eax], 0 */
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    RECOMP_BACKEDGE();
    if (CMP_NE(_flag_a, _flag_b)) goto L_1008675C; /* 0x1008676A: jne 0x1008675c */
L_1008676C:
    ebx = POP32_VAL(esp); /* 0x1008676C: pop ebx */
L_1008676D:
    /* test esi, esi */ /* 0x1008676D: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_10086777; /* 0x1008676F: je 0x10086777 */
L_10086771:
    goto L_1008677C; /* 0x10086771: jmp 0x1008677c */
L_10086773:
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(1);
    edx = edx - 1; /* 0x10086773: dec edx */
    _flag_k = FK_DEC;
    if (/* dec result */ CMP_EQ(_flag_a, _flag_b)) goto L_1008677C; /* 0x10086774: je 0x1008677c */
L_10086776:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x10086776: inc eax */
    _flag_k = FK_INC;
L_10086777:
    /* cmp MEM8(eax), 0 */ /* 0x10086777: cmp byte ptr [eax], 0 */
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    RECOMP_BACKEDGE();
    if (CMP_NE(_flag_a, _flag_b)) goto L_10086773; /* 0x1008677A: jne 0x10086773 */
L_1008677C:
    /* test edx, edx */ /* 0x1008677C: test edx, edx */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(edx);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_10086742; /* 0x1008677E: jne 0x10086742 */
L_10086780:
    MEM8(ecx) = (uint8_t)(LO8(edx)); /* 0x10086780: mov byte ptr [ecx], dl */
L_10086782:
    RECOMP_CALL(sub_1001177D); /* 0x10086782: call 0x1001177d */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0x16u); /* 0x10086787: push 0x16 */
    esi = POP32_VAL(esp); /* 0x10086789: pop esi */
    MEM32(eax) = esi; /* 0x1008678A: mov dword ptr [eax], esi */
    RECOMP_CALL(sub_100A4670); /* 0x1008678C: call 0x100a4670 */
    RECOMP_FLAGS_IN();
    eax = esi; /* 0x10086791: mov eax, esi */
L_10086793:
    esi = POP32_VAL(esp); /* 0x10086793: pop esi */
    ebp = POP32_VAL(esp); /* 0x10086794: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x10086795: ret  */
    RECOMP_REGS_OUT();
}

void sub_10086796(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x10086796u);

L_10086796:
    PUSH32(esp, ebp); /* 0x10086796: push ebp */
    ebp = esp; /* 0x10086797: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x28u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x28u; /* 0x10086799: sub esp, 0x28 */
    _flag_k = FK_CMP;
    eax = MEM32(0x100DF7B8); /* 0x1008679C: mov eax, dword ptr [0x100df7b8] */
    _flag_a = (uint32_t)((eax ^ ebp)); _flag_b = (uint32_t)((eax ^ ebp));
    eax = eax ^ ebp; /* 0x100867A1: xor eax, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x4)) = eax; /* 0x100867A3: mov dword ptr [ebp - 4], eax */
    PUSH32(esp, esi); /* 0x100867A6: push esi */
    esi = MEM32(ebp + 0x8); /* 0x100867A7: mov esi, dword ptr [ebp + 8] */
    PUSH32(esp, edi); /* 0x100867AA: push edi */
    edi = MEM32(ebp + 0xC); /* 0x100867AB: mov edi, dword ptr [ebp + 0xc] */
    RECOMP_CALL(sub_1000F750); /* 0x100867AE: call 0x1000f750 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x100867B3: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x28)) = eax; /* 0x100867B5: mov dword ptr [ebp - 0x28], eax */
    /* cmp ecx, 0x20u */ /* 0x100867B8: cmp ecx, 0x20 */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x20u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
L_100867BB:
    if (recomp_cond_cf(_flag_k, _flag_a, _flag_b, CC_AE, _cf)) goto L_10086857; /* 0x100867BB: jae 0x10086857 */
L_100867C1:
    MEM8(ebp + ecx + (-0x24)) = (uint8_t)(0); /* 0x100867C1: mov byte ptr [ebp + ecx - 0x24], 0 */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx + 1; /* 0x100867C6: inc ecx */
    _flag_k = FK_INC;
    /* cmp ecx, 0x20u */ /* 0x100867C7: cmp ecx, 0x20 */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x20u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_L(_flag_a, _flag_b)) goto L_100867BB; /* 0x100867CA: jl 0x100867bb */
L_100867CC:
    PUSH32(esp, ebx); /* 0x100867CC: push ebx */
L_100867CD:
    SET_LO8(ebx, MEM8(edi)); /* 0x100867CD: mov bl, byte ptr [edi] */
    SET_LO8(eax, 1); /* 0x100867CF: mov al, 1 */
    ecx = (uint32_t)LO8(ebx); /* 0x100867D1: movzx ecx, bl */
    edx = ecx; /* 0x100867D4: mov edx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(7);
    ecx = ecx & 7; /* 0x100867D6: and ecx, 7 */
    _cf = 0;
    _flag_k = FK_TEST;
    if (3u) _cf = (((edx) >> 2) & 1u); /* 0x100867D9: shr edx, 3 */
    if (3u) { _flag_a = recomp_flags_pack((edx >> 3u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    edx = edx >> 3u; /* 0x100867D9: shr edx, 3 */
    if (((LO8(ecx)) & 31)) _cf = ((((LO8(ecx)) & 31)) <= 8 ? (((LO8(eax)) >> (8 - (((LO8(ecx)) & 31)))) & 1u) : 0u); /* 0x100867DC: shl al, cl */
    if (((LO8(ecx)) & 31)) { _flag_a = recomp_flags_pack(((uint32_t)((LO8(eax) << ((LO8(ecx)) & 31))) << 24), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    SET_LO8(eax, LO8(eax) << ((LO8(ecx)) & 31)); /* 0x100867DC: shl al, cl */
    _flag_a = (uint32_t)((MEM8(ebp + edx + (-0x24)) | LO8(eax))) << 24; _flag_b = (uint32_t)((MEM8(ebp + edx + (-0x24)) | LO8(eax))) << 24;
    MEM8(ebp + edx + (-0x24)) = (uint8_t)(MEM8(ebp + edx + (-0x24)) | LO8(eax)); /* 0x100867DE: or byte ptr [ebp + edx - 0x24], al */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(1);
    edi = edi + 1; /* 0x100867E2: inc edi */
    _flag_k = FK_INC;
    /* test LO8(ebx), LO8(ebx) */ /* 0x100867E3: test bl, bl */
    _flag_a = (uint32_t)(LO8(ebx)) << 24; _flag_b = (uint32_t)(LO8(ebx)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_100867CD; /* 0x100867E5: jne 0x100867cd */
L_100867E7:
    /* test esi, esi */ /* 0x100867E7: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_100867F8; /* 0x100867E9: jne 0x100867f8 */
L_100867EB:
    esi = MEM32(ebp + (-0x28)); /* 0x100867EB: mov esi, dword ptr [ebp - 0x28] */
    esi = MEM32(esi + 0x18); /* 0x100867EE: mov esi, dword ptr [esi + 0x18] */
    goto L_100867F8; /* 0x100867F1: jmp 0x100867f8 */
L_100867F3:
    /* test LO8(ebx), LO8(ebx) */ /* 0x100867F3: test bl, bl */
    _flag_a = (uint32_t)(LO8(ebx)) << 24; _flag_b = (uint32_t)(LO8(ebx)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_10086810; /* 0x100867F5: je 0x10086810 */
L_100867F7:
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi + 1; /* 0x100867F7: inc esi */
    _flag_k = FK_INC;
L_100867F8:
    SET_LO8(ebx, MEM8(esi)); /* 0x100867F8: mov bl, byte ptr [esi] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x100867FA: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    edx = (uint32_t)LO8(ebx); /* 0x100867FC: movzx edx, bl */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x100867FF: inc eax */
    _flag_k = FK_INC;
    ecx = edx; /* 0x10086800: mov ecx, edx */
    if (3u) _cf = (((edx) >> 2) & 1u); /* 0x10086802: shr edx, 3 */
    if (3u) { _flag_a = recomp_flags_pack((edx >> 3u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    edx = edx >> 3u; /* 0x10086802: shr edx, 3 */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(7);
    ecx = ecx & 7; /* 0x10086805: and ecx, 7 */
    _cf = 0;
    _flag_k = FK_TEST;
    if (((LO8(ecx)) & 31)) _cf = ((((LO8(ecx)) & 31)) <= 32 ? (((eax) >> (32 - (((LO8(ecx)) & 31)))) & 1u) : 0u); /* 0x10086808: shl eax, cl */
    if (((LO8(ecx)) & 31)) { _flag_a = recomp_flags_pack((eax << ((LO8(ecx)) & 31)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax << ((LO8(ecx)) & 31); /* 0x10086808: shl eax, cl */
    /* test MEM8(ebp + edx + (-0x24)), LO8(eax) */ /* 0x1008680A: test byte ptr [ebp + edx - 0x24], al */
    _flag_a = (uint32_t)(MEM8(ebp + edx + (-0x24))) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_100867F3; /* 0x1008680E: jne 0x100867f3 */
L_10086810:
    edi = esi; /* 0x10086810: mov edi, esi */
    ebx = POP32_VAL(esp); /* 0x10086812: pop ebx */
    goto L_1008682C; /* 0x10086813: jmp 0x1008682c */
L_10086815:
    edx = (uint32_t)MEM8(esi); /* 0x10086815: movzx edx, byte ptr [esi] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x10086818: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = edx; /* 0x1008681A: mov ecx, edx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x1008681C: inc eax */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(7);
    ecx = ecx & 7; /* 0x1008681D: and ecx, 7 */
    _cf = 0;
    _flag_k = FK_TEST;
    if (3u) _cf = (((edx) >> 2) & 1u); /* 0x10086820: shr edx, 3 */
    if (3u) { _flag_a = recomp_flags_pack((edx >> 3u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    edx = edx >> 3u; /* 0x10086820: shr edx, 3 */
    if (((LO8(ecx)) & 31)) _cf = ((((LO8(ecx)) & 31)) <= 32 ? (((eax) >> (32 - (((LO8(ecx)) & 31)))) & 1u) : 0u); /* 0x10086823: shl eax, cl */
    if (((LO8(ecx)) & 31)) { _flag_a = recomp_flags_pack((eax << ((LO8(ecx)) & 31)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax << ((LO8(ecx)) & 31); /* 0x10086823: shl eax, cl */
    /* test MEM8(ebp + edx + (-0x24)), LO8(eax) */ /* 0x10086825: test byte ptr [ebp + edx - 0x24], al */
    _flag_a = (uint32_t)(MEM8(ebp + edx + (-0x24))) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_10086833; /* 0x10086829: jne 0x10086833 */
L_1008682B:
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi + 1; /* 0x1008682B: inc esi */
    _flag_k = FK_INC;
L_1008682C:
    /* cmp MEM8(esi), 0 */ /* 0x1008682C: cmp byte ptr [esi], 0 */
    _flag_a = (uint32_t)(MEM8(esi)) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_10086837; /* 0x1008682F: je 0x10086837 */
L_10086831:
    RECOMP_BACKEDGE();
    goto L_10086815; /* 0x10086831: jmp 0x10086815 */
L_10086833:
    MEM8(esi) = (uint8_t)(0); /* 0x10086833: mov byte ptr [esi], 0 */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi + 1; /* 0x10086836: inc esi */
    _flag_k = FK_INC;
L_10086837:
    eax = MEM32(ebp + (-0x28)); /* 0x10086837: mov eax, dword ptr [ebp - 0x28] */
    ecx = MEM32(ebp + (-0x4)); /* 0x1008683A: mov ecx, dword ptr [ebp - 4] */
    MEM32(eax + 0x18) = esi; /* 0x1008683D: mov dword ptr [eax + 0x18], esi */
    eax = edi; /* 0x10086840: mov eax, edi */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - esi; /* 0x10086842: sub eax, esi */
    _flag_k = FK_CMP;
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(eax);
    _cf = (eax) != 0;
    eax = (uint32_t)(-(int32_t)eax); /* 0x10086844: neg eax */
    _flag_k = FK_CMP;
    { uint32_t _sa = eax, _sb = eax, _sc = (uint32_t)CMP_B(_flag_a, _flag_b); /* 0x10086846: sbb eax, eax */
      eax = _sc ? 0xFFFFFFFFu : 0;
      _flag_a = recomp_flags_sbb(_sa, _sb, _sc); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    _flag_a = (uint32_t)((ecx ^ ebp)); _flag_b = (uint32_t)((ecx ^ ebp));
    ecx = ecx ^ ebp; /* 0x10086848: xor ecx, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edi);
    eax = eax & edi; /* 0x1008684A: and eax, edi */
    _cf = 0;
    _flag_k = FK_TEST;
    edi = POP32_VAL(esp); /* 0x1008684C: pop edi */
    esi = POP32_VAL(esp); /* 0x1008684D: pop esi */
    RECOMP_CALL(sub_1000F7C6); /* 0x1008684E: call 0x1000f7c6 */
    RECOMP_FLAGS_IN();
    esp = ebp; /* 0x10086853: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x10086855: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x10086856: ret  */
L_10086857:
    RECOMP_CALL(sub_100A54B8); /* 0x10086857: call 0x100a54b8 */
    RECOMP_FLAGS_IN();
    void_lift_trap(0x1008685Cu, "int3 ");
    { RECOMP_REGS_OUT(); return; } /* end of function */
    RECOMP_REGS_OUT();
}

void sub_1008685D(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1008685Du);

L_1008685D:
    PUSH32(esp, ebp); /* 0x1008685D: push ebp */
    ebp = esp; /* 0x1008685E: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x2Cu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x2Cu; /* 0x10086860: sub esp, 0x2c */
    _flag_k = FK_CMP;
    eax = MEM32(0x100DF7B8); /* 0x10086863: mov eax, dword ptr [0x100df7b8] */
    _flag_a = (uint32_t)((eax ^ ebp)); _flag_b = (uint32_t)((eax ^ ebp));
    eax = eax ^ ebp; /* 0x10086868: xor eax, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x4)) = eax; /* 0x1008686A: mov dword ptr [ebp - 4], eax */
    eax = MEM32(ebp + 0xC); /* 0x1008686D: mov eax, dword ptr [ebp + 0xc] */
    PUSH32(esp, esi); /* 0x10086870: push esi */
    esi = MEM32(ebp + 0x8); /* 0x10086871: mov esi, dword ptr [ebp + 8] */
    PUSH32(esp, edi); /* 0x10086874: push edi */
    edi = MEM32(ebp + 0x10); /* 0x10086875: mov edi, dword ptr [ebp + 0x10] */
    MEM32(ebp + (-0x2C)) = eax; /* 0x10086878: mov dword ptr [ebp - 0x2c], eax */
    MEM32(ebp + (-0x28)) = edi; /* 0x1008687B: mov dword ptr [ebp - 0x28], edi */
    /* test edi, edi */ /* 0x1008687E: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_100868A4; /* 0x10086880: jne 0x100868a4 */
L_10086882:
    RECOMP_CALL(sub_1001177D); /* 0x10086882: call 0x1001177d */
    RECOMP_FLAGS_IN();
    MEM32(eax) = 0x16u; /* 0x10086887: mov dword ptr [eax], 0x16 */
    RECOMP_CALL(sub_100A4670); /* 0x1008688D: call 0x100a4670 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x10086892: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
L_10086894:
    ecx = MEM32(ebp + (-0x4)); /* 0x10086894: mov ecx, dword ptr [ebp - 4] */
    edi = POP32_VAL(esp); /* 0x10086897: pop edi */
    _flag_a = (uint32_t)((ecx ^ ebp)); _flag_b = (uint32_t)((ecx ^ ebp));
    ecx = ecx ^ ebp; /* 0x10086898: xor ecx, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    esi = POP32_VAL(esp); /* 0x1008689A: pop esi */
    RECOMP_CALL(sub_1000F7C6); /* 0x1008689B: call 0x1000f7c6 */
    RECOMP_FLAGS_IN();
    esp = ebp; /* 0x100868A0: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x100868A2: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x100868A3: ret  */
L_100868A4:
    /* test eax, eax */ /* 0x100868A4: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_Z(_flag_a, _flag_b)) goto L_10086882; /* 0x100868A6: je 0x10086882 */
L_100868A8:
    /* test esi, esi */ /* 0x100868A8: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_100868B0; /* 0x100868AA: jne 0x100868b0 */
L_100868AC:
    /* cmp MEM32(edi), esi */ /* 0x100868AC: cmp dword ptr [edi], esi */
    _flag_a = (uint32_t)(MEM32(edi)); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_EQ(_flag_a, _flag_b)) goto L_10086882; /* 0x100868AE: je 0x10086882 */
L_100868B0:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x100868B0: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp eax, 0x20u */ /* 0x100868B2: cmp eax, 0x20 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x20u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
L_100868B5:
    if (recomp_cond_cf(_flag_k, _flag_a, _flag_b, CC_AE, _cf)) goto L_10086944; /* 0x100868B5: jae 0x10086944 */
L_100868BB:
    MEM8(ebp + eax + (-0x24)) = (uint8_t)(0); /* 0x100868BB: mov byte ptr [ebp + eax - 0x24], 0 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x100868C0: inc eax */
    _flag_k = FK_INC;
    /* cmp eax, 0x20u */ /* 0x100868C1: cmp eax, 0x20 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x20u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_L(_flag_a, _flag_b)) goto L_100868B5; /* 0x100868C4: jl 0x100868b5 */
L_100868C6:
    edi = MEM32(ebp + (-0x2C)); /* 0x100868C6: mov edi, dword ptr [ebp - 0x2c] */
    PUSH32(esp, ebx); /* 0x100868C9: push ebx */
L_100868CA:
    SET_LO8(ebx, MEM8(edi)); /* 0x100868CA: mov bl, byte ptr [edi] */
    SET_LO8(eax, 1); /* 0x100868CC: mov al, 1 */
    ecx = (uint32_t)LO8(ebx); /* 0x100868CE: movzx ecx, bl */
    edx = ecx; /* 0x100868D1: mov edx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(7);
    ecx = ecx & 7; /* 0x100868D3: and ecx, 7 */
    _cf = 0;
    _flag_k = FK_TEST;
    if (3u) _cf = (((edx) >> 2) & 1u); /* 0x100868D6: shr edx, 3 */
    if (3u) { _flag_a = recomp_flags_pack((edx >> 3u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    edx = edx >> 3u; /* 0x100868D6: shr edx, 3 */
    if (((LO8(ecx)) & 31)) _cf = ((((LO8(ecx)) & 31)) <= 8 ? (((LO8(eax)) >> (8 - (((LO8(ecx)) & 31)))) & 1u) : 0u); /* 0x100868D9: shl al, cl */
    if (((LO8(ecx)) & 31)) { _flag_a = recomp_flags_pack(((uint32_t)((LO8(eax) << ((LO8(ecx)) & 31))) << 24), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    SET_LO8(eax, LO8(eax) << ((LO8(ecx)) & 31)); /* 0x100868D9: shl al, cl */
    _flag_a = (uint32_t)((MEM8(ebp + edx + (-0x24)) | LO8(eax))) << 24; _flag_b = (uint32_t)((MEM8(ebp + edx + (-0x24)) | LO8(eax))) << 24;
    MEM8(ebp + edx + (-0x24)) = (uint8_t)(MEM8(ebp + edx + (-0x24)) | LO8(eax)); /* 0x100868DB: or byte ptr [ebp + edx - 0x24], al */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(1);
    edi = edi + 1; /* 0x100868DF: inc edi */
    _flag_k = FK_INC;
    /* test LO8(ebx), LO8(ebx) */ /* 0x100868E0: test bl, bl */
    _flag_a = (uint32_t)(LO8(ebx)) << 24; _flag_b = (uint32_t)(LO8(ebx)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_100868CA; /* 0x100868E2: jne 0x100868ca */
L_100868E4:
    edi = MEM32(ebp + (-0x28)); /* 0x100868E4: mov edi, dword ptr [ebp - 0x28] */
    /* test esi, esi */ /* 0x100868E7: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_100868F4; /* 0x100868E9: jne 0x100868f4 */
L_100868EB:
    esi = MEM32(edi); /* 0x100868EB: mov esi, dword ptr [edi] */
    goto L_100868F4; /* 0x100868ED: jmp 0x100868f4 */
L_100868EF:
    /* test LO8(ebx), LO8(ebx) */ /* 0x100868EF: test bl, bl */
    _flag_a = (uint32_t)(LO8(ebx)) << 24; _flag_b = (uint32_t)(LO8(ebx)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_1008690C; /* 0x100868F1: je 0x1008690c */
L_100868F3:
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi + 1; /* 0x100868F3: inc esi */
    _flag_k = FK_INC;
L_100868F4:
    SET_LO8(ebx, MEM8(esi)); /* 0x100868F4: mov bl, byte ptr [esi] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x100868F6: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    edx = (uint32_t)LO8(ebx); /* 0x100868F8: movzx edx, bl */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x100868FB: inc eax */
    _flag_k = FK_INC;
    ecx = edx; /* 0x100868FC: mov ecx, edx */
    if (3u) _cf = (((edx) >> 2) & 1u); /* 0x100868FE: shr edx, 3 */
    if (3u) { _flag_a = recomp_flags_pack((edx >> 3u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    edx = edx >> 3u; /* 0x100868FE: shr edx, 3 */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(7);
    ecx = ecx & 7; /* 0x10086901: and ecx, 7 */
    _cf = 0;
    _flag_k = FK_TEST;
    if (((LO8(ecx)) & 31)) _cf = ((((LO8(ecx)) & 31)) <= 32 ? (((eax) >> (32 - (((LO8(ecx)) & 31)))) & 1u) : 0u); /* 0x10086904: shl eax, cl */
    if (((LO8(ecx)) & 31)) { _flag_a = recomp_flags_pack((eax << ((LO8(ecx)) & 31)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax << ((LO8(ecx)) & 31); /* 0x10086904: shl eax, cl */
    /* test MEM8(ebp + edx + (-0x24)), LO8(eax) */ /* 0x10086906: test byte ptr [ebp + edx - 0x24], al */
    _flag_a = (uint32_t)(MEM8(ebp + edx + (-0x24))) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_100868EF; /* 0x1008690A: jne 0x100868ef */
L_1008690C:
    ebx = esi; /* 0x1008690C: mov ebx, esi */
    goto L_10086927; /* 0x1008690E: jmp 0x10086927 */
L_10086910:
    edx = (uint32_t)MEM8(esi); /* 0x10086910: movzx edx, byte ptr [esi] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x10086913: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = edx; /* 0x10086915: mov ecx, edx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x10086917: inc eax */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(7);
    ecx = ecx & 7; /* 0x10086918: and ecx, 7 */
    _cf = 0;
    _flag_k = FK_TEST;
    if (3u) _cf = (((edx) >> 2) & 1u); /* 0x1008691B: shr edx, 3 */
    if (3u) { _flag_a = recomp_flags_pack((edx >> 3u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    edx = edx >> 3u; /* 0x1008691B: shr edx, 3 */
    if (((LO8(ecx)) & 31)) _cf = ((((LO8(ecx)) & 31)) <= 32 ? (((eax) >> (32 - (((LO8(ecx)) & 31)))) & 1u) : 0u); /* 0x1008691E: shl eax, cl */
    if (((LO8(ecx)) & 31)) { _flag_a = recomp_flags_pack((eax << ((LO8(ecx)) & 31)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax << ((LO8(ecx)) & 31); /* 0x1008691E: shl eax, cl */
    /* test MEM8(ebp + edx + (-0x24)), LO8(eax) */ /* 0x10086920: test byte ptr [ebp + edx - 0x24], al */
    _flag_a = (uint32_t)(MEM8(ebp + edx + (-0x24))) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1008692E; /* 0x10086924: jne 0x1008692e */
L_10086926:
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi + 1; /* 0x10086926: inc esi */
    _flag_k = FK_INC;
L_10086927:
    /* cmp MEM8(esi), 0 */ /* 0x10086927: cmp byte ptr [esi], 0 */
    _flag_a = (uint32_t)(MEM8(esi)) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_10086932; /* 0x1008692A: je 0x10086932 */
L_1008692C:
    RECOMP_BACKEDGE();
    goto L_10086910; /* 0x1008692C: jmp 0x10086910 */
L_1008692E:
    MEM8(esi) = (uint8_t)(0); /* 0x1008692E: mov byte ptr [esi], 0 */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi + 1; /* 0x10086931: inc esi */
    _flag_k = FK_INC;
L_10086932:
    eax = ebx; /* 0x10086932: mov eax, ebx */
    MEM32(edi) = esi; /* 0x10086934: mov dword ptr [edi], esi */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - esi; /* 0x10086936: sub eax, esi */
    _flag_k = FK_CMP;
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(eax);
    _cf = (eax) != 0;
    eax = (uint32_t)(-(int32_t)eax); /* 0x10086938: neg eax */
    _flag_k = FK_CMP;
    { uint32_t _sa = eax, _sb = eax, _sc = (uint32_t)CMP_B(_flag_a, _flag_b); /* 0x1008693A: sbb eax, eax */
      eax = _sc ? 0xFFFFFFFFu : 0;
      _flag_a = recomp_flags_sbb(_sa, _sb, _sc); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ebx);
    eax = eax & ebx; /* 0x1008693C: and eax, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
    ebx = POP32_VAL(esp); /* 0x1008693E: pop ebx */
    RECOMP_BACKEDGE();
    goto L_10086894; /* 0x1008693F: jmp 0x10086894 */
L_10086944:
    RECOMP_CALL(sub_100A54B8); /* 0x10086944: call 0x100a54b8 */
    RECOMP_FLAGS_IN();
    void_lift_trap(0x10086949u, "int3 ");
    { RECOMP_REGS_OUT(); return; } /* end of function */
    RECOMP_REGS_OUT();
}

void sub_1008694A(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1008694Au);

L_1008694A:
    PUSH32(esp, ebp); /* 0x1008694A: push ebp */
    ebp = esp; /* 0x1008694B: mov ebp, esp */
    eax = MEM32(ebp + 0x8); /* 0x1008694D: mov eax, dword ptr [ebp + 8] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x10086950: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    edx = eax; /* 0x10086952: mov edx, eax */
    /* cmp MEM16(eax), LO16(ecx) */ /* 0x10086954: cmp word ptr [eax], cx */
    _flag_a = (uint32_t)(MEM16(eax)) << 16; _flag_b = (uint32_t)(LO16(ecx)) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_10086961; /* 0x10086957: je 0x10086961 */
L_10086959:
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edx = edx + 2; /* 0x10086959: add edx, 2 */
    _flag_k = FK_ADD;
    /* cmp MEM16(edx), LO16(ecx) */ /* 0x1008695C: cmp word ptr [edx], cx */
    _flag_a = (uint32_t)(MEM16(edx)) << 16; _flag_b = (uint32_t)(LO16(ecx)) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    RECOMP_BACKEDGE();
    if (CMP_NE(_flag_a, _flag_b)) goto L_10086959; /* 0x1008695F: jne 0x10086959 */
L_10086961:
    PUSH32(esp, esi); /* 0x10086961: push esi */
    esi = MEM32(ebp + 0xC); /* 0x10086962: mov esi, dword ptr [ebp + 0xc] */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    edx = edx - esi; /* 0x10086965: sub edx, esi */
    _flag_k = FK_CMP;
L_10086967:
    ecx = (uint32_t)MEM16(esi); /* 0x10086967: movzx ecx, word ptr [esi] */
    MEM16(edx + esi) = (uint16_t)(LO16(ecx)); /* 0x1008696A: mov word ptr [edx + esi], cx */
    esi = esi + 0x2; /* 0x1008696E: lea esi, [esi + 2] */
    /* test LO16(ecx), LO16(ecx) */ /* 0x10086971: test cx, cx */
    _flag_a = (uint32_t)(LO16(ecx)) << 16; _flag_b = (uint32_t)(LO16(ecx)) << 16;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 16);
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_10086967; /* 0x10086974: jne 0x10086967 */
L_10086976:
    esi = POP32_VAL(esp); /* 0x10086976: pop esi */
    ebp = POP32_VAL(esp); /* 0x10086977: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x10086978: ret  */
    RECOMP_REGS_OUT();
}

void sub_10086979(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x10086979u);

L_10086979:
    PUSH32(esp, ebp); /* 0x10086979: push ebp */
    ebp = esp; /* 0x1008697A: mov ebp, esp */
    eax = MEM32(ebp + 0x8); /* 0x1008697C: mov eax, dword ptr [ebp + 8] */
    edx = MEM32(ebp + 0xC); /* 0x1008697F: mov edx, dword ptr [ebp + 0xc] */
    PUSH32(esp, esi); /* 0x10086982: push esi */
    esi = eax; /* 0x10086983: mov esi, eax */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esi = esi - edx; /* 0x10086985: sub esi, edx */
    _flag_k = FK_CMP;
L_10086987:
    ecx = (uint32_t)MEM16(edx); /* 0x10086987: movzx ecx, word ptr [edx] */
    MEM16(edx + esi) = (uint16_t)(LO16(ecx)); /* 0x1008698A: mov word ptr [edx + esi], cx */
    edx = edx + 0x2; /* 0x1008698E: lea edx, [edx + 2] */
    /* test LO16(ecx), LO16(ecx) */ /* 0x10086991: test cx, cx */
    _flag_a = (uint32_t)(LO16(ecx)) << 16; _flag_b = (uint32_t)(LO16(ecx)) << 16;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 16);
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_10086987; /* 0x10086994: jne 0x10086987 */
L_10086996:
    esi = POP32_VAL(esp); /* 0x10086996: pop esi */
    ebp = POP32_VAL(esp); /* 0x10086997: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x10086998: ret  */
    RECOMP_REGS_OUT();
}

void sub_10086999(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x10086999u);

L_10086999:
    PUSH32(esp, ebp); /* 0x10086999: push ebp */
    ebp = esp; /* 0x1008699A: mov ebp, esp */
    ecx = MEM32(ebp + 0x8); /* 0x1008699C: mov ecx, dword ptr [ebp + 8] */
    PUSH32(esp, esi); /* 0x1008699F: push esi */
    PUSH32(esp, edi); /* 0x100869A0: push edi */
    esi = ecx; /* 0x100869A1: mov esi, ecx */
L_100869A3:
    SET_LO16(eax, MEM16(ecx)); /* 0x100869A3: mov ax, word ptr [ecx] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 2; /* 0x100869A6: add ecx, 2 */
    _flag_k = FK_ADD;
    /* test LO16(eax), LO16(eax) */ /* 0x100869A9: test ax, ax */
    _flag_a = (uint32_t)(LO16(eax)) << 16; _flag_b = (uint32_t)(LO16(eax)) << 16;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 16);
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_100869A3; /* 0x100869AC: jne 0x100869a3 */
L_100869AE:
    edx = MEM32(ebp + 0x10); /* 0x100869AE: mov edx, dword ptr [ebp + 0x10] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ecx = ecx - 2; /* 0x100869B1: sub ecx, 2 */
    _flag_k = FK_CMP;
    /* test edx, edx */ /* 0x100869B4: test edx, edx */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(edx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_100869D1; /* 0x100869B6: je 0x100869d1 */
L_100869B8:
    edi = MEM32(ebp + 0xC); /* 0x100869B8: mov edi, dword ptr [ebp + 0xc] */
L_100869BB:
    eax = (uint32_t)MEM16(edi); /* 0x100869BB: movzx eax, word ptr [edi] */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(1);
    edx = edx - 1; /* 0x100869BE: dec edx */
    _flag_k = FK_DEC;
    MEM16(ecx) = (uint16_t)(LO16(eax)); /* 0x100869BF: mov word ptr [ecx], ax */
    edi = edi + 0x2; /* 0x100869C2: lea edi, [edi + 2] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 2; /* 0x100869C5: add ecx, 2 */
    _flag_k = FK_ADD;
    /* test LO16(eax), LO16(eax) */ /* 0x100869C8: test ax, ax */
    _flag_a = (uint32_t)(LO16(eax)) << 16; _flag_b = (uint32_t)(LO16(eax)) << 16;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 16);
    if (TEST_Z(_flag_a, _flag_b)) goto L_100869D6; /* 0x100869CB: je 0x100869d6 */
L_100869CD:
    /* test edx, edx */ /* 0x100869CD: test edx, edx */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(edx);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_100869BB; /* 0x100869CF: jne 0x100869bb */
L_100869D1:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x100869D1: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM16(ecx) = (uint16_t)(LO16(eax)); /* 0x100869D3: mov word ptr [ecx], ax */
L_100869D6:
    edi = POP32_VAL(esp); /* 0x100869D6: pop edi */
    eax = esi; /* 0x100869D7: mov eax, esi */
    esi = POP32_VAL(esp); /* 0x100869D9: pop esi */
    ebp = POP32_VAL(esp); /* 0x100869DA: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x100869DB: ret  */
    RECOMP_REGS_OUT();
}

void sub_100869DC(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x100869DCu);

L_100869DC:
    PUSH32(esp, ebp); /* 0x100869DC: push ebp */
    ebp = esp; /* 0x100869DD: mov ebp, esp */
    eax = MEM32(ebp + 0xC); /* 0x100869DF: mov eax, dword ptr [ebp + 0xc] */
    ecx = eax; /* 0x100869E2: mov ecx, eax */
    edx = MEM32(ebp + 0x8); /* 0x100869E4: mov edx, dword ptr [ebp + 8] */
    /* test eax, eax */ /* 0x100869E7: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_100869F9; /* 0x100869E9: je 0x100869f9 */
L_100869EB:
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx - 1; /* 0x100869EB: dec ecx */
    _flag_k = FK_DEC;
    /* cmp MEM16(edx), 0 */ /* 0x100869EC: cmp word ptr [edx], 0 */
    _flag_a = (uint32_t)(MEM16(edx)) << 16; _flag_b = (uint32_t)(0) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_100869FA; /* 0x100869F0: je 0x100869fa */
L_100869F2:
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edx = edx + 2; /* 0x100869F2: add edx, 2 */
    _flag_k = FK_ADD;
    /* test ecx, ecx */ /* 0x100869F5: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_100869EB; /* 0x100869F7: jne 0x100869eb */
L_100869F9:
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx - 1; /* 0x100869F9: dec ecx */
    _flag_k = FK_DEC;
L_100869FA:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - ecx; /* 0x100869FA: sub eax, ecx */
    _flag_k = FK_CMP;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax - 1; /* 0x100869FC: dec eax */
    _flag_k = FK_DEC;
    ebp = POP32_VAL(esp); /* 0x100869FD: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x100869FE: ret  */
    RECOMP_REGS_OUT();
}

void sub_100869FF(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x100869FFu);

L_100869FF:
    PUSH32(esp, ebp); /* 0x100869FF: push ebp */
    ebp = esp; /* 0x10086A00: mov ebp, esp */
    ecx = MEM32(ebp + 0x10); /* 0x10086A02: mov ecx, dword ptr [ebp + 0x10] */
    PUSH32(esp, esi); /* 0x10086A05: push esi */
    PUSH32(esp, edi); /* 0x10086A06: push edi */
    edi = MEM32(ebp + 0x8); /* 0x10086A07: mov edi, dword ptr [ebp + 8] */
    esi = edi; /* 0x10086A0A: mov esi, edi */
    /* test ecx, ecx */ /* 0x10086A0C: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_10086A39; /* 0x10086A0E: je 0x10086a39 */
L_10086A10:
    edx = MEM32(ebp + 0xC); /* 0x10086A10: mov edx, dword ptr [ebp + 0xc] */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    edx = edx - edi; /* 0x10086A13: sub edx, edi */
    _flag_k = FK_CMP;
L_10086A15:
    eax = (uint32_t)MEM16(edx + edi); /* 0x10086A15: movzx eax, word ptr [edx + edi] */
    MEM16(edi) = (uint16_t)(LO16(eax)); /* 0x10086A19: mov word ptr [edi], ax */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edi = edi + 2; /* 0x10086A1C: add edi, 2 */
    _flag_k = FK_ADD;
    /* test LO16(eax), LO16(eax) */ /* 0x10086A1F: test ax, ax */
    _flag_a = (uint32_t)(LO16(eax)) << 16; _flag_b = (uint32_t)(LO16(eax)) << 16;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 16);
    if (TEST_Z(_flag_a, _flag_b)) goto L_10086A27; /* 0x10086A22: je 0x10086a27 */
L_10086A24:
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx - 1; /* 0x10086A24: dec ecx */
    _flag_k = FK_DEC;
    RECOMP_BACKEDGE();
    if (/* dec result */ CMP_NE(_flag_a, _flag_b)) goto L_10086A15; /* 0x10086A25: jne 0x10086a15 */
L_10086A27:
    /* test ecx, ecx */ /* 0x10086A27: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_10086A39; /* 0x10086A29: je 0x10086a39 */
L_10086A2B:
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx - 1; /* 0x10086A2B: dec ecx */
    _flag_k = FK_DEC;
    if (/* dec result */ CMP_EQ(_flag_a, _flag_b)) goto L_10086A39; /* 0x10086A2C: je 0x10086a39 */
L_10086A2E:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x10086A2E: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    if (1u) _cf = (((ecx) >> 0) & 1u); /* 0x10086A30: shr ecx, 1 */
    if (1u) { _flag_a = recomp_flags_pack((ecx >> 1u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ecx = ecx >> 1u; /* 0x10086A30: shr ecx, 1 */
    { uint32_t _n = ecx, _b = _n * 4u; /* 0x10086A32: rep stosd dword ptr es:[edi], eax */ if (_df > 0) { MEMSET32((void*)ADDR(edi), eax, _n); edi += _b; } else { MEMSET32((void*)ADDR(edi - _b + 4u), eax, _n); edi -= _b; } ecx = 0; }
    { uint32_t _aa = ecx, _ab = ecx, _ac = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x10086A34: adc ecx, ecx */
      ecx = _aa + _ab + _ac;
      _flag_a = recomp_flags_adc(_aa, _ab, _ac); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    { uint32_t _n = ecx, _b = _n * 2u; /* 0x10086A36: rep stosw word ptr es:[edi], ax */ if (_df > 0) { MEMSET16((void*)ADDR(edi), (uint16_t)LO16(eax), _n); edi += _b; } else { MEMSET16((void*)ADDR(edi - _b + 2u), (uint16_t)LO16(eax), _n); edi -= _b; } ecx = 0; }
L_10086A39:
    edi = POP32_VAL(esp); /* 0x10086A39: pop edi */
    eax = esi; /* 0x10086A3A: mov eax, esi */
    esi = POP32_VAL(esp); /* 0x10086A3C: pop esi */
    ebp = POP32_VAL(esp); /* 0x10086A3D: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x10086A3E: ret  */
    RECOMP_REGS_OUT();
}

void sub_10086A3F(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x10086A3Fu);

L_10086A3F:
    PUSH32(esp, ebp); /* 0x10086A3F: push ebp */
    ebp = esp; /* 0x10086A40: mov ebp, esp */
    edx = MEM32(ebp + 0x10); /* 0x10086A42: mov edx, dword ptr [ebp + 0x10] */
    ecx = MEM32(ebp + 0x8); /* 0x10086A45: mov ecx, dword ptr [ebp + 8] */
    eax = ecx; /* 0x10086A48: mov eax, ecx */
    /* test edx, edx */ /* 0x10086A4A: test edx, edx */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(edx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_10086A65; /* 0x10086A4C: je 0x10086a65 */
L_10086A4E:
    PUSH32(esp, esi); /* 0x10086A4E: push esi */
    SET_LO16(esi, MEM16(ebp + 0xC)); /* 0x10086A4F: mov si, word ptr [ebp + 0xc] */
L_10086A53:
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(1);
    edx = edx - 1; /* 0x10086A53: dec edx */
    _flag_k = FK_DEC;
    /* cmp MEM16(ecx), 0 */ /* 0x10086A54: cmp word ptr [ecx], 0 */
    _flag_a = (uint32_t)(MEM16(ecx)) << 16; _flag_b = (uint32_t)(0) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_10086A64; /* 0x10086A58: je 0x10086a64 */
L_10086A5A:
    MEM16(ecx) = (uint16_t)(LO16(esi)); /* 0x10086A5A: mov word ptr [ecx], si */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 2; /* 0x10086A5D: add ecx, 2 */
    _flag_k = FK_ADD;
    /* test edx, edx */ /* 0x10086A60: test edx, edx */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(edx);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_10086A53; /* 0x10086A62: jne 0x10086a53 */
L_10086A64:
    esi = POP32_VAL(esp); /* 0x10086A64: pop esi */
L_10086A65:
    ebp = POP32_VAL(esp); /* 0x10086A65: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x10086A66: ret  */
    RECOMP_REGS_OUT();
}

void sub_10086A67(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x10086A67u);

L_10086A67:
    PUSH32(esp, ebp); /* 0x10086A67: push ebp */
    ebp = esp; /* 0x10086A68: mov ebp, esp */
    eax = MEM32(ebp + 0x8); /* 0x10086A6A: mov eax, dword ptr [ebp + 8] */
    PUSH32(esp, esi); /* 0x10086A6D: push esi */
    esi = MEM32(ebp + 0x14); /* 0x10086A6E: mov esi, dword ptr [ebp + 0x14] */
    /* test esi, esi */ /* 0x10086A71: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_10086A82; /* 0x10086A73: jne 0x10086a82 */
L_10086A75:
    /* test eax, eax */ /* 0x10086A75: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_10086A86; /* 0x10086A77: jne 0x10086a86 */
L_10086A79:
    /* cmp MEM32(ebp + 0xC), eax */ /* 0x10086A79: cmp dword ptr [ebp + 0xc], eax */
    _flag_a = (uint32_t)(MEM32(ebp + 0xC)); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_10086ACB; /* 0x10086A7C: jne 0x10086acb */
L_10086A7E:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x10086A7E: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_10086ADC; /* 0x10086A80: jmp 0x10086adc */
L_10086A82:
    /* test eax, eax */ /* 0x10086A82: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_10086ACB; /* 0x10086A84: je 0x10086acb */
L_10086A86:
    edx = MEM32(ebp + 0xC); /* 0x10086A86: mov edx, dword ptr [ebp + 0xc] */
    /* test edx, edx */ /* 0x10086A89: test edx, edx */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(edx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_10086ACB; /* 0x10086A8B: je 0x10086acb */
L_10086A8D:
    PUSH32(esp, ebx); /* 0x10086A8D: push ebx */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ebx = 0; /* 0x10086A8E: xor ebx, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = eax; /* 0x10086A90: mov ecx, eax */
    /* cmp MEM16(eax), LO16(ebx) */ /* 0x10086A92: cmp word ptr [eax], bx */
    _flag_a = (uint32_t)(MEM16(eax)) << 16; _flag_b = (uint32_t)(LO16(ebx)) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_10086AB0; /* 0x10086A95: je 0x10086ab0 */
L_10086A97:
    PUSH32(esp, edi); /* 0x10086A97: push edi */
    SET_LO16(edi, MEM16(ebp + 0x10)); /* 0x10086A98: mov di, word ptr [ebp + 0x10] */
L_10086A9C:
    /* test esi, esi */ /* 0x10086A9C: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_10086AAF; /* 0x10086A9E: je 0x10086aaf */
L_10086AA0:
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(1);
    edx = edx - 1; /* 0x10086AA0: dec edx */
    _flag_k = FK_DEC;
    if (/* dec result */ CMP_EQ(_flag_a, _flag_b)) goto L_10086AAF; /* 0x10086AA1: je 0x10086aaf */
L_10086AA3:
    MEM16(ecx) = (uint16_t)(LO16(edi)); /* 0x10086AA3: mov word ptr [ecx], di */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 2; /* 0x10086AA6: add ecx, 2 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi - 1; /* 0x10086AA9: dec esi */
    _flag_k = FK_DEC;
    /* cmp MEM16(ecx), LO16(ebx) */ /* 0x10086AAA: cmp word ptr [ecx], bx */
    _flag_a = (uint32_t)(MEM16(ecx)) << 16; _flag_b = (uint32_t)(LO16(ebx)) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    RECOMP_BACKEDGE();
    if (CMP_NE(_flag_a, _flag_b)) goto L_10086A9C; /* 0x10086AAD: jne 0x10086a9c */
L_10086AAF:
    edi = POP32_VAL(esp); /* 0x10086AAF: pop edi */
L_10086AB0:
    /* test esi, esi */ /* 0x10086AB0: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_10086ABC; /* 0x10086AB2: je 0x10086abc */
L_10086AB4:
    goto L_10086AC1; /* 0x10086AB4: jmp 0x10086ac1 */
L_10086AB6:
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(1);
    edx = edx - 1; /* 0x10086AB6: dec edx */
    _flag_k = FK_DEC;
    if (/* dec result */ CMP_EQ(_flag_a, _flag_b)) goto L_10086AC1; /* 0x10086AB7: je 0x10086ac1 */
L_10086AB9:
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 2; /* 0x10086AB9: add ecx, 2 */
    _flag_k = FK_ADD;
L_10086ABC:
    /* cmp MEM16(ecx), LO16(ebx) */ /* 0x10086ABC: cmp word ptr [ecx], bx */
    _flag_a = (uint32_t)(MEM16(ecx)) << 16; _flag_b = (uint32_t)(LO16(ebx)) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    RECOMP_BACKEDGE();
    if (CMP_NE(_flag_a, _flag_b)) goto L_10086AB6; /* 0x10086ABF: jne 0x10086ab6 */
L_10086AC1:
    ebx = POP32_VAL(esp); /* 0x10086AC1: pop ebx */
    /* test edx, edx */ /* 0x10086AC2: test edx, edx */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(edx);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_10086A7E; /* 0x10086AC4: jne 0x10086a7e */
L_10086AC6:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x10086AC6: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM16(eax) = (uint16_t)(LO16(ecx)); /* 0x10086AC8: mov word ptr [eax], cx */
L_10086ACB:
    RECOMP_CALL(sub_1001177D); /* 0x10086ACB: call 0x1001177d */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0x16u); /* 0x10086AD0: push 0x16 */
    esi = POP32_VAL(esp); /* 0x10086AD2: pop esi */
    MEM32(eax) = esi; /* 0x10086AD3: mov dword ptr [eax], esi */
    RECOMP_CALL(sub_100A4670); /* 0x10086AD5: call 0x100a4670 */
    RECOMP_FLAGS_IN();
    eax = esi; /* 0x10086ADA: mov eax, esi */
L_10086ADC:
    esi = POP32_VAL(esp); /* 0x10086ADC: pop esi */
    ebp = POP32_VAL(esp); /* 0x10086ADD: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x10086ADE: ret  */
    RECOMP_REGS_OUT();
}

void sub_10086ADF(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x10086ADFu);

L_10086ADF:
    PUSH32(esp, ebp); /* 0x10086ADF: push ebp */
    ebp = esp; /* 0x10086AE0: mov ebp, esp */
    PUSH32(esp, ebx); /* 0x10086AE2: push ebx */
    PUSH32(esp, esi); /* 0x10086AE3: push esi */
    esi = MEM32(ebp + 0x8); /* 0x10086AE4: mov esi, dword ptr [ebp + 8] */
    ebx = esi; /* 0x10086AE7: mov ebx, esi */
    PUSH32(esp, edi); /* 0x10086AE9: push edi */
    edi = esi; /* 0x10086AEA: mov edi, esi */
L_10086AEC:
    SET_LO16(eax, MEM16(esi)); /* 0x10086AEC: mov ax, word ptr [esi] */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esi = esi + 2; /* 0x10086AEF: add esi, 2 */
    _flag_k = FK_ADD;
    /* test LO16(eax), LO16(eax) */ /* 0x10086AF2: test ax, ax */
    _flag_a = (uint32_t)(LO16(eax)) << 16; _flag_b = (uint32_t)(LO16(eax)) << 16;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 16);
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_10086AEC; /* 0x10086AF5: jne 0x10086aec */
L_10086AF7:
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esi = esi - 4; /* 0x10086AF7: sub esi, 4 */
    _flag_k = FK_CMP;
    goto L_10086B0E; /* 0x10086AFA: jmp 0x10086b0e */
L_10086AFC:
    SET_LO16(ecx, MEM16(esi)); /* 0x10086AFC: mov cx, word ptr [esi] */
    edx = (uint32_t)MEM16(edi); /* 0x10086AFF: movzx edx, word ptr [edi] */
    MEM16(edi) = (uint16_t)(LO16(ecx)); /* 0x10086B02: mov word ptr [edi], cx */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edi = edi + 2; /* 0x10086B05: add edi, 2 */
    _flag_k = FK_ADD;
    MEM16(esi) = (uint16_t)(LO16(edx)); /* 0x10086B08: mov word ptr [esi], dx */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esi = esi - 2; /* 0x10086B0B: sub esi, 2 */
    _flag_k = FK_CMP;
L_10086B0E:
    /* cmp edi, esi */ /* 0x10086B0E: cmp edi, esi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_10086AFC; /* 0x10086B10: jb 0x10086afc */
L_10086B12:
    edi = POP32_VAL(esp); /* 0x10086B12: pop edi */
    esi = POP32_VAL(esp); /* 0x10086B13: pop esi */
    eax = ebx; /* 0x10086B14: mov eax, ebx */
    ebx = POP32_VAL(esp); /* 0x10086B16: pop ebx */
    ebp = POP32_VAL(esp); /* 0x10086B17: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x10086B18: ret  */
    RECOMP_REGS_OUT();
}

void sub_10086B19(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x10086B19u);

L_10086B19:
    PUSH32(esp, ebp); /* 0x10086B19: push ebp */
    ebp = esp; /* 0x10086B1A: mov ebp, esp */
    ecx = MEM32(ebp + 0x8); /* 0x10086B1C: mov ecx, dword ptr [ebp + 8] */
    eax = ecx; /* 0x10086B1F: mov eax, ecx */
    PUSH32(esp, esi); /* 0x10086B21: push esi */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    esi = 0; /* 0x10086B22: xor esi, esi */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp MEM16(ecx), LO16(esi) */ /* 0x10086B24: cmp word ptr [ecx], si */
    _flag_a = (uint32_t)(MEM16(ecx)) << 16; _flag_b = (uint32_t)(LO16(esi)) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_10086B38; /* 0x10086B27: je 0x10086b38 */
L_10086B29:
    SET_LO16(edx, MEM16(ebp + 0xC)); /* 0x10086B29: mov dx, word ptr [ebp + 0xc] */
L_10086B2D:
    MEM16(ecx) = (uint16_t)(LO16(edx)); /* 0x10086B2D: mov word ptr [ecx], dx */
    ecx = ecx + 0x2; /* 0x10086B30: lea ecx, [ecx + 2] */
    /* cmp MEM16(ecx), LO16(esi) */ /* 0x10086B33: cmp word ptr [ecx], si */
    _flag_a = (uint32_t)(MEM16(ecx)) << 16; _flag_b = (uint32_t)(LO16(esi)) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    RECOMP_BACKEDGE();
    if (CMP_NE(_flag_a, _flag_b)) goto L_10086B2D; /* 0x10086B36: jne 0x10086b2d */
L_10086B38:
    esi = POP32_VAL(esp); /* 0x10086B38: pop esi */
    ebp = POP32_VAL(esp); /* 0x10086B39: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x10086B3A: ret  */
    RECOMP_REGS_OUT();
}

void sub_10086B3B(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x10086B3Bu);

L_10086B3B:
    PUSH32(esp, ebp); /* 0x10086B3B: push ebp */
    ebp = esp; /* 0x10086B3C: mov ebp, esp */
    ecx = MEM32(ebp + 0x8); /* 0x10086B3E: mov ecx, dword ptr [ebp + 8] */
    PUSH32(esp, esi); /* 0x10086B41: push esi */
    /* test ecx, ecx */ /* 0x10086B42: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_10086B71; /* 0x10086B44: je 0x10086b71 */
L_10086B46:
    eax = MEM32(ebp + 0xC); /* 0x10086B46: mov eax, dword ptr [ebp + 0xc] */
    /* test eax, eax */ /* 0x10086B49: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_10086B71; /* 0x10086B4B: je 0x10086b71 */
L_10086B4D:
    PUSH32(esp, edi); /* 0x10086B4D: push edi */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edi = 0; /* 0x10086B4E: xor edi, edi */
    _cf = 0;
    _flag_k = FK_TEST;
    edx = ecx; /* 0x10086B50: mov edx, ecx */
    /* cmp MEM16(ecx), LO16(edi) */ /* 0x10086B52: cmp word ptr [ecx], di */
    _flag_a = (uint32_t)(MEM16(ecx)) << 16; _flag_b = (uint32_t)(LO16(edi)) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_10086B69; /* 0x10086B55: je 0x10086b69 */
L_10086B57:
    SET_LO16(esi, MEM16(ebp + 0x10)); /* 0x10086B57: mov si, word ptr [ebp + 0x10] */
L_10086B5B:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax - 1; /* 0x10086B5B: dec eax */
    _flag_k = FK_DEC;
    if (/* dec result */ CMP_EQ(_flag_a, _flag_b)) goto L_10086B69; /* 0x10086B5C: je 0x10086b69 */
L_10086B5E:
    MEM16(edx) = (uint16_t)(LO16(esi)); /* 0x10086B5E: mov word ptr [edx], si */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edx = edx + 2; /* 0x10086B61: add edx, 2 */
    _flag_k = FK_ADD;
    /* cmp MEM16(edx), LO16(edi) */ /* 0x10086B64: cmp word ptr [edx], di */
    _flag_a = (uint32_t)(MEM16(edx)) << 16; _flag_b = (uint32_t)(LO16(edi)) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    RECOMP_BACKEDGE();
    if (CMP_NE(_flag_a, _flag_b)) goto L_10086B5B; /* 0x10086B67: jne 0x10086b5b */
L_10086B69:
    edi = POP32_VAL(esp); /* 0x10086B69: pop edi */
    /* test eax, eax */ /* 0x10086B6A: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_10086B85; /* 0x10086B6C: jne 0x10086b85 */
L_10086B6E:
    MEM16(ecx) = (uint16_t)(LO16(eax)); /* 0x10086B6E: mov word ptr [ecx], ax */
L_10086B71:
    RECOMP_CALL(sub_1001177D); /* 0x10086B71: call 0x1001177d */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0x16u); /* 0x10086B76: push 0x16 */
    esi = POP32_VAL(esp); /* 0x10086B78: pop esi */
    MEM32(eax) = esi; /* 0x10086B79: mov dword ptr [eax], esi */
    RECOMP_CALL(sub_100A4670); /* 0x10086B7B: call 0x100a4670 */
    RECOMP_FLAGS_IN();
    eax = esi; /* 0x10086B80: mov eax, esi */
L_10086B82:
    esi = POP32_VAL(esp); /* 0x10086B82: pop esi */
    ebp = POP32_VAL(esp); /* 0x10086B83: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x10086B84: ret  */
L_10086B85:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x10086B85: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    goto L_10086B82; /* 0x10086B87: jmp 0x10086b82 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    RECOMP_REGS_OUT();
}

void sub_10086B89(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x10086B89u);

L_10086B89:
    PUSH32(esp, ebp); /* 0x10086B89: push ebp */
    ebp = esp; /* 0x10086B8A: mov ebp, esp */
    ecx = MEM32(ebp + 0x10); /* 0x10086B8C: mov ecx, dword ptr [ebp + 0x10] */
    /* test ecx, ecx */ /* 0x10086B8F: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_10086BAE; /* 0x10086B91: je 0x10086bae */
L_10086B93:
    eax = MEM32(ebp + 0xC); /* 0x10086B93: mov eax, dword ptr [ebp + 0xc] */
    edx = (uint32_t)LO16(eax); /* 0x10086B96: movzx edx, ax */
    eax = edx; /* 0x10086B99: mov eax, edx */
    if (16u) _cf = (((edx) >> 16) & 1u); /* 0x10086B9B: shl edx, 0x10 */
    if (16u) { _flag_a = recomp_flags_pack((edx << 16u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    edx = edx << 16u; /* 0x10086B9B: shl edx, 0x10 */
    PUSH32(esp, edi); /* 0x10086B9E: push edi */
    edi = MEM32(ebp + 0x8); /* 0x10086B9F: mov edi, dword ptr [ebp + 8] */
    _flag_a = (uint32_t)((eax | edx)); _flag_b = (uint32_t)((eax | edx));
    eax = eax | edx; /* 0x10086BA2: or eax, edx */
    _cf = 0;
    _flag_k = FK_TEST;
    if (1u) _cf = (((ecx) >> 0) & 1u); /* 0x10086BA4: shr ecx, 1 */
    if (1u) { _flag_a = recomp_flags_pack((ecx >> 1u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ecx = ecx >> 1u; /* 0x10086BA4: shr ecx, 1 */
    { uint32_t _n = ecx, _b = _n * 4u; /* 0x10086BA6: rep stosd dword ptr es:[edi], eax */ if (_df > 0) { MEMSET32((void*)ADDR(edi), eax, _n); edi += _b; } else { MEMSET32((void*)ADDR(edi - _b + 4u), eax, _n); edi -= _b; } ecx = 0; }
    { uint32_t _aa = ecx, _ab = ecx, _ac = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x10086BA8: adc ecx, ecx */
      ecx = _aa + _ab + _ac;
      _flag_a = recomp_flags_adc(_aa, _ab, _ac); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    { uint32_t _n = ecx, _b = _n * 2u; /* 0x10086BAA: rep stosw word ptr es:[edi], ax */ if (_df > 0) { MEMSET16((void*)ADDR(edi), (uint16_t)LO16(eax), _n); edi += _b; } else { MEMSET16((void*)ADDR(edi - _b + 2u), (uint16_t)LO16(eax), _n); edi -= _b; } ecx = 0; }
    edi = POP32_VAL(esp); /* 0x10086BAD: pop edi */
L_10086BAE:
    eax = MEM32(ebp + 0x8); /* 0x10086BAE: mov eax, dword ptr [ebp + 8] */
    ebp = POP32_VAL(esp); /* 0x10086BB1: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x10086BB2: ret  */
    RECOMP_REGS_OUT();
}

void sub_10086BB3(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x10086BB3u);

L_10086BB3:
    PUSH32(esp, ebp); /* 0x10086BB3: push ebp */
    ebp = esp; /* 0x10086BB4: mov ebp, esp */
    eax = MEM32(ebp + 0x14); /* 0x10086BB6: mov eax, dword ptr [ebp + 0x14] */
    PUSH32(esp, esi); /* 0x10086BB9: push esi */
    /* test eax, eax */ /* 0x10086BBA: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_10086BFC; /* 0x10086BBC: je 0x10086bfc */
L_10086BBE:
    /* cmp MEM32(ebp + 0x8), 0 */ /* 0x10086BBE: cmp dword ptr [ebp + 8], 0 */
    _flag_a = (uint32_t)(MEM32(ebp + 0x8)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_10086BD7; /* 0x10086BC2: jne 0x10086bd7 */
L_10086BC4:
    RECOMP_CALL(sub_1001177D); /* 0x10086BC4: call 0x1001177d */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0x16u); /* 0x10086BC9: push 0x16 */
L_10086BCB:
    esi = POP32_VAL(esp); /* 0x10086BCB: pop esi */
    MEM32(eax) = esi; /* 0x10086BCC: mov dword ptr [eax], esi */
    RECOMP_CALL(sub_100A4670); /* 0x10086BCE: call 0x100a4670 */
    RECOMP_FLAGS_IN();
    eax = esi; /* 0x10086BD3: mov eax, esi */
    goto L_10086BFE; /* 0x10086BD5: jmp 0x10086bfe */
L_10086BD7:
    /* cmp MEM32(ebp + 0x10), 0 */ /* 0x10086BD7: cmp dword ptr [ebp + 0x10], 0 */
    _flag_a = (uint32_t)(MEM32(ebp + 0x10)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_EQ(_flag_a, _flag_b)) goto L_10086BC4; /* 0x10086BDB: je 0x10086bc4 */
L_10086BDD:
    /* cmp MEM32(ebp + 0xC), eax */ /* 0x10086BDD: cmp dword ptr [ebp + 0xc], eax */
    _flag_a = (uint32_t)(MEM32(ebp + 0xC)); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_AE(_flag_a, _flag_b)) goto L_10086BEB; /* 0x10086BE0: jae 0x10086beb */
L_10086BE2:
    RECOMP_CALL(sub_1001177D); /* 0x10086BE2: call 0x1001177d */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0x22u); /* 0x10086BE7: push 0x22 */
    RECOMP_BACKEDGE();
    goto L_10086BCB; /* 0x10086BE9: jmp 0x10086bcb */
L_10086BEB:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + eax; /* 0x10086BEB: add eax, eax */
    _flag_k = FK_ADD;
    PUSH32(esp, eax); /* 0x10086BED: push eax */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x10086BEE: push dword ptr [ebp + 0x10] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x10086BF1: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_1000F10E); /* 0x10086BF4: call 0x1000f10e */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x10086BF9: add esp, 0xc */
    _flag_k = FK_ADD;
L_10086BFC:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x10086BFC: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
L_10086BFE:
    esi = POP32_VAL(esp); /* 0x10086BFE: pop esi */
    ebp = POP32_VAL(esp); /* 0x10086BFF: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x10086C00: ret  */
    RECOMP_REGS_OUT();
}
