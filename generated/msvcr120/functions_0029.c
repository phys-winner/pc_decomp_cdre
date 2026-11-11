#define RECOMP_GENERATED_CODE

#include "functions.h"

void sub_1009BCDB(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1009BCDBu);

L_1009BCDB:
    PUSH32(esp, ebp); /* 0x1009BCDB: push ebp */
    ebp = esp; /* 0x1009BCDC: mov ebp, esp */
    PUSH32(esp, 0); /* 0x1009BCDE: push 0 */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x1009BCE0: push dword ptr [ebp + 0x10] */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x1009BCE3: push dword ptr [ebp + 0xc] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x1009BCE6: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_1009BBC5); /* 0x1009BCE9: call 0x1009bbc5 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x10u; /* 0x1009BCEE: add esp, 0x10 */
    _flag_k = FK_ADD;
    ebp = POP32_VAL(esp); /* 0x1009BCF1: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1009BCF2: ret  */
    RECOMP_REGS_OUT();
}

void sub_1009BCF3(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1009BCF3u);

L_1009BCF3:
    PUSH32(esp, ebp); /* 0x1009BCF3: push ebp */
    ebp = esp; /* 0x1009BCF4: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x10u; /* 0x1009BCF6: sub esp, 0x10 */
    _flag_k = FK_CMP;
    ecx = ebp + (-0x10); /* 0x1009BCF9: lea ecx, [ebp - 0x10] */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x1009BCFC: push dword ptr [ebp + 0x10] */
    RECOMP_CALL(sub_1000F764); /* 0x1009BCFF: call 0x1000f764 */
    RECOMP_FLAGS_IN();
    edx = MEM32(ebp + 0x8); /* 0x1009BD04: mov edx, dword ptr [ebp + 8] */
    /* test edx, edx */ /* 0x1009BD07: test edx, edx */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(edx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1009BD12; /* 0x1009BD09: je 0x1009bd12 */
L_1009BD0B:
    ecx = MEM32(ebp + 0xC); /* 0x1009BD0B: mov ecx, dword ptr [ebp + 0xc] */
    /* test ecx, ecx */ /* 0x1009BD0E: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1009BD24; /* 0x1009BD10: jne 0x1009bd24 */
L_1009BD12:
    RECOMP_CALL(sub_1001177D); /* 0x1009BD12: call 0x1001177d */
    RECOMP_FLAGS_IN();
    MEM32(eax) = 0x16u; /* 0x1009BD17: mov dword ptr [eax], 0x16 */
    RECOMP_CALL(sub_100A4670); /* 0x1009BD1D: call 0x100a4670 */
    RECOMP_FLAGS_IN();
    goto L_1009BD5F; /* 0x1009BD22: jmp 0x1009bd5f */
L_1009BD24:
    eax = MEM32(ebp + (-0x10)); /* 0x1009BD24: mov eax, dword ptr [ebp - 0x10] */
    eax = MEM32(eax + 0xA4); /* 0x1009BD27: mov eax, dword ptr [eax + 0xa4] */
    /* test eax, eax */ /* 0x1009BD2D: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1009BD3C; /* 0x1009BD2F: jne 0x1009bd3c */
L_1009BD31:
    PUSH32(esp, ecx); /* 0x1009BD31: push ecx */
    PUSH32(esp, edx); /* 0x1009BD32: push edx */
    RECOMP_CALL(sub_1001310D); /* 0x1009BD33: call 0x1001310d */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1009BD38: pop ecx */
    ecx = POP32_VAL(esp); /* 0x1009BD39: pop ecx */
    goto L_1009BD69; /* 0x1009BD3A: jmp 0x1009bd69 */
L_1009BD3C:
    PUSH32(esp, 0xFFFFFFFFu); /* 0x1009BD3C: push -1 */
    PUSH32(esp, ecx); /* 0x1009BD3E: push ecx */
    PUSH32(esp, 0xFFFFFFFFu); /* 0x1009BD3F: push -1 */
    PUSH32(esp, edx); /* 0x1009BD41: push edx */
    PUSH32(esp, 0x1000u); /* 0x1009BD42: push 0x1000 */
    PUSH32(esp, eax); /* 0x1009BD47: push eax */
    RECOMP_CALL(sub_100297C2); /* 0x1009BD48: call 0x100297c2 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x18u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x18u; /* 0x1009BD4D: add esp, 0x18 */
    _flag_k = FK_ADD;
    /* test eax, eax */ /* 0x1009BD50: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1009BD66; /* 0x1009BD52: jne 0x1009bd66 */
L_1009BD54:
    RECOMP_CALL(sub_1001177D); /* 0x1009BD54: call 0x1001177d */
    RECOMP_FLAGS_IN();
    MEM32(eax) = 0x16u; /* 0x1009BD59: mov dword ptr [eax], 0x16 */
L_1009BD5F:
    eax = 0x7FFFFFFFu; /* 0x1009BD5F: mov eax, 0x7fffffff */
    goto L_1009BD69; /* 0x1009BD64: jmp 0x1009bd69 */
L_1009BD66:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xFFFFFFFEu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 0xFFFFFFFEu; /* 0x1009BD66: add eax, -2 */
    _flag_k = FK_ADD;
L_1009BD69:
    /* cmp MEM8(ebp + (-0x4)), 0 */ /* 0x1009BD69: cmp byte ptr [ebp - 4], 0 */
    _flag_a = (uint32_t)(MEM8(ebp + (-0x4))) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1009BD76; /* 0x1009BD6D: je 0x1009bd76 */
L_1009BD6F:
    ecx = MEM32(ebp + (-0x8)); /* 0x1009BD6F: mov ecx, dword ptr [ebp - 8] */
    _flag_a = (uint32_t)(MEM32(ecx + 0x70)); _flag_b = (uint32_t)(0xFFFFFFFDu);
    MEM32(ecx + 0x70) = MEM32(ecx + 0x70) & 0xFFFFFFFDu; /* 0x1009BD72: and dword ptr [ecx + 0x70], 0xfffffffd */
    _cf = 0;
    _flag_k = FK_TEST;
L_1009BD76:
    esp = ebp; /* 0x1009BD76: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x1009BD78: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1009BD79: ret  */
    RECOMP_REGS_OUT();
}

void sub_1009BD7A(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1009BD7Au);

    goto L_1009BD7A;
L_1001310D:
    PUSH32(esp, ebp); /* 0x1001310D: push ebp */
    ebp = esp; /* 0x1001310E: mov ebp, esp */
    edx = MEM32(ebp + 0xC); /* 0x10013110: mov edx, dword ptr [ebp + 0xc] */
    PUSH32(esp, esi); /* 0x10013113: push esi */
    esi = MEM32(ebp + 0x8); /* 0x10013114: mov esi, dword ptr [ebp + 8] */
    PUSH32(esp, edi); /* 0x10013117: push edi */
    edi = (uint32_t)MEM16(edx); /* 0x10013118: movzx edi, word ptr [edx] */
    ecx = (uint32_t)MEM16(esi); /* 0x1001311B: movzx ecx, word ptr [esi] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ecx = ecx - edi; /* 0x1001311E: sub ecx, edi */
    _flag_k = FK_CMP;
    if (/* sub result */ CMP_NE(_flag_a, _flag_b)) goto L_10013137; /* 0x10013120: jne 0x10013137 */
L_10013122:
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esi = esi - edx; /* 0x10013122: sub esi, edx */
    _flag_k = FK_CMP;
L_10013124:
    /* test LO16(edi), LO16(edi) */ /* 0x10013124: test di, di */
    _flag_a = (uint32_t)(LO16(edi)) << 16; _flag_b = (uint32_t)(LO16(edi)) << 16;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 16);
    if (TEST_Z(_flag_a, _flag_b)) goto L_10013137; /* 0x10013127: je 0x10013137 */
L_10013129:
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edx = edx + 2; /* 0x10013129: add edx, 2 */
    _flag_k = FK_ADD;
    edi = (uint32_t)MEM16(edx); /* 0x1001312C: movzx edi, word ptr [edx] */
    ecx = (uint32_t)MEM16(esi + edx); /* 0x1001312F: movzx ecx, word ptr [esi + edx] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ecx = ecx - edi; /* 0x10013133: sub ecx, edi */
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (/* sub result */ CMP_EQ(_flag_a, _flag_b)) goto L_10013124; /* 0x10013135: je 0x10013124 */
L_10013137:
    edi = POP32_VAL(esp); /* 0x10013137: pop edi */
    esi = POP32_VAL(esp); /* 0x10013138: pop esi */
    /* test ecx, ecx */ /* 0x10013139: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_100134C3; /* 0x1001313B: js 0x100134c3 */
L_10013141:
    if ((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) != 0u && (((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) == 0u)) goto L_10013421; /* 0x10013141: jg 0x10013421 */
L_10013147:
    eax = ecx; /* 0x10013147: mov eax, ecx */
    ebp = POP32_VAL(esp); /* 0x10013149: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1001314A: ret  */
L_10013421:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x10013421: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx + 1; /* 0x10013423: inc ecx */
    _flag_k = FK_INC;
    RECOMP_BACKEDGE();
    goto L_10013147; /* 0x10013424: jmp 0x10013147 */
L_100134C3:
    _flag_a = (uint32_t)((ecx | 0xFFFFFFFFu)); _flag_b = (uint32_t)((ecx | 0xFFFFFFFFu));
    ecx = ecx | 0xFFFFFFFFu; /* 0x100134C3: or ecx, 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    goto L_10013147; /* 0x100134C6: jmp 0x10013147 */
L_1009BD7A:
    PUSH32(esp, ebp); /* 0x1009BD7A: push ebp */
    ebp = esp; /* 0x1009BD7B: mov ebp, esp */
    /* cmp MEM32(0x100DF7C4), 0 */ /* 0x1009BD7D: cmp dword ptr [0x100df7c4], 0 */
    _flag_a = (uint32_t)(MEM32(0x100DF7C4)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_1009BDAF; /* 0x1009BD84: jne 0x1009bdaf */
L_1009BD86:
    /* cmp MEM32(ebp + 0x8), 0 */ /* 0x1009BD86: cmp dword ptr [ebp + 8], 0 */
    _flag_a = (uint32_t)(MEM32(ebp + 0x8)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_1009BDA3; /* 0x1009BD8A: jne 0x1009bda3 */
L_1009BD8C:
    RECOMP_CALL(sub_1001177D); /* 0x1009BD8C: call 0x1001177d */
    RECOMP_FLAGS_IN();
    MEM32(eax) = 0x16u; /* 0x1009BD91: mov dword ptr [eax], 0x16 */
    RECOMP_CALL(sub_100A4670); /* 0x1009BD97: call 0x100a4670 */
    RECOMP_FLAGS_IN();
    eax = 0x7FFFFFFFu; /* 0x1009BD9C: mov eax, 0x7fffffff */
    ebp = POP32_VAL(esp); /* 0x1009BDA1: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1009BDA2: ret  */
L_1009BDA3:
    /* cmp MEM32(ebp + 0xC), 0 */ /* 0x1009BDA3: cmp dword ptr [ebp + 0xc], 0 */
    _flag_a = (uint32_t)(MEM32(ebp + 0xC)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1009BD8C; /* 0x1009BDA7: je 0x1009bd8c */
L_1009BDA9:
    ebp = POP32_VAL(esp); /* 0x1009BDA9: pop ebp */
    RECOMP_BACKEDGE();
    goto L_1001310D; /* 0x1009BDAA: jmp 0x1001310d */
L_1009BDAF:
    PUSH32(esp, 0); /* 0x1009BDAF: push 0 */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x1009BDB1: push dword ptr [ebp + 0xc] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x1009BDB4: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_1009BCF3); /* 0x1009BDB7: call 0x1009bcf3 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x1009BDBC: add esp, 0xc */
    _flag_k = FK_ADD;
    ebp = POP32_VAL(esp); /* 0x1009BDBF: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1009BDC0: ret  */
    RECOMP_REGS_OUT();
}

void sub_1009BDC1(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1009BDC1u);

L_1009BDC1:
    PUSH32(esp, ebp); /* 0x1009BDC1: push ebp */
    ebp = esp; /* 0x1009BDC2: mov ebp, esp */
    /* cmp MEM32(0x100DF7C4), 0 */ /* 0x1009BDC4: cmp dword ptr [0x100df7c4], 0 */
    _flag_a = (uint32_t)(MEM32(0x100DF7C4)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_1009BE42; /* 0x1009BDCB: jne 0x1009be42 */
L_1009BDCD:
    edx = MEM32(ebp + 0x8); /* 0x1009BDCD: mov edx, dword ptr [ebp + 8] */
    /* test edx, edx */ /* 0x1009BDD0: test edx, edx */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(edx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1009BDEB; /* 0x1009BDD2: jne 0x1009bdeb */
L_1009BDD4:
    RECOMP_CALL(sub_1001177D); /* 0x1009BDD4: call 0x1001177d */
    RECOMP_FLAGS_IN();
    MEM32(eax) = 0x16u; /* 0x1009BDD9: mov dword ptr [eax], 0x16 */
    RECOMP_CALL(sub_100A4670); /* 0x1009BDDF: call 0x100a4670 */
    RECOMP_FLAGS_IN();
    eax = 0x7FFFFFFFu; /* 0x1009BDE4: mov eax, 0x7fffffff */
    ebp = POP32_VAL(esp); /* 0x1009BDE9: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1009BDEA: ret  */
L_1009BDEB:
    ecx = MEM32(ebp + 0xC); /* 0x1009BDEB: mov ecx, dword ptr [ebp + 0xc] */
    /* test ecx, ecx */ /* 0x1009BDEE: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_Z(_flag_a, _flag_b)) goto L_1009BDD4; /* 0x1009BDF0: je 0x1009bdd4 */
L_1009BDF2:
    PUSH32(esp, ebx); /* 0x1009BDF2: push ebx */
    PUSH32(esp, esi); /* 0x1009BDF3: push esi */
    PUSH32(esp, edi); /* 0x1009BDF4: push edi */
    PUSH32(esp, 0x41u); /* 0x1009BDF5: push 0x41 */
    edi = POP32_VAL(esp); /* 0x1009BDF7: pop edi */
    PUSH32(esp, 0x5Au); /* 0x1009BDF8: push 0x5a */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    edx = edx - ecx; /* 0x1009BDFA: sub edx, ecx */
    _flag_k = FK_CMP;
    ebx = POP32_VAL(esp); /* 0x1009BDFC: pop ebx */
L_1009BDFD:
    eax = (uint32_t)MEM16(edx + ecx); /* 0x1009BDFD: movzx eax, word ptr [edx + ecx] */
    /* cmp LO16(eax), LO16(edi) */ /* 0x1009BE01: cmp ax, di */
    _flag_a = (uint32_t)(LO16(eax)) << 16; _flag_b = (uint32_t)(LO16(edi)) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    if (CMP_B(_flag_a, _flag_b)) goto L_1009BE13; /* 0x1009BE04: jb 0x1009be13 */
L_1009BE06:
    /* cmp LO16(eax), LO16(ebx) */ /* 0x1009BE06: cmp ax, bx */
    _flag_a = (uint32_t)(LO16(eax)) << 16; _flag_b = (uint32_t)(LO16(ebx)) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    if (CMP_A(_flag_a, _flag_b)) goto L_1009BE13; /* 0x1009BE09: ja 0x1009be13 */
L_1009BE0B:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x20u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 0x20u; /* 0x1009BE0B: add eax, 0x20 */
    _flag_k = FK_ADD;
    esi = (uint32_t)LO16(eax); /* 0x1009BE0E: movzx esi, ax */
    goto L_1009BE15; /* 0x1009BE11: jmp 0x1009be15 */
L_1009BE13:
    esi = eax; /* 0x1009BE13: mov esi, eax */
L_1009BE15:
    eax = (uint32_t)MEM16(ecx); /* 0x1009BE15: movzx eax, word ptr [ecx] */
    /* cmp LO16(eax), LO16(edi) */ /* 0x1009BE18: cmp ax, di */
    _flag_a = (uint32_t)(LO16(eax)) << 16; _flag_b = (uint32_t)(LO16(edi)) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    if (CMP_B(_flag_a, _flag_b)) goto L_1009BE28; /* 0x1009BE1B: jb 0x1009be28 */
L_1009BE1D:
    /* cmp LO16(eax), LO16(ebx) */ /* 0x1009BE1D: cmp ax, bx */
    _flag_a = (uint32_t)(LO16(eax)) << 16; _flag_b = (uint32_t)(LO16(ebx)) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    if (CMP_A(_flag_a, _flag_b)) goto L_1009BE28; /* 0x1009BE20: ja 0x1009be28 */
L_1009BE22:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x20u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 0x20u; /* 0x1009BE22: add eax, 0x20 */
    _flag_k = FK_ADD;
    eax = (uint32_t)LO16(eax); /* 0x1009BE25: movzx eax, ax */
L_1009BE28:
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 2; /* 0x1009BE28: add ecx, 2 */
    _flag_k = FK_ADD;
    /* test LO16(esi), LO16(esi) */ /* 0x1009BE2B: test si, si */
    _flag_a = (uint32_t)(LO16(esi)) << 16; _flag_b = (uint32_t)(LO16(esi)) << 16;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 16);
    if (TEST_Z(_flag_a, _flag_b)) goto L_1009BE35; /* 0x1009BE2E: je 0x1009be35 */
L_1009BE30:
    /* cmp LO16(esi), LO16(eax) */ /* 0x1009BE30: cmp si, ax */
    _flag_a = (uint32_t)(LO16(esi)) << 16; _flag_b = (uint32_t)(LO16(eax)) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    RECOMP_BACKEDGE();
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1009BDFD; /* 0x1009BE33: je 0x1009bdfd */
L_1009BE35:
    ecx = (uint32_t)LO16(eax); /* 0x1009BE35: movzx ecx, ax */
    edi = POP32_VAL(esp); /* 0x1009BE38: pop edi */
    eax = (uint32_t)LO16(esi); /* 0x1009BE39: movzx eax, si */
    esi = POP32_VAL(esp); /* 0x1009BE3C: pop esi */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - ecx; /* 0x1009BE3D: sub eax, ecx */
    _flag_k = FK_CMP;
    ebx = POP32_VAL(esp); /* 0x1009BE3F: pop ebx */
    ebp = POP32_VAL(esp); /* 0x1009BE40: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1009BE41: ret  */
L_1009BE42:
    PUSH32(esp, 0); /* 0x1009BE42: push 0 */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x1009BE44: push dword ptr [ebp + 0xc] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x1009BE47: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_1009BE54); /* 0x1009BE4A: call 0x1009be54 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x1009BE4F: add esp, 0xc */
    _flag_k = FK_ADD;
    ebp = POP32_VAL(esp); /* 0x1009BE52: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1009BE53: ret  */
    RECOMP_REGS_OUT();
}

void sub_1009BE54(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1009BE54u);

L_1009BE54:
    PUSH32(esp, ebp); /* 0x1009BE54: push ebp */
    ebp = esp; /* 0x1009BE55: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x10u; /* 0x1009BE57: sub esp, 0x10 */
    _flag_k = FK_CMP;
    ecx = ebp + (-0x10); /* 0x1009BE5A: lea ecx, [ebp - 0x10] */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x1009BE5D: push dword ptr [ebp + 0x10] */
    RECOMP_CALL(sub_1000F764); /* 0x1009BE60: call 0x1000f764 */
    RECOMP_FLAGS_IN();
    edx = MEM32(ebp + 0x8); /* 0x1009BE65: mov edx, dword ptr [ebp + 8] */
    /* test edx, edx */ /* 0x1009BE68: test edx, edx */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(edx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1009BE73; /* 0x1009BE6A: je 0x1009be73 */
L_1009BE6C:
    ecx = MEM32(ebp + 0xC); /* 0x1009BE6C: mov ecx, dword ptr [ebp + 0xc] */
    /* test ecx, ecx */ /* 0x1009BE6F: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1009BE88; /* 0x1009BE71: jne 0x1009be88 */
L_1009BE73:
    RECOMP_CALL(sub_1001177D); /* 0x1009BE73: call 0x1001177d */
    RECOMP_FLAGS_IN();
    MEM32(eax) = 0x16u; /* 0x1009BE78: mov dword ptr [eax], 0x16 */
    RECOMP_CALL(sub_100A4670); /* 0x1009BE7E: call 0x100a4670 */
    RECOMP_FLAGS_IN();
    goto L_1009BF08; /* 0x1009BE83: jmp 0x1009bf08 */
L_1009BE88:
    eax = MEM32(ebp + (-0x10)); /* 0x1009BE88: mov eax, dword ptr [ebp - 0x10] */
    eax = MEM32(eax + 0xA4); /* 0x1009BE8B: mov eax, dword ptr [eax + 0xa4] */
    /* test eax, eax */ /* 0x1009BE91: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1009BEE5; /* 0x1009BE93: jne 0x1009bee5 */
L_1009BE95:
    PUSH32(esp, ebx); /* 0x1009BE95: push ebx */
    PUSH32(esp, esi); /* 0x1009BE96: push esi */
    PUSH32(esp, edi); /* 0x1009BE97: push edi */
    PUSH32(esp, 0x41u); /* 0x1009BE98: push 0x41 */
    edi = POP32_VAL(esp); /* 0x1009BE9A: pop edi */
    PUSH32(esp, 0x5Au); /* 0x1009BE9B: push 0x5a */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    edx = edx - ecx; /* 0x1009BE9D: sub edx, ecx */
    _flag_k = FK_CMP;
    ebx = POP32_VAL(esp); /* 0x1009BE9F: pop ebx */
L_1009BEA0:
    eax = (uint32_t)MEM16(edx + ecx); /* 0x1009BEA0: movzx eax, word ptr [edx + ecx] */
    /* cmp LO16(eax), LO16(edi) */ /* 0x1009BEA4: cmp ax, di */
    _flag_a = (uint32_t)(LO16(eax)) << 16; _flag_b = (uint32_t)(LO16(edi)) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    if (CMP_B(_flag_a, _flag_b)) goto L_1009BEB6; /* 0x1009BEA7: jb 0x1009beb6 */
L_1009BEA9:
    /* cmp LO16(eax), LO16(ebx) */ /* 0x1009BEA9: cmp ax, bx */
    _flag_a = (uint32_t)(LO16(eax)) << 16; _flag_b = (uint32_t)(LO16(ebx)) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    if (CMP_A(_flag_a, _flag_b)) goto L_1009BEB6; /* 0x1009BEAC: ja 0x1009beb6 */
L_1009BEAE:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x20u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 0x20u; /* 0x1009BEAE: add eax, 0x20 */
    _flag_k = FK_ADD;
    esi = (uint32_t)LO16(eax); /* 0x1009BEB1: movzx esi, ax */
    goto L_1009BEB8; /* 0x1009BEB4: jmp 0x1009beb8 */
L_1009BEB6:
    esi = eax; /* 0x1009BEB6: mov esi, eax */
L_1009BEB8:
    eax = (uint32_t)MEM16(ecx); /* 0x1009BEB8: movzx eax, word ptr [ecx] */
    /* cmp LO16(eax), LO16(edi) */ /* 0x1009BEBB: cmp ax, di */
    _flag_a = (uint32_t)(LO16(eax)) << 16; _flag_b = (uint32_t)(LO16(edi)) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    if (CMP_B(_flag_a, _flag_b)) goto L_1009BECB; /* 0x1009BEBE: jb 0x1009becb */
L_1009BEC0:
    /* cmp LO16(eax), LO16(ebx) */ /* 0x1009BEC0: cmp ax, bx */
    _flag_a = (uint32_t)(LO16(eax)) << 16; _flag_b = (uint32_t)(LO16(ebx)) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    if (CMP_A(_flag_a, _flag_b)) goto L_1009BECB; /* 0x1009BEC3: ja 0x1009becb */
L_1009BEC5:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x20u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 0x20u; /* 0x1009BEC5: add eax, 0x20 */
    _flag_k = FK_ADD;
    eax = (uint32_t)LO16(eax); /* 0x1009BEC8: movzx eax, ax */
L_1009BECB:
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 2; /* 0x1009BECB: add ecx, 2 */
    _flag_k = FK_ADD;
    /* test LO16(esi), LO16(esi) */ /* 0x1009BECE: test si, si */
    _flag_a = (uint32_t)(LO16(esi)) << 16; _flag_b = (uint32_t)(LO16(esi)) << 16;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 16);
    if (TEST_Z(_flag_a, _flag_b)) goto L_1009BED8; /* 0x1009BED1: je 0x1009bed8 */
L_1009BED3:
    /* cmp LO16(esi), LO16(eax) */ /* 0x1009BED3: cmp si, ax */
    _flag_a = (uint32_t)(LO16(esi)) << 16; _flag_b = (uint32_t)(LO16(eax)) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    RECOMP_BACKEDGE();
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1009BEA0; /* 0x1009BED6: je 0x1009bea0 */
L_1009BED8:
    edi = POP32_VAL(esp); /* 0x1009BED8: pop edi */
    edx = (uint32_t)LO16(esi); /* 0x1009BED9: movzx edx, si */
    eax = (uint32_t)LO16(eax); /* 0x1009BEDC: movzx eax, ax */
    esi = POP32_VAL(esp); /* 0x1009BEDF: pop esi */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    edx = edx - eax; /* 0x1009BEE0: sub edx, eax */
    _flag_k = FK_CMP;
    ebx = POP32_VAL(esp); /* 0x1009BEE2: pop ebx */
    goto L_1009BF12; /* 0x1009BEE3: jmp 0x1009bf12 */
L_1009BEE5:
    PUSH32(esp, 0xFFFFFFFFu); /* 0x1009BEE5: push -1 */
    PUSH32(esp, ecx); /* 0x1009BEE7: push ecx */
    PUSH32(esp, 0xFFFFFFFFu); /* 0x1009BEE8: push -1 */
    PUSH32(esp, edx); /* 0x1009BEEA: push edx */
    PUSH32(esp, 0x1001u); /* 0x1009BEEB: push 0x1001 */
    PUSH32(esp, eax); /* 0x1009BEF0: push eax */
    RECOMP_CALL(sub_100297C2); /* 0x1009BEF1: call 0x100297c2 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x18u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x18u; /* 0x1009BEF6: add esp, 0x18 */
    _flag_k = FK_ADD;
    /* test eax, eax */ /* 0x1009BEF9: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1009BF0F; /* 0x1009BEFB: jne 0x1009bf0f */
L_1009BEFD:
    RECOMP_CALL(sub_1001177D); /* 0x1009BEFD: call 0x1001177d */
    RECOMP_FLAGS_IN();
    MEM32(eax) = 0x16u; /* 0x1009BF02: mov dword ptr [eax], 0x16 */
L_1009BF08:
    edx = 0x7FFFFFFFu; /* 0x1009BF08: mov edx, 0x7fffffff */
    goto L_1009BF12; /* 0x1009BF0D: jmp 0x1009bf12 */
L_1009BF0F:
    edx = eax + (-0x2); /* 0x1009BF0F: lea edx, [eax - 2] */
L_1009BF12:
    /* cmp MEM8(ebp + (-0x4)), 0 */ /* 0x1009BF12: cmp byte ptr [ebp - 4], 0 */
    _flag_a = (uint32_t)(MEM8(ebp + (-0x4))) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1009BF1F; /* 0x1009BF16: je 0x1009bf1f */
L_1009BF18:
    ecx = MEM32(ebp + (-0x8)); /* 0x1009BF18: mov ecx, dword ptr [ebp - 8] */
    _flag_a = (uint32_t)(MEM32(ecx + 0x70)); _flag_b = (uint32_t)(0xFFFFFFFDu);
    MEM32(ecx + 0x70) = MEM32(ecx + 0x70) & 0xFFFFFFFDu; /* 0x1009BF1B: and dword ptr [ecx + 0x70], 0xfffffffd */
    _cf = 0;
    _flag_k = FK_TEST;
L_1009BF1F:
    eax = edx; /* 0x1009BF1F: mov eax, edx */
    esp = ebp; /* 0x1009BF21: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x1009BF23: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1009BF24: ret  */
    RECOMP_REGS_OUT();
}

void sub_1009BF25(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1009BF25u);

L_1009BF25:
    PUSH32(esp, ebp); /* 0x1009BF25: push ebp */
    ebp = esp; /* 0x1009BF26: mov ebp, esp */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x1009BF28: push dword ptr [ebp + 0xc] */
    PUSH32(esp, 0xFFFFFFFFu); /* 0x1009BF2B: push -1 */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x1009BF2D: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_100113C8); /* 0x1009BF30: call 0x100113c8 */
    RECOMP_FLAGS_IN();
    eax = MEM32(ebp + 0x8); /* 0x1009BF35: mov eax, dword ptr [ebp + 8] */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x1009BF38: add esp, 0xc */
    _flag_k = FK_ADD;
    ebp = POP32_VAL(esp); /* 0x1009BF3B: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1009BF3C: ret  */
    RECOMP_REGS_OUT();
}

void sub_1009BF3D(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1009BF3Du);

    goto L_1009BF3D;
L_100123EE:
    PUSH32(esp, ebp); /* 0x100123EE: push ebp */
    ebp = esp; /* 0x100123EF: mov ebp, esp */
    eax = MEM32(ebp + 0x10); /* 0x100123F1: mov eax, dword ptr [ebp + 0x10] */
    /* test eax, eax */ /* 0x100123F4: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1003298C; /* 0x100123F6: je 0x1003298c */
L_100123FC:
    ecx = MEM32(ebp + 0xC); /* 0x100123FC: mov ecx, dword ptr [ebp + 0xc] */
    edx = MEM32(ebp + 0x8); /* 0x100123FF: mov edx, dword ptr [ebp + 8] */
    PUSH32(esp, esi); /* 0x10012402: push esi */
L_10012403:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax - 1; /* 0x10012403: dec eax */
    _flag_k = FK_DEC;
    if (/* dec result */ CMP_EQ(_flag_a, _flag_b)) goto L_1001241B; /* 0x10012404: je 0x1001241b */
L_10012406:
    esi = (uint32_t)MEM16(edx); /* 0x10012406: movzx esi, word ptr [edx] */
    /* test LO16(esi), LO16(esi) */ /* 0x10012409: test si, si */
    _flag_a = (uint32_t)(LO16(esi)) << 16; _flag_b = (uint32_t)(LO16(esi)) << 16;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 16);
    if (TEST_Z(_flag_a, _flag_b)) goto L_1001241B; /* 0x1001240C: je 0x1001241b */
L_1001240E:
    /* cmp LO16(esi), MEM16(ecx) */ /* 0x1001240E: cmp si, word ptr [ecx] */
    _flag_a = (uint32_t)(LO16(esi)) << 16; _flag_b = (uint32_t)(MEM16(ecx)) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    if (CMP_NE(_flag_a, _flag_b)) goto L_1001241B; /* 0x10012411: jne 0x1001241b */
L_10012413:
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edx = edx + 2; /* 0x10012413: add edx, 2 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 2; /* 0x10012416: add ecx, 2 */
    _flag_k = FK_ADD;
    RECOMP_BACKEDGE();
    goto L_10012403; /* 0x10012419: jmp 0x10012403 */
L_1001241B:
    eax = (uint32_t)MEM16(edx); /* 0x1001241B: movzx eax, word ptr [edx] */
    ecx = (uint32_t)MEM16(ecx); /* 0x1001241E: movzx ecx, word ptr [ecx] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - ecx; /* 0x10012421: sub eax, ecx */
    _flag_k = FK_CMP;
    esi = POP32_VAL(esp); /* 0x10012423: pop esi */
    ebp = POP32_VAL(esp); /* 0x10012424: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x10012425: ret  */
L_1003298C:
    ebp = POP32_VAL(esp); /* 0x1003298C: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1003298D: ret  */
L_1009BF3D:
    PUSH32(esp, ebp); /* 0x1009BF3D: push ebp */
    ebp = esp; /* 0x1009BF3E: mov ebp, esp */
    /* cmp MEM32(0x100DF7C4), 0 */ /* 0x1009BF40: cmp dword ptr [0x100df7c4], 0 */
    _flag_a = (uint32_t)(MEM32(0x100DF7C4)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    PUSH32(esp, esi); /* 0x1009BF47: push esi */
    if (CMP_NE(_flag_a, _flag_b)) goto L_1009BF92; /* 0x1009BF48: jne 0x1009bf92 */
L_1009BF4A:
    /* cmp MEM32(ebp + 0x8), 0 */ /* 0x1009BF4A: cmp dword ptr [ebp + 8], 0 */
    _flag_a = (uint32_t)(MEM32(ebp + 0x8)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_1009BF67; /* 0x1009BF4E: jne 0x1009bf67 */
L_1009BF50:
    RECOMP_CALL(sub_1001177D); /* 0x1009BF50: call 0x1001177d */
    RECOMP_FLAGS_IN();
    MEM32(eax) = 0x16u; /* 0x1009BF55: mov dword ptr [eax], 0x16 */
    RECOMP_CALL(sub_100A4670); /* 0x1009BF5B: call 0x100a4670 */
    RECOMP_FLAGS_IN();
    eax = 0x7FFFFFFFu; /* 0x1009BF60: mov eax, 0x7fffffff */
    goto L_1009BFA5; /* 0x1009BF65: jmp 0x1009bfa5 */
L_1009BF67:
    /* cmp MEM32(ebp + 0xC), 0 */ /* 0x1009BF67: cmp dword ptr [ebp + 0xc], 0 */
    _flag_a = (uint32_t)(MEM32(ebp + 0xC)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1009BF50; /* 0x1009BF6B: je 0x1009bf50 */
L_1009BF6D:
    esi = 0x7FFFFFFFu; /* 0x1009BF6D: mov esi, 0x7fffffff */
    /* cmp MEM32(ebp + 0x10), esi */ /* 0x1009BF72: cmp dword ptr [ebp + 0x10], esi */
    _flag_a = (uint32_t)(MEM32(ebp + 0x10)); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_1009BF8B; /* 0x1009BF75: jbe 0x1009bf8b */
L_1009BF77:
    RECOMP_CALL(sub_1001177D); /* 0x1009BF77: call 0x1001177d */
    RECOMP_FLAGS_IN();
    MEM32(eax) = 0x16u; /* 0x1009BF7C: mov dword ptr [eax], 0x16 */
    RECOMP_CALL(sub_100A4670); /* 0x1009BF82: call 0x100a4670 */
    RECOMP_FLAGS_IN();
    eax = esi; /* 0x1009BF87: mov eax, esi */
    goto L_1009BFA5; /* 0x1009BF89: jmp 0x1009bfa5 */
L_1009BF8B:
    esi = POP32_VAL(esp); /* 0x1009BF8B: pop esi */
    ebp = POP32_VAL(esp); /* 0x1009BF8C: pop ebp */
    RECOMP_BACKEDGE();
    goto L_100123EE; /* 0x1009BF8D: jmp 0x100123ee */
L_1009BF92:
    PUSH32(esp, 0); /* 0x1009BF92: push 0 */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x1009BF94: push dword ptr [ebp + 0x10] */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x1009BF97: push dword ptr [ebp + 0xc] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x1009BF9A: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_1009BFA8); /* 0x1009BF9D: call 0x1009bfa8 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x10u; /* 0x1009BFA2: add esp, 0x10 */
    _flag_k = FK_ADD;
L_1009BFA5:
    esi = POP32_VAL(esp); /* 0x1009BFA5: pop esi */
    ebp = POP32_VAL(esp); /* 0x1009BFA6: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1009BFA7: ret  */
    RECOMP_REGS_OUT();
}

void sub_1009BFA8(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1009BFA8u);

L_1009BFA8:
    PUSH32(esp, ebp); /* 0x1009BFA8: push ebp */
    ebp = esp; /* 0x1009BFA9: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x10u; /* 0x1009BFAB: sub esp, 0x10 */
    _flag_k = FK_CMP;
    PUSH32(esp, edi); /* 0x1009BFAE: push edi */
    edi = MEM32(ebp + 0x10); /* 0x1009BFAF: mov edi, dword ptr [ebp + 0x10] */
    /* test edi, edi */ /* 0x1009BFB2: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1009BFBD; /* 0x1009BFB4: jne 0x1009bfbd */
L_1009BFB6:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1009BFB6: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_1009C042; /* 0x1009BFB8: jmp 0x1009c042 */
L_1009BFBD:
    PUSH32(esp, esi); /* 0x1009BFBD: push esi */
    PUSH32(esp, MEM32(ebp + 0x14)); /* 0x1009BFBE: push dword ptr [ebp + 0x14] */
    ecx = ebp + (-0x10); /* 0x1009BFC1: lea ecx, [ebp - 0x10] */
    RECOMP_CALL(sub_1000F764); /* 0x1009BFC4: call 0x1000f764 */
    RECOMP_FLAGS_IN();
    edx = MEM32(ebp + 0x8); /* 0x1009BFC9: mov edx, dword ptr [ebp + 8] */
    esi = 0x7FFFFFFFu; /* 0x1009BFCC: mov esi, 0x7fffffff */
    /* test edx, edx */ /* 0x1009BFD1: test edx, edx */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(edx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1009BFE0; /* 0x1009BFD3: je 0x1009bfe0 */
L_1009BFD5:
    ecx = MEM32(ebp + 0xC); /* 0x1009BFD5: mov ecx, dword ptr [ebp + 0xc] */
    /* test ecx, ecx */ /* 0x1009BFD8: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1009BFE0; /* 0x1009BFDA: je 0x1009bfe0 */
L_1009BFDC:
    /* cmp edi, esi */ /* 0x1009BFDC: cmp edi, esi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_1009BFF2; /* 0x1009BFDE: jbe 0x1009bff2 */
L_1009BFE0:
    RECOMP_CALL(sub_1001177D); /* 0x1009BFE0: call 0x1001177d */
    RECOMP_FLAGS_IN();
    MEM32(eax) = 0x16u; /* 0x1009BFE5: mov dword ptr [eax], 0x16 */
    RECOMP_CALL(sub_100A4670); /* 0x1009BFEB: call 0x100a4670 */
    RECOMP_FLAGS_IN();
    goto L_1009C032; /* 0x1009BFF0: jmp 0x1009c032 */
L_1009BFF2:
    eax = MEM32(ebp + (-0x10)); /* 0x1009BFF2: mov eax, dword ptr [ebp - 0x10] */
    PUSH32(esp, edi); /* 0x1009BFF5: push edi */
    PUSH32(esp, ecx); /* 0x1009BFF6: push ecx */
    eax = MEM32(eax + 0xA4); /* 0x1009BFF7: mov eax, dword ptr [eax + 0xa4] */
    /* test eax, eax */ /* 0x1009BFFD: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1009C00E; /* 0x1009BFFF: jne 0x1009c00e */
L_1009C001:
    PUSH32(esp, edx); /* 0x1009C001: push edx */
    RECOMP_CALL(sub_100123EE); /* 0x1009C002: call 0x100123ee */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x1009C007: add esp, 0xc */
    _flag_k = FK_ADD;
    esi = eax; /* 0x1009C00A: mov esi, eax */
    goto L_1009C032; /* 0x1009C00C: jmp 0x1009c032 */
L_1009C00E:
    PUSH32(esp, edi); /* 0x1009C00E: push edi */
    PUSH32(esp, edx); /* 0x1009C00F: push edx */
    PUSH32(esp, 0x1000u); /* 0x1009C010: push 0x1000 */
    PUSH32(esp, eax); /* 0x1009C015: push eax */
    RECOMP_CALL(sub_100297C2); /* 0x1009C016: call 0x100297c2 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x18u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x18u; /* 0x1009C01B: add esp, 0x18 */
    _flag_k = FK_ADD;
    /* test eax, eax */ /* 0x1009C01E: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1009C02F; /* 0x1009C020: jne 0x1009c02f */
L_1009C022:
    RECOMP_CALL(sub_1001177D); /* 0x1009C022: call 0x1001177d */
    RECOMP_FLAGS_IN();
    MEM32(eax) = 0x16u; /* 0x1009C027: mov dword ptr [eax], 0x16 */
    goto L_1009C032; /* 0x1009C02D: jmp 0x1009c032 */
L_1009C02F:
    esi = eax + (-0x2); /* 0x1009C02F: lea esi, [eax - 2] */
L_1009C032:
    /* cmp MEM8(ebp + (-0x4)), 0 */ /* 0x1009C032: cmp byte ptr [ebp - 4], 0 */
    _flag_a = (uint32_t)(MEM8(ebp + (-0x4))) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1009C03F; /* 0x1009C036: je 0x1009c03f */
L_1009C038:
    ecx = MEM32(ebp + (-0x8)); /* 0x1009C038: mov ecx, dword ptr [ebp - 8] */
    _flag_a = (uint32_t)(MEM32(ecx + 0x70)); _flag_b = (uint32_t)(0xFFFFFFFDu);
    MEM32(ecx + 0x70) = MEM32(ecx + 0x70) & 0xFFFFFFFDu; /* 0x1009C03B: and dword ptr [ecx + 0x70], 0xfffffffd */
    _cf = 0;
    _flag_k = FK_TEST;
L_1009C03F:
    eax = esi; /* 0x1009C03F: mov eax, esi */
    esi = POP32_VAL(esp); /* 0x1009C041: pop esi */
L_1009C042:
    edi = POP32_VAL(esp); /* 0x1009C042: pop edi */
    esp = ebp; /* 0x1009C043: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x1009C045: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1009C046: ret  */
    RECOMP_REGS_OUT();
}

void sub_1009C047(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1009C047u);

L_1009C047:
    PUSH32(esp, ebp); /* 0x1009C047: push ebp */
    ebp = esp; /* 0x1009C048: mov ebp, esp */
    /* cmp MEM32(0x100DF7C4), 0 */ /* 0x1009C04A: cmp dword ptr [0x100df7c4], 0 */
    _flag_a = (uint32_t)(MEM32(0x100DF7C4)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_1009C09B; /* 0x1009C051: jne 0x1009c09b */
L_1009C053:
    eax = MEM32(ebp + 0x8); /* 0x1009C053: mov eax, dword ptr [ebp + 8] */
    /* test eax, eax */ /* 0x1009C056: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1009C06E; /* 0x1009C058: jne 0x1009c06e */
L_1009C05A:
    RECOMP_CALL(sub_1001177D); /* 0x1009C05A: call 0x1001177d */
    RECOMP_FLAGS_IN();
    MEM32(eax) = 0x16u; /* 0x1009C05F: mov dword ptr [eax], 0x16 */
    RECOMP_CALL(sub_100A4670); /* 0x1009C065: call 0x100a4670 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1009C06A: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    ebp = POP32_VAL(esp); /* 0x1009C06C: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1009C06D: ret  */
L_1009C06E:
    PUSH32(esp, edi); /* 0x1009C06E: push edi */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edi = 0; /* 0x1009C06F: xor edi, edi */
    _cf = 0;
    _flag_k = FK_TEST;
    edx = eax; /* 0x1009C071: mov edx, eax */
    /* cmp MEM16(eax), LO16(edi) */ /* 0x1009C073: cmp word ptr [eax], di */
    _flag_a = (uint32_t)(MEM16(eax)) << 16; _flag_b = (uint32_t)(LO16(edi)) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1009C098; /* 0x1009C076: je 0x1009c098 */
L_1009C078:
    PUSH32(esp, esi); /* 0x1009C078: push esi */
L_1009C079:
    ecx = (uint32_t)MEM16(edx); /* 0x1009C079: movzx ecx, word ptr [edx] */
    PUSH32(esp, 0x61u); /* 0x1009C07C: push 0x61 */
    esi = POP32_VAL(esp); /* 0x1009C07E: pop esi */
    /* cmp LO16(esi), LO16(ecx) */ /* 0x1009C07F: cmp si, cx */
    _flag_a = (uint32_t)(LO16(esi)) << 16; _flag_b = (uint32_t)(LO16(ecx)) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    if (CMP_A(_flag_a, _flag_b)) goto L_1009C08F; /* 0x1009C082: ja 0x1009c08f */
L_1009C084:
    /* cmp ecx, 0x7Au */ /* 0x1009C084: cmp ecx, 0x7a */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x7Au);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_A(_flag_a, _flag_b)) goto L_1009C08F; /* 0x1009C087: ja 0x1009c08f */
L_1009C089:
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0xFFFFFFE0u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 0xFFFFFFE0u; /* 0x1009C089: add ecx, -0x20 */
    _flag_k = FK_ADD;
    MEM16(edx) = (uint16_t)(LO16(ecx)); /* 0x1009C08C: mov word ptr [edx], cx */
L_1009C08F:
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edx = edx + 2; /* 0x1009C08F: add edx, 2 */
    _flag_k = FK_ADD;
    /* cmp MEM16(edx), LO16(edi) */ /* 0x1009C092: cmp word ptr [edx], di */
    _flag_a = (uint32_t)(MEM16(edx)) << 16; _flag_b = (uint32_t)(LO16(edi)) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    RECOMP_BACKEDGE();
    if (CMP_NE(_flag_a, _flag_b)) goto L_1009C079; /* 0x1009C095: jne 0x1009c079 */
L_1009C097:
    esi = POP32_VAL(esp); /* 0x1009C097: pop esi */
L_1009C098:
    edi = POP32_VAL(esp); /* 0x1009C098: pop edi */
    ebp = POP32_VAL(esp); /* 0x1009C099: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1009C09A: ret  */
L_1009C09B:
    PUSH32(esp, 0); /* 0x1009C09B: push 0 */
    PUSH32(esp, 0xFFFFFFFFu); /* 0x1009C09D: push -1 */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x1009C09F: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_1001F9BA); /* 0x1009C0A2: call 0x1001f9ba */
    RECOMP_FLAGS_IN();
    eax = MEM32(ebp + 0x8); /* 0x1009C0A7: mov eax, dword ptr [ebp + 8] */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x1009C0AA: add esp, 0xc */
    _flag_k = FK_ADD;
    ebp = POP32_VAL(esp); /* 0x1009C0AD: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1009C0AE: ret  */
    RECOMP_REGS_OUT();
}

void sub_1009C0AF(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1009C0AFu);

L_1009C0AF:
    PUSH32(esp, ebp); /* 0x1009C0AF: push ebp */
    ebp = esp; /* 0x1009C0B0: mov ebp, esp */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x1009C0B2: push dword ptr [ebp + 0xc] */
    PUSH32(esp, 0xFFFFFFFFu); /* 0x1009C0B5: push -1 */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x1009C0B7: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_1001F9BA); /* 0x1009C0BA: call 0x1001f9ba */
    RECOMP_FLAGS_IN();
    eax = MEM32(ebp + 0x8); /* 0x1009C0BF: mov eax, dword ptr [ebp + 8] */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x1009C0C2: add esp, 0xc */
    _flag_k = FK_ADD;
    ebp = POP32_VAL(esp); /* 0x1009C0C5: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1009C0C6: ret  */
    RECOMP_REGS_OUT();
}

void sub_1009C0C7(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1009C0C7u);

L_1009C0C7:
    PUSH32(esp, ebp); /* 0x1009C0C7: push ebp */
    ebp = esp; /* 0x1009C0C8: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x10u; /* 0x1009C0CA: sub esp, 0x10 */
    _flag_k = FK_CMP;
    PUSH32(esp, ebx); /* 0x1009C0CD: push ebx */
    ebx = MEM32(ebp + 0x10); /* 0x1009C0CE: mov ebx, dword ptr [ebp + 0x10] */
    PUSH32(esp, esi); /* 0x1009C0D1: push esi */
    esi = 0x7FFFFFFFu; /* 0x1009C0D2: mov esi, 0x7fffffff */
    /* cmp ebx, esi */ /* 0x1009C0D7: cmp ebx, esi */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_1009C0F2; /* 0x1009C0D9: jbe 0x1009c0f2 */
L_1009C0DB:
    RECOMP_CALL(sub_1001177D); /* 0x1009C0DB: call 0x1001177d */
    RECOMP_FLAGS_IN();
    MEM32(eax) = 0x16u; /* 0x1009C0E0: mov dword ptr [eax], 0x16 */
    RECOMP_CALL(sub_100A4670); /* 0x1009C0E6: call 0x100a4670 */
    RECOMP_FLAGS_IN();
    eax = esi; /* 0x1009C0EB: mov eax, esi */
    goto L_1009C1F5; /* 0x1009C0ED: jmp 0x1009c1f5 */
L_1009C0F2:
    PUSH32(esp, edi); /* 0x1009C0F2: push edi */
    edi = MEM32(ebp + 0x8); /* 0x1009C0F3: mov edi, dword ptr [ebp + 8] */
    /* test edi, edi */ /* 0x1009C0F6: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1009C113; /* 0x1009C0F8: jne 0x1009c113 */
L_1009C0FA:
    /* test ebx, ebx */ /* 0x1009C0FA: test ebx, ebx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ebx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1009C113; /* 0x1009C0FC: je 0x1009c113 */
L_1009C0FE:
    RECOMP_CALL(sub_1001177D); /* 0x1009C0FE: call 0x1001177d */
    RECOMP_FLAGS_IN();
    MEM32(eax) = 0x16u; /* 0x1009C103: mov dword ptr [eax], 0x16 */
    RECOMP_CALL(sub_100A4670); /* 0x1009C109: call 0x100a4670 */
    RECOMP_FLAGS_IN();
    goto L_1009C1F2; /* 0x1009C10E: jmp 0x1009c1f2 */
L_1009C113:
    esi = MEM32(ebp + 0xC); /* 0x1009C113: mov esi, dword ptr [ebp + 0xc] */
    /* test esi, esi */ /* 0x1009C116: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1009C134; /* 0x1009C118: jne 0x1009c134 */
L_1009C11A:
    RECOMP_CALL(sub_1001177D); /* 0x1009C11A: call 0x1001177d */
    RECOMP_FLAGS_IN();
    MEM32(eax) = 0x16u; /* 0x1009C11F: mov dword ptr [eax], 0x16 */
    RECOMP_CALL(sub_100A4670); /* 0x1009C125: call 0x100a4670 */
    RECOMP_FLAGS_IN();
    eax = 0x7FFFFFFFu; /* 0x1009C12A: mov eax, 0x7fffffff */
    goto L_1009C1F4; /* 0x1009C12F: jmp 0x1009c1f4 */
L_1009C134:
    PUSH32(esp, MEM32(ebp + 0x14)); /* 0x1009C134: push dword ptr [ebp + 0x14] */
    ecx = ebp + (-0x10); /* 0x1009C137: lea ecx, [ebp - 0x10] */
    RECOMP_CALL(sub_1000F764); /* 0x1009C13A: call 0x1000f764 */
    RECOMP_FLAGS_IN();
    eax = MEM32(ebp + (-0x10)); /* 0x1009C13F: mov eax, dword ptr [ebp - 0x10] */
    eax = MEM32(eax + 0xA4); /* 0x1009C142: mov eax, dword ptr [eax + 0xa4] */
    /* test eax, eax */ /* 0x1009C148: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1009C164; /* 0x1009C14A: jne 0x1009c164 */
L_1009C14C:
    PUSH32(esp, ebx); /* 0x1009C14C: push ebx */
    PUSH32(esp, esi); /* 0x1009C14D: push esi */
    PUSH32(esp, edi); /* 0x1009C14E: push edi */
    RECOMP_CALL(sub_100869FF); /* 0x1009C14F: call 0x100869ff */
    RECOMP_FLAGS_IN();
    PUSH32(esp, esi); /* 0x1009C154: push esi */
    RECOMP_CALL(sub_1000F1F3); /* 0x1009C155: call 0x1000f1f3 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x10u; /* 0x1009C15A: add esp, 0x10 */
    _flag_k = FK_ADD;
    esi = eax; /* 0x1009C15D: mov esi, eax */
    goto L_1009C1E5; /* 0x1009C15F: jmp 0x1009c1e5 */
L_1009C164:
    PUSH32(esp, 0); /* 0x1009C164: push 0 */
    PUSH32(esp, 0); /* 0x1009C166: push 0 */
    PUSH32(esp, 0xFFFFFFFFu); /* 0x1009C168: push -1 */
    PUSH32(esp, esi); /* 0x1009C16A: push esi */
    PUSH32(esp, 0x400u); /* 0x1009C16B: push 0x400 */
    PUSH32(esp, eax); /* 0x1009C170: push eax */
    RECOMP_CALL(sub_10012C1F); /* 0x1009C171: call 0x10012c1f */
    RECOMP_FLAGS_IN();
    esi = eax; /* 0x1009C176: mov esi, eax */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x18u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x18u; /* 0x1009C178: add esp, 0x18 */
    _flag_k = FK_ADD;
    /* test esi, esi */ /* 0x1009C17B: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1009C191; /* 0x1009C17D: jne 0x1009c191 */
L_1009C17F:
    RECOMP_CALL(sub_1001177D); /* 0x1009C17F: call 0x1001177d */
    RECOMP_FLAGS_IN();
    esi = 0x7FFFFFFFu; /* 0x1009C184: mov esi, 0x7fffffff */
    MEM32(eax) = 0x2Au; /* 0x1009C189: mov dword ptr [eax], 0x2a */
    goto L_1009C1E5; /* 0x1009C18F: jmp 0x1009c1e5 */
L_1009C191:
    /* cmp esi, ebx */ /* 0x1009C191: cmp esi, ebx */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_G(_flag_a, _flag_b)) goto L_1009C1CC; /* 0x1009C193: jg 0x1009c1cc */
L_1009C195:
    eax = MEM32(ebp + (-0x10)); /* 0x1009C195: mov eax, dword ptr [ebp - 0x10] */
    PUSH32(esp, ebx); /* 0x1009C198: push ebx */
    PUSH32(esp, edi); /* 0x1009C199: push edi */
    PUSH32(esp, 0xFFFFFFFFu); /* 0x1009C19A: push -1 */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x1009C19C: push dword ptr [ebp + 0xc] */
    PUSH32(esp, 0x400u); /* 0x1009C19F: push 0x400 */
    PUSH32(esp, MEM32(eax + 0xA4)); /* 0x1009C1A4: push dword ptr [eax + 0xa4] */
    RECOMP_CALL(sub_10012C1F); /* 0x1009C1AA: call 0x10012c1f */
    RECOMP_FLAGS_IN();
    esi = eax; /* 0x1009C1AF: mov esi, eax */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x18u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x18u; /* 0x1009C1B1: add esp, 0x18 */
    _flag_k = FK_ADD;
    /* test esi, esi */ /* 0x1009C1B4: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_Z(_flag_a, _flag_b)) goto L_1009C17F; /* 0x1009C1B6: je 0x1009c17f */
L_1009C1B8:
    ecx = esi; /* 0x1009C1B8: mov ecx, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi - 1; /* 0x1009C1BA: dec esi */
    _flag_k = FK_DEC;
    /* test ecx, ecx */ /* 0x1009C1BB: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1009C1E5; /* 0x1009C1BD: je 0x1009c1e5 */
L_1009C1BF:
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx - 1; /* 0x1009C1BF: dec ecx */
    _flag_k = FK_DEC;
    eax = (uint32_t)MEM8(edi + ecx); /* 0x1009C1C0: movzx eax, byte ptr [edi + ecx] */
    MEM16(edi + ecx * 2) = (uint16_t)(LO16(eax)); /* 0x1009C1C4: mov word ptr [edi + ecx*2], ax */
    if (/* dec result */ CMP_EQ(_flag_a, _flag_b)) goto L_1009C1E5; /* 0x1009C1C8: je 0x1009c1e5 */
L_1009C1CA:
    RECOMP_BACKEDGE();
    goto L_1009C1BF; /* 0x1009C1CA: jmp 0x1009c1bf */
L_1009C1CC:
    /* test edi, edi */ /* 0x1009C1CC: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1009C1E4; /* 0x1009C1CE: je 0x1009c1e4 */
L_1009C1D0:
    /* test ebx, ebx */ /* 0x1009C1D0: test ebx, ebx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ebx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1009C1E4; /* 0x1009C1D2: je 0x1009c1e4 */
L_1009C1D4:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1009C1D4: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM16(edi) = (uint16_t)(LO16(eax)); /* 0x1009C1D6: mov word ptr [edi], ax */
    RECOMP_CALL(sub_1001177D); /* 0x1009C1D9: call 0x1001177d */
    RECOMP_FLAGS_IN();
    MEM32(eax) = 0x22u; /* 0x1009C1DE: mov dword ptr [eax], 0x22 */
L_1009C1E4:
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi - 1; /* 0x1009C1E4: dec esi */
    _flag_k = FK_DEC;
L_1009C1E5:
    /* cmp MEM8(ebp + (-0x4)), 0 */ /* 0x1009C1E5: cmp byte ptr [ebp - 4], 0 */
    _flag_a = (uint32_t)(MEM8(ebp + (-0x4))) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1009C1F2; /* 0x1009C1E9: je 0x1009c1f2 */
L_1009C1EB:
    eax = MEM32(ebp + (-0x8)); /* 0x1009C1EB: mov eax, dword ptr [ebp - 8] */
    _flag_a = (uint32_t)(MEM32(eax + 0x70)); _flag_b = (uint32_t)(0xFFFFFFFDu);
    MEM32(eax + 0x70) = MEM32(eax + 0x70) & 0xFFFFFFFDu; /* 0x1009C1EE: and dword ptr [eax + 0x70], 0xfffffffd */
    _cf = 0;
    _flag_k = FK_TEST;
L_1009C1F2:
    eax = esi; /* 0x1009C1F2: mov eax, esi */
L_1009C1F4:
    edi = POP32_VAL(esp); /* 0x1009C1F4: pop edi */
L_1009C1F5:
    esi = POP32_VAL(esp); /* 0x1009C1F5: pop esi */
    ebx = POP32_VAL(esp); /* 0x1009C1F6: pop ebx */
    esp = ebp; /* 0x1009C1F7: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x1009C1F9: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1009C1FA: ret  */
    RECOMP_REGS_OUT();
}

void sub_1009C1FB(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1009C1FBu);

L_1009C1FB:
    PUSH32(esp, ebp); /* 0x1009C1FB: push ebp */
    ebp = esp; /* 0x1009C1FC: mov ebp, esp */
    PUSH32(esp, 0); /* 0x1009C1FE: push 0 */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x1009C200: push dword ptr [ebp + 0x10] */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x1009C203: push dword ptr [ebp + 0xc] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x1009C206: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_1009C0C7); /* 0x1009C209: call 0x1009c0c7 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x10u; /* 0x1009C20E: add esp, 0x10 */
    _flag_k = FK_ADD;
    ebp = POP32_VAL(esp); /* 0x1009C211: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1009C212: ret  */
    RECOMP_REGS_OUT();
}

void sub_1009C213(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1009C213u);

L_1009C213:
    PUSH32(esp, 0); /* 0x1009C213: push 0 */
    RECOMP_CALL(sub_1009C21C); /* 0x1009C215: call 0x1009c21c */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1009C21A: pop ecx */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1009C21B: ret  */
    RECOMP_REGS_OUT();
}

void sub_1009C21C(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1009C21Cu);

L_1009C21C:
    PUSH32(esp, ebp); /* 0x1009C21C: push ebp */
    ebp = esp; /* 0x1009C21D: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x18u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x18u; /* 0x1009C21F: sub esp, 0x18 */
    _flag_k = FK_CMP;
    PUSH32(esp, ebx); /* 0x1009C222: push ebx */
    PUSH32(esp, esi); /* 0x1009C223: push esi */
    PUSH32(esp, edi); /* 0x1009C224: push edi */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x1009C225: push dword ptr [ebp + 8] */
    ecx = ebp + (-0x18); /* 0x1009C228: lea ecx, [ebp - 0x18] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ebx = 0; /* 0x1009C22B: xor ebx, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_1000F764); /* 0x1009C22D: call 0x1000f764 */
    RECOMP_FLAGS_IN();
    eax = MEM32(ebp + (-0x18)); /* 0x1009C232: mov eax, dword ptr [ebp - 0x18] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edi = 0; /* 0x1009C235: xor edi, edi */
    _cf = 0;
    _flag_k = FK_TEST;
    eax = MEM32(eax + 0x9C); /* 0x1009C237: mov eax, dword ptr [eax + 0x9c] */
    MEM32(ebp + (-0x4)) = eax; /* 0x1009C23D: mov dword ptr [ebp - 4], eax */
    goto L_1009C245; /* 0x1009C240: jmp 0x1009c245 */
L_1009C242:
    eax = MEM32(ebp + (-0x4)); /* 0x1009C242: mov eax, dword ptr [ebp - 4] */
L_1009C245:
    PUSH32(esp, MEM32(eax + edi * 4 + 0x1C)); /* 0x1009C245: push dword ptr [eax + edi*4 + 0x1c] */
    RECOMP_CALL(sub_100129AF); /* 0x1009C249: call 0x100129af */
    RECOMP_FLAGS_IN();
    esi = eax; /* 0x1009C24E: mov esi, eax */
    eax = MEM32(ebp + (-0x4)); /* 0x1009C250: mov eax, dword ptr [ebp - 4] */
    PUSH32(esp, MEM32(eax + edi * 4)); /* 0x1009C253: push dword ptr [eax + edi*4] */
    RECOMP_CALL(sub_100129AF); /* 0x1009C256: call 0x100129af */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + ebx; /* 0x1009C25B: add eax, ebx */
    _flag_k = FK_ADD;
    ebx = esi + 0x2; /* 0x1009C25D: lea ebx, [esi + 2] */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ebx = ebx + eax; /* 0x1009C260: add ebx, eax */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(1);
    edi = edi + 1; /* 0x1009C262: inc edi */
    _flag_k = FK_INC;
    ecx = POP32_VAL(esp); /* 0x1009C263: pop ecx */
    ecx = POP32_VAL(esp); /* 0x1009C264: pop ecx */
    /* cmp edi, 7 */ /* 0x1009C265: cmp edi, 7 */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(7);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_1009C242; /* 0x1009C268: jb 0x1009c242 */
L_1009C26A:
    eax = ebx + 0x1; /* 0x1009C26A: lea eax, [ebx + 1] */
    MEM32(ebp + (-0x8)) = ebx; /* 0x1009C26D: mov dword ptr [ebp - 8], ebx */
    PUSH32(esp, eax); /* 0x1009C270: push eax */
    RECOMP_CALL(sub_10012226); /* 0x1009C271: call 0x10012226 */
    RECOMP_FLAGS_IN();
    edi = eax; /* 0x1009C276: mov edi, eax */
    ecx = POP32_VAL(esp); /* 0x1009C278: pop ecx */
    /* test edi, edi */ /* 0x1009C279: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1009C2E0; /* 0x1009C27B: je 0x1009c2e0 */
L_1009C27D:
    esi = edi; /* 0x1009C27D: mov esi, edi */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ebx = 0; /* 0x1009C27F: xor ebx, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
L_1009C281:
    eax = MEM32(ebp + (-0x4)); /* 0x1009C281: mov eax, dword ptr [ebp - 4] */
    ecx = MEM32(ebp + (-0x8)); /* 0x1009C284: mov ecx, dword ptr [ebp - 8] */
    MEM8(esi) = (uint8_t)(0x3Au); /* 0x1009C287: mov byte ptr [esi], 0x3a */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx + 1; /* 0x1009C28A: inc ecx */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi + 1; /* 0x1009C28B: inc esi */
    _flag_k = FK_INC;
    PUSH32(esp, MEM32(eax + ebx * 4)); /* 0x1009C28C: push dword ptr [eax + ebx*4] */
    eax = edi; /* 0x1009C28F: mov eax, edi */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - esi; /* 0x1009C291: sub eax, esi */
    _flag_k = FK_CMP;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + ecx; /* 0x1009C293: add eax, ecx */
    _flag_k = FK_ADD;
    PUSH32(esp, eax); /* 0x1009C295: push eax */
    PUSH32(esp, esi); /* 0x1009C296: push esi */
    RECOMP_CALL(sub_100147CD); /* 0x1009C297: call 0x100147cd */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x1009C29C: add esp, 0xc */
    _flag_k = FK_ADD;
    /* test eax, eax */ /* 0x1009C29F: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1009C2F6; /* 0x1009C2A1: jne 0x1009c2f6 */
L_1009C2A3:
    PUSH32(esp, esi); /* 0x1009C2A3: push esi */
    RECOMP_CALL(sub_100129AF); /* 0x1009C2A4: call 0x100129af */
    RECOMP_FLAGS_IN();
    ecx = MEM32(ebp + (-0x8)); /* 0x1009C2A9: mov ecx, dword ptr [ebp - 8] */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esi = esi + eax; /* 0x1009C2AC: add esi, eax */
    _flag_k = FK_ADD;
    eax = MEM32(ebp + (-0x4)); /* 0x1009C2AE: mov eax, dword ptr [ebp - 4] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx + 1; /* 0x1009C2B1: inc ecx */
    _flag_k = FK_INC;
    MEM8(esi) = (uint8_t)(0x3Au); /* 0x1009C2B2: mov byte ptr [esi], 0x3a */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi + 1; /* 0x1009C2B5: inc esi */
    _flag_k = FK_INC;
    PUSH32(esp, MEM32(eax + ebx * 4 + 0x1C)); /* 0x1009C2B6: push dword ptr [eax + ebx*4 + 0x1c] */
    eax = edi; /* 0x1009C2BA: mov eax, edi */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - esi; /* 0x1009C2BC: sub eax, esi */
    _flag_k = FK_CMP;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + ecx; /* 0x1009C2BE: add eax, ecx */
    _flag_k = FK_ADD;
    PUSH32(esp, eax); /* 0x1009C2C0: push eax */
    PUSH32(esp, esi); /* 0x1009C2C1: push esi */
    RECOMP_CALL(sub_100147CD); /* 0x1009C2C2: call 0x100147cd */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x10u; /* 0x1009C2C7: add esp, 0x10 */
    _flag_k = FK_ADD;
    /* test eax, eax */ /* 0x1009C2CA: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1009C2F6; /* 0x1009C2CC: jne 0x1009c2f6 */
L_1009C2CE:
    PUSH32(esp, esi); /* 0x1009C2CE: push esi */
    RECOMP_CALL(sub_100129AF); /* 0x1009C2CF: call 0x100129af */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esi = esi + eax; /* 0x1009C2D4: add esi, eax */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(1);
    ebx = ebx + 1; /* 0x1009C2D6: inc ebx */
    _flag_k = FK_INC;
    ecx = POP32_VAL(esp); /* 0x1009C2D7: pop ecx */
    /* cmp ebx, 7 */ /* 0x1009C2D8: cmp ebx, 7 */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(7);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_1009C281; /* 0x1009C2DB: jb 0x1009c281 */
L_1009C2DD:
    MEM8(esi) = (uint8_t)(0); /* 0x1009C2DD: mov byte ptr [esi], 0 */
L_1009C2E0:
    /* cmp MEM8(ebp + (-0xC)), 0 */ /* 0x1009C2E0: cmp byte ptr [ebp - 0xc], 0 */
    _flag_a = (uint32_t)(MEM8(ebp + (-0xC))) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1009C2ED; /* 0x1009C2E4: je 0x1009c2ed */
L_1009C2E6:
    eax = MEM32(ebp + (-0x10)); /* 0x1009C2E6: mov eax, dword ptr [ebp - 0x10] */
    _flag_a = (uint32_t)(MEM32(eax + 0x70)); _flag_b = (uint32_t)(0xFFFFFFFDu);
    MEM32(eax + 0x70) = MEM32(eax + 0x70) & 0xFFFFFFFDu; /* 0x1009C2E9: and dword ptr [eax + 0x70], 0xfffffffd */
    _cf = 0;
    _flag_k = FK_TEST;
L_1009C2ED:
    eax = edi; /* 0x1009C2ED: mov eax, edi */
    edi = POP32_VAL(esp); /* 0x1009C2EF: pop edi */
    esi = POP32_VAL(esp); /* 0x1009C2F0: pop esi */
    ebx = POP32_VAL(esp); /* 0x1009C2F1: pop ebx */
    esp = ebp; /* 0x1009C2F2: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x1009C2F4: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1009C2F5: ret  */
L_1009C2F6:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1009C2F6: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, eax); /* 0x1009C2F8: push eax */
    PUSH32(esp, eax); /* 0x1009C2F9: push eax */
    PUSH32(esp, eax); /* 0x1009C2FA: push eax */
    PUSH32(esp, eax); /* 0x1009C2FB: push eax */
    PUSH32(esp, eax); /* 0x1009C2FC: push eax */
    RECOMP_CALL(sub_100A469B); /* 0x1009C2FD: call 0x100a469b */
    RECOMP_FLAGS_IN();
    void_lift_trap(0x1009C302u, "int3 ");
    { RECOMP_REGS_OUT(); return; } /* end of function */
    RECOMP_REGS_OUT();
}

void sub_1009C303(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1009C303u);

L_1009C303:
    PUSH32(esp, 0); /* 0x1009C303: push 0 */
    RECOMP_CALL(sub_1009C30C); /* 0x1009C305: call 0x1009c30c */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1009C30A: pop ecx */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1009C30B: ret  */
    RECOMP_REGS_OUT();
}

void sub_1009C30C(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1009C30Cu);

L_1009C30C:
    PUSH32(esp, ebp); /* 0x1009C30C: push ebp */
    ebp = esp; /* 0x1009C30D: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x1Cu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x1Cu; /* 0x1009C30F: sub esp, 0x1c */
    _flag_k = FK_CMP;
    PUSH32(esp, ebx); /* 0x1009C312: push ebx */
    PUSH32(esp, esi); /* 0x1009C313: push esi */
    PUSH32(esp, edi); /* 0x1009C314: push edi */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x1009C315: push dword ptr [ebp + 8] */
    ecx = ebp + (-0x1C); /* 0x1009C318: lea ecx, [ebp - 0x1c] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ebx = 0; /* 0x1009C31B: xor ebx, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_1000F764); /* 0x1009C31D: call 0x1000f764 */
    RECOMP_FLAGS_IN();
    eax = MEM32(ebp + (-0x1C)); /* 0x1009C322: mov eax, dword ptr [ebp - 0x1c] */
    MEM32(ebp + (-0x4)) = 0xCu; /* 0x1009C325: mov dword ptr [ebp - 4], 0xc */
    eax = MEM32(eax + 0x9C); /* 0x1009C32C: mov eax, dword ptr [eax + 0x9c] */
    MEM32(ebp + (-0xC)) = eax; /* 0x1009C332: mov dword ptr [ebp - 0xc], eax */
    edi = eax + 0x38; /* 0x1009C335: lea edi, [eax + 0x38] */
L_1009C338:
    PUSH32(esp, MEM32(edi + 0x30)); /* 0x1009C338: push dword ptr [edi + 0x30] */
    RECOMP_CALL(sub_100129AF); /* 0x1009C33B: call 0x100129af */
    RECOMP_FLAGS_IN();
    PUSH32(esp, MEM32(edi)); /* 0x1009C340: push dword ptr [edi] */
    esi = eax; /* 0x1009C342: mov esi, eax */
    RECOMP_CALL(sub_100129AF); /* 0x1009C344: call 0x100129af */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + ebx; /* 0x1009C349: add eax, ebx */
    _flag_k = FK_ADD;
    edi = edi + 0x4; /* 0x1009C34B: lea edi, [edi + 4] */
    ebx = esi + 0x2; /* 0x1009C34E: lea ebx, [esi + 2] */
    ecx = POP32_VAL(esp); /* 0x1009C351: pop ecx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ebx = ebx + eax; /* 0x1009C352: add ebx, eax */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(MEM32(ebp + (-0x4))); _flag_b = (uint32_t)(1);
    MEM32(ebp + (-0x4)) = MEM32(ebp + (-0x4)) - 1; /* 0x1009C354: dec dword ptr [ebp - 4] */
    _flag_k = FK_DEC;
    ecx = POP32_VAL(esp); /* 0x1009C357: pop ecx */
    RECOMP_BACKEDGE();
    if (/* dec result */ CMP_NE(_flag_a, _flag_b)) goto L_1009C338; /* 0x1009C358: jne 0x1009c338 */
L_1009C35A:
    eax = ebx + 0x1; /* 0x1009C35A: lea eax, [ebx + 1] */
    PUSH32(esp, eax); /* 0x1009C35D: push eax */
    RECOMP_CALL(sub_10012226); /* 0x1009C35E: call 0x10012226 */
    RECOMP_FLAGS_IN();
    edi = eax; /* 0x1009C363: mov edi, eax */
    ecx = POP32_VAL(esp); /* 0x1009C365: pop ecx */
    /* test edi, edi */ /* 0x1009C366: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1009C3DC; /* 0x1009C368: je 0x1009c3dc */
L_1009C36A:
    eax = MEM32(ebp + (-0xC)); /* 0x1009C36A: mov eax, dword ptr [ebp - 0xc] */
    esi = edi; /* 0x1009C36D: mov esi, edi */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x8))); _flag_b = (uint32_t)(0);
    MEM32(ebp + (-0x8)) = MEM32(ebp + (-0x8)) & 0; /* 0x1009C36F: and dword ptr [ebp - 8], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x68u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 0x68u; /* 0x1009C373: add eax, 0x68 */
    _flag_k = FK_ADD;
    MEM32(ebp + (-0x4)) = eax; /* 0x1009C376: mov dword ptr [ebp - 4], eax */
L_1009C379:
    MEM8(esi) = (uint8_t)(0x3Au); /* 0x1009C379: mov byte ptr [esi], 0x3a */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi + 1; /* 0x1009C37C: inc esi */
    _flag_k = FK_INC;
    PUSH32(esp, MEM32(eax + (-0x30))); /* 0x1009C37D: push dword ptr [eax - 0x30] */
    eax = edi; /* 0x1009C380: mov eax, edi */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - esi; /* 0x1009C382: sub eax, esi */
    _flag_k = FK_CMP;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x1009C384: inc eax */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + ebx; /* 0x1009C385: add eax, ebx */
    _flag_k = FK_ADD;
    PUSH32(esp, eax); /* 0x1009C387: push eax */
    PUSH32(esp, esi); /* 0x1009C388: push esi */
    RECOMP_CALL(sub_100147CD); /* 0x1009C389: call 0x100147cd */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x1009C38E: add esp, 0xc */
    _flag_k = FK_ADD;
    /* test eax, eax */ /* 0x1009C391: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1009C3F2; /* 0x1009C393: jne 0x1009c3f2 */
L_1009C395:
    PUSH32(esp, esi); /* 0x1009C395: push esi */
    RECOMP_CALL(sub_100129AF); /* 0x1009C396: call 0x100129af */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esi = esi + eax; /* 0x1009C39B: add esi, eax */
    _flag_k = FK_ADD;
    eax = MEM32(ebp + (-0x4)); /* 0x1009C39D: mov eax, dword ptr [ebp - 4] */
    MEM8(esi) = (uint8_t)(0x3Au); /* 0x1009C3A0: mov byte ptr [esi], 0x3a */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi + 1; /* 0x1009C3A3: inc esi */
    _flag_k = FK_INC;
    PUSH32(esp, MEM32(eax)); /* 0x1009C3A4: push dword ptr [eax] */
    eax = edi; /* 0x1009C3A6: mov eax, edi */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - esi; /* 0x1009C3A8: sub eax, esi */
    _flag_k = FK_CMP;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x1009C3AA: inc eax */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + ebx; /* 0x1009C3AB: add eax, ebx */
    _flag_k = FK_ADD;
    PUSH32(esp, eax); /* 0x1009C3AD: push eax */
    PUSH32(esp, esi); /* 0x1009C3AE: push esi */
    RECOMP_CALL(sub_100147CD); /* 0x1009C3AF: call 0x100147cd */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x10u; /* 0x1009C3B4: add esp, 0x10 */
    _flag_k = FK_ADD;
    /* test eax, eax */ /* 0x1009C3B7: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1009C3F2; /* 0x1009C3B9: jne 0x1009c3f2 */
L_1009C3BB:
    PUSH32(esp, esi); /* 0x1009C3BB: push esi */
    RECOMP_CALL(sub_100129AF); /* 0x1009C3BC: call 0x100129af */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esi = esi + eax; /* 0x1009C3C1: add esi, eax */
    _flag_k = FK_ADD;
    eax = MEM32(ebp + (-0x4)); /* 0x1009C3C3: mov eax, dword ptr [ebp - 4] */
    ecx = POP32_VAL(esp); /* 0x1009C3C6: pop ecx */
    ecx = MEM32(ebp + (-0x8)); /* 0x1009C3C7: mov ecx, dword ptr [ebp - 8] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 4; /* 0x1009C3CA: add eax, 4 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx + 1; /* 0x1009C3CD: inc ecx */
    _flag_k = FK_INC;
    MEM32(ebp + (-0x4)) = eax; /* 0x1009C3CE: mov dword ptr [ebp - 4], eax */
    MEM32(ebp + (-0x8)) = ecx; /* 0x1009C3D1: mov dword ptr [ebp - 8], ecx */
    /* cmp ecx, 0xCu */ /* 0x1009C3D4: cmp ecx, 0xc */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_1009C379; /* 0x1009C3D7: jb 0x1009c379 */
L_1009C3D9:
    MEM8(esi) = (uint8_t)(0); /* 0x1009C3D9: mov byte ptr [esi], 0 */
L_1009C3DC:
    /* cmp MEM8(ebp + (-0x10)), 0 */ /* 0x1009C3DC: cmp byte ptr [ebp - 0x10], 0 */
    _flag_a = (uint32_t)(MEM8(ebp + (-0x10))) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1009C3E9; /* 0x1009C3E0: je 0x1009c3e9 */
L_1009C3E2:
    eax = MEM32(ebp + (-0x14)); /* 0x1009C3E2: mov eax, dword ptr [ebp - 0x14] */
    _flag_a = (uint32_t)(MEM32(eax + 0x70)); _flag_b = (uint32_t)(0xFFFFFFFDu);
    MEM32(eax + 0x70) = MEM32(eax + 0x70) & 0xFFFFFFFDu; /* 0x1009C3E5: and dword ptr [eax + 0x70], 0xfffffffd */
    _cf = 0;
    _flag_k = FK_TEST;
L_1009C3E9:
    eax = edi; /* 0x1009C3E9: mov eax, edi */
    edi = POP32_VAL(esp); /* 0x1009C3EB: pop edi */
    esi = POP32_VAL(esp); /* 0x1009C3EC: pop esi */
    ebx = POP32_VAL(esp); /* 0x1009C3ED: pop ebx */
    esp = ebp; /* 0x1009C3EE: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x1009C3F0: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1009C3F1: ret  */
L_1009C3F2:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1009C3F2: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, eax); /* 0x1009C3F4: push eax */
    PUSH32(esp, eax); /* 0x1009C3F5: push eax */
    PUSH32(esp, eax); /* 0x1009C3F6: push eax */
    PUSH32(esp, eax); /* 0x1009C3F7: push eax */
    PUSH32(esp, eax); /* 0x1009C3F8: push eax */
    RECOMP_CALL(sub_100A469B); /* 0x1009C3F9: call 0x100a469b */
    RECOMP_FLAGS_IN();
    void_lift_trap(0x1009C3FEu, "int3 ");
    { RECOMP_REGS_OUT(); return; } /* end of function */
    RECOMP_REGS_OUT();
}

void sub_1009C3FF(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1009C3FFu);

L_1009C3FF:
    PUSH32(esp, 0); /* 0x1009C3FF: push 0 */
    RECOMP_CALL(sub_1009D1F8); /* 0x1009C401: call 0x1009d1f8 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1009C406: pop ecx */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1009C407: ret  */
    RECOMP_REGS_OUT();
}

void sub_1009C408(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1009C408u);

L_1009C408:
    PUSH32(esp, ebp); /* 0x1009C408: push ebp */
    ebp = esp; /* 0x1009C409: mov ebp, esp */
    PUSH32(esp, 0); /* 0x1009C40B: push 0 */
    PUSH32(esp, MEM32(ebp + 0x18)); /* 0x1009C40D: push dword ptr [ebp + 0x18] */
    PUSH32(esp, MEM32(ebp + 0x14)); /* 0x1009C410: push dword ptr [ebp + 0x14] */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x1009C413: push dword ptr [ebp + 0x10] */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x1009C416: push dword ptr [ebp + 0xc] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x1009C419: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_1009C426); /* 0x1009C41C: call 0x1009c426 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x18u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x18u; /* 0x1009C421: add esp, 0x18 */
    _flag_k = FK_ADD;
    ebp = POP32_VAL(esp); /* 0x1009C424: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1009C425: ret  */
    RECOMP_REGS_OUT();
}

void sub_1009C426(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1009C426u);

L_1009C426:
    PUSH32(esp, ebp); /* 0x1009C426: push ebp */
    ebp = esp; /* 0x1009C427: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x18u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x18u; /* 0x1009C429: sub esp, 0x18 */
    _flag_k = FK_CMP;
    PUSH32(esp, ebx); /* 0x1009C42C: push ebx */
    PUSH32(esp, esi); /* 0x1009C42D: push esi */
    PUSH32(esp, edi); /* 0x1009C42E: push edi */
    PUSH32(esp, MEM32(ebp + 0x1C)); /* 0x1009C42F: push dword ptr [ebp + 0x1c] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ebx = 0; /* 0x1009C432: xor ebx, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = ebp + (-0x18); /* 0x1009C434: lea ecx, [ebp - 0x18] */
    edi = ebx; /* 0x1009C437: mov edi, ebx */
    MEM32(ebp + (-0x4)) = ebx; /* 0x1009C439: mov dword ptr [ebp - 4], ebx */
    esi = ebx; /* 0x1009C43C: mov esi, ebx */
    RECOMP_CALL(sub_1000F764); /* 0x1009C43E: call 0x1000f764 */
    RECOMP_FLAGS_IN();
    eax = MEM32(ebp + 0x8); /* 0x1009C443: mov eax, dword ptr [ebp + 8] */
    /* test eax, eax */ /* 0x1009C446: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1009C45B; /* 0x1009C448: je 0x1009c45b */
L_1009C44A:
    /* cmp MEM32(ebp + 0xC), ebx */ /* 0x1009C44A: cmp dword ptr [ebp + 0xc], ebx */
    _flag_a = (uint32_t)(MEM32(ebp + 0xC)); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1009C45B; /* 0x1009C44D: je 0x1009c45b */
L_1009C44F:
    MEM8(eax) = (uint8_t)(LO8(ebx)); /* 0x1009C44F: mov byte ptr [eax], bl */
    /* cmp MEM32(ebp + 0x10), ebx */ /* 0x1009C451: cmp dword ptr [ebp + 0x10], ebx */
    _flag_a = (uint32_t)(MEM32(ebp + 0x10)); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1009C45B; /* 0x1009C454: je 0x1009c45b */
L_1009C456:
    /* cmp MEM32(ebp + 0x14), ebx */ /* 0x1009C456: cmp dword ptr [ebp + 0x14], ebx */
    _flag_a = (uint32_t)(MEM32(ebp + 0x14)); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_1009C470; /* 0x1009C459: jne 0x1009c470 */
L_1009C45B:
    RECOMP_CALL(sub_1001177D); /* 0x1009C45B: call 0x1001177d */
    RECOMP_FLAGS_IN();
    MEM32(eax) = 0x16u; /* 0x1009C460: mov dword ptr [eax], 0x16 */
    RECOMP_CALL(sub_100A4670); /* 0x1009C466: call 0x100a4670 */
    RECOMP_FLAGS_IN();
    goto L_1009C533; /* 0x1009C46B: jmp 0x1009c533 */
L_1009C470:
    eax = MEM32(ebp + (-0x18)); /* 0x1009C470: mov eax, dword ptr [ebp - 0x18] */
    PUSH32(esp, ebx); /* 0x1009C473: push ebx */
    PUSH32(esp, ebx); /* 0x1009C474: push ebx */
    PUSH32(esp, 0xFFFFFFFFu); /* 0x1009C475: push -1 */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x1009C477: push dword ptr [ebp + 0x10] */
    PUSH32(esp, ebx); /* 0x1009C47A: push ebx */
    PUSH32(esp, MEM32(eax + 0xC)); /* 0x1009C47B: push dword ptr [eax + 0xc] */
    RECOMP_ICALL(MEM32(0x100E5024)); /* 0x1009C47E: call dword ptr [0x100e5024] */
    RECOMP_FLAGS_IN();
    MEM32(ebp + (-0x8)) = eax; /* 0x1009C484: mov dword ptr [ebp - 8], eax */
    /* test eax, eax */ /* 0x1009C487: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1009C49C; /* 0x1009C489: jne 0x1009c49c */
L_1009C48B:
    RECOMP_ICALL(MEM32(0x100E500C)); /* 0x1009C48B: call dword ptr [0x100e500c] */
    RECOMP_FLAGS_IN();
    PUSH32(esp, eax); /* 0x1009C491: push eax */
    RECOMP_CALL(sub_1001E4A7); /* 0x1009C492: call 0x1001e4a7 */
    RECOMP_FLAGS_IN();
    goto L_1009C520; /* 0x1009C497: jmp 0x1009c520 */
L_1009C49C:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + eax; /* 0x1009C49C: add eax, eax */
    _flag_k = FK_ADD;
    PUSH32(esp, eax); /* 0x1009C49E: push eax */
    RECOMP_CALL(sub_10012226); /* 0x1009C49F: call 0x10012226 */
    RECOMP_FLAGS_IN();
    MEM32(ebp + (-0x4)) = eax; /* 0x1009C4A4: mov dword ptr [ebp - 4], eax */
    ecx = POP32_VAL(esp); /* 0x1009C4A7: pop ecx */
    /* test eax, eax */ /* 0x1009C4A8: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1009C521; /* 0x1009C4AA: je 0x1009c521 */
L_1009C4AC:
    PUSH32(esp, MEM32(ebp + (-0x8))); /* 0x1009C4AC: push dword ptr [ebp - 8] */
    PUSH32(esp, eax); /* 0x1009C4AF: push eax */
    eax = MEM32(ebp + (-0x18)); /* 0x1009C4B0: mov eax, dword ptr [ebp - 0x18] */
    PUSH32(esp, 0xFFFFFFFFu); /* 0x1009C4B3: push -1 */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x1009C4B5: push dword ptr [ebp + 0x10] */
    PUSH32(esp, ebx); /* 0x1009C4B8: push ebx */
    PUSH32(esp, MEM32(eax + 0xC)); /* 0x1009C4B9: push dword ptr [eax + 0xc] */
    RECOMP_ICALL(MEM32(0x100E5024)); /* 0x1009C4BC: call dword ptr [0x100e5024] */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x1009C4C2: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_Z(_flag_a, _flag_b)) goto L_1009C48B; /* 0x1009C4C4: je 0x1009c48b */
L_1009C4C6:
    eax = MEM32(ebp + 0xC); /* 0x1009C4C6: mov eax, dword ptr [ebp + 0xc] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + eax; /* 0x1009C4C9: add eax, eax */
    _flag_k = FK_ADD;
    PUSH32(esp, eax); /* 0x1009C4CB: push eax */
    RECOMP_CALL(sub_10012226); /* 0x1009C4CC: call 0x10012226 */
    RECOMP_FLAGS_IN();
    esi = eax; /* 0x1009C4D1: mov esi, eax */
    ecx = POP32_VAL(esp); /* 0x1009C4D3: pop ecx */
    /* test esi, esi */ /* 0x1009C4D4: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1009C521; /* 0x1009C4D6: je 0x1009c521 */
L_1009C4D8:
    PUSH32(esp, MEM32(ebp + 0x1C)); /* 0x1009C4D8: push dword ptr [ebp + 0x1c] */
    PUSH32(esp, MEM32(ebp + 0x18)); /* 0x1009C4DB: push dword ptr [ebp + 0x18] */
    PUSH32(esp, MEM32(ebp + 0x14)); /* 0x1009C4DE: push dword ptr [ebp + 0x14] */
    PUSH32(esp, MEM32(ebp + (-0x4))); /* 0x1009C4E1: push dword ptr [ebp - 4] */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x1009C4E4: push dword ptr [ebp + 0xc] */
    PUSH32(esp, esi); /* 0x1009C4E7: push esi */
    RECOMP_CALL(sub_1009D8C6); /* 0x1009C4E8: call 0x1009d8c6 */
    RECOMP_FLAGS_IN();
    edi = eax; /* 0x1009C4ED: mov edi, eax */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x18u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x18u; /* 0x1009C4EF: add esp, 0x18 */
    _flag_k = FK_ADD;
    /* test edi, edi */ /* 0x1009C4F2: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1009C521; /* 0x1009C4F4: je 0x1009c521 */
L_1009C4F6:
    eax = MEM32(ebp + (-0x18)); /* 0x1009C4F6: mov eax, dword ptr [ebp - 0x18] */
    PUSH32(esp, ebx); /* 0x1009C4F9: push ebx */
    PUSH32(esp, ebx); /* 0x1009C4FA: push ebx */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x1009C4FB: push dword ptr [ebp + 0xc] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x1009C4FE: push dword ptr [ebp + 8] */
    PUSH32(esp, 0xFFFFFFFFu); /* 0x1009C501: push -1 */
    PUSH32(esp, esi); /* 0x1009C503: push esi */
    PUSH32(esp, ebx); /* 0x1009C504: push ebx */
    PUSH32(esp, MEM32(eax + 0xC)); /* 0x1009C505: push dword ptr [eax + 0xc] */
    RECOMP_ICALL(MEM32(0x100E5028)); /* 0x1009C508: call dword ptr [0x100e5028] */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x1009C50E: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1009C521; /* 0x1009C510: jne 0x1009c521 */
L_1009C512:
    RECOMP_ICALL(MEM32(0x100E500C)); /* 0x1009C512: call dword ptr [0x100e500c] */
    RECOMP_FLAGS_IN();
    PUSH32(esp, eax); /* 0x1009C518: push eax */
    RECOMP_CALL(sub_1001E4A7); /* 0x1009C519: call 0x1001e4a7 */
    RECOMP_FLAGS_IN();
    edi = ebx; /* 0x1009C51E: mov edi, ebx */
L_1009C520:
    ecx = POP32_VAL(esp); /* 0x1009C520: pop ecx */
L_1009C521:
    PUSH32(esp, esi); /* 0x1009C521: push esi */
    RECOMP_CALL(sub_1000ECE0); /* 0x1009C522: call 0x1000ece0 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, MEM32(ebp + (-0x4))); /* 0x1009C527: push dword ptr [ebp - 4] */
    RECOMP_CALL(sub_1000ECE0); /* 0x1009C52A: call 0x1000ece0 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1009C52F: pop ecx */
    ecx = POP32_VAL(esp); /* 0x1009C530: pop ecx */
    ebx = edi; /* 0x1009C531: mov ebx, edi */
L_1009C533:
    /* cmp MEM8(ebp + (-0xC)), 0 */ /* 0x1009C533: cmp byte ptr [ebp - 0xc], 0 */
    _flag_a = (uint32_t)(MEM8(ebp + (-0xC))) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1009C540; /* 0x1009C537: je 0x1009c540 */
L_1009C539:
    ecx = MEM32(ebp + (-0x10)); /* 0x1009C539: mov ecx, dword ptr [ebp - 0x10] */
    _flag_a = (uint32_t)(MEM32(ecx + 0x70)); _flag_b = (uint32_t)(0xFFFFFFFDu);
    MEM32(ecx + 0x70) = MEM32(ecx + 0x70) & 0xFFFFFFFDu; /* 0x1009C53C: and dword ptr [ecx + 0x70], 0xfffffffd */
    _cf = 0;
    _flag_k = FK_TEST;
L_1009C540:
    edi = POP32_VAL(esp); /* 0x1009C540: pop edi */
    esi = POP32_VAL(esp); /* 0x1009C541: pop esi */
    eax = ebx; /* 0x1009C542: mov eax, ebx */
    ebx = POP32_VAL(esp); /* 0x1009C544: pop ebx */
    esp = ebp; /* 0x1009C545: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x1009C547: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1009C548: ret  */
    RECOMP_REGS_OUT();
}

void sub_1009C549(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1009C549u);

L_1009C549:
    PUSH32(esp, ebp); /* 0x1009C549: push ebp */
    ebp = esp; /* 0x1009C54A: mov ebp, esp */
    PUSH32(esp, MEM32(ebp + 0x18)); /* 0x1009C54C: push dword ptr [ebp + 0x18] */
    PUSH32(esp, 0); /* 0x1009C54F: push 0 */
    PUSH32(esp, MEM32(ebp + 0x14)); /* 0x1009C551: push dword ptr [ebp + 0x14] */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x1009C554: push dword ptr [ebp + 0x10] */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x1009C557: push dword ptr [ebp + 0xc] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x1009C55A: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_1009C426); /* 0x1009C55D: call 0x1009c426 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x18u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x18u; /* 0x1009C562: add esp, 0x18 */
    _flag_k = FK_ADD;
    ebp = POP32_VAL(esp); /* 0x1009C565: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1009C566: ret  */
    RECOMP_REGS_OUT();
}

void sub_1009C567(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1009C567u);

L_1009C567:
    PUSH32(esp, ebp); /* 0x1009C567: push ebp */
    ebp = esp; /* 0x1009C568: mov ebp, esp */
    PUSH32(esp, 0); /* 0x1009C56A: push 0 */
    PUSH32(esp, 0); /* 0x1009C56C: push 0 */
    PUSH32(esp, MEM32(ebp + 0x14)); /* 0x1009C56E: push dword ptr [ebp + 0x14] */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x1009C571: push dword ptr [ebp + 0x10] */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x1009C574: push dword ptr [ebp + 0xc] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x1009C577: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_1009C426); /* 0x1009C57A: call 0x1009c426 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x18u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x18u; /* 0x1009C57F: add esp, 0x18 */
    _flag_k = FK_ADD;
    ebp = POP32_VAL(esp); /* 0x1009C582: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1009C583: ret  */
    RECOMP_REGS_OUT();
}

void sub_1009C584(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1009C584u);

L_1009C584:
    PUSH32(esp, ebp); /* 0x1009C584: push ebp */
    ebp = esp; /* 0x1009C585: mov ebp, esp */
    eax = MEM32(ebp + 0xC); /* 0x1009C587: mov eax, dword ptr [ebp + 0xc] */
    PUSH32(esp, ebx); /* 0x1009C58A: push ebx */
    eax = (uint32_t)LO16(eax); /* 0x1009C58B: movzx eax, ax */
    PUSH32(esp, esi); /* 0x1009C58E: push esi */
    PUSH32(esp, edi); /* 0x1009C58F: push edi */
    /* cmp eax, 0x59u */ /* 0x1009C590: cmp eax, 0x59 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x59u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_G(_flag_a, _flag_b)) goto L_1009C7D2; /* 0x1009C593: jg 0x1009c7d2 */
L_1009C599:
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1009C798; /* 0x1009C599: je 0x1009c798 */
L_1009C59F:
    /* cmp eax, 0x49u */ /* 0x1009C59F: cmp eax, 0x49 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x49u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_G(_flag_a, _flag_b)) goto L_1009C6A6; /* 0x1009C5A2: jg 0x1009c6a6 */
L_1009C5A8:
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1009C672; /* 0x1009C5A8: je 0x1009c672 */
L_1009C5AE:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - 4; /* 0x1009C5AE: sub eax, 4 */
    _flag_k = FK_CMP;
    if (/* sub result */ CMP_EQ(_flag_a, _flag_b)) goto L_1009CA97; /* 0x1009C5B1: je 0x1009ca97 */
L_1009C5B7:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(9);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - 9; /* 0x1009C5B7: sub eax, 9 */
    _flag_k = FK_CMP;
    if (/* sub result */ CMP_EQ(_flag_a, _flag_b)) goto L_1009CA97; /* 0x1009C5BA: je 0x1009ca97 */
L_1009C5C0:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x18u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - 0x18u; /* 0x1009C5C0: sub eax, 0x18 */
    _flag_k = FK_CMP;
    if (/* sub result */ CMP_EQ(_flag_a, _flag_b)) goto L_1009C65A; /* 0x1009C5C3: je 0x1009c65a */
L_1009C5C9:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x1Cu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - 0x1Cu; /* 0x1009C5C9: sub eax, 0x1c */
    _flag_k = FK_CMP;
    if (/* sub result */ CMP_EQ(_flag_a, _flag_b)) goto L_1009C62E; /* 0x1009C5CC: je 0x1009c62e */
L_1009C5CE:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax - 1; /* 0x1009C5CE: dec eax */
    _flag_k = FK_DEC;
    if (/* dec result */ CMP_EQ(_flag_a, _flag_b)) goto L_1009C602; /* 0x1009C5CF: je 0x1009c602 */
L_1009C5D1:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(6);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - 6; /* 0x1009C5D1: sub eax, 6 */
    _flag_k = FK_CMP;
    if (/* sub result */ CMP_NE(_flag_a, _flag_b)) goto L_1009C959; /* 0x1009C5D4: jne 0x1009c959 */
L_1009C5DA:
    eax = MEM32(ebp + 0x10); /* 0x1009C5DA: mov eax, dword ptr [ebp + 0x10] */
    eax = MEM32(eax + 0x8); /* 0x1009C5DD: mov eax, dword ptr [eax + 8] */
    /* test eax, eax */ /* 0x1009C5E0: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_1009C949; /* 0x1009C5E2: js 0x1009c949 */
L_1009C5E8:
    /* cmp eax, 0x17u */ /* 0x1009C5E8: cmp eax, 0x17 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x17u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
L_1009C5EB:
    if (recomp_cond_cf(_flag_k, _flag_a, _flag_b, CC_G, _cf)) goto L_1009C949; /* 0x1009C5EB: jg 0x1009c949 */
L_1009C5F1:
    PUSH32(esp, MEM32(ebp + 0x20)); /* 0x1009C5F1: push dword ptr [ebp + 0x20] */
    PUSH32(esp, MEM32(ebp + 0x18)); /* 0x1009C5F4: push dword ptr [ebp + 0x18] */
    PUSH32(esp, MEM32(ebp + 0x14)); /* 0x1009C5F7: push dword ptr [ebp + 0x14] */
    PUSH32(esp, 2); /* 0x1009C5FA: push 2 */
L_1009C5FC:
    PUSH32(esp, eax); /* 0x1009C5FC: push eax */
    goto L_1009C858; /* 0x1009C5FD: jmp 0x1009c858 */
L_1009C602:
    eax = MEM32(ebp + 0x10); /* 0x1009C602: mov eax, dword ptr [ebp + 0x10] */
    ecx = MEM32(eax + 0x10); /* 0x1009C605: mov ecx, dword ptr [eax + 0x10] */
    /* test ecx, ecx */ /* 0x1009C608: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_1009C949; /* 0x1009C60A: js 0x1009c949 */
L_1009C610:
    /* cmp ecx, 0xBu */ /* 0x1009C610: cmp ecx, 0xb */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0xBu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_G(_flag_a, _flag_b)) goto L_1009C949; /* 0x1009C613: jg 0x1009c949 */
L_1009C619:
    PUSH32(esp, MEM32(ebp + 0x18)); /* 0x1009C619: push dword ptr [ebp + 0x18] */
    eax = MEM32(ebp + 0x1C); /* 0x1009C61C: mov eax, dword ptr [ebp + 0x1c] */
    PUSH32(esp, MEM32(ebp + 0x14)); /* 0x1009C61F: push dword ptr [ebp + 0x14] */
    PUSH32(esp, MEM32(eax + ecx * 4 + 0x11C)); /* 0x1009C622: push dword ptr [eax + ecx*4 + 0x11c] */
    goto L_1009CA8F; /* 0x1009C629: jmp 0x1009ca8f */
L_1009C62E:
    eax = MEM32(ebp + 0x10); /* 0x1009C62E: mov eax, dword ptr [ebp + 0x10] */
    ecx = MEM32(eax + 0x18); /* 0x1009C631: mov ecx, dword ptr [eax + 0x18] */
    /* test ecx, ecx */ /* 0x1009C634: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_1009C949; /* 0x1009C636: js 0x1009c949 */
L_1009C63C:
    /* cmp ecx, 6 */ /* 0x1009C63C: cmp ecx, 6 */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(6);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_G(_flag_a, _flag_b)) goto L_1009C949; /* 0x1009C63F: jg 0x1009c949 */
L_1009C645:
    PUSH32(esp, MEM32(ebp + 0x18)); /* 0x1009C645: push dword ptr [ebp + 0x18] */
    eax = MEM32(ebp + 0x1C); /* 0x1009C648: mov eax, dword ptr [ebp + 0x1c] */
    PUSH32(esp, MEM32(ebp + 0x14)); /* 0x1009C64B: push dword ptr [ebp + 0x14] */
    PUSH32(esp, MEM32(eax + ecx * 4 + 0xD0)); /* 0x1009C64E: push dword ptr [eax + ecx*4 + 0xd0] */
    goto L_1009CA8F; /* 0x1009C655: jmp 0x1009ca8f */
L_1009C65A:
    ecx = MEM32(ebp + 0x14); /* 0x1009C65A: mov ecx, dword ptr [ebp + 0x14] */
    PUSH32(esp, 0x25u); /* 0x1009C65D: push 0x25 */
    edx = POP32_VAL(esp); /* 0x1009C65F: pop edx */
    eax = MEM32(ecx); /* 0x1009C660: mov eax, dword ptr [ecx] */
    MEM16(eax) = (uint16_t)(LO16(edx)); /* 0x1009C662: mov word ptr [eax], dx */
    eax = MEM32(ebp + 0x18); /* 0x1009C665: mov eax, dword ptr [ebp + 0x18] */
    _flag_a = (uint32_t)(MEM32(ecx)); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM32(ecx) = MEM32(ecx) + 2; /* 0x1009C668: add dword ptr [ecx], 2 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(MEM32(eax)); _flag_b = (uint32_t)(1);
    MEM32(eax) = MEM32(eax) - 1; /* 0x1009C66B: dec dword ptr [eax] */
    _flag_k = FK_DEC;
    goto L_1009CA97; /* 0x1009C66D: jmp 0x1009ca97 */
L_1009C672:
    eax = MEM32(ebp + 0x10); /* 0x1009C672: mov eax, dword ptr [ebp + 0x10] */
    eax = MEM32(eax + 0x8); /* 0x1009C675: mov eax, dword ptr [eax + 8] */
    /* test eax, eax */ /* 0x1009C678: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_1009C949; /* 0x1009C67A: js 0x1009c949 */
L_1009C680:
    /* cmp eax, 0x17u */ /* 0x1009C680: cmp eax, 0x17 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x17u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_G(_flag_a, _flag_b)) goto L_1009C949; /* 0x1009C683: jg 0x1009c949 */
L_1009C689:
    PUSH32(esp, 0xCu); /* 0x1009C689: push 0xc */
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFFu : 0; /* 0x1009C68B: cdq  */
    ecx = POP32_VAL(esp); /* 0x1009C68C: pop ecx */
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax; int32_t _dv = (int32_t)ecx; /* 0x1009C68D: idiv ecx */
      if (_dv && !(_dv == -1 && _dividend == INT64_MIN)) { eax = (uint32_t)((int32_t)(_dividend / _dv)); edx = (uint32_t)((int32_t)(_dividend % _dv)); }
      else { eax = 0; edx = 0; } }
    /* test edx, edx */ /* 0x1009C68F: test edx, edx */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(edx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1009C695; /* 0x1009C691: jne 0x1009c695 */
L_1009C693:
    edx = ecx; /* 0x1009C693: mov edx, ecx */
L_1009C695:
    PUSH32(esp, MEM32(ebp + 0x20)); /* 0x1009C695: push dword ptr [ebp + 0x20] */
    PUSH32(esp, MEM32(ebp + 0x18)); /* 0x1009C698: push dword ptr [ebp + 0x18] */
    PUSH32(esp, MEM32(ebp + 0x14)); /* 0x1009C69B: push dword ptr [ebp + 0x14] */
    PUSH32(esp, 2); /* 0x1009C69E: push 2 */
L_1009C6A0:
    PUSH32(esp, edx); /* 0x1009C6A0: push edx */
    goto L_1009C858; /* 0x1009C6A1: jmp 0x1009c858 */
L_1009C6A6:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x4Du);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - 0x4Du; /* 0x1009C6A6: sub eax, 0x4d */
    _flag_k = FK_CMP;
    if (/* sub result */ CMP_EQ(_flag_a, _flag_b)) goto L_1009C782; /* 0x1009C6A9: je 0x1009c782 */
L_1009C6AF:
    PUSH32(esp, 6); /* 0x1009C6AF: push 6 */
    ecx = POP32_VAL(esp); /* 0x1009C6B1: pop ecx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - ecx; /* 0x1009C6B2: sub eax, ecx */
    _flag_k = FK_CMP;
    if (/* sub result */ CMP_EQ(_flag_a, _flag_b)) goto L_1009C75B; /* 0x1009C6B4: je 0x1009c75b */
L_1009C6BA:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax - 1; /* 0x1009C6BA: dec eax */
    _flag_k = FK_DEC;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax - 1; /* 0x1009C6BB: dec eax */
    _flag_k = FK_DEC;
    if (/* dec result */ CMP_EQ(_flag_a, _flag_b)) goto L_1009C70E; /* 0x1009C6BC: je 0x1009c70e */
L_1009C6BE:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax - 1; /* 0x1009C6BE: dec eax */
    _flag_k = FK_DEC;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax - 1; /* 0x1009C6BF: dec eax */
    _flag_k = FK_DEC;
    if (/* dec result */ CMP_EQ(_flag_a, _flag_b)) goto L_1009C6EF; /* 0x1009C6C0: je 0x1009c6ef */
L_1009C6C2:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax - 1; /* 0x1009C6C2: dec eax */
    _flag_k = FK_DEC;
    if (/* dec result */ CMP_NE(_flag_a, _flag_b)) goto L_1009C959; /* 0x1009C6C3: jne 0x1009c959 */
L_1009C6C9:
    PUSH32(esp, MEM32(ebp + 0x1C)); /* 0x1009C6C9: push dword ptr [ebp + 0x1c] */
    PUSH32(esp, MEM32(ebp + 0x18)); /* 0x1009C6CC: push dword ptr [ebp + 0x18] */
    PUSH32(esp, MEM32(ebp + 0x14)); /* 0x1009C6CF: push dword ptr [ebp + 0x14] */
L_1009C6D2:
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x1009C6D2: push dword ptr [ebp + 0x10] */
    PUSH32(esp, 2); /* 0x1009C6D5: push 2 */
L_1009C6D7:
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x1009C6D7: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_1009CB9D); /* 0x1009C6DA: call 0x1009cb9d */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x18u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x18u; /* 0x1009C6DF: add esp, 0x18 */
    _flag_k = FK_ADD;
    /* test eax, eax */ /* 0x1009C6E2: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1009C959; /* 0x1009C6E4: je 0x1009c959 */
L_1009C6EA:
    goto L_1009CA97; /* 0x1009C6EA: jmp 0x1009ca97 */
L_1009C6EF:
    edx = MEM32(ebp + 0x10); /* 0x1009C6EF: mov edx, dword ptr [ebp + 0x10] */
    eax = MEM32(edx + 0x18); /* 0x1009C6F2: mov eax, dword ptr [edx + 0x18] */
    /* test eax, eax */ /* 0x1009C6F5: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_1009C949; /* 0x1009C6F7: js 0x1009c949 */
L_1009C6FD:
    /* cmp eax, ecx */ /* 0x1009C6FD: cmp eax, ecx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_G(_flag_a, _flag_b)) goto L_1009C949; /* 0x1009C6FF: jg 0x1009c949 */
L_1009C705:
    /* test eax, eax */ /* 0x1009C705: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1009C726; /* 0x1009C707: je 0x1009c726 */
L_1009C709:
    ecx = eax + (-0x1); /* 0x1009C709: lea ecx, [eax - 1] */
    goto L_1009C726; /* 0x1009C70C: jmp 0x1009c726 */
L_1009C70E:
    edx = MEM32(ebp + 0x10); /* 0x1009C70E: mov edx, dword ptr [ebp + 0x10] */
    eax = MEM32(edx + 0x18); /* 0x1009C711: mov eax, dword ptr [edx + 0x18] */
    /* test eax, eax */ /* 0x1009C714: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_1009C949; /* 0x1009C716: js 0x1009c949 */
L_1009C71C:
    /* cmp eax, ecx */ /* 0x1009C71C: cmp eax, ecx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_G(_flag_a, _flag_b)) goto L_1009C949; /* 0x1009C71E: jg 0x1009c949 */
L_1009C724:
    ecx = eax; /* 0x1009C724: mov ecx, eax */
L_1009C726:
    eax = MEM32(edx + 0x1C); /* 0x1009C726: mov eax, dword ptr [edx + 0x1c] */
    /* test eax, eax */ /* 0x1009C729: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_1009C949; /* 0x1009C72B: js 0x1009c949 */
L_1009C731:
    /* cmp eax, 0x16Du */ /* 0x1009C731: cmp eax, 0x16d */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x16Du);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_G(_flag_a, _flag_b)) goto L_1009C949; /* 0x1009C736: jg 0x1009c949 */
L_1009C73C:
    /* cmp eax, ecx */ /* 0x1009C73C: cmp eax, ecx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_GE(_flag_a, _flag_b)) goto L_1009C747; /* 0x1009C73E: jge 0x1009c747 */
L_1009C740:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1009C740: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    goto L_1009C5F1; /* 0x1009C742: jmp 0x1009c5f1 */
L_1009C747:
    PUSH32(esp, 7); /* 0x1009C747: push 7 */
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFFu : 0; /* 0x1009C749: cdq  */
    esi = POP32_VAL(esp); /* 0x1009C74A: pop esi */
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax; int32_t _dv = (int32_t)esi; /* 0x1009C74B: idiv esi */
      if (_dv && !(_dv == -1 && _dividend == INT64_MIN)) { eax = (uint32_t)((int32_t)(_dividend / _dv)); edx = (uint32_t)((int32_t)(_dividend % _dv)); }
      else { eax = 0; edx = 0; } }
    /* cmp edx, ecx */ /* 0x1009C74D: cmp edx, ecx */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_L(_flag_a, _flag_b)) goto L_1009C5F1; /* 0x1009C74F: jl 0x1009c5f1 */
L_1009C755:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x1009C755: inc eax */
    _flag_k = FK_INC;
    RECOMP_BACKEDGE();
    goto L_1009C5F1; /* 0x1009C756: jmp 0x1009c5f1 */
L_1009C75B:
    eax = MEM32(ebp + 0x10); /* 0x1009C75B: mov eax, dword ptr [ebp + 0x10] */
    /* cmp MEM32(eax), 0 */ /* 0x1009C75E: cmp dword ptr [eax], 0 */
    _flag_a = (uint32_t)(MEM32(eax)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_L(_flag_a, _flag_b)) goto L_1009C949; /* 0x1009C761: jl 0x1009c949 */
L_1009C767:
    /* cmp MEM32(eax), 0x3Bu */ /* 0x1009C767: cmp dword ptr [eax], 0x3b */
    _flag_a = (uint32_t)(MEM32(eax)); _flag_b = (uint32_t)(0x3Bu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_G(_flag_a, _flag_b)) goto L_1009C949; /* 0x1009C76A: jg 0x1009c949 */
L_1009C770:
    PUSH32(esp, MEM32(ebp + 0x20)); /* 0x1009C770: push dword ptr [ebp + 0x20] */
    PUSH32(esp, MEM32(ebp + 0x18)); /* 0x1009C773: push dword ptr [ebp + 0x18] */
    PUSH32(esp, MEM32(ebp + 0x14)); /* 0x1009C776: push dword ptr [ebp + 0x14] */
    PUSH32(esp, 2); /* 0x1009C779: push 2 */
    PUSH32(esp, MEM32(eax)); /* 0x1009C77B: push dword ptr [eax] */
    goto L_1009C858; /* 0x1009C77D: jmp 0x1009c858 */
L_1009C782:
    eax = MEM32(ebp + 0x10); /* 0x1009C782: mov eax, dword ptr [ebp + 0x10] */
    eax = MEM32(eax + 0x4); /* 0x1009C785: mov eax, dword ptr [eax + 4] */
    /* test eax, eax */ /* 0x1009C788: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_1009C949; /* 0x1009C78A: js 0x1009c949 */
L_1009C790:
    /* cmp eax, 0x3Bu */ /* 0x1009C790: cmp eax, 0x3b */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x3Bu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    goto L_1009C5EB; /* 0x1009C793: jmp 0x1009c5eb */
L_1009C798:
    eax = MEM32(ebp + 0x10); /* 0x1009C798: mov eax, dword ptr [ebp + 0x10] */
    eax = MEM32(eax + 0x14); /* 0x1009C79B: mov eax, dword ptr [eax + 0x14] */
    /* cmp eax, 0xFFFFF894u */ /* 0x1009C79E: cmp eax, 0xfffff894 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xFFFFF894u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_L(_flag_a, _flag_b)) goto L_1009C949; /* 0x1009C7A3: jl 0x1009c949 */
L_1009C7A9:
    /* cmp eax, 0x1FA3u */ /* 0x1009C7A9: cmp eax, 0x1fa3 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x1FA3u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_G(_flag_a, _flag_b)) goto L_1009C949; /* 0x1009C7AE: jg 0x1009c949 */
L_1009C7B4:
    PUSH32(esp, 0x64u); /* 0x1009C7B4: push 0x64 */
    ecx = POP32_VAL(esp); /* 0x1009C7B6: pop ecx */
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFFu : 0; /* 0x1009C7B7: cdq  */
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax; int32_t _dv = (int32_t)ecx; /* 0x1009C7B8: idiv ecx */
      if (_dv && !(_dv == -1 && _dividend == INT64_MIN)) { eax = (uint32_t)((int32_t)(_dividend / _dv)); edx = (uint32_t)((int32_t)(_dividend % _dv)); }
      else { eax = 0; edx = 0; } }
    PUSH32(esp, MEM32(ebp + 0x20)); /* 0x1009C7BA: push dword ptr [ebp + 0x20] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x13u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 0x13u; /* 0x1009C7BD: add eax, 0x13 */
    _flag_k = FK_ADD;
    PUSH32(esp, MEM32(ebp + 0x18)); /* 0x1009C7C0: push dword ptr [ebp + 0x18] */
    eax = (uint32_t)((int32_t)eax * (int32_t)0x64u); /* 0x1009C7C3: imul eax, eax, 0x64 */
    PUSH32(esp, MEM32(ebp + 0x14)); /* 0x1009C7C6: push dword ptr [ebp + 0x14] */
    PUSH32(esp, 4); /* 0x1009C7C9: push 4 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + edx; /* 0x1009C7CB: add eax, edx */
    _flag_k = FK_ADD;
    RECOMP_BACKEDGE();
    goto L_1009C5FC; /* 0x1009C7CD: jmp 0x1009c5fc */
L_1009C7D2:
    /* cmp eax, 0x6Du */ /* 0x1009C7D2: cmp eax, 0x6d */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x6Du);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_G(_flag_a, _flag_b)) goto L_1009C960; /* 0x1009C7D5: jg 0x1009c960 */
L_1009C7DB:
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1009C936; /* 0x1009C7DB: je 0x1009c936 */
L_1009C7E1:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x5Au);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - 0x5Au; /* 0x1009C7E1: sub eax, 0x5a */
    _flag_k = FK_CMP;
    if (/* sub result */ CMP_EQ(_flag_a, _flag_b)) goto L_1009C97F; /* 0x1009C7E4: je 0x1009c97f */
L_1009C7EA:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(7);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - 7; /* 0x1009C7EA: sub eax, 7 */
    _flag_k = FK_CMP;
    if (/* sub result */ CMP_EQ(_flag_a, _flag_b)) goto L_1009C912; /* 0x1009C7ED: je 0x1009c912 */
L_1009C7F3:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax - 1; /* 0x1009C7F3: dec eax */
    _flag_k = FK_DEC;
    if (/* dec result */ CMP_EQ(_flag_a, _flag_b)) goto L_1009C8EE; /* 0x1009C7F4: je 0x1009c8ee */
L_1009C7FA:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax - 1; /* 0x1009C7FA: dec eax */
    _flag_k = FK_DEC;
    if (/* dec result */ CMP_EQ(_flag_a, _flag_b)) goto L_1009C865; /* 0x1009C7FB: je 0x1009c865 */
L_1009C7FD:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax - 1; /* 0x1009C7FD: dec eax */
    _flag_k = FK_DEC;
    if (/* dec result */ CMP_EQ(_flag_a, _flag_b)) goto L_1009C833; /* 0x1009C7FE: je 0x1009c833 */
L_1009C800:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(6);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - 6; /* 0x1009C800: sub eax, 6 */
    _flag_k = FK_CMP;
    if (/* sub result */ CMP_NE(_flag_a, _flag_b)) goto L_1009C959; /* 0x1009C803: jne 0x1009c959 */
L_1009C809:
    eax = MEM32(ebp + 0x10); /* 0x1009C809: mov eax, dword ptr [ebp + 0x10] */
    eax = MEM32(eax + 0x1C); /* 0x1009C80C: mov eax, dword ptr [eax + 0x1c] */
    /* test eax, eax */ /* 0x1009C80F: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_1009C949; /* 0x1009C811: js 0x1009c949 */
L_1009C817:
    /* cmp eax, 0x16Du */ /* 0x1009C817: cmp eax, 0x16d */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x16Du);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_G(_flag_a, _flag_b)) goto L_1009C949; /* 0x1009C81C: jg 0x1009c949 */
L_1009C822:
    PUSH32(esp, MEM32(ebp + 0x20)); /* 0x1009C822: push dword ptr [ebp + 0x20] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x1009C825: inc eax */
    _flag_k = FK_INC;
    PUSH32(esp, MEM32(ebp + 0x18)); /* 0x1009C826: push dword ptr [ebp + 0x18] */
    PUSH32(esp, MEM32(ebp + 0x14)); /* 0x1009C829: push dword ptr [ebp + 0x14] */
    PUSH32(esp, 3); /* 0x1009C82C: push 3 */
    RECOMP_BACKEDGE();
    goto L_1009C5FC; /* 0x1009C82E: jmp 0x1009c5fc */
L_1009C833:
    eax = MEM32(ebp + 0x10); /* 0x1009C833: mov eax, dword ptr [ebp + 0x10] */
    /* cmp MEM32(eax + 0xC), 1 */ /* 0x1009C836: cmp dword ptr [eax + 0xc], 1 */
    _flag_a = (uint32_t)(MEM32(eax + 0xC)); _flag_b = (uint32_t)(1);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_L(_flag_a, _flag_b)) goto L_1009C949; /* 0x1009C83A: jl 0x1009c949 */
L_1009C840:
    /* cmp MEM32(eax + 0xC), 0x1Fu */ /* 0x1009C840: cmp dword ptr [eax + 0xc], 0x1f */
    _flag_a = (uint32_t)(MEM32(eax + 0xC)); _flag_b = (uint32_t)(0x1Fu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_G(_flag_a, _flag_b)) goto L_1009C949; /* 0x1009C844: jg 0x1009c949 */
L_1009C84A:
    PUSH32(esp, MEM32(ebp + 0x20)); /* 0x1009C84A: push dword ptr [ebp + 0x20] */
    PUSH32(esp, MEM32(ebp + 0x18)); /* 0x1009C84D: push dword ptr [ebp + 0x18] */
    PUSH32(esp, MEM32(ebp + 0x14)); /* 0x1009C850: push dword ptr [ebp + 0x14] */
    PUSH32(esp, 2); /* 0x1009C853: push 2 */
    PUSH32(esp, MEM32(eax + 0xC)); /* 0x1009C855: push dword ptr [eax + 0xc] */
L_1009C858:
    RECOMP_CALL(sub_1009CAAA); /* 0x1009C858: call 0x1009caaa */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x14u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x14u; /* 0x1009C85D: add esp, 0x14 */
    _flag_k = FK_ADD;
    goto L_1009CA97; /* 0x1009C860: jmp 0x1009ca97 */
L_1009C865:
    /* cmp MEM32(ebp + 0x20), 0 */ /* 0x1009C865: cmp dword ptr [ebp + 0x20], 0 */
    _flag_a = (uint32_t)(MEM32(ebp + 0x20)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    PUSH32(esp, MEM32(ebp + 0x1C)); /* 0x1009C869: push dword ptr [ebp + 0x1c] */
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1009C8AE; /* 0x1009C86C: je 0x1009c8ae */
L_1009C86E:
    esi = MEM32(ebp + 0x18); /* 0x1009C86E: mov esi, dword ptr [ebp + 0x18] */
    edi = MEM32(ebp + 0x14); /* 0x1009C871: mov edi, dword ptr [ebp + 0x14] */
    PUSH32(esp, esi); /* 0x1009C874: push esi */
    PUSH32(esp, edi); /* 0x1009C875: push edi */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x1009C876: push dword ptr [ebp + 0x10] */
    PUSH32(esp, 1); /* 0x1009C879: push 1 */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x1009C87B: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_1009CB9D); /* 0x1009C87E: call 0x1009cb9d */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x18u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x18u; /* 0x1009C883: add esp, 0x18 */
    _flag_k = FK_ADD;
    /* test eax, eax */ /* 0x1009C886: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1009C959; /* 0x1009C888: je 0x1009c959 */
L_1009C88E:
    /* cmp MEM32(esi), 0 */ /* 0x1009C88E: cmp dword ptr [esi], 0 */
    _flag_a = (uint32_t)(MEM32(esi)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1009C959; /* 0x1009C891: je 0x1009c959 */
L_1009C897:
    eax = MEM32(edi); /* 0x1009C897: mov eax, dword ptr [edi] */
    PUSH32(esp, 0x20u); /* 0x1009C899: push 0x20 */
    ecx = POP32_VAL(esp); /* 0x1009C89B: pop ecx */
    PUSH32(esp, MEM32(ebp + 0x1C)); /* 0x1009C89C: push dword ptr [ebp + 0x1c] */
    MEM16(eax) = (uint16_t)(LO16(ecx)); /* 0x1009C89F: mov word ptr [eax], cx */
    _flag_a = (uint32_t)(MEM32(edi)); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM32(edi) = MEM32(edi) + 2; /* 0x1009C8A2: add dword ptr [edi], 2 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(MEM32(esi)); _flag_b = (uint32_t)(1);
    MEM32(esi) = MEM32(esi) - 1; /* 0x1009C8A5: dec dword ptr [esi] */
    _flag_k = FK_DEC;
    PUSH32(esp, esi); /* 0x1009C8A7: push esi */
    PUSH32(esp, edi); /* 0x1009C8A8: push edi */
    RECOMP_BACKEDGE();
    goto L_1009C6D2; /* 0x1009C8A9: jmp 0x1009c6d2 */
L_1009C8AE:
    edi = MEM32(ebp + 0x18); /* 0x1009C8AE: mov edi, dword ptr [ebp + 0x18] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    esi = 0; /* 0x1009C8B1: xor esi, esi */
    _cf = 0;
    _flag_k = FK_TEST;
    ebx = MEM32(ebp + 0x14); /* 0x1009C8B3: mov ebx, dword ptr [ebp + 0x14] */
    PUSH32(esp, edi); /* 0x1009C8B6: push edi */
    PUSH32(esp, ebx); /* 0x1009C8B7: push ebx */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x1009C8B8: push dword ptr [ebp + 0x10] */
    PUSH32(esp, esi); /* 0x1009C8BB: push esi */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x1009C8BC: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_1009CB9D); /* 0x1009C8BF: call 0x1009cb9d */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x18u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x18u; /* 0x1009C8C4: add esp, 0x18 */
    _flag_k = FK_ADD;
    /* test eax, eax */ /* 0x1009C8C7: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1009C959; /* 0x1009C8C9: je 0x1009c959 */
L_1009C8CF:
    /* cmp MEM32(edi), esi */ /* 0x1009C8CF: cmp dword ptr [edi], esi */
    _flag_a = (uint32_t)(MEM32(edi)); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1009C959; /* 0x1009C8D1: je 0x1009c959 */
L_1009C8D7:
    eax = MEM32(ebx); /* 0x1009C8D7: mov eax, dword ptr [ebx] */
    PUSH32(esp, 0x20u); /* 0x1009C8D9: push 0x20 */
    ecx = POP32_VAL(esp); /* 0x1009C8DB: pop ecx */
    PUSH32(esp, MEM32(ebp + 0x1C)); /* 0x1009C8DC: push dword ptr [ebp + 0x1c] */
    MEM16(eax) = (uint16_t)(LO16(ecx)); /* 0x1009C8DF: mov word ptr [eax], cx */
    _flag_a = (uint32_t)(MEM32(ebx)); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM32(ebx) = MEM32(ebx) + 2; /* 0x1009C8E2: add dword ptr [ebx], 2 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(MEM32(edi)); _flag_b = (uint32_t)(1);
    MEM32(edi) = MEM32(edi) - 1; /* 0x1009C8E5: dec dword ptr [edi] */
    _flag_k = FK_DEC;
    PUSH32(esp, edi); /* 0x1009C8E7: push edi */
    PUSH32(esp, ebx); /* 0x1009C8E8: push ebx */
    RECOMP_BACKEDGE();
    goto L_1009C6D2; /* 0x1009C8E9: jmp 0x1009c6d2 */
L_1009C8EE:
    eax = MEM32(ebp + 0x10); /* 0x1009C8EE: mov eax, dword ptr [ebp + 0x10] */
    ecx = MEM32(eax + 0x10); /* 0x1009C8F1: mov ecx, dword ptr [eax + 0x10] */
    /* test ecx, ecx */ /* 0x1009C8F4: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_1009C949; /* 0x1009C8F6: js 0x1009c949 */
L_1009C8F8:
    /* cmp ecx, 0xBu */ /* 0x1009C8F8: cmp ecx, 0xb */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0xBu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_G(_flag_a, _flag_b)) goto L_1009C949; /* 0x1009C8FB: jg 0x1009c949 */
L_1009C8FD:
    PUSH32(esp, MEM32(ebp + 0x18)); /* 0x1009C8FD: push dword ptr [ebp + 0x18] */
    eax = MEM32(ebp + 0x1C); /* 0x1009C900: mov eax, dword ptr [ebp + 0x1c] */
    PUSH32(esp, MEM32(ebp + 0x14)); /* 0x1009C903: push dword ptr [ebp + 0x14] */
    PUSH32(esp, MEM32(eax + ecx * 4 + 0xEC)); /* 0x1009C906: push dword ptr [eax + ecx*4 + 0xec] */
    goto L_1009CA8F; /* 0x1009C90D: jmp 0x1009ca8f */
L_1009C912:
    eax = MEM32(ebp + 0x10); /* 0x1009C912: mov eax, dword ptr [ebp + 0x10] */
    ecx = MEM32(eax + 0x18); /* 0x1009C915: mov ecx, dword ptr [eax + 0x18] */
    /* test ecx, ecx */ /* 0x1009C918: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_1009C949; /* 0x1009C91A: js 0x1009c949 */
L_1009C91C:
    /* cmp ecx, 6 */ /* 0x1009C91C: cmp ecx, 6 */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(6);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_G(_flag_a, _flag_b)) goto L_1009C949; /* 0x1009C91F: jg 0x1009c949 */
L_1009C921:
    PUSH32(esp, MEM32(ebp + 0x18)); /* 0x1009C921: push dword ptr [ebp + 0x18] */
    eax = MEM32(ebp + 0x1C); /* 0x1009C924: mov eax, dword ptr [ebp + 0x1c] */
    PUSH32(esp, MEM32(ebp + 0x14)); /* 0x1009C927: push dword ptr [ebp + 0x14] */
    PUSH32(esp, MEM32(eax + ecx * 4 + 0xB4)); /* 0x1009C92A: push dword ptr [eax + ecx*4 + 0xb4] */
    goto L_1009CA8F; /* 0x1009C931: jmp 0x1009ca8f */
L_1009C936:
    eax = MEM32(ebp + 0x10); /* 0x1009C936: mov eax, dword ptr [ebp + 0x10] */
    eax = MEM32(eax + 0x10); /* 0x1009C939: mov eax, dword ptr [eax + 0x10] */
    /* test eax, eax */ /* 0x1009C93C: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_1009C949; /* 0x1009C93E: js 0x1009c949 */
L_1009C940:
    /* cmp eax, 0xBu */ /* 0x1009C940: cmp eax, 0xb */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xBu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_LE(_flag_a, _flag_b)) goto L_1009C755; /* 0x1009C943: jle 0x1009c755 */
L_1009C949:
    RECOMP_CALL(sub_1001177D); /* 0x1009C949: call 0x1001177d */
    RECOMP_FLAGS_IN();
    MEM32(eax) = 0x16u; /* 0x1009C94E: mov dword ptr [eax], 0x16 */
    RECOMP_CALL(sub_100A4670); /* 0x1009C954: call 0x100a4670 */
    RECOMP_FLAGS_IN();
L_1009C959:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1009C959: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
L_1009C95B:
    edi = POP32_VAL(esp); /* 0x1009C95B: pop edi */
    esi = POP32_VAL(esp); /* 0x1009C95C: pop esi */
    ebx = POP32_VAL(esp); /* 0x1009C95D: pop ebx */
    ebp = POP32_VAL(esp); /* 0x1009C95E: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1009C95F: ret  */
L_1009C960:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x70u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - 0x70u; /* 0x1009C960: sub eax, 0x70 */
    _flag_k = FK_CMP;
    if (/* sub result */ CMP_EQ(_flag_a, _flag_b)) goto L_1009CA59; /* 0x1009C963: je 0x1009ca59 */
L_1009C969:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(7);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - 7; /* 0x1009C969: sub eax, 7 */
    _flag_k = FK_CMP;
    if (/* sub result */ CMP_EQ(_flag_a, _flag_b)) goto L_1009CA32; /* 0x1009C96C: je 0x1009ca32 */
L_1009C972:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax - 1; /* 0x1009C972: dec eax */
    _flag_k = FK_DEC;
    if (/* dec result */ CMP_EQ(_flag_a, _flag_b)) goto L_1009CA12; /* 0x1009C973: je 0x1009ca12 */
L_1009C979:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax - 1; /* 0x1009C979: dec eax */
    _flag_k = FK_DEC;
    if (/* dec result */ CMP_EQ(_flag_a, _flag_b)) goto L_1009C9EE; /* 0x1009C97A: je 0x1009c9ee */
L_1009C97C:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax - 1; /* 0x1009C97C: dec eax */
    _flag_k = FK_DEC;
    RECOMP_BACKEDGE();
    if (/* dec result */ CMP_NE(_flag_a, _flag_b)) goto L_1009C959; /* 0x1009C97D: jne 0x1009c959 */
L_1009C97F:
    RECOMP_CALL(sub_10015B4C); /* 0x1009C97F: call 0x10015b4c */
    RECOMP_FLAGS_IN();
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x1009C984: push dword ptr [ebp + 8] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    esi = 0; /* 0x1009C987: xor esi, esi */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, 0xFFFFFFFFu); /* 0x1009C989: push -1 */
    MEM32(ebp + 0xC) = esi; /* 0x1009C98B: mov dword ptr [ebp + 0xc], esi */
    RECOMP_CALL(sub_10028D1A); /* 0x1009C98E: call 0x10028d1a */
    RECOMP_FLAGS_IN();
    ecx = MEM32(ebp + 0x10); /* 0x1009C993: mov ecx, dword ptr [ebp + 0x10] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edx = 0; /* 0x1009C996: xor edx, edx */
    _cf = 0;
    _flag_k = FK_TEST;
    edi = MEM32(ebp + 0x18); /* 0x1009C998: mov edi, dword ptr [ebp + 0x18] */
    ebx = MEM32(ebp + 0x14); /* 0x1009C99B: mov ebx, dword ptr [ebp + 0x14] */
    /* cmp MEM32(ecx + 0x20), esi */ /* 0x1009C99E: cmp dword ptr [ecx + 0x20], esi */
    _flag_a = (uint32_t)(MEM32(ecx + 0x20)); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    SET_LO8(edx, (CMP_NE(_flag_a, _flag_b)) ? 1 : 0); /* 0x1009C9A1: setne dl */
    PUSH32(esp, MEM32(eax + edx * 4)); /* 0x1009C9A4: push dword ptr [eax + edx*4] */
    eax = ebp + 0xC; /* 0x1009C9A7: lea eax, [ebp + 0xc] */
    PUSH32(esp, MEM32(edi)); /* 0x1009C9AA: push dword ptr [edi] */
    PUSH32(esp, MEM32(ebx)); /* 0x1009C9AC: push dword ptr [ebx] */
    PUSH32(esp, eax); /* 0x1009C9AE: push eax */
    RECOMP_CALL(sub_10012EB8); /* 0x1009C9AF: call 0x10012eb8 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x18u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x18u; /* 0x1009C9B4: add esp, 0x18 */
    _flag_k = FK_ADD;
    /* test eax, eax */ /* 0x1009C9B7: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1009C9CD; /* 0x1009C9B9: je 0x1009c9cd */
L_1009C9BB:
    /* cmp eax, 0x16u */ /* 0x1009C9BB: cmp eax, 0x16 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x16u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1009CA9F; /* 0x1009C9BE: je 0x1009ca9f */
L_1009C9C4:
    /* cmp eax, 0x22u */ /* 0x1009C9C4: cmp eax, 0x22 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x22u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1009CA9F; /* 0x1009C9C7: je 0x1009ca9f */
L_1009C9CD:
    ecx = MEM32(ebp + 0xC); /* 0x1009C9CD: mov ecx, dword ptr [ebp + 0xc] */
    /* cmp eax, 0x50u */ /* 0x1009C9D0: cmp eax, 0x50 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x50u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_1009C9D9; /* 0x1009C9D3: jne 0x1009c9d9 */
L_1009C9D5:
    MEM32(edi) = esi; /* 0x1009C9D5: mov dword ptr [edi], esi */
    goto L_1009C9E0; /* 0x1009C9D7: jmp 0x1009c9e0 */
L_1009C9D9:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1009C9D9: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x1009C9DB: inc eax */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - ecx; /* 0x1009C9DC: sub eax, ecx */
    _flag_k = FK_CMP;
    _flag_a = (uint32_t)(MEM32(edi)); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM32(edi) = MEM32(edi) + eax; /* 0x1009C9DE: add dword ptr [edi], eax */
    _flag_k = FK_ADD;
L_1009C9E0:
    eax = ecx * 2 + (-0x2); /* 0x1009C9E0: lea eax, [ecx*2 - 2] */
    _flag_a = (uint32_t)(MEM32(ebx)); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM32(ebx) = MEM32(ebx) + eax; /* 0x1009C9E7: add dword ptr [ebx], eax */
    _flag_k = FK_ADD;
    goto L_1009CA97; /* 0x1009C9E9: jmp 0x1009ca97 */
L_1009C9EE:
    eax = MEM32(ebp + 0x10); /* 0x1009C9EE: mov eax, dword ptr [ebp + 0x10] */
    eax = MEM32(eax + 0x14); /* 0x1009C9F1: mov eax, dword ptr [eax + 0x14] */
    /* test eax, eax */ /* 0x1009C9F4: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_1009C949; /* 0x1009C9F6: js 0x1009c949 */
L_1009C9FC:
    PUSH32(esp, MEM32(ebp + 0x20)); /* 0x1009C9FC: push dword ptr [ebp + 0x20] */
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFFu : 0; /* 0x1009C9FF: cdq  */
    PUSH32(esp, MEM32(ebp + 0x18)); /* 0x1009CA00: push dword ptr [ebp + 0x18] */
    PUSH32(esp, MEM32(ebp + 0x14)); /* 0x1009CA03: push dword ptr [ebp + 0x14] */
    PUSH32(esp, 2); /* 0x1009CA06: push 2 */
    PUSH32(esp, 0x64u); /* 0x1009CA08: push 0x64 */
    ecx = POP32_VAL(esp); /* 0x1009CA0A: pop ecx */
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax; int32_t _dv = (int32_t)ecx; /* 0x1009CA0B: idiv ecx */
      if (_dv && !(_dv == -1 && _dividend == INT64_MIN)) { eax = (uint32_t)((int32_t)(_dividend / _dv)); edx = (uint32_t)((int32_t)(_dividend % _dv)); }
      else { eax = 0; edx = 0; } }
    RECOMP_BACKEDGE();
    goto L_1009C6A0; /* 0x1009CA0D: jmp 0x1009c6a0 */
L_1009CA12:
    /* cmp MEM32(ebp + 0x20), 0 */ /* 0x1009CA12: cmp dword ptr [ebp + 0x20], 0 */
    _flag_a = (uint32_t)(MEM32(ebp + 0x20)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    PUSH32(esp, MEM32(ebp + 0x1C)); /* 0x1009CA16: push dword ptr [ebp + 0x1c] */
    PUSH32(esp, MEM32(ebp + 0x18)); /* 0x1009CA19: push dword ptr [ebp + 0x18] */
    PUSH32(esp, MEM32(ebp + 0x14)); /* 0x1009CA1C: push dword ptr [ebp + 0x14] */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x1009CA1F: push dword ptr [ebp + 0x10] */
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1009CA2B; /* 0x1009CA22: je 0x1009ca2b */
L_1009CA24:
    PUSH32(esp, 1); /* 0x1009CA24: push 1 */
    RECOMP_BACKEDGE();
    goto L_1009C6D7; /* 0x1009CA26: jmp 0x1009c6d7 */
L_1009CA2B:
    PUSH32(esp, 0); /* 0x1009CA2B: push 0 */
    RECOMP_BACKEDGE();
    goto L_1009C6D7; /* 0x1009CA2D: jmp 0x1009c6d7 */
L_1009CA32:
    eax = MEM32(ebp + 0x10); /* 0x1009CA32: mov eax, dword ptr [ebp + 0x10] */
    eax = MEM32(eax + 0x18); /* 0x1009CA35: mov eax, dword ptr [eax + 0x18] */
    /* test eax, eax */ /* 0x1009CA38: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_1009C949; /* 0x1009CA3A: js 0x1009c949 */
L_1009CA40:
    /* cmp eax, 6 */ /* 0x1009CA40: cmp eax, 6 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(6);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_G(_flag_a, _flag_b)) goto L_1009C949; /* 0x1009CA43: jg 0x1009c949 */
L_1009CA49:
    PUSH32(esp, MEM32(ebp + 0x20)); /* 0x1009CA49: push dword ptr [ebp + 0x20] */
    PUSH32(esp, MEM32(ebp + 0x18)); /* 0x1009CA4C: push dword ptr [ebp + 0x18] */
    PUSH32(esp, MEM32(ebp + 0x14)); /* 0x1009CA4F: push dword ptr [ebp + 0x14] */
    PUSH32(esp, 1); /* 0x1009CA52: push 1 */
    RECOMP_BACKEDGE();
    goto L_1009C5FC; /* 0x1009CA54: jmp 0x1009c5fc */
L_1009CA59:
    eax = MEM32(ebp + 0x10); /* 0x1009CA59: mov eax, dword ptr [ebp + 0x10] */
    eax = MEM32(eax + 0x8); /* 0x1009CA5C: mov eax, dword ptr [eax + 8] */
    /* test eax, eax */ /* 0x1009CA5F: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_1009C949; /* 0x1009CA61: js 0x1009c949 */
L_1009CA67:
    /* cmp eax, 0x17u */ /* 0x1009CA67: cmp eax, 0x17 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x17u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_G(_flag_a, _flag_b)) goto L_1009C949; /* 0x1009CA6A: jg 0x1009c949 */
L_1009CA70:
    PUSH32(esp, MEM32(ebp + 0x18)); /* 0x1009CA70: push dword ptr [ebp + 0x18] */
    PUSH32(esp, MEM32(ebp + 0x14)); /* 0x1009CA73: push dword ptr [ebp + 0x14] */
    /* cmp eax, 0xBu */ /* 0x1009CA76: cmp eax, 0xb */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xBu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_G(_flag_a, _flag_b)) goto L_1009CA86; /* 0x1009CA79: jg 0x1009ca86 */
L_1009CA7B:
    eax = MEM32(ebp + 0x1C); /* 0x1009CA7B: mov eax, dword ptr [ebp + 0x1c] */
    PUSH32(esp, MEM32(eax + 0x14C)); /* 0x1009CA7E: push dword ptr [eax + 0x14c] */
    goto L_1009CA8F; /* 0x1009CA84: jmp 0x1009ca8f */
L_1009CA86:
    ecx = MEM32(ebp + 0x1C); /* 0x1009CA86: mov ecx, dword ptr [ebp + 0x1c] */
    PUSH32(esp, MEM32(ecx + 0x150)); /* 0x1009CA89: push dword ptr [ecx + 0x150] */
L_1009CA8F:
    RECOMP_CALL(sub_1009CB6F); /* 0x1009CA8F: call 0x1009cb6f */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x1009CA94: add esp, 0xc */
    _flag_k = FK_ADD;
L_1009CA97:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1009CA97: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x1009CA99: inc eax */
    _flag_k = FK_INC;
    RECOMP_BACKEDGE();
    goto L_1009C95B; /* 0x1009CA9A: jmp 0x1009c95b */
L_1009CA9F:
    PUSH32(esp, esi); /* 0x1009CA9F: push esi */
    PUSH32(esp, esi); /* 0x1009CAA0: push esi */
    PUSH32(esp, esi); /* 0x1009CAA1: push esi */
    PUSH32(esp, esi); /* 0x1009CAA2: push esi */
    PUSH32(esp, esi); /* 0x1009CAA3: push esi */
    RECOMP_CALL(sub_100A469B); /* 0x1009CAA4: call 0x100a469b */
    RECOMP_FLAGS_IN();
    void_lift_trap(0x1009CAA9u, "int3 ");
    { RECOMP_REGS_OUT(); return; } /* end of function */
    RECOMP_REGS_OUT();
}

void sub_1009CAAA(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1009CAAAu);

L_1009CAAA:
    PUSH32(esp, ebp); /* 0x1009CAAA: push ebp */
    ebp = esp; /* 0x1009CAAB: mov ebp, esp */
    PUSH32(esp, esi); /* 0x1009CAAD: push esi */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    esi = 0; /* 0x1009CAAE: xor esi, esi */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp MEM32(ebp + 0x18), esi */ /* 0x1009CAB0: cmp dword ptr [ebp + 0x18], esi */
    _flag_a = (uint32_t)(MEM32(ebp + 0x18)); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1009CAC8; /* 0x1009CAB3: je 0x1009cac8 */
L_1009CAB5:
    PUSH32(esp, MEM32(ebp + 0x14)); /* 0x1009CAB5: push dword ptr [ebp + 0x14] */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x1009CAB8: push dword ptr [ebp + 0x10] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x1009CABB: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_1009CB19); /* 0x1009CABE: call 0x1009cb19 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x1009CAC3: add esp, 0xc */
    _flag_k = FK_ADD;
    goto L_1009CB16; /* 0x1009CAC6: jmp 0x1009cb16 */
L_1009CAC8:
    ecx = MEM32(ebp + 0x14); /* 0x1009CAC8: mov ecx, dword ptr [ebp + 0x14] */
    eax = MEM32(ebp + 0xC); /* 0x1009CACB: mov eax, dword ptr [ebp + 0xc] */
    /* cmp eax, MEM32(ecx) */ /* 0x1009CACE: cmp eax, dword ptr [ecx] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(ecx));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_AE(_flag_a, _flag_b)) goto L_1009CB14; /* 0x1009CAD0: jae 0x1009cb14 */
L_1009CAD2:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax - 1; /* 0x1009CAD2: dec eax */
    _flag_k = FK_DEC;
    PUSH32(esp, ebx); /* 0x1009CAD3: push ebx */
    PUSH32(esp, edi); /* 0x1009CAD4: push edi */
    edi = MEM32(ebp + 0x10); /* 0x1009CAD5: mov edi, dword ptr [ebp + 0x10] */
    ebx = eax + 0x1; /* 0x1009CAD8: lea ebx, [eax + 1] */
    /* test ebx, ebx */ /* 0x1009CADB: test ebx, ebx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ebx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1009CB09; /* 0x1009CADD: je 0x1009cb09 */
L_1009CADF:
    ecx = eax + eax; /* 0x1009CADF: lea ecx, [eax + eax] */
    eax = MEM32(ebp + 0x8); /* 0x1009CAE2: mov eax, dword ptr [ebp + 8] */
L_1009CAE5:
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFFu : 0; /* 0x1009CAE5: cdq  */
    MEM32(ebp + 0x18) = 0xAu; /* 0x1009CAE6: mov dword ptr [ebp + 0x18], 0xa */
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax; int32_t _dv = (int32_t)MEM32(ebp + 0x18); /* 0x1009CAED: idiv dword ptr [ebp + 0x18] */
      if (_dv && !(_dv == -1 && _dividend == INT64_MIN)) { eax = (uint32_t)((int32_t)(_dividend / _dv)); edx = (uint32_t)((int32_t)(_dividend % _dv)); }
      else { eax = 0; edx = 0; } }
    MEM32(ebp + 0x18) = eax; /* 0x1009CAF0: mov dword ptr [ebp + 0x18], eax */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(0x30u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edx = edx + 0x30u; /* 0x1009CAF3: add edx, 0x30 */
    _flag_k = FK_ADD;
    eax = MEM32(edi); /* 0x1009CAF6: mov eax, dword ptr [edi] */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi + 1; /* 0x1009CAF8: inc esi */
    _flag_k = FK_INC;
    MEM16(ecx + eax) = (uint16_t)(LO16(edx)); /* 0x1009CAF9: mov word ptr [ecx + eax], dx */
    ecx = ecx + (-0x2); /* 0x1009CAFD: lea ecx, [ecx - 2] */
    eax = MEM32(ebp + 0x18); /* 0x1009CB00: mov eax, dword ptr [ebp + 0x18] */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(1);
    ebx = ebx - 1; /* 0x1009CB03: dec ebx */
    _flag_k = FK_DEC;
    RECOMP_BACKEDGE();
    if (/* dec result */ CMP_NE(_flag_a, _flag_b)) goto L_1009CAE5; /* 0x1009CB04: jne 0x1009cae5 */
L_1009CB06:
    ecx = MEM32(ebp + 0x14); /* 0x1009CB06: mov ecx, dword ptr [ebp + 0x14] */
L_1009CB09:
    eax = esi + esi; /* 0x1009CB09: lea eax, [esi + esi] */
    _flag_a = (uint32_t)(MEM32(edi)); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM32(edi) = MEM32(edi) + eax; /* 0x1009CB0C: add dword ptr [edi], eax */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(MEM32(ecx)); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    MEM32(ecx) = MEM32(ecx) - esi; /* 0x1009CB0E: sub dword ptr [ecx], esi */
    _flag_k = FK_CMP;
    edi = POP32_VAL(esp); /* 0x1009CB10: pop edi */
    ebx = POP32_VAL(esp); /* 0x1009CB11: pop ebx */
    goto L_1009CB16; /* 0x1009CB12: jmp 0x1009cb16 */
L_1009CB14:
    MEM32(ecx) = esi; /* 0x1009CB14: mov dword ptr [ecx], esi */
L_1009CB16:
    esi = POP32_VAL(esp); /* 0x1009CB16: pop esi */
    ebp = POP32_VAL(esp); /* 0x1009CB17: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1009CB18: ret  */
    RECOMP_REGS_OUT();
}

void sub_1009CB19(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1009CB19u);

L_1009CB19:
    PUSH32(esp, ebp); /* 0x1009CB19: push ebp */
    ebp = esp; /* 0x1009CB1A: mov ebp, esp */
    ecx = MEM32(ebp + 0xC); /* 0x1009CB1C: mov ecx, dword ptr [ebp + 0xc] */
    PUSH32(esp, esi); /* 0x1009CB1F: push esi */
    PUSH32(esp, edi); /* 0x1009CB20: push edi */
    edi = MEM32(ebp + 0x10); /* 0x1009CB21: mov edi, dword ptr [ebp + 0x10] */
    esi = MEM32(ecx); /* 0x1009CB24: mov esi, dword ptr [ecx] */
    /* cmp MEM32(edi), 1 */ /* 0x1009CB26: cmp dword ptr [edi], 1 */
    _flag_a = (uint32_t)(MEM32(edi)); _flag_b = (uint32_t)(1);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_1009CB4E; /* 0x1009CB29: jbe 0x1009cb4e */
L_1009CB2B:
    PUSH32(esp, ebx); /* 0x1009CB2B: push ebx */
    ebx = MEM32(ebp + 0x8); /* 0x1009CB2C: mov ebx, dword ptr [ebp + 8] */
L_1009CB2F:
    eax = ebx; /* 0x1009CB2F: mov eax, ebx */
    PUSH32(esp, 0xAu); /* 0x1009CB31: push 0xa */
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFFu : 0; /* 0x1009CB33: cdq  */
    ebx = POP32_VAL(esp); /* 0x1009CB34: pop ebx */
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax; int32_t _dv = (int32_t)ebx; /* 0x1009CB35: idiv ebx */
      if (_dv && !(_dv == -1 && _dividend == INT64_MIN)) { eax = (uint32_t)((int32_t)(_dividend / _dv)); edx = (uint32_t)((int32_t)(_dividend % _dv)); }
      else { eax = 0; edx = 0; } }
    ebx = eax; /* 0x1009CB37: mov ebx, eax */
    eax = edx + 0x30; /* 0x1009CB39: lea eax, [edx + 0x30] */
    MEM16(esi) = (uint16_t)(LO16(eax)); /* 0x1009CB3C: mov word ptr [esi], ax */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esi = esi + 2; /* 0x1009CB3F: add esi, 2 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(MEM32(edi)); _flag_b = (uint32_t)(1);
    MEM32(edi) = MEM32(edi) - 1; /* 0x1009CB42: dec dword ptr [edi] */
    _flag_k = FK_DEC;
    /* test ebx, ebx */ /* 0x1009CB44: test ebx, ebx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ebx);
    _cf = 0;
    _flag_k = FK_TEST;
    if ((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) == 0u || (((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_1009CB4D; /* 0x1009CB46: jle 0x1009cb4d */
L_1009CB48:
    /* cmp MEM32(edi), 1 */ /* 0x1009CB48: cmp dword ptr [edi], 1 */
    _flag_a = (uint32_t)(MEM32(edi)); _flag_b = (uint32_t)(1);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_A(_flag_a, _flag_b)) goto L_1009CB2F; /* 0x1009CB4B: ja 0x1009cb2f */
L_1009CB4D:
    ebx = POP32_VAL(esp); /* 0x1009CB4D: pop ebx */
L_1009CB4E:
    edx = MEM32(ecx); /* 0x1009CB4E: mov edx, dword ptr [ecx] */
    MEM32(ecx) = esi; /* 0x1009CB50: mov dword ptr [ecx], esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esi = esi - 2; /* 0x1009CB52: sub esi, 2 */
    _flag_k = FK_CMP;
L_1009CB55:
    SET_LO16(eax, MEM16(edx)); /* 0x1009CB55: mov ax, word ptr [edx] */
    ecx = (uint32_t)MEM16(esi); /* 0x1009CB58: movzx ecx, word ptr [esi] */
    MEM16(esi) = (uint16_t)(LO16(eax)); /* 0x1009CB5B: mov word ptr [esi], ax */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esi = esi - 2; /* 0x1009CB5E: sub esi, 2 */
    _flag_k = FK_CMP;
    MEM16(edx) = (uint16_t)(LO16(ecx)); /* 0x1009CB61: mov word ptr [edx], cx */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edx = edx + 2; /* 0x1009CB64: add edx, 2 */
    _flag_k = FK_ADD;
    /* cmp edx, esi */ /* 0x1009CB67: cmp edx, esi */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_1009CB55; /* 0x1009CB69: jb 0x1009cb55 */
L_1009CB6B:
    edi = POP32_VAL(esp); /* 0x1009CB6B: pop edi */
    esi = POP32_VAL(esp); /* 0x1009CB6C: pop esi */
    ebp = POP32_VAL(esp); /* 0x1009CB6D: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1009CB6E: ret  */
    RECOMP_REGS_OUT();
}

void sub_1009CB6F(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1009CB6Fu);

L_1009CB6F:
    PUSH32(esp, ebp); /* 0x1009CB6F: push ebp */
    ebp = esp; /* 0x1009CB70: mov ebp, esp */
    ecx = MEM32(ebp + 0x10); /* 0x1009CB72: mov ecx, dword ptr [ebp + 0x10] */
    /* cmp MEM32(ecx), 0 */ /* 0x1009CB75: cmp dword ptr [ecx], 0 */
    _flag_a = (uint32_t)(MEM32(ecx)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1009CB9B; /* 0x1009CB78: je 0x1009cb9b */
L_1009CB7A:
    edx = MEM32(ebp + 0x8); /* 0x1009CB7A: mov edx, dword ptr [ebp + 8] */
    PUSH32(esp, esi); /* 0x1009CB7D: push esi */
    esi = MEM32(ebp + 0xC); /* 0x1009CB7E: mov esi, dword ptr [ebp + 0xc] */
    PUSH32(esp, edi); /* 0x1009CB81: push edi */
L_1009CB82:
    edi = (uint32_t)MEM16(edx); /* 0x1009CB82: movzx edi, word ptr [edx] */
    /* test LO16(edi), LO16(edi) */ /* 0x1009CB85: test di, di */
    _flag_a = (uint32_t)(LO16(edi)) << 16; _flag_b = (uint32_t)(LO16(edi)) << 16;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 16);
    if (TEST_Z(_flag_a, _flag_b)) goto L_1009CB99; /* 0x1009CB88: je 0x1009cb99 */
L_1009CB8A:
    eax = MEM32(esi); /* 0x1009CB8A: mov eax, dword ptr [esi] */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edx = edx + 2; /* 0x1009CB8C: add edx, 2 */
    _flag_k = FK_ADD;
    MEM16(eax) = (uint16_t)(LO16(edi)); /* 0x1009CB8F: mov word ptr [eax], di */
    _flag_a = (uint32_t)(MEM32(esi)); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM32(esi) = MEM32(esi) + 2; /* 0x1009CB92: add dword ptr [esi], 2 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(MEM32(ecx)); _flag_b = (uint32_t)(1);
    MEM32(ecx) = MEM32(ecx) - 1; /* 0x1009CB95: dec dword ptr [ecx] */
    _flag_k = FK_DEC;
    RECOMP_BACKEDGE();
    if (/* dec result */ CMP_NE(_flag_a, _flag_b)) goto L_1009CB82; /* 0x1009CB97: jne 0x1009cb82 */
L_1009CB99:
    edi = POP32_VAL(esp); /* 0x1009CB99: pop edi */
    esi = POP32_VAL(esp); /* 0x1009CB9A: pop esi */
L_1009CB9B:
    ebp = POP32_VAL(esp); /* 0x1009CB9B: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1009CB9C: ret  */
    RECOMP_REGS_OUT();
}

void sub_1009CB9D(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1009CB9Du);

L_1009CB9D:
    PUSH32(esp, ebp); /* 0x1009CB9D: push ebp */
    ebp = esp; /* 0x1009CB9E: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x30u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x30u; /* 0x1009CBA0: sub esp, 0x30 */
    _flag_k = FK_CMP;
    eax = MEM32(0x100DF7B8); /* 0x1009CBA3: mov eax, dword ptr [0x100df7b8] */
    _flag_a = (uint32_t)((eax ^ ebp)); _flag_b = (uint32_t)((eax ^ ebp));
    eax = eax ^ ebp; /* 0x1009CBA8: xor eax, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x4)) = eax; /* 0x1009CBAA: mov dword ptr [ebp - 4], eax */
    eax = MEM32(ebp + 0x8); /* 0x1009CBAD: mov eax, dword ptr [ebp + 8] */
    edx = MEM32(ebp + 0x10); /* 0x1009CBB0: mov edx, dword ptr [ebp + 0x10] */
    ecx = MEM32(ebp + 0x1C); /* 0x1009CBB3: mov ecx, dword ptr [ebp + 0x1c] */
    MEM32(ebp + (-0x30)) = eax; /* 0x1009CBB6: mov dword ptr [ebp - 0x30], eax */
    eax = MEM32(ebp + 0x14); /* 0x1009CBB9: mov eax, dword ptr [ebp + 0x14] */
    PUSH32(esp, ebx); /* 0x1009CBBC: push ebx */
    ebx = MEM32(ebp + 0xC); /* 0x1009CBBD: mov ebx, dword ptr [ebp + 0xc] */
    MEM32(ebp + (-0x20)) = eax; /* 0x1009CBC0: mov dword ptr [ebp - 0x20], eax */
    eax = ebx; /* 0x1009CBC3: mov eax, ebx */
    MEM32(ebp + (-0x2C)) = edx; /* 0x1009CBC5: mov dword ptr [ebp - 0x2c], edx */
    MEM32(ebp + (-0x24)) = ecx; /* 0x1009CBC8: mov dword ptr [ebp - 0x24], ecx */
    PUSH32(esp, esi); /* 0x1009CBCB: push esi */
    esi = MEM32(ebp + 0x18); /* 0x1009CBCC: mov esi, dword ptr [ebp + 0x18] */
    MEM32(ebp + (-0x1C)) = esi; /* 0x1009CBCF: mov dword ptr [ebp - 0x1c], esi */
    PUSH32(esp, edi); /* 0x1009CBD2: push edi */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - 0; /* 0x1009CBD3: sub eax, 0 */
    _flag_k = FK_CMP;
    if (/* sub result */ CMP_EQ(_flag_a, _flag_b)) goto L_1009CBEB; /* 0x1009CBD6: je 0x1009cbeb */
L_1009CBD8:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax - 1; /* 0x1009CBD8: dec eax */
    _flag_k = FK_DEC;
    if (/* dec result */ CMP_EQ(_flag_a, _flag_b)) goto L_1009CBE3; /* 0x1009CBD9: je 0x1009cbe3 */
L_1009CBDB:
    edi = MEM32(ecx + 0x15C); /* 0x1009CBDB: mov edi, dword ptr [ecx + 0x15c] */
    goto L_1009CBF1; /* 0x1009CBE1: jmp 0x1009cbf1 */
L_1009CBE3:
    edi = MEM32(ecx + 0x158); /* 0x1009CBE3: mov edi, dword ptr [ecx + 0x158] */
    goto L_1009CBF1; /* 0x1009CBE9: jmp 0x1009cbf1 */
L_1009CBEB:
    edi = MEM32(ecx + 0x154); /* 0x1009CBEB: mov edi, dword ptr [ecx + 0x154] */
L_1009CBF1:
    /* cmp MEM32(ecx + 0xAC), 1 */ /* 0x1009CBF1: cmp dword ptr [ecx + 0xac], 1 */
    _flag_a = (uint32_t)(MEM32(ecx + 0xAC)); _flag_b = (uint32_t)(1);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1009CF87; /* 0x1009CBF8: je 0x1009cf87 */
L_1009CBFE:
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ebx = ebx - 2; /* 0x1009CBFE: sub ebx, 2 */
    _flag_k = FK_CMP;
    eax = 0x76Cu; /* 0x1009CC01: mov eax, 0x76c */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(ebx);
    _cf = (ebx) != 0;
    ebx = (uint32_t)(-(int32_t)ebx); /* 0x1009CC06: neg ebx */
    _flag_k = FK_CMP;
    { uint32_t _sa = ebx, _sb = ebx, _sc = (uint32_t)CMP_B(_flag_a, _flag_b); /* 0x1009CC08: sbb ebx, ebx */
      ebx = _sc ? 0xFFFFFFFFu : 0;
      _flag_a = recomp_flags_sbb(_sa, _sb, _sc); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    _flag_a = (uint32_t)(LO16(eax)) << 16; _flag_b = (uint32_t)(MEM16(edx + 0x14)) << 16;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    SET_LO16(eax, LO16(eax) + MEM16(edx + 0x14)); /* 0x1009CC0A: add ax, word ptr [edx + 0x14] */
    _flag_k = FK_NARROW(FK_ADD, 16);
    MEM16(ebp + (-0x14)) = (uint16_t)(LO16(eax)); /* 0x1009CC0E: mov word ptr [ebp - 0x14], ax */
    ebx = ~ebx; /* 0x1009CC12: not ebx */
    SET_LO16(eax, MEM16(edx + 0x10)); /* 0x1009CC14: mov ax, word ptr [edx + 0x10] */
    _flag_a = (uint32_t)(LO16(eax)) << 16; _flag_b = (uint32_t)(1) << 16;
    SET_LO16(eax, LO16(eax) + 1); /* 0x1009CC18: inc ax */
    _flag_k = FK_NARROW(FK_INC, 16);
    MEM16(ebp + (-0x12)) = (uint16_t)(LO16(eax)); /* 0x1009CC1A: mov word ptr [ebp - 0x12], ax */
    SET_LO16(eax, MEM16(edx + 0xC)); /* 0x1009CC1E: mov ax, word ptr [edx + 0xc] */
    MEM16(ebp + (-0xE)) = (uint16_t)(LO16(eax)); /* 0x1009CC22: mov word ptr [ebp - 0xe], ax */
    SET_LO16(eax, MEM16(edx + 0x8)); /* 0x1009CC26: mov ax, word ptr [edx + 8] */
    MEM16(ebp + (-0xC)) = (uint16_t)(LO16(eax)); /* 0x1009CC2A: mov word ptr [ebp - 0xc], ax */
    SET_LO16(eax, MEM16(edx + 0x4)); /* 0x1009CC2E: mov ax, word ptr [edx + 4] */
    MEM16(ebp + (-0xA)) = (uint16_t)(LO16(eax)); /* 0x1009CC32: mov word ptr [ebp - 0xa], ax */
    SET_LO16(eax, MEM16(edx)); /* 0x1009CC36: mov ax, word ptr [edx] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edx = 0; /* 0x1009CC39: xor edx, edx */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, edx); /* 0x1009CC3B: push edx */
    MEM16(ebp + (-0x8)) = (uint16_t)(LO16(eax)); /* 0x1009CC3C: mov word ptr [ebp - 8], ax */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1009CC40: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM16(ebp + (-0x6)) = (uint16_t)(LO16(eax)); /* 0x1009CC42: mov word ptr [ebp - 6], ax */
    eax = ebp + (-0x14); /* 0x1009CC46: lea eax, [ebp - 0x14] */
    PUSH32(esp, edx); /* 0x1009CC49: push edx */
    PUSH32(esp, edi); /* 0x1009CC4A: push edi */
    PUSH32(esp, eax); /* 0x1009CC4B: push eax */
    PUSH32(esp, edx); /* 0x1009CC4C: push edx */
    PUSH32(esp, MEM32(ecx + 0x160)); /* 0x1009CC4D: push dword ptr [ecx + 0x160] */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(1);
    ebx = ebx & 1; /* 0x1009CC53: and ebx, 1 */
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1009CC64; /* 0x1009CC56: je 0x1009cc64 */
L_1009CC58:
    RECOMP_CALL(sub_100A60AB); /* 0x1009CC58: call 0x100a60ab */
    RECOMP_FLAGS_IN();
    edx = eax; /* 0x1009CC5D: mov edx, eax */
    MEM32(ebp + (-0x28)) = edx; /* 0x1009CC5F: mov dword ptr [ebp - 0x28], edx */
    goto L_1009CC6E; /* 0x1009CC62: jmp 0x1009cc6e */
L_1009CC64:
    RECOMP_CALL(sub_100A6062); /* 0x1009CC64: call 0x100a6062 */
    RECOMP_FLAGS_IN();
    edx = eax; /* 0x1009CC69: mov edx, eax */
    MEM32(ebp + (-0x28)) = eax; /* 0x1009CC6B: mov dword ptr [ebp - 0x28], eax */
L_1009CC6E:
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x18u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x18u; /* 0x1009CC6E: add esp, 0x18 */
    _flag_k = FK_ADD;
    /* test edx, edx */ /* 0x1009CC71: test edx, edx */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(edx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1009CF87; /* 0x1009CC73: je 0x1009cf87 */
L_1009CC79:
    ecx = edx + edx; /* 0x1009CC79: lea ecx, [edx + edx] */
    eax = ecx + 0x8; /* 0x1009CC7C: lea eax, [ecx + 8] */
    /* cmp eax, ecx */ /* 0x1009CC7F: cmp eax, ecx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_1009CCCB; /* 0x1009CC81: jbe 0x1009cccb */
L_1009CC83:
    edx = edx * 2 + 0x8; /* 0x1009CC83: lea edx, [edx*2 + 8] */
    /* cmp edx, 0x400u */ /* 0x1009CC8A: cmp edx, 0x400 */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(0x400u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_A(_flag_a, _flag_b)) goto L_1009CCAA; /* 0x1009CC90: ja 0x1009ccaa */
L_1009CC92:
    eax = edx; /* 0x1009CC92: mov eax, edx */
    RECOMP_CALL(sub_10012BBF); /* 0x1009CC94: call 0x10012bbf */
    RECOMP_FLAGS_IN();
    esi = esp; /* 0x1009CC99: mov esi, esp */
    MEM32(ebp + (-0x18)) = esp; /* 0x1009CC9B: mov dword ptr [ebp - 0x18], esp */
    /* test esi, esi */ /* 0x1009CC9E: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1009CCC6; /* 0x1009CCA0: je 0x1009ccc6 */
L_1009CCA2:
    MEM32(esi) = 0xCCCCu; /* 0x1009CCA2: mov dword ptr [esi], 0xcccc */
    goto L_1009CCC0; /* 0x1009CCA8: jmp 0x1009ccc0 */
L_1009CCAA:
    PUSH32(esp, edx); /* 0x1009CCAA: push edx */
    RECOMP_CALL(sub_1000ED30); /* 0x1009CCAB: call 0x1000ed30 */
    RECOMP_FLAGS_IN();
    esi = eax; /* 0x1009CCB0: mov esi, eax */
    MEM32(ebp + (-0x18)) = eax; /* 0x1009CCB2: mov dword ptr [ebp - 0x18], eax */
    ecx = POP32_VAL(esp); /* 0x1009CCB5: pop ecx */
    /* test esi, esi */ /* 0x1009CCB6: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1009CCC6; /* 0x1009CCB8: je 0x1009ccc6 */
L_1009CCBA:
    MEM32(esi) = 0xDDDDu; /* 0x1009CCBA: mov dword ptr [esi], 0xdddd */
L_1009CCC0:
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esi = esi + 8; /* 0x1009CCC0: add esi, 8 */
    _flag_k = FK_ADD;
    MEM32(ebp + (-0x18)) = esi; /* 0x1009CCC3: mov dword ptr [ebp - 0x18], esi */
L_1009CCC6:
    edx = MEM32(ebp + (-0x28)); /* 0x1009CCC6: mov edx, dword ptr [ebp - 0x28] */
    goto L_1009CCD0; /* 0x1009CCC9: jmp 0x1009ccd0 */
L_1009CCCB:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    esi = 0; /* 0x1009CCCB: xor esi, esi */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x18)) = esi; /* 0x1009CCCD: mov dword ptr [ebp - 0x18], esi */
L_1009CCD0:
    /* test esi, esi */ /* 0x1009CCD0: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1009CE58; /* 0x1009CCD2: je 0x1009ce58 */
L_1009CCD8:
    PUSH32(esp, edx); /* 0x1009CCD8: push edx */
    PUSH32(esp, esi); /* 0x1009CCD9: push esi */
    PUSH32(esp, edi); /* 0x1009CCDA: push edi */
    eax = ebp + (-0x14); /* 0x1009CCDB: lea eax, [ebp - 0x14] */
    /* test ebx, ebx */ /* 0x1009CCDE: test ebx, ebx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ebx);
    _cf = 0;
    _flag_k = FK_TEST;
    ebx = MEM32(ebp + (-0x24)); /* 0x1009CCE0: mov ebx, dword ptr [ebp - 0x24] */
    PUSH32(esp, eax); /* 0x1009CCE3: push eax */
    PUSH32(esp, 0); /* 0x1009CCE4: push 0 */
    PUSH32(esp, MEM32(ebx + 0x160)); /* 0x1009CCE6: push dword ptr [ebx + 0x160] */
    if (TEST_Z(_flag_a, _flag_b)) goto L_1009CCF5; /* 0x1009CCEC: je 0x1009ccf5 */
L_1009CCEE:
    RECOMP_CALL(sub_100A60AB); /* 0x1009CCEE: call 0x100a60ab */
    RECOMP_FLAGS_IN();
    goto L_1009CCFA; /* 0x1009CCF3: jmp 0x1009ccfa */
L_1009CCF5:
    RECOMP_CALL(sub_100A6062); /* 0x1009CCF5: call 0x100a6062 */
    RECOMP_FLAGS_IN();
L_1009CCFA:
    edx = eax; /* 0x1009CCFA: mov edx, eax */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x18u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x18u; /* 0x1009CCFC: add esp, 0x18 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(1);
    edx = edx - 1; /* 0x1009CCFF: dec edx */
    _flag_k = FK_DEC;
    edi = esi; /* 0x1009CD00: mov edi, esi */
    /* test edx, edx */ /* 0x1009CD02: test edx, edx */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(edx);
    _cf = 0;
    _flag_k = FK_TEST;
    if ((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) == 0u || (((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_1009CD29; /* 0x1009CD04: jle 0x1009cd29 */
L_1009CD06:
    ebx = MEM32(ebp + (-0x1C)); /* 0x1009CD06: mov ebx, dword ptr [ebp - 0x1c] */
    esi = MEM32(ebp + (-0x20)); /* 0x1009CD09: mov esi, dword ptr [ebp - 0x20] */
L_1009CD0C:
    /* cmp MEM32(ebx), 0 */ /* 0x1009CD0C: cmp dword ptr [ebx], 0 */
    _flag_a = (uint32_t)(MEM32(ebx)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_1009CD26; /* 0x1009CD0F: jbe 0x1009cd26 */
L_1009CD11:
    ecx = MEM32(esi); /* 0x1009CD11: mov ecx, dword ptr [esi] */
    SET_LO16(eax, MEM16(edi)); /* 0x1009CD13: mov ax, word ptr [edi] */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edi = edi + 2; /* 0x1009CD16: add edi, 2 */
    _flag_k = FK_ADD;
    MEM16(ecx) = (uint16_t)(LO16(eax)); /* 0x1009CD19: mov word ptr [ecx], ax */
    _flag_a = (uint32_t)(MEM32(esi)); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM32(esi) = MEM32(esi) + 2; /* 0x1009CD1C: add dword ptr [esi], 2 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(MEM32(ebx)); _flag_b = (uint32_t)(1);
    MEM32(ebx) = MEM32(ebx) - 1; /* 0x1009CD1F: dec dword ptr [ebx] */
    _flag_k = FK_DEC;
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(1);
    edx = edx - 1; /* 0x1009CD21: dec edx */
    _flag_k = FK_DEC;
    /* test edx, edx */ /* 0x1009CD22: test edx, edx */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(edx);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if ((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) != 0u && (((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) == 0u)) goto L_1009CD0C; /* 0x1009CD24: jg 0x1009cd0c */
L_1009CD26:
    esi = MEM32(ebp + (-0x18)); /* 0x1009CD26: mov esi, dword ptr [ebp - 0x18] */
L_1009CD29:
    PUSH32(esp, esi); /* 0x1009CD29: push esi */
    RECOMP_CALL(sub_10012BD5); /* 0x1009CD2A: call 0x10012bd5 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1009CD2F: pop ecx */
L_1009CD30:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1009CD30: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x1009CD32: inc eax */
    _flag_k = FK_INC;
L_1009CD33:
    esp = ebp + (-0x3C); /* 0x1009CD33: lea esp, [ebp - 0x3c] */
    edi = POP32_VAL(esp); /* 0x1009CD36: pop edi */
    esi = POP32_VAL(esp); /* 0x1009CD37: pop esi */
    ebx = POP32_VAL(esp); /* 0x1009CD38: pop ebx */
    ecx = MEM32(ebp + (-0x4)); /* 0x1009CD39: mov ecx, dword ptr [ebp - 4] */
    _flag_a = (uint32_t)((ecx ^ ebp)); _flag_b = (uint32_t)((ecx ^ ebp));
    ecx = ecx ^ ebp; /* 0x1009CD3C: xor ecx, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_1000F7C6); /* 0x1009CD3E: call 0x1000f7c6 */
    RECOMP_FLAGS_IN();
    esp = ebp; /* 0x1009CD43: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x1009CD45: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1009CD46: ret  */
L_1009CD47:
    /* cmp MEM32(esi), 0 */ /* 0x1009CD47: cmp dword ptr [esi], 0 */
    _flag_a = (uint32_t)(MEM32(esi)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1009CD30; /* 0x1009CD4A: je 0x1009cd30 */
L_1009CD4C:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    esi = 0; /* 0x1009CD4C: xor esi, esi */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x18)) = edi; /* 0x1009CD4E: mov dword ptr [ebp - 0x18], edi */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1009CD51: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = (uint32_t)LO16(edx); /* 0x1009CD53: movzx ecx, dx */
    ebx = edi; /* 0x1009CD56: mov ebx, edi */
L_1009CD58:
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ebx = ebx + 2; /* 0x1009CD58: add ebx, 2 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x1009CD5B: inc eax */
    _flag_k = FK_INC;
    /* cmp MEM16(ebx), LO16(ecx) */ /* 0x1009CD5C: cmp word ptr [ebx], cx */
    _flag_a = (uint32_t)(MEM16(ebx)) << 16; _flag_b = (uint32_t)(LO16(ecx)) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    RECOMP_BACKEDGE();
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1009CD58; /* 0x1009CD5F: je 0x1009cd58 */
L_1009CD61:
    ecx = (uint32_t)LO16(edx); /* 0x1009CD61: movzx ecx, dx */
    MEM32(ebp + (-0x18)) = ebx; /* 0x1009CD64: mov dword ptr [ebp - 0x18], ebx */
    ebx = MEM32(ebp + (-0x24)); /* 0x1009CD67: mov ebx, dword ptr [ebp - 0x24] */
    /* cmp ecx, 0x64u */ /* 0x1009CD6A: cmp ecx, 0x64 */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x64u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_G(_flag_a, _flag_b)) goto L_1009CE88; /* 0x1009CD6D: jg 0x1009ce88 */
L_1009CD73:
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1009CE60; /* 0x1009CD73: je 0x1009ce60 */
L_1009CD79:
    /* cmp ecx, 0x27u */ /* 0x1009CD79: cmp ecx, 0x27 */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x27u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1009CE0F; /* 0x1009CD7C: je 0x1009ce0f */
L_1009CD82:
    /* cmp ecx, 0x41u */ /* 0x1009CD82: cmp ecx, 0x41 */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x41u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1009CD9A; /* 0x1009CD85: je 0x1009cd9a */
L_1009CD87:
    /* cmp ecx, 0x48u */ /* 0x1009CD87: cmp ecx, 0x48 */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x48u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1009CDDB; /* 0x1009CD8A: je 0x1009cddb */
L_1009CD8C:
    /* cmp ecx, 0x4Du */ /* 0x1009CD8C: cmp ecx, 0x4d */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x4Du);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1009CDB3; /* 0x1009CD8F: je 0x1009cdb3 */
L_1009CD91:
    /* cmp ecx, 0x61u */ /* 0x1009CD91: cmp ecx, 0x61 */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x61u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_1009CF4D; /* 0x1009CD94: jne 0x1009cf4d */
L_1009CD9A:
    PUSH32(esp, 0x1009CFA0u); /* 0x1009CD9A: push 0x1009cfa0 */
    PUSH32(esp, edi); /* 0x1009CD9F: push edi */
    RECOMP_CALL(sub_1000F840); /* 0x1009CDA0: call 0x1000f840 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1009CDA5: pop ecx */
    ecx = POP32_VAL(esp); /* 0x1009CDA6: pop ecx */
    /* test eax, eax */ /* 0x1009CDA7: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1009CDF1; /* 0x1009CDA9: jne 0x1009cdf1 */
L_1009CDAB:
    ecx = edi + 0xA; /* 0x1009CDAB: lea ecx, [edi + 0xa] */
    MEM32(ebp + (-0x18)) = ecx; /* 0x1009CDAE: mov dword ptr [ebp - 0x18], ecx */
    goto L_1009CE08; /* 0x1009CDB1: jmp 0x1009ce08 */
L_1009CDB3:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax - 1; /* 0x1009CDB3: dec eax */
    _flag_k = FK_DEC;
    if (/* dec result */ CMP_EQ(_flag_a, _flag_b)) goto L_1009CDD1; /* 0x1009CDB4: je 0x1009cdd1 */
L_1009CDB6:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax - 1; /* 0x1009CDB6: dec eax */
    _flag_k = FK_DEC;
    if (/* dec result */ CMP_EQ(_flag_a, _flag_b)) goto L_1009CDD4; /* 0x1009CDB7: je 0x1009cdd4 */
L_1009CDB9:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax - 1; /* 0x1009CDB9: dec eax */
    _flag_k = FK_DEC;
    if (/* dec result */ CMP_EQ(_flag_a, _flag_b)) goto L_1009CDCA; /* 0x1009CDBA: je 0x1009cdca */
L_1009CDBC:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax - 1; /* 0x1009CDBC: dec eax */
    _flag_k = FK_DEC;
    if (/* dec result */ CMP_NE(_flag_a, _flag_b)) goto L_1009CF4D; /* 0x1009CDBD: jne 0x1009cf4d */
L_1009CDC3:
    PUSH32(esp, 0x42u); /* 0x1009CDC3: push 0x42 */
    goto L_1009CF67; /* 0x1009CDC5: jmp 0x1009cf67 */
L_1009CDCA:
    PUSH32(esp, 0x62u); /* 0x1009CDCA: push 0x62 */
    goto L_1009CF67; /* 0x1009CDCC: jmp 0x1009cf67 */
L_1009CDD1:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    esi = 0; /* 0x1009CDD1: xor esi, esi */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi + 1; /* 0x1009CDD3: inc esi */
    _flag_k = FK_INC;
L_1009CDD4:
    PUSH32(esp, 0x6Du); /* 0x1009CDD4: push 0x6d */
    goto L_1009CF67; /* 0x1009CDD6: jmp 0x1009cf67 */
L_1009CDDB:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax - 1; /* 0x1009CDDB: dec eax */
    _flag_k = FK_DEC;
    if (/* dec result */ CMP_EQ(_flag_a, _flag_b)) goto L_1009CDE7; /* 0x1009CDDC: je 0x1009cde7 */
L_1009CDDE:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax - 1; /* 0x1009CDDE: dec eax */
    _flag_k = FK_DEC;
    if (/* dec result */ CMP_NE(_flag_a, _flag_b)) goto L_1009CF4D; /* 0x1009CDDF: jne 0x1009cf4d */
L_1009CDE5:
    goto L_1009CDEA; /* 0x1009CDE5: jmp 0x1009cdea */
L_1009CDE7:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    esi = 0; /* 0x1009CDE7: xor esi, esi */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi + 1; /* 0x1009CDE9: inc esi */
    _flag_k = FK_INC;
L_1009CDEA:
    PUSH32(esp, 0x48u); /* 0x1009CDEA: push 0x48 */
    goto L_1009CF67; /* 0x1009CDEC: jmp 0x1009cf67 */
L_1009CDF1:
    PUSH32(esp, 0x1009CFACu); /* 0x1009CDF1: push 0x1009cfac */
    PUSH32(esp, edi); /* 0x1009CDF6: push edi */
    RECOMP_CALL(sub_1000F840); /* 0x1009CDF7: call 0x1000f840 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1009CDFC: pop ecx */
    ecx = POP32_VAL(esp); /* 0x1009CDFD: pop ecx */
    /* test eax, eax */ /* 0x1009CDFE: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1009CE08; /* 0x1009CE00: jne 0x1009ce08 */
L_1009CE02:
    eax = edi + 0x6; /* 0x1009CE02: lea eax, [edi + 6] */
    MEM32(ebp + (-0x18)) = eax; /* 0x1009CE05: mov dword ptr [ebp - 0x18], eax */
L_1009CE08:
    PUSH32(esp, 0x70u); /* 0x1009CE08: push 0x70 */
    goto L_1009CF67; /* 0x1009CE0A: jmp 0x1009cf67 */
L_1009CE0F:
    edi = edi + eax * 2; /* 0x1009CE0F: lea edi, [edi + eax*2] */
    /* test LO8(eax), 1 */ /* 0x1009CE12: test al, 1 */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(1) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_1009CE58; /* 0x1009CE14: je 0x1009ce58 */
L_1009CE16:
    ecx = (uint32_t)MEM16(edi); /* 0x1009CE16: movzx ecx, word ptr [edi] */
    /* test LO16(ecx), LO16(ecx) */ /* 0x1009CE19: test cx, cx */
    _flag_a = (uint32_t)(LO16(ecx)) << 16; _flag_b = (uint32_t)(LO16(ecx)) << 16;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 16);
    RECOMP_BACKEDGE();
    if (TEST_Z(_flag_a, _flag_b)) goto L_1009CD30; /* 0x1009CE1C: je 0x1009cd30 */
L_1009CE22:
    esi = MEM32(ebp + (-0x1C)); /* 0x1009CE22: mov esi, dword ptr [ebp - 0x1c] */
    edx = MEM32(ebp + (-0x20)); /* 0x1009CE25: mov edx, dword ptr [ebp - 0x20] */
L_1009CE28:
    /* cmp MEM32(esi), 0 */ /* 0x1009CE28: cmp dword ptr [esi], 0 */
    _flag_a = (uint32_t)(MEM32(esi)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1009CF87; /* 0x1009CE2B: je 0x1009cf87 */
L_1009CE31:
    PUSH32(esp, 0x27u); /* 0x1009CE31: push 0x27 */
    eax = POP32_VAL(esp); /* 0x1009CE33: pop eax */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edi = edi + 2; /* 0x1009CE34: add edi, 2 */
    _flag_k = FK_ADD;
    /* cmp LO16(ecx), LO16(eax) */ /* 0x1009CE37: cmp cx, ax */
    _flag_a = (uint32_t)(LO16(ecx)) << 16; _flag_b = (uint32_t)(LO16(eax)) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1009CF87; /* 0x1009CE3A: je 0x1009cf87 */
L_1009CE40:
    eax = MEM32(edx); /* 0x1009CE40: mov eax, dword ptr [edx] */
    MEM16(eax) = (uint16_t)(LO16(ecx)); /* 0x1009CE42: mov word ptr [eax], cx */
    _flag_a = (uint32_t)(MEM32(edx)); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM32(edx) = MEM32(edx) + 2; /* 0x1009CE45: add dword ptr [edx], 2 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(MEM32(esi)); _flag_b = (uint32_t)(1);
    MEM32(esi) = MEM32(esi) - 1; /* 0x1009CE48: dec dword ptr [esi] */
    _flag_k = FK_DEC;
    ecx = (uint32_t)MEM16(edi); /* 0x1009CE4A: movzx ecx, word ptr [edi] */
    /* test LO16(ecx), LO16(ecx) */ /* 0x1009CE4D: test cx, cx */
    _flag_a = (uint32_t)(LO16(ecx)) << 16; _flag_b = (uint32_t)(LO16(ecx)) << 16;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 16);
    if (TEST_Z(_flag_a, _flag_b)) goto L_1009CF87; /* 0x1009CE50: je 0x1009cf87 */
L_1009CE56:
    RECOMP_BACKEDGE();
    goto L_1009CE28; /* 0x1009CE56: jmp 0x1009ce28 */
L_1009CE58:
    esi = MEM32(ebp + (-0x1C)); /* 0x1009CE58: mov esi, dword ptr [ebp - 0x1c] */
    goto L_1009CF87; /* 0x1009CE5B: jmp 0x1009cf87 */
L_1009CE60:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax - 1; /* 0x1009CE60: dec eax */
    _flag_k = FK_DEC;
    if (/* dec result */ CMP_EQ(_flag_a, _flag_b)) goto L_1009CE7E; /* 0x1009CE61: je 0x1009ce7e */
L_1009CE63:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax - 1; /* 0x1009CE63: dec eax */
    _flag_k = FK_DEC;
    if (/* dec result */ CMP_EQ(_flag_a, _flag_b)) goto L_1009CE81; /* 0x1009CE64: je 0x1009ce81 */
L_1009CE66:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax - 1; /* 0x1009CE66: dec eax */
    _flag_k = FK_DEC;
    if (/* dec result */ CMP_EQ(_flag_a, _flag_b)) goto L_1009CE77; /* 0x1009CE67: je 0x1009ce77 */
L_1009CE69:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax - 1; /* 0x1009CE69: dec eax */
    _flag_k = FK_DEC;
    if (/* dec result */ CMP_NE(_flag_a, _flag_b)) goto L_1009CF4D; /* 0x1009CE6A: jne 0x1009cf4d */
L_1009CE70:
    PUSH32(esp, 0x41u); /* 0x1009CE70: push 0x41 */
    goto L_1009CF67; /* 0x1009CE72: jmp 0x1009cf67 */
L_1009CE77:
    PUSH32(esp, 0x61u); /* 0x1009CE77: push 0x61 */
    goto L_1009CF67; /* 0x1009CE79: jmp 0x1009cf67 */
L_1009CE7E:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    esi = 0; /* 0x1009CE7E: xor esi, esi */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi + 1; /* 0x1009CE80: inc esi */
    _flag_k = FK_INC;
L_1009CE81:
    PUSH32(esp, 0x64u); /* 0x1009CE81: push 0x64 */
    goto L_1009CF67; /* 0x1009CE83: jmp 0x1009cf67 */
L_1009CE88:
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x68u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ecx = ecx - 0x68u; /* 0x1009CE88: sub ecx, 0x68 */
    _flag_k = FK_CMP;
    if (/* sub result */ CMP_EQ(_flag_a, _flag_b)) goto L_1009CF47; /* 0x1009CE8B: je 0x1009cf47 */
L_1009CE91:
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(5);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ecx = ecx - 5; /* 0x1009CE91: sub ecx, 5 */
    _flag_k = FK_CMP;
    if (/* sub result */ CMP_EQ(_flag_a, _flag_b)) goto L_1009CF38; /* 0x1009CE94: je 0x1009cf38 */
L_1009CE9A:
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(6);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ecx = ecx - 6; /* 0x1009CE9A: sub ecx, 6 */
    _flag_k = FK_CMP;
    if (/* sub result */ CMP_EQ(_flag_a, _flag_b)) goto L_1009CF29; /* 0x1009CE9D: je 0x1009cf29 */
L_1009CEA3:
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx - 1; /* 0x1009CEA3: dec ecx */
    _flag_k = FK_DEC;
    if (/* dec result */ CMP_EQ(_flag_a, _flag_b)) goto L_1009CEC9; /* 0x1009CEA4: je 0x1009cec9 */
L_1009CEA6:
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(5);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ecx = ecx - 5; /* 0x1009CEA6: sub ecx, 5 */
    _flag_k = FK_CMP;
    if (/* sub result */ CMP_NE(_flag_a, _flag_b)) goto L_1009CF4D; /* 0x1009CEA9: jne 0x1009cf4d */
L_1009CEAF:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax - 1; /* 0x1009CEAF: dec eax */
    _flag_k = FK_DEC;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax - 1; /* 0x1009CEB0: dec eax */
    _flag_k = FK_DEC;
    if (/* dec result */ CMP_EQ(_flag_a, _flag_b)) goto L_1009CEC2; /* 0x1009CEB1: je 0x1009cec2 */
L_1009CEB3:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax - 1; /* 0x1009CEB3: dec eax */
    _flag_k = FK_DEC;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax - 1; /* 0x1009CEB4: dec eax */
    _flag_k = FK_DEC;
    if (/* dec result */ CMP_NE(_flag_a, _flag_b)) goto L_1009CF4D; /* 0x1009CEB5: jne 0x1009cf4d */
L_1009CEBB:
    PUSH32(esp, 0x59u); /* 0x1009CEBB: push 0x59 */
    goto L_1009CF67; /* 0x1009CEBD: jmp 0x1009cf67 */
L_1009CEC2:
    PUSH32(esp, 0x79u); /* 0x1009CEC2: push 0x79 */
    goto L_1009CF67; /* 0x1009CEC4: jmp 0x1009cf67 */
L_1009CEC9:
    ecx = MEM32(ebp + (-0x2C)); /* 0x1009CEC9: mov ecx, dword ptr [ebp - 0x2c] */
    /* cmp MEM32(ecx + 0x8), 0xBu */ /* 0x1009CECC: cmp dword ptr [ecx + 8], 0xb */
    _flag_a = (uint32_t)(MEM32(ecx + 0x8)); _flag_b = (uint32_t)(0xBu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_G(_flag_a, _flag_b)) goto L_1009CEDA; /* 0x1009CED0: jg 0x1009ceda */
L_1009CED2:
    edx = MEM32(ebx + 0x14C); /* 0x1009CED2: mov edx, dword ptr [ebx + 0x14c] */
    goto L_1009CEE0; /* 0x1009CED8: jmp 0x1009cee0 */
L_1009CEDA:
    edx = MEM32(ebx + 0x150); /* 0x1009CEDA: mov edx, dword ptr [ebx + 0x150] */
L_1009CEE0:
    esi = MEM32(ebp + (-0x1C)); /* 0x1009CEE0: mov esi, dword ptr [ebp - 0x1c] */
    /* cmp eax, 1 */ /* 0x1009CEE3: cmp eax, 1 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_1009CF02; /* 0x1009CEE6: jne 0x1009cf02 */
L_1009CEE8:
    /* cmp MEM32(esi), 0 */ /* 0x1009CEE8: cmp dword ptr [esi], 0 */
    _flag_a = (uint32_t)(MEM32(esi)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_1009CF02; /* 0x1009CEEB: jbe 0x1009cf02 */
L_1009CEED:
    edi = MEM32(ebp + (-0x20)); /* 0x1009CEED: mov edi, dword ptr [ebp - 0x20] */
    SET_LO16(eax, MEM16(edx)); /* 0x1009CEF0: mov ax, word ptr [edx] */
    ecx = MEM32(edi); /* 0x1009CEF3: mov ecx, dword ptr [edi] */
    MEM16(ecx) = (uint16_t)(LO16(eax)); /* 0x1009CEF5: mov word ptr [ecx], ax */
    _flag_a = (uint32_t)(MEM32(edi)); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM32(edi) = MEM32(edi) + 2; /* 0x1009CEF8: add dword ptr [edi], 2 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(MEM32(esi)); _flag_b = (uint32_t)(1);
    MEM32(esi) = MEM32(esi) - 1; /* 0x1009CEFB: dec dword ptr [esi] */
    _flag_k = FK_DEC;
    goto L_1009CF84; /* 0x1009CEFD: jmp 0x1009cf84 */
L_1009CF02:
    ecx = (uint32_t)MEM16(edx); /* 0x1009CF02: movzx ecx, word ptr [edx] */
    /* test LO16(ecx), LO16(ecx) */ /* 0x1009CF05: test cx, cx */
    _flag_a = (uint32_t)(LO16(ecx)) << 16; _flag_b = (uint32_t)(LO16(ecx)) << 16;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 16);
    if (TEST_Z(_flag_a, _flag_b)) goto L_1009CF84; /* 0x1009CF08: je 0x1009cf84 */
L_1009CF0A:
    ebx = MEM32(ebp + (-0x20)); /* 0x1009CF0A: mov ebx, dword ptr [ebp - 0x20] */
L_1009CF0D:
    /* cmp MEM32(esi), 0 */ /* 0x1009CF0D: cmp dword ptr [esi], 0 */
    _flag_a = (uint32_t)(MEM32(esi)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_1009CF84; /* 0x1009CF10: jbe 0x1009cf84 */
L_1009CF12:
    eax = MEM32(ebx); /* 0x1009CF12: mov eax, dword ptr [ebx] */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edx = edx + 2; /* 0x1009CF14: add edx, 2 */
    _flag_k = FK_ADD;
    MEM16(eax) = (uint16_t)(LO16(ecx)); /* 0x1009CF17: mov word ptr [eax], cx */
    _flag_a = (uint32_t)(MEM32(ebx)); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM32(ebx) = MEM32(ebx) + 2; /* 0x1009CF1A: add dword ptr [ebx], 2 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(MEM32(esi)); _flag_b = (uint32_t)(1);
    MEM32(esi) = MEM32(esi) - 1; /* 0x1009CF1D: dec dword ptr [esi] */
    _flag_k = FK_DEC;
    ecx = (uint32_t)MEM16(edx); /* 0x1009CF1F: movzx ecx, word ptr [edx] */
    /* test LO16(ecx), LO16(ecx) */ /* 0x1009CF22: test cx, cx */
    _flag_a = (uint32_t)(LO16(ecx)) << 16; _flag_b = (uint32_t)(LO16(ecx)) << 16;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 16);
    if (TEST_Z(_flag_a, _flag_b)) goto L_1009CF84; /* 0x1009CF25: je 0x1009cf84 */
L_1009CF27:
    RECOMP_BACKEDGE();
    goto L_1009CF0D; /* 0x1009CF27: jmp 0x1009cf0d */
L_1009CF29:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax - 1; /* 0x1009CF29: dec eax */
    _flag_k = FK_DEC;
    if (/* dec result */ CMP_EQ(_flag_a, _flag_b)) goto L_1009CF31; /* 0x1009CF2A: je 0x1009cf31 */
L_1009CF2C:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax - 1; /* 0x1009CF2C: dec eax */
    _flag_k = FK_DEC;
    if (/* dec result */ CMP_NE(_flag_a, _flag_b)) goto L_1009CF4D; /* 0x1009CF2D: jne 0x1009cf4d */
L_1009CF2F:
    goto L_1009CF34; /* 0x1009CF2F: jmp 0x1009cf34 */
L_1009CF31:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    esi = 0; /* 0x1009CF31: xor esi, esi */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi + 1; /* 0x1009CF33: inc esi */
    _flag_k = FK_INC;
L_1009CF34:
    PUSH32(esp, 0x53u); /* 0x1009CF34: push 0x53 */
    goto L_1009CF67; /* 0x1009CF36: jmp 0x1009cf67 */
L_1009CF38:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax - 1; /* 0x1009CF38: dec eax */
    _flag_k = FK_DEC;
    if (/* dec result */ CMP_EQ(_flag_a, _flag_b)) goto L_1009CF40; /* 0x1009CF39: je 0x1009cf40 */
L_1009CF3B:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax - 1; /* 0x1009CF3B: dec eax */
    _flag_k = FK_DEC;
    if (/* dec result */ CMP_NE(_flag_a, _flag_b)) goto L_1009CF4D; /* 0x1009CF3C: jne 0x1009cf4d */
L_1009CF3E:
    goto L_1009CF43; /* 0x1009CF3E: jmp 0x1009cf43 */
L_1009CF40:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    esi = 0; /* 0x1009CF40: xor esi, esi */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi + 1; /* 0x1009CF42: inc esi */
    _flag_k = FK_INC;
L_1009CF43:
    PUSH32(esp, 0x4Du); /* 0x1009CF43: push 0x4d */
    goto L_1009CF67; /* 0x1009CF45: jmp 0x1009cf67 */
L_1009CF47:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax - 1; /* 0x1009CF47: dec eax */
    _flag_k = FK_DEC;
    if (/* dec result */ CMP_EQ(_flag_a, _flag_b)) goto L_1009CF62; /* 0x1009CF48: je 0x1009cf62 */
L_1009CF4A:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax - 1; /* 0x1009CF4A: dec eax */
    _flag_k = FK_DEC;
    if (/* dec result */ CMP_EQ(_flag_a, _flag_b)) goto L_1009CF65; /* 0x1009CF4B: je 0x1009cf65 */
L_1009CF4D:
    ecx = MEM32(ebp + (-0x20)); /* 0x1009CF4D: mov ecx, dword ptr [ebp - 0x20] */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edi = edi + 2; /* 0x1009CF50: add edi, 2 */
    _flag_k = FK_ADD;
    esi = MEM32(ebp + (-0x1C)); /* 0x1009CF53: mov esi, dword ptr [ebp - 0x1c] */
    eax = MEM32(ecx); /* 0x1009CF56: mov eax, dword ptr [ecx] */
    MEM16(eax) = (uint16_t)(LO16(edx)); /* 0x1009CF58: mov word ptr [eax], dx */
    _flag_a = (uint32_t)(MEM32(ecx)); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM32(ecx) = MEM32(ecx) + 2; /* 0x1009CF5B: add dword ptr [ecx], 2 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(MEM32(esi)); _flag_b = (uint32_t)(1);
    MEM32(esi) = MEM32(esi) - 1; /* 0x1009CF5E: dec dword ptr [esi] */
    _flag_k = FK_DEC;
    goto L_1009CF87; /* 0x1009CF60: jmp 0x1009cf87 */
L_1009CF62:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    esi = 0; /* 0x1009CF62: xor esi, esi */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi + 1; /* 0x1009CF64: inc esi */
    _flag_k = FK_INC;
L_1009CF65:
    PUSH32(esp, 0x49u); /* 0x1009CF65: push 0x49 */
L_1009CF67:
    eax = POP32_VAL(esp); /* 0x1009CF67: pop eax */
    PUSH32(esp, esi); /* 0x1009CF68: push esi */
    esi = MEM32(ebp + (-0x1C)); /* 0x1009CF69: mov esi, dword ptr [ebp - 0x1c] */
    PUSH32(esp, ebx); /* 0x1009CF6C: push ebx */
    PUSH32(esp, esi); /* 0x1009CF6D: push esi */
    PUSH32(esp, MEM32(ebp + (-0x20))); /* 0x1009CF6E: push dword ptr [ebp - 0x20] */
    PUSH32(esp, MEM32(ebp + (-0x2C))); /* 0x1009CF71: push dword ptr [ebp - 0x2c] */
    PUSH32(esp, eax); /* 0x1009CF74: push eax */
    PUSH32(esp, MEM32(ebp + (-0x30))); /* 0x1009CF75: push dword ptr [ebp - 0x30] */
    RECOMP_CALL(sub_1009C584); /* 0x1009CF78: call 0x1009c584 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x1Cu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x1Cu; /* 0x1009CF7D: add esp, 0x1c */
    _flag_k = FK_ADD;
    /* test eax, eax */ /* 0x1009CF80: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1009CF98; /* 0x1009CF82: je 0x1009cf98 */
L_1009CF84:
    edi = MEM32(ebp + (-0x18)); /* 0x1009CF84: mov edi, dword ptr [ebp - 0x18] */
L_1009CF87:
    edx = (uint32_t)MEM16(edi); /* 0x1009CF87: movzx edx, word ptr [edi] */
    /* test LO16(edx), LO16(edx) */ /* 0x1009CF8A: test dx, dx */
    _flag_a = (uint32_t)(LO16(edx)) << 16; _flag_b = (uint32_t)(LO16(edx)) << 16;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 16);
    RECOMP_BACKEDGE();
    if (TEST_Z(_flag_a, _flag_b)) goto L_1009CD30; /* 0x1009CF8D: je 0x1009cd30 */
L_1009CF93:
    RECOMP_BACKEDGE();
    goto L_1009CD47; /* 0x1009CF93: jmp 0x1009cd47 */
L_1009CF98:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1009CF98: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    goto L_1009CD33; /* 0x1009CF9A: jmp 0x1009cd33 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    RECOMP_REGS_OUT();
}

void sub_1009CFA0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1009CFA0u);

L_1009CFA0:
    POPAD(); /* 0x1009CFA0: popal  */
    _flag_a = (uint32_t)(MEM8(ebp)) << 24; _flag_b = (uint32_t)(HI8(ecx)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(ebp) = (uint8_t)(MEM8(ebp) + HI8(ecx)); /* 0x1009CFA1: add byte ptr [ebp], ch */
    _flag_k = FK_NARROW(FK_ADD, 24);
    void_lift_trap(0x1009CFA4u, "das ");
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(HI8(edx)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + HI8(edx)); /* 0x1009CFA5: add byte ptr [eax], dh */
    _flag_k = FK_NARROW(FK_ADD, 24);
    void_lift_trap(0x1009CFA8u, "insd dword ptr es:[edi], dx");
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x1009CFA9: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(ecx)) << 24; _flag_b = (uint32_t)(HI8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(ecx) = (uint8_t)(MEM8(ecx) + HI8(eax)); /* 0x1009CFAB: add byte ptr [ecx], ah */
    _flag_k = FK_NARROW(FK_ADD, 24);
    void_lift_trap(0x1009CFAEu, "das ");
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(HI8(edx)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + HI8(edx)); /* 0x1009CFAF: add byte ptr [eax], dh */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x1009CFB2: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    PUSH32(esp, 0); /* 0x1009CFB4: push 0 */
    RECOMP_CALL(sub_1009CFBD); /* 0x1009CFB6: call 0x1009cfbd */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1009CFBB: pop ecx */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1009CFBC: ret  */
    RECOMP_REGS_OUT();
}

void sub_1009CFAC(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1009CFACu);

L_1009CFAC:
    POPAD(); /* 0x1009CFAC: popal  */
    _flag_a = (uint32_t)(MEM8(edi)) << 24; _flag_b = (uint32_t)(HI8(ecx)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(edi) = (uint8_t)(MEM8(edi) + HI8(ecx)); /* 0x1009CFAD: add byte ptr [edi], ch */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(HI8(edx)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + HI8(edx)); /* 0x1009CFAF: add byte ptr [eax], dh */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x1009CFB2: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    PUSH32(esp, 0); /* 0x1009CFB4: push 0 */
    RECOMP_CALL(sub_1009CFBD); /* 0x1009CFB6: call 0x1009cfbd */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1009CFBB: pop ecx */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1009CFBC: ret  */
    RECOMP_REGS_OUT();
}

void sub_1009CFB4(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1009CFB4u);

L_1009CFB4:
    PUSH32(esp, 0); /* 0x1009CFB4: push 0 */
    RECOMP_CALL(sub_1009CFBD); /* 0x1009CFB6: call 0x1009cfbd */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1009CFBB: pop ecx */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1009CFBC: ret  */
    RECOMP_REGS_OUT();
}

void sub_1009CFBD(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1009CFBDu);

L_1009CFBD:
    PUSH32(esp, ebp); /* 0x1009CFBD: push ebp */
    ebp = esp; /* 0x1009CFBE: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x1Cu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x1Cu; /* 0x1009CFC0: sub esp, 0x1c */
    _flag_k = FK_CMP;
    PUSH32(esp, ebx); /* 0x1009CFC3: push ebx */
    PUSH32(esp, esi); /* 0x1009CFC4: push esi */
    PUSH32(esp, edi); /* 0x1009CFC5: push edi */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x1009CFC6: push dword ptr [ebp + 8] */
    ecx = ebp + (-0x1C); /* 0x1009CFC9: lea ecx, [ebp - 0x1c] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ebx = 0; /* 0x1009CFCC: xor ebx, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_1000F764); /* 0x1009CFCE: call 0x1000f764 */
    RECOMP_FLAGS_IN();
    eax = MEM32(ebp + (-0x1C)); /* 0x1009CFD3: mov eax, dword ptr [ebp - 0x1c] */
    MEM32(ebp + (-0x4)) = 7; /* 0x1009CFD6: mov dword ptr [ebp - 4], 7 */
    eax = MEM32(eax + 0x9C); /* 0x1009CFDD: mov eax, dword ptr [eax + 0x9c] */
    MEM32(ebp + (-0xC)) = eax; /* 0x1009CFE3: mov dword ptr [ebp - 0xc], eax */
    edi = eax + 0xB4; /* 0x1009CFE6: lea edi, [eax + 0xb4] */
L_1009CFEC:
    PUSH32(esp, MEM32(edi + 0x1C)); /* 0x1009CFEC: push dword ptr [edi + 0x1c] */
    RECOMP_CALL(sub_1000F1F3); /* 0x1009CFEF: call 0x1000f1f3 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, MEM32(edi)); /* 0x1009CFF4: push dword ptr [edi] */
    esi = eax; /* 0x1009CFF6: mov esi, eax */
    RECOMP_CALL(sub_1000F1F3); /* 0x1009CFF8: call 0x1000f1f3 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + ebx; /* 0x1009CFFD: add eax, ebx */
    _flag_k = FK_ADD;
    edi = edi + 0x4; /* 0x1009CFFF: lea edi, [edi + 4] */
    ebx = esi + 0x2; /* 0x1009D002: lea ebx, [esi + 2] */
    ecx = POP32_VAL(esp); /* 0x1009D005: pop ecx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ebx = ebx + eax; /* 0x1009D006: add ebx, eax */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(MEM32(ebp + (-0x4))); _flag_b = (uint32_t)(1);
    MEM32(ebp + (-0x4)) = MEM32(ebp + (-0x4)) - 1; /* 0x1009D008: dec dword ptr [ebp - 4] */
    _flag_k = FK_DEC;
    ecx = POP32_VAL(esp); /* 0x1009D00B: pop ecx */
    RECOMP_BACKEDGE();
    if (/* dec result */ CMP_NE(_flag_a, _flag_b)) goto L_1009CFEC; /* 0x1009D00C: jne 0x1009cfec */
L_1009D00E:
    eax = ebx * 2 + 0x2; /* 0x1009D00E: lea eax, [ebx*2 + 2] */
    PUSH32(esp, eax); /* 0x1009D015: push eax */
    RECOMP_CALL(sub_10012226); /* 0x1009D016: call 0x10012226 */
    RECOMP_FLAGS_IN();
    edi = eax; /* 0x1009D01B: mov edi, eax */
    ecx = POP32_VAL(esp); /* 0x1009D01D: pop ecx */
    /* test edi, edi */ /* 0x1009D01E: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1009D0B3; /* 0x1009D020: je 0x1009d0b3 */
L_1009D026:
    eax = MEM32(ebp + (-0xC)); /* 0x1009D026: mov eax, dword ptr [ebp - 0xc] */
    esi = edi; /* 0x1009D029: mov esi, edi */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x8))); _flag_b = (uint32_t)(0);
    MEM32(ebp + (-0x8)) = MEM32(ebp + (-0x8)) & 0; /* 0x1009D02B: and dword ptr [ebp - 8], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xD0u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 0xD0u; /* 0x1009D02F: add eax, 0xd0 */
    _flag_k = FK_ADD;
    PUSH32(esp, 0x3Au); /* 0x1009D034: push 0x3a */
    MEM32(ebp + (-0x4)) = eax; /* 0x1009D036: mov dword ptr [ebp - 4], eax */
    ecx = POP32_VAL(esp); /* 0x1009D039: pop ecx */
L_1009D03A:
    MEM16(esi) = (uint16_t)(LO16(ecx)); /* 0x1009D03A: mov word ptr [esi], cx */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esi = esi + 2; /* 0x1009D03D: add esi, 2 */
    _flag_k = FK_ADD;
    PUSH32(esp, MEM32(eax + (-0x1C))); /* 0x1009D040: push dword ptr [eax - 0x1c] */
    ecx = esi; /* 0x1009D043: mov ecx, esi */
    eax = ebx; /* 0x1009D045: mov eax, ebx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ecx = ecx - edi; /* 0x1009D047: sub ecx, edi */
    _flag_k = FK_CMP;
    if (1u) _cf = (((ecx) >> 0) & 1u); /* 0x1009D049: sar ecx, 1 */
    if (1u) { _flag_a = recomp_flags_pack(((uint32_t)((int32_t)ecx >> 1u)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ecx = (uint32_t)((int32_t)ecx >> 1u);
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - ecx; /* 0x1009D04B: sub eax, ecx */
    _flag_k = FK_CMP;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x1009D04D: inc eax */
    _flag_k = FK_INC;
    PUSH32(esp, eax); /* 0x1009D04E: push eax */
    PUSH32(esp, esi); /* 0x1009D04F: push esi */
    RECOMP_CALL(sub_10011693); /* 0x1009D050: call 0x10011693 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x1009D055: add esp, 0xc */
    _flag_k = FK_ADD;
    /* test eax, eax */ /* 0x1009D058: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1009D0C9; /* 0x1009D05A: jne 0x1009d0c9 */
L_1009D05C:
    PUSH32(esp, esi); /* 0x1009D05C: push esi */
    RECOMP_CALL(sub_1000F1F3); /* 0x1009D05D: call 0x1000f1f3 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0x3Au); /* 0x1009D062: push 0x3a */
    esi = esi + eax * 2; /* 0x1009D064: lea esi, [esi + eax*2] */
    eax = POP32_VAL(esp); /* 0x1009D067: pop eax */
    MEM16(esi) = (uint16_t)(LO16(eax)); /* 0x1009D068: mov word ptr [esi], ax */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esi = esi + 2; /* 0x1009D06B: add esi, 2 */
    _flag_k = FK_ADD;
    eax = MEM32(ebp + (-0x4)); /* 0x1009D06E: mov eax, dword ptr [ebp - 4] */
    ecx = esi; /* 0x1009D071: mov ecx, esi */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ecx = ecx - edi; /* 0x1009D073: sub ecx, edi */
    _flag_k = FK_CMP;
    if (1u) _cf = (((ecx) >> 0) & 1u); /* 0x1009D075: sar ecx, 1 */
    if (1u) { _flag_a = recomp_flags_pack(((uint32_t)((int32_t)ecx >> 1u)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ecx = (uint32_t)((int32_t)ecx >> 1u);
    PUSH32(esp, MEM32(eax)); /* 0x1009D077: push dword ptr [eax] */
    eax = ebx; /* 0x1009D079: mov eax, ebx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - ecx; /* 0x1009D07B: sub eax, ecx */
    _flag_k = FK_CMP;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x1009D07D: inc eax */
    _flag_k = FK_INC;
    PUSH32(esp, eax); /* 0x1009D07E: push eax */
    PUSH32(esp, esi); /* 0x1009D07F: push esi */
    RECOMP_CALL(sub_10011693); /* 0x1009D080: call 0x10011693 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x10u; /* 0x1009D085: add esp, 0x10 */
    _flag_k = FK_ADD;
    /* test eax, eax */ /* 0x1009D088: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1009D0C9; /* 0x1009D08A: jne 0x1009d0c9 */
L_1009D08C:
    PUSH32(esp, esi); /* 0x1009D08C: push esi */
    RECOMP_CALL(sub_1000F1F3); /* 0x1009D08D: call 0x1000f1f3 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1009D092: pop ecx */
    ecx = MEM32(ebp + (-0x8)); /* 0x1009D093: mov ecx, dword ptr [ebp - 8] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx + 1; /* 0x1009D096: inc ecx */
    _flag_k = FK_INC;
    esi = esi + eax * 2; /* 0x1009D097: lea esi, [esi + eax*2] */
    MEM32(ebp + (-0x8)) = ecx; /* 0x1009D09A: mov dword ptr [ebp - 8], ecx */
    eax = MEM32(ebp + (-0x4)); /* 0x1009D09D: mov eax, dword ptr [ebp - 4] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 4; /* 0x1009D0A0: add eax, 4 */
    _flag_k = FK_ADD;
    /* cmp ecx, 7 */ /* 0x1009D0A3: cmp ecx, 7 */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(7);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    PUSH32(esp, 0x3Au); /* 0x1009D0A6: push 0x3a */
    MEM32(ebp + (-0x4)) = eax; /* 0x1009D0A8: mov dword ptr [ebp - 4], eax */
    ecx = POP32_VAL(esp); /* 0x1009D0AB: pop ecx */
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_1009D03A; /* 0x1009D0AC: jb 0x1009d03a */
L_1009D0AE:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1009D0AE: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM16(esi) = (uint16_t)(LO16(eax)); /* 0x1009D0B0: mov word ptr [esi], ax */
L_1009D0B3:
    /* cmp MEM8(ebp + (-0x10)), 0 */ /* 0x1009D0B3: cmp byte ptr [ebp - 0x10], 0 */
    _flag_a = (uint32_t)(MEM8(ebp + (-0x10))) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1009D0C0; /* 0x1009D0B7: je 0x1009d0c0 */
L_1009D0B9:
    eax = MEM32(ebp + (-0x14)); /* 0x1009D0B9: mov eax, dword ptr [ebp - 0x14] */
    _flag_a = (uint32_t)(MEM32(eax + 0x70)); _flag_b = (uint32_t)(0xFFFFFFFDu);
    MEM32(eax + 0x70) = MEM32(eax + 0x70) & 0xFFFFFFFDu; /* 0x1009D0BC: and dword ptr [eax + 0x70], 0xfffffffd */
    _cf = 0;
    _flag_k = FK_TEST;
L_1009D0C0:
    eax = edi; /* 0x1009D0C0: mov eax, edi */
    edi = POP32_VAL(esp); /* 0x1009D0C2: pop edi */
    esi = POP32_VAL(esp); /* 0x1009D0C3: pop esi */
    ebx = POP32_VAL(esp); /* 0x1009D0C4: pop ebx */
    esp = ebp; /* 0x1009D0C5: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x1009D0C7: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1009D0C8: ret  */
L_1009D0C9:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1009D0C9: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, eax); /* 0x1009D0CB: push eax */
    PUSH32(esp, eax); /* 0x1009D0CC: push eax */
    PUSH32(esp, eax); /* 0x1009D0CD: push eax */
    PUSH32(esp, eax); /* 0x1009D0CE: push eax */
    PUSH32(esp, eax); /* 0x1009D0CF: push eax */
    RECOMP_CALL(sub_100A469B); /* 0x1009D0D0: call 0x100a469b */
    RECOMP_FLAGS_IN();
    void_lift_trap(0x1009D0D5u, "int3 ");
    { RECOMP_REGS_OUT(); return; } /* end of function */
    RECOMP_REGS_OUT();
}

void sub_1009D0D6(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1009D0D6u);

L_1009D0D6:
    PUSH32(esp, 0); /* 0x1009D0D6: push 0 */
    RECOMP_CALL(sub_1009D0DF); /* 0x1009D0D8: call 0x1009d0df */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1009D0DD: pop ecx */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1009D0DE: ret  */
    RECOMP_REGS_OUT();
}

void sub_1009D0DF(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1009D0DFu);

L_1009D0DF:
    PUSH32(esp, ebp); /* 0x1009D0DF: push ebp */
    ebp = esp; /* 0x1009D0E0: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x1Cu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x1Cu; /* 0x1009D0E2: sub esp, 0x1c */
    _flag_k = FK_CMP;
    PUSH32(esp, ebx); /* 0x1009D0E5: push ebx */
    PUSH32(esp, esi); /* 0x1009D0E6: push esi */
    PUSH32(esp, edi); /* 0x1009D0E7: push edi */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x1009D0E8: push dword ptr [ebp + 8] */
    ecx = ebp + (-0x1C); /* 0x1009D0EB: lea ecx, [ebp - 0x1c] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ebx = 0; /* 0x1009D0EE: xor ebx, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_1000F764); /* 0x1009D0F0: call 0x1000f764 */
    RECOMP_FLAGS_IN();
    eax = MEM32(ebp + (-0x1C)); /* 0x1009D0F5: mov eax, dword ptr [ebp - 0x1c] */
    MEM32(ebp + (-0x4)) = 0xCu; /* 0x1009D0F8: mov dword ptr [ebp - 4], 0xc */
    eax = MEM32(eax + 0x9C); /* 0x1009D0FF: mov eax, dword ptr [eax + 0x9c] */
    MEM32(ebp + (-0xC)) = eax; /* 0x1009D105: mov dword ptr [ebp - 0xc], eax */
    edi = eax + 0xEC; /* 0x1009D108: lea edi, [eax + 0xec] */
L_1009D10E:
    PUSH32(esp, MEM32(edi + 0x30)); /* 0x1009D10E: push dword ptr [edi + 0x30] */
    RECOMP_CALL(sub_1000F1F3); /* 0x1009D111: call 0x1000f1f3 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, MEM32(edi)); /* 0x1009D116: push dword ptr [edi] */
    esi = eax; /* 0x1009D118: mov esi, eax */
    RECOMP_CALL(sub_1000F1F3); /* 0x1009D11A: call 0x1000f1f3 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + ebx; /* 0x1009D11F: add eax, ebx */
    _flag_k = FK_ADD;
    edi = edi + 0x4; /* 0x1009D121: lea edi, [edi + 4] */
    ebx = esi + 0x2; /* 0x1009D124: lea ebx, [esi + 2] */
    ecx = POP32_VAL(esp); /* 0x1009D127: pop ecx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ebx = ebx + eax; /* 0x1009D128: add ebx, eax */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(MEM32(ebp + (-0x4))); _flag_b = (uint32_t)(1);
    MEM32(ebp + (-0x4)) = MEM32(ebp + (-0x4)) - 1; /* 0x1009D12A: dec dword ptr [ebp - 4] */
    _flag_k = FK_DEC;
    ecx = POP32_VAL(esp); /* 0x1009D12D: pop ecx */
    RECOMP_BACKEDGE();
    if (/* dec result */ CMP_NE(_flag_a, _flag_b)) goto L_1009D10E; /* 0x1009D12E: jne 0x1009d10e */
L_1009D130:
    eax = ebx * 2 + 0x2; /* 0x1009D130: lea eax, [ebx*2 + 2] */
    PUSH32(esp, eax); /* 0x1009D137: push eax */
    RECOMP_CALL(sub_10012226); /* 0x1009D138: call 0x10012226 */
    RECOMP_FLAGS_IN();
    edi = eax; /* 0x1009D13D: mov edi, eax */
    ecx = POP32_VAL(esp); /* 0x1009D13F: pop ecx */
    /* test edi, edi */ /* 0x1009D140: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1009D1D5; /* 0x1009D142: je 0x1009d1d5 */
L_1009D148:
    eax = MEM32(ebp + (-0xC)); /* 0x1009D148: mov eax, dword ptr [ebp - 0xc] */
    esi = edi; /* 0x1009D14B: mov esi, edi */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x8))); _flag_b = (uint32_t)(0);
    MEM32(ebp + (-0x8)) = MEM32(ebp + (-0x8)) & 0; /* 0x1009D14D: and dword ptr [ebp - 8], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x11Cu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 0x11Cu; /* 0x1009D151: add eax, 0x11c */
    _flag_k = FK_ADD;
    PUSH32(esp, 0x3Au); /* 0x1009D156: push 0x3a */
    MEM32(ebp + (-0x4)) = eax; /* 0x1009D158: mov dword ptr [ebp - 4], eax */
    ecx = POP32_VAL(esp); /* 0x1009D15B: pop ecx */
L_1009D15C:
    MEM16(esi) = (uint16_t)(LO16(ecx)); /* 0x1009D15C: mov word ptr [esi], cx */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esi = esi + 2; /* 0x1009D15F: add esi, 2 */
    _flag_k = FK_ADD;
    PUSH32(esp, MEM32(eax + (-0x30))); /* 0x1009D162: push dword ptr [eax - 0x30] */
    ecx = esi; /* 0x1009D165: mov ecx, esi */
    eax = ebx; /* 0x1009D167: mov eax, ebx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ecx = ecx - edi; /* 0x1009D169: sub ecx, edi */
    _flag_k = FK_CMP;
    if (1u) _cf = (((ecx) >> 0) & 1u); /* 0x1009D16B: sar ecx, 1 */
    if (1u) { _flag_a = recomp_flags_pack(((uint32_t)((int32_t)ecx >> 1u)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ecx = (uint32_t)((int32_t)ecx >> 1u);
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - ecx; /* 0x1009D16D: sub eax, ecx */
    _flag_k = FK_CMP;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x1009D16F: inc eax */
    _flag_k = FK_INC;
    PUSH32(esp, eax); /* 0x1009D170: push eax */
    PUSH32(esp, esi); /* 0x1009D171: push esi */
    RECOMP_CALL(sub_10011693); /* 0x1009D172: call 0x10011693 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x1009D177: add esp, 0xc */
    _flag_k = FK_ADD;
    /* test eax, eax */ /* 0x1009D17A: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1009D1EB; /* 0x1009D17C: jne 0x1009d1eb */
L_1009D17E:
    PUSH32(esp, esi); /* 0x1009D17E: push esi */
    RECOMP_CALL(sub_1000F1F3); /* 0x1009D17F: call 0x1000f1f3 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0x3Au); /* 0x1009D184: push 0x3a */
    esi = esi + eax * 2; /* 0x1009D186: lea esi, [esi + eax*2] */
    eax = POP32_VAL(esp); /* 0x1009D189: pop eax */
    MEM16(esi) = (uint16_t)(LO16(eax)); /* 0x1009D18A: mov word ptr [esi], ax */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esi = esi + 2; /* 0x1009D18D: add esi, 2 */
    _flag_k = FK_ADD;
    eax = MEM32(ebp + (-0x4)); /* 0x1009D190: mov eax, dword ptr [ebp - 4] */
    ecx = esi; /* 0x1009D193: mov ecx, esi */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ecx = ecx - edi; /* 0x1009D195: sub ecx, edi */
    _flag_k = FK_CMP;
    if (1u) _cf = (((ecx) >> 0) & 1u); /* 0x1009D197: sar ecx, 1 */
    if (1u) { _flag_a = recomp_flags_pack(((uint32_t)((int32_t)ecx >> 1u)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ecx = (uint32_t)((int32_t)ecx >> 1u);
    PUSH32(esp, MEM32(eax)); /* 0x1009D199: push dword ptr [eax] */
    eax = ebx; /* 0x1009D19B: mov eax, ebx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - ecx; /* 0x1009D19D: sub eax, ecx */
    _flag_k = FK_CMP;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x1009D19F: inc eax */
    _flag_k = FK_INC;
    PUSH32(esp, eax); /* 0x1009D1A0: push eax */
    PUSH32(esp, esi); /* 0x1009D1A1: push esi */
    RECOMP_CALL(sub_10011693); /* 0x1009D1A2: call 0x10011693 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x10u; /* 0x1009D1A7: add esp, 0x10 */
    _flag_k = FK_ADD;
    /* test eax, eax */ /* 0x1009D1AA: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1009D1EB; /* 0x1009D1AC: jne 0x1009d1eb */
L_1009D1AE:
    PUSH32(esp, esi); /* 0x1009D1AE: push esi */
    RECOMP_CALL(sub_1000F1F3); /* 0x1009D1AF: call 0x1000f1f3 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1009D1B4: pop ecx */
    ecx = MEM32(ebp + (-0x8)); /* 0x1009D1B5: mov ecx, dword ptr [ebp - 8] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx + 1; /* 0x1009D1B8: inc ecx */
    _flag_k = FK_INC;
    esi = esi + eax * 2; /* 0x1009D1B9: lea esi, [esi + eax*2] */
    MEM32(ebp + (-0x8)) = ecx; /* 0x1009D1BC: mov dword ptr [ebp - 8], ecx */
    eax = MEM32(ebp + (-0x4)); /* 0x1009D1BF: mov eax, dword ptr [ebp - 4] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 4; /* 0x1009D1C2: add eax, 4 */
    _flag_k = FK_ADD;
    /* cmp ecx, 0xCu */ /* 0x1009D1C5: cmp ecx, 0xc */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    PUSH32(esp, 0x3Au); /* 0x1009D1C8: push 0x3a */
    MEM32(ebp + (-0x4)) = eax; /* 0x1009D1CA: mov dword ptr [ebp - 4], eax */
    ecx = POP32_VAL(esp); /* 0x1009D1CD: pop ecx */
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_1009D15C; /* 0x1009D1CE: jb 0x1009d15c */
L_1009D1D0:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1009D1D0: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM16(esi) = (uint16_t)(LO16(eax)); /* 0x1009D1D2: mov word ptr [esi], ax */
L_1009D1D5:
    /* cmp MEM8(ebp + (-0x10)), 0 */ /* 0x1009D1D5: cmp byte ptr [ebp - 0x10], 0 */
    _flag_a = (uint32_t)(MEM8(ebp + (-0x10))) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1009D1E2; /* 0x1009D1D9: je 0x1009d1e2 */
L_1009D1DB:
    eax = MEM32(ebp + (-0x14)); /* 0x1009D1DB: mov eax, dword ptr [ebp - 0x14] */
    _flag_a = (uint32_t)(MEM32(eax + 0x70)); _flag_b = (uint32_t)(0xFFFFFFFDu);
    MEM32(eax + 0x70) = MEM32(eax + 0x70) & 0xFFFFFFFDu; /* 0x1009D1DE: and dword ptr [eax + 0x70], 0xfffffffd */
    _cf = 0;
    _flag_k = FK_TEST;
L_1009D1E2:
    eax = edi; /* 0x1009D1E2: mov eax, edi */
    edi = POP32_VAL(esp); /* 0x1009D1E4: pop edi */
    esi = POP32_VAL(esp); /* 0x1009D1E5: pop esi */
    ebx = POP32_VAL(esp); /* 0x1009D1E6: pop ebx */
    esp = ebp; /* 0x1009D1E7: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x1009D1E9: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1009D1EA: ret  */
L_1009D1EB:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1009D1EB: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, eax); /* 0x1009D1ED: push eax */
    PUSH32(esp, eax); /* 0x1009D1EE: push eax */
    PUSH32(esp, eax); /* 0x1009D1EF: push eax */
    PUSH32(esp, eax); /* 0x1009D1F0: push eax */
    PUSH32(esp, eax); /* 0x1009D1F1: push eax */
    RECOMP_CALL(sub_100A469B); /* 0x1009D1F2: call 0x100a469b */
    RECOMP_FLAGS_IN();
    void_lift_trap(0x1009D1F7u, "int3 ");
    { RECOMP_REGS_OUT(); return; } /* end of function */
    RECOMP_REGS_OUT();
}

void sub_1009D1F8(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1009D1F8u);

L_1009D1F8:
    PUSH32(esp, ebp); /* 0x1009D1F8: push ebp */
    ebp = esp; /* 0x1009D1F9: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x2Cu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x2Cu; /* 0x1009D1FB: sub esp, 0x2c */
    _flag_k = FK_CMP;
    PUSH32(esp, ebx); /* 0x1009D1FE: push ebx */
    PUSH32(esp, esi); /* 0x1009D1FF: push esi */
    PUSH32(esp, edi); /* 0x1009D200: push edi */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x1009D201: push dword ptr [ebp + 8] */
    ecx = ebp + (-0x2C); /* 0x1009D204: lea ecx, [ebp - 0x2c] */
    RECOMP_CALL(sub_1000F764); /* 0x1009D207: call 0x1000f764 */
    RECOMP_FLAGS_IN();
    eax = MEM32(ebp + (-0x2C)); /* 0x1009D20C: mov eax, dword ptr [ebp - 0x2c] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    esi = 0; /* 0x1009D20F: xor esi, esi */
    _cf = 0;
    _flag_k = FK_TEST;
    ebx = esi; /* 0x1009D211: mov ebx, esi */
    MEM32(ebp + (-0x8)) = esi; /* 0x1009D213: mov dword ptr [ebp - 8], esi */
    edi = 0x164u; /* 0x1009D216: mov edi, 0x164 */
    MEM32(ebp + (-0x14)) = ebx; /* 0x1009D21B: mov dword ptr [ebp - 0x14], ebx */
    ecx = esi; /* 0x1009D21E: mov ecx, esi */
    MEM32(ebp + (-0x4)) = esi; /* 0x1009D220: mov dword ptr [ebp - 4], esi */
    eax = MEM32(eax + 0x9C); /* 0x1009D223: mov eax, dword ptr [eax + 0x9c] */
    MEM32(ebp + (-0xC)) = eax; /* 0x1009D229: mov dword ptr [ebp - 0xc], eax */
L_1009D22C:
    /* cmp ecx, 1 */ /* 0x1009D22C: cmp ecx, 1 */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_1009D25B; /* 0x1009D22F: jne 0x1009d25b */
L_1009D231:
    PUSH32(esp, edi); /* 0x1009D231: push edi */
    RECOMP_CALL(sub_10012226); /* 0x1009D232: call 0x10012226 */
    RECOMP_FLAGS_IN();
    ebx = eax; /* 0x1009D237: mov ebx, eax */
    MEM32(ebp + (-0x14)) = ebx; /* 0x1009D239: mov dword ptr [ebp - 0x14], ebx */
    ecx = POP32_VAL(esp); /* 0x1009D23C: pop ecx */
    /* test ebx, ebx */ /* 0x1009D23D: test ebx, ebx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ebx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1009D887; /* 0x1009D23F: je 0x1009d887 */
L_1009D245:
    PUSH32(esp, edi); /* 0x1009D245: push edi */
    PUSH32(esp, esi); /* 0x1009D246: push esi */
    PUSH32(esp, ebx); /* 0x1009D247: push ebx */
    RECOMP_CALL(sub_10011533); /* 0x1009D248: call 0x10011533 */
    RECOMP_FLAGS_IN();
    ecx = MEM32(ebp + (-0x4)); /* 0x1009D24D: mov ecx, dword ptr [ebp - 4] */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x1009D250: add esp, 0xc */
    _flag_k = FK_ADD;
    MEM32(ebp + (-0x8)) = edi; /* 0x1009D253: mov dword ptr [ebp - 8], edi */
    edi = 0x164u; /* 0x1009D256: mov edi, 0x164 */
L_1009D25B:
    eax = MEM32(ebp + (-0xC)); /* 0x1009D25B: mov eax, dword ptr [ebp - 0xc] */
    edx = eax; /* 0x1009D25E: mov edx, eax */
    MEM32(ebp + (-0x10)) = ebx; /* 0x1009D260: mov dword ptr [ebp - 0x10], ebx */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x10))); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    MEM32(ebp + (-0x10)) = MEM32(ebp + (-0x10)) - eax; /* 0x1009D263: sub dword ptr [ebp - 0x10], eax */
    _flag_k = FK_CMP;
    MEM32(ebp + (-0x1C)) = esi; /* 0x1009D266: mov dword ptr [ebp - 0x1c], esi */
    MEM32(ebp + (-0x18)) = edx; /* 0x1009D269: mov dword ptr [ebp - 0x18], edx */
L_1009D26C:
    /* cmp ecx, 1 */ /* 0x1009D26C: cmp ecx, 1 */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_1009D296; /* 0x1009D26F: jne 0x1009d296 */
L_1009D271:
    eax = MEM32(ebp + (-0x10)); /* 0x1009D271: mov eax, dword ptr [ebp - 0x10] */
    ecx = ebx + edi; /* 0x1009D274: lea ecx, [ebx + edi] */
    MEM32(edx + eax) = ecx; /* 0x1009D277: mov dword ptr [edx + eax], ecx */
    PUSH32(esp, MEM32(edx)); /* 0x1009D27A: push dword ptr [edx] */
    eax = MEM32(ebp + (-0x8)); /* 0x1009D27C: mov eax, dword ptr [ebp - 8] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - edi; /* 0x1009D27F: sub eax, edi */
    _flag_k = FK_CMP;
    PUSH32(esp, eax); /* 0x1009D281: push eax */
    PUSH32(esp, ecx); /* 0x1009D282: push ecx */
    RECOMP_CALL(sub_100147CD); /* 0x1009D283: call 0x100147cd */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x1009D288: add esp, 0xc */
    _flag_k = FK_ADD;
    /* test eax, eax */ /* 0x1009D28B: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1009D89D; /* 0x1009D28D: jne 0x1009d89d */
L_1009D293:
    edx = MEM32(ebp + (-0x18)); /* 0x1009D293: mov edx, dword ptr [ebp - 0x18] */
L_1009D296:
    PUSH32(esp, MEM32(edx)); /* 0x1009D296: push dword ptr [edx] */
    RECOMP_CALL(sub_100129AF); /* 0x1009D298: call 0x100129af */
    RECOMP_FLAGS_IN();
    edx = MEM32(ebp + (-0x18)); /* 0x1009D29D: mov edx, dword ptr [ebp - 0x18] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x1009D2A0: inc eax */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edi = edi + eax; /* 0x1009D2A1: add edi, eax */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edx = edx + 4; /* 0x1009D2A3: add edx, 4 */
    _flag_k = FK_ADD;
    eax = MEM32(ebp + (-0x1C)); /* 0x1009D2A6: mov eax, dword ptr [ebp - 0x1c] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x1009D2A9: inc eax */
    _flag_k = FK_INC;
    MEM32(ebp + (-0x18)) = edx; /* 0x1009D2AA: mov dword ptr [ebp - 0x18], edx */
    MEM32(ebp + (-0x1C)) = eax; /* 0x1009D2AD: mov dword ptr [ebp - 0x1c], eax */
    ecx = POP32_VAL(esp); /* 0x1009D2B0: pop ecx */
    ecx = MEM32(ebp + (-0x4)); /* 0x1009D2B1: mov ecx, dword ptr [ebp - 4] */
    /* cmp eax, 7 */ /* 0x1009D2B4: cmp eax, 7 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(7);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_1009D26C; /* 0x1009D2B7: jb 0x1009d26c */
L_1009D2B9:
    eax = MEM32(ebp + (-0xC)); /* 0x1009D2B9: mov eax, dword ptr [ebp - 0xc] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x1Cu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 0x1Cu; /* 0x1009D2BC: add eax, 0x1c */
    _flag_k = FK_ADD;
    MEM32(ebp + (-0x1C)) = esi; /* 0x1009D2BF: mov dword ptr [ebp - 0x1c], esi */
    MEM32(ebp + (-0x18)) = eax; /* 0x1009D2C2: mov dword ptr [ebp - 0x18], eax */
L_1009D2C5:
    /* cmp MEM32(ebp + (-0x4)), 1 */ /* 0x1009D2C5: cmp dword ptr [ebp - 4], 1 */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x4))); _flag_b = (uint32_t)(1);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_1009D2F0; /* 0x1009D2C9: jne 0x1009d2f0 */
L_1009D2CB:
    edx = MEM32(ebp + (-0x10)); /* 0x1009D2CB: mov edx, dword ptr [ebp - 0x10] */
    ecx = ebx + edi; /* 0x1009D2CE: lea ecx, [ebx + edi] */
    MEM32(edx + eax) = ecx; /* 0x1009D2D1: mov dword ptr [edx + eax], ecx */
    PUSH32(esp, MEM32(eax)); /* 0x1009D2D4: push dword ptr [eax] */
    eax = MEM32(ebp + (-0x8)); /* 0x1009D2D6: mov eax, dword ptr [ebp - 8] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - edi; /* 0x1009D2D9: sub eax, edi */
    _flag_k = FK_CMP;
    PUSH32(esp, eax); /* 0x1009D2DB: push eax */
    PUSH32(esp, ecx); /* 0x1009D2DC: push ecx */
    RECOMP_CALL(sub_100147CD); /* 0x1009D2DD: call 0x100147cd */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x1009D2E2: add esp, 0xc */
    _flag_k = FK_ADD;
    /* test eax, eax */ /* 0x1009D2E5: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1009D89D; /* 0x1009D2E7: jne 0x1009d89d */
L_1009D2ED:
    eax = MEM32(ebp + (-0x18)); /* 0x1009D2ED: mov eax, dword ptr [ebp - 0x18] */
L_1009D2F0:
    PUSH32(esp, MEM32(eax)); /* 0x1009D2F0: push dword ptr [eax] */
    RECOMP_CALL(sub_100129AF); /* 0x1009D2F2: call 0x100129af */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x1009D2F7: inc eax */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edi = edi + eax; /* 0x1009D2F8: add edi, eax */
    _flag_k = FK_ADD;
    eax = MEM32(ebp + (-0x18)); /* 0x1009D2FA: mov eax, dword ptr [ebp - 0x18] */
    ecx = POP32_VAL(esp); /* 0x1009D2FD: pop ecx */
    ecx = MEM32(ebp + (-0x1C)); /* 0x1009D2FE: mov ecx, dword ptr [ebp - 0x1c] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 4; /* 0x1009D301: add eax, 4 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx + 1; /* 0x1009D304: inc ecx */
    _flag_k = FK_INC;
    MEM32(ebp + (-0x18)) = eax; /* 0x1009D305: mov dword ptr [ebp - 0x18], eax */
    MEM32(ebp + (-0x1C)) = ecx; /* 0x1009D308: mov dword ptr [ebp - 0x1c], ecx */
    /* cmp ecx, 7 */ /* 0x1009D30B: cmp ecx, 7 */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(7);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_1009D2C5; /* 0x1009D30E: jb 0x1009d2c5 */
L_1009D310:
    eax = MEM32(ebp + (-0xC)); /* 0x1009D310: mov eax, dword ptr [ebp - 0xc] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x38u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 0x38u; /* 0x1009D313: add eax, 0x38 */
    _flag_k = FK_ADD;
    MEM32(ebp + (-0x1C)) = esi; /* 0x1009D316: mov dword ptr [ebp - 0x1c], esi */
    MEM32(ebp + (-0x18)) = eax; /* 0x1009D319: mov dword ptr [ebp - 0x18], eax */
L_1009D31C:
    /* cmp MEM32(ebp + (-0x4)), 1 */ /* 0x1009D31C: cmp dword ptr [ebp - 4], 1 */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x4))); _flag_b = (uint32_t)(1);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_1009D347; /* 0x1009D320: jne 0x1009d347 */
L_1009D322:
    edx = MEM32(ebp + (-0x10)); /* 0x1009D322: mov edx, dword ptr [ebp - 0x10] */
    ecx = ebx + edi; /* 0x1009D325: lea ecx, [ebx + edi] */
    MEM32(edx + eax) = ecx; /* 0x1009D328: mov dword ptr [edx + eax], ecx */
    PUSH32(esp, MEM32(eax)); /* 0x1009D32B: push dword ptr [eax] */
    eax = MEM32(ebp + (-0x8)); /* 0x1009D32D: mov eax, dword ptr [ebp - 8] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - edi; /* 0x1009D330: sub eax, edi */
    _flag_k = FK_CMP;
    PUSH32(esp, eax); /* 0x1009D332: push eax */
    PUSH32(esp, ecx); /* 0x1009D333: push ecx */
    RECOMP_CALL(sub_100147CD); /* 0x1009D334: call 0x100147cd */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x1009D339: add esp, 0xc */
    _flag_k = FK_ADD;
    /* test eax, eax */ /* 0x1009D33C: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1009D89D; /* 0x1009D33E: jne 0x1009d89d */
L_1009D344:
    eax = MEM32(ebp + (-0x18)); /* 0x1009D344: mov eax, dword ptr [ebp - 0x18] */
L_1009D347:
    PUSH32(esp, MEM32(eax)); /* 0x1009D347: push dword ptr [eax] */
    RECOMP_CALL(sub_100129AF); /* 0x1009D349: call 0x100129af */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x1009D34E: inc eax */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edi = edi + eax; /* 0x1009D34F: add edi, eax */
    _flag_k = FK_ADD;
    eax = MEM32(ebp + (-0x18)); /* 0x1009D351: mov eax, dword ptr [ebp - 0x18] */
    ecx = POP32_VAL(esp); /* 0x1009D354: pop ecx */
    ecx = MEM32(ebp + (-0x1C)); /* 0x1009D355: mov ecx, dword ptr [ebp - 0x1c] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 4; /* 0x1009D358: add eax, 4 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx + 1; /* 0x1009D35B: inc ecx */
    _flag_k = FK_INC;
    MEM32(ebp + (-0x18)) = eax; /* 0x1009D35C: mov dword ptr [ebp - 0x18], eax */
    MEM32(ebp + (-0x1C)) = ecx; /* 0x1009D35F: mov dword ptr [ebp - 0x1c], ecx */
    /* cmp ecx, 0xCu */ /* 0x1009D362: cmp ecx, 0xc */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_1009D31C; /* 0x1009D365: jb 0x1009d31c */
L_1009D367:
    eax = MEM32(ebp + (-0xC)); /* 0x1009D367: mov eax, dword ptr [ebp - 0xc] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x68u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 0x68u; /* 0x1009D36A: add eax, 0x68 */
    _flag_k = FK_ADD;
    MEM32(ebp + (-0x1C)) = esi; /* 0x1009D36D: mov dword ptr [ebp - 0x1c], esi */
    MEM32(ebp + (-0x18)) = eax; /* 0x1009D370: mov dword ptr [ebp - 0x18], eax */
L_1009D373:
    /* cmp MEM32(ebp + (-0x4)), 1 */ /* 0x1009D373: cmp dword ptr [ebp - 4], 1 */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x4))); _flag_b = (uint32_t)(1);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_1009D39E; /* 0x1009D377: jne 0x1009d39e */
L_1009D379:
    edx = MEM32(ebp + (-0x10)); /* 0x1009D379: mov edx, dword ptr [ebp - 0x10] */
    ecx = ebx + edi; /* 0x1009D37C: lea ecx, [ebx + edi] */
    MEM32(edx + eax) = ecx; /* 0x1009D37F: mov dword ptr [edx + eax], ecx */
    PUSH32(esp, MEM32(eax)); /* 0x1009D382: push dword ptr [eax] */
    eax = MEM32(ebp + (-0x8)); /* 0x1009D384: mov eax, dword ptr [ebp - 8] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - edi; /* 0x1009D387: sub eax, edi */
    _flag_k = FK_CMP;
    PUSH32(esp, eax); /* 0x1009D389: push eax */
    PUSH32(esp, ecx); /* 0x1009D38A: push ecx */
    RECOMP_CALL(sub_100147CD); /* 0x1009D38B: call 0x100147cd */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x1009D390: add esp, 0xc */
    _flag_k = FK_ADD;
    /* test eax, eax */ /* 0x1009D393: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1009D89D; /* 0x1009D395: jne 0x1009d89d */
L_1009D39B:
    eax = MEM32(ebp + (-0x18)); /* 0x1009D39B: mov eax, dword ptr [ebp - 0x18] */
L_1009D39E:
    PUSH32(esp, MEM32(eax)); /* 0x1009D39E: push dword ptr [eax] */
    RECOMP_CALL(sub_100129AF); /* 0x1009D3A0: call 0x100129af */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x1009D3A5: inc eax */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edi = edi + eax; /* 0x1009D3A6: add edi, eax */
    _flag_k = FK_ADD;
    eax = MEM32(ebp + (-0x18)); /* 0x1009D3A8: mov eax, dword ptr [ebp - 0x18] */
    ecx = POP32_VAL(esp); /* 0x1009D3AB: pop ecx */
    ecx = MEM32(ebp + (-0x1C)); /* 0x1009D3AC: mov ecx, dword ptr [ebp - 0x1c] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 4; /* 0x1009D3AF: add eax, 4 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx + 1; /* 0x1009D3B2: inc ecx */
    _flag_k = FK_INC;
    MEM32(ebp + (-0x18)) = eax; /* 0x1009D3B3: mov dword ptr [ebp - 0x18], eax */
    MEM32(ebp + (-0x1C)) = ecx; /* 0x1009D3B6: mov dword ptr [ebp - 0x1c], ecx */
    /* cmp ecx, 0xCu */ /* 0x1009D3B9: cmp ecx, 0xc */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_1009D373; /* 0x1009D3BC: jb 0x1009d373 */
L_1009D3BE:
    eax = MEM32(ebp + (-0xC)); /* 0x1009D3BE: mov eax, dword ptr [ebp - 0xc] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x98u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 0x98u; /* 0x1009D3C1: add eax, 0x98 */
    _flag_k = FK_ADD;
    MEM32(ebp + (-0x1C)) = esi; /* 0x1009D3C6: mov dword ptr [ebp - 0x1c], esi */
    MEM32(ebp + (-0x18)) = eax; /* 0x1009D3C9: mov dword ptr [ebp - 0x18], eax */
L_1009D3CC:
    /* cmp MEM32(ebp + (-0x4)), 1 */ /* 0x1009D3CC: cmp dword ptr [ebp - 4], 1 */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x4))); _flag_b = (uint32_t)(1);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_1009D3F7; /* 0x1009D3D0: jne 0x1009d3f7 */
L_1009D3D2:
    edx = MEM32(ebp + (-0x10)); /* 0x1009D3D2: mov edx, dword ptr [ebp - 0x10] */
    ecx = ebx + edi; /* 0x1009D3D5: lea ecx, [ebx + edi] */
    MEM32(edx + eax) = ecx; /* 0x1009D3D8: mov dword ptr [edx + eax], ecx */
    PUSH32(esp, MEM32(eax)); /* 0x1009D3DB: push dword ptr [eax] */
    eax = MEM32(ebp + (-0x8)); /* 0x1009D3DD: mov eax, dword ptr [ebp - 8] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - edi; /* 0x1009D3E0: sub eax, edi */
    _flag_k = FK_CMP;
    PUSH32(esp, eax); /* 0x1009D3E2: push eax */
    PUSH32(esp, ecx); /* 0x1009D3E3: push ecx */
    RECOMP_CALL(sub_100147CD); /* 0x1009D3E4: call 0x100147cd */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x1009D3E9: add esp, 0xc */
    _flag_k = FK_ADD;
    /* test eax, eax */ /* 0x1009D3EC: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1009D89D; /* 0x1009D3EE: jne 0x1009d89d */
L_1009D3F4:
    eax = MEM32(ebp + (-0x18)); /* 0x1009D3F4: mov eax, dword ptr [ebp - 0x18] */
L_1009D3F7:
    PUSH32(esp, MEM32(eax)); /* 0x1009D3F7: push dword ptr [eax] */
    RECOMP_CALL(sub_100129AF); /* 0x1009D3F9: call 0x100129af */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x1009D3FE: inc eax */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edi = edi + eax; /* 0x1009D3FF: add edi, eax */
    _flag_k = FK_ADD;
    eax = MEM32(ebp + (-0x18)); /* 0x1009D401: mov eax, dword ptr [ebp - 0x18] */
    ecx = POP32_VAL(esp); /* 0x1009D404: pop ecx */
    ecx = MEM32(ebp + (-0x1C)); /* 0x1009D405: mov ecx, dword ptr [ebp - 0x1c] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 4; /* 0x1009D408: add eax, 4 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx + 1; /* 0x1009D40B: inc ecx */
    _flag_k = FK_INC;
    MEM32(ebp + (-0x18)) = eax; /* 0x1009D40C: mov dword ptr [ebp - 0x18], eax */
    MEM32(ebp + (-0x1C)) = ecx; /* 0x1009D40F: mov dword ptr [ebp - 0x1c], ecx */
    /* cmp ecx, 2 */ /* 0x1009D412: cmp ecx, 2 */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_1009D3CC; /* 0x1009D415: jb 0x1009d3cc */
L_1009D417:
    /* cmp MEM32(ebp + (-0x4)), 1 */ /* 0x1009D417: cmp dword ptr [ebp - 4], 1 */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x4))); _flag_b = (uint32_t)(1);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_1009D446; /* 0x1009D41B: jne 0x1009d446 */
L_1009D41D:
    eax = MEM32(ebp + (-0xC)); /* 0x1009D41D: mov eax, dword ptr [ebp - 0xc] */
    ecx = ebx + edi; /* 0x1009D420: lea ecx, [ebx + edi] */
    MEM32(ebx + 0xA0) = ecx; /* 0x1009D423: mov dword ptr [ebx + 0xa0], ecx */
    PUSH32(esp, MEM32(eax + 0xA0)); /* 0x1009D429: push dword ptr [eax + 0xa0] */
    eax = MEM32(ebp + (-0x8)); /* 0x1009D42F: mov eax, dword ptr [ebp - 8] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - edi; /* 0x1009D432: sub eax, edi */
    _flag_k = FK_CMP;
    PUSH32(esp, eax); /* 0x1009D434: push eax */
    PUSH32(esp, ecx); /* 0x1009D435: push ecx */
    RECOMP_CALL(sub_100147CD); /* 0x1009D436: call 0x100147cd */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x1009D43B: add esp, 0xc */
    _flag_k = FK_ADD;
    /* test eax, eax */ /* 0x1009D43E: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1009D89D; /* 0x1009D440: jne 0x1009d89d */
L_1009D446:
    eax = MEM32(ebp + (-0xC)); /* 0x1009D446: mov eax, dword ptr [ebp - 0xc] */
    PUSH32(esp, MEM32(eax + 0xA0)); /* 0x1009D449: push dword ptr [eax + 0xa0] */
    RECOMP_CALL(sub_100129AF); /* 0x1009D44F: call 0x100129af */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1009D454: pop ecx */
    edx = eax + 0x1; /* 0x1009D455: lea edx, [eax + 1] */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edx = edx + edi; /* 0x1009D458: add edx, edi */
    _flag_k = FK_ADD;
    /* cmp MEM32(ebp + (-0x4)), 1 */ /* 0x1009D45A: cmp dword ptr [ebp - 4], 1 */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x4))); _flag_b = (uint32_t)(1);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    edi = MEM32(ebp + (-0xC)); /* 0x1009D45E: mov edi, dword ptr [ebp - 0xc] */
    MEM32(ebp + (-0x1C)) = edx; /* 0x1009D461: mov dword ptr [ebp - 0x1c], edx */
    if (CMP_NE(_flag_a, _flag_b)) goto L_1009D48C; /* 0x1009D464: jne 0x1009d48c */
L_1009D466:
    eax = MEM32(ebp + (-0x8)); /* 0x1009D466: mov eax, dword ptr [ebp - 8] */
    ecx = ebx + edx; /* 0x1009D469: lea ecx, [ebx + edx] */
    MEM32(ebx + 0xA4) = ecx; /* 0x1009D46C: mov dword ptr [ebx + 0xa4], ecx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - edx; /* 0x1009D472: sub eax, edx */
    _flag_k = FK_CMP;
    PUSH32(esp, MEM32(edi + 0xA4)); /* 0x1009D474: push dword ptr [edi + 0xa4] */
    PUSH32(esp, eax); /* 0x1009D47A: push eax */
    PUSH32(esp, ecx); /* 0x1009D47B: push ecx */
    RECOMP_CALL(sub_100147CD); /* 0x1009D47C: call 0x100147cd */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x1009D481: add esp, 0xc */
    _flag_k = FK_ADD;
    /* test eax, eax */ /* 0x1009D484: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1009D89D; /* 0x1009D486: jne 0x1009d89d */
L_1009D48C:
    PUSH32(esp, MEM32(edi + 0xA4)); /* 0x1009D48C: push dword ptr [edi + 0xa4] */
    RECOMP_CALL(sub_100129AF); /* 0x1009D492: call 0x100129af */
    RECOMP_FLAGS_IN();
    edx = MEM32(ebp + (-0x1C)); /* 0x1009D497: mov edx, dword ptr [ebp - 0x1c] */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(1);
    edx = edx + 1; /* 0x1009D49A: inc edx */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edx = edx + eax; /* 0x1009D49B: add edx, eax */
    _flag_k = FK_ADD;
    /* cmp MEM32(ebp + (-0x4)), 1 */ /* 0x1009D49D: cmp dword ptr [ebp - 4], 1 */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x4))); _flag_b = (uint32_t)(1);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    ecx = POP32_VAL(esp); /* 0x1009D4A1: pop ecx */
    MEM32(ebp + (-0x1C)) = edx; /* 0x1009D4A2: mov dword ptr [ebp - 0x1c], edx */
    if (CMP_NE(_flag_a, _flag_b)) goto L_1009D4CD; /* 0x1009D4A5: jne 0x1009d4cd */
L_1009D4A7:
    eax = MEM32(ebp + (-0x8)); /* 0x1009D4A7: mov eax, dword ptr [ebp - 8] */
    ecx = ebx + edx; /* 0x1009D4AA: lea ecx, [ebx + edx] */
    MEM32(ebx + 0xA8) = ecx; /* 0x1009D4AD: mov dword ptr [ebx + 0xa8], ecx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - edx; /* 0x1009D4B3: sub eax, edx */
    _flag_k = FK_CMP;
    PUSH32(esp, MEM32(edi + 0xA8)); /* 0x1009D4B5: push dword ptr [edi + 0xa8] */
    PUSH32(esp, eax); /* 0x1009D4BB: push eax */
    PUSH32(esp, ecx); /* 0x1009D4BC: push ecx */
    RECOMP_CALL(sub_100147CD); /* 0x1009D4BD: call 0x100147cd */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x1009D4C2: add esp, 0xc */
    _flag_k = FK_ADD;
    /* test eax, eax */ /* 0x1009D4C5: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1009D89D; /* 0x1009D4C7: jne 0x1009d89d */
L_1009D4CD:
    PUSH32(esp, MEM32(edi + 0xA8)); /* 0x1009D4CD: push dword ptr [edi + 0xa8] */
    RECOMP_CALL(sub_100129AF); /* 0x1009D4D3: call 0x100129af */
    RECOMP_FLAGS_IN();
    ebx = MEM32(ebp + (-0x1C)); /* 0x1009D4D8: mov ebx, dword ptr [ebp - 0x1c] */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(1);
    ebx = ebx + 1; /* 0x1009D4DB: inc ebx */
    _flag_k = FK_INC;
    ecx = POP32_VAL(esp); /* 0x1009D4DC: pop ecx */
    ecx = MEM32(ebp + (-0x4)); /* 0x1009D4DD: mov ecx, dword ptr [ebp - 4] */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ebx = ebx + eax; /* 0x1009D4E0: add ebx, eax */
    _flag_k = FK_ADD;
    /* cmp ecx, 1 */ /* 0x1009D4E2: cmp ecx, 1 */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_1009D4FE; /* 0x1009D4E5: jne 0x1009d4fe */
L_1009D4E7:
    eax = MEM32(edi + 0xAC); /* 0x1009D4E7: mov eax, dword ptr [edi + 0xac] */
    edi = MEM32(ebp + (-0x14)); /* 0x1009D4ED: mov edi, dword ptr [ebp - 0x14] */
    MEM32(edi + 0xAC) = eax; /* 0x1009D4F0: mov dword ptr [edi + 0xac], eax */
    MEM32(edi + 0xB0) = esi; /* 0x1009D4F6: mov dword ptr [edi + 0xb0], esi */
    goto L_1009D501; /* 0x1009D4FC: jmp 0x1009d501 */
L_1009D4FE:
    edi = MEM32(ebp + (-0x14)); /* 0x1009D4FE: mov edi, dword ptr [ebp - 0x14] */
L_1009D501:
    edx = MEM32(ebp + (-0xC)); /* 0x1009D501: mov edx, dword ptr [ebp - 0xc] */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(0xB4u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edx = edx + 0xB4u; /* 0x1009D504: add edx, 0xb4 */
    _flag_k = FK_ADD;
    MEM32(ebp + (-0x1C)) = esi; /* 0x1009D50A: mov dword ptr [ebp - 0x1c], esi */
    MEM32(ebp + (-0x18)) = edx; /* 0x1009D50D: mov dword ptr [ebp - 0x18], edx */
    goto L_1009D513; /* 0x1009D510: jmp 0x1009d513 */
L_1009D512:
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(1);
    ebx = ebx + 1; /* 0x1009D512: inc ebx */
    _flag_k = FK_INC;
L_1009D513:
    /* test LO8(ebx), 1 */ /* 0x1009D513: test bl, 1 */
    _flag_a = (uint32_t)(LO8(ebx)) << 24; _flag_b = (uint32_t)(1) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1009D512; /* 0x1009D516: jne 0x1009d512 */
L_1009D518:
    /* cmp ecx, 1 */ /* 0x1009D518: cmp ecx, 1 */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_1009D548; /* 0x1009D51B: jne 0x1009d548 */
L_1009D51D:
    eax = ebx; /* 0x1009D51D: mov eax, ebx */
    if (1u) _cf = (((eax) >> 0) & 1u); /* 0x1009D51F: shr eax, 1 */
    if (1u) { _flag_a = recomp_flags_pack((eax >> 1u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax >> 1u; /* 0x1009D51F: shr eax, 1 */
    ecx = edi + eax * 2; /* 0x1009D521: lea ecx, [edi + eax*2] */
    eax = MEM32(ebp + (-0x10)); /* 0x1009D524: mov eax, dword ptr [ebp - 0x10] */
    MEM32(edx + eax) = ecx; /* 0x1009D527: mov dword ptr [edx + eax], ecx */
    eax = MEM32(ebp + (-0x8)); /* 0x1009D52A: mov eax, dword ptr [ebp - 8] */
    PUSH32(esp, MEM32(edx)); /* 0x1009D52D: push dword ptr [edx] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - ebx; /* 0x1009D52F: sub eax, ebx */
    _flag_k = FK_CMP;
    if (1u) _cf = (((eax) >> 0) & 1u); /* 0x1009D531: shr eax, 1 */
    if (1u) { _flag_a = recomp_flags_pack((eax >> 1u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax >> 1u; /* 0x1009D531: shr eax, 1 */
    PUSH32(esp, eax); /* 0x1009D533: push eax */
    PUSH32(esp, ecx); /* 0x1009D534: push ecx */
    RECOMP_CALL(sub_10011693); /* 0x1009D535: call 0x10011693 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x1009D53A: add esp, 0xc */
    _flag_k = FK_ADD;
    /* test eax, eax */ /* 0x1009D53D: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1009D89D; /* 0x1009D53F: jne 0x1009d89d */
L_1009D545:
    edx = MEM32(ebp + (-0x18)); /* 0x1009D545: mov edx, dword ptr [ebp - 0x18] */
L_1009D548:
    PUSH32(esp, MEM32(edx)); /* 0x1009D548: push dword ptr [edx] */
    RECOMP_CALL(sub_1000F1F3); /* 0x1009D54A: call 0x1000f1f3 */
    RECOMP_FLAGS_IN();
    edx = MEM32(ebp + (-0x18)); /* 0x1009D54F: mov edx, dword ptr [ebp - 0x18] */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edx = edx + 4; /* 0x1009D552: add edx, 4 */
    _flag_k = FK_ADD;
    ecx = POP32_VAL(esp); /* 0x1009D555: pop ecx */
    ecx = MEM32(ebp + (-0x4)); /* 0x1009D556: mov ecx, dword ptr [ebp - 4] */
    ebx = ebx + eax * 2; /* 0x1009D559: lea ebx, [ebx + eax*2] */
    eax = MEM32(ebp + (-0x1C)); /* 0x1009D55C: mov eax, dword ptr [ebp - 0x1c] */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ebx = ebx + 2; /* 0x1009D55F: add ebx, 2 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x1009D562: inc eax */
    _flag_k = FK_INC;
    MEM32(ebp + (-0x18)) = edx; /* 0x1009D563: mov dword ptr [ebp - 0x18], edx */
    MEM32(ebp + (-0x1C)) = eax; /* 0x1009D566: mov dword ptr [ebp - 0x1c], eax */
    /* cmp eax, 7 */ /* 0x1009D569: cmp eax, 7 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(7);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_1009D513; /* 0x1009D56C: jb 0x1009d513 */
L_1009D56E:
    edx = MEM32(ebp + (-0xC)); /* 0x1009D56E: mov edx, dword ptr [ebp - 0xc] */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(0xD0u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edx = edx + 0xD0u; /* 0x1009D571: add edx, 0xd0 */
    _flag_k = FK_ADD;
    MEM32(ebp + (-0x1C)) = esi; /* 0x1009D577: mov dword ptr [ebp - 0x1c], esi */
    MEM32(ebp + (-0x18)) = edx; /* 0x1009D57A: mov dword ptr [ebp - 0x18], edx */
    goto L_1009D580; /* 0x1009D57D: jmp 0x1009d580 */
L_1009D57F:
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(1);
    ebx = ebx + 1; /* 0x1009D57F: inc ebx */
    _flag_k = FK_INC;
L_1009D580:
    /* test LO8(ebx), 1 */ /* 0x1009D580: test bl, 1 */
    _flag_a = (uint32_t)(LO8(ebx)) << 24; _flag_b = (uint32_t)(1) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1009D57F; /* 0x1009D583: jne 0x1009d57f */
L_1009D585:
    /* cmp MEM32(ebp + (-0x4)), 1 */ /* 0x1009D585: cmp dword ptr [ebp - 4], 1 */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x4))); _flag_b = (uint32_t)(1);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_1009D5B6; /* 0x1009D589: jne 0x1009d5b6 */
L_1009D58B:
    eax = ebx; /* 0x1009D58B: mov eax, ebx */
    if (1u) _cf = (((eax) >> 0) & 1u); /* 0x1009D58D: shr eax, 1 */
    if (1u) { _flag_a = recomp_flags_pack((eax >> 1u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax >> 1u; /* 0x1009D58D: shr eax, 1 */
    ecx = edi + eax * 2; /* 0x1009D58F: lea ecx, [edi + eax*2] */
    eax = MEM32(ebp + (-0x10)); /* 0x1009D592: mov eax, dword ptr [ebp - 0x10] */
    MEM32(edx + eax) = ecx; /* 0x1009D595: mov dword ptr [edx + eax], ecx */
    eax = MEM32(ebp + (-0x8)); /* 0x1009D598: mov eax, dword ptr [ebp - 8] */
    PUSH32(esp, MEM32(edx)); /* 0x1009D59B: push dword ptr [edx] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - ebx; /* 0x1009D59D: sub eax, ebx */
    _flag_k = FK_CMP;
    if (1u) _cf = (((eax) >> 0) & 1u); /* 0x1009D59F: shr eax, 1 */
    if (1u) { _flag_a = recomp_flags_pack((eax >> 1u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax >> 1u; /* 0x1009D59F: shr eax, 1 */
    PUSH32(esp, eax); /* 0x1009D5A1: push eax */
    PUSH32(esp, ecx); /* 0x1009D5A2: push ecx */
    RECOMP_CALL(sub_10011693); /* 0x1009D5A3: call 0x10011693 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x1009D5A8: add esp, 0xc */
    _flag_k = FK_ADD;
    /* test eax, eax */ /* 0x1009D5AB: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1009D89D; /* 0x1009D5AD: jne 0x1009d89d */
L_1009D5B3:
    edx = MEM32(ebp + (-0x18)); /* 0x1009D5B3: mov edx, dword ptr [ebp - 0x18] */
L_1009D5B6:
    PUSH32(esp, MEM32(edx)); /* 0x1009D5B6: push dword ptr [edx] */
    RECOMP_CALL(sub_1000F1F3); /* 0x1009D5B8: call 0x1000f1f3 */
    RECOMP_FLAGS_IN();
    edx = MEM32(ebp + (-0x18)); /* 0x1009D5BD: mov edx, dword ptr [ebp - 0x18] */
    ecx = POP32_VAL(esp); /* 0x1009D5C0: pop ecx */
    ecx = MEM32(ebp + (-0x1C)); /* 0x1009D5C1: mov ecx, dword ptr [ebp - 0x1c] */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edx = edx + 4; /* 0x1009D5C4: add edx, 4 */
    _flag_k = FK_ADD;
    ebx = ebx + eax * 2; /* 0x1009D5C7: lea ebx, [ebx + eax*2] */
    MEM32(ebp + (-0x18)) = edx; /* 0x1009D5CA: mov dword ptr [ebp - 0x18], edx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ebx = ebx + 2; /* 0x1009D5CD: add ebx, 2 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx + 1; /* 0x1009D5D0: inc ecx */
    _flag_k = FK_INC;
    MEM32(ebp + (-0x1C)) = ecx; /* 0x1009D5D1: mov dword ptr [ebp - 0x1c], ecx */
    /* cmp ecx, 7 */ /* 0x1009D5D4: cmp ecx, 7 */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(7);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_1009D580; /* 0x1009D5D7: jb 0x1009d580 */
L_1009D5D9:
    edx = MEM32(ebp + (-0xC)); /* 0x1009D5D9: mov edx, dword ptr [ebp - 0xc] */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(0xECu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edx = edx + 0xECu; /* 0x1009D5DC: add edx, 0xec */
    _flag_k = FK_ADD;
    MEM32(ebp + (-0x1C)) = esi; /* 0x1009D5E2: mov dword ptr [ebp - 0x1c], esi */
    MEM32(ebp + (-0x18)) = edx; /* 0x1009D5E5: mov dword ptr [ebp - 0x18], edx */
    goto L_1009D5EB; /* 0x1009D5E8: jmp 0x1009d5eb */
L_1009D5EA:
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(1);
    ebx = ebx + 1; /* 0x1009D5EA: inc ebx */
    _flag_k = FK_INC;
L_1009D5EB:
    /* test LO8(ebx), 1 */ /* 0x1009D5EB: test bl, 1 */
    _flag_a = (uint32_t)(LO8(ebx)) << 24; _flag_b = (uint32_t)(1) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1009D5EA; /* 0x1009D5EE: jne 0x1009d5ea */
L_1009D5F0:
    /* cmp MEM32(ebp + (-0x4)), 1 */ /* 0x1009D5F0: cmp dword ptr [ebp - 4], 1 */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x4))); _flag_b = (uint32_t)(1);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_1009D621; /* 0x1009D5F4: jne 0x1009d621 */
L_1009D5F6:
    eax = ebx; /* 0x1009D5F6: mov eax, ebx */
    if (1u) _cf = (((eax) >> 0) & 1u); /* 0x1009D5F8: shr eax, 1 */
    if (1u) { _flag_a = recomp_flags_pack((eax >> 1u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax >> 1u; /* 0x1009D5F8: shr eax, 1 */
    ecx = edi + eax * 2; /* 0x1009D5FA: lea ecx, [edi + eax*2] */
    eax = MEM32(ebp + (-0x10)); /* 0x1009D5FD: mov eax, dword ptr [ebp - 0x10] */
    MEM32(edx + eax) = ecx; /* 0x1009D600: mov dword ptr [edx + eax], ecx */
    eax = MEM32(ebp + (-0x8)); /* 0x1009D603: mov eax, dword ptr [ebp - 8] */
    PUSH32(esp, MEM32(edx)); /* 0x1009D606: push dword ptr [edx] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - ebx; /* 0x1009D608: sub eax, ebx */
    _flag_k = FK_CMP;
    if (1u) _cf = (((eax) >> 0) & 1u); /* 0x1009D60A: shr eax, 1 */
    if (1u) { _flag_a = recomp_flags_pack((eax >> 1u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax >> 1u; /* 0x1009D60A: shr eax, 1 */
    PUSH32(esp, eax); /* 0x1009D60C: push eax */
    PUSH32(esp, ecx); /* 0x1009D60D: push ecx */
    RECOMP_CALL(sub_10011693); /* 0x1009D60E: call 0x10011693 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x1009D613: add esp, 0xc */
    _flag_k = FK_ADD;
    /* test eax, eax */ /* 0x1009D616: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1009D89D; /* 0x1009D618: jne 0x1009d89d */
L_1009D61E:
    edx = MEM32(ebp + (-0x18)); /* 0x1009D61E: mov edx, dword ptr [ebp - 0x18] */
L_1009D621:
    PUSH32(esp, MEM32(edx)); /* 0x1009D621: push dword ptr [edx] */
    RECOMP_CALL(sub_1000F1F3); /* 0x1009D623: call 0x1000f1f3 */
    RECOMP_FLAGS_IN();
    edx = MEM32(ebp + (-0x18)); /* 0x1009D628: mov edx, dword ptr [ebp - 0x18] */
    ecx = POP32_VAL(esp); /* 0x1009D62B: pop ecx */
    ecx = MEM32(ebp + (-0x1C)); /* 0x1009D62C: mov ecx, dword ptr [ebp - 0x1c] */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edx = edx + 4; /* 0x1009D62F: add edx, 4 */
    _flag_k = FK_ADD;
    ebx = ebx + eax * 2; /* 0x1009D632: lea ebx, [ebx + eax*2] */
    MEM32(ebp + (-0x18)) = edx; /* 0x1009D635: mov dword ptr [ebp - 0x18], edx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ebx = ebx + 2; /* 0x1009D638: add ebx, 2 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx + 1; /* 0x1009D63B: inc ecx */
    _flag_k = FK_INC;
    MEM32(ebp + (-0x1C)) = ecx; /* 0x1009D63C: mov dword ptr [ebp - 0x1c], ecx */
    /* cmp ecx, 0xCu */ /* 0x1009D63F: cmp ecx, 0xc */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_1009D5EB; /* 0x1009D642: jb 0x1009d5eb */
L_1009D644:
    edx = MEM32(ebp + (-0xC)); /* 0x1009D644: mov edx, dword ptr [ebp - 0xc] */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(0x11Cu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edx = edx + 0x11Cu; /* 0x1009D647: add edx, 0x11c */
    _flag_k = FK_ADD;
    MEM32(ebp + (-0x1C)) = esi; /* 0x1009D64D: mov dword ptr [ebp - 0x1c], esi */
    MEM32(ebp + (-0x18)) = edx; /* 0x1009D650: mov dword ptr [ebp - 0x18], edx */
    goto L_1009D656; /* 0x1009D653: jmp 0x1009d656 */
L_1009D655:
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(1);
    ebx = ebx + 1; /* 0x1009D655: inc ebx */
    _flag_k = FK_INC;
L_1009D656:
    /* test LO8(ebx), 1 */ /* 0x1009D656: test bl, 1 */
    _flag_a = (uint32_t)(LO8(ebx)) << 24; _flag_b = (uint32_t)(1) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1009D655; /* 0x1009D659: jne 0x1009d655 */
L_1009D65B:
    /* cmp MEM32(ebp + (-0x4)), 1 */ /* 0x1009D65B: cmp dword ptr [ebp - 4], 1 */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x4))); _flag_b = (uint32_t)(1);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_1009D68C; /* 0x1009D65F: jne 0x1009d68c */
L_1009D661:
    eax = ebx; /* 0x1009D661: mov eax, ebx */
    if (1u) _cf = (((eax) >> 0) & 1u); /* 0x1009D663: shr eax, 1 */
    if (1u) { _flag_a = recomp_flags_pack((eax >> 1u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax >> 1u; /* 0x1009D663: shr eax, 1 */
    ecx = edi + eax * 2; /* 0x1009D665: lea ecx, [edi + eax*2] */
    eax = MEM32(ebp + (-0x10)); /* 0x1009D668: mov eax, dword ptr [ebp - 0x10] */
    MEM32(edx + eax) = ecx; /* 0x1009D66B: mov dword ptr [edx + eax], ecx */
    eax = MEM32(ebp + (-0x8)); /* 0x1009D66E: mov eax, dword ptr [ebp - 8] */
    PUSH32(esp, MEM32(edx)); /* 0x1009D671: push dword ptr [edx] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - ebx; /* 0x1009D673: sub eax, ebx */
    _flag_k = FK_CMP;
    if (1u) _cf = (((eax) >> 0) & 1u); /* 0x1009D675: shr eax, 1 */
    if (1u) { _flag_a = recomp_flags_pack((eax >> 1u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax >> 1u; /* 0x1009D675: shr eax, 1 */
    PUSH32(esp, eax); /* 0x1009D677: push eax */
    PUSH32(esp, ecx); /* 0x1009D678: push ecx */
    RECOMP_CALL(sub_10011693); /* 0x1009D679: call 0x10011693 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x1009D67E: add esp, 0xc */
    _flag_k = FK_ADD;
    /* test eax, eax */ /* 0x1009D681: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1009D89D; /* 0x1009D683: jne 0x1009d89d */
L_1009D689:
    edx = MEM32(ebp + (-0x18)); /* 0x1009D689: mov edx, dword ptr [ebp - 0x18] */
L_1009D68C:
    PUSH32(esp, MEM32(edx)); /* 0x1009D68C: push dword ptr [edx] */
    RECOMP_CALL(sub_1000F1F3); /* 0x1009D68E: call 0x1000f1f3 */
    RECOMP_FLAGS_IN();
    edx = MEM32(ebp + (-0x18)); /* 0x1009D693: mov edx, dword ptr [ebp - 0x18] */
    ecx = POP32_VAL(esp); /* 0x1009D696: pop ecx */
    ecx = MEM32(ebp + (-0x1C)); /* 0x1009D697: mov ecx, dword ptr [ebp - 0x1c] */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edx = edx + 4; /* 0x1009D69A: add edx, 4 */
    _flag_k = FK_ADD;
    ebx = ebx + eax * 2; /* 0x1009D69D: lea ebx, [ebx + eax*2] */
    MEM32(ebp + (-0x18)) = edx; /* 0x1009D6A0: mov dword ptr [ebp - 0x18], edx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ebx = ebx + 2; /* 0x1009D6A3: add ebx, 2 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx + 1; /* 0x1009D6A6: inc ecx */
    _flag_k = FK_INC;
    MEM32(ebp + (-0x1C)) = ecx; /* 0x1009D6A7: mov dword ptr [ebp - 0x1c], ecx */
    /* cmp ecx, 0xCu */ /* 0x1009D6AA: cmp ecx, 0xc */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_1009D656; /* 0x1009D6AD: jb 0x1009d656 */
L_1009D6AF:
    edx = MEM32(ebp + (-0xC)); /* 0x1009D6AF: mov edx, dword ptr [ebp - 0xc] */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(0x14Cu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edx = edx + 0x14Cu; /* 0x1009D6B2: add edx, 0x14c */
    _flag_k = FK_ADD;
    MEM32(ebp + (-0x1C)) = esi; /* 0x1009D6B8: mov dword ptr [ebp - 0x1c], esi */
    MEM32(ebp + (-0x18)) = edx; /* 0x1009D6BB: mov dword ptr [ebp - 0x18], edx */
    goto L_1009D6C1; /* 0x1009D6BE: jmp 0x1009d6c1 */
L_1009D6C0:
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(1);
    ebx = ebx + 1; /* 0x1009D6C0: inc ebx */
    _flag_k = FK_INC;
L_1009D6C1:
    /* test LO8(ebx), 1 */ /* 0x1009D6C1: test bl, 1 */
    _flag_a = (uint32_t)(LO8(ebx)) << 24; _flag_b = (uint32_t)(1) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1009D6C0; /* 0x1009D6C4: jne 0x1009d6c0 */
L_1009D6C6:
    /* cmp MEM32(ebp + (-0x4)), 1 */ /* 0x1009D6C6: cmp dword ptr [ebp - 4], 1 */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x4))); _flag_b = (uint32_t)(1);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_1009D6F7; /* 0x1009D6CA: jne 0x1009d6f7 */
L_1009D6CC:
    eax = ebx; /* 0x1009D6CC: mov eax, ebx */
    if (1u) _cf = (((eax) >> 0) & 1u); /* 0x1009D6CE: shr eax, 1 */
    if (1u) { _flag_a = recomp_flags_pack((eax >> 1u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax >> 1u; /* 0x1009D6CE: shr eax, 1 */
    ecx = edi + eax * 2; /* 0x1009D6D0: lea ecx, [edi + eax*2] */
    eax = MEM32(ebp + (-0x10)); /* 0x1009D6D3: mov eax, dword ptr [ebp - 0x10] */
    MEM32(edx + eax) = ecx; /* 0x1009D6D6: mov dword ptr [edx + eax], ecx */
    eax = MEM32(ebp + (-0x8)); /* 0x1009D6D9: mov eax, dword ptr [ebp - 8] */
    PUSH32(esp, MEM32(edx)); /* 0x1009D6DC: push dword ptr [edx] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - ebx; /* 0x1009D6DE: sub eax, ebx */
    _flag_k = FK_CMP;
    if (1u) _cf = (((eax) >> 0) & 1u); /* 0x1009D6E0: shr eax, 1 */
    if (1u) { _flag_a = recomp_flags_pack((eax >> 1u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax >> 1u; /* 0x1009D6E0: shr eax, 1 */
    PUSH32(esp, eax); /* 0x1009D6E2: push eax */
    PUSH32(esp, ecx); /* 0x1009D6E3: push ecx */
    RECOMP_CALL(sub_10011693); /* 0x1009D6E4: call 0x10011693 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x1009D6E9: add esp, 0xc */
    _flag_k = FK_ADD;
    /* test eax, eax */ /* 0x1009D6EC: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1009D89D; /* 0x1009D6EE: jne 0x1009d89d */
L_1009D6F4:
    edx = MEM32(ebp + (-0x18)); /* 0x1009D6F4: mov edx, dword ptr [ebp - 0x18] */
L_1009D6F7:
    PUSH32(esp, MEM32(edx)); /* 0x1009D6F7: push dword ptr [edx] */
    RECOMP_CALL(sub_1000F1F3); /* 0x1009D6F9: call 0x1000f1f3 */
    RECOMP_FLAGS_IN();
    edx = MEM32(ebp + (-0x18)); /* 0x1009D6FE: mov edx, dword ptr [ebp - 0x18] */
    ecx = POP32_VAL(esp); /* 0x1009D701: pop ecx */
    ecx = MEM32(ebp + (-0x1C)); /* 0x1009D702: mov ecx, dword ptr [ebp - 0x1c] */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edx = edx + 4; /* 0x1009D705: add edx, 4 */
    _flag_k = FK_ADD;
    ebx = ebx + eax * 2; /* 0x1009D708: lea ebx, [ebx + eax*2] */
    MEM32(ebp + (-0x18)) = edx; /* 0x1009D70B: mov dword ptr [ebp - 0x18], edx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ebx = ebx + 2; /* 0x1009D70E: add ebx, 2 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx + 1; /* 0x1009D711: inc ecx */
    _flag_k = FK_INC;
    MEM32(ebp + (-0x1C)) = ecx; /* 0x1009D712: mov dword ptr [ebp - 0x1c], ecx */
    /* cmp ecx, 2 */ /* 0x1009D715: cmp ecx, 2 */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_AE(_flag_a, _flag_b)) goto L_1009D71D; /* 0x1009D718: jae 0x1009d71d */
L_1009D71A:
    RECOMP_BACKEDGE();
    goto L_1009D6C1; /* 0x1009D71A: jmp 0x1009d6c1 */
L_1009D71C:
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(1);
    ebx = ebx + 1; /* 0x1009D71C: inc ebx */
    _flag_k = FK_INC;
L_1009D71D:
    /* test LO8(ebx), 1 */ /* 0x1009D71D: test bl, 1 */
    _flag_a = (uint32_t)(LO8(ebx)) << 24; _flag_b = (uint32_t)(1) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1009D71C; /* 0x1009D720: jne 0x1009d71c */
L_1009D722:
    /* cmp MEM32(ebp + (-0x4)), 1 */ /* 0x1009D722: cmp dword ptr [ebp - 4], 1 */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x4))); _flag_b = (uint32_t)(1);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_1009D759; /* 0x1009D726: jne 0x1009d759 */
L_1009D728:
    eax = ebx; /* 0x1009D728: mov eax, ebx */
    if (1u) _cf = (((eax) >> 0) & 1u); /* 0x1009D72A: shr eax, 1 */
    if (1u) { _flag_a = recomp_flags_pack((eax >> 1u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax >> 1u; /* 0x1009D72A: shr eax, 1 */
    ecx = edi + eax * 2; /* 0x1009D72C: lea ecx, [edi + eax*2] */
    eax = MEM32(ebp + (-0x8)); /* 0x1009D72F: mov eax, dword ptr [ebp - 8] */
    MEM32(edi + 0x154) = ecx; /* 0x1009D732: mov dword ptr [edi + 0x154], ecx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - ebx; /* 0x1009D738: sub eax, ebx */
    _flag_k = FK_CMP;
    edi = MEM32(ebp + (-0xC)); /* 0x1009D73A: mov edi, dword ptr [ebp - 0xc] */
    if (1u) _cf = (((eax) >> 0) & 1u); /* 0x1009D73D: shr eax, 1 */
    if (1u) { _flag_a = recomp_flags_pack((eax >> 1u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax >> 1u; /* 0x1009D73D: shr eax, 1 */
    PUSH32(esp, MEM32(edi + 0x154)); /* 0x1009D73F: push dword ptr [edi + 0x154] */
    PUSH32(esp, eax); /* 0x1009D745: push eax */
    PUSH32(esp, ecx); /* 0x1009D746: push ecx */
    RECOMP_CALL(sub_10011693); /* 0x1009D747: call 0x10011693 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x1009D74C: add esp, 0xc */
    _flag_k = FK_ADD;
    /* test eax, eax */ /* 0x1009D74F: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1009D89D; /* 0x1009D751: jne 0x1009d89d */
L_1009D757:
    goto L_1009D75C; /* 0x1009D757: jmp 0x1009d75c */
L_1009D759:
    edi = MEM32(ebp + (-0xC)); /* 0x1009D759: mov edi, dword ptr [ebp - 0xc] */
L_1009D75C:
    PUSH32(esp, MEM32(edi + 0x154)); /* 0x1009D75C: push dword ptr [edi + 0x154] */
    RECOMP_CALL(sub_1000F1F3); /* 0x1009D762: call 0x1000f1f3 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1009D767: pop ecx */
    edx = eax + 0x1; /* 0x1009D768: lea edx, [eax + 1] */
    edx = ebx + edx * 2; /* 0x1009D76B: lea edx, [ebx + edx*2] */
    MEM32(ebp + (-0x1C)) = edx; /* 0x1009D76E: mov dword ptr [ebp - 0x1c], edx */
    /* test LO8(edx), 1 */ /* 0x1009D771: test dl, 1 */
    _flag_a = (uint32_t)(LO8(edx)) << 24; _flag_b = (uint32_t)(1) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_1009D77F; /* 0x1009D774: je 0x1009d77f */
L_1009D776:
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(1);
    edx = edx + 1; /* 0x1009D776: inc edx */
    _flag_k = FK_INC;
    /* test LO8(edx), 1 */ /* 0x1009D777: test dl, 1 */
    _flag_a = (uint32_t)(LO8(edx)) << 24; _flag_b = (uint32_t)(1) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1009D776; /* 0x1009D77A: jne 0x1009d776 */
L_1009D77C:
    MEM32(ebp + (-0x1C)) = edx; /* 0x1009D77C: mov dword ptr [ebp - 0x1c], edx */
L_1009D77F:
    /* cmp MEM32(ebp + (-0x4)), 1 */ /* 0x1009D77F: cmp dword ptr [ebp - 4], 1 */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x4))); _flag_b = (uint32_t)(1);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    ebx = MEM32(ebp + (-0x14)); /* 0x1009D783: mov ebx, dword ptr [ebp - 0x14] */
    if (CMP_NE(_flag_a, _flag_b)) goto L_1009D7B4; /* 0x1009D786: jne 0x1009d7b4 */
L_1009D788:
    eax = edx; /* 0x1009D788: mov eax, edx */
    if (1u) _cf = (((eax) >> 0) & 1u); /* 0x1009D78A: shr eax, 1 */
    if (1u) { _flag_a = recomp_flags_pack((eax >> 1u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax >> 1u; /* 0x1009D78A: shr eax, 1 */
    ecx = ebx + eax * 2; /* 0x1009D78C: lea ecx, [ebx + eax*2] */
    eax = MEM32(ebp + (-0x8)); /* 0x1009D78F: mov eax, dword ptr [ebp - 8] */
    MEM32(ebx + 0x158) = ecx; /* 0x1009D792: mov dword ptr [ebx + 0x158], ecx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - edx; /* 0x1009D798: sub eax, edx */
    _flag_k = FK_CMP;
    PUSH32(esp, MEM32(edi + 0x158)); /* 0x1009D79A: push dword ptr [edi + 0x158] */
    if (1u) _cf = (((eax) >> 0) & 1u); /* 0x1009D7A0: shr eax, 1 */
    if (1u) { _flag_a = recomp_flags_pack((eax >> 1u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax >> 1u; /* 0x1009D7A0: shr eax, 1 */
    PUSH32(esp, eax); /* 0x1009D7A2: push eax */
    PUSH32(esp, ecx); /* 0x1009D7A3: push ecx */
    RECOMP_CALL(sub_10011693); /* 0x1009D7A4: call 0x10011693 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x1009D7A9: add esp, 0xc */
    _flag_k = FK_ADD;
    /* test eax, eax */ /* 0x1009D7AC: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1009D89D; /* 0x1009D7AE: jne 0x1009d89d */
L_1009D7B4:
    PUSH32(esp, MEM32(edi + 0x158)); /* 0x1009D7B4: push dword ptr [edi + 0x158] */
    RECOMP_CALL(sub_1000F1F3); /* 0x1009D7BA: call 0x1000f1f3 */
    RECOMP_FLAGS_IN();
    edx = MEM32(ebp + (-0x1C)); /* 0x1009D7BF: mov edx, dword ptr [ebp - 0x1c] */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edx = edx + 2; /* 0x1009D7C2: add edx, 2 */
    _flag_k = FK_ADD;
    ecx = POP32_VAL(esp); /* 0x1009D7C5: pop ecx */
    edx = edx + eax * 2; /* 0x1009D7C6: lea edx, [edx + eax*2] */
    MEM32(ebp + (-0x1C)) = edx; /* 0x1009D7C9: mov dword ptr [ebp - 0x1c], edx */
    /* test LO8(edx), 1 */ /* 0x1009D7CC: test dl, 1 */
    _flag_a = (uint32_t)(LO8(edx)) << 24; _flag_b = (uint32_t)(1) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_1009D7DA; /* 0x1009D7CF: je 0x1009d7da */
L_1009D7D1:
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(1);
    edx = edx + 1; /* 0x1009D7D1: inc edx */
    _flag_k = FK_INC;
    /* test LO8(edx), 1 */ /* 0x1009D7D2: test dl, 1 */
    _flag_a = (uint32_t)(LO8(edx)) << 24; _flag_b = (uint32_t)(1) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1009D7D1; /* 0x1009D7D5: jne 0x1009d7d1 */
L_1009D7D7:
    MEM32(ebp + (-0x1C)) = edx; /* 0x1009D7D7: mov dword ptr [ebp - 0x1c], edx */
L_1009D7DA:
    /* cmp MEM32(ebp + (-0x4)), 1 */ /* 0x1009D7DA: cmp dword ptr [ebp - 4], 1 */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x4))); _flag_b = (uint32_t)(1);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_1009D80C; /* 0x1009D7DE: jne 0x1009d80c */
L_1009D7E0:
    eax = edx; /* 0x1009D7E0: mov eax, edx */
    if (1u) _cf = (((eax) >> 0) & 1u); /* 0x1009D7E2: shr eax, 1 */
    if (1u) { _flag_a = recomp_flags_pack((eax >> 1u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax >> 1u; /* 0x1009D7E2: shr eax, 1 */
    ecx = ebx + eax * 2; /* 0x1009D7E4: lea ecx, [ebx + eax*2] */
    eax = MEM32(ebp + (-0x8)); /* 0x1009D7E7: mov eax, dword ptr [ebp - 8] */
    MEM32(ebx + 0x15C) = ecx; /* 0x1009D7EA: mov dword ptr [ebx + 0x15c], ecx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - edx; /* 0x1009D7F0: sub eax, edx */
    _flag_k = FK_CMP;
    PUSH32(esp, MEM32(edi + 0x15C)); /* 0x1009D7F2: push dword ptr [edi + 0x15c] */
    if (1u) _cf = (((eax) >> 0) & 1u); /* 0x1009D7F8: shr eax, 1 */
    if (1u) { _flag_a = recomp_flags_pack((eax >> 1u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax >> 1u; /* 0x1009D7F8: shr eax, 1 */
    PUSH32(esp, eax); /* 0x1009D7FA: push eax */
    PUSH32(esp, ecx); /* 0x1009D7FB: push ecx */
    RECOMP_CALL(sub_10011693); /* 0x1009D7FC: call 0x10011693 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x1009D801: add esp, 0xc */
    _flag_k = FK_ADD;
    /* test eax, eax */ /* 0x1009D804: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1009D89D; /* 0x1009D806: jne 0x1009d89d */
L_1009D80C:
    PUSH32(esp, MEM32(edi + 0x15C)); /* 0x1009D80C: push dword ptr [edi + 0x15c] */
    RECOMP_CALL(sub_1000F1F3); /* 0x1009D812: call 0x1000f1f3 */
    RECOMP_FLAGS_IN();
    edx = MEM32(ebp + (-0x1C)); /* 0x1009D817: mov edx, dword ptr [ebp - 0x1c] */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edx = edx + 2; /* 0x1009D81A: add edx, 2 */
    _flag_k = FK_ADD;
    ecx = POP32_VAL(esp); /* 0x1009D81D: pop ecx */
    edx = edx + eax * 2; /* 0x1009D81E: lea edx, [edx + eax*2] */
    MEM32(ebp + (-0x1C)) = edx; /* 0x1009D821: mov dword ptr [ebp - 0x1c], edx */
    /* test LO8(edx), 1 */ /* 0x1009D824: test dl, 1 */
    _flag_a = (uint32_t)(LO8(edx)) << 24; _flag_b = (uint32_t)(1) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_1009D832; /* 0x1009D827: je 0x1009d832 */
L_1009D829:
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(1);
    edx = edx + 1; /* 0x1009D829: inc edx */
    _flag_k = FK_INC;
    /* test LO8(edx), 1 */ /* 0x1009D82A: test dl, 1 */
    _flag_a = (uint32_t)(LO8(edx)) << 24; _flag_b = (uint32_t)(1) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1009D829; /* 0x1009D82D: jne 0x1009d829 */
L_1009D82F:
    MEM32(ebp + (-0x1C)) = edx; /* 0x1009D82F: mov dword ptr [ebp - 0x1c], edx */
L_1009D832:
    /* cmp MEM32(ebp + (-0x4)), 1 */ /* 0x1009D832: cmp dword ptr [ebp - 4], 1 */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x4))); _flag_b = (uint32_t)(1);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_1009D860; /* 0x1009D836: jne 0x1009d860 */
L_1009D838:
    eax = edx; /* 0x1009D838: mov eax, edx */
    if (1u) _cf = (((eax) >> 0) & 1u); /* 0x1009D83A: shr eax, 1 */
    if (1u) { _flag_a = recomp_flags_pack((eax >> 1u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax >> 1u; /* 0x1009D83A: shr eax, 1 */
    ecx = ebx + eax * 2; /* 0x1009D83C: lea ecx, [ebx + eax*2] */
    eax = MEM32(ebp + (-0x8)); /* 0x1009D83F: mov eax, dword ptr [ebp - 8] */
    MEM32(ebx + 0x160) = ecx; /* 0x1009D842: mov dword ptr [ebx + 0x160], ecx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - edx; /* 0x1009D848: sub eax, edx */
    _flag_k = FK_CMP;
    PUSH32(esp, MEM32(edi + 0x160)); /* 0x1009D84A: push dword ptr [edi + 0x160] */
    if (1u) _cf = (((eax) >> 0) & 1u); /* 0x1009D850: shr eax, 1 */
    if (1u) { _flag_a = recomp_flags_pack((eax >> 1u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax >> 1u; /* 0x1009D850: shr eax, 1 */
    PUSH32(esp, eax); /* 0x1009D852: push eax */
    PUSH32(esp, ecx); /* 0x1009D853: push ecx */
    RECOMP_CALL(sub_10011693); /* 0x1009D854: call 0x10011693 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x1009D859: add esp, 0xc */
    _flag_k = FK_ADD;
    /* test eax, eax */ /* 0x1009D85C: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1009D89D; /* 0x1009D85E: jne 0x1009d89d */
L_1009D860:
    PUSH32(esp, MEM32(edi + 0x160)); /* 0x1009D860: push dword ptr [edi + 0x160] */
    RECOMP_CALL(sub_1000F1F3); /* 0x1009D866: call 0x1000f1f3 */
    RECOMP_FLAGS_IN();
    edi = MEM32(ebp + (-0x1C)); /* 0x1009D86B: mov edi, dword ptr [ebp - 0x1c] */
    ecx = POP32_VAL(esp); /* 0x1009D86E: pop ecx */
    ecx = MEM32(ebp + (-0x4)); /* 0x1009D86F: mov ecx, dword ptr [ebp - 4] */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edi = edi + 2; /* 0x1009D872: add edi, 2 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx + 1; /* 0x1009D875: inc ecx */
    _flag_k = FK_INC;
    MEM32(ebp + (-0x4)) = ecx; /* 0x1009D876: mov dword ptr [ebp - 4], ecx */
    edi = edi + eax * 2; /* 0x1009D879: lea edi, [edi + eax*2] */
    /* cmp ecx, 2 */ /* 0x1009D87C: cmp ecx, 2 */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_L(_flag_a, _flag_b)) goto L_1009D22C; /* 0x1009D87F: jl 0x1009d22c */
L_1009D885:
    esi = ebx; /* 0x1009D885: mov esi, ebx */
L_1009D887:
    /* cmp MEM8(ebp + (-0x20)), 0 */ /* 0x1009D887: cmp byte ptr [ebp - 0x20], 0 */
    _flag_a = (uint32_t)(MEM8(ebp + (-0x20))) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1009D894; /* 0x1009D88B: je 0x1009d894 */
L_1009D88D:
    ecx = MEM32(ebp + (-0x24)); /* 0x1009D88D: mov ecx, dword ptr [ebp - 0x24] */
    _flag_a = (uint32_t)(MEM32(ecx + 0x70)); _flag_b = (uint32_t)(0xFFFFFFFDu);
    MEM32(ecx + 0x70) = MEM32(ecx + 0x70) & 0xFFFFFFFDu; /* 0x1009D890: and dword ptr [ecx + 0x70], 0xfffffffd */
    _cf = 0;
    _flag_k = FK_TEST;
L_1009D894:
    edi = POP32_VAL(esp); /* 0x1009D894: pop edi */
    eax = esi; /* 0x1009D895: mov eax, esi */
    esi = POP32_VAL(esp); /* 0x1009D897: pop esi */
    ebx = POP32_VAL(esp); /* 0x1009D898: pop ebx */
    esp = ebp; /* 0x1009D899: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x1009D89B: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1009D89C: ret  */
L_1009D89D:
    PUSH32(esp, esi); /* 0x1009D89D: push esi */
    PUSH32(esp, esi); /* 0x1009D89E: push esi */
    PUSH32(esp, esi); /* 0x1009D89F: push esi */
    PUSH32(esp, esi); /* 0x1009D8A0: push esi */
    PUSH32(esp, esi); /* 0x1009D8A1: push esi */
    RECOMP_CALL(sub_100A469B); /* 0x1009D8A2: call 0x100a469b */
    RECOMP_FLAGS_IN();
    void_lift_trap(0x1009D8A7u, "int3 ");
    { RECOMP_REGS_OUT(); return; } /* end of function */
    RECOMP_REGS_OUT();
}

void sub_1009D8A8(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1009D8A8u);

L_1009D8A8:
    PUSH32(esp, ebp); /* 0x1009D8A8: push ebp */
    ebp = esp; /* 0x1009D8A9: mov ebp, esp */
    PUSH32(esp, 0); /* 0x1009D8AB: push 0 */
    PUSH32(esp, MEM32(ebp + 0x18)); /* 0x1009D8AD: push dword ptr [ebp + 0x18] */
    PUSH32(esp, MEM32(ebp + 0x14)); /* 0x1009D8B0: push dword ptr [ebp + 0x14] */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x1009D8B3: push dword ptr [ebp + 0x10] */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x1009D8B6: push dword ptr [ebp + 0xc] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x1009D8B9: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_1009D8C6); /* 0x1009D8BC: call 0x1009d8c6 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x18u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x18u; /* 0x1009D8C1: add esp, 0x18 */
    _flag_k = FK_ADD;
    ebp = POP32_VAL(esp); /* 0x1009D8C4: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1009D8C5: ret  */
    RECOMP_REGS_OUT();
}

void sub_1009D8C6(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1009D8C6u);

L_1009D8C6:
    PUSH32(esp, ebp); /* 0x1009D8C6: push ebp */
    ebp = esp; /* 0x1009D8C7: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x1Cu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x1Cu; /* 0x1009D8C9: sub esp, 0x1c */
    _flag_k = FK_CMP;
    eax = MEM32(ebp + 0x8); /* 0x1009D8CC: mov eax, dword ptr [ebp + 8] */
    ecx = ebp + (-0x1C); /* 0x1009D8CF: lea ecx, [ebp - 0x1c] */
    PUSH32(esp, ebx); /* 0x1009D8D2: push ebx */
    PUSH32(esp, esi); /* 0x1009D8D3: push esi */
    PUSH32(esp, edi); /* 0x1009D8D4: push edi */
    PUSH32(esp, MEM32(ebp + 0x1C)); /* 0x1009D8D5: push dword ptr [ebp + 0x1c] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    esi = 0; /* 0x1009D8D8: xor esi, esi */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0xC)) = eax; /* 0x1009D8DA: mov dword ptr [ebp - 0xc], eax */
    RECOMP_CALL(sub_1000F764); /* 0x1009D8DD: call 0x1000f764 */
    RECOMP_FLAGS_IN();
    eax = MEM32(ebp + 0x8); /* 0x1009D8E2: mov eax, dword ptr [ebp + 8] */
    /* test eax, eax */ /* 0x1009D8E5: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1009D9E3; /* 0x1009D8E7: je 0x1009d9e3 */
L_1009D8ED:
    ebx = MEM32(ebp + 0xC); /* 0x1009D8ED: mov ebx, dword ptr [ebp + 0xc] */
    /* test ebx, ebx */ /* 0x1009D8F0: test ebx, ebx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ebx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1009D9E3; /* 0x1009D8F2: je 0x1009d9e3 */
L_1009D8F8:
    edi = MEM32(ebp + 0x10); /* 0x1009D8F8: mov edi, dword ptr [ebp + 0x10] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x1009D8FB: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM16(eax) = (uint16_t)(LO16(ecx)); /* 0x1009D8FD: mov word ptr [eax], cx */
    /* test edi, edi */ /* 0x1009D900: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1009D9E3; /* 0x1009D902: je 0x1009d9e3 */
L_1009D908:
    edx = MEM32(ebp + 0x18); /* 0x1009D908: mov edx, dword ptr [ebp + 0x18] */
    /* test edx, edx */ /* 0x1009D90B: test edx, edx */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(edx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1009D91B; /* 0x1009D90D: jne 0x1009d91b */
L_1009D90F:
    eax = MEM32(ebp + (-0x1C)); /* 0x1009D90F: mov eax, dword ptr [ebp - 0x1c] */
    edx = MEM32(eax + 0x9C); /* 0x1009D912: mov edx, dword ptr [eax + 0x9c] */
    MEM32(ebp + 0x18) = edx; /* 0x1009D918: mov dword ptr [ebp + 0x18], edx */
L_1009D91B:
    eax = ebx; /* 0x1009D91B: mov eax, ebx */
    MEM32(ebp + (-0x4)) = eax; /* 0x1009D91D: mov dword ptr [ebp - 4], eax */
    /* test ebx, ebx */ /* 0x1009D920: test ebx, ebx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ebx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1009D9C3; /* 0x1009D922: je 0x1009d9c3 */
L_1009D928:
    ecx = MEM32(ebp + 0x8); /* 0x1009D928: mov ecx, dword ptr [ebp + 8] */
L_1009D92B:
    ebx = (uint32_t)MEM16(edi); /* 0x1009D92B: movzx ebx, word ptr [edi] */
    MEM32(ebp + (-0x8)) = ebx; /* 0x1009D92E: mov dword ptr [ebp - 8], ebx */
    ebx = (uint32_t)LO16(ebx); /* 0x1009D931: movzx ebx, bx */
    /* test ebx, ebx */ /* 0x1009D934: test ebx, ebx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ebx);
    _cf = 0;
    _flag_k = FK_TEST;
    ebx = MEM32(ebp + 0xC); /* 0x1009D936: mov ebx, dword ptr [ebp + 0xc] */
    if (TEST_Z(_flag_a, _flag_b)) goto L_1009D9A9; /* 0x1009D939: je 0x1009d9a9 */
L_1009D93B:
    ebx = MEM32(ebp + (-0x8)); /* 0x1009D93B: mov ebx, dword ptr [ebp - 8] */
    /* cmp LO16(ebx), 0x25u */ /* 0x1009D93E: cmp bx, 0x25 */
    _flag_a = (uint32_t)(LO16(ebx)) << 16; _flag_b = (uint32_t)(0x25u) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    ebx = MEM32(ebp + 0xC); /* 0x1009D942: mov ebx, dword ptr [ebp + 0xc] */
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1009D962; /* 0x1009D945: je 0x1009d962 */
L_1009D947:
    eax = MEM32(ebp + (-0x8)); /* 0x1009D947: mov eax, dword ptr [ebp - 8] */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edi = edi + 2; /* 0x1009D94A: add edi, 2 */
    _flag_k = FK_ADD;
    MEM16(ecx) = (uint16_t)(LO16(eax)); /* 0x1009D94D: mov word ptr [ecx], ax */
    ecx = MEM32(ebp + 0x8); /* 0x1009D950: mov ecx, dword ptr [ebp + 8] */
    eax = MEM32(ebp + (-0x4)); /* 0x1009D953: mov eax, dword ptr [ebp - 4] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 2; /* 0x1009D956: add ecx, 2 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax - 1; /* 0x1009D959: dec eax */
    _flag_k = FK_DEC;
    MEM32(ebp + 0x8) = ecx; /* 0x1009D95A: mov dword ptr [ebp + 8], ecx */
    MEM32(ebp + (-0x4)) = eax; /* 0x1009D95D: mov dword ptr [ebp - 4], eax */
    goto L_1009D9A2; /* 0x1009D960: jmp 0x1009d9a2 */
L_1009D962:
    /* cmp MEM32(ebp + 0x14), esi */ /* 0x1009D962: cmp dword ptr [ebp + 0x14], esi */
    _flag_a = (uint32_t)(MEM32(ebp + 0x14)); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1009D9E3; /* 0x1009D965: je 0x1009d9e3 */
L_1009D967:
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edi = edi + 2; /* 0x1009D967: add edi, 2 */
    _flag_k = FK_ADD;
    eax = esi; /* 0x1009D96A: mov eax, esi */
    /* cmp MEM16(edi), 0x23u */ /* 0x1009D96C: cmp word ptr [edi], 0x23 */
    _flag_a = (uint32_t)(MEM16(edi)) << 16; _flag_b = (uint32_t)(0x23u) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    if (CMP_NE(_flag_a, _flag_b)) goto L_1009D978; /* 0x1009D970: jne 0x1009d978 */
L_1009D972:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1009D972: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x1009D974: inc eax */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edi = edi + 2; /* 0x1009D975: add edi, 2 */
    _flag_k = FK_ADD;
L_1009D978:
    PUSH32(esp, eax); /* 0x1009D978: push eax */
    PUSH32(esp, edx); /* 0x1009D979: push edx */
    eax = ebp + (-0x4); /* 0x1009D97A: lea eax, [ebp - 4] */
    PUSH32(esp, eax); /* 0x1009D97D: push eax */
    eax = ebp + 0x8; /* 0x1009D97E: lea eax, [ebp + 8] */
    PUSH32(esp, eax); /* 0x1009D981: push eax */
    PUSH32(esp, MEM32(ebp + 0x14)); /* 0x1009D982: push dword ptr [ebp + 0x14] */
    eax = (uint32_t)MEM16(edi); /* 0x1009D985: movzx eax, word ptr [edi] */
    PUSH32(esp, eax); /* 0x1009D988: push eax */
    eax = ebp + (-0x1C); /* 0x1009D989: lea eax, [ebp - 0x1c] */
    PUSH32(esp, eax); /* 0x1009D98C: push eax */
    RECOMP_CALL(sub_1009C584); /* 0x1009D98D: call 0x1009c584 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x1Cu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x1Cu; /* 0x1009D992: add esp, 0x1c */
    _flag_k = FK_ADD;
    /* test eax, eax */ /* 0x1009D995: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1009D9B9; /* 0x1009D997: je 0x1009d9b9 */
L_1009D999:
    ecx = MEM32(ebp + 0x8); /* 0x1009D999: mov ecx, dword ptr [ebp + 8] */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edi = edi + 2; /* 0x1009D99C: add edi, 2 */
    _flag_k = FK_ADD;
    eax = MEM32(ebp + (-0x4)); /* 0x1009D99F: mov eax, dword ptr [ebp - 4] */
L_1009D9A2:
    edx = MEM32(ebp + 0x18); /* 0x1009D9A2: mov edx, dword ptr [ebp + 0x18] */
    /* test eax, eax */ /* 0x1009D9A5: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1009D92B; /* 0x1009D9A7: jne 0x1009d92b */
L_1009D9A9:
    /* test eax, eax */ /* 0x1009D9A9: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1009D9C3; /* 0x1009D9AB: je 0x1009d9c3 */
L_1009D9AD:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1009D9AD: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    esi = ebx; /* 0x1009D9AF: mov esi, ebx */
    MEM16(ecx) = (uint16_t)(LO16(eax)); /* 0x1009D9B1: mov word ptr [ecx], ax */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(MEM32(ebp + (-0x4)));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esi = esi - MEM32(ebp + (-0x4)); /* 0x1009D9B4: sub esi, dword ptr [ebp - 4] */
    _flag_k = FK_CMP;
    goto L_1009D9F3; /* 0x1009D9B7: jmp 0x1009d9f3 */
L_1009D9B9:
    /* cmp MEM32(ebp + (-0x4)), esi */ /* 0x1009D9B9: cmp dword ptr [ebp - 4], esi */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x4))); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_1009D9C3; /* 0x1009D9BC: jbe 0x1009d9c3 */
L_1009D9BE:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1009D9BE: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x1009D9C0: inc eax */
    _flag_k = FK_INC;
    goto L_1009D9C5; /* 0x1009D9C1: jmp 0x1009d9c5 */
L_1009D9C3:
    eax = esi; /* 0x1009D9C3: mov eax, esi */
L_1009D9C5:
    ecx = MEM32(ebp + (-0xC)); /* 0x1009D9C5: mov ecx, dword ptr [ebp - 0xc] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edx = 0; /* 0x1009D9C8: xor edx, edx */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM16(ecx) = (uint16_t)(LO16(edx)); /* 0x1009D9CA: mov word ptr [ecx], dx */
    /* test eax, eax */ /* 0x1009D9CD: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1009D9E3; /* 0x1009D9CF: jne 0x1009d9e3 */
L_1009D9D1:
    /* cmp MEM32(ebp + (-0x4)), edx */ /* 0x1009D9D1: cmp dword ptr [ebp - 4], edx */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x4))); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_A(_flag_a, _flag_b)) goto L_1009D9E3; /* 0x1009D9D4: ja 0x1009d9e3 */
L_1009D9D6:
    RECOMP_CALL(sub_1001177D); /* 0x1009D9D6: call 0x1001177d */
    RECOMP_FLAGS_IN();
    MEM32(eax) = 0x22u; /* 0x1009D9DB: mov dword ptr [eax], 0x22 */
    goto L_1009D9F3; /* 0x1009D9E1: jmp 0x1009d9f3 */
L_1009D9E3:
    RECOMP_CALL(sub_1001177D); /* 0x1009D9E3: call 0x1001177d */
    RECOMP_FLAGS_IN();
    MEM32(eax) = 0x16u; /* 0x1009D9E8: mov dword ptr [eax], 0x16 */
    RECOMP_CALL(sub_100A4670); /* 0x1009D9EE: call 0x100a4670 */
    RECOMP_FLAGS_IN();
L_1009D9F3:
    /* cmp MEM8(ebp + (-0x10)), 0 */ /* 0x1009D9F3: cmp byte ptr [ebp - 0x10], 0 */
    _flag_a = (uint32_t)(MEM8(ebp + (-0x10))) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1009DA00; /* 0x1009D9F7: je 0x1009da00 */
L_1009D9F9:
    ecx = MEM32(ebp + (-0x14)); /* 0x1009D9F9: mov ecx, dword ptr [ebp - 0x14] */
    _flag_a = (uint32_t)(MEM32(ecx + 0x70)); _flag_b = (uint32_t)(0xFFFFFFFDu);
    MEM32(ecx + 0x70) = MEM32(ecx + 0x70) & 0xFFFFFFFDu; /* 0x1009D9FC: and dword ptr [ecx + 0x70], 0xfffffffd */
    _cf = 0;
    _flag_k = FK_TEST;
L_1009DA00:
    edi = POP32_VAL(esp); /* 0x1009DA00: pop edi */
    eax = esi; /* 0x1009DA01: mov eax, esi */
    esi = POP32_VAL(esp); /* 0x1009DA03: pop esi */
    ebx = POP32_VAL(esp); /* 0x1009DA04: pop ebx */
    esp = ebp; /* 0x1009DA05: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x1009DA07: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1009DA08: ret  */
    RECOMP_REGS_OUT();
}

void sub_1009DA09(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1009DA09u);

L_1009DA09:
    PUSH32(esp, ebp); /* 0x1009DA09: push ebp */
    ebp = esp; /* 0x1009DA0A: mov ebp, esp */
    PUSH32(esp, MEM32(ebp + 0x18)); /* 0x1009DA0C: push dword ptr [ebp + 0x18] */
    PUSH32(esp, 0); /* 0x1009DA0F: push 0 */
    PUSH32(esp, MEM32(ebp + 0x14)); /* 0x1009DA11: push dword ptr [ebp + 0x14] */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x1009DA14: push dword ptr [ebp + 0x10] */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x1009DA17: push dword ptr [ebp + 0xc] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x1009DA1A: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_1009D8C6); /* 0x1009DA1D: call 0x1009d8c6 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x18u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x18u; /* 0x1009DA22: add esp, 0x18 */
    _flag_k = FK_ADD;
    ebp = POP32_VAL(esp); /* 0x1009DA25: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1009DA26: ret  */
    RECOMP_REGS_OUT();
}

void sub_1009DA27(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1009DA27u);

L_1009DA27:
    PUSH32(esp, ebp); /* 0x1009DA27: push ebp */
    ebp = esp; /* 0x1009DA28: mov ebp, esp */
    PUSH32(esp, 0); /* 0x1009DA2A: push 0 */
    PUSH32(esp, 0); /* 0x1009DA2C: push 0 */
    PUSH32(esp, MEM32(ebp + 0x14)); /* 0x1009DA2E: push dword ptr [ebp + 0x14] */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x1009DA31: push dword ptr [ebp + 0x10] */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x1009DA34: push dword ptr [ebp + 0xc] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x1009DA37: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_1009D8C6); /* 0x1009DA3A: call 0x1009d8c6 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x18u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x18u; /* 0x1009DA3F: add esp, 0x18 */
    _flag_k = FK_ADD;
    ebp = POP32_VAL(esp); /* 0x1009DA42: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1009DA43: ret  */
    RECOMP_REGS_OUT();
}

void sub_1009DA44(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1009DA44u);

L_1009DA44:
    PUSH32(esp, ebp); /* 0x1009DA44: push ebp */
    ebp = esp; /* 0x1009DA45: mov ebp, esp */
    PUSH32(esp, ecx); /* 0x1009DA47: push ecx */
    PUSH32(esp, ebx); /* 0x1009DA48: push ebx */
    _df = 1; /* 0x1009DA49: cld  */
    eax = MEM32(ebp + 0xC); /* 0x1009DA4A: mov eax, dword ptr [ebp + 0xc] */
    ecx = MEM32(eax + 0x8); /* 0x1009DA4D: mov ecx, dword ptr [eax + 8] */
    _flag_a = (uint32_t)((ecx ^ MEM32(ebp + 0xC))); _flag_b = (uint32_t)((ecx ^ MEM32(ebp + 0xC)));
    ecx = ecx ^ MEM32(ebp + 0xC); /* 0x1009DA50: xor ecx, dword ptr [ebp + 0xc] */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_1000F7C6); /* 0x1009DA53: call 0x1000f7c6 */
    RECOMP_FLAGS_IN();
    eax = MEM32(ebp + 0x8); /* 0x1009DA58: mov eax, dword ptr [ebp + 8] */
    eax = MEM32(eax + 0x4); /* 0x1009DA5B: mov eax, dword ptr [eax + 4] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x66u);
    eax = eax & 0x66u; /* 0x1009DA5E: and eax, 0x66 */
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1009DA72; /* 0x1009DA61: je 0x1009da72 */
L_1009DA63:
    eax = MEM32(ebp + 0xC); /* 0x1009DA63: mov eax, dword ptr [ebp + 0xc] */
    MEM32(eax + 0x24) = 1; /* 0x1009DA66: mov dword ptr [eax + 0x24], 1 */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1009DA6D: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x1009DA6F: inc eax */
    _flag_k = FK_INC;
    goto L_1009DAD9; /* 0x1009DA70: jmp 0x1009dad9 */
L_1009DA72:
    PUSH32(esp, 1); /* 0x1009DA72: push 1 */
    eax = MEM32(ebp + 0xC); /* 0x1009DA74: mov eax, dword ptr [ebp + 0xc] */
    PUSH32(esp, MEM32(eax + 0x18)); /* 0x1009DA77: push dword ptr [eax + 0x18] */
    eax = MEM32(ebp + 0xC); /* 0x1009DA7A: mov eax, dword ptr [ebp + 0xc] */
    PUSH32(esp, MEM32(eax + 0x14)); /* 0x1009DA7D: push dword ptr [eax + 0x14] */
    eax = MEM32(ebp + 0xC); /* 0x1009DA80: mov eax, dword ptr [ebp + 0xc] */
    PUSH32(esp, MEM32(eax + 0xC)); /* 0x1009DA83: push dword ptr [eax + 0xc] */
    PUSH32(esp, 0); /* 0x1009DA86: push 0 */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x1009DA88: push dword ptr [ebp + 0x10] */
    eax = MEM32(ebp + 0xC); /* 0x1009DA8B: mov eax, dword ptr [ebp + 0xc] */
    PUSH32(esp, MEM32(eax + 0x10)); /* 0x1009DA8E: push dword ptr [eax + 0x10] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x1009DA91: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_1001963D); /* 0x1009DA94: call 0x1001963d */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x20u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x20u; /* 0x1009DA99: add esp, 0x20 */
    _flag_k = FK_ADD;
    eax = MEM32(ebp + 0xC); /* 0x1009DA9C: mov eax, dword ptr [ebp + 0xc] */
    /* cmp MEM32(eax + 0x24), 0 */ /* 0x1009DA9F: cmp dword ptr [eax + 0x24], 0 */
    _flag_a = (uint32_t)(MEM32(eax + 0x24)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_1009DAB0; /* 0x1009DAA3: jne 0x1009dab0 */
L_1009DAA5:
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x1009DAA5: push dword ptr [ebp + 8] */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x1009DAA8: push dword ptr [ebp + 0xc] */
    RECOMP_CALL(sub_1001937F); /* 0x1009DAAB: call 0x1001937f */
    RECOMP_FLAGS_IN();
L_1009DAB0:
    PUSH32(esp, 0); /* 0x1009DAB0: push 0 */
    PUSH32(esp, 0); /* 0x1009DAB2: push 0 */
    PUSH32(esp, 0); /* 0x1009DAB4: push 0 */
    PUSH32(esp, 0); /* 0x1009DAB6: push 0 */
    PUSH32(esp, 0); /* 0x1009DAB8: push 0 */
    eax = ebp + (-0x4); /* 0x1009DABA: lea eax, [ebp - 4] */
    PUSH32(esp, eax); /* 0x1009DABD: push eax */
    PUSH32(esp, 0x123u); /* 0x1009DABE: push 0x123 */
    RECOMP_CALL(sub_1009DADE); /* 0x1009DAC3: call 0x1009dade */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x1Cu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x1Cu; /* 0x1009DAC8: add esp, 0x1c */
    _flag_k = FK_ADD;
    eax = MEM32(ebp + (-0x4)); /* 0x1009DACB: mov eax, dword ptr [ebp - 4] */
    ebx = MEM32(ebp + 0xC); /* 0x1009DACE: mov ebx, dword ptr [ebp + 0xc] */
    esp = MEM32(ebx + 0x1C); /* 0x1009DAD1: mov esp, dword ptr [ebx + 0x1c] */
    ebp = MEM32(ebx + 0x20); /* 0x1009DAD4: mov ebp, dword ptr [ebx + 0x20] */
    { _itail_tgt = (uint32_t)(eax); goto _ljump; }
L_1009DAD9:
    ebx = POP32_VAL(esp); /* 0x1009DAD9: pop ebx */
    esp = ebp; /* 0x1009DADA: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x1009DADC: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1009DADD: ret  */
  _ljump:
    switch (_itail_tgt) {
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_1009DADE(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1009DADEu);

L_1009DADE:
    PUSH32(esp, ebp); /* 0x1009DADE: push ebp */
    ebp = esp; /* 0x1009DADF: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x38u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x38u; /* 0x1009DAE1: sub esp, 0x38 */
    _flag_k = FK_CMP;
    PUSH32(esp, ebx); /* 0x1009DAE4: push ebx */
    /* cmp MEM32(ebp + 0x8), 0x123u */ /* 0x1009DAE5: cmp dword ptr [ebp + 8], 0x123 */
    _flag_a = (uint32_t)(MEM32(ebp + 0x8)); _flag_b = (uint32_t)(0x123u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_1009DB00; /* 0x1009DAEC: jne 0x1009db00 */
L_1009DAEE:
    eax = 0x1009DB87u; /* 0x1009DAEE: mov eax, 0x1009db87 */
    ecx = MEM32(ebp + 0xC); /* 0x1009DAF3: mov ecx, dword ptr [ebp + 0xc] */
    MEM32(ecx) = eax; /* 0x1009DAF6: mov dword ptr [ecx], eax */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1009DAF8: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x1009DAFA: inc eax */
    _flag_k = FK_INC;
    goto L_1009DBB0; /* 0x1009DAFB: jmp 0x1009dbb0 */
L_1009DB00:
    _flag_a = (uint32_t)(MEM32(ebp + (-0x38))); _flag_b = (uint32_t)(0);
    MEM32(ebp + (-0x38)) = MEM32(ebp + (-0x38)) & 0; /* 0x1009DB00: and dword ptr [ebp - 0x38], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x34)) = 0x1009DA44u; /* 0x1009DB04: mov dword ptr [ebp - 0x34], 0x1009da44 */
    eax = MEM32(0x100DF7B8); /* 0x1009DB0B: mov eax, dword ptr [0x100df7b8] */
    ecx = ebp + (-0x38); /* 0x1009DB10: lea ecx, [ebp - 0x38] */
    _flag_a = (uint32_t)((eax ^ ecx)); _flag_b = (uint32_t)((eax ^ ecx));
    eax = eax ^ ecx; /* 0x1009DB13: xor eax, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x30)) = eax; /* 0x1009DB15: mov dword ptr [ebp - 0x30], eax */
    eax = MEM32(ebp + 0x18); /* 0x1009DB18: mov eax, dword ptr [ebp + 0x18] */
    MEM32(ebp + (-0x2C)) = eax; /* 0x1009DB1B: mov dword ptr [ebp - 0x2c], eax */
    eax = MEM32(ebp + 0xC); /* 0x1009DB1E: mov eax, dword ptr [ebp + 0xc] */
    MEM32(ebp + (-0x28)) = eax; /* 0x1009DB21: mov dword ptr [ebp - 0x28], eax */
    eax = MEM32(ebp + 0x1C); /* 0x1009DB24: mov eax, dword ptr [ebp + 0x1c] */
    MEM32(ebp + (-0x24)) = eax; /* 0x1009DB27: mov dword ptr [ebp - 0x24], eax */
    eax = MEM32(ebp + 0x20); /* 0x1009DB2A: mov eax, dword ptr [ebp + 0x20] */
    MEM32(ebp + (-0x20)) = eax; /* 0x1009DB2D: mov dword ptr [ebp - 0x20], eax */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x1C))); _flag_b = (uint32_t)(0);
    MEM32(ebp + (-0x1C)) = MEM32(ebp + (-0x1C)) & 0; /* 0x1009DB30: and dword ptr [ebp - 0x1c], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(MEM32(ebp + (-0x18))); _flag_b = (uint32_t)(0);
    MEM32(ebp + (-0x18)) = MEM32(ebp + (-0x18)) & 0; /* 0x1009DB34: and dword ptr [ebp - 0x18], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(MEM32(ebp + (-0x14))); _flag_b = (uint32_t)(0);
    MEM32(ebp + (-0x14)) = MEM32(ebp + (-0x14)) & 0; /* 0x1009DB38: and dword ptr [ebp - 0x14], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x1C)) = esp; /* 0x1009DB3C: mov dword ptr [ebp - 0x1c], esp */
    MEM32(ebp + (-0x18)) = ebp; /* 0x1009DB3F: mov dword ptr [ebp - 0x18], ebp */
    eax = MEM32(FS_BASE + (0)); /* 0x1009DB42: mov eax, dword ptr fs:[0] */
    MEM32(ebp + (-0x38)) = eax; /* 0x1009DB48: mov dword ptr [ebp - 0x38], eax */
    eax = ebp + (-0x38); /* 0x1009DB4B: lea eax, [ebp - 0x38] */
    MEM32(FS_BASE + (0)) = eax; /* 0x1009DB4E: mov dword ptr fs:[0], eax */
    MEM32(ebp + (-0x4)) = 1; /* 0x1009DB54: mov dword ptr [ebp - 4], 1 */
    eax = MEM32(ebp + 0x8); /* 0x1009DB5B: mov eax, dword ptr [ebp + 8] */
    MEM32(ebp + (-0x10)) = eax; /* 0x1009DB5E: mov dword ptr [ebp - 0x10], eax */
    eax = MEM32(ebp + 0x10); /* 0x1009DB61: mov eax, dword ptr [ebp + 0x10] */
    MEM32(ebp + (-0xC)) = eax; /* 0x1009DB64: mov dword ptr [ebp - 0xc], eax */
    RECOMP_CALL(sub_1000F750); /* 0x1009DB67: call 0x1000f750 */
    RECOMP_FLAGS_IN();
    eax = MEM32(eax + 0x80); /* 0x1009DB6C: mov eax, dword ptr [eax + 0x80] */
    MEM32(ebp + (-0x8)) = eax; /* 0x1009DB72: mov dword ptr [ebp - 8], eax */
    eax = ebp + (-0x10); /* 0x1009DB75: lea eax, [ebp - 0x10] */
    PUSH32(esp, eax); /* 0x1009DB78: push eax */
    eax = MEM32(ebp + 0x8); /* 0x1009DB79: mov eax, dword ptr [ebp + 8] */
    PUSH32(esp, MEM32(eax)); /* 0x1009DB7C: push dword ptr [eax] */
    RECOMP_ICALL(MEM32(ebp + (-0x8))); /* 0x1009DB7E: call dword ptr [ebp - 8] */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1009DB81: pop ecx */
    ecx = POP32_VAL(esp); /* 0x1009DB82: pop ecx */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x4))); _flag_b = (uint32_t)(0);
    MEM32(ebp + (-0x4)) = MEM32(ebp + (-0x4)) & 0; /* 0x1009DB83: and dword ptr [ebp - 4], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp MEM32(ebp + (-0x14)), 0 */ /* 0x1009DB87: cmp dword ptr [ebp - 0x14], 0 */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x14))); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1009DBA4; /* 0x1009DB8B: je 0x1009dba4 */
L_1009DB8D:
    ebx = MEM32(FS_BASE + (0)); /* 0x1009DB8D: mov ebx, dword ptr fs:[0] */
    eax = MEM32(ebx); /* 0x1009DB94: mov eax, dword ptr [ebx] */
    ebx = MEM32(ebp + (-0x38)); /* 0x1009DB96: mov ebx, dword ptr [ebp - 0x38] */
    MEM32(ebx) = eax; /* 0x1009DB99: mov dword ptr [ebx], eax */
    MEM32(FS_BASE + (0)) = ebx; /* 0x1009DB9B: mov dword ptr fs:[0], ebx */
    goto L_1009DBAD; /* 0x1009DBA2: jmp 0x1009dbad */
L_1009DBA4:
    eax = MEM32(ebp + (-0x38)); /* 0x1009DBA4: mov eax, dword ptr [ebp - 0x38] */
    MEM32(FS_BASE + (0)) = eax; /* 0x1009DBA7: mov dword ptr fs:[0], eax */
L_1009DBAD:
    eax = MEM32(ebp + (-0x4)); /* 0x1009DBAD: mov eax, dword ptr [ebp - 4] */
L_1009DBB0:
    ebx = POP32_VAL(esp); /* 0x1009DBB0: pop ebx */
    esp = ebp; /* 0x1009DBB1: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x1009DBB3: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1009DBB4: ret  */
    RECOMP_REGS_OUT();
}

void sub_1009DB87(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1009DB87u);

L_1009DB87:
    /* cmp MEM32(ebp + (-0x14)), 0 */ /* 0x1009DB87: cmp dword ptr [ebp - 0x14], 0 */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x14))); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1009DBA4; /* 0x1009DB8B: je 0x1009dba4 */
L_1009DB8D:
    ebx = MEM32(FS_BASE + (0)); /* 0x1009DB8D: mov ebx, dword ptr fs:[0] */
    eax = MEM32(ebx); /* 0x1009DB94: mov eax, dword ptr [ebx] */
    ebx = MEM32(ebp + (-0x38)); /* 0x1009DB96: mov ebx, dword ptr [ebp - 0x38] */
    MEM32(ebx) = eax; /* 0x1009DB99: mov dword ptr [ebx], eax */
    MEM32(FS_BASE + (0)) = ebx; /* 0x1009DB9B: mov dword ptr fs:[0], ebx */
    goto L_1009DBAD; /* 0x1009DBA2: jmp 0x1009dbad */
L_1009DBA4:
    eax = MEM32(ebp + (-0x38)); /* 0x1009DBA4: mov eax, dword ptr [ebp - 0x38] */
    MEM32(FS_BASE + (0)) = eax; /* 0x1009DBA7: mov dword ptr fs:[0], eax */
L_1009DBAD:
    eax = MEM32(ebp + (-0x4)); /* 0x1009DBAD: mov eax, dword ptr [ebp - 4] */
    ebx = POP32_VAL(esp); /* 0x1009DBB0: pop ebx */
    esp = ebp; /* 0x1009DBB1: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x1009DBB3: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1009DBB4: ret  */
    RECOMP_REGS_OUT();
}

void sub_1009DBB5(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1009DBB5u);

L_1009DBB5:
    PUSH32(esp, ebp); /* 0x1009DBB5: push ebp */
    ebp = esp; /* 0x1009DBB6: mov ebp, esp */
    eax = MEM32(ebp + 0x8); /* 0x1009DBB8: mov eax, dword ptr [ebp + 8] */
    PUSH32(esp, MEM32(eax + 0x1C)); /* 0x1009DBBB: push dword ptr [eax + 0x1c] */
    PUSH32(esp, MEM32(eax + 0x28)); /* 0x1009DBBE: push dword ptr [eax + 0x28] */
    PUSH32(esp, 0); /* 0x1009DBC1: push 0 */
    PUSH32(esp, MEM32(eax + 0x18)); /* 0x1009DBC3: push dword ptr [eax + 0x18] */
    RECOMP_CALL(sub_100196E4); /* 0x1009DBC6: call 0x100196e4 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x10u; /* 0x1009DBCB: add esp, 0x10 */
    _flag_k = FK_ADD;
    ebp = POP32_VAL(esp); /* 0x1009DBCE: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x1009DBCF: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_1009DBD2(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1009DBD2u);

L_1009DBD2:
    PUSH32(esp, 8); /* 0x1009DBD2: push 8 */
    PUSH32(esp, 0x1009DC10u); /* 0x1009DBD4: push 0x1009dc10 */
    RECOMP_CALL(sub_1000ED7E); /* 0x1009DBD9: call 0x1000ed7e */
    RECOMP_FLAGS_IN();
    PUSH32(esp, MEM32(0x100E0ED0)); /* 0x1009DBDE: push dword ptr [0x100e0ed0] */
    RECOMP_ICALL(MEM32(0x100E5004)); /* 0x1009DBE4: call dword ptr [0x100e5004] */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x1009DBEA: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1009DC04; /* 0x1009DBEC: je 0x1009dc04 */
L_1009DBEE:
    _flag_a = (uint32_t)(MEM32(ebp + (-0x4))); _flag_b = (uint32_t)(0);
    MEM32(ebp + (-0x4)) = MEM32(ebp + (-0x4)) & 0; /* 0x1009DBEE: and dword ptr [ebp - 4], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_ICALL(eax); /* 0x1009DBF2: call eax */
    RECOMP_FLAGS_IN();
    goto L_1009DBFD; /* 0x1009DBF4: jmp 0x1009dbfd */
L_1009DBFD:
    MEM32(ebp + (-0x4)) = 0xFFFFFFFEu; /* 0x1009DBFD: mov dword ptr [ebp - 4], 0xfffffffe */
L_1009DC04:
    RECOMP_CALL(sub_1009DC2C); /* 0x1009DC04: call 0x1009dc2c */
    RECOMP_FLAGS_IN();
    void_lift_trap(0x1009DC09u, "int3 ");
    { RECOMP_REGS_OUT(); return; } /* end of function */
    RECOMP_REGS_OUT();
}

void sub_1009DC2C(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1009DC2Cu);

L_1009DC2C:
    PUSH32(esp, 8); /* 0x1009DC2C: push 8 */
    PUSH32(esp, 0x1009DC60u); /* 0x1009DC2E: push 0x1009dc60 */
    RECOMP_CALL(sub_1000ED7E); /* 0x1009DC33: call 0x1000ed7e */
    RECOMP_FLAGS_IN();
    RECOMP_CALL(sub_1000F750); /* 0x1009DC38: call 0x1000f750 */
    RECOMP_FLAGS_IN();
    eax = MEM32(eax + 0x78); /* 0x1009DC3D: mov eax, dword ptr [eax + 0x78] */
    /* test eax, eax */ /* 0x1009DC40: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1009DC5A; /* 0x1009DC42: je 0x1009dc5a */
L_1009DC44:
    _flag_a = (uint32_t)(MEM32(ebp + (-0x4))); _flag_b = (uint32_t)(0);
    MEM32(ebp + (-0x4)) = MEM32(ebp + (-0x4)) & 0; /* 0x1009DC44: and dword ptr [ebp - 4], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_ICALL(eax); /* 0x1009DC48: call eax */
    RECOMP_FLAGS_IN();
    goto L_1009DC53; /* 0x1009DC4A: jmp 0x1009dc53 */
L_1009DC53:
    MEM32(ebp + (-0x4)) = 0xFFFFFFFEu; /* 0x1009DC53: mov dword ptr [ebp - 4], 0xfffffffe */
L_1009DC5A:
    RECOMP_CALL(sub_100A763E); /* 0x1009DC5A: call 0x100a763e */
    RECOMP_FLAGS_IN();
    void_lift_trap(0x1009DC5Fu, "int3 ");
    { RECOMP_REGS_OUT(); return; } /* end of function */
    RECOMP_REGS_OUT();
}

void sub_1009DC7C(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1009DC7Cu);

    goto L_1009DC7C;
L_1009DC2C:
    PUSH32(esp, 8); /* 0x1009DC2C: push 8 */
    PUSH32(esp, 0x1009DC60u); /* 0x1009DC2E: push 0x1009dc60 */
    RECOMP_CALL(sub_1000ED7E); /* 0x1009DC33: call 0x1000ed7e */
    RECOMP_FLAGS_IN();
    RECOMP_CALL(sub_1000F750); /* 0x1009DC38: call 0x1000f750 */
    RECOMP_FLAGS_IN();
    eax = MEM32(eax + 0x78); /* 0x1009DC3D: mov eax, dword ptr [eax + 0x78] */
    /* test eax, eax */ /* 0x1009DC40: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1009DC5A; /* 0x1009DC42: je 0x1009dc5a */
L_1009DC44:
    _flag_a = (uint32_t)(MEM32(ebp + (-0x4))); _flag_b = (uint32_t)(0);
    MEM32(ebp + (-0x4)) = MEM32(ebp + (-0x4)) & 0; /* 0x1009DC44: and dword ptr [ebp - 4], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_ICALL(eax); /* 0x1009DC48: call eax */
    RECOMP_FLAGS_IN();
    goto L_1009DC53; /* 0x1009DC4A: jmp 0x1009dc53 */
L_1009DC53:
    MEM32(ebp + (-0x4)) = 0xFFFFFFFEu; /* 0x1009DC53: mov dword ptr [ebp - 4], 0xfffffffe */
L_1009DC5A:
    RECOMP_CALL(sub_100A763E); /* 0x1009DC5A: call 0x100a763e */
    RECOMP_FLAGS_IN();
    void_lift_trap(0x1009DC5Fu, "int3 ");
L_1009DC7C:
    RECOMP_CALL(sub_1000F750); /* 0x1009DC7C: call 0x1000f750 */
    RECOMP_FLAGS_IN();
    eax = MEM32(eax + 0x7C); /* 0x1009DC81: mov eax, dword ptr [eax + 0x7c] */
    /* test eax, eax */ /* 0x1009DC84: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_Z(_flag_a, _flag_b)) goto L_1009DC2C; /* 0x1009DC86: je 0x1009dc2c */
L_1009DC88:
    RECOMP_ICALL(eax); /* 0x1009DC88: call eax */
    RECOMP_FLAGS_IN();
    RECOMP_BACKEDGE();
    goto L_1009DC2C; /* 0x1009DC8A: jmp 0x1009dc2c */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    RECOMP_REGS_OUT();
}

void sub_1009DC8C(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1009DC8Cu);

L_1009DC8C:
    PUSH32(esp, ebp); /* 0x1009DC8C: push ebp */
    ebp = esp; /* 0x1009DC8D: mov ebp, esp */
    PUSH32(esp, esi); /* 0x1009DC8F: push esi */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x1009DC90: push dword ptr [ebp + 8] */
    esi = ecx; /* 0x1009DC93: mov esi, ecx */
    RECOMP_CALL(sub_1009DD14); /* 0x1009DC95: call 0x1009dd14 */
    RECOMP_FLAGS_IN();
    MEM32(esi) = 0x1000EC28u; /* 0x1009DC9A: mov dword ptr [esi], 0x1000ec28 */
    eax = esi; /* 0x1009DCA0: mov eax, esi */
    esi = POP32_VAL(esp); /* 0x1009DCA2: pop esi */
    ebp = POP32_VAL(esp); /* 0x1009DCA3: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x1009DCA4: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_1009DCA7(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1009DCA7u);

L_1009DCA7:
    PUSH32(esp, ebp); /* 0x1009DCA7: push ebp */
    ebp = esp; /* 0x1009DCA8: mov ebp, esp */
    PUSH32(esp, esi); /* 0x1009DCAA: push esi */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x1009DCAB: push dword ptr [ebp + 8] */
    esi = ecx; /* 0x1009DCAE: mov esi, ecx */
    RECOMP_CALL(sub_1009DD30); /* 0x1009DCB0: call 0x1009dd30 */
    RECOMP_FLAGS_IN();
    MEM32(esi) = 0x1000EB78u; /* 0x1009DCB5: mov dword ptr [esi], 0x1000eb78 */
    eax = esi; /* 0x1009DCBB: mov eax, esi */
    esi = POP32_VAL(esp); /* 0x1009DCBD: pop esi */
    ebp = POP32_VAL(esp); /* 0x1009DCBE: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x1009DCBF: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_1009DCC2(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1009DCC2u);

L_1009DCC2:
    PUSH32(esp, ebp); /* 0x1009DCC2: push ebp */
    ebp = esp; /* 0x1009DCC3: mov ebp, esp */
    PUSH32(esp, esi); /* 0x1009DCC5: push esi */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x1009DCC6: push dword ptr [ebp + 8] */
    esi = ecx; /* 0x1009DCC9: mov esi, ecx */
    RECOMP_CALL(sub_1002D16D); /* 0x1009DCCB: call 0x1002d16d */
    RECOMP_FLAGS_IN();
    MEM32(esi) = 0x1000EB78u; /* 0x1009DCD0: mov dword ptr [esi], 0x1000eb78 */
    eax = esi; /* 0x1009DCD6: mov eax, esi */
    esi = POP32_VAL(esp); /* 0x1009DCD8: pop esi */
    ebp = POP32_VAL(esp); /* 0x1009DCD9: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x1009DCDA: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_1009DCDD(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1009DCDDu);

L_1009DCDD:
    PUSH32(esp, ebp); /* 0x1009DCDD: push ebp */
    ebp = esp; /* 0x1009DCDE: mov ebp, esp */
    PUSH32(esp, esi); /* 0x1009DCE0: push esi */
    eax = ebp + 0x8; /* 0x1009DCE1: lea eax, [ebp + 8] */
    esi = ecx; /* 0x1009DCE4: mov esi, ecx */
    PUSH32(esp, eax); /* 0x1009DCE6: push eax */
    RECOMP_CALL(sub_1009DD30); /* 0x1009DCE7: call 0x1009dd30 */
    RECOMP_FLAGS_IN();
    MEM32(esi) = 0x1000EB78u; /* 0x1009DCEC: mov dword ptr [esi], 0x1000eb78 */
    eax = esi; /* 0x1009DCF2: mov eax, esi */
    esi = POP32_VAL(esp); /* 0x1009DCF4: pop esi */
    ebp = POP32_VAL(esp); /* 0x1009DCF5: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x1009DCF6: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_1009DCF9(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1009DCF9u);

L_1009DCF9:
    PUSH32(esp, ebp); /* 0x1009DCF9: push ebp */
    ebp = esp; /* 0x1009DCFA: mov ebp, esp */
    PUSH32(esp, esi); /* 0x1009DCFC: push esi */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x1009DCFD: push dword ptr [ebp + 8] */
    esi = ecx; /* 0x1009DD00: mov esi, ecx */
    RECOMP_CALL(sub_1002D16D); /* 0x1009DD02: call 0x1002d16d */
    RECOMP_FLAGS_IN();
    MEM32(esi) = 0x1000EBD0u; /* 0x1009DD07: mov dword ptr [esi], 0x1000ebd0 */
    eax = esi; /* 0x1009DD0D: mov eax, esi */
    esi = POP32_VAL(esp); /* 0x1009DD0F: pop esi */
    ebp = POP32_VAL(esp); /* 0x1009DD10: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x1009DD11: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_1009DD14(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1009DD14u);

L_1009DD14:
    PUSH32(esp, ebp); /* 0x1009DD14: push ebp */
    ebp = esp; /* 0x1009DD15: mov ebp, esp */
    PUSH32(esp, esi); /* 0x1009DD17: push esi */
    eax = ebp + 0x8; /* 0x1009DD18: lea eax, [ebp + 8] */
    esi = ecx; /* 0x1009DD1B: mov esi, ecx */
    PUSH32(esp, eax); /* 0x1009DD1D: push eax */
    RECOMP_CALL(sub_1009DD30); /* 0x1009DD1E: call 0x1009dd30 */
    RECOMP_FLAGS_IN();
    MEM32(esi) = 0x1000EBD0u; /* 0x1009DD23: mov dword ptr [esi], 0x1000ebd0 */
    eax = esi; /* 0x1009DD29: mov eax, esi */
    esi = POP32_VAL(esp); /* 0x1009DD2B: pop esi */
    ebp = POP32_VAL(esp); /* 0x1009DD2C: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x1009DD2D: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_1009DD30(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1009DD30u);

L_1009DD30:
    PUSH32(esp, ebp); /* 0x1009DD30: push ebp */
    ebp = esp; /* 0x1009DD31: mov ebp, esp */
    eax = MEM32(ebp + 0x8); /* 0x1009DD33: mov eax, dword ptr [ebp + 8] */
    PUSH32(esp, esi); /* 0x1009DD36: push esi */
    esi = ecx; /* 0x1009DD37: mov esi, ecx */
    _flag_a = (uint32_t)(MEM32(esi + 0x4)); _flag_b = (uint32_t)(0);
    MEM32(esi + 0x4) = MEM32(esi + 0x4) & 0; /* 0x1009DD39: and dword ptr [esi + 4], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(esi) = 0x1000EB24u; /* 0x1009DD3D: mov dword ptr [esi], 0x1000eb24 */
    MEM8(esi + 0x8) = (uint8_t)(0); /* 0x1009DD43: mov byte ptr [esi + 8], 0 */
    PUSH32(esp, MEM32(eax)); /* 0x1009DD47: push dword ptr [eax] */
    RECOMP_CALL(sub_1009DDB6); /* 0x1009DD49: call 0x1009ddb6 */
    RECOMP_FLAGS_IN();
    eax = esi; /* 0x1009DD4E: mov eax, esi */
    esi = POP32_VAL(esp); /* 0x1009DD50: pop esi */
    ebp = POP32_VAL(esp); /* 0x1009DD51: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x1009DD52: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_1009DD55(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1009DD55u);

L_1009DD55:
    _flag_a = (uint32_t)(MEM32(ecx + 0x4)); _flag_b = (uint32_t)(0);
    MEM32(ecx + 0x4) = MEM32(ecx + 0x4) & 0; /* 0x1009DD55: and dword ptr [ecx + 4], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    eax = ecx; /* 0x1009DD59: mov eax, ecx */
    MEM32(ecx) = 0x1000EB24u; /* 0x1009DD5B: mov dword ptr [ecx], 0x1000eb24 */
    MEM8(ecx + 0x8) = (uint8_t)(0); /* 0x1009DD61: mov byte ptr [ecx + 8], 0 */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1009DD65: ret  */
    RECOMP_REGS_OUT();
}

void sub_1009DD66(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1009DD66u);

L_1009DD66:
    PUSH32(esp, ebp); /* 0x1009DD66: push ebp */
    ebp = esp; /* 0x1009DD67: mov ebp, esp */
    /* test MEM8(ebp + 0x8), 2 */ /* 0x1009DD69: test byte ptr [ebp + 8], 2 */
    _flag_a = (uint32_t)(MEM8(ebp + 0x8)) << 24; _flag_b = (uint32_t)(2) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    PUSH32(esp, esi); /* 0x1009DD6D: push esi */
    esi = ecx; /* 0x1009DD6E: mov esi, ecx */
    if (TEST_Z(_flag_a, _flag_b)) goto L_1009DD97; /* 0x1009DD70: je 0x1009dd97 */
L_1009DD72:
    PUSH32(esp, edi); /* 0x1009DD72: push edi */
    PUSH32(esp, 0x10033A65u); /* 0x1009DD73: push 0x10033a65 */
    edi = esi + (-0x4); /* 0x1009DD78: lea edi, [esi - 4] */
    PUSH32(esp, MEM32(edi)); /* 0x1009DD7B: push dword ptr [edi] */
    PUSH32(esp, 0xCu); /* 0x1009DD7D: push 0xc */
    PUSH32(esp, esi); /* 0x1009DD7F: push esi */
    RECOMP_CALL(sub_1009E24F); /* 0x1009DD80: call 0x1009e24f */
    RECOMP_FLAGS_IN();
    /* test MEM8(ebp + 0x8), 1 */ /* 0x1009DD85: test byte ptr [ebp + 8], 1 */
    _flag_a = (uint32_t)(MEM8(ebp + 0x8)) << 24; _flag_b = (uint32_t)(1) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_1009DD92; /* 0x1009DD89: je 0x1009dd92 */
L_1009DD8B:
    PUSH32(esp, edi); /* 0x1009DD8B: push edi */
    RECOMP_CALL(sub_1000ECE0); /* 0x1009DD8C: call 0x1000ece0 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1009DD91: pop ecx */
L_1009DD92:
    eax = edi; /* 0x1009DD92: mov eax, edi */
    edi = POP32_VAL(esp); /* 0x1009DD94: pop edi */
    goto L_1009DDB1; /* 0x1009DD95: jmp 0x1009ddb1 */
L_1009DD97:
    MEM32(esi) = 0x1000EB24u; /* 0x1009DD97: mov dword ptr [esi], 0x1000eb24 */
    RECOMP_CALL(sub_10033A6D); /* 0x1009DD9D: call 0x10033a6d */
    RECOMP_FLAGS_IN();
    /* test MEM8(ebp + 0x8), 1 */ /* 0x1009DDA2: test byte ptr [ebp + 8], 1 */
    _flag_a = (uint32_t)(MEM8(ebp + 0x8)) << 24; _flag_b = (uint32_t)(1) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_1009DDAF; /* 0x1009DDA6: je 0x1009ddaf */
L_1009DDA8:
    PUSH32(esp, esi); /* 0x1009DDA8: push esi */
    RECOMP_CALL(sub_1000ECE0); /* 0x1009DDA9: call 0x1000ece0 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1009DDAE: pop ecx */
L_1009DDAF:
    eax = esi; /* 0x1009DDAF: mov eax, esi */
L_1009DDB1:
    esi = POP32_VAL(esp); /* 0x1009DDB1: pop esi */
    ebp = POP32_VAL(esp); /* 0x1009DDB2: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x1009DDB3: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_1009DDB6(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1009DDB6u);

L_1009DDB6:
    PUSH32(esp, ebp); /* 0x1009DDB6: push ebp */
    ebp = esp; /* 0x1009DDB7: mov ebp, esp */
    /* cmp MEM32(ebp + 0x8), 0 */ /* 0x1009DDB9: cmp dword ptr [ebp + 8], 0 */
    _flag_a = (uint32_t)(MEM32(ebp + 0x8)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    PUSH32(esp, ebx); /* 0x1009DDBD: push ebx */
    ebx = ecx; /* 0x1009DDBE: mov ebx, ecx */
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1009DDEF; /* 0x1009DDC0: je 0x1009ddef */
L_1009DDC2:
    PUSH32(esp, edi); /* 0x1009DDC2: push edi */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x1009DDC3: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_100129AF); /* 0x1009DDC6: call 0x100129af */
    RECOMP_FLAGS_IN();
    edi = eax + 0x1; /* 0x1009DDCB: lea edi, [eax + 1] */
    PUSH32(esp, edi); /* 0x1009DDCE: push edi */
    RECOMP_CALL(sub_1000ED30); /* 0x1009DDCF: call 0x1000ed30 */
    RECOMP_FLAGS_IN();
    MEM32(ebx + 0x4) = eax; /* 0x1009DDD4: mov dword ptr [ebx + 4], eax */
    ecx = POP32_VAL(esp); /* 0x1009DDD7: pop ecx */
    ecx = POP32_VAL(esp); /* 0x1009DDD8: pop ecx */
    /* test eax, eax */ /* 0x1009DDD9: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1009DDEE; /* 0x1009DDDB: je 0x1009ddee */
L_1009DDDD:
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x1009DDDD: push dword ptr [ebp + 8] */
    PUSH32(esp, edi); /* 0x1009DDE0: push edi */
    PUSH32(esp, eax); /* 0x1009DDE1: push eax */
    RECOMP_CALL(sub_100147CD); /* 0x1009DDE2: call 0x100147cd */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x1009DDE7: add esp, 0xc */
    _flag_k = FK_ADD;
    MEM8(ebx + 0x8) = (uint8_t)(1); /* 0x1009DDEA: mov byte ptr [ebx + 8], 1 */
L_1009DDEE:
    edi = POP32_VAL(esp); /* 0x1009DDEE: pop edi */
L_1009DDEF:
    ebx = POP32_VAL(esp); /* 0x1009DDEF: pop ebx */
    ebp = POP32_VAL(esp); /* 0x1009DDF0: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x1009DDF1: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_1009DDF4(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1009DDF4u);

L_1009DDF4:
    eax = MEM32(ecx + 0x4); /* 0x1009DDF4: mov eax, dword ptr [ecx + 4] */
    /* test eax, eax */ /* 0x1009DDF7: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1009DE00; /* 0x1009DDF9: jne 0x1009de00 */
L_1009DDFB:
    eax = 0x1009DE04u; /* 0x1009DDFB: mov eax, 0x1009de04 */
L_1009DE00:
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1009DE00: ret  */
    RECOMP_REGS_OUT();
}

void sub_1009DE04(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1009DE04u);

L_1009DE04:
    PUSH32(esp, ebp); /* 0x1009DE04: push ebp */
    /* outsb: no port I/O under Win32 */ /* 0x1009DE05: outsb dx, byte ptr [esi] */
    ebp = (uint32_t)((int32_t)MEM32(esi + 0x6F) * (int32_t)0x77u); /* 0x1009DE06: imul ebp, dword ptr [esi + 0x6f], 0x77 */
    /* outsb: no port I/O under Win32 */ /* 0x1009DE0A: outsb dx, byte ptr [esi] */
    _flag_a = (uint32_t)(MEM8(ebp + 0x78)) << 24; _flag_b = (uint32_t)(HI8(eax)) << 24;
    MEM8(ebp + 0x78) = (uint8_t)(MEM8(ebp + 0x78) & HI8(eax)); /* 0x1009DE0B: and byte ptr [ebp + 0x78], ah */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    void_lift_trap(0x1009DE0Eu, "arpl word ptr [ebp + 0x70], sp");
    if (TEST_Z(_flag_a, _flag_b)) goto L_1009DE7C; /* 0x1009DE11: je 0x1009de7c */
L_1009DE13:
    /* outsd: no port I/O under Win32 */ /* 0x1009DE13: outsd dx, dword ptr [esi] */
    /* outsb: no port I/O under Win32 */ /* 0x1009DE14: outsb dx, byte ptr [esi] */
    _flag_a = (uint32_t)(MEM8(ebp + (-0x75))) << 24; _flag_b = (uint32_t)(LO8(edx)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(ebp + (-0x75)) = (uint8_t)(MEM8(ebp + (-0x75)) + LO8(edx)); /* 0x1009DE15: add byte ptr [ebp - 0x75], dl */
    _flag_k = FK_NARROW(FK_ADD, 24);
    /* in: no port I/O under Win32 */ /* 0x1009DE18: in al, dx */
    eax = ecx + 0x9; /* 0x1009DE19: lea eax, [ecx + 9] */
    PUSH32(esp, eax); /* 0x1009DE1C: push eax */
    eax = MEM32(ebp + 0x8); /* 0x1009DE1D: mov eax, dword ptr [ebp + 8] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(9);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 9; /* 0x1009DE20: add eax, 9 */
    _flag_k = FK_ADD;
    PUSH32(esp, eax); /* 0x1009DE23: push eax */
    RECOMP_CALL(sub_1001413E); /* 0x1009DE24: call 0x1001413e */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(eax);
    _cf = (eax) != 0;
    eax = (uint32_t)(-(int32_t)eax); /* 0x1009DE29: neg eax */
    _flag_k = FK_CMP;
    ecx = POP32_VAL(esp); /* 0x1009DE2B: pop ecx */
    { uint32_t _sa = eax, _sb = eax, _sc = (uint32_t)CMP_B(_flag_a, _flag_b); /* 0x1009DE2C: sbb eax, eax */
      eax = _sc ? 0xFFFFFFFFu : 0;
      _flag_a = recomp_flags_sbb(_sa, _sb, _sc); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    ecx = POP32_VAL(esp); /* 0x1009DE2E: pop ecx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x1009DE2F: inc eax */
    _flag_k = FK_INC;
    ebp = POP32_VAL(esp); /* 0x1009DE30: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x1009DE31: ret 4 */
L_1009DE7C:
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    SET_LO8(eax, LO8(eax) + 0); /* 0x1009DE7C: add al, 0 */
    _flag_k = FK_NARROW(FK_ADD, 24);
    PUSH32(esp, ebp); /* 0x1009DE7E: push ebp */
    ebp = esp; /* 0x1009DE7F: mov ebp, esp */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x1009DE81: push dword ptr [ebp + 8] */
    PUSH32(esp, ecx); /* 0x1009DE84: push ecx */
    RECOMP_CALL(sub_1009E35C); /* 0x1009DE85: call 0x1009e35c */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1009DE8A: pop ecx */
    ecx = POP32_VAL(esp); /* 0x1009DE8B: pop ecx */
    ebp = POP32_VAL(esp); /* 0x1009DE8C: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x1009DE8D: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_1009DE16(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1009DE16u);

L_1009DE16:
    PUSH32(esp, ebp); /* 0x1009DE16: push ebp */
    ebp = esp; /* 0x1009DE17: mov ebp, esp */
    eax = ecx + 0x9; /* 0x1009DE19: lea eax, [ecx + 9] */
    PUSH32(esp, eax); /* 0x1009DE1C: push eax */
    eax = MEM32(ebp + 0x8); /* 0x1009DE1D: mov eax, dword ptr [ebp + 8] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(9);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 9; /* 0x1009DE20: add eax, 9 */
    _flag_k = FK_ADD;
    PUSH32(esp, eax); /* 0x1009DE23: push eax */
    RECOMP_CALL(sub_1001413E); /* 0x1009DE24: call 0x1001413e */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(eax);
    _cf = (eax) != 0;
    eax = (uint32_t)(-(int32_t)eax); /* 0x1009DE29: neg eax */
    _flag_k = FK_CMP;
    ecx = POP32_VAL(esp); /* 0x1009DE2B: pop ecx */
    { uint32_t _sa = eax, _sb = eax, _sc = (uint32_t)CMP_B(_flag_a, _flag_b); /* 0x1009DE2C: sbb eax, eax */
      eax = _sc ? 0xFFFFFFFFu : 0;
      _flag_a = recomp_flags_sbb(_sa, _sb, _sc); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    ecx = POP32_VAL(esp); /* 0x1009DE2E: pop ecx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x1009DE2F: inc eax */
    _flag_k = FK_INC;
    ebp = POP32_VAL(esp); /* 0x1009DE30: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x1009DE31: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_1009DE7E(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1009DE7Eu);

L_1009DE7E:
    PUSH32(esp, ebp); /* 0x1009DE7E: push ebp */
    ebp = esp; /* 0x1009DE7F: mov ebp, esp */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x1009DE81: push dword ptr [ebp + 8] */
    PUSH32(esp, ecx); /* 0x1009DE84: push ecx */
    RECOMP_CALL(sub_1009E35C); /* 0x1009DE85: call 0x1009e35c */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1009DE8A: pop ecx */
    ecx = POP32_VAL(esp); /* 0x1009DE8B: pop ecx */
    ebp = POP32_VAL(esp); /* 0x1009DE8C: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x1009DE8D: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_1009DE90(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1009DE90u);

L_1009DE90:
    PUSH32(esp, ecx); /* 0x1009DE90: push ecx */
    RECOMP_CALL(sub_1009E484); /* 0x1009DE91: call 0x1009e484 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1009DE96: pop ecx */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1009DE97: ret  */
    RECOMP_REGS_OUT();
}

void sub_1009DE98(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1009DE98u);

L_1009DE98:
    eax = ecx + 0x8; /* 0x1009DE98: lea eax, [ecx + 8] */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1009DE9B: ret  */
    RECOMP_REGS_OUT();
}

void sub_1009DE9C(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1009DE9Cu);

L_1009DE9C:
    PUSH32(esp, 4); /* 0x1009DE9C: push 4 */
    eax = 0x100DC7CCu; /* 0x1009DE9E: mov eax, 0x100dc7cc */
    RECOMP_CALL(sub_1001FB2C); /* 0x1009DEA3: call 0x1001fb2c */
    RECOMP_FLAGS_IN();
    RECOMP_CALL(sub_1000F750); /* 0x1009DEA8: call 0x1000f750 */
    RECOMP_FLAGS_IN();
    /* cmp MEM32(eax + 0x94), 0 */ /* 0x1009DEAD: cmp dword ptr [eax + 0x94], 0 */
    _flag_a = (uint32_t)(MEM32(eax + 0x94)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1009DEBB; /* 0x1009DEB4: je 0x1009debb */
L_1009DEB6:
    RECOMP_CALL(sub_1009DBD2); /* 0x1009DEB6: call 0x1009dbd2 */
    RECOMP_FLAGS_IN();
L_1009DEBB:
    _flag_a = (uint32_t)(MEM32(ebp + (-0x4))); _flag_b = (uint32_t)(0);
    MEM32(ebp + (-0x4)) = MEM32(ebp + (-0x4)) & 0; /* 0x1009DEBB: and dword ptr [ebp - 4], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_1009DC7C); /* 0x1009DEBF: call 0x1009dc7c */
    RECOMP_FLAGS_IN();
    RECOMP_CALL(sub_1000F750); /* 0x1009DEC4: call 0x1000f750 */
    RECOMP_FLAGS_IN();
    ecx = MEM32(ebp + 0x8); /* 0x1009DEC9: mov ecx, dword ptr [ebp + 8] */
    PUSH32(esp, 0); /* 0x1009DECC: push 0 */
    PUSH32(esp, 0); /* 0x1009DECE: push 0 */
    MEM32(eax + 0x94) = ecx; /* 0x1009DED0: mov dword ptr [eax + 0x94], ecx */
    RECOMP_CALL(sub_100192EB); /* 0x1009DED6: call 0x100192eb */
    RECOMP_FLAGS_IN();
    void_lift_trap(0x1009DEDBu, "int3 ");
    { RECOMP_REGS_OUT(); return; } /* end of function */
    RECOMP_REGS_OUT();
}

void sub_1009DEDC(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1009DEDCu);

L_1009DEDC:
    PUSH32(esp, ebp); /* 0x1009DEDC: push ebp */
    ebp = esp; /* 0x1009DEDD: mov ebp, esp */
    PUSH32(esp, ecx); /* 0x1009DEDF: push ecx */
    PUSH32(esp, ecx); /* 0x1009DEE0: push ecx */
    PUSH32(esp, edi); /* 0x1009DEE1: push edi */
    edi = MEM32(ebp + 0x8); /* 0x1009DEE2: mov edi, dword ptr [ebp + 8] */
    /* cmp MEM32(edi), 0x80000003u */ /* 0x1009DEE5: cmp dword ptr [edi], 0x80000003 */
    _flag_a = (uint32_t)(MEM32(edi)); _flag_b = (uint32_t)(0x80000003u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1009DFF3; /* 0x1009DEEB: je 0x1009dff3 */
L_1009DEF1:
    PUSH32(esp, ebx); /* 0x1009DEF1: push ebx */
    PUSH32(esp, esi); /* 0x1009DEF2: push esi */
    RECOMP_CALL(sub_1000F750); /* 0x1009DEF3: call 0x1000f750 */
    RECOMP_FLAGS_IN();
    ebx = MEM32(ebp + 0x18); /* 0x1009DEF8: mov ebx, dword ptr [ebp + 0x18] */
    /* cmp MEM32(eax + 0x80), 0 */ /* 0x1009DEFB: cmp dword ptr [eax + 0x80], 0 */
    _flag_a = (uint32_t)(MEM32(eax + 0x80)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1009DF4C; /* 0x1009DF02: je 0x1009df4c */
L_1009DF04:
    PUSH32(esp, 0); /* 0x1009DF04: push 0 */
    RECOMP_ICALL(MEM32(0x100E5000)); /* 0x1009DF06: call dword ptr [0x100e5000] */
    RECOMP_FLAGS_IN();
    esi = eax; /* 0x1009DF0C: mov esi, eax */
    RECOMP_CALL(sub_1000F750); /* 0x1009DF0E: call 0x1000f750 */
    RECOMP_FLAGS_IN();
    /* cmp MEM32(eax + 0x80), esi */ /* 0x1009DF13: cmp dword ptr [eax + 0x80], esi */
    _flag_a = (uint32_t)(MEM32(eax + 0x80)); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1009DF4C; /* 0x1009DF19: je 0x1009df4c */
L_1009DF1B:
    /* cmp MEM32(edi), 0xE0434F4Du */ /* 0x1009DF1B: cmp dword ptr [edi], 0xe0434f4d */
    _flag_a = (uint32_t)(MEM32(edi)); _flag_b = (uint32_t)(0xE0434F4Du);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1009DF4C; /* 0x1009DF21: je 0x1009df4c */
L_1009DF23:
    /* cmp MEM32(edi), 0xE0434352u */ /* 0x1009DF23: cmp dword ptr [edi], 0xe0434352 */
    _flag_a = (uint32_t)(MEM32(edi)); _flag_b = (uint32_t)(0xE0434352u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1009DF4C; /* 0x1009DF29: je 0x1009df4c */
L_1009DF2B:
    PUSH32(esp, MEM32(ebp + 0x24)); /* 0x1009DF2B: push dword ptr [ebp + 0x24] */
    PUSH32(esp, MEM32(ebp + 0x20)); /* 0x1009DF2E: push dword ptr [ebp + 0x20] */
    PUSH32(esp, ebx); /* 0x1009DF31: push ebx */
    PUSH32(esp, MEM32(ebp + 0x14)); /* 0x1009DF32: push dword ptr [ebp + 0x14] */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x1009DF35: push dword ptr [ebp + 0x10] */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x1009DF38: push dword ptr [ebp + 0xc] */
    PUSH32(esp, edi); /* 0x1009DF3B: push edi */
    RECOMP_CALL(sub_1009DADE); /* 0x1009DF3C: call 0x1009dade */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x1Cu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x1Cu; /* 0x1009DF41: add esp, 0x1c */
    _flag_k = FK_ADD;
    /* test eax, eax */ /* 0x1009DF44: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1009DFF1; /* 0x1009DF46: jne 0x1009dff1 */
L_1009DF4C:
    /* cmp MEM32(ebx + 0xC), 0 */ /* 0x1009DF4C: cmp dword ptr [ebx + 0xc], 0 */
    _flag_a = (uint32_t)(MEM32(ebx + 0xC)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_1009DF57; /* 0x1009DF50: jne 0x1009df57 */
L_1009DF52:
    RECOMP_CALL(sub_1009DBD2); /* 0x1009DF52: call 0x1009dbd2 */
    RECOMP_FLAGS_IN();
L_1009DF57:
    eax = ebp + (-0x4); /* 0x1009DF57: lea eax, [ebp - 4] */
    PUSH32(esp, eax); /* 0x1009DF5A: push eax */
    eax = ebp + (-0x8); /* 0x1009DF5B: lea eax, [ebp - 8] */
    PUSH32(esp, eax); /* 0x1009DF5E: push eax */
    PUSH32(esp, MEM32(ebp + 0x1C)); /* 0x1009DF5F: push dword ptr [ebp + 0x1c] */
    PUSH32(esp, MEM32(ebp + 0x20)); /* 0x1009DF62: push dword ptr [ebp + 0x20] */
    PUSH32(esp, ebx); /* 0x1009DF65: push ebx */
    RECOMP_CALL(sub_10019872); /* 0x1009DF66: call 0x10019872 */
    RECOMP_FLAGS_IN();
    ecx = MEM32(ebp + (-0x8)); /* 0x1009DF6B: mov ecx, dword ptr [ebp - 8] */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x14u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x14u; /* 0x1009DF6E: add esp, 0x14 */
    _flag_k = FK_ADD;
    edx = MEM32(ebp + (-0x4)); /* 0x1009DF71: mov edx, dword ptr [ebp - 4] */
    /* cmp ecx, edx */ /* 0x1009DF74: cmp ecx, edx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_AE(_flag_a, _flag_b)) goto L_1009DFF1; /* 0x1009DF76: jae 0x1009dff1 */
L_1009DF78:
    esi = eax + 0xC; /* 0x1009DF78: lea esi, [eax + 0xc] */
    eax = MEM32(ebp + 0x1C); /* 0x1009DF7B: mov eax, dword ptr [ebp + 0x1c] */
L_1009DF7E:
    /* cmp eax, MEM32(esi + (-0xC)) */ /* 0x1009DF7E: cmp eax, dword ptr [esi - 0xc] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(esi + (-0xC)));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_L(_flag_a, _flag_b)) goto L_1009DFE6; /* 0x1009DF81: jl 0x1009dfe6 */
L_1009DF83:
    /* cmp eax, MEM32(esi + (-0x8)) */ /* 0x1009DF83: cmp eax, dword ptr [esi - 8] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(esi + (-0x8)));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_G(_flag_a, _flag_b)) goto L_1009DFE6; /* 0x1009DF86: jg 0x1009dfe6 */
L_1009DF88:
    eax = MEM32(esi); /* 0x1009DF88: mov eax, dword ptr [esi] */
    edi = MEM32(esi + 0x4); /* 0x1009DF8A: mov edi, dword ptr [esi + 4] */
    if (4u) _cf = (((eax) >> 28) & 1u); /* 0x1009DF8D: shl eax, 4 */
    if (4u) { _flag_a = recomp_flags_pack((eax << 4u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax << 4u; /* 0x1009DF8D: shl eax, 4 */
    edi = MEM32(edi + eax + (-0xC)); /* 0x1009DF90: mov edi, dword ptr [edi + eax - 0xc] */
    /* test edi, edi */ /* 0x1009DF94: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1009DFAB; /* 0x1009DF96: je 0x1009dfab */
L_1009DF98:
    edx = MEM32(esi + 0x4); /* 0x1009DF98: mov edx, dword ptr [esi + 4] */
    ebx = MEM32(edx + eax + (-0xC)); /* 0x1009DF9B: mov ebx, dword ptr [edx + eax - 0xc] */
    edx = MEM32(ebp + (-0x4)); /* 0x1009DF9F: mov edx, dword ptr [ebp - 4] */
    /* cmp MEM8(ebx + 0x8), 0 */ /* 0x1009DFA2: cmp byte ptr [ebx + 8], 0 */
    _flag_a = (uint32_t)(MEM8(ebx + 0x8)) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    ebx = MEM32(ebp + 0x18); /* 0x1009DFA6: mov ebx, dword ptr [ebp + 0x18] */
    if (CMP_NE(_flag_a, _flag_b)) goto L_1009DFE3; /* 0x1009DFA9: jne 0x1009dfe3 */
L_1009DFAB:
    edi = MEM32(esi + 0x4); /* 0x1009DFAB: mov edi, dword ptr [esi + 4] */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(0xFFFFFFF0u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edi = edi + 0xFFFFFFF0u; /* 0x1009DFAE: add edi, -0x10 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + edi; /* 0x1009DFB1: add eax, edi */
    _flag_k = FK_ADD;
    edi = MEM32(ebp + 0x8); /* 0x1009DFB3: mov edi, dword ptr [ebp + 8] */
    /* test MEM8(eax), 0x40u */ /* 0x1009DFB6: test byte ptr [eax], 0x40 */
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(0x40u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1009DFE3; /* 0x1009DFB9: jne 0x1009dfe3 */
L_1009DFBB:
    PUSH32(esp, 1); /* 0x1009DFBB: push 1 */
    PUSH32(esp, MEM32(ebp + 0x24)); /* 0x1009DFBD: push dword ptr [ebp + 0x24] */
    ecx = esi + (-0xC); /* 0x1009DFC0: lea ecx, [esi - 0xc] */
    PUSH32(esp, MEM32(ebp + 0x20)); /* 0x1009DFC3: push dword ptr [ebp + 0x20] */
    PUSH32(esp, ecx); /* 0x1009DFC6: push ecx */
    PUSH32(esp, 0); /* 0x1009DFC7: push 0 */
    PUSH32(esp, eax); /* 0x1009DFC9: push eax */
    PUSH32(esp, ebx); /* 0x1009DFCA: push ebx */
    PUSH32(esp, MEM32(ebp + 0x14)); /* 0x1009DFCB: push dword ptr [ebp + 0x14] */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x1009DFCE: push dword ptr [ebp + 0x10] */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x1009DFD1: push dword ptr [ebp + 0xc] */
    PUSH32(esp, edi); /* 0x1009DFD4: push edi */
    RECOMP_CALL(sub_100199E8); /* 0x1009DFD5: call 0x100199e8 */
    RECOMP_FLAGS_IN();
    edx = MEM32(ebp + (-0x4)); /* 0x1009DFDA: mov edx, dword ptr [ebp - 4] */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x2Cu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x2Cu; /* 0x1009DFDD: add esp, 0x2c */
    _flag_k = FK_ADD;
    ecx = MEM32(ebp + (-0x8)); /* 0x1009DFE0: mov ecx, dword ptr [ebp - 8] */
L_1009DFE3:
    eax = MEM32(ebp + 0x1C); /* 0x1009DFE3: mov eax, dword ptr [ebp + 0x1c] */
L_1009DFE6:
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx + 1; /* 0x1009DFE6: inc ecx */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(0x14u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esi = esi + 0x14u; /* 0x1009DFE7: add esi, 0x14 */
    _flag_k = FK_ADD;
    MEM32(ebp + (-0x8)) = ecx; /* 0x1009DFEA: mov dword ptr [ebp - 8], ecx */
    /* cmp ecx, edx */ /* 0x1009DFED: cmp ecx, edx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_1009DF7E; /* 0x1009DFEF: jb 0x1009df7e */
L_1009DFF1:
    esi = POP32_VAL(esp); /* 0x1009DFF1: pop esi */
    ebx = POP32_VAL(esp); /* 0x1009DFF2: pop ebx */
L_1009DFF3:
    edi = POP32_VAL(esp); /* 0x1009DFF3: pop edi */
    esp = ebp; /* 0x1009DFF4: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x1009DFF6: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1009DFF7: ret  */
    RECOMP_REGS_OUT();
}

void sub_1009DFF8(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1009DFF8u);

L_1009DFF8:
    PUSH32(esp, ebp); /* 0x1009DFF8: push ebp */
    ebp = esp; /* 0x1009DFF9: mov ebp, esp */
    PUSH32(esp, ecx); /* 0x1009DFFB: push ecx */
    PUSH32(esp, ecx); /* 0x1009DFFC: push ecx */
    PUSH32(esp, ebx); /* 0x1009DFFD: push ebx */
    PUSH32(esp, esi); /* 0x1009DFFE: push esi */
    esi = MEM32(ebp + 0xC); /* 0x1009DFFF: mov esi, dword ptr [ebp + 0xc] */
    PUSH32(esp, edi); /* 0x1009E002: push edi */
    /* test esi, esi */ /* 0x1009E003: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1009E075; /* 0x1009E005: je 0x1009e075 */
L_1009E007:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ebx = 0; /* 0x1009E007: xor ebx, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
    edi = ebx; /* 0x1009E009: mov edi, ebx */
    /* cmp MEM32(esi), ebx */ /* 0x1009E00B: cmp dword ptr [esi], ebx */
    _flag_a = (uint32_t)(MEM32(esi)); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_LE(_flag_a, _flag_b)) goto L_1009E06C; /* 0x1009E00D: jle 0x1009e06c */
L_1009E00F:
    ecx = ebx; /* 0x1009E00F: mov ecx, ebx */
    MEM32(ebp + 0xC) = ebx; /* 0x1009E011: mov dword ptr [ebp + 0xc], ebx */
L_1009E014:
    eax = MEM32(ebp + 0x8); /* 0x1009E014: mov eax, dword ptr [ebp + 8] */
    eax = MEM32(eax + 0x1C); /* 0x1009E017: mov eax, dword ptr [eax + 0x1c] */
    eax = MEM32(eax + 0xC); /* 0x1009E01A: mov eax, dword ptr [eax + 0xc] */
    edx = eax + 0x4; /* 0x1009E01D: lea edx, [eax + 4] */
    eax = MEM32(eax); /* 0x1009E020: mov eax, dword ptr [eax] */
    MEM32(ebp + (-0x8)) = edx; /* 0x1009E022: mov dword ptr [ebp - 8], edx */
    MEM32(ebp + (-0x4)) = eax; /* 0x1009E025: mov dword ptr [ebp - 4], eax */
    /* test eax, eax */ /* 0x1009E028: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if ((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) == 0u || (((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_1009E061; /* 0x1009E02A: jle 0x1009e061 */
L_1009E02C:
    eax = MEM32(ebp + 0x8); /* 0x1009E02C: mov eax, dword ptr [ebp + 8] */
    PUSH32(esp, MEM32(eax + 0x1C)); /* 0x1009E02F: push dword ptr [eax + 0x1c] */
    eax = MEM32(esi + 0x4); /* 0x1009E032: mov eax, dword ptr [esi + 4] */
    PUSH32(esp, MEM32(edx)); /* 0x1009E035: push dword ptr [edx] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + ecx; /* 0x1009E037: add eax, ecx */
    _flag_k = FK_ADD;
    PUSH32(esp, eax); /* 0x1009E039: push eax */
    RECOMP_CALL(sub_10019414); /* 0x1009E03A: call 0x10019414 */
    RECOMP_FLAGS_IN();
    ecx = MEM32(ebp + 0xC); /* 0x1009E03F: mov ecx, dword ptr [ebp + 0xc] */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x1009E042: add esp, 0xc */
    _flag_k = FK_ADD;
    /* test eax, eax */ /* 0x1009E045: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1009E05F; /* 0x1009E047: jne 0x1009e05f */
L_1009E049:
    eax = MEM32(ebp + (-0x4)); /* 0x1009E049: mov eax, dword ptr [ebp - 4] */
    edx = MEM32(ebp + (-0x8)); /* 0x1009E04C: mov edx, dword ptr [ebp - 8] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax - 1; /* 0x1009E04F: dec eax */
    _flag_k = FK_DEC;
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edx = edx + 4; /* 0x1009E050: add edx, 4 */
    _flag_k = FK_ADD;
    MEM32(ebp + (-0x4)) = eax; /* 0x1009E053: mov dword ptr [ebp - 4], eax */
    MEM32(ebp + (-0x8)) = edx; /* 0x1009E056: mov dword ptr [ebp - 8], edx */
    /* test eax, eax */ /* 0x1009E059: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if ((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) == 0u || (((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_1009E061; /* 0x1009E05B: jle 0x1009e061 */
L_1009E05D:
    RECOMP_BACKEDGE();
    goto L_1009E02C; /* 0x1009E05D: jmp 0x1009e02c */
L_1009E05F:
    SET_LO8(ebx, 1); /* 0x1009E05F: mov bl, 1 */
L_1009E061:
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(1);
    edi = edi + 1; /* 0x1009E061: inc edi */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 0x10u; /* 0x1009E062: add ecx, 0x10 */
    _flag_k = FK_ADD;
    MEM32(ebp + 0xC) = ecx; /* 0x1009E065: mov dword ptr [ebp + 0xc], ecx */
    /* cmp edi, MEM32(esi) */ /* 0x1009E068: cmp edi, dword ptr [esi] */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(MEM32(esi));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_L(_flag_a, _flag_b)) goto L_1009E014; /* 0x1009E06A: jl 0x1009e014 */
L_1009E06C:
    edi = POP32_VAL(esp); /* 0x1009E06C: pop edi */
    esi = POP32_VAL(esp); /* 0x1009E06D: pop esi */
    SET_LO8(eax, LO8(ebx)); /* 0x1009E06E: mov al, bl */
    ebx = POP32_VAL(esp); /* 0x1009E070: pop ebx */
    esp = ebp; /* 0x1009E071: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x1009E073: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1009E074: ret  */
L_1009E075:
    RECOMP_CALL(sub_1009DBD2); /* 0x1009E075: call 0x1009dbd2 */
    RECOMP_FLAGS_IN();
    goto L_1009E07C; /* 0x1009E07A: jmp 0x1009e07c */
L_1009E07C:
    RECOMP_CALL(sub_1009DC2C); /* 0x1009E07C: call 0x1009dc2c */
    RECOMP_FLAGS_IN();
    PUSH32(esp, ebp); /* 0x1009E081: push ebp */
    ebp = esp; /* 0x1009E082: mov ebp, esp */
    PUSH32(esp, esi); /* 0x1009E084: push esi */
    esi = MEM32(ebp + 0xC); /* 0x1009E085: mov esi, dword ptr [ebp + 0xc] */
    PUSH32(esp, edi); /* 0x1009E088: push edi */
    /* test esi, esi */ /* 0x1009E089: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1009E092; /* 0x1009E08B: jne 0x1009e092 */
L_1009E08D:
    RECOMP_CALL(sub_1009DBD2); /* 0x1009E08D: call 0x1009dbd2 */
    RECOMP_FLAGS_IN();
L_1009E092:
    esi = MEM32(esi); /* 0x1009E092: mov esi, dword ptr [esi] */
    /* test esi, esi */ /* 0x1009E094: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1009E09D; /* 0x1009E096: jne 0x1009e09d */
L_1009E098:
    RECOMP_CALL(sub_1009DBD2); /* 0x1009E098: call 0x1009dbd2 */
    RECOMP_FLAGS_IN();
L_1009E09D:
    /* cmp MEM32(esi), 0xE06D7363u */ /* 0x1009E09D: cmp dword ptr [esi], 0xe06d7363 */
    _flag_a = (uint32_t)(MEM32(esi)); _flag_b = (uint32_t)(0xE06D7363u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_1009E0C6; /* 0x1009E0A3: jne 0x1009e0c6 */
L_1009E0A5:
    /* cmp MEM32(esi + 0x10), 3 */ /* 0x1009E0A5: cmp dword ptr [esi + 0x10], 3 */
    _flag_a = (uint32_t)(MEM32(esi + 0x10)); _flag_b = (uint32_t)(3);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_1009E0C6; /* 0x1009E0A9: jne 0x1009e0c6 */
L_1009E0AB:
    /* cmp MEM32(esi + 0x14), 0x19930520u */ /* 0x1009E0AB: cmp dword ptr [esi + 0x14], 0x19930520 */
    _flag_a = (uint32_t)(MEM32(esi + 0x14)); _flag_b = (uint32_t)(0x19930520u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1009E0CB; /* 0x1009E0B2: je 0x1009e0cb */
L_1009E0B4:
    /* cmp MEM32(esi + 0x14), 0x19930521u */ /* 0x1009E0B4: cmp dword ptr [esi + 0x14], 0x19930521 */
    _flag_a = (uint32_t)(MEM32(esi + 0x14)); _flag_b = (uint32_t)(0x19930521u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1009E0CB; /* 0x1009E0BB: je 0x1009e0cb */
L_1009E0BD:
    /* cmp MEM32(esi + 0x14), 0x19930522u */ /* 0x1009E0BD: cmp dword ptr [esi + 0x14], 0x19930522 */
    _flag_a = (uint32_t)(MEM32(esi + 0x14)); _flag_b = (uint32_t)(0x19930522u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1009E0CB; /* 0x1009E0C4: je 0x1009e0cb */
L_1009E0C6:
    RECOMP_CALL(sub_1009DBD2); /* 0x1009E0C6: call 0x1009dbd2 */
    RECOMP_FLAGS_IN();
L_1009E0CB:
    eax = MEM32(esi + 0x1C); /* 0x1009E0CB: mov eax, dword ptr [esi + 0x1c] */
    eax = MEM32(eax + 0xC); /* 0x1009E0CE: mov eax, dword ptr [eax + 0xc] */
    esi = MEM32(eax); /* 0x1009E0D1: mov esi, dword ptr [eax] */
    edi = eax + 0x4; /* 0x1009E0D3: lea edi, [eax + 4] */
    goto L_1009E0F9; /* 0x1009E0D6: jmp 0x1009e0f9 */
L_1009E0D8:
    eax = MEM32(edi); /* 0x1009E0D8: mov eax, dword ptr [edi] */
    ecx = MEM32(ebp + 0x8); /* 0x1009E0DA: mov ecx, dword ptr [ebp + 8] */
    eax = MEM32(eax + 0x4); /* 0x1009E0DD: mov eax, dword ptr [eax + 4] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 8; /* 0x1009E0E0: add eax, 8 */
    _flag_k = FK_ADD;
    PUSH32(esp, eax); /* 0x1009E0E3: push eax */
    RECOMP_CALL(sub_1009DE98); /* 0x1009E0E4: call 0x1009de98 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, eax); /* 0x1009E0E9: push eax */
    RECOMP_CALL(sub_1001413E); /* 0x1009E0EA: call 0x1001413e */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1009E0EF: pop ecx */
    ecx = POP32_VAL(esp); /* 0x1009E0F0: pop ecx */
    /* test eax, eax */ /* 0x1009E0F1: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1009E103; /* 0x1009E0F3: je 0x1009e103 */
L_1009E0F5:
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi - 1; /* 0x1009E0F5: dec esi */
    _flag_k = FK_DEC;
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edi = edi + 4; /* 0x1009E0F6: add edi, 4 */
    _flag_k = FK_ADD;
L_1009E0F9:
    /* test esi, esi */ /* 0x1009E0F9: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if ((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) != 0u && (((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) == 0u)) goto L_1009E0D8; /* 0x1009E0FB: jg 0x1009e0d8 */
L_1009E0FD:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1009E0FD: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
L_1009E0FF:
    edi = POP32_VAL(esp); /* 0x1009E0FF: pop edi */
    esi = POP32_VAL(esp); /* 0x1009E100: pop esi */
    ebp = POP32_VAL(esp); /* 0x1009E101: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1009E102: ret  */
L_1009E103:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1009E103: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x1009E105: inc eax */
    _flag_k = FK_INC;
    RECOMP_BACKEDGE();
    goto L_1009E0FF; /* 0x1009E106: jmp 0x1009e0ff */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    RECOMP_REGS_OUT();
}

void sub_1009E081(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1009E081u);

L_1009E081:
    PUSH32(esp, ebp); /* 0x1009E081: push ebp */
    ebp = esp; /* 0x1009E082: mov ebp, esp */
    PUSH32(esp, esi); /* 0x1009E084: push esi */
    esi = MEM32(ebp + 0xC); /* 0x1009E085: mov esi, dword ptr [ebp + 0xc] */
    PUSH32(esp, edi); /* 0x1009E088: push edi */
    /* test esi, esi */ /* 0x1009E089: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1009E092; /* 0x1009E08B: jne 0x1009e092 */
L_1009E08D:
    RECOMP_CALL(sub_1009DBD2); /* 0x1009E08D: call 0x1009dbd2 */
    RECOMP_FLAGS_IN();
L_1009E092:
    esi = MEM32(esi); /* 0x1009E092: mov esi, dword ptr [esi] */
    /* test esi, esi */ /* 0x1009E094: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1009E09D; /* 0x1009E096: jne 0x1009e09d */
L_1009E098:
    RECOMP_CALL(sub_1009DBD2); /* 0x1009E098: call 0x1009dbd2 */
    RECOMP_FLAGS_IN();
L_1009E09D:
    /* cmp MEM32(esi), 0xE06D7363u */ /* 0x1009E09D: cmp dword ptr [esi], 0xe06d7363 */
    _flag_a = (uint32_t)(MEM32(esi)); _flag_b = (uint32_t)(0xE06D7363u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_1009E0C6; /* 0x1009E0A3: jne 0x1009e0c6 */
L_1009E0A5:
    /* cmp MEM32(esi + 0x10), 3 */ /* 0x1009E0A5: cmp dword ptr [esi + 0x10], 3 */
    _flag_a = (uint32_t)(MEM32(esi + 0x10)); _flag_b = (uint32_t)(3);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_1009E0C6; /* 0x1009E0A9: jne 0x1009e0c6 */
L_1009E0AB:
    /* cmp MEM32(esi + 0x14), 0x19930520u */ /* 0x1009E0AB: cmp dword ptr [esi + 0x14], 0x19930520 */
    _flag_a = (uint32_t)(MEM32(esi + 0x14)); _flag_b = (uint32_t)(0x19930520u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1009E0CB; /* 0x1009E0B2: je 0x1009e0cb */
L_1009E0B4:
    /* cmp MEM32(esi + 0x14), 0x19930521u */ /* 0x1009E0B4: cmp dword ptr [esi + 0x14], 0x19930521 */
    _flag_a = (uint32_t)(MEM32(esi + 0x14)); _flag_b = (uint32_t)(0x19930521u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1009E0CB; /* 0x1009E0BB: je 0x1009e0cb */
L_1009E0BD:
    /* cmp MEM32(esi + 0x14), 0x19930522u */ /* 0x1009E0BD: cmp dword ptr [esi + 0x14], 0x19930522 */
    _flag_a = (uint32_t)(MEM32(esi + 0x14)); _flag_b = (uint32_t)(0x19930522u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1009E0CB; /* 0x1009E0C4: je 0x1009e0cb */
L_1009E0C6:
    RECOMP_CALL(sub_1009DBD2); /* 0x1009E0C6: call 0x1009dbd2 */
    RECOMP_FLAGS_IN();
L_1009E0CB:
    eax = MEM32(esi + 0x1C); /* 0x1009E0CB: mov eax, dword ptr [esi + 0x1c] */
    eax = MEM32(eax + 0xC); /* 0x1009E0CE: mov eax, dword ptr [eax + 0xc] */
    esi = MEM32(eax); /* 0x1009E0D1: mov esi, dword ptr [eax] */
    edi = eax + 0x4; /* 0x1009E0D3: lea edi, [eax + 4] */
    goto L_1009E0F9; /* 0x1009E0D6: jmp 0x1009e0f9 */
L_1009E0D8:
    eax = MEM32(edi); /* 0x1009E0D8: mov eax, dword ptr [edi] */
    ecx = MEM32(ebp + 0x8); /* 0x1009E0DA: mov ecx, dword ptr [ebp + 8] */
    eax = MEM32(eax + 0x4); /* 0x1009E0DD: mov eax, dword ptr [eax + 4] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 8; /* 0x1009E0E0: add eax, 8 */
    _flag_k = FK_ADD;
    PUSH32(esp, eax); /* 0x1009E0E3: push eax */
    RECOMP_CALL(sub_1009DE98); /* 0x1009E0E4: call 0x1009de98 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, eax); /* 0x1009E0E9: push eax */
    RECOMP_CALL(sub_1001413E); /* 0x1009E0EA: call 0x1001413e */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1009E0EF: pop ecx */
    ecx = POP32_VAL(esp); /* 0x1009E0F0: pop ecx */
    /* test eax, eax */ /* 0x1009E0F1: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1009E103; /* 0x1009E0F3: je 0x1009e103 */
L_1009E0F5:
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi - 1; /* 0x1009E0F5: dec esi */
    _flag_k = FK_DEC;
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edi = edi + 4; /* 0x1009E0F6: add edi, 4 */
    _flag_k = FK_ADD;
L_1009E0F9:
    /* test esi, esi */ /* 0x1009E0F9: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if ((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) != 0u && (((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) == 0u)) goto L_1009E0D8; /* 0x1009E0FB: jg 0x1009e0d8 */
L_1009E0FD:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1009E0FD: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
L_1009E0FF:
    edi = POP32_VAL(esp); /* 0x1009E0FF: pop edi */
    esi = POP32_VAL(esp); /* 0x1009E100: pop esi */
    ebp = POP32_VAL(esp); /* 0x1009E101: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1009E102: ret  */
L_1009E103:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1009E103: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x1009E105: inc eax */
    _flag_k = FK_INC;
    RECOMP_BACKEDGE();
    goto L_1009E0FF; /* 0x1009E106: jmp 0x1009e0ff */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    RECOMP_REGS_OUT();
}

void sub_1009E108(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1009E108u);

L_1009E108:
    PUSH32(esp, ebp); /* 0x1009E108: push ebp */
    ebp = esp; /* 0x1009E109: mov ebp, esp */
    eax = MEM32(ebp + 0x8); /* 0x1009E10B: mov eax, dword ptr [ebp + 8] */
    MEM32(0x100E40B8) = eax; /* 0x1009E10E: mov dword ptr [0x100e40b8], eax */
    ebp = POP32_VAL(esp); /* 0x1009E113: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1009E114: ret  */
    RECOMP_REGS_OUT();
}

void sub_1009E115(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1009E115u);

L_1009E115:
    PUSH32(esp, ebp); /* 0x1009E115: push ebp */
    ebp = esp; /* 0x1009E116: mov ebp, esp */
    eax = MEM32(ebp + 0x8); /* 0x1009E118: mov eax, dword ptr [ebp + 8] */
    /* test eax, eax */ /* 0x1009E11B: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1009E160; /* 0x1009E11D: je 0x1009e160 */
L_1009E11F:
    eax = MEM32(eax); /* 0x1009E11F: mov eax, dword ptr [eax] */
    /* cmp MEM32(eax), 0xE06D7363u */ /* 0x1009E121: cmp dword ptr [eax], 0xe06d7363 */
    _flag_a = (uint32_t)(MEM32(eax)); _flag_b = (uint32_t)(0xE06D7363u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_1009E160; /* 0x1009E127: jne 0x1009e160 */
L_1009E129:
    /* cmp MEM32(eax + 0x10), 3 */ /* 0x1009E129: cmp dword ptr [eax + 0x10], 3 */
    _flag_a = (uint32_t)(MEM32(eax + 0x10)); _flag_b = (uint32_t)(3);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_1009E160; /* 0x1009E12D: jne 0x1009e160 */
L_1009E12F:
    /* cmp MEM32(eax + 0x14), 0x19930520u */ /* 0x1009E12F: cmp dword ptr [eax + 0x14], 0x19930520 */
    _flag_a = (uint32_t)(MEM32(eax + 0x14)); _flag_b = (uint32_t)(0x19930520u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1009E14A; /* 0x1009E136: je 0x1009e14a */
L_1009E138:
    /* cmp MEM32(eax + 0x14), 0x19930521u */ /* 0x1009E138: cmp dword ptr [eax + 0x14], 0x19930521 */
    _flag_a = (uint32_t)(MEM32(eax + 0x14)); _flag_b = (uint32_t)(0x19930521u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1009E14A; /* 0x1009E13F: je 0x1009e14a */
L_1009E141:
    /* cmp MEM32(eax + 0x14), 0x19930522u */ /* 0x1009E141: cmp dword ptr [eax + 0x14], 0x19930522 */
    _flag_a = (uint32_t)(MEM32(eax + 0x14)); _flag_b = (uint32_t)(0x19930522u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_1009E160; /* 0x1009E148: jne 0x1009e160 */
L_1009E14A:
    /* cmp MEM32(eax + 0x1C), 0 */ /* 0x1009E14A: cmp dword ptr [eax + 0x1c], 0 */
    _flag_a = (uint32_t)(MEM32(eax + 0x1C)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_1009E160; /* 0x1009E14E: jne 0x1009e160 */
L_1009E150:
    RECOMP_CALL(sub_1000F750); /* 0x1009E150: call 0x1000f750 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(MEM32(eax + 0x90)); _flag_b = (uint32_t)(1);
    MEM32(eax + 0x90) = MEM32(eax + 0x90) + 1; /* 0x1009E155: inc dword ptr [eax + 0x90] */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1009E15B: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x1009E15D: inc eax */
    _flag_k = FK_INC;
    ebp = POP32_VAL(esp); /* 0x1009E15E: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1009E15F: ret  */
L_1009E160:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1009E160: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    ebp = POP32_VAL(esp); /* 0x1009E162: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1009E163: ret  */
    RECOMP_REGS_OUT();
}

void sub_1009E164(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1009E164u);

    goto L_1009E164;
L_1009DC2C:
    PUSH32(esp, 8); /* 0x1009DC2C: push 8 */
    PUSH32(esp, 0x1009DC60u); /* 0x1009DC2E: push 0x1009dc60 */
    RECOMP_CALL(sub_1000ED7E); /* 0x1009DC33: call 0x1000ed7e */
    RECOMP_FLAGS_IN();
    RECOMP_CALL(sub_1000F750); /* 0x1009DC38: call 0x1000f750 */
    RECOMP_FLAGS_IN();
    eax = MEM32(eax + 0x78); /* 0x1009DC3D: mov eax, dword ptr [eax + 0x78] */
    /* test eax, eax */ /* 0x1009DC40: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1009DC5A; /* 0x1009DC42: je 0x1009dc5a */
L_1009DC44:
    _flag_a = (uint32_t)(MEM32(ebp + (-0x4))); _flag_b = (uint32_t)(0);
    MEM32(ebp + (-0x4)) = MEM32(ebp + (-0x4)) & 0; /* 0x1009DC44: and dword ptr [ebp - 4], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_ICALL(eax); /* 0x1009DC48: call eax */
    RECOMP_FLAGS_IN();
    goto L_1009DC53; /* 0x1009DC4A: jmp 0x1009dc53 */
L_1009DC53:
    MEM32(ebp + (-0x4)) = 0xFFFFFFFEu; /* 0x1009DC53: mov dword ptr [ebp - 4], 0xfffffffe */
L_1009DC5A:
    RECOMP_CALL(sub_100A763E); /* 0x1009DC5A: call 0x100a763e */
    RECOMP_FLAGS_IN();
    void_lift_trap(0x1009DC5Fu, "int3 ");
L_1009E164:
    PUSH32(esp, ebp); /* 0x1009E164: push ebp */
    ebp = esp; /* 0x1009E165: mov ebp, esp */
    eax = MEM32(ebp + 0x8); /* 0x1009E167: mov eax, dword ptr [ebp + 8] */
    eax = MEM32(eax); /* 0x1009E16A: mov eax, dword ptr [eax] */
    /* cmp MEM32(eax), 0xE0434352u */ /* 0x1009E16C: cmp dword ptr [eax], 0xe0434352 */
    _flag_a = (uint32_t)(MEM32(eax)); _flag_b = (uint32_t)(0xE0434352u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1009E195; /* 0x1009E172: je 0x1009e195 */
L_1009E174:
    /* cmp MEM32(eax), 0xE0434F4Du */ /* 0x1009E174: cmp dword ptr [eax], 0xe0434f4d */
    _flag_a = (uint32_t)(MEM32(eax)); _flag_b = (uint32_t)(0xE0434F4Du);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1009E195; /* 0x1009E17A: je 0x1009e195 */
L_1009E17C:
    /* cmp MEM32(eax), 0xE06D7363u */ /* 0x1009E17C: cmp dword ptr [eax], 0xe06d7363 */
    _flag_a = (uint32_t)(MEM32(eax)); _flag_b = (uint32_t)(0xE06D7363u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_1009E1AE; /* 0x1009E182: jne 0x1009e1ae */
L_1009E184:
    RECOMP_CALL(sub_1000F750); /* 0x1009E184: call 0x1000f750 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(MEM32(eax + 0x90)); _flag_b = (uint32_t)(0);
    MEM32(eax + 0x90) = MEM32(eax + 0x90) & 0; /* 0x1009E189: and dword ptr [eax + 0x90], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    goto L_1009DC2C; /* 0x1009E190: jmp 0x1009dc2c */
L_1009E195:
    RECOMP_CALL(sub_1000F750); /* 0x1009E195: call 0x1000f750 */
    RECOMP_FLAGS_IN();
    /* cmp MEM32(eax + 0x90), 0 */ /* 0x1009E19A: cmp dword ptr [eax + 0x90], 0 */
    _flag_a = (uint32_t)(MEM32(eax + 0x90)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_LE(_flag_a, _flag_b)) goto L_1009E1AE; /* 0x1009E1A1: jle 0x1009e1ae */
L_1009E1A3:
    RECOMP_CALL(sub_1000F750); /* 0x1009E1A3: call 0x1000f750 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(MEM32(eax + 0x90)); _flag_b = (uint32_t)(1);
    MEM32(eax + 0x90) = MEM32(eax + 0x90) - 1; /* 0x1009E1A8: dec dword ptr [eax + 0x90] */
    _flag_k = FK_DEC;
L_1009E1AE:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1009E1AE: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    ebp = POP32_VAL(esp); /* 0x1009E1B0: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1009E1B1: ret  */
    RECOMP_REGS_OUT();
}

void sub_1009E1B2(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1009E1B2u);

L_1009E1B2:
    PUSH32(esp, ebp); /* 0x1009E1B2: push ebp */
    ebp = esp; /* 0x1009E1B3: mov ebp, esp */
    PUSH32(esp, esi); /* 0x1009E1B5: push esi */
    esi = MEM32(ebp + 0x8); /* 0x1009E1B6: mov esi, dword ptr [ebp + 8] */
    _flag_a = (uint32_t)(MEM32(esi)); _flag_b = (uint32_t)(0);
    MEM32(esi) = MEM32(esi) & 0; /* 0x1009E1B9: and dword ptr [esi], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_1000F750); /* 0x1009E1BC: call 0x1000f750 */
    RECOMP_FLAGS_IN();
    eax = MEM32(eax + 0x88); /* 0x1009E1C1: mov eax, dword ptr [eax + 0x88] */
    /* test eax, eax */ /* 0x1009E1C7: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1009E202; /* 0x1009E1C9: je 0x1009e202 */
L_1009E1CB:
    ecx = MEM32(eax + 0x1C); /* 0x1009E1CB: mov ecx, dword ptr [eax + 0x1c] */
    /* test ecx, ecx */ /* 0x1009E1CE: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1009E1E1; /* 0x1009E1D0: je 0x1009e1e1 */
L_1009E1D2:
    /* test MEM8(ecx), 0x10u */ /* 0x1009E1D2: test byte ptr [ecx], 0x10 */
    _flag_a = (uint32_t)(MEM8(ecx)) << 24; _flag_b = (uint32_t)(0x10u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_1009E1E1; /* 0x1009E1D5: je 0x1009e1e1 */
L_1009E1D7:
    eax = MEM32(eax + 0x18); /* 0x1009E1D7: mov eax, dword ptr [eax + 0x18] */
    eax = MEM32(eax); /* 0x1009E1DA: mov eax, dword ptr [eax] */
    eax = MEM32(eax + (-0x4)); /* 0x1009E1DC: mov eax, dword ptr [eax - 4] */
    goto L_1009E204; /* 0x1009E1DF: jmp 0x1009e204 */
L_1009E1E1:
    eax = MEM32(ecx + 0xC); /* 0x1009E1E1: mov eax, dword ptr [ecx + 0xc] */
    ecx = MEM32(eax); /* 0x1009E1E4: mov ecx, dword ptr [eax] */
    edx = eax + 0x4; /* 0x1009E1E6: lea edx, [eax + 4] */
    goto L_1009E1F6; /* 0x1009E1E9: jmp 0x1009e1f6 */
L_1009E1EB:
    eax = MEM32(edx); /* 0x1009E1EB: mov eax, dword ptr [edx] */
    /* test MEM8(eax), 0x10u */ /* 0x1009E1ED: test byte ptr [eax], 0x10 */
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(0x10u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1009E1FC; /* 0x1009E1F0: jne 0x1009e1fc */
L_1009E1F2:
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx - 1; /* 0x1009E1F2: dec ecx */
    _flag_k = FK_DEC;
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edx = edx + 4; /* 0x1009E1F3: add edx, 4 */
    _flag_k = FK_ADD;
L_1009E1F6:
    /* test ecx, ecx */ /* 0x1009E1F6: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if ((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) == 0u || (((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_1009E202; /* 0x1009E1F8: jle 0x1009e202 */
L_1009E1FA:
    RECOMP_BACKEDGE();
    goto L_1009E1EB; /* 0x1009E1FA: jmp 0x1009e1eb */
L_1009E1FC:
    MEM32(esi) = 1; /* 0x1009E1FC: mov dword ptr [esi], 1 */
L_1009E202:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1009E202: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
L_1009E204:
    esi = POP32_VAL(esp); /* 0x1009E204: pop esi */
    ebp = POP32_VAL(esp); /* 0x1009E205: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1009E206: ret  */
    RECOMP_REGS_OUT();
}

void sub_1009E207(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1009E207u);

    goto L_1009E207;
L_100149D7:
    ecx = MEM32(ebp + (-0xC)); /* 0x100149D7: mov ecx, dword ptr [ebp - 0xc] */
    MEM32(FS_BASE + (0)) = ecx; /* 0x100149DA: mov dword ptr fs:[0], ecx */
    ecx = POP32_VAL(esp); /* 0x100149E1: pop ecx */
    edi = POP32_VAL(esp); /* 0x100149E2: pop edi */
    edi = POP32_VAL(esp); /* 0x100149E3: pop edi */
    esi = POP32_VAL(esp); /* 0x100149E4: pop esi */
    ebx = POP32_VAL(esp); /* 0x100149E5: pop ebx */
    esp = ebp; /* 0x100149E6: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x100149E8: pop ebp */
    PUSH32(esp, ecx); /* 0x100149E9: push ecx */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x100149EA: ret  */
L_1009E207:
    ecx = MEM32(ebp + (-0x14)); /* 0x1009E207: mov ecx, dword ptr [ebp - 0x14] */
    _flag_a = (uint32_t)((ecx ^ ebp)); _flag_b = (uint32_t)((ecx ^ ebp));
    ecx = ecx ^ ebp; /* 0x1009E20A: xor ecx, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_1000F7C6); /* 0x1009E20C: call 0x1000f7c6 */
    RECOMP_FLAGS_IN();
    RECOMP_BACKEDGE();
    goto L_100149D7; /* 0x1009E211: jmp 0x100149d7 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    RECOMP_REGS_OUT();
}

void sub_1009E216(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1009E216u);

L_1009E216:
    PUSH32(esp, eax); /* 0x1009E216: push eax */
    PUSH32(esp, MEM32(FS_BASE + (0))); /* 0x1009E217: push dword ptr fs:[0] */
    eax = esp + 0xC; /* 0x1009E21E: lea eax, [esp + 0xc] */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(MEM32(esp + 0xC));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - MEM32(esp + 0xC); /* 0x1009E222: sub esp, dword ptr [esp + 0xc] */
    _flag_k = FK_CMP;
    PUSH32(esp, ebx); /* 0x1009E226: push ebx */
    PUSH32(esp, esi); /* 0x1009E227: push esi */
    PUSH32(esp, edi); /* 0x1009E228: push edi */
    MEM32(eax) = ebp; /* 0x1009E229: mov dword ptr [eax], ebp */
    ebp = eax; /* 0x1009E22B: mov ebp, eax */
    eax = MEM32(0x100DF7B8); /* 0x1009E22D: mov eax, dword ptr [0x100df7b8] */
    _flag_a = (uint32_t)((eax ^ ebp)); _flag_b = (uint32_t)((eax ^ ebp));
    eax = eax ^ ebp; /* 0x1009E232: xor eax, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, eax); /* 0x1009E234: push eax */
    MEM32(ebp + (-0x14)) = eax; /* 0x1009E235: mov dword ptr [ebp - 0x14], eax */
    MEM32(ebp + (-0x10)) = esp; /* 0x1009E238: mov dword ptr [ebp - 0x10], esp */
    PUSH32(esp, MEM32(ebp + (-0x4))); /* 0x1009E23B: push dword ptr [ebp - 4] */
    MEM32(ebp + (-0x4)) = 0xFFFFFFFFu; /* 0x1009E23E: mov dword ptr [ebp - 4], 0xffffffff */
    eax = ebp + (-0xC); /* 0x1009E245: lea eax, [ebp - 0xc] */
    MEM32(FS_BASE + (0)) = eax; /* 0x1009E248: mov dword ptr fs:[0], eax */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1009E24E: ret  */
    RECOMP_REGS_OUT();
}

void sub_1009E24F(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1009E24Fu);

L_1009E24F:
    PUSH32(esp, 0xCu); /* 0x1009E24F: push 0xc */
    PUSH32(esp, 0x1009E2C0u); /* 0x1009E251: push 0x1009e2c0 */
    RECOMP_CALL(sub_1000ED7E); /* 0x1009E256: call 0x1000ed7e */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(MEM32(ebp + (-0x1C))); _flag_b = (uint32_t)(0);
    MEM32(ebp + (-0x1C)) = MEM32(ebp + (-0x1C)) & 0; /* 0x1009E25B: and dword ptr [ebp - 0x1c], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    ebx = MEM32(ebp + 0xC); /* 0x1009E25F: mov ebx, dword ptr [ebp + 0xc] */
    eax = ebx; /* 0x1009E262: mov eax, ebx */
    edi = MEM32(ebp + 0x10); /* 0x1009E264: mov edi, dword ptr [ebp + 0x10] */
    eax = (uint32_t)((int32_t)eax * (int32_t)edi); /* 0x1009E267: imul eax, edi */
    esi = MEM32(ebp + 0x8); /* 0x1009E26A: mov esi, dword ptr [ebp + 8] */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esi = esi + eax; /* 0x1009E26D: add esi, eax */
    _flag_k = FK_ADD;
    MEM32(ebp + 0x8) = esi; /* 0x1009E26F: mov dword ptr [ebp + 8], esi */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x4))); _flag_b = (uint32_t)(0);
    MEM32(ebp + (-0x4)) = MEM32(ebp + (-0x4)) & 0; /* 0x1009E272: and dword ptr [ebp - 4], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
L_1009E276:
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(1);
    edi = edi - 1; /* 0x1009E276: dec edi */
    _flag_k = FK_DEC;
    MEM32(ebp + 0x10) = edi; /* 0x1009E277: mov dword ptr [ebp + 0x10], edi */
    if (/* dec result */ CMP_S(_flag_a, _flag_b)) goto L_1009E288; /* 0x1009E27A: js 0x1009e288 */
L_1009E27C:
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esi = esi - ebx; /* 0x1009E27C: sub esi, ebx */
    _flag_k = FK_CMP;
    MEM32(ebp + 0x8) = esi; /* 0x1009E27E: mov dword ptr [ebp + 8], esi */
    ecx = esi; /* 0x1009E281: mov ecx, esi */
    RECOMP_ICALL(MEM32(ebp + 0x14)); /* 0x1009E283: call dword ptr [ebp + 0x14] */
    RECOMP_FLAGS_IN();
    RECOMP_BACKEDGE();
    goto L_1009E276; /* 0x1009E286: jmp 0x1009e276 */
L_1009E288:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1009E288: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x1009E28A: inc eax */
    _flag_k = FK_INC;
    MEM32(ebp + (-0x1C)) = eax; /* 0x1009E28B: mov dword ptr [ebp - 0x1c], eax */
    MEM32(ebp + (-0x4)) = 0xFFFFFFFEu; /* 0x1009E28E: mov dword ptr [ebp - 4], 0xfffffffe */
    RECOMP_CALL(sub_1009E2AE); /* 0x1009E295: call 0x1009e2ae */
    RECOMP_FLAGS_IN();
    RECOMP_CALL(sub_1000EDC3); /* 0x1009E29A: call 0x1000edc3 */
    RECOMP_FLAGS_IN();
    RECOMP_FLAGS_OUT(); esp += 20; { RECOMP_REGS_OUT(); return; } /* 0x1009E29F: ret 0x10 */
    RECOMP_REGS_OUT();
}

void sub_1009E2AE(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1009E2AEu);

L_1009E2AE:
    /* test eax, eax */ /* 0x1009E2AE: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1009E2BD; /* 0x1009E2B0: jne 0x1009e2bd */
L_1009E2B2:
    PUSH32(esp, MEM32(ebp + 0x14)); /* 0x1009E2B2: push dword ptr [ebp + 0x14] */
    PUSH32(esp, edi); /* 0x1009E2B5: push edi */
    PUSH32(esp, ebx); /* 0x1009E2B6: push ebx */
    PUSH32(esp, esi); /* 0x1009E2B7: push esi */
    RECOMP_CALL(sub_1009E2DC); /* 0x1009E2B8: call 0x1009e2dc */
    RECOMP_FLAGS_IN();
L_1009E2BD:
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1009E2BD: ret  */
    RECOMP_REGS_OUT();
}

void sub_1009E2DC(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1009E2DCu);

L_1009E2DC:
    PUSH32(esp, 0x14u); /* 0x1009E2DC: push 0x14 */
    PUSH32(esp, 0x1009E340u); /* 0x1009E2DE: push 0x1009e340 */
    RECOMP_CALL(sub_1000ED7E); /* 0x1009E2E3: call 0x1000ed7e */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(MEM32(ebp + (-0x4))); _flag_b = (uint32_t)(0);
    MEM32(ebp + (-0x4)) = MEM32(ebp + (-0x4)) & 0; /* 0x1009E2E8: and dword ptr [ebp - 4], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
L_1009E2EC:
    _flag_a = (uint32_t)(MEM32(ebp + 0x10)); _flag_b = (uint32_t)(1);
    MEM32(ebp + 0x10) = MEM32(ebp + 0x10) - 1; /* 0x1009E2EC: dec dword ptr [ebp + 0x10] */
    _flag_k = FK_DEC;
    if (/* dec result */ CMP_S(_flag_a, _flag_b)) goto L_1009E32B; /* 0x1009E2EF: js 0x1009e32b */
L_1009E2F1:
    ecx = MEM32(ebp + 0x8); /* 0x1009E2F1: mov ecx, dword ptr [ebp + 8] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(MEM32(ebp + 0xC));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ecx = ecx - MEM32(ebp + 0xC); /* 0x1009E2F4: sub ecx, dword ptr [ebp + 0xc] */
    _flag_k = FK_CMP;
    MEM32(ebp + 0x8) = ecx; /* 0x1009E2F7: mov dword ptr [ebp + 8], ecx */
    RECOMP_ICALL(MEM32(ebp + 0x14)); /* 0x1009E2FA: call dword ptr [ebp + 0x14] */
    RECOMP_FLAGS_IN();
    RECOMP_BACKEDGE();
    goto L_1009E2EC; /* 0x1009E2FD: jmp 0x1009e2ec */
L_1009E32B:
    MEM32(ebp + (-0x4)) = 0xFFFFFFFEu; /* 0x1009E32B: mov dword ptr [ebp - 4], 0xfffffffe */
    RECOMP_CALL(sub_1000EDC3); /* 0x1009E332: call 0x1000edc3 */
    RECOMP_FLAGS_IN();
    RECOMP_FLAGS_OUT(); esp += 20; { RECOMP_REGS_OUT(); return; } /* 0x1009E337: ret 0x10 */
    RECOMP_REGS_OUT();
}

void sub_1009E35C(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1009E35Cu);

L_1009E35C:
    PUSH32(esp, 0x14u); /* 0x1009E35C: push 0x14 */
    PUSH32(esp, 0x1009E468u); /* 0x1009E35E: push 0x1009e468 */
    RECOMP_CALL(sub_1000ED7E); /* 0x1009E363: call 0x1000ed7e */
    RECOMP_FLAGS_IN();
    edi = MEM32(ebp + 0x8); /* 0x1009E368: mov edi, dword ptr [ebp + 8] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ebx = 0; /* 0x1009E36B: xor ebx, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp MEM32(edi + 0x4), ebx */ /* 0x1009E36D: cmp dword ptr [edi + 4], ebx */
    _flag_a = (uint32_t)(MEM32(edi + 0x4)); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_1009E451; /* 0x1009E370: jne 0x1009e451 */
L_1009E376:
    PUSH32(esp, 0xEu); /* 0x1009E376: push 0xe */
    RECOMP_CALL(sub_1000EDD7); /* 0x1009E378: call 0x1000edd7 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1009E37D: pop ecx */
    MEM32(ebp + (-0x4)) = ebx; /* 0x1009E37E: mov dword ptr [ebp - 4], ebx */
    /* cmp MEM32(edi + 0x4), ebx */ /* 0x1009E381: cmp dword ptr [edi + 4], ebx */
    _flag_a = (uint32_t)(MEM32(edi + 0x4)); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_1009E445; /* 0x1009E384: jne 0x1009e445 */
L_1009E38A:
    PUSH32(esp, 0x2800u); /* 0x1009E38A: push 0x2800 */
    PUSH32(esp, ebx); /* 0x1009E38F: push ebx */
    eax = edi + 0x9; /* 0x1009E390: lea eax, [edi + 9] */
    PUSH32(esp, eax); /* 0x1009E393: push eax */
    PUSH32(esp, ebx); /* 0x1009E394: push ebx */
    RECOMP_CALL(sub_1009E514); /* 0x1009E395: call 0x1009e514 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x10u; /* 0x1009E39A: add esp, 0x10 */
    _flag_k = FK_ADD;
    ebx = eax; /* 0x1009E39D: mov ebx, eax */
    /* test ebx, ebx */ /* 0x1009E39F: test ebx, ebx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ebx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1009E3BD; /* 0x1009E3A1: jne 0x1009e3bd */
L_1009E3A3:
    PUSH32(esp, 0xFFFFFFFEu); /* 0x1009E3A3: push -2 */
    eax = ebp + (-0x10); /* 0x1009E3A5: lea eax, [ebp - 0x10] */
    PUSH32(esp, eax); /* 0x1009E3A8: push eax */
    PUSH32(esp, 0x100DF7B8u); /* 0x1009E3A9: push 0x100df7b8 */
    RECOMP_CALL(sub_100321EE); /* 0x1009E3AE: call 0x100321ee */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x1009E3B3: add esp, 0xc */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1009E3B6: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_1009E454; /* 0x1009E3B8: jmp 0x1009e454 */
L_1009E3BD:
    PUSH32(esp, ebx); /* 0x1009E3BD: push ebx */
    RECOMP_CALL(sub_100129AF); /* 0x1009E3BE: call 0x100129af */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1009E3C3: pop ecx */
    esi = eax; /* 0x1009E3C4: mov esi, eax */
    MEM32(ebp + (-0x20)) = esi; /* 0x1009E3C6: mov dword ptr [ebp - 0x20], esi */
L_1009E3C9:
    eax = esi; /* 0x1009E3C9: mov eax, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi - 1; /* 0x1009E3CB: dec esi */
    _flag_k = FK_DEC;
    MEM32(ebp + (-0x20)) = esi; /* 0x1009E3CC: mov dword ptr [ebp - 0x20], esi */
    /* test eax, eax */ /* 0x1009E3CF: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1009E3DF; /* 0x1009E3D1: je 0x1009e3df */
L_1009E3D3:
    /* cmp MEM8(esi + ebx), 0x20u */ /* 0x1009E3D3: cmp byte ptr [esi + ebx], 0x20 */
    _flag_a = (uint32_t)(MEM8(esi + ebx)) << 24; _flag_b = (uint32_t)(0x20u) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_1009E3DF; /* 0x1009E3D7: jne 0x1009e3df */
L_1009E3D9:
    MEM8(esi + ebx) = (uint8_t)(0); /* 0x1009E3D9: mov byte ptr [esi + ebx], 0 */
    RECOMP_BACKEDGE();
    goto L_1009E3C9; /* 0x1009E3DD: jmp 0x1009e3c9 */
L_1009E3DF:
    PUSH32(esp, 8); /* 0x1009E3DF: push 8 */
    RECOMP_CALL(sub_1000ED30); /* 0x1009E3E1: call 0x1000ed30 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1009E3E6: pop ecx */
    MEM32(ebp + (-0x1C)) = eax; /* 0x1009E3E7: mov dword ptr [ebp - 0x1c], eax */
    /* test eax, eax */ /* 0x1009E3EA: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1009E43E; /* 0x1009E3EC: je 0x1009e43e */
L_1009E3EE:
    eax = esi + 0x2; /* 0x1009E3EE: lea eax, [esi + 2] */
    MEM32(ebp + (-0x24)) = eax; /* 0x1009E3F1: mov dword ptr [ebp - 0x24], eax */
    PUSH32(esp, eax); /* 0x1009E3F4: push eax */
    RECOMP_CALL(sub_1000ED30); /* 0x1009E3F5: call 0x1000ed30 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1009E3FA: pop ecx */
    esi = eax; /* 0x1009E3FB: mov esi, eax */
    /* test esi, esi */ /* 0x1009E3FD: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1009E434; /* 0x1009E3FF: je 0x1009e434 */
L_1009E401:
    PUSH32(esp, ebx); /* 0x1009E401: push ebx */
    PUSH32(esp, MEM32(ebp + (-0x24))); /* 0x1009E402: push dword ptr [ebp - 0x24] */
    PUSH32(esp, esi); /* 0x1009E405: push esi */
    RECOMP_CALL(sub_100147CD); /* 0x1009E406: call 0x100147cd */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x1009E40B: add esp, 0xc */
    _flag_k = FK_ADD;
    /* test eax, eax */ /* 0x1009E40E: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1009E428; /* 0x1009E410: jne 0x1009e428 */
L_1009E412:
    MEM32(edi + 0x4) = esi; /* 0x1009E412: mov dword ptr [edi + 4], esi */
    edx = MEM32(ebp + (-0x1C)); /* 0x1009E415: mov edx, dword ptr [ebp - 0x1c] */
    MEM32(edx) = esi; /* 0x1009E418: mov dword ptr [edx], esi */
    ecx = MEM32(ebp + 0xC); /* 0x1009E41A: mov ecx, dword ptr [ebp + 0xc] */
    eax = MEM32(ecx + 0x4); /* 0x1009E41D: mov eax, dword ptr [ecx + 4] */
    MEM32(edx + 0x4) = eax; /* 0x1009E420: mov dword ptr [edx + 4], eax */
    MEM32(ecx + 0x4) = edx; /* 0x1009E423: mov dword ptr [ecx + 4], edx */
    goto L_1009E43E; /* 0x1009E426: jmp 0x1009e43e */
L_1009E428:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1009E428: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, eax); /* 0x1009E42A: push eax */
    PUSH32(esp, eax); /* 0x1009E42B: push eax */
    PUSH32(esp, eax); /* 0x1009E42C: push eax */
    PUSH32(esp, eax); /* 0x1009E42D: push eax */
    PUSH32(esp, eax); /* 0x1009E42E: push eax */
    RECOMP_CALL(sub_100A469B); /* 0x1009E42F: call 0x100a469b */
    RECOMP_FLAGS_IN();
L_1009E434:
    edx = MEM32(ebp + (-0x1C)); /* 0x1009E434: mov edx, dword ptr [ebp - 0x1c] */
    PUSH32(esp, edx); /* 0x1009E437: push edx */
    RECOMP_CALL(sub_1000ECE0); /* 0x1009E438: call 0x1000ece0 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1009E43D: pop ecx */
L_1009E43E:
    PUSH32(esp, ebx); /* 0x1009E43E: push ebx */
    RECOMP_CALL(sub_1000ECE0); /* 0x1009E43F: call 0x1000ece0 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1009E444: pop ecx */
L_1009E445:
    MEM32(ebp + (-0x4)) = 0xFFFFFFFEu; /* 0x1009E445: mov dword ptr [ebp - 4], 0xfffffffe */
    RECOMP_CALL(sub_1009E45D); /* 0x1009E44C: call 0x1009e45d */
    RECOMP_FLAGS_IN();
L_1009E451:
    eax = MEM32(edi + 0x4); /* 0x1009E451: mov eax, dword ptr [edi + 4] */
L_1009E454:
    RECOMP_CALL(sub_1000EDC3); /* 0x1009E454: call 0x1000edc3 */
    RECOMP_FLAGS_IN();
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1009E459: ret  */
    RECOMP_REGS_OUT();
}

void sub_1009E45D(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1009E45Du);

L_1009E45D:
    PUSH32(esp, 0xEu); /* 0x1009E45D: push 0xe */
    RECOMP_CALL(sub_1000EDFC); /* 0x1009E45F: call 0x1000edfc */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1009E464: pop ecx */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1009E465: ret  */
    RECOMP_REGS_OUT();
}

void sub_1009E484(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1009E484u);

L_1009E484:
    PUSH32(esp, 0xCu); /* 0x1009E484: push 0xc */
    PUSH32(esp, 0x1009E4F8u); /* 0x1009E486: push 0x1009e4f8 */
    RECOMP_CALL(sub_1000ED7E); /* 0x1009E48B: call 0x1000ed7e */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0xEu); /* 0x1009E490: push 0xe */
    RECOMP_CALL(sub_1000EDD7); /* 0x1009E492: call 0x1000edd7 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1009E497: pop ecx */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x4))); _flag_b = (uint32_t)(0);
    MEM32(ebp + (-0x4)) = MEM32(ebp + (-0x4)) & 0; /* 0x1009E498: and dword ptr [ebp - 4], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    esi = MEM32(ebp + 0x8); /* 0x1009E49C: mov esi, dword ptr [ebp + 8] */
    eax = MEM32(esi + 0x4); /* 0x1009E49F: mov eax, dword ptr [esi + 4] */
    /* test eax, eax */ /* 0x1009E4A2: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1009E4D6; /* 0x1009E4A4: je 0x1009e4d6 */
L_1009E4A6:
    ecx = MEM32(0x100E40C0); /* 0x1009E4A6: mov ecx, dword ptr [0x100e40c0] */
    edx = 0x100E40BCu; /* 0x1009E4AC: mov edx, 0x100e40bc */
L_1009E4B1:
    MEM32(ebp + (-0x1C)) = ecx; /* 0x1009E4B1: mov dword ptr [ebp - 0x1c], ecx */
    /* test ecx, ecx */ /* 0x1009E4B4: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1009E4C9; /* 0x1009E4B6: je 0x1009e4c9 */
L_1009E4B8:
    /* cmp MEM32(ecx), eax */ /* 0x1009E4B8: cmp dword ptr [ecx], eax */
    _flag_a = (uint32_t)(MEM32(ecx)); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_1009E4E8; /* 0x1009E4BA: jne 0x1009e4e8 */
L_1009E4BC:
    eax = MEM32(ecx + 0x4); /* 0x1009E4BC: mov eax, dword ptr [ecx + 4] */
    MEM32(edx + 0x4) = eax; /* 0x1009E4BF: mov dword ptr [edx + 4], eax */
    PUSH32(esp, ecx); /* 0x1009E4C2: push ecx */
    RECOMP_CALL(sub_1000ECE0); /* 0x1009E4C3: call 0x1000ece0 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1009E4C8: pop ecx */
L_1009E4C9:
    PUSH32(esp, MEM32(esi + 0x4)); /* 0x1009E4C9: push dword ptr [esi + 4] */
    RECOMP_CALL(sub_1000ECE0); /* 0x1009E4CC: call 0x1000ece0 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1009E4D1: pop ecx */
    _flag_a = (uint32_t)(MEM32(esi + 0x4)); _flag_b = (uint32_t)(0);
    MEM32(esi + 0x4) = MEM32(esi + 0x4) & 0; /* 0x1009E4D2: and dword ptr [esi + 4], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
L_1009E4D6:
    MEM32(ebp + (-0x4)) = 0xFFFFFFFEu; /* 0x1009E4D6: mov dword ptr [ebp - 4], 0xfffffffe */
    RECOMP_CALL(sub_1009E4EC); /* 0x1009E4DD: call 0x1009e4ec */
    RECOMP_FLAGS_IN();
    RECOMP_CALL(sub_1000EDC3); /* 0x1009E4E2: call 0x1000edc3 */
    RECOMP_FLAGS_IN();
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1009E4E7: ret  */
L_1009E4E8:
    edx = ecx; /* 0x1009E4E8: mov edx, ecx */
    RECOMP_BACKEDGE();
    goto L_1009E4B1; /* 0x1009E4EA: jmp 0x1009e4b1 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    RECOMP_REGS_OUT();
}

void sub_1009E4EC(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1009E4ECu);

L_1009E4EC:
    PUSH32(esp, 0xEu); /* 0x1009E4EC: push 0xe */
    RECOMP_CALL(sub_1000EDFC); /* 0x1009E4EE: call 0x1000edfc */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1009E4F3: pop ecx */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1009E4F4: ret  */
    RECOMP_REGS_OUT();
}

void sub_1009E514(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1009E514u);

L_1009E514:
    PUSH32(esp, ebp); /* 0x1009E514: push ebp */
    ebp = esp; /* 0x1009E515: mov ebp, esp */
    eax = MEM32(ebp + 0x14); /* 0x1009E517: mov eax, dword ptr [ebp + 0x14] */
    /* test LO16(eax), LO16(eax) */ /* 0x1009E51A: test ax, ax */
    _flag_a = (uint32_t)(LO16(eax)) << 16; _flag_b = (uint32_t)(LO16(eax)) << 16;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 16);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1009E524; /* 0x1009E51D: jne 0x1009e524 */
L_1009E51F:
    eax = 0x2800u; /* 0x1009E51F: mov eax, 0x2800 */
L_1009E524:
    PUSH32(esp, eax); /* 0x1009E524: push eax */
    PUSH32(esp, 0x1000ECE0u); /* 0x1009E525: push 0x1000ece0 */
    PUSH32(esp, 0x1000ED30u); /* 0x1009E52A: push 0x1000ed30 */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x1009E52F: push dword ptr [ebp + 0x10] */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x1009E532: push dword ptr [ebp + 0xc] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x1009E535: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_100238B1); /* 0x1009E538: call 0x100238b1 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x18u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x18u; /* 0x1009E53D: add esp, 0x18 */
    _flag_k = FK_ADD;
    ebp = POP32_VAL(esp); /* 0x1009E540: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1009E541: ret  */
    RECOMP_REGS_OUT();
}

void sub_1009E542(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1009E542u);

L_1009E542:
    PUSH32(esp, ebp); /* 0x1009E542: push ebp */
    ebp = esp; /* 0x1009E543: mov ebp, esp */
    /* cmp MEM32(ebp + 0x8), 0 */ /* 0x1009E545: cmp dword ptr [ebp + 8], 0 */
    _flag_a = (uint32_t)(MEM32(ebp + 0x8)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_1009E555; /* 0x1009E549: jne 0x1009e555 */
L_1009E54B:
    PUSH32(esp, 0); /* 0x1009E54B: push 0 */
    RECOMP_CALL(sub_1009E559); /* 0x1009E54D: call 0x1009e559 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1009E552: pop ecx */
    ebp = POP32_VAL(esp); /* 0x1009E553: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1009E554: ret  */
L_1009E555:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1009E555: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    ebp = POP32_VAL(esp); /* 0x1009E557: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1009E558: ret  */
    RECOMP_REGS_OUT();
}

void sub_1009E559(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1009E559u);

L_1009E559:
    PUSH32(esp, ebp); /* 0x1009E559: push ebp */
    ebp = esp; /* 0x1009E55A: mov ebp, esp */
    PUSH32(esp, esi); /* 0x1009E55C: push esi */
    RECOMP_CALL(sub_1000F750); /* 0x1009E55D: call 0x1000f750 */
    RECOMP_FLAGS_IN();
    esi = MEM32(eax + 0x80); /* 0x1009E562: mov esi, dword ptr [eax + 0x80] */
    RECOMP_CALL(sub_1000F750); /* 0x1009E568: call 0x1000f750 */
    RECOMP_FLAGS_IN();
    ecx = MEM32(ebp + 0x8); /* 0x1009E56D: mov ecx, dword ptr [ebp + 8] */
    MEM32(eax + 0x80) = ecx; /* 0x1009E570: mov dword ptr [eax + 0x80], ecx */
    eax = esi; /* 0x1009E576: mov eax, esi */
    esi = POP32_VAL(esp); /* 0x1009E578: pop esi */
    ebp = POP32_VAL(esp); /* 0x1009E579: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1009E57A: ret  */
    RECOMP_REGS_OUT();
}

void sub_1009E57B(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1009E57Bu);

L_1009E57B:
    PUSH32(esp, ebp); /* 0x1009E57B: push ebp */
    ebp = esp; /* 0x1009E57C: mov ebp, esp */
    /* cmp MEM32(ebp + 0x8), 0 */ /* 0x1009E57E: cmp dword ptr [ebp + 8], 0 */
    _flag_a = (uint32_t)(MEM32(ebp + 0x8)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_1009E58E; /* 0x1009E582: jne 0x1009e58e */
L_1009E584:
    PUSH32(esp, 0); /* 0x1009E584: push 0 */
    RECOMP_CALL(sub_1009E592); /* 0x1009E586: call 0x1009e592 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1009E58B: pop ecx */
    ebp = POP32_VAL(esp); /* 0x1009E58C: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1009E58D: ret  */
L_1009E58E:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1009E58E: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    ebp = POP32_VAL(esp); /* 0x1009E590: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1009E591: ret  */
    RECOMP_REGS_OUT();
}

void sub_1009E592(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1009E592u);

L_1009E592:
    PUSH32(esp, ebp); /* 0x1009E592: push ebp */
    ebp = esp; /* 0x1009E593: mov ebp, esp */
    PUSH32(esp, esi); /* 0x1009E595: push esi */
    RECOMP_CALL(sub_1000F750); /* 0x1009E596: call 0x1000f750 */
    RECOMP_FLAGS_IN();
    /* cmp MEM32(eax + 0x78), 0 */ /* 0x1009E59B: cmp dword ptr [eax + 0x78], 0 */
    _flag_a = (uint32_t)(MEM32(eax + 0x78)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_1009E5A8; /* 0x1009E59F: jne 0x1009e5a8 */
L_1009E5A1:
    esi = 0x100A763Eu; /* 0x1009E5A1: mov esi, 0x100a763e */
    goto L_1009E5B0; /* 0x1009E5A6: jmp 0x1009e5b0 */
L_1009E5A8:
    RECOMP_CALL(sub_1000F750); /* 0x1009E5A8: call 0x1000f750 */
    RECOMP_FLAGS_IN();
    esi = MEM32(eax + 0x78); /* 0x1009E5AD: mov esi, dword ptr [eax + 0x78] */
L_1009E5B0:
    RECOMP_CALL(sub_1000F750); /* 0x1009E5B0: call 0x1000f750 */
    RECOMP_FLAGS_IN();
    ecx = MEM32(ebp + 0x8); /* 0x1009E5B5: mov ecx, dword ptr [ebp + 8] */
    MEM32(eax + 0x78) = ecx; /* 0x1009E5B8: mov dword ptr [eax + 0x78], ecx */
    eax = esi; /* 0x1009E5BB: mov eax, esi */
    esi = POP32_VAL(esp); /* 0x1009E5BD: pop esi */
    ebp = POP32_VAL(esp); /* 0x1009E5BE: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1009E5BF: ret  */
    RECOMP_REGS_OUT();
}

void sub_1009E5C0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1009E5C0u);

L_1009E5C0:
    PUSH32(esp, ebp); /* 0x1009E5C0: push ebp */
    ebp = esp; /* 0x1009E5C1: mov ebp, esp */
    /* cmp MEM32(ebp + 0x8), 0 */ /* 0x1009E5C3: cmp dword ptr [ebp + 8], 0 */
    _flag_a = (uint32_t)(MEM32(ebp + 0x8)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_1009E5D3; /* 0x1009E5C7: jne 0x1009e5d3 */
L_1009E5C9:
    PUSH32(esp, 0); /* 0x1009E5C9: push 0 */
    RECOMP_CALL(sub_1009E5D7); /* 0x1009E5CB: call 0x1009e5d7 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1009E5D0: pop ecx */
    ebp = POP32_VAL(esp); /* 0x1009E5D1: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1009E5D2: ret  */
L_1009E5D3:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1009E5D3: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    ebp = POP32_VAL(esp); /* 0x1009E5D5: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1009E5D6: ret  */
    RECOMP_REGS_OUT();
}

void sub_1009E5D7(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1009E5D7u);

L_1009E5D7:
    PUSH32(esp, ebp); /* 0x1009E5D7: push ebp */
    ebp = esp; /* 0x1009E5D8: mov ebp, esp */
    PUSH32(esp, esi); /* 0x1009E5DA: push esi */
    RECOMP_CALL(sub_1000F750); /* 0x1009E5DB: call 0x1000f750 */
    RECOMP_FLAGS_IN();
    /* cmp MEM32(eax + 0x7C), 0 */ /* 0x1009E5E0: cmp dword ptr [eax + 0x7c], 0 */
    _flag_a = (uint32_t)(MEM32(eax + 0x7C)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_1009E5ED; /* 0x1009E5E4: jne 0x1009e5ed */
L_1009E5E6:
    esi = 0x1009DC2Cu; /* 0x1009E5E6: mov esi, 0x1009dc2c */
    goto L_1009E5F5; /* 0x1009E5EB: jmp 0x1009e5f5 */
L_1009E5ED:
    RECOMP_CALL(sub_1000F750); /* 0x1009E5ED: call 0x1000f750 */
    RECOMP_FLAGS_IN();
    esi = MEM32(eax + 0x7C); /* 0x1009E5F2: mov esi, dword ptr [eax + 0x7c] */
L_1009E5F5:
    RECOMP_CALL(sub_1000F750); /* 0x1009E5F5: call 0x1000f750 */
    RECOMP_FLAGS_IN();
    ecx = MEM32(ebp + 0x8); /* 0x1009E5FA: mov ecx, dword ptr [ebp + 8] */
    MEM32(eax + 0x7C) = ecx; /* 0x1009E5FD: mov dword ptr [eax + 0x7c], ecx */
    eax = esi; /* 0x1009E600: mov eax, esi */
    esi = POP32_VAL(esp); /* 0x1009E602: pop esi */
    ebp = POP32_VAL(esp); /* 0x1009E603: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1009E604: ret  */
    RECOMP_REGS_OUT();
}

void sub_1009E605(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1009E605u);

L_1009E605:
    RECOMP_CALL(sub_1000F750); /* 0x1009E605: call 0x1000f750 */
    RECOMP_FLAGS_IN();
    eax = MEM32(eax + 0x78); /* 0x1009E60A: mov eax, dword ptr [eax + 0x78] */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1009E60D: ret  */
    RECOMP_REGS_OUT();
}

void sub_1009E60E(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1009E60Eu);

L_1009E60E:
    RECOMP_CALL(sub_1000F750); /* 0x1009E60E: call 0x1000f750 */
    RECOMP_FLAGS_IN();
    eax = MEM32(eax + 0x7C); /* 0x1009E613: mov eax, dword ptr [eax + 0x7c] */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1009E616: ret  */
    RECOMP_REGS_OUT();
}

void sub_1009E617(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1009E617u);

L_1009E617:
    PUSH32(esp, ebp); /* 0x1009E617: push ebp */
    ebp = esp; /* 0x1009E618: mov ebp, esp */
    edx = MEM32(ebp + 0x8); /* 0x1009E61A: mov edx, dword ptr [ebp + 8] */
    eax = MEM32(edx); /* 0x1009E61D: mov eax, dword ptr [edx] */
    ecx = MEM32(eax + (-0x4)); /* 0x1009E61F: mov ecx, dword ptr [eax - 4] */
    eax = edx; /* 0x1009E622: mov eax, edx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(ecx + 0x4));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - MEM32(ecx + 0x4); /* 0x1009E624: sub eax, dword ptr [ecx + 4] */
    _flag_k = FK_CMP;
    /* cmp MEM32(ecx + 0x8), 0 */ /* 0x1009E627: cmp dword ptr [ecx + 8], 0 */
    _flag_a = (uint32_t)(MEM32(ecx + 0x8)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1009E632; /* 0x1009E62B: je 0x1009e632 */
L_1009E62D:
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(MEM32(ecx + 0x8));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    edx = edx - MEM32(ecx + 0x8); /* 0x1009E62D: sub edx, dword ptr [ecx + 8] */
    _flag_k = FK_CMP;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(edx));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - MEM32(edx); /* 0x1009E630: sub eax, dword ptr [edx] */
    _flag_k = FK_CMP;
L_1009E632:
    ebp = POP32_VAL(esp); /* 0x1009E632: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1009E633: ret  */
    RECOMP_REGS_OUT();
}

void sub_1009E634(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1009E634u);

L_1009E634:
    PUSH32(esp, ebp); /* 0x1009E634: push ebp */
    ebp = esp; /* 0x1009E635: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x10u; /* 0x1009E637: sub esp, 0x10 */
    _flag_k = FK_CMP;
    eax = MEM32(ebp + 0xC); /* 0x1009E63A: mov eax, dword ptr [ebp + 0xc] */
    _flag_a = (uint32_t)((ecx | 0xFFFFFFFFu)); _flag_b = (uint32_t)((ecx | 0xFFFFFFFFu));
    ecx = ecx | 0xFFFFFFFFu; /* 0x1009E63D: or ecx, 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, ebx); /* 0x1009E640: push ebx */
    PUSH32(esp, esi); /* 0x1009E641: push esi */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    esi = 0; /* 0x1009E642: xor esi, esi */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + 0xC) = ecx; /* 0x1009E644: mov dword ptr [ebp + 0xc], ecx */
    eax = MEM32(eax + 0x10); /* 0x1009E647: mov eax, dword ptr [eax + 0x10] */
    edx = esi; /* 0x1009E64A: mov edx, esi */
    PUSH32(esp, edi); /* 0x1009E64C: push edi */
    MEM32(ebp + (-0x4)) = edx; /* 0x1009E64D: mov dword ptr [ebp - 4], edx */
    ebx = esi; /* 0x1009E650: mov ebx, esi */
    MEM32(ebp + (-0x8)) = esi; /* 0x1009E652: mov dword ptr [ebp - 8], esi */
    edi = MEM32(eax + 0xC); /* 0x1009E655: mov edi, dword ptr [eax + 0xc] */
    eax = MEM32(eax + 0x8); /* 0x1009E658: mov eax, dword ptr [eax + 8] */
    MEM32(ebp + (-0x10)) = edi; /* 0x1009E65B: mov dword ptr [ebp - 0x10], edi */
    MEM32(ebp + (-0xC)) = eax; /* 0x1009E65E: mov dword ptr [ebp - 0xc], eax */
    /* test eax, eax */ /* 0x1009E661: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1009E740; /* 0x1009E663: je 0x1009e740 */
L_1009E669:
    edi = MEM32(edi + ebx * 4); /* 0x1009E669: mov edi, dword ptr [edi + ebx*4] */
    eax = ebx; /* 0x1009E66C: mov eax, ebx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - ecx; /* 0x1009E66E: sub eax, ecx */
    _flag_k = FK_CMP;
    /* cmp eax, MEM32(ebp + (-0x8)) */ /* 0x1009E670: cmp eax, dword ptr [ebp - 8] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(ebp + (-0x8)));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_1009E6A3; /* 0x1009E673: jbe 0x1009e6a3 */
L_1009E675:
    ecx = MEM32(edi); /* 0x1009E675: mov ecx, dword ptr [edi] */
    eax = MEM32(ebp + 0x18); /* 0x1009E677: mov eax, dword ptr [ebp + 0x18] */
    /* cmp ecx, eax */ /* 0x1009E67A: cmp ecx, eax */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1009E694; /* 0x1009E67C: je 0x1009e694 */
L_1009E67E:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 8; /* 0x1009E67E: add eax, 8 */
    _flag_k = FK_ADD;
    PUSH32(esp, eax); /* 0x1009E681: push eax */
    eax = ecx + 0x8; /* 0x1009E682: lea eax, [ecx + 8] */
    PUSH32(esp, eax); /* 0x1009E685: push eax */
    RECOMP_CALL(sub_1001413E); /* 0x1009E686: call 0x1001413e */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1009E68B: pop ecx */
    ecx = POP32_VAL(esp); /* 0x1009E68C: pop ecx */
    /* test eax, eax */ /* 0x1009E68D: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1009E6A3; /* 0x1009E68F: jne 0x1009e6a3 */
L_1009E691:
    edx = MEM32(ebp + (-0x4)); /* 0x1009E691: mov edx, dword ptr [ebp - 4] */
L_1009E694:
    /* test edx, edx */ /* 0x1009E694: test edx, edx */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(edx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1009E6F1; /* 0x1009E696: jne 0x1009e6f1 */
L_1009E698:
    eax = MEM32(edi + 0x4); /* 0x1009E698: mov eax, dword ptr [edi + 4] */
    esi = edi; /* 0x1009E69B: mov esi, edi */
    MEM32(ebp + 0xC) = ebx; /* 0x1009E69D: mov dword ptr [ebp + 0xc], ebx */
    MEM32(ebp + (-0x8)) = eax; /* 0x1009E6A0: mov dword ptr [ebp - 8], eax */
L_1009E6A3:
    ecx = MEM32(edi); /* 0x1009E6A3: mov ecx, dword ptr [edi] */
    eax = MEM32(ebp + 0x10); /* 0x1009E6A5: mov eax, dword ptr [ebp + 0x10] */
    /* cmp ecx, eax */ /* 0x1009E6A8: cmp ecx, eax */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1009E6BF; /* 0x1009E6AA: je 0x1009e6bf */
L_1009E6AC:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 8; /* 0x1009E6AC: add eax, 8 */
    _flag_k = FK_ADD;
    PUSH32(esp, eax); /* 0x1009E6AF: push eax */
    eax = ecx + 0x8; /* 0x1009E6B0: lea eax, [ecx + 8] */
    PUSH32(esp, eax); /* 0x1009E6B3: push eax */
    RECOMP_CALL(sub_1001413E); /* 0x1009E6B4: call 0x1001413e */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1009E6B9: pop ecx */
    ecx = POP32_VAL(esp); /* 0x1009E6BA: pop ecx */
    /* test eax, eax */ /* 0x1009E6BB: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1009E6DD; /* 0x1009E6BD: jne 0x1009e6dd */
L_1009E6BF:
    eax = edi + 0x8; /* 0x1009E6BF: lea eax, [edi + 8] */
    PUSH32(esp, eax); /* 0x1009E6C2: push eax */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x1009E6C3: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_1009E950); /* 0x1009E6C6: call 0x1009e950 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1009E6CB: pop ecx */
    ecx = POP32_VAL(esp); /* 0x1009E6CC: pop ecx */
    /* cmp eax, MEM32(ebp + 0x14) */ /* 0x1009E6CD: cmp eax, dword ptr [ebp + 0x14] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(ebp + 0x14));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_1009E6DD; /* 0x1009E6D0: jne 0x1009e6dd */
L_1009E6D2:
    /* test esi, esi */ /* 0x1009E6D2: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1009E701; /* 0x1009E6D4: jne 0x1009e701 */
L_1009E6D6:
    edx = edi; /* 0x1009E6D6: mov edx, edi */
    MEM32(ebp + (-0x4)) = edx; /* 0x1009E6D8: mov dword ptr [ebp - 4], edx */
    goto L_1009E6E0; /* 0x1009E6DB: jmp 0x1009e6e0 */
L_1009E6DD:
    edx = MEM32(ebp + (-0x4)); /* 0x1009E6DD: mov edx, dword ptr [ebp - 4] */
L_1009E6E0:
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(1);
    ebx = ebx + 1; /* 0x1009E6E0: inc ebx */
    _flag_k = FK_INC;
    /* cmp ebx, MEM32(ebp + (-0xC)) */ /* 0x1009E6E1: cmp ebx, dword ptr [ebp - 0xc] */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(MEM32(ebp + (-0xC)));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_AE(_flag_a, _flag_b)) goto L_1009E740; /* 0x1009E6E4: jae 0x1009e740 */
L_1009E6E6:
    ecx = MEM32(ebp + 0xC); /* 0x1009E6E6: mov ecx, dword ptr [ebp + 0xc] */
    edi = MEM32(ebp + (-0x10)); /* 0x1009E6E9: mov edi, dword ptr [ebp - 0x10] */
    RECOMP_BACKEDGE();
    goto L_1009E669; /* 0x1009E6EC: jmp 0x1009e669 */
L_1009E6F1:
    /* test MEM8(edi + 0x14), 3 */ /* 0x1009E6F1: test byte ptr [edi + 0x14], 3 */
    _flag_a = (uint32_t)(MEM8(edi + 0x14)) << 24; _flag_b = (uint32_t)(3) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1009E740; /* 0x1009E6F5: jne 0x1009e740 */
L_1009E6F7:
    /* test MEM8(edx + 0x14), 1 */ /* 0x1009E6F7: test byte ptr [edx + 0x14], 1 */
    _flag_a = (uint32_t)(MEM8(edx + 0x14)) << 24; _flag_b = (uint32_t)(1) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1009E740; /* 0x1009E6FB: jne 0x1009e740 */
L_1009E6FD:
    eax = edi; /* 0x1009E6FD: mov eax, edi */
    goto L_1009E742; /* 0x1009E6FF: jmp 0x1009e742 */
L_1009E701:
    eax = MEM32(ebp + 0xC); /* 0x1009E701: mov eax, dword ptr [ebp + 0xc] */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ebx = ebx - eax; /* 0x1009E704: sub ebx, eax */
    _flag_k = FK_CMP;
    /* cmp ebx, MEM32(ebp + (-0x8)) */ /* 0x1009E706: cmp ebx, dword ptr [ebp - 8] */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(MEM32(ebp + (-0x8)));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_A(_flag_a, _flag_b)) goto L_1009E73A; /* 0x1009E709: ja 0x1009e73a */
L_1009E70B:
    /* test MEM8(esi + 0x14), 0x40u */ /* 0x1009E70B: test byte ptr [esi + 0x14], 0x40 */
    _flag_a = (uint32_t)(MEM8(esi + 0x14)) << 24; _flag_b = (uint32_t)(0x40u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1009E71F; /* 0x1009E70F: jne 0x1009e71f */
L_1009E711:
    /* test eax, eax */ /* 0x1009E711: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1009E71B; /* 0x1009E713: jne 0x1009e71b */
L_1009E715:
    /* test MEM8(edi + 0x14), 1 */ /* 0x1009E715: test byte ptr [edi + 0x14], 1 */
    _flag_a = (uint32_t)(MEM8(edi + 0x14)) << 24; _flag_b = (uint32_t)(1) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1009E740; /* 0x1009E719: jne 0x1009e740 */
L_1009E71B:
    eax = esi; /* 0x1009E71B: mov eax, esi */
    goto L_1009E742; /* 0x1009E71D: jmp 0x1009e742 */
L_1009E71F:
    eax = MEM32(esi + 0x18); /* 0x1009E71F: mov eax, dword ptr [esi + 0x18] */
    eax = MEM32(eax + 0xC); /* 0x1009E722: mov eax, dword ptr [eax + 0xc] */
    eax = MEM32(eax + ebx * 4); /* 0x1009E725: mov eax, dword ptr [eax + ebx*4] */
    SET_LO8(eax, MEM8(eax + 0x14)); /* 0x1009E728: mov al, byte ptr [eax + 0x14] */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(1) << 24;
    SET_LO8(eax, LO8(eax) & 1); /* 0x1009E72B: and al, 1 */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    eax = (uint32_t)LO8(eax); /* 0x1009E72D: movzx eax, al */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(eax);
    _cf = (eax) != 0;
    eax = (uint32_t)(-(int32_t)eax); /* 0x1009E730: neg eax */
    _flag_k = FK_CMP;
    { uint32_t _sa = eax, _sb = eax, _sc = (uint32_t)CMP_B(_flag_a, _flag_b); /* 0x1009E732: sbb eax, eax */
      eax = _sc ? 0xFFFFFFFFu : 0;
      _flag_a = recomp_flags_sbb(_sa, _sb, _sc); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    eax = ~eax; /* 0x1009E734: not eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(esi);
    eax = eax & esi; /* 0x1009E736: and eax, esi */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_1009E742; /* 0x1009E738: jmp 0x1009e742 */
L_1009E73A:
    /* test MEM8(esi + 0x14), 3 */ /* 0x1009E73A: test byte ptr [esi + 0x14], 3 */
    _flag_a = (uint32_t)(MEM8(esi + 0x14)) << 24; _flag_b = (uint32_t)(3) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    RECOMP_BACKEDGE();
    if (TEST_Z(_flag_a, _flag_b)) goto L_1009E715; /* 0x1009E73E: je 0x1009e715 */
L_1009E740:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1009E740: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
L_1009E742:
    edi = POP32_VAL(esp); /* 0x1009E742: pop edi */
    esi = POP32_VAL(esp); /* 0x1009E743: pop esi */
    ebx = POP32_VAL(esp); /* 0x1009E744: pop ebx */
    esp = ebp; /* 0x1009E745: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x1009E747: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1009E748: ret  */
    RECOMP_REGS_OUT();
}

void sub_1009E749(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1009E749u);

L_1009E749:
    PUSH32(esp, ebp); /* 0x1009E749: push ebp */
    ebp = esp; /* 0x1009E74A: mov ebp, esp */
    PUSH32(esp, ecx); /* 0x1009E74C: push ecx */
    eax = MEM32(ebp + 0x8); /* 0x1009E74D: mov eax, dword ptr [ebp + 8] */
    PUSH32(esp, ebx); /* 0x1009E750: push ebx */
    PUSH32(esp, esi); /* 0x1009E751: push esi */
    PUSH32(esp, edi); /* 0x1009E752: push edi */
    eax = MEM32(eax + 0x10); /* 0x1009E753: mov eax, dword ptr [eax + 0x10] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    esi = 0; /* 0x1009E756: xor esi, esi */
    _cf = 0;
    _flag_k = FK_TEST;
    edi = MEM32(eax + 0x8); /* 0x1009E758: mov edi, dword ptr [eax + 8] */
    edx = MEM32(eax + 0xC); /* 0x1009E75B: mov edx, dword ptr [eax + 0xc] */
    MEM32(ebp + 0x8) = edx; /* 0x1009E75E: mov dword ptr [ebp + 8], edx */
    /* test edi, edi */ /* 0x1009E761: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1009E78F; /* 0x1009E763: je 0x1009e78f */
L_1009E765:
    ebx = MEM32(ebp + 0x10); /* 0x1009E765: mov ebx, dword ptr [ebp + 0x10] */
L_1009E768:
    eax = MEM32(edx + esi * 4); /* 0x1009E768: mov eax, dword ptr [edx + esi*4] */
    MEM32(ebp + (-0x4)) = eax; /* 0x1009E76B: mov dword ptr [ebp - 4], eax */
    ecx = MEM32(eax); /* 0x1009E76E: mov ecx, dword ptr [eax] */
    /* cmp ecx, ebx */ /* 0x1009E770: cmp ecx, ebx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1009E798; /* 0x1009E772: je 0x1009e798 */
L_1009E774:
    eax = ebx + 0x8; /* 0x1009E774: lea eax, [ebx + 8] */
    PUSH32(esp, eax); /* 0x1009E777: push eax */
    eax = ecx + 0x8; /* 0x1009E778: lea eax, [ecx + 8] */
    PUSH32(esp, eax); /* 0x1009E77B: push eax */
    RECOMP_CALL(sub_1001413E); /* 0x1009E77C: call 0x1001413e */
    RECOMP_FLAGS_IN();
    edx = MEM32(ebp + 0x8); /* 0x1009E781: mov edx, dword ptr [ebp + 8] */
    ecx = POP32_VAL(esp); /* 0x1009E784: pop ecx */
    ecx = POP32_VAL(esp); /* 0x1009E785: pop ecx */
    /* test eax, eax */ /* 0x1009E786: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1009E798; /* 0x1009E788: je 0x1009e798 */
L_1009E78A:
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi + 1; /* 0x1009E78A: inc esi */
    _flag_k = FK_INC;
    /* cmp esi, edi */ /* 0x1009E78B: cmp esi, edi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_1009E768; /* 0x1009E78D: jb 0x1009e768 */
L_1009E78F:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1009E78F: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
L_1009E791:
    edi = POP32_VAL(esp); /* 0x1009E791: pop edi */
    esi = POP32_VAL(esp); /* 0x1009E792: pop esi */
    ebx = POP32_VAL(esp); /* 0x1009E793: pop ebx */
    esp = ebp; /* 0x1009E794: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x1009E796: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1009E797: ret  */
L_1009E798:
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi + 1; /* 0x1009E798: inc esi */
    _flag_k = FK_INC;
    /* cmp esi, edi */ /* 0x1009E799: cmp esi, edi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_AE(_flag_a, _flag_b)) goto L_1009E78F; /* 0x1009E79B: jae 0x1009e78f */
L_1009E79D:
    ebx = MEM32(ebp + 0xC); /* 0x1009E79D: mov ebx, dword ptr [ebp + 0xc] */
L_1009E7A0:
    eax = MEM32(edx + esi * 4); /* 0x1009E7A0: mov eax, dword ptr [edx + esi*4] */
    /* test MEM8(eax + 0x14), 4 */ /* 0x1009E7A3: test byte ptr [eax + 0x14], 4 */
    _flag_a = (uint32_t)(MEM8(eax + 0x14)) << 24; _flag_b = (uint32_t)(4) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1009E78F; /* 0x1009E7A7: jne 0x1009e78f */
L_1009E7A9:
    ecx = MEM32(eax); /* 0x1009E7A9: mov ecx, dword ptr [eax] */
    /* cmp ecx, ebx */ /* 0x1009E7AB: cmp ecx, ebx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1009E7CC; /* 0x1009E7AD: je 0x1009e7cc */
L_1009E7AF:
    eax = ebx + 0x8; /* 0x1009E7AF: lea eax, [ebx + 8] */
    PUSH32(esp, eax); /* 0x1009E7B2: push eax */
    eax = ecx + 0x8; /* 0x1009E7B3: lea eax, [ecx + 8] */
    PUSH32(esp, eax); /* 0x1009E7B6: push eax */
    RECOMP_CALL(sub_1001413E); /* 0x1009E7B7: call 0x1001413e */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1009E7BC: pop ecx */
    ecx = POP32_VAL(esp); /* 0x1009E7BD: pop ecx */
    /* test eax, eax */ /* 0x1009E7BE: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1009E7CC; /* 0x1009E7C0: je 0x1009e7cc */
L_1009E7C2:
    edx = MEM32(ebp + 0x8); /* 0x1009E7C2: mov edx, dword ptr [ebp + 8] */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi + 1; /* 0x1009E7C5: inc esi */
    _flag_k = FK_INC;
    /* cmp esi, edi */ /* 0x1009E7C6: cmp esi, edi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_AE(_flag_a, _flag_b)) goto L_1009E78F; /* 0x1009E7C8: jae 0x1009e78f */
L_1009E7CA:
    RECOMP_BACKEDGE();
    goto L_1009E7A0; /* 0x1009E7CA: jmp 0x1009e7a0 */
L_1009E7CC:
    eax = MEM32(ebp + (-0x4)); /* 0x1009E7CC: mov eax, dword ptr [ebp - 4] */
    RECOMP_BACKEDGE();
    goto L_1009E791; /* 0x1009E7CF: jmp 0x1009e791 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    RECOMP_REGS_OUT();
}

void sub_1009E7D1(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1009E7D1u);

L_1009E7D1:
    PUSH32(esp, ebp); /* 0x1009E7D1: push ebp */
    ebp = esp; /* 0x1009E7D2: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x20u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x20u; /* 0x1009E7D4: sub esp, 0x20 */
    _flag_k = FK_CMP;
    eax = MEM32(ebp + 0xC); /* 0x1009E7D7: mov eax, dword ptr [ebp + 0xc] */
    _flag_a = (uint32_t)((ecx | 0xFFFFFFFFu)); _flag_b = (uint32_t)((ecx | 0xFFFFFFFFu));
    ecx = ecx | 0xFFFFFFFFu; /* 0x1009E7DA: or ecx, 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, ebx); /* 0x1009E7DD: push ebx */
    PUSH32(esp, esi); /* 0x1009E7DE: push esi */
    PUSH32(esp, edi); /* 0x1009E7DF: push edi */
    eax = MEM32(eax + 0x10); /* 0x1009E7E0: mov eax, dword ptr [eax + 0x10] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edi = 0; /* 0x1009E7E3: xor edi, edi */
    _cf = 0;
    _flag_k = FK_TEST;
    SET_LO8(edx, 1); /* 0x1009E7E5: mov dl, 1 */
    MEM32(ebp + (-0x4)) = edi; /* 0x1009E7E7: mov dword ptr [ebp - 4], edi */
    MEM32(ebp + (-0x18)) = edi; /* 0x1009E7EA: mov dword ptr [ebp - 0x18], edi */
    ebx = edi; /* 0x1009E7ED: mov ebx, edi */
    MEM32(ebp + (-0x8)) = edi; /* 0x1009E7EF: mov dword ptr [ebp - 8], edi */
    esi = MEM32(eax + 0xC); /* 0x1009E7F2: mov esi, dword ptr [eax + 0xc] */
    eax = MEM32(eax + 0x8); /* 0x1009E7F5: mov eax, dword ptr [eax + 8] */
    MEM32(ebp + (-0x20)) = esi; /* 0x1009E7F8: mov dword ptr [ebp - 0x20], esi */
    MEM32(ebp + (-0x1C)) = eax; /* 0x1009E7FB: mov dword ptr [ebp - 0x1c], eax */
    MEM32(ebp + (-0x10)) = edi; /* 0x1009E7FE: mov dword ptr [ebp - 0x10], edi */
    MEM32(ebp + (-0xC)) = ecx; /* 0x1009E801: mov dword ptr [ebp - 0xc], ecx */
    MEM8(ebp + 0xF) = (uint8_t)(LO8(edx)); /* 0x1009E804: mov byte ptr [ebp + 0xf], dl */
    MEM32(ebp + (-0x14)) = ecx; /* 0x1009E807: mov dword ptr [ebp - 0x14], ecx */
    /* test eax, eax */ /* 0x1009E80A: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1009E947; /* 0x1009E80C: je 0x1009e947 */
L_1009E812:
    esi = MEM32(esi + ebx * 4); /* 0x1009E812: mov esi, dword ptr [esi + ebx*4] */
    eax = ebx; /* 0x1009E815: mov eax, ebx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - ecx; /* 0x1009E817: sub eax, ecx */
    _flag_k = FK_CMP;
    /* cmp eax, MEM32(ebp + (-0x10)) */ /* 0x1009E819: cmp eax, dword ptr [ebp - 0x10] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(ebp + (-0x10)));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_1009E84F; /* 0x1009E81C: jbe 0x1009e84f */
L_1009E81E:
    ecx = MEM32(esi); /* 0x1009E81E: mov ecx, dword ptr [esi] */
    eax = MEM32(ebp + 0x18); /* 0x1009E820: mov eax, dword ptr [ebp + 0x18] */
    /* cmp ecx, eax */ /* 0x1009E823: cmp ecx, eax */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1009E83A; /* 0x1009E825: je 0x1009e83a */
L_1009E827:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 8; /* 0x1009E827: add eax, 8 */
    _flag_k = FK_ADD;
    PUSH32(esp, eax); /* 0x1009E82A: push eax */
    eax = ecx + 0x8; /* 0x1009E82B: lea eax, [ecx + 8] */
    PUSH32(esp, eax); /* 0x1009E82E: push eax */
    RECOMP_CALL(sub_1001413E); /* 0x1009E82F: call 0x1001413e */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1009E834: pop ecx */
    ecx = POP32_VAL(esp); /* 0x1009E835: pop ecx */
    /* test eax, eax */ /* 0x1009E836: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1009E84F; /* 0x1009E838: jne 0x1009e84f */
L_1009E83A:
    /* test MEM8(esi + 0x14), 3 */ /* 0x1009E83A: test byte ptr [esi + 0x14], 3 */
    _flag_a = (uint32_t)(MEM8(esi + 0x14)) << 24; _flag_b = (uint32_t)(3) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1009E843; /* 0x1009E83E: jne 0x1009e843 */
L_1009E840:
    MEM32(ebp + (-0x18)) = esi; /* 0x1009E840: mov dword ptr [ebp - 0x18], esi */
L_1009E843:
    eax = MEM32(esi + 0x4); /* 0x1009E843: mov eax, dword ptr [esi + 4] */
    MEM32(ebp + (-0x8)) = esi; /* 0x1009E846: mov dword ptr [ebp - 8], esi */
    MEM32(ebp + (-0xC)) = ebx; /* 0x1009E849: mov dword ptr [ebp - 0xc], ebx */
    MEM32(ebp + (-0x10)) = eax; /* 0x1009E84C: mov dword ptr [ebp - 0x10], eax */
L_1009E84F:
    ecx = MEM32(esi); /* 0x1009E84F: mov ecx, dword ptr [esi] */
    eax = MEM32(ebp + 0x10); /* 0x1009E851: mov eax, dword ptr [ebp + 0x10] */
    /* cmp ecx, eax */ /* 0x1009E854: cmp ecx, eax */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1009E86F; /* 0x1009E856: je 0x1009e86f */
L_1009E858:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 8; /* 0x1009E858: add eax, 8 */
    _flag_k = FK_ADD;
    PUSH32(esp, eax); /* 0x1009E85B: push eax */
    eax = ecx + 0x8; /* 0x1009E85C: lea eax, [ecx + 8] */
    PUSH32(esp, eax); /* 0x1009E85F: push eax */
    RECOMP_CALL(sub_1001413E); /* 0x1009E860: call 0x1001413e */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1009E865: pop ecx */
    ecx = POP32_VAL(esp); /* 0x1009E866: pop ecx */
    /* test eax, eax */ /* 0x1009E867: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1009E90C; /* 0x1009E869: jne 0x1009e90c */
L_1009E86F:
    eax = esi + 0x8; /* 0x1009E86F: lea eax, [esi + 8] */
    PUSH32(esp, eax); /* 0x1009E872: push eax */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x1009E873: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_1009E950); /* 0x1009E876: call 0x1009e950 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1009E87B: pop ecx */
    ecx = POP32_VAL(esp); /* 0x1009E87C: pop ecx */
    /* cmp eax, MEM32(ebp + 0x14) */ /* 0x1009E87D: cmp eax, dword ptr [ebp + 0x14] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(ebp + 0x14));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_1009E90C; /* 0x1009E880: jne 0x1009e90c */
L_1009E886:
    SET_LO8(edx, MEM8(ebp + 0xF)); /* 0x1009E886: mov dl, byte ptr [ebp + 0xf] */
    ecx = ebx; /* 0x1009E889: mov ecx, ebx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(MEM32(ebp + (-0xC)));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ecx = ecx - MEM32(ebp + (-0xC)); /* 0x1009E88B: sub ecx, dword ptr [ebp - 0xc] */
    _flag_k = FK_CMP;
    /* cmp ecx, MEM32(ebp + (-0x10)) */ /* 0x1009E88E: cmp ecx, dword ptr [ebp - 0x10] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(MEM32(ebp + (-0x10)));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_A(_flag_a, _flag_b)) goto L_1009E923; /* 0x1009E891: ja 0x1009e923 */
L_1009E897:
    /* test LO8(edx), LO8(edx) */ /* 0x1009E897: test dl, dl */
    _flag_a = (uint32_t)(LO8(edx)) << 24; _flag_b = (uint32_t)(LO8(edx)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_1009E90F; /* 0x1009E899: je 0x1009e90f */
L_1009E89B:
    eax = MEM32(ebp + (-0x8)); /* 0x1009E89B: mov eax, dword ptr [ebp - 8] */
    /* test MEM8(eax + 0x14), 0x40u */ /* 0x1009E89E: test byte ptr [eax + 0x14], 0x40 */
    _flag_a = (uint32_t)(MEM8(eax + 0x14)) << 24; _flag_b = (uint32_t)(0x40u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    eax = MEM32(ebp + (-0xC)); /* 0x1009E8A2: mov eax, dword ptr [ebp - 0xc] */
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1009E8C2; /* 0x1009E8A5: jne 0x1009e8c2 */
L_1009E8A7:
    /* test eax, eax */ /* 0x1009E8A7: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1009E8BB; /* 0x1009E8A9: jne 0x1009e8bb */
L_1009E8AB:
    SET_LO8(eax, MEM8(esi + 0x14)); /* 0x1009E8AB: mov al, byte ptr [esi + 0x14] */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(1) << 24;
    SET_LO8(eax, LO8(eax) & 1); /* 0x1009E8AE: and al, 1 */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    _flag_a = (uint32_t)(0) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (LO8(eax)) != 0;
    SET_LO8(eax, (uint32_t)(-(int32_t)LO8(eax))); /* 0x1009E8B0: neg al */
    _flag_k = FK_NARROW(FK_CMP, 24);
    { uint32_t _sa = LO8(eax), _sb = LO8(eax), _sc = (uint32_t)CMP_B(_flag_a, _flag_b); /* 0x1009E8B2: sbb al, al */
      SET_LO8(eax, _sc ? 0xFFFFFFFFu : 0);
      _flag_a = recomp_flags_sbb(_sa, _sb, _sc); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    SET_LO8(eax, ~LO8(eax)); /* 0x1009E8B4: not al */
    _flag_a = (uint32_t)(LO8(edx)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    SET_LO8(edx, LO8(edx) & LO8(eax)); /* 0x1009E8B6: and dl, al */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    MEM8(ebp + 0xF) = (uint8_t)(LO8(edx)); /* 0x1009E8B8: mov byte ptr [ebp + 0xf], dl */
L_1009E8BB:
    esi = MEM32(ebp + (-0x8)); /* 0x1009E8BB: mov esi, dword ptr [ebp - 8] */
    SET_LO8(ecx, 1); /* 0x1009E8BE: mov cl, 1 */
    goto L_1009E8E8; /* 0x1009E8C0: jmp 0x1009e8e8 */
L_1009E8C2:
    esi = MEM32(ebp + (-0x8)); /* 0x1009E8C2: mov esi, dword ptr [ebp - 8] */
    eax = MEM32(esi + 0x18); /* 0x1009E8C5: mov eax, dword ptr [esi + 0x18] */
    eax = MEM32(eax + 0xC); /* 0x1009E8C8: mov eax, dword ptr [eax + 0xc] */
    eax = MEM32(eax + ecx * 4); /* 0x1009E8CB: mov eax, dword ptr [eax + ecx*4] */
    ecx = MEM32(eax + 0x14); /* 0x1009E8CE: mov ecx, dword ptr [eax + 0x14] */
    SET_LO8(eax, LO8(ecx)); /* 0x1009E8D1: mov al, cl */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(1) << 24;
    SET_LO8(eax, LO8(eax) & 1); /* 0x1009E8D3: and al, 1 */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    _flag_a = (uint32_t)(0) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (LO8(eax)) != 0;
    SET_LO8(eax, (uint32_t)(-(int32_t)LO8(eax))); /* 0x1009E8D5: neg al */
    _flag_k = FK_NARROW(FK_CMP, 24);
    { uint32_t _sa = LO8(eax), _sb = LO8(eax), _sc = (uint32_t)CMP_B(_flag_a, _flag_b); /* 0x1009E8D7: sbb al, al */
      SET_LO8(eax, _sc ? 0xFFFFFFFFu : 0);
      _flag_a = recomp_flags_sbb(_sa, _sb, _sc); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    if (2u) _cf = (((ecx) >> 1) & 1u); /* 0x1009E8D9: shr ecx, 2 */
    if (2u) { _flag_a = recomp_flags_pack((ecx >> 2u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ecx = ecx >> 2u; /* 0x1009E8D9: shr ecx, 2 */
    SET_LO8(eax, ~LO8(eax)); /* 0x1009E8DC: not al */
    SET_LO8(ecx, ~LO8(ecx)); /* 0x1009E8DE: not cl */
    _flag_a = (uint32_t)(LO8(edx)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    SET_LO8(edx, LO8(edx) & LO8(eax)); /* 0x1009E8E0: and dl, al */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    _flag_a = (uint32_t)(LO8(ecx)) << 24; _flag_b = (uint32_t)(1) << 24;
    SET_LO8(ecx, LO8(ecx) & 1); /* 0x1009E8E2: and cl, 1 */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    MEM8(ebp + 0xF) = (uint8_t)(LO8(edx)); /* 0x1009E8E5: mov byte ptr [ebp + 0xf], dl */
L_1009E8E8:
    /* test LO8(edx), LO8(edx) */ /* 0x1009E8E8: test dl, dl */
    _flag_a = (uint32_t)(LO8(edx)) << 24; _flag_b = (uint32_t)(LO8(edx)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_1009E90F; /* 0x1009E8EA: je 0x1009e90f */
L_1009E8EC:
    /* test LO8(ecx), LO8(ecx) */ /* 0x1009E8EC: test cl, cl */
    _flag_a = (uint32_t)(LO8(ecx)) << 24; _flag_b = (uint32_t)(LO8(ecx)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_1009E90F; /* 0x1009E8EE: je 0x1009e90f */
L_1009E8F0:
    eax = esi + 0x8; /* 0x1009E8F0: lea eax, [esi + 8] */
    PUSH32(esp, eax); /* 0x1009E8F3: push eax */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x1009E8F4: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_1009E950); /* 0x1009E8F7: call 0x1009e950 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1009E8FC: pop ecx */
    ecx = POP32_VAL(esp); /* 0x1009E8FD: pop ecx */
    /* test edi, edi */ /* 0x1009E8FE: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1009E907; /* 0x1009E900: je 0x1009e907 */
L_1009E902:
    /* cmp MEM32(ebp + (-0x14)), eax */ /* 0x1009E902: cmp dword ptr [ebp - 0x14], eax */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x14))); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_1009E947; /* 0x1009E905: jne 0x1009e947 */
L_1009E907:
    edi = esi; /* 0x1009E907: mov edi, esi */
    MEM32(ebp + (-0x14)) = eax; /* 0x1009E909: mov dword ptr [ebp - 0x14], eax */
L_1009E90C:
    SET_LO8(edx, MEM8(ebp + 0xF)); /* 0x1009E90C: mov dl, byte ptr [ebp + 0xf] */
L_1009E90F:
    eax = MEM32(ebp + (-0x4)); /* 0x1009E90F: mov eax, dword ptr [ebp - 4] */
L_1009E912:
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(1);
    ebx = ebx + 1; /* 0x1009E912: inc ebx */
    _flag_k = FK_INC;
    /* cmp ebx, MEM32(ebp + (-0x1C)) */ /* 0x1009E913: cmp ebx, dword ptr [ebp - 0x1c] */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(MEM32(ebp + (-0x1C)));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_AE(_flag_a, _flag_b)) goto L_1009E930; /* 0x1009E916: jae 0x1009e930 */
L_1009E918:
    ecx = MEM32(ebp + (-0xC)); /* 0x1009E918: mov ecx, dword ptr [ebp - 0xc] */
    esi = MEM32(ebp + (-0x20)); /* 0x1009E91B: mov esi, dword ptr [ebp - 0x20] */
    RECOMP_BACKEDGE();
    goto L_1009E812; /* 0x1009E91E: jmp 0x1009e812 */
L_1009E923:
    /* test MEM8(esi + 0x14), 5 */ /* 0x1009E923: test byte ptr [esi + 0x14], 5 */
    _flag_a = (uint32_t)(MEM8(esi + 0x14)) << 24; _flag_b = (uint32_t)(5) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1009E90F; /* 0x1009E927: jne 0x1009e90f */
L_1009E929:
    eax = esi; /* 0x1009E929: mov eax, esi */
    MEM32(ebp + (-0x4)) = eax; /* 0x1009E92B: mov dword ptr [ebp - 4], eax */
    RECOMP_BACKEDGE();
    goto L_1009E912; /* 0x1009E92E: jmp 0x1009e912 */
L_1009E930:
    /* test LO8(edx), LO8(edx) */ /* 0x1009E930: test dl, dl */
    _flag_a = (uint32_t)(LO8(edx)) << 24; _flag_b = (uint32_t)(LO8(edx)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_1009E93C; /* 0x1009E932: je 0x1009e93c */
L_1009E934:
    /* test edi, edi */ /* 0x1009E934: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1009E93C; /* 0x1009E936: je 0x1009e93c */
L_1009E938:
    eax = edi; /* 0x1009E938: mov eax, edi */
    goto L_1009E949; /* 0x1009E93A: jmp 0x1009e949 */
L_1009E93C:
    /* test eax, eax */ /* 0x1009E93C: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1009E947; /* 0x1009E93E: je 0x1009e947 */
L_1009E940:
    eax = MEM32(ebp + (-0x18)); /* 0x1009E940: mov eax, dword ptr [ebp - 0x18] */
    /* test eax, eax */ /* 0x1009E943: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1009E949; /* 0x1009E945: jne 0x1009e949 */
L_1009E947:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1009E947: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
L_1009E949:
    edi = POP32_VAL(esp); /* 0x1009E949: pop edi */
    esi = POP32_VAL(esp); /* 0x1009E94A: pop esi */
    ebx = POP32_VAL(esp); /* 0x1009E94B: pop ebx */
    esp = ebp; /* 0x1009E94C: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x1009E94E: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1009E94F: ret  */
    RECOMP_REGS_OUT();
}

void sub_1009E950(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1009E950u);

L_1009E950:
    PUSH32(esp, ebp); /* 0x1009E950: push ebp */
    ebp = esp; /* 0x1009E951: mov ebp, esp */
    PUSH32(esp, esi); /* 0x1009E953: push esi */
    esi = MEM32(ebp + 0xC); /* 0x1009E954: mov esi, dword ptr [ebp + 0xc] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edx = 0; /* 0x1009E957: xor edx, edx */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp MEM32(esi + 0x4), edx */ /* 0x1009E959: cmp dword ptr [esi + 4], edx */
    _flag_a = (uint32_t)(MEM32(esi + 0x4)); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_L(_flag_a, _flag_b)) goto L_1009E96D; /* 0x1009E95C: jl 0x1009e96d */
L_1009E95E:
    edx = MEM32(esi + 0x4); /* 0x1009E95E: mov edx, dword ptr [esi + 4] */
    eax = MEM32(ebp + 0x8); /* 0x1009E961: mov eax, dword ptr [ebp + 8] */
    ecx = MEM32(edx + eax); /* 0x1009E964: mov ecx, dword ptr [edx + eax] */
    eax = MEM32(esi + 0x8); /* 0x1009E967: mov eax, dword ptr [esi + 8] */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(MEM32(ecx + eax));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edx = edx + MEM32(ecx + eax); /* 0x1009E96A: add edx, dword ptr [ecx + eax] */
    _flag_k = FK_ADD;
L_1009E96D:
    eax = MEM32(esi); /* 0x1009E96D: mov eax, dword ptr [esi] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + edx; /* 0x1009E96F: add eax, edx */
    _flag_k = FK_ADD;
    esi = POP32_VAL(esp); /* 0x1009E971: pop esi */
    ebp = POP32_VAL(esp); /* 0x1009E972: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1009E973: ret  */
    RECOMP_REGS_OUT();
}

void sub_1009E974(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1009E974u);

L_1009E974:
    PUSH32(esp, 0x14u); /* 0x1009E974: push 0x14 */
    PUSH32(esp, 0x1009E9D8u); /* 0x1009E976: push 0x1009e9d8 */
    RECOMP_CALL(sub_1000ED7E); /* 0x1009E97B: call 0x1000ed7e */
    RECOMP_FLAGS_IN();
    /* cmp MEM32(ebp + 0x8), 0 */ /* 0x1009E980: cmp dword ptr [ebp + 8], 0 */
    _flag_a = (uint32_t)(MEM32(ebp + 0x8)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_1009E98E; /* 0x1009E984: jne 0x1009e98e */
L_1009E986:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1009E986: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
L_1009E988:
    RECOMP_CALL(sub_1000EDC3); /* 0x1009E988: call 0x1000edc3 */
    RECOMP_FLAGS_IN();
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1009E98D: ret  */
L_1009E98E:
    _flag_a = (uint32_t)(MEM32(ebp + (-0x4))); _flag_b = (uint32_t)(0);
    MEM32(ebp + (-0x4)) = MEM32(ebp + (-0x4)) & 0; /* 0x1009E98E: and dword ptr [ebp - 4], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x1009E992: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_1009E617); /* 0x1009E995: call 0x1009e617 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1009E99A: pop ecx */
    MEM32(ebp + (-0x4)) = 0xFFFFFFFEu; /* 0x1009E99B: mov dword ptr [ebp - 4], 0xfffffffe */
    RECOMP_BACKEDGE();
    goto L_1009E988; /* 0x1009E9A2: jmp 0x1009e988 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    RECOMP_REGS_OUT();
}

void sub_1009E9F4(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1009E9F4u);

L_1009E9F4:
    PUSH32(esp, 0x18u); /* 0x1009E9F4: push 0x18 */
    PUSH32(esp, 0x1009EAE8u); /* 0x1009E9F6: push 0x1009eae8 */
    RECOMP_CALL(sub_1000ED7E); /* 0x1009E9FB: call 0x1000ed7e */
    RECOMP_FLAGS_IN();
    edi = MEM32(ebp + 0x8); /* 0x1009EA00: mov edi, dword ptr [ebp + 8] */
    /* test edi, edi */ /* 0x1009EA03: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1009EA0F; /* 0x1009EA05: jne 0x1009ea0f */
L_1009EA07:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1009EA07: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
L_1009EA09:
    RECOMP_CALL(sub_1000EDC3); /* 0x1009EA09: call 0x1000edc3 */
    RECOMP_FLAGS_IN();
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1009EA0E: ret  */
L_1009EA0F:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    esi = 0; /* 0x1009EA0F: xor esi, esi */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x4)) = esi; /* 0x1009EA11: mov dword ptr [ebp - 4], esi */
    PUSH32(esp, edi); /* 0x1009EA14: push edi */
    RECOMP_CALL(sub_1009E617); /* 0x1009EA15: call 0x1009e617 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1009EA1A: pop ecx */
    ebx = eax; /* 0x1009EA1B: mov ebx, eax */
    ecx = MEM32(edi); /* 0x1009EA1D: mov ecx, dword ptr [edi] */
    eax = MEM32(ecx + (-0x4)); /* 0x1009EA1F: mov eax, dword ptr [ecx - 4] */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(MEM32(ebp + 0xC));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    edi = edi - MEM32(ebp + 0xC); /* 0x1009EA22: sub edi, dword ptr [ebp + 0xc] */
    _flag_k = FK_CMP;
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    edi = edi - ebx; /* 0x1009EA25: sub edi, ebx */
    _flag_k = FK_CMP;
    ecx = MEM32(eax + 0x10); /* 0x1009EA27: mov ecx, dword ptr [eax + 0x10] */
    ecx = MEM32(ecx + 0x4); /* 0x1009EA2A: mov ecx, dword ptr [ecx + 4] */
    PUSH32(esp, MEM32(ebp + 0x14)); /* 0x1009EA2D: push dword ptr [ebp + 0x14] */
    /* test LO8(ecx), 1 */ /* 0x1009EA30: test cl, 1 */
    _flag_a = (uint32_t)(LO8(ecx)) << 24; _flag_b = (uint32_t)(1) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1009EA43; /* 0x1009EA33: jne 0x1009ea43 */
L_1009EA35:
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x1009EA35: push dword ptr [ebp + 0x10] */
    PUSH32(esp, eax); /* 0x1009EA38: push eax */
    RECOMP_CALL(sub_1009E749); /* 0x1009EA39: call 0x1009e749 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x1009EA3E: add esp, 0xc */
    _flag_k = FK_ADD;
    goto L_1009EA5D; /* 0x1009EA41: jmp 0x1009ea5d */
L_1009EA43:
    PUSH32(esp, edi); /* 0x1009EA43: push edi */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x1009EA44: push dword ptr [ebp + 0x10] */
    PUSH32(esp, eax); /* 0x1009EA47: push eax */
    PUSH32(esp, ebx); /* 0x1009EA48: push ebx */
    /* test LO8(ecx), 2 */ /* 0x1009EA49: test cl, 2 */
    _flag_a = (uint32_t)(LO8(ecx)) << 24; _flag_b = (uint32_t)(2) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1009EA55; /* 0x1009EA4C: jne 0x1009ea55 */
L_1009EA4E:
    RECOMP_CALL(sub_1009E634); /* 0x1009EA4E: call 0x1009e634 */
    RECOMP_FLAGS_IN();
    goto L_1009EA5A; /* 0x1009EA53: jmp 0x1009ea5a */
L_1009EA55:
    RECOMP_CALL(sub_1009E7D1); /* 0x1009EA55: call 0x1009e7d1 */
    RECOMP_FLAGS_IN();
L_1009EA5A:
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x14u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x14u; /* 0x1009EA5A: add esp, 0x14 */
    _flag_k = FK_ADD;
L_1009EA5D:
    /* test eax, eax */ /* 0x1009EA5D: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1009EA7E; /* 0x1009EA5F: je 0x1009ea7e */
L_1009EA61:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 8; /* 0x1009EA61: add eax, 8 */
    _flag_k = FK_ADD;
    PUSH32(esp, eax); /* 0x1009EA64: push eax */
    PUSH32(esp, ebx); /* 0x1009EA65: push ebx */
    RECOMP_CALL(sub_1009E950); /* 0x1009EA66: call 0x1009e950 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1009EA6B: pop ecx */
    ecx = POP32_VAL(esp); /* 0x1009EA6C: pop ecx */
    esi = ebx + eax; /* 0x1009EA6D: lea esi, [ebx + eax] */
    MEM32(ebp + (-0x1C)) = esi; /* 0x1009EA70: mov dword ptr [ebp - 0x1c], esi */
L_1009EA73:
    MEM32(ebp + (-0x4)) = 0xFFFFFFFEu; /* 0x1009EA73: mov dword ptr [ebp - 4], 0xfffffffe */
    eax = esi; /* 0x1009EA7A: mov eax, esi */
    RECOMP_BACKEDGE();
    goto L_1009EA09; /* 0x1009EA7C: jmp 0x1009ea09 */
L_1009EA7E:
    MEM32(ebp + (-0x1C)) = esi; /* 0x1009EA7E: mov dword ptr [ebp - 0x1c], esi */
    /* cmp MEM32(ebp + 0x18), 0 */ /* 0x1009EA81: cmp dword ptr [ebp + 0x18], 0 */
    _flag_a = (uint32_t)(MEM32(ebp + 0x18)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1009EA73; /* 0x1009EA85: je 0x1009ea73 */
L_1009EA87:
    PUSH32(esp, 0x1009EAD0u); /* 0x1009EA87: push 0x1009ead0 */
    ecx = ebp + (-0x28); /* 0x1009EA8C: lea ecx, [ebp - 0x28] */
    RECOMP_CALL(sub_1009DCDD); /* 0x1009EA8F: call 0x1009dcdd */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0x1009EB04u); /* 0x1009EA94: push 0x1009eb04 */
    eax = ebp + (-0x28); /* 0x1009EA99: lea eax, [ebp - 0x28] */
    PUSH32(esp, eax); /* 0x1009EA9C: push eax */
    RECOMP_CALL(sub_100192EB); /* 0x1009EA9D: call 0x100192eb */
    RECOMP_FLAGS_IN();
    eax = MEM32(ebp + (-0x14)); /* 0x1009EAA2: mov eax, dword ptr [ebp - 0x14] */
    eax = MEM32(eax); /* 0x1009EAA5: mov eax, dword ptr [eax] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x1009EAA7: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp MEM32(eax), 0xC0000005u */ /* 0x1009EAA9: cmp dword ptr [eax], 0xc0000005 */
    _flag_a = (uint32_t)(MEM32(eax)); _flag_b = (uint32_t)(0xC0000005u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    SET_LO8(ecx, (CMP_EQ(_flag_a, _flag_b)) ? 1 : 0); /* 0x1009EAAF: sete cl */
    eax = ecx; /* 0x1009EAB2: mov eax, ecx */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1009EAB4: ret  */
    RECOMP_REGS_OUT();
}

void sub_1009EAD0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1009EAD0u);

L_1009EAD0:
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(1);
    edx = edx + 1; /* 0x1009EAD0: inc edx */
    _flag_k = FK_INC;
    POPAD(); /* 0x1009EAD1: popal  */
    _flag_a = (uint32_t)(MEM8(FS_BASE + (ecx + edi * 2 + 0x6E))) << 24; _flag_b = (uint32_t)(HI8(eax)) << 24;
    MEM8(FS_BASE + (ecx + edi * 2 + 0x6E)) = (uint8_t)(MEM8(FS_BASE + (ecx + edi * 2 + 0x6E)) & HI8(eax)); /* 0x1009EAD2: and byte ptr fs:[ecx + edi*2 + 0x6e], ah */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    POPAD(); /* 0x1009EAD7: popal  */
    void_lift_trap(0x1009EAD8u, "insd dword ptr es:[edi], dx");
    esp = (uint32_t)((int32_t)MEM32(ebx + 0x5F) * (int32_t)0x74736163u); /* 0x1009EAD9: imul esp, dword ptr [ebx + 0x5f], 0x74736163 */
    _flag_a = (uint32_t)(MEM32(eax)); _flag_b = (uint32_t)(eax);
    MEM32(eax) = MEM32(eax) & eax; /* 0x1009EAE0: and dword ptr [eax], eax */
    _cf = 0;
    _flag_k = FK_TEST;
    /* nop */ /* 0x1009EAE2: nop  */
    /* nop */ /* 0x1009EAE3: nop  */
    /* nop */ /* 0x1009EAE4: nop  */
    /* nop */ /* 0x1009EAE5: nop  */
    /* nop */ /* 0x1009EAE6: nop  */
    /* nop */ /* 0x1009EAE7: nop  */
    RECOMP_ITAIL(0x1009EAE8u); { RECOMP_REGS_OUT(); return; } /* falls through */
    RECOMP_REGS_OUT();
}

void sub_1009EB04(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1009EB04u);

L_1009EB04:
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x1009EB04: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x1009EB06: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    /* cmp LO8(eax), MEM8(GS_BASE + (ebx)) */ /* 0x1009EB08: cmp al, byte ptr gs:[ebx] */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(MEM8(GS_BASE + (ebx))) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    { uint32_t _aa = MEM8(eax), _ab = LO8(eax), _ac = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x1009EB0B: adc byte ptr [eax], al */
      MEM8(eax) = (uint8_t)(_aa + _ab + _ac);
      _flag_a = recomp_flags_adc(_aa, _ab, _ac); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x1009EB0D: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(esi + ecx * 8 + 0xD)) << 24; _flag_b = (uint32_t)(HI8(ecx)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(esi + ecx * 8 + 0xD) = (uint8_t)(MEM8(esi + ecx * 8 + 0xD) + HI8(ecx)); /* 0x1009EB0F: add byte ptr [esi + ecx*8 + 0xd], ch */
    _flag_k = FK_NARROW(FK_ADD, 24);
    { uint32_t _aa = MEM8(ebp + (-0x75)), _ab = LO8(edx), _ac = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x1009EB13: adc byte ptr [ebp - 0x75], dl */
      MEM8(ebp + (-0x75)) = (uint8_t)(_aa + _ab + _ac);
      _flag_a = recomp_flags_adc(_aa, _ab, _ac); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    /* in: no port I/O under Win32 */ /* 0x1009EB16: in al, dx */
    eax = MEM32(ebp + 0x8); /* 0x1009EB17: mov eax, dword ptr [ebp + 8] */
    PUSH32(esp, esi); /* 0x1009EB1A: push esi */
    esi = ecx; /* 0x1009EB1B: mov esi, ecx */
    _flag_a = (uint32_t)(MEM32(esi + 0x4)); _flag_b = (uint32_t)(0xFFFF00FFu);
    MEM32(esi + 0x4) = MEM32(esi + 0x4) & 0xFFFF00FFu; /* 0x1009EB1D: and dword ptr [esi + 4], 0xffff00ff */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp eax, 2 */ /* 0x1009EB24: cmp eax, 2 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1009EB32; /* 0x1009EB27: je 0x1009eb32 */
L_1009EB29:
    /* cmp eax, 3 */ /* 0x1009EB29: cmp eax, 3 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(3);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1009EB32; /* 0x1009EB2C: je 0x1009eb32 */
L_1009EB2E:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x1009EB2E: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_1009EB34; /* 0x1009EB30: jmp 0x1009eb34 */
L_1009EB32:
    ecx = eax; /* 0x1009EB32: mov ecx, eax */
L_1009EB34:
    _flag_a = (uint32_t)(MEM32(esi)); _flag_b = (uint32_t)(0);
    MEM32(esi) = MEM32(esi) & 0; /* 0x1009EB34: and dword ptr [esi], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM8(esi + 0x4) = (uint8_t)(LO8(ecx)); /* 0x1009EB37: mov byte ptr [esi + 4], cl */
    /* cmp eax, 1 */ /* 0x1009EB3A: cmp eax, 1 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_1009EB50; /* 0x1009EB3D: jne 0x1009eb50 */
L_1009EB3F:
    PUSH32(esp, eax); /* 0x1009EB3F: push eax */
    RECOMP_CALL(sub_100A022B); /* 0x1009EB40: call 0x100a022b */
    RECOMP_FLAGS_IN();
    MEM32(esi) = eax; /* 0x1009EB45: mov dword ptr [esi], eax */
    ecx = POP32_VAL(esp); /* 0x1009EB47: pop ecx */
    /* test eax, eax */ /* 0x1009EB48: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1009EB50; /* 0x1009EB4A: jne 0x1009eb50 */
L_1009EB4C:
    MEM8(esi + 0x4) = (uint8_t)(3); /* 0x1009EB4C: mov byte ptr [esi + 4], 3 */
L_1009EB50:
    eax = esi; /* 0x1009EB50: mov eax, esi */
    esi = POP32_VAL(esp); /* 0x1009EB52: pop esi */
    ebp = POP32_VAL(esp); /* 0x1009EB53: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x1009EB54: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_1009EB14(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1009EB14u);

L_1009EB14:
    PUSH32(esp, ebp); /* 0x1009EB14: push ebp */
    ebp = esp; /* 0x1009EB15: mov ebp, esp */
    eax = MEM32(ebp + 0x8); /* 0x1009EB17: mov eax, dword ptr [ebp + 8] */
    PUSH32(esp, esi); /* 0x1009EB1A: push esi */
    esi = ecx; /* 0x1009EB1B: mov esi, ecx */
    _flag_a = (uint32_t)(MEM32(esi + 0x4)); _flag_b = (uint32_t)(0xFFFF00FFu);
    MEM32(esi + 0x4) = MEM32(esi + 0x4) & 0xFFFF00FFu; /* 0x1009EB1D: and dword ptr [esi + 4], 0xffff00ff */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp eax, 2 */ /* 0x1009EB24: cmp eax, 2 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1009EB32; /* 0x1009EB27: je 0x1009eb32 */
L_1009EB29:
    /* cmp eax, 3 */ /* 0x1009EB29: cmp eax, 3 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(3);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1009EB32; /* 0x1009EB2C: je 0x1009eb32 */
L_1009EB2E:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x1009EB2E: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_1009EB34; /* 0x1009EB30: jmp 0x1009eb34 */
L_1009EB32:
    ecx = eax; /* 0x1009EB32: mov ecx, eax */
L_1009EB34:
    _flag_a = (uint32_t)(MEM32(esi)); _flag_b = (uint32_t)(0);
    MEM32(esi) = MEM32(esi) & 0; /* 0x1009EB34: and dword ptr [esi], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM8(esi + 0x4) = (uint8_t)(LO8(ecx)); /* 0x1009EB37: mov byte ptr [esi + 4], cl */
    /* cmp eax, 1 */ /* 0x1009EB3A: cmp eax, 1 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_1009EB50; /* 0x1009EB3D: jne 0x1009eb50 */
L_1009EB3F:
    PUSH32(esp, eax); /* 0x1009EB3F: push eax */
    RECOMP_CALL(sub_100A022B); /* 0x1009EB40: call 0x100a022b */
    RECOMP_FLAGS_IN();
    MEM32(esi) = eax; /* 0x1009EB45: mov dword ptr [esi], eax */
    ecx = POP32_VAL(esp); /* 0x1009EB47: pop ecx */
    /* test eax, eax */ /* 0x1009EB48: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1009EB50; /* 0x1009EB4A: jne 0x1009eb50 */
L_1009EB4C:
    MEM8(esi + 0x4) = (uint8_t)(3); /* 0x1009EB4C: mov byte ptr [esi + 4], 3 */
L_1009EB50:
    eax = esi; /* 0x1009EB50: mov eax, esi */
    esi = POP32_VAL(esp); /* 0x1009EB52: pop esi */
    ebp = POP32_VAL(esp); /* 0x1009EB53: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x1009EB54: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_1009EB57(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1009EB57u);

L_1009EB57:
    PUSH32(esp, ebp); /* 0x1009EB57: push ebp */
    ebp = esp; /* 0x1009EB58: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x2Cu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x2Cu; /* 0x1009EB5A: sub esp, 0x2c */
    _flag_k = FK_CMP;
    eax = MEM32(0x100DF7B8); /* 0x1009EB5D: mov eax, dword ptr [0x100df7b8] */
    _flag_a = (uint32_t)((eax ^ ebp)); _flag_b = (uint32_t)((eax ^ ebp));
    eax = eax ^ ebp; /* 0x1009EB62: xor eax, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x4)) = eax; /* 0x1009EB64: mov dword ptr [ebp - 4], eax */
    edx = MEM32(ebp + 0xC); /* 0x1009EB67: mov edx, dword ptr [ebp + 0xc] */
    eax = ecx; /* 0x1009EB6A: mov eax, ecx */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x1009EB6C: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x24)) = eax; /* 0x1009EB6E: mov dword ptr [ebp - 0x24], eax */
    PUSH32(esp, esi); /* 0x1009EB71: push esi */
    PUSH32(esp, edi); /* 0x1009EB72: push edi */
    edi = MEM32(ebp + 0x8); /* 0x1009EB73: mov edi, dword ptr [ebp + 8] */
    esi = ebp + (-0x7); /* 0x1009EB76: lea esi, [ebp - 7] */
    MEM8(eax + 0x4) = (uint8_t)(LO8(ecx)); /* 0x1009EB79: mov byte ptr [eax + 4], cl */
    _flag_a = (uint32_t)(MEM32(eax + 0x4)); _flag_b = (uint32_t)(0xFFFF00FFu);
    MEM32(eax + 0x4) = MEM32(eax + 0x4) & 0xFFFF00FFu; /* 0x1009EB7C: and dword ptr [eax + 4], 0xffff00ff */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(eax) = ecx; /* 0x1009EB83: mov dword ptr [eax], ecx */
    MEM8(ebp + (-0x7)) = (uint8_t)(LO8(ecx)); /* 0x1009EB85: mov byte ptr [ebp - 7], cl */
    MEM8(ebp + (-0x1D)) = (uint8_t)(LO8(ecx)); /* 0x1009EB88: mov byte ptr [ebp - 0x1d], cl */
    /* cmp edx, ecx */ /* 0x1009EB8B: cmp edx, ecx */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_G(_flag_a, _flag_b)) goto L_1009EB9F; /* 0x1009EB8D: jg 0x1009eb9f */
L_1009EB8F:
    if (CMP_L(_flag_a, _flag_b)) goto L_1009EB95; /* 0x1009EB8F: jl 0x1009eb95 */
L_1009EB91:
    /* cmp edi, ecx */ /* 0x1009EB91: cmp edi, ecx */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_AE(_flag_a, _flag_b)) goto L_1009EB9F; /* 0x1009EB93: jae 0x1009eb9f */
L_1009EB95:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(edi);
    _cf = (edi) != 0;
    edi = (uint32_t)(-(int32_t)edi); /* 0x1009EB95: neg edi */
    _flag_k = FK_CMP;
    MEM8(ebp + (-0x1D)) = (uint8_t)(1); /* 0x1009EB97: mov byte ptr [ebp - 0x1d], 1 */
    { uint32_t _aa = edx, _ab = ecx, _ac = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x1009EB9B: adc edx, ecx */
      edx = _aa + _ab + _ac;
      _flag_a = recomp_flags_adc(_aa, _ab, _ac); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(edx);
    _cf = (edx) != 0;
    edx = (uint32_t)(-(int32_t)edx); /* 0x1009EB9D: neg edx */
    _flag_k = FK_CMP;
L_1009EB9F:
    PUSH32(esp, ebx); /* 0x1009EB9F: push ebx */
L_1009EBA0:
    PUSH32(esp, ecx); /* 0x1009EBA0: push ecx */
    PUSH32(esp, 0xAu); /* 0x1009EBA1: push 0xa */
    PUSH32(esp, edx); /* 0x1009EBA3: push edx */
    PUSH32(esp, edi); /* 0x1009EBA4: push edi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi - 1; /* 0x1009EBA5: dec esi */
    _flag_k = FK_DEC;
    RECOMP_CALL(sub_10011849); /* 0x1009EBA6: call 0x10011849 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(LO8(ecx)) << 24; _flag_b = (uint32_t)(0x30u) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    SET_LO8(ecx, LO8(ecx) + 0x30u); /* 0x1009EBAB: add cl, 0x30 */
    _flag_k = FK_NARROW(FK_ADD, 24);
    MEM32(ebp + (-0x28)) = ebx; /* 0x1009EBAE: mov dword ptr [ebp - 0x28], ebx */
    edi = eax; /* 0x1009EBB1: mov edi, eax */
    MEM8(esi) = (uint8_t)(LO8(ecx)); /* 0x1009EBB3: mov byte ptr [esi], cl */
    _flag_a = (uint32_t)((eax | edx)); _flag_b = (uint32_t)((eax | edx));
    eax = eax | edx; /* 0x1009EBB5: or eax, edx */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, 0); /* 0x1009EBB7: push 0 */
    ecx = POP32_VAL(esp); /* 0x1009EBB9: pop ecx */
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1009EBA0; /* 0x1009EBBA: jne 0x1009eba0 */
L_1009EBBC:
    ebx = POP32_VAL(esp); /* 0x1009EBBC: pop ebx */
    /* cmp MEM8(ebp + (-0x1D)), LO8(ecx) */ /* 0x1009EBBD: cmp byte ptr [ebp - 0x1d], cl */
    _flag_a = (uint32_t)(MEM8(ebp + (-0x1D))) << 24; _flag_b = (uint32_t)(LO8(ecx)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1009EBC6; /* 0x1009EBC0: je 0x1009ebc6 */
L_1009EBC2:
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi - 1; /* 0x1009EBC2: dec esi */
    _flag_k = FK_DEC;
    MEM8(esi) = (uint8_t)(0x2Du); /* 0x1009EBC3: mov byte ptr [esi], 0x2d */
L_1009EBC6:
    ecx = ebp + (-0x7); /* 0x1009EBC6: lea ecx, [ebp - 7] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ecx = ecx - esi; /* 0x1009EBC9: sub ecx, esi */
    _flag_k = FK_CMP;
    PUSH32(esp, ecx); /* 0x1009EBCB: push ecx */
    ecx = MEM32(ebp + (-0x24)); /* 0x1009EBCC: mov ecx, dword ptr [ebp - 0x24] */
    PUSH32(esp, esi); /* 0x1009EBCF: push esi */
    RECOMP_CALL(sub_10023174); /* 0x1009EBD0: call 0x10023174 */
    RECOMP_FLAGS_IN();
    ecx = MEM32(ebp + (-0x4)); /* 0x1009EBD5: mov ecx, dword ptr [ebp - 4] */
    eax = MEM32(ebp + (-0x24)); /* 0x1009EBD8: mov eax, dword ptr [ebp - 0x24] */
    _flag_a = (uint32_t)((ecx ^ ebp)); _flag_b = (uint32_t)((ecx ^ ebp));
    ecx = ecx ^ ebp; /* 0x1009EBDB: xor ecx, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    edi = POP32_VAL(esp); /* 0x1009EBDD: pop edi */
    esi = POP32_VAL(esp); /* 0x1009EBDE: pop esi */
    RECOMP_CALL(sub_1000F7C6); /* 0x1009EBDF: call 0x1000f7c6 */
    RECOMP_FLAGS_IN();
    esp = ebp; /* 0x1009EBE4: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x1009EBE6: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 12; { RECOMP_REGS_OUT(); return; } /* 0x1009EBE7: ret 8 */
    RECOMP_REGS_OUT();
}

void sub_1009EBEA(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1009EBEAu);

L_1009EBEA:
    PUSH32(esp, ebp); /* 0x1009EBEA: push ebp */
    ebp = esp; /* 0x1009EBEB: mov ebp, esp */
    PUSH32(esp, ecx); /* 0x1009EBED: push ecx */
    PUSH32(esp, ecx); /* 0x1009EBEE: push ecx */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x1009EBEF: push dword ptr [ebp + 0x10] */
    ecx = ebp + (-0x8); /* 0x1009EBF2: lea ecx, [ebp - 8] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x1009EBF5: push dword ptr [ebp + 8] */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x1009EBF8: push dword ptr [ebp + 0xc] */
    RECOMP_CALL(sub_1002A173); /* 0x1009EBFB: call 0x1002a173 */
    RECOMP_FLAGS_IN();
    ecx = eax; /* 0x1009EC00: mov ecx, eax */
    RECOMP_CALL(sub_1002A19F); /* 0x1009EC02: call 0x1002a19f */
    RECOMP_FLAGS_IN();
    eax = MEM32(ebp + 0x8); /* 0x1009EC07: mov eax, dword ptr [ebp + 8] */
    esp = ebp; /* 0x1009EC0A: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x1009EC0C: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1009EC0D: ret  */
    RECOMP_REGS_OUT();
}

void sub_1009EC0E(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1009EC0Eu);

L_1009EC0E:
    PUSH32(esp, ebp); /* 0x1009EC0E: push ebp */
    ebp = esp; /* 0x1009EC0F: mov ebp, esp */
    PUSH32(esp, ecx); /* 0x1009EC11: push ecx */
    PUSH32(esp, ecx); /* 0x1009EC12: push ecx */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x1009EC13: push dword ptr [ebp + 0x10] */
    ecx = ebp + (-0x8); /* 0x1009EC16: lea ecx, [ebp - 8] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x1009EC19: push dword ptr [ebp + 8] */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x1009EC1C: push dword ptr [ebp + 0xc] */
    RECOMP_CALL(sub_1009EB14); /* 0x1009EC1F: call 0x1009eb14 */
    RECOMP_FLAGS_IN();
    ecx = eax; /* 0x1009EC24: mov ecx, eax */
    RECOMP_CALL(sub_1002A19F); /* 0x1009EC26: call 0x1002a19f */
    RECOMP_FLAGS_IN();
    eax = MEM32(ebp + 0x8); /* 0x1009EC2B: mov eax, dword ptr [ebp + 8] */
    esp = ebp; /* 0x1009EC2E: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x1009EC30: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1009EC31: ret  */
    RECOMP_REGS_OUT();
}

void sub_1009EC32(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1009EC32u);

L_1009EC32:
    PUSH32(esp, ebp); /* 0x1009EC32: push ebp */
    ebp = esp; /* 0x1009EC33: mov ebp, esp */
    edx = MEM32(ecx); /* 0x1009EC35: mov edx, dword ptr [ecx] */
    PUSH32(esp, esi); /* 0x1009EC37: push esi */
    esi = MEM32(ebp + 0x8); /* 0x1009EC38: mov esi, dword ptr [ebp + 8] */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x1009EC3B: push dword ptr [ebp + 0xc] */
    MEM32(esi) = edx; /* 0x1009EC3E: mov dword ptr [esi], edx */
    ecx = MEM32(ecx + 0x4); /* 0x1009EC40: mov ecx, dword ptr [ecx + 4] */
    MEM32(esi + 0x4) = ecx; /* 0x1009EC43: mov dword ptr [esi + 4], ecx */
    ecx = esi; /* 0x1009EC46: mov ecx, esi */
    RECOMP_CALL(sub_1002374C); /* 0x1009EC48: call 0x1002374c */
    RECOMP_FLAGS_IN();
    eax = esi; /* 0x1009EC4D: mov eax, esi */
    esi = POP32_VAL(esp); /* 0x1009EC4F: pop esi */
    ebp = POP32_VAL(esp); /* 0x1009EC50: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 12; { RECOMP_REGS_OUT(); return; } /* 0x1009EC51: ret 8 */
    RECOMP_REGS_OUT();
}
