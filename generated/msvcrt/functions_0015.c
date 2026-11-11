#define RECOMP_GENERATED_CODE

#include "functions.h"

void sub_15059659(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x15059659u);

L_15059659:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x15059659: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = MEM32(FS_BASE + (0)); /* 0x1505965B: mov ecx, dword ptr fs:[0] */
    /* cmp MEM32(ecx + 0x4), 0x15059590u */ /* 0x15059662: cmp dword ptr [ecx + 4], 0x15059590 */
    _flag_a = (uint32_t)(MEM32(ecx + 0x4)); _flag_b = (uint32_t)(0x15059590u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_1505967B; /* 0x15059669: jne 0x1505967b */
L_1505966B:
    edx = MEM32(ecx + 0xC); /* 0x1505966B: mov edx, dword ptr [ecx + 0xc] */
    edx = MEM32(edx + 0xC); /* 0x1505966E: mov edx, dword ptr [edx + 0xc] */
    /* cmp MEM32(ecx + 0x8), edx */ /* 0x15059671: cmp dword ptr [ecx + 8], edx */
    _flag_a = (uint32_t)(MEM32(ecx + 0x8)); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_1505967B; /* 0x15059674: jne 0x1505967b */
L_15059676:
    eax = 1; /* 0x15059676: mov eax, 1 */
L_1505967B:
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1505967B: ret  */
    RECOMP_REGS_OUT();
}

void sub_1505967C(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1505967Cu);

L_1505967C:
    PUSH32(esp, ebx); /* 0x1505967C: push ebx */
    PUSH32(esp, ecx); /* 0x1505967D: push ecx */
    ebx = 0x150BD318u; /* 0x1505967E: mov ebx, 0x150bd318 */
    goto L_15059690; /* 0x15059683: jmp 0x15059690 */
L_15059690:
    MEM32(ebx + 0x8) = ecx; /* 0x15059690: mov dword ptr [ebx + 8], ecx */
    MEM32(ebx + 0x4) = eax; /* 0x15059693: mov dword ptr [ebx + 4], eax */
    MEM32(ebx + 0xC) = ebp; /* 0x15059696: mov dword ptr [ebx + 0xc], ebp */
    PUSH32(esp, ebp); /* 0x15059699: push ebp */
    PUSH32(esp, ecx); /* 0x1505969A: push ecx */
    PUSH32(esp, eax); /* 0x1505969B: push eax */
    eax = POP32_VAL(esp); /* 0x1505969C: pop eax */
    ecx = POP32_VAL(esp); /* 0x1505969D: pop ecx */
    ebp = POP32_VAL(esp); /* 0x1505969E: pop ebp */
    ecx = POP32_VAL(esp); /* 0x1505969F: pop ecx */
    ebx = POP32_VAL(esp); /* 0x150596A0: pop ebx */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x150596A1: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_15059685(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x15059685u);

L_15059685:
    PUSH32(esp, ebx); /* 0x15059685: push ebx */
    PUSH32(esp, ecx); /* 0x15059686: push ecx */
    ebx = 0x150BD318u; /* 0x15059687: mov ebx, 0x150bd318 */
    ecx = MEM32(esp + 0xC); /* 0x1505968C: mov ecx, dword ptr [esp + 0xc] */
    MEM32(ebx + 0x8) = ecx; /* 0x15059690: mov dword ptr [ebx + 8], ecx */
    MEM32(ebx + 0x4) = eax; /* 0x15059693: mov dword ptr [ebx + 4], eax */
    MEM32(ebx + 0xC) = ebp; /* 0x15059696: mov dword ptr [ebx + 0xc], ebp */
    PUSH32(esp, ebp); /* 0x15059699: push ebp */
    PUSH32(esp, ecx); /* 0x1505969A: push ecx */
    PUSH32(esp, eax); /* 0x1505969B: push eax */
    eax = POP32_VAL(esp); /* 0x1505969C: pop eax */
    ecx = POP32_VAL(esp); /* 0x1505969D: pop ecx */
    ebp = POP32_VAL(esp); /* 0x1505969E: pop ebp */
    ecx = POP32_VAL(esp); /* 0x1505969F: pop ecx */
    ebx = POP32_VAL(esp); /* 0x150596A0: pop ebx */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x150596A1: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_150596A4(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x150596A4u);

L_150596A4:
    RECOMP_ICALL(eax); /* 0x150596A4: call eax */
    RECOMP_FLAGS_IN();
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x150596A6: ret  */
    RECOMP_REGS_OUT();
}

void sub_150596B0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x150596B0u);

L_150596B0:
    edi = edi; /* 0x150596B0: mov edi, edi */
    PUSH32(esp, ebp); /* 0x150596B2: push ebp */
    ebp = esp; /* 0x150596B3: mov ebp, esp */
    eax = MEM32(ebp + 0xC); /* 0x150596B5: mov eax, dword ptr [ebp + 0xc] */
    ecx = MEM32(ebp + 0x8); /* 0x150596B8: mov ecx, dword ptr [ebp + 8] */
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFFu : 0; /* 0x150596BB: cdq  */
    _flag_a = (uint32_t)((eax ^ edx)); _flag_b = (uint32_t)((eax ^ edx));
    eax = eax ^ edx; /* 0x150596BC: xor eax, edx */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)((ecx ^ edx)); _flag_b = (uint32_t)((ecx ^ edx));
    ecx = ecx ^ edx; /* 0x150596BE: xor ecx, edx */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ecx = ecx - edx; /* 0x150596C0: sub ecx, edx */
    _flag_k = FK_CMP;
    { uint32_t _sa = eax, _sb = edx, _sc = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x150596C2: sbb eax, edx */
      eax = _sa - _sb - _sc;
      _flag_a = recomp_flags_sbb(_sa, _sb, _sc); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    edx = eax; /* 0x150596C4: mov edx, eax */
    eax = ecx; /* 0x150596C6: mov eax, ecx */
    ebp = POP32_VAL(esp); /* 0x150596C8: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x150596C9: ret  */
    RECOMP_REGS_OUT();
}

void sub_150596D0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x150596D0u);

L_150596D0:
    edi = edi; /* 0x150596D0: mov edi, edi */
    PUSH32(esp, ebp); /* 0x150596D2: push ebp */
    ebp = esp; /* 0x150596D3: mov ebp, esp */
    eax = MEM32(ebp + 0x8); /* 0x150596D5: mov eax, dword ptr [ebp + 8] */
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFFu : 0; /* 0x150596D8: cdq  */
    _flag_a = (uint32_t)((eax ^ edx)); _flag_b = (uint32_t)((eax ^ edx));
    eax = eax ^ edx; /* 0x150596D9: xor eax, edx */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - edx; /* 0x150596DB: sub eax, edx */
    _flag_k = FK_CMP;
    ebp = POP32_VAL(esp); /* 0x150596DD: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x150596DE: ret  */
    RECOMP_REGS_OUT();
}

void sub_150596F0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x150596F0u);

L_150596F0:
    edi = edi; /* 0x150596F0: mov edi, edi */
    PUSH32(esp, ebp); /* 0x150596F2: push ebp */
    ebp = esp; /* 0x150596F3: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x334u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x334u; /* 0x150596F5: sub esp, 0x334 */
    _flag_k = FK_CMP;
    eax = MEM32(0x150BD340); /* 0x150596FB: mov eax, dword ptr [0x150bd340] */
    _flag_a = (uint32_t)((eax ^ ebp)); _flag_b = (uint32_t)((eax ^ ebp));
    eax = eax ^ ebp; /* 0x15059700: xor eax, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x4)) = eax; /* 0x15059702: mov dword ptr [ebp - 4], eax */
    eax = MEM32(ebp + 0x8); /* 0x15059705: mov eax, dword ptr [ebp + 8] */
    PUSH32(esp, ebx); /* 0x15059708: push ebx */
    PUSH32(esp, esi); /* 0x15059709: push esi */
    esi = MEM32(ebp + 0xC); /* 0x1505970A: mov esi, dword ptr [ebp + 0xc] */
    PUSH32(esp, edi); /* 0x1505970D: push edi */
    PUSH32(esp, 3); /* 0x1505970E: push 3 */
    MEM32(ebp + (-0x32C)) = esi; /* 0x15059710: mov dword ptr [ebp - 0x32c], esi */
    MEM32(ebp + (-0x334)) = eax; /* 0x15059716: mov dword ptr [ebp - 0x334], eax */
    RECOMP_CALL(sub_15059280); /* 0x1505971C: call 0x15059280 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edi = 0; /* 0x15059721: xor edi, edi */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(1);
    edi = edi + 1; /* 0x15059723: inc edi */
    _flag_k = FK_INC;
    ecx = POP32_VAL(esp); /* 0x15059724: pop ecx */
    /* cmp eax, edi */ /* 0x15059725: cmp eax, edi */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_15059D04; /* 0x15059727: je 0x15059d04 */
L_1505972D:
    PUSH32(esp, 3); /* 0x1505972D: push 3 */
    RECOMP_CALL(sub_15059280); /* 0x1505972F: call 0x15059280 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x15059734: pop ecx */
    /* test eax, eax */ /* 0x15059735: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_15059745; /* 0x15059737: jne 0x15059745 */
L_15059739:
    /* cmp MEM32(0x150BDB08), edi */ /* 0x15059739: cmp dword ptr [0x150bdb08], edi */
    _flag_a = (uint32_t)(MEM32(0x150BDB08)); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_15059D04; /* 0x1505973F: je 0x15059d04 */
L_15059745:
    PUSH32(esp, 0x15005B34u); /* 0x15059745: push 0x15005b34 */
    esi = 0x21Cu; /* 0x1505974A: mov esi, 0x21c */
    eax = ebp + (-0x220); /* 0x1505974F: lea eax, [ebp - 0x220] */
    PUSH32(esp, esi); /* 0x15059755: push esi */
    PUSH32(esp, eax); /* 0x15059756: push eax */
    RECOMP_CALL(sub_1508E640); /* 0x15059757: call 0x1508e640 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x1505975C: add esp, 0xc */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ebx = 0; /* 0x1505975F: xor ebx, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
    /* test eax, eax */ /* 0x15059761: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_15059772; /* 0x15059763: je 0x15059772 */
L_15059765:
    PUSH32(esp, ebx); /* 0x15059765: push ebx */
    PUSH32(esp, ebx); /* 0x15059766: push ebx */
    PUSH32(esp, ebx); /* 0x15059767: push ebx */
    PUSH32(esp, ebx); /* 0x15059768: push ebx */
    PUSH32(esp, ebx); /* 0x15059769: push ebx */
    RECOMP_CALL(sub_1505A11B); /* 0x1505976A: call 0x1505a11b */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x14u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x14u; /* 0x1505976F: add esp, 0x14 */
    _flag_k = FK_ADD;
L_15059772:
    PUSH32(esp, MEM32(0x150BC160)); /* 0x15059772: push dword ptr [0x150bc160] */
    eax = ebp + (-0x220); /* 0x15059778: lea eax, [ebp - 0x220] */
    PUSH32(esp, esi); /* 0x1505977E: push esi */
    PUSH32(esp, eax); /* 0x1505977F: push eax */
    RECOMP_CALL(sub_1508E450); /* 0x15059780: call 0x1508e450 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x15059785: add esp, 0xc */
    _flag_k = FK_ADD;
    /* test eax, eax */ /* 0x15059788: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_15059799; /* 0x1505978A: je 0x15059799 */
L_1505978C:
    PUSH32(esp, ebx); /* 0x1505978C: push ebx */
    PUSH32(esp, ebx); /* 0x1505978D: push ebx */
    PUSH32(esp, ebx); /* 0x1505978E: push ebx */
    PUSH32(esp, ebx); /* 0x1505978F: push ebx */
    PUSH32(esp, ebx); /* 0x15059790: push ebx */
    RECOMP_CALL(sub_1505A11B); /* 0x15059791: call 0x1505a11b */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x14u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x14u; /* 0x15059796: add esp, 0x14 */
    _flag_k = FK_ADD;
L_15059799:
    PUSH32(esp, 0x15005B48u); /* 0x15059799: push 0x15005b48 */
    eax = ebp + (-0x220); /* 0x1505979E: lea eax, [ebp - 0x220] */
    PUSH32(esp, esi); /* 0x150597A4: push esi */
    PUSH32(esp, eax); /* 0x150597A5: push eax */
    RECOMP_CALL(sub_1508E450); /* 0x150597A6: call 0x1508e450 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x150597AB: add esp, 0xc */
    _flag_k = FK_ADD;
    /* test eax, eax */ /* 0x150597AE: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_150597BF; /* 0x150597B0: je 0x150597bf */
L_150597B2:
    PUSH32(esp, ebx); /* 0x150597B2: push ebx */
    PUSH32(esp, ebx); /* 0x150597B3: push ebx */
    PUSH32(esp, ebx); /* 0x150597B4: push ebx */
    PUSH32(esp, ebx); /* 0x150597B5: push ebx */
    PUSH32(esp, ebx); /* 0x150597B6: push ebx */
    RECOMP_CALL(sub_1505A11B); /* 0x150597B7: call 0x1505a11b */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x14u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x14u; /* 0x150597BC: add esp, 0x14 */
    _flag_k = FK_ADD;
L_150597BF:
    PUSH32(esp, 0x104u); /* 0x150597BF: push 0x104 */
    eax = ebp + (-0x328); /* 0x150597C4: lea eax, [ebp - 0x328] */
    MEM8(ebp + (-0x224)) = (uint8_t)(LO8(ebx)); /* 0x150597CA: mov byte ptr [ebp - 0x224], bl */
    PUSH32(esp, eax); /* 0x150597D0: push eax */
    PUSH32(esp, ebx); /* 0x150597D1: push ebx */
    RECOMP_ICALL(MEM32(0x150C0168)); /* 0x150597D2: call dword ptr [0x150c0168] */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x150597D8: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_15059806; /* 0x150597DA: jne 0x15059806 */
L_150597DC:
    PUSH32(esp, 0x15005B54u); /* 0x150597DC: push 0x15005b54 */
    eax = ebp + (-0x328); /* 0x150597E1: lea eax, [ebp - 0x328] */
    PUSH32(esp, 0x105u); /* 0x150597E7: push 0x105 */
    PUSH32(esp, eax); /* 0x150597EC: push eax */
    RECOMP_CALL(sub_1508E640); /* 0x150597ED: call 0x1508e640 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x150597F2: add esp, 0xc */
    _flag_k = FK_ADD;
    /* test eax, eax */ /* 0x150597F5: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_15059806; /* 0x150597F7: je 0x15059806 */
L_150597F9:
    PUSH32(esp, ebx); /* 0x150597F9: push ebx */
    PUSH32(esp, ebx); /* 0x150597FA: push ebx */
    PUSH32(esp, ebx); /* 0x150597FB: push ebx */
    PUSH32(esp, ebx); /* 0x150597FC: push ebx */
    PUSH32(esp, ebx); /* 0x150597FD: push ebx */
    RECOMP_CALL(sub_1505A11B); /* 0x150597FE: call 0x1505a11b */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x14u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x14u; /* 0x15059803: add esp, 0x14 */
    _flag_k = FK_ADD;
L_15059806:
    esi = ebp + (-0x328); /* 0x15059806: lea esi, [ebp - 0x328] */
    ecx = esi; /* 0x1505980C: mov ecx, esi */
    edx = ecx + 0x1; /* 0x1505980E: lea edx, [ecx + 1] */
L_15059811:
    SET_LO8(eax, MEM8(ecx)); /* 0x15059811: mov al, byte ptr [ecx] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx + 1; /* 0x15059813: inc ecx */
    _flag_k = FK_INC;
    /* test LO8(eax), LO8(eax) */ /* 0x15059814: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_15059811; /* 0x15059816: jne 0x15059811 */
L_15059818:
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ecx = ecx - edx; /* 0x15059818: sub ecx, edx */
    _flag_k = FK_CMP;
    eax = ecx + 0xB; /* 0x1505981A: lea eax, [ecx + 0xb] */
    /* cmp eax, 0x3Cu */ /* 0x1505981D: cmp eax, 0x3c */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x3Cu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_15059854; /* 0x15059820: jbe 0x15059854 */
L_15059822:
    PUSH32(esp, 3); /* 0x15059822: push 3 */
    PUSH32(esp, MEM32(0x150BC158)); /* 0x15059824: push dword ptr [0x150bc158] */
    esi = ebp + ecx + (-0x359); /* 0x1505982A: lea esi, [ebp + ecx - 0x359] */
    eax = ebp + (-0x223); /* 0x15059831: lea eax, [ebp - 0x223] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - esi; /* 0x15059837: sub eax, esi */
    _flag_k = FK_CMP;
    PUSH32(esp, eax); /* 0x15059839: push eax */
    PUSH32(esp, esi); /* 0x1505983A: push esi */
    RECOMP_CALL(sub_150535C0); /* 0x1505983B: call 0x150535c0 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x10u; /* 0x15059840: add esp, 0x10 */
    _flag_k = FK_ADD;
    /* test eax, eax */ /* 0x15059843: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_15059854; /* 0x15059845: je 0x15059854 */
L_15059847:
    PUSH32(esp, ebx); /* 0x15059847: push ebx */
    PUSH32(esp, ebx); /* 0x15059848: push ebx */
    PUSH32(esp, ebx); /* 0x15059849: push ebx */
    PUSH32(esp, ebx); /* 0x1505984A: push ebx */
    PUSH32(esp, ebx); /* 0x1505984B: push ebx */
    RECOMP_CALL(sub_1505A11B); /* 0x1505984C: call 0x1505a11b */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x14u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x14u; /* 0x15059851: add esp, 0x14 */
    _flag_k = FK_ADD;
L_15059854:
    PUSH32(esp, esi); /* 0x15059854: push esi */
    esi = 0x21Cu; /* 0x15059855: mov esi, 0x21c */
    eax = ebp + (-0x220); /* 0x1505985A: lea eax, [ebp - 0x220] */
    PUSH32(esp, esi); /* 0x15059860: push esi */
    PUSH32(esp, eax); /* 0x15059861: push eax */
    RECOMP_CALL(sub_1508E450); /* 0x15059862: call 0x1508e450 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x15059867: add esp, 0xc */
    _flag_k = FK_ADD;
    /* test eax, eax */ /* 0x1505986A: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1505987B; /* 0x1505986C: je 0x1505987b */
L_1505986E:
    PUSH32(esp, ebx); /* 0x1505986E: push ebx */
    PUSH32(esp, ebx); /* 0x1505986F: push ebx */
    PUSH32(esp, ebx); /* 0x15059870: push ebx */
    PUSH32(esp, ebx); /* 0x15059871: push ebx */
    PUSH32(esp, ebx); /* 0x15059872: push ebx */
    RECOMP_CALL(sub_1505A11B); /* 0x15059873: call 0x1505a11b */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x14u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x14u; /* 0x15059878: add esp, 0x14 */
    _flag_k = FK_ADD;
L_1505987B:
    PUSH32(esp, MEM32(0x150BC15C)); /* 0x1505987B: push dword ptr [0x150bc15c] */
    eax = ebp + (-0x220); /* 0x15059881: lea eax, [ebp - 0x220] */
    PUSH32(esp, esi); /* 0x15059887: push esi */
    PUSH32(esp, eax); /* 0x15059888: push eax */
    RECOMP_CALL(sub_1508E450); /* 0x15059889: call 0x1508e450 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x1505988E: add esp, 0xc */
    _flag_k = FK_ADD;
    /* test eax, eax */ /* 0x15059891: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_150598A2; /* 0x15059893: je 0x150598a2 */
L_15059895:
    PUSH32(esp, ebx); /* 0x15059895: push ebx */
    PUSH32(esp, ebx); /* 0x15059896: push ebx */
    PUSH32(esp, ebx); /* 0x15059897: push ebx */
    PUSH32(esp, ebx); /* 0x15059898: push ebx */
    PUSH32(esp, ebx); /* 0x15059899: push ebx */
    RECOMP_CALL(sub_1505A11B); /* 0x1505989A: call 0x1505a11b */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x14u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x14u; /* 0x1505989F: add esp, 0x14 */
    _flag_k = FK_ADD;
L_150598A2:
    PUSH32(esp, 0x15005B6Cu); /* 0x150598A2: push 0x15005b6c */
    eax = ebp + (-0x220); /* 0x150598A7: lea eax, [ebp - 0x220] */
    PUSH32(esp, esi); /* 0x150598AD: push esi */
    PUSH32(esp, eax); /* 0x150598AE: push eax */
    RECOMP_CALL(sub_1508E450); /* 0x150598AF: call 0x1508e450 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x150598B4: add esp, 0xc */
    _flag_k = FK_ADD;
    /* test eax, eax */ /* 0x150598B7: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_150598C8; /* 0x150598B9: je 0x150598c8 */
L_150598BB:
    PUSH32(esp, ebx); /* 0x150598BB: push ebx */
    PUSH32(esp, ebx); /* 0x150598BC: push ebx */
    PUSH32(esp, ebx); /* 0x150598BD: push ebx */
    PUSH32(esp, ebx); /* 0x150598BE: push ebx */
    PUSH32(esp, ebx); /* 0x150598BF: push ebx */
    RECOMP_CALL(sub_1505A11B); /* 0x150598C0: call 0x1505a11b */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x14u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x14u; /* 0x150598C5: add esp, 0x14 */
    _flag_k = FK_ADD;
L_150598C8:
    ecx = MEM32(ebp + (-0x32C)); /* 0x150598C8: mov ecx, dword ptr [ebp - 0x32c] */
    esi = ecx; /* 0x150598CE: mov esi, ecx */
    edx = esi + 0x1; /* 0x150598D0: lea edx, [esi + 1] */
L_150598D3:
    SET_LO8(eax, MEM8(esi)); /* 0x150598D3: mov al, byte ptr [esi] */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi + 1; /* 0x150598D5: inc esi */
    _flag_k = FK_INC;
    /* test LO8(eax), LO8(eax) */ /* 0x150598D6: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_150598D3; /* 0x150598D8: jne 0x150598d3 */
L_150598DA:
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esi = esi - edx; /* 0x150598DA: sub esi, edx */
    _flag_k = FK_CMP;
    eax = esi + 0x8; /* 0x150598DC: lea eax, [esi + 8] */
    /* cmp eax, 0x3Cu */ /* 0x150598DF: cmp eax, 0x3c */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x3Cu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_15059AA6; /* 0x150598E2: jbe 0x15059aa6 */
L_150598E8:
    /* cmp MEM8(ecx + esi + (-0x1)), 0x5Cu */ /* 0x150598E8: cmp byte ptr [ecx + esi - 1], 0x5c */
    _flag_a = (uint32_t)(MEM8(ecx + esi + (-0x1))) << 24; _flag_b = (uint32_t)(0x5Cu) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_15059907; /* 0x150598ED: je 0x15059907 */
L_150598EF:
    SET_LO8(eax, MEM8(ecx + esi + (-0x1))); /* 0x150598EF: mov al, byte ptr [ecx + esi - 1] */
L_150598F3:
    /* cmp LO8(eax), 0x2Fu */ /* 0x150598F3: cmp al, 0x2f */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(0x2Fu) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_15059907; /* 0x150598F5: je 0x15059907 */
L_150598F7:
    /* cmp edi, esi */ /* 0x150598F7: cmp edi, esi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_AE(_flag_a, _flag_b)) goto L_15059907; /* 0x150598F9: jae 0x15059907 */
L_150598FB:
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(1);
    edi = edi + 1; /* 0x150598FB: inc edi */
    _flag_k = FK_INC;
    eax = esi; /* 0x150598FC: mov eax, esi */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - edi; /* 0x150598FE: sub eax, edi */
    _flag_k = FK_CMP;
    SET_LO8(eax, MEM8(eax + ecx)); /* 0x15059900: mov al, byte ptr [eax + ecx] */
    /* cmp LO8(eax), 0x5Cu */ /* 0x15059903: cmp al, 0x5c */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(0x5Cu) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    RECOMP_BACKEDGE();
    if (CMP_NE(_flag_a, _flag_b)) goto L_150598F3; /* 0x15059905: jne 0x150598f3 */
L_15059907:
    eax = esi; /* 0x15059907: mov eax, esi */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - edi; /* 0x15059909: sub eax, edi */
    _flag_k = FK_CMP;
    MEM32(ebp + (-0x330)) = eax; /* 0x1505990B: mov dword ptr [ebp - 0x330], eax */
    /* cmp eax, 0x23u */ /* 0x15059911: cmp eax, 0x23 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x23u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_15059984; /* 0x15059914: jbe 0x15059984 */
L_15059916:
    /* cmp edi, 0x11u */ /* 0x15059916: cmp edi, 0x11 */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(0x11u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_AE(_flag_a, _flag_b)) goto L_15059981; /* 0x15059919: jae 0x15059981 */
L_1505991B:
    PUSH32(esp, 0x31u); /* 0x1505991B: push 0x31 */
    eax = POP32_VAL(esp); /* 0x1505991D: pop eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - edi; /* 0x1505991E: sub eax, edi */
    _flag_k = FK_CMP;
    esi = 0x21Cu; /* 0x15059920: mov esi, 0x21c */
    PUSH32(esp, eax); /* 0x15059925: push eax */
    PUSH32(esp, ecx); /* 0x15059926: push ecx */
    eax = ebp + (-0x220); /* 0x15059927: lea eax, [ebp - 0x220] */
    PUSH32(esp, esi); /* 0x1505992D: push esi */
    PUSH32(esp, eax); /* 0x1505992E: push eax */
    RECOMP_CALL(sub_15052CF0); /* 0x1505992F: call 0x15052cf0 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x10u; /* 0x15059934: add esp, 0x10 */
    _flag_k = FK_ADD;
    /* test eax, eax */ /* 0x15059937: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_15059948; /* 0x15059939: je 0x15059948 */
L_1505993B:
    PUSH32(esp, ebx); /* 0x1505993B: push ebx */
    PUSH32(esp, ebx); /* 0x1505993C: push ebx */
    PUSH32(esp, ebx); /* 0x1505993D: push ebx */
    PUSH32(esp, ebx); /* 0x1505993E: push ebx */
    PUSH32(esp, ebx); /* 0x1505993F: push ebx */
    RECOMP_CALL(sub_1505A11B); /* 0x15059940: call 0x1505a11b */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x14u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x14u; /* 0x15059945: add esp, 0x14 */
    _flag_k = FK_ADD;
L_15059948:
    PUSH32(esp, MEM32(0x150BC158)); /* 0x15059948: push dword ptr [0x150bc158] */
    eax = ebp + (-0x220); /* 0x1505994E: lea eax, [ebp - 0x220] */
    PUSH32(esp, esi); /* 0x15059954: push esi */
    PUSH32(esp, eax); /* 0x15059955: push eax */
    RECOMP_CALL(sub_1508E450); /* 0x15059956: call 0x1508e450 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x1505995B: add esp, 0xc */
    _flag_k = FK_ADD;
    /* test eax, eax */ /* 0x1505995E: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1505996F; /* 0x15059960: je 0x1505996f */
L_15059962:
    PUSH32(esp, ebx); /* 0x15059962: push ebx */
    PUSH32(esp, ebx); /* 0x15059963: push ebx */
    PUSH32(esp, ebx); /* 0x15059964: push ebx */
    PUSH32(esp, ebx); /* 0x15059965: push ebx */
    PUSH32(esp, ebx); /* 0x15059966: push ebx */
    RECOMP_CALL(sub_1505A11B); /* 0x15059967: call 0x1505a11b */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x14u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x14u; /* 0x1505996C: add esp, 0x14 */
    _flag_k = FK_ADD;
L_1505996F:
    eax = MEM32(ebp + (-0x330)); /* 0x1505996F: mov eax, dword ptr [ebp - 0x330] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(ebp + (-0x32C)));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + MEM32(ebp + (-0x32C)); /* 0x15059975: add eax, dword ptr [ebp - 0x32c] */
    _flag_k = FK_ADD;
    PUSH32(esp, eax); /* 0x1505997B: push eax */
    goto L_15059AAC; /* 0x1505997C: jmp 0x15059aac */
L_15059981:
    /* cmp eax, 0x23u */ /* 0x15059981: cmp eax, 0x23 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x23u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
L_15059984:
    if (recomp_cond_cf(_flag_k, _flag_a, _flag_b, CC_AE, _cf)) goto L_150599ED; /* 0x15059984: jae 0x150599ed */
L_15059986:
    PUSH32(esp, 0x31u); /* 0x15059986: push 0x31 */
    eax = POP32_VAL(esp); /* 0x15059988: pop eax */
    if (1u) _cf = (((edi) >> 0) & 1u); /* 0x15059989: shr edi, 1 */
    if (1u) { _flag_a = recomp_flags_pack((edi >> 1u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    edi = edi >> 1u; /* 0x15059989: shr edi, 1 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - edi; /* 0x1505998B: sub eax, edi */
    _flag_k = FK_CMP;
    PUSH32(esp, eax); /* 0x1505998D: push eax */
    PUSH32(esp, ecx); /* 0x1505998E: push ecx */
    eax = ebp + (-0x220); /* 0x1505998F: lea eax, [ebp - 0x220] */
    PUSH32(esp, 0x21Cu); /* 0x15059995: push 0x21c */
    PUSH32(esp, eax); /* 0x1505999A: push eax */
    RECOMP_CALL(sub_15052CF0); /* 0x1505999B: call 0x15052cf0 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x10u; /* 0x150599A0: add esp, 0x10 */
    _flag_k = FK_ADD;
    /* test eax, eax */ /* 0x150599A3: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_150599B4; /* 0x150599A5: je 0x150599b4 */
L_150599A7:
    PUSH32(esp, ebx); /* 0x150599A7: push ebx */
    PUSH32(esp, ebx); /* 0x150599A8: push ebx */
    PUSH32(esp, ebx); /* 0x150599A9: push ebx */
    PUSH32(esp, ebx); /* 0x150599AA: push ebx */
    PUSH32(esp, ebx); /* 0x150599AB: push ebx */
    RECOMP_CALL(sub_1505A11B); /* 0x150599AC: call 0x1505a11b */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x14u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x14u; /* 0x150599B1: add esp, 0x14 */
    _flag_k = FK_ADD;
L_150599B4:
    PUSH32(esp, MEM32(0x150BC158)); /* 0x150599B4: push dword ptr [0x150bc158] */
    eax = ebp + (-0x220); /* 0x150599BA: lea eax, [ebp - 0x220] */
    PUSH32(esp, 0x21Cu); /* 0x150599C0: push 0x21c */
    PUSH32(esp, eax); /* 0x150599C5: push eax */
    RECOMP_CALL(sub_1508E450); /* 0x150599C6: call 0x1508e450 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x150599CB: add esp, 0xc */
    _flag_k = FK_ADD;
    /* test eax, eax */ /* 0x150599CE: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_150599DF; /* 0x150599D0: je 0x150599df */
L_150599D2:
    PUSH32(esp, ebx); /* 0x150599D2: push ebx */
    PUSH32(esp, ebx); /* 0x150599D3: push ebx */
    PUSH32(esp, ebx); /* 0x150599D4: push ebx */
    PUSH32(esp, ebx); /* 0x150599D5: push ebx */
    PUSH32(esp, ebx); /* 0x150599D6: push ebx */
    RECOMP_CALL(sub_1505A11B); /* 0x150599D7: call 0x1505a11b */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x14u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x14u; /* 0x150599DC: add esp, 0x14 */
    _flag_k = FK_ADD;
L_150599DF:
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esi = esi - edi; /* 0x150599DF: sub esi, edi */
    _flag_k = FK_CMP;
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(MEM32(ebp + (-0x32C)));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esi = esi + MEM32(ebp + (-0x32C)); /* 0x150599E1: add esi, dword ptr [ebp - 0x32c] */
    _flag_k = FK_ADD;
    PUSH32(esp, esi); /* 0x150599E7: push esi */
    goto L_15059AA7; /* 0x150599E8: jmp 0x15059aa7 */
L_150599ED:
    PUSH32(esp, 0x20u); /* 0x150599ED: push 0x20 */
    PUSH32(esp, ecx); /* 0x150599EF: push ecx */
    edi = 0x21Cu; /* 0x150599F0: mov edi, 0x21c */
    eax = ebp + (-0x220); /* 0x150599F5: lea eax, [ebp - 0x220] */
    PUSH32(esp, edi); /* 0x150599FB: push edi */
    PUSH32(esp, eax); /* 0x150599FC: push eax */
    RECOMP_CALL(sub_15052CF0); /* 0x150599FD: call 0x15052cf0 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x10u; /* 0x15059A02: add esp, 0x10 */
    _flag_k = FK_ADD;
    /* test eax, eax */ /* 0x15059A05: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_15059A16; /* 0x15059A07: je 0x15059a16 */
L_15059A09:
    PUSH32(esp, ebx); /* 0x15059A09: push ebx */
    PUSH32(esp, ebx); /* 0x15059A0A: push ebx */
    PUSH32(esp, ebx); /* 0x15059A0B: push ebx */
    PUSH32(esp, ebx); /* 0x15059A0C: push ebx */
    PUSH32(esp, ebx); /* 0x15059A0D: push ebx */
    RECOMP_CALL(sub_1505A11B); /* 0x15059A0E: call 0x1505a11b */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x14u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x14u; /* 0x15059A13: add esp, 0x14 */
    _flag_k = FK_ADD;
L_15059A16:
    PUSH32(esp, MEM32(0x150BC158)); /* 0x15059A16: push dword ptr [0x150bc158] */
    eax = ebp + (-0x220); /* 0x15059A1C: lea eax, [ebp - 0x220] */
    PUSH32(esp, edi); /* 0x15059A22: push edi */
    PUSH32(esp, eax); /* 0x15059A23: push eax */
    RECOMP_CALL(sub_1508E450); /* 0x15059A24: call 0x1508e450 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x15059A29: add esp, 0xc */
    _flag_k = FK_ADD;
    /* test eax, eax */ /* 0x15059A2C: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_15059A3D; /* 0x15059A2E: je 0x15059a3d */
L_15059A30:
    PUSH32(esp, ebx); /* 0x15059A30: push ebx */
    PUSH32(esp, ebx); /* 0x15059A31: push ebx */
    PUSH32(esp, ebx); /* 0x15059A32: push ebx */
    PUSH32(esp, ebx); /* 0x15059A33: push ebx */
    PUSH32(esp, ebx); /* 0x15059A34: push ebx */
    RECOMP_CALL(sub_1505A11B); /* 0x15059A35: call 0x1505a11b */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x14u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x14u; /* 0x15059A3A: add esp, 0x14 */
    _flag_k = FK_ADD;
L_15059A3D:
    eax = MEM32(ebp + (-0x330)); /* 0x15059A3D: mov eax, dword ptr [ebp - 0x330] */
    edi = MEM32(ebp + (-0x32C)); /* 0x15059A43: mov edi, dword ptr [ebp - 0x32c] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + edi; /* 0x15059A49: add eax, edi */
    _flag_k = FK_ADD;
    PUSH32(esp, 7); /* 0x15059A4B: push 7 */
    PUSH32(esp, eax); /* 0x15059A4D: push eax */
    eax = ebp + (-0x220); /* 0x15059A4E: lea eax, [ebp - 0x220] */
    PUSH32(esp, 0x21Cu); /* 0x15059A54: push 0x21c */
    PUSH32(esp, eax); /* 0x15059A59: push eax */
    RECOMP_CALL(sub_15052CF0); /* 0x15059A5A: call 0x15052cf0 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x10u; /* 0x15059A5F: add esp, 0x10 */
    _flag_k = FK_ADD;
    /* test eax, eax */ /* 0x15059A62: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_15059A73; /* 0x15059A64: je 0x15059a73 */
L_15059A66:
    PUSH32(esp, ebx); /* 0x15059A66: push ebx */
    PUSH32(esp, ebx); /* 0x15059A67: push ebx */
    PUSH32(esp, ebx); /* 0x15059A68: push ebx */
    PUSH32(esp, ebx); /* 0x15059A69: push ebx */
    PUSH32(esp, ebx); /* 0x15059A6A: push ebx */
    RECOMP_CALL(sub_1505A11B); /* 0x15059A6B: call 0x1505a11b */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x14u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x14u; /* 0x15059A70: add esp, 0x14 */
    _flag_k = FK_ADD;
L_15059A73:
    PUSH32(esp, MEM32(0x150BC158)); /* 0x15059A73: push dword ptr [0x150bc158] */
    eax = ebp + (-0x220); /* 0x15059A79: lea eax, [ebp - 0x220] */
    PUSH32(esp, 0x21Cu); /* 0x15059A7F: push 0x21c */
    PUSH32(esp, eax); /* 0x15059A84: push eax */
    RECOMP_CALL(sub_1508E450); /* 0x15059A85: call 0x1508e450 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x15059A8A: add esp, 0xc */
    _flag_k = FK_ADD;
    /* test eax, eax */ /* 0x15059A8D: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_15059A9E; /* 0x15059A8F: je 0x15059a9e */
L_15059A91:
    PUSH32(esp, ebx); /* 0x15059A91: push ebx */
    PUSH32(esp, ebx); /* 0x15059A92: push ebx */
    PUSH32(esp, ebx); /* 0x15059A93: push ebx */
    PUSH32(esp, ebx); /* 0x15059A94: push ebx */
    PUSH32(esp, ebx); /* 0x15059A95: push ebx */
    RECOMP_CALL(sub_1505A11B); /* 0x15059A96: call 0x1505a11b */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x14u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x14u; /* 0x15059A9B: add esp, 0x14 */
    _flag_k = FK_ADD;
L_15059A9E:
    eax = edi + (-0x7); /* 0x15059A9E: lea eax, [edi - 7] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + esi; /* 0x15059AA1: add eax, esi */
    _flag_k = FK_ADD;
    PUSH32(esp, eax); /* 0x15059AA3: push eax */
    goto L_15059AA7; /* 0x15059AA4: jmp 0x15059aa7 */
L_15059AA6:
    PUSH32(esp, ecx); /* 0x15059AA6: push ecx */
L_15059AA7:
    esi = 0x21Cu; /* 0x15059AA7: mov esi, 0x21c */
L_15059AAC:
    eax = ebp + (-0x220); /* 0x15059AAC: lea eax, [ebp - 0x220] */
    PUSH32(esp, esi); /* 0x15059AB2: push esi */
    PUSH32(esp, eax); /* 0x15059AB3: push eax */
    RECOMP_CALL(sub_1508E450); /* 0x15059AB4: call 0x1508e450 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x15059AB9: add esp, 0xc */
    _flag_k = FK_ADD;
    /* test eax, eax */ /* 0x15059ABC: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_15059ACD; /* 0x15059ABE: je 0x15059acd */
L_15059AC0:
    PUSH32(esp, ebx); /* 0x15059AC0: push ebx */
    PUSH32(esp, ebx); /* 0x15059AC1: push ebx */
    PUSH32(esp, ebx); /* 0x15059AC2: push ebx */
    PUSH32(esp, ebx); /* 0x15059AC3: push ebx */
    PUSH32(esp, ebx); /* 0x15059AC4: push ebx */
    RECOMP_CALL(sub_1505A11B); /* 0x15059AC5: call 0x1505a11b */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x14u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x14u; /* 0x15059ACA: add esp, 0x14 */
    _flag_k = FK_ADD;
L_15059ACD:
    PUSH32(esp, MEM32(0x150BC15C)); /* 0x15059ACD: push dword ptr [0x150bc15c] */
    eax = ebp + (-0x220); /* 0x15059AD3: lea eax, [ebp - 0x220] */
    PUSH32(esp, esi); /* 0x15059AD9: push esi */
    PUSH32(esp, eax); /* 0x15059ADA: push eax */
    RECOMP_CALL(sub_1508E450); /* 0x15059ADB: call 0x1508e450 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x15059AE0: add esp, 0xc */
    _flag_k = FK_ADD;
    /* test eax, eax */ /* 0x15059AE3: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_15059AF4; /* 0x15059AE5: je 0x15059af4 */
L_15059AE7:
    PUSH32(esp, ebx); /* 0x15059AE7: push ebx */
    PUSH32(esp, ebx); /* 0x15059AE8: push ebx */
    PUSH32(esp, ebx); /* 0x15059AE9: push ebx */
    PUSH32(esp, ebx); /* 0x15059AEA: push ebx */
    PUSH32(esp, ebx); /* 0x15059AEB: push ebx */
    RECOMP_CALL(sub_1505A11B); /* 0x15059AEC: call 0x1505a11b */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x14u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x14u; /* 0x15059AF1: add esp, 0x14 */
    _flag_k = FK_ADD;
L_15059AF4:
    PUSH32(esp, 0x15005B74u); /* 0x15059AF4: push 0x15005b74 */
    eax = ebp + (-0x220); /* 0x15059AF9: lea eax, [ebp - 0x220] */
    PUSH32(esp, esi); /* 0x15059AFF: push esi */
    PUSH32(esp, eax); /* 0x15059B00: push eax */
    RECOMP_CALL(sub_1508E450); /* 0x15059B01: call 0x1508e450 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x15059B06: add esp, 0xc */
    _flag_k = FK_ADD;
    /* test eax, eax */ /* 0x15059B09: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_15059B1A; /* 0x15059B0B: je 0x15059b1a */
L_15059B0D:
    PUSH32(esp, ebx); /* 0x15059B0D: push ebx */
    PUSH32(esp, ebx); /* 0x15059B0E: push ebx */
    PUSH32(esp, ebx); /* 0x15059B0F: push ebx */
    PUSH32(esp, ebx); /* 0x15059B10: push ebx */
    PUSH32(esp, ebx); /* 0x15059B11: push ebx */
    RECOMP_CALL(sub_1505A11B); /* 0x15059B12: call 0x1505a11b */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x14u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x14u; /* 0x15059B17: add esp, 0x14 */
    _flag_k = FK_ADD;
L_15059B1A:
    ecx = ebp + (-0x220); /* 0x15059B1A: lea ecx, [ebp - 0x220] */
    edx = ecx + 0x1; /* 0x15059B20: lea edx, [ecx + 1] */
L_15059B23:
    SET_LO8(eax, MEM8(ecx)); /* 0x15059B23: mov al, byte ptr [ecx] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx + 1; /* 0x15059B25: inc ecx */
    _flag_k = FK_INC;
    /* test LO8(eax), LO8(eax) */ /* 0x15059B26: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_15059B23; /* 0x15059B28: jne 0x15059b23 */
L_15059B2A:
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ecx = ecx - edx; /* 0x15059B2A: sub ecx, edx */
    _flag_k = FK_CMP;
    eax = esi; /* 0x15059B2C: mov eax, esi */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - ecx; /* 0x15059B2E: sub eax, ecx */
    _flag_k = FK_CMP;
    PUSH32(esp, 0xAu); /* 0x15059B30: push 0xa */
    PUSH32(esp, eax); /* 0x15059B32: push eax */
    eax = ebp + (-0x220); /* 0x15059B33: lea eax, [ebp - 0x220] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + ecx; /* 0x15059B39: add eax, ecx */
    _flag_k = FK_ADD;
    PUSH32(esp, eax); /* 0x15059B3B: push eax */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x15059B3C: push dword ptr [ebp + 0x10] */
    RECOMP_CALL(sub_15030E80); /* 0x15059B3F: call 0x15030e80 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x10u; /* 0x15059B44: add esp, 0x10 */
    _flag_k = FK_ADD;
    /* test eax, eax */ /* 0x15059B47: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_15059B58; /* 0x15059B49: je 0x15059b58 */
L_15059B4B:
    PUSH32(esp, ebx); /* 0x15059B4B: push ebx */
    PUSH32(esp, ebx); /* 0x15059B4C: push ebx */
    PUSH32(esp, ebx); /* 0x15059B4D: push ebx */
    PUSH32(esp, ebx); /* 0x15059B4E: push ebx */
    PUSH32(esp, ebx); /* 0x15059B4F: push ebx */
    RECOMP_CALL(sub_1505A11B); /* 0x15059B50: call 0x1505a11b */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x14u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x14u; /* 0x15059B55: add esp, 0x14 */
    _flag_k = FK_ADD;
L_15059B58:
    PUSH32(esp, MEM32(0x150BC160)); /* 0x15059B58: push dword ptr [0x150bc160] */
    eax = ebp + (-0x220); /* 0x15059B5E: lea eax, [ebp - 0x220] */
    PUSH32(esp, esi); /* 0x15059B64: push esi */
    PUSH32(esp, eax); /* 0x15059B65: push eax */
    RECOMP_CALL(sub_1508E450); /* 0x15059B66: call 0x1508e450 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x15059B6B: add esp, 0xc */
    _flag_k = FK_ADD;
    /* test eax, eax */ /* 0x15059B6E: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_15059B7F; /* 0x15059B70: je 0x15059b7f */
L_15059B72:
    PUSH32(esp, ebx); /* 0x15059B72: push ebx */
    PUSH32(esp, ebx); /* 0x15059B73: push ebx */
    PUSH32(esp, ebx); /* 0x15059B74: push ebx */
    PUSH32(esp, ebx); /* 0x15059B75: push ebx */
    PUSH32(esp, ebx); /* 0x15059B76: push ebx */
    RECOMP_CALL(sub_1505A11B); /* 0x15059B77: call 0x1505a11b */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x14u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x14u; /* 0x15059B7C: add esp, 0x14 */
    _flag_k = FK_ADD;
L_15059B7F:
    PUSH32(esp, 0x15005B7Cu); /* 0x15059B7F: push 0x15005b7c */
    eax = ebp + (-0x220); /* 0x15059B84: lea eax, [ebp - 0x220] */
    PUSH32(esp, esi); /* 0x15059B8A: push esi */
    PUSH32(esp, eax); /* 0x15059B8B: push eax */
    RECOMP_CALL(sub_1508E450); /* 0x15059B8C: call 0x1508e450 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x15059B91: add esp, 0xc */
    _flag_k = FK_ADD;
    /* test eax, eax */ /* 0x15059B94: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_15059BA5; /* 0x15059B96: je 0x15059ba5 */
L_15059B98:
    PUSH32(esp, ebx); /* 0x15059B98: push ebx */
    PUSH32(esp, ebx); /* 0x15059B99: push ebx */
    PUSH32(esp, ebx); /* 0x15059B9A: push ebx */
    PUSH32(esp, ebx); /* 0x15059B9B: push ebx */
    PUSH32(esp, ebx); /* 0x15059B9C: push ebx */
    RECOMP_CALL(sub_1505A11B); /* 0x15059B9D: call 0x1505a11b */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x14u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x14u; /* 0x15059BA2: add esp, 0x14 */
    _flag_k = FK_ADD;
L_15059BA5:
    ecx = ebp + (-0x220); /* 0x15059BA5: lea ecx, [ebp - 0x220] */
    edx = ecx + 0x1; /* 0x15059BAB: lea edx, [ecx + 1] */
L_15059BAE:
    SET_LO8(eax, MEM8(ecx)); /* 0x15059BAE: mov al, byte ptr [ecx] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx + 1; /* 0x15059BB0: inc ecx */
    _flag_k = FK_INC;
    /* test LO8(eax), LO8(eax) */ /* 0x15059BB1: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_15059BAE; /* 0x15059BB3: jne 0x15059bae */
L_15059BB5:
    edi = MEM32(ebp + (-0x334)); /* 0x15059BB5: mov edi, dword ptr [ebp - 0x334] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ecx = ecx - edx; /* 0x15059BBB: sub ecx, edx */
    _flag_k = FK_CMP;
    edx = edi; /* 0x15059BBD: mov edx, edi */
    esi = edx + 0x1; /* 0x15059BBF: lea esi, [edx + 1] */
L_15059BC2:
    SET_LO8(eax, MEM8(edx)); /* 0x15059BC2: mov al, byte ptr [edx] */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(1);
    edx = edx + 1; /* 0x15059BC4: inc edx */
    _flag_k = FK_INC;
    /* test LO8(eax), LO8(eax) */ /* 0x15059BC5: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_15059BC2; /* 0x15059BC7: jne 0x15059bc2 */
L_15059BC9:
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    edx = edx - esi; /* 0x15059BC9: sub edx, esi */
    _flag_k = FK_CMP;
    esi = 0x21Cu; /* 0x15059BCB: mov esi, 0x21c */
    eax = edx + 0xB0; /* 0x15059BD0: lea eax, [edx + 0xb0] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + ecx; /* 0x15059BD6: add eax, ecx */
    _flag_k = FK_ADD;
    /* cmp eax, esi */ /* 0x15059BD8: cmp eax, esi */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_15059C0E; /* 0x15059BDA: jbe 0x15059c0e */
L_15059BDC:
    eax = 0x169u; /* 0x15059BDC: mov eax, 0x169 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - ecx; /* 0x15059BE1: sub eax, ecx */
    _flag_k = FK_CMP;
    PUSH32(esp, eax); /* 0x15059BE3: push eax */
    PUSH32(esp, edi); /* 0x15059BE4: push edi */
    eax = ebp + (-0x220); /* 0x15059BE5: lea eax, [ebp - 0x220] */
    PUSH32(esp, esi); /* 0x15059BEB: push esi */
    PUSH32(esp, eax); /* 0x15059BEC: push eax */
    RECOMP_CALL(sub_15052CF0); /* 0x15059BED: call 0x15052cf0 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x10u; /* 0x15059BF2: add esp, 0x10 */
    _flag_k = FK_ADD;
    /* test eax, eax */ /* 0x15059BF5: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_15059C06; /* 0x15059BF7: je 0x15059c06 */
L_15059BF9:
    PUSH32(esp, ebx); /* 0x15059BF9: push ebx */
    PUSH32(esp, ebx); /* 0x15059BFA: push ebx */
    PUSH32(esp, ebx); /* 0x15059BFB: push ebx */
    PUSH32(esp, ebx); /* 0x15059BFC: push ebx */
    PUSH32(esp, ebx); /* 0x15059BFD: push ebx */
    RECOMP_CALL(sub_1505A11B); /* 0x15059BFE: call 0x1505a11b */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x14u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x14u; /* 0x15059C03: add esp, 0x14 */
    _flag_k = FK_ADD;
L_15059C06:
    PUSH32(esp, MEM32(0x150BC158)); /* 0x15059C06: push dword ptr [0x150bc158] */
    goto L_15059C0F; /* 0x15059C0C: jmp 0x15059c0f */
L_15059C0E:
    PUSH32(esp, edi); /* 0x15059C0E: push edi */
L_15059C0F:
    eax = ebp + (-0x220); /* 0x15059C0F: lea eax, [ebp - 0x220] */
    PUSH32(esp, esi); /* 0x15059C15: push esi */
    PUSH32(esp, eax); /* 0x15059C16: push eax */
    RECOMP_CALL(sub_1508E450); /* 0x15059C17: call 0x1508e450 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x15059C1C: add esp, 0xc */
    _flag_k = FK_ADD;
    /* test eax, eax */ /* 0x15059C1F: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_15059C30; /* 0x15059C21: je 0x15059c30 */
L_15059C23:
    PUSH32(esp, ebx); /* 0x15059C23: push ebx */
    PUSH32(esp, ebx); /* 0x15059C24: push ebx */
    PUSH32(esp, ebx); /* 0x15059C25: push ebx */
    PUSH32(esp, ebx); /* 0x15059C26: push ebx */
    PUSH32(esp, ebx); /* 0x15059C27: push ebx */
    RECOMP_CALL(sub_1505A11B); /* 0x15059C28: call 0x1505a11b */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x14u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x14u; /* 0x15059C2D: add esp, 0x14 */
    _flag_k = FK_ADD;
L_15059C30:
    PUSH32(esp, MEM32(0x150BC160)); /* 0x15059C30: push dword ptr [0x150bc160] */
    eax = ebp + (-0x220); /* 0x15059C36: lea eax, [ebp - 0x220] */
    PUSH32(esp, esi); /* 0x15059C3C: push esi */
    PUSH32(esp, eax); /* 0x15059C3D: push eax */
    RECOMP_CALL(sub_1508E450); /* 0x15059C3E: call 0x1508e450 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x15059C43: add esp, 0xc */
    _flag_k = FK_ADD;
    /* test eax, eax */ /* 0x15059C46: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_15059C57; /* 0x15059C48: je 0x15059c57 */
L_15059C4A:
    PUSH32(esp, ebx); /* 0x15059C4A: push ebx */
    PUSH32(esp, ebx); /* 0x15059C4B: push ebx */
    PUSH32(esp, ebx); /* 0x15059C4C: push ebx */
    PUSH32(esp, ebx); /* 0x15059C4D: push ebx */
    PUSH32(esp, ebx); /* 0x15059C4E: push ebx */
    RECOMP_CALL(sub_1505A11B); /* 0x15059C4F: call 0x1505a11b */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x14u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x14u; /* 0x15059C54: add esp, 0x14 */
    _flag_k = FK_ADD;
L_15059C57:
    PUSH32(esp, 0x15005B90u); /* 0x15059C57: push 0x15005b90 */
    eax = ebp + (-0x220); /* 0x15059C5C: lea eax, [ebp - 0x220] */
    PUSH32(esp, esi); /* 0x15059C62: push esi */
    PUSH32(esp, eax); /* 0x15059C63: push eax */
    RECOMP_CALL(sub_1508E450); /* 0x15059C64: call 0x1508e450 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x15059C69: add esp, 0xc */
    _flag_k = FK_ADD;
    /* test eax, eax */ /* 0x15059C6C: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_15059C7D; /* 0x15059C6E: je 0x15059c7d */
L_15059C70:
    PUSH32(esp, ebx); /* 0x15059C70: push ebx */
    PUSH32(esp, ebx); /* 0x15059C71: push ebx */
    PUSH32(esp, ebx); /* 0x15059C72: push ebx */
    PUSH32(esp, ebx); /* 0x15059C73: push ebx */
    PUSH32(esp, ebx); /* 0x15059C74: push ebx */
    RECOMP_CALL(sub_1505A11B); /* 0x15059C75: call 0x1505a11b */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x14u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x14u; /* 0x15059C7A: add esp, 0x14 */
    _flag_k = FK_ADD;
L_15059C7D:
    PUSH32(esp, MEM32(0x150BC160)); /* 0x15059C7D: push dword ptr [0x150bc160] */
    eax = ebp + (-0x220); /* 0x15059C83: lea eax, [ebp - 0x220] */
    PUSH32(esp, esi); /* 0x15059C89: push esi */
    PUSH32(esp, eax); /* 0x15059C8A: push eax */
    RECOMP_CALL(sub_1508E450); /* 0x15059C8B: call 0x1508e450 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x15059C90: add esp, 0xc */
    _flag_k = FK_ADD;
    /* test eax, eax */ /* 0x15059C93: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_15059CA4; /* 0x15059C95: je 0x15059ca4 */
L_15059C97:
    PUSH32(esp, ebx); /* 0x15059C97: push ebx */
    PUSH32(esp, ebx); /* 0x15059C98: push ebx */
    PUSH32(esp, ebx); /* 0x15059C99: push ebx */
    PUSH32(esp, ebx); /* 0x15059C9A: push ebx */
    PUSH32(esp, ebx); /* 0x15059C9B: push ebx */
    RECOMP_CALL(sub_1505A11B); /* 0x15059C9C: call 0x1505a11b */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x14u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x14u; /* 0x15059CA1: add esp, 0x14 */
    _flag_k = FK_ADD;
L_15059CA4:
    PUSH32(esp, 0x15005C00u); /* 0x15059CA4: push 0x15005c00 */
    eax = ebp + (-0x220); /* 0x15059CA9: lea eax, [ebp - 0x220] */
    PUSH32(esp, esi); /* 0x15059CAF: push esi */
    PUSH32(esp, eax); /* 0x15059CB0: push eax */
    RECOMP_CALL(sub_1508E450); /* 0x15059CB1: call 0x1508e450 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x15059CB6: add esp, 0xc */
    _flag_k = FK_ADD;
    /* test eax, eax */ /* 0x15059CB9: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_15059CCA; /* 0x15059CBB: je 0x15059cca */
L_15059CBD:
    PUSH32(esp, ebx); /* 0x15059CBD: push ebx */
    PUSH32(esp, ebx); /* 0x15059CBE: push ebx */
    PUSH32(esp, ebx); /* 0x15059CBF: push ebx */
    PUSH32(esp, ebx); /* 0x15059CC0: push ebx */
    PUSH32(esp, ebx); /* 0x15059CC1: push ebx */
    RECOMP_CALL(sub_1505A11B); /* 0x15059CC2: call 0x1505a11b */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x14u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x14u; /* 0x15059CC7: add esp, 0x14 */
    _flag_k = FK_ADD;
L_15059CCA:
    PUSH32(esp, 0x00012012u); /* 0x15059CCA: push 0x12012 */
    eax = ebp + (-0x220); /* 0x15059CCF: lea eax, [ebp - 0x220] */
    PUSH32(esp, 0x15005C40u); /* 0x15059CD5: push 0x15005c40 */
    PUSH32(esp, eax); /* 0x15059CDA: push eax */
    RECOMP_CALL(sub_15060C6C); /* 0x15059CDB: call 0x15060c6c */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x15059CE0: add esp, 0xc */
    _flag_k = FK_ADD;
    /* cmp eax, 3 */ /* 0x15059CE3: cmp eax, 3 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(3);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_15059D47; /* 0x15059CE6: je 0x15059d47 */
L_15059CE8:
    /* cmp eax, 4 */ /* 0x15059CE8: cmp eax, 4 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_15059CFD; /* 0x15059CEB: jne 0x15059cfd */
L_15059CED:
    void_lift_trap(0x15059CEDu, "int3 ");
L_15059CEE:
    ecx = MEM32(ebp + (-0x4)); /* 0x15059CEE: mov ecx, dword ptr [ebp - 4] */
    edi = POP32_VAL(esp); /* 0x15059CF1: pop edi */
    esi = POP32_VAL(esp); /* 0x15059CF2: pop esi */
    _flag_a = (uint32_t)((ecx ^ ebp)); _flag_b = (uint32_t)((ecx ^ ebp));
    ecx = ecx ^ ebp; /* 0x15059CF3: xor ecx, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    ebx = POP32_VAL(esp); /* 0x15059CF5: pop ebx */
    RECOMP_CALL(sub_1505E540); /* 0x15059CF6: call 0x1505e540 */
    RECOMP_FLAGS_IN();
    esp = ebp; ebp = POP32_VAL(esp); /* 0x15059CFB: leave  */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x15059CFC: ret  */
L_15059CFD:
    /* cmp eax, 5 */ /* 0x15059CFD: cmp eax, 5 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(5);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_15059D42; /* 0x15059D00: jne 0x15059d42 */
L_15059D02:
    RECOMP_BACKEDGE();
    goto L_15059CEE; /* 0x15059D02: jmp 0x15059cee */
L_15059D04:
    /* test MEM32(0x150BC64C), 0x10Cu */ /* 0x15059D04: test dword ptr [0x150bc64c], 0x10c */
    _flag_a = (uint32_t)(MEM32(0x150BC64C)); _flag_b = (uint32_t)(0x10Cu);
    _cf = 0;
    _flag_k = FK_TEST;
    edi = 0x150BC640u; /* 0x15059D0E: mov edi, 0x150bc640 */
    if (TEST_NZ(_flag_a, _flag_b)) goto L_15059D24; /* 0x15059D13: jne 0x15059d24 */
L_15059D15:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ebx = 0; /* 0x15059D15: xor ebx, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, ebx); /* 0x15059D17: push ebx */
    PUSH32(esp, 4); /* 0x15059D18: push 4 */
    PUSH32(esp, ebx); /* 0x15059D1A: push ebx */
    PUSH32(esp, edi); /* 0x15059D1B: push edi */
    RECOMP_CALL(sub_1507D9F0); /* 0x15059D1C: call 0x1507d9f0 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x10u; /* 0x15059D21: add esp, 0x10 */
    _flag_k = FK_ADD;
L_15059D24:
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x15059D24: push dword ptr [ebp + 0x10] */
    PUSH32(esp, esi); /* 0x15059D27: push esi */
    PUSH32(esp, MEM32(ebp + (-0x334))); /* 0x15059D28: push dword ptr [ebp - 0x334] */
    PUSH32(esp, 0x15005B04u); /* 0x15059D2E: push 0x15005b04 */
    PUSH32(esp, edi); /* 0x15059D33: push edi */
    RECOMP_CALL(sub_15076F30); /* 0x15059D34: call 0x15076f30 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, edi); /* 0x15059D39: push edi */
    RECOMP_CALL(sub_15076D00); /* 0x15059D3A: call 0x15076d00 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x18u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x18u; /* 0x15059D3F: add esp, 0x18 */
    _flag_k = FK_ADD;
L_15059D42:
    RECOMP_CALL(sub_1505D3B0); /* 0x15059D42: call 0x1505d3b0 */
    RECOMP_FLAGS_IN();
L_15059D47:
    PUSH32(esp, 0x16u); /* 0x15059D47: push 0x16 */
    RECOMP_CALL(sub_15058D60); /* 0x15059D49: call 0x15058d60 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x15059D4E: pop ecx */
    PUSH32(esp, 3); /* 0x15059D4F: push 3 */
    RECOMP_CALL(sub_15067FB0); /* 0x15059D51: call 0x15067fb0 */
    RECOMP_FLAGS_IN();
    void_lift_trap(0x15059D56u, "int3 ");
    { RECOMP_REGS_OUT(); return; } /* end of function */
    RECOMP_REGS_OUT();
}

void sub_15059D60(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x15059D60u);

L_15059D60:
    if (recomp_cond_cf(_flag_k, _flag_a, _flag_b, CC_NE, _cf)) goto L_15059D63; /* 0x15059D60: jne 0x15059d63 */
L_15059D62:
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x15059D62: ret  */
L_15059D63:
    PUSH32(esp, ebp); /* 0x15059D63: push ebp */
    ebp = esp; /* 0x15059D64: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0; /* 0x15059D66: sub esp, 0 */
    _flag_k = FK_CMP;
    PUSH32(esp, eax); /* 0x15059D69: push eax */
    PUSH32(esp, edx); /* 0x15059D6A: push edx */
    PUSH32(esp, ebx); /* 0x15059D6B: push ebx */
    PUSH32(esp, esi); /* 0x15059D6C: push esi */
    PUSH32(esp, edi); /* 0x15059D6D: push edi */
    void_lift_trap(0x15059D6Eu, "int3 ");
    { RECOMP_REGS_OUT(); return; } /* end of function */
    RECOMP_REGS_OUT();
}

void sub_15059D63(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x15059D63u);

L_15059D63:
    PUSH32(esp, ebp); /* 0x15059D63: push ebp */
    ebp = esp; /* 0x15059D64: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0; /* 0x15059D66: sub esp, 0 */
    _flag_k = FK_CMP;
    PUSH32(esp, eax); /* 0x15059D69: push eax */
    PUSH32(esp, edx); /* 0x15059D6A: push edx */
    PUSH32(esp, ebx); /* 0x15059D6B: push ebx */
    PUSH32(esp, esi); /* 0x15059D6C: push esi */
    PUSH32(esp, edi); /* 0x15059D6D: push edi */
    void_lift_trap(0x15059D6Eu, "int3 ");
    { RECOMP_REGS_OUT(); return; } /* end of function */
    RECOMP_REGS_OUT();
}

void sub_15059D80(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x15059D80u);

L_15059D80:
    PUSH32(esp, ebp); /* 0x15059D80: push ebp */
    ebp = esp; /* 0x15059D81: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 8; /* 0x15059D83: sub esp, 8 */
    _flag_k = FK_CMP;
    PUSH32(esp, ebx); /* 0x15059D86: push ebx */
    PUSH32(esp, esi); /* 0x15059D87: push esi */
    PUSH32(esp, edi); /* 0x15059D88: push edi */
    PUSH32(esp, ebp); /* 0x15059D89: push ebp */
    _df = 1; /* 0x15059D8A: cld  */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x15059D8B: push dword ptr [ebp + 0x10] */
    RECOMP_CALL(sub_1505EA7B); /* 0x15059D8E: call 0x1505ea7b */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x15059D93: add esp, 4 */
    _flag_k = FK_ADD;
    ebx = MEM32(ebp + 0xC); /* 0x15059D96: mov ebx, dword ptr [ebp + 0xc] */
    eax = MEM32(ebp + 0x8); /* 0x15059D99: mov eax, dword ptr [ebp + 8] */
    /* test MEM32(eax + 0x4), 6 */ /* 0x15059D9C: test dword ptr [eax + 4], 6 */
    _flag_a = (uint32_t)(MEM32(eax + 0x4)); _flag_b = (uint32_t)(6);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_15059E1C; /* 0x15059DA3: jne 0x15059e1c */
L_15059DA5:
    MEM32(ebp + (-0x8)) = eax; /* 0x15059DA5: mov dword ptr [ebp - 8], eax */
    eax = MEM32(ebp + 0x10); /* 0x15059DA8: mov eax, dword ptr [ebp + 0x10] */
    MEM32(ebp + (-0x4)) = eax; /* 0x15059DAB: mov dword ptr [ebp - 4], eax */
    eax = ebp + (-0x8); /* 0x15059DAE: lea eax, [ebp - 8] */
    MEM32(ebx + 0x14) = eax; /* 0x15059DB1: mov dword ptr [ebx + 0x14], eax */
    esi = MEM32(ebx + 0xC); /* 0x15059DB4: mov esi, dword ptr [ebx + 0xc] */
    edi = MEM32(ebx + 0x8); /* 0x15059DB7: mov edi, dword ptr [ebx + 8] */
L_15059DBA:
    /* cmp esi, 0xFFFFFFFFu */ /* 0x15059DBA: cmp esi, -1 */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(0xFFFFFFFFu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_15059E15; /* 0x15059DBD: je 0x15059e15 */
L_15059DBF:
    ecx = esi + esi * 2; /* 0x15059DBF: lea ecx, [esi + esi*2] */
    /* cmp MEM32(edi + ecx * 4 + 0x4), 0 */ /* 0x15059DC2: cmp dword ptr [edi + ecx*4 + 4], 0 */
    _flag_a = (uint32_t)(MEM32(edi + ecx * 4 + 0x4)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_15059E03; /* 0x15059DC7: je 0x15059e03 */
L_15059DC9:
    PUSH32(esp, esi); /* 0x15059DC9: push esi */
    PUSH32(esp, ebp); /* 0x15059DCA: push ebp */
    ebp = MEM32(ebx + 0x10); /* 0x15059DCB: mov ebp, dword ptr [ebx + 0x10] */
    RECOMP_ICALL(MEM32(edi + ecx * 4 + 0x4)); /* 0x15059DCE: call dword ptr [edi + ecx*4 + 4] */
    RECOMP_FLAGS_IN();
    ebp = POP32_VAL(esp); /* 0x15059DD2: pop ebp */
    esi = POP32_VAL(esp); /* 0x15059DD3: pop esi */
    ebx = MEM32(ebp + 0xC); /* 0x15059DD4: mov ebx, dword ptr [ebp + 0xc] */
    _flag_a = (uint32_t)((eax | eax)); _flag_b = (uint32_t)((eax | eax));
    eax = eax | eax; /* 0x15059DD7: or eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_15059E03; /* 0x15059DD9: je 0x15059e03 */
L_15059DDB:
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_15059E0E; /* 0x15059DDB: js 0x15059e0e */
L_15059DDD:
    edi = MEM32(ebx + 0x8); /* 0x15059DDD: mov edi, dword ptr [ebx + 8] */
    PUSH32(esp, ebx); /* 0x15059DE0: push ebx */
    RECOMP_CALL(sub_15059570); /* 0x15059DE1: call 0x15059570 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x15059DE6: add esp, 4 */
    _flag_k = FK_ADD;
    ebp = MEM32(ebx + 0x10); /* 0x15059DE9: mov ebp, dword ptr [ebx + 0x10] */
    PUSH32(esp, esi); /* 0x15059DEC: push esi */
    PUSH32(esp, ebx); /* 0x15059DED: push ebx */
    RECOMP_CALL(sub_150595D5); /* 0x15059DEE: call 0x150595d5 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 8; /* 0x15059DF3: add esp, 8 */
    _flag_k = FK_ADD;
    ecx = esi + esi * 2; /* 0x15059DF6: lea ecx, [esi + esi*2] */
    eax = MEM32(edi + ecx * 4); /* 0x15059DF9: mov eax, dword ptr [edi + ecx*4] */
    MEM32(ebx + 0xC) = eax; /* 0x15059DFC: mov dword ptr [ebx + 0xc], eax */
    RECOMP_ICALL(MEM32(edi + ecx * 4 + 0x8)); /* 0x15059DFF: call dword ptr [edi + ecx*4 + 8] */
    RECOMP_FLAGS_IN();
L_15059E03:
    edi = MEM32(ebx + 0x8); /* 0x15059E03: mov edi, dword ptr [ebx + 8] */
    ecx = esi + esi * 2; /* 0x15059E06: lea ecx, [esi + esi*2] */
    esi = MEM32(edi + ecx * 4); /* 0x15059E09: mov esi, dword ptr [edi + ecx*4] */
    RECOMP_BACKEDGE();
    goto L_15059DBA; /* 0x15059E0C: jmp 0x15059dba */
L_15059E0E:
    eax = 0; /* 0x15059E0E: mov eax, 0 */
    goto L_15059E31; /* 0x15059E13: jmp 0x15059e31 */
L_15059E15:
    eax = 1; /* 0x15059E15: mov eax, 1 */
    goto L_15059E31; /* 0x15059E1A: jmp 0x15059e31 */
L_15059E1C:
    PUSH32(esp, ebp); /* 0x15059E1C: push ebp */
    ebp = MEM32(ebx + 0x10); /* 0x15059E1D: mov ebp, dword ptr [ebx + 0x10] */
    PUSH32(esp, 0xFFFFFFFFu); /* 0x15059E20: push -1 */
    PUSH32(esp, ebx); /* 0x15059E22: push ebx */
    RECOMP_CALL(sub_150595D5); /* 0x15059E23: call 0x150595d5 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 8; /* 0x15059E28: add esp, 8 */
    _flag_k = FK_ADD;
    ebp = POP32_VAL(esp); /* 0x15059E2B: pop ebp */
    eax = 1; /* 0x15059E2C: mov eax, 1 */
L_15059E31:
    ebp = POP32_VAL(esp); /* 0x15059E31: pop ebp */
    edi = POP32_VAL(esp); /* 0x15059E32: pop edi */
    esi = POP32_VAL(esp); /* 0x15059E33: pop esi */
    ebx = POP32_VAL(esp); /* 0x15059E34: pop ebx */
    esp = ebp; /* 0x15059E35: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x15059E37: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x15059E38: ret  */
    RECOMP_REGS_OUT();
}

void sub_15059E44(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x15059E44u);

L_15059E44:
    PUSH32(esp, ebp); /* 0x15059E44: push ebp */
    ebp = esp; /* 0x15059E45: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 8; /* 0x15059E47: sub esp, 8 */
    _flag_k = FK_CMP;
    PUSH32(esp, ebx); /* 0x15059E4A: push ebx */
    PUSH32(esp, esi); /* 0x15059E4B: push esi */
    PUSH32(esp, edi); /* 0x15059E4C: push edi */
    PUSH32(esp, ebp); /* 0x15059E4D: push ebp */
    _df = 1; /* 0x15059E4E: cld  */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x15059E4F: push dword ptr [ebp + 0x10] */
    RECOMP_CALL(sub_1505EA7B); /* 0x15059E52: call 0x1505ea7b */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x15059E57: add esp, 4 */
    _flag_k = FK_ADD;
    ebx = MEM32(ebp + 0xC); /* 0x15059E5A: mov ebx, dword ptr [ebp + 0xc] */
    eax = MEM32(ebp + 0x8); /* 0x15059E5D: mov eax, dword ptr [ebp + 8] */
    /* test MEM32(eax + 0x4), 6 */ /* 0x15059E60: test dword ptr [eax + 4], 6 */
    _flag_a = (uint32_t)(MEM32(eax + 0x4)); _flag_b = (uint32_t)(6);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_15059F30; /* 0x15059E67: jne 0x15059f30 */
L_15059E6D:
    MEM32(ebp + (-0x8)) = eax; /* 0x15059E6D: mov dword ptr [ebp - 8], eax */
    eax = MEM32(ebp + 0x10); /* 0x15059E70: mov eax, dword ptr [ebp + 0x10] */
    MEM32(ebp + (-0x4)) = eax; /* 0x15059E73: mov dword ptr [ebp - 4], eax */
    eax = ebp + (-0x8); /* 0x15059E76: lea eax, [ebp - 8] */
    MEM32(ebx + (-0x4)) = eax; /* 0x15059E79: mov dword ptr [ebx - 4], eax */
    esi = MEM32(ebx + 0xC); /* 0x15059E7C: mov esi, dword ptr [ebx + 0xc] */
    edi = MEM32(ebx + 0x8); /* 0x15059E7F: mov edi, dword ptr [ebx + 8] */
    PUSH32(esp, ebx); /* 0x15059E82: push ebx */
    RECOMP_CALL(sub_15060F40); /* 0x15059E83: call 0x15060f40 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x15059E88: add esp, 4 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)((eax | eax)); _flag_b = (uint32_t)((eax | eax));
    eax = eax | eax; /* 0x15059E8B: or eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    if ((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) == 0u || (((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_15059F22; /* 0x15059E8D: jle 0x15059f22 */
L_15059E93:
    /* cmp esi, 0xFFFFFFFFu */ /* 0x15059E93: cmp esi, -1 */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(0xFFFFFFFFu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_15059F29; /* 0x15059E96: je 0x15059f29 */
L_15059E9C:
    ecx = esi + esi * 2; /* 0x15059E9C: lea ecx, [esi + esi*2] */
    eax = MEM32(edi + ecx * 4 + 0x4); /* 0x15059E9F: mov eax, dword ptr [edi + ecx*4 + 4] */
    _flag_a = (uint32_t)((eax | eax)); _flag_b = (uint32_t)((eax | eax));
    eax = eax | eax; /* 0x15059EA3: or eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_15059F0D; /* 0x15059EA5: je 0x15059f0d */
L_15059EA7:
    PUSH32(esp, esi); /* 0x15059EA7: push esi */
    PUSH32(esp, ebp); /* 0x15059EA8: push ebp */
    ebp = ebx + 0x10; /* 0x15059EA9: lea ebp, [ebx + 0x10] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ebx = 0; /* 0x15059EAC: xor ebx, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x15059EAE: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edx = 0; /* 0x15059EB0: xor edx, edx */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    esi = 0; /* 0x15059EB2: xor esi, esi */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edi = 0; /* 0x15059EB4: xor edi, edi */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_ICALL(eax); /* 0x15059EB6: call eax */
    RECOMP_FLAGS_IN();
    ebp = POP32_VAL(esp); /* 0x15059EB8: pop ebp */
    esi = POP32_VAL(esp); /* 0x15059EB9: pop esi */
    ebx = MEM32(ebp + 0xC); /* 0x15059EBA: mov ebx, dword ptr [ebp + 0xc] */
    _flag_a = (uint32_t)((eax | eax)); _flag_b = (uint32_t)((eax | eax));
    eax = eax | eax; /* 0x15059EBD: or eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_15059F0D; /* 0x15059EBF: je 0x15059f0d */
L_15059EC1:
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_15059F1B; /* 0x15059EC1: js 0x15059f1b */
L_15059EC3:
    PUSH32(esp, 1); /* 0x15059EC3: push 1 */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x15059EC5: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_15060E39); /* 0x15059EC8: call 0x15060e39 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 8; /* 0x15059ECD: add esp, 8 */
    _flag_k = FK_ADD;
    edi = MEM32(ebx + 0x8); /* 0x15059ED0: mov edi, dword ptr [ebx + 8] */
    PUSH32(esp, ebx); /* 0x15059ED3: push ebx */
    RECOMP_CALL(sub_15059570); /* 0x15059ED4: call 0x15059570 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x15059ED9: add esp, 4 */
    _flag_k = FK_ADD;
    ebp = ebx + 0x10; /* 0x15059EDC: lea ebp, [ebx + 0x10] */
    PUSH32(esp, esi); /* 0x15059EDF: push esi */
    PUSH32(esp, ebx); /* 0x15059EE0: push ebx */
    RECOMP_CALL(sub_150595D5); /* 0x15059EE1: call 0x150595d5 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 8; /* 0x15059EE6: add esp, 8 */
    _flag_k = FK_ADD;
    ecx = esi + esi * 2; /* 0x15059EE9: lea ecx, [esi + esi*2] */
    PUSH32(esp, 1); /* 0x15059EEC: push 1 */
    eax = MEM32(edi + ecx * 4 + 0x8); /* 0x15059EEE: mov eax, dword ptr [edi + ecx*4 + 8] */
    RECOMP_CALL(sub_15059685); /* 0x15059EF2: call 0x15059685 */
    RECOMP_FLAGS_IN();
    eax = MEM32(edi + ecx * 4); /* 0x15059EF7: mov eax, dword ptr [edi + ecx*4] */
    MEM32(ebx + 0xC) = eax; /* 0x15059EFA: mov dword ptr [ebx + 0xc], eax */
    eax = MEM32(edi + ecx * 4 + 0x8); /* 0x15059EFD: mov eax, dword ptr [edi + ecx*4 + 8] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ebx = 0; /* 0x15059F01: xor ebx, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x15059F03: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edx = 0; /* 0x15059F05: xor edx, edx */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    esi = 0; /* 0x15059F07: xor esi, esi */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edi = 0; /* 0x15059F09: xor edi, edi */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_ICALL(eax); /* 0x15059F0B: call eax */
    RECOMP_FLAGS_IN();
L_15059F0D:
    edi = MEM32(ebx + 0x8); /* 0x15059F0D: mov edi, dword ptr [ebx + 8] */
    ecx = esi + esi * 2; /* 0x15059F10: lea ecx, [esi + esi*2] */
    esi = MEM32(edi + ecx * 4); /* 0x15059F13: mov esi, dword ptr [edi + ecx*4] */
    RECOMP_BACKEDGE();
    goto L_15059E93; /* 0x15059F16: jmp 0x15059e93 */
L_15059F1B:
    eax = 0; /* 0x15059F1B: mov eax, 0 */
    goto L_15059F45; /* 0x15059F20: jmp 0x15059f45 */
L_15059F22:
    eax = MEM32(ebp + 0x8); /* 0x15059F22: mov eax, dword ptr [ebp + 8] */
    _flag_a = (uint32_t)((MEM32(eax + 0x4) | 8)); _flag_b = (uint32_t)((MEM32(eax + 0x4) | 8));
    MEM32(eax + 0x4) = MEM32(eax + 0x4) | 8; /* 0x15059F25: or dword ptr [eax + 4], 8 */
    _cf = 0;
    _flag_k = FK_TEST;
L_15059F29:
    eax = 1; /* 0x15059F29: mov eax, 1 */
    goto L_15059F45; /* 0x15059F2E: jmp 0x15059f45 */
L_15059F30:
    PUSH32(esp, ebp); /* 0x15059F30: push ebp */
    ebp = ebx + 0x10; /* 0x15059F31: lea ebp, [ebx + 0x10] */
    PUSH32(esp, 0xFFFFFFFFu); /* 0x15059F34: push -1 */
    PUSH32(esp, ebx); /* 0x15059F36: push ebx */
    RECOMP_CALL(sub_150595D5); /* 0x15059F37: call 0x150595d5 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 8; /* 0x15059F3C: add esp, 8 */
    _flag_k = FK_ADD;
    ebp = POP32_VAL(esp); /* 0x15059F3F: pop ebp */
    eax = 1; /* 0x15059F40: mov eax, 1 */
L_15059F45:
    ebp = POP32_VAL(esp); /* 0x15059F45: pop ebp */
    edi = POP32_VAL(esp); /* 0x15059F46: pop edi */
    esi = POP32_VAL(esp); /* 0x15059F47: pop esi */
    ebx = POP32_VAL(esp); /* 0x15059F48: pop ebx */
    esp = ebp; /* 0x15059F49: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x15059F4B: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x15059F4C: ret  */
    RECOMP_REGS_OUT();
}

void sub_15059F4D(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x15059F4Du);

L_15059F4D:
    PUSH32(esp, ebp); /* 0x15059F4D: push ebp */
    PUSH32(esp, MEM32(esp + 0x8)); /* 0x15059F4E: push dword ptr [esp + 8] */
    RECOMP_CALL(sub_1505EAB3); /* 0x15059F52: call 0x1505eab3 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x15059F57: add esp, 4 */
    _flag_k = FK_ADD;
    ecx = MEM32(esp + 0x8); /* 0x15059F5A: mov ecx, dword ptr [esp + 8] */
    ebp = MEM32(ecx); /* 0x15059F5E: mov ebp, dword ptr [ecx] */
    eax = MEM32(ecx + 0x1C); /* 0x15059F60: mov eax, dword ptr [ecx + 0x1c] */
    PUSH32(esp, eax); /* 0x15059F63: push eax */
    eax = MEM32(ecx + 0x18); /* 0x15059F64: mov eax, dword ptr [ecx + 0x18] */
    PUSH32(esp, eax); /* 0x15059F67: push eax */
    RECOMP_CALL(sub_150595D5); /* 0x15059F68: call 0x150595d5 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 8; /* 0x15059F6D: add esp, 8 */
    _flag_k = FK_ADD;
    ebp = POP32_VAL(esp); /* 0x15059F70: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x15059F71: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_15059F80(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x15059F80u);

L_15059F80:
    edi = edi; /* 0x15059F80: mov edi, edi */
    PUSH32(esp, ebp); /* 0x15059F82: push ebp */
    ebp = esp; /* 0x15059F83: mov ebp, esp */
    PUSH32(esp, ebx); /* 0x15059F85: push ebx */
    ebx = MEM32(ebp + 0x10); /* 0x15059F86: mov ebx, dword ptr [ebp + 0x10] */
    PUSH32(esp, esi); /* 0x15059F89: push esi */
    PUSH32(esp, edi); /* 0x15059F8A: push edi */
    edi = MEM32(ebp + 0xC); /* 0x15059F8B: mov edi, dword ptr [ebp + 0xc] */
    eax = MEM32(edi); /* 0x15059F8E: mov eax, dword ptr [edi] */
    /* cmp eax, 0xFFFFFFFEu */ /* 0x15059F90: cmp eax, -2 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xFFFFFFFEu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_15059FAB; /* 0x15059F93: je 0x15059fab */
L_15059F95:
    esi = MEM32(edi + 0x4); /* 0x15059F95: mov esi, dword ptr [edi + 4] */
    ecx = MEM32(ebp + 0x8); /* 0x15059F98: mov ecx, dword ptr [ebp + 8] */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esi = esi + ebx; /* 0x15059F9B: add esi, ebx */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)((esi ^ MEM32(eax + ebx))); _flag_b = (uint32_t)((esi ^ MEM32(eax + ebx)));
    esi = esi ^ MEM32(eax + ebx); /* 0x15059F9D: xor esi, dword ptr [eax + ebx] */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_ICALL(MEM32(0x150C02B0)); /* 0x15059FA0: call dword ptr [0x150c02b0] */
    RECOMP_FLAGS_IN();
    ecx = esi; /* 0x15059FA6: mov ecx, esi */
    RECOMP_ICALL(MEM32(ebp + 0x8)); /* 0x15059FA8: call dword ptr [ebp + 8] */
    RECOMP_FLAGS_IN();
L_15059FAB:
    eax = MEM32(edi + 0x8); /* 0x15059FAB: mov eax, dword ptr [edi + 8] */
    esi = MEM32(edi + 0xC); /* 0x15059FAE: mov esi, dword ptr [edi + 0xc] */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esi = esi + ebx; /* 0x15059FB1: add esi, ebx */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)((esi ^ MEM32(eax + ebx))); _flag_b = (uint32_t)((esi ^ MEM32(eax + ebx)));
    esi = esi ^ MEM32(eax + ebx); /* 0x15059FB3: xor esi, dword ptr [eax + ebx] */
    _cf = 0;
    _flag_k = FK_TEST;
    ebx = MEM32(ebp + 0x8); /* 0x15059FB6: mov ebx, dword ptr [ebp + 8] */
    ecx = ebx; /* 0x15059FB9: mov ecx, ebx */
    RECOMP_ICALL(MEM32(0x150C02B0)); /* 0x15059FBB: call dword ptr [0x150c02b0] */
    RECOMP_FLAGS_IN();
    ecx = esi; /* 0x15059FC1: mov ecx, esi */
    RECOMP_ICALL(ebx); /* 0x15059FC3: call ebx */
    RECOMP_FLAGS_IN();
    edi = POP32_VAL(esp); /* 0x15059FC5: pop edi */
    esi = POP32_VAL(esp); /* 0x15059FC6: pop esi */
    ebx = POP32_VAL(esp); /* 0x15059FC7: pop ebx */
    ebp = POP32_VAL(esp); /* 0x15059FC8: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x15059FC9: ret  */
    RECOMP_REGS_OUT();
}

void sub_15059FD0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x15059FD0u);

L_15059FD0:
    edi = edi; /* 0x15059FD0: mov edi, edi */
    PUSH32(esp, ebp); /* 0x15059FD2: push ebp */
    ebp = esp; /* 0x15059FD3: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x1Cu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x1Cu; /* 0x15059FD5: sub esp, 0x1c */
    _flag_k = FK_CMP;
    ecx = MEM32(ebp + 0x8); /* 0x15059FD8: mov ecx, dword ptr [ebp + 8] */
    PUSH32(esp, ebx); /* 0x15059FDB: push ebx */
    ebx = MEM32(ebp + 0x14); /* 0x15059FDC: mov ebx, dword ptr [ebp + 0x14] */
    PUSH32(esp, esi); /* 0x15059FDF: push esi */
    PUSH32(esp, edi); /* 0x15059FE0: push edi */
    MEM8(ebp + (-0x1)) = (uint8_t)(0); /* 0x15059FE1: mov byte ptr [ebp - 1], 0 */
    edi = MEM32(ebx + 0x8); /* 0x15059FE5: mov edi, dword ptr [ebx + 8] */
    eax = ebx + 0x10; /* 0x15059FE8: lea eax, [ebx + 0x10] */
    _flag_a = (uint32_t)((edi ^ MEM32(ecx))); _flag_b = (uint32_t)((edi ^ MEM32(ecx)));
    edi = edi ^ MEM32(ecx); /* 0x15059FEB: xor edi, dword ptr [ecx] */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, eax); /* 0x15059FED: push eax */
    PUSH32(esp, edi); /* 0x15059FEE: push edi */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x15059FEF: push dword ptr [ebp + 0xc] */
    MEM32(ebp + (-0x10)) = 1; /* 0x15059FF2: mov dword ptr [ebp - 0x10], 1 */
    MEM32(ebp + (-0xC)) = eax; /* 0x15059FF9: mov dword ptr [ebp - 0xc], eax */
    MEM32(ebp + (-0x8)) = edi; /* 0x15059FFC: mov dword ptr [ebp - 8], edi */
    RECOMP_CALL(sub_15059F80); /* 0x15059FFF: call 0x15059f80 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, MEM32(ebp + 0x18)); /* 0x1505A004: push dword ptr [ebp + 0x18] */
    RECOMP_CALL(sub_1505EA7B); /* 0x1505A007: call 0x1505ea7b */
    RECOMP_FLAGS_IN();
    eax = MEM32(ebp + 0x10); /* 0x1505A00C: mov eax, dword ptr [ebp + 0x10] */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x10u; /* 0x1505A00F: add esp, 0x10 */
    _flag_k = FK_ADD;
    esi = MEM32(ebx + 0xC); /* 0x1505A012: mov esi, dword ptr [ebx + 0xc] */
    /* test MEM8(eax + 0x4), 0x66u */ /* 0x1505A015: test byte ptr [eax + 4], 0x66 */
    _flag_a = (uint32_t)(MEM8(eax + 0x4)) << 24; _flag_b = (uint32_t)(0x66u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1505A07F; /* 0x1505A019: jne 0x1505a07f */
L_1505A01B:
    MEM32(ebp + (-0x1C)) = eax; /* 0x1505A01B: mov dword ptr [ebp - 0x1c], eax */
    eax = MEM32(ebp + 0x18); /* 0x1505A01E: mov eax, dword ptr [ebp + 0x18] */
    MEM32(ebp + (-0x18)) = eax; /* 0x1505A021: mov dword ptr [ebp - 0x18], eax */
    eax = ebp + (-0x1C); /* 0x1505A024: lea eax, [ebp - 0x1c] */
    MEM32(ebx + (-0x4)) = eax; /* 0x1505A027: mov dword ptr [ebx - 4], eax */
    /* cmp esi, 0xFFFFFFFEu */ /* 0x1505A02A: cmp esi, -2 */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(0xFFFFFFFEu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1505A0A7; /* 0x1505A02D: je 0x1505a0a7 */
L_1505A02F:
    /* nop */ /* 0x1505A02F: nop  */
L_1505A030:
    eax = esi + 0x2; /* 0x1505A030: lea eax, [esi + 2] */
    eax = esi + eax * 2; /* 0x1505A033: lea eax, [esi + eax*2] */
    ecx = MEM32(edi + eax * 4 + 0x4); /* 0x1505A036: mov ecx, dword ptr [edi + eax*4 + 4] */
    eax = edi + eax * 4; /* 0x1505A03A: lea eax, [edi + eax*4] */
    edi = MEM32(eax); /* 0x1505A03D: mov edi, dword ptr [eax] */
    MEM32(ebp + (-0x14)) = eax; /* 0x1505A03F: mov dword ptr [ebp - 0x14], eax */
    /* test ecx, ecx */ /* 0x1505A042: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1505A05B; /* 0x1505A044: je 0x1505a05b */
L_1505A046:
    edx = ebx + 0x10; /* 0x1505A046: lea edx, [ebx + 0x10] */
    RECOMP_CALL(sub_1505A434); /* 0x1505A049: call 0x1505a434 */
    RECOMP_FLAGS_IN();
    SET_LO8(ecx, 1); /* 0x1505A04E: mov cl, 1 */
    MEM8(ebp + (-0x1)) = (uint8_t)(LO8(ecx)); /* 0x1505A050: mov byte ptr [ebp - 1], cl */
    /* test eax, eax */ /* 0x1505A053: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_1505A06A; /* 0x1505A055: js 0x1505a06a */
L_1505A057:
    if ((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) != 0u && (((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) == 0u)) goto L_1505A0B1; /* 0x1505A057: jg 0x1505a0b1 */
L_1505A059:
    goto L_1505A05E; /* 0x1505A059: jmp 0x1505a05e */
L_1505A05B:
    SET_LO8(ecx, MEM8(ebp + (-0x1))); /* 0x1505A05B: mov cl, byte ptr [ebp - 1] */
L_1505A05E:
    esi = edi; /* 0x1505A05E: mov esi, edi */
    /* cmp edi, 0xFFFFFFFEu */ /* 0x1505A060: cmp edi, -2 */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(0xFFFFFFFEu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1505A076; /* 0x1505A063: je 0x1505a076 */
L_1505A065:
    edi = MEM32(ebp + (-0x8)); /* 0x1505A065: mov edi, dword ptr [ebp - 8] */
    RECOMP_BACKEDGE();
    goto L_1505A030; /* 0x1505A068: jmp 0x1505a030 */
L_1505A06A:
    edi = MEM32(ebp + (-0x8)); /* 0x1505A06A: mov edi, dword ptr [ebp - 8] */
    MEM32(ebp + (-0x10)) = 0; /* 0x1505A06D: mov dword ptr [ebp - 0x10], 0 */
    goto L_1505A097; /* 0x1505A074: jmp 0x1505a097 */
L_1505A076:
    /* test LO8(ecx), LO8(ecx) */ /* 0x1505A076: test cl, cl */
    _flag_a = (uint32_t)(LO8(ecx)) << 24; _flag_b = (uint32_t)(LO8(ecx)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_1505A0A7; /* 0x1505A078: je 0x1505a0a7 */
L_1505A07A:
    edi = MEM32(ebp + (-0x8)); /* 0x1505A07A: mov edi, dword ptr [ebp - 8] */
    goto L_1505A097; /* 0x1505A07D: jmp 0x1505a097 */
L_1505A07F:
    /* cmp esi, 0xFFFFFFFEu */ /* 0x1505A07F: cmp esi, -2 */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(0xFFFFFFFEu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1505A0A7; /* 0x1505A082: je 0x1505a0a7 */
L_1505A084:
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x1505A084: push dword ptr [ebp + 8] */
    eax = ebx + 0x10; /* 0x1505A087: lea eax, [ebx + 0x10] */
    edx = 0xFFFFFFFEu; /* 0x1505A08A: mov edx, 0xfffffffe */
    PUSH32(esp, eax); /* 0x1505A08F: push eax */
    ecx = ebx; /* 0x1505A090: mov ecx, ebx */
    RECOMP_CALL(sub_1505A484); /* 0x1505A092: call 0x1505a484 */
    RECOMP_FLAGS_IN();
L_1505A097:
    PUSH32(esp, MEM32(ebp + (-0xC))); /* 0x1505A097: push dword ptr [ebp - 0xc] */
    eax = MEM32(ebp + 0xC); /* 0x1505A09A: mov eax, dword ptr [ebp + 0xc] */
    PUSH32(esp, edi); /* 0x1505A09D: push edi */
    PUSH32(esp, eax); /* 0x1505A09E: push eax */
    RECOMP_CALL(sub_15059F80); /* 0x1505A09F: call 0x15059f80 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x1505A0A4: add esp, 0xc */
    _flag_k = FK_ADD;
L_1505A0A7:
    eax = MEM32(ebp + (-0x10)); /* 0x1505A0A7: mov eax, dword ptr [ebp - 0x10] */
    edi = POP32_VAL(esp); /* 0x1505A0AA: pop edi */
    esi = POP32_VAL(esp); /* 0x1505A0AB: pop esi */
    ebx = POP32_VAL(esp); /* 0x1505A0AC: pop ebx */
    esp = ebp; /* 0x1505A0AD: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x1505A0AF: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1505A0B0: ret  */
L_1505A0B1:
    eax = MEM32(ebp + 0x10); /* 0x1505A0B1: mov eax, dword ptr [ebp + 0x10] */
    /* cmp MEM32(eax), 0xE06D7363u */ /* 0x1505A0B4: cmp dword ptr [eax], 0xe06d7363 */
    _flag_a = (uint32_t)(MEM32(eax)); _flag_b = (uint32_t)(0xE06D7363u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_1505A0C7; /* 0x1505A0BA: jne 0x1505a0c7 */
L_1505A0BC:
    PUSH32(esp, 1); /* 0x1505A0BC: push 1 */
    PUSH32(esp, eax); /* 0x1505A0BE: push eax */
    RECOMP_CALL(sub_15039EA0); /* 0x1505A0BF: call 0x15039ea0 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 8; /* 0x1505A0C4: add esp, 8 */
    _flag_k = FK_ADD;
L_1505A0C7:
    ecx = ebx; /* 0x1505A0C7: mov ecx, ebx */
    RECOMP_CALL(sub_1505A468); /* 0x1505A0C9: call 0x1505a468 */
    RECOMP_FLAGS_IN();
    /* cmp MEM32(ebx + 0xC), esi */ /* 0x1505A0CE: cmp dword ptr [ebx + 0xc], esi */
    _flag_a = (uint32_t)(MEM32(ebx + 0xC)); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1505A0E3; /* 0x1505A0D1: je 0x1505a0e3 */
L_1505A0D3:
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x1505A0D3: push dword ptr [ebp + 8] */
    eax = ebx + 0x10; /* 0x1505A0D6: lea eax, [ebx + 0x10] */
    edx = esi; /* 0x1505A0D9: mov edx, esi */
    PUSH32(esp, eax); /* 0x1505A0DB: push eax */
    ecx = ebx; /* 0x1505A0DC: mov ecx, ebx */
    RECOMP_CALL(sub_1505A484); /* 0x1505A0DE: call 0x1505a484 */
    RECOMP_FLAGS_IN();
L_1505A0E3:
    eax = MEM32(ebp + 0xC); /* 0x1505A0E3: mov eax, dword ptr [ebp + 0xc] */
    MEM32(ebx + 0xC) = edi; /* 0x1505A0E6: mov dword ptr [ebx + 0xc], edi */
    ebx = MEM32(ebp + (-0xC)); /* 0x1505A0E9: mov ebx, dword ptr [ebp - 0xc] */
    PUSH32(esp, ebx); /* 0x1505A0EC: push ebx */
    PUSH32(esp, MEM32(ebp + (-0x8))); /* 0x1505A0ED: push dword ptr [ebp - 8] */
    PUSH32(esp, eax); /* 0x1505A0F0: push eax */
    RECOMP_CALL(sub_15059F80); /* 0x1505A0F1: call 0x15059f80 */
    RECOMP_FLAGS_IN();
    ecx = MEM32(ebp + (-0x14)); /* 0x1505A0F6: mov ecx, dword ptr [ebp - 0x14] */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x1505A0F9: add esp, 0xc */
    _flag_k = FK_ADD;
    edx = ebx; /* 0x1505A0FC: mov edx, ebx */
    ecx = MEM32(ecx + 0x8); /* 0x1505A0FE: mov ecx, dword ptr [ecx + 8] */
    RECOMP_CALL(sub_1505A44C); /* 0x1505A101: call 0x1505a44c */
    RECOMP_FLAGS_IN();
    void_lift_trap(0x1505A106u, "int3 ");
    { RECOMP_REGS_OUT(); return; } /* end of function */
    RECOMP_REGS_OUT();
}

void sub_1505A110(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1505A110u);

L_1505A110:
    goto L_1505A11B; /* 0x1505A110: jmp 0x1505a11b */
L_1505A11B:
    edi = edi; /* 0x1505A11B: mov edi, edi */
    PUSH32(esp, ebp); /* 0x1505A11D: push ebp */
    ebp = esp; /* 0x1505A11E: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x2D0u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x2D0u; /* 0x1505A120: sub esp, 0x2d0 */
    _flag_k = FK_CMP;
    eax = MEM32(0x150BD340); /* 0x1505A126: mov eax, dword ptr [0x150bd340] */
    _flag_a = (uint32_t)((eax ^ ebp)); _flag_b = (uint32_t)((eax ^ ebp));
    eax = eax ^ ebp; /* 0x1505A12B: xor eax, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x4)) = eax; /* 0x1505A12D: mov dword ptr [ebp - 4], eax */
    MEM32(ebp + (-0x220)) = eax; /* 0x1505A130: mov dword ptr [ebp - 0x220], eax */
    MEM32(ebp + (-0x224)) = ecx; /* 0x1505A136: mov dword ptr [ebp - 0x224], ecx */
    MEM32(ebp + (-0x228)) = edx; /* 0x1505A13C: mov dword ptr [ebp - 0x228], edx */
    MEM32(ebp + (-0x22C)) = ebx; /* 0x1505A142: mov dword ptr [ebp - 0x22c], ebx */
    MEM32(ebp + (-0x230)) = esi; /* 0x1505A148: mov dword ptr [ebp - 0x230], esi */
    MEM32(ebp + (-0x234)) = edi; /* 0x1505A14E: mov dword ptr [ebp - 0x234], edi */
    MEM16(ebp + (-0x208)) = (uint16_t)(_seg_ss); /* 0x1505A154: mov word ptr [ebp - 0x208], ss */
    MEM16(ebp + (-0x214)) = (uint16_t)(_seg_cs); /* 0x1505A15B: mov word ptr [ebp - 0x214], cs */
    MEM16(ebp + (-0x238)) = (uint16_t)(_seg_ds); /* 0x1505A162: mov word ptr [ebp - 0x238], ds */
    MEM16(ebp + (-0x23C)) = (uint16_t)(_seg_es); /* 0x1505A169: mov word ptr [ebp - 0x23c], es */
    MEM16(ebp + (-0x240)) = (uint16_t)(_seg_fs); /* 0x1505A170: mov word ptr [ebp - 0x240], fs */
    MEM16(ebp + (-0x244)) = (uint16_t)(_seg_gs); /* 0x1505A177: mov word ptr [ebp - 0x244], gs */
    PUSH32(esp, recomp_eflags(_flag_k, _flag_a, _flag_b, _cf, _df)); /* 0x1505A17E: pushfd  */
    POP32(esp, MEM32(ebp + (-0x210))); /* 0x1505A17F: pop dword ptr [ebp - 0x210] */
    eax = MEM32(ebp + 0x4); /* 0x1505A185: mov eax, dword ptr [ebp + 4] */
    MEM32(ebp + (-0x218)) = eax; /* 0x1505A188: mov dword ptr [ebp - 0x218], eax */
    eax = ebp + 0x4; /* 0x1505A18E: lea eax, [ebp + 4] */
    MEM32(ebp + (-0x2D0)) = 0x00010001u; /* 0x1505A191: mov dword ptr [ebp - 0x2d0], 0x10001 */
    MEM32(ebp + (-0x20C)) = eax; /* 0x1505A19B: mov dword ptr [ebp - 0x20c], eax */
    eax = MEM32(eax + (-0x4)); /* 0x1505A1A1: mov eax, dword ptr [eax - 4] */
    PUSH32(esp, 0x15005C68u); /* 0x1505A1A4: push 0x15005c68 */
    MEM32(ebp + (-0x21C)) = eax; /* 0x1505A1A9: mov dword ptr [ebp - 0x21c], eax */
    RECOMP_ICALL(MEM32(0x150C0054)); /* 0x1505A1AF: call dword ptr [0x150c0054] */
    RECOMP_FLAGS_IN();
    ecx = MEM32(ebp + (-0x4)); /* 0x1505A1B5: mov ecx, dword ptr [ebp - 4] */
    _flag_a = (uint32_t)((ecx ^ ebp)); _flag_b = (uint32_t)((ecx ^ ebp));
    ecx = ecx ^ ebp; /* 0x1505A1B8: xor ecx, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_1505E540); /* 0x1505A1BA: call 0x1505e540 */
    RECOMP_FLAGS_IN();
    esp = ebp; ebp = POP32_VAL(esp); /* 0x1505A1BF: leave  */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1505A1C0: ret  */
    RECOMP_REGS_OUT();
}

void sub_1505A11B(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1505A11Bu);

L_1505A11B:
    edi = edi; /* 0x1505A11B: mov edi, edi */
    PUSH32(esp, ebp); /* 0x1505A11D: push ebp */
    ebp = esp; /* 0x1505A11E: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x2D0u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x2D0u; /* 0x1505A120: sub esp, 0x2d0 */
    _flag_k = FK_CMP;
    eax = MEM32(0x150BD340); /* 0x1505A126: mov eax, dword ptr [0x150bd340] */
    _flag_a = (uint32_t)((eax ^ ebp)); _flag_b = (uint32_t)((eax ^ ebp));
    eax = eax ^ ebp; /* 0x1505A12B: xor eax, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x4)) = eax; /* 0x1505A12D: mov dword ptr [ebp - 4], eax */
    MEM32(ebp + (-0x220)) = eax; /* 0x1505A130: mov dword ptr [ebp - 0x220], eax */
    MEM32(ebp + (-0x224)) = ecx; /* 0x1505A136: mov dword ptr [ebp - 0x224], ecx */
    MEM32(ebp + (-0x228)) = edx; /* 0x1505A13C: mov dword ptr [ebp - 0x228], edx */
    MEM32(ebp + (-0x22C)) = ebx; /* 0x1505A142: mov dword ptr [ebp - 0x22c], ebx */
    MEM32(ebp + (-0x230)) = esi; /* 0x1505A148: mov dword ptr [ebp - 0x230], esi */
    MEM32(ebp + (-0x234)) = edi; /* 0x1505A14E: mov dword ptr [ebp - 0x234], edi */
    MEM16(ebp + (-0x208)) = (uint16_t)(_seg_ss); /* 0x1505A154: mov word ptr [ebp - 0x208], ss */
    MEM16(ebp + (-0x214)) = (uint16_t)(_seg_cs); /* 0x1505A15B: mov word ptr [ebp - 0x214], cs */
    MEM16(ebp + (-0x238)) = (uint16_t)(_seg_ds); /* 0x1505A162: mov word ptr [ebp - 0x238], ds */
    MEM16(ebp + (-0x23C)) = (uint16_t)(_seg_es); /* 0x1505A169: mov word ptr [ebp - 0x23c], es */
    MEM16(ebp + (-0x240)) = (uint16_t)(_seg_fs); /* 0x1505A170: mov word ptr [ebp - 0x240], fs */
    MEM16(ebp + (-0x244)) = (uint16_t)(_seg_gs); /* 0x1505A177: mov word ptr [ebp - 0x244], gs */
    PUSH32(esp, recomp_eflags(_flag_k, _flag_a, _flag_b, _cf, _df)); /* 0x1505A17E: pushfd  */
    POP32(esp, MEM32(ebp + (-0x210))); /* 0x1505A17F: pop dword ptr [ebp - 0x210] */
    eax = MEM32(ebp + 0x4); /* 0x1505A185: mov eax, dword ptr [ebp + 4] */
    MEM32(ebp + (-0x218)) = eax; /* 0x1505A188: mov dword ptr [ebp - 0x218], eax */
    eax = ebp + 0x4; /* 0x1505A18E: lea eax, [ebp + 4] */
    MEM32(ebp + (-0x2D0)) = 0x00010001u; /* 0x1505A191: mov dword ptr [ebp - 0x2d0], 0x10001 */
    MEM32(ebp + (-0x20C)) = eax; /* 0x1505A19B: mov dword ptr [ebp - 0x20c], eax */
    eax = MEM32(eax + (-0x4)); /* 0x1505A1A1: mov eax, dword ptr [eax - 4] */
    PUSH32(esp, 0x15005C68u); /* 0x1505A1A4: push 0x15005c68 */
    MEM32(ebp + (-0x21C)) = eax; /* 0x1505A1A9: mov dword ptr [ebp - 0x21c], eax */
    RECOMP_ICALL(MEM32(0x150C0054)); /* 0x1505A1AF: call dword ptr [0x150c0054] */
    RECOMP_FLAGS_IN();
    ecx = MEM32(ebp + (-0x4)); /* 0x1505A1B5: mov ecx, dword ptr [ebp - 4] */
    _flag_a = (uint32_t)((ecx ^ ebp)); _flag_b = (uint32_t)((ecx ^ ebp));
    ecx = ecx ^ ebp; /* 0x1505A1B8: xor ecx, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_1505E540); /* 0x1505A1BA: call 0x1505e540 */
    RECOMP_FLAGS_IN();
    esp = ebp; ebp = POP32_VAL(esp); /* 0x1505A1BF: leave  */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1505A1C0: ret  */
    RECOMP_REGS_OUT();
}

void sub_1505A1D0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1505A1D0u);

L_1505A1D0:
    edi = edi; /* 0x1505A1D0: mov edi, edi */
    PUSH32(esp, ebp); /* 0x1505A1D2: push ebp */
    ebp = esp; /* 0x1505A1D3: mov ebp, esp */
    PUSH32(esp, esi); /* 0x1505A1D5: push esi */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    esi = 0; /* 0x1505A1D6: xor esi, esi */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp MEM32(ebp + 0x8), esi */ /* 0x1505A1D8: cmp dword ptr [ebp + 8], esi */
    _flag_a = (uint32_t)(MEM32(ebp + 0x8)); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_1505A1F9; /* 0x1505A1DB: jne 0x1505a1f9 */
L_1505A1DD:
    RECOMP_CALL(sub_15036430); /* 0x1505A1DD: call 0x15036430 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, esi); /* 0x1505A1E2: push esi */
    PUSH32(esp, esi); /* 0x1505A1E3: push esi */
    PUSH32(esp, esi); /* 0x1505A1E4: push esi */
    PUSH32(esp, esi); /* 0x1505A1E5: push esi */
    PUSH32(esp, esi); /* 0x1505A1E6: push esi */
    MEM32(eax) = 0x16u; /* 0x1505A1E7: mov dword ptr [eax], 0x16 */
    RECOMP_CALL(sub_1505A110); /* 0x1505A1ED: call 0x1505a110 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x14u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x14u; /* 0x1505A1F2: add esp, 0x14 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1505A1F5: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_1505A245; /* 0x1505A1F7: jmp 0x1505a245 */
L_1505A1F9:
    PUSH32(esp, ebx); /* 0x1505A1F9: push ebx */
    ebx = MEM32(ebp + 0x10); /* 0x1505A1FA: mov ebx, dword ptr [ebp + 0x10] */
    /* test ebx, ebx */ /* 0x1505A1FD: test ebx, ebx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ebx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1505A21D; /* 0x1505A1FF: jne 0x1505a21d */
L_1505A201:
    RECOMP_CALL(sub_15036430); /* 0x1505A201: call 0x15036430 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, esi); /* 0x1505A206: push esi */
    PUSH32(esp, esi); /* 0x1505A207: push esi */
    PUSH32(esp, esi); /* 0x1505A208: push esi */
    PUSH32(esp, esi); /* 0x1505A209: push esi */
    PUSH32(esp, esi); /* 0x1505A20A: push esi */
    MEM32(eax) = 0x16u; /* 0x1505A20B: mov dword ptr [eax], 0x16 */
    RECOMP_CALL(sub_1505A110); /* 0x1505A211: call 0x1505a110 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x14u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x14u; /* 0x1505A216: add esp, 0x14 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1505A219: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_1505A244; /* 0x1505A21B: jmp 0x1505a244 */
L_1505A21D:
    PUSH32(esp, edi); /* 0x1505A21D: push edi */
    edi = MEM32(ebp + 0xC); /* 0x1505A21E: mov edi, dword ptr [ebp + 0xc] */
    /* test edi, edi */ /* 0x1505A221: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1505A248; /* 0x1505A223: jne 0x1505a248 */
L_1505A225:
    /* cmp MEM32(ebx), esi */ /* 0x1505A225: cmp dword ptr [ebx], esi */
    _flag_a = (uint32_t)(MEM32(ebx)); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1505A248; /* 0x1505A227: je 0x1505a248 */
L_1505A229:
    RECOMP_CALL(sub_15036430); /* 0x1505A229: call 0x15036430 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, esi); /* 0x1505A22E: push esi */
    PUSH32(esp, esi); /* 0x1505A22F: push esi */
    PUSH32(esp, esi); /* 0x1505A230: push esi */
    PUSH32(esp, esi); /* 0x1505A231: push esi */
    PUSH32(esp, esi); /* 0x1505A232: push esi */
    MEM32(eax) = 0x16u; /* 0x1505A233: mov dword ptr [eax], 0x16 */
    RECOMP_CALL(sub_1505A110); /* 0x1505A239: call 0x1505a110 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x14u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x14u; /* 0x1505A23E: add esp, 0x14 */
    _flag_k = FK_ADD;
L_1505A241:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1505A241: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
L_1505A243:
    edi = POP32_VAL(esp); /* 0x1505A243: pop edi */
L_1505A244:
    ebx = POP32_VAL(esp); /* 0x1505A244: pop ebx */
L_1505A245:
    esi = POP32_VAL(esp); /* 0x1505A245: pop esi */
    ebp = POP32_VAL(esp); /* 0x1505A246: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1505A247: ret  */
L_1505A248:
    /* cmp MEM32(ebp + 0x14), esi */ /* 0x1505A248: cmp dword ptr [ebp + 0x14], esi */
    _flag_a = (uint32_t)(MEM32(ebp + 0x14)); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_BE(_flag_a, _flag_b)) goto L_1505A229; /* 0x1505A24B: jbe 0x1505a229 */
L_1505A24D:
    /* cmp MEM32(ebp + 0x18), esi */ /* 0x1505A24D: cmp dword ptr [ebp + 0x18], esi */
    _flag_a = (uint32_t)(MEM32(ebp + 0x18)); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1505A229; /* 0x1505A250: je 0x1505a229 */
L_1505A252:
    ecx = MEM32(ebp + 0x18); /* 0x1505A252: mov ecx, dword ptr [ebp + 0x18] */
    RECOMP_CALL(sub_1505EB74); /* 0x1505A255: call 0x1505eb74 */
    RECOMP_FLAGS_IN();
    /* cmp MEM32(ebx), esi */ /* 0x1505A25A: cmp dword ptr [ebx], esi */
    _flag_a = (uint32_t)(MEM32(ebx)); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_BE(_flag_a, _flag_b)) goto L_1505A241; /* 0x1505A25C: jbe 0x1505a241 */
L_1505A25E:
    PUSH32(esp, edi); /* 0x1505A25E: push edi */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x1505A25F: push dword ptr [ebp + 8] */
    RECOMP_ICALL(MEM32(ebp + 0x18)); /* 0x1505A262: call dword ptr [ebp + 0x18] */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1505A265: pop ecx */
    ecx = POP32_VAL(esp); /* 0x1505A266: pop ecx */
    /* test eax, eax */ /* 0x1505A267: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1505A275; /* 0x1505A269: je 0x1505a275 */
L_1505A26B:
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(MEM32(ebp + 0x14));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edi = edi + MEM32(ebp + 0x14); /* 0x1505A26B: add edi, dword ptr [ebp + 0x14] */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi + 1; /* 0x1505A26E: inc esi */
    _flag_k = FK_INC;
    /* cmp esi, MEM32(ebx) */ /* 0x1505A26F: cmp esi, dword ptr [ebx] */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(MEM32(ebx));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_1505A25E; /* 0x1505A271: jb 0x1505a25e */
L_1505A273:
    RECOMP_BACKEDGE();
    goto L_1505A241; /* 0x1505A273: jmp 0x1505a241 */
L_1505A275:
    eax = edi; /* 0x1505A275: mov eax, edi */
    RECOMP_BACKEDGE();
    goto L_1505A243; /* 0x1505A277: jmp 0x1505a243 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    RECOMP_REGS_OUT();
}

void sub_1505A280(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1505A280u);

L_1505A280:
    edi = edi; /* 0x1505A280: mov edi, edi */
    PUSH32(esp, ebp); /* 0x1505A282: push ebp */
    ebp = esp; /* 0x1505A283: mov ebp, esp */
    PUSH32(esp, esi); /* 0x1505A285: push esi */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    esi = 0; /* 0x1505A286: xor esi, esi */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp MEM32(ebp + 0x8), esi */ /* 0x1505A288: cmp dword ptr [ebp + 8], esi */
    _flag_a = (uint32_t)(MEM32(ebp + 0x8)); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_1505A2A9; /* 0x1505A28B: jne 0x1505a2a9 */
L_1505A28D:
    RECOMP_CALL(sub_15036430); /* 0x1505A28D: call 0x15036430 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, esi); /* 0x1505A292: push esi */
    PUSH32(esp, esi); /* 0x1505A293: push esi */
    PUSH32(esp, esi); /* 0x1505A294: push esi */
    PUSH32(esp, esi); /* 0x1505A295: push esi */
    PUSH32(esp, esi); /* 0x1505A296: push esi */
    MEM32(eax) = 0x16u; /* 0x1505A297: mov dword ptr [eax], 0x16 */
    RECOMP_CALL(sub_1505A110); /* 0x1505A29D: call 0x1505a110 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x14u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x14u; /* 0x1505A2A2: add esp, 0x14 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1505A2A5: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_1505A2F5; /* 0x1505A2A7: jmp 0x1505a2f5 */
L_1505A2A9:
    PUSH32(esp, ebx); /* 0x1505A2A9: push ebx */
    ebx = MEM32(ebp + 0x10); /* 0x1505A2AA: mov ebx, dword ptr [ebp + 0x10] */
    /* test ebx, ebx */ /* 0x1505A2AD: test ebx, ebx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ebx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1505A2CD; /* 0x1505A2AF: jne 0x1505a2cd */
L_1505A2B1:
    RECOMP_CALL(sub_15036430); /* 0x1505A2B1: call 0x15036430 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, esi); /* 0x1505A2B6: push esi */
    PUSH32(esp, esi); /* 0x1505A2B7: push esi */
    PUSH32(esp, esi); /* 0x1505A2B8: push esi */
    PUSH32(esp, esi); /* 0x1505A2B9: push esi */
    PUSH32(esp, esi); /* 0x1505A2BA: push esi */
    MEM32(eax) = 0x16u; /* 0x1505A2BB: mov dword ptr [eax], 0x16 */
    RECOMP_CALL(sub_1505A110); /* 0x1505A2C1: call 0x1505a110 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x14u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x14u; /* 0x1505A2C6: add esp, 0x14 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1505A2C9: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_1505A2F4; /* 0x1505A2CB: jmp 0x1505a2f4 */
L_1505A2CD:
    PUSH32(esp, edi); /* 0x1505A2CD: push edi */
    edi = MEM32(ebp + 0xC); /* 0x1505A2CE: mov edi, dword ptr [ebp + 0xc] */
    /* test edi, edi */ /* 0x1505A2D1: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1505A2F8; /* 0x1505A2D3: jne 0x1505a2f8 */
L_1505A2D5:
    /* cmp MEM32(ebx), esi */ /* 0x1505A2D5: cmp dword ptr [ebx], esi */
    _flag_a = (uint32_t)(MEM32(ebx)); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1505A2F8; /* 0x1505A2D7: je 0x1505a2f8 */
L_1505A2D9:
    RECOMP_CALL(sub_15036430); /* 0x1505A2D9: call 0x15036430 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, esi); /* 0x1505A2DE: push esi */
    PUSH32(esp, esi); /* 0x1505A2DF: push esi */
    PUSH32(esp, esi); /* 0x1505A2E0: push esi */
    PUSH32(esp, esi); /* 0x1505A2E1: push esi */
    PUSH32(esp, esi); /* 0x1505A2E2: push esi */
    MEM32(eax) = 0x16u; /* 0x1505A2E3: mov dword ptr [eax], 0x16 */
    RECOMP_CALL(sub_1505A110); /* 0x1505A2E9: call 0x1505a110 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x14u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x14u; /* 0x1505A2EE: add esp, 0x14 */
    _flag_k = FK_ADD;
L_1505A2F1:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1505A2F1: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
L_1505A2F3:
    edi = POP32_VAL(esp); /* 0x1505A2F3: pop edi */
L_1505A2F4:
    ebx = POP32_VAL(esp); /* 0x1505A2F4: pop ebx */
L_1505A2F5:
    esi = POP32_VAL(esp); /* 0x1505A2F5: pop esi */
    ebp = POP32_VAL(esp); /* 0x1505A2F6: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1505A2F7: ret  */
L_1505A2F8:
    /* cmp MEM32(ebp + 0x14), esi */ /* 0x1505A2F8: cmp dword ptr [ebp + 0x14], esi */
    _flag_a = (uint32_t)(MEM32(ebp + 0x14)); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_BE(_flag_a, _flag_b)) goto L_1505A2D9; /* 0x1505A2FB: jbe 0x1505a2d9 */
L_1505A2FD:
    /* cmp MEM32(ebp + 0x18), esi */ /* 0x1505A2FD: cmp dword ptr [ebp + 0x18], esi */
    _flag_a = (uint32_t)(MEM32(ebp + 0x18)); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1505A2D9; /* 0x1505A300: je 0x1505a2d9 */
L_1505A302:
    ecx = MEM32(ebp + 0x18); /* 0x1505A302: mov ecx, dword ptr [ebp + 0x18] */
    RECOMP_CALL(sub_1505EB74); /* 0x1505A305: call 0x1505eb74 */
    RECOMP_FLAGS_IN();
    /* cmp MEM32(ebx), esi */ /* 0x1505A30A: cmp dword ptr [ebx], esi */
    _flag_a = (uint32_t)(MEM32(ebx)); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_BE(_flag_a, _flag_b)) goto L_1505A2F1; /* 0x1505A30C: jbe 0x1505a2f1 */
L_1505A30E:
    PUSH32(esp, edi); /* 0x1505A30E: push edi */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x1505A30F: push dword ptr [ebp + 8] */
    PUSH32(esp, MEM32(ebp + 0x1C)); /* 0x1505A312: push dword ptr [ebp + 0x1c] */
    RECOMP_ICALL(MEM32(ebp + 0x18)); /* 0x1505A315: call dword ptr [ebp + 0x18] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x1505A318: add esp, 0xc */
    _flag_k = FK_ADD;
    /* test eax, eax */ /* 0x1505A31B: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1505A329; /* 0x1505A31D: je 0x1505a329 */
L_1505A31F:
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(MEM32(ebp + 0x14));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edi = edi + MEM32(ebp + 0x14); /* 0x1505A31F: add edi, dword ptr [ebp + 0x14] */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi + 1; /* 0x1505A322: inc esi */
    _flag_k = FK_INC;
    /* cmp esi, MEM32(ebx) */ /* 0x1505A323: cmp esi, dword ptr [ebx] */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(MEM32(ebx));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_1505A30E; /* 0x1505A325: jb 0x1505a30e */
L_1505A327:
    RECOMP_BACKEDGE();
    goto L_1505A2F1; /* 0x1505A327: jmp 0x1505a2f1 */
L_1505A329:
    eax = edi; /* 0x1505A329: mov eax, edi */
    RECOMP_BACKEDGE();
    goto L_1505A2F3; /* 0x1505A32B: jmp 0x1505a2f3 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    RECOMP_REGS_OUT();
}

void sub_1505A334(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1505A334u);

L_1505A334:
    PUSH32(esp, ebx); /* 0x1505A334: push ebx */
    PUSH32(esp, esi); /* 0x1505A335: push esi */
    PUSH32(esp, edi); /* 0x1505A336: push edi */
    edx = MEM32(esp + 0x10); /* 0x1505A337: mov edx, dword ptr [esp + 0x10] */
    eax = MEM32(esp + 0x14); /* 0x1505A33B: mov eax, dword ptr [esp + 0x14] */
    ecx = MEM32(esp + 0x18); /* 0x1505A33F: mov ecx, dword ptr [esp + 0x18] */
    PUSH32(esp, ebp); /* 0x1505A343: push ebp */
    PUSH32(esp, edx); /* 0x1505A344: push edx */
    PUSH32(esp, eax); /* 0x1505A345: push eax */
    PUSH32(esp, ecx); /* 0x1505A346: push ecx */
    PUSH32(esp, ecx); /* 0x1505A347: push ecx */
    PUSH32(esp, 0x1505A3C4u); /* 0x1505A348: push 0x1505a3c4 */
    PUSH32(esp, MEM32(FS_BASE + (0))); /* 0x1505A34D: push dword ptr fs:[0] */
    eax = MEM32(0x150BD340); /* 0x1505A354: mov eax, dword ptr [0x150bd340] */
    _flag_a = (uint32_t)((eax ^ esp)); _flag_b = (uint32_t)((eax ^ esp));
    eax = eax ^ esp; /* 0x1505A359: xor eax, esp */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(esp + 0x8) = eax; /* 0x1505A35B: mov dword ptr [esp + 8], eax */
    MEM32(FS_BASE + (0)) = esp; /* 0x1505A35F: mov dword ptr fs:[0], esp */
L_1505A366:
    eax = MEM32(esp + 0x30); /* 0x1505A366: mov eax, dword ptr [esp + 0x30] */
    ebx = MEM32(eax + 0x8); /* 0x1505A36A: mov ebx, dword ptr [eax + 8] */
    ecx = MEM32(esp + 0x2C); /* 0x1505A36D: mov ecx, dword ptr [esp + 0x2c] */
    _flag_a = (uint32_t)((ebx ^ MEM32(ecx))); _flag_b = (uint32_t)((ebx ^ MEM32(ecx)));
    ebx = ebx ^ MEM32(ecx); /* 0x1505A371: xor ebx, dword ptr [ecx] */
    _cf = 0;
    _flag_k = FK_TEST;
    esi = MEM32(eax + 0xC); /* 0x1505A373: mov esi, dword ptr [eax + 0xc] */
    /* cmp esi, 0xFFFFFFFEu */ /* 0x1505A376: cmp esi, -2 */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(0xFFFFFFFEu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1505A3B6; /* 0x1505A379: je 0x1505a3b6 */
L_1505A37B:
    edx = MEM32(esp + 0x34); /* 0x1505A37B: mov edx, dword ptr [esp + 0x34] */
    /* cmp edx, 0xFFFFFFFEu */ /* 0x1505A37F: cmp edx, -2 */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(0xFFFFFFFEu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1505A388; /* 0x1505A382: je 0x1505a388 */
L_1505A384:
    /* cmp esi, edx */ /* 0x1505A384: cmp esi, edx */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_1505A3B6; /* 0x1505A386: jbe 0x1505a3b6 */
L_1505A388:
    esi = esi + esi * 2; /* 0x1505A388: lea esi, [esi + esi*2] */
    ebx = ebx + esi * 4 + 0x10; /* 0x1505A38B: lea ebx, [ebx + esi*4 + 0x10] */
    ecx = MEM32(ebx); /* 0x1505A38F: mov ecx, dword ptr [ebx] */
    MEM32(eax + 0xC) = ecx; /* 0x1505A391: mov dword ptr [eax + 0xc], ecx */
    /* cmp MEM32(ebx + 0x4), 0 */ /* 0x1505A394: cmp dword ptr [ebx + 4], 0 */
    _flag_a = (uint32_t)(MEM32(ebx + 0x4)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_NE(_flag_a, _flag_b)) goto L_1505A366; /* 0x1505A398: jne 0x1505a366 */
L_1505A39A:
    PUSH32(esp, 0x101u); /* 0x1505A39A: push 0x101 */
    eax = MEM32(ebx + 0x8); /* 0x1505A39F: mov eax, dword ptr [ebx + 8] */
    RECOMP_CALL(sub_15059685); /* 0x1505A3A2: call 0x15059685 */
    RECOMP_FLAGS_IN();
    ecx = 1; /* 0x1505A3A7: mov ecx, 1 */
    eax = MEM32(ebx + 0x8); /* 0x1505A3AC: mov eax, dword ptr [ebx + 8] */
    RECOMP_CALL(sub_150596A4); /* 0x1505A3AF: call 0x150596a4 */
    RECOMP_FLAGS_IN();
    RECOMP_BACKEDGE();
    goto L_1505A366; /* 0x1505A3B4: jmp 0x1505a366 */
L_1505A3B6:
    POP32(esp, MEM32(FS_BASE + (0))); /* 0x1505A3B6: pop dword ptr fs:[0] */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x18u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x18u; /* 0x1505A3BD: add esp, 0x18 */
    _flag_k = FK_ADD;
    edi = POP32_VAL(esp); /* 0x1505A3C0: pop edi */
    esi = POP32_VAL(esp); /* 0x1505A3C1: pop esi */
    ebx = POP32_VAL(esp); /* 0x1505A3C2: pop ebx */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1505A3C3: ret  */
    RECOMP_REGS_OUT();
}

void sub_1505A3C4(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1505A3C4u);

L_1505A3C4:
    ecx = MEM32(esp + 0x4); /* 0x1505A3C4: mov ecx, dword ptr [esp + 4] */
    /* test MEM32(ecx + 0x4), 6 */ /* 0x1505A3C8: test dword ptr [ecx + 4], 6 */
    _flag_a = (uint32_t)(MEM32(ecx + 0x4)); _flag_b = (uint32_t)(6);
    _cf = 0;
    _flag_k = FK_TEST;
    eax = 1; /* 0x1505A3CF: mov eax, 1 */
    if (TEST_Z(_flag_a, _flag_b)) goto L_1505A409; /* 0x1505A3D4: je 0x1505a409 */
L_1505A3D6:
    eax = MEM32(esp + 0x8); /* 0x1505A3D6: mov eax, dword ptr [esp + 8] */
    ecx = MEM32(eax + 0x8); /* 0x1505A3DA: mov ecx, dword ptr [eax + 8] */
    _flag_a = (uint32_t)((ecx ^ eax)); _flag_b = (uint32_t)((ecx ^ eax));
    ecx = ecx ^ eax; /* 0x1505A3DD: xor ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_1505E540); /* 0x1505A3DF: call 0x1505e540 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, ebp); /* 0x1505A3E4: push ebp */
    ebp = MEM32(eax + 0x18); /* 0x1505A3E5: mov ebp, dword ptr [eax + 0x18] */
    PUSH32(esp, MEM32(eax + 0xC)); /* 0x1505A3E8: push dword ptr [eax + 0xc] */
    PUSH32(esp, MEM32(eax + 0x10)); /* 0x1505A3EB: push dword ptr [eax + 0x10] */
    PUSH32(esp, MEM32(eax + 0x14)); /* 0x1505A3EE: push dword ptr [eax + 0x14] */
    RECOMP_CALL(sub_1505A334); /* 0x1505A3F1: call 0x1505a334 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x1505A3F6: add esp, 0xc */
    _flag_k = FK_ADD;
    ebp = POP32_VAL(esp); /* 0x1505A3F9: pop ebp */
    eax = MEM32(esp + 0x8); /* 0x1505A3FA: mov eax, dword ptr [esp + 8] */
    edx = MEM32(esp + 0x10); /* 0x1505A3FE: mov edx, dword ptr [esp + 0x10] */
    MEM32(edx) = eax; /* 0x1505A402: mov dword ptr [edx], eax */
    eax = 3; /* 0x1505A404: mov eax, 3 */
L_1505A409:
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1505A409: ret  */
    RECOMP_REGS_OUT();
}

void sub_1505A40C(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1505A40Cu);

L_1505A40C:
    PUSH32(esp, ebp); /* 0x1505A40C: push ebp */
    PUSH32(esp, MEM32(esp + 0x8)); /* 0x1505A40D: push dword ptr [esp + 8] */
    RECOMP_CALL(sub_1505EAB3); /* 0x1505A411: call 0x1505eab3 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x1505A416: add esp, 4 */
    _flag_k = FK_ADD;
    ecx = MEM32(esp + 0x8); /* 0x1505A419: mov ecx, dword ptr [esp + 8] */
    ebp = MEM32(ecx); /* 0x1505A41D: mov ebp, dword ptr [ecx] */
    PUSH32(esp, MEM32(ecx + 0x1C)); /* 0x1505A41F: push dword ptr [ecx + 0x1c] */
    PUSH32(esp, MEM32(ecx + 0x18)); /* 0x1505A422: push dword ptr [ecx + 0x18] */
    PUSH32(esp, MEM32(ecx + 0x28)); /* 0x1505A425: push dword ptr [ecx + 0x28] */
    RECOMP_CALL(sub_1505A334); /* 0x1505A428: call 0x1505a334 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x1505A42D: add esp, 0xc */
    _flag_k = FK_ADD;
    ebp = POP32_VAL(esp); /* 0x1505A430: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x1505A431: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_1505A434(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1505A434u);

L_1505A434:
    PUSH32(esp, ebp); /* 0x1505A434: push ebp */
    PUSH32(esp, esi); /* 0x1505A435: push esi */
    PUSH32(esp, edi); /* 0x1505A436: push edi */
    PUSH32(esp, ebx); /* 0x1505A437: push ebx */
    ebp = edx; /* 0x1505A438: mov ebp, edx */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1505A43A: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ebx = 0; /* 0x1505A43C: xor ebx, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edx = 0; /* 0x1505A43E: xor edx, edx */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    esi = 0; /* 0x1505A440: xor esi, esi */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edi = 0; /* 0x1505A442: xor edi, edi */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_ICALL(ecx); /* 0x1505A444: call ecx */
    RECOMP_FLAGS_IN();
    ebx = POP32_VAL(esp); /* 0x1505A446: pop ebx */
    edi = POP32_VAL(esp); /* 0x1505A447: pop edi */
    esi = POP32_VAL(esp); /* 0x1505A448: pop esi */
    ebp = POP32_VAL(esp); /* 0x1505A449: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1505A44A: ret  */
    RECOMP_REGS_OUT();
}

void sub_1505A44C(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1505A44Cu);

L_1505A44C:
    ebp = edx; /* 0x1505A44C: mov ebp, edx */
    esi = ecx; /* 0x1505A44E: mov esi, ecx */
    eax = ecx; /* 0x1505A450: mov eax, ecx */
    PUSH32(esp, 1); /* 0x1505A452: push 1 */
    RECOMP_CALL(sub_15059685); /* 0x1505A454: call 0x15059685 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1505A459: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ebx = 0; /* 0x1505A45B: xor ebx, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x1505A45D: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edx = 0; /* 0x1505A45F: xor edx, edx */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edi = 0; /* 0x1505A461: xor edi, edi */
    _cf = 0;
    _flag_k = FK_TEST;
    { _itail_tgt = (uint32_t)(esi); goto _ljump; }
    { RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_1505A468(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1505A468u);

L_1505A468:
    PUSH32(esp, ebp); /* 0x1505A468: push ebp */
    ebp = esp; /* 0x1505A469: mov ebp, esp */
    PUSH32(esp, ebx); /* 0x1505A46B: push ebx */
    PUSH32(esp, esi); /* 0x1505A46C: push esi */
    PUSH32(esp, edi); /* 0x1505A46D: push edi */
    PUSH32(esp, 0); /* 0x1505A46E: push 0 */
    PUSH32(esp, 0); /* 0x1505A470: push 0 */
    PUSH32(esp, 0x1505A47Du); /* 0x1505A472: push 0x1505a47d */
    PUSH32(esp, ecx); /* 0x1505A477: push ecx */
    RECOMP_CALL(sub_150AF768); /* 0x1505A478: call 0x150af768 */
    RECOMP_FLAGS_IN();
    edi = POP32_VAL(esp); /* 0x1505A47D: pop edi */
    esi = POP32_VAL(esp); /* 0x1505A47E: pop esi */
    ebx = POP32_VAL(esp); /* 0x1505A47F: pop ebx */
    ebp = POP32_VAL(esp); /* 0x1505A480: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1505A481: ret  */
    RECOMP_REGS_OUT();
}

void sub_1505A47D(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1505A47Du);

L_1505A47D:
    edi = POP32_VAL(esp); /* 0x1505A47D: pop edi */
    esi = POP32_VAL(esp); /* 0x1505A47E: pop esi */
    ebx = POP32_VAL(esp); /* 0x1505A47F: pop ebx */
    ebp = POP32_VAL(esp); /* 0x1505A480: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1505A481: ret  */
    RECOMP_REGS_OUT();
}

void sub_1505A484(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1505A484u);

L_1505A484:
    PUSH32(esp, ebp); /* 0x1505A484: push ebp */
    ebp = MEM32(esp + 0x8); /* 0x1505A485: mov ebp, dword ptr [esp + 8] */
    PUSH32(esp, edx); /* 0x1505A489: push edx */
    PUSH32(esp, ecx); /* 0x1505A48A: push ecx */
    PUSH32(esp, MEM32(esp + 0x14)); /* 0x1505A48B: push dword ptr [esp + 0x14] */
    RECOMP_CALL(sub_1505A334); /* 0x1505A48F: call 0x1505a334 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x1505A494: add esp, 0xc */
    _flag_k = FK_ADD;
    ebp = POP32_VAL(esp); /* 0x1505A497: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 12; { RECOMP_REGS_OUT(); return; } /* 0x1505A498: ret 8 */
    RECOMP_REGS_OUT();
}

void sub_1505A4B0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1505A4B0u);

L_1505A4B0:
    goto L_1505D970; /* 0x1505A4B0: jmp 0x1505d970 */
L_1505D970:
    edi = edi; /* 0x1505D970: mov edi, edi */
    PUSH32(esp, ebp); /* 0x1505D972: push ebp */
    ebp = esp; /* 0x1505D973: mov ebp, esp */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x1505D975: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_1505EAB3); /* 0x1505D978: call 0x1505eab3 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1505D97D: pop ecx */
    ebp = POP32_VAL(esp); /* 0x1505D97E: pop ebp */
    goto L_15061C84; /* 0x1505D97F: jmp 0x15061c84 */
L_15061C84:
    PUSH32(esp, ebp); /* 0x15061C84: push ebp */
    ebp = esp; /* 0x15061C85: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x50u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x50u; /* 0x15061C87: sub esp, 0x50 */
    _flag_k = FK_CMP;
    ebx = MEM32(esp + 0x58); /* 0x15061C8A: mov ebx, dword ptr [esp + 0x58] */
    MEM32(ebp + (-0x50)) = 0x80000026u; /* 0x15061C8E: mov dword ptr [ebp - 0x50], 0x80000026 */
    MEM32(ebp + (-0x4C)) = 0; /* 0x15061C95: mov dword ptr [ebp - 0x4c], 0 */
    MEM32(ebp + (-0x48)) = 0; /* 0x15061C9C: mov dword ptr [ebp - 0x48], 0 */
    MEM32(ebp + (-0x44)) = 0; /* 0x15061CA3: mov dword ptr [ebp - 0x44], 0 */
    MEM32(ebp + (-0x40)) = 0; /* 0x15061CAA: mov dword ptr [ebp - 0x40], 0 */
    eax = ebp + (-0x50); /* 0x15061CB1: lea eax, [ebp - 0x50] */
    ebp = MEM32(ebx); /* 0x15061CB4: mov ebp, dword ptr [ebx] */
    esi = MEM32(ebx + 0x18); /* 0x15061CB6: mov esi, dword ptr [ebx + 0x18] */
    /* cmp esi, MEM32(FS_BASE + (0)) */ /* 0x15061CB9: cmp esi, dword ptr fs:[0] */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(MEM32(FS_BASE + (0)));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_15061CD4; /* 0x15061CC0: je 0x15061cd4 */
L_15061CC2:
    PUSH32(esp, ebx); /* 0x15061CC2: push ebx */
    PUSH32(esp, esi); /* 0x15061CC3: push esi */
    PUSH32(esp, 0); /* 0x15061CC4: push 0 */
    PUSH32(esp, eax); /* 0x15061CC6: push eax */
    PUSH32(esp, 0x15061CD2u); /* 0x15061CC7: push 0x15061cd2 */
    PUSH32(esp, esi); /* 0x15061CCC: push esi */
    RECOMP_CALL(sub_150AF768); /* 0x15061CCD: call 0x150af768 */
    RECOMP_FLAGS_IN();
    esi = POP32_VAL(esp); /* 0x15061CD2: pop esi */
    ebx = POP32_VAL(esp); /* 0x15061CD3: pop ebx */
L_15061CD4:
    /* cmp esi, 0 */ /* 0x15061CD4: cmp esi, 0 */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_15061D09; /* 0x15061CD7: je 0x15061d09 */
L_15061CD9:
    eax = ebx + 0x20; /* 0x15061CD9: lea eax, [ebx + 0x20] */
    PUSH32(esp, eax); /* 0x15061CDC: push eax */
    RECOMP_CALL(sub_15061EF9); /* 0x15061CDD: call 0x15061ef9 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)((eax | eax)); _flag_b = (uint32_t)((eax | eax));
    eax = eax | eax; /* 0x15061CE2: or eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_15061CFC; /* 0x15061CE4: je 0x15061cfc */
L_15061CE6:
    eax = MEM32(ebx + 0x20); /* 0x15061CE6: mov eax, dword ptr [ebx + 0x20] */
    /* cmp eax, 0x56433230u */ /* 0x15061CE9: cmp eax, 0x56433230 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x56433230u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_15061CFC; /* 0x15061CEE: jne 0x15061cfc */
L_15061CF0:
    eax = MEM32(ebx + 0x24); /* 0x15061CF0: mov eax, dword ptr [ebx + 0x24] */
    _flag_a = (uint32_t)((eax | eax)); _flag_b = (uint32_t)((eax | eax));
    eax = eax | eax; /* 0x15061CF3: or eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_15061D09; /* 0x15061CF5: je 0x15061d09 */
L_15061CF7:
    PUSH32(esp, ebx); /* 0x15061CF7: push ebx */
    RECOMP_ICALL(eax); /* 0x15061CF8: call eax */
    RECOMP_FLAGS_IN();
    goto L_15061D09; /* 0x15061CFA: jmp 0x15061d09 */
L_15061CFC:
    eax = MEM32(ebx + 0x1C); /* 0x15061CFC: mov eax, dword ptr [ebx + 0x1c] */
    PUSH32(esp, eax); /* 0x15061CFF: push eax */
    PUSH32(esp, esi); /* 0x15061D00: push esi */
    RECOMP_CALL(sub_150595D5); /* 0x15061D01: call 0x150595d5 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 8; /* 0x15061D06: add esp, 8 */
    _flag_k = FK_ADD;
L_15061D09:
    PUSH32(esp, 0); /* 0x15061D09: push 0 */
    eax = MEM32(ebx + 0x14); /* 0x15061D0B: mov eax, dword ptr [ebx + 0x14] */
    RECOMP_CALL(sub_15059685); /* 0x15061D0E: call 0x15059685 */
    RECOMP_FLAGS_IN();
    edx = ebx; /* 0x15061D13: mov edx, ebx */
    ebx = MEM32(edx + 0x4); /* 0x15061D15: mov ebx, dword ptr [edx + 4] */
    edi = MEM32(edx + 0x8); /* 0x15061D18: mov edi, dword ptr [edx + 8] */
    esi = MEM32(edx + 0xC); /* 0x15061D1B: mov esi, dword ptr [edx + 0xc] */
    eax = MEM32(esp + 0x5C); /* 0x15061D1E: mov eax, dword ptr [esp + 0x5c] */
    /* cmp eax, 1 */ /* 0x15061D22: cmp eax, 1 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    { uint32_t _aa = eax, _ab = 0, _ac = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x15061D25: adc eax, 0 */
      eax = _aa + _ab + _ac;
      _flag_a = recomp_flags_adc(_aa, _ab, _ac); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    esp = MEM32(edx + 0x10); /* 0x15061D28: mov esp, dword ptr [edx + 0x10] */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x15061D2B: add esp, 4 */
    _flag_k = FK_ADD;
    { _itail_tgt = (uint32_t)(MEM32(edx + 0x14)); goto _ljump; }
    { RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_1505A4C0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1505A4C0u);

L_1505A4C0:
    edi = edi; /* 0x1505A4C0: mov edi, edi */
    PUSH32(esp, ebp); /* 0x1505A4C2: push ebp */
    ebp = esp; /* 0x1505A4C3: mov ebp, esp */
    SET_LO8(ecx, MEM8(ebp + 0xC)); /* 0x1505A4C5: mov cl, byte ptr [ebp + 0xc] */
    eax = MEM32(ebp + 0x8); /* 0x1505A4C8: mov eax, dword ptr [ebp + 8] */
    _flag_a = (uint32_t)(LO8(ecx)) << 24; _flag_b = (uint32_t)(0x1Fu) << 24;
    SET_LO8(ecx, LO8(ecx) & 0x1Fu); /* 0x1505A4CB: and cl, 0x1f */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    { uint32_t _rv = (eax) & 0xFFFFFFFFu, _rn = ((LO8(ecx)) & 31) % 32u; for (uint32_t _i=0;_i<_rn;_i++){ uint32_t _rb = (_rv >> 31) & 1u; _rv = ((_rv << 1) | _rb) & 0xFFFFFFFFu; _cf = _rb; } if (_rn) { _flag_a = recomp_eflags_setcf(_flag_k, _flag_a, _flag_b, _cf, _df); _flag_b = 0; _flag_k = FK_EFLAGS; } eax = _rv; } /* 0x1505A4CE: rol eax, cl */
    ebp = POP32_VAL(esp); /* 0x1505A4D0: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1505A4D1: ret  */
    RECOMP_REGS_OUT();
}

void sub_1505A4E0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1505A4E0u);

L_1505A4E0:
    edi = edi; /* 0x1505A4E0: mov edi, edi */
    PUSH32(esp, ebp); /* 0x1505A4E2: push ebp */
    ebp = esp; /* 0x1505A4E3: mov ebp, esp */
    eax = MEM32(ebp + 0x8); /* 0x1505A4E5: mov eax, dword ptr [ebp + 8] */
    edx = MEM32(ebp + 0xC); /* 0x1505A4E8: mov edx, dword ptr [ebp + 0xc] */
    PUSH32(esp, ebx); /* 0x1505A4EB: push ebx */
    ebx = MEM32(ebp + 0x10); /* 0x1505A4EC: mov ebx, dword ptr [ebp + 0x10] */
    PUSH32(esp, esi); /* 0x1505A4EF: push esi */
    PUSH32(esp, edi); /* 0x1505A4F0: push edi */
    PUSH32(esp, 0x40u); /* 0x1505A4F1: push 0x40 */
    ecx = POP32_VAL(esp); /* 0x1505A4F3: pop ecx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(0x3Fu);
    ebx = ebx & 0x3Fu; /* 0x1505A4F4: and ebx, 0x3f */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ecx = ecx - ebx; /* 0x1505A4F7: sub ecx, ebx */
    _flag_k = FK_CMP;
    RECOMP_CALL(sub_150AF5D0); /* 0x1505A4F9: call 0x150af5d0 */
    RECOMP_FLAGS_IN();
    esi = eax; /* 0x1505A4FE: mov esi, eax */
    edi = edx; /* 0x1505A500: mov edi, edx */
    eax = MEM32(ebp + 0x8); /* 0x1505A502: mov eax, dword ptr [ebp + 8] */
    ecx = ebx; /* 0x1505A505: mov ecx, ebx */
    edx = MEM32(ebp + 0xC); /* 0x1505A507: mov edx, dword ptr [ebp + 0xc] */
    RECOMP_CALL(sub_150AF5A0); /* 0x1505A50A: call 0x150af5a0 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)((eax | esi)); _flag_b = (uint32_t)((eax | esi));
    eax = eax | esi; /* 0x1505A50F: or eax, esi */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)((edx | edi)); _flag_b = (uint32_t)((edx | edi));
    edx = edx | edi; /* 0x1505A511: or edx, edi */
    _cf = 0;
    _flag_k = FK_TEST;
    edi = POP32_VAL(esp); /* 0x1505A513: pop edi */
    esi = POP32_VAL(esp); /* 0x1505A514: pop esi */
    ebx = POP32_VAL(esp); /* 0x1505A515: pop ebx */
    ebp = POP32_VAL(esp); /* 0x1505A516: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1505A517: ret  */
    RECOMP_REGS_OUT();
}

void sub_1505A520(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1505A520u);

L_1505A520:
    edi = edi; /* 0x1505A520: mov edi, edi */
    PUSH32(esp, ebp); /* 0x1505A522: push ebp */
    ebp = esp; /* 0x1505A523: mov ebp, esp */
    SET_LO8(ecx, MEM8(ebp + 0xC)); /* 0x1505A525: mov cl, byte ptr [ebp + 0xc] */
    eax = MEM32(ebp + 0x8); /* 0x1505A528: mov eax, dword ptr [ebp + 8] */
    _flag_a = (uint32_t)(LO8(ecx)) << 24; _flag_b = (uint32_t)(0x1Fu) << 24;
    SET_LO8(ecx, LO8(ecx) & 0x1Fu); /* 0x1505A52B: and cl, 0x1f */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    { uint32_t _rv = (eax) & 0xFFFFFFFFu, _rn = ((LO8(ecx)) & 31) % 32u; for (uint32_t _i=0;_i<_rn;_i++){ uint32_t _rb = _rv & 1u; _rv = ((_rv >> 1) | (_rb << 31)) & 0xFFFFFFFFu; _cf = _rb; } if (_rn) { _flag_a = recomp_eflags_setcf(_flag_k, _flag_a, _flag_b, _cf, _df); _flag_b = 0; _flag_k = FK_EFLAGS; } eax = _rv; } /* 0x1505A52E: ror eax, cl */
    ebp = POP32_VAL(esp); /* 0x1505A530: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1505A531: ret  */
    RECOMP_REGS_OUT();
}

void sub_1505A540(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1505A540u);

L_1505A540:
    edi = edi; /* 0x1505A540: mov edi, edi */
    PUSH32(esp, ebp); /* 0x1505A542: push ebp */
    ebp = esp; /* 0x1505A543: mov ebp, esp */
    eax = MEM32(ebp + 0x8); /* 0x1505A545: mov eax, dword ptr [ebp + 8] */
    edx = MEM32(ebp + 0xC); /* 0x1505A548: mov edx, dword ptr [ebp + 0xc] */
    PUSH32(esp, ebx); /* 0x1505A54B: push ebx */
    ebx = MEM32(ebp + 0x10); /* 0x1505A54C: mov ebx, dword ptr [ebp + 0x10] */
    PUSH32(esp, esi); /* 0x1505A54F: push esi */
    PUSH32(esp, edi); /* 0x1505A550: push edi */
    PUSH32(esp, 0x40u); /* 0x1505A551: push 0x40 */
    ecx = POP32_VAL(esp); /* 0x1505A553: pop ecx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(0x3Fu);
    ebx = ebx & 0x3Fu; /* 0x1505A554: and ebx, 0x3f */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ecx = ecx - ebx; /* 0x1505A557: sub ecx, ebx */
    _flag_k = FK_CMP;
    RECOMP_CALL(sub_150AF5A0); /* 0x1505A559: call 0x150af5a0 */
    RECOMP_FLAGS_IN();
    esi = eax; /* 0x1505A55E: mov esi, eax */
    edi = edx; /* 0x1505A560: mov edi, edx */
    eax = MEM32(ebp + 0x8); /* 0x1505A562: mov eax, dword ptr [ebp + 8] */
    ecx = ebx; /* 0x1505A565: mov ecx, ebx */
    edx = MEM32(ebp + 0xC); /* 0x1505A567: mov edx, dword ptr [ebp + 0xc] */
    RECOMP_CALL(sub_150AF5D0); /* 0x1505A56A: call 0x150af5d0 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)((eax | esi)); _flag_b = (uint32_t)((eax | esi));
    eax = eax | esi; /* 0x1505A56F: or eax, esi */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)((edx | edi)); _flag_b = (uint32_t)((edx | edi));
    edx = edx | edi; /* 0x1505A571: or edx, edi */
    _cf = 0;
    _flag_k = FK_TEST;
    edi = POP32_VAL(esp); /* 0x1505A573: pop edi */
    esi = POP32_VAL(esp); /* 0x1505A574: pop esi */
    ebx = POP32_VAL(esp); /* 0x1505A575: pop ebx */
    ebp = POP32_VAL(esp); /* 0x1505A576: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1505A577: ret  */
    RECOMP_REGS_OUT();
}

void sub_1505A580(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1505A580u);

L_1505A580:
    edi = edi; /* 0x1505A580: mov edi, edi */
    PUSH32(esp, ebp); /* 0x1505A582: push ebp */
    ebp = esp; /* 0x1505A583: mov ebp, esp */
    /* cmp MEM32(ebp + 0x8), 0 */ /* 0x1505A585: cmp dword ptr [ebp + 8], 0 */
    _flag_a = (uint32_t)(MEM32(ebp + 0x8)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_1505A5A9; /* 0x1505A589: jne 0x1505a5a9 */
L_1505A58B:
    RECOMP_CALL(sub_15036430); /* 0x1505A58B: call 0x15036430 */
    RECOMP_FLAGS_IN();
    MEM32(eax) = 0x16u; /* 0x1505A590: mov dword ptr [eax], 0x16 */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1505A596: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, eax); /* 0x1505A598: push eax */
    PUSH32(esp, eax); /* 0x1505A599: push eax */
    PUSH32(esp, eax); /* 0x1505A59A: push eax */
    PUSH32(esp, eax); /* 0x1505A59B: push eax */
    PUSH32(esp, eax); /* 0x1505A59C: push eax */
    RECOMP_CALL(sub_1505A110); /* 0x1505A59D: call 0x1505a110 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x14u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x14u; /* 0x1505A5A2: add esp, 0x14 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1505A5A5: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    ebp = POP32_VAL(esp); /* 0x1505A5A7: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1505A5A8: ret  */
L_1505A5A9:
    PUSH32(esp, ebx); /* 0x1505A5A9: push ebx */
    ebx = MEM32(ebp + 0x10); /* 0x1505A5AA: mov ebx, dword ptr [ebp + 0x10] */
    /* test ebx, ebx */ /* 0x1505A5AD: test ebx, ebx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ebx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1505A5CF; /* 0x1505A5AF: jne 0x1505a5cf */
L_1505A5B1:
    RECOMP_CALL(sub_15036430); /* 0x1505A5B1: call 0x15036430 */
    RECOMP_FLAGS_IN();
    MEM32(eax) = 0x16u; /* 0x1505A5B6: mov dword ptr [eax], 0x16 */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1505A5BC: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, eax); /* 0x1505A5BE: push eax */
    PUSH32(esp, eax); /* 0x1505A5BF: push eax */
    PUSH32(esp, eax); /* 0x1505A5C0: push eax */
    PUSH32(esp, eax); /* 0x1505A5C1: push eax */
    PUSH32(esp, eax); /* 0x1505A5C2: push eax */
    RECOMP_CALL(sub_1505A110); /* 0x1505A5C3: call 0x1505a110 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x14u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x14u; /* 0x1505A5C8: add esp, 0x14 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1505A5CB: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_1505A63D; /* 0x1505A5CD: jmp 0x1505a63d */
L_1505A5CF:
    PUSH32(esp, esi); /* 0x1505A5CF: push esi */
    esi = MEM32(ebp + 0xC); /* 0x1505A5D0: mov esi, dword ptr [ebp + 0xc] */
    /* test esi, esi */ /* 0x1505A5D3: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1505A5E3; /* 0x1505A5D5: je 0x1505a5e3 */
L_1505A5D7:
    /* cmp MEM32(ebp + 0x14), 0 */ /* 0x1505A5D7: cmp dword ptr [ebp + 0x14], 0 */
    _flag_a = (uint32_t)(MEM32(ebp + 0x14)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_1505A5E3; /* 0x1505A5DB: jbe 0x1505a5e3 */
L_1505A5DD:
    /* cmp MEM32(ebp + 0x18), 0 */ /* 0x1505A5DD: cmp dword ptr [ebp + 0x18], 0 */
    _flag_a = (uint32_t)(MEM32(ebp + 0x18)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_1505A601; /* 0x1505A5E1: jne 0x1505a601 */
L_1505A5E3:
    RECOMP_CALL(sub_15036430); /* 0x1505A5E3: call 0x15036430 */
    RECOMP_FLAGS_IN();
    MEM32(eax) = 0x16u; /* 0x1505A5E8: mov dword ptr [eax], 0x16 */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1505A5EE: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, eax); /* 0x1505A5F0: push eax */
    PUSH32(esp, eax); /* 0x1505A5F1: push eax */
    PUSH32(esp, eax); /* 0x1505A5F2: push eax */
    PUSH32(esp, eax); /* 0x1505A5F3: push eax */
    PUSH32(esp, eax); /* 0x1505A5F4: push eax */
    RECOMP_CALL(sub_1505A110); /* 0x1505A5F5: call 0x1505a110 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x14u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x14u; /* 0x1505A5FA: add esp, 0x14 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1505A5FD: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_1505A63C; /* 0x1505A5FF: jmp 0x1505a63c */
L_1505A601:
    ecx = MEM32(ebp + 0x18); /* 0x1505A601: mov ecx, dword ptr [ebp + 0x18] */
    PUSH32(esp, edi); /* 0x1505A604: push edi */
    RECOMP_CALL(sub_1505EB74); /* 0x1505A605: call 0x1505eb74 */
    RECOMP_FLAGS_IN();
    edi = MEM32(ebx); /* 0x1505A60A: mov edi, dword ptr [ebx] */
    edi = (uint32_t)((int32_t)edi * (int32_t)MEM32(ebp + 0x14)); /* 0x1505A60C: imul edi, dword ptr [ebp + 0x14] */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edi = edi + esi; /* 0x1505A610: add edi, esi */
    _flag_k = FK_ADD;
    goto L_1505A624; /* 0x1505A612: jmp 0x1505a624 */
L_1505A614:
    PUSH32(esp, esi); /* 0x1505A614: push esi */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x1505A615: push dword ptr [ebp + 8] */
    RECOMP_ICALL(MEM32(ebp + 0x18)); /* 0x1505A618: call dword ptr [ebp + 0x18] */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1505A61B: pop ecx */
    ecx = POP32_VAL(esp); /* 0x1505A61C: pop ecx */
    /* test eax, eax */ /* 0x1505A61D: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1505A640; /* 0x1505A61F: je 0x1505a640 */
L_1505A621:
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(MEM32(ebp + 0x14));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esi = esi + MEM32(ebp + 0x14); /* 0x1505A621: add esi, dword ptr [ebp + 0x14] */
    _flag_k = FK_ADD;
L_1505A624:
    /* cmp esi, edi */ /* 0x1505A624: cmp esi, edi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_NE(_flag_a, _flag_b)) goto L_1505A614; /* 0x1505A626: jne 0x1505a614 */
L_1505A628:
    PUSH32(esp, MEM32(ebp + 0x14)); /* 0x1505A628: push dword ptr [ebp + 0x14] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x1505A62B: push dword ptr [ebp + 8] */
    PUSH32(esp, edi); /* 0x1505A62E: push edi */
    RECOMP_CALL(sub_1508DBF0); /* 0x1505A62F: call 0x1508dbf0 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x1505A634: add esp, 0xc */
    _flag_k = FK_ADD;
    eax = edi; /* 0x1505A637: mov eax, edi */
    _flag_a = (uint32_t)(MEM32(ebx)); _flag_b = (uint32_t)(1);
    MEM32(ebx) = MEM32(ebx) + 1; /* 0x1505A639: inc dword ptr [ebx] */
    _flag_k = FK_INC;
L_1505A63B:
    edi = POP32_VAL(esp); /* 0x1505A63B: pop edi */
L_1505A63C:
    esi = POP32_VAL(esp); /* 0x1505A63C: pop esi */
L_1505A63D:
    ebx = POP32_VAL(esp); /* 0x1505A63D: pop ebx */
    ebp = POP32_VAL(esp); /* 0x1505A63E: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1505A63F: ret  */
L_1505A640:
    eax = esi; /* 0x1505A640: mov eax, esi */
    RECOMP_BACKEDGE();
    goto L_1505A63B; /* 0x1505A642: jmp 0x1505a63b */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    RECOMP_REGS_OUT();
}

void sub_1505A650(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1505A650u);

L_1505A650:
    edi = edi; /* 0x1505A650: mov edi, edi */
    PUSH32(esp, ebp); /* 0x1505A652: push ebp */
    ebp = esp; /* 0x1505A653: mov ebp, esp */
    /* cmp MEM32(ebp + 0x8), 0 */ /* 0x1505A655: cmp dword ptr [ebp + 8], 0 */
    _flag_a = (uint32_t)(MEM32(ebp + 0x8)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_1505A679; /* 0x1505A659: jne 0x1505a679 */
L_1505A65B:
    RECOMP_CALL(sub_15036430); /* 0x1505A65B: call 0x15036430 */
    RECOMP_FLAGS_IN();
    MEM32(eax) = 0x16u; /* 0x1505A660: mov dword ptr [eax], 0x16 */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1505A666: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, eax); /* 0x1505A668: push eax */
    PUSH32(esp, eax); /* 0x1505A669: push eax */
    PUSH32(esp, eax); /* 0x1505A66A: push eax */
    PUSH32(esp, eax); /* 0x1505A66B: push eax */
    PUSH32(esp, eax); /* 0x1505A66C: push eax */
    RECOMP_CALL(sub_1505A110); /* 0x1505A66D: call 0x1505a110 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x14u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x14u; /* 0x1505A672: add esp, 0x14 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1505A675: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    ebp = POP32_VAL(esp); /* 0x1505A677: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1505A678: ret  */
L_1505A679:
    PUSH32(esp, ebx); /* 0x1505A679: push ebx */
    ebx = MEM32(ebp + 0x10); /* 0x1505A67A: mov ebx, dword ptr [ebp + 0x10] */
    /* test ebx, ebx */ /* 0x1505A67D: test ebx, ebx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ebx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1505A69F; /* 0x1505A67F: jne 0x1505a69f */
L_1505A681:
    RECOMP_CALL(sub_15036430); /* 0x1505A681: call 0x15036430 */
    RECOMP_FLAGS_IN();
    MEM32(eax) = 0x16u; /* 0x1505A686: mov dword ptr [eax], 0x16 */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1505A68C: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, eax); /* 0x1505A68E: push eax */
    PUSH32(esp, eax); /* 0x1505A68F: push eax */
    PUSH32(esp, eax); /* 0x1505A690: push eax */
    PUSH32(esp, eax); /* 0x1505A691: push eax */
    PUSH32(esp, eax); /* 0x1505A692: push eax */
    RECOMP_CALL(sub_1505A110); /* 0x1505A693: call 0x1505a110 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x14u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x14u; /* 0x1505A698: add esp, 0x14 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1505A69B: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_1505A711; /* 0x1505A69D: jmp 0x1505a711 */
L_1505A69F:
    PUSH32(esp, esi); /* 0x1505A69F: push esi */
    esi = MEM32(ebp + 0xC); /* 0x1505A6A0: mov esi, dword ptr [ebp + 0xc] */
    /* test esi, esi */ /* 0x1505A6A3: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1505A6B3; /* 0x1505A6A5: je 0x1505a6b3 */
L_1505A6A7:
    /* cmp MEM32(ebp + 0x14), 0 */ /* 0x1505A6A7: cmp dword ptr [ebp + 0x14], 0 */
    _flag_a = (uint32_t)(MEM32(ebp + 0x14)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_1505A6B3; /* 0x1505A6AB: jbe 0x1505a6b3 */
L_1505A6AD:
    /* cmp MEM32(ebp + 0x18), 0 */ /* 0x1505A6AD: cmp dword ptr [ebp + 0x18], 0 */
    _flag_a = (uint32_t)(MEM32(ebp + 0x18)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_1505A6D1; /* 0x1505A6B1: jne 0x1505a6d1 */
L_1505A6B3:
    RECOMP_CALL(sub_15036430); /* 0x1505A6B3: call 0x15036430 */
    RECOMP_FLAGS_IN();
    MEM32(eax) = 0x16u; /* 0x1505A6B8: mov dword ptr [eax], 0x16 */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1505A6BE: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, eax); /* 0x1505A6C0: push eax */
    PUSH32(esp, eax); /* 0x1505A6C1: push eax */
    PUSH32(esp, eax); /* 0x1505A6C2: push eax */
    PUSH32(esp, eax); /* 0x1505A6C3: push eax */
    PUSH32(esp, eax); /* 0x1505A6C4: push eax */
    RECOMP_CALL(sub_1505A110); /* 0x1505A6C5: call 0x1505a110 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x14u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x14u; /* 0x1505A6CA: add esp, 0x14 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1505A6CD: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_1505A710; /* 0x1505A6CF: jmp 0x1505a710 */
L_1505A6D1:
    ecx = MEM32(ebp + 0x18); /* 0x1505A6D1: mov ecx, dword ptr [ebp + 0x18] */
    PUSH32(esp, edi); /* 0x1505A6D4: push edi */
    RECOMP_CALL(sub_1505EB74); /* 0x1505A6D5: call 0x1505eb74 */
    RECOMP_FLAGS_IN();
    edi = MEM32(ebx); /* 0x1505A6DA: mov edi, dword ptr [ebx] */
    edi = (uint32_t)((int32_t)edi * (int32_t)MEM32(ebp + 0x14)); /* 0x1505A6DC: imul edi, dword ptr [ebp + 0x14] */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edi = edi + esi; /* 0x1505A6E0: add edi, esi */
    _flag_k = FK_ADD;
    goto L_1505A6F8; /* 0x1505A6E2: jmp 0x1505a6f8 */
L_1505A6E4:
    PUSH32(esp, esi); /* 0x1505A6E4: push esi */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x1505A6E5: push dword ptr [ebp + 8] */
    PUSH32(esp, MEM32(ebp + 0x1C)); /* 0x1505A6E8: push dword ptr [ebp + 0x1c] */
    RECOMP_ICALL(MEM32(ebp + 0x18)); /* 0x1505A6EB: call dword ptr [ebp + 0x18] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x1505A6EE: add esp, 0xc */
    _flag_k = FK_ADD;
    /* test eax, eax */ /* 0x1505A6F1: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1505A714; /* 0x1505A6F3: je 0x1505a714 */
L_1505A6F5:
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(MEM32(ebp + 0x14));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esi = esi + MEM32(ebp + 0x14); /* 0x1505A6F5: add esi, dword ptr [ebp + 0x14] */
    _flag_k = FK_ADD;
L_1505A6F8:
    /* cmp esi, edi */ /* 0x1505A6F8: cmp esi, edi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_NE(_flag_a, _flag_b)) goto L_1505A6E4; /* 0x1505A6FA: jne 0x1505a6e4 */
L_1505A6FC:
    PUSH32(esp, MEM32(ebp + 0x14)); /* 0x1505A6FC: push dword ptr [ebp + 0x14] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x1505A6FF: push dword ptr [ebp + 8] */
    PUSH32(esp, edi); /* 0x1505A702: push edi */
    RECOMP_CALL(sub_1508DBF0); /* 0x1505A703: call 0x1508dbf0 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x1505A708: add esp, 0xc */
    _flag_k = FK_ADD;
    eax = edi; /* 0x1505A70B: mov eax, edi */
    _flag_a = (uint32_t)(MEM32(ebx)); _flag_b = (uint32_t)(1);
    MEM32(ebx) = MEM32(ebx) + 1; /* 0x1505A70D: inc dword ptr [ebx] */
    _flag_k = FK_INC;
L_1505A70F:
    edi = POP32_VAL(esp); /* 0x1505A70F: pop edi */
L_1505A710:
    esi = POP32_VAL(esp); /* 0x1505A710: pop esi */
L_1505A711:
    ebx = POP32_VAL(esp); /* 0x1505A711: pop ebx */
    ebp = POP32_VAL(esp); /* 0x1505A712: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1505A713: ret  */
L_1505A714:
    eax = esi; /* 0x1505A714: mov eax, esi */
    RECOMP_BACKEDGE();
    goto L_1505A70F; /* 0x1505A716: jmp 0x1505a70f */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    RECOMP_REGS_OUT();
}

void sub_1505A720(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1505A720u);

L_1505A720:
    edi = edi; /* 0x1505A720: mov edi, edi */
    PUSH32(esp, ebp); /* 0x1505A722: push ebp */
    ebp = esp; /* 0x1505A723: mov ebp, esp */
    PUSH32(esp, MEM32(ebp + 0x18)); /* 0x1505A725: push dword ptr [ebp + 0x18] */
    PUSH32(esp, MEM32(ebp + 0x14)); /* 0x1505A728: push dword ptr [ebp + 0x14] */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x1505A72B: push dword ptr [ebp + 0x10] */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x1505A72E: push dword ptr [ebp + 0xc] */
    PUSH32(esp, 0xFFFFFFFFu); /* 0x1505A731: push -1 */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x1505A733: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_1505A750); /* 0x1505A736: call 0x1505a750 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x18u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x18u; /* 0x1505A73B: add esp, 0x18 */
    _flag_k = FK_ADD;
    ebp = POP32_VAL(esp); /* 0x1505A73E: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1505A73F: ret  */
    RECOMP_REGS_OUT();
}

void sub_1505A750(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1505A750u);

L_1505A750:
    edi = edi; /* 0x1505A750: mov edi, edi */
    PUSH32(esp, ebp); /* 0x1505A752: push ebp */
    ebp = esp; /* 0x1505A753: mov ebp, esp */
    eax = MEM32(ebp + 0x8); /* 0x1505A755: mov eax, dword ptr [ebp + 8] */
    PUSH32(esp, ebx); /* 0x1505A758: push ebx */
    PUSH32(esp, esi); /* 0x1505A759: push esi */
    PUSH32(esp, edi); /* 0x1505A75A: push edi */
    /* test eax, eax */ /* 0x1505A75B: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1505A831; /* 0x1505A75D: je 0x1505a831 */
L_1505A763:
    /* cmp MEM32(ebp + 0xC), 0 */ /* 0x1505A763: cmp dword ptr [ebp + 0xc], 0 */
    _flag_a = (uint32_t)(MEM32(ebp + 0xC)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_1505A831; /* 0x1505A767: jbe 0x1505a831 */
L_1505A76D:
    ecx = MEM32(ebp + 0x10); /* 0x1505A76D: mov ecx, dword ptr [ebp + 0x10] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ebx = 0; /* 0x1505A770: xor ebx, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
    edi = ebx; /* 0x1505A772: mov edi, ebx */
    esi = eax; /* 0x1505A774: mov esi, eax */
    /* test ecx, ecx */ /* 0x1505A776: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1505A795; /* 0x1505A778: je 0x1505a795 */
L_1505A77A:
    SET_LO8(ecx, MEM8(ecx)); /* 0x1505A77A: mov cl, byte ptr [ecx] */
    /* test LO8(ecx), LO8(ecx) */ /* 0x1505A77C: test cl, cl */
    _flag_a = (uint32_t)(LO8(ecx)) << 24; _flag_b = (uint32_t)(LO8(ecx)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_1505A795; /* 0x1505A77E: je 0x1505a795 */
L_1505A780:
    PUSH32(esp, 2); /* 0x1505A780: push 2 */
    edi = POP32_VAL(esp); /* 0x1505A782: pop edi */
    /* cmp MEM32(ebp + 0xC), edi */ /* 0x1505A783: cmp dword ptr [ebp + 0xc], edi */
    _flag_a = (uint32_t)(MEM32(ebp + 0xC)); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_1505A81D; /* 0x1505A786: jbe 0x1505a81d */
L_1505A78C:
    esi = eax + 0x1; /* 0x1505A78C: lea esi, [eax + 1] */
    MEM8(eax) = (uint8_t)(LO8(ecx)); /* 0x1505A78F: mov byte ptr [eax], cl */
    MEM8(esi) = (uint8_t)(0x3Au); /* 0x1505A791: mov byte ptr [esi], 0x3a */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi + 1; /* 0x1505A794: inc esi */
    _flag_k = FK_INC;
L_1505A795:
    edx = MEM32(ebp + 0x14); /* 0x1505A795: mov edx, dword ptr [ebp + 0x14] */
    ecx = edx; /* 0x1505A798: mov ecx, edx */
    /* test edx, edx */ /* 0x1505A79A: test edx, edx */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(edx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1505A7CF; /* 0x1505A79C: je 0x1505a7cf */
L_1505A79E:
    /* cmp MEM8(edx), LO8(ebx) */ /* 0x1505A79E: cmp byte ptr [edx], bl */
    _flag_a = (uint32_t)(MEM8(edx)) << 24; _flag_b = (uint32_t)(LO8(ebx)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1505A7CF; /* 0x1505A7A0: je 0x1505a7cf */
L_1505A7A2:
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(1);
    edi = edi + 1; /* 0x1505A7A2: inc edi */
    _flag_k = FK_INC;
    /* cmp edi, MEM32(ebp + 0xC) */ /* 0x1505A7A3: cmp edi, dword ptr [ebp + 0xc] */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(MEM32(ebp + 0xC));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_AE(_flag_a, _flag_b)) goto L_1505A81D; /* 0x1505A7A6: jae 0x1505a81d */
L_1505A7A8:
    SET_LO8(eax, MEM8(ecx)); /* 0x1505A7A8: mov al, byte ptr [ecx] */
    MEM8(esi) = (uint8_t)(LO8(eax)); /* 0x1505A7AA: mov byte ptr [esi], al */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi + 1; /* 0x1505A7AC: inc esi */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx + 1; /* 0x1505A7AD: inc ecx */
    _flag_k = FK_INC;
    /* cmp MEM8(ecx), LO8(ebx) */ /* 0x1505A7AE: cmp byte ptr [ecx], bl */
    _flag_a = (uint32_t)(MEM8(ecx)) << 24; _flag_b = (uint32_t)(LO8(ebx)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    RECOMP_BACKEDGE();
    if (CMP_NE(_flag_a, _flag_b)) goto L_1505A7A2; /* 0x1505A7B0: jne 0x1505a7a2 */
L_1505A7B2:
    PUSH32(esp, ecx); /* 0x1505A7B2: push ecx */
    PUSH32(esp, edx); /* 0x1505A7B3: push edx */
    RECOMP_CALL(sub_15052570); /* 0x1505A7B4: call 0x15052570 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1505A7B9: pop ecx */
    ecx = POP32_VAL(esp); /* 0x1505A7BA: pop ecx */
    SET_LO8(eax, MEM8(eax)); /* 0x1505A7BB: mov al, byte ptr [eax] */
    /* cmp LO8(eax), 0x2Fu */ /* 0x1505A7BD: cmp al, 0x2f */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(0x2Fu) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1505A7CF; /* 0x1505A7BF: je 0x1505a7cf */
L_1505A7C1:
    /* cmp LO8(eax), 0x5Cu */ /* 0x1505A7C1: cmp al, 0x5c */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(0x5Cu) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1505A7CF; /* 0x1505A7C3: je 0x1505a7cf */
L_1505A7C5:
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(1);
    edi = edi + 1; /* 0x1505A7C5: inc edi */
    _flag_k = FK_INC;
    /* cmp edi, MEM32(ebp + 0xC) */ /* 0x1505A7C6: cmp edi, dword ptr [ebp + 0xc] */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(MEM32(ebp + 0xC));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_AE(_flag_a, _flag_b)) goto L_1505A81D; /* 0x1505A7C9: jae 0x1505a81d */
L_1505A7CB:
    MEM8(esi) = (uint8_t)(0x5Cu); /* 0x1505A7CB: mov byte ptr [esi], 0x5c */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi + 1; /* 0x1505A7CE: inc esi */
    _flag_k = FK_INC;
L_1505A7CF:
    ecx = MEM32(ebp + 0x18); /* 0x1505A7CF: mov ecx, dword ptr [ebp + 0x18] */
    /* test ecx, ecx */ /* 0x1505A7D2: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1505A7E8; /* 0x1505A7D4: je 0x1505a7e8 */
L_1505A7D6:
    goto L_1505A7E4; /* 0x1505A7D6: jmp 0x1505a7e4 */
L_1505A7D8:
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(1);
    edi = edi + 1; /* 0x1505A7D8: inc edi */
    _flag_k = FK_INC;
    /* cmp edi, MEM32(ebp + 0xC) */ /* 0x1505A7D9: cmp edi, dword ptr [ebp + 0xc] */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(MEM32(ebp + 0xC));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_AE(_flag_a, _flag_b)) goto L_1505A81D; /* 0x1505A7DC: jae 0x1505a81d */
L_1505A7DE:
    SET_LO8(eax, MEM8(ecx)); /* 0x1505A7DE: mov al, byte ptr [ecx] */
    MEM8(esi) = (uint8_t)(LO8(eax)); /* 0x1505A7E0: mov byte ptr [esi], al */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi + 1; /* 0x1505A7E2: inc esi */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx + 1; /* 0x1505A7E3: inc ecx */
    _flag_k = FK_INC;
L_1505A7E4:
    /* cmp MEM8(ecx), LO8(ebx) */ /* 0x1505A7E4: cmp byte ptr [ecx], bl */
    _flag_a = (uint32_t)(MEM8(ecx)) << 24; _flag_b = (uint32_t)(LO8(ebx)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    RECOMP_BACKEDGE();
    if (CMP_NE(_flag_a, _flag_b)) goto L_1505A7D8; /* 0x1505A7E6: jne 0x1505a7d8 */
L_1505A7E8:
    ecx = MEM32(ebp + 0x1C); /* 0x1505A7E8: mov ecx, dword ptr [ebp + 0x1c] */
    /* test ecx, ecx */ /* 0x1505A7EB: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1505A815; /* 0x1505A7ED: je 0x1505a815 */
L_1505A7EF:
    SET_LO8(eax, MEM8(ecx)); /* 0x1505A7EF: mov al, byte ptr [ecx] */
    /* test LO8(eax), LO8(eax) */ /* 0x1505A7F1: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_1505A811; /* 0x1505A7F3: je 0x1505a811 */
L_1505A7F5:
    /* cmp LO8(eax), 0x2Eu */ /* 0x1505A7F5: cmp al, 0x2e */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(0x2Eu) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1505A811; /* 0x1505A7F7: je 0x1505a811 */
L_1505A7F9:
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(1);
    edi = edi + 1; /* 0x1505A7F9: inc edi */
    _flag_k = FK_INC;
    /* cmp edi, MEM32(ebp + 0xC) */ /* 0x1505A7FA: cmp edi, dword ptr [ebp + 0xc] */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(MEM32(ebp + 0xC));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_AE(_flag_a, _flag_b)) goto L_1505A81D; /* 0x1505A7FD: jae 0x1505a81d */
L_1505A7FF:
    MEM8(esi) = (uint8_t)(0x2Eu); /* 0x1505A7FF: mov byte ptr [esi], 0x2e */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi + 1; /* 0x1505A802: inc esi */
    _flag_k = FK_INC;
    goto L_1505A811; /* 0x1505A803: jmp 0x1505a811 */
L_1505A805:
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(1);
    edi = edi + 1; /* 0x1505A805: inc edi */
    _flag_k = FK_INC;
    /* cmp edi, MEM32(ebp + 0xC) */ /* 0x1505A806: cmp edi, dword ptr [ebp + 0xc] */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(MEM32(ebp + 0xC));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_AE(_flag_a, _flag_b)) goto L_1505A81D; /* 0x1505A809: jae 0x1505a81d */
L_1505A80B:
    SET_LO8(eax, MEM8(ecx)); /* 0x1505A80B: mov al, byte ptr [ecx] */
    MEM8(esi) = (uint8_t)(LO8(eax)); /* 0x1505A80D: mov byte ptr [esi], al */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi + 1; /* 0x1505A80F: inc esi */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx + 1; /* 0x1505A810: inc ecx */
    _flag_k = FK_INC;
L_1505A811:
    /* cmp MEM8(ecx), LO8(ebx) */ /* 0x1505A811: cmp byte ptr [ecx], bl */
    _flag_a = (uint32_t)(MEM8(ecx)) << 24; _flag_b = (uint32_t)(LO8(ebx)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    RECOMP_BACKEDGE();
    if (CMP_NE(_flag_a, _flag_b)) goto L_1505A805; /* 0x1505A813: jne 0x1505a805 */
L_1505A815:
    eax = edi + 0x1; /* 0x1505A815: lea eax, [edi + 1] */
    /* cmp eax, MEM32(ebp + 0xC) */ /* 0x1505A818: cmp eax, dword ptr [ebp + 0xc] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(ebp + 0xC));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_1505A82B; /* 0x1505A81B: jbe 0x1505a82b */
L_1505A81D:
    eax = MEM32(ebp + 0x8); /* 0x1505A81D: mov eax, dword ptr [ebp + 8] */
    MEM8(eax) = (uint8_t)(LO8(ebx)); /* 0x1505A820: mov byte ptr [eax], bl */
    RECOMP_CALL(sub_15036430); /* 0x1505A822: call 0x15036430 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0x22u); /* 0x1505A827: push 0x22 */
    goto L_1505A83A; /* 0x1505A829: jmp 0x1505a83a */
L_1505A82B:
    MEM8(esi) = (uint8_t)(LO8(ebx)); /* 0x1505A82B: mov byte ptr [esi], bl */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1505A82D: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_1505A84C; /* 0x1505A82F: jmp 0x1505a84c */
L_1505A831:
    RECOMP_CALL(sub_15036430); /* 0x1505A831: call 0x15036430 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0x16u); /* 0x1505A836: push 0x16 */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ebx = 0; /* 0x1505A838: xor ebx, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
L_1505A83A:
    esi = POP32_VAL(esp); /* 0x1505A83A: pop esi */
    PUSH32(esp, ebx); /* 0x1505A83B: push ebx */
    PUSH32(esp, ebx); /* 0x1505A83C: push ebx */
    PUSH32(esp, ebx); /* 0x1505A83D: push ebx */
    PUSH32(esp, ebx); /* 0x1505A83E: push ebx */
    PUSH32(esp, ebx); /* 0x1505A83F: push ebx */
    MEM32(eax) = esi; /* 0x1505A840: mov dword ptr [eax], esi */
    RECOMP_CALL(sub_1505A110); /* 0x1505A842: call 0x1505a110 */
    RECOMP_FLAGS_IN();
    eax = esi; /* 0x1505A847: mov eax, esi */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x14u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x14u; /* 0x1505A849: add esp, 0x14 */
    _flag_k = FK_ADD;
L_1505A84C:
    edi = POP32_VAL(esp); /* 0x1505A84C: pop edi */
    esi = POP32_VAL(esp); /* 0x1505A84D: pop esi */
    ebx = POP32_VAL(esp); /* 0x1505A84E: pop ebx */
    ebp = POP32_VAL(esp); /* 0x1505A84F: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1505A850: ret  */
    RECOMP_REGS_OUT();
}

void sub_1505A860(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1505A860u);

L_1505A860:
    PUSH32(esp, 0); /* 0x1505A860: push 0 */
    PUSH32(esp, 0); /* 0x1505A862: push 0 */
    PUSH32(esp, 1); /* 0x1505A864: push 1 */
    PUSH32(esp, 0xC0000002u); /* 0x1505A866: push 0xc0000002 */
    RECOMP_ICALL(MEM32(0x150C005C)); /* 0x1505A86B: call dword ptr [0x150c005c] */
    RECOMP_FLAGS_IN();
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1505A871: ret  */
    RECOMP_REGS_OUT();
}

void sub_1505A880(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1505A880u);

L_1505A880:
    PUSH32(esp, 0xCu); /* 0x1505A880: push 0xc */
    PUSH32(esp, 0x150B0B68u); /* 0x1505A882: push 0x150b0b68 */
    RECOMP_CALL(sub_1505E988); /* 0x1505A887: call 0x1505e988 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 7); /* 0x1505A88C: push 7 */
    RECOMP_CALL(sub_15068D80); /* 0x1505A88E: call 0x15068d80 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1505A893: pop ecx */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x4))); _flag_b = (uint32_t)(0);
    MEM32(ebp + (-0x4)) = MEM32(ebp + (-0x4)) & 0; /* 0x1505A894: and dword ptr [ebp - 4], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, 0); /* 0x1505A898: push 0 */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x1505A89A: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_1505A8D9); /* 0x1505A89D: call 0x1505a8d9 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1505A8A2: pop ecx */
    ecx = POP32_VAL(esp); /* 0x1505A8A3: pop ecx */
    esi = eax; /* 0x1505A8A4: mov esi, eax */
    MEM32(ebp + (-0x1C)) = esi; /* 0x1505A8A6: mov dword ptr [ebp - 0x1c], esi */
    MEM32(ebp + (-0x4)) = 0xFFFFFFFEu; /* 0x1505A8A9: mov dword ptr [ebp - 4], 0xfffffffe */
    RECOMP_CALL(sub_1505A8CA); /* 0x1505A8B0: call 0x1505a8ca */
    RECOMP_FLAGS_IN();
    eax = esi; /* 0x1505A8B5: mov eax, esi */
    ecx = MEM32(ebp + (-0x10)); /* 0x1505A8B7: mov ecx, dword ptr [ebp - 0x10] */
    MEM32(FS_BASE + (0)) = ecx; /* 0x1505A8BA: mov dword ptr fs:[0], ecx */
    ecx = POP32_VAL(esp); /* 0x1505A8C1: pop ecx */
    edi = POP32_VAL(esp); /* 0x1505A8C2: pop edi */
    esi = POP32_VAL(esp); /* 0x1505A8C3: pop esi */
    ebx = POP32_VAL(esp); /* 0x1505A8C4: pop ebx */
    esp = ebp; ebp = POP32_VAL(esp); /* 0x1505A8C5: leave  */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1505A8C6: ret  */
    RECOMP_REGS_OUT();
}

void sub_1505A8CA(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1505A8CAu);

L_1505A8CA:
    PUSH32(esp, 7); /* 0x1505A8CA: push 7 */
    RECOMP_CALL(sub_15068F50); /* 0x1505A8CC: call 0x15068f50 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1505A8D1: pop ecx */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1505A8D2: ret  */
    RECOMP_REGS_OUT();
}

void sub_1505A8D9(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1505A8D9u);

L_1505A8D9:
    edi = edi; /* 0x1505A8D9: mov edi, edi */
    PUSH32(esp, ebp); /* 0x1505A8DB: push ebp */
    ebp = esp; /* 0x1505A8DC: mov ebp, esp */
    PUSH32(esp, ecx); /* 0x1505A8DE: push ecx */
    PUSH32(esp, ecx); /* 0x1505A8DF: push ecx */
    PUSH32(esp, esi); /* 0x1505A8E0: push esi */
    PUSH32(esp, edi); /* 0x1505A8E1: push edi */
    edi = MEM32(ebp + 0x8); /* 0x1505A8E2: mov edi, dword ptr [ebp + 8] */
    /* test edi, edi */ /* 0x1505A8E5: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1505A90B; /* 0x1505A8E7: jne 0x1505a90b */
L_1505A8E9:
    RECOMP_CALL(sub_15036430); /* 0x1505A8E9: call 0x15036430 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    esi = 0; /* 0x1505A8EE: xor esi, esi */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, esi); /* 0x1505A8F0: push esi */
    PUSH32(esp, esi); /* 0x1505A8F1: push esi */
    PUSH32(esp, esi); /* 0x1505A8F2: push esi */
    PUSH32(esp, esi); /* 0x1505A8F3: push esi */
    PUSH32(esp, esi); /* 0x1505A8F4: push esi */
    MEM32(eax) = 0x16u; /* 0x1505A8F5: mov dword ptr [eax], 0x16 */
    RECOMP_CALL(sub_1505A110); /* 0x1505A8FB: call 0x1505a110 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x14u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x14u; /* 0x1505A900: add esp, 0x14 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)((eax | 0xFFFFFFFFu)); _flag_b = (uint32_t)((eax | 0xFFFFFFFFu));
    eax = eax | 0xFFFFFFFFu; /* 0x1505A903: or eax, 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_1505AAE2; /* 0x1505A906: jmp 0x1505aae2 */
L_1505A90B:
    PUSH32(esp, ebx); /* 0x1505A90B: push ebx */
    ebx = MEM32(ebp + 0xC); /* 0x1505A90C: mov ebx, dword ptr [ebp + 0xc] */
    /* test ebx, ebx */ /* 0x1505A90F: test ebx, ebx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ebx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1505A950; /* 0x1505A911: jne 0x1505a950 */
L_1505A913:
    PUSH32(esp, 0x3Du); /* 0x1505A913: push 0x3d */
    PUSH32(esp, edi); /* 0x1505A915: push edi */
    RECOMP_CALL(sub_15051F70); /* 0x1505A916: call 0x15051f70 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1505A91B: pop ecx */
    ecx = POP32_VAL(esp); /* 0x1505A91C: pop ecx */
    ecx = edi; /* 0x1505A91D: mov ecx, edi */
    edx = ecx + 0x1; /* 0x1505A91F: lea edx, [ecx + 1] */
L_1505A922:
    SET_LO8(eax, MEM8(ecx)); /* 0x1505A922: mov al, byte ptr [ecx] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx + 1; /* 0x1505A924: inc ecx */
    _flag_k = FK_INC;
    /* test LO8(eax), LO8(eax) */ /* 0x1505A925: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1505A922; /* 0x1505A927: jne 0x1505a922 */
L_1505A929:
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ecx = ecx - edx; /* 0x1505A929: sub ecx, edx */
    _flag_k = FK_CMP;
    PUSH32(esp, 1); /* 0x1505A92B: push 1 */
    esi = ecx + 0x1; /* 0x1505A92D: lea esi, [ecx + 1] */
    PUSH32(esp, esi); /* 0x1505A930: push esi */
    RECOMP_CALL(sub_15048EE2); /* 0x1505A931: call 0x15048ee2 */
    RECOMP_FLAGS_IN();
    MEM32(ebp + (-0x8)) = eax; /* 0x1505A936: mov dword ptr [ebp - 8], eax */
    ecx = POP32_VAL(esp); /* 0x1505A939: pop ecx */
    ecx = POP32_VAL(esp); /* 0x1505A93A: pop ecx */
    /* test eax, eax */ /* 0x1505A93B: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1505AADE; /* 0x1505A93D: je 0x1505aade */
L_1505A943:
    PUSH32(esp, edi); /* 0x1505A943: push edi */
    PUSH32(esp, esi); /* 0x1505A944: push esi */
    PUSH32(esp, eax); /* 0x1505A945: push eax */
    RECOMP_CALL(sub_1508E640); /* 0x1505A946: call 0x1508e640 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x1505A94B: add esp, 0xc */
    _flag_k = FK_ADD;
    goto L_1505A9BD; /* 0x1505A94E: jmp 0x1505a9bd */
L_1505A950:
    esi = edi; /* 0x1505A950: mov esi, edi */
    ecx = esi + 0x1; /* 0x1505A952: lea ecx, [esi + 1] */
L_1505A955:
    SET_LO8(eax, MEM8(esi)); /* 0x1505A955: mov al, byte ptr [esi] */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi + 1; /* 0x1505A957: inc esi */
    _flag_k = FK_INC;
    /* test LO8(eax), LO8(eax) */ /* 0x1505A958: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1505A955; /* 0x1505A95A: jne 0x1505a955 */
L_1505A95C:
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esi = esi - ecx; /* 0x1505A95C: sub esi, ecx */
    _flag_k = FK_CMP;
    ecx = ebx; /* 0x1505A95E: mov ecx, ebx */
    edx = ecx + 0x1; /* 0x1505A960: lea edx, [ecx + 1] */
L_1505A963:
    SET_LO8(eax, MEM8(ecx)); /* 0x1505A963: mov al, byte ptr [ecx] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx + 1; /* 0x1505A965: inc ecx */
    _flag_k = FK_INC;
    /* test LO8(eax), LO8(eax) */ /* 0x1505A966: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1505A963; /* 0x1505A968: jne 0x1505a963 */
L_1505A96A:
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ecx = ecx - edx; /* 0x1505A96A: sub ecx, edx */
    _flag_k = FK_CMP;
    edx = esi + 0x1; /* 0x1505A96C: lea edx, [esi + 1] */
    eax = ecx + 0x1; /* 0x1505A96F: lea eax, [ecx + 1] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + edx; /* 0x1505A972: add eax, edx */
    _flag_k = FK_ADD;
    MEM32(ebp + (-0x4)) = eax; /* 0x1505A974: mov dword ptr [ebp - 4], eax */
    /* cmp eax, edx */ /* 0x1505A977: cmp eax, edx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_B(_flag_a, _flag_b)) goto L_1505AAC4; /* 0x1505A979: jb 0x1505aac4 */
L_1505A97F:
    PUSH32(esp, 1); /* 0x1505A97F: push 1 */
    PUSH32(esp, eax); /* 0x1505A981: push eax */
    RECOMP_CALL(sub_15048EE2); /* 0x1505A982: call 0x15048ee2 */
    RECOMP_FLAGS_IN();
    MEM32(ebp + (-0x8)) = eax; /* 0x1505A987: mov dword ptr [ebp - 8], eax */
    ecx = POP32_VAL(esp); /* 0x1505A98A: pop ecx */
    ecx = POP32_VAL(esp); /* 0x1505A98B: pop ecx */
    /* test eax, eax */ /* 0x1505A98C: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1505AADE; /* 0x1505A98E: je 0x1505aade */
L_1505A994:
    PUSH32(esp, edi); /* 0x1505A994: push edi */
    PUSH32(esp, MEM32(ebp + (-0x4))); /* 0x1505A995: push dword ptr [ebp - 4] */
    PUSH32(esp, eax); /* 0x1505A998: push eax */
    RECOMP_CALL(sub_1508E640); /* 0x1505A999: call 0x1508e640 */
    RECOMP_FLAGS_IN();
    eax = MEM32(ebp + (-0x8)); /* 0x1505A99E: mov eax, dword ptr [ebp - 8] */
    ecx = esi + 0x1; /* 0x1505A9A1: lea ecx, [esi + 1] */
    PUSH32(esp, ebx); /* 0x1505A9A4: push ebx */
    MEM8(esi + eax) = (uint8_t)(0x3Du); /* 0x1505A9A5: mov byte ptr [esi + eax], 0x3d */
    eax = MEM32(ebp + (-0x4)); /* 0x1505A9A9: mov eax, dword ptr [ebp - 4] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - ecx; /* 0x1505A9AC: sub eax, ecx */
    _flag_k = FK_CMP;
    PUSH32(esp, eax); /* 0x1505A9AE: push eax */
    eax = MEM32(ebp + (-0x8)); /* 0x1505A9AF: mov eax, dword ptr [ebp - 8] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + ecx; /* 0x1505A9B2: add eax, ecx */
    _flag_k = FK_ADD;
    PUSH32(esp, eax); /* 0x1505A9B4: push eax */
    RECOMP_CALL(sub_1508E640); /* 0x1505A9B5: call 0x1508e640 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x18u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x18u; /* 0x1505A9BA: add esp, 0x18 */
    _flag_k = FK_ADD;
L_1505A9BD:
    eax = ebp + (-0x8); /* 0x1505A9BD: lea eax, [ebp - 8] */
    PUSH32(esp, 1); /* 0x1505A9C0: push 1 */
    PUSH32(esp, eax); /* 0x1505A9C2: push eax */
    RECOMP_CALL(sub_1506130D); /* 0x1505A9C3: call 0x1506130d */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1505A9C8: pop ecx */
    ecx = POP32_VAL(esp); /* 0x1505A9C9: pop ecx */
    /* test eax, eax */ /* 0x1505A9CA: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1505A9E6; /* 0x1505A9CC: je 0x1505a9e6 */
L_1505A9CE:
    /* cmp MEM32(ebp + (-0x8)), 0 */ /* 0x1505A9CE: cmp dword ptr [ebp - 8], 0 */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x8))); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1505AADE; /* 0x1505A9D2: je 0x1505aade */
L_1505A9D8:
    PUSH32(esp, MEM32(ebp + (-0x8))); /* 0x1505A9D8: push dword ptr [ebp - 8] */
L_1505A9DB:
    RECOMP_CALL(sub_15048840); /* 0x1505A9DB: call 0x15048840 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1505A9E0: pop ecx */
    goto L_1505AADE; /* 0x1505A9E1: jmp 0x1505aade */
L_1505A9E6:
    /* cmp MEM32(0x150BDFD0), 0 */ /* 0x1505A9E6: cmp dword ptr [0x150bdfd0], 0 */
    _flag_a = (uint32_t)(MEM32(0x150BDFD0)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1505AAC0; /* 0x1505A9ED: je 0x1505aac0 */
L_1505A9F3:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    esi = 0; /* 0x1505A9F3: xor esi, esi */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, esi); /* 0x1505A9F5: push esi */
    PUSH32(esp, esi); /* 0x1505A9F6: push esi */
    PUSH32(esp, 0xFFFFFFFFu); /* 0x1505A9F7: push -1 */
    PUSH32(esp, edi); /* 0x1505A9F9: push edi */
    PUSH32(esp, esi); /* 0x1505A9FA: push esi */
    PUSH32(esp, esi); /* 0x1505A9FB: push esi */
    RECOMP_ICALL(MEM32(0x150C024C)); /* 0x1505A9FC: call dword ptr [0x150c024c] */
    RECOMP_FLAGS_IN();
    ebx = eax; /* 0x1505AA02: mov ebx, eax */
    /* test ebx, ebx */ /* 0x1505AA04: test ebx, ebx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ebx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1505AA18; /* 0x1505AA06: jne 0x1505aa18 */
L_1505AA08:
    RECOMP_CALL(sub_15036430); /* 0x1505AA08: call 0x15036430 */
    RECOMP_FLAGS_IN();
    MEM32(eax) = 0x2Au; /* 0x1505AA0D: mov dword ptr [eax], 0x2a */
    goto L_1505AADE; /* 0x1505AA13: jmp 0x1505aade */
L_1505AA18:
    /* cmp MEM32(ebp + 0xC), esi */ /* 0x1505AA18: cmp dword ptr [ebp + 0xc], esi */
    _flag_a = (uint32_t)(MEM32(ebp + 0xC)); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1505AA33; /* 0x1505AA1B: je 0x1505aa33 */
L_1505AA1D:
    PUSH32(esp, esi); /* 0x1505AA1D: push esi */
    PUSH32(esp, esi); /* 0x1505AA1E: push esi */
    PUSH32(esp, 0xFFFFFFFFu); /* 0x1505AA1F: push -1 */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x1505AA21: push dword ptr [ebp + 0xc] */
    PUSH32(esp, esi); /* 0x1505AA24: push esi */
    PUSH32(esp, esi); /* 0x1505AA25: push esi */
    RECOMP_ICALL(MEM32(0x150C024C)); /* 0x1505AA26: call dword ptr [0x150c024c] */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x1505AA2C: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_Z(_flag_a, _flag_b)) goto L_1505AA08; /* 0x1505AA2E: je 0x1505aa08 */
L_1505AA30:
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(1);
    ebx = ebx + 1; /* 0x1505AA30: inc ebx */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ebx = ebx + eax; /* 0x1505AA31: add ebx, eax */
    _flag_k = FK_ADD;
L_1505AA33:
    PUSH32(esp, 2); /* 0x1505AA33: push 2 */
    PUSH32(esp, ebx); /* 0x1505AA35: push ebx */
    RECOMP_CALL(sub_15048EE2); /* 0x1505AA36: call 0x15048ee2 */
    RECOMP_FLAGS_IN();
    MEM32(ebp + (-0x4)) = eax; /* 0x1505AA3B: mov dword ptr [ebp - 4], eax */
    ecx = POP32_VAL(esp); /* 0x1505AA3E: pop ecx */
    ecx = POP32_VAL(esp); /* 0x1505AA3F: pop ecx */
    /* test eax, eax */ /* 0x1505AA40: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1505AADE; /* 0x1505AA42: je 0x1505aade */
L_1505AA48:
    PUSH32(esp, ebx); /* 0x1505AA48: push ebx */
    PUSH32(esp, eax); /* 0x1505AA49: push eax */
    PUSH32(esp, 0xFFFFFFFFu); /* 0x1505AA4A: push -1 */
    PUSH32(esp, edi); /* 0x1505AA4C: push edi */
    PUSH32(esp, esi); /* 0x1505AA4D: push esi */
    PUSH32(esp, esi); /* 0x1505AA4E: push esi */
    RECOMP_ICALL(MEM32(0x150C024C)); /* 0x1505AA4F: call dword ptr [0x150c024c] */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x1505AA55: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1505AA64; /* 0x1505AA57: jne 0x1505aa64 */
L_1505AA59:
    PUSH32(esp, MEM32(ebp + (-0x4))); /* 0x1505AA59: push dword ptr [ebp - 4] */
    RECOMP_CALL(sub_15048840); /* 0x1505AA5C: call 0x15048840 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1505AA61: pop ecx */
    RECOMP_BACKEDGE();
    goto L_1505AA08; /* 0x1505AA62: jmp 0x1505aa08 */
L_1505AA64:
    /* cmp MEM32(ebp + 0xC), esi */ /* 0x1505AA64: cmp dword ptr [ebp + 0xc], esi */
    _flag_a = (uint32_t)(MEM32(ebp + 0xC)); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1505AAA3; /* 0x1505AA67: je 0x1505aaa3 */
L_1505AA69:
    edx = MEM32(ebp + (-0x4)); /* 0x1505AA69: mov edx, dword ptr [ebp - 4] */
    ecx = edx; /* 0x1505AA6C: mov ecx, edx */
    edi = ecx + 0x2; /* 0x1505AA6E: lea edi, [ecx + 2] */
L_1505AA71:
    SET_LO16(eax, MEM16(ecx)); /* 0x1505AA71: mov ax, word ptr [ecx] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 2; /* 0x1505AA74: add ecx, 2 */
    _flag_k = FK_ADD;
    /* cmp LO16(eax), LO16(esi) */ /* 0x1505AA77: cmp ax, si */
    _flag_a = (uint32_t)(LO16(eax)) << 16; _flag_b = (uint32_t)(LO16(esi)) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    RECOMP_BACKEDGE();
    if (CMP_NE(_flag_a, _flag_b)) goto L_1505AA71; /* 0x1505AA7A: jne 0x1505aa71 */
L_1505AA7C:
    PUSH32(esp, 0x3Du); /* 0x1505AA7C: push 0x3d */
    eax = POP32_VAL(esp); /* 0x1505AA7E: pop eax */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ecx = ecx - edi; /* 0x1505AA7F: sub ecx, edi */
    _flag_k = FK_CMP;
    if (1u) _cf = (((ecx) >> 0) & 1u); /* 0x1505AA81: sar ecx, 1 */
    if (1u) { _flag_a = recomp_flags_pack(((uint32_t)((int32_t)ecx >> 1u)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ecx = (uint32_t)((int32_t)ecx >> 1u);
    MEM16(edx + ecx * 2) = (uint16_t)(LO16(eax)); /* 0x1505AA83: mov word ptr [edx + ecx*2], ax */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx + 1; /* 0x1505AA87: inc ecx */
    _flag_k = FK_INC;
    eax = MEM32(ebp + (-0x4)); /* 0x1505AA88: mov eax, dword ptr [ebp - 4] */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ebx = ebx - ecx; /* 0x1505AA8B: sub ebx, ecx */
    _flag_k = FK_CMP;
    PUSH32(esp, ebx); /* 0x1505AA8D: push ebx */
    eax = eax + ecx * 2; /* 0x1505AA8E: lea eax, [eax + ecx*2] */
    PUSH32(esp, eax); /* 0x1505AA91: push eax */
    PUSH32(esp, 0xFFFFFFFFu); /* 0x1505AA92: push -1 */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x1505AA94: push dword ptr [ebp + 0xc] */
    PUSH32(esp, esi); /* 0x1505AA97: push esi */
    PUSH32(esp, esi); /* 0x1505AA98: push esi */
    RECOMP_ICALL(MEM32(0x150C024C)); /* 0x1505AA99: call dword ptr [0x150c024c] */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x1505AA9F: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_Z(_flag_a, _flag_b)) goto L_1505AA59; /* 0x1505AAA1: je 0x1505aa59 */
L_1505AAA3:
    eax = ebp + (-0x4); /* 0x1505AAA3: lea eax, [ebp - 4] */
    PUSH32(esp, esi); /* 0x1505AAA6: push esi */
    PUSH32(esp, eax); /* 0x1505AAA7: push eax */
    RECOMP_CALL(sub_1506164E); /* 0x1505AAA8: call 0x1506164e */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1505AAAD: pop ecx */
    ecx = POP32_VAL(esp); /* 0x1505AAAE: pop ecx */
    /* test eax, eax */ /* 0x1505AAAF: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1505AAC0; /* 0x1505AAB1: je 0x1505aac0 */
L_1505AAB3:
    /* cmp MEM32(ebp + (-0x4)), esi */ /* 0x1505AAB3: cmp dword ptr [ebp - 4], esi */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x4))); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1505AADE; /* 0x1505AAB6: je 0x1505aade */
L_1505AAB8:
    PUSH32(esp, MEM32(ebp + (-0x4))); /* 0x1505AAB8: push dword ptr [ebp - 4] */
    RECOMP_BACKEDGE();
    goto L_1505A9DB; /* 0x1505AABB: jmp 0x1505a9db */
L_1505AAC0:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1505AAC0: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_1505AAE1; /* 0x1505AAC2: jmp 0x1505aae1 */
L_1505AAC4:
    RECOMP_CALL(sub_15036430); /* 0x1505AAC4: call 0x15036430 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    esi = 0; /* 0x1505AAC9: xor esi, esi */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, esi); /* 0x1505AACB: push esi */
    PUSH32(esp, esi); /* 0x1505AACC: push esi */
    PUSH32(esp, esi); /* 0x1505AACD: push esi */
    PUSH32(esp, esi); /* 0x1505AACE: push esi */
    PUSH32(esp, esi); /* 0x1505AACF: push esi */
    MEM32(eax) = 0x16u; /* 0x1505AAD0: mov dword ptr [eax], 0x16 */
    RECOMP_CALL(sub_1505A110); /* 0x1505AAD6: call 0x1505a110 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x14u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x14u; /* 0x1505AADB: add esp, 0x14 */
    _flag_k = FK_ADD;
L_1505AADE:
    _flag_a = (uint32_t)((eax | 0xFFFFFFFFu)); _flag_b = (uint32_t)((eax | 0xFFFFFFFFu));
    eax = eax | 0xFFFFFFFFu; /* 0x1505AADE: or eax, 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
L_1505AAE1:
    ebx = POP32_VAL(esp); /* 0x1505AAE1: pop ebx */
L_1505AAE2:
    edi = POP32_VAL(esp); /* 0x1505AAE2: pop edi */
    esi = POP32_VAL(esp); /* 0x1505AAE3: pop esi */
    esp = ebp; ebp = POP32_VAL(esp); /* 0x1505AAE4: leave  */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1505AAE5: ret  */
    RECOMP_REGS_OUT();
}

void sub_1505AAF0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1505AAF0u);

L_1505AAF0:
    PUSH32(esp, 0xCu); /* 0x1505AAF0: push 0xc */
    PUSH32(esp, 0x150B0B88u); /* 0x1505AAF2: push 0x150b0b88 */
    RECOMP_CALL(sub_1505E988); /* 0x1505AAF7: call 0x1505e988 */
    RECOMP_FLAGS_IN();
    /* cmp MEM32(ebp + 0xC), 0 */ /* 0x1505AAFC: cmp dword ptr [ebp + 0xc], 0 */
    _flag_a = (uint32_t)(MEM32(ebp + 0xC)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_1505AB21; /* 0x1505AB00: jne 0x1505ab21 */
L_1505AB02:
    RECOMP_CALL(sub_15036430); /* 0x1505AB02: call 0x15036430 */
    RECOMP_FLAGS_IN();
    MEM32(eax) = 0x16u; /* 0x1505AB07: mov dword ptr [eax], 0x16 */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    esi = 0; /* 0x1505AB0D: xor esi, esi */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, esi); /* 0x1505AB0F: push esi */
    PUSH32(esp, esi); /* 0x1505AB10: push esi */
    PUSH32(esp, esi); /* 0x1505AB11: push esi */
    PUSH32(esp, esi); /* 0x1505AB12: push esi */
    PUSH32(esp, esi); /* 0x1505AB13: push esi */
    RECOMP_CALL(sub_1505A110); /* 0x1505AB14: call 0x1505a110 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x14u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x14u; /* 0x1505AB19: add esp, 0x14 */
    _flag_k = FK_ADD;
    PUSH32(esp, 0x16u); /* 0x1505AB1C: push 0x16 */
    eax = POP32_VAL(esp); /* 0x1505AB1E: pop eax */
    goto L_1505AB57; /* 0x1505AB1F: jmp 0x1505ab57 */
L_1505AB21:
    PUSH32(esp, 7); /* 0x1505AB21: push 7 */
    RECOMP_CALL(sub_15068D80); /* 0x1505AB23: call 0x15068d80 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1505AB28: pop ecx */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    esi = 0; /* 0x1505AB29: xor esi, esi */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x4)) = esi; /* 0x1505AB2B: mov dword ptr [ebp - 4], esi */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x1505AB2E: push dword ptr [ebp + 0xc] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x1505AB31: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_1505A8D9); /* 0x1505AB34: call 0x1505a8d9 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1505AB39: pop ecx */
    ecx = POP32_VAL(esp); /* 0x1505AB3A: pop ecx */
    /* test eax, eax */ /* 0x1505AB3B: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1505AB46; /* 0x1505AB3D: je 0x1505ab46 */
L_1505AB3F:
    RECOMP_CALL(sub_15036430); /* 0x1505AB3F: call 0x15036430 */
    RECOMP_FLAGS_IN();
    esi = MEM32(eax); /* 0x1505AB44: mov esi, dword ptr [eax] */
L_1505AB46:
    MEM32(ebp + (-0x1C)) = esi; /* 0x1505AB46: mov dword ptr [ebp - 0x1c], esi */
    MEM32(ebp + (-0x4)) = 0xFFFFFFFEu; /* 0x1505AB49: mov dword ptr [ebp - 4], 0xfffffffe */
    RECOMP_CALL(sub_1505AB6A); /* 0x1505AB50: call 0x1505ab6a */
    RECOMP_FLAGS_IN();
    eax = esi; /* 0x1505AB55: mov eax, esi */
L_1505AB57:
    ecx = MEM32(ebp + (-0x10)); /* 0x1505AB57: mov ecx, dword ptr [ebp - 0x10] */
    MEM32(FS_BASE + (0)) = ecx; /* 0x1505AB5A: mov dword ptr fs:[0], ecx */
    ecx = POP32_VAL(esp); /* 0x1505AB61: pop ecx */
    edi = POP32_VAL(esp); /* 0x1505AB62: pop edi */
    esi = POP32_VAL(esp); /* 0x1505AB63: pop esi */
    ebx = POP32_VAL(esp); /* 0x1505AB64: pop ebx */
    esp = ebp; ebp = POP32_VAL(esp); /* 0x1505AB65: leave  */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1505AB66: ret  */
    RECOMP_REGS_OUT();
}

void sub_1505AB6A(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1505AB6Au);

L_1505AB6A:
    PUSH32(esp, 7); /* 0x1505AB6A: push 7 */
    RECOMP_CALL(sub_15068F50); /* 0x1505AB6C: call 0x15068f50 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1505AB71: pop ecx */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1505AB72: ret  */
    RECOMP_REGS_OUT();
}

void sub_1505AB80(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1505AB80u);

L_1505AB80:
    edi = edi; /* 0x1505AB80: mov edi, edi */
    PUSH32(esp, ebp); /* 0x1505AB82: push ebp */
    ebp = esp; /* 0x1505AB83: mov ebp, esp */
    PUSH32(esp, 0x104u); /* 0x1505AB85: push 0x104 */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x1505AB8A: push dword ptr [ebp + 0x10] */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x1505AB8D: push dword ptr [ebp + 0xc] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x1505AB90: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_1505ABB0); /* 0x1505AB93: call 0x1505abb0 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x10u; /* 0x1505AB98: add esp, 0x10 */
    _flag_k = FK_ADD;
    ebp = POP32_VAL(esp); /* 0x1505AB9B: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1505AB9C: ret  */
    RECOMP_REGS_OUT();
}

void sub_1505ABB0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1505ABB0u);

L_1505ABB0:
    edi = edi; /* 0x1505ABB0: mov edi, edi */
    PUSH32(esp, ebp); /* 0x1505ABB2: push ebp */
    ebp = esp; /* 0x1505ABB3: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x12Cu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x12Cu; /* 0x1505ABB5: sub esp, 0x12c */
    _flag_k = FK_CMP;
    eax = MEM32(0x150BD340); /* 0x1505ABBB: mov eax, dword ptr [0x150bd340] */
    _flag_a = (uint32_t)((eax ^ ebp)); _flag_b = (uint32_t)((eax ^ ebp));
    eax = eax ^ ebp; /* 0x1505ABC0: xor eax, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x4)) = eax; /* 0x1505ABC2: mov dword ptr [ebp - 4], eax */
    eax = MEM32(ebp + 0xC); /* 0x1505ABC5: mov eax, dword ptr [ebp + 0xc] */
    ecx = MEM32(ebp + 0x8); /* 0x1505ABC8: mov ecx, dword ptr [ebp + 8] */
    edx = MEM32(ebp + 0x14); /* 0x1505ABCB: mov edx, dword ptr [ebp + 0x14] */
    PUSH32(esp, ebx); /* 0x1505ABCE: push ebx */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ebx = 0; /* 0x1505ABCF: xor ebx, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x118)) = eax; /* 0x1505ABD1: mov dword ptr [ebp - 0x118], eax */
    eax = MEM32(ebp + 0x10); /* 0x1505ABD7: mov eax, dword ptr [ebp + 0x10] */
    MEM32(ebp + (-0x11C)) = ecx; /* 0x1505ABDA: mov dword ptr [ebp - 0x11c], ecx */
    MEM32(ebp + (-0x114)) = eax; /* 0x1505ABE0: mov dword ptr [ebp - 0x114], eax */
    MEM32(ebp + (-0x128)) = edx; /* 0x1505ABE6: mov dword ptr [ebp - 0x128], edx */
    MEM32(ebp + (-0x124)) = ebx; /* 0x1505ABEC: mov dword ptr [ebp - 0x124], ebx */
    PUSH32(esp, esi); /* 0x1505ABF2: push esi */
    esi = ebx; /* 0x1505ABF3: mov esi, ebx */
    MEM32(ebp + (-0x110)) = esi; /* 0x1505ABF5: mov dword ptr [ebp - 0x110], esi */
    /* test eax, eax */ /* 0x1505ABFB: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1505AC1D; /* 0x1505ABFD: jne 0x1505ac1d */
L_1505ABFF:
    RECOMP_CALL(sub_15036430); /* 0x1505ABFF: call 0x15036430 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0x16u); /* 0x1505AC04: push 0x16 */
    esi = POP32_VAL(esp); /* 0x1505AC06: pop esi */
    PUSH32(esp, ebx); /* 0x1505AC07: push ebx */
    PUSH32(esp, ebx); /* 0x1505AC08: push ebx */
    PUSH32(esp, ebx); /* 0x1505AC09: push ebx */
    PUSH32(esp, ebx); /* 0x1505AC0A: push ebx */
    PUSH32(esp, ebx); /* 0x1505AC0B: push ebx */
    MEM32(eax) = esi; /* 0x1505AC0C: mov dword ptr [eax], esi */
    RECOMP_CALL(sub_1505A110); /* 0x1505AC0E: call 0x1505a110 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x14u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x14u; /* 0x1505AC13: add esp, 0x14 */
    _flag_k = FK_ADD;
    eax = esi; /* 0x1505AC16: mov eax, esi */
    goto L_1505ACF1; /* 0x1505AC18: jmp 0x1505acf1 */
L_1505AC1D:
    /* test edx, edx */ /* 0x1505AC1D: test edx, edx */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(edx);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_Z(_flag_a, _flag_b)) goto L_1505ABFF; /* 0x1505AC1F: je 0x1505abff */
L_1505AC21:
    /* test ecx, ecx */ /* 0x1505AC21: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1505AC29; /* 0x1505AC23: jne 0x1505ac29 */
L_1505AC25:
    MEM8(eax) = (uint8_t)(LO8(ebx)); /* 0x1505AC25: mov byte ptr [eax], bl */
    RECOMP_BACKEDGE();
    goto L_1505ABFF; /* 0x1505AC27: jmp 0x1505abff */
L_1505AC29:
    PUSH32(esp, edi); /* 0x1505AC29: push edi */
    /* cmp MEM8(ecx), LO8(ebx) */ /* 0x1505AC2A: cmp byte ptr [ecx], bl */
    _flag_a = (uint32_t)(MEM8(ecx)) << 24; _flag_b = (uint32_t)(LO8(ebx)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_1505AC45; /* 0x1505AC2C: jne 0x1505ac45 */
L_1505AC2E:
    MEM8(eax) = (uint8_t)(LO8(ebx)); /* 0x1505AC2E: mov byte ptr [eax], bl */
    RECOMP_CALL(sub_15036430); /* 0x1505AC30: call 0x15036430 */
    RECOMP_FLAGS_IN();
    MEM32(eax) = 2; /* 0x1505AC35: mov dword ptr [eax], 2 */
    RECOMP_CALL(sub_15036430); /* 0x1505AC3B: call 0x15036430 */
    RECOMP_FLAGS_IN();
    goto L_1505ACD9; /* 0x1505AC40: jmp 0x1505acd9 */
L_1505AC45:
    RECOMP_CALL(sub_15036430); /* 0x1505AC45: call 0x15036430 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, ebx); /* 0x1505AC4A: push ebx */
    PUSH32(esp, MEM32(ebp + (-0x11C))); /* 0x1505AC4B: push dword ptr [ebp - 0x11c] */
    edi = MEM32(eax); /* 0x1505AC51: mov edi, dword ptr [eax] */
    RECOMP_CALL(sub_15036590); /* 0x1505AC53: call 0x15036590 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1505AC58: pop ecx */
    ecx = POP32_VAL(esp); /* 0x1505AC59: pop ecx */
    esi = eax; /* 0x1505AC5A: mov esi, eax */
    RECOMP_CALL(sub_15036430); /* 0x1505AC5C: call 0x15036430 */
    RECOMP_FLAGS_IN();
    MEM32(eax) = edi; /* 0x1505AC61: mov dword ptr [eax], edi */
    /* test esi, esi */ /* 0x1505AC63: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1505AC8F; /* 0x1505AC65: jne 0x1505ac8f */
L_1505AC67:
    edi = MEM32(ebp + (-0x128)); /* 0x1505AC67: mov edi, dword ptr [ebp - 0x128] */
    PUSH32(esp, edi); /* 0x1505AC6D: push edi */
    PUSH32(esp, MEM32(ebp + (-0x11C))); /* 0x1505AC6E: push dword ptr [ebp - 0x11c] */
    edi = MEM32(ebp + (-0x114)); /* 0x1505AC74: mov edi, dword ptr [ebp - 0x114] */
    PUSH32(esp, edi); /* 0x1505AC7A: push edi */
    RECOMP_CALL(sub_15036950); /* 0x1505AC7B: call 0x15036950 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x1505AC80: add esp, 0xc */
    _flag_k = FK_ADD;
    /* test eax, eax */ /* 0x1505AC83: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1505AC8B; /* 0x1505AC85: jne 0x1505ac8b */
L_1505AC87:
    MEM8(edi) = (uint8_t)(LO8(ebx)); /* 0x1505AC87: mov byte ptr [edi], bl */
    goto L_1505ACCE; /* 0x1505AC89: jmp 0x1505acce */
L_1505AC8B:
    esi = ebx; /* 0x1505AC8B: mov esi, ebx */
    goto L_1505ACDB; /* 0x1505AC8D: jmp 0x1505acdb */
L_1505AC8F:
    PUSH32(esp, MEM32(ebp + (-0x118))); /* 0x1505AC8F: push dword ptr [ebp - 0x118] */
    eax = ebp + (-0x124); /* 0x1505AC95: lea eax, [ebp - 0x124] */
    PUSH32(esp, ebx); /* 0x1505AC9B: push ebx */
    PUSH32(esp, eax); /* 0x1505AC9C: push eax */
    RECOMP_CALL(sub_1505D654); /* 0x1505AC9D: call 0x1505d654 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x1505ACA2: add esp, 0xc */
    _flag_k = FK_ADD;
    /* test eax, eax */ /* 0x1505ACA5: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1505AD03; /* 0x1505ACA7: je 0x1505ad03 */
L_1505ACA9:
    /* cmp eax, 0x16u */ /* 0x1505ACA9: cmp eax, 0x16 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x16u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_1505ACFF; /* 0x1505ACAC: jne 0x1505acff */
L_1505ACAE:
    PUSH32(esp, ebx); /* 0x1505ACAE: push ebx */
    PUSH32(esp, ebx); /* 0x1505ACAF: push ebx */
    PUSH32(esp, ebx); /* 0x1505ACB0: push ebx */
    PUSH32(esp, ebx); /* 0x1505ACB1: push ebx */
    PUSH32(esp, ebx); /* 0x1505ACB2: push ebx */
    RECOMP_CALL(sub_1505A11B); /* 0x1505ACB3: call 0x1505a11b */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x14u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x14u; /* 0x1505ACB8: add esp, 0x14 */
    _flag_k = FK_ADD;
L_1505ACBB:
    edi = MEM32(ebp + (-0x114)); /* 0x1505ACBB: mov edi, dword ptr [ebp - 0x114] */
    MEM8(edi) = (uint8_t)(LO8(ebx)); /* 0x1505ACC1: mov byte ptr [edi], bl */
    RECOMP_CALL(sub_15036430); /* 0x1505ACC3: call 0x15036430 */
    RECOMP_FLAGS_IN();
    MEM32(eax) = 2; /* 0x1505ACC8: mov dword ptr [eax], 2 */
L_1505ACCE:
    RECOMP_CALL(sub_15036430); /* 0x1505ACCE: call 0x15036430 */
    RECOMP_FLAGS_IN();
    esi = MEM32(ebp + (-0x110)); /* 0x1505ACD3: mov esi, dword ptr [ebp - 0x110] */
L_1505ACD9:
    ebx = MEM32(eax); /* 0x1505ACD9: mov ebx, dword ptr [eax] */
L_1505ACDB:
    PUSH32(esp, esi); /* 0x1505ACDB: push esi */
    RECOMP_CALL(sub_15048840); /* 0x1505ACDC: call 0x15048840 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1505ACE1: pop ecx */
L_1505ACE2:
    PUSH32(esp, MEM32(ebp + (-0x124))); /* 0x1505ACE2: push dword ptr [ebp - 0x124] */
    RECOMP_CALL(sub_15048840); /* 0x1505ACE8: call 0x15048840 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1505ACED: pop ecx */
    eax = ebx; /* 0x1505ACEE: mov eax, ebx */
    edi = POP32_VAL(esp); /* 0x1505ACF0: pop edi */
L_1505ACF1:
    ecx = MEM32(ebp + (-0x4)); /* 0x1505ACF1: mov ecx, dword ptr [ebp - 4] */
    esi = POP32_VAL(esp); /* 0x1505ACF4: pop esi */
    _flag_a = (uint32_t)((ecx ^ ebp)); _flag_b = (uint32_t)((ecx ^ ebp));
    ecx = ecx ^ ebp; /* 0x1505ACF5: xor ecx, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    ebx = POP32_VAL(esp); /* 0x1505ACF7: pop ebx */
    RECOMP_CALL(sub_1505E540); /* 0x1505ACF8: call 0x1505e540 */
    RECOMP_FLAGS_IN();
    esp = ebp; ebp = POP32_VAL(esp); /* 0x1505ACFD: leave  */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1505ACFE: ret  */
L_1505ACFF:
    /* test eax, eax */ /* 0x1505ACFF: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1505ACBB; /* 0x1505AD01: jne 0x1505acbb */
L_1505AD03:
    ecx = MEM32(ebp + (-0x124)); /* 0x1505AD03: mov ecx, dword ptr [ebp - 0x124] */
    MEM32(ebp + (-0x120)) = ecx; /* 0x1505AD09: mov dword ptr [ebp - 0x120], ecx */
    /* test ecx, ecx */ /* 0x1505AD0F: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_Z(_flag_a, _flag_b)) goto L_1505ACBB; /* 0x1505AD11: je 0x1505acbb */
L_1505AD13:
    edi = MEM32(ebp + (-0x11C)); /* 0x1505AD13: mov edi, dword ptr [ebp - 0x11c] */
    edx = edi + 0x1; /* 0x1505AD19: lea edx, [edi + 1] */
L_1505AD1C:
    SET_LO8(eax, MEM8(edi)); /* 0x1505AD1C: mov al, byte ptr [edi] */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(1);
    edi = edi + 1; /* 0x1505AD1E: inc edi */
    _flag_k = FK_INC;
    /* test LO8(eax), LO8(eax) */ /* 0x1505AD1F: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1505AD1C; /* 0x1505AD21: jne 0x1505ad1c */
L_1505AD23:
    eax = 0x108u; /* 0x1505AD23: mov eax, 0x108 */
    esi = ebp + (-0x10C); /* 0x1505AD28: lea esi, [ebp - 0x10c] */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    edi = edi - edx; /* 0x1505AD2E: sub edi, edx */
    _flag_k = FK_CMP;
    MEM32(ebp + (-0x110)) = eax; /* 0x1505AD30: mov dword ptr [ebp - 0x110], eax */
    /* cmp edi, eax */ /* 0x1505AD36: cmp edi, eax */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_B(_flag_a, _flag_b)) goto L_1505AD79; /* 0x1505AD38: jb 0x1505ad79 */
L_1505AD3A:
    edx = ecx + 0x1; /* 0x1505AD3A: lea edx, [ecx + 1] */
L_1505AD3D:
    SET_LO8(eax, MEM8(ecx)); /* 0x1505AD3D: mov al, byte ptr [ecx] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx + 1; /* 0x1505AD3F: inc ecx */
    _flag_k = FK_INC;
    /* test LO8(eax), LO8(eax) */ /* 0x1505AD40: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1505AD3D; /* 0x1505AD42: jne 0x1505ad3d */
L_1505AD44:
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ecx = ecx - edx; /* 0x1505AD44: sub ecx, edx */
    _flag_k = FK_CMP;
    PUSH32(esp, 1); /* 0x1505AD46: push 1 */
    eax = ecx + 0x2; /* 0x1505AD48: lea eax, [ecx + 2] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + edi; /* 0x1505AD4B: add eax, edi */
    _flag_k = FK_ADD;
    PUSH32(esp, eax); /* 0x1505AD4D: push eax */
    MEM32(ebp + (-0x110)) = eax; /* 0x1505AD4E: mov dword ptr [ebp - 0x110], eax */
    RECOMP_CALL(sub_15048EE2); /* 0x1505AD54: call 0x15048ee2 */
    RECOMP_FLAGS_IN();
    esi = eax; /* 0x1505AD59: mov esi, eax */
    ecx = POP32_VAL(esp); /* 0x1505AD5B: pop ecx */
    ecx = POP32_VAL(esp); /* 0x1505AD5C: pop ecx */
    /* test esi, esi */ /* 0x1505AD5D: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1505AD79; /* 0x1505AD5F: jne 0x1505ad79 */
L_1505AD61:
    edi = MEM32(ebp + (-0x114)); /* 0x1505AD61: mov edi, dword ptr [ebp - 0x114] */
    MEM8(edi) = (uint8_t)(LO8(ebx)); /* 0x1505AD67: mov byte ptr [edi], bl */
    RECOMP_CALL(sub_15036430); /* 0x1505AD69: call 0x15036430 */
    RECOMP_FLAGS_IN();
    MEM32(eax) = 0xCu; /* 0x1505AD6E: mov dword ptr [eax], 0xc */
    goto L_1505AEAC; /* 0x1505AD74: jmp 0x1505aeac */
L_1505AD79:
    RECOMP_CALL(sub_15036430); /* 0x1505AD79: call 0x15036430 */
    RECOMP_FLAGS_IN();
    eax = MEM32(eax); /* 0x1505AD7E: mov eax, dword ptr [eax] */
    MEM32(ebp + (-0x12C)) = eax; /* 0x1505AD80: mov dword ptr [ebp - 0x12c], eax */
    goto L_1505AE8B; /* 0x1505AD86: jmp 0x1505ae8b */
L_1505AD8B:
    eax = MEM32(ebp + (-0x110)); /* 0x1505AD8B: mov eax, dword ptr [ebp - 0x110] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - edi; /* 0x1505AD91: sub eax, edi */
    _flag_k = FK_CMP;
    MEM32(ebp + (-0x118)) = ecx; /* 0x1505AD93: mov dword ptr [ebp - 0x118], ecx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax - 1; /* 0x1505AD99: dec eax */
    _flag_k = FK_DEC;
    PUSH32(esp, eax); /* 0x1505AD9A: push eax */
    PUSH32(esp, esi); /* 0x1505AD9B: push esi */
    PUSH32(esp, ecx); /* 0x1505AD9C: push ecx */
    RECOMP_CALL(sub_1505EB80); /* 0x1505AD9D: call 0x1505eb80 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x1505ADA2: add esp, 0xc */
    _flag_k = FK_ADD;
    MEM32(ebp + (-0x120)) = eax; /* 0x1505ADA5: mov dword ptr [ebp - 0x120], eax */
    /* test eax, eax */ /* 0x1505ADAB: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1505AE1E; /* 0x1505ADAD: jne 0x1505ae1e */
L_1505ADAF:
    eax = ebp + (-0x10C); /* 0x1505ADAF: lea eax, [ebp - 0x10c] */
    /* cmp esi, eax */ /* 0x1505ADB5: cmp esi, eax */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_1505AE99; /* 0x1505ADB7: jne 0x1505ae99 */
L_1505ADBD:
    RECOMP_CALL(sub_15036430); /* 0x1505ADBD: call 0x15036430 */
    RECOMP_FLAGS_IN();
    /* cmp MEM32(eax), 0x22u */ /* 0x1505ADC2: cmp dword ptr [eax], 0x22 */
    _flag_a = (uint32_t)(MEM32(eax)); _flag_b = (uint32_t)(0x22u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_1505AE99; /* 0x1505ADC5: jne 0x1505ae99 */
L_1505ADCB:
    ecx = MEM32(ebp + (-0x118)); /* 0x1505ADCB: mov ecx, dword ptr [ebp - 0x118] */
    edx = ecx + 0x1; /* 0x1505ADD1: lea edx, [ecx + 1] */
L_1505ADD4:
    SET_LO8(eax, MEM8(ecx)); /* 0x1505ADD4: mov al, byte ptr [ecx] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx + 1; /* 0x1505ADD6: inc ecx */
    _flag_k = FK_INC;
    /* test LO8(eax), LO8(eax) */ /* 0x1505ADD7: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1505ADD4; /* 0x1505ADD9: jne 0x1505add4 */
L_1505ADDB:
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ecx = ecx - edx; /* 0x1505ADDB: sub ecx, edx */
    _flag_k = FK_CMP;
    PUSH32(esp, 1); /* 0x1505ADDD: push 1 */
    eax = ecx + 0x2; /* 0x1505ADDF: lea eax, [ecx + 2] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + edi; /* 0x1505ADE2: add eax, edi */
    _flag_k = FK_ADD;
    PUSH32(esp, eax); /* 0x1505ADE4: push eax */
    MEM32(ebp + (-0x110)) = eax; /* 0x1505ADE5: mov dword ptr [ebp - 0x110], eax */
    RECOMP_CALL(sub_15048EE2); /* 0x1505ADEB: call 0x15048ee2 */
    RECOMP_FLAGS_IN();
    esi = eax; /* 0x1505ADF0: mov esi, eax */
    ecx = POP32_VAL(esp); /* 0x1505ADF2: pop ecx */
    ecx = POP32_VAL(esp); /* 0x1505ADF3: pop ecx */
    /* test esi, esi */ /* 0x1505ADF4: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_Z(_flag_a, _flag_b)) goto L_1505AD61; /* 0x1505ADF6: je 0x1505ad61 */
L_1505ADFC:
    eax = MEM32(ebp + (-0x110)); /* 0x1505ADFC: mov eax, dword ptr [ebp - 0x110] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - edi; /* 0x1505AE02: sub eax, edi */
    _flag_k = FK_CMP;
    PUSH32(esp, eax); /* 0x1505AE04: push eax */
    PUSH32(esp, esi); /* 0x1505AE05: push esi */
    PUSH32(esp, MEM32(ebp + (-0x118))); /* 0x1505AE06: push dword ptr [ebp - 0x118] */
    RECOMP_CALL(sub_1505EB80); /* 0x1505AE0C: call 0x1505eb80 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x1505AE11: add esp, 0xc */
    _flag_k = FK_ADD;
    MEM32(ebp + (-0x120)) = eax; /* 0x1505AE14: mov dword ptr [ebp - 0x120], eax */
    /* test eax, eax */ /* 0x1505AE1A: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1505AE99; /* 0x1505AE1C: je 0x1505ae99 */
L_1505AE1E:
    /* cmp MEM8(esi), LO8(ebx) */ /* 0x1505AE1E: cmp byte ptr [esi], bl */
    _flag_a = (uint32_t)(MEM8(esi)) << 24; _flag_b = (uint32_t)(LO8(ebx)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1505AE99; /* 0x1505AE20: je 0x1505ae99 */
L_1505AE22:
    ecx = esi; /* 0x1505AE22: mov ecx, esi */
    edx = ecx + 0x1; /* 0x1505AE24: lea edx, [ecx + 1] */
L_1505AE27:
    SET_LO8(eax, MEM8(ecx)); /* 0x1505AE27: mov al, byte ptr [ecx] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx + 1; /* 0x1505AE29: inc ecx */
    _flag_k = FK_INC;
    /* test LO8(eax), LO8(eax) */ /* 0x1505AE2A: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1505AE27; /* 0x1505AE2C: jne 0x1505ae27 */
L_1505AE2E:
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ecx = ecx - edx; /* 0x1505AE2E: sub ecx, edx */
    _flag_k = FK_CMP;
    MEM32(ebp + (-0x118)) = ecx; /* 0x1505AE30: mov dword ptr [ebp - 0x118], ecx */
    edx = ecx + esi; /* 0x1505AE36: lea edx, [ecx + esi] */
    SET_LO8(eax, MEM8(edx + (-0x1))); /* 0x1505AE39: mov al, byte ptr [edx - 1] */
    /* cmp LO8(eax), 0x2Fu */ /* 0x1505AE3C: cmp al, 0x2f */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(0x2Fu) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1505AE53; /* 0x1505AE3E: je 0x1505ae53 */
L_1505AE40:
    /* cmp LO8(eax), 0x5Cu */ /* 0x1505AE40: cmp al, 0x5c */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(0x5Cu) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1505AE53; /* 0x1505AE42: je 0x1505ae53 */
L_1505AE44:
    /* cmp LO8(eax), 0x3Au */ /* 0x1505AE44: cmp al, 0x3a */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(0x3Au) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1505AE53; /* 0x1505AE46: je 0x1505ae53 */
L_1505AE48:
    MEM8(edx) = (uint8_t)(0x5Cu); /* 0x1505AE48: mov byte ptr [edx], 0x5c */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(1);
    edx = edx + 1; /* 0x1505AE4B: inc edx */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx + 1; /* 0x1505AE4C: inc ecx */
    _flag_k = FK_INC;
    MEM32(ebp + (-0x118)) = ecx; /* 0x1505AE4D: mov dword ptr [ebp - 0x118], ecx */
L_1505AE53:
    eax = MEM32(ebp + (-0x110)); /* 0x1505AE53: mov eax, dword ptr [ebp - 0x110] */
    PUSH32(esp, MEM32(ebp + (-0x11C))); /* 0x1505AE59: push dword ptr [ebp - 0x11c] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - edx; /* 0x1505AE5F: sub eax, edx */
    _flag_k = FK_CMP;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + esi; /* 0x1505AE61: add eax, esi */
    _flag_k = FK_ADD;
    PUSH32(esp, eax); /* 0x1505AE63: push eax */
    PUSH32(esp, edx); /* 0x1505AE64: push edx */
    RECOMP_CALL(sub_1508E640); /* 0x1505AE65: call 0x1508e640 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x1505AE6A: add esp, 0xc */
    _flag_k = FK_ADD;
    /* test eax, eax */ /* 0x1505AE6D: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1505AE7E; /* 0x1505AE6F: je 0x1505ae7e */
L_1505AE71:
    PUSH32(esp, ebx); /* 0x1505AE71: push ebx */
    PUSH32(esp, ebx); /* 0x1505AE72: push ebx */
    PUSH32(esp, ebx); /* 0x1505AE73: push ebx */
    PUSH32(esp, ebx); /* 0x1505AE74: push ebx */
    PUSH32(esp, ebx); /* 0x1505AE75: push ebx */
    RECOMP_CALL(sub_1505A11B); /* 0x1505AE76: call 0x1505a11b */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x14u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x14u; /* 0x1505AE7B: add esp, 0x14 */
    _flag_k = FK_ADD;
L_1505AE7E:
    PUSH32(esp, ebx); /* 0x1505AE7E: push ebx */
    PUSH32(esp, esi); /* 0x1505AE7F: push esi */
    RECOMP_CALL(sub_15036590); /* 0x1505AE80: call 0x15036590 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1505AE85: pop ecx */
    ecx = POP32_VAL(esp); /* 0x1505AE86: pop ecx */
    /* test eax, eax */ /* 0x1505AE87: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1505AEC6; /* 0x1505AE89: je 0x1505aec6 */
L_1505AE8B:
    ecx = MEM32(ebp + (-0x120)); /* 0x1505AE8B: mov ecx, dword ptr [ebp - 0x120] */
    /* test ecx, ecx */ /* 0x1505AE91: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1505AD8B; /* 0x1505AE93: jne 0x1505ad8b */
L_1505AE99:
    edi = MEM32(ebp + (-0x114)); /* 0x1505AE99: mov edi, dword ptr [ebp - 0x114] */
    MEM8(edi) = (uint8_t)(LO8(ebx)); /* 0x1505AE9F: mov byte ptr [edi], bl */
    RECOMP_CALL(sub_15036430); /* 0x1505AEA1: call 0x15036430 */
    RECOMP_FLAGS_IN();
    MEM32(eax) = 2; /* 0x1505AEA6: mov dword ptr [eax], 2 */
L_1505AEAC:
    RECOMP_CALL(sub_15036430); /* 0x1505AEAC: call 0x15036430 */
    RECOMP_FLAGS_IN();
    ebx = MEM32(eax); /* 0x1505AEB1: mov ebx, dword ptr [eax] */
L_1505AEB3:
    eax = ebp + (-0x10C); /* 0x1505AEB3: lea eax, [ebp - 0x10c] */
    /* cmp esi, eax */ /* 0x1505AEB9: cmp esi, eax */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1505ACE2; /* 0x1505AEBB: je 0x1505ace2 */
L_1505AEC1:
    RECOMP_BACKEDGE();
    goto L_1505ACDB; /* 0x1505AEC1: jmp 0x1505acdb */
L_1505AEC6:
    eax = MEM32(ebp + (-0x118)); /* 0x1505AEC6: mov eax, dword ptr [ebp - 0x118] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + edi; /* 0x1505AECC: add eax, edi */
    _flag_k = FK_ADD;
    edi = MEM32(ebp + (-0x128)); /* 0x1505AECE: mov edi, dword ptr [ebp - 0x128] */
    /* cmp eax, edi */ /* 0x1505AED4: cmp eax, edi */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_B(_flag_a, _flag_b)) goto L_1505AEFE; /* 0x1505AED6: jb 0x1505aefe */
L_1505AED8:
    edi = MEM32(ebp + (-0x114)); /* 0x1505AED8: mov edi, dword ptr [ebp - 0x114] */
    eax = ebp + (-0x10C); /* 0x1505AEDE: lea eax, [ebp - 0x10c] */
    MEM8(edi) = (uint8_t)(LO8(ebx)); /* 0x1505AEE4: mov byte ptr [edi], bl */
    /* cmp esi, eax */ /* 0x1505AEE6: cmp esi, eax */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1505AEF1; /* 0x1505AEE8: je 0x1505aef1 */
L_1505AEEA:
    PUSH32(esp, esi); /* 0x1505AEEA: push esi */
    RECOMP_CALL(sub_15048840); /* 0x1505AEEB: call 0x15048840 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1505AEF0: pop ecx */
L_1505AEF1:
    RECOMP_CALL(sub_15036430); /* 0x1505AEF1: call 0x15036430 */
    RECOMP_FLAGS_IN();
    MEM32(eax) = 0x22u; /* 0x1505AEF6: mov dword ptr [eax], 0x22 */
    RECOMP_BACKEDGE();
    goto L_1505AEAC; /* 0x1505AEFC: jmp 0x1505aeac */
L_1505AEFE:
    RECOMP_CALL(sub_15036430); /* 0x1505AEFE: call 0x15036430 */
    RECOMP_FLAGS_IN();
    ecx = MEM32(ebp + (-0x12C)); /* 0x1505AF03: mov ecx, dword ptr [ebp - 0x12c] */
    PUSH32(esp, esi); /* 0x1505AF09: push esi */
    PUSH32(esp, edi); /* 0x1505AF0A: push edi */
    edi = MEM32(ebp + (-0x114)); /* 0x1505AF0B: mov edi, dword ptr [ebp - 0x114] */
    PUSH32(esp, edi); /* 0x1505AF11: push edi */
    MEM32(eax) = ecx; /* 0x1505AF12: mov dword ptr [eax], ecx */
    RECOMP_CALL(sub_1508E640); /* 0x1505AF14: call 0x1508e640 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x1505AF19: add esp, 0xc */
    _flag_k = FK_ADD;
    /* test eax, eax */ /* 0x1505AF1C: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1505AF2D; /* 0x1505AF1E: je 0x1505af2d */
L_1505AF20:
    PUSH32(esp, ebx); /* 0x1505AF20: push ebx */
    PUSH32(esp, ebx); /* 0x1505AF21: push ebx */
    PUSH32(esp, ebx); /* 0x1505AF22: push ebx */
    PUSH32(esp, ebx); /* 0x1505AF23: push ebx */
    PUSH32(esp, ebx); /* 0x1505AF24: push ebx */
    RECOMP_CALL(sub_1505A11B); /* 0x1505AF25: call 0x1505a11b */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x14u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x14u; /* 0x1505AF2A: add esp, 0x14 */
    _flag_k = FK_ADD;
L_1505AF2D:
    eax = ebp + (-0x10C); /* 0x1505AF2D: lea eax, [ebp - 0x10c] */
    /* cmp esi, eax */ /* 0x1505AF33: cmp esi, eax */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1505AEB3; /* 0x1505AF35: je 0x1505aeb3 */
L_1505AF3B:
    PUSH32(esp, esi); /* 0x1505AF3B: push esi */
    RECOMP_CALL(sub_15048840); /* 0x1505AF3C: call 0x15048840 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1505AF41: pop ecx */
    RECOMP_BACKEDGE();
    goto L_1505AEB3; /* 0x1505AF42: jmp 0x1505aeb3 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    RECOMP_REGS_OUT();
}

void sub_1505AF50(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1505AF50u);

L_1505AF50:
    edx = MEM32(esp + 0x4); /* 0x1505AF50: mov edx, dword ptr [esp + 4] */
    MEM32(edx) = ebp; /* 0x1505AF54: mov dword ptr [edx], ebp */
    MEM32(edx + 0x4) = ebx; /* 0x1505AF56: mov dword ptr [edx + 4], ebx */
    MEM32(edx + 0x8) = edi; /* 0x1505AF59: mov dword ptr [edx + 8], edi */
    MEM32(edx + 0xC) = esi; /* 0x1505AF5C: mov dword ptr [edx + 0xc], esi */
    MEM32(edx + 0x10) = esp; /* 0x1505AF5F: mov dword ptr [edx + 0x10], esp */
    eax = MEM32(esp); /* 0x1505AF62: mov eax, dword ptr [esp] */
    MEM32(edx + 0x14) = eax; /* 0x1505AF65: mov dword ptr [edx + 0x14], eax */
    eax = MEM32(FS_BASE + (0)); /* 0x1505AF68: mov eax, dword ptr fs:[0] */
    MEM32(edx + 0x18) = eax; /* 0x1505AF6E: mov dword ptr [edx + 0x18], eax */
    /* cmp eax, 0xFFFFFFFFu */ /* 0x1505AF71: cmp eax, -1 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xFFFFFFFFu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_1505AF7F; /* 0x1505AF74: jne 0x1505af7f */
L_1505AF76:
    MEM32(edx + 0x1C) = 0xFFFFFFFFu; /* 0x1505AF76: mov dword ptr [edx + 0x1c], 0xffffffff */
    goto L_1505AF85; /* 0x1505AF7D: jmp 0x1505af85 */
L_1505AF7F:
    eax = MEM32(eax + 0xC); /* 0x1505AF7F: mov eax, dword ptr [eax + 0xc] */
    MEM32(edx + 0x1C) = eax; /* 0x1505AF82: mov dword ptr [edx + 0x1c], eax */
L_1505AF85:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - eax; /* 0x1505AF85: sub eax, eax */
    _flag_k = FK_CMP;
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1505AF87: ret  */
    RECOMP_REGS_OUT();
}

void sub_1505AF90(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1505AF90u);

L_1505AF90:
    edx = MEM32(esp + 0x4); /* 0x1505AF90: mov edx, dword ptr [esp + 4] */
    MEM32(edx) = ebp; /* 0x1505AF94: mov dword ptr [edx], ebp */
    MEM32(edx + 0x4) = ebx; /* 0x1505AF96: mov dword ptr [edx + 4], ebx */
    MEM32(edx + 0x8) = edi; /* 0x1505AF99: mov dword ptr [edx + 8], edi */
    MEM32(edx + 0xC) = esi; /* 0x1505AF9C: mov dword ptr [edx + 0xc], esi */
    MEM32(edx + 0x10) = esp; /* 0x1505AF9F: mov dword ptr [edx + 0x10], esp */
    eax = MEM32(esp); /* 0x1505AFA2: mov eax, dword ptr [esp] */
    MEM32(edx + 0x14) = eax; /* 0x1505AFA5: mov dword ptr [edx + 0x14], eax */
    MEM32(edx + 0x20) = 0x56433230u; /* 0x1505AFA8: mov dword ptr [edx + 0x20], 0x56433230 */
    MEM32(edx + 0x24) = 0; /* 0x1505AFAF: mov dword ptr [edx + 0x24], 0 */
    eax = MEM32(FS_BASE + (0)); /* 0x1505AFB6: mov eax, dword ptr fs:[0] */
    MEM32(edx + 0x18) = eax; /* 0x1505AFBC: mov dword ptr [edx + 0x18], eax */
    /* cmp eax, 0xFFFFFFFFu */ /* 0x1505AFBF: cmp eax, -1 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xFFFFFFFFu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_1505AFCD; /* 0x1505AFC2: jne 0x1505afcd */
L_1505AFC4:
    MEM32(edx + 0x1C) = 0xFFFFFFFFu; /* 0x1505AFC4: mov dword ptr [edx + 0x1c], 0xffffffff */
    goto L_1505B008; /* 0x1505AFCB: jmp 0x1505b008 */
L_1505AFCD:
    ecx = MEM32(esp + 0x8); /* 0x1505AFCD: mov ecx, dword ptr [esp + 8] */
    _flag_a = (uint32_t)((ecx | ecx)); _flag_b = (uint32_t)((ecx | ecx));
    ecx = ecx | ecx; /* 0x1505AFD1: or ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1505AFDF; /* 0x1505AFD3: je 0x1505afdf */
L_1505AFD5:
    eax = MEM32(esp + 0xC); /* 0x1505AFD5: mov eax, dword ptr [esp + 0xc] */
    MEM32(edx + 0x24) = eax; /* 0x1505AFD9: mov dword ptr [edx + 0x24], eax */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx - 1; /* 0x1505AFDC: dec ecx */
    _flag_k = FK_DEC;
    if (/* dec result */ CMP_NE(_flag_a, _flag_b)) goto L_1505AFE7; /* 0x1505AFDD: jne 0x1505afe7 */
L_1505AFDF:
    eax = MEM32(eax + 0xC); /* 0x1505AFDF: mov eax, dword ptr [eax + 0xc] */
    MEM32(edx + 0x1C) = eax; /* 0x1505AFE2: mov dword ptr [edx + 0x1c], eax */
    goto L_1505B008; /* 0x1505AFE5: jmp 0x1505b008 */
L_1505AFE7:
    eax = MEM32(esp + 0x10); /* 0x1505AFE7: mov eax, dword ptr [esp + 0x10] */
    MEM32(edx + 0x1C) = eax; /* 0x1505AFEB: mov dword ptr [edx + 0x1c], eax */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx - 1; /* 0x1505AFEE: dec ecx */
    _flag_k = FK_DEC;
    if (/* dec result */ CMP_EQ(_flag_a, _flag_b)) goto L_1505B008; /* 0x1505AFEF: je 0x1505b008 */
L_1505AFF1:
    PUSH32(esp, esi); /* 0x1505AFF1: push esi */
    PUSH32(esp, edi); /* 0x1505AFF2: push edi */
    esi = esp + 0x1C; /* 0x1505AFF3: lea esi, [esp + 0x1c] */
    edi = edx + 0x28; /* 0x1505AFF7: lea edi, [edx + 0x28] */
    /* cmp ecx, 6 */ /* 0x1505AFFA: cmp ecx, 6 */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(6);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_1505B004; /* 0x1505AFFD: jbe 0x1505b004 */
L_1505AFFF:
    ecx = 6; /* 0x1505AFFF: mov ecx, 6 */
L_1505B004:
    while (ecx) { MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; --ecx; } /* 0x1505B004: rep movsd dword ptr es:[edi], dword ptr [esi] */
    edi = POP32_VAL(esp); /* 0x1505B006: pop edi */
    esi = POP32_VAL(esp); /* 0x1505B007: pop esi */
L_1505B008:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - eax; /* 0x1505B008: sub eax, eax */
    _flag_k = FK_CMP;
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1505B00A: ret  */
    RECOMP_REGS_OUT();
}

void sub_1505B020(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1505B020u);

L_1505B020:
    edi = edi; /* 0x1505B020: mov edi, edi */
    PUSH32(esp, ebp); /* 0x1505B022: push ebp */
    ebp = esp; /* 0x1505B023: mov ebp, esp */
    eax = MEM32(ebp + 0x18); /* 0x1505B025: mov eax, dword ptr [ebp + 0x18] */
    ecx = 0x100u; /* 0x1505B028: mov ecx, 0x100 */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(eax);
    _cf = (eax) != 0;
    eax = (uint32_t)(-(int32_t)eax); /* 0x1505B02D: neg eax */
    _flag_k = FK_CMP;
    { uint32_t _sa = eax, _sb = eax, _sc = (uint32_t)CMP_B(_flag_a, _flag_b); /* 0x1505B02F: sbb eax, eax */
      eax = _sc ? 0xFFFFFFFFu : 0;
      _flag_a = recomp_flags_sbb(_sa, _sb, _sc); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ecx);
    eax = eax & ecx; /* 0x1505B031: and eax, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, eax); /* 0x1505B033: push eax */
    PUSH32(esp, MEM32(ebp + 0x18)); /* 0x1505B034: push dword ptr [ebp + 0x18] */
    eax = MEM32(ebp + 0x14); /* 0x1505B037: mov eax, dword ptr [ebp + 0x14] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(eax);
    _cf = (eax) != 0;
    eax = (uint32_t)(-(int32_t)eax); /* 0x1505B03A: neg eax */
    _flag_k = FK_CMP;
    { uint32_t _sa = eax, _sb = eax, _sc = (uint32_t)CMP_B(_flag_a, _flag_b); /* 0x1505B03C: sbb eax, eax */
      eax = _sc ? 0xFFFFFFFFu : 0;
      _flag_a = recomp_flags_sbb(_sa, _sb, _sc); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ecx);
    eax = eax & ecx; /* 0x1505B03E: and eax, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, eax); /* 0x1505B040: push eax */
    eax = MEM32(ebp + 0x10); /* 0x1505B041: mov eax, dword ptr [ebp + 0x10] */
    PUSH32(esp, MEM32(ebp + 0x14)); /* 0x1505B044: push dword ptr [ebp + 0x14] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(eax);
    _cf = (eax) != 0;
    eax = (uint32_t)(-(int32_t)eax); /* 0x1505B047: neg eax */
    _flag_k = FK_CMP;
    { uint32_t _sa = eax, _sb = eax, _sc = (uint32_t)CMP_B(_flag_a, _flag_b); /* 0x1505B049: sbb eax, eax */
      eax = _sc ? 0xFFFFFFFFu : 0;
      _flag_a = recomp_flags_sbb(_sa, _sb, _sc); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ecx);
    eax = eax & ecx; /* 0x1505B04B: and eax, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, eax); /* 0x1505B04D: push eax */
    eax = MEM32(ebp + 0xC); /* 0x1505B04E: mov eax, dword ptr [ebp + 0xc] */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x1505B051: push dword ptr [ebp + 0x10] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(eax);
    _cf = (eax) != 0;
    eax = (uint32_t)(-(int32_t)eax); /* 0x1505B054: neg eax */
    _flag_k = FK_CMP;
    { uint32_t _sa = eax, _sb = eax, _sc = (uint32_t)CMP_B(_flag_a, _flag_b); /* 0x1505B056: sbb eax, eax */
      eax = _sc ? 0xFFFFFFFFu : 0;
      _flag_a = recomp_flags_sbb(_sa, _sb, _sc); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(3);
    eax = eax & 3; /* 0x1505B058: and eax, 3 */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, eax); /* 0x1505B05B: push eax */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x1505B05C: push dword ptr [ebp + 0xc] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x1505B05F: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_1505B072); /* 0x1505B062: call 0x1505b072 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x24u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x24u; /* 0x1505B067: add esp, 0x24 */
    _flag_k = FK_ADD;
    ebp = POP32_VAL(esp); /* 0x1505B06A: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1505B06B: ret  */
    RECOMP_REGS_OUT();
}

void sub_1505B072(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1505B072u);

L_1505B072:
    edi = edi; /* 0x1505B072: mov edi, edi */
    PUSH32(esp, ebp); /* 0x1505B074: push ebp */
    ebp = esp; /* 0x1505B075: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0xCu; /* 0x1505B077: sub esp, 0xc */
    _flag_k = FK_CMP;
    _flag_a = (uint32_t)(MEM32(ebp + (-0xC))); _flag_b = (uint32_t)(0);
    MEM32(ebp + (-0xC)) = MEM32(ebp + (-0xC)) & 0; /* 0x1505B07A: and dword ptr [ebp - 0xc], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    eax = MEM32(ebp + 0x20); /* 0x1505B07E: mov eax, dword ptr [ebp + 0x20] */
    ecx = MEM32(ebp + 0x10); /* 0x1505B081: mov ecx, dword ptr [ebp + 0x10] */
    edx = MEM32(ebp + 0xC); /* 0x1505B084: mov edx, dword ptr [ebp + 0xc] */
    PUSH32(esp, ebx); /* 0x1505B087: push ebx */
    ebx = MEM32(ebp + 0x24); /* 0x1505B088: mov ebx, dword ptr [ebp + 0x24] */
    PUSH32(esp, esi); /* 0x1505B08B: push esi */
    esi = MEM32(ebp + 0x18); /* 0x1505B08C: mov esi, dword ptr [ebp + 0x18] */
    PUSH32(esp, edi); /* 0x1505B08F: push edi */
    edi = MEM32(ebp + 0x8); /* 0x1505B090: mov edi, dword ptr [ebp + 8] */
    /* test edi, edi */ /* 0x1505B093: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1505B09F; /* 0x1505B095: je 0x1505b09f */
L_1505B097:
    /* test edx, edx */ /* 0x1505B097: test edx, edx */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(edx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1505B0AE; /* 0x1505B099: jne 0x1505b0ae */
L_1505B09B:
    /* test ecx, ecx */ /* 0x1505B09B: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1505B0B2; /* 0x1505B09D: je 0x1505b0b2 */
L_1505B09F:
    ecx = MEM32(ebp + 0x1C); /* 0x1505B09F: mov ecx, dword ptr [ebp + 0x1c] */
L_1505B0A2:
    MEM32(ebp + (-0xC)) = 1; /* 0x1505B0A2: mov dword ptr [ebp - 0xc], 1 */
    goto L_1505B20D; /* 0x1505B0A9: jmp 0x1505b20d */
L_1505B0AE:
    /* test ecx, ecx */ /* 0x1505B0AE: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_Z(_flag_a, _flag_b)) goto L_1505B09F; /* 0x1505B0B0: je 0x1505b09f */
L_1505B0B2:
    /* cmp MEM32(ebp + 0x14), 0 */ /* 0x1505B0B2: cmp dword ptr [ebp + 0x14], 0 */
    _flag_a = (uint32_t)(MEM32(ebp + 0x14)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_1505B0BE; /* 0x1505B0B6: jne 0x1505b0be */
L_1505B0B8:
    /* test esi, esi */ /* 0x1505B0B8: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1505B09F; /* 0x1505B0BA: jne 0x1505b09f */
L_1505B0BC:
    goto L_1505B0C2; /* 0x1505B0BC: jmp 0x1505b0c2 */
L_1505B0BE:
    /* test esi, esi */ /* 0x1505B0BE: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_Z(_flag_a, _flag_b)) goto L_1505B09F; /* 0x1505B0C0: je 0x1505b09f */
L_1505B0C2:
    ecx = MEM32(ebp + 0x1C); /* 0x1505B0C2: mov ecx, dword ptr [ebp + 0x1c] */
    /* test ecx, ecx */ /* 0x1505B0C5: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1505B0CF; /* 0x1505B0C7: jne 0x1505b0cf */
L_1505B0C9:
    /* test eax, eax */ /* 0x1505B0C9: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1505B0A2; /* 0x1505B0CB: jne 0x1505b0a2 */
L_1505B0CD:
    goto L_1505B0D3; /* 0x1505B0CD: jmp 0x1505b0d3 */
L_1505B0CF:
    /* test eax, eax */ /* 0x1505B0CF: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_Z(_flag_a, _flag_b)) goto L_1505B0A2; /* 0x1505B0D1: je 0x1505b0a2 */
L_1505B0D3:
    /* test ebx, ebx */ /* 0x1505B0D3: test ebx, ebx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ebx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1505B0DE; /* 0x1505B0D5: jne 0x1505b0de */
L_1505B0D7:
    /* cmp MEM32(ebp + 0x28), ebx */ /* 0x1505B0D7: cmp dword ptr [ebp + 0x28], ebx */
    _flag_a = (uint32_t)(MEM32(ebp + 0x28)); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_NE(_flag_a, _flag_b)) goto L_1505B0A2; /* 0x1505B0DA: jne 0x1505b0a2 */
L_1505B0DC:
    goto L_1505B0E4; /* 0x1505B0DC: jmp 0x1505b0e4 */
L_1505B0DE:
    /* cmp MEM32(ebp + 0x28), 0 */ /* 0x1505B0DE: cmp dword ptr [ebp + 0x28], 0 */
    _flag_a = (uint32_t)(MEM32(ebp + 0x28)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1505B0A2; /* 0x1505B0E2: je 0x1505b0a2 */
L_1505B0E4:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1505B0E4: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    esi = edi; /* 0x1505B0E6: mov esi, edi */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x1505B0E8: inc eax */
    _flag_k = FK_INC;
L_1505B0E9:
    /* cmp MEM8(esi), 0 */ /* 0x1505B0E9: cmp byte ptr [esi], 0 */
    _flag_a = (uint32_t)(MEM8(esi)) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1505B0F4; /* 0x1505B0EC: je 0x1505b0f4 */
L_1505B0EE:
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi + 1; /* 0x1505B0EE: inc esi */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - 1; /* 0x1505B0EF: sub eax, 1 */
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (/* sub result */ CMP_NE(_flag_a, _flag_b)) goto L_1505B0E9; /* 0x1505B0F2: jne 0x1505b0e9 */
L_1505B0F4:
    /* cmp MEM8(esi), 0x3Au */ /* 0x1505B0F4: cmp byte ptr [esi], 0x3a */
    _flag_a = (uint32_t)(MEM8(esi)) << 24; _flag_b = (uint32_t)(0x3Au) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_1505B11A; /* 0x1505B0F7: jne 0x1505b11a */
L_1505B0F9:
    /* test edx, edx */ /* 0x1505B0F9: test edx, edx */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(edx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1505B115; /* 0x1505B0FB: je 0x1505b115 */
L_1505B0FD:
    /* cmp MEM32(ebp + 0x10), 3 */ /* 0x1505B0FD: cmp dword ptr [ebp + 0x10], 3 */
    _flag_a = (uint32_t)(MEM32(ebp + 0x10)); _flag_b = (uint32_t)(3);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_B(_flag_a, _flag_b)) goto L_1505B211; /* 0x1505B101: jb 0x1505b211 */
L_1505B107:
    PUSH32(esp, 2); /* 0x1505B107: push 2 */
    PUSH32(esp, edi); /* 0x1505B109: push edi */
    PUSH32(esp, 0xFFFFFFFFu); /* 0x1505B10A: push -1 */
    PUSH32(esp, edx); /* 0x1505B10C: push edx */
    RECOMP_CALL(sub_150535C0); /* 0x1505B10D: call 0x150535c0 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x10u; /* 0x1505B112: add esp, 0x10 */
    _flag_k = FK_ADD;
L_1505B115:
    edi = esi + 0x1; /* 0x1505B115: lea edi, [esi + 1] */
    goto L_1505B121; /* 0x1505B118: jmp 0x1505b121 */
L_1505B11A:
    /* test edx, edx */ /* 0x1505B11A: test edx, edx */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(edx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1505B121; /* 0x1505B11C: je 0x1505b121 */
L_1505B11E:
    MEM8(edx) = (uint8_t)(0); /* 0x1505B11E: mov byte ptr [edx], 0 */
L_1505B121:
    _flag_a = (uint32_t)(MEM32(ebp + (-0x4))); _flag_b = (uint32_t)(0);
    MEM32(ebp + (-0x4)) = MEM32(ebp + (-0x4)) & 0; /* 0x1505B121: and dword ptr [ebp - 4], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1505B125: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x8)) = eax; /* 0x1505B127: mov dword ptr [ebp - 8], eax */
    esi = edi; /* 0x1505B12A: mov esi, edi */
    SET_LO8(eax, MEM8(edi)); /* 0x1505B12C: mov al, byte ptr [edi] */
    /* test LO8(eax), LO8(eax) */ /* 0x1505B12E: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_1505B194; /* 0x1505B130: je 0x1505b194 */
L_1505B132:
    ebx = MEM32(ebp + (-0x4)); /* 0x1505B132: mov ebx, dword ptr [ebp - 4] */
L_1505B135:
    eax = (int32_t)(int8_t)LO8(eax); /* 0x1505B135: movsx eax, al */
    PUSH32(esp, eax); /* 0x1505B138: push eax */
    RECOMP_CALL(sub_15050550); /* 0x1505B139: call 0x15050550 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1505B13E: pop ecx */
    /* test eax, eax */ /* 0x1505B13F: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1505B146; /* 0x1505B141: je 0x1505b146 */
L_1505B143:
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi + 1; /* 0x1505B143: inc esi */
    _flag_k = FK_INC;
    goto L_1505B15C; /* 0x1505B144: jmp 0x1505b15c */
L_1505B146:
    SET_LO8(eax, MEM8(esi)); /* 0x1505B146: mov al, byte ptr [esi] */
    /* cmp LO8(eax), 0x2Fu */ /* 0x1505B148: cmp al, 0x2f */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(0x2Fu) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1505B159; /* 0x1505B14A: je 0x1505b159 */
L_1505B14C:
    /* cmp LO8(eax), 0x5Cu */ /* 0x1505B14C: cmp al, 0x5c */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(0x5Cu) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1505B159; /* 0x1505B14E: je 0x1505b159 */
L_1505B150:
    /* cmp LO8(eax), 0x2Eu */ /* 0x1505B150: cmp al, 0x2e */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(0x2Eu) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_1505B15C; /* 0x1505B152: jne 0x1505b15c */
L_1505B154:
    MEM32(ebp + (-0x8)) = esi; /* 0x1505B154: mov dword ptr [ebp - 8], esi */
    goto L_1505B15C; /* 0x1505B157: jmp 0x1505b15c */
L_1505B159:
    ebx = esi + 0x1; /* 0x1505B159: lea ebx, [esi + 1] */
L_1505B15C:
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi + 1; /* 0x1505B15C: inc esi */
    _flag_k = FK_INC;
    SET_LO8(eax, MEM8(esi)); /* 0x1505B15D: mov al, byte ptr [esi] */
    /* test LO8(eax), LO8(eax) */ /* 0x1505B15F: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1505B135; /* 0x1505B161: jne 0x1505b135 */
L_1505B163:
    MEM32(ebp + (-0x4)) = ebx; /* 0x1505B163: mov dword ptr [ebp - 4], ebx */
    /* test ebx, ebx */ /* 0x1505B166: test ebx, ebx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ebx);
    _cf = 0;
    _flag_k = FK_TEST;
    ebx = MEM32(ebp + 0x24); /* 0x1505B168: mov ebx, dword ptr [ebp + 0x24] */
    if (TEST_Z(_flag_a, _flag_b)) goto L_1505B194; /* 0x1505B16B: je 0x1505b194 */
L_1505B16D:
    ecx = MEM32(ebp + 0x14); /* 0x1505B16D: mov ecx, dword ptr [ebp + 0x14] */
    /* test ecx, ecx */ /* 0x1505B170: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1505B18F; /* 0x1505B172: je 0x1505b18f */
L_1505B174:
    eax = MEM32(ebp + (-0x4)); /* 0x1505B174: mov eax, dword ptr [ebp - 4] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - edi; /* 0x1505B177: sub eax, edi */
    _flag_k = FK_CMP;
    /* cmp MEM32(ebp + 0x18), eax */ /* 0x1505B179: cmp dword ptr [ebp + 0x18], eax */
    _flag_a = (uint32_t)(MEM32(ebp + 0x18)); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_1505B207; /* 0x1505B17C: jbe 0x1505b207 */
L_1505B182:
    PUSH32(esp, eax); /* 0x1505B182: push eax */
    PUSH32(esp, edi); /* 0x1505B183: push edi */
    PUSH32(esp, 0xFFFFFFFFu); /* 0x1505B184: push -1 */
    PUSH32(esp, ecx); /* 0x1505B186: push ecx */
    RECOMP_CALL(sub_150535C0); /* 0x1505B187: call 0x150535c0 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x10u; /* 0x1505B18C: add esp, 0x10 */
    _flag_k = FK_ADD;
L_1505B18F:
    edi = MEM32(ebp + (-0x4)); /* 0x1505B18F: mov edi, dword ptr [ebp - 4] */
    goto L_1505B19E; /* 0x1505B192: jmp 0x1505b19e */
L_1505B194:
    ecx = MEM32(ebp + 0x14); /* 0x1505B194: mov ecx, dword ptr [ebp + 0x14] */
    /* test ecx, ecx */ /* 0x1505B197: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1505B19E; /* 0x1505B199: je 0x1505b19e */
L_1505B19B:
    MEM8(ecx) = (uint8_t)(0); /* 0x1505B19B: mov byte ptr [ecx], 0 */
L_1505B19E:
    eax = MEM32(ebp + (-0x8)); /* 0x1505B19E: mov eax, dword ptr [ebp - 8] */
    /* test eax, eax */ /* 0x1505B1A1: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1505B1E1; /* 0x1505B1A3: je 0x1505b1e1 */
L_1505B1A5:
    /* cmp eax, edi */ /* 0x1505B1A5: cmp eax, edi */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_B(_flag_a, _flag_b)) goto L_1505B1E1; /* 0x1505B1A7: jb 0x1505b1e1 */
L_1505B1A9:
    ecx = MEM32(ebp + 0x1C); /* 0x1505B1A9: mov ecx, dword ptr [ebp + 0x1c] */
    /* test ecx, ecx */ /* 0x1505B1AC: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1505B1C7; /* 0x1505B1AE: je 0x1505b1c7 */
L_1505B1B0:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - edi; /* 0x1505B1B0: sub eax, edi */
    _flag_k = FK_CMP;
    /* cmp MEM32(ebp + 0x20), eax */ /* 0x1505B1B2: cmp dword ptr [ebp + 0x20], eax */
    _flag_a = (uint32_t)(MEM32(ebp + 0x20)); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_1505B20A; /* 0x1505B1B5: jbe 0x1505b20a */
L_1505B1B7:
    PUSH32(esp, eax); /* 0x1505B1B7: push eax */
    PUSH32(esp, edi); /* 0x1505B1B8: push edi */
    PUSH32(esp, 0xFFFFFFFFu); /* 0x1505B1B9: push -1 */
    PUSH32(esp, ecx); /* 0x1505B1BB: push ecx */
    RECOMP_CALL(sub_150535C0); /* 0x1505B1BC: call 0x150535c0 */
    RECOMP_FLAGS_IN();
    eax = MEM32(ebp + (-0x8)); /* 0x1505B1C1: mov eax, dword ptr [ebp - 8] */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x10u; /* 0x1505B1C4: add esp, 0x10 */
    _flag_k = FK_ADD;
L_1505B1C7:
    /* test ebx, ebx */ /* 0x1505B1C7: test ebx, ebx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ebx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1505B203; /* 0x1505B1C9: je 0x1505b203 */
L_1505B1CB:
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esi = esi - eax; /* 0x1505B1CB: sub esi, eax */
    _flag_k = FK_CMP;
    /* cmp MEM32(ebp + 0x28), esi */ /* 0x1505B1CD: cmp dword ptr [ebp + 0x28], esi */
    _flag_a = (uint32_t)(MEM32(ebp + 0x28)); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_1505B207; /* 0x1505B1D0: jbe 0x1505b207 */
L_1505B1D2:
    PUSH32(esp, esi); /* 0x1505B1D2: push esi */
    PUSH32(esp, eax); /* 0x1505B1D3: push eax */
    PUSH32(esp, 0xFFFFFFFFu); /* 0x1505B1D4: push -1 */
    PUSH32(esp, ebx); /* 0x1505B1D6: push ebx */
    RECOMP_CALL(sub_150535C0); /* 0x1505B1D7: call 0x150535c0 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x10u; /* 0x1505B1DC: add esp, 0x10 */
    _flag_k = FK_ADD;
    goto L_1505B203; /* 0x1505B1DF: jmp 0x1505b203 */
L_1505B1E1:
    ecx = MEM32(ebp + 0x1C); /* 0x1505B1E1: mov ecx, dword ptr [ebp + 0x1c] */
    /* test ecx, ecx */ /* 0x1505B1E4: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1505B1FC; /* 0x1505B1E6: je 0x1505b1fc */
L_1505B1E8:
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esi = esi - edi; /* 0x1505B1E8: sub esi, edi */
    _flag_k = FK_CMP;
    /* cmp MEM32(ebp + 0x20), esi */ /* 0x1505B1EA: cmp dword ptr [ebp + 0x20], esi */
    _flag_a = (uint32_t)(MEM32(ebp + 0x20)); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_1505B20A; /* 0x1505B1ED: jbe 0x1505b20a */
L_1505B1EF:
    PUSH32(esp, esi); /* 0x1505B1EF: push esi */
    PUSH32(esp, edi); /* 0x1505B1F0: push edi */
    PUSH32(esp, 0xFFFFFFFFu); /* 0x1505B1F1: push -1 */
    PUSH32(esp, ecx); /* 0x1505B1F3: push ecx */
    RECOMP_CALL(sub_150535C0); /* 0x1505B1F4: call 0x150535c0 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x10u; /* 0x1505B1F9: add esp, 0x10 */
    _flag_k = FK_ADD;
L_1505B1FC:
    /* test ebx, ebx */ /* 0x1505B1FC: test ebx, ebx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ebx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1505B203; /* 0x1505B1FE: je 0x1505b203 */
L_1505B200:
    MEM8(ebx) = (uint8_t)(0); /* 0x1505B200: mov byte ptr [ebx], 0 */
L_1505B203:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1505B203: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_1505B272; /* 0x1505B205: jmp 0x1505b272 */
L_1505B207:
    ecx = MEM32(ebp + 0x1C); /* 0x1505B207: mov ecx, dword ptr [ebp + 0x1c] */
L_1505B20A:
    edx = MEM32(ebp + 0xC); /* 0x1505B20A: mov edx, dword ptr [ebp + 0xc] */
L_1505B20D:
    /* test edx, edx */ /* 0x1505B20D: test edx, edx */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(edx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1505B21A; /* 0x1505B20F: je 0x1505b21a */
L_1505B211:
    /* cmp MEM32(ebp + 0x10), 0 */ /* 0x1505B211: cmp dword ptr [ebp + 0x10], 0 */
    _flag_a = (uint32_t)(MEM32(ebp + 0x10)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_1505B21A; /* 0x1505B215: jbe 0x1505b21a */
L_1505B217:
    MEM8(edx) = (uint8_t)(0); /* 0x1505B217: mov byte ptr [edx], 0 */
L_1505B21A:
    eax = MEM32(ebp + 0x14); /* 0x1505B21A: mov eax, dword ptr [ebp + 0x14] */
    /* test eax, eax */ /* 0x1505B21D: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1505B22A; /* 0x1505B21F: je 0x1505b22a */
L_1505B221:
    /* cmp MEM32(ebp + 0x18), 0 */ /* 0x1505B221: cmp dword ptr [ebp + 0x18], 0 */
    _flag_a = (uint32_t)(MEM32(ebp + 0x18)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_1505B22A; /* 0x1505B225: jbe 0x1505b22a */
L_1505B227:
    MEM8(eax) = (uint8_t)(0); /* 0x1505B227: mov byte ptr [eax], 0 */
L_1505B22A:
    /* test ecx, ecx */ /* 0x1505B22A: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1505B237; /* 0x1505B22C: je 0x1505b237 */
L_1505B22E:
    /* cmp MEM32(ebp + 0x20), 0 */ /* 0x1505B22E: cmp dword ptr [ebp + 0x20], 0 */
    _flag_a = (uint32_t)(MEM32(ebp + 0x20)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_1505B237; /* 0x1505B232: jbe 0x1505b237 */
L_1505B234:
    MEM8(ecx) = (uint8_t)(0); /* 0x1505B234: mov byte ptr [ecx], 0 */
L_1505B237:
    /* test ebx, ebx */ /* 0x1505B237: test ebx, ebx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ebx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1505B244; /* 0x1505B239: je 0x1505b244 */
L_1505B23B:
    /* cmp MEM32(ebp + 0x28), 0 */ /* 0x1505B23B: cmp dword ptr [ebp + 0x28], 0 */
    _flag_a = (uint32_t)(MEM32(ebp + 0x28)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_1505B244; /* 0x1505B23F: jbe 0x1505b244 */
L_1505B241:
    MEM8(ebx) = (uint8_t)(0); /* 0x1505B241: mov byte ptr [ebx], 0 */
L_1505B244:
    RECOMP_CALL(sub_15036430); /* 0x1505B244: call 0x15036430 */
    RECOMP_FLAGS_IN();
    /* test edi, edi */ /* 0x1505B249: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1505B265; /* 0x1505B24B: jne 0x1505b265 */
L_1505B24D:
    PUSH32(esp, 0x16u); /* 0x1505B24D: push 0x16 */
    esi = POP32_VAL(esp); /* 0x1505B24F: pop esi */
    MEM32(eax) = esi; /* 0x1505B250: mov dword ptr [eax], esi */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1505B252: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, eax); /* 0x1505B254: push eax */
    PUSH32(esp, eax); /* 0x1505B255: push eax */
    PUSH32(esp, eax); /* 0x1505B256: push eax */
    PUSH32(esp, eax); /* 0x1505B257: push eax */
    PUSH32(esp, eax); /* 0x1505B258: push eax */
    RECOMP_CALL(sub_1505A110); /* 0x1505B259: call 0x1505a110 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x14u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x14u; /* 0x1505B25E: add esp, 0x14 */
    _flag_k = FK_ADD;
    eax = esi; /* 0x1505B261: mov eax, esi */
    goto L_1505B272; /* 0x1505B263: jmp 0x1505b272 */
L_1505B265:
    /* cmp MEM32(ebp + (-0xC)), 0 */ /* 0x1505B265: cmp dword ptr [ebp - 0xc], 0 */
    _flag_a = (uint32_t)(MEM32(ebp + (-0xC))); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_NE(_flag_a, _flag_b)) goto L_1505B24D; /* 0x1505B269: jne 0x1505b24d */
L_1505B26B:
    PUSH32(esp, 0x22u); /* 0x1505B26B: push 0x22 */
    ecx = POP32_VAL(esp); /* 0x1505B26D: pop ecx */
    MEM32(eax) = ecx; /* 0x1505B26E: mov dword ptr [eax], ecx */
    eax = ecx; /* 0x1505B270: mov eax, ecx */
L_1505B272:
    edi = POP32_VAL(esp); /* 0x1505B272: pop edi */
    esi = POP32_VAL(esp); /* 0x1505B273: pop esi */
    ebx = POP32_VAL(esp); /* 0x1505B274: pop ebx */
    esp = ebp; ebp = POP32_VAL(esp); /* 0x1505B275: leave  */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1505B276: ret  */
    RECOMP_REGS_OUT();
}

void sub_1505B280(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1505B280u);

L_1505B280:
    edi = edi; /* 0x1505B280: mov edi, edi */
    PUSH32(esp, ebp); /* 0x1505B282: push ebp */
    ebp = esp; /* 0x1505B283: mov ebp, esp */
    PUSH32(esp, ecx); /* 0x1505B285: push ecx */
    PUSH32(esp, ecx); /* 0x1505B286: push ecx */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x8))); _flag_b = (uint32_t)(0);
    MEM32(ebp + (-0x8)) = MEM32(ebp + (-0x8)) & 0; /* 0x1505B287: and dword ptr [ebp - 8], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    eax = MEM32(ebp + 0x18); /* 0x1505B28B: mov eax, dword ptr [ebp + 0x18] */
    PUSH32(esp, ebx); /* 0x1505B28E: push ebx */
    ebx = MEM32(ebp + 0xC); /* 0x1505B28F: mov ebx, dword ptr [ebp + 0xc] */
    PUSH32(esp, esi); /* 0x1505B292: push esi */
    PUSH32(esp, edi); /* 0x1505B293: push edi */
    edi = MEM32(ebp + 0x8); /* 0x1505B294: mov edi, dword ptr [ebp + 8] */
    /* test edi, edi */ /* 0x1505B297: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1505B2A4; /* 0x1505B299: je 0x1505b2a4 */
L_1505B29B:
    /* test ebx, ebx */ /* 0x1505B29B: test ebx, ebx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ebx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1505B2B6; /* 0x1505B29D: jne 0x1505b2b6 */
L_1505B29F:
    /* cmp MEM32(ebp + 0x10), ebx */ /* 0x1505B29F: cmp dword ptr [ebp + 0x10], ebx */
    _flag_a = (uint32_t)(MEM32(ebp + 0x10)); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1505B2BC; /* 0x1505B2A2: je 0x1505b2bc */
L_1505B2A4:
    edx = MEM32(ebp + 0x1C); /* 0x1505B2A4: mov edx, dword ptr [ebp + 0x1c] */
L_1505B2A7:
    ecx = MEM32(ebp + 0x24); /* 0x1505B2A7: mov ecx, dword ptr [ebp + 0x24] */
L_1505B2AA:
    MEM32(ebp + (-0x8)) = 1; /* 0x1505B2AA: mov dword ptr [ebp - 8], 1 */
    goto L_1505B42B; /* 0x1505B2B1: jmp 0x1505b42b */
L_1505B2B6:
    /* cmp MEM32(ebp + 0x10), 0 */ /* 0x1505B2B6: cmp dword ptr [ebp + 0x10], 0 */
    _flag_a = (uint32_t)(MEM32(ebp + 0x10)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1505B2A4; /* 0x1505B2BA: je 0x1505b2a4 */
L_1505B2BC:
    /* cmp MEM32(ebp + 0x14), 0 */ /* 0x1505B2BC: cmp dword ptr [ebp + 0x14], 0 */
    _flag_a = (uint32_t)(MEM32(ebp + 0x14)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_1505B2C8; /* 0x1505B2C0: jne 0x1505b2c8 */
L_1505B2C2:
    /* test eax, eax */ /* 0x1505B2C2: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1505B2A4; /* 0x1505B2C4: jne 0x1505b2a4 */
L_1505B2C6:
    goto L_1505B2CC; /* 0x1505B2C6: jmp 0x1505b2cc */
L_1505B2C8:
    /* test eax, eax */ /* 0x1505B2C8: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_Z(_flag_a, _flag_b)) goto L_1505B2A4; /* 0x1505B2CA: je 0x1505b2a4 */
L_1505B2CC:
    edx = MEM32(ebp + 0x1C); /* 0x1505B2CC: mov edx, dword ptr [ebp + 0x1c] */
    /* test edx, edx */ /* 0x1505B2CF: test edx, edx */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(edx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1505B2DA; /* 0x1505B2D1: jne 0x1505b2da */
L_1505B2D3:
    /* cmp MEM32(ebp + 0x20), edx */ /* 0x1505B2D3: cmp dword ptr [ebp + 0x20], edx */
    _flag_a = (uint32_t)(MEM32(ebp + 0x20)); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_NE(_flag_a, _flag_b)) goto L_1505B2A7; /* 0x1505B2D6: jne 0x1505b2a7 */
L_1505B2D8:
    goto L_1505B2E0; /* 0x1505B2D8: jmp 0x1505b2e0 */
L_1505B2DA:
    /* cmp MEM32(ebp + 0x20), 0 */ /* 0x1505B2DA: cmp dword ptr [ebp + 0x20], 0 */
    _flag_a = (uint32_t)(MEM32(ebp + 0x20)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1505B2A7; /* 0x1505B2DE: je 0x1505b2a7 */
L_1505B2E0:
    ecx = MEM32(ebp + 0x24); /* 0x1505B2E0: mov ecx, dword ptr [ebp + 0x24] */
    /* test ecx, ecx */ /* 0x1505B2E3: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1505B2EE; /* 0x1505B2E5: jne 0x1505b2ee */
L_1505B2E7:
    /* cmp MEM32(ebp + 0x28), ecx */ /* 0x1505B2E7: cmp dword ptr [ebp + 0x28], ecx */
    _flag_a = (uint32_t)(MEM32(ebp + 0x28)); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_NE(_flag_a, _flag_b)) goto L_1505B2AA; /* 0x1505B2EA: jne 0x1505b2aa */
L_1505B2EC:
    goto L_1505B2F4; /* 0x1505B2EC: jmp 0x1505b2f4 */
L_1505B2EE:
    /* cmp MEM32(ebp + 0x28), 0 */ /* 0x1505B2EE: cmp dword ptr [ebp + 0x28], 0 */
    _flag_a = (uint32_t)(MEM32(ebp + 0x28)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1505B2AA; /* 0x1505B2F2: je 0x1505b2aa */
L_1505B2F4:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1505B2F4: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    esi = edi; /* 0x1505B2F6: mov esi, edi */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x1505B2F8: inc eax */
    _flag_k = FK_INC;
L_1505B2F9:
    /* cmp MEM8(esi), 0 */ /* 0x1505B2F9: cmp byte ptr [esi], 0 */
    _flag_a = (uint32_t)(MEM8(esi)) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1505B304; /* 0x1505B2FC: je 0x1505b304 */
L_1505B2FE:
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi + 1; /* 0x1505B2FE: inc esi */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - 1; /* 0x1505B2FF: sub eax, 1 */
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (/* sub result */ CMP_NE(_flag_a, _flag_b)) goto L_1505B2F9; /* 0x1505B302: jne 0x1505b2f9 */
L_1505B304:
    /* cmp MEM8(esi), 0x3Au */ /* 0x1505B304: cmp byte ptr [esi], 0x3a */
    _flag_a = (uint32_t)(MEM8(esi)) << 24; _flag_b = (uint32_t)(0x3Au) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_1505B32E; /* 0x1505B307: jne 0x1505b32e */
L_1505B309:
    /* test ebx, ebx */ /* 0x1505B309: test ebx, ebx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ebx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1505B326; /* 0x1505B30B: je 0x1505b326 */
L_1505B30D:
    /* cmp MEM32(ebp + 0x10), 3 */ /* 0x1505B30D: cmp dword ptr [ebp + 0x10], 3 */
    _flag_a = (uint32_t)(MEM32(ebp + 0x10)); _flag_b = (uint32_t)(3);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_B(_flag_a, _flag_b)) goto L_1505B42F; /* 0x1505B311: jb 0x1505b42f */
L_1505B317:
    PUSH32(esp, 2); /* 0x1505B317: push 2 */
    PUSH32(esp, edi); /* 0x1505B319: push edi */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x1505B31A: push dword ptr [ebp + 0x10] */
    PUSH32(esp, ebx); /* 0x1505B31D: push ebx */
    RECOMP_CALL(sub_1508EBC0); /* 0x1505B31E: call 0x1508ebc0 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x10u; /* 0x1505B323: add esp, 0x10 */
    _flag_k = FK_ADD;
L_1505B326:
    edi = esi + 0x1; /* 0x1505B326: lea edi, [esi + 1] */
    MEM32(ebp + 0x8) = edi; /* 0x1505B329: mov dword ptr [ebp + 8], edi */
    goto L_1505B335; /* 0x1505B32C: jmp 0x1505b335 */
L_1505B32E:
    /* test ebx, ebx */ /* 0x1505B32E: test ebx, ebx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ebx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1505B335; /* 0x1505B330: je 0x1505b335 */
L_1505B332:
    MEM8(ebx) = (uint8_t)(0); /* 0x1505B332: mov byte ptr [ebx], 0 */
L_1505B335:
    SET_LO8(eax, MEM8(edi)); /* 0x1505B335: mov al, byte ptr [edi] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ebx = 0; /* 0x1505B337: xor ebx, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(MEM32(ebp + (-0x4))); _flag_b = (uint32_t)(0);
    MEM32(ebp + (-0x4)) = MEM32(ebp + (-0x4)) & 0; /* 0x1505B339: and dword ptr [ebp - 4], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    esi = edi; /* 0x1505B33D: mov esi, edi */
    /* test LO8(eax), LO8(eax) */ /* 0x1505B33F: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_1505B3A5; /* 0x1505B341: je 0x1505b3a5 */
L_1505B343:
    edi = MEM32(ebp + (-0x4)); /* 0x1505B343: mov edi, dword ptr [ebp - 4] */
L_1505B346:
    eax = (int32_t)(int8_t)LO8(eax); /* 0x1505B346: movsx eax, al */
    PUSH32(esp, eax); /* 0x1505B349: push eax */
    RECOMP_CALL(sub_15050550); /* 0x1505B34A: call 0x15050550 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1505B34F: pop ecx */
    /* test eax, eax */ /* 0x1505B350: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1505B357; /* 0x1505B352: je 0x1505b357 */
L_1505B354:
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi + 1; /* 0x1505B354: inc esi */
    _flag_k = FK_INC;
    goto L_1505B36C; /* 0x1505B355: jmp 0x1505b36c */
L_1505B357:
    SET_LO8(eax, MEM8(esi)); /* 0x1505B357: mov al, byte ptr [esi] */
    /* cmp LO8(eax), 0x2Fu */ /* 0x1505B359: cmp al, 0x2f */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(0x2Fu) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1505B369; /* 0x1505B35B: je 0x1505b369 */
L_1505B35D:
    /* cmp LO8(eax), 0x5Cu */ /* 0x1505B35D: cmp al, 0x5c */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(0x5Cu) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1505B369; /* 0x1505B35F: je 0x1505b369 */
L_1505B361:
    /* cmp LO8(eax), 0x2Eu */ /* 0x1505B361: cmp al, 0x2e */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(0x2Eu) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_1505B36C; /* 0x1505B363: jne 0x1505b36c */
L_1505B365:
    ebx = esi; /* 0x1505B365: mov ebx, esi */
    goto L_1505B36C; /* 0x1505B367: jmp 0x1505b36c */
L_1505B369:
    edi = esi + 0x1; /* 0x1505B369: lea edi, [esi + 1] */
L_1505B36C:
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi + 1; /* 0x1505B36C: inc esi */
    _flag_k = FK_INC;
    SET_LO8(eax, MEM8(esi)); /* 0x1505B36D: mov al, byte ptr [esi] */
    /* test LO8(eax), LO8(eax) */ /* 0x1505B36F: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1505B346; /* 0x1505B371: jne 0x1505b346 */
L_1505B373:
    MEM32(ebp + (-0x4)) = edi; /* 0x1505B373: mov dword ptr [ebp - 4], edi */
    /* test edi, edi */ /* 0x1505B376: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    edi = MEM32(ebp + 0x8); /* 0x1505B378: mov edi, dword ptr [ebp + 8] */
    if (TEST_Z(_flag_a, _flag_b)) goto L_1505B3A5; /* 0x1505B37B: je 0x1505b3a5 */
L_1505B37D:
    ecx = MEM32(ebp + 0x14); /* 0x1505B37D: mov ecx, dword ptr [ebp + 0x14] */
    /* test ecx, ecx */ /* 0x1505B380: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1505B3A0; /* 0x1505B382: je 0x1505b3a0 */
L_1505B384:
    eax = MEM32(ebp + (-0x4)); /* 0x1505B384: mov eax, dword ptr [ebp - 4] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - edi; /* 0x1505B387: sub eax, edi */
    _flag_k = FK_CMP;
    /* cmp MEM32(ebp + 0x18), eax */ /* 0x1505B389: cmp dword ptr [ebp + 0x18], eax */
    _flag_a = (uint32_t)(MEM32(ebp + 0x18)); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_1505B422; /* 0x1505B38C: jbe 0x1505b422 */
L_1505B392:
    PUSH32(esp, eax); /* 0x1505B392: push eax */
    PUSH32(esp, edi); /* 0x1505B393: push edi */
    PUSH32(esp, MEM32(ebp + 0x18)); /* 0x1505B394: push dword ptr [ebp + 0x18] */
    PUSH32(esp, ecx); /* 0x1505B397: push ecx */
    RECOMP_CALL(sub_1508EBC0); /* 0x1505B398: call 0x1508ebc0 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x10u; /* 0x1505B39D: add esp, 0x10 */
    _flag_k = FK_ADD;
L_1505B3A0:
    edi = MEM32(ebp + (-0x4)); /* 0x1505B3A0: mov edi, dword ptr [ebp - 4] */
    goto L_1505B3AF; /* 0x1505B3A3: jmp 0x1505b3af */
L_1505B3A5:
    ecx = MEM32(ebp + 0x14); /* 0x1505B3A5: mov ecx, dword ptr [ebp + 0x14] */
    /* test ecx, ecx */ /* 0x1505B3A8: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1505B3AF; /* 0x1505B3AA: je 0x1505b3af */
L_1505B3AC:
    MEM8(ecx) = (uint8_t)(0); /* 0x1505B3AC: mov byte ptr [ecx], 0 */
L_1505B3AF:
    /* test ebx, ebx */ /* 0x1505B3AF: test ebx, ebx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ebx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1505B3F3; /* 0x1505B3B1: je 0x1505b3f3 */
L_1505B3B3:
    /* cmp ebx, edi */ /* 0x1505B3B3: cmp ebx, edi */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_B(_flag_a, _flag_b)) goto L_1505B3F3; /* 0x1505B3B5: jb 0x1505b3f3 */
L_1505B3B7:
    ecx = MEM32(ebp + 0x1C); /* 0x1505B3B7: mov ecx, dword ptr [ebp + 0x1c] */
    /* test ecx, ecx */ /* 0x1505B3BA: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1505B3D5; /* 0x1505B3BC: je 0x1505b3d5 */
L_1505B3BE:
    eax = ebx; /* 0x1505B3BE: mov eax, ebx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - edi; /* 0x1505B3C0: sub eax, edi */
    _flag_k = FK_CMP;
    /* cmp MEM32(ebp + 0x20), eax */ /* 0x1505B3C2: cmp dword ptr [ebp + 0x20], eax */
    _flag_a = (uint32_t)(MEM32(ebp + 0x20)); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_1505B422; /* 0x1505B3C5: jbe 0x1505b422 */
L_1505B3C7:
    PUSH32(esp, eax); /* 0x1505B3C7: push eax */
    PUSH32(esp, edi); /* 0x1505B3C8: push edi */
    PUSH32(esp, MEM32(ebp + 0x20)); /* 0x1505B3C9: push dword ptr [ebp + 0x20] */
    PUSH32(esp, ecx); /* 0x1505B3CC: push ecx */
    RECOMP_CALL(sub_1508EBC0); /* 0x1505B3CD: call 0x1508ebc0 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x10u; /* 0x1505B3D2: add esp, 0x10 */
    _flag_k = FK_ADD;
L_1505B3D5:
    ecx = MEM32(ebp + 0x24); /* 0x1505B3D5: mov ecx, dword ptr [ebp + 0x24] */
    /* test ecx, ecx */ /* 0x1505B3D8: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1505B419; /* 0x1505B3DA: je 0x1505b419 */
L_1505B3DC:
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esi = esi - ebx; /* 0x1505B3DC: sub esi, ebx */
    _flag_k = FK_CMP;
    /* cmp MEM32(ebp + 0x28), esi */ /* 0x1505B3DE: cmp dword ptr [ebp + 0x28], esi */
    _flag_a = (uint32_t)(MEM32(ebp + 0x28)); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_1505B425; /* 0x1505B3E1: jbe 0x1505b425 */
L_1505B3E3:
    PUSH32(esp, esi); /* 0x1505B3E3: push esi */
    PUSH32(esp, ebx); /* 0x1505B3E4: push ebx */
    PUSH32(esp, MEM32(ebp + 0x28)); /* 0x1505B3E5: push dword ptr [ebp + 0x28] */
    PUSH32(esp, ecx); /* 0x1505B3E8: push ecx */
    RECOMP_CALL(sub_1508EBC0); /* 0x1505B3E9: call 0x1508ebc0 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x10u; /* 0x1505B3EE: add esp, 0x10 */
    _flag_k = FK_ADD;
    goto L_1505B419; /* 0x1505B3F1: jmp 0x1505b419 */
L_1505B3F3:
    edx = MEM32(ebp + 0x1C); /* 0x1505B3F3: mov edx, dword ptr [ebp + 0x1c] */
    /* test edx, edx */ /* 0x1505B3F6: test edx, edx */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(edx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1505B40F; /* 0x1505B3F8: je 0x1505b40f */
L_1505B3FA:
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esi = esi - edi; /* 0x1505B3FA: sub esi, edi */
    _flag_k = FK_CMP;
    /* cmp MEM32(ebp + 0x20), esi */ /* 0x1505B3FC: cmp dword ptr [ebp + 0x20], esi */
    _flag_a = (uint32_t)(MEM32(ebp + 0x20)); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_1505B41D; /* 0x1505B3FF: jbe 0x1505b41d */
L_1505B401:
    PUSH32(esp, esi); /* 0x1505B401: push esi */
    PUSH32(esp, edi); /* 0x1505B402: push edi */
    PUSH32(esp, MEM32(ebp + 0x20)); /* 0x1505B403: push dword ptr [ebp + 0x20] */
    PUSH32(esp, edx); /* 0x1505B406: push edx */
    RECOMP_CALL(sub_1508EBC0); /* 0x1505B407: call 0x1508ebc0 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x10u; /* 0x1505B40C: add esp, 0x10 */
    _flag_k = FK_ADD;
L_1505B40F:
    eax = MEM32(ebp + 0x24); /* 0x1505B40F: mov eax, dword ptr [ebp + 0x24] */
    /* test eax, eax */ /* 0x1505B412: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1505B419; /* 0x1505B414: je 0x1505b419 */
L_1505B416:
    MEM8(eax) = (uint8_t)(0); /* 0x1505B416: mov byte ptr [eax], 0 */
L_1505B419:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1505B419: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_1505B48C; /* 0x1505B41B: jmp 0x1505b48c */
L_1505B41D:
    ecx = MEM32(ebp + 0x24); /* 0x1505B41D: mov ecx, dword ptr [ebp + 0x24] */
    goto L_1505B428; /* 0x1505B420: jmp 0x1505b428 */
L_1505B422:
    ecx = MEM32(ebp + 0x24); /* 0x1505B422: mov ecx, dword ptr [ebp + 0x24] */
L_1505B425:
    edx = MEM32(ebp + 0x1C); /* 0x1505B425: mov edx, dword ptr [ebp + 0x1c] */
L_1505B428:
    ebx = MEM32(ebp + 0xC); /* 0x1505B428: mov ebx, dword ptr [ebp + 0xc] */
L_1505B42B:
    /* test ebx, ebx */ /* 0x1505B42B: test ebx, ebx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ebx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1505B438; /* 0x1505B42D: je 0x1505b438 */
L_1505B42F:
    /* cmp MEM32(ebp + 0x10), 0 */ /* 0x1505B42F: cmp dword ptr [ebp + 0x10], 0 */
    _flag_a = (uint32_t)(MEM32(ebp + 0x10)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_1505B438; /* 0x1505B433: jbe 0x1505b438 */
L_1505B435:
    MEM8(ebx) = (uint8_t)(0); /* 0x1505B435: mov byte ptr [ebx], 0 */
L_1505B438:
    eax = MEM32(ebp + 0x14); /* 0x1505B438: mov eax, dword ptr [ebp + 0x14] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ebx = 0; /* 0x1505B43B: xor ebx, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
    /* test eax, eax */ /* 0x1505B43D: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1505B448; /* 0x1505B43F: je 0x1505b448 */
L_1505B441:
    /* cmp MEM32(ebp + 0x18), ebx */ /* 0x1505B441: cmp dword ptr [ebp + 0x18], ebx */
    _flag_a = (uint32_t)(MEM32(ebp + 0x18)); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_1505B448; /* 0x1505B444: jbe 0x1505b448 */
L_1505B446:
    MEM8(eax) = (uint8_t)(LO8(ebx)); /* 0x1505B446: mov byte ptr [eax], bl */
L_1505B448:
    /* test edx, edx */ /* 0x1505B448: test edx, edx */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(edx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1505B454; /* 0x1505B44A: je 0x1505b454 */
L_1505B44C:
    /* cmp MEM32(ebp + 0x20), 0 */ /* 0x1505B44C: cmp dword ptr [ebp + 0x20], 0 */
    _flag_a = (uint32_t)(MEM32(ebp + 0x20)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_1505B454; /* 0x1505B450: jbe 0x1505b454 */
L_1505B452:
    MEM8(edx) = (uint8_t)(LO8(ebx)); /* 0x1505B452: mov byte ptr [edx], bl */
L_1505B454:
    /* test ecx, ecx */ /* 0x1505B454: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1505B460; /* 0x1505B456: je 0x1505b460 */
L_1505B458:
    /* cmp MEM32(ebp + 0x28), 0 */ /* 0x1505B458: cmp dword ptr [ebp + 0x28], 0 */
    _flag_a = (uint32_t)(MEM32(ebp + 0x28)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_1505B460; /* 0x1505B45C: jbe 0x1505b460 */
L_1505B45E:
    MEM8(ecx) = (uint8_t)(LO8(ebx)); /* 0x1505B45E: mov byte ptr [ecx], bl */
L_1505B460:
    RECOMP_CALL(sub_15036430); /* 0x1505B460: call 0x15036430 */
    RECOMP_FLAGS_IN();
    /* test edi, edi */ /* 0x1505B465: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1505B47F; /* 0x1505B467: jne 0x1505b47f */
L_1505B469:
    PUSH32(esp, 0x16u); /* 0x1505B469: push 0x16 */
    esi = POP32_VAL(esp); /* 0x1505B46B: pop esi */
    PUSH32(esp, ebx); /* 0x1505B46C: push ebx */
    PUSH32(esp, ebx); /* 0x1505B46D: push ebx */
    PUSH32(esp, ebx); /* 0x1505B46E: push ebx */
    PUSH32(esp, ebx); /* 0x1505B46F: push ebx */
    PUSH32(esp, ebx); /* 0x1505B470: push ebx */
    MEM32(eax) = esi; /* 0x1505B471: mov dword ptr [eax], esi */
    RECOMP_CALL(sub_1505A110); /* 0x1505B473: call 0x1505a110 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x14u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x14u; /* 0x1505B478: add esp, 0x14 */
    _flag_k = FK_ADD;
    eax = esi; /* 0x1505B47B: mov eax, esi */
    goto L_1505B48C; /* 0x1505B47D: jmp 0x1505b48c */
L_1505B47F:
    /* cmp MEM32(ebp + (-0x8)), 0 */ /* 0x1505B47F: cmp dword ptr [ebp - 8], 0 */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x8))); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_NE(_flag_a, _flag_b)) goto L_1505B469; /* 0x1505B483: jne 0x1505b469 */
L_1505B485:
    PUSH32(esp, 0x22u); /* 0x1505B485: push 0x22 */
    ecx = POP32_VAL(esp); /* 0x1505B487: pop ecx */
    MEM32(eax) = ecx; /* 0x1505B488: mov dword ptr [eax], ecx */
    eax = ecx; /* 0x1505B48A: mov eax, ecx */
L_1505B48C:
    edi = POP32_VAL(esp); /* 0x1505B48C: pop edi */
    esi = POP32_VAL(esp); /* 0x1505B48D: pop esi */
    ebx = POP32_VAL(esp); /* 0x1505B48E: pop ebx */
    esp = ebp; ebp = POP32_VAL(esp); /* 0x1505B48F: leave  */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1505B490: ret  */
    RECOMP_REGS_OUT();
}

void sub_1505B4A0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1505B4A0u);

L_1505B4A0:
    edi = edi; /* 0x1505B4A0: mov edi, edi */
    PUSH32(esp, ebp); /* 0x1505B4A2: push ebp */
    ebp = esp; /* 0x1505B4A3: mov ebp, esp */
    PUSH32(esp, esi); /* 0x1505B4A5: push esi */
    PUSH32(esp, edi); /* 0x1505B4A6: push edi */
    RECOMP_CALL(sub_15068840); /* 0x1505B4A7: call 0x15068840 */
    RECOMP_FLAGS_IN();
    edi = eax; /* 0x1505B4AC: mov edi, eax */
    /* test edi, edi */ /* 0x1505B4AE: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1505B59C; /* 0x1505B4B0: je 0x1505b59c */
L_1505B4B6:
    esi = MEM32(edi + 0x24); /* 0x1505B4B6: mov esi, dword ptr [edi + 0x24] */
    /* test esi, esi */ /* 0x1505B4B9: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1505B4D8; /* 0x1505B4BB: jne 0x1505b4d8 */
L_1505B4BD:
    PUSH32(esp, 1); /* 0x1505B4BD: push 1 */
    PUSH32(esp, 0x86u); /* 0x1505B4BF: push 0x86 */
    RECOMP_CALL(sub_15048EE2); /* 0x1505B4C4: call 0x15048ee2 */
    RECOMP_FLAGS_IN();
    esi = eax; /* 0x1505B4C9: mov esi, eax */
    MEM32(edi + 0x24) = esi; /* 0x1505B4CB: mov dword ptr [edi + 0x24], esi */
    ecx = POP32_VAL(esp); /* 0x1505B4CE: pop ecx */
    ecx = POP32_VAL(esp); /* 0x1505B4CF: pop ecx */
    /* test esi, esi */ /* 0x1505B4D0: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1505B59C; /* 0x1505B4D2: je 0x1505b59c */
L_1505B4D8:
    eax = MEM32(ebp + 0x8); /* 0x1505B4D8: mov eax, dword ptr [ebp + 8] */
    PUSH32(esp, ebx); /* 0x1505B4DB: push ebx */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ebx = 0; /* 0x1505B4DC: xor ebx, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM8(esi) = (uint8_t)(LO8(ebx)); /* 0x1505B4DE: mov byte ptr [esi], bl */
    /* test eax, eax */ /* 0x1505B4E0: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1505B531; /* 0x1505B4E2: je 0x1505b531 */
L_1505B4E4:
    /* cmp MEM8(eax), LO8(ebx) */ /* 0x1505B4E4: cmp byte ptr [eax], bl */
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(ebx)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1505B531; /* 0x1505B4E6: je 0x1505b531 */
L_1505B4E8:
    PUSH32(esp, 0x82u); /* 0x1505B4E8: push 0x82 */
    PUSH32(esp, eax); /* 0x1505B4ED: push eax */
    PUSH32(esp, 0x86u); /* 0x1505B4EE: push 0x86 */
    PUSH32(esp, esi); /* 0x1505B4F3: push esi */
    RECOMP_CALL(sub_15052CF0); /* 0x1505B4F4: call 0x15052cf0 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x10u; /* 0x1505B4F9: add esp, 0x10 */
    _flag_k = FK_ADD;
    /* test eax, eax */ /* 0x1505B4FC: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1505B50D; /* 0x1505B4FE: je 0x1505b50d */
L_1505B500:
    PUSH32(esp, ebx); /* 0x1505B500: push ebx */
    PUSH32(esp, ebx); /* 0x1505B501: push ebx */
    PUSH32(esp, ebx); /* 0x1505B502: push ebx */
    PUSH32(esp, ebx); /* 0x1505B503: push ebx */
    PUSH32(esp, ebx); /* 0x1505B504: push ebx */
    RECOMP_CALL(sub_1505A11B); /* 0x1505B505: call 0x1505a11b */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x14u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x14u; /* 0x1505B50A: add esp, 0x14 */
    _flag_k = FK_ADD;
L_1505B50D:
    PUSH32(esp, 0x15005C9Cu); /* 0x1505B50D: push 0x15005c9c */
    PUSH32(esp, 0x86u); /* 0x1505B512: push 0x86 */
    PUSH32(esp, esi); /* 0x1505B517: push esi */
    RECOMP_CALL(sub_1508E450); /* 0x1505B518: call 0x1508e450 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x1505B51D: add esp, 0xc */
    _flag_k = FK_ADD;
    /* test eax, eax */ /* 0x1505B520: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1505B531; /* 0x1505B522: je 0x1505b531 */
L_1505B524:
    PUSH32(esp, ebx); /* 0x1505B524: push ebx */
    PUSH32(esp, ebx); /* 0x1505B525: push ebx */
    PUSH32(esp, ebx); /* 0x1505B526: push ebx */
    PUSH32(esp, ebx); /* 0x1505B527: push ebx */
    PUSH32(esp, ebx); /* 0x1505B528: push ebx */
    RECOMP_CALL(sub_1505A11B); /* 0x1505B529: call 0x1505a11b */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x14u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x14u; /* 0x1505B52E: add esp, 0x14 */
    _flag_k = FK_ADD;
L_1505B531:
    RECOMP_CALL(sub_15036430); /* 0x1505B531: call 0x15036430 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, MEM32(eax)); /* 0x1505B536: push dword ptr [eax] */
    RECOMP_CALL(sub_15059547); /* 0x1505B538: call 0x15059547 */
    RECOMP_FLAGS_IN();
    edx = esi; /* 0x1505B53D: mov edx, esi */
    edi = eax; /* 0x1505B53F: mov edi, eax */
    ecx = POP32_VAL(esp); /* 0x1505B541: pop ecx */
    eax = edx + 0x1; /* 0x1505B542: lea eax, [edx + 1] */
L_1505B545:
    SET_LO8(ecx, MEM8(edx)); /* 0x1505B545: mov cl, byte ptr [edx] */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(1);
    edx = edx + 1; /* 0x1505B547: inc edx */
    _flag_k = FK_INC;
    /* test LO8(ecx), LO8(ecx) */ /* 0x1505B548: test cl, cl */
    _flag_a = (uint32_t)(LO8(ecx)) << 24; _flag_b = (uint32_t)(LO8(ecx)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1505B545; /* 0x1505B54A: jne 0x1505b545 */
L_1505B54C:
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    edx = edx - eax; /* 0x1505B54C: sub edx, eax */
    _flag_k = FK_CMP;
    eax = 0x84u; /* 0x1505B54E: mov eax, 0x84 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - edx; /* 0x1505B553: sub eax, edx */
    _flag_k = FK_CMP;
    PUSH32(esp, eax); /* 0x1505B555: push eax */
    PUSH32(esp, edi); /* 0x1505B556: push edi */
    edi = 0x86u; /* 0x1505B557: mov edi, 0x86 */
    PUSH32(esp, edi); /* 0x1505B55C: push edi */
    PUSH32(esp, esi); /* 0x1505B55D: push esi */
    RECOMP_CALL(sub_1508E8F0); /* 0x1505B55E: call 0x1508e8f0 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x10u; /* 0x1505B563: add esp, 0x10 */
    _flag_k = FK_ADD;
    /* test eax, eax */ /* 0x1505B566: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1505B577; /* 0x1505B568: je 0x1505b577 */
L_1505B56A:
    PUSH32(esp, ebx); /* 0x1505B56A: push ebx */
    PUSH32(esp, ebx); /* 0x1505B56B: push ebx */
    PUSH32(esp, ebx); /* 0x1505B56C: push ebx */
    PUSH32(esp, ebx); /* 0x1505B56D: push ebx */
    PUSH32(esp, ebx); /* 0x1505B56E: push ebx */
    RECOMP_CALL(sub_1505A11B); /* 0x1505B56F: call 0x1505a11b */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x14u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x14u; /* 0x1505B574: add esp, 0x14 */
    _flag_k = FK_ADD;
L_1505B577:
    PUSH32(esp, 0x15005B2Cu); /* 0x1505B577: push 0x15005b2c */
    PUSH32(esp, edi); /* 0x1505B57C: push edi */
    PUSH32(esp, esi); /* 0x1505B57D: push esi */
    RECOMP_CALL(sub_1508E450); /* 0x1505B57E: call 0x1508e450 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x1505B583: add esp, 0xc */
    _flag_k = FK_ADD;
    /* test eax, eax */ /* 0x1505B586: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1505B597; /* 0x1505B588: je 0x1505b597 */
L_1505B58A:
    PUSH32(esp, ebx); /* 0x1505B58A: push ebx */
    PUSH32(esp, ebx); /* 0x1505B58B: push ebx */
    PUSH32(esp, ebx); /* 0x1505B58C: push ebx */
    PUSH32(esp, ebx); /* 0x1505B58D: push ebx */
    PUSH32(esp, ebx); /* 0x1505B58E: push ebx */
    RECOMP_CALL(sub_1505A11B); /* 0x1505B58F: call 0x1505a11b */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x14u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x14u; /* 0x1505B594: add esp, 0x14 */
    _flag_k = FK_ADD;
L_1505B597:
    eax = esi; /* 0x1505B597: mov eax, esi */
    ebx = POP32_VAL(esp); /* 0x1505B599: pop ebx */
    goto L_1505B59E; /* 0x1505B59A: jmp 0x1505b59e */
L_1505B59C:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1505B59C: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
L_1505B59E:
    edi = POP32_VAL(esp); /* 0x1505B59E: pop edi */
    esi = POP32_VAL(esp); /* 0x1505B59F: pop esi */
    ebp = POP32_VAL(esp); /* 0x1505B5A0: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1505B5A1: ret  */
    RECOMP_REGS_OUT();
}

void sub_1505B5B0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1505B5B0u);

L_1505B5B0:
    edi = edi; /* 0x1505B5B0: mov edi, edi */
    PUSH32(esp, ebp); /* 0x1505B5B2: push ebp */
    ebp = esp; /* 0x1505B5B3: mov ebp, esp */
    PUSH32(esp, ecx); /* 0x1505B5B5: push ecx */
    PUSH32(esp, ebx); /* 0x1505B5B6: push ebx */
    PUSH32(esp, esi); /* 0x1505B5B7: push esi */
    esi = MEM32(ebp + 0x8); /* 0x1505B5B8: mov esi, dword ptr [ebp + 8] */
    /* test esi, esi */ /* 0x1505B5BB: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1505B5DF; /* 0x1505B5BD: jne 0x1505b5df */
L_1505B5BF:
    RECOMP_CALL(sub_15036430); /* 0x1505B5BF: call 0x15036430 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0x16u); /* 0x1505B5C4: push 0x16 */
    esi = POP32_VAL(esp); /* 0x1505B5C6: pop esi */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ebx = 0; /* 0x1505B5C7: xor ebx, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, ebx); /* 0x1505B5C9: push ebx */
    PUSH32(esp, ebx); /* 0x1505B5CA: push ebx */
    PUSH32(esp, ebx); /* 0x1505B5CB: push ebx */
    PUSH32(esp, ebx); /* 0x1505B5CC: push ebx */
    PUSH32(esp, ebx); /* 0x1505B5CD: push ebx */
    MEM32(eax) = esi; /* 0x1505B5CE: mov dword ptr [eax], esi */
    RECOMP_CALL(sub_1505A110); /* 0x1505B5D0: call 0x1505a110 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x14u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x14u; /* 0x1505B5D5: add esp, 0x14 */
    _flag_k = FK_ADD;
    eax = esi; /* 0x1505B5D8: mov eax, esi */
    goto L_1505B6A1; /* 0x1505B5DA: jmp 0x1505b6a1 */
L_1505B5DF:
    PUSH32(esp, edi); /* 0x1505B5DF: push edi */
    edi = MEM32(ebp + 0xC); /* 0x1505B5E0: mov edi, dword ptr [ebp + 0xc] */
    /* test edi, edi */ /* 0x1505B5E3: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1505B607; /* 0x1505B5E5: jne 0x1505b607 */
L_1505B5E7:
    RECOMP_CALL(sub_15036430); /* 0x1505B5E7: call 0x15036430 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0x16u); /* 0x1505B5EC: push 0x16 */
    esi = POP32_VAL(esp); /* 0x1505B5EE: pop esi */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ebx = 0; /* 0x1505B5EF: xor ebx, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, ebx); /* 0x1505B5F1: push ebx */
    PUSH32(esp, ebx); /* 0x1505B5F2: push ebx */
    PUSH32(esp, ebx); /* 0x1505B5F3: push ebx */
    PUSH32(esp, ebx); /* 0x1505B5F4: push ebx */
    PUSH32(esp, ebx); /* 0x1505B5F5: push ebx */
    MEM32(eax) = esi; /* 0x1505B5F6: mov dword ptr [eax], esi */
    RECOMP_CALL(sub_1505A110); /* 0x1505B5F8: call 0x1505a110 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x14u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x14u; /* 0x1505B5FD: add esp, 0x14 */
    _flag_k = FK_ADD;
    eax = esi; /* 0x1505B600: mov eax, esi */
    goto L_1505B6A0; /* 0x1505B602: jmp 0x1505b6a0 */
L_1505B607:
    edx = MEM32(ebp + 0x10); /* 0x1505B607: mov edx, dword ptr [ebp + 0x10] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ebx = 0; /* 0x1505B60A: xor ebx, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM8(esi) = (uint8_t)(LO8(ebx)); /* 0x1505B60C: mov byte ptr [esi], bl */
    /* test edx, edx */ /* 0x1505B60E: test edx, edx */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(edx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1505B66B; /* 0x1505B610: je 0x1505b66b */
L_1505B612:
    /* cmp MEM8(edx), LO8(ebx) */ /* 0x1505B612: cmp byte ptr [edx], bl */
    _flag_a = (uint32_t)(MEM8(edx)) << 24; _flag_b = (uint32_t)(LO8(ebx)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1505B66B; /* 0x1505B614: je 0x1505b66b */
L_1505B616:
    ecx = edx; /* 0x1505B616: mov ecx, edx */
    eax = ecx + 0x1; /* 0x1505B618: lea eax, [ecx + 1] */
    MEM32(ebp + (-0x4)) = eax; /* 0x1505B61B: mov dword ptr [ebp - 4], eax */
L_1505B61E:
    SET_LO8(eax, MEM8(ecx)); /* 0x1505B61E: mov al, byte ptr [ecx] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx + 1; /* 0x1505B620: inc ecx */
    _flag_k = FK_INC;
    /* test LO8(eax), LO8(eax) */ /* 0x1505B621: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1505B61E; /* 0x1505B623: jne 0x1505b61e */
L_1505B625:
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(MEM32(ebp + (-0x4)));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ecx = ecx - MEM32(ebp + (-0x4)); /* 0x1505B625: sub ecx, dword ptr [ebp - 4] */
    _flag_k = FK_CMP;
    eax = edi + (-0x7); /* 0x1505B628: lea eax, [edi - 7] */
    /* cmp ecx, eax */ /* 0x1505B62B: cmp ecx, eax */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_AE(_flag_a, _flag_b)) goto L_1505B66B; /* 0x1505B62D: jae 0x1505b66b */
L_1505B62F:
    PUSH32(esp, edx); /* 0x1505B62F: push edx */
    PUSH32(esp, edi); /* 0x1505B630: push edi */
    PUSH32(esp, esi); /* 0x1505B631: push esi */
    RECOMP_CALL(sub_1508E640); /* 0x1505B632: call 0x1508e640 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x1505B637: add esp, 0xc */
    _flag_k = FK_ADD;
    /* test eax, eax */ /* 0x1505B63A: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1505B64B; /* 0x1505B63C: je 0x1505b64b */
L_1505B63E:
    PUSH32(esp, ebx); /* 0x1505B63E: push ebx */
    PUSH32(esp, ebx); /* 0x1505B63F: push ebx */
    PUSH32(esp, ebx); /* 0x1505B640: push ebx */
    PUSH32(esp, ebx); /* 0x1505B641: push ebx */
    PUSH32(esp, ebx); /* 0x1505B642: push ebx */
    RECOMP_CALL(sub_1505A11B); /* 0x1505B643: call 0x1505a11b */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x14u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x14u; /* 0x1505B648: add esp, 0x14 */
    _flag_k = FK_ADD;
L_1505B64B:
    PUSH32(esp, 0x15005C9Cu); /* 0x1505B64B: push 0x15005c9c */
    PUSH32(esp, edi); /* 0x1505B650: push edi */
    PUSH32(esp, esi); /* 0x1505B651: push esi */
    RECOMP_CALL(sub_1508E450); /* 0x1505B652: call 0x1508e450 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x1505B657: add esp, 0xc */
    _flag_k = FK_ADD;
    /* test eax, eax */ /* 0x1505B65A: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1505B66B; /* 0x1505B65C: je 0x1505b66b */
L_1505B65E:
    PUSH32(esp, ebx); /* 0x1505B65E: push ebx */
    PUSH32(esp, ebx); /* 0x1505B65F: push ebx */
    PUSH32(esp, ebx); /* 0x1505B660: push ebx */
    PUSH32(esp, ebx); /* 0x1505B661: push ebx */
    PUSH32(esp, ebx); /* 0x1505B662: push ebx */
    RECOMP_CALL(sub_1505A11B); /* 0x1505B663: call 0x1505a11b */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x14u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x14u; /* 0x1505B668: add esp, 0x14 */
    _flag_k = FK_ADD;
L_1505B66B:
    edi = esi; /* 0x1505B66B: mov edi, esi */
    ecx = edi + 0x1; /* 0x1505B66D: lea ecx, [edi + 1] */
L_1505B670:
    SET_LO8(eax, MEM8(edi)); /* 0x1505B670: mov al, byte ptr [edi] */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(1);
    edi = edi + 1; /* 0x1505B672: inc edi */
    _flag_k = FK_INC;
    /* test LO8(eax), LO8(eax) */ /* 0x1505B673: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1505B670; /* 0x1505B675: jne 0x1505b670 */
L_1505B677:
    ebx = esi; /* 0x1505B677: mov ebx, esi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    edi = edi - ecx; /* 0x1505B679: sub edi, ecx */
    _flag_k = FK_CMP;
    ecx = ebx + 0x1; /* 0x1505B67B: lea ecx, [ebx + 1] */
L_1505B67E:
    SET_LO8(eax, MEM8(ebx)); /* 0x1505B67E: mov al, byte ptr [ebx] */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(1);
    ebx = ebx + 1; /* 0x1505B680: inc ebx */
    _flag_k = FK_INC;
    /* test LO8(eax), LO8(eax) */ /* 0x1505B681: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1505B67E; /* 0x1505B683: jne 0x1505b67e */
L_1505B685:
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ebx = ebx - ecx; /* 0x1505B685: sub ebx, ecx */
    _flag_k = FK_CMP;
    RECOMP_CALL(sub_15036430); /* 0x1505B687: call 0x15036430 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, MEM32(eax)); /* 0x1505B68C: push dword ptr [eax] */
    eax = MEM32(ebp + 0xC); /* 0x1505B68E: mov eax, dword ptr [ebp + 0xc] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - edi; /* 0x1505B691: sub eax, edi */
    _flag_k = FK_CMP;
    PUSH32(esp, eax); /* 0x1505B693: push eax */
    eax = ebx + esi; /* 0x1505B694: lea eax, [ebx + esi] */
    PUSH32(esp, eax); /* 0x1505B697: push eax */
    RECOMP_CALL(sub_1505E4D0); /* 0x1505B698: call 0x1505e4d0 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x1505B69D: add esp, 0xc */
    _flag_k = FK_ADD;
L_1505B6A0:
    edi = POP32_VAL(esp); /* 0x1505B6A0: pop edi */
L_1505B6A1:
    esi = POP32_VAL(esp); /* 0x1505B6A1: pop esi */
    ebx = POP32_VAL(esp); /* 0x1505B6A2: pop ebx */
    esp = ebp; ebp = POP32_VAL(esp); /* 0x1505B6A3: leave  */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1505B6A4: ret  */
    RECOMP_REGS_OUT();
}

void sub_1505B6B0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1505B6B0u);

L_1505B6B0:
    edi = edi; /* 0x1505B6B0: mov edi, edi */
    PUSH32(esp, ebp); /* 0x1505B6B2: push ebp */
    ebp = esp; /* 0x1505B6B3: mov ebp, esp */
    PUSH32(esp, ecx); /* 0x1505B6B5: push ecx */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x4))); _flag_b = (uint32_t)(0);
    MEM32(ebp + (-0x4)) = MEM32(ebp + (-0x4)) & 0; /* 0x1505B6B6: and dword ptr [ebp - 4], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    eax = ebp + (-0x4); /* 0x1505B6BA: lea eax, [ebp - 4] */
    PUSH32(esp, eax); /* 0x1505B6BD: push eax */
    eax = MEM32(ebp + 0x8); /* 0x1505B6BE: mov eax, dword ptr [ebp + 8] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x180u);
    eax = eax & 0x180u; /* 0x1505B6C1: and eax, 0x180 */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, eax); /* 0x1505B6C6: push eax */
    RECOMP_CALL(sub_1505B6E0); /* 0x1505B6C7: call 0x1505b6e0 */
    RECOMP_FLAGS_IN();
    eax = MEM32(ebp + (-0x4)); /* 0x1505B6CC: mov eax, dword ptr [ebp - 4] */
    ecx = POP32_VAL(esp); /* 0x1505B6CF: pop ecx */
    ecx = POP32_VAL(esp); /* 0x1505B6D0: pop ecx */
    esp = ebp; ebp = POP32_VAL(esp); /* 0x1505B6D1: leave  */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1505B6D2: ret  */
    RECOMP_REGS_OUT();
}

void sub_1505B6E0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1505B6E0u);

L_1505B6E0:
    edi = edi; /* 0x1505B6E0: mov edi, edi */
    PUSH32(esp, ebp); /* 0x1505B6E2: push ebp */
    ebp = esp; /* 0x1505B6E3: mov ebp, esp */
    ecx = MEM32(ebp + 0xC); /* 0x1505B6E5: mov ecx, dword ptr [ebp + 0xc] */
    PUSH32(esp, esi); /* 0x1505B6E8: push esi */
    /* test ecx, ecx */ /* 0x1505B6E9: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1505B70A; /* 0x1505B6EB: jne 0x1505b70a */
L_1505B6ED:
    RECOMP_CALL(sub_15036430); /* 0x1505B6ED: call 0x15036430 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0x16u); /* 0x1505B6F2: push 0x16 */
    esi = POP32_VAL(esp); /* 0x1505B6F4: pop esi */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x1505B6F5: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, ecx); /* 0x1505B6F7: push ecx */
    PUSH32(esp, ecx); /* 0x1505B6F8: push ecx */
    PUSH32(esp, ecx); /* 0x1505B6F9: push ecx */
    PUSH32(esp, ecx); /* 0x1505B6FA: push ecx */
    PUSH32(esp, ecx); /* 0x1505B6FB: push ecx */
    MEM32(eax) = esi; /* 0x1505B6FC: mov dword ptr [eax], esi */
    RECOMP_CALL(sub_1505A110); /* 0x1505B6FE: call 0x1505a110 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x14u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x14u; /* 0x1505B703: add esp, 0x14 */
    _flag_k = FK_ADD;
    eax = esi; /* 0x1505B706: mov eax, esi */
    goto L_1505B727; /* 0x1505B708: jmp 0x1505b727 */
L_1505B70A:
    eax = MEM32(0x150BDFAC); /* 0x1505B70A: mov eax, dword ptr [0x150bdfac] */
    MEM32(ecx) = eax; /* 0x1505B70F: mov dword ptr [ecx], eax */
    eax = MEM32(ebp + 0x8); /* 0x1505B711: mov eax, dword ptr [ebp + 8] */
    /* test eax, 0xFFFFFE7Fu */ /* 0x1505B714: test eax, 0xfffffe7f */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xFFFFFE7Fu);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1505B6ED; /* 0x1505B719: jne 0x1505b6ed */
L_1505B71B:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x180u);
    eax = eax & 0x180u; /* 0x1505B71B: and eax, 0x180 */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(0x150BDFAC) = eax; /* 0x1505B720: mov dword ptr [0x150bdfac], eax */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1505B725: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
L_1505B727:
    esi = POP32_VAL(esp); /* 0x1505B727: pop esi */
    ebp = POP32_VAL(esp); /* 0x1505B728: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1505B729: ret  */
    RECOMP_REGS_OUT();
}

void sub_1505B730(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1505B730u);

L_1505B730:
    edi = edi; /* 0x1505B730: mov edi, edi */
    PUSH32(esp, ebp); /* 0x1505B732: push ebp */
    ebp = esp; /* 0x1505B733: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xA8Cu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0xA8Cu; /* 0x1505B735: sub esp, 0xa8c */
    _flag_k = FK_CMP;
    eax = MEM32(0x150BD340); /* 0x1505B73B: mov eax, dword ptr [0x150bd340] */
    _flag_a = (uint32_t)((eax ^ ebp)); _flag_b = (uint32_t)((eax ^ ebp));
    eax = eax ^ ebp; /* 0x1505B740: xor eax, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x4)) = eax; /* 0x1505B742: mov dword ptr [ebp - 4], eax */
    eax = MEM32(ebp + 0x8); /* 0x1505B745: mov eax, dword ptr [ebp + 8] */
    PUSH32(esp, ebx); /* 0x1505B748: push ebx */
    PUSH32(esp, esi); /* 0x1505B749: push esi */
    PUSH32(esp, edi); /* 0x1505B74A: push edi */
    edi = MEM32(ebp + 0xC); /* 0x1505B74B: mov edi, dword ptr [ebp + 0xc] */
    PUSH32(esp, 3); /* 0x1505B74E: push 3 */
    MEM32(ebp + (-0xA8C)) = eax; /* 0x1505B750: mov dword ptr [ebp - 0xa8c], eax */
    MEM32(ebp + (-0xA88)) = edi; /* 0x1505B756: mov dword ptr [ebp - 0xa88], edi */
    RECOMP_CALL(sub_15059280); /* 0x1505B75C: call 0x15059280 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ebx = 0; /* 0x1505B761: xor ebx, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(1);
    ebx = ebx + 1; /* 0x1505B763: inc ebx */
    _flag_k = FK_INC;
    ecx = POP32_VAL(esp); /* 0x1505B764: pop ecx */
    /* cmp eax, ebx */ /* 0x1505B765: cmp eax, ebx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1505BDB5; /* 0x1505B767: je 0x1505bdb5 */
L_1505B76D:
    PUSH32(esp, 3); /* 0x1505B76D: push 3 */
    RECOMP_CALL(sub_15059280); /* 0x1505B76F: call 0x15059280 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1505B774: pop ecx */
    /* test eax, eax */ /* 0x1505B775: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1505B785; /* 0x1505B777: jne 0x1505b785 */
L_1505B779:
    /* cmp MEM32(0x150BDB08), ebx */ /* 0x1505B779: cmp dword ptr [0x150bdb08], ebx */
    _flag_a = (uint32_t)(MEM32(0x150BDB08)); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1505BDB5; /* 0x1505B77F: je 0x1505bdb5 */
L_1505B785:
    PUSH32(esp, 0x15006040u); /* 0x1505B785: push 0x15006040 */
    edi = 0x21Cu; /* 0x1505B78A: mov edi, 0x21c */
    eax = ebp + (-0x43C); /* 0x1505B78F: lea eax, [ebp - 0x43c] */
    PUSH32(esp, edi); /* 0x1505B795: push edi */
    PUSH32(esp, eax); /* 0x1505B796: push eax */
    RECOMP_CALL(sub_1508F250); /* 0x1505B797: call 0x1508f250 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x1505B79C: add esp, 0xc */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    esi = 0; /* 0x1505B79F: xor esi, esi */
    _cf = 0;
    _flag_k = FK_TEST;
    /* test eax, eax */ /* 0x1505B7A1: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1505B7B2; /* 0x1505B7A3: je 0x1505b7b2 */
L_1505B7A5:
    PUSH32(esp, esi); /* 0x1505B7A5: push esi */
    PUSH32(esp, esi); /* 0x1505B7A6: push esi */
    PUSH32(esp, esi); /* 0x1505B7A7: push esi */
    PUSH32(esp, esi); /* 0x1505B7A8: push esi */
    PUSH32(esp, esi); /* 0x1505B7A9: push esi */
    RECOMP_CALL(sub_1505A11B); /* 0x1505B7AA: call 0x1505a11b */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x14u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x14u; /* 0x1505B7AF: add esp, 0x14 */
    _flag_k = FK_ADD;
L_1505B7B2:
    PUSH32(esp, MEM32(0x150BC16C)); /* 0x1505B7B2: push dword ptr [0x150bc16c] */
    eax = ebp + (-0x43C); /* 0x1505B7B8: lea eax, [ebp - 0x43c] */
    PUSH32(esp, edi); /* 0x1505B7BE: push edi */
    PUSH32(esp, eax); /* 0x1505B7BF: push eax */
    RECOMP_CALL(sub_1508F120); /* 0x1505B7C0: call 0x1508f120 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x1505B7C5: add esp, 0xc */
    _flag_k = FK_ADD;
    /* test eax, eax */ /* 0x1505B7C8: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1505B7D9; /* 0x1505B7CA: je 0x1505b7d9 */
L_1505B7CC:
    PUSH32(esp, esi); /* 0x1505B7CC: push esi */
    PUSH32(esp, esi); /* 0x1505B7CD: push esi */
    PUSH32(esp, esi); /* 0x1505B7CE: push esi */
    PUSH32(esp, esi); /* 0x1505B7CF: push esi */
    PUSH32(esp, esi); /* 0x1505B7D0: push esi */
    RECOMP_CALL(sub_1505A11B); /* 0x1505B7D1: call 0x1505a11b */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x14u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x14u; /* 0x1505B7D6: add esp, 0x14 */
    _flag_k = FK_ADD;
L_1505B7D9:
    PUSH32(esp, 0x15006064u); /* 0x1505B7D9: push 0x15006064 */
    eax = ebp + (-0x43C); /* 0x1505B7DE: lea eax, [ebp - 0x43c] */
    PUSH32(esp, edi); /* 0x1505B7E4: push edi */
    PUSH32(esp, eax); /* 0x1505B7E5: push eax */
    RECOMP_CALL(sub_1508F120); /* 0x1505B7E6: call 0x1508f120 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x1505B7EB: add esp, 0xc */
    _flag_k = FK_ADD;
    /* test eax, eax */ /* 0x1505B7EE: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1505B7FF; /* 0x1505B7F0: je 0x1505b7ff */
L_1505B7F2:
    PUSH32(esp, esi); /* 0x1505B7F2: push esi */
    PUSH32(esp, esi); /* 0x1505B7F3: push esi */
    PUSH32(esp, esi); /* 0x1505B7F4: push esi */
    PUSH32(esp, esi); /* 0x1505B7F5: push esi */
    PUSH32(esp, esi); /* 0x1505B7F6: push esi */
    RECOMP_CALL(sub_1505A11B); /* 0x1505B7F7: call 0x1505a11b */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x14u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x14u; /* 0x1505B7FC: add esp, 0x14 */
    _flag_k = FK_ADD;
L_1505B7FF:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1505B7FF: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM16(ebp + (-0x440)) = (uint16_t)(LO16(eax)); /* 0x1505B801: mov word ptr [ebp - 0x440], ax */
    eax = ebp + (-0x648); /* 0x1505B808: lea eax, [ebp - 0x648] */
    PUSH32(esp, 0x104u); /* 0x1505B80E: push 0x104 */
    PUSH32(esp, eax); /* 0x1505B813: push eax */
    PUSH32(esp, esi); /* 0x1505B814: push esi */
    RECOMP_ICALL(MEM32(0x150C0164)); /* 0x1505B815: call dword ptr [0x150c0164] */
    RECOMP_FLAGS_IN();
    edi = 0x105u; /* 0x1505B81B: mov edi, 0x105 */
    /* test eax, eax */ /* 0x1505B820: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1505B84A; /* 0x1505B822: jne 0x1505b84a */
L_1505B824:
    PUSH32(esp, 0x15006078u); /* 0x1505B824: push 0x15006078 */
    eax = ebp + (-0x648); /* 0x1505B829: lea eax, [ebp - 0x648] */
    PUSH32(esp, edi); /* 0x1505B82F: push edi */
    PUSH32(esp, eax); /* 0x1505B830: push eax */
    RECOMP_CALL(sub_1508F250); /* 0x1505B831: call 0x1508f250 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x1505B836: add esp, 0xc */
    _flag_k = FK_ADD;
    /* test eax, eax */ /* 0x1505B839: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1505B84A; /* 0x1505B83B: je 0x1505b84a */
L_1505B83D:
    PUSH32(esp, esi); /* 0x1505B83D: push esi */
    PUSH32(esp, esi); /* 0x1505B83E: push esi */
    PUSH32(esp, esi); /* 0x1505B83F: push esi */
    PUSH32(esp, esi); /* 0x1505B840: push esi */
    PUSH32(esp, esi); /* 0x1505B841: push esi */
    RECOMP_CALL(sub_1505A11B); /* 0x1505B842: call 0x1505a11b */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x14u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x14u; /* 0x1505B847: add esp, 0x14 */
    _flag_k = FK_ADD;
L_1505B84A:
    edx = ebp + (-0x648); /* 0x1505B84A: lea edx, [ebp - 0x648] */
    ecx = edx; /* 0x1505B850: mov ecx, edx */
    eax = ecx + 0x2; /* 0x1505B852: lea eax, [ecx + 2] */
    MEM32(ebp + (-0xA84)) = eax; /* 0x1505B855: mov dword ptr [ebp - 0xa84], eax */
L_1505B85B:
    SET_LO16(eax, MEM16(ecx)); /* 0x1505B85B: mov ax, word ptr [ecx] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 2; /* 0x1505B85E: add ecx, 2 */
    _flag_k = FK_ADD;
    /* cmp LO16(eax), LO16(esi) */ /* 0x1505B861: cmp ax, si */
    _flag_a = (uint32_t)(LO16(eax)) << 16; _flag_b = (uint32_t)(LO16(esi)) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    RECOMP_BACKEDGE();
    if (CMP_NE(_flag_a, _flag_b)) goto L_1505B85B; /* 0x1505B864: jne 0x1505b85b */
L_1505B866:
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(MEM32(ebp + (-0xA84)));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ecx = ecx - MEM32(ebp + (-0xA84)); /* 0x1505B866: sub ecx, dword ptr [ebp - 0xa84] */
    _flag_k = FK_CMP;
    if (1u) _cf = (((ecx) >> 0) & 1u); /* 0x1505B86C: sar ecx, 1 */
    if (1u) { _flag_a = recomp_flags_pack(((uint32_t)((int32_t)ecx >> 1u)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ecx = (uint32_t)((int32_t)ecx >> 1u);
    eax = ecx + 0xB; /* 0x1505B86E: lea eax, [ecx + 0xb] */
    /* cmp eax, 0x3Cu */ /* 0x1505B871: cmp eax, 0x3c */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x3Cu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_1505B8B3; /* 0x1505B874: jbe 0x1505b8b3 */
L_1505B876:
    eax = ecx + (-0x31); /* 0x1505B876: lea eax, [ecx - 0x31] */
    PUSH32(esp, 3); /* 0x1505B879: push 3 */
    PUSH32(esp, MEM32(0x150BC164)); /* 0x1505B87B: push dword ptr [0x150bc164] */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    edi = edi - eax; /* 0x1505B881: sub edi, eax */
    _flag_k = FK_CMP;
    ecx = ebp + (-0x648); /* 0x1505B883: lea ecx, [ebp - 0x648] */
    ecx = ecx + eax * 2; /* 0x1505B889: lea ecx, [ecx + eax*2] */
    PUSH32(esp, edi); /* 0x1505B88C: push edi */
    PUSH32(esp, ecx); /* 0x1505B88D: push ecx */
    MEM32(ebp + (-0xA84)) = ecx; /* 0x1505B88E: mov dword ptr [ebp - 0xa84], ecx */
    RECOMP_CALL(sub_1508F590); /* 0x1505B894: call 0x1508f590 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x10u; /* 0x1505B899: add esp, 0x10 */
    _flag_k = FK_ADD;
    /* test eax, eax */ /* 0x1505B89C: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1505B8AD; /* 0x1505B89E: je 0x1505b8ad */
L_1505B8A0:
    PUSH32(esp, esi); /* 0x1505B8A0: push esi */
    PUSH32(esp, esi); /* 0x1505B8A1: push esi */
    PUSH32(esp, esi); /* 0x1505B8A2: push esi */
    PUSH32(esp, esi); /* 0x1505B8A3: push esi */
    PUSH32(esp, esi); /* 0x1505B8A4: push esi */
    RECOMP_CALL(sub_1505A11B); /* 0x1505B8A5: call 0x1505a11b */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x14u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x14u; /* 0x1505B8AA: add esp, 0x14 */
    _flag_k = FK_ADD;
L_1505B8AD:
    edx = MEM32(ebp + (-0xA84)); /* 0x1505B8AD: mov edx, dword ptr [ebp - 0xa84] */
L_1505B8B3:
    PUSH32(esp, edx); /* 0x1505B8B3: push edx */
    edi = 0x21Cu; /* 0x1505B8B4: mov edi, 0x21c */
    eax = ebp + (-0x43C); /* 0x1505B8B9: lea eax, [ebp - 0x43c] */
    PUSH32(esp, edi); /* 0x1505B8BF: push edi */
    PUSH32(esp, eax); /* 0x1505B8C0: push eax */
    RECOMP_CALL(sub_1508F120); /* 0x1505B8C1: call 0x1508f120 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x1505B8C6: add esp, 0xc */
    _flag_k = FK_ADD;
    /* test eax, eax */ /* 0x1505B8C9: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1505B8DA; /* 0x1505B8CB: je 0x1505b8da */
L_1505B8CD:
    PUSH32(esp, esi); /* 0x1505B8CD: push esi */
    PUSH32(esp, esi); /* 0x1505B8CE: push esi */
    PUSH32(esp, esi); /* 0x1505B8CF: push esi */
    PUSH32(esp, esi); /* 0x1505B8D0: push esi */
    PUSH32(esp, esi); /* 0x1505B8D1: push esi */
    RECOMP_CALL(sub_1505A11B); /* 0x1505B8D2: call 0x1505a11b */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x14u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x14u; /* 0x1505B8D7: add esp, 0x14 */
    _flag_k = FK_ADD;
L_1505B8DA:
    PUSH32(esp, MEM32(0x150BC168)); /* 0x1505B8DA: push dword ptr [0x150bc168] */
    eax = ebp + (-0x43C); /* 0x1505B8E0: lea eax, [ebp - 0x43c] */
    PUSH32(esp, edi); /* 0x1505B8E6: push edi */
    PUSH32(esp, eax); /* 0x1505B8E7: push eax */
    RECOMP_CALL(sub_1508F120); /* 0x1505B8E8: call 0x1508f120 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x1505B8ED: add esp, 0xc */
    _flag_k = FK_ADD;
    /* test eax, eax */ /* 0x1505B8F0: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1505B901; /* 0x1505B8F2: je 0x1505b901 */
L_1505B8F4:
    PUSH32(esp, esi); /* 0x1505B8F4: push esi */
    PUSH32(esp, esi); /* 0x1505B8F5: push esi */
    PUSH32(esp, esi); /* 0x1505B8F6: push esi */
    PUSH32(esp, esi); /* 0x1505B8F7: push esi */
    PUSH32(esp, esi); /* 0x1505B8F8: push esi */
    RECOMP_CALL(sub_1505A11B); /* 0x1505B8F9: call 0x1505a11b */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x14u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x14u; /* 0x1505B8FE: add esp, 0x14 */
    _flag_k = FK_ADD;
L_1505B901:
    PUSH32(esp, 0x150060A8u); /* 0x1505B901: push 0x150060a8 */
    eax = ebp + (-0x43C); /* 0x1505B906: lea eax, [ebp - 0x43c] */
    PUSH32(esp, edi); /* 0x1505B90C: push edi */
    PUSH32(esp, eax); /* 0x1505B90D: push eax */
    RECOMP_CALL(sub_1508F120); /* 0x1505B90E: call 0x1508f120 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x1505B913: add esp, 0xc */
    _flag_k = FK_ADD;
    /* test eax, eax */ /* 0x1505B916: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1505B927; /* 0x1505B918: je 0x1505b927 */
L_1505B91A:
    PUSH32(esp, esi); /* 0x1505B91A: push esi */
    PUSH32(esp, esi); /* 0x1505B91B: push esi */
    PUSH32(esp, esi); /* 0x1505B91C: push esi */
    PUSH32(esp, esi); /* 0x1505B91D: push esi */
    PUSH32(esp, esi); /* 0x1505B91E: push esi */
    RECOMP_CALL(sub_1505A11B); /* 0x1505B91F: call 0x1505a11b */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x14u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x14u; /* 0x1505B924: add esp, 0x14 */
    _flag_k = FK_ADD;
L_1505B927:
    ecx = MEM32(ebp + (-0xA88)); /* 0x1505B927: mov ecx, dword ptr [ebp - 0xa88] */
    edi = ecx; /* 0x1505B92D: mov edi, ecx */
    edx = edi + 0x2; /* 0x1505B92F: lea edx, [edi + 2] */
L_1505B932:
    SET_LO16(eax, MEM16(edi)); /* 0x1505B932: mov ax, word ptr [edi] */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edi = edi + 2; /* 0x1505B935: add edi, 2 */
    _flag_k = FK_ADD;
    /* cmp LO16(eax), LO16(esi) */ /* 0x1505B938: cmp ax, si */
    _flag_a = (uint32_t)(LO16(eax)) << 16; _flag_b = (uint32_t)(LO16(esi)) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    RECOMP_BACKEDGE();
    if (CMP_NE(_flag_a, _flag_b)) goto L_1505B932; /* 0x1505B93B: jne 0x1505b932 */
L_1505B93D:
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    edi = edi - edx; /* 0x1505B93D: sub edi, edx */
    _flag_k = FK_CMP;
    if (1u) _cf = (((edi) >> 0) & 1u); /* 0x1505B93F: sar edi, 1 */
    if (1u) { _flag_a = recomp_flags_pack(((uint32_t)((int32_t)edi >> 1u)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    edi = (uint32_t)((int32_t)edi >> 1u);
    eax = edi + 0x8; /* 0x1505B941: lea eax, [edi + 8] */
    /* cmp eax, 0x3Cu */ /* 0x1505B944: cmp eax, 0x3c */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x3Cu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_1505BB2A; /* 0x1505B947: jbe 0x1505bb2a */
L_1505B94D:
    eax = (uint32_t)MEM16(ecx + edi * 2 + (-0x2)); /* 0x1505B94D: movzx eax, word ptr [ecx + edi*2 - 2] */
    MEM32(ebp + (-0xA84)) = 0x5Cu; /* 0x1505B952: mov dword ptr [ebp - 0xa84], 0x5c */
    edx = eax; /* 0x1505B95C: mov edx, eax */
    /* cmp LO16(eax), MEM16(ebp + (-0xA84)) */ /* 0x1505B95E: cmp ax, word ptr [ebp - 0xa84] */
    _flag_a = (uint32_t)(LO16(eax)) << 16; _flag_b = (uint32_t)(MEM16(ebp + (-0xA84))) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1505B985; /* 0x1505B965: je 0x1505b985 */
L_1505B967:
    edx = MEM32(ebp + (-0xA84)); /* 0x1505B967: mov edx, dword ptr [ebp - 0xa84] */
L_1505B96D:
    /* cmp LO16(eax), 0x2Fu */ /* 0x1505B96D: cmp ax, 0x2f */
    _flag_a = (uint32_t)(LO16(eax)) << 16; _flag_b = (uint32_t)(0x2Fu) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1505B985; /* 0x1505B971: je 0x1505b985 */
L_1505B973:
    /* cmp ebx, edi */ /* 0x1505B973: cmp ebx, edi */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_AE(_flag_a, _flag_b)) goto L_1505B985; /* 0x1505B975: jae 0x1505b985 */
L_1505B977:
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(1);
    ebx = ebx + 1; /* 0x1505B977: inc ebx */
    _flag_k = FK_INC;
    eax = edi; /* 0x1505B978: mov eax, edi */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - ebx; /* 0x1505B97A: sub eax, ebx */
    _flag_k = FK_CMP;
    eax = (uint32_t)MEM16(ecx + eax * 2); /* 0x1505B97C: movzx eax, word ptr [ecx + eax*2] */
    /* cmp LO16(eax), LO16(edx) */ /* 0x1505B980: cmp ax, dx */
    _flag_a = (uint32_t)(LO16(eax)) << 16; _flag_b = (uint32_t)(LO16(edx)) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    RECOMP_BACKEDGE();
    if (CMP_NE(_flag_a, _flag_b)) goto L_1505B96D; /* 0x1505B983: jne 0x1505b96d */
L_1505B985:
    eax = edi; /* 0x1505B985: mov eax, edi */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - ebx; /* 0x1505B987: sub eax, ebx */
    _flag_k = FK_CMP;
    MEM32(ebp + (-0xA84)) = eax; /* 0x1505B989: mov dword ptr [ebp - 0xa84], eax */
    /* cmp eax, 0x23u */ /* 0x1505B98F: cmp eax, 0x23 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x23u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_1505BA05; /* 0x1505B992: jbe 0x1505ba05 */
L_1505B994:
    /* cmp ebx, 0x11u */ /* 0x1505B994: cmp ebx, 0x11 */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(0x11u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_AE(_flag_a, _flag_b)) goto L_1505BA02; /* 0x1505B997: jae 0x1505ba02 */
L_1505B999:
    PUSH32(esp, 0x31u); /* 0x1505B999: push 0x31 */
    eax = POP32_VAL(esp); /* 0x1505B99B: pop eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - ebx; /* 0x1505B99C: sub eax, ebx */
    _flag_k = FK_CMP;
    ebx = 0x21Cu; /* 0x1505B99E: mov ebx, 0x21c */
    PUSH32(esp, eax); /* 0x1505B9A3: push eax */
    PUSH32(esp, ecx); /* 0x1505B9A4: push ecx */
    eax = ebp + (-0x43C); /* 0x1505B9A5: lea eax, [ebp - 0x43c] */
    PUSH32(esp, ebx); /* 0x1505B9AB: push ebx */
    PUSH32(esp, eax); /* 0x1505B9AC: push eax */
    RECOMP_CALL(sub_1508F3F0); /* 0x1505B9AD: call 0x1508f3f0 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x10u; /* 0x1505B9B2: add esp, 0x10 */
    _flag_k = FK_ADD;
    /* test eax, eax */ /* 0x1505B9B5: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1505B9C6; /* 0x1505B9B7: je 0x1505b9c6 */
L_1505B9B9:
    PUSH32(esp, esi); /* 0x1505B9B9: push esi */
    PUSH32(esp, esi); /* 0x1505B9BA: push esi */
    PUSH32(esp, esi); /* 0x1505B9BB: push esi */
    PUSH32(esp, esi); /* 0x1505B9BC: push esi */
    PUSH32(esp, esi); /* 0x1505B9BD: push esi */
    RECOMP_CALL(sub_1505A11B); /* 0x1505B9BE: call 0x1505a11b */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x14u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x14u; /* 0x1505B9C3: add esp, 0x14 */
    _flag_k = FK_ADD;
L_1505B9C6:
    PUSH32(esp, MEM32(0x150BC164)); /* 0x1505B9C6: push dword ptr [0x150bc164] */
    eax = ebp + (-0x43C); /* 0x1505B9CC: lea eax, [ebp - 0x43c] */
    PUSH32(esp, ebx); /* 0x1505B9D2: push ebx */
    PUSH32(esp, eax); /* 0x1505B9D3: push eax */
    RECOMP_CALL(sub_1508F120); /* 0x1505B9D4: call 0x1508f120 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x1505B9D9: add esp, 0xc */
    _flag_k = FK_ADD;
    /* test eax, eax */ /* 0x1505B9DC: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1505B9ED; /* 0x1505B9DE: je 0x1505b9ed */
L_1505B9E0:
    PUSH32(esp, esi); /* 0x1505B9E0: push esi */
    PUSH32(esp, esi); /* 0x1505B9E1: push esi */
    PUSH32(esp, esi); /* 0x1505B9E2: push esi */
    PUSH32(esp, esi); /* 0x1505B9E3: push esi */
    PUSH32(esp, esi); /* 0x1505B9E4: push esi */
    RECOMP_CALL(sub_1505A11B); /* 0x1505B9E5: call 0x1505a11b */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x14u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x14u; /* 0x1505B9EA: add esp, 0x14 */
    _flag_k = FK_ADD;
L_1505B9ED:
    ebx = MEM32(ebp + (-0xA88)); /* 0x1505B9ED: mov ebx, dword ptr [ebp - 0xa88] */
    eax = MEM32(ebp + (-0xA84)); /* 0x1505B9F3: mov eax, dword ptr [ebp - 0xa84] */
    eax = ebx + eax * 2; /* 0x1505B9F9: lea eax, [ebx + eax*2] */
L_1505B9FC:
    PUSH32(esp, eax); /* 0x1505B9FC: push eax */
    goto L_1505BB2B; /* 0x1505B9FD: jmp 0x1505bb2b */
L_1505BA02:
    /* cmp eax, 0x23u */ /* 0x1505BA02: cmp eax, 0x23 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x23u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
L_1505BA05:
    if (recomp_cond_cf(_flag_k, _flag_a, _flag_b, CC_AE, _cf)) goto L_1505BA6D; /* 0x1505BA05: jae 0x1505ba6d */
L_1505BA07:
    PUSH32(esp, 0x31u); /* 0x1505BA07: push 0x31 */
    eax = POP32_VAL(esp); /* 0x1505BA09: pop eax */
    if (1u) _cf = (((ebx) >> 0) & 1u); /* 0x1505BA0A: shr ebx, 1 */
    if (1u) { _flag_a = recomp_flags_pack((ebx >> 1u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ebx = ebx >> 1u; /* 0x1505BA0A: shr ebx, 1 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - ebx; /* 0x1505BA0C: sub eax, ebx */
    _flag_k = FK_CMP;
    PUSH32(esp, eax); /* 0x1505BA0E: push eax */
    PUSH32(esp, ecx); /* 0x1505BA0F: push ecx */
    eax = ebp + (-0x43C); /* 0x1505BA10: lea eax, [ebp - 0x43c] */
    PUSH32(esp, 0x21Cu); /* 0x1505BA16: push 0x21c */
    PUSH32(esp, eax); /* 0x1505BA1B: push eax */
    RECOMP_CALL(sub_1508F3F0); /* 0x1505BA1C: call 0x1508f3f0 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x10u; /* 0x1505BA21: add esp, 0x10 */
    _flag_k = FK_ADD;
    /* test eax, eax */ /* 0x1505BA24: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1505BA35; /* 0x1505BA26: je 0x1505ba35 */
L_1505BA28:
    PUSH32(esp, esi); /* 0x1505BA28: push esi */
    PUSH32(esp, esi); /* 0x1505BA29: push esi */
    PUSH32(esp, esi); /* 0x1505BA2A: push esi */
    PUSH32(esp, esi); /* 0x1505BA2B: push esi */
    PUSH32(esp, esi); /* 0x1505BA2C: push esi */
    RECOMP_CALL(sub_1505A11B); /* 0x1505BA2D: call 0x1505a11b */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x14u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x14u; /* 0x1505BA32: add esp, 0x14 */
    _flag_k = FK_ADD;
L_1505BA35:
    PUSH32(esp, MEM32(0x150BC164)); /* 0x1505BA35: push dword ptr [0x150bc164] */
    eax = ebp + (-0x43C); /* 0x1505BA3B: lea eax, [ebp - 0x43c] */
    PUSH32(esp, 0x21Cu); /* 0x1505BA41: push 0x21c */
    PUSH32(esp, eax); /* 0x1505BA46: push eax */
    RECOMP_CALL(sub_1508F120); /* 0x1505BA47: call 0x1508f120 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x1505BA4C: add esp, 0xc */
    _flag_k = FK_ADD;
    /* test eax, eax */ /* 0x1505BA4F: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1505BA60; /* 0x1505BA51: je 0x1505ba60 */
L_1505BA53:
    PUSH32(esp, esi); /* 0x1505BA53: push esi */
    PUSH32(esp, esi); /* 0x1505BA54: push esi */
    PUSH32(esp, esi); /* 0x1505BA55: push esi */
    PUSH32(esp, esi); /* 0x1505BA56: push esi */
    PUSH32(esp, esi); /* 0x1505BA57: push esi */
    RECOMP_CALL(sub_1505A11B); /* 0x1505BA58: call 0x1505a11b */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x14u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x14u; /* 0x1505BA5D: add esp, 0x14 */
    _flag_k = FK_ADD;
L_1505BA60:
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    edi = edi - ebx; /* 0x1505BA60: sub edi, ebx */
    _flag_k = FK_CMP;
    ebx = MEM32(ebp + (-0xA88)); /* 0x1505BA62: mov ebx, dword ptr [ebp - 0xa88] */
    eax = ebx + edi * 2; /* 0x1505BA68: lea eax, [ebx + edi*2] */
    RECOMP_BACKEDGE();
    goto L_1505B9FC; /* 0x1505BA6B: jmp 0x1505b9fc */
L_1505BA6D:
    PUSH32(esp, 0x20u); /* 0x1505BA6D: push 0x20 */
    PUSH32(esp, ecx); /* 0x1505BA6F: push ecx */
    ebx = 0x21Cu; /* 0x1505BA70: mov ebx, 0x21c */
    eax = ebp + (-0x43C); /* 0x1505BA75: lea eax, [ebp - 0x43c] */
    PUSH32(esp, ebx); /* 0x1505BA7B: push ebx */
    PUSH32(esp, eax); /* 0x1505BA7C: push eax */
    RECOMP_CALL(sub_1508F3F0); /* 0x1505BA7D: call 0x1508f3f0 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x10u; /* 0x1505BA82: add esp, 0x10 */
    _flag_k = FK_ADD;
    /* test eax, eax */ /* 0x1505BA85: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1505BA96; /* 0x1505BA87: je 0x1505ba96 */
L_1505BA89:
    PUSH32(esp, esi); /* 0x1505BA89: push esi */
    PUSH32(esp, esi); /* 0x1505BA8A: push esi */
    PUSH32(esp, esi); /* 0x1505BA8B: push esi */
    PUSH32(esp, esi); /* 0x1505BA8C: push esi */
    PUSH32(esp, esi); /* 0x1505BA8D: push esi */
    RECOMP_CALL(sub_1505A11B); /* 0x1505BA8E: call 0x1505a11b */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x14u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x14u; /* 0x1505BA93: add esp, 0x14 */
    _flag_k = FK_ADD;
L_1505BA96:
    PUSH32(esp, MEM32(0x150BC164)); /* 0x1505BA96: push dword ptr [0x150bc164] */
    eax = ebp + (-0x43C); /* 0x1505BA9C: lea eax, [ebp - 0x43c] */
    PUSH32(esp, ebx); /* 0x1505BAA2: push ebx */
    PUSH32(esp, eax); /* 0x1505BAA3: push eax */
    RECOMP_CALL(sub_1508F120); /* 0x1505BAA4: call 0x1508f120 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x1505BAA9: add esp, 0xc */
    _flag_k = FK_ADD;
    /* test eax, eax */ /* 0x1505BAAC: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1505BABD; /* 0x1505BAAE: je 0x1505babd */
L_1505BAB0:
    PUSH32(esp, esi); /* 0x1505BAB0: push esi */
    PUSH32(esp, esi); /* 0x1505BAB1: push esi */
    PUSH32(esp, esi); /* 0x1505BAB2: push esi */
    PUSH32(esp, esi); /* 0x1505BAB3: push esi */
    PUSH32(esp, esi); /* 0x1505BAB4: push esi */
    RECOMP_CALL(sub_1505A11B); /* 0x1505BAB5: call 0x1505a11b */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x14u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x14u; /* 0x1505BABA: add esp, 0x14 */
    _flag_k = FK_ADD;
L_1505BABD:
    ebx = MEM32(ebp + (-0xA88)); /* 0x1505BABD: mov ebx, dword ptr [ebp - 0xa88] */
    eax = MEM32(ebp + (-0xA84)); /* 0x1505BAC3: mov eax, dword ptr [ebp - 0xa84] */
    PUSH32(esp, 7); /* 0x1505BAC9: push 7 */
    eax = ebx + eax * 2; /* 0x1505BACB: lea eax, [ebx + eax*2] */
    PUSH32(esp, eax); /* 0x1505BACE: push eax */
    eax = ebp + (-0x43C); /* 0x1505BACF: lea eax, [ebp - 0x43c] */
    PUSH32(esp, 0x21Cu); /* 0x1505BAD5: push 0x21c */
    PUSH32(esp, eax); /* 0x1505BADA: push eax */
    RECOMP_CALL(sub_1508F3F0); /* 0x1505BADB: call 0x1508f3f0 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x10u; /* 0x1505BAE0: add esp, 0x10 */
    _flag_k = FK_ADD;
    /* test eax, eax */ /* 0x1505BAE3: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1505BAF4; /* 0x1505BAE5: je 0x1505baf4 */
L_1505BAE7:
    PUSH32(esp, esi); /* 0x1505BAE7: push esi */
    PUSH32(esp, esi); /* 0x1505BAE8: push esi */
    PUSH32(esp, esi); /* 0x1505BAE9: push esi */
    PUSH32(esp, esi); /* 0x1505BAEA: push esi */
    PUSH32(esp, esi); /* 0x1505BAEB: push esi */
    RECOMP_CALL(sub_1505A11B); /* 0x1505BAEC: call 0x1505a11b */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x14u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x14u; /* 0x1505BAF1: add esp, 0x14 */
    _flag_k = FK_ADD;
L_1505BAF4:
    PUSH32(esp, MEM32(0x150BC164)); /* 0x1505BAF4: push dword ptr [0x150bc164] */
    eax = ebp + (-0x43C); /* 0x1505BAFA: lea eax, [ebp - 0x43c] */
    PUSH32(esp, 0x21Cu); /* 0x1505BB00: push 0x21c */
    PUSH32(esp, eax); /* 0x1505BB05: push eax */
    RECOMP_CALL(sub_1508F120); /* 0x1505BB06: call 0x1508f120 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x1505BB0B: add esp, 0xc */
    _flag_k = FK_ADD;
    /* test eax, eax */ /* 0x1505BB0E: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1505BB1F; /* 0x1505BB10: je 0x1505bb1f */
L_1505BB12:
    PUSH32(esp, esi); /* 0x1505BB12: push esi */
    PUSH32(esp, esi); /* 0x1505BB13: push esi */
    PUSH32(esp, esi); /* 0x1505BB14: push esi */
    PUSH32(esp, esi); /* 0x1505BB15: push esi */
    PUSH32(esp, esi); /* 0x1505BB16: push esi */
    RECOMP_CALL(sub_1505A11B); /* 0x1505BB17: call 0x1505a11b */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x14u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x14u; /* 0x1505BB1C: add esp, 0x14 */
    _flag_k = FK_ADD;
L_1505BB1F:
    eax = ebx + (-0xE); /* 0x1505BB1F: lea eax, [ebx - 0xe] */
    eax = eax + edi * 2; /* 0x1505BB22: lea eax, [eax + edi*2] */
    RECOMP_BACKEDGE();
    goto L_1505B9FC; /* 0x1505BB25: jmp 0x1505b9fc */
L_1505BB2A:
    PUSH32(esp, ecx); /* 0x1505BB2A: push ecx */
L_1505BB2B:
    eax = ebp + (-0x43C); /* 0x1505BB2B: lea eax, [ebp - 0x43c] */
    PUSH32(esp, 0x21Cu); /* 0x1505BB31: push 0x21c */
    PUSH32(esp, eax); /* 0x1505BB36: push eax */
    RECOMP_CALL(sub_1508F120); /* 0x1505BB37: call 0x1508f120 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x1505BB3C: add esp, 0xc */
    _flag_k = FK_ADD;
    /* test eax, eax */ /* 0x1505BB3F: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1505BB50; /* 0x1505BB41: je 0x1505bb50 */
L_1505BB43:
    PUSH32(esp, esi); /* 0x1505BB43: push esi */
    PUSH32(esp, esi); /* 0x1505BB44: push esi */
    PUSH32(esp, esi); /* 0x1505BB45: push esi */
    PUSH32(esp, esi); /* 0x1505BB46: push esi */
    PUSH32(esp, esi); /* 0x1505BB47: push esi */
    RECOMP_CALL(sub_1505A11B); /* 0x1505BB48: call 0x1505a11b */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x14u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x14u; /* 0x1505BB4D: add esp, 0x14 */
    _flag_k = FK_ADD;
L_1505BB50:
    PUSH32(esp, MEM32(0x150BC168)); /* 0x1505BB50: push dword ptr [0x150bc168] */
    eax = ebp + (-0x43C); /* 0x1505BB56: lea eax, [ebp - 0x43c] */
    PUSH32(esp, 0x21Cu); /* 0x1505BB5C: push 0x21c */
    PUSH32(esp, eax); /* 0x1505BB61: push eax */
    RECOMP_CALL(sub_1508F120); /* 0x1505BB62: call 0x1508f120 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x1505BB67: add esp, 0xc */
    _flag_k = FK_ADD;
    /* test eax, eax */ /* 0x1505BB6A: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1505BB7B; /* 0x1505BB6C: je 0x1505bb7b */
L_1505BB6E:
    PUSH32(esp, esi); /* 0x1505BB6E: push esi */
    PUSH32(esp, esi); /* 0x1505BB6F: push esi */
    PUSH32(esp, esi); /* 0x1505BB70: push esi */
    PUSH32(esp, esi); /* 0x1505BB71: push esi */
    PUSH32(esp, esi); /* 0x1505BB72: push esi */
    RECOMP_CALL(sub_1505A11B); /* 0x1505BB73: call 0x1505a11b */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x14u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x14u; /* 0x1505BB78: add esp, 0x14 */
    _flag_k = FK_ADD;
L_1505BB7B:
    PUSH32(esp, 0x150060B8u); /* 0x1505BB7B: push 0x150060b8 */
    eax = ebp + (-0x43C); /* 0x1505BB80: lea eax, [ebp - 0x43c] */
    PUSH32(esp, 0x21Cu); /* 0x1505BB86: push 0x21c */
    PUSH32(esp, eax); /* 0x1505BB8B: push eax */
    RECOMP_CALL(sub_1508F120); /* 0x1505BB8C: call 0x1508f120 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x1505BB91: add esp, 0xc */
    _flag_k = FK_ADD;
    /* test eax, eax */ /* 0x1505BB94: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1505BBA5; /* 0x1505BB96: je 0x1505bba5 */
L_1505BB98:
    PUSH32(esp, esi); /* 0x1505BB98: push esi */
    PUSH32(esp, esi); /* 0x1505BB99: push esi */
    PUSH32(esp, esi); /* 0x1505BB9A: push esi */
    PUSH32(esp, esi); /* 0x1505BB9B: push esi */
    PUSH32(esp, esi); /* 0x1505BB9C: push esi */
    RECOMP_CALL(sub_1505A11B); /* 0x1505BB9D: call 0x1505a11b */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x14u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x14u; /* 0x1505BBA2: add esp, 0x14 */
    _flag_k = FK_ADD;
L_1505BBA5:
    ecx = ebp + (-0x43C); /* 0x1505BBA5: lea ecx, [ebp - 0x43c] */
    edx = ecx + 0x2; /* 0x1505BBAB: lea edx, [ecx + 2] */
L_1505BBAE:
    SET_LO16(eax, MEM16(ecx)); /* 0x1505BBAE: mov ax, word ptr [ecx] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 2; /* 0x1505BBB1: add ecx, 2 */
    _flag_k = FK_ADD;
    /* cmp LO16(eax), LO16(esi) */ /* 0x1505BBB4: cmp ax, si */
    _flag_a = (uint32_t)(LO16(eax)) << 16; _flag_b = (uint32_t)(LO16(esi)) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    RECOMP_BACKEDGE();
    if (CMP_NE(_flag_a, _flag_b)) goto L_1505BBAE; /* 0x1505BBB7: jne 0x1505bbae */
L_1505BBB9:
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ecx = ecx - edx; /* 0x1505BBB9: sub ecx, edx */
    _flag_k = FK_CMP;
    eax = 0x21Cu; /* 0x1505BBBB: mov eax, 0x21c */
    if (1u) _cf = (((ecx) >> 0) & 1u); /* 0x1505BBC0: sar ecx, 1 */
    if (1u) { _flag_a = recomp_flags_pack(((uint32_t)((int32_t)ecx >> 1u)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ecx = (uint32_t)((int32_t)ecx >> 1u);
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - ecx; /* 0x1505BBC2: sub eax, ecx */
    _flag_k = FK_CMP;
    PUSH32(esp, 0xAu); /* 0x1505BBC4: push 0xa */
    PUSH32(esp, eax); /* 0x1505BBC6: push eax */
    eax = ebp + (-0x43C); /* 0x1505BBC7: lea eax, [ebp - 0x43c] */
    eax = eax + ecx * 2; /* 0x1505BBCD: lea eax, [eax + ecx*2] */
    PUSH32(esp, eax); /* 0x1505BBD0: push eax */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x1505BBD1: push dword ptr [ebp + 0x10] */
    RECOMP_CALL(sub_150313A0); /* 0x1505BBD4: call 0x150313a0 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x10u; /* 0x1505BBD9: add esp, 0x10 */
    _flag_k = FK_ADD;
    /* test eax, eax */ /* 0x1505BBDC: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1505BBED; /* 0x1505BBDE: je 0x1505bbed */
L_1505BBE0:
    PUSH32(esp, esi); /* 0x1505BBE0: push esi */
    PUSH32(esp, esi); /* 0x1505BBE1: push esi */
    PUSH32(esp, esi); /* 0x1505BBE2: push esi */
    PUSH32(esp, esi); /* 0x1505BBE3: push esi */
    PUSH32(esp, esi); /* 0x1505BBE4: push esi */
    RECOMP_CALL(sub_1505A11B); /* 0x1505BBE5: call 0x1505a11b */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x14u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x14u; /* 0x1505BBEA: add esp, 0x14 */
    _flag_k = FK_ADD;
L_1505BBED:
    PUSH32(esp, MEM32(0x150BC16C)); /* 0x1505BBED: push dword ptr [0x150bc16c] */
    eax = ebp + (-0x43C); /* 0x1505BBF3: lea eax, [ebp - 0x43c] */
    PUSH32(esp, 0x21Cu); /* 0x1505BBF9: push 0x21c */
    PUSH32(esp, eax); /* 0x1505BBFE: push eax */
    RECOMP_CALL(sub_1508F120); /* 0x1505BBFF: call 0x1508f120 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x1505BC04: add esp, 0xc */
    _flag_k = FK_ADD;
    /* test eax, eax */ /* 0x1505BC07: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1505BC18; /* 0x1505BC09: je 0x1505bc18 */
L_1505BC0B:
    PUSH32(esp, esi); /* 0x1505BC0B: push esi */
    PUSH32(esp, esi); /* 0x1505BC0C: push esi */
    PUSH32(esp, esi); /* 0x1505BC0D: push esi */
    PUSH32(esp, esi); /* 0x1505BC0E: push esi */
    PUSH32(esp, esi); /* 0x1505BC0F: push esi */
    RECOMP_CALL(sub_1505A11B); /* 0x1505BC10: call 0x1505a11b */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x14u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x14u; /* 0x1505BC15: add esp, 0x14 */
    _flag_k = FK_ADD;
L_1505BC18:
    PUSH32(esp, 0x150060C8u); /* 0x1505BC18: push 0x150060c8 */
    eax = ebp + (-0x43C); /* 0x1505BC1D: lea eax, [ebp - 0x43c] */
    PUSH32(esp, 0x21Cu); /* 0x1505BC23: push 0x21c */
    PUSH32(esp, eax); /* 0x1505BC28: push eax */
    RECOMP_CALL(sub_1508F120); /* 0x1505BC29: call 0x1508f120 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x1505BC2E: add esp, 0xc */
    _flag_k = FK_ADD;
    /* test eax, eax */ /* 0x1505BC31: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1505BC42; /* 0x1505BC33: je 0x1505bc42 */
L_1505BC35:
    PUSH32(esp, esi); /* 0x1505BC35: push esi */
    PUSH32(esp, esi); /* 0x1505BC36: push esi */
    PUSH32(esp, esi); /* 0x1505BC37: push esi */
    PUSH32(esp, esi); /* 0x1505BC38: push esi */
    PUSH32(esp, esi); /* 0x1505BC39: push esi */
    RECOMP_CALL(sub_1505A11B); /* 0x1505BC3A: call 0x1505a11b */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x14u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x14u; /* 0x1505BC3F: add esp, 0x14 */
    _flag_k = FK_ADD;
L_1505BC42:
    ecx = ebp + (-0x43C); /* 0x1505BC42: lea ecx, [ebp - 0x43c] */
    edx = ecx + 0x2; /* 0x1505BC48: lea edx, [ecx + 2] */
L_1505BC4B:
    SET_LO16(eax, MEM16(ecx)); /* 0x1505BC4B: mov ax, word ptr [ecx] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 2; /* 0x1505BC4E: add ecx, 2 */
    _flag_k = FK_ADD;
    /* cmp LO16(eax), LO16(esi) */ /* 0x1505BC51: cmp ax, si */
    _flag_a = (uint32_t)(LO16(eax)) << 16; _flag_b = (uint32_t)(LO16(esi)) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    RECOMP_BACKEDGE();
    if (CMP_NE(_flag_a, _flag_b)) goto L_1505BC4B; /* 0x1505BC54: jne 0x1505bc4b */
L_1505BC56:
    ebx = MEM32(ebp + (-0xA8C)); /* 0x1505BC56: mov ebx, dword ptr [ebp - 0xa8c] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ecx = ecx - edx; /* 0x1505BC5C: sub ecx, edx */
    _flag_k = FK_CMP;
    edx = ebx; /* 0x1505BC5E: mov edx, ebx */
    if (1u) _cf = (((ecx) >> 0) & 1u); /* 0x1505BC60: sar ecx, 1 */
    if (1u) { _flag_a = recomp_flags_pack(((uint32_t)((int32_t)ecx >> 1u)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ecx = (uint32_t)((int32_t)ecx >> 1u);
    edi = edx + 0x2; /* 0x1505BC62: lea edi, [edx + 2] */
L_1505BC65:
    SET_LO16(eax, MEM16(edx)); /* 0x1505BC65: mov ax, word ptr [edx] */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edx = edx + 2; /* 0x1505BC68: add edx, 2 */
    _flag_k = FK_ADD;
    /* cmp LO16(eax), LO16(esi) */ /* 0x1505BC6B: cmp ax, si */
    _flag_a = (uint32_t)(LO16(eax)) << 16; _flag_b = (uint32_t)(LO16(esi)) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    RECOMP_BACKEDGE();
    if (CMP_NE(_flag_a, _flag_b)) goto L_1505BC65; /* 0x1505BC6E: jne 0x1505bc65 */
L_1505BC70:
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    edx = edx - edi; /* 0x1505BC70: sub edx, edi */
    _flag_k = FK_CMP;
    edi = 0x21Cu; /* 0x1505BC72: mov edi, 0x21c */
    if (1u) _cf = (((edx) >> 0) & 1u); /* 0x1505BC77: sar edx, 1 */
    if (1u) { _flag_a = recomp_flags_pack(((uint32_t)((int32_t)edx >> 1u)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    edx = (uint32_t)((int32_t)edx >> 1u);
    eax = edx + 0xB0; /* 0x1505BC79: lea eax, [edx + 0xb0] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + ecx; /* 0x1505BC7F: add eax, ecx */
    _flag_k = FK_ADD;
    /* cmp eax, edi */ /* 0x1505BC81: cmp eax, edi */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_1505BCB7; /* 0x1505BC83: jbe 0x1505bcb7 */
L_1505BC85:
    eax = 0x169u; /* 0x1505BC85: mov eax, 0x169 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - ecx; /* 0x1505BC8A: sub eax, ecx */
    _flag_k = FK_CMP;
    PUSH32(esp, eax); /* 0x1505BC8C: push eax */
    PUSH32(esp, ebx); /* 0x1505BC8D: push ebx */
    eax = ebp + (-0x43C); /* 0x1505BC8E: lea eax, [ebp - 0x43c] */
    PUSH32(esp, edi); /* 0x1505BC94: push edi */
    PUSH32(esp, eax); /* 0x1505BC95: push eax */
    RECOMP_CALL(sub_1508F3F0); /* 0x1505BC96: call 0x1508f3f0 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x10u; /* 0x1505BC9B: add esp, 0x10 */
    _flag_k = FK_ADD;
    /* test eax, eax */ /* 0x1505BC9E: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1505BCAF; /* 0x1505BCA0: je 0x1505bcaf */
L_1505BCA2:
    PUSH32(esp, esi); /* 0x1505BCA2: push esi */
    PUSH32(esp, esi); /* 0x1505BCA3: push esi */
    PUSH32(esp, esi); /* 0x1505BCA4: push esi */
    PUSH32(esp, esi); /* 0x1505BCA5: push esi */
    PUSH32(esp, esi); /* 0x1505BCA6: push esi */
    RECOMP_CALL(sub_1505A11B); /* 0x1505BCA7: call 0x1505a11b */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x14u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x14u; /* 0x1505BCAC: add esp, 0x14 */
    _flag_k = FK_ADD;
L_1505BCAF:
    PUSH32(esp, MEM32(0x150BC164)); /* 0x1505BCAF: push dword ptr [0x150bc164] */
    goto L_1505BCB8; /* 0x1505BCB5: jmp 0x1505bcb8 */
L_1505BCB7:
    PUSH32(esp, ebx); /* 0x1505BCB7: push ebx */
L_1505BCB8:
    eax = ebp + (-0x43C); /* 0x1505BCB8: lea eax, [ebp - 0x43c] */
    PUSH32(esp, edi); /* 0x1505BCBE: push edi */
    PUSH32(esp, eax); /* 0x1505BCBF: push eax */
    RECOMP_CALL(sub_1508F120); /* 0x1505BCC0: call 0x1508f120 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x1505BCC5: add esp, 0xc */
    _flag_k = FK_ADD;
    /* test eax, eax */ /* 0x1505BCC8: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1505BCD9; /* 0x1505BCCA: je 0x1505bcd9 */
L_1505BCCC:
    PUSH32(esp, esi); /* 0x1505BCCC: push esi */
    PUSH32(esp, esi); /* 0x1505BCCD: push esi */
    PUSH32(esp, esi); /* 0x1505BCCE: push esi */
    PUSH32(esp, esi); /* 0x1505BCCF: push esi */
    PUSH32(esp, esi); /* 0x1505BCD0: push esi */
    RECOMP_CALL(sub_1505A11B); /* 0x1505BCD1: call 0x1505a11b */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x14u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x14u; /* 0x1505BCD6: add esp, 0x14 */
    _flag_k = FK_ADD;
L_1505BCD9:
    PUSH32(esp, MEM32(0x150BC16C)); /* 0x1505BCD9: push dword ptr [0x150bc16c] */
    eax = ebp + (-0x43C); /* 0x1505BCDF: lea eax, [ebp - 0x43c] */
    PUSH32(esp, edi); /* 0x1505BCE5: push edi */
    PUSH32(esp, eax); /* 0x1505BCE6: push eax */
    RECOMP_CALL(sub_1508F120); /* 0x1505BCE7: call 0x1508f120 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x1505BCEC: add esp, 0xc */
    _flag_k = FK_ADD;
    /* test eax, eax */ /* 0x1505BCEF: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1505BD00; /* 0x1505BCF1: je 0x1505bd00 */
L_1505BCF3:
    PUSH32(esp, esi); /* 0x1505BCF3: push esi */
    PUSH32(esp, esi); /* 0x1505BCF4: push esi */
    PUSH32(esp, esi); /* 0x1505BCF5: push esi */
    PUSH32(esp, esi); /* 0x1505BCF6: push esi */
    PUSH32(esp, esi); /* 0x1505BCF7: push esi */
    RECOMP_CALL(sub_1505A11B); /* 0x1505BCF8: call 0x1505a11b */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x14u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x14u; /* 0x1505BCFD: add esp, 0x14 */
    _flag_k = FK_ADD;
L_1505BD00:
    PUSH32(esp, 0x150060E8u); /* 0x1505BD00: push 0x150060e8 */
    eax = ebp + (-0x43C); /* 0x1505BD05: lea eax, [ebp - 0x43c] */
    PUSH32(esp, edi); /* 0x1505BD0B: push edi */
    PUSH32(esp, eax); /* 0x1505BD0C: push eax */
    RECOMP_CALL(sub_1508F120); /* 0x1505BD0D: call 0x1508f120 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x1505BD12: add esp, 0xc */
    _flag_k = FK_ADD;
    /* test eax, eax */ /* 0x1505BD15: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1505BD26; /* 0x1505BD17: je 0x1505bd26 */
L_1505BD19:
    PUSH32(esp, esi); /* 0x1505BD19: push esi */
    PUSH32(esp, esi); /* 0x1505BD1A: push esi */
    PUSH32(esp, esi); /* 0x1505BD1B: push esi */
    PUSH32(esp, esi); /* 0x1505BD1C: push esi */
    PUSH32(esp, esi); /* 0x1505BD1D: push esi */
    RECOMP_CALL(sub_1505A11B); /* 0x1505BD1E: call 0x1505a11b */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x14u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x14u; /* 0x1505BD23: add esp, 0x14 */
    _flag_k = FK_ADD;
L_1505BD26:
    PUSH32(esp, MEM32(0x150BC16C)); /* 0x1505BD26: push dword ptr [0x150bc16c] */
    eax = ebp + (-0x43C); /* 0x1505BD2C: lea eax, [ebp - 0x43c] */
    PUSH32(esp, edi); /* 0x1505BD32: push edi */
    PUSH32(esp, eax); /* 0x1505BD33: push eax */
    RECOMP_CALL(sub_1508F120); /* 0x1505BD34: call 0x1508f120 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x1505BD39: add esp, 0xc */
    _flag_k = FK_ADD;
    /* test eax, eax */ /* 0x1505BD3C: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1505BD4D; /* 0x1505BD3E: je 0x1505bd4d */
L_1505BD40:
    PUSH32(esp, esi); /* 0x1505BD40: push esi */
    PUSH32(esp, esi); /* 0x1505BD41: push esi */
    PUSH32(esp, esi); /* 0x1505BD42: push esi */
    PUSH32(esp, esi); /* 0x1505BD43: push esi */
    PUSH32(esp, esi); /* 0x1505BD44: push esi */
    RECOMP_CALL(sub_1505A11B); /* 0x1505BD45: call 0x1505a11b */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x14u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x14u; /* 0x1505BD4A: add esp, 0x14 */
    _flag_k = FK_ADD;
L_1505BD4D:
    PUSH32(esp, 0x150061C8u); /* 0x1505BD4D: push 0x150061c8 */
    eax = ebp + (-0x43C); /* 0x1505BD52: lea eax, [ebp - 0x43c] */
    PUSH32(esp, edi); /* 0x1505BD58: push edi */
    PUSH32(esp, eax); /* 0x1505BD59: push eax */
    RECOMP_CALL(sub_1508F120); /* 0x1505BD5A: call 0x1508f120 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x1505BD5F: add esp, 0xc */
    _flag_k = FK_ADD;
    /* test eax, eax */ /* 0x1505BD62: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1505BD73; /* 0x1505BD64: je 0x1505bd73 */
L_1505BD66:
    PUSH32(esp, esi); /* 0x1505BD66: push esi */
    PUSH32(esp, esi); /* 0x1505BD67: push esi */
    PUSH32(esp, esi); /* 0x1505BD68: push esi */
    PUSH32(esp, esi); /* 0x1505BD69: push esi */
    PUSH32(esp, esi); /* 0x1505BD6A: push esi */
    RECOMP_CALL(sub_1505A11B); /* 0x1505BD6B: call 0x1505a11b */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x14u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x14u; /* 0x1505BD70: add esp, 0x14 */
    _flag_k = FK_ADD;
L_1505BD73:
    PUSH32(esp, 0x00012012u); /* 0x1505BD73: push 0x12012 */
    eax = ebp + (-0x43C); /* 0x1505BD78: lea eax, [ebp - 0x43c] */
    PUSH32(esp, 0x15006248u); /* 0x1505BD7E: push 0x15006248 */
    PUSH32(esp, eax); /* 0x1505BD83: push eax */
    RECOMP_CALL(sub_15061A24); /* 0x1505BD84: call 0x15061a24 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x1505BD89: add esp, 0xc */
    _flag_k = FK_ADD;
    /* cmp eax, 3 */ /* 0x1505BD8C: cmp eax, 3 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(3);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1505BE6E; /* 0x1505BD8F: je 0x1505be6e */
L_1505BD95:
    /* cmp eax, 4 */ /* 0x1505BD95: cmp eax, 4 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_1505BDAA; /* 0x1505BD98: jne 0x1505bdaa */
L_1505BD9A:
    void_lift_trap(0x1505BD9Au, "int3 ");
L_1505BD9B:
    ecx = MEM32(ebp + (-0x4)); /* 0x1505BD9B: mov ecx, dword ptr [ebp - 4] */
    edi = POP32_VAL(esp); /* 0x1505BD9E: pop edi */
    esi = POP32_VAL(esp); /* 0x1505BD9F: pop esi */
    _flag_a = (uint32_t)((ecx ^ ebp)); _flag_b = (uint32_t)((ecx ^ ebp));
    ecx = ecx ^ ebp; /* 0x1505BDA0: xor ecx, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    ebx = POP32_VAL(esp); /* 0x1505BDA2: pop ebx */
    RECOMP_CALL(sub_1505E540); /* 0x1505BDA3: call 0x1505e540 */
    RECOMP_FLAGS_IN();
    esp = ebp; ebp = POP32_VAL(esp); /* 0x1505BDA8: leave  */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1505BDA9: ret  */
L_1505BDAA:
    /* cmp eax, 5 */ /* 0x1505BDAA: cmp eax, 5 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(5);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_1505BE7D; /* 0x1505BDAD: jne 0x1505be7d */
L_1505BDB3:
    RECOMP_BACKEDGE();
    goto L_1505BD9B; /* 0x1505BDB3: jmp 0x1505bd9b */
L_1505BDB5:
    PUSH32(esp, 0xFFFFFFF4u); /* 0x1505BDB5: push -0xc */
    RECOMP_ICALL(MEM32(0x150C01E0)); /* 0x1505BDB7: call dword ptr [0x150c01e0] */
    RECOMP_FLAGS_IN();
    ebx = eax; /* 0x1505BDBD: mov ebx, eax */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    esi = 0; /* 0x1505BDBF: xor esi, esi */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp ebx, 0xFFFFFFFFu */ /* 0x1505BDC1: cmp ebx, -1 */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(0xFFFFFFFFu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1505BE30; /* 0x1505BDC4: je 0x1505be30 */
L_1505BDC6:
    /* test ebx, ebx */ /* 0x1505BDC6: test ebx, ebx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ebx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1505BE30; /* 0x1505BDC8: je 0x1505be30 */
L_1505BDCA:
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x1505BDCA: push dword ptr [ebp + 0x10] */
    eax = ebp + (-0xA80); /* 0x1505BDCD: lea eax, [ebp - 0xa80] */
    PUSH32(esp, edi); /* 0x1505BDD3: push edi */
    PUSH32(esp, MEM32(ebp + (-0xA8C))); /* 0x1505BDD4: push dword ptr [ebp - 0xa8c] */
    PUSH32(esp, 0x15005FE0u); /* 0x1505BDDA: push 0x15005fe0 */
    PUSH32(esp, 0x21Cu); /* 0x1505BDDF: push 0x21c */
    PUSH32(esp, eax); /* 0x1505BDE4: push eax */
    RECOMP_CALL(sub_15064960); /* 0x1505BDE5: call 0x15064960 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x18u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x18u; /* 0x1505BDEA: add esp, 0x18 */
    _flag_k = FK_ADD;
    /* test eax, eax */ /* 0x1505BDED: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_1505BE30; /* 0x1505BDEF: js 0x1505be30 */
L_1505BDF1:
    PUSH32(esp, ebx); /* 0x1505BDF1: push ebx */
    RECOMP_ICALL(MEM32(0x150C00E8)); /* 0x1505BDF2: call dword ptr [0x150c00e8] */
    RECOMP_FLAGS_IN();
    /* cmp eax, 2 */ /* 0x1505BDF8: cmp eax, 2 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_1505BE30; /* 0x1505BDFB: jne 0x1505be30 */
L_1505BDFD:
    ecx = ebp + (-0xA80); /* 0x1505BDFD: lea ecx, [ebp - 0xa80] */
    edx = ecx + 0x2; /* 0x1505BE03: lea edx, [ecx + 2] */
L_1505BE06:
    SET_LO16(eax, MEM16(ecx)); /* 0x1505BE06: mov ax, word ptr [ecx] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 2; /* 0x1505BE09: add ecx, 2 */
    _flag_k = FK_ADD;
    /* cmp LO16(eax), LO16(esi) */ /* 0x1505BE0C: cmp ax, si */
    _flag_a = (uint32_t)(LO16(eax)) << 16; _flag_b = (uint32_t)(LO16(esi)) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    RECOMP_BACKEDGE();
    if (CMP_NE(_flag_a, _flag_b)) goto L_1505BE06; /* 0x1505BE0F: jne 0x1505be06 */
L_1505BE11:
    PUSH32(esp, esi); /* 0x1505BE11: push esi */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ecx = ecx - edx; /* 0x1505BE12: sub ecx, edx */
    _flag_k = FK_CMP;
    eax = ebp + (-0xA84); /* 0x1505BE14: lea eax, [ebp - 0xa84] */
    PUSH32(esp, eax); /* 0x1505BE1A: push eax */
    if (1u) _cf = (((ecx) >> 0) & 1u); /* 0x1505BE1B: sar ecx, 1 */
    if (1u) { _flag_a = recomp_flags_pack(((uint32_t)((int32_t)ecx >> 1u)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ecx = (uint32_t)((int32_t)ecx >> 1u);
    eax = ebp + (-0xA80); /* 0x1505BE1D: lea eax, [ebp - 0xa80] */
    PUSH32(esp, ecx); /* 0x1505BE23: push ecx */
    PUSH32(esp, eax); /* 0x1505BE24: push eax */
    PUSH32(esp, ebx); /* 0x1505BE25: push ebx */
    RECOMP_ICALL(MEM32(0x150C0014)); /* 0x1505BE26: call dword ptr [0x150c0014] */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x1505BE2C: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1505BE7D; /* 0x1505BE2E: jne 0x1505be7d */
L_1505BE30:
    /* test MEM32(0x150BC64C), 0x10Cu */ /* 0x1505BE30: test dword ptr [0x150bc64c], 0x10c */
    _flag_a = (uint32_t)(MEM32(0x150BC64C)); _flag_b = (uint32_t)(0x10Cu);
    _cf = 0;
    _flag_k = FK_TEST;
    ebx = 0x150BC640u; /* 0x1505BE3A: mov ebx, 0x150bc640 */
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1505BE4E; /* 0x1505BE3F: jne 0x1505be4e */
L_1505BE41:
    PUSH32(esp, esi); /* 0x1505BE41: push esi */
    PUSH32(esp, 4); /* 0x1505BE42: push 4 */
    PUSH32(esp, esi); /* 0x1505BE44: push esi */
    PUSH32(esp, ebx); /* 0x1505BE45: push ebx */
    RECOMP_CALL(sub_1507D9F0); /* 0x1505BE46: call 0x1507d9f0 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x10u; /* 0x1505BE4B: add esp, 0x10 */
    _flag_k = FK_ADD;
L_1505BE4E:
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x1505BE4E: push dword ptr [ebp + 0x10] */
    PUSH32(esp, edi); /* 0x1505BE51: push edi */
    PUSH32(esp, MEM32(ebp + (-0xA8C))); /* 0x1505BE52: push dword ptr [ebp - 0xa8c] */
    PUSH32(esp, 0x15005FE0u); /* 0x1505BE58: push 0x15005fe0 */
    PUSH32(esp, ebx); /* 0x1505BE5D: push ebx */
    RECOMP_CALL(sub_15077660); /* 0x1505BE5E: call 0x15077660 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, ebx); /* 0x1505BE63: push ebx */
    RECOMP_CALL(sub_15076D00); /* 0x1505BE64: call 0x15076d00 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x18u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x18u; /* 0x1505BE69: add esp, 0x18 */
    _flag_k = FK_ADD;
    goto L_1505BE7D; /* 0x1505BE6C: jmp 0x1505be7d */
L_1505BE6E:
    PUSH32(esp, 0x16u); /* 0x1505BE6E: push 0x16 */
    RECOMP_CALL(sub_15058D60); /* 0x1505BE70: call 0x15058d60 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1505BE75: pop ecx */
    PUSH32(esp, 3); /* 0x1505BE76: push 3 */
    RECOMP_CALL(sub_15067FB0); /* 0x1505BE78: call 0x15067fb0 */
    RECOMP_FLAGS_IN();
L_1505BE7D:
    RECOMP_CALL(sub_1505D3B0); /* 0x1505BE7D: call 0x1505d3b0 */
    RECOMP_FLAGS_IN();
    void_lift_trap(0x1505BE82u, "int3 ");
    { RECOMP_REGS_OUT(); return; } /* end of function */
    RECOMP_REGS_OUT();
}

void sub_1505BE90(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1505BE90u);

L_1505BE90:
    edi = edi; /* 0x1505BE90: mov edi, edi */
    PUSH32(esp, ebp); /* 0x1505BE92: push ebp */
    ebp = esp; /* 0x1505BE93: mov ebp, esp */
    PUSH32(esp, ebx); /* 0x1505BE95: push ebx */
    PUSH32(esp, esi); /* 0x1505BE96: push esi */
    PUSH32(esp, edi); /* 0x1505BE97: push edi */
    RECOMP_CALL(sub_15068840); /* 0x1505BE98: call 0x15068840 */
    RECOMP_FLAGS_IN();
    edi = eax; /* 0x1505BE9D: mov edi, eax */
    /* test edi, edi */ /* 0x1505BE9F: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1505BEF3; /* 0x1505BEA1: je 0x1505bef3 */
L_1505BEA3:
    esi = MEM32(edi + 0x28); /* 0x1505BEA3: mov esi, dword ptr [edi + 0x28] */
    ebx = 0x86u; /* 0x1505BEA6: mov ebx, 0x86 */
    /* test esi, esi */ /* 0x1505BEAB: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1505BEC2; /* 0x1505BEAD: jne 0x1505bec2 */
L_1505BEAF:
    PUSH32(esp, 2); /* 0x1505BEAF: push 2 */
    PUSH32(esp, ebx); /* 0x1505BEB1: push ebx */
    RECOMP_CALL(sub_15048EE2); /* 0x1505BEB2: call 0x15048ee2 */
    RECOMP_FLAGS_IN();
    esi = eax; /* 0x1505BEB7: mov esi, eax */
    MEM32(edi + 0x28) = esi; /* 0x1505BEB9: mov dword ptr [edi + 0x28], esi */
    ecx = POP32_VAL(esp); /* 0x1505BEBC: pop ecx */
    ecx = POP32_VAL(esp); /* 0x1505BEBD: pop ecx */
    /* test esi, esi */ /* 0x1505BEBE: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1505BEF3; /* 0x1505BEC0: je 0x1505bef3 */
L_1505BEC2:
    PUSH32(esp, 0x85u); /* 0x1505BEC2: push 0x85 */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x1505BEC7: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_15059547); /* 0x1505BECA: call 0x15059547 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1505BECF: pop ecx */
    PUSH32(esp, eax); /* 0x1505BED0: push eax */
    PUSH32(esp, ebx); /* 0x1505BED1: push ebx */
    PUSH32(esp, esi); /* 0x1505BED2: push esi */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edi = 0; /* 0x1505BED3: xor edi, edi */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, edi); /* 0x1505BED5: push edi */
    RECOMP_CALL(sub_15031D90); /* 0x1505BED6: call 0x15031d90 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x14u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x14u; /* 0x1505BEDB: add esp, 0x14 */
    _flag_k = FK_ADD;
    /* test eax, eax */ /* 0x1505BEDE: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1505BEEF; /* 0x1505BEE0: je 0x1505beef */
L_1505BEE2:
    PUSH32(esp, edi); /* 0x1505BEE2: push edi */
    PUSH32(esp, edi); /* 0x1505BEE3: push edi */
    PUSH32(esp, edi); /* 0x1505BEE4: push edi */
    PUSH32(esp, edi); /* 0x1505BEE5: push edi */
    PUSH32(esp, edi); /* 0x1505BEE6: push edi */
    RECOMP_CALL(sub_1505A11B); /* 0x1505BEE7: call 0x1505a11b */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x14u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x14u; /* 0x1505BEEC: add esp, 0x14 */
    _flag_k = FK_ADD;
L_1505BEEF:
    eax = esi; /* 0x1505BEEF: mov eax, esi */
    goto L_1505BEF8; /* 0x1505BEF1: jmp 0x1505bef8 */
L_1505BEF3:
    eax = 0x15006298u; /* 0x1505BEF3: mov eax, 0x15006298 */
L_1505BEF8:
    edi = POP32_VAL(esp); /* 0x1505BEF8: pop edi */
    esi = POP32_VAL(esp); /* 0x1505BEF9: pop esi */
    ebx = POP32_VAL(esp); /* 0x1505BEFA: pop ebx */
    ebp = POP32_VAL(esp); /* 0x1505BEFB: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1505BEFC: ret  */
    RECOMP_REGS_OUT();
}

void sub_1505BF10(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1505BF10u);

L_1505BF10:
    edi = edi; /* 0x1505BF10: mov edi, edi */
    PUSH32(esp, ebp); /* 0x1505BF12: push ebp */
    ebp = esp; /* 0x1505BF13: mov ebp, esp */
    /* cmp MEM32(ebp + 0x8), 0 */ /* 0x1505BF15: cmp dword ptr [ebp + 8], 0 */
    _flag_a = (uint32_t)(MEM32(ebp + 0x8)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    PUSH32(esp, esi); /* 0x1505BF19: push esi */
    PUSH32(esp, edi); /* 0x1505BF1A: push edi */
    if (CMP_NE(_flag_a, _flag_b)) goto L_1505BF3A; /* 0x1505BF1B: jne 0x1505bf3a */
L_1505BF1D:
    RECOMP_CALL(sub_15036430); /* 0x1505BF1D: call 0x15036430 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0x16u); /* 0x1505BF22: push 0x16 */
    edi = POP32_VAL(esp); /* 0x1505BF24: pop edi */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    esi = 0; /* 0x1505BF25: xor esi, esi */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, esi); /* 0x1505BF27: push esi */
    PUSH32(esp, esi); /* 0x1505BF28: push esi */
    PUSH32(esp, esi); /* 0x1505BF29: push esi */
    PUSH32(esp, esi); /* 0x1505BF2A: push esi */
    PUSH32(esp, esi); /* 0x1505BF2B: push esi */
    MEM32(eax) = edi; /* 0x1505BF2C: mov dword ptr [eax], edi */
    RECOMP_CALL(sub_1505A110); /* 0x1505BF2E: call 0x1505a110 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x14u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x14u; /* 0x1505BF33: add esp, 0x14 */
    _flag_k = FK_ADD;
    eax = edi; /* 0x1505BF36: mov eax, edi */
    goto L_1505BF82; /* 0x1505BF38: jmp 0x1505bf82 */
L_1505BF3A:
    /* cmp MEM32(ebp + 0xC), 0 */ /* 0x1505BF3A: cmp dword ptr [ebp + 0xc], 0 */
    _flag_a = (uint32_t)(MEM32(ebp + 0xC)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_BE(_flag_a, _flag_b)) goto L_1505BF1D; /* 0x1505BF3E: jbe 0x1505bf1d */
L_1505BF40:
    PUSH32(esp, 0xFFFFFFFFu); /* 0x1505BF40: push -1 */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x1505BF42: push dword ptr [ebp + 0x10] */
    RECOMP_CALL(sub_15059547); /* 0x1505BF45: call 0x15059547 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1505BF4A: pop ecx */
    PUSH32(esp, eax); /* 0x1505BF4B: push eax */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x1505BF4C: push dword ptr [ebp + 0xc] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    esi = 0; /* 0x1505BF4F: xor esi, esi */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x1505BF51: push dword ptr [ebp + 8] */
    PUSH32(esp, esi); /* 0x1505BF54: push esi */
    RECOMP_CALL(sub_15031D90); /* 0x1505BF55: call 0x15031d90 */
    RECOMP_FLAGS_IN();
    edi = eax; /* 0x1505BF5A: mov edi, eax */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x14u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x14u; /* 0x1505BF5C: add esp, 0x14 */
    _flag_k = FK_ADD;
    /* test edi, edi */ /* 0x1505BF5F: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1505BF7A; /* 0x1505BF61: je 0x1505bf7a */
L_1505BF63:
    /* cmp edi, 0x16u */ /* 0x1505BF63: cmp edi, 0x16 */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(0x16u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1505BF6D; /* 0x1505BF66: je 0x1505bf6d */
L_1505BF68:
    /* cmp edi, 0x22u */ /* 0x1505BF68: cmp edi, 0x22 */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(0x22u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_1505BF7A; /* 0x1505BF6B: jne 0x1505bf7a */
L_1505BF6D:
    PUSH32(esp, esi); /* 0x1505BF6D: push esi */
    PUSH32(esp, esi); /* 0x1505BF6E: push esi */
    PUSH32(esp, esi); /* 0x1505BF6F: push esi */
    PUSH32(esp, esi); /* 0x1505BF70: push esi */
    PUSH32(esp, esi); /* 0x1505BF71: push esi */
    RECOMP_CALL(sub_1505A11B); /* 0x1505BF72: call 0x1505a11b */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x14u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x14u; /* 0x1505BF77: add esp, 0x14 */
    _flag_k = FK_ADD;
L_1505BF7A:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1505BF7A: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp edi, 0x50u */ /* 0x1505BF7C: cmp edi, 0x50 */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(0x50u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) { eax = edi; } /* 0x1505BF7F: cmovne eax, edi */
L_1505BF82:
    edi = POP32_VAL(esp); /* 0x1505BF82: pop edi */
    esi = POP32_VAL(esp); /* 0x1505BF83: pop esi */
    ebp = POP32_VAL(esp); /* 0x1505BF84: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1505BF85: ret  */
    RECOMP_REGS_OUT();
}

void sub_1505BF8C(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1505BF8Cu);

L_1505BF8C:
    PUSH32(esp, 0x10u); /* 0x1505BF8C: push 0x10 */
    PUSH32(esp, 0x150B0BE8u); /* 0x1505BF8E: push 0x150b0be8 */
    RECOMP_CALL(sub_1505E988); /* 0x1505BF93: call 0x1505e988 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 7); /* 0x1505BF98: push 7 */
    RECOMP_CALL(sub_15068D80); /* 0x1505BF9A: call 0x15068d80 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1505BF9F: pop ecx */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ebx = 0; /* 0x1505BFA0: xor ebx, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x4)) = ebx; /* 0x1505BFA2: mov dword ptr [ebp - 4], ebx */
    edi = MEM32(ebp + 0x8); /* 0x1505BFA5: mov edi, dword ptr [ebp + 8] */
    /* test edi, edi */ /* 0x1505BFA8: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1505BFC8; /* 0x1505BFAA: jne 0x1505bfc8 */
L_1505BFAC:
    RECOMP_CALL(sub_15036430); /* 0x1505BFAC: call 0x15036430 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0x16u); /* 0x1505BFB1: push 0x16 */
    esi = POP32_VAL(esp); /* 0x1505BFB3: pop esi */
    MEM32(eax) = esi; /* 0x1505BFB4: mov dword ptr [eax], esi */
    PUSH32(esp, ebx); /* 0x1505BFB6: push ebx */
    PUSH32(esp, ebx); /* 0x1505BFB7: push ebx */
    PUSH32(esp, ebx); /* 0x1505BFB8: push ebx */
    PUSH32(esp, ebx); /* 0x1505BFB9: push ebx */
    PUSH32(esp, ebx); /* 0x1505BFBA: push ebx */
    RECOMP_CALL(sub_1505A110); /* 0x1505BFBB: call 0x1505a110 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x14u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x14u; /* 0x1505BFC0: add esp, 0x14 */
    _flag_k = FK_ADD;
    goto L_1505C04C; /* 0x1505BFC3: jmp 0x1505c04c */
L_1505BFC8:
    MEM32(edi) = ebx; /* 0x1505BFC8: mov dword ptr [edi], ebx */
    esi = MEM32(ebp + 0xC); /* 0x1505BFCA: mov esi, dword ptr [ebp + 0xc] */
    /* test esi, esi */ /* 0x1505BFCD: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1505BFD3; /* 0x1505BFCF: je 0x1505bfd3 */
L_1505BFD1:
    MEM32(esi) = ebx; /* 0x1505BFD1: mov dword ptr [esi], ebx */
L_1505BFD3:
    /* cmp MEM32(ebp + 0x10), 0 */ /* 0x1505BFD3: cmp dword ptr [ebp + 0x10], 0 */
    _flag_a = (uint32_t)(MEM32(ebp + 0x10)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1505BFAC; /* 0x1505BFD7: je 0x1505bfac */
L_1505BFD9:
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x1505BFD9: push dword ptr [ebp + 0x10] */
    RECOMP_CALL(sub_1505C0FB); /* 0x1505BFDC: call 0x1505c0fb */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1505BFE1: pop ecx */
    ebx = eax; /* 0x1505BFE2: mov ebx, eax */
    /* test ebx, ebx */ /* 0x1505BFE4: test ebx, ebx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ebx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1505BFEC; /* 0x1505BFE6: jne 0x1505bfec */
L_1505BFE8:
    esi = eax; /* 0x1505BFE8: mov esi, eax */
    goto L_1505C04C; /* 0x1505BFEA: jmp 0x1505c04c */
L_1505BFEC:
    ecx = ebx; /* 0x1505BFEC: mov ecx, ebx */
    edx = ecx + 0x2; /* 0x1505BFEE: lea edx, [ecx + 2] */
L_1505BFF1:
    SET_LO16(eax, MEM16(ecx)); /* 0x1505BFF1: mov ax, word ptr [ecx] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 2; /* 0x1505BFF4: add ecx, 2 */
    _flag_k = FK_ADD;
    /* cmp LO16(eax), MEM16(ebp + (-0x4)) */ /* 0x1505BFF7: cmp ax, word ptr [ebp - 4] */
    _flag_a = (uint32_t)(LO16(eax)) << 16; _flag_b = (uint32_t)(MEM16(ebp + (-0x4))) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    RECOMP_BACKEDGE();
    if (CMP_NE(_flag_a, _flag_b)) goto L_1505BFF1; /* 0x1505BFFB: jne 0x1505bff1 */
L_1505BFFD:
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ecx = ecx - edx; /* 0x1505BFFD: sub ecx, edx */
    _flag_k = FK_CMP;
    if (1u) _cf = (((ecx) >> 0) & 1u); /* 0x1505BFFF: sar ecx, 1 */
    if (1u) { _flag_a = recomp_flags_pack(((uint32_t)((int32_t)ecx >> 1u)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ecx = (uint32_t)((int32_t)ecx >> 1u);
    eax = ecx + 0x1; /* 0x1505C001: lea eax, [ecx + 1] */
    MEM32(ebp + (-0x20)) = eax; /* 0x1505C004: mov dword ptr [ebp - 0x20], eax */
    PUSH32(esp, 2); /* 0x1505C007: push 2 */
    PUSH32(esp, eax); /* 0x1505C009: push eax */
    RECOMP_CALL(sub_150487F0); /* 0x1505C00A: call 0x150487f0 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1505C00F: pop ecx */
    ecx = POP32_VAL(esp); /* 0x1505C010: pop ecx */
    MEM32(edi) = eax; /* 0x1505C011: mov dword ptr [edi], eax */
    /* test eax, eax */ /* 0x1505C013: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1505C023; /* 0x1505C015: jne 0x1505c023 */
L_1505C017:
    RECOMP_CALL(sub_15036430); /* 0x1505C017: call 0x15036430 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0xCu); /* 0x1505C01C: push 0xc */
    esi = POP32_VAL(esp); /* 0x1505C01E: pop esi */
    MEM32(eax) = esi; /* 0x1505C01F: mov dword ptr [eax], esi */
    goto L_1505C04C; /* 0x1505C021: jmp 0x1505c04c */
L_1505C023:
    PUSH32(esp, ebx); /* 0x1505C023: push ebx */
    edi = MEM32(ebp + (-0x20)); /* 0x1505C024: mov edi, dword ptr [ebp - 0x20] */
    PUSH32(esp, edi); /* 0x1505C027: push edi */
    PUSH32(esp, eax); /* 0x1505C028: push eax */
    RECOMP_CALL(sub_1508F250); /* 0x1505C029: call 0x1508f250 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x1505C02E: add esp, 0xc */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ebx = 0; /* 0x1505C031: xor ebx, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
    /* test eax, eax */ /* 0x1505C033: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1505C044; /* 0x1505C035: je 0x1505c044 */
L_1505C037:
    PUSH32(esp, ebx); /* 0x1505C037: push ebx */
    PUSH32(esp, ebx); /* 0x1505C038: push ebx */
    PUSH32(esp, ebx); /* 0x1505C039: push ebx */
    PUSH32(esp, ebx); /* 0x1505C03A: push ebx */
    PUSH32(esp, ebx); /* 0x1505C03B: push ebx */
    RECOMP_CALL(sub_1505A11B); /* 0x1505C03C: call 0x1505a11b */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x14u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x14u; /* 0x1505C041: add esp, 0x14 */
    _flag_k = FK_ADD;
L_1505C044:
    /* test esi, esi */ /* 0x1505C044: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1505C04A; /* 0x1505C046: je 0x1505c04a */
L_1505C048:
    MEM32(esi) = edi; /* 0x1505C048: mov dword ptr [esi], edi */
L_1505C04A:
    esi = ebx; /* 0x1505C04A: mov esi, ebx */
L_1505C04C:
    MEM32(ebp + (-0x1C)) = esi; /* 0x1505C04C: mov dword ptr [ebp - 0x1c], esi */
    MEM32(ebp + (-0x4)) = 0xFFFFFFFEu; /* 0x1505C04F: mov dword ptr [ebp - 4], 0xfffffffe */
    RECOMP_CALL(sub_1505C070); /* 0x1505C056: call 0x1505c070 */
    RECOMP_FLAGS_IN();
    eax = esi; /* 0x1505C05B: mov eax, esi */
    ecx = MEM32(ebp + (-0x10)); /* 0x1505C05D: mov ecx, dword ptr [ebp - 0x10] */
    MEM32(FS_BASE + (0)) = ecx; /* 0x1505C060: mov dword ptr fs:[0], ecx */
    ecx = POP32_VAL(esp); /* 0x1505C067: pop ecx */
    edi = POP32_VAL(esp); /* 0x1505C068: pop edi */
    esi = POP32_VAL(esp); /* 0x1505C069: pop esi */
    ebx = POP32_VAL(esp); /* 0x1505C06A: pop ebx */
    esp = ebp; ebp = POP32_VAL(esp); /* 0x1505C06B: leave  */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1505C06C: ret  */
    RECOMP_REGS_OUT();
}

void sub_1505C070(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1505C070u);

L_1505C070:
    PUSH32(esp, 7); /* 0x1505C070: push 7 */
    RECOMP_CALL(sub_15068F50); /* 0x1505C072: call 0x15068f50 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1505C077: pop ecx */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1505C078: ret  */
    RECOMP_REGS_OUT();
}

void sub_1505C080(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1505C080u);

L_1505C080:
    PUSH32(esp, 0xCu); /* 0x1505C080: push 0xc */
    PUSH32(esp, 0x150B0BA8u); /* 0x1505C082: push 0x150b0ba8 */
    RECOMP_CALL(sub_1505E988); /* 0x1505C087: call 0x1505e988 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    esi = 0; /* 0x1505C08C: xor esi, esi */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x1C)) = esi; /* 0x1505C08E: mov dword ptr [ebp - 0x1c], esi */
    /* cmp MEM32(ebp + 0x8), esi */ /* 0x1505C091: cmp dword ptr [ebp + 8], esi */
    _flag_a = (uint32_t)(MEM32(ebp + 0x8)); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_1505C0B2; /* 0x1505C094: jne 0x1505c0b2 */
L_1505C096:
    RECOMP_CALL(sub_15036430); /* 0x1505C096: call 0x15036430 */
    RECOMP_FLAGS_IN();
    MEM32(eax) = 0x16u; /* 0x1505C09B: mov dword ptr [eax], 0x16 */
    PUSH32(esp, esi); /* 0x1505C0A1: push esi */
    PUSH32(esp, esi); /* 0x1505C0A2: push esi */
    PUSH32(esp, esi); /* 0x1505C0A3: push esi */
    PUSH32(esp, esi); /* 0x1505C0A4: push esi */
    PUSH32(esp, esi); /* 0x1505C0A5: push esi */
    RECOMP_CALL(sub_1505A110); /* 0x1505C0A6: call 0x1505a110 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x14u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x14u; /* 0x1505C0AB: add esp, 0x14 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1505C0AE: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_1505C0D9; /* 0x1505C0B0: jmp 0x1505c0d9 */
L_1505C0B2:
    PUSH32(esp, 7); /* 0x1505C0B2: push 7 */
    RECOMP_CALL(sub_15068D80); /* 0x1505C0B4: call 0x15068d80 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1505C0B9: pop ecx */
    MEM32(ebp + (-0x4)) = esi; /* 0x1505C0BA: mov dword ptr [ebp - 4], esi */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x1505C0BD: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_1505C0FB); /* 0x1505C0C0: call 0x1505c0fb */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1505C0C5: pop ecx */
    esi = eax; /* 0x1505C0C6: mov esi, eax */
    MEM32(ebp + (-0x1C)) = esi; /* 0x1505C0C8: mov dword ptr [ebp - 0x1c], esi */
    MEM32(ebp + (-0x4)) = 0xFFFFFFFEu; /* 0x1505C0CB: mov dword ptr [ebp - 4], 0xfffffffe */
    RECOMP_CALL(sub_1505C0EC); /* 0x1505C0D2: call 0x1505c0ec */
    RECOMP_FLAGS_IN();
    eax = esi; /* 0x1505C0D7: mov eax, esi */
L_1505C0D9:
    ecx = MEM32(ebp + (-0x10)); /* 0x1505C0D9: mov ecx, dword ptr [ebp - 0x10] */
    MEM32(FS_BASE + (0)) = ecx; /* 0x1505C0DC: mov dword ptr fs:[0], ecx */
    ecx = POP32_VAL(esp); /* 0x1505C0E3: pop ecx */
    edi = POP32_VAL(esp); /* 0x1505C0E4: pop edi */
    esi = POP32_VAL(esp); /* 0x1505C0E5: pop esi */
    ebx = POP32_VAL(esp); /* 0x1505C0E6: pop ebx */
    esp = ebp; ebp = POP32_VAL(esp); /* 0x1505C0E7: leave  */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1505C0E8: ret  */
    RECOMP_REGS_OUT();
}

void sub_1505C0EC(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1505C0ECu);

L_1505C0EC:
    PUSH32(esp, 7); /* 0x1505C0EC: push 7 */
    RECOMP_CALL(sub_15068F50); /* 0x1505C0EE: call 0x15068f50 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1505C0F3: pop ecx */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1505C0F4: ret  */
    RECOMP_REGS_OUT();
}

void sub_1505C0FB(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1505C0FBu);

L_1505C0FB:
    edi = edi; /* 0x1505C0FB: mov edi, edi */
    PUSH32(esp, ebp); /* 0x1505C0FD: push ebp */
    ebp = esp; /* 0x1505C0FE: mov ebp, esp */
    PUSH32(esp, ecx); /* 0x1505C100: push ecx */
    PUSH32(esp, ecx); /* 0x1505C101: push ecx */
    PUSH32(esp, esi); /* 0x1505C102: push esi */
    esi = MEM32(0x150BDFD0); /* 0x1505C103: mov esi, dword ptr [0x150bdfd0] */
    PUSH32(esp, edi); /* 0x1505C109: push edi */
    /* test esi, esi */ /* 0x1505C10A: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1505C140; /* 0x1505C10C: jne 0x1505c140 */
L_1505C10E:
    /* cmp MEM32(0x150BDFCC), esi */ /* 0x1505C10E: cmp dword ptr [0x150bdfcc], esi */
    _flag_a = (uint32_t)(MEM32(0x150BDFCC)); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1505C1A0; /* 0x1505C114: je 0x1505c1a0 */
L_1505C11A:
    RECOMP_CALL(sub_1505E873); /* 0x1505C11A: call 0x1505e873 */
    RECOMP_FLAGS_IN();
    MEM32(0x150BDAF8) = eax; /* 0x1505C11F: mov dword ptr [0x150bdaf8], eax */
    RECOMP_CALL(sub_15069D63); /* 0x1505C124: call 0x15069d63 */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x1505C129: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) == 0u)) goto L_1505C136; /* 0x1505C12B: jns 0x1505c136 */
L_1505C12D:
    RECOMP_CALL(sub_1505E752); /* 0x1505C12D: call 0x1505e752 */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x1505C132: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1505C1A0; /* 0x1505C134: jne 0x1505c1a0 */
L_1505C136:
    esi = MEM32(0x150BDFD0); /* 0x1505C136: mov esi, dword ptr [0x150bdfd0] */
    /* test esi, esi */ /* 0x1505C13C: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1505C1A0; /* 0x1505C13E: je 0x1505c1a0 */
L_1505C140:
    /* cmp MEM32(ebp + 0x8), 0 */ /* 0x1505C140: cmp dword ptr [ebp + 8], 0 */
    _flag_a = (uint32_t)(MEM32(ebp + 0x8)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1505C1A0; /* 0x1505C144: je 0x1505c1a0 */
L_1505C146:
    edi = MEM32(ebp + 0x8); /* 0x1505C146: mov edi, dword ptr [ebp + 8] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edx = 0; /* 0x1505C149: xor edx, edx */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x4)) = edx; /* 0x1505C14B: mov dword ptr [ebp - 4], edx */
    ecx = edi + 0x2; /* 0x1505C14E: lea ecx, [edi + 2] */
L_1505C151:
    SET_LO16(eax, MEM16(edi)); /* 0x1505C151: mov ax, word ptr [edi] */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edi = edi + 2; /* 0x1505C154: add edi, 2 */
    _flag_k = FK_ADD;
    /* cmp LO16(eax), LO16(edx) */ /* 0x1505C157: cmp ax, dx */
    _flag_a = (uint32_t)(LO16(eax)) << 16; _flag_b = (uint32_t)(LO16(edx)) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    RECOMP_BACKEDGE();
    if (CMP_NE(_flag_a, _flag_b)) goto L_1505C151; /* 0x1505C15A: jne 0x1505c151 */
L_1505C15C:
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    edi = edi - ecx; /* 0x1505C15C: sub edi, ecx */
    _flag_k = FK_CMP;
    if (1u) _cf = (((edi) >> 0) & 1u); /* 0x1505C15E: sar edi, 1 */
    if (1u) { _flag_a = recomp_flags_pack(((uint32_t)((int32_t)edi >> 1u)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    edi = (uint32_t)((int32_t)edi >> 1u);
    goto L_1505C19A; /* 0x1505C160: jmp 0x1505c19a */
L_1505C162:
    ecx = edx; /* 0x1505C162: mov ecx, edx */
    eax = ecx + 0x2; /* 0x1505C164: lea eax, [ecx + 2] */
    MEM32(ebp + (-0x8)) = eax; /* 0x1505C167: mov dword ptr [ebp - 8], eax */
L_1505C16A:
    SET_LO16(eax, MEM16(ecx)); /* 0x1505C16A: mov ax, word ptr [ecx] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 2; /* 0x1505C16D: add ecx, 2 */
    _flag_k = FK_ADD;
    /* cmp LO16(eax), MEM16(ebp + (-0x4)) */ /* 0x1505C170: cmp ax, word ptr [ebp - 4] */
    _flag_a = (uint32_t)(LO16(eax)) << 16; _flag_b = (uint32_t)(MEM16(ebp + (-0x4))) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    RECOMP_BACKEDGE();
    if (CMP_NE(_flag_a, _flag_b)) goto L_1505C16A; /* 0x1505C174: jne 0x1505c16a */
L_1505C176:
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(MEM32(ebp + (-0x8)));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ecx = ecx - MEM32(ebp + (-0x8)); /* 0x1505C176: sub ecx, dword ptr [ebp - 8] */
    _flag_k = FK_CMP;
    if (1u) _cf = (((ecx) >> 0) & 1u); /* 0x1505C179: sar ecx, 1 */
    if (1u) { _flag_a = recomp_flags_pack(((uint32_t)((int32_t)ecx >> 1u)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ecx = (uint32_t)((int32_t)ecx >> 1u);
    /* cmp ecx, edi */ /* 0x1505C17B: cmp ecx, edi */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_1505C197; /* 0x1505C17D: jbe 0x1505c197 */
L_1505C17F:
    /* cmp MEM16(edx + edi * 2), 0x3Du */ /* 0x1505C17F: cmp word ptr [edx + edi*2], 0x3d */
    _flag_a = (uint32_t)(MEM16(edx + edi * 2)) << 16; _flag_b = (uint32_t)(0x3Du) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    if (CMP_NE(_flag_a, _flag_b)) goto L_1505C197; /* 0x1505C184: jne 0x1505c197 */
L_1505C186:
    PUSH32(esp, edi); /* 0x1505C186: push edi */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x1505C187: push dword ptr [ebp + 8] */
    PUSH32(esp, edx); /* 0x1505C18A: push edx */
    RECOMP_CALL(sub_1508D270); /* 0x1505C18B: call 0x1508d270 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x1505C190: add esp, 0xc */
    _flag_k = FK_ADD;
    /* test eax, eax */ /* 0x1505C193: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1505C1A6; /* 0x1505C195: je 0x1505c1a6 */
L_1505C197:
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esi = esi + 4; /* 0x1505C197: add esi, 4 */
    _flag_k = FK_ADD;
L_1505C19A:
    edx = MEM32(esi); /* 0x1505C19A: mov edx, dword ptr [esi] */
    /* test edx, edx */ /* 0x1505C19C: test edx, edx */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(edx);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1505C162; /* 0x1505C19E: jne 0x1505c162 */
L_1505C1A0:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1505C1A0: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
L_1505C1A2:
    edi = POP32_VAL(esp); /* 0x1505C1A2: pop edi */
    esi = POP32_VAL(esp); /* 0x1505C1A3: pop esi */
    esp = ebp; ebp = POP32_VAL(esp); /* 0x1505C1A4: leave  */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1505C1A5: ret  */
L_1505C1A6:
    eax = MEM32(esi); /* 0x1505C1A6: mov eax, dword ptr [esi] */
    eax = eax + edi * 2; /* 0x1505C1A8: lea eax, [eax + edi*2] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 2; /* 0x1505C1AB: add eax, 2 */
    _flag_k = FK_ADD;
    RECOMP_BACKEDGE();
    goto L_1505C1A2; /* 0x1505C1AE: jmp 0x1505c1a2 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    RECOMP_REGS_OUT();
}

void sub_1505C1C0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1505C1C0u);

L_1505C1C0:
    PUSH32(esp, 0xCu); /* 0x1505C1C0: push 0xc */
    PUSH32(esp, 0x150B0BC8u); /* 0x1505C1C2: push 0x150b0bc8 */
    RECOMP_CALL(sub_1505E988); /* 0x1505C1C7: call 0x1505e988 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 7); /* 0x1505C1CC: push 7 */
    RECOMP_CALL(sub_15068D80); /* 0x1505C1CE: call 0x15068d80 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1505C1D3: pop ecx */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ebx = 0; /* 0x1505C1D4: xor ebx, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x4)) = ebx; /* 0x1505C1D6: mov dword ptr [ebp - 4], ebx */
    edi = MEM32(ebp + 0x8); /* 0x1505C1D9: mov edi, dword ptr [ebp + 8] */
    /* test edi, edi */ /* 0x1505C1DC: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1505C268; /* 0x1505C1DE: je 0x1505c268 */
L_1505C1E4:
    MEM32(edi) = ebx; /* 0x1505C1E4: mov dword ptr [edi], ebx */
    esi = MEM32(ebp + 0xC); /* 0x1505C1E6: mov esi, dword ptr [ebp + 0xc] */
    /* test esi, esi */ /* 0x1505C1E9: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1505C1F6; /* 0x1505C1EB: je 0x1505c1f6 */
L_1505C1ED:
    /* cmp MEM32(ebp + 0x10), ebx */ /* 0x1505C1ED: cmp dword ptr [ebp + 0x10], ebx */
    _flag_a = (uint32_t)(MEM32(ebp + 0x10)); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_A(_flag_a, _flag_b)) goto L_1505C1FC; /* 0x1505C1F0: ja 0x1505c1fc */
L_1505C1F2:
    /* test esi, esi */ /* 0x1505C1F2: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1505C268; /* 0x1505C1F4: jne 0x1505c268 */
L_1505C1F6:
    /* cmp MEM32(ebp + 0x10), 0 */ /* 0x1505C1F6: cmp dword ptr [ebp + 0x10], 0 */
    _flag_a = (uint32_t)(MEM32(ebp + 0x10)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_1505C268; /* 0x1505C1FA: jne 0x1505c268 */
L_1505C1FC:
    /* test esi, esi */ /* 0x1505C1FC: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1505C205; /* 0x1505C1FE: je 0x1505c205 */
L_1505C200:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1505C200: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM16(esi) = (uint16_t)(LO16(eax)); /* 0x1505C202: mov word ptr [esi], ax */
L_1505C205:
    PUSH32(esp, MEM32(ebp + 0x14)); /* 0x1505C205: push dword ptr [ebp + 0x14] */
    RECOMP_CALL(sub_1505C0FB); /* 0x1505C208: call 0x1505c0fb */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1505C20D: pop ecx */
    edx = eax; /* 0x1505C20E: mov edx, eax */
    /* test edx, edx */ /* 0x1505C210: test edx, edx */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(edx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1505C218; /* 0x1505C212: jne 0x1505c218 */
L_1505C214:
    esi = ebx; /* 0x1505C214: mov esi, ebx */
    goto L_1505C27F; /* 0x1505C216: jmp 0x1505c27f */
L_1505C218:
    ecx = edx; /* 0x1505C218: mov ecx, edx */
    ebx = ecx + 0x2; /* 0x1505C21A: lea ebx, [ecx + 2] */
L_1505C21D:
    SET_LO16(eax, MEM16(ecx)); /* 0x1505C21D: mov ax, word ptr [ecx] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 2; /* 0x1505C220: add ecx, 2 */
    _flag_k = FK_ADD;
    /* cmp LO16(eax), MEM16(ebp + (-0x4)) */ /* 0x1505C223: cmp ax, word ptr [ebp - 4] */
    _flag_a = (uint32_t)(LO16(eax)) << 16; _flag_b = (uint32_t)(MEM16(ebp + (-0x4))) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    RECOMP_BACKEDGE();
    if (CMP_NE(_flag_a, _flag_b)) goto L_1505C21D; /* 0x1505C227: jne 0x1505c21d */
L_1505C229:
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ecx = ecx - ebx; /* 0x1505C229: sub ecx, ebx */
    _flag_k = FK_CMP;
    if (1u) _cf = (((ecx) >> 0) & 1u); /* 0x1505C22B: sar ecx, 1 */
    if (1u) { _flag_a = recomp_flags_pack(((uint32_t)((int32_t)ecx >> 1u)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ecx = (uint32_t)((int32_t)ecx >> 1u);
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx + 1; /* 0x1505C22D: inc ecx */
    _flag_k = FK_INC;
    MEM32(edi) = ecx; /* 0x1505C22E: mov dword ptr [edi], ecx */
    /* cmp MEM32(ebp + 0x10), 0 */ /* 0x1505C230: cmp dword ptr [ebp + 0x10], 0 */
    _flag_a = (uint32_t)(MEM32(ebp + 0x10)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_1505C23C; /* 0x1505C234: jne 0x1505c23c */
L_1505C236:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1505C236: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    esi = eax; /* 0x1505C238: mov esi, eax */
    goto L_1505C27F; /* 0x1505C23A: jmp 0x1505c27f */
L_1505C23C:
    /* cmp ecx, MEM32(ebp + 0x10) */ /* 0x1505C23C: cmp ecx, dword ptr [ebp + 0x10] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(MEM32(ebp + 0x10));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_1505C246; /* 0x1505C23F: jbe 0x1505c246 */
L_1505C241:
    PUSH32(esp, 0x22u); /* 0x1505C241: push 0x22 */
    esi = POP32_VAL(esp); /* 0x1505C243: pop esi */
    goto L_1505C27F; /* 0x1505C244: jmp 0x1505c27f */
L_1505C246:
    PUSH32(esp, edx); /* 0x1505C246: push edx */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x1505C247: push dword ptr [ebp + 0x10] */
    PUSH32(esp, esi); /* 0x1505C24A: push esi */
    RECOMP_CALL(sub_1508F250); /* 0x1505C24B: call 0x1508f250 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x1505C250: add esp, 0xc */
    _flag_k = FK_ADD;
    /* test eax, eax */ /* 0x1505C253: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_Z(_flag_a, _flag_b)) goto L_1505C236; /* 0x1505C255: je 0x1505c236 */
L_1505C257:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1505C257: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, eax); /* 0x1505C259: push eax */
    PUSH32(esp, eax); /* 0x1505C25A: push eax */
    PUSH32(esp, eax); /* 0x1505C25B: push eax */
    PUSH32(esp, eax); /* 0x1505C25C: push eax */
    PUSH32(esp, eax); /* 0x1505C25D: push eax */
    RECOMP_CALL(sub_1505A11B); /* 0x1505C25E: call 0x1505a11b */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x14u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x14u; /* 0x1505C263: add esp, 0x14 */
    _flag_k = FK_ADD;
    RECOMP_BACKEDGE();
    goto L_1505C236; /* 0x1505C266: jmp 0x1505c236 */
L_1505C268:
    RECOMP_CALL(sub_15036430); /* 0x1505C268: call 0x15036430 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0x16u); /* 0x1505C26D: push 0x16 */
    esi = POP32_VAL(esp); /* 0x1505C26F: pop esi */
    PUSH32(esp, ebx); /* 0x1505C270: push ebx */
    PUSH32(esp, ebx); /* 0x1505C271: push ebx */
    PUSH32(esp, ebx); /* 0x1505C272: push ebx */
    PUSH32(esp, ebx); /* 0x1505C273: push ebx */
    PUSH32(esp, ebx); /* 0x1505C274: push ebx */
    MEM32(eax) = esi; /* 0x1505C275: mov dword ptr [eax], esi */
    RECOMP_CALL(sub_1505A110); /* 0x1505C277: call 0x1505a110 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x14u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x14u; /* 0x1505C27C: add esp, 0x14 */
    _flag_k = FK_ADD;
L_1505C27F:
    MEM32(ebp + (-0x1C)) = esi; /* 0x1505C27F: mov dword ptr [ebp - 0x1c], esi */
    MEM32(ebp + (-0x4)) = 0xFFFFFFFEu; /* 0x1505C282: mov dword ptr [ebp - 4], 0xfffffffe */
    RECOMP_CALL(sub_1505C2A3); /* 0x1505C289: call 0x1505c2a3 */
    RECOMP_FLAGS_IN();
    eax = esi; /* 0x1505C28E: mov eax, esi */
    ecx = MEM32(ebp + (-0x10)); /* 0x1505C290: mov ecx, dword ptr [ebp - 0x10] */
    MEM32(FS_BASE + (0)) = ecx; /* 0x1505C293: mov dword ptr fs:[0], ecx */
    ecx = POP32_VAL(esp); /* 0x1505C29A: pop ecx */
    edi = POP32_VAL(esp); /* 0x1505C29B: pop edi */
    esi = POP32_VAL(esp); /* 0x1505C29C: pop esi */
    ebx = POP32_VAL(esp); /* 0x1505C29D: pop ebx */
    esp = ebp; ebp = POP32_VAL(esp); /* 0x1505C29E: leave  */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1505C29F: ret  */
    RECOMP_REGS_OUT();
}

void sub_1505C2A3(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1505C2A3u);

L_1505C2A3:
    PUSH32(esp, 7); /* 0x1505C2A3: push 7 */
    RECOMP_CALL(sub_15068F50); /* 0x1505C2A5: call 0x15068f50 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1505C2AA: pop ecx */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1505C2AB: ret  */
    RECOMP_REGS_OUT();
}

void sub_1505C2C0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1505C2C0u);

L_1505C2C0:
    edi = edi; /* 0x1505C2C0: mov edi, edi */
    PUSH32(esp, ebp); /* 0x1505C2C2: push ebp */
    ebp = esp; /* 0x1505C2C3: mov ebp, esp */
    PUSH32(esp, MEM32(ebp + 0x18)); /* 0x1505C2C5: push dword ptr [ebp + 0x18] */
    PUSH32(esp, MEM32(ebp + 0x14)); /* 0x1505C2C8: push dword ptr [ebp + 0x14] */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x1505C2CB: push dword ptr [ebp + 0x10] */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x1505C2CE: push dword ptr [ebp + 0xc] */
    PUSH32(esp, 0xFFFFFFFFu); /* 0x1505C2D1: push -1 */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x1505C2D3: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_1505C2F0); /* 0x1505C2D6: call 0x1505c2f0 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x18u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x18u; /* 0x1505C2DB: add esp, 0x18 */
    _flag_k = FK_ADD;
    ebp = POP32_VAL(esp); /* 0x1505C2DE: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1505C2DF: ret  */
    RECOMP_REGS_OUT();
}

void sub_1505C2F0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1505C2F0u);

L_1505C2F0:
    edi = edi; /* 0x1505C2F0: mov edi, edi */
    PUSH32(esp, ebp); /* 0x1505C2F2: push ebp */
    ebp = esp; /* 0x1505C2F3: mov ebp, esp */
    PUSH32(esp, ecx); /* 0x1505C2F5: push ecx */
    eax = MEM32(ebp + 0x8); /* 0x1505C2F6: mov eax, dword ptr [ebp + 8] */
    PUSH32(esp, ebx); /* 0x1505C2F9: push ebx */
    PUSH32(esp, esi); /* 0x1505C2FA: push esi */
    PUSH32(esp, edi); /* 0x1505C2FB: push edi */
    /* test eax, eax */ /* 0x1505C2FC: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1505C404; /* 0x1505C2FE: je 0x1505c404 */
L_1505C304:
    edi = MEM32(ebp + 0xC); /* 0x1505C304: mov edi, dword ptr [ebp + 0xc] */
    /* test edi, edi */ /* 0x1505C307: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1505C404; /* 0x1505C309: je 0x1505c404 */
L_1505C30F:
    ebx = MEM32(ebp + 0x10); /* 0x1505C30F: mov ebx, dword ptr [ebp + 0x10] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    esi = 0; /* 0x1505C312: xor esi, esi */
    _cf = 0;
    _flag_k = FK_TEST;
    edx = esi; /* 0x1505C314: mov edx, esi */
    ecx = eax; /* 0x1505C316: mov ecx, eax */
    /* test ebx, ebx */ /* 0x1505C318: test ebx, ebx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ebx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1505C33D; /* 0x1505C31A: je 0x1505c33d */
L_1505C31C:
    ebx = (uint32_t)MEM16(ebx); /* 0x1505C31C: movzx ebx, word ptr [ebx] */
    /* test LO16(ebx), LO16(ebx) */ /* 0x1505C31F: test bx, bx */
    _flag_a = (uint32_t)(LO16(ebx)) << 16; _flag_b = (uint32_t)(LO16(ebx)) << 16;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 16);
    if (TEST_Z(_flag_a, _flag_b)) goto L_1505C33D; /* 0x1505C322: je 0x1505c33d */
L_1505C324:
    PUSH32(esp, 2); /* 0x1505C324: push 2 */
    edx = POP32_VAL(esp); /* 0x1505C326: pop edx */
    /* cmp edi, edx */ /* 0x1505C327: cmp edi, edx */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_1505C3EC; /* 0x1505C329: jbe 0x1505c3ec */
L_1505C32F:
    ecx = eax + 0x2; /* 0x1505C32F: lea ecx, [eax + 2] */
    MEM16(eax) = (uint16_t)(LO16(ebx)); /* 0x1505C332: mov word ptr [eax], bx */
    PUSH32(esp, 0x3Au); /* 0x1505C335: push 0x3a */
    eax = POP32_VAL(esp); /* 0x1505C337: pop eax */
    MEM16(ecx) = (uint16_t)(LO16(eax)); /* 0x1505C338: mov word ptr [ecx], ax */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + edx; /* 0x1505C33B: add ecx, edx */
    _flag_k = FK_ADD;
L_1505C33D:
    ebx = MEM32(ebp + 0x14); /* 0x1505C33D: mov ebx, dword ptr [ebp + 0x14] */
    /* test ebx, ebx */ /* 0x1505C340: test ebx, ebx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ebx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1505C384; /* 0x1505C342: je 0x1505c384 */
L_1505C344:
    /* cmp MEM16(ebx), LO16(esi) */ /* 0x1505C344: cmp word ptr [ebx], si */
    _flag_a = (uint32_t)(MEM16(ebx)) << 16; _flag_b = (uint32_t)(LO16(esi)) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1505C384; /* 0x1505C347: je 0x1505c384 */
L_1505C349:
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(1);
    edx = edx + 1; /* 0x1505C349: inc edx */
    _flag_k = FK_INC;
    MEM32(ebp + (-0x4)) = ebx; /* 0x1505C34A: mov dword ptr [ebp - 4], ebx */
    /* cmp edx, edi */ /* 0x1505C34D: cmp edx, edi */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_AE(_flag_a, _flag_b)) goto L_1505C3EC; /* 0x1505C34F: jae 0x1505c3ec */
L_1505C355:
    SET_LO16(eax, MEM16(ebx)); /* 0x1505C355: mov ax, word ptr [ebx] */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ebx = ebx + 2; /* 0x1505C358: add ebx, 2 */
    _flag_k = FK_ADD;
    MEM16(ecx) = (uint16_t)(LO16(eax)); /* 0x1505C35B: mov word ptr [ecx], ax */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 2; /* 0x1505C35E: add ecx, 2 */
    _flag_k = FK_ADD;
    /* cmp MEM16(ebx), LO16(esi) */ /* 0x1505C361: cmp word ptr [ebx], si */
    _flag_a = (uint32_t)(MEM16(ebx)) << 16; _flag_b = (uint32_t)(LO16(esi)) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    RECOMP_BACKEDGE();
    if (CMP_NE(_flag_a, _flag_b)) goto L_1505C349; /* 0x1505C364: jne 0x1505c349 */
L_1505C366:
    eax = MEM32(ebp + (-0x4)); /* 0x1505C366: mov eax, dword ptr [ebp - 4] */
    eax = (uint32_t)MEM16(eax); /* 0x1505C369: movzx eax, word ptr [eax] */
    /* cmp eax, 0x2Fu */ /* 0x1505C36C: cmp eax, 0x2f */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x2Fu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1505C384; /* 0x1505C36F: je 0x1505c384 */
L_1505C371:
    PUSH32(esp, 0x5Cu); /* 0x1505C371: push 0x5c */
    ebx = POP32_VAL(esp); /* 0x1505C373: pop ebx */
    /* cmp LO16(eax), LO16(ebx) */ /* 0x1505C374: cmp ax, bx */
    _flag_a = (uint32_t)(LO16(eax)) << 16; _flag_b = (uint32_t)(LO16(ebx)) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1505C384; /* 0x1505C377: je 0x1505c384 */
L_1505C379:
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(1);
    edx = edx + 1; /* 0x1505C379: inc edx */
    _flag_k = FK_INC;
    /* cmp edx, edi */ /* 0x1505C37A: cmp edx, edi */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_AE(_flag_a, _flag_b)) goto L_1505C3EC; /* 0x1505C37C: jae 0x1505c3ec */
L_1505C37E:
    MEM16(ecx) = (uint16_t)(LO16(ebx)); /* 0x1505C37E: mov word ptr [ecx], bx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 2; /* 0x1505C381: add ecx, 2 */
    _flag_k = FK_ADD;
L_1505C384:
    ebx = MEM32(ebp + 0x18); /* 0x1505C384: mov ebx, dword ptr [ebp + 0x18] */
    /* test ebx, ebx */ /* 0x1505C387: test ebx, ebx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ebx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1505C3A3; /* 0x1505C389: je 0x1505c3a3 */
L_1505C38B:
    goto L_1505C39E; /* 0x1505C38B: jmp 0x1505c39e */
L_1505C38D:
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(1);
    edx = edx + 1; /* 0x1505C38D: inc edx */
    _flag_k = FK_INC;
    /* cmp edx, edi */ /* 0x1505C38E: cmp edx, edi */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_AE(_flag_a, _flag_b)) goto L_1505C3EC; /* 0x1505C390: jae 0x1505c3ec */
L_1505C392:
    SET_LO16(eax, MEM16(ebx)); /* 0x1505C392: mov ax, word ptr [ebx] */
    MEM16(ecx) = (uint16_t)(LO16(eax)); /* 0x1505C395: mov word ptr [ecx], ax */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 2; /* 0x1505C398: add ecx, 2 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ebx = ebx + 2; /* 0x1505C39B: add ebx, 2 */
    _flag_k = FK_ADD;
L_1505C39E:
    /* cmp MEM16(ebx), LO16(esi) */ /* 0x1505C39E: cmp word ptr [ebx], si */
    _flag_a = (uint32_t)(MEM16(ebx)) << 16; _flag_b = (uint32_t)(LO16(esi)) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    RECOMP_BACKEDGE();
    if (CMP_NE(_flag_a, _flag_b)) goto L_1505C38D; /* 0x1505C3A1: jne 0x1505c38d */
L_1505C3A3:
    ebx = MEM32(ebp + 0x1C); /* 0x1505C3A3: mov ebx, dword ptr [ebp + 0x1c] */
    /* test ebx, ebx */ /* 0x1505C3A6: test ebx, ebx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ebx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1505C3E5; /* 0x1505C3A8: je 0x1505c3e5 */
L_1505C3AA:
    eax = (uint32_t)MEM16(ebx); /* 0x1505C3AA: movzx eax, word ptr [ebx] */
    /* test LO16(eax), LO16(eax) */ /* 0x1505C3AD: test ax, ax */
    _flag_a = (uint32_t)(LO16(eax)) << 16; _flag_b = (uint32_t)(LO16(eax)) << 16;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 16);
    if (TEST_Z(_flag_a, _flag_b)) goto L_1505C3E0; /* 0x1505C3B0: je 0x1505c3e0 */
L_1505C3B2:
    MEM32(ebp + (-0x4)) = 0x2Eu; /* 0x1505C3B2: mov dword ptr [ebp - 4], 0x2e */
    /* cmp LO16(eax), MEM16(ebp + (-0x4)) */ /* 0x1505C3B9: cmp ax, word ptr [ebp - 4] */
    _flag_a = (uint32_t)(LO16(eax)) << 16; _flag_b = (uint32_t)(MEM16(ebp + (-0x4))) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1505C3E0; /* 0x1505C3BD: je 0x1505c3e0 */
L_1505C3BF:
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(1);
    edx = edx + 1; /* 0x1505C3BF: inc edx */
    _flag_k = FK_INC;
    /* cmp edx, edi */ /* 0x1505C3C0: cmp edx, edi */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_AE(_flag_a, _flag_b)) goto L_1505C3EC; /* 0x1505C3C2: jae 0x1505c3ec */
L_1505C3C4:
    eax = MEM32(ebp + (-0x4)); /* 0x1505C3C4: mov eax, dword ptr [ebp - 4] */
    MEM16(ecx) = (uint16_t)(LO16(eax)); /* 0x1505C3C7: mov word ptr [ecx], ax */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 2; /* 0x1505C3CA: add ecx, 2 */
    _flag_k = FK_ADD;
    goto L_1505C3E0; /* 0x1505C3CD: jmp 0x1505c3e0 */
L_1505C3CF:
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(1);
    edx = edx + 1; /* 0x1505C3CF: inc edx */
    _flag_k = FK_INC;
    /* cmp edx, edi */ /* 0x1505C3D0: cmp edx, edi */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_AE(_flag_a, _flag_b)) goto L_1505C3EC; /* 0x1505C3D2: jae 0x1505c3ec */
L_1505C3D4:
    SET_LO16(eax, MEM16(ebx)); /* 0x1505C3D4: mov ax, word ptr [ebx] */
    MEM16(ecx) = (uint16_t)(LO16(eax)); /* 0x1505C3D7: mov word ptr [ecx], ax */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 2; /* 0x1505C3DA: add ecx, 2 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ebx = ebx + 2; /* 0x1505C3DD: add ebx, 2 */
    _flag_k = FK_ADD;
L_1505C3E0:
    /* cmp MEM16(ebx), LO16(esi) */ /* 0x1505C3E0: cmp word ptr [ebx], si */
    _flag_a = (uint32_t)(MEM16(ebx)) << 16; _flag_b = (uint32_t)(LO16(esi)) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    RECOMP_BACKEDGE();
    if (CMP_NE(_flag_a, _flag_b)) goto L_1505C3CF; /* 0x1505C3E3: jne 0x1505c3cf */
L_1505C3E5:
    eax = edx + 0x1; /* 0x1505C3E5: lea eax, [edx + 1] */
    /* cmp eax, edi */ /* 0x1505C3E8: cmp eax, edi */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_1505C3FD; /* 0x1505C3EA: jbe 0x1505c3fd */
L_1505C3EC:
    eax = MEM32(ebp + 0x8); /* 0x1505C3EC: mov eax, dword ptr [ebp + 8] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x1505C3EF: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM16(eax) = (uint16_t)(LO16(ecx)); /* 0x1505C3F1: mov word ptr [eax], cx */
    RECOMP_CALL(sub_15036430); /* 0x1505C3F4: call 0x15036430 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0x22u); /* 0x1505C3F9: push 0x22 */
    goto L_1505C40D; /* 0x1505C3FB: jmp 0x1505c40d */
L_1505C3FD:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1505C3FD: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM16(ecx) = (uint16_t)(LO16(eax)); /* 0x1505C3FF: mov word ptr [ecx], ax */
    goto L_1505C41F; /* 0x1505C402: jmp 0x1505c41f */
L_1505C404:
    RECOMP_CALL(sub_15036430); /* 0x1505C404: call 0x15036430 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0x16u); /* 0x1505C409: push 0x16 */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    esi = 0; /* 0x1505C40B: xor esi, esi */
    _cf = 0;
    _flag_k = FK_TEST;
L_1505C40D:
    edi = POP32_VAL(esp); /* 0x1505C40D: pop edi */
    PUSH32(esp, esi); /* 0x1505C40E: push esi */
    PUSH32(esp, esi); /* 0x1505C40F: push esi */
    PUSH32(esp, esi); /* 0x1505C410: push esi */
    PUSH32(esp, esi); /* 0x1505C411: push esi */
    PUSH32(esp, esi); /* 0x1505C412: push esi */
    MEM32(eax) = edi; /* 0x1505C413: mov dword ptr [eax], edi */
    RECOMP_CALL(sub_1505A110); /* 0x1505C415: call 0x1505a110 */
    RECOMP_FLAGS_IN();
    eax = edi; /* 0x1505C41A: mov eax, edi */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x14u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x14u; /* 0x1505C41C: add esp, 0x14 */
    _flag_k = FK_ADD;
L_1505C41F:
    edi = POP32_VAL(esp); /* 0x1505C41F: pop edi */
    esi = POP32_VAL(esp); /* 0x1505C420: pop esi */
    ebx = POP32_VAL(esp); /* 0x1505C421: pop ebx */
    esp = ebp; ebp = POP32_VAL(esp); /* 0x1505C422: leave  */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1505C423: ret  */
    RECOMP_REGS_OUT();
}

void sub_1505C430(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1505C430u);

L_1505C430:
    PUSH32(esp, 0x10u); /* 0x1505C430: push 0x10 */
    PUSH32(esp, 0x150B0C08u); /* 0x1505C432: push 0x150b0c08 */
    RECOMP_CALL(sub_1505E988); /* 0x1505C437: call 0x1505e988 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 2); /* 0x1505C43C: push 2 */
    esi = POP32_VAL(esp); /* 0x1505C43E: pop esi */
    MEM32(ebp + (-0x20)) = esi; /* 0x1505C43F: mov dword ptr [ebp - 0x20], esi */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edi = 0; /* 0x1505C442: xor edi, edi */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x1C)) = edi; /* 0x1505C444: mov dword ptr [ebp - 0x1c], edi */
    ebx = MEM32(ebp + 0x8); /* 0x1505C447: mov ebx, dword ptr [ebp + 8] */
    /* test ebx, ebx */ /* 0x1505C44A: test ebx, ebx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ebx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1505C4EC; /* 0x1505C44C: je 0x1505c4ec */
L_1505C452:
    /* cmp MEM16(ebx), LO16(edi) */ /* 0x1505C452: cmp word ptr [ebx], di */
    _flag_a = (uint32_t)(MEM16(ebx)) << 16; _flag_b = (uint32_t)(LO16(edi)) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1505C4EC; /* 0x1505C455: je 0x1505c4ec */
L_1505C45B:
    PUSH32(esp, 0x7FFFFFFFu); /* 0x1505C45B: push 0x7fffffff */
    PUSH32(esp, ebx); /* 0x1505C460: push ebx */
    PUSH32(esp, edi); /* 0x1505C461: push edi */
    PUSH32(esp, edi); /* 0x1505C462: push edi */
    eax = ebp + (-0x1C); /* 0x1505C463: lea eax, [ebp - 0x1c] */
    PUSH32(esp, eax); /* 0x1505C466: push eax */
    RECOMP_CALL(sub_15033C10); /* 0x1505C467: call 0x15033c10 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x14u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x14u; /* 0x1505C46C: add esp, 0x14 */
    _flag_k = FK_ADD;
    /* test eax, eax */ /* 0x1505C46F: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1505C48A; /* 0x1505C471: je 0x1505c48a */
L_1505C473:
    /* cmp eax, 0x16u */ /* 0x1505C473: cmp eax, 0x16 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x16u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1505C47D; /* 0x1505C476: je 0x1505c47d */
L_1505C478:
    /* cmp eax, 0x22u */ /* 0x1505C478: cmp eax, 0x22 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x22u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_1505C48A; /* 0x1505C47B: jne 0x1505c48a */
L_1505C47D:
    PUSH32(esp, edi); /* 0x1505C47D: push edi */
    PUSH32(esp, edi); /* 0x1505C47E: push edi */
    PUSH32(esp, edi); /* 0x1505C47F: push edi */
    PUSH32(esp, edi); /* 0x1505C480: push edi */
    PUSH32(esp, edi); /* 0x1505C481: push edi */
    RECOMP_CALL(sub_1505A11B); /* 0x1505C482: call 0x1505a11b */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x14u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x14u; /* 0x1505C487: add esp, 0x14 */
    _flag_k = FK_ADD;
L_1505C48A:
    /* cmp MEM32(ebp + (-0x1C)), edi */ /* 0x1505C48A: cmp dword ptr [ebp - 0x1c], edi */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x1C))); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1505C4DC; /* 0x1505C48D: je 0x1505c4dc */
L_1505C48F:
    PUSH32(esp, 1); /* 0x1505C48F: push 1 */
    PUSH32(esp, MEM32(ebp + (-0x1C))); /* 0x1505C491: push dword ptr [ebp - 0x1c] */
    RECOMP_CALL(sub_15048EE2); /* 0x1505C494: call 0x15048ee2 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1505C499: pop ecx */
    ecx = POP32_VAL(esp); /* 0x1505C49A: pop ecx */
    edi = eax; /* 0x1505C49B: mov edi, eax */
    /* test edi, edi */ /* 0x1505C49D: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1505C4DC; /* 0x1505C49F: je 0x1505c4dc */
L_1505C4A1:
    PUSH32(esp, 0xFFFFFFFFu); /* 0x1505C4A1: push -1 */
    PUSH32(esp, ebx); /* 0x1505C4A3: push ebx */
    PUSH32(esp, MEM32(ebp + (-0x1C))); /* 0x1505C4A4: push dword ptr [ebp - 0x1c] */
    PUSH32(esp, edi); /* 0x1505C4A7: push edi */
    PUSH32(esp, 0); /* 0x1505C4A8: push 0 */
    RECOMP_CALL(sub_15033C10); /* 0x1505C4AA: call 0x15033c10 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x14u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x14u; /* 0x1505C4AF: add esp, 0x14 */
    _flag_k = FK_ADD;
    ebx = eax; /* 0x1505C4B2: mov ebx, eax */
    /* test ebx, ebx */ /* 0x1505C4B4: test ebx, ebx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ebx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1505C4EC; /* 0x1505C4B6: je 0x1505c4ec */
L_1505C4B8:
    /* cmp ebx, 0x16u */ /* 0x1505C4B8: cmp ebx, 0x16 */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(0x16u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1505C4C2; /* 0x1505C4BB: je 0x1505c4c2 */
L_1505C4BD:
    /* cmp ebx, 0x22u */ /* 0x1505C4BD: cmp ebx, 0x22 */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(0x22u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_1505C4D1; /* 0x1505C4C0: jne 0x1505c4d1 */
L_1505C4C2:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1505C4C2: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, eax); /* 0x1505C4C4: push eax */
    PUSH32(esp, eax); /* 0x1505C4C5: push eax */
    PUSH32(esp, eax); /* 0x1505C4C6: push eax */
    PUSH32(esp, eax); /* 0x1505C4C7: push eax */
    PUSH32(esp, eax); /* 0x1505C4C8: push eax */
    RECOMP_CALL(sub_1505A11B); /* 0x1505C4C9: call 0x1505a11b */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x14u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x14u; /* 0x1505C4CE: add esp, 0x14 */
    _flag_k = FK_ADD;
L_1505C4D1:
    /* test ebx, ebx */ /* 0x1505C4D1: test ebx, ebx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ebx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1505C4EC; /* 0x1505C4D3: je 0x1505c4ec */
L_1505C4D5:
    PUSH32(esp, edi); /* 0x1505C4D5: push edi */
    RECOMP_CALL(sub_15048840); /* 0x1505C4D6: call 0x15048840 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1505C4DB: pop ecx */
L_1505C4DC:
    ecx = MEM32(ebp + (-0x10)); /* 0x1505C4DC: mov ecx, dword ptr [ebp - 0x10] */
    MEM32(FS_BASE + (0)) = ecx; /* 0x1505C4DF: mov dword ptr fs:[0], ecx */
    ecx = POP32_VAL(esp); /* 0x1505C4E6: pop ecx */
    edi = POP32_VAL(esp); /* 0x1505C4E7: pop edi */
    esi = POP32_VAL(esp); /* 0x1505C4E8: pop esi */
    ebx = POP32_VAL(esp); /* 0x1505C4E9: pop ebx */
    esp = ebp; ebp = POP32_VAL(esp); /* 0x1505C4EA: leave  */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1505C4EB: ret  */
L_1505C4EC:
    PUSH32(esp, esi); /* 0x1505C4EC: push esi */
    RECOMP_CALL(sub_1504BA49); /* 0x1505C4ED: call 0x1504ba49 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1505C4F2: pop ecx */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x4))); _flag_b = (uint32_t)(0);
    MEM32(ebp + (-0x4)) = MEM32(ebp + (-0x4)) & 0; /* 0x1505C4F3: and dword ptr [ebp - 4], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    /* test edi, edi */ /* 0x1505C4F7: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1505C520; /* 0x1505C4F9: je 0x1505c520 */
L_1505C4FB:
    ecx = edi; /* 0x1505C4FB: mov ecx, edi */
    edx = ecx + 0x1; /* 0x1505C4FD: lea edx, [ecx + 1] */
L_1505C500:
    SET_LO8(eax, MEM8(ecx)); /* 0x1505C500: mov al, byte ptr [ecx] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx + 1; /* 0x1505C502: inc ecx */
    _flag_k = FK_INC;
    /* test LO8(eax), LO8(eax) */ /* 0x1505C503: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1505C500; /* 0x1505C505: jne 0x1505c500 */
L_1505C507:
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ecx = ecx - edx; /* 0x1505C507: sub ecx, edx */
    _flag_k = FK_CMP;
    PUSH32(esp, ecx); /* 0x1505C509: push ecx */
    PUSH32(esp, edi); /* 0x1505C50A: push edi */
    PUSH32(esp, esi); /* 0x1505C50B: push esi */
    RECOMP_CALL(sub_1504EED1); /* 0x1505C50C: call 0x1504eed1 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, esi); /* 0x1505C511: push esi */
    PUSH32(esp, 0x15005C9Cu); /* 0x1505C512: push 0x15005c9c */
    PUSH32(esp, esi); /* 0x1505C517: push esi */
    RECOMP_CALL(sub_1504EED1); /* 0x1505C518: call 0x1504eed1 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x18u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x18u; /* 0x1505C51D: add esp, 0x18 */
    _flag_k = FK_ADD;
L_1505C520:
    PUSH32(esp, edi); /* 0x1505C520: push edi */
    RECOMP_CALL(sub_15048840); /* 0x1505C521: call 0x15048840 */
    RECOMP_FLAGS_IN();
    RECOMP_CALL(sub_15036430); /* 0x1505C526: call 0x15036430 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, MEM32(eax)); /* 0x1505C52B: push dword ptr [eax] */
    RECOMP_CALL(sub_15059547); /* 0x1505C52D: call 0x15059547 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1505C532: pop ecx */
    ecx = POP32_VAL(esp); /* 0x1505C533: pop ecx */
    edx = eax; /* 0x1505C534: mov edx, eax */
    edi = edx + 0x1; /* 0x1505C536: lea edi, [edx + 1] */
L_1505C539:
    SET_LO8(ecx, MEM8(edx)); /* 0x1505C539: mov cl, byte ptr [edx] */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(1);
    edx = edx + 1; /* 0x1505C53B: inc edx */
    _flag_k = FK_INC;
    /* test LO8(ecx), LO8(ecx) */ /* 0x1505C53C: test cl, cl */
    _flag_a = (uint32_t)(LO8(ecx)) << 24; _flag_b = (uint32_t)(LO8(ecx)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1505C539; /* 0x1505C53E: jne 0x1505c539 */
L_1505C540:
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    edx = edx - edi; /* 0x1505C540: sub edx, edi */
    _flag_k = FK_CMP;
    PUSH32(esp, edx); /* 0x1505C542: push edx */
    PUSH32(esp, eax); /* 0x1505C543: push eax */
    PUSH32(esp, esi); /* 0x1505C544: push esi */
    RECOMP_CALL(sub_1504EED1); /* 0x1505C545: call 0x1504eed1 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 1); /* 0x1505C54A: push 1 */
    PUSH32(esp, 0x15005B2Cu); /* 0x1505C54C: push 0x15005b2c */
    PUSH32(esp, esi); /* 0x1505C551: push esi */
    RECOMP_CALL(sub_1504EED1); /* 0x1505C552: call 0x1504eed1 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x18u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x18u; /* 0x1505C557: add esp, 0x18 */
    _flag_k = FK_ADD;
    MEM32(ebp + (-0x4)) = 0xFFFFFFFEu; /* 0x1505C55A: mov dword ptr [ebp - 4], 0xfffffffe */
    RECOMP_CALL(sub_1505C56E); /* 0x1505C561: call 0x1505c56e */
    RECOMP_FLAGS_IN();
    RECOMP_BACKEDGE();
    goto L_1505C4DC; /* 0x1505C566: jmp 0x1505c4dc */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    RECOMP_REGS_OUT();
}

void sub_1505C56E(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1505C56Eu);

L_1505C56E:
    PUSH32(esp, esi); /* 0x1505C56E: push esi */
    RECOMP_CALL(sub_1504C004); /* 0x1505C56F: call 0x1504c004 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1505C574: pop ecx */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1505C575: ret  */
    RECOMP_REGS_OUT();
}

void sub_1505C580(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1505C580u);

L_1505C580:
    PUSH32(esp, 0xCu); /* 0x1505C580: push 0xc */
    PUSH32(esp, 0x150B0C28u); /* 0x1505C582: push 0x150b0c28 */
    RECOMP_CALL(sub_1505E988); /* 0x1505C587: call 0x1505e988 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 7); /* 0x1505C58C: push 7 */
    RECOMP_CALL(sub_15068D80); /* 0x1505C58E: call 0x15068d80 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1505C593: pop ecx */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x4))); _flag_b = (uint32_t)(0);
    MEM32(ebp + (-0x4)) = MEM32(ebp + (-0x4)) & 0; /* 0x1505C594: and dword ptr [ebp - 4], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, 0); /* 0x1505C598: push 0 */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x1505C59A: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_1505C5D9); /* 0x1505C59D: call 0x1505c5d9 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1505C5A2: pop ecx */
    ecx = POP32_VAL(esp); /* 0x1505C5A3: pop ecx */
    esi = eax; /* 0x1505C5A4: mov esi, eax */
    MEM32(ebp + (-0x1C)) = esi; /* 0x1505C5A6: mov dword ptr [ebp - 0x1c], esi */
    MEM32(ebp + (-0x4)) = 0xFFFFFFFEu; /* 0x1505C5A9: mov dword ptr [ebp - 4], 0xfffffffe */
    RECOMP_CALL(sub_1505C5CA); /* 0x1505C5B0: call 0x1505c5ca */
    RECOMP_FLAGS_IN();
    eax = esi; /* 0x1505C5B5: mov eax, esi */
    ecx = MEM32(ebp + (-0x10)); /* 0x1505C5B7: mov ecx, dword ptr [ebp - 0x10] */
    MEM32(FS_BASE + (0)) = ecx; /* 0x1505C5BA: mov dword ptr fs:[0], ecx */
    ecx = POP32_VAL(esp); /* 0x1505C5C1: pop ecx */
    edi = POP32_VAL(esp); /* 0x1505C5C2: pop edi */
    esi = POP32_VAL(esp); /* 0x1505C5C3: pop esi */
    ebx = POP32_VAL(esp); /* 0x1505C5C4: pop ebx */
    esp = ebp; ebp = POP32_VAL(esp); /* 0x1505C5C5: leave  */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1505C5C6: ret  */
    RECOMP_REGS_OUT();
}

void sub_1505C5CA(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1505C5CAu);

L_1505C5CA:
    PUSH32(esp, 7); /* 0x1505C5CA: push 7 */
    RECOMP_CALL(sub_15068F50); /* 0x1505C5CC: call 0x15068f50 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1505C5D1: pop ecx */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1505C5D2: ret  */
    RECOMP_REGS_OUT();
}

void sub_1505C5D9(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1505C5D9u);

L_1505C5D9:
    edi = edi; /* 0x1505C5D9: mov edi, edi */
    PUSH32(esp, ebp); /* 0x1505C5DB: push ebp */
    ebp = esp; /* 0x1505C5DC: mov ebp, esp */
    PUSH32(esp, ecx); /* 0x1505C5DE: push ecx */
    PUSH32(esp, ecx); /* 0x1505C5DF: push ecx */
    PUSH32(esp, esi); /* 0x1505C5E0: push esi */
    PUSH32(esp, edi); /* 0x1505C5E1: push edi */
    edi = MEM32(ebp + 0x8); /* 0x1505C5E2: mov edi, dword ptr [ebp + 8] */
    /* test edi, edi */ /* 0x1505C5E5: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1505C60B; /* 0x1505C5E7: jne 0x1505c60b */
L_1505C5E9:
    RECOMP_CALL(sub_15036430); /* 0x1505C5E9: call 0x15036430 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    esi = 0; /* 0x1505C5EE: xor esi, esi */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, esi); /* 0x1505C5F0: push esi */
    PUSH32(esp, esi); /* 0x1505C5F1: push esi */
    PUSH32(esp, esi); /* 0x1505C5F2: push esi */
    PUSH32(esp, esi); /* 0x1505C5F3: push esi */
    PUSH32(esp, esi); /* 0x1505C5F4: push esi */
    MEM32(eax) = 0x16u; /* 0x1505C5F5: mov dword ptr [eax], 0x16 */
    RECOMP_CALL(sub_1505A110); /* 0x1505C5FB: call 0x1505a110 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x14u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x14u; /* 0x1505C600: add esp, 0x14 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)((eax | 0xFFFFFFFFu)); _flag_b = (uint32_t)((eax | 0xFFFFFFFFu));
    eax = eax | 0xFFFFFFFFu; /* 0x1505C603: or eax, 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_1505C800; /* 0x1505C606: jmp 0x1505c800 */
L_1505C60B:
    /* cmp MEM32(ebp + 0xC), 0 */ /* 0x1505C60B: cmp dword ptr [ebp + 0xc], 0 */
    _flag_a = (uint32_t)(MEM32(ebp + 0xC)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    PUSH32(esp, ebx); /* 0x1505C60F: push ebx */
    if (CMP_NE(_flag_a, _flag_b)) goto L_1505C65C; /* 0x1505C610: jne 0x1505c65c */
L_1505C612:
    PUSH32(esp, 0x3Du); /* 0x1505C612: push 0x3d */
    eax = POP32_VAL(esp); /* 0x1505C614: pop eax */
    PUSH32(esp, eax); /* 0x1505C615: push eax */
    PUSH32(esp, edi); /* 0x1505C616: push edi */
    RECOMP_CALL(sub_1508F1B0); /* 0x1505C617: call 0x1508f1b0 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1505C61C: pop ecx */
    ecx = POP32_VAL(esp); /* 0x1505C61D: pop ecx */
    ecx = edi; /* 0x1505C61E: mov ecx, edi */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    esi = 0; /* 0x1505C620: xor esi, esi */
    _cf = 0;
    _flag_k = FK_TEST;
    edx = ecx + 0x2; /* 0x1505C622: lea edx, [ecx + 2] */
L_1505C625:
    SET_LO16(eax, MEM16(ecx)); /* 0x1505C625: mov ax, word ptr [ecx] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 2; /* 0x1505C628: add ecx, 2 */
    _flag_k = FK_ADD;
    /* cmp LO16(eax), LO16(esi) */ /* 0x1505C62B: cmp ax, si */
    _flag_a = (uint32_t)(LO16(eax)) << 16; _flag_b = (uint32_t)(LO16(esi)) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    RECOMP_BACKEDGE();
    if (CMP_NE(_flag_a, _flag_b)) goto L_1505C625; /* 0x1505C62E: jne 0x1505c625 */
L_1505C630:
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ecx = ecx - edx; /* 0x1505C630: sub ecx, edx */
    _flag_k = FK_CMP;
    if (1u) _cf = (((ecx) >> 0) & 1u); /* 0x1505C632: sar ecx, 1 */
    if (1u) { _flag_a = recomp_flags_pack(((uint32_t)((int32_t)ecx >> 1u)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ecx = (uint32_t)((int32_t)ecx >> 1u);
    PUSH32(esp, 2); /* 0x1505C634: push 2 */
    ebx = ecx + 0x1; /* 0x1505C636: lea ebx, [ecx + 1] */
    PUSH32(esp, ebx); /* 0x1505C639: push ebx */
    RECOMP_CALL(sub_15048EE2); /* 0x1505C63A: call 0x15048ee2 */
    RECOMP_FLAGS_IN();
    MEM32(ebp + (-0x8)) = eax; /* 0x1505C63F: mov dword ptr [ebp - 8], eax */
    ecx = POP32_VAL(esp); /* 0x1505C642: pop ecx */
    ecx = POP32_VAL(esp); /* 0x1505C643: pop ecx */
    /* test eax, eax */ /* 0x1505C644: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1505C7FC; /* 0x1505C646: je 0x1505c7fc */
L_1505C64C:
    PUSH32(esp, edi); /* 0x1505C64C: push edi */
    PUSH32(esp, ebx); /* 0x1505C64D: push ebx */
    PUSH32(esp, eax); /* 0x1505C64E: push eax */
    RECOMP_CALL(sub_1508F250); /* 0x1505C64F: call 0x1508f250 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x1505C654: add esp, 0xc */
    _flag_k = FK_ADD;
    goto L_1505C6DE; /* 0x1505C657: jmp 0x1505c6de */
L_1505C65C:
    ebx = edi; /* 0x1505C65C: mov ebx, edi */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    esi = 0; /* 0x1505C65E: xor esi, esi */
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = ebx + 0x2; /* 0x1505C660: lea ecx, [ebx + 2] */
L_1505C663:
    SET_LO16(eax, MEM16(ebx)); /* 0x1505C663: mov ax, word ptr [ebx] */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ebx = ebx + 2; /* 0x1505C666: add ebx, 2 */
    _flag_k = FK_ADD;
    /* cmp LO16(eax), LO16(esi) */ /* 0x1505C669: cmp ax, si */
    _flag_a = (uint32_t)(LO16(eax)) << 16; _flag_b = (uint32_t)(LO16(esi)) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    RECOMP_BACKEDGE();
    if (CMP_NE(_flag_a, _flag_b)) goto L_1505C663; /* 0x1505C66C: jne 0x1505c663 */
L_1505C66E:
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ebx = ebx - ecx; /* 0x1505C66E: sub ebx, ecx */
    _flag_k = FK_CMP;
    ecx = MEM32(ebp + 0xC); /* 0x1505C670: mov ecx, dword ptr [ebp + 0xc] */
    if (1u) _cf = (((ebx) >> 0) & 1u); /* 0x1505C673: sar ebx, 1 */
    if (1u) { _flag_a = recomp_flags_pack(((uint32_t)((int32_t)ebx >> 1u)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ebx = (uint32_t)((int32_t)ebx >> 1u);
    edx = ecx + 0x2; /* 0x1505C675: lea edx, [ecx + 2] */
L_1505C678:
    SET_LO16(eax, MEM16(ecx)); /* 0x1505C678: mov ax, word ptr [ecx] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 2; /* 0x1505C67B: add ecx, 2 */
    _flag_k = FK_ADD;
    /* cmp LO16(eax), LO16(esi) */ /* 0x1505C67E: cmp ax, si */
    _flag_a = (uint32_t)(LO16(eax)) << 16; _flag_b = (uint32_t)(LO16(esi)) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    RECOMP_BACKEDGE();
    if (CMP_NE(_flag_a, _flag_b)) goto L_1505C678; /* 0x1505C681: jne 0x1505c678 */
L_1505C683:
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ecx = ecx - edx; /* 0x1505C683: sub ecx, edx */
    _flag_k = FK_CMP;
    edx = ebx + 0x1; /* 0x1505C685: lea edx, [ebx + 1] */
    if (1u) _cf = (((ecx) >> 0) & 1u); /* 0x1505C688: sar ecx, 1 */
    if (1u) { _flag_a = recomp_flags_pack(((uint32_t)((int32_t)ecx >> 1u)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ecx = (uint32_t)((int32_t)ecx >> 1u);
    eax = ecx + 0x1; /* 0x1505C68A: lea eax, [ecx + 1] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + edx; /* 0x1505C68D: add eax, edx */
    _flag_k = FK_ADD;
    MEM32(ebp + (-0x4)) = eax; /* 0x1505C68F: mov dword ptr [ebp - 4], eax */
    /* cmp eax, edx */ /* 0x1505C692: cmp eax, edx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_B(_flag_a, _flag_b)) goto L_1505C7E4; /* 0x1505C694: jb 0x1505c7e4 */
L_1505C69A:
    PUSH32(esp, 2); /* 0x1505C69A: push 2 */
    PUSH32(esp, eax); /* 0x1505C69C: push eax */
    RECOMP_CALL(sub_15048EE2); /* 0x1505C69D: call 0x15048ee2 */
    RECOMP_FLAGS_IN();
    MEM32(ebp + (-0x8)) = eax; /* 0x1505C6A2: mov dword ptr [ebp - 8], eax */
    ecx = POP32_VAL(esp); /* 0x1505C6A5: pop ecx */
    ecx = POP32_VAL(esp); /* 0x1505C6A6: pop ecx */
    /* test eax, eax */ /* 0x1505C6A7: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1505C7FC; /* 0x1505C6A9: je 0x1505c7fc */
L_1505C6AF:
    PUSH32(esp, edi); /* 0x1505C6AF: push edi */
    PUSH32(esp, MEM32(ebp + (-0x4))); /* 0x1505C6B0: push dword ptr [ebp - 4] */
    PUSH32(esp, eax); /* 0x1505C6B3: push eax */
    RECOMP_CALL(sub_1508F250); /* 0x1505C6B4: call 0x1508f250 */
    RECOMP_FLAGS_IN();
    eax = MEM32(ebp + (-0x8)); /* 0x1505C6B9: mov eax, dword ptr [ebp - 8] */
    PUSH32(esp, 0x3Du); /* 0x1505C6BC: push 0x3d */
    ecx = POP32_VAL(esp); /* 0x1505C6BE: pop ecx */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x1505C6BF: push dword ptr [ebp + 0xc] */
    MEM16(eax + ebx * 2) = (uint16_t)(LO16(ecx)); /* 0x1505C6C2: mov word ptr [eax + ebx*2], cx */
    ecx = ebx + 0x1; /* 0x1505C6C6: lea ecx, [ebx + 1] */
    eax = MEM32(ebp + (-0x4)); /* 0x1505C6C9: mov eax, dword ptr [ebp - 4] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - ecx; /* 0x1505C6CC: sub eax, ecx */
    _flag_k = FK_CMP;
    PUSH32(esp, eax); /* 0x1505C6CE: push eax */
    eax = MEM32(ebp + (-0x8)); /* 0x1505C6CF: mov eax, dword ptr [ebp - 8] */
    eax = eax + ecx * 2; /* 0x1505C6D2: lea eax, [eax + ecx*2] */
    PUSH32(esp, eax); /* 0x1505C6D5: push eax */
    RECOMP_CALL(sub_1508F250); /* 0x1505C6D6: call 0x1508f250 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x18u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x18u; /* 0x1505C6DB: add esp, 0x18 */
    _flag_k = FK_ADD;
L_1505C6DE:
    eax = ebp + (-0x8); /* 0x1505C6DE: lea eax, [ebp - 8] */
    PUSH32(esp, 1); /* 0x1505C6E1: push 1 */
    PUSH32(esp, eax); /* 0x1505C6E3: push eax */
    RECOMP_CALL(sub_1506164E); /* 0x1505C6E4: call 0x1506164e */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1505C6E9: pop ecx */
    ecx = POP32_VAL(esp); /* 0x1505C6EA: pop ecx */
    /* test eax, eax */ /* 0x1505C6EB: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1505C707; /* 0x1505C6ED: je 0x1505c707 */
L_1505C6EF:
    /* cmp MEM32(ebp + (-0x8)), 0 */ /* 0x1505C6EF: cmp dword ptr [ebp - 8], 0 */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x8))); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1505C7FC; /* 0x1505C6F3: je 0x1505c7fc */
L_1505C6F9:
    PUSH32(esp, MEM32(ebp + (-0x8))); /* 0x1505C6F9: push dword ptr [ebp - 8] */
L_1505C6FC:
    RECOMP_CALL(sub_15048840); /* 0x1505C6FC: call 0x15048840 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1505C701: pop ecx */
    goto L_1505C7FC; /* 0x1505C702: jmp 0x1505c7fc */
L_1505C707:
    /* cmp MEM32(0x150BDFCC), 0 */ /* 0x1505C707: cmp dword ptr [0x150bdfcc], 0 */
    _flag_a = (uint32_t)(MEM32(0x150BDFCC)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1505C7E0; /* 0x1505C70E: je 0x1505c7e0 */
L_1505C714:
    PUSH32(esp, esi); /* 0x1505C714: push esi */
    PUSH32(esp, esi); /* 0x1505C715: push esi */
    PUSH32(esp, esi); /* 0x1505C716: push esi */
    PUSH32(esp, esi); /* 0x1505C717: push esi */
    PUSH32(esp, 0xFFFFFFFFu); /* 0x1505C718: push -1 */
    PUSH32(esp, edi); /* 0x1505C71A: push edi */
    PUSH32(esp, esi); /* 0x1505C71B: push esi */
    PUSH32(esp, esi); /* 0x1505C71C: push esi */
    RECOMP_ICALL(MEM32(0x150C0248)); /* 0x1505C71D: call dword ptr [0x150c0248] */
    RECOMP_FLAGS_IN();
    ebx = eax; /* 0x1505C723: mov ebx, eax */
    /* test ebx, ebx */ /* 0x1505C725: test ebx, ebx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ebx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1505C739; /* 0x1505C727: jne 0x1505c739 */
L_1505C729:
    RECOMP_CALL(sub_15036430); /* 0x1505C729: call 0x15036430 */
    RECOMP_FLAGS_IN();
    MEM32(eax) = 0x2Au; /* 0x1505C72E: mov dword ptr [eax], 0x2a */
    goto L_1505C7FC; /* 0x1505C734: jmp 0x1505c7fc */
L_1505C739:
    /* cmp MEM32(ebp + 0xC), 0 */ /* 0x1505C739: cmp dword ptr [ebp + 0xc], 0 */
    _flag_a = (uint32_t)(MEM32(ebp + 0xC)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1505C757; /* 0x1505C73D: je 0x1505c757 */
L_1505C73F:
    PUSH32(esp, esi); /* 0x1505C73F: push esi */
    PUSH32(esp, esi); /* 0x1505C740: push esi */
    PUSH32(esp, esi); /* 0x1505C741: push esi */
    PUSH32(esp, esi); /* 0x1505C742: push esi */
    PUSH32(esp, 0xFFFFFFFFu); /* 0x1505C743: push -1 */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x1505C745: push dword ptr [ebp + 0xc] */
    PUSH32(esp, esi); /* 0x1505C748: push esi */
    PUSH32(esp, esi); /* 0x1505C749: push esi */
    RECOMP_ICALL(MEM32(0x150C0248)); /* 0x1505C74A: call dword ptr [0x150c0248] */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x1505C750: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_Z(_flag_a, _flag_b)) goto L_1505C729; /* 0x1505C752: je 0x1505c729 */
L_1505C754:
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(1);
    ebx = ebx + 1; /* 0x1505C754: inc ebx */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ebx = ebx + eax; /* 0x1505C755: add ebx, eax */
    _flag_k = FK_ADD;
L_1505C757:
    PUSH32(esp, 1); /* 0x1505C757: push 1 */
    PUSH32(esp, ebx); /* 0x1505C759: push ebx */
    RECOMP_CALL(sub_15048EE2); /* 0x1505C75A: call 0x15048ee2 */
    RECOMP_FLAGS_IN();
    MEM32(ebp + (-0x4)) = eax; /* 0x1505C75F: mov dword ptr [ebp - 4], eax */
    ecx = POP32_VAL(esp); /* 0x1505C762: pop ecx */
    ecx = POP32_VAL(esp); /* 0x1505C763: pop ecx */
    /* test eax, eax */ /* 0x1505C764: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1505C7FC; /* 0x1505C766: je 0x1505c7fc */
L_1505C76C:
    PUSH32(esp, esi); /* 0x1505C76C: push esi */
    PUSH32(esp, esi); /* 0x1505C76D: push esi */
    PUSH32(esp, ebx); /* 0x1505C76E: push ebx */
    PUSH32(esp, eax); /* 0x1505C76F: push eax */
    PUSH32(esp, 0xFFFFFFFFu); /* 0x1505C770: push -1 */
    PUSH32(esp, edi); /* 0x1505C772: push edi */
    PUSH32(esp, esi); /* 0x1505C773: push esi */
    PUSH32(esp, esi); /* 0x1505C774: push esi */
    RECOMP_ICALL(MEM32(0x150C0248)); /* 0x1505C775: call dword ptr [0x150c0248] */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x1505C77B: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1505C78A; /* 0x1505C77D: jne 0x1505c78a */
L_1505C77F:
    PUSH32(esp, MEM32(ebp + (-0x4))); /* 0x1505C77F: push dword ptr [ebp - 4] */
    RECOMP_CALL(sub_15048840); /* 0x1505C782: call 0x15048840 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1505C787: pop ecx */
    RECOMP_BACKEDGE();
    goto L_1505C729; /* 0x1505C788: jmp 0x1505c729 */
L_1505C78A:
    /* cmp MEM32(ebp + 0xC), 0 */ /* 0x1505C78A: cmp dword ptr [ebp + 0xc], 0 */
    _flag_a = (uint32_t)(MEM32(ebp + 0xC)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1505C7C2; /* 0x1505C78E: je 0x1505c7c2 */
L_1505C790:
    edx = MEM32(ebp + (-0x4)); /* 0x1505C790: mov edx, dword ptr [ebp - 4] */
    ecx = edx; /* 0x1505C793: mov ecx, edx */
    edi = ecx + 0x1; /* 0x1505C795: lea edi, [ecx + 1] */
L_1505C798:
    SET_LO8(eax, MEM8(ecx)); /* 0x1505C798: mov al, byte ptr [ecx] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx + 1; /* 0x1505C79A: inc ecx */
    _flag_k = FK_INC;
    /* test LO8(eax), LO8(eax) */ /* 0x1505C79B: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1505C798; /* 0x1505C79D: jne 0x1505c798 */
L_1505C79F:
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ecx = ecx - edi; /* 0x1505C79F: sub ecx, edi */
    _flag_k = FK_CMP;
    PUSH32(esp, esi); /* 0x1505C7A1: push esi */
    PUSH32(esp, esi); /* 0x1505C7A2: push esi */
    MEM8(ecx + edx) = (uint8_t)(0x3Du); /* 0x1505C7A3: mov byte ptr [ecx + edx], 0x3d */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx + 1; /* 0x1505C7A7: inc ecx */
    _flag_k = FK_INC;
    eax = MEM32(ebp + (-0x4)); /* 0x1505C7A8: mov eax, dword ptr [ebp - 4] */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ebx = ebx - ecx; /* 0x1505C7AB: sub ebx, ecx */
    _flag_k = FK_CMP;
    PUSH32(esp, ebx); /* 0x1505C7AD: push ebx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + ecx; /* 0x1505C7AE: add eax, ecx */
    _flag_k = FK_ADD;
    PUSH32(esp, eax); /* 0x1505C7B0: push eax */
    PUSH32(esp, 0xFFFFFFFFu); /* 0x1505C7B1: push -1 */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x1505C7B3: push dword ptr [ebp + 0xc] */
    PUSH32(esp, esi); /* 0x1505C7B6: push esi */
    PUSH32(esp, esi); /* 0x1505C7B7: push esi */
    RECOMP_ICALL(MEM32(0x150C0248)); /* 0x1505C7B8: call dword ptr [0x150c0248] */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x1505C7BE: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_Z(_flag_a, _flag_b)) goto L_1505C77F; /* 0x1505C7C0: je 0x1505c77f */
L_1505C7C2:
    eax = ebp + (-0x4); /* 0x1505C7C2: lea eax, [ebp - 4] */
    PUSH32(esp, esi); /* 0x1505C7C5: push esi */
    PUSH32(esp, eax); /* 0x1505C7C6: push eax */
    RECOMP_CALL(sub_1506130D); /* 0x1505C7C7: call 0x1506130d */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1505C7CC: pop ecx */
    ecx = POP32_VAL(esp); /* 0x1505C7CD: pop ecx */
    /* test eax, eax */ /* 0x1505C7CE: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1505C7E0; /* 0x1505C7D0: je 0x1505c7e0 */
L_1505C7D2:
    /* cmp MEM32(ebp + (-0x4)), 0 */ /* 0x1505C7D2: cmp dword ptr [ebp - 4], 0 */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x4))); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1505C7FC; /* 0x1505C7D6: je 0x1505c7fc */
L_1505C7D8:
    PUSH32(esp, MEM32(ebp + (-0x4))); /* 0x1505C7D8: push dword ptr [ebp - 4] */
    RECOMP_BACKEDGE();
    goto L_1505C6FC; /* 0x1505C7DB: jmp 0x1505c6fc */
L_1505C7E0:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1505C7E0: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_1505C7FF; /* 0x1505C7E2: jmp 0x1505c7ff */
L_1505C7E4:
    RECOMP_CALL(sub_15036430); /* 0x1505C7E4: call 0x15036430 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, esi); /* 0x1505C7E9: push esi */
    PUSH32(esp, esi); /* 0x1505C7EA: push esi */
    PUSH32(esp, esi); /* 0x1505C7EB: push esi */
    PUSH32(esp, esi); /* 0x1505C7EC: push esi */
    PUSH32(esp, esi); /* 0x1505C7ED: push esi */
    MEM32(eax) = 0x16u; /* 0x1505C7EE: mov dword ptr [eax], 0x16 */
    RECOMP_CALL(sub_1505A110); /* 0x1505C7F4: call 0x1505a110 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x14u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x14u; /* 0x1505C7F9: add esp, 0x14 */
    _flag_k = FK_ADD;
L_1505C7FC:
    _flag_a = (uint32_t)((eax | 0xFFFFFFFFu)); _flag_b = (uint32_t)((eax | 0xFFFFFFFFu));
    eax = eax | 0xFFFFFFFFu; /* 0x1505C7FC: or eax, 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
L_1505C7FF:
    ebx = POP32_VAL(esp); /* 0x1505C7FF: pop ebx */
L_1505C800:
    edi = POP32_VAL(esp); /* 0x1505C800: pop edi */
    esi = POP32_VAL(esp); /* 0x1505C801: pop esi */
    esp = ebp; ebp = POP32_VAL(esp); /* 0x1505C802: leave  */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1505C803: ret  */
    RECOMP_REGS_OUT();
}

void sub_1505C810(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1505C810u);

L_1505C810:
    PUSH32(esp, 0xCu); /* 0x1505C810: push 0xc */
    PUSH32(esp, 0x150B0C48u); /* 0x1505C812: push 0x150b0c48 */
    RECOMP_CALL(sub_1505E988); /* 0x1505C817: call 0x1505e988 */
    RECOMP_FLAGS_IN();
    /* cmp MEM32(ebp + 0xC), 0 */ /* 0x1505C81C: cmp dword ptr [ebp + 0xc], 0 */
    _flag_a = (uint32_t)(MEM32(ebp + 0xC)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_1505C841; /* 0x1505C820: jne 0x1505c841 */
L_1505C822:
    RECOMP_CALL(sub_15036430); /* 0x1505C822: call 0x15036430 */
    RECOMP_FLAGS_IN();
    MEM32(eax) = 0x16u; /* 0x1505C827: mov dword ptr [eax], 0x16 */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    esi = 0; /* 0x1505C82D: xor esi, esi */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, esi); /* 0x1505C82F: push esi */
    PUSH32(esp, esi); /* 0x1505C830: push esi */
    PUSH32(esp, esi); /* 0x1505C831: push esi */
    PUSH32(esp, esi); /* 0x1505C832: push esi */
    PUSH32(esp, esi); /* 0x1505C833: push esi */
    RECOMP_CALL(sub_1505A110); /* 0x1505C834: call 0x1505a110 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x14u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x14u; /* 0x1505C839: add esp, 0x14 */
    _flag_k = FK_ADD;
    PUSH32(esp, 0x16u); /* 0x1505C83C: push 0x16 */
    eax = POP32_VAL(esp); /* 0x1505C83E: pop eax */
    goto L_1505C877; /* 0x1505C83F: jmp 0x1505c877 */
L_1505C841:
    PUSH32(esp, 7); /* 0x1505C841: push 7 */
    RECOMP_CALL(sub_15068D80); /* 0x1505C843: call 0x15068d80 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1505C848: pop ecx */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    esi = 0; /* 0x1505C849: xor esi, esi */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x4)) = esi; /* 0x1505C84B: mov dword ptr [ebp - 4], esi */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x1505C84E: push dword ptr [ebp + 0xc] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x1505C851: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_1505C5D9); /* 0x1505C854: call 0x1505c5d9 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1505C859: pop ecx */
    ecx = POP32_VAL(esp); /* 0x1505C85A: pop ecx */
    /* test eax, eax */ /* 0x1505C85B: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1505C866; /* 0x1505C85D: je 0x1505c866 */
L_1505C85F:
    RECOMP_CALL(sub_15036430); /* 0x1505C85F: call 0x15036430 */
    RECOMP_FLAGS_IN();
    esi = MEM32(eax); /* 0x1505C864: mov esi, dword ptr [eax] */
L_1505C866:
    MEM32(ebp + (-0x1C)) = esi; /* 0x1505C866: mov dword ptr [ebp - 0x1c], esi */
    MEM32(ebp + (-0x4)) = 0xFFFFFFFEu; /* 0x1505C869: mov dword ptr [ebp - 4], 0xfffffffe */
    RECOMP_CALL(sub_1505C88A); /* 0x1505C870: call 0x1505c88a */
    RECOMP_FLAGS_IN();
    eax = esi; /* 0x1505C875: mov eax, esi */
L_1505C877:
    ecx = MEM32(ebp + (-0x10)); /* 0x1505C877: mov ecx, dword ptr [ebp - 0x10] */
    MEM32(FS_BASE + (0)) = ecx; /* 0x1505C87A: mov dword ptr fs:[0], ecx */
    ecx = POP32_VAL(esp); /* 0x1505C881: pop ecx */
    edi = POP32_VAL(esp); /* 0x1505C882: pop edi */
    esi = POP32_VAL(esp); /* 0x1505C883: pop esi */
    ebx = POP32_VAL(esp); /* 0x1505C884: pop ebx */
    esp = ebp; ebp = POP32_VAL(esp); /* 0x1505C885: leave  */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1505C886: ret  */
    RECOMP_REGS_OUT();
}

void sub_1505C88A(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1505C88Au);

L_1505C88A:
    PUSH32(esp, 7); /* 0x1505C88A: push 7 */
    RECOMP_CALL(sub_15068F50); /* 0x1505C88C: call 0x15068f50 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1505C891: pop ecx */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1505C892: ret  */
    RECOMP_REGS_OUT();
}

void sub_1505C8A0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1505C8A0u);

L_1505C8A0:
    edi = edi; /* 0x1505C8A0: mov edi, edi */
    PUSH32(esp, ebp); /* 0x1505C8A2: push ebp */
    ebp = esp; /* 0x1505C8A3: mov ebp, esp */
    PUSH32(esp, 0x104u); /* 0x1505C8A5: push 0x104 */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x1505C8AA: push dword ptr [ebp + 0x10] */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x1505C8AD: push dword ptr [ebp + 0xc] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x1505C8B0: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_1505C8D0); /* 0x1505C8B3: call 0x1505c8d0 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x10u; /* 0x1505C8B8: add esp, 0x10 */
    _flag_k = FK_ADD;
    ebp = POP32_VAL(esp); /* 0x1505C8BB: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1505C8BC: ret  */
    RECOMP_REGS_OUT();
}

void sub_1505C8D0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1505C8D0u);

L_1505C8D0:
    edi = edi; /* 0x1505C8D0: mov edi, edi */
    PUSH32(esp, ebp); /* 0x1505C8D2: push ebp */
    ebp = esp; /* 0x1505C8D3: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x238u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x238u; /* 0x1505C8D5: sub esp, 0x238 */
    _flag_k = FK_CMP;
    eax = MEM32(0x150BD340); /* 0x1505C8DB: mov eax, dword ptr [0x150bd340] */
    _flag_a = (uint32_t)((eax ^ ebp)); _flag_b = (uint32_t)((eax ^ ebp));
    eax = eax ^ ebp; /* 0x1505C8E0: xor eax, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x4)) = eax; /* 0x1505C8E2: mov dword ptr [ebp - 4], eax */
    eax = MEM32(ebp + 0xC); /* 0x1505C8E5: mov eax, dword ptr [ebp + 0xc] */
    ecx = MEM32(ebp + 0x8); /* 0x1505C8E8: mov ecx, dword ptr [ebp + 8] */
    edx = MEM32(ebp + 0x14); /* 0x1505C8EB: mov edx, dword ptr [ebp + 0x14] */
    PUSH32(esp, ebx); /* 0x1505C8EE: push ebx */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ebx = 0; /* 0x1505C8EF: xor ebx, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x220)) = eax; /* 0x1505C8F1: mov dword ptr [ebp - 0x220], eax */
    eax = MEM32(ebp + 0x10); /* 0x1505C8F7: mov eax, dword ptr [ebp + 0x10] */
    MEM32(ebp + (-0x224)) = ecx; /* 0x1505C8FA: mov dword ptr [ebp - 0x224], ecx */
    MEM32(ebp + (-0x21C)) = eax; /* 0x1505C900: mov dword ptr [ebp - 0x21c], eax */
    MEM32(ebp + (-0x230)) = edx; /* 0x1505C906: mov dword ptr [ebp - 0x230], edx */
    MEM32(ebp + (-0x22C)) = ebx; /* 0x1505C90C: mov dword ptr [ebp - 0x22c], ebx */
    PUSH32(esp, esi); /* 0x1505C912: push esi */
    esi = ebx; /* 0x1505C913: mov esi, ebx */
    MEM32(ebp + (-0x218)) = esi; /* 0x1505C915: mov dword ptr [ebp - 0x218], esi */
    /* test eax, eax */ /* 0x1505C91B: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1505C93D; /* 0x1505C91D: jne 0x1505c93d */
L_1505C91F:
    RECOMP_CALL(sub_15036430); /* 0x1505C91F: call 0x15036430 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0x16u); /* 0x1505C924: push 0x16 */
    esi = POP32_VAL(esp); /* 0x1505C926: pop esi */
    PUSH32(esp, ebx); /* 0x1505C927: push ebx */
    PUSH32(esp, ebx); /* 0x1505C928: push ebx */
    PUSH32(esp, ebx); /* 0x1505C929: push ebx */
    PUSH32(esp, ebx); /* 0x1505C92A: push ebx */
    PUSH32(esp, ebx); /* 0x1505C92B: push ebx */
    MEM32(eax) = esi; /* 0x1505C92C: mov dword ptr [eax], esi */
    RECOMP_CALL(sub_1505A110); /* 0x1505C92E: call 0x1505a110 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x14u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x14u; /* 0x1505C933: add esp, 0x14 */
    _flag_k = FK_ADD;
    eax = esi; /* 0x1505C936: mov eax, esi */
    goto L_1505CA1A; /* 0x1505C938: jmp 0x1505ca1a */
L_1505C93D:
    /* test edx, edx */ /* 0x1505C93D: test edx, edx */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(edx);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_Z(_flag_a, _flag_b)) goto L_1505C91F; /* 0x1505C93F: je 0x1505c91f */
L_1505C941:
    /* test ecx, ecx */ /* 0x1505C941: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1505C94A; /* 0x1505C943: jne 0x1505c94a */
L_1505C945:
    MEM16(eax) = (uint16_t)(LO16(ecx)); /* 0x1505C945: mov word ptr [eax], cx */
    RECOMP_BACKEDGE();
    goto L_1505C91F; /* 0x1505C948: jmp 0x1505c91f */
L_1505C94A:
    PUSH32(esp, edi); /* 0x1505C94A: push edi */
    /* cmp MEM16(ecx), LO16(ebx) */ /* 0x1505C94B: cmp word ptr [ecx], bx */
    _flag_a = (uint32_t)(MEM16(ecx)) << 16; _flag_b = (uint32_t)(LO16(ebx)) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    if (CMP_NE(_flag_a, _flag_b)) goto L_1505C96A; /* 0x1505C94E: jne 0x1505c96a */
L_1505C950:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x1505C950: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM16(eax) = (uint16_t)(LO16(ecx)); /* 0x1505C952: mov word ptr [eax], cx */
    RECOMP_CALL(sub_15036430); /* 0x1505C955: call 0x15036430 */
    RECOMP_FLAGS_IN();
    MEM32(eax) = 2; /* 0x1505C95A: mov dword ptr [eax], 2 */
    RECOMP_CALL(sub_15036430); /* 0x1505C960: call 0x15036430 */
    RECOMP_FLAGS_IN();
    goto L_1505CA02; /* 0x1505C965: jmp 0x1505ca02 */
L_1505C96A:
    RECOMP_CALL(sub_15036430); /* 0x1505C96A: call 0x15036430 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, ebx); /* 0x1505C96F: push ebx */
    PUSH32(esp, MEM32(ebp + (-0x224))); /* 0x1505C970: push dword ptr [ebp - 0x224] */
    edi = MEM32(eax); /* 0x1505C976: mov edi, dword ptr [eax] */
    RECOMP_CALL(sub_15037B60); /* 0x1505C978: call 0x15037b60 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1505C97D: pop ecx */
    ecx = POP32_VAL(esp); /* 0x1505C97E: pop ecx */
    esi = eax; /* 0x1505C97F: mov esi, eax */
    RECOMP_CALL(sub_15036430); /* 0x1505C981: call 0x15036430 */
    RECOMP_FLAGS_IN();
    MEM32(eax) = edi; /* 0x1505C986: mov dword ptr [eax], edi */
    /* test esi, esi */ /* 0x1505C988: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1505C9B5; /* 0x1505C98A: jne 0x1505c9b5 */
L_1505C98C:
    edi = MEM32(ebp + (-0x230)); /* 0x1505C98C: mov edi, dword ptr [ebp - 0x230] */
    PUSH32(esp, edi); /* 0x1505C992: push edi */
    PUSH32(esp, MEM32(ebp + (-0x224))); /* 0x1505C993: push dword ptr [ebp - 0x224] */
    edi = MEM32(ebp + (-0x21C)); /* 0x1505C999: mov edi, dword ptr [ebp - 0x21c] */
    PUSH32(esp, edi); /* 0x1505C99F: push edi */
    RECOMP_CALL(sub_15037DC0); /* 0x1505C9A0: call 0x15037dc0 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x1505C9A5: add esp, 0xc */
    _flag_k = FK_ADD;
    /* test eax, eax */ /* 0x1505C9A8: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1505C9B1; /* 0x1505C9AA: jne 0x1505c9b1 */
L_1505C9AC:
    MEM16(edi) = (uint16_t)(LO16(eax)); /* 0x1505C9AC: mov word ptr [edi], ax */
    goto L_1505C9F7; /* 0x1505C9AF: jmp 0x1505c9f7 */
L_1505C9B1:
    esi = ebx; /* 0x1505C9B1: mov esi, ebx */
    goto L_1505CA04; /* 0x1505C9B3: jmp 0x1505ca04 */
L_1505C9B5:
    PUSH32(esp, MEM32(ebp + (-0x220))); /* 0x1505C9B5: push dword ptr [ebp - 0x220] */
    eax = ebp + (-0x22C); /* 0x1505C9BB: lea eax, [ebp - 0x22c] */
    PUSH32(esp, ebx); /* 0x1505C9C1: push ebx */
    PUSH32(esp, eax); /* 0x1505C9C2: push eax */
    RECOMP_CALL(sub_1505BF8C); /* 0x1505C9C3: call 0x1505bf8c */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x1505C9C8: add esp, 0xc */
    _flag_k = FK_ADD;
    /* test eax, eax */ /* 0x1505C9CB: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1505CA2C; /* 0x1505C9CD: je 0x1505ca2c */
L_1505C9CF:
    /* cmp eax, 0x16u */ /* 0x1505C9CF: cmp eax, 0x16 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x16u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_1505CA28; /* 0x1505C9D2: jne 0x1505ca28 */
L_1505C9D4:
    PUSH32(esp, ebx); /* 0x1505C9D4: push ebx */
    PUSH32(esp, ebx); /* 0x1505C9D5: push ebx */
    PUSH32(esp, ebx); /* 0x1505C9D6: push ebx */
    PUSH32(esp, ebx); /* 0x1505C9D7: push ebx */
    PUSH32(esp, ebx); /* 0x1505C9D8: push ebx */
    RECOMP_CALL(sub_1505A11B); /* 0x1505C9D9: call 0x1505a11b */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x14u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x14u; /* 0x1505C9DE: add esp, 0x14 */
    _flag_k = FK_ADD;
L_1505C9E1:
    edi = MEM32(ebp + (-0x21C)); /* 0x1505C9E1: mov edi, dword ptr [ebp - 0x21c] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1505C9E7: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM16(edi) = (uint16_t)(LO16(eax)); /* 0x1505C9E9: mov word ptr [edi], ax */
    RECOMP_CALL(sub_15036430); /* 0x1505C9EC: call 0x15036430 */
    RECOMP_FLAGS_IN();
    MEM32(eax) = 2; /* 0x1505C9F1: mov dword ptr [eax], 2 */
L_1505C9F7:
    RECOMP_CALL(sub_15036430); /* 0x1505C9F7: call 0x15036430 */
    RECOMP_FLAGS_IN();
    esi = MEM32(ebp + (-0x218)); /* 0x1505C9FC: mov esi, dword ptr [ebp - 0x218] */
L_1505CA02:
    ebx = MEM32(eax); /* 0x1505CA02: mov ebx, dword ptr [eax] */
L_1505CA04:
    PUSH32(esp, esi); /* 0x1505CA04: push esi */
    RECOMP_CALL(sub_15048840); /* 0x1505CA05: call 0x15048840 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1505CA0A: pop ecx */
L_1505CA0B:
    PUSH32(esp, MEM32(ebp + (-0x22C))); /* 0x1505CA0B: push dword ptr [ebp - 0x22c] */
    RECOMP_CALL(sub_15048840); /* 0x1505CA11: call 0x15048840 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1505CA16: pop ecx */
    eax = ebx; /* 0x1505CA17: mov eax, ebx */
    edi = POP32_VAL(esp); /* 0x1505CA19: pop edi */
L_1505CA1A:
    ecx = MEM32(ebp + (-0x4)); /* 0x1505CA1A: mov ecx, dword ptr [ebp - 4] */
    esi = POP32_VAL(esp); /* 0x1505CA1D: pop esi */
    _flag_a = (uint32_t)((ecx ^ ebp)); _flag_b = (uint32_t)((ecx ^ ebp));
    ecx = ecx ^ ebp; /* 0x1505CA1E: xor ecx, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    ebx = POP32_VAL(esp); /* 0x1505CA20: pop ebx */
    RECOMP_CALL(sub_1505E540); /* 0x1505CA21: call 0x1505e540 */
    RECOMP_FLAGS_IN();
    esp = ebp; ebp = POP32_VAL(esp); /* 0x1505CA26: leave  */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1505CA27: ret  */
L_1505CA28:
    /* test eax, eax */ /* 0x1505CA28: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1505C9E1; /* 0x1505CA2A: jne 0x1505c9e1 */
L_1505CA2C:
    ecx = MEM32(ebp + (-0x22C)); /* 0x1505CA2C: mov ecx, dword ptr [ebp - 0x22c] */
    MEM32(ebp + (-0x228)) = ecx; /* 0x1505CA32: mov dword ptr [ebp - 0x228], ecx */
    /* test ecx, ecx */ /* 0x1505CA38: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_Z(_flag_a, _flag_b)) goto L_1505C9E1; /* 0x1505CA3A: je 0x1505c9e1 */
L_1505CA3C:
    edi = MEM32(ebp + (-0x224)); /* 0x1505CA3C: mov edi, dword ptr [ebp - 0x224] */
    edx = edi + 0x2; /* 0x1505CA42: lea edx, [edi + 2] */
L_1505CA45:
    SET_LO16(eax, MEM16(edi)); /* 0x1505CA45: mov ax, word ptr [edi] */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edi = edi + 2; /* 0x1505CA48: add edi, 2 */
    _flag_k = FK_ADD;
    /* cmp LO16(eax), LO16(ebx) */ /* 0x1505CA4B: cmp ax, bx */
    _flag_a = (uint32_t)(LO16(eax)) << 16; _flag_b = (uint32_t)(LO16(ebx)) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    RECOMP_BACKEDGE();
    if (CMP_NE(_flag_a, _flag_b)) goto L_1505CA45; /* 0x1505CA4E: jne 0x1505ca45 */
L_1505CA50:
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    edi = edi - edx; /* 0x1505CA50: sub edi, edx */
    _flag_k = FK_CMP;
    esi = ebp + (-0x214); /* 0x1505CA52: lea esi, [ebp - 0x214] */
    eax = 0x108u; /* 0x1505CA58: mov eax, 0x108 */
    if (1u) _cf = (((edi) >> 0) & 1u); /* 0x1505CA5D: sar edi, 1 */
    if (1u) { _flag_a = recomp_flags_pack(((uint32_t)((int32_t)edi >> 1u)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    edi = (uint32_t)((int32_t)edi >> 1u);
    MEM32(ebp + (-0x218)) = eax; /* 0x1505CA5F: mov dword ptr [ebp - 0x218], eax */
    /* cmp edi, eax */ /* 0x1505CA65: cmp edi, eax */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_B(_flag_a, _flag_b)) goto L_1505CAB1; /* 0x1505CA67: jb 0x1505cab1 */
L_1505CA69:
    edx = ecx + 0x2; /* 0x1505CA69: lea edx, [ecx + 2] */
L_1505CA6C:
    SET_LO16(eax, MEM16(ecx)); /* 0x1505CA6C: mov ax, word ptr [ecx] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 2; /* 0x1505CA6F: add ecx, 2 */
    _flag_k = FK_ADD;
    /* cmp LO16(eax), LO16(ebx) */ /* 0x1505CA72: cmp ax, bx */
    _flag_a = (uint32_t)(LO16(eax)) << 16; _flag_b = (uint32_t)(LO16(ebx)) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    RECOMP_BACKEDGE();
    if (CMP_NE(_flag_a, _flag_b)) goto L_1505CA6C; /* 0x1505CA75: jne 0x1505ca6c */
L_1505CA77:
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ecx = ecx - edx; /* 0x1505CA77: sub ecx, edx */
    _flag_k = FK_CMP;
    if (1u) _cf = (((ecx) >> 0) & 1u); /* 0x1505CA79: sar ecx, 1 */
    if (1u) { _flag_a = recomp_flags_pack(((uint32_t)((int32_t)ecx >> 1u)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ecx = (uint32_t)((int32_t)ecx >> 1u);
    PUSH32(esp, 2); /* 0x1505CA7B: push 2 */
    eax = ecx + 0x2; /* 0x1505CA7D: lea eax, [ecx + 2] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + edi; /* 0x1505CA80: add eax, edi */
    _flag_k = FK_ADD;
    PUSH32(esp, eax); /* 0x1505CA82: push eax */
    MEM32(ebp + (-0x218)) = eax; /* 0x1505CA83: mov dword ptr [ebp - 0x218], eax */
    RECOMP_CALL(sub_15048EE2); /* 0x1505CA89: call 0x15048ee2 */
    RECOMP_FLAGS_IN();
    esi = eax; /* 0x1505CA8E: mov esi, eax */
    ecx = POP32_VAL(esp); /* 0x1505CA90: pop ecx */
    ecx = POP32_VAL(esp); /* 0x1505CA91: pop ecx */
    /* test esi, esi */ /* 0x1505CA92: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1505CAB1; /* 0x1505CA94: jne 0x1505cab1 */
L_1505CA96:
    edi = MEM32(ebp + (-0x21C)); /* 0x1505CA96: mov edi, dword ptr [ebp - 0x21c] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1505CA9C: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM16(edi) = (uint16_t)(LO16(eax)); /* 0x1505CA9E: mov word ptr [edi], ax */
    RECOMP_CALL(sub_15036430); /* 0x1505CAA1: call 0x15036430 */
    RECOMP_FLAGS_IN();
    MEM32(eax) = 0xCu; /* 0x1505CAA6: mov dword ptr [eax], 0xc */
    goto L_1505CC22; /* 0x1505CAAC: jmp 0x1505cc22 */
L_1505CAB1:
    RECOMP_CALL(sub_15036430); /* 0x1505CAB1: call 0x15036430 */
    RECOMP_FLAGS_IN();
    ecx = MEM32(ebp + (-0x228)); /* 0x1505CAB6: mov ecx, dword ptr [ebp - 0x228] */
    eax = MEM32(eax); /* 0x1505CABC: mov eax, dword ptr [eax] */
    MEM32(ebp + (-0x238)) = eax; /* 0x1505CABE: mov dword ptr [ebp - 0x238], eax */
    /* test ecx, ecx */ /* 0x1505CAC4: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1505CC0C; /* 0x1505CAC6: je 0x1505cc0c */
L_1505CACC:
    MEM32(ebp + (-0x234)) = 0x5Cu; /* 0x1505CACC: mov dword ptr [ebp - 0x234], 0x5c */
L_1505CAD6:
    eax = MEM32(ebp + (-0x218)); /* 0x1505CAD6: mov eax, dword ptr [ebp - 0x218] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - edi; /* 0x1505CADC: sub eax, edi */
    _flag_k = FK_CMP;
    MEM32(ebp + (-0x220)) = ecx; /* 0x1505CADE: mov dword ptr [ebp - 0x220], ecx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax - 1; /* 0x1505CAE4: dec eax */
    _flag_k = FK_DEC;
    PUSH32(esp, eax); /* 0x1505CAE5: push eax */
    PUSH32(esp, esi); /* 0x1505CAE6: push esi */
    PUSH32(esp, ecx); /* 0x1505CAE7: push ecx */
    RECOMP_CALL(sub_1505EC22); /* 0x1505CAE8: call 0x1505ec22 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x1505CAED: add esp, 0xc */
    _flag_k = FK_ADD;
    MEM32(ebp + (-0x228)) = eax; /* 0x1505CAF0: mov dword ptr [ebp - 0x228], eax */
    /* test eax, eax */ /* 0x1505CAF6: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1505CB73; /* 0x1505CAF8: jne 0x1505cb73 */
L_1505CAFA:
    eax = ebp + (-0x214); /* 0x1505CAFA: lea eax, [ebp - 0x214] */
    /* cmp esi, eax */ /* 0x1505CB00: cmp esi, eax */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_1505CC0C; /* 0x1505CB02: jne 0x1505cc0c */
L_1505CB08:
    RECOMP_CALL(sub_15036430); /* 0x1505CB08: call 0x15036430 */
    RECOMP_FLAGS_IN();
    /* cmp MEM32(eax), 0x22u */ /* 0x1505CB0D: cmp dword ptr [eax], 0x22 */
    _flag_a = (uint32_t)(MEM32(eax)); _flag_b = (uint32_t)(0x22u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_1505CC0C; /* 0x1505CB10: jne 0x1505cc0c */
L_1505CB16:
    ecx = MEM32(ebp + (-0x220)); /* 0x1505CB16: mov ecx, dword ptr [ebp - 0x220] */
    edx = ecx + 0x2; /* 0x1505CB1C: lea edx, [ecx + 2] */
L_1505CB1F:
    SET_LO16(eax, MEM16(ecx)); /* 0x1505CB1F: mov ax, word ptr [ecx] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 2; /* 0x1505CB22: add ecx, 2 */
    _flag_k = FK_ADD;
    /* cmp LO16(eax), LO16(ebx) */ /* 0x1505CB25: cmp ax, bx */
    _flag_a = (uint32_t)(LO16(eax)) << 16; _flag_b = (uint32_t)(LO16(ebx)) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    RECOMP_BACKEDGE();
    if (CMP_NE(_flag_a, _flag_b)) goto L_1505CB1F; /* 0x1505CB28: jne 0x1505cb1f */
L_1505CB2A:
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ecx = ecx - edx; /* 0x1505CB2A: sub ecx, edx */
    _flag_k = FK_CMP;
    if (1u) _cf = (((ecx) >> 0) & 1u); /* 0x1505CB2C: sar ecx, 1 */
    if (1u) { _flag_a = recomp_flags_pack(((uint32_t)((int32_t)ecx >> 1u)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ecx = (uint32_t)((int32_t)ecx >> 1u);
    PUSH32(esp, 2); /* 0x1505CB2E: push 2 */
    eax = ecx + 0x2; /* 0x1505CB30: lea eax, [ecx + 2] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + edi; /* 0x1505CB33: add eax, edi */
    _flag_k = FK_ADD;
    PUSH32(esp, eax); /* 0x1505CB35: push eax */
    MEM32(ebp + (-0x218)) = eax; /* 0x1505CB36: mov dword ptr [ebp - 0x218], eax */
    RECOMP_CALL(sub_15048EE2); /* 0x1505CB3C: call 0x15048ee2 */
    RECOMP_FLAGS_IN();
    esi = eax; /* 0x1505CB41: mov esi, eax */
    ecx = POP32_VAL(esp); /* 0x1505CB43: pop ecx */
    ecx = POP32_VAL(esp); /* 0x1505CB44: pop ecx */
    /* test esi, esi */ /* 0x1505CB45: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_Z(_flag_a, _flag_b)) goto L_1505CA96; /* 0x1505CB47: je 0x1505ca96 */
L_1505CB4D:
    eax = MEM32(ebp + (-0x218)); /* 0x1505CB4D: mov eax, dword ptr [ebp - 0x218] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - edi; /* 0x1505CB53: sub eax, edi */
    _flag_k = FK_CMP;
    PUSH32(esp, eax); /* 0x1505CB55: push eax */
    PUSH32(esp, esi); /* 0x1505CB56: push esi */
    PUSH32(esp, MEM32(ebp + (-0x220))); /* 0x1505CB57: push dword ptr [ebp - 0x220] */
    RECOMP_CALL(sub_1505EC22); /* 0x1505CB5D: call 0x1505ec22 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x1505CB62: add esp, 0xc */
    _flag_k = FK_ADD;
    MEM32(ebp + (-0x228)) = eax; /* 0x1505CB65: mov dword ptr [ebp - 0x228], eax */
    /* test eax, eax */ /* 0x1505CB6B: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1505CC0C; /* 0x1505CB6D: je 0x1505cc0c */
L_1505CB73:
    /* cmp MEM16(esi), LO16(ebx) */ /* 0x1505CB73: cmp word ptr [esi], bx */
    _flag_a = (uint32_t)(MEM16(esi)) << 16; _flag_b = (uint32_t)(LO16(ebx)) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1505CC0C; /* 0x1505CB76: je 0x1505cc0c */
L_1505CB7C:
    ecx = esi; /* 0x1505CB7C: mov ecx, esi */
    edx = ecx + 0x2; /* 0x1505CB7E: lea edx, [ecx + 2] */
L_1505CB81:
    SET_LO16(eax, MEM16(ecx)); /* 0x1505CB81: mov ax, word ptr [ecx] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 2; /* 0x1505CB84: add ecx, 2 */
    _flag_k = FK_ADD;
    /* cmp LO16(eax), LO16(ebx) */ /* 0x1505CB87: cmp ax, bx */
    _flag_a = (uint32_t)(LO16(eax)) << 16; _flag_b = (uint32_t)(LO16(ebx)) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    RECOMP_BACKEDGE();
    if (CMP_NE(_flag_a, _flag_b)) goto L_1505CB81; /* 0x1505CB8A: jne 0x1505cb81 */
L_1505CB8C:
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ecx = ecx - edx; /* 0x1505CB8C: sub ecx, edx */
    _flag_k = FK_CMP;
    if (1u) _cf = (((ecx) >> 0) & 1u); /* 0x1505CB8E: sar ecx, 1 */
    if (1u) { _flag_a = recomp_flags_pack(((uint32_t)((int32_t)ecx >> 1u)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ecx = (uint32_t)((int32_t)ecx >> 1u);
    MEM32(ebp + (-0x220)) = ecx; /* 0x1505CB90: mov dword ptr [ebp - 0x220], ecx */
    edx = esi + ecx * 2; /* 0x1505CB96: lea edx, [esi + ecx*2] */
    eax = (uint32_t)MEM16(edx + (-0x2)); /* 0x1505CB99: movzx eax, word ptr [edx - 2] */
    /* cmp eax, 0x2Fu */ /* 0x1505CB9D: cmp eax, 0x2f */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x2Fu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1505CBC2; /* 0x1505CBA0: je 0x1505cbc2 */
L_1505CBA2:
    /* cmp LO16(eax), MEM16(ebp + (-0x234)) */ /* 0x1505CBA2: cmp ax, word ptr [ebp - 0x234] */
    _flag_a = (uint32_t)(LO16(eax)) << 16; _flag_b = (uint32_t)(MEM16(ebp + (-0x234))) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1505CBC2; /* 0x1505CBA9: je 0x1505cbc2 */
L_1505CBAB:
    /* cmp MEM16(edx + (-0x2)), 0x3Au */ /* 0x1505CBAB: cmp word ptr [edx - 2], 0x3a */
    _flag_a = (uint32_t)(MEM16(edx + (-0x2))) << 16; _flag_b = (uint32_t)(0x3Au) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1505CBC2; /* 0x1505CBB0: je 0x1505cbc2 */
L_1505CBB2:
    PUSH32(esp, 0x5Cu); /* 0x1505CBB2: push 0x5c */
    eax = POP32_VAL(esp); /* 0x1505CBB4: pop eax */
    MEM16(edx) = (uint16_t)(LO16(eax)); /* 0x1505CBB5: mov word ptr [edx], ax */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edx = edx + 2; /* 0x1505CBB8: add edx, 2 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx + 1; /* 0x1505CBBB: inc ecx */
    _flag_k = FK_INC;
    MEM32(ebp + (-0x220)) = ecx; /* 0x1505CBBC: mov dword ptr [ebp - 0x220], ecx */
L_1505CBC2:
    PUSH32(esp, MEM32(ebp + (-0x224))); /* 0x1505CBC2: push dword ptr [ebp - 0x224] */
    eax = MEM32(ebp + (-0x218)); /* 0x1505CBC8: mov eax, dword ptr [ebp - 0x218] */
    ecx = edx; /* 0x1505CBCE: mov ecx, edx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ecx = ecx - esi; /* 0x1505CBD0: sub ecx, esi */
    _flag_k = FK_CMP;
    if (1u) _cf = (((ecx) >> 0) & 1u); /* 0x1505CBD2: sar ecx, 1 */
    if (1u) { _flag_a = recomp_flags_pack(((uint32_t)((int32_t)ecx >> 1u)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ecx = (uint32_t)((int32_t)ecx >> 1u);
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - ecx; /* 0x1505CBD4: sub eax, ecx */
    _flag_k = FK_CMP;
    PUSH32(esp, eax); /* 0x1505CBD6: push eax */
    PUSH32(esp, edx); /* 0x1505CBD7: push edx */
    RECOMP_CALL(sub_1508F250); /* 0x1505CBD8: call 0x1508f250 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x1505CBDD: add esp, 0xc */
    _flag_k = FK_ADD;
    /* test eax, eax */ /* 0x1505CBE0: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1505CBF1; /* 0x1505CBE2: je 0x1505cbf1 */
L_1505CBE4:
    PUSH32(esp, ebx); /* 0x1505CBE4: push ebx */
    PUSH32(esp, ebx); /* 0x1505CBE5: push ebx */
    PUSH32(esp, ebx); /* 0x1505CBE6: push ebx */
    PUSH32(esp, ebx); /* 0x1505CBE7: push ebx */
    PUSH32(esp, ebx); /* 0x1505CBE8: push ebx */
    RECOMP_CALL(sub_1505A11B); /* 0x1505CBE9: call 0x1505a11b */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x14u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x14u; /* 0x1505CBEE: add esp, 0x14 */
    _flag_k = FK_ADD;
L_1505CBF1:
    PUSH32(esp, ebx); /* 0x1505CBF1: push ebx */
    PUSH32(esp, esi); /* 0x1505CBF2: push esi */
    RECOMP_CALL(sub_15037B60); /* 0x1505CBF3: call 0x15037b60 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1505CBF8: pop ecx */
    ecx = POP32_VAL(esp); /* 0x1505CBF9: pop ecx */
    /* test eax, eax */ /* 0x1505CBFA: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1505CC3C; /* 0x1505CBFC: je 0x1505cc3c */
L_1505CBFE:
    ecx = MEM32(ebp + (-0x228)); /* 0x1505CBFE: mov ecx, dword ptr [ebp - 0x228] */
    /* test ecx, ecx */ /* 0x1505CC04: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1505CAD6; /* 0x1505CC06: jne 0x1505cad6 */
L_1505CC0C:
    edi = MEM32(ebp + (-0x21C)); /* 0x1505CC0C: mov edi, dword ptr [ebp - 0x21c] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1505CC12: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM16(edi) = (uint16_t)(LO16(eax)); /* 0x1505CC14: mov word ptr [edi], ax */
    RECOMP_CALL(sub_15036430); /* 0x1505CC17: call 0x15036430 */
    RECOMP_FLAGS_IN();
    MEM32(eax) = 2; /* 0x1505CC1C: mov dword ptr [eax], 2 */
L_1505CC22:
    RECOMP_CALL(sub_15036430); /* 0x1505CC22: call 0x15036430 */
    RECOMP_FLAGS_IN();
    ebx = MEM32(eax); /* 0x1505CC27: mov ebx, dword ptr [eax] */
L_1505CC29:
    eax = ebp + (-0x214); /* 0x1505CC29: lea eax, [ebp - 0x214] */
    /* cmp esi, eax */ /* 0x1505CC2F: cmp esi, eax */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1505CA0B; /* 0x1505CC31: je 0x1505ca0b */
L_1505CC37:
    RECOMP_BACKEDGE();
    goto L_1505CA04; /* 0x1505CC37: jmp 0x1505ca04 */
L_1505CC3C:
    eax = MEM32(ebp + (-0x220)); /* 0x1505CC3C: mov eax, dword ptr [ebp - 0x220] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + edi; /* 0x1505CC42: add eax, edi */
    _flag_k = FK_ADD;
    edi = MEM32(ebp + (-0x230)); /* 0x1505CC44: mov edi, dword ptr [ebp - 0x230] */
    /* cmp eax, edi */ /* 0x1505CC4A: cmp eax, edi */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_B(_flag_a, _flag_b)) goto L_1505CC77; /* 0x1505CC4C: jb 0x1505cc77 */
L_1505CC4E:
    edi = MEM32(ebp + (-0x21C)); /* 0x1505CC4E: mov edi, dword ptr [ebp - 0x21c] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1505CC54: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM16(edi) = (uint16_t)(LO16(eax)); /* 0x1505CC56: mov word ptr [edi], ax */
    eax = ebp + (-0x214); /* 0x1505CC59: lea eax, [ebp - 0x214] */
    /* cmp esi, eax */ /* 0x1505CC5F: cmp esi, eax */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1505CC6A; /* 0x1505CC61: je 0x1505cc6a */
L_1505CC63:
    PUSH32(esp, esi); /* 0x1505CC63: push esi */
    RECOMP_CALL(sub_15048840); /* 0x1505CC64: call 0x15048840 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1505CC69: pop ecx */
L_1505CC6A:
    RECOMP_CALL(sub_15036430); /* 0x1505CC6A: call 0x15036430 */
    RECOMP_FLAGS_IN();
    MEM32(eax) = 0x22u; /* 0x1505CC6F: mov dword ptr [eax], 0x22 */
    RECOMP_BACKEDGE();
    goto L_1505CC22; /* 0x1505CC75: jmp 0x1505cc22 */
L_1505CC77:
    RECOMP_CALL(sub_15036430); /* 0x1505CC77: call 0x15036430 */
    RECOMP_FLAGS_IN();
    ecx = MEM32(ebp + (-0x238)); /* 0x1505CC7C: mov ecx, dword ptr [ebp - 0x238] */
    PUSH32(esp, esi); /* 0x1505CC82: push esi */
    PUSH32(esp, edi); /* 0x1505CC83: push edi */
    edi = MEM32(ebp + (-0x21C)); /* 0x1505CC84: mov edi, dword ptr [ebp - 0x21c] */
    PUSH32(esp, edi); /* 0x1505CC8A: push edi */
    MEM32(eax) = ecx; /* 0x1505CC8B: mov dword ptr [eax], ecx */
    RECOMP_CALL(sub_1508F250); /* 0x1505CC8D: call 0x1508f250 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x1505CC92: add esp, 0xc */
    _flag_k = FK_ADD;
    /* test eax, eax */ /* 0x1505CC95: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1505CCA6; /* 0x1505CC97: je 0x1505cca6 */
L_1505CC99:
    PUSH32(esp, ebx); /* 0x1505CC99: push ebx */
    PUSH32(esp, ebx); /* 0x1505CC9A: push ebx */
    PUSH32(esp, ebx); /* 0x1505CC9B: push ebx */
    PUSH32(esp, ebx); /* 0x1505CC9C: push ebx */
    PUSH32(esp, ebx); /* 0x1505CC9D: push ebx */
    RECOMP_CALL(sub_1505A11B); /* 0x1505CC9E: call 0x1505a11b */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x14u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x14u; /* 0x1505CCA3: add esp, 0x14 */
    _flag_k = FK_ADD;
L_1505CCA6:
    eax = ebp + (-0x214); /* 0x1505CCA6: lea eax, [ebp - 0x214] */
    /* cmp esi, eax */ /* 0x1505CCAC: cmp esi, eax */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1505CC29; /* 0x1505CCAE: je 0x1505cc29 */
L_1505CCB4:
    PUSH32(esp, esi); /* 0x1505CCB4: push esi */
    RECOMP_CALL(sub_15048840); /* 0x1505CCB5: call 0x15048840 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1505CCBA: pop ecx */
    RECOMP_BACKEDGE();
    goto L_1505CC29; /* 0x1505CCBB: jmp 0x1505cc29 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    RECOMP_REGS_OUT();
}

void sub_1505CCD0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1505CCD0u);

L_1505CCD0:
    PUSH32(esp, 0x24u); /* 0x1505CCD0: push 0x24 */
    PUSH32(esp, 0x150B0C68u); /* 0x1505CCD2: push 0x150b0c68 */
    RECOMP_CALL(sub_1505E988); /* 0x1505CCD7: call 0x1505e988 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ebx = 0; /* 0x1505CCDC: xor ebx, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x1C)) = ebx; /* 0x1505CCDE: mov dword ptr [ebp - 0x1c], ebx */
    esi = ebx; /* 0x1505CCE1: mov esi, ebx */
    edi = MEM32(ebp + 0xC); /* 0x1505CCE3: mov edi, dword ptr [ebp + 0xc] */
    /* test edi, edi */ /* 0x1505CCE6: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1505CD83; /* 0x1505CCE8: je 0x1505cd83 */
L_1505CCEE:
    PUSH32(esp, 0x7FFFFFFFu); /* 0x1505CCEE: push 0x7fffffff */
    PUSH32(esp, edi); /* 0x1505CCF3: push edi */
    PUSH32(esp, ebx); /* 0x1505CCF4: push ebx */
    PUSH32(esp, ebx); /* 0x1505CCF5: push ebx */
    eax = ebp + (-0x1C); /* 0x1505CCF6: lea eax, [ebp - 0x1c] */
    PUSH32(esp, eax); /* 0x1505CCF9: push eax */
    RECOMP_CALL(sub_15033C10); /* 0x1505CCFA: call 0x15033c10 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x14u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x14u; /* 0x1505CCFF: add esp, 0x14 */
    _flag_k = FK_ADD;
    /* test eax, eax */ /* 0x1505CD02: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1505CD1D; /* 0x1505CD04: je 0x1505cd1d */
L_1505CD06:
    /* cmp eax, 0x16u */ /* 0x1505CD06: cmp eax, 0x16 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x16u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1505CD10; /* 0x1505CD09: je 0x1505cd10 */
L_1505CD0B:
    /* cmp eax, 0x22u */ /* 0x1505CD0B: cmp eax, 0x22 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x22u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_1505CD1D; /* 0x1505CD0E: jne 0x1505cd1d */
L_1505CD10:
    PUSH32(esp, ebx); /* 0x1505CD10: push ebx */
    PUSH32(esp, ebx); /* 0x1505CD11: push ebx */
    PUSH32(esp, ebx); /* 0x1505CD12: push ebx */
    PUSH32(esp, ebx); /* 0x1505CD13: push ebx */
    PUSH32(esp, ebx); /* 0x1505CD14: push ebx */
    RECOMP_CALL(sub_1505A11B); /* 0x1505CD15: call 0x1505a11b */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x14u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x14u; /* 0x1505CD1A: add esp, 0x14 */
    _flag_k = FK_ADD;
L_1505CD1D:
    /* cmp MEM32(ebp + (-0x1C)), ebx */ /* 0x1505CD1D: cmp dword ptr [ebp - 0x1c], ebx */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x1C))); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1505CD71; /* 0x1505CD20: je 0x1505cd71 */
L_1505CD22:
    PUSH32(esp, 1); /* 0x1505CD22: push 1 */
    PUSH32(esp, MEM32(ebp + (-0x1C))); /* 0x1505CD24: push dword ptr [ebp - 0x1c] */
    RECOMP_CALL(sub_15048EE2); /* 0x1505CD27: call 0x15048ee2 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1505CD2C: pop ecx */
    ecx = POP32_VAL(esp); /* 0x1505CD2D: pop ecx */
    esi = eax; /* 0x1505CD2E: mov esi, eax */
    /* test esi, esi */ /* 0x1505CD30: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1505CD71; /* 0x1505CD32: je 0x1505cd71 */
L_1505CD34:
    _flag_a = (uint32_t)((ebx | 0xFFFFFFFFu)); _flag_b = (uint32_t)((ebx | 0xFFFFFFFFu));
    ebx = ebx | 0xFFFFFFFFu; /* 0x1505CD34: or ebx, 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, ebx); /* 0x1505CD37: push ebx */
    PUSH32(esp, edi); /* 0x1505CD38: push edi */
    PUSH32(esp, MEM32(ebp + (-0x1C))); /* 0x1505CD39: push dword ptr [ebp - 0x1c] */
    PUSH32(esp, esi); /* 0x1505CD3C: push esi */
    PUSH32(esp, 0); /* 0x1505CD3D: push 0 */
    RECOMP_CALL(sub_15033C10); /* 0x1505CD3F: call 0x15033c10 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x14u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x14u; /* 0x1505CD44: add esp, 0x14 */
    _flag_k = FK_ADD;
    edi = eax; /* 0x1505CD47: mov edi, eax */
    /* test edi, edi */ /* 0x1505CD49: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1505CD86; /* 0x1505CD4B: je 0x1505cd86 */
L_1505CD4D:
    /* cmp edi, 0x16u */ /* 0x1505CD4D: cmp edi, 0x16 */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(0x16u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1505CD57; /* 0x1505CD50: je 0x1505cd57 */
L_1505CD52:
    /* cmp edi, 0x22u */ /* 0x1505CD52: cmp edi, 0x22 */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(0x22u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_1505CD66; /* 0x1505CD55: jne 0x1505cd66 */
L_1505CD57:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1505CD57: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, eax); /* 0x1505CD59: push eax */
    PUSH32(esp, eax); /* 0x1505CD5A: push eax */
    PUSH32(esp, eax); /* 0x1505CD5B: push eax */
    PUSH32(esp, eax); /* 0x1505CD5C: push eax */
    PUSH32(esp, eax); /* 0x1505CD5D: push eax */
    RECOMP_CALL(sub_1505A11B); /* 0x1505CD5E: call 0x1505a11b */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x14u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x14u; /* 0x1505CD63: add esp, 0x14 */
    _flag_k = FK_ADD;
L_1505CD66:
    /* test edi, edi */ /* 0x1505CD66: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1505CD86; /* 0x1505CD68: je 0x1505cd86 */
L_1505CD6A:
    PUSH32(esp, esi); /* 0x1505CD6A: push esi */
    RECOMP_CALL(sub_15048840); /* 0x1505CD6B: call 0x15048840 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1505CD70: pop ecx */
L_1505CD71:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1505CD71: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
L_1505CD73:
    ecx = MEM32(ebp + (-0x10)); /* 0x1505CD73: mov ecx, dword ptr [ebp - 0x10] */
    MEM32(FS_BASE + (0)) = ecx; /* 0x1505CD76: mov dword ptr fs:[0], ecx */
    ecx = POP32_VAL(esp); /* 0x1505CD7D: pop ecx */
    edi = POP32_VAL(esp); /* 0x1505CD7E: pop edi */
    esi = POP32_VAL(esp); /* 0x1505CD7F: pop esi */
    ebx = POP32_VAL(esp); /* 0x1505CD80: pop ebx */
    esp = ebp; ebp = POP32_VAL(esp); /* 0x1505CD81: leave  */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1505CD82: ret  */
L_1505CD83:
    _flag_a = (uint32_t)((ebx | 0xFFFFFFFFu)); _flag_b = (uint32_t)((ebx | 0xFFFFFFFFu));
    ebx = ebx | 0xFFFFFFFFu; /* 0x1505CD83: or ebx, 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
L_1505CD86:
    PUSH32(esp, esi); /* 0x1505CD86: push esi */
    edi = MEM32(ebp + 0x8); /* 0x1505CD87: mov edi, dword ptr [ebp + 8] */
    PUSH32(esp, edi); /* 0x1505CD8A: push edi */
    RECOMP_CALL(sub_15058000); /* 0x1505CD8B: call 0x15058000 */
    RECOMP_FLAGS_IN();
    MEM32(ebp + (-0x20)) = eax; /* 0x1505CD90: mov dword ptr [ebp - 0x20], eax */
    PUSH32(esp, esi); /* 0x1505CD93: push esi */
    RECOMP_CALL(sub_15048840); /* 0x1505CD94: call 0x15048840 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x1505CD99: add esp, 0xc */
    _flag_k = FK_ADD;
    esi = MEM32(ebp + (-0x20)); /* 0x1505CD9C: mov esi, dword ptr [ebp - 0x20] */
    /* test esi, esi */ /* 0x1505CD9F: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_Z(_flag_a, _flag_b)) goto L_1505CD71; /* 0x1505CDA1: je 0x1505cd71 */
L_1505CDA3:
    RECOMP_CALL(sub_15068820); /* 0x1505CDA3: call 0x15068820 */
    RECOMP_FLAGS_IN();
    MEM32(ebp + (-0x28)) = eax; /* 0x1505CDA8: mov dword ptr [ebp - 0x28], eax */
    ecx = MEM32(eax + 0x6C); /* 0x1505CDAB: mov ecx, dword ptr [eax + 0x6c] */
    MEM32(ebp + (-0x34)) = ecx; /* 0x1505CDAE: mov dword ptr [ebp - 0x34], ecx */
    ecx = MEM32(eax + 0x68); /* 0x1505CDB1: mov ecx, dword ptr [eax + 0x68] */
    MEM32(ebp + (-0x30)) = ecx; /* 0x1505CDB4: mov dword ptr [ebp - 0x30], ecx */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x1505CDB7: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x1C)) = ecx; /* 0x1505CDB9: mov dword ptr [ebp - 0x1c], ecx */
    eax = ebp + (-0x34); /* 0x1505CDBC: lea eax, [ebp - 0x34] */
    PUSH32(esp, eax); /* 0x1505CDBF: push eax */
    PUSH32(esp, ecx); /* 0x1505CDC0: push ecx */
    PUSH32(esp, esi); /* 0x1505CDC1: push esi */
    PUSH32(esp, ecx); /* 0x1505CDC2: push ecx */
    PUSH32(esp, ecx); /* 0x1505CDC3: push ecx */
    eax = ebp + (-0x1C); /* 0x1505CDC4: lea eax, [ebp - 0x1c] */
    PUSH32(esp, eax); /* 0x1505CDC7: push eax */
    RECOMP_CALL(sub_15031C60); /* 0x1505CDC8: call 0x15031c60 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x18u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x18u; /* 0x1505CDCD: add esp, 0x18 */
    _flag_k = FK_ADD;
    esi = eax; /* 0x1505CDD0: mov esi, eax */
    /* test esi, esi */ /* 0x1505CDD2: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1505CDF7; /* 0x1505CDD4: je 0x1505cdf7 */
L_1505CDD6:
    /* cmp esi, 0x16u */ /* 0x1505CDD6: cmp esi, 0x16 */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(0x16u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1505CDE0; /* 0x1505CDD9: je 0x1505cde0 */
L_1505CDDB:
    /* cmp esi, 0x22u */ /* 0x1505CDDB: cmp esi, 0x22 */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(0x22u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_1505CDEF; /* 0x1505CDDE: jne 0x1505cdef */
L_1505CDE0:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1505CDE0: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, eax); /* 0x1505CDE2: push eax */
    PUSH32(esp, eax); /* 0x1505CDE3: push eax */
    PUSH32(esp, eax); /* 0x1505CDE4: push eax */
    PUSH32(esp, eax); /* 0x1505CDE5: push eax */
    PUSH32(esp, eax); /* 0x1505CDE6: push eax */
    RECOMP_CALL(sub_1505A11B); /* 0x1505CDE7: call 0x1505a11b */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x14u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x14u; /* 0x1505CDEC: add esp, 0x14 */
    _flag_k = FK_ADD;
L_1505CDEF:
    /* test esi, esi */ /* 0x1505CDEF: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1505CD71; /* 0x1505CDF1: jne 0x1505cd71 */
L_1505CDF7:
    eax = MEM32(ebp + (-0x1C)); /* 0x1505CDF7: mov eax, dword ptr [ebp - 0x1c] */
    /* cmp eax, 0x7FFFFFEEu */ /* 0x1505CDFA: cmp eax, 0x7fffffee */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x7FFFFFEEu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_A(_flag_a, _flag_b)) goto L_1505CD71; /* 0x1505CDFF: ja 0x1505cd71 */
L_1505CE05:
    eax = eax * 2 + 0x4; /* 0x1505CE05: lea eax, [eax*2 + 4] */
    PUSH32(esp, eax); /* 0x1505CE0C: push eax */
    RECOMP_CALL(sub_15048F2F); /* 0x1505CE0D: call 0x15048f2f */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1505CE12: pop ecx */
    esi = eax; /* 0x1505CE13: mov esi, eax */
    MEM32(ebp + (-0x2C)) = esi; /* 0x1505CE15: mov dword ptr [ebp - 0x2c], esi */
    /* test esi, esi */ /* 0x1505CE18: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_Z(_flag_a, _flag_b)) goto L_1505CD71; /* 0x1505CE1A: je 0x1505cd71 */
L_1505CE20:
    eax = esi + 0x4; /* 0x1505CE20: lea eax, [esi + 4] */
    MEM32(ebp + (-0x24)) = eax; /* 0x1505CE23: mov dword ptr [ebp - 0x24], eax */
    ecx = ebp + (-0x34); /* 0x1505CE26: lea ecx, [ebp - 0x34] */
    PUSH32(esp, ecx); /* 0x1505CE29: push ecx */
    PUSH32(esp, ebx); /* 0x1505CE2A: push ebx */
    PUSH32(esp, MEM32(ebp + (-0x20))); /* 0x1505CE2B: push dword ptr [ebp - 0x20] */
    PUSH32(esp, MEM32(ebp + (-0x1C))); /* 0x1505CE2E: push dword ptr [ebp - 0x1c] */
    PUSH32(esp, eax); /* 0x1505CE31: push eax */
    PUSH32(esp, 0); /* 0x1505CE32: push 0 */
    RECOMP_CALL(sub_15031C60); /* 0x1505CE34: call 0x15031c60 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x18u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x18u; /* 0x1505CE39: add esp, 0x18 */
    _flag_k = FK_ADD;
    MEM32(ebp + (-0x20)) = eax; /* 0x1505CE3C: mov dword ptr [ebp - 0x20], eax */
    /* test eax, eax */ /* 0x1505CE3F: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1505CE67; /* 0x1505CE41: je 0x1505ce67 */
L_1505CE43:
    /* cmp eax, 0x16u */ /* 0x1505CE43: cmp eax, 0x16 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x16u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1505CE4D; /* 0x1505CE46: je 0x1505ce4d */
L_1505CE48:
    /* cmp eax, 0x22u */ /* 0x1505CE48: cmp eax, 0x22 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x22u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_1505CE5F; /* 0x1505CE4B: jne 0x1505ce5f */
L_1505CE4D:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1505CE4D: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, eax); /* 0x1505CE4F: push eax */
    PUSH32(esp, eax); /* 0x1505CE50: push eax */
    PUSH32(esp, eax); /* 0x1505CE51: push eax */
    PUSH32(esp, eax); /* 0x1505CE52: push eax */
    PUSH32(esp, eax); /* 0x1505CE53: push eax */
    RECOMP_CALL(sub_1505A11B); /* 0x1505CE54: call 0x1505a11b */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x14u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x14u; /* 0x1505CE59: add esp, 0x14 */
    _flag_k = FK_ADD;
    eax = MEM32(ebp + (-0x20)); /* 0x1505CE5C: mov eax, dword ptr [ebp - 0x20] */
L_1505CE5F:
    /* test eax, eax */ /* 0x1505CE5F: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1505CD6A; /* 0x1505CE61: jne 0x1505cd6a */
L_1505CE67:
    esi = MEM32(ebp + (-0x34)); /* 0x1505CE67: mov esi, dword ptr [ebp - 0x34] */
    PUSH32(esp, 0xCu); /* 0x1505CE6A: push 0xc */
    RECOMP_CALL(sub_15068D80); /* 0x1505CE6C: call 0x15068d80 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1505CE71: pop ecx */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x4))); _flag_b = (uint32_t)(0);
    MEM32(ebp + (-0x4)) = MEM32(ebp + (-0x4)) & 0; /* 0x1505CE72: and dword ptr [ebp - 4], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edi = edi + edi; /* 0x1505CE76: add edi, edi */
    _flag_k = FK_ADD;
    ecx = MEM32(esi + edi * 8 + 0x54); /* 0x1505CE78: mov ecx, dword ptr [esi + edi*8 + 0x54] */
    /* test ecx, ecx */ /* 0x1505CE7C: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1505CE92; /* 0x1505CE7E: je 0x1505ce92 */
L_1505CE80:
    eax = ebx; /* 0x1505CE80: mov eax, ebx */
    _flag_a = (uint32_t)(MEM32(ecx)); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    { uint32_t _old = MEM32(ecx), _sum = MEM32(ecx) + eax; eax = _old; MEM32(ecx) = _sum; } /* 0x1505CE82: lock xadd dword ptr [ecx], eax */
    _flag_k = FK_ADD;
    if (/* add result */ recomp_cond(_flag_k, _flag_a, _flag_b, CC_NE)) goto L_1505CE92; /* 0x1505CE86: jne 0x1505ce92 */
L_1505CE88:
    PUSH32(esp, MEM32(esi + edi * 8 + 0x54)); /* 0x1505CE88: push dword ptr [esi + edi*8 + 0x54] */
    RECOMP_CALL(sub_15048840); /* 0x1505CE8C: call 0x15048840 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1505CE91: pop ecx */
L_1505CE92:
    eax = MEM32(ebp + (-0x28)); /* 0x1505CE92: mov eax, dword ptr [ebp - 0x28] */
    /* test MEM8(eax + 0x70), 2 */ /* 0x1505CE95: test byte ptr [eax + 0x70], 2 */
    _flag_a = (uint32_t)(MEM8(eax + 0x70)) << 24; _flag_b = (uint32_t)(2) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1505CEBD; /* 0x1505CE99: jne 0x1505cebd */
L_1505CE9B:
    /* test MEM8(0x150BD32C), 1 */ /* 0x1505CE9B: test byte ptr [0x150bd32c], 1 */
    _flag_a = (uint32_t)(MEM8(0x150BD32C)) << 24; _flag_b = (uint32_t)(1) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1505CEBD; /* 0x1505CEA2: jne 0x1505cebd */
L_1505CEA4:
    eax = MEM32(esi + edi * 8 + 0x54); /* 0x1505CEA4: mov eax, dword ptr [esi + edi*8 + 0x54] */
    /* test eax, eax */ /* 0x1505CEA8: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1505CEBD; /* 0x1505CEAA: je 0x1505cebd */
L_1505CEAC:
    _flag_a = (uint32_t)(MEM32(eax)); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    { uint32_t _old = MEM32(eax), _sum = MEM32(eax) + ebx; ebx = _old; MEM32(eax) = _sum; } /* 0x1505CEAC: lock xadd dword ptr [eax], ebx */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(1);
    ebx = ebx - 1; /* 0x1505CEB0: dec ebx */
    _flag_k = FK_DEC;
    if (/* dec result */ CMP_NE(_flag_a, _flag_b)) goto L_1505CEBD; /* 0x1505CEB1: jne 0x1505cebd */
L_1505CEB3:
    PUSH32(esp, MEM32(esi + edi * 8 + 0x54)); /* 0x1505CEB3: push dword ptr [esi + edi*8 + 0x54] */
    RECOMP_CALL(sub_15048840); /* 0x1505CEB7: call 0x15048840 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1505CEBC: pop ecx */
L_1505CEBD:
    eax = MEM32(esi); /* 0x1505CEBD: mov eax, dword ptr [esi] */
    ecx = MEM32(ebp + (-0x2C)); /* 0x1505CEBF: mov ecx, dword ptr [ebp - 0x2c] */
    MEM32(ecx) = eax; /* 0x1505CEC2: mov dword ptr [ecx], eax */
    MEM32(esi + edi * 8 + 0x54) = ecx; /* 0x1505CEC4: mov dword ptr [esi + edi*8 + 0x54], ecx */
    ebx = MEM32(ebp + (-0x24)); /* 0x1505CEC8: mov ebx, dword ptr [ebp - 0x24] */
    MEM32(esi + edi * 8 + 0x4C) = ebx; /* 0x1505CECB: mov dword ptr [esi + edi*8 + 0x4c], ebx */
    MEM32(ebp + (-0x4)) = 0xFFFFFFFEu; /* 0x1505CECF: mov dword ptr [ebp - 4], 0xfffffffe */
    RECOMP_CALL(sub_1505CEE5); /* 0x1505CED6: call 0x1505cee5 */
    RECOMP_FLAGS_IN();
    eax = ebx; /* 0x1505CEDB: mov eax, ebx */
    RECOMP_BACKEDGE();
    goto L_1505CD73; /* 0x1505CEDD: jmp 0x1505cd73 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    RECOMP_REGS_OUT();
}

void sub_1505CEE5(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1505CEE5u);

L_1505CEE5:
    PUSH32(esp, 0xCu); /* 0x1505CEE5: push 0xc */
    RECOMP_CALL(sub_15068F50); /* 0x1505CEE7: call 0x15068f50 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1505CEEC: pop ecx */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1505CEED: ret  */
    RECOMP_REGS_OUT();
}

void sub_1505CF00(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1505CF00u);

L_1505CF00:
    edi = edi; /* 0x1505CF00: mov edi, edi */
    PUSH32(esp, ebp); /* 0x1505CF02: push ebp */
    ebp = esp; /* 0x1505CF03: mov ebp, esp */
    eax = MEM32(ebp + 0x18); /* 0x1505CF05: mov eax, dword ptr [ebp + 0x18] */
    ecx = 0x100u; /* 0x1505CF08: mov ecx, 0x100 */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(eax);
    _cf = (eax) != 0;
    eax = (uint32_t)(-(int32_t)eax); /* 0x1505CF0D: neg eax */
    _flag_k = FK_CMP;
    { uint32_t _sa = eax, _sb = eax, _sc = (uint32_t)CMP_B(_flag_a, _flag_b); /* 0x1505CF0F: sbb eax, eax */
      eax = _sc ? 0xFFFFFFFFu : 0;
      _flag_a = recomp_flags_sbb(_sa, _sb, _sc); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ecx);
    eax = eax & ecx; /* 0x1505CF11: and eax, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, eax); /* 0x1505CF13: push eax */
    PUSH32(esp, MEM32(ebp + 0x18)); /* 0x1505CF14: push dword ptr [ebp + 0x18] */
    eax = MEM32(ebp + 0x14); /* 0x1505CF17: mov eax, dword ptr [ebp + 0x14] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(eax);
    _cf = (eax) != 0;
    eax = (uint32_t)(-(int32_t)eax); /* 0x1505CF1A: neg eax */
    _flag_k = FK_CMP;
    { uint32_t _sa = eax, _sb = eax, _sc = (uint32_t)CMP_B(_flag_a, _flag_b); /* 0x1505CF1C: sbb eax, eax */
      eax = _sc ? 0xFFFFFFFFu : 0;
      _flag_a = recomp_flags_sbb(_sa, _sb, _sc); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ecx);
    eax = eax & ecx; /* 0x1505CF1E: and eax, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, eax); /* 0x1505CF20: push eax */
    eax = MEM32(ebp + 0x10); /* 0x1505CF21: mov eax, dword ptr [ebp + 0x10] */
    PUSH32(esp, MEM32(ebp + 0x14)); /* 0x1505CF24: push dword ptr [ebp + 0x14] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(eax);
    _cf = (eax) != 0;
    eax = (uint32_t)(-(int32_t)eax); /* 0x1505CF27: neg eax */
    _flag_k = FK_CMP;
    { uint32_t _sa = eax, _sb = eax, _sc = (uint32_t)CMP_B(_flag_a, _flag_b); /* 0x1505CF29: sbb eax, eax */
      eax = _sc ? 0xFFFFFFFFu : 0;
      _flag_a = recomp_flags_sbb(_sa, _sb, _sc); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ecx);
    eax = eax & ecx; /* 0x1505CF2B: and eax, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, eax); /* 0x1505CF2D: push eax */
    eax = MEM32(ebp + 0xC); /* 0x1505CF2E: mov eax, dword ptr [ebp + 0xc] */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x1505CF31: push dword ptr [ebp + 0x10] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(eax);
    _cf = (eax) != 0;
    eax = (uint32_t)(-(int32_t)eax); /* 0x1505CF34: neg eax */
    _flag_k = FK_CMP;
    { uint32_t _sa = eax, _sb = eax, _sc = (uint32_t)CMP_B(_flag_a, _flag_b); /* 0x1505CF36: sbb eax, eax */
      eax = _sc ? 0xFFFFFFFFu : 0;
      _flag_a = recomp_flags_sbb(_sa, _sb, _sc); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(3);
    eax = eax & 3; /* 0x1505CF38: and eax, 3 */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, eax); /* 0x1505CF3B: push eax */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x1505CF3C: push dword ptr [ebp + 0xc] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x1505CF3F: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_1505CF52); /* 0x1505CF42: call 0x1505cf52 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x24u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x24u; /* 0x1505CF47: add esp, 0x24 */
    _flag_k = FK_ADD;
    ebp = POP32_VAL(esp); /* 0x1505CF4A: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1505CF4B: ret  */
    RECOMP_REGS_OUT();
}

void sub_1505CF52(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1505CF52u);

L_1505CF52:
    edi = edi; /* 0x1505CF52: mov edi, edi */
    PUSH32(esp, ebp); /* 0x1505CF54: push ebp */
    ebp = esp; /* 0x1505CF55: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0xCu; /* 0x1505CF57: sub esp, 0xc */
    _flag_k = FK_CMP;
    ecx = MEM32(ebp + 0x10); /* 0x1505CF5A: mov ecx, dword ptr [ebp + 0x10] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1505CF5D: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    edx = MEM32(ebp + 0xC); /* 0x1505CF5F: mov edx, dword ptr [ebp + 0xc] */
    PUSH32(esp, ebx); /* 0x1505CF62: push ebx */
    ebx = MEM32(ebp + 0x24); /* 0x1505CF63: mov ebx, dword ptr [ebp + 0x24] */
    PUSH32(esp, esi); /* 0x1505CF66: push esi */
    esi = MEM32(ebp + 0x18); /* 0x1505CF67: mov esi, dword ptr [ebp + 0x18] */
    PUSH32(esp, edi); /* 0x1505CF6A: push edi */
    edi = MEM32(ebp + 0x8); /* 0x1505CF6B: mov edi, dword ptr [ebp + 8] */
    MEM32(ebp + (-0xC)) = eax; /* 0x1505CF6E: mov dword ptr [ebp - 0xc], eax */
    eax = MEM32(ebp + 0x20); /* 0x1505CF71: mov eax, dword ptr [ebp + 0x20] */
    /* test edi, edi */ /* 0x1505CF74: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1505CF80; /* 0x1505CF76: je 0x1505cf80 */
L_1505CF78:
    /* test edx, edx */ /* 0x1505CF78: test edx, edx */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(edx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1505CF8F; /* 0x1505CF7A: jne 0x1505cf8f */
L_1505CF7C:
    /* test ecx, ecx */ /* 0x1505CF7C: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1505CF93; /* 0x1505CF7E: je 0x1505cf93 */
L_1505CF80:
    ecx = MEM32(ebp + 0x1C); /* 0x1505CF80: mov ecx, dword ptr [ebp + 0x1c] */
L_1505CF83:
    MEM32(ebp + (-0xC)) = 1; /* 0x1505CF83: mov dword ptr [ebp - 0xc], 1 */
    goto L_1505D0FA; /* 0x1505CF8A: jmp 0x1505d0fa */
L_1505CF8F:
    /* test ecx, ecx */ /* 0x1505CF8F: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_Z(_flag_a, _flag_b)) goto L_1505CF80; /* 0x1505CF91: je 0x1505cf80 */
L_1505CF93:
    /* cmp MEM32(ebp + 0x14), 0 */ /* 0x1505CF93: cmp dword ptr [ebp + 0x14], 0 */
    _flag_a = (uint32_t)(MEM32(ebp + 0x14)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_1505CF9F; /* 0x1505CF97: jne 0x1505cf9f */
L_1505CF99:
    /* test esi, esi */ /* 0x1505CF99: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1505CF80; /* 0x1505CF9B: jne 0x1505cf80 */
L_1505CF9D:
    goto L_1505CFA3; /* 0x1505CF9D: jmp 0x1505cfa3 */
L_1505CF9F:
    /* test esi, esi */ /* 0x1505CF9F: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_Z(_flag_a, _flag_b)) goto L_1505CF80; /* 0x1505CFA1: je 0x1505cf80 */
L_1505CFA3:
    ecx = MEM32(ebp + 0x1C); /* 0x1505CFA3: mov ecx, dword ptr [ebp + 0x1c] */
    /* test ecx, ecx */ /* 0x1505CFA6: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1505CFB0; /* 0x1505CFA8: jne 0x1505cfb0 */
L_1505CFAA:
    /* test eax, eax */ /* 0x1505CFAA: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1505CF83; /* 0x1505CFAC: jne 0x1505cf83 */
L_1505CFAE:
    goto L_1505CFB4; /* 0x1505CFAE: jmp 0x1505cfb4 */
L_1505CFB0:
    /* test eax, eax */ /* 0x1505CFB0: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_Z(_flag_a, _flag_b)) goto L_1505CF83; /* 0x1505CFB2: je 0x1505cf83 */
L_1505CFB4:
    /* test ebx, ebx */ /* 0x1505CFB4: test ebx, ebx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ebx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1505CFBF; /* 0x1505CFB6: jne 0x1505cfbf */
L_1505CFB8:
    /* cmp MEM32(ebp + 0x28), ebx */ /* 0x1505CFB8: cmp dword ptr [ebp + 0x28], ebx */
    _flag_a = (uint32_t)(MEM32(ebp + 0x28)); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_NE(_flag_a, _flag_b)) goto L_1505CF83; /* 0x1505CFBB: jne 0x1505cf83 */
L_1505CFBD:
    goto L_1505CFC5; /* 0x1505CFBD: jmp 0x1505cfc5 */
L_1505CFBF:
    /* cmp MEM32(ebp + 0x28), 0 */ /* 0x1505CFBF: cmp dword ptr [ebp + 0x28], 0 */
    _flag_a = (uint32_t)(MEM32(ebp + 0x28)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1505CF83; /* 0x1505CFC3: je 0x1505cf83 */
L_1505CFC5:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1505CFC5: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    esi = edi; /* 0x1505CFC7: mov esi, edi */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x1505CFC9: inc eax */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ebx = 0; /* 0x1505CFCA: xor ebx, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
L_1505CFCC:
    /* cmp MEM16(esi), LO16(ebx) */ /* 0x1505CFCC: cmp word ptr [esi], bx */
    _flag_a = (uint32_t)(MEM16(esi)) << 16; _flag_b = (uint32_t)(LO16(ebx)) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1505CFD9; /* 0x1505CFCF: je 0x1505cfd9 */
L_1505CFD1:
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esi = esi + 2; /* 0x1505CFD1: add esi, 2 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - 1; /* 0x1505CFD4: sub eax, 1 */
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (/* sub result */ CMP_NE(_flag_a, _flag_b)) goto L_1505CFCC; /* 0x1505CFD7: jne 0x1505cfcc */
L_1505CFD9:
    /* cmp MEM16(esi), 0x3Au */ /* 0x1505CFD9: cmp word ptr [esi], 0x3a */
    _flag_a = (uint32_t)(MEM16(esi)) << 16; _flag_b = (uint32_t)(0x3Au) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    ebx = MEM32(ebp + 0x24); /* 0x1505CFDD: mov ebx, dword ptr [ebp + 0x24] */
    if (CMP_NE(_flag_a, _flag_b)) goto L_1505D003; /* 0x1505CFE0: jne 0x1505d003 */
L_1505CFE2:
    /* test edx, edx */ /* 0x1505CFE2: test edx, edx */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(edx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1505CFFE; /* 0x1505CFE4: je 0x1505cffe */
L_1505CFE6:
    /* cmp MEM32(ebp + 0x10), 3 */ /* 0x1505CFE6: cmp dword ptr [ebp + 0x10], 3 */
    _flag_a = (uint32_t)(MEM32(ebp + 0x10)); _flag_b = (uint32_t)(3);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_B(_flag_a, _flag_b)) goto L_1505D0FE; /* 0x1505CFEA: jb 0x1505d0fe */
L_1505CFF0:
    PUSH32(esp, 2); /* 0x1505CFF0: push 2 */
    PUSH32(esp, edi); /* 0x1505CFF2: push edi */
    PUSH32(esp, 0xFFFFFFFFu); /* 0x1505CFF3: push -1 */
    PUSH32(esp, edx); /* 0x1505CFF5: push edx */
    RECOMP_CALL(sub_1508F590); /* 0x1505CFF6: call 0x1508f590 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x10u; /* 0x1505CFFB: add esp, 0x10 */
    _flag_k = FK_ADD;
L_1505CFFE:
    edi = esi + 0x2; /* 0x1505CFFE: lea edi, [esi + 2] */
    goto L_1505D00C; /* 0x1505D001: jmp 0x1505d00c */
L_1505D003:
    /* test edx, edx */ /* 0x1505D003: test edx, edx */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(edx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1505D00C; /* 0x1505D005: je 0x1505d00c */
L_1505D007:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1505D007: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM16(edx) = (uint16_t)(LO16(eax)); /* 0x1505D009: mov word ptr [edx], ax */
L_1505D00C:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1505D00C: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    esi = edi; /* 0x1505D00E: mov esi, edi */
    edx = eax; /* 0x1505D010: mov edx, eax */
    MEM32(ebp + (-0x4)) = eax; /* 0x1505D012: mov dword ptr [ebp - 4], eax */
    eax = (uint32_t)MEM16(edi); /* 0x1505D015: movzx eax, word ptr [edi] */
    /* test LO16(eax), LO16(eax) */ /* 0x1505D018: test ax, ax */
    _flag_a = (uint32_t)(LO16(eax)) << 16; _flag_b = (uint32_t)(LO16(eax)) << 16;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 16);
    if (TEST_Z(_flag_a, _flag_b)) goto L_1505D077; /* 0x1505D01B: je 0x1505d077 */
L_1505D01D:
    ecx = eax; /* 0x1505D01D: mov ecx, eax */
L_1505D01F:
    /* cmp LO16(ecx), 0x2Fu */ /* 0x1505D01F: cmp cx, 0x2f */
    _flag_a = (uint32_t)(LO16(ecx)) << 16; _flag_b = (uint32_t)(0x2Fu) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1505D036; /* 0x1505D023: je 0x1505d036 */
L_1505D025:
    /* cmp LO16(ecx), 0x5Cu */ /* 0x1505D025: cmp cx, 0x5c */
    _flag_a = (uint32_t)(LO16(ecx)) << 16; _flag_b = (uint32_t)(0x5Cu) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1505D036; /* 0x1505D029: je 0x1505d036 */
L_1505D02B:
    /* cmp LO16(ecx), 0x2Eu */ /* 0x1505D02B: cmp cx, 0x2e */
    _flag_a = (uint32_t)(LO16(ecx)) << 16; _flag_b = (uint32_t)(0x2Eu) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    if (CMP_NE(_flag_a, _flag_b)) goto L_1505D039; /* 0x1505D02F: jne 0x1505d039 */
L_1505D031:
    MEM32(ebp + (-0x4)) = esi; /* 0x1505D031: mov dword ptr [ebp - 4], esi */
    goto L_1505D039; /* 0x1505D034: jmp 0x1505d039 */
L_1505D036:
    edx = esi + 0x2; /* 0x1505D036: lea edx, [esi + 2] */
L_1505D039:
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esi = esi + 2; /* 0x1505D039: add esi, 2 */
    _flag_k = FK_ADD;
    eax = (uint32_t)MEM16(esi); /* 0x1505D03C: movzx eax, word ptr [esi] */
    ecx = eax; /* 0x1505D03F: mov ecx, eax */
    /* test LO16(eax), LO16(eax) */ /* 0x1505D041: test ax, ax */
    _flag_a = (uint32_t)(LO16(eax)) << 16; _flag_b = (uint32_t)(LO16(eax)) << 16;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 16);
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1505D01F; /* 0x1505D044: jne 0x1505d01f */
L_1505D046:
    MEM32(ebp + (-0x8)) = edx; /* 0x1505D046: mov dword ptr [ebp - 8], edx */
    /* test edx, edx */ /* 0x1505D049: test edx, edx */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(edx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1505D077; /* 0x1505D04B: je 0x1505d077 */
L_1505D04D:
    ecx = MEM32(ebp + 0x14); /* 0x1505D04D: mov ecx, dword ptr [ebp + 0x14] */
    /* test ecx, ecx */ /* 0x1505D050: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1505D073; /* 0x1505D052: je 0x1505d073 */
L_1505D054:
    eax = edx; /* 0x1505D054: mov eax, edx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - edi; /* 0x1505D056: sub eax, edi */
    _flag_k = FK_CMP;
    if (1u) _cf = (((eax) >> 0) & 1u); /* 0x1505D058: sar eax, 1 */
    if (1u) { _flag_a = recomp_flags_pack(((uint32_t)((int32_t)eax >> 1u)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = (uint32_t)((int32_t)eax >> 1u);
    /* cmp MEM32(ebp + 0x18), eax */ /* 0x1505D05A: cmp dword ptr [ebp + 0x18], eax */
    _flag_a = (uint32_t)(MEM32(ebp + 0x18)); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_1505D0F4; /* 0x1505D05D: jbe 0x1505d0f4 */
L_1505D063:
    PUSH32(esp, eax); /* 0x1505D063: push eax */
    PUSH32(esp, edi); /* 0x1505D064: push edi */
    PUSH32(esp, 0xFFFFFFFFu); /* 0x1505D065: push -1 */
    PUSH32(esp, ecx); /* 0x1505D067: push ecx */
    RECOMP_CALL(sub_1508F590); /* 0x1505D068: call 0x1508f590 */
    RECOMP_FLAGS_IN();
    edx = MEM32(ebp + (-0x8)); /* 0x1505D06D: mov edx, dword ptr [ebp - 8] */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x10u; /* 0x1505D070: add esp, 0x10 */
    _flag_k = FK_ADD;
L_1505D073:
    edi = edx; /* 0x1505D073: mov edi, edx */
    goto L_1505D083; /* 0x1505D075: jmp 0x1505d083 */
L_1505D077:
    ecx = MEM32(ebp + 0x14); /* 0x1505D077: mov ecx, dword ptr [ebp + 0x14] */
    /* test ecx, ecx */ /* 0x1505D07A: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1505D083; /* 0x1505D07C: je 0x1505d083 */
L_1505D07E:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1505D07E: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM16(ecx) = (uint16_t)(LO16(eax)); /* 0x1505D080: mov word ptr [ecx], ax */
L_1505D083:
    eax = MEM32(ebp + (-0x4)); /* 0x1505D083: mov eax, dword ptr [ebp - 4] */
    /* test eax, eax */ /* 0x1505D086: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1505D0CA; /* 0x1505D088: je 0x1505d0ca */
L_1505D08A:
    /* cmp eax, edi */ /* 0x1505D08A: cmp eax, edi */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_B(_flag_a, _flag_b)) goto L_1505D0CA; /* 0x1505D08C: jb 0x1505d0ca */
L_1505D08E:
    ecx = MEM32(ebp + 0x1C); /* 0x1505D08E: mov ecx, dword ptr [ebp + 0x1c] */
    /* test ecx, ecx */ /* 0x1505D091: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1505D0AE; /* 0x1505D093: je 0x1505d0ae */
L_1505D095:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - edi; /* 0x1505D095: sub eax, edi */
    _flag_k = FK_CMP;
    if (1u) _cf = (((eax) >> 0) & 1u); /* 0x1505D097: sar eax, 1 */
    if (1u) { _flag_a = recomp_flags_pack(((uint32_t)((int32_t)eax >> 1u)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = (uint32_t)((int32_t)eax >> 1u);
    /* cmp MEM32(ebp + 0x20), eax */ /* 0x1505D099: cmp dword ptr [ebp + 0x20], eax */
    _flag_a = (uint32_t)(MEM32(ebp + 0x20)); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_1505D0F7; /* 0x1505D09C: jbe 0x1505d0f7 */
L_1505D09E:
    PUSH32(esp, eax); /* 0x1505D09E: push eax */
    PUSH32(esp, edi); /* 0x1505D09F: push edi */
    PUSH32(esp, 0xFFFFFFFFu); /* 0x1505D0A0: push -1 */
    PUSH32(esp, ecx); /* 0x1505D0A2: push ecx */
    RECOMP_CALL(sub_1508F590); /* 0x1505D0A3: call 0x1508f590 */
    RECOMP_FLAGS_IN();
    eax = MEM32(ebp + (-0x4)); /* 0x1505D0A8: mov eax, dword ptr [ebp - 4] */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x10u; /* 0x1505D0AB: add esp, 0x10 */
    _flag_k = FK_ADD;
L_1505D0AE:
    /* test ebx, ebx */ /* 0x1505D0AE: test ebx, ebx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ebx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1505D0F0; /* 0x1505D0B0: je 0x1505d0f0 */
L_1505D0B2:
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esi = esi - eax; /* 0x1505D0B2: sub esi, eax */
    _flag_k = FK_CMP;
    if (1u) _cf = (((esi) >> 0) & 1u); /* 0x1505D0B4: sar esi, 1 */
    if (1u) { _flag_a = recomp_flags_pack(((uint32_t)((int32_t)esi >> 1u)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    esi = (uint32_t)((int32_t)esi >> 1u);
    /* cmp MEM32(ebp + 0x28), esi */ /* 0x1505D0B6: cmp dword ptr [ebp + 0x28], esi */
    _flag_a = (uint32_t)(MEM32(ebp + 0x28)); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_1505D0F4; /* 0x1505D0B9: jbe 0x1505d0f4 */
L_1505D0BB:
    PUSH32(esp, esi); /* 0x1505D0BB: push esi */
    PUSH32(esp, eax); /* 0x1505D0BC: push eax */
    PUSH32(esp, 0xFFFFFFFFu); /* 0x1505D0BD: push -1 */
    PUSH32(esp, ebx); /* 0x1505D0BF: push ebx */
    RECOMP_CALL(sub_1508F590); /* 0x1505D0C0: call 0x1508f590 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x10u; /* 0x1505D0C5: add esp, 0x10 */
    _flag_k = FK_ADD;
    goto L_1505D0F0; /* 0x1505D0C8: jmp 0x1505d0f0 */
L_1505D0CA:
    ecx = MEM32(ebp + 0x1C); /* 0x1505D0CA: mov ecx, dword ptr [ebp + 0x1c] */
    /* test ecx, ecx */ /* 0x1505D0CD: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1505D0E7; /* 0x1505D0CF: je 0x1505d0e7 */
L_1505D0D1:
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esi = esi - edi; /* 0x1505D0D1: sub esi, edi */
    _flag_k = FK_CMP;
    if (1u) _cf = (((esi) >> 0) & 1u); /* 0x1505D0D3: sar esi, 1 */
    if (1u) { _flag_a = recomp_flags_pack(((uint32_t)((int32_t)esi >> 1u)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    esi = (uint32_t)((int32_t)esi >> 1u);
    /* cmp MEM32(ebp + 0x20), esi */ /* 0x1505D0D5: cmp dword ptr [ebp + 0x20], esi */
    _flag_a = (uint32_t)(MEM32(ebp + 0x20)); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_1505D0F7; /* 0x1505D0D8: jbe 0x1505d0f7 */
L_1505D0DA:
    PUSH32(esp, esi); /* 0x1505D0DA: push esi */
    PUSH32(esp, edi); /* 0x1505D0DB: push edi */
    PUSH32(esp, 0xFFFFFFFFu); /* 0x1505D0DC: push -1 */
    PUSH32(esp, ecx); /* 0x1505D0DE: push ecx */
    RECOMP_CALL(sub_1508F590); /* 0x1505D0DF: call 0x1508f590 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x10u; /* 0x1505D0E4: add esp, 0x10 */
    _flag_k = FK_ADD;
L_1505D0E7:
    /* test ebx, ebx */ /* 0x1505D0E7: test ebx, ebx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ebx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1505D0F0; /* 0x1505D0E9: je 0x1505d0f0 */
L_1505D0EB:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1505D0EB: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM16(ebx) = (uint16_t)(LO16(eax)); /* 0x1505D0ED: mov word ptr [ebx], ax */
L_1505D0F0:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1505D0F0: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_1505D167; /* 0x1505D0F2: jmp 0x1505d167 */
L_1505D0F4:
    ecx = MEM32(ebp + 0x1C); /* 0x1505D0F4: mov ecx, dword ptr [ebp + 0x1c] */
L_1505D0F7:
    edx = MEM32(ebp + 0xC); /* 0x1505D0F7: mov edx, dword ptr [ebp + 0xc] */
L_1505D0FA:
    /* test edx, edx */ /* 0x1505D0FA: test edx, edx */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(edx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1505D109; /* 0x1505D0FC: je 0x1505d109 */
L_1505D0FE:
    /* cmp MEM32(ebp + 0x10), 0 */ /* 0x1505D0FE: cmp dword ptr [ebp + 0x10], 0 */
    _flag_a = (uint32_t)(MEM32(ebp + 0x10)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_1505D109; /* 0x1505D102: jbe 0x1505d109 */
L_1505D104:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1505D104: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM16(edx) = (uint16_t)(LO16(eax)); /* 0x1505D106: mov word ptr [edx], ax */
L_1505D109:
    eax = MEM32(ebp + 0x14); /* 0x1505D109: mov eax, dword ptr [ebp + 0x14] */
    /* test eax, eax */ /* 0x1505D10C: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1505D11B; /* 0x1505D10E: je 0x1505d11b */
L_1505D110:
    /* cmp MEM32(ebp + 0x18), 0 */ /* 0x1505D110: cmp dword ptr [ebp + 0x18], 0 */
    _flag_a = (uint32_t)(MEM32(ebp + 0x18)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_1505D11B; /* 0x1505D114: jbe 0x1505d11b */
L_1505D116:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edx = 0; /* 0x1505D116: xor edx, edx */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM16(eax) = (uint16_t)(LO16(edx)); /* 0x1505D118: mov word ptr [eax], dx */
L_1505D11B:
    /* test ecx, ecx */ /* 0x1505D11B: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1505D12A; /* 0x1505D11D: je 0x1505d12a */
L_1505D11F:
    /* cmp MEM32(ebp + 0x20), 0 */ /* 0x1505D11F: cmp dword ptr [ebp + 0x20], 0 */
    _flag_a = (uint32_t)(MEM32(ebp + 0x20)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_1505D12A; /* 0x1505D123: jbe 0x1505d12a */
L_1505D125:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1505D125: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM16(ecx) = (uint16_t)(LO16(eax)); /* 0x1505D127: mov word ptr [ecx], ax */
L_1505D12A:
    /* test ebx, ebx */ /* 0x1505D12A: test ebx, ebx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ebx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1505D139; /* 0x1505D12C: je 0x1505d139 */
L_1505D12E:
    /* cmp MEM32(ebp + 0x28), 0 */ /* 0x1505D12E: cmp dword ptr [ebp + 0x28], 0 */
    _flag_a = (uint32_t)(MEM32(ebp + 0x28)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_1505D139; /* 0x1505D132: jbe 0x1505d139 */
L_1505D134:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1505D134: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM16(ebx) = (uint16_t)(LO16(eax)); /* 0x1505D136: mov word ptr [ebx], ax */
L_1505D139:
    RECOMP_CALL(sub_15036430); /* 0x1505D139: call 0x15036430 */
    RECOMP_FLAGS_IN();
    /* test edi, edi */ /* 0x1505D13E: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1505D15A; /* 0x1505D140: jne 0x1505d15a */
L_1505D142:
    PUSH32(esp, 0x16u); /* 0x1505D142: push 0x16 */
    esi = POP32_VAL(esp); /* 0x1505D144: pop esi */
    MEM32(eax) = esi; /* 0x1505D145: mov dword ptr [eax], esi */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1505D147: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, eax); /* 0x1505D149: push eax */
    PUSH32(esp, eax); /* 0x1505D14A: push eax */
    PUSH32(esp, eax); /* 0x1505D14B: push eax */
    PUSH32(esp, eax); /* 0x1505D14C: push eax */
    PUSH32(esp, eax); /* 0x1505D14D: push eax */
    RECOMP_CALL(sub_1505A110); /* 0x1505D14E: call 0x1505a110 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x14u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x14u; /* 0x1505D153: add esp, 0x14 */
    _flag_k = FK_ADD;
    eax = esi; /* 0x1505D156: mov eax, esi */
    goto L_1505D167; /* 0x1505D158: jmp 0x1505d167 */
L_1505D15A:
    /* cmp MEM32(ebp + (-0xC)), 0 */ /* 0x1505D15A: cmp dword ptr [ebp - 0xc], 0 */
    _flag_a = (uint32_t)(MEM32(ebp + (-0xC))); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_NE(_flag_a, _flag_b)) goto L_1505D142; /* 0x1505D15E: jne 0x1505d142 */
L_1505D160:
    PUSH32(esp, 0x22u); /* 0x1505D160: push 0x22 */
    ecx = POP32_VAL(esp); /* 0x1505D162: pop ecx */
    MEM32(eax) = ecx; /* 0x1505D163: mov dword ptr [eax], ecx */
    eax = ecx; /* 0x1505D165: mov eax, ecx */
L_1505D167:
    edi = POP32_VAL(esp); /* 0x1505D167: pop edi */
    esi = POP32_VAL(esp); /* 0x1505D168: pop esi */
    ebx = POP32_VAL(esp); /* 0x1505D169: pop ebx */
    esp = ebp; ebp = POP32_VAL(esp); /* 0x1505D16A: leave  */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1505D16B: ret  */
    RECOMP_REGS_OUT();
}

void sub_1505D180(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1505D180u);

L_1505D180:
    edi = edi; /* 0x1505D180: mov edi, edi */
    PUSH32(esp, ebp); /* 0x1505D182: push ebp */
    ebp = esp; /* 0x1505D183: mov ebp, esp */
    PUSH32(esp, ecx); /* 0x1505D185: push ecx */
    PUSH32(esp, ecx); /* 0x1505D186: push ecx */
    PUSH32(esp, ebx); /* 0x1505D187: push ebx */
    ebx = MEM32(ebp + 0xC); /* 0x1505D188: mov ebx, dword ptr [ebp + 0xc] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1505D18B: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, esi); /* 0x1505D18D: push esi */
    PUSH32(esp, edi); /* 0x1505D18E: push edi */
    edi = MEM32(ebp + 0x8); /* 0x1505D18F: mov edi, dword ptr [ebp + 8] */
    MEM32(ebp + (-0x8)) = eax; /* 0x1505D192: mov dword ptr [ebp - 8], eax */
    eax = MEM32(ebp + 0x18); /* 0x1505D195: mov eax, dword ptr [ebp + 0x18] */
    /* test edi, edi */ /* 0x1505D198: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1505D1A5; /* 0x1505D19A: je 0x1505d1a5 */
L_1505D19C:
    /* test ebx, ebx */ /* 0x1505D19C: test ebx, ebx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ebx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1505D1B7; /* 0x1505D19E: jne 0x1505d1b7 */
L_1505D1A0:
    /* cmp MEM32(ebp + 0x10), ebx */ /* 0x1505D1A0: cmp dword ptr [ebp + 0x10], ebx */
    _flag_a = (uint32_t)(MEM32(ebp + 0x10)); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1505D1BD; /* 0x1505D1A3: je 0x1505d1bd */
L_1505D1A5:
    edx = MEM32(ebp + 0x1C); /* 0x1505D1A5: mov edx, dword ptr [ebp + 0x1c] */
L_1505D1A8:
    ecx = MEM32(ebp + 0x24); /* 0x1505D1A8: mov ecx, dword ptr [ebp + 0x24] */
L_1505D1AB:
    MEM32(ebp + (-0x8)) = 1; /* 0x1505D1AB: mov dword ptr [ebp - 8], 1 */
    goto L_1505D337; /* 0x1505D1B2: jmp 0x1505d337 */
L_1505D1B7:
    /* cmp MEM32(ebp + 0x10), 0 */ /* 0x1505D1B7: cmp dword ptr [ebp + 0x10], 0 */
    _flag_a = (uint32_t)(MEM32(ebp + 0x10)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1505D1A5; /* 0x1505D1BB: je 0x1505d1a5 */
L_1505D1BD:
    /* cmp MEM32(ebp + 0x14), 0 */ /* 0x1505D1BD: cmp dword ptr [ebp + 0x14], 0 */
    _flag_a = (uint32_t)(MEM32(ebp + 0x14)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_1505D1C9; /* 0x1505D1C1: jne 0x1505d1c9 */
L_1505D1C3:
    /* test eax, eax */ /* 0x1505D1C3: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1505D1A5; /* 0x1505D1C5: jne 0x1505d1a5 */
L_1505D1C7:
    goto L_1505D1CD; /* 0x1505D1C7: jmp 0x1505d1cd */
L_1505D1C9:
    /* test eax, eax */ /* 0x1505D1C9: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_Z(_flag_a, _flag_b)) goto L_1505D1A5; /* 0x1505D1CB: je 0x1505d1a5 */
L_1505D1CD:
    edx = MEM32(ebp + 0x1C); /* 0x1505D1CD: mov edx, dword ptr [ebp + 0x1c] */
    /* test edx, edx */ /* 0x1505D1D0: test edx, edx */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(edx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1505D1DB; /* 0x1505D1D2: jne 0x1505d1db */
L_1505D1D4:
    /* cmp MEM32(ebp + 0x20), edx */ /* 0x1505D1D4: cmp dword ptr [ebp + 0x20], edx */
    _flag_a = (uint32_t)(MEM32(ebp + 0x20)); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_NE(_flag_a, _flag_b)) goto L_1505D1A8; /* 0x1505D1D7: jne 0x1505d1a8 */
L_1505D1D9:
    goto L_1505D1E1; /* 0x1505D1D9: jmp 0x1505d1e1 */
L_1505D1DB:
    /* cmp MEM32(ebp + 0x20), 0 */ /* 0x1505D1DB: cmp dword ptr [ebp + 0x20], 0 */
    _flag_a = (uint32_t)(MEM32(ebp + 0x20)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1505D1A8; /* 0x1505D1DF: je 0x1505d1a8 */
L_1505D1E1:
    ecx = MEM32(ebp + 0x24); /* 0x1505D1E1: mov ecx, dword ptr [ebp + 0x24] */
    /* test ecx, ecx */ /* 0x1505D1E4: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1505D1EF; /* 0x1505D1E6: jne 0x1505d1ef */
L_1505D1E8:
    /* cmp MEM32(ebp + 0x28), ecx */ /* 0x1505D1E8: cmp dword ptr [ebp + 0x28], ecx */
    _flag_a = (uint32_t)(MEM32(ebp + 0x28)); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_NE(_flag_a, _flag_b)) goto L_1505D1AB; /* 0x1505D1EB: jne 0x1505d1ab */
L_1505D1ED:
    goto L_1505D1F5; /* 0x1505D1ED: jmp 0x1505d1f5 */
L_1505D1EF:
    /* cmp MEM32(ebp + 0x28), 0 */ /* 0x1505D1EF: cmp dword ptr [ebp + 0x28], 0 */
    _flag_a = (uint32_t)(MEM32(ebp + 0x28)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1505D1AB; /* 0x1505D1F3: je 0x1505d1ab */
L_1505D1F5:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1505D1F5: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    esi = edi; /* 0x1505D1F7: mov esi, edi */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x1505D1F9: inc eax */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ebx = 0; /* 0x1505D1FA: xor ebx, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
L_1505D1FC:
    /* cmp MEM16(esi), LO16(ebx) */ /* 0x1505D1FC: cmp word ptr [esi], bx */
    _flag_a = (uint32_t)(MEM16(esi)) << 16; _flag_b = (uint32_t)(LO16(ebx)) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1505D209; /* 0x1505D1FF: je 0x1505d209 */
L_1505D201:
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esi = esi + 2; /* 0x1505D201: add esi, 2 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - 1; /* 0x1505D204: sub eax, 1 */
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (/* sub result */ CMP_NE(_flag_a, _flag_b)) goto L_1505D1FC; /* 0x1505D207: jne 0x1505d1fc */
L_1505D209:
    /* cmp MEM16(esi), 0x3Au */ /* 0x1505D209: cmp word ptr [esi], 0x3a */
    _flag_a = (uint32_t)(MEM16(esi)) << 16; _flag_b = (uint32_t)(0x3Au) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    ebx = MEM32(ebp + 0xC); /* 0x1505D20D: mov ebx, dword ptr [ebp + 0xc] */
    if (CMP_NE(_flag_a, _flag_b)) goto L_1505D234; /* 0x1505D210: jne 0x1505d234 */
L_1505D212:
    /* test ebx, ebx */ /* 0x1505D212: test ebx, ebx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ebx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1505D22F; /* 0x1505D214: je 0x1505d22f */
L_1505D216:
    /* cmp MEM32(ebp + 0x10), 3 */ /* 0x1505D216: cmp dword ptr [ebp + 0x10], 3 */
    _flag_a = (uint32_t)(MEM32(ebp + 0x10)); _flag_b = (uint32_t)(3);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_B(_flag_a, _flag_b)) goto L_1505D33B; /* 0x1505D21A: jb 0x1505d33b */
L_1505D220:
    PUSH32(esp, 2); /* 0x1505D220: push 2 */
    PUSH32(esp, edi); /* 0x1505D222: push edi */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x1505D223: push dword ptr [ebp + 0x10] */
    PUSH32(esp, ebx); /* 0x1505D226: push ebx */
    RECOMP_CALL(sub_1508F590); /* 0x1505D227: call 0x1508f590 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x10u; /* 0x1505D22C: add esp, 0x10 */
    _flag_k = FK_ADD;
L_1505D22F:
    edi = esi + 0x2; /* 0x1505D22F: lea edi, [esi + 2] */
    goto L_1505D23D; /* 0x1505D232: jmp 0x1505d23d */
L_1505D234:
    /* test ebx, ebx */ /* 0x1505D234: test ebx, ebx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ebx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1505D23D; /* 0x1505D236: je 0x1505d23d */
L_1505D238:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1505D238: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM16(ebx) = (uint16_t)(LO16(eax)); /* 0x1505D23A: mov word ptr [ebx], ax */
L_1505D23D:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1505D23D: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    esi = edi; /* 0x1505D23F: mov esi, edi */
    edx = eax; /* 0x1505D241: mov edx, eax */
    ebx = eax; /* 0x1505D243: mov ebx, eax */
    eax = (uint32_t)MEM16(edi); /* 0x1505D245: movzx eax, word ptr [edi] */
    /* test LO16(eax), LO16(eax) */ /* 0x1505D248: test ax, ax */
    _flag_a = (uint32_t)(LO16(eax)) << 16; _flag_b = (uint32_t)(LO16(eax)) << 16;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 16);
    if (TEST_Z(_flag_a, _flag_b)) goto L_1505D2A7; /* 0x1505D24B: je 0x1505d2a7 */
L_1505D24D:
    ecx = eax; /* 0x1505D24D: mov ecx, eax */
L_1505D24F:
    /* cmp LO16(ecx), 0x2Fu */ /* 0x1505D24F: cmp cx, 0x2f */
    _flag_a = (uint32_t)(LO16(ecx)) << 16; _flag_b = (uint32_t)(0x2Fu) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1505D265; /* 0x1505D253: je 0x1505d265 */
L_1505D255:
    /* cmp LO16(ecx), 0x5Cu */ /* 0x1505D255: cmp cx, 0x5c */
    _flag_a = (uint32_t)(LO16(ecx)) << 16; _flag_b = (uint32_t)(0x5Cu) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1505D265; /* 0x1505D259: je 0x1505d265 */
L_1505D25B:
    /* cmp LO16(ecx), 0x2Eu */ /* 0x1505D25B: cmp cx, 0x2e */
    _flag_a = (uint32_t)(LO16(ecx)) << 16; _flag_b = (uint32_t)(0x2Eu) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    if (CMP_NE(_flag_a, _flag_b)) goto L_1505D268; /* 0x1505D25F: jne 0x1505d268 */
L_1505D261:
    ebx = esi; /* 0x1505D261: mov ebx, esi */
    goto L_1505D268; /* 0x1505D263: jmp 0x1505d268 */
L_1505D265:
    edx = esi + 0x2; /* 0x1505D265: lea edx, [esi + 2] */
L_1505D268:
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esi = esi + 2; /* 0x1505D268: add esi, 2 */
    _flag_k = FK_ADD;
    eax = (uint32_t)MEM16(esi); /* 0x1505D26B: movzx eax, word ptr [esi] */
    ecx = eax; /* 0x1505D26E: mov ecx, eax */
    /* test LO16(eax), LO16(eax) */ /* 0x1505D270: test ax, ax */
    _flag_a = (uint32_t)(LO16(eax)) << 16; _flag_b = (uint32_t)(LO16(eax)) << 16;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 16);
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1505D24F; /* 0x1505D273: jne 0x1505d24f */
L_1505D275:
    MEM32(ebp + (-0x4)) = edx; /* 0x1505D275: mov dword ptr [ebp - 4], edx */
    /* test edx, edx */ /* 0x1505D278: test edx, edx */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(edx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1505D2A7; /* 0x1505D27A: je 0x1505d2a7 */
L_1505D27C:
    ecx = MEM32(ebp + 0x14); /* 0x1505D27C: mov ecx, dword ptr [ebp + 0x14] */
    /* test ecx, ecx */ /* 0x1505D27F: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1505D2A3; /* 0x1505D281: je 0x1505d2a3 */
L_1505D283:
    eax = edx; /* 0x1505D283: mov eax, edx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - edi; /* 0x1505D285: sub eax, edi */
    _flag_k = FK_CMP;
    if (1u) _cf = (((eax) >> 0) & 1u); /* 0x1505D287: sar eax, 1 */
    if (1u) { _flag_a = recomp_flags_pack(((uint32_t)((int32_t)eax >> 1u)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = (uint32_t)((int32_t)eax >> 1u);
    /* cmp MEM32(ebp + 0x18), eax */ /* 0x1505D289: cmp dword ptr [ebp + 0x18], eax */
    _flag_a = (uint32_t)(MEM32(ebp + 0x18)); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_1505D32E; /* 0x1505D28C: jbe 0x1505d32e */
L_1505D292:
    PUSH32(esp, eax); /* 0x1505D292: push eax */
    PUSH32(esp, edi); /* 0x1505D293: push edi */
    PUSH32(esp, MEM32(ebp + 0x18)); /* 0x1505D294: push dword ptr [ebp + 0x18] */
    PUSH32(esp, ecx); /* 0x1505D297: push ecx */
    RECOMP_CALL(sub_1508F590); /* 0x1505D298: call 0x1508f590 */
    RECOMP_FLAGS_IN();
    edx = MEM32(ebp + (-0x4)); /* 0x1505D29D: mov edx, dword ptr [ebp - 4] */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x10u; /* 0x1505D2A0: add esp, 0x10 */
    _flag_k = FK_ADD;
L_1505D2A3:
    edi = edx; /* 0x1505D2A3: mov edi, edx */
    goto L_1505D2B3; /* 0x1505D2A5: jmp 0x1505d2b3 */
L_1505D2A7:
    ecx = MEM32(ebp + 0x14); /* 0x1505D2A7: mov ecx, dword ptr [ebp + 0x14] */
    /* test ecx, ecx */ /* 0x1505D2AA: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1505D2B3; /* 0x1505D2AC: je 0x1505d2b3 */
L_1505D2AE:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1505D2AE: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM16(ecx) = (uint16_t)(LO16(eax)); /* 0x1505D2B0: mov word ptr [ecx], ax */
L_1505D2B3:
    /* test ebx, ebx */ /* 0x1505D2B3: test ebx, ebx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ebx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1505D2FB; /* 0x1505D2B5: je 0x1505d2fb */
L_1505D2B7:
    /* cmp ebx, edi */ /* 0x1505D2B7: cmp ebx, edi */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_B(_flag_a, _flag_b)) goto L_1505D2FB; /* 0x1505D2B9: jb 0x1505d2fb */
L_1505D2BB:
    ecx = MEM32(ebp + 0x1C); /* 0x1505D2BB: mov ecx, dword ptr [ebp + 0x1c] */
    /* test ecx, ecx */ /* 0x1505D2BE: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1505D2DB; /* 0x1505D2C0: je 0x1505d2db */
L_1505D2C2:
    eax = ebx; /* 0x1505D2C2: mov eax, ebx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - edi; /* 0x1505D2C4: sub eax, edi */
    _flag_k = FK_CMP;
    if (1u) _cf = (((eax) >> 0) & 1u); /* 0x1505D2C6: sar eax, 1 */
    if (1u) { _flag_a = recomp_flags_pack(((uint32_t)((int32_t)eax >> 1u)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = (uint32_t)((int32_t)eax >> 1u);
    /* cmp MEM32(ebp + 0x20), eax */ /* 0x1505D2C8: cmp dword ptr [ebp + 0x20], eax */
    _flag_a = (uint32_t)(MEM32(ebp + 0x20)); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_1505D32E; /* 0x1505D2CB: jbe 0x1505d32e */
L_1505D2CD:
    PUSH32(esp, eax); /* 0x1505D2CD: push eax */
    PUSH32(esp, edi); /* 0x1505D2CE: push edi */
    PUSH32(esp, MEM32(ebp + 0x20)); /* 0x1505D2CF: push dword ptr [ebp + 0x20] */
    PUSH32(esp, ecx); /* 0x1505D2D2: push ecx */
    RECOMP_CALL(sub_1508F590); /* 0x1505D2D3: call 0x1508f590 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x10u; /* 0x1505D2D8: add esp, 0x10 */
    _flag_k = FK_ADD;
L_1505D2DB:
    ecx = MEM32(ebp + 0x24); /* 0x1505D2DB: mov ecx, dword ptr [ebp + 0x24] */
    /* test ecx, ecx */ /* 0x1505D2DE: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1505D325; /* 0x1505D2E0: je 0x1505d325 */
L_1505D2E2:
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esi = esi - ebx; /* 0x1505D2E2: sub esi, ebx */
    _flag_k = FK_CMP;
    if (1u) _cf = (((esi) >> 0) & 1u); /* 0x1505D2E4: sar esi, 1 */
    if (1u) { _flag_a = recomp_flags_pack(((uint32_t)((int32_t)esi >> 1u)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    esi = (uint32_t)((int32_t)esi >> 1u);
    /* cmp MEM32(ebp + 0x28), esi */ /* 0x1505D2E6: cmp dword ptr [ebp + 0x28], esi */
    _flag_a = (uint32_t)(MEM32(ebp + 0x28)); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_1505D331; /* 0x1505D2E9: jbe 0x1505d331 */
L_1505D2EB:
    PUSH32(esp, esi); /* 0x1505D2EB: push esi */
    PUSH32(esp, ebx); /* 0x1505D2EC: push ebx */
    PUSH32(esp, MEM32(ebp + 0x28)); /* 0x1505D2ED: push dword ptr [ebp + 0x28] */
    PUSH32(esp, ecx); /* 0x1505D2F0: push ecx */
    RECOMP_CALL(sub_1508F590); /* 0x1505D2F1: call 0x1508f590 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x10u; /* 0x1505D2F6: add esp, 0x10 */
    _flag_k = FK_ADD;
    goto L_1505D325; /* 0x1505D2F9: jmp 0x1505d325 */
L_1505D2FB:
    edx = MEM32(ebp + 0x1C); /* 0x1505D2FB: mov edx, dword ptr [ebp + 0x1c] */
    /* test edx, edx */ /* 0x1505D2FE: test edx, edx */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(edx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1505D319; /* 0x1505D300: je 0x1505d319 */
L_1505D302:
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esi = esi - edi; /* 0x1505D302: sub esi, edi */
    _flag_k = FK_CMP;
    if (1u) _cf = (((esi) >> 0) & 1u); /* 0x1505D304: sar esi, 1 */
    if (1u) { _flag_a = recomp_flags_pack(((uint32_t)((int32_t)esi >> 1u)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    esi = (uint32_t)((int32_t)esi >> 1u);
    /* cmp MEM32(ebp + 0x20), esi */ /* 0x1505D306: cmp dword ptr [ebp + 0x20], esi */
    _flag_a = (uint32_t)(MEM32(ebp + 0x20)); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_1505D329; /* 0x1505D309: jbe 0x1505d329 */
L_1505D30B:
    PUSH32(esp, esi); /* 0x1505D30B: push esi */
    PUSH32(esp, edi); /* 0x1505D30C: push edi */
    PUSH32(esp, MEM32(ebp + 0x20)); /* 0x1505D30D: push dword ptr [ebp + 0x20] */
    PUSH32(esp, edx); /* 0x1505D310: push edx */
    RECOMP_CALL(sub_1508F590); /* 0x1505D311: call 0x1508f590 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x10u; /* 0x1505D316: add esp, 0x10 */
    _flag_k = FK_ADD;
L_1505D319:
    eax = MEM32(ebp + 0x24); /* 0x1505D319: mov eax, dword ptr [ebp + 0x24] */
    /* test eax, eax */ /* 0x1505D31C: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1505D325; /* 0x1505D31E: je 0x1505d325 */
L_1505D320:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x1505D320: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM16(eax) = (uint16_t)(LO16(ecx)); /* 0x1505D322: mov word ptr [eax], cx */
L_1505D325:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1505D325: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_1505D3A4; /* 0x1505D327: jmp 0x1505d3a4 */
L_1505D329:
    ecx = MEM32(ebp + 0x24); /* 0x1505D329: mov ecx, dword ptr [ebp + 0x24] */
    goto L_1505D334; /* 0x1505D32C: jmp 0x1505d334 */
L_1505D32E:
    ecx = MEM32(ebp + 0x24); /* 0x1505D32E: mov ecx, dword ptr [ebp + 0x24] */
L_1505D331:
    edx = MEM32(ebp + 0x1C); /* 0x1505D331: mov edx, dword ptr [ebp + 0x1c] */
L_1505D334:
    ebx = MEM32(ebp + 0xC); /* 0x1505D334: mov ebx, dword ptr [ebp + 0xc] */
L_1505D337:
    /* test ebx, ebx */ /* 0x1505D337: test ebx, ebx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ebx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1505D346; /* 0x1505D339: je 0x1505d346 */
L_1505D33B:
    /* cmp MEM32(ebp + 0x10), 0 */ /* 0x1505D33B: cmp dword ptr [ebp + 0x10], 0 */
    _flag_a = (uint32_t)(MEM32(ebp + 0x10)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_1505D346; /* 0x1505D33F: jbe 0x1505d346 */
L_1505D341:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1505D341: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM16(ebx) = (uint16_t)(LO16(eax)); /* 0x1505D343: mov word ptr [ebx], ax */
L_1505D346:
    eax = MEM32(ebp + 0x14); /* 0x1505D346: mov eax, dword ptr [ebp + 0x14] */
    /* test eax, eax */ /* 0x1505D349: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1505D358; /* 0x1505D34B: je 0x1505d358 */
L_1505D34D:
    /* cmp MEM32(ebp + 0x18), 0 */ /* 0x1505D34D: cmp dword ptr [ebp + 0x18], 0 */
    _flag_a = (uint32_t)(MEM32(ebp + 0x18)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_1505D358; /* 0x1505D351: jbe 0x1505d358 */
L_1505D353:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    esi = 0; /* 0x1505D353: xor esi, esi */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM16(eax) = (uint16_t)(LO16(esi)); /* 0x1505D355: mov word ptr [eax], si */
L_1505D358:
    /* test edx, edx */ /* 0x1505D358: test edx, edx */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(edx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1505D367; /* 0x1505D35A: je 0x1505d367 */
L_1505D35C:
    /* cmp MEM32(ebp + 0x20), 0 */ /* 0x1505D35C: cmp dword ptr [ebp + 0x20], 0 */
    _flag_a = (uint32_t)(MEM32(ebp + 0x20)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_1505D367; /* 0x1505D360: jbe 0x1505d367 */
L_1505D362:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1505D362: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM16(edx) = (uint16_t)(LO16(eax)); /* 0x1505D364: mov word ptr [edx], ax */
L_1505D367:
    /* test ecx, ecx */ /* 0x1505D367: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1505D376; /* 0x1505D369: je 0x1505d376 */
L_1505D36B:
    /* cmp MEM32(ebp + 0x28), 0 */ /* 0x1505D36B: cmp dword ptr [ebp + 0x28], 0 */
    _flag_a = (uint32_t)(MEM32(ebp + 0x28)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_1505D376; /* 0x1505D36F: jbe 0x1505d376 */
L_1505D371:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1505D371: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM16(ecx) = (uint16_t)(LO16(eax)); /* 0x1505D373: mov word ptr [ecx], ax */
L_1505D376:
    RECOMP_CALL(sub_15036430); /* 0x1505D376: call 0x15036430 */
    RECOMP_FLAGS_IN();
    /* test edi, edi */ /* 0x1505D37B: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1505D397; /* 0x1505D37D: jne 0x1505d397 */
L_1505D37F:
    PUSH32(esp, 0x16u); /* 0x1505D37F: push 0x16 */
    esi = POP32_VAL(esp); /* 0x1505D381: pop esi */
    MEM32(eax) = esi; /* 0x1505D382: mov dword ptr [eax], esi */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1505D384: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, eax); /* 0x1505D386: push eax */
    PUSH32(esp, eax); /* 0x1505D387: push eax */
    PUSH32(esp, eax); /* 0x1505D388: push eax */
    PUSH32(esp, eax); /* 0x1505D389: push eax */
    PUSH32(esp, eax); /* 0x1505D38A: push eax */
    RECOMP_CALL(sub_1505A110); /* 0x1505D38B: call 0x1505a110 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x14u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x14u; /* 0x1505D390: add esp, 0x14 */
    _flag_k = FK_ADD;
    eax = esi; /* 0x1505D393: mov eax, esi */
    goto L_1505D3A4; /* 0x1505D395: jmp 0x1505d3a4 */
L_1505D397:
    /* cmp MEM32(ebp + (-0x8)), 0 */ /* 0x1505D397: cmp dword ptr [ebp - 8], 0 */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x8))); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_NE(_flag_a, _flag_b)) goto L_1505D37F; /* 0x1505D39B: jne 0x1505d37f */
L_1505D39D:
    PUSH32(esp, 0x22u); /* 0x1505D39D: push 0x22 */
    ecx = POP32_VAL(esp); /* 0x1505D39F: pop ecx */
    MEM32(eax) = ecx; /* 0x1505D3A0: mov dword ptr [eax], ecx */
    eax = ecx; /* 0x1505D3A2: mov eax, ecx */
L_1505D3A4:
    edi = POP32_VAL(esp); /* 0x1505D3A4: pop edi */
    esi = POP32_VAL(esp); /* 0x1505D3A5: pop esi */
    ebx = POP32_VAL(esp); /* 0x1505D3A6: pop ebx */
    esp = ebp; ebp = POP32_VAL(esp); /* 0x1505D3A7: leave  */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1505D3A8: ret  */
    RECOMP_REGS_OUT();
}

void sub_1505D3B0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1505D3B0u);

L_1505D3B0:
    edi = edi; /* 0x1505D3B0: mov edi, edi */
    PUSH32(esp, ebp); /* 0x1505D3B2: push ebp */
    ebp = esp; /* 0x1505D3B3: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x324u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x324u; /* 0x1505D3B5: sub esp, 0x324 */
    _flag_k = FK_CMP;
    RECOMP_CALL(sub_15058C3F); /* 0x1505D3BB: call 0x15058c3f */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x1505D3C0: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1505D3CC; /* 0x1505D3C2: je 0x1505d3cc */
L_1505D3C4:
    PUSH32(esp, 0x16u); /* 0x1505D3C4: push 0x16 */
    RECOMP_CALL(sub_15058D60); /* 0x1505D3C6: call 0x15058d60 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1505D3CB: pop ecx */
L_1505D3CC:
    /* test MEM8(0x150BD328), 2 */ /* 0x1505D3CC: test byte ptr [0x150bd328], 2 */
    _flag_a = (uint32_t)(MEM8(0x150BD328)) << 24; _flag_b = (uint32_t)(2) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_1505D491; /* 0x1505D3D3: je 0x1505d491 */
L_1505D3D9:
    MEM32(ebp + (-0x274)) = eax; /* 0x1505D3D9: mov dword ptr [ebp - 0x274], eax */
    MEM32(ebp + (-0x278)) = ecx; /* 0x1505D3DF: mov dword ptr [ebp - 0x278], ecx */
    MEM32(ebp + (-0x27C)) = edx; /* 0x1505D3E5: mov dword ptr [ebp - 0x27c], edx */
    MEM32(ebp + (-0x280)) = ebx; /* 0x1505D3EB: mov dword ptr [ebp - 0x280], ebx */
    MEM32(ebp + (-0x284)) = esi; /* 0x1505D3F1: mov dword ptr [ebp - 0x284], esi */
    MEM32(ebp + (-0x288)) = edi; /* 0x1505D3F7: mov dword ptr [ebp - 0x288], edi */
    MEM16(ebp + (-0x25C)) = (uint16_t)(_seg_ss); /* 0x1505D3FD: mov word ptr [ebp - 0x25c], ss */
    MEM16(ebp + (-0x268)) = (uint16_t)(_seg_cs); /* 0x1505D404: mov word ptr [ebp - 0x268], cs */
    MEM16(ebp + (-0x28C)) = (uint16_t)(_seg_ds); /* 0x1505D40B: mov word ptr [ebp - 0x28c], ds */
    MEM16(ebp + (-0x290)) = (uint16_t)(_seg_es); /* 0x1505D412: mov word ptr [ebp - 0x290], es */
    MEM16(ebp + (-0x294)) = (uint16_t)(_seg_fs); /* 0x1505D419: mov word ptr [ebp - 0x294], fs */
    MEM16(ebp + (-0x298)) = (uint16_t)(_seg_gs); /* 0x1505D420: mov word ptr [ebp - 0x298], gs */
    PUSH32(esp, recomp_eflags(_flag_k, _flag_a, _flag_b, _cf, _df)); /* 0x1505D427: pushfd  */
    POP32(esp, MEM32(ebp + (-0x264))); /* 0x1505D428: pop dword ptr [ebp - 0x264] */
    eax = MEM32(ebp + 0x4); /* 0x1505D42E: mov eax, dword ptr [ebp + 4] */
    MEM32(ebp + (-0x26C)) = eax; /* 0x1505D431: mov dword ptr [ebp - 0x26c], eax */
    eax = ebp + 0x4; /* 0x1505D437: lea eax, [ebp + 4] */
    MEM32(ebp + (-0x260)) = eax; /* 0x1505D43A: mov dword ptr [ebp - 0x260], eax */
    MEM32(ebp + (-0x324)) = 0x00010001u; /* 0x1505D440: mov dword ptr [ebp - 0x324], 0x10001 */
    eax = MEM32(eax + (-0x4)); /* 0x1505D44A: mov eax, dword ptr [eax - 4] */
    PUSH32(esp, 0x50u); /* 0x1505D44D: push 0x50 */
    MEM32(ebp + (-0x270)) = eax; /* 0x1505D44F: mov dword ptr [ebp - 0x270], eax */
    eax = ebp + (-0x58); /* 0x1505D455: lea eax, [ebp - 0x58] */
    PUSH32(esp, 0); /* 0x1505D458: push 0 */
    PUSH32(esp, eax); /* 0x1505D45A: push eax */
    RECOMP_CALL(sub_1508E3D0); /* 0x1505D45B: call 0x1508e3d0 */
    RECOMP_FLAGS_IN();
    eax = MEM32(ebp + 0x4); /* 0x1505D460: mov eax, dword ptr [ebp + 4] */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x1505D463: add esp, 0xc */
    _flag_k = FK_ADD;
    MEM32(ebp + (-0x4C)) = eax; /* 0x1505D466: mov dword ptr [ebp - 0x4c], eax */
    eax = ebp + (-0x58); /* 0x1505D469: lea eax, [ebp - 0x58] */
    MEM32(ebp + (-0x8)) = eax; /* 0x1505D46C: mov dword ptr [ebp - 8], eax */
    eax = ebp + (-0x324); /* 0x1505D46F: lea eax, [ebp - 0x324] */
    MEM32(ebp + (-0x58)) = 0x40000015u; /* 0x1505D475: mov dword ptr [ebp - 0x58], 0x40000015 */
    PUSH32(esp, 0); /* 0x1505D47C: push 0 */
    MEM32(ebp + (-0x4)) = eax; /* 0x1505D47E: mov dword ptr [ebp - 4], eax */
    RECOMP_ICALL(MEM32(0x150C0060)); /* 0x1505D481: call dword ptr [0x150c0060] */
    RECOMP_FLAGS_IN();
    eax = ebp + (-0x8); /* 0x1505D487: lea eax, [ebp - 8] */
    PUSH32(esp, eax); /* 0x1505D48A: push eax */
    RECOMP_ICALL(MEM32(0x150C0070)); /* 0x1505D48B: call dword ptr [0x150c0070] */
    RECOMP_FLAGS_IN();
L_1505D491:
    PUSH32(esp, 3); /* 0x1505D491: push 3 */
    RECOMP_CALL(sub_15067FB0); /* 0x1505D493: call 0x15067fb0 */
    RECOMP_FLAGS_IN();
    void_lift_trap(0x1505D498u, "int3 ");
    { RECOMP_REGS_OUT(); return; } /* end of function */
    RECOMP_REGS_OUT();
}

void sub_1505D4A0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1505D4A0u);

L_1505D4A0:
    edi = edi; /* 0x1505D4A0: mov edi, edi */
    PUSH32(esp, ebp); /* 0x1505D4A2: push ebp */
    ebp = esp; /* 0x1505D4A3: mov ebp, esp */
    PUSH32(esp, ecx); /* 0x1505D4A5: push ecx */
    PUSH32(esp, ecx); /* 0x1505D4A6: push ecx */
    eax = MEM32(ebp + 0x14); /* 0x1505D4A7: mov eax, dword ptr [ebp + 0x14] */
    PUSH32(esp, ebx); /* 0x1505D4AA: push ebx */
    ebx = MEM32(ebp + 0x10); /* 0x1505D4AB: mov ebx, dword ptr [ebp + 0x10] */
    PUSH32(esp, esi); /* 0x1505D4AE: push esi */
    esi = MEM32(ebp + 0xC); /* 0x1505D4AF: mov esi, dword ptr [ebp + 0xc] */
    PUSH32(esp, edi); /* 0x1505D4B2: push edi */
    edi = ebx + (-0x1); /* 0x1505D4B3: lea edi, [ebx - 1] */
    edi = (uint32_t)((int32_t)edi * (int32_t)eax); /* 0x1505D4B6: imul edi, eax */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edi = edi + esi; /* 0x1505D4B9: add edi, esi */
    _flag_k = FK_ADD;
    /* test esi, esi */ /* 0x1505D4BB: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1505D4E4; /* 0x1505D4BD: jne 0x1505d4e4 */
L_1505D4BF:
    /* test ebx, ebx */ /* 0x1505D4BF: test ebx, ebx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ebx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1505D4E4; /* 0x1505D4C1: je 0x1505d4e4 */
L_1505D4C3:
    RECOMP_CALL(sub_15036430); /* 0x1505D4C3: call 0x15036430 */
    RECOMP_FLAGS_IN();
    MEM32(eax) = 0x16u; /* 0x1505D4C8: mov dword ptr [eax], 0x16 */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1505D4CE: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, eax); /* 0x1505D4D0: push eax */
    PUSH32(esp, eax); /* 0x1505D4D1: push eax */
    PUSH32(esp, eax); /* 0x1505D4D2: push eax */
    PUSH32(esp, eax); /* 0x1505D4D3: push eax */
    PUSH32(esp, eax); /* 0x1505D4D4: push eax */
    RECOMP_CALL(sub_1505A110); /* 0x1505D4D5: call 0x1505a110 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x14u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x14u; /* 0x1505D4DA: add esp, 0x14 */
    _flag_k = FK_ADD;
L_1505D4DD:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1505D4DD: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
L_1505D4DF:
    edi = POP32_VAL(esp); /* 0x1505D4DF: pop edi */
    esi = POP32_VAL(esp); /* 0x1505D4E0: pop esi */
    ebx = POP32_VAL(esp); /* 0x1505D4E1: pop ebx */
    esp = ebp; ebp = POP32_VAL(esp); /* 0x1505D4E2: leave  */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1505D4E3: ret  */
L_1505D4E4:
    /* test eax, eax */ /* 0x1505D4E4: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_Z(_flag_a, _flag_b)) goto L_1505D4C3; /* 0x1505D4E6: je 0x1505d4c3 */
L_1505D4E8:
    /* cmp MEM32(ebp + 0x18), 0 */ /* 0x1505D4E8: cmp dword ptr [ebp + 0x18], 0 */
    _flag_a = (uint32_t)(MEM32(ebp + 0x18)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1505D4C3; /* 0x1505D4EC: je 0x1505d4c3 */
L_1505D4EE:
    ecx = MEM32(ebp + 0x18); /* 0x1505D4EE: mov ecx, dword ptr [ebp + 0x18] */
    RECOMP_CALL(sub_1505EB74); /* 0x1505D4F1: call 0x1505eb74 */
    RECOMP_FLAGS_IN();
    /* cmp esi, edi */ /* 0x1505D4F6: cmp esi, edi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_A(_flag_a, _flag_b)) goto L_1505D4DD; /* 0x1505D4F8: ja 0x1505d4dd */
L_1505D4FA:
    ecx = MEM32(ebp + 0x14); /* 0x1505D4FA: mov ecx, dword ptr [ebp + 0x14] */
L_1505D4FD:
    eax = ebx; /* 0x1505D4FD: mov eax, ebx */
    if (1u) _cf = (((eax) >> 0) & 1u); /* 0x1505D4FF: shr eax, 1 */
    if (1u) { _flag_a = recomp_flags_pack((eax >> 1u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax >> 1u; /* 0x1505D4FF: shr eax, 1 */
    MEM32(ebp + (-0x8)) = eax; /* 0x1505D501: mov dword ptr [ebp - 8], eax */
    if (recomp_cond_cf(_flag_k, _flag_a, _flag_b, CC_E, _cf)) goto L_1505D545; /* 0x1505D504: je 0x1505d545 */
L_1505D506:
    /* test LO8(ebx), 1 */ /* 0x1505D506: test bl, 1 */
    _flag_a = (uint32_t)(LO8(ebx)) << 24; _flag_b = (uint32_t)(1) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    ebx = eax + (-0x1); /* 0x1505D509: lea ebx, [eax - 1] */
    if (TEST_NZ(_flag_a, _flag_b)) { ebx = eax; } /* 0x1505D50C: cmovne ebx, eax */
    eax = ebx; /* 0x1505D50F: mov eax, ebx */
    eax = (uint32_t)((int32_t)eax * (int32_t)ecx); /* 0x1505D511: imul eax, ecx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + esi; /* 0x1505D514: add eax, esi */
    _flag_k = FK_ADD;
    PUSH32(esp, eax); /* 0x1505D516: push eax */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x1505D517: push dword ptr [ebp + 8] */
    MEM32(ebp + (-0x4)) = eax; /* 0x1505D51A: mov dword ptr [ebp - 4], eax */
    RECOMP_ICALL(MEM32(ebp + 0x18)); /* 0x1505D51D: call dword ptr [ebp + 0x18] */
    RECOMP_FLAGS_IN();
    edx = eax; /* 0x1505D520: mov edx, eax */
    eax = MEM32(ebp + (-0x4)); /* 0x1505D522: mov eax, dword ptr [ebp - 4] */
    ecx = POP32_VAL(esp); /* 0x1505D525: pop ecx */
    ecx = POP32_VAL(esp); /* 0x1505D526: pop ecx */
    /* test edx, edx */ /* 0x1505D527: test edx, edx */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(edx);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_Z(_flag_a, _flag_b)) goto L_1505D4DF; /* 0x1505D529: je 0x1505d4df */
L_1505D52B:
    ecx = MEM32(ebp + 0x14); /* 0x1505D52B: mov ecx, dword ptr [ebp + 0x14] */
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_1505D536; /* 0x1505D52E: js 0x1505d536 */
L_1505D530:
    ebx = MEM32(ebp + (-0x8)); /* 0x1505D530: mov ebx, dword ptr [ebp - 8] */
    esi = eax + ecx; /* 0x1505D533: lea esi, [eax + ecx] */
L_1505D536:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - ecx; /* 0x1505D536: sub eax, ecx */
    _flag_k = FK_CMP;
    /* test edx, edx */ /* 0x1505D538: test edx, edx */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(edx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) == 0u)) { eax = edi; } /* 0x1505D53A: cmovns eax, edi */
    edi = eax; /* 0x1505D53D: mov edi, eax */
    /* cmp esi, edi */ /* 0x1505D53F: cmp esi, edi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_BE(_flag_a, _flag_b)) goto L_1505D4FD; /* 0x1505D541: jbe 0x1505d4fd */
L_1505D543:
    RECOMP_BACKEDGE();
    goto L_1505D4DD; /* 0x1505D543: jmp 0x1505d4dd */
L_1505D545:
    /* test ebx, ebx */ /* 0x1505D545: test ebx, ebx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ebx);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_Z(_flag_a, _flag_b)) goto L_1505D4DD; /* 0x1505D547: je 0x1505d4dd */
L_1505D549:
    PUSH32(esp, esi); /* 0x1505D549: push esi */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x1505D54A: push dword ptr [ebp + 8] */
    RECOMP_ICALL(MEM32(ebp + 0x18)); /* 0x1505D54D: call dword ptr [ebp + 0x18] */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1505D550: pop ecx */
    ecx = POP32_VAL(esp); /* 0x1505D551: pop ecx */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x1505D552: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    /* test eax, eax */ /* 0x1505D554: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) { esi = ecx; } /* 0x1505D556: cmovne esi, ecx */
    eax = esi; /* 0x1505D559: mov eax, esi */
    RECOMP_BACKEDGE();
    goto L_1505D4DF; /* 0x1505D55B: jmp 0x1505d4df */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    RECOMP_REGS_OUT();
}

void sub_1505D570(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1505D570u);

L_1505D570:
    edi = edi; /* 0x1505D570: mov edi, edi */
    PUSH32(esp, ebp); /* 0x1505D572: push ebp */
    ebp = esp; /* 0x1505D573: mov ebp, esp */
    PUSH32(esp, ecx); /* 0x1505D575: push ecx */
    PUSH32(esp, ecx); /* 0x1505D576: push ecx */
    eax = MEM32(ebp + 0x14); /* 0x1505D577: mov eax, dword ptr [ebp + 0x14] */
    PUSH32(esp, ebx); /* 0x1505D57A: push ebx */
    ebx = MEM32(ebp + 0x10); /* 0x1505D57B: mov ebx, dword ptr [ebp + 0x10] */
    PUSH32(esp, esi); /* 0x1505D57E: push esi */
    esi = MEM32(ebp + 0xC); /* 0x1505D57F: mov esi, dword ptr [ebp + 0xc] */
    PUSH32(esp, edi); /* 0x1505D582: push edi */
    edi = ebx + (-0x1); /* 0x1505D583: lea edi, [ebx - 1] */
    edi = (uint32_t)((int32_t)edi * (int32_t)eax); /* 0x1505D586: imul edi, eax */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edi = edi + esi; /* 0x1505D589: add edi, esi */
    _flag_k = FK_ADD;
    /* test esi, esi */ /* 0x1505D58B: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1505D5B4; /* 0x1505D58D: jne 0x1505d5b4 */
L_1505D58F:
    /* test ebx, ebx */ /* 0x1505D58F: test ebx, ebx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ebx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1505D5B4; /* 0x1505D591: je 0x1505d5b4 */
L_1505D593:
    RECOMP_CALL(sub_15036430); /* 0x1505D593: call 0x15036430 */
    RECOMP_FLAGS_IN();
    MEM32(eax) = 0x16u; /* 0x1505D598: mov dword ptr [eax], 0x16 */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1505D59E: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, eax); /* 0x1505D5A0: push eax */
    PUSH32(esp, eax); /* 0x1505D5A1: push eax */
    PUSH32(esp, eax); /* 0x1505D5A2: push eax */
    PUSH32(esp, eax); /* 0x1505D5A3: push eax */
    PUSH32(esp, eax); /* 0x1505D5A4: push eax */
    RECOMP_CALL(sub_1505A110); /* 0x1505D5A5: call 0x1505a110 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x14u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x14u; /* 0x1505D5AA: add esp, 0x14 */
    _flag_k = FK_ADD;
L_1505D5AD:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1505D5AD: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
L_1505D5AF:
    edi = POP32_VAL(esp); /* 0x1505D5AF: pop edi */
    esi = POP32_VAL(esp); /* 0x1505D5B0: pop esi */
    ebx = POP32_VAL(esp); /* 0x1505D5B1: pop ebx */
    esp = ebp; ebp = POP32_VAL(esp); /* 0x1505D5B2: leave  */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1505D5B3: ret  */
L_1505D5B4:
    /* test eax, eax */ /* 0x1505D5B4: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_Z(_flag_a, _flag_b)) goto L_1505D593; /* 0x1505D5B6: je 0x1505d593 */
L_1505D5B8:
    /* cmp MEM32(ebp + 0x18), 0 */ /* 0x1505D5B8: cmp dword ptr [ebp + 0x18], 0 */
    _flag_a = (uint32_t)(MEM32(ebp + 0x18)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1505D593; /* 0x1505D5BC: je 0x1505d593 */
L_1505D5BE:
    ecx = MEM32(ebp + 0x18); /* 0x1505D5BE: mov ecx, dword ptr [ebp + 0x18] */
    RECOMP_CALL(sub_1505EB74); /* 0x1505D5C1: call 0x1505eb74 */
    RECOMP_FLAGS_IN();
    /* cmp esi, edi */ /* 0x1505D5C6: cmp esi, edi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_A(_flag_a, _flag_b)) goto L_1505D5AD; /* 0x1505D5C8: ja 0x1505d5ad */
L_1505D5CA:
    ecx = MEM32(ebp + 0x14); /* 0x1505D5CA: mov ecx, dword ptr [ebp + 0x14] */
L_1505D5CD:
    eax = ebx; /* 0x1505D5CD: mov eax, ebx */
    if (1u) _cf = (((eax) >> 0) & 1u); /* 0x1505D5CF: shr eax, 1 */
    if (1u) { _flag_a = recomp_flags_pack((eax >> 1u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax >> 1u; /* 0x1505D5CF: shr eax, 1 */
    MEM32(ebp + (-0x8)) = eax; /* 0x1505D5D1: mov dword ptr [ebp - 8], eax */
    if (recomp_cond_cf(_flag_k, _flag_a, _flag_b, CC_E, _cf)) goto L_1505D619; /* 0x1505D5D4: je 0x1505d619 */
L_1505D5D6:
    /* test LO8(ebx), 1 */ /* 0x1505D5D6: test bl, 1 */
    _flag_a = (uint32_t)(LO8(ebx)) << 24; _flag_b = (uint32_t)(1) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    ebx = eax + (-0x1); /* 0x1505D5D9: lea ebx, [eax - 1] */
    if (TEST_NZ(_flag_a, _flag_b)) { ebx = eax; } /* 0x1505D5DC: cmovne ebx, eax */
    eax = ebx; /* 0x1505D5DF: mov eax, ebx */
    eax = (uint32_t)((int32_t)eax * (int32_t)ecx); /* 0x1505D5E1: imul eax, ecx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + esi; /* 0x1505D5E4: add eax, esi */
    _flag_k = FK_ADD;
    PUSH32(esp, eax); /* 0x1505D5E6: push eax */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x1505D5E7: push dword ptr [ebp + 8] */
    MEM32(ebp + (-0x4)) = eax; /* 0x1505D5EA: mov dword ptr [ebp - 4], eax */
    PUSH32(esp, MEM32(ebp + 0x1C)); /* 0x1505D5ED: push dword ptr [ebp + 0x1c] */
    RECOMP_ICALL(MEM32(ebp + 0x18)); /* 0x1505D5F0: call dword ptr [ebp + 0x18] */
    RECOMP_FLAGS_IN();
    edx = eax; /* 0x1505D5F3: mov edx, eax */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x1505D5F5: add esp, 0xc */
    _flag_k = FK_ADD;
    eax = MEM32(ebp + (-0x4)); /* 0x1505D5F8: mov eax, dword ptr [ebp - 4] */
    /* test edx, edx */ /* 0x1505D5FB: test edx, edx */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(edx);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_Z(_flag_a, _flag_b)) goto L_1505D5AF; /* 0x1505D5FD: je 0x1505d5af */
L_1505D5FF:
    ecx = MEM32(ebp + 0x14); /* 0x1505D5FF: mov ecx, dword ptr [ebp + 0x14] */
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_1505D60A; /* 0x1505D602: js 0x1505d60a */
L_1505D604:
    ebx = MEM32(ebp + (-0x8)); /* 0x1505D604: mov ebx, dword ptr [ebp - 8] */
    esi = eax + ecx; /* 0x1505D607: lea esi, [eax + ecx] */
L_1505D60A:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - ecx; /* 0x1505D60A: sub eax, ecx */
    _flag_k = FK_CMP;
    /* test edx, edx */ /* 0x1505D60C: test edx, edx */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(edx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) == 0u)) { eax = edi; } /* 0x1505D60E: cmovns eax, edi */
    edi = eax; /* 0x1505D611: mov edi, eax */
    /* cmp esi, edi */ /* 0x1505D613: cmp esi, edi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_BE(_flag_a, _flag_b)) goto L_1505D5CD; /* 0x1505D615: jbe 0x1505d5cd */
L_1505D617:
    RECOMP_BACKEDGE();
    goto L_1505D5AD; /* 0x1505D617: jmp 0x1505d5ad */
L_1505D619:
    /* test ebx, ebx */ /* 0x1505D619: test ebx, ebx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ebx);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_Z(_flag_a, _flag_b)) goto L_1505D5AD; /* 0x1505D61B: je 0x1505d5ad */
L_1505D61D:
    PUSH32(esp, esi); /* 0x1505D61D: push esi */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x1505D61E: push dword ptr [ebp + 8] */
    PUSH32(esp, MEM32(ebp + 0x1C)); /* 0x1505D621: push dword ptr [ebp + 0x1c] */
    RECOMP_ICALL(MEM32(ebp + 0x18)); /* 0x1505D624: call dword ptr [ebp + 0x18] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x1505D627: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x1505D629: add esp, 0xc */
    _flag_k = FK_ADD;
    /* test eax, eax */ /* 0x1505D62C: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) { esi = ecx; } /* 0x1505D62E: cmovne esi, ecx */
    eax = esi; /* 0x1505D631: mov eax, esi */
    RECOMP_BACKEDGE();
    goto L_1505D5AF; /* 0x1505D633: jmp 0x1505d5af */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    RECOMP_REGS_OUT();
}

void sub_1505D640(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1505D640u);

L_1505D640:
    edi = edi; /* 0x1505D640: mov edi, edi */
    PUSH32(esp, ebp); /* 0x1505D642: push ebp */
    ebp = esp; /* 0x1505D643: mov ebp, esp */
    eax = MEM32(ebp + 0x8); /* 0x1505D645: mov eax, dword ptr [ebp + 8] */
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFFu : 0; /* 0x1505D648: cdq  */
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax; int32_t _dv = (int32_t)MEM32(ebp + 0xC); /* 0x1505D649: idiv dword ptr [ebp + 0xc] */
      if (_dv && !(_dv == -1 && _dividend == INT64_MIN)) { eax = (uint32_t)((int32_t)(_dividend / _dv)); edx = (uint32_t)((int32_t)(_dividend % _dv)); }
      else { eax = 0; edx = 0; } }
    ebp = POP32_VAL(esp); /* 0x1505D64C: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1505D64D: ret  */
    RECOMP_REGS_OUT();
}

void sub_1505D654(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1505D654u);

L_1505D654:
    PUSH32(esp, 0x10u); /* 0x1505D654: push 0x10 */
    PUSH32(esp, 0x150B0CC8u); /* 0x1505D656: push 0x150b0cc8 */
    RECOMP_CALL(sub_1505E988); /* 0x1505D65B: call 0x1505e988 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 7); /* 0x1505D660: push 7 */
    RECOMP_CALL(sub_15068D80); /* 0x1505D662: call 0x15068d80 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1505D667: pop ecx */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ebx = 0; /* 0x1505D668: xor ebx, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x4)) = ebx; /* 0x1505D66A: mov dword ptr [ebp - 4], ebx */
    edi = MEM32(ebp + 0x8); /* 0x1505D66D: mov edi, dword ptr [ebp + 8] */
    /* test edi, edi */ /* 0x1505D670: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1505D68D; /* 0x1505D672: jne 0x1505d68d */
L_1505D674:
    RECOMP_CALL(sub_15036430); /* 0x1505D674: call 0x15036430 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0x16u); /* 0x1505D679: push 0x16 */
    esi = POP32_VAL(esp); /* 0x1505D67B: pop esi */
    MEM32(eax) = esi; /* 0x1505D67C: mov dword ptr [eax], esi */
    PUSH32(esp, ebx); /* 0x1505D67E: push ebx */
    PUSH32(esp, ebx); /* 0x1505D67F: push ebx */
    PUSH32(esp, ebx); /* 0x1505D680: push ebx */
    PUSH32(esp, ebx); /* 0x1505D681: push ebx */
    PUSH32(esp, ebx); /* 0x1505D682: push ebx */
    RECOMP_CALL(sub_1505A110); /* 0x1505D683: call 0x1505a110 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x14u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x14u; /* 0x1505D688: add esp, 0x14 */
    _flag_k = FK_ADD;
    goto L_1505D709; /* 0x1505D68B: jmp 0x1505d709 */
L_1505D68D:
    MEM32(edi) = ebx; /* 0x1505D68D: mov dword ptr [edi], ebx */
    esi = MEM32(ebp + 0xC); /* 0x1505D68F: mov esi, dword ptr [ebp + 0xc] */
    /* test esi, esi */ /* 0x1505D692: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1505D698; /* 0x1505D694: je 0x1505d698 */
L_1505D696:
    MEM32(esi) = ebx; /* 0x1505D696: mov dword ptr [esi], ebx */
L_1505D698:
    /* cmp MEM32(ebp + 0x10), 0 */ /* 0x1505D698: cmp dword ptr [ebp + 0x10], 0 */
    _flag_a = (uint32_t)(MEM32(ebp + 0x10)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1505D674; /* 0x1505D69C: je 0x1505d674 */
L_1505D69E:
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x1505D69E: push dword ptr [ebp + 0x10] */
    RECOMP_CALL(sub_1505D73C); /* 0x1505D6A1: call 0x1505d73c */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1505D6A6: pop ecx */
    ebx = eax; /* 0x1505D6A7: mov ebx, eax */
    /* test ebx, ebx */ /* 0x1505D6A9: test ebx, ebx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ebx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1505D707; /* 0x1505D6AB: je 0x1505d707 */
L_1505D6AD:
    ecx = ebx; /* 0x1505D6AD: mov ecx, ebx */
    edx = ecx + 0x1; /* 0x1505D6AF: lea edx, [ecx + 1] */
L_1505D6B2:
    SET_LO8(eax, MEM8(ecx)); /* 0x1505D6B2: mov al, byte ptr [ecx] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx + 1; /* 0x1505D6B4: inc ecx */
    _flag_k = FK_INC;
    /* test LO8(eax), LO8(eax) */ /* 0x1505D6B5: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1505D6B2; /* 0x1505D6B7: jne 0x1505d6b2 */
L_1505D6B9:
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ecx = ecx - edx; /* 0x1505D6B9: sub ecx, edx */
    _flag_k = FK_CMP;
    eax = ecx + 0x1; /* 0x1505D6BB: lea eax, [ecx + 1] */
    MEM32(ebp + (-0x20)) = eax; /* 0x1505D6BE: mov dword ptr [ebp - 0x20], eax */
    PUSH32(esp, 1); /* 0x1505D6C1: push 1 */
    PUSH32(esp, eax); /* 0x1505D6C3: push eax */
    RECOMP_CALL(sub_150487F0); /* 0x1505D6C4: call 0x150487f0 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1505D6C9: pop ecx */
    ecx = POP32_VAL(esp); /* 0x1505D6CA: pop ecx */
    MEM32(edi) = eax; /* 0x1505D6CB: mov dword ptr [edi], eax */
    /* test eax, eax */ /* 0x1505D6CD: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1505D6DD; /* 0x1505D6CF: jne 0x1505d6dd */
L_1505D6D1:
    RECOMP_CALL(sub_15036430); /* 0x1505D6D1: call 0x15036430 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0xCu); /* 0x1505D6D6: push 0xc */
    esi = POP32_VAL(esp); /* 0x1505D6D8: pop esi */
    MEM32(eax) = esi; /* 0x1505D6D9: mov dword ptr [eax], esi */
    goto L_1505D709; /* 0x1505D6DB: jmp 0x1505d709 */
L_1505D6DD:
    PUSH32(esp, ebx); /* 0x1505D6DD: push ebx */
    edi = MEM32(ebp + (-0x20)); /* 0x1505D6DE: mov edi, dword ptr [ebp - 0x20] */
    PUSH32(esp, edi); /* 0x1505D6E1: push edi */
    PUSH32(esp, eax); /* 0x1505D6E2: push eax */
    RECOMP_CALL(sub_1508E640); /* 0x1505D6E3: call 0x1508e640 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x1505D6E8: add esp, 0xc */
    _flag_k = FK_ADD;
    /* test eax, eax */ /* 0x1505D6EB: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1505D701; /* 0x1505D6ED: je 0x1505d701 */
L_1505D6EF:
    PUSH32(esp, 0); /* 0x1505D6EF: push 0 */
    PUSH32(esp, 0); /* 0x1505D6F1: push 0 */
    PUSH32(esp, 0); /* 0x1505D6F3: push 0 */
    PUSH32(esp, 0); /* 0x1505D6F5: push 0 */
    PUSH32(esp, 0); /* 0x1505D6F7: push 0 */
    RECOMP_CALL(sub_1505A11B); /* 0x1505D6F9: call 0x1505a11b */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x14u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x14u; /* 0x1505D6FE: add esp, 0x14 */
    _flag_k = FK_ADD;
L_1505D701:
    /* test esi, esi */ /* 0x1505D701: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1505D707; /* 0x1505D703: je 0x1505d707 */
L_1505D705:
    MEM32(esi) = edi; /* 0x1505D705: mov dword ptr [esi], edi */
L_1505D707:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    esi = 0; /* 0x1505D707: xor esi, esi */
    _cf = 0;
    _flag_k = FK_TEST;
L_1505D709:
    MEM32(ebp + (-0x1C)) = esi; /* 0x1505D709: mov dword ptr [ebp - 0x1c], esi */
    MEM32(ebp + (-0x4)) = 0xFFFFFFFEu; /* 0x1505D70C: mov dword ptr [ebp - 4], 0xfffffffe */
    RECOMP_CALL(sub_1505D72D); /* 0x1505D713: call 0x1505d72d */
    RECOMP_FLAGS_IN();
    eax = esi; /* 0x1505D718: mov eax, esi */
    ecx = MEM32(ebp + (-0x10)); /* 0x1505D71A: mov ecx, dword ptr [ebp - 0x10] */
    MEM32(FS_BASE + (0)) = ecx; /* 0x1505D71D: mov dword ptr fs:[0], ecx */
    ecx = POP32_VAL(esp); /* 0x1505D724: pop ecx */
    edi = POP32_VAL(esp); /* 0x1505D725: pop edi */
    esi = POP32_VAL(esp); /* 0x1505D726: pop esi */
    ebx = POP32_VAL(esp); /* 0x1505D727: pop ebx */
    esp = ebp; ebp = POP32_VAL(esp); /* 0x1505D728: leave  */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1505D729: ret  */
    RECOMP_REGS_OUT();
}

void sub_1505D72D(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1505D72Du);

L_1505D72D:
    PUSH32(esp, 7); /* 0x1505D72D: push 7 */
    RECOMP_CALL(sub_15068F50); /* 0x1505D72F: call 0x15068f50 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1505D734: pop ecx */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1505D735: ret  */
    RECOMP_REGS_OUT();
}

void sub_1505D73C(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1505D73Cu);

L_1505D73C:
    edi = edi; /* 0x1505D73C: mov edi, edi */
    PUSH32(esp, ebp); /* 0x1505D73E: push ebp */
    ebp = esp; /* 0x1505D73F: mov ebp, esp */
    PUSH32(esp, ecx); /* 0x1505D741: push ecx */
    PUSH32(esp, esi); /* 0x1505D742: push esi */
    esi = MEM32(0x150BDFCC); /* 0x1505D743: mov esi, dword ptr [0x150bdfcc] */
    PUSH32(esp, edi); /* 0x1505D749: push edi */
    /* test esi, esi */ /* 0x1505D74A: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1505D769; /* 0x1505D74C: jne 0x1505d769 */
L_1505D74E:
    /* cmp MEM32(0x150BDFD0), esi */ /* 0x1505D74E: cmp dword ptr [0x150bdfd0], esi */
    _flag_a = (uint32_t)(MEM32(0x150BDFD0)); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1505D7B6; /* 0x1505D754: je 0x1505d7b6 */
L_1505D756:
    RECOMP_CALL(sub_15061BF1); /* 0x1505D756: call 0x15061bf1 */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x1505D75B: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1505D7B6; /* 0x1505D75D: jne 0x1505d7b6 */
L_1505D75F:
    esi = MEM32(0x150BDFCC); /* 0x1505D75F: mov esi, dword ptr [0x150bdfcc] */
    /* test esi, esi */ /* 0x1505D765: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1505D7B6; /* 0x1505D767: je 0x1505d7b6 */
L_1505D769:
    /* cmp MEM32(ebp + 0x8), 0 */ /* 0x1505D769: cmp dword ptr [ebp + 8], 0 */
    _flag_a = (uint32_t)(MEM32(ebp + 0x8)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1505D7B6; /* 0x1505D76D: je 0x1505d7b6 */
L_1505D76F:
    edi = MEM32(ebp + 0x8); /* 0x1505D76F: mov edi, dword ptr [ebp + 8] */
    ecx = edi + 0x1; /* 0x1505D772: lea ecx, [edi + 1] */
L_1505D775:
    SET_LO8(eax, MEM8(edi)); /* 0x1505D775: mov al, byte ptr [edi] */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(1);
    edi = edi + 1; /* 0x1505D777: inc edi */
    _flag_k = FK_INC;
    /* test LO8(eax), LO8(eax) */ /* 0x1505D778: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1505D775; /* 0x1505D77A: jne 0x1505d775 */
L_1505D77C:
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    edi = edi - ecx; /* 0x1505D77C: sub edi, ecx */
    _flag_k = FK_CMP;
    goto L_1505D7B0; /* 0x1505D77E: jmp 0x1505d7b0 */
L_1505D780:
    edx = ecx; /* 0x1505D780: mov edx, ecx */
    eax = edx + 0x1; /* 0x1505D782: lea eax, [edx + 1] */
    MEM32(ebp + (-0x4)) = eax; /* 0x1505D785: mov dword ptr [ebp - 4], eax */
L_1505D788:
    SET_LO8(eax, MEM8(edx)); /* 0x1505D788: mov al, byte ptr [edx] */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(1);
    edx = edx + 1; /* 0x1505D78A: inc edx */
    _flag_k = FK_INC;
    /* test LO8(eax), LO8(eax) */ /* 0x1505D78B: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1505D788; /* 0x1505D78D: jne 0x1505d788 */
L_1505D78F:
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(MEM32(ebp + (-0x4)));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    edx = edx - MEM32(ebp + (-0x4)); /* 0x1505D78F: sub edx, dword ptr [ebp - 4] */
    _flag_k = FK_CMP;
    /* cmp edx, edi */ /* 0x1505D792: cmp edx, edi */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_1505D7AD; /* 0x1505D794: jbe 0x1505d7ad */
L_1505D796:
    /* cmp MEM8(ecx + edi), 0x3Du */ /* 0x1505D796: cmp byte ptr [ecx + edi], 0x3d */
    _flag_a = (uint32_t)(MEM8(ecx + edi)) << 24; _flag_b = (uint32_t)(0x3Du) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_1505D7AD; /* 0x1505D79A: jne 0x1505d7ad */
L_1505D79C:
    PUSH32(esp, edi); /* 0x1505D79C: push edi */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x1505D79D: push dword ptr [ebp + 8] */
    PUSH32(esp, ecx); /* 0x1505D7A0: push ecx */
    RECOMP_CALL(sub_15053BB0); /* 0x1505D7A1: call 0x15053bb0 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x1505D7A6: add esp, 0xc */
    _flag_k = FK_ADD;
    /* test eax, eax */ /* 0x1505D7A9: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1505D7BC; /* 0x1505D7AB: je 0x1505d7bc */
L_1505D7AD:
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esi = esi + 4; /* 0x1505D7AD: add esi, 4 */
    _flag_k = FK_ADD;
L_1505D7B0:
    ecx = MEM32(esi); /* 0x1505D7B0: mov ecx, dword ptr [esi] */
    /* test ecx, ecx */ /* 0x1505D7B2: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1505D780; /* 0x1505D7B4: jne 0x1505d780 */
L_1505D7B6:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1505D7B6: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
L_1505D7B8:
    edi = POP32_VAL(esp); /* 0x1505D7B8: pop edi */
    esi = POP32_VAL(esp); /* 0x1505D7B9: pop esi */
    esp = ebp; ebp = POP32_VAL(esp); /* 0x1505D7BA: leave  */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1505D7BB: ret  */
L_1505D7BC:
    eax = MEM32(esi); /* 0x1505D7BC: mov eax, dword ptr [esi] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x1505D7BE: inc eax */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + edi; /* 0x1505D7BF: add eax, edi */
    _flag_k = FK_ADD;
    RECOMP_BACKEDGE();
    goto L_1505D7B8; /* 0x1505D7C1: jmp 0x1505d7b8 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    RECOMP_REGS_OUT();
}

void sub_1505D7D0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1505D7D0u);

L_1505D7D0:
    PUSH32(esp, 0xCu); /* 0x1505D7D0: push 0xc */
    PUSH32(esp, 0x150B0C88u); /* 0x1505D7D2: push 0x150b0c88 */
    RECOMP_CALL(sub_1505E988); /* 0x1505D7D7: call 0x1505e988 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    esi = 0; /* 0x1505D7DC: xor esi, esi */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x1C)) = esi; /* 0x1505D7DE: mov dword ptr [ebp - 0x1c], esi */
    /* cmp MEM32(ebp + 0x8), esi */ /* 0x1505D7E1: cmp dword ptr [ebp + 8], esi */
    _flag_a = (uint32_t)(MEM32(ebp + 0x8)); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_1505D802; /* 0x1505D7E4: jne 0x1505d802 */
L_1505D7E6:
    RECOMP_CALL(sub_15036430); /* 0x1505D7E6: call 0x15036430 */
    RECOMP_FLAGS_IN();
    MEM32(eax) = 0x16u; /* 0x1505D7EB: mov dword ptr [eax], 0x16 */
    PUSH32(esp, esi); /* 0x1505D7F1: push esi */
    PUSH32(esp, esi); /* 0x1505D7F2: push esi */
    PUSH32(esp, esi); /* 0x1505D7F3: push esi */
    PUSH32(esp, esi); /* 0x1505D7F4: push esi */
    PUSH32(esp, esi); /* 0x1505D7F5: push esi */
    RECOMP_CALL(sub_1505A110); /* 0x1505D7F6: call 0x1505a110 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x14u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x14u; /* 0x1505D7FB: add esp, 0x14 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1505D7FE: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_1505D829; /* 0x1505D800: jmp 0x1505d829 */
L_1505D802:
    PUSH32(esp, 7); /* 0x1505D802: push 7 */
    RECOMP_CALL(sub_15068D80); /* 0x1505D804: call 0x15068d80 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1505D809: pop ecx */
    MEM32(ebp + (-0x4)) = esi; /* 0x1505D80A: mov dword ptr [ebp - 4], esi */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x1505D80D: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_1505D73C); /* 0x1505D810: call 0x1505d73c */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1505D815: pop ecx */
    esi = eax; /* 0x1505D816: mov esi, eax */
    MEM32(ebp + (-0x1C)) = esi; /* 0x1505D818: mov dword ptr [ebp - 0x1c], esi */
    MEM32(ebp + (-0x4)) = 0xFFFFFFFEu; /* 0x1505D81B: mov dword ptr [ebp - 4], 0xfffffffe */
    RECOMP_CALL(sub_1505D83C); /* 0x1505D822: call 0x1505d83c */
    RECOMP_FLAGS_IN();
    eax = esi; /* 0x1505D827: mov eax, esi */
L_1505D829:
    ecx = MEM32(ebp + (-0x10)); /* 0x1505D829: mov ecx, dword ptr [ebp - 0x10] */
    MEM32(FS_BASE + (0)) = ecx; /* 0x1505D82C: mov dword ptr fs:[0], ecx */
    ecx = POP32_VAL(esp); /* 0x1505D833: pop ecx */
    edi = POP32_VAL(esp); /* 0x1505D834: pop edi */
    esi = POP32_VAL(esp); /* 0x1505D835: pop esi */
    ebx = POP32_VAL(esp); /* 0x1505D836: pop ebx */
    esp = ebp; ebp = POP32_VAL(esp); /* 0x1505D837: leave  */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1505D838: ret  */
    RECOMP_REGS_OUT();
}

void sub_1505D83C(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1505D83Cu);

L_1505D83C:
    PUSH32(esp, 7); /* 0x1505D83C: push 7 */
    RECOMP_CALL(sub_15068F50); /* 0x1505D83E: call 0x15068f50 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1505D843: pop ecx */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1505D844: ret  */
    RECOMP_REGS_OUT();
}

void sub_1505D850(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1505D850u);

L_1505D850:
    PUSH32(esp, 0xCu); /* 0x1505D850: push 0xc */
    PUSH32(esp, 0x150B0CA8u); /* 0x1505D852: push 0x150b0ca8 */
    RECOMP_CALL(sub_1505E988); /* 0x1505D857: call 0x1505e988 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 7); /* 0x1505D85C: push 7 */
    RECOMP_CALL(sub_15068D80); /* 0x1505D85E: call 0x15068d80 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1505D863: pop ecx */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ebx = 0; /* 0x1505D864: xor ebx, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x4)) = ebx; /* 0x1505D866: mov dword ptr [ebp - 4], ebx */
    edi = MEM32(ebp + 0x8); /* 0x1505D869: mov edi, dword ptr [ebp + 8] */
    /* test edi, edi */ /* 0x1505D86C: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1505D8EB; /* 0x1505D86E: je 0x1505d8eb */
L_1505D870:
    MEM32(edi) = ebx; /* 0x1505D870: mov dword ptr [edi], ebx */
    esi = MEM32(ebp + 0xC); /* 0x1505D872: mov esi, dword ptr [ebp + 0xc] */
    /* test esi, esi */ /* 0x1505D875: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1505D882; /* 0x1505D877: je 0x1505d882 */
L_1505D879:
    /* cmp MEM32(ebp + 0x10), ebx */ /* 0x1505D879: cmp dword ptr [ebp + 0x10], ebx */
    _flag_a = (uint32_t)(MEM32(ebp + 0x10)); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_A(_flag_a, _flag_b)) goto L_1505D888; /* 0x1505D87C: ja 0x1505d888 */
L_1505D87E:
    /* test esi, esi */ /* 0x1505D87E: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1505D8EB; /* 0x1505D880: jne 0x1505d8eb */
L_1505D882:
    /* cmp MEM32(ebp + 0x10), 0 */ /* 0x1505D882: cmp dword ptr [ebp + 0x10], 0 */
    _flag_a = (uint32_t)(MEM32(ebp + 0x10)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_1505D8EB; /* 0x1505D886: jne 0x1505d8eb */
L_1505D888:
    /* test esi, esi */ /* 0x1505D888: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1505D88E; /* 0x1505D88A: je 0x1505d88e */
L_1505D88C:
    MEM8(esi) = (uint8_t)(LO8(ebx)); /* 0x1505D88C: mov byte ptr [esi], bl */
L_1505D88E:
    PUSH32(esp, MEM32(ebp + 0x14)); /* 0x1505D88E: push dword ptr [ebp + 0x14] */
    RECOMP_CALL(sub_1505D73C); /* 0x1505D891: call 0x1505d73c */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1505D896: pop ecx */
    edx = eax; /* 0x1505D897: mov edx, eax */
    /* test edx, edx */ /* 0x1505D899: test edx, edx */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(edx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1505D8A1; /* 0x1505D89B: jne 0x1505d8a1 */
L_1505D89D:
    esi = ebx; /* 0x1505D89D: mov esi, ebx */
    goto L_1505D902; /* 0x1505D89F: jmp 0x1505d902 */
L_1505D8A1:
    ecx = edx; /* 0x1505D8A1: mov ecx, edx */
    ebx = ecx + 0x1; /* 0x1505D8A3: lea ebx, [ecx + 1] */
L_1505D8A6:
    SET_LO8(eax, MEM8(ecx)); /* 0x1505D8A6: mov al, byte ptr [ecx] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx + 1; /* 0x1505D8A8: inc ecx */
    _flag_k = FK_INC;
    /* test LO8(eax), LO8(eax) */ /* 0x1505D8A9: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1505D8A6; /* 0x1505D8AB: jne 0x1505d8a6 */
L_1505D8AD:
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ecx = ecx - ebx; /* 0x1505D8AD: sub ecx, ebx */
    _flag_k = FK_CMP;
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx + 1; /* 0x1505D8AF: inc ecx */
    _flag_k = FK_INC;
    MEM32(edi) = ecx; /* 0x1505D8B0: mov dword ptr [edi], ecx */
    /* cmp MEM32(ebp + 0x10), 0 */ /* 0x1505D8B2: cmp dword ptr [ebp + 0x10], 0 */
    _flag_a = (uint32_t)(MEM32(ebp + 0x10)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_1505D8BC; /* 0x1505D8B6: jne 0x1505d8bc */
L_1505D8B8:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    esi = 0; /* 0x1505D8B8: xor esi, esi */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_1505D902; /* 0x1505D8BA: jmp 0x1505d902 */
L_1505D8BC:
    /* cmp ecx, MEM32(ebp + 0x10) */ /* 0x1505D8BC: cmp ecx, dword ptr [ebp + 0x10] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(MEM32(ebp + 0x10));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_1505D8C6; /* 0x1505D8BF: jbe 0x1505d8c6 */
L_1505D8C1:
    PUSH32(esp, 0x22u); /* 0x1505D8C1: push 0x22 */
    esi = POP32_VAL(esp); /* 0x1505D8C3: pop esi */
    goto L_1505D902; /* 0x1505D8C4: jmp 0x1505d902 */
L_1505D8C6:
    PUSH32(esp, edx); /* 0x1505D8C6: push edx */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x1505D8C7: push dword ptr [ebp + 0x10] */
    PUSH32(esp, esi); /* 0x1505D8CA: push esi */
    RECOMP_CALL(sub_1508E640); /* 0x1505D8CB: call 0x1508e640 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x1505D8D0: add esp, 0xc */
    _flag_k = FK_ADD;
    /* test eax, eax */ /* 0x1505D8D3: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_Z(_flag_a, _flag_b)) goto L_1505D8B8; /* 0x1505D8D5: je 0x1505d8b8 */
L_1505D8D7:
    PUSH32(esp, 0); /* 0x1505D8D7: push 0 */
    PUSH32(esp, 0); /* 0x1505D8D9: push 0 */
    PUSH32(esp, 0); /* 0x1505D8DB: push 0 */
    PUSH32(esp, 0); /* 0x1505D8DD: push 0 */
    PUSH32(esp, 0); /* 0x1505D8DF: push 0 */
    RECOMP_CALL(sub_1505A11B); /* 0x1505D8E1: call 0x1505a11b */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x14u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x14u; /* 0x1505D8E6: add esp, 0x14 */
    _flag_k = FK_ADD;
    RECOMP_BACKEDGE();
    goto L_1505D8B8; /* 0x1505D8E9: jmp 0x1505d8b8 */
L_1505D8EB:
    RECOMP_CALL(sub_15036430); /* 0x1505D8EB: call 0x15036430 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0x16u); /* 0x1505D8F0: push 0x16 */
    esi = POP32_VAL(esp); /* 0x1505D8F2: pop esi */
    PUSH32(esp, ebx); /* 0x1505D8F3: push ebx */
    PUSH32(esp, ebx); /* 0x1505D8F4: push ebx */
    PUSH32(esp, ebx); /* 0x1505D8F5: push ebx */
    PUSH32(esp, ebx); /* 0x1505D8F6: push ebx */
    PUSH32(esp, ebx); /* 0x1505D8F7: push ebx */
    MEM32(eax) = esi; /* 0x1505D8F8: mov dword ptr [eax], esi */
    RECOMP_CALL(sub_1505A110); /* 0x1505D8FA: call 0x1505a110 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x14u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x14u; /* 0x1505D8FF: add esp, 0x14 */
    _flag_k = FK_ADD;
L_1505D902:
    MEM32(ebp + (-0x1C)) = esi; /* 0x1505D902: mov dword ptr [ebp - 0x1c], esi */
    MEM32(ebp + (-0x4)) = 0xFFFFFFFEu; /* 0x1505D905: mov dword ptr [ebp - 4], 0xfffffffe */
    RECOMP_CALL(sub_1505D926); /* 0x1505D90C: call 0x1505d926 */
    RECOMP_FLAGS_IN();
    eax = esi; /* 0x1505D911: mov eax, esi */
    ecx = MEM32(ebp + (-0x10)); /* 0x1505D913: mov ecx, dword ptr [ebp - 0x10] */
    MEM32(FS_BASE + (0)) = ecx; /* 0x1505D916: mov dword ptr fs:[0], ecx */
    ecx = POP32_VAL(esp); /* 0x1505D91D: pop ecx */
    edi = POP32_VAL(esp); /* 0x1505D91E: pop edi */
    esi = POP32_VAL(esp); /* 0x1505D91F: pop esi */
    ebx = POP32_VAL(esp); /* 0x1505D920: pop ebx */
    esp = ebp; ebp = POP32_VAL(esp); /* 0x1505D921: leave  */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1505D922: ret  */
    RECOMP_REGS_OUT();
}

void sub_1505D926(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1505D926u);

L_1505D926:
    PUSH32(esp, 7); /* 0x1505D926: push 7 */
    RECOMP_CALL(sub_15068F50); /* 0x1505D928: call 0x15068f50 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1505D92D: pop ecx */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1505D92E: ret  */
    RECOMP_REGS_OUT();
}

void sub_1505D940(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1505D940u);

L_1505D940:
    RECOMP_CALL(sub_15068820); /* 0x1505D940: call 0x15068820 */
    RECOMP_FLAGS_IN();
    ecx = MEM32(eax + 0x6C); /* 0x1505D945: mov ecx, dword ptr [eax + 0x6c] */
    /* cmp ecx, MEM32(0x150BC074) */ /* 0x1505D948: cmp ecx, dword ptr [0x150bc074] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(MEM32(0x150BC074));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1505D964; /* 0x1505D94E: je 0x1505d964 */
L_1505D950:
    /* test MEM8(eax + 0x70), 2 */ /* 0x1505D950: test byte ptr [eax + 0x70], 2 */
    _flag_a = (uint32_t)(MEM8(eax + 0x70)) << 24; _flag_b = (uint32_t)(2) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1505D964; /* 0x1505D954: jne 0x1505d964 */
L_1505D956:
    /* test MEM8(0x150BD32C), 1 */ /* 0x1505D956: test byte ptr [0x150bd32c], 1 */
    _flag_a = (uint32_t)(MEM8(0x150BD32C)) << 24; _flag_b = (uint32_t)(1) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_1505D964; /* 0x1505D95D: je 0x1505d964 */
L_1505D95F:
    RECOMP_CALL(sub_15057225); /* 0x1505D95F: call 0x15057225 */
    RECOMP_FLAGS_IN();
L_1505D964:
    eax = MEM32(0x150BC170); /* 0x1505D964: mov eax, dword ptr [0x150bc170] */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1505D969: ret  */
    RECOMP_REGS_OUT();
}

void sub_1505D970(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1505D970u);

L_1505D970:
    edi = edi; /* 0x1505D970: mov edi, edi */
    PUSH32(esp, ebp); /* 0x1505D972: push ebp */
    ebp = esp; /* 0x1505D973: mov ebp, esp */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x1505D975: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_1505EAB3); /* 0x1505D978: call 0x1505eab3 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1505D97D: pop ecx */
    ebp = POP32_VAL(esp); /* 0x1505D97E: pop ebp */
    goto L_15061C84; /* 0x1505D97F: jmp 0x15061c84 */
L_15061C84:
    PUSH32(esp, ebp); /* 0x15061C84: push ebp */
    ebp = esp; /* 0x15061C85: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x50u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x50u; /* 0x15061C87: sub esp, 0x50 */
    _flag_k = FK_CMP;
    ebx = MEM32(esp + 0x58); /* 0x15061C8A: mov ebx, dword ptr [esp + 0x58] */
    MEM32(ebp + (-0x50)) = 0x80000026u; /* 0x15061C8E: mov dword ptr [ebp - 0x50], 0x80000026 */
    MEM32(ebp + (-0x4C)) = 0; /* 0x15061C95: mov dword ptr [ebp - 0x4c], 0 */
    MEM32(ebp + (-0x48)) = 0; /* 0x15061C9C: mov dword ptr [ebp - 0x48], 0 */
    MEM32(ebp + (-0x44)) = 0; /* 0x15061CA3: mov dword ptr [ebp - 0x44], 0 */
    MEM32(ebp + (-0x40)) = 0; /* 0x15061CAA: mov dword ptr [ebp - 0x40], 0 */
    eax = ebp + (-0x50); /* 0x15061CB1: lea eax, [ebp - 0x50] */
    ebp = MEM32(ebx); /* 0x15061CB4: mov ebp, dword ptr [ebx] */
    esi = MEM32(ebx + 0x18); /* 0x15061CB6: mov esi, dword ptr [ebx + 0x18] */
    /* cmp esi, MEM32(FS_BASE + (0)) */ /* 0x15061CB9: cmp esi, dword ptr fs:[0] */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(MEM32(FS_BASE + (0)));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_15061CD4; /* 0x15061CC0: je 0x15061cd4 */
L_15061CC2:
    PUSH32(esp, ebx); /* 0x15061CC2: push ebx */
    PUSH32(esp, esi); /* 0x15061CC3: push esi */
    PUSH32(esp, 0); /* 0x15061CC4: push 0 */
    PUSH32(esp, eax); /* 0x15061CC6: push eax */
    PUSH32(esp, 0x15061CD2u); /* 0x15061CC7: push 0x15061cd2 */
    PUSH32(esp, esi); /* 0x15061CCC: push esi */
    RECOMP_CALL(sub_150AF768); /* 0x15061CCD: call 0x150af768 */
    RECOMP_FLAGS_IN();
    esi = POP32_VAL(esp); /* 0x15061CD2: pop esi */
    ebx = POP32_VAL(esp); /* 0x15061CD3: pop ebx */
L_15061CD4:
    /* cmp esi, 0 */ /* 0x15061CD4: cmp esi, 0 */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_15061D09; /* 0x15061CD7: je 0x15061d09 */
L_15061CD9:
    eax = ebx + 0x20; /* 0x15061CD9: lea eax, [ebx + 0x20] */
    PUSH32(esp, eax); /* 0x15061CDC: push eax */
    RECOMP_CALL(sub_15061EF9); /* 0x15061CDD: call 0x15061ef9 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)((eax | eax)); _flag_b = (uint32_t)((eax | eax));
    eax = eax | eax; /* 0x15061CE2: or eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_15061CFC; /* 0x15061CE4: je 0x15061cfc */
L_15061CE6:
    eax = MEM32(ebx + 0x20); /* 0x15061CE6: mov eax, dword ptr [ebx + 0x20] */
    /* cmp eax, 0x56433230u */ /* 0x15061CE9: cmp eax, 0x56433230 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x56433230u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_15061CFC; /* 0x15061CEE: jne 0x15061cfc */
L_15061CF0:
    eax = MEM32(ebx + 0x24); /* 0x15061CF0: mov eax, dword ptr [ebx + 0x24] */
    _flag_a = (uint32_t)((eax | eax)); _flag_b = (uint32_t)((eax | eax));
    eax = eax | eax; /* 0x15061CF3: or eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_15061D09; /* 0x15061CF5: je 0x15061d09 */
L_15061CF7:
    PUSH32(esp, ebx); /* 0x15061CF7: push ebx */
    RECOMP_ICALL(eax); /* 0x15061CF8: call eax */
    RECOMP_FLAGS_IN();
    goto L_15061D09; /* 0x15061CFA: jmp 0x15061d09 */
L_15061CFC:
    eax = MEM32(ebx + 0x1C); /* 0x15061CFC: mov eax, dword ptr [ebx + 0x1c] */
    PUSH32(esp, eax); /* 0x15061CFF: push eax */
    PUSH32(esp, esi); /* 0x15061D00: push esi */
    RECOMP_CALL(sub_150595D5); /* 0x15061D01: call 0x150595d5 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 8; /* 0x15061D06: add esp, 8 */
    _flag_k = FK_ADD;
L_15061D09:
    PUSH32(esp, 0); /* 0x15061D09: push 0 */
    eax = MEM32(ebx + 0x14); /* 0x15061D0B: mov eax, dword ptr [ebx + 0x14] */
    RECOMP_CALL(sub_15059685); /* 0x15061D0E: call 0x15059685 */
    RECOMP_FLAGS_IN();
    edx = ebx; /* 0x15061D13: mov edx, ebx */
    ebx = MEM32(edx + 0x4); /* 0x15061D15: mov ebx, dword ptr [edx + 4] */
    edi = MEM32(edx + 0x8); /* 0x15061D18: mov edi, dword ptr [edx + 8] */
    esi = MEM32(edx + 0xC); /* 0x15061D1B: mov esi, dword ptr [edx + 0xc] */
    eax = MEM32(esp + 0x5C); /* 0x15061D1E: mov eax, dword ptr [esp + 0x5c] */
    /* cmp eax, 1 */ /* 0x15061D22: cmp eax, 1 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    { uint32_t _aa = eax, _ab = 0, _ac = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x15061D25: adc eax, 0 */
      eax = _aa + _ab + _ac;
      _flag_a = recomp_flags_adc(_aa, _ab, _ac); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    esp = MEM32(edx + 0x10); /* 0x15061D28: mov esp, dword ptr [edx + 0x10] */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x15061D2B: add esp, 4 */
    _flag_k = FK_ADD;
    { _itail_tgt = (uint32_t)(MEM32(edx + 0x14)); goto _ljump; }
    { RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_1505D990(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1505D990u);

L_1505D990:
    PUSH32(esp, 0xCu); /* 0x1505D990: push 0xc */
    PUSH32(esp, 0x150B0CE8u); /* 0x1505D992: push 0x150b0ce8 */
    RECOMP_CALL(sub_1505E988); /* 0x1505D997: call 0x1505e988 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 2); /* 0x1505D99C: push 2 */
    esi = POP32_VAL(esp); /* 0x1505D99E: pop esi */
    MEM32(ebp + (-0x1C)) = esi; /* 0x1505D99F: mov dword ptr [ebp - 0x1c], esi */
    PUSH32(esp, esi); /* 0x1505D9A2: push esi */
    RECOMP_CALL(sub_1504BA49); /* 0x1505D9A3: call 0x1504ba49 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1505D9A8: pop ecx */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x4))); _flag_b = (uint32_t)(0);
    MEM32(ebp + (-0x4)) = MEM32(ebp + (-0x4)) & 0; /* 0x1505D9A9: and dword ptr [ebp - 4], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    edx = MEM32(ebp + 0x8); /* 0x1505D9AD: mov edx, dword ptr [ebp + 8] */
    /* test edx, edx */ /* 0x1505D9B0: test edx, edx */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(edx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1505D9DE; /* 0x1505D9B2: je 0x1505d9de */
L_1505D9B4:
    /* cmp MEM8(edx), 0 */ /* 0x1505D9B4: cmp byte ptr [edx], 0 */
    _flag_a = (uint32_t)(MEM8(edx)) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1505D9DE; /* 0x1505D9B7: je 0x1505d9de */
L_1505D9B9:
    ecx = edx; /* 0x1505D9B9: mov ecx, edx */
    edi = ecx + 0x1; /* 0x1505D9BB: lea edi, [ecx + 1] */
L_1505D9BE:
    SET_LO8(eax, MEM8(ecx)); /* 0x1505D9BE: mov al, byte ptr [ecx] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx + 1; /* 0x1505D9C0: inc ecx */
    _flag_k = FK_INC;
    /* test LO8(eax), LO8(eax) */ /* 0x1505D9C1: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1505D9BE; /* 0x1505D9C3: jne 0x1505d9be */
L_1505D9C5:
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ecx = ecx - edi; /* 0x1505D9C5: sub ecx, edi */
    _flag_k = FK_CMP;
    PUSH32(esp, ecx); /* 0x1505D9C7: push ecx */
    PUSH32(esp, edx); /* 0x1505D9C8: push edx */
    PUSH32(esp, esi); /* 0x1505D9C9: push esi */
    RECOMP_CALL(sub_1504EED1); /* 0x1505D9CA: call 0x1504eed1 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, esi); /* 0x1505D9CF: push esi */
    PUSH32(esp, 0x15005C9Cu); /* 0x1505D9D0: push 0x15005c9c */
    PUSH32(esp, esi); /* 0x1505D9D5: push esi */
    RECOMP_CALL(sub_1504EED1); /* 0x1505D9D6: call 0x1504eed1 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x18u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x18u; /* 0x1505D9DB: add esp, 0x18 */
    _flag_k = FK_ADD;
L_1505D9DE:
    RECOMP_CALL(sub_15036430); /* 0x1505D9DE: call 0x15036430 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, MEM32(eax)); /* 0x1505D9E3: push dword ptr [eax] */
    RECOMP_CALL(sub_15059547); /* 0x1505D9E5: call 0x15059547 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1505D9EA: pop ecx */
    edx = eax; /* 0x1505D9EB: mov edx, eax */
    edi = edx + 0x1; /* 0x1505D9ED: lea edi, [edx + 1] */
L_1505D9F0:
    SET_LO8(ecx, MEM8(edx)); /* 0x1505D9F0: mov cl, byte ptr [edx] */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(1);
    edx = edx + 1; /* 0x1505D9F2: inc edx */
    _flag_k = FK_INC;
    /* test LO8(ecx), LO8(ecx) */ /* 0x1505D9F3: test cl, cl */
    _flag_a = (uint32_t)(LO8(ecx)) << 24; _flag_b = (uint32_t)(LO8(ecx)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1505D9F0; /* 0x1505D9F5: jne 0x1505d9f0 */
L_1505D9F7:
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    edx = edx - edi; /* 0x1505D9F7: sub edx, edi */
    _flag_k = FK_CMP;
    PUSH32(esp, edx); /* 0x1505D9F9: push edx */
    PUSH32(esp, eax); /* 0x1505D9FA: push eax */
    PUSH32(esp, esi); /* 0x1505D9FB: push esi */
    RECOMP_CALL(sub_1504EED1); /* 0x1505D9FC: call 0x1504eed1 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 1); /* 0x1505DA01: push 1 */
    PUSH32(esp, 0x15005B2Cu); /* 0x1505DA03: push 0x15005b2c */
    PUSH32(esp, esi); /* 0x1505DA08: push esi */
    RECOMP_CALL(sub_1504EED1); /* 0x1505DA09: call 0x1504eed1 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x18u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x18u; /* 0x1505DA0E: add esp, 0x18 */
    _flag_k = FK_ADD;
    MEM32(ebp + (-0x4)) = 0xFFFFFFFEu; /* 0x1505DA11: mov dword ptr [ebp - 4], 0xfffffffe */
    RECOMP_CALL(sub_1505DA30); /* 0x1505DA18: call 0x1505da30 */
    RECOMP_FLAGS_IN();
    ecx = MEM32(ebp + (-0x10)); /* 0x1505DA1D: mov ecx, dword ptr [ebp - 0x10] */
    MEM32(FS_BASE + (0)) = ecx; /* 0x1505DA20: mov dword ptr fs:[0], ecx */
    ecx = POP32_VAL(esp); /* 0x1505DA27: pop ecx */
    edi = POP32_VAL(esp); /* 0x1505DA28: pop edi */
    esi = POP32_VAL(esp); /* 0x1505DA29: pop esi */
    ebx = POP32_VAL(esp); /* 0x1505DA2A: pop ebx */
    esp = ebp; ebp = POP32_VAL(esp); /* 0x1505DA2B: leave  */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1505DA2C: ret  */
    RECOMP_REGS_OUT();
}

void sub_1505DA30(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1505DA30u);

L_1505DA30:
    PUSH32(esp, esi); /* 0x1505DA30: push esi */
    RECOMP_CALL(sub_1504C004); /* 0x1505DA31: call 0x1504c004 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1505DA36: pop ecx */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1505DA37: ret  */
    RECOMP_REGS_OUT();
}

void sub_1505DA40(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1505DA40u);

L_1505DA40:
    edi = edi; /* 0x1505DA40: mov edi, edi */
    PUSH32(esp, ebp); /* 0x1505DA42: push ebp */
    ebp = esp; /* 0x1505DA43: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x118u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x118u; /* 0x1505DA45: sub esp, 0x118 */
    _flag_k = FK_CMP;
    eax = MEM32(0x150BD340); /* 0x1505DA4B: mov eax, dword ptr [0x150bd340] */
    _flag_a = (uint32_t)((eax ^ ebp)); _flag_b = (uint32_t)((eax ^ ebp));
    eax = eax ^ ebp; /* 0x1505DA50: xor eax, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x4)) = eax; /* 0x1505DA52: mov dword ptr [ebp - 4], eax */
    eax = MEM32(ebp + 0x14); /* 0x1505DA55: mov eax, dword ptr [ebp + 0x14] */
    PUSH32(esp, ebx); /* 0x1505DA58: push ebx */
    ebx = MEM32(ebp + 0xC); /* 0x1505DA59: mov ebx, dword ptr [ebp + 0xc] */
    PUSH32(esp, esi); /* 0x1505DA5C: push esi */
    esi = MEM32(ebp + 0x10); /* 0x1505DA5D: mov esi, dword ptr [ebp + 0x10] */
    PUSH32(esp, edi); /* 0x1505DA60: push edi */
    edi = MEM32(ebp + 0x8); /* 0x1505DA61: mov edi, dword ptr [ebp + 8] */
    MEM32(ebp + (-0x104)) = edi; /* 0x1505DA64: mov dword ptr [ebp - 0x104], edi */
    MEM32(ebp + (-0xF8)) = esi; /* 0x1505DA6A: mov dword ptr [ebp - 0xf8], esi */
    MEM32(ebp + (-0x108)) = eax; /* 0x1505DA70: mov dword ptr [ebp - 0x108], eax */
    /* test edi, edi */ /* 0x1505DA76: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1505DAAC; /* 0x1505DA78: jne 0x1505daac */
L_1505DA7A:
    /* test ebx, ebx */ /* 0x1505DA7A: test ebx, ebx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ebx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1505DAAC; /* 0x1505DA7C: je 0x1505daac */
L_1505DA7E:
    RECOMP_CALL(sub_15036430); /* 0x1505DA7E: call 0x15036430 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0); /* 0x1505DA83: push 0 */
    PUSH32(esp, 0); /* 0x1505DA85: push 0 */
    PUSH32(esp, 0); /* 0x1505DA87: push 0 */
    PUSH32(esp, 0); /* 0x1505DA89: push 0 */
    PUSH32(esp, 0); /* 0x1505DA8B: push 0 */
    MEM32(eax) = 0x16u; /* 0x1505DA8D: mov dword ptr [eax], 0x16 */
    RECOMP_CALL(sub_1505A110); /* 0x1505DA93: call 0x1505a110 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x14u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x14u; /* 0x1505DA98: add esp, 0x14 */
    _flag_k = FK_ADD;
L_1505DA9B:
    ecx = MEM32(ebp + (-0x4)); /* 0x1505DA9B: mov ecx, dword ptr [ebp - 4] */
    edi = POP32_VAL(esp); /* 0x1505DA9E: pop edi */
    esi = POP32_VAL(esp); /* 0x1505DA9F: pop esi */
    _flag_a = (uint32_t)((ecx ^ ebp)); _flag_b = (uint32_t)((ecx ^ ebp));
    ecx = ecx ^ ebp; /* 0x1505DAA0: xor ecx, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    ebx = POP32_VAL(esp); /* 0x1505DAA2: pop ebx */
    RECOMP_CALL(sub_1505E540); /* 0x1505DAA3: call 0x1505e540 */
    RECOMP_FLAGS_IN();
    esp = ebp; /* 0x1505DAA8: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x1505DAAA: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1505DAAB: ret  */
L_1505DAAC:
    /* test esi, esi */ /* 0x1505DAAC: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_Z(_flag_a, _flag_b)) goto L_1505DA7E; /* 0x1505DAAE: je 0x1505da7e */
L_1505DAB0:
    /* test eax, eax */ /* 0x1505DAB0: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_Z(_flag_a, _flag_b)) goto L_1505DA7E; /* 0x1505DAB2: je 0x1505da7e */
L_1505DAB4:
    /* cmp ebx, 2 */ /* 0x1505DAB4: cmp ebx, 2 */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_1505DA9B; /* 0x1505DAB7: jb 0x1505da9b */
L_1505DAB9:
    ecx = eax; /* 0x1505DAB9: mov ecx, eax */
    RECOMP_CALL(sub_1505EB74); /* 0x1505DABB: call 0x1505eb74 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(1);
    ebx = ebx - 1; /* 0x1505DAC0: dec ebx */
    _flag_k = FK_DEC;
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x1505DAC1: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    ebx = (uint32_t)((int32_t)ebx * (int32_t)esi); /* 0x1505DAC3: imul ebx, esi */
    MEM32(ebp + (-0x10C)) = ecx; /* 0x1505DAC6: mov dword ptr [ebp - 0x10c], ecx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ebx = ebx + edi; /* 0x1505DACC: add ebx, edi */
    _flag_k = FK_ADD;
L_1505DACE:
    MEM32(ebp + (-0x110)) = ebx; /* 0x1505DACE: mov dword ptr [ebp - 0x110], ebx */
L_1505DAD4:
    eax = ebx; /* 0x1505DAD4: mov eax, ebx */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edx = 0; /* 0x1505DAD6: xor edx, edx */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - edi; /* 0x1505DAD8: sub eax, edi */
    _flag_k = FK_CMP;
    { uint64_t _dividend = ((uint64_t)edx << 32) | eax; uint32_t _dv = (uint32_t)esi; /* 0x1505DADA: div esi */
      if (_dv) { eax = (uint32_t)(_dividend / _dv); edx = (uint32_t)(_dividend % _dv); }
      else { eax = 0; edx = 0; } }
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x1505DADC: inc eax */
    _flag_k = FK_INC;
    /* cmp eax, 8 */ /* 0x1505DADD: cmp eax, 8 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_A(_flag_a, _flag_b)) goto L_1505DB75; /* 0x1505DAE0: ja 0x1505db75 */
L_1505DAE6:
    /* cmp ebx, edi */ /* 0x1505DAE6: cmp ebx, edi */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_1505DE4B; /* 0x1505DAE8: jbe 0x1505de4b */
L_1505DAEE:
    eax = esi + edi; /* 0x1505DAEE: lea eax, [esi + edi] */
L_1505DAF1:
    edx = eax; /* 0x1505DAF1: mov edx, eax */
    MEM32(ebp + (-0xFC)) = eax; /* 0x1505DAF3: mov dword ptr [ebp - 0xfc], eax */
    /* cmp edx, ebx */ /* 0x1505DAF9: cmp edx, ebx */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_A(_flag_a, _flag_b)) goto L_1505DB32; /* 0x1505DAFB: ja 0x1505db32 */
L_1505DAFD:
    /* nop */ /* 0x1505DAFD: nop dword ptr [eax] */
L_1505DB00:
    ecx = MEM32(ebp + (-0x108)); /* 0x1505DB00: mov ecx, dword ptr [ebp - 0x108] */
    PUSH32(esp, edi); /* 0x1505DB06: push edi */
    PUSH32(esp, edx); /* 0x1505DB07: push edx */
    RECOMP_ICALL(MEM32(0x150C02B0)); /* 0x1505DB08: call dword ptr [0x150c02b0] */
    RECOMP_FLAGS_IN();
    RECOMP_ICALL(MEM32(ebp + (-0x108))); /* 0x1505DB0E: call dword ptr [ebp - 0x108] */
    RECOMP_FLAGS_IN();
    edx = MEM32(ebp + (-0xFC)); /* 0x1505DB14: mov edx, dword ptr [ebp - 0xfc] */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 8; /* 0x1505DB1A: add esp, 8 */
    _flag_k = FK_ADD;
    /* test eax, eax */ /* 0x1505DB1D: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = edx; /* 0x1505DB1F: mov ecx, edx */
    if ((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) == 0u || (((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) { ecx = edi; } /* 0x1505DB21: cmovle ecx, edi */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edx = edx + esi; /* 0x1505DB24: add edx, esi */
    _flag_k = FK_ADD;
    MEM32(ebp + (-0xFC)) = edx; /* 0x1505DB26: mov dword ptr [ebp - 0xfc], edx */
    edi = ecx; /* 0x1505DB2C: mov edi, ecx */
    /* cmp edx, ebx */ /* 0x1505DB2E: cmp edx, ebx */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_BE(_flag_a, _flag_b)) goto L_1505DB00; /* 0x1505DB30: jbe 0x1505db00 */
L_1505DB32:
    MEM32(ebp + (-0xFC)) = esi; /* 0x1505DB32: mov dword ptr [ebp - 0xfc], esi */
    edx = ebx; /* 0x1505DB38: mov edx, ebx */
    /* cmp edi, ebx */ /* 0x1505DB3A: cmp edi, ebx */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1505DB5B; /* 0x1505DB3C: je 0x1505db5b */
L_1505DB3E:
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    edi = edi - ebx; /* 0x1505DB3E: sub edi, ebx */
    _flag_k = FK_CMP;
L_1505DB40:
    SET_LO8(eax, MEM8(edx)); /* 0x1505DB40: mov al, byte ptr [edx] */
    edx = edx + 0x1; /* 0x1505DB42: lea edx, [edx + 1] */
    SET_LO8(ecx, MEM8(edi + edx + (-0x1))); /* 0x1505DB45: mov cl, byte ptr [edi + edx - 1] */
    MEM8(edi + edx + (-0x1)) = (uint8_t)(LO8(eax)); /* 0x1505DB49: mov byte ptr [edi + edx - 1], al */
    MEM8(edx + (-0x1)) = (uint8_t)(LO8(ecx)); /* 0x1505DB4D: mov byte ptr [edx - 1], cl */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esi = esi - 1; /* 0x1505DB50: sub esi, 1 */
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (/* sub result */ CMP_NE(_flag_a, _flag_b)) goto L_1505DB40; /* 0x1505DB53: jne 0x1505db40 */
L_1505DB55:
    esi = MEM32(ebp + (-0xF8)); /* 0x1505DB55: mov esi, dword ptr [ebp - 0xf8] */
L_1505DB5B:
    edi = MEM32(ebp + (-0x104)); /* 0x1505DB5B: mov edi, dword ptr [ebp - 0x104] */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ebx = ebx - esi; /* 0x1505DB61: sub ebx, esi */
    _flag_k = FK_CMP;
    eax = esi + edi; /* 0x1505DB63: lea eax, [esi + edi] */
    /* cmp ebx, edi */ /* 0x1505DB66: cmp ebx, edi */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_A(_flag_a, _flag_b)) goto L_1505DAF1; /* 0x1505DB68: ja 0x1505daf1 */
L_1505DB6A:
    ecx = MEM32(ebp + (-0x10C)); /* 0x1505DB6A: mov ecx, dword ptr [ebp - 0x10c] */
    goto L_1505DE4B; /* 0x1505DB70: jmp 0x1505de4b */
L_1505DB75:
    if (1u) _cf = (((eax) >> 0) & 1u); /* 0x1505DB75: shr eax, 1 */
    if (1u) { _flag_a = recomp_flags_pack((eax >> 1u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax >> 1u; /* 0x1505DB75: shr eax, 1 */
    eax = (uint32_t)((int32_t)eax * (int32_t)esi); /* 0x1505DB77: imul eax, esi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edi = edi + eax; /* 0x1505DB7A: add edi, eax */
    _flag_k = FK_ADD;
    MEM32(ebp + (-0x118)) = eax; /* 0x1505DB7C: mov dword ptr [ebp - 0x118], eax */
    PUSH32(esp, edi); /* 0x1505DB82: push edi */
    PUSH32(esp, MEM32(ebp + (-0x104))); /* 0x1505DB83: push dword ptr [ebp - 0x104] */
    MEM32(ebp + (-0xFC)) = edi; /* 0x1505DB89: mov dword ptr [ebp - 0xfc], edi */
    RECOMP_ICALL(MEM32(ebp + (-0x108))); /* 0x1505DB8F: call dword ptr [ebp - 0x108] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 8; /* 0x1505DB95: add esp, 8 */
    _flag_k = FK_ADD;
    /* test eax, eax */ /* 0x1505DB98: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    eax = MEM32(ebp + (-0x104)); /* 0x1505DB9A: mov eax, dword ptr [ebp - 0x104] */
    if ((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) == 0u || (((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_1505DBEA; /* 0x1505DBA0: jle 0x1505dbea */
L_1505DBA2:
    MEM32(ebp + (-0x114)) = esi; /* 0x1505DBA2: mov dword ptr [ebp - 0x114], esi */
    MEM32(ebp + (-0x100)) = edi; /* 0x1505DBA8: mov dword ptr [ebp - 0x100], edi */
    /* cmp eax, edi */ /* 0x1505DBAE: cmp eax, edi */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1505DBEA; /* 0x1505DBB0: je 0x1505dbea */
L_1505DBB2:
    ebx = MEM32(ebp + (-0x118)); /* 0x1505DBB2: mov ebx, dword ptr [ebp - 0x118] */
    esi = edi; /* 0x1505DBB8: mov esi, edi */
    edi = MEM32(ebp + (-0x114)); /* 0x1505DBBA: mov edi, dword ptr [ebp - 0x114] */
L_1505DBC0:
    SET_LO8(eax, MEM8(esi)); /* 0x1505DBC0: mov al, byte ptr [esi] */
    edx = esi; /* 0x1505DBC2: mov edx, esi */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    edx = edx - ebx; /* 0x1505DBC4: sub edx, ebx */
    _flag_k = FK_CMP;
    SET_LO8(ecx, MEM8(edx)); /* 0x1505DBC6: mov cl, byte ptr [edx] */
    MEM8(edx) = (uint8_t)(LO8(eax)); /* 0x1505DBC8: mov byte ptr [edx], al */
    MEM8(esi) = (uint8_t)(LO8(ecx)); /* 0x1505DBCA: mov byte ptr [esi], cl */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi + 1; /* 0x1505DBCC: inc esi */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(1);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    edi = edi - 1; /* 0x1505DBCD: sub edi, 1 */
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (/* sub result */ CMP_NE(_flag_a, _flag_b)) goto L_1505DBC0; /* 0x1505DBD0: jne 0x1505dbc0 */
L_1505DBD2:
    edi = MEM32(ebp + (-0xFC)); /* 0x1505DBD2: mov edi, dword ptr [ebp - 0xfc] */
    esi = MEM32(ebp + (-0xF8)); /* 0x1505DBD8: mov esi, dword ptr [ebp - 0xf8] */
    ebx = MEM32(ebp + (-0x110)); /* 0x1505DBDE: mov ebx, dword ptr [ebp - 0x110] */
    eax = MEM32(ebp + (-0x104)); /* 0x1505DBE4: mov eax, dword ptr [ebp - 0x104] */
L_1505DBEA:
    PUSH32(esp, ebx); /* 0x1505DBEA: push ebx */
    PUSH32(esp, eax); /* 0x1505DBEB: push eax */
    RECOMP_ICALL(MEM32(ebp + (-0x108))); /* 0x1505DBEC: call dword ptr [ebp - 0x108] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 8; /* 0x1505DBF2: add esp, 8 */
    _flag_k = FK_ADD;
    /* test eax, eax */ /* 0x1505DBF5: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if ((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) == 0u || (((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_1505DC2B; /* 0x1505DBF7: jle 0x1505dc2b */
L_1505DBF9:
    eax = MEM32(ebp + (-0x104)); /* 0x1505DBF9: mov eax, dword ptr [ebp - 0x104] */
    edx = ebx; /* 0x1505DBFF: mov edx, ebx */
    /* cmp eax, ebx */ /* 0x1505DC01: cmp eax, ebx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1505DC2B; /* 0x1505DC03: je 0x1505dc2b */
L_1505DC05:
    edi = eax; /* 0x1505DC05: mov edi, eax */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    edi = edi - ebx; /* 0x1505DC07: sub edi, ebx */
    _flag_k = FK_CMP;
    /* nop */ /* 0x1505DC09: nop dword ptr [eax] */
L_1505DC10:
    SET_LO8(eax, MEM8(edx)); /* 0x1505DC10: mov al, byte ptr [edx] */
    edx = edx + 0x1; /* 0x1505DC12: lea edx, [edx + 1] */
    SET_LO8(ecx, MEM8(edi + edx + (-0x1))); /* 0x1505DC15: mov cl, byte ptr [edi + edx - 1] */
    MEM8(edi + edx + (-0x1)) = (uint8_t)(LO8(eax)); /* 0x1505DC19: mov byte ptr [edi + edx - 1], al */
    MEM8(edx + (-0x1)) = (uint8_t)(LO8(ecx)); /* 0x1505DC1D: mov byte ptr [edx - 1], cl */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esi = esi - 1; /* 0x1505DC20: sub esi, 1 */
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (/* sub result */ CMP_NE(_flag_a, _flag_b)) goto L_1505DC10; /* 0x1505DC23: jne 0x1505dc10 */
L_1505DC25:
    edi = MEM32(ebp + (-0xFC)); /* 0x1505DC25: mov edi, dword ptr [ebp - 0xfc] */
L_1505DC2B:
    PUSH32(esp, ebx); /* 0x1505DC2B: push ebx */
    PUSH32(esp, edi); /* 0x1505DC2C: push edi */
    RECOMP_ICALL(MEM32(ebp + (-0x108))); /* 0x1505DC2D: call dword ptr [ebp - 0x108] */
    RECOMP_FLAGS_IN();
    ecx = MEM32(ebp + (-0xF8)); /* 0x1505DC33: mov ecx, dword ptr [ebp - 0xf8] */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 8; /* 0x1505DC39: add esp, 8 */
    _flag_k = FK_ADD;
    /* test eax, eax */ /* 0x1505DC3C: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if ((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) == 0u || (((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_1505DC71; /* 0x1505DC3E: jle 0x1505dc71 */
L_1505DC40:
    esi = ecx; /* 0x1505DC40: mov esi, ecx */
    edx = ebx; /* 0x1505DC42: mov edx, ebx */
    /* cmp edi, ebx */ /* 0x1505DC44: cmp edi, ebx */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1505DC71; /* 0x1505DC46: je 0x1505dc71 */
L_1505DC48:
    MEM32(ebp + (-0x114)) = edi; /* 0x1505DC48: mov dword ptr [ebp - 0x114], edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    edi = edi - ebx; /* 0x1505DC4E: sub edi, ebx */
    _flag_k = FK_CMP;
L_1505DC50:
    SET_LO8(eax, MEM8(edx)); /* 0x1505DC50: mov al, byte ptr [edx] */
    edx = edx + 0x1; /* 0x1505DC52: lea edx, [edx + 1] */
    SET_LO8(ecx, MEM8(edi + edx + (-0x1))); /* 0x1505DC55: mov cl, byte ptr [edi + edx - 1] */
    MEM8(edi + edx + (-0x1)) = (uint8_t)(LO8(eax)); /* 0x1505DC59: mov byte ptr [edi + edx - 1], al */
    MEM8(edx + (-0x1)) = (uint8_t)(LO8(ecx)); /* 0x1505DC5D: mov byte ptr [edx - 1], cl */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esi = esi - 1; /* 0x1505DC60: sub esi, 1 */
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (/* sub result */ CMP_NE(_flag_a, _flag_b)) goto L_1505DC50; /* 0x1505DC63: jne 0x1505dc50 */
L_1505DC65:
    edi = MEM32(ebp + (-0xFC)); /* 0x1505DC65: mov edi, dword ptr [ebp - 0xfc] */
    ecx = MEM32(ebp + (-0xF8)); /* 0x1505DC6B: mov ecx, dword ptr [ebp - 0xf8] */
L_1505DC71:
    esi = MEM32(ebp + (-0x104)); /* 0x1505DC71: mov esi, dword ptr [ebp - 0x104] */
    MEM32(ebp + (-0x100)) = ebx; /* 0x1505DC77: mov dword ptr [ebp - 0x100], ebx */
    /* nop */ /* 0x1505DC7D: nop dword ptr [eax] */
L_1505DC80:
    /* cmp edi, esi */ /* 0x1505DC80: cmp edi, esi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_1505DCA7; /* 0x1505DC82: jbe 0x1505dca7 */
L_1505DC84:
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esi = esi + ecx; /* 0x1505DC84: add esi, ecx */
    _flag_k = FK_ADD;
    MEM32(ebp + (-0xFC)) = esi; /* 0x1505DC86: mov dword ptr [ebp - 0xfc], esi */
    /* cmp esi, edi */ /* 0x1505DC8C: cmp esi, edi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_AE(_flag_a, _flag_b)) goto L_1505DCA7; /* 0x1505DC8E: jae 0x1505dca7 */
L_1505DC90:
    PUSH32(esp, edi); /* 0x1505DC90: push edi */
    PUSH32(esp, esi); /* 0x1505DC91: push esi */
    RECOMP_ICALL(MEM32(ebp + (-0x108))); /* 0x1505DC92: call dword ptr [ebp - 0x108] */
    RECOMP_FLAGS_IN();
    ecx = MEM32(ebp + (-0xF8)); /* 0x1505DC98: mov ecx, dword ptr [ebp - 0xf8] */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 8; /* 0x1505DC9E: add esp, 8 */
    _flag_k = FK_ADD;
    /* test eax, eax */ /* 0x1505DCA1: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if ((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) == 0u || (((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_1505DC84; /* 0x1505DCA3: jle 0x1505dc84 */
L_1505DCA5:
    goto L_1505DCD7; /* 0x1505DCA5: jmp 0x1505dcd7 */
L_1505DCA7:
    ebx = MEM32(ebp + (-0x110)); /* 0x1505DCA7: mov ebx, dword ptr [ebp - 0x110] */
    /* nop */ /* 0x1505DCAD: nop dword ptr [eax] */
L_1505DCB0:
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esi = esi + ecx; /* 0x1505DCB0: add esi, ecx */
    _flag_k = FK_ADD;
    /* cmp esi, ebx */ /* 0x1505DCB2: cmp esi, ebx */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_A(_flag_a, _flag_b)) goto L_1505DCCB; /* 0x1505DCB4: ja 0x1505dccb */
L_1505DCB6:
    PUSH32(esp, edi); /* 0x1505DCB6: push edi */
    PUSH32(esp, esi); /* 0x1505DCB7: push esi */
    RECOMP_ICALL(MEM32(ebp + (-0x108))); /* 0x1505DCB8: call dword ptr [ebp - 0x108] */
    RECOMP_FLAGS_IN();
    ecx = MEM32(ebp + (-0xF8)); /* 0x1505DCBE: mov ecx, dword ptr [ebp - 0xf8] */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 8; /* 0x1505DCC4: add esp, 8 */
    _flag_k = FK_ADD;
    /* test eax, eax */ /* 0x1505DCC7: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if ((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) == 0u || (((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_1505DCB0; /* 0x1505DCC9: jle 0x1505dcb0 */
L_1505DCCB:
    ebx = MEM32(ebp + (-0x100)); /* 0x1505DCCB: mov ebx, dword ptr [ebp - 0x100] */
    MEM32(ebp + (-0xFC)) = esi; /* 0x1505DCD1: mov dword ptr [ebp - 0xfc], esi */
L_1505DCD7:
    esi = MEM32(ebp + (-0x108)); /* 0x1505DCD7: mov esi, dword ptr [ebp - 0x108] */
    /* nop */ /* 0x1505DCDD: nop dword ptr [eax] */
L_1505DCE0:
    ecx = MEM32(ebp + (-0xF8)); /* 0x1505DCE0: mov ecx, dword ptr [ebp - 0xf8] */
    eax = ebx; /* 0x1505DCE6: mov eax, ebx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ebx = ebx - ecx; /* 0x1505DCE8: sub ebx, ecx */
    _flag_k = FK_CMP;
    MEM32(ebp + (-0x100)) = eax; /* 0x1505DCEA: mov dword ptr [ebp - 0x100], eax */
    /* cmp ebx, edi */ /* 0x1505DCF0: cmp ebx, edi */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_1505DD0B; /* 0x1505DCF2: jbe 0x1505dd0b */
L_1505DCF4:
    PUSH32(esp, edi); /* 0x1505DCF4: push edi */
    PUSH32(esp, ebx); /* 0x1505DCF5: push ebx */
    RECOMP_ICALL(esi); /* 0x1505DCF6: call esi */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 8; /* 0x1505DCF8: add esp, 8 */
    _flag_k = FK_ADD;
    /* test eax, eax */ /* 0x1505DCFB: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if ((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) != 0u && (((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) == 0u)) goto L_1505DCE0; /* 0x1505DCFD: jg 0x1505dce0 */
L_1505DCFF:
    ecx = MEM32(ebp + (-0xF8)); /* 0x1505DCFF: mov ecx, dword ptr [ebp - 0xf8] */
    eax = MEM32(ebp + (-0x100)); /* 0x1505DD05: mov eax, dword ptr [ebp - 0x100] */
L_1505DD0B:
    esi = MEM32(ebp + (-0xFC)); /* 0x1505DD0B: mov esi, dword ptr [ebp - 0xfc] */
    MEM32(ebp + (-0x100)) = ebx; /* 0x1505DD11: mov dword ptr [ebp - 0x100], ebx */
    /* cmp ebx, esi */ /* 0x1505DD17: cmp ebx, esi */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_B(_flag_a, _flag_b)) goto L_1505DD65; /* 0x1505DD19: jb 0x1505dd65 */
L_1505DD1B:
    MEM32(ebp + (-0x118)) = ecx; /* 0x1505DD1B: mov dword ptr [ebp - 0x118], ecx */
    edx = ebx; /* 0x1505DD21: mov edx, ebx */
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1505DD57; /* 0x1505DD23: je 0x1505dd57 */
L_1505DD25:
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esi = esi - ebx; /* 0x1505DD25: sub esi, ebx */
    _flag_k = FK_CMP;
    ebx = ecx; /* 0x1505DD27: mov ebx, ecx */
    /* nop */ /* 0x1505DD29: nop dword ptr [eax] */
L_1505DD30:
    SET_LO8(eax, MEM8(edx)); /* 0x1505DD30: mov al, byte ptr [edx] */
    edx = edx + 0x1; /* 0x1505DD32: lea edx, [edx + 1] */
    SET_LO8(ecx, MEM8(esi + edx + (-0x1))); /* 0x1505DD35: mov cl, byte ptr [esi + edx - 1] */
    MEM8(esi + edx + (-0x1)) = (uint8_t)(LO8(eax)); /* 0x1505DD39: mov byte ptr [esi + edx - 1], al */
    MEM8(edx + (-0x1)) = (uint8_t)(LO8(ecx)); /* 0x1505DD3D: mov byte ptr [edx - 1], cl */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(1);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ebx = ebx - 1; /* 0x1505DD40: sub ebx, 1 */
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (/* sub result */ CMP_NE(_flag_a, _flag_b)) goto L_1505DD30; /* 0x1505DD43: jne 0x1505dd30 */
L_1505DD45:
    esi = MEM32(ebp + (-0xFC)); /* 0x1505DD45: mov esi, dword ptr [ebp - 0xfc] */
    ebx = MEM32(ebp + (-0x100)); /* 0x1505DD4B: mov ebx, dword ptr [ebp - 0x100] */
    ecx = MEM32(ebp + (-0xF8)); /* 0x1505DD51: mov ecx, dword ptr [ebp - 0xf8] */
L_1505DD57:
    /* cmp edi, ebx */ /* 0x1505DD57: cmp edi, ebx */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    eax = esi; /* 0x1505DD59: mov eax, esi */
    if (CMP_NE(_flag_a, _flag_b)) { eax = edi; } /* 0x1505DD5B: cmovne eax, edi */
    edi = eax; /* 0x1505DD5E: mov edi, eax */
    RECOMP_BACKEDGE();
    goto L_1505DC80; /* 0x1505DD60: jmp 0x1505dc80 */
L_1505DD65:
    /* cmp edi, eax */ /* 0x1505DD65: cmp edi, eax */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_AE(_flag_a, _flag_b)) goto L_1505DD99; /* 0x1505DD67: jae 0x1505dd99 */
L_1505DD69:
    /* nop */ /* 0x1505DD69: nop dword ptr [eax] */
L_1505DD70:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - ecx; /* 0x1505DD70: sub eax, ecx */
    _flag_k = FK_CMP;
    MEM32(ebp + (-0x100)) = eax; /* 0x1505DD72: mov dword ptr [ebp - 0x100], eax */
    /* cmp eax, edi */ /* 0x1505DD78: cmp eax, edi */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_1505DD99; /* 0x1505DD7A: jbe 0x1505dd99 */
L_1505DD7C:
    PUSH32(esp, edi); /* 0x1505DD7C: push edi */
    PUSH32(esp, eax); /* 0x1505DD7D: push eax */
    RECOMP_ICALL(MEM32(ebp + (-0x108))); /* 0x1505DD7E: call dword ptr [ebp - 0x108] */
    RECOMP_FLAGS_IN();
    ecx = MEM32(ebp + (-0xF8)); /* 0x1505DD84: mov ecx, dword ptr [ebp - 0xf8] */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 8; /* 0x1505DD8A: add esp, 8 */
    _flag_k = FK_ADD;
    /* test eax, eax */ /* 0x1505DD8D: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    eax = MEM32(ebp + (-0x100)); /* 0x1505DD8F: mov eax, dword ptr [ebp - 0x100] */
    RECOMP_BACKEDGE();
    if (TEST_Z(_flag_a, _flag_b)) goto L_1505DD70; /* 0x1505DD95: je 0x1505dd70 */
L_1505DD97:
    goto L_1505DDCD; /* 0x1505DD97: jmp 0x1505ddcd */
L_1505DD99:
    esi = MEM32(ebp + (-0x108)); /* 0x1505DD99: mov esi, dword ptr [ebp - 0x108] */
    /* nop */ /* 0x1505DD9F: nop  */
L_1505DDA0:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - ecx; /* 0x1505DDA0: sub eax, ecx */
    _flag_k = FK_CMP;
    MEM32(ebp + (-0x100)) = eax; /* 0x1505DDA2: mov dword ptr [ebp - 0x100], eax */
    /* cmp eax, MEM32(ebp + (-0x104)) */ /* 0x1505DDA8: cmp eax, dword ptr [ebp - 0x104] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(ebp + (-0x104)));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_1505DDC7; /* 0x1505DDAE: jbe 0x1505ddc7 */
L_1505DDB0:
    PUSH32(esp, edi); /* 0x1505DDB0: push edi */
    PUSH32(esp, eax); /* 0x1505DDB1: push eax */
    RECOMP_ICALL(esi); /* 0x1505DDB2: call esi */
    RECOMP_FLAGS_IN();
    ecx = MEM32(ebp + (-0xF8)); /* 0x1505DDB4: mov ecx, dword ptr [ebp - 0xf8] */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 8; /* 0x1505DDBA: add esp, 8 */
    _flag_k = FK_ADD;
    /* test eax, eax */ /* 0x1505DDBD: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    eax = MEM32(ebp + (-0x100)); /* 0x1505DDBF: mov eax, dword ptr [ebp - 0x100] */
    RECOMP_BACKEDGE();
    if (TEST_Z(_flag_a, _flag_b)) goto L_1505DDA0; /* 0x1505DDC5: je 0x1505dda0 */
L_1505DDC7:
    esi = MEM32(ebp + (-0xFC)); /* 0x1505DDC7: mov esi, dword ptr [ebp - 0xfc] */
L_1505DDCD:
    ebx = MEM32(ebp + (-0x110)); /* 0x1505DDCD: mov ebx, dword ptr [ebp - 0x110] */
    ecx = ebx; /* 0x1505DDD3: mov ecx, ebx */
    edx = MEM32(ebp + (-0x100)); /* 0x1505DDD5: mov edx, dword ptr [ebp - 0x100] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ecx = ecx - esi; /* 0x1505DDDB: sub ecx, esi */
    _flag_k = FK_CMP;
    edi = MEM32(ebp + (-0x104)); /* 0x1505DDDD: mov edi, dword ptr [ebp - 0x104] */
    eax = edx; /* 0x1505DDE3: mov eax, edx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - edi; /* 0x1505DDE5: sub eax, edi */
    _flag_k = FK_CMP;
    /* cmp eax, ecx */ /* 0x1505DDE7: cmp eax, ecx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    ecx = MEM32(ebp + (-0x10C)); /* 0x1505DDE9: mov ecx, dword ptr [ebp - 0x10c] */
    if (CMP_L(_flag_a, _flag_b)) goto L_1505DE1E; /* 0x1505DDEF: jl 0x1505de1e */
L_1505DDF1:
    /* cmp edi, edx */ /* 0x1505DDF1: cmp edi, edx */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_AE(_flag_a, _flag_b)) goto L_1505DE07; /* 0x1505DDF3: jae 0x1505de07 */
L_1505DDF5:
    MEM32(ebp + ecx * 4 + (-0x7C)) = edi; /* 0x1505DDF5: mov dword ptr [ebp + ecx*4 - 0x7c], edi */
    MEM32(ebp + ecx * 4 + (-0xF4)) = edx; /* 0x1505DDF9: mov dword ptr [ebp + ecx*4 - 0xf4], edx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx + 1; /* 0x1505DE00: inc ecx */
    _flag_k = FK_INC;
    MEM32(ebp + (-0x10C)) = ecx; /* 0x1505DE01: mov dword ptr [ebp - 0x10c], ecx */
L_1505DE07:
    /* cmp esi, ebx */ /* 0x1505DE07: cmp esi, ebx */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_AE(_flag_a, _flag_b)) goto L_1505DE45; /* 0x1505DE09: jae 0x1505de45 */
L_1505DE0B:
    edi = esi; /* 0x1505DE0B: mov edi, esi */
    esi = MEM32(ebp + (-0xF8)); /* 0x1505DE0D: mov esi, dword ptr [ebp - 0xf8] */
    MEM32(ebp + (-0x104)) = edi; /* 0x1505DE13: mov dword ptr [ebp - 0x104], edi */
    RECOMP_BACKEDGE();
    goto L_1505DAD4; /* 0x1505DE19: jmp 0x1505dad4 */
L_1505DE1E:
    /* cmp esi, ebx */ /* 0x1505DE1E: cmp esi, ebx */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_AE(_flag_a, _flag_b)) goto L_1505DE34; /* 0x1505DE20: jae 0x1505de34 */
L_1505DE22:
    MEM32(ebp + ecx * 4 + (-0x7C)) = esi; /* 0x1505DE22: mov dword ptr [ebp + ecx*4 - 0x7c], esi */
    MEM32(ebp + ecx * 4 + (-0xF4)) = ebx; /* 0x1505DE26: mov dword ptr [ebp + ecx*4 - 0xf4], ebx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx + 1; /* 0x1505DE2D: inc ecx */
    _flag_k = FK_INC;
    MEM32(ebp + (-0x10C)) = ecx; /* 0x1505DE2E: mov dword ptr [ebp - 0x10c], ecx */
L_1505DE34:
    esi = MEM32(ebp + (-0xF8)); /* 0x1505DE34: mov esi, dword ptr [ebp - 0xf8] */
    /* cmp edi, edx */ /* 0x1505DE3A: cmp edi, edx */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_AE(_flag_a, _flag_b)) goto L_1505DE4B; /* 0x1505DE3C: jae 0x1505de4b */
L_1505DE3E:
    ebx = edx; /* 0x1505DE3E: mov ebx, edx */
    RECOMP_BACKEDGE();
    goto L_1505DACE; /* 0x1505DE40: jmp 0x1505dace */
L_1505DE45:
    esi = MEM32(ebp + (-0xF8)); /* 0x1505DE45: mov esi, dword ptr [ebp - 0xf8] */
L_1505DE4B:
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ecx = ecx - 1; /* 0x1505DE4B: sub ecx, 1 */
    _flag_k = FK_CMP;
    MEM32(ebp + (-0x10C)) = ecx; /* 0x1505DE4E: mov dword ptr [ebp - 0x10c], ecx */
    RECOMP_BACKEDGE();
    if (/* sub result */ CMP_S(_flag_a, _flag_b)) goto L_1505DA9B; /* 0x1505DE54: js 0x1505da9b */
L_1505DE5A:
    edi = MEM32(ebp + ecx * 4 + (-0x7C)); /* 0x1505DE5A: mov edi, dword ptr [ebp + ecx*4 - 0x7c] */
    ebx = MEM32(ebp + ecx * 4 + (-0xF4)); /* 0x1505DE5E: mov ebx, dword ptr [ebp + ecx*4 - 0xf4] */
    MEM32(ebp + (-0x104)) = edi; /* 0x1505DE65: mov dword ptr [ebp - 0x104], edi */
    RECOMP_BACKEDGE();
    goto L_1505DACE; /* 0x1505DE6B: jmp 0x1505dace */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    RECOMP_REGS_OUT();
}

void sub_1505DE80(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1505DE80u);

L_1505DE80:
    edi = edi; /* 0x1505DE80: mov edi, edi */
    PUSH32(esp, ebp); /* 0x1505DE82: push ebp */
    ebp = esp; /* 0x1505DE83: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x11Cu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x11Cu; /* 0x1505DE85: sub esp, 0x11c */
    _flag_k = FK_CMP;
    eax = MEM32(0x150BD340); /* 0x1505DE8B: mov eax, dword ptr [0x150bd340] */
    _flag_a = (uint32_t)((eax ^ ebp)); _flag_b = (uint32_t)((eax ^ ebp));
    eax = eax ^ ebp; /* 0x1505DE90: xor eax, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x4)) = eax; /* 0x1505DE92: mov dword ptr [ebp - 4], eax */
    eax = MEM32(ebp + 0x14); /* 0x1505DE95: mov eax, dword ptr [ebp + 0x14] */
    ecx = MEM32(ebp + 0x18); /* 0x1505DE98: mov ecx, dword ptr [ebp + 0x18] */
    PUSH32(esp, ebx); /* 0x1505DE9B: push ebx */
    ebx = MEM32(ebp + 0xC); /* 0x1505DE9C: mov ebx, dword ptr [ebp + 0xc] */
    PUSH32(esp, esi); /* 0x1505DE9F: push esi */
    esi = MEM32(ebp + 0x10); /* 0x1505DEA0: mov esi, dword ptr [ebp + 0x10] */
    PUSH32(esp, edi); /* 0x1505DEA3: push edi */
    edi = MEM32(ebp + 0x8); /* 0x1505DEA4: mov edi, dword ptr [ebp + 8] */
    MEM32(ebp + (-0x104)) = edi; /* 0x1505DEA7: mov dword ptr [ebp - 0x104], edi */
    MEM32(ebp + (-0xF8)) = esi; /* 0x1505DEAD: mov dword ptr [ebp - 0xf8], esi */
    MEM32(ebp + (-0x108)) = eax; /* 0x1505DEB3: mov dword ptr [ebp - 0x108], eax */
    MEM32(ebp + (-0x10C)) = ecx; /* 0x1505DEB9: mov dword ptr [ebp - 0x10c], ecx */
    /* test edi, edi */ /* 0x1505DEBF: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1505DEF5; /* 0x1505DEC1: jne 0x1505def5 */
L_1505DEC3:
    /* test ebx, ebx */ /* 0x1505DEC3: test ebx, ebx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ebx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1505DEF5; /* 0x1505DEC5: je 0x1505def5 */
L_1505DEC7:
    RECOMP_CALL(sub_15036430); /* 0x1505DEC7: call 0x15036430 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0); /* 0x1505DECC: push 0 */
    PUSH32(esp, 0); /* 0x1505DECE: push 0 */
    PUSH32(esp, 0); /* 0x1505DED0: push 0 */
    PUSH32(esp, 0); /* 0x1505DED2: push 0 */
    PUSH32(esp, 0); /* 0x1505DED4: push 0 */
    MEM32(eax) = 0x16u; /* 0x1505DED6: mov dword ptr [eax], 0x16 */
    RECOMP_CALL(sub_1505A110); /* 0x1505DEDC: call 0x1505a110 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x14u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x14u; /* 0x1505DEE1: add esp, 0x14 */
    _flag_k = FK_ADD;
L_1505DEE4:
    ecx = MEM32(ebp + (-0x4)); /* 0x1505DEE4: mov ecx, dword ptr [ebp - 4] */
    edi = POP32_VAL(esp); /* 0x1505DEE7: pop edi */
    esi = POP32_VAL(esp); /* 0x1505DEE8: pop esi */
    _flag_a = (uint32_t)((ecx ^ ebp)); _flag_b = (uint32_t)((ecx ^ ebp));
    ecx = ecx ^ ebp; /* 0x1505DEE9: xor ecx, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    ebx = POP32_VAL(esp); /* 0x1505DEEB: pop ebx */
    RECOMP_CALL(sub_1505E540); /* 0x1505DEEC: call 0x1505e540 */
    RECOMP_FLAGS_IN();
    esp = ebp; /* 0x1505DEF1: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x1505DEF3: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1505DEF4: ret  */
L_1505DEF5:
    /* test esi, esi */ /* 0x1505DEF5: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_Z(_flag_a, _flag_b)) goto L_1505DEC7; /* 0x1505DEF7: je 0x1505dec7 */
L_1505DEF9:
    /* test eax, eax */ /* 0x1505DEF9: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_Z(_flag_a, _flag_b)) goto L_1505DEC7; /* 0x1505DEFB: je 0x1505dec7 */
L_1505DEFD:
    /* cmp ebx, 2 */ /* 0x1505DEFD: cmp ebx, 2 */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_1505DEE4; /* 0x1505DF00: jb 0x1505dee4 */
L_1505DF02:
    ecx = eax; /* 0x1505DF02: mov ecx, eax */
    RECOMP_CALL(sub_1505EB74); /* 0x1505DF04: call 0x1505eb74 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(1);
    ebx = ebx - 1; /* 0x1505DF09: dec ebx */
    _flag_k = FK_DEC;
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x1505DF0A: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    ebx = (uint32_t)((int32_t)ebx * (int32_t)esi); /* 0x1505DF0C: imul ebx, esi */
    MEM32(ebp + (-0x110)) = ecx; /* 0x1505DF0F: mov dword ptr [ebp - 0x110], ecx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ebx = ebx + edi; /* 0x1505DF15: add ebx, edi */
    _flag_k = FK_ADD;
L_1505DF17:
    MEM32(ebp + (-0x114)) = ebx; /* 0x1505DF17: mov dword ptr [ebp - 0x114], ebx */
    /* nop */ /* 0x1505DF1D: nop dword ptr [eax] */
L_1505DF20:
    eax = ebx; /* 0x1505DF20: mov eax, ebx */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edx = 0; /* 0x1505DF22: xor edx, edx */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - edi; /* 0x1505DF24: sub eax, edi */
    _flag_k = FK_CMP;
    { uint64_t _dividend = ((uint64_t)edx << 32) | eax; uint32_t _dv = (uint32_t)esi; /* 0x1505DF26: div esi */
      if (_dv) { eax = (uint32_t)(_dividend / _dv); edx = (uint32_t)(_dividend % _dv); }
      else { eax = 0; edx = 0; } }
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x1505DF28: inc eax */
    _flag_k = FK_INC;
    /* cmp eax, 8 */ /* 0x1505DF29: cmp eax, 8 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_A(_flag_a, _flag_b)) goto L_1505DFCB; /* 0x1505DF2C: ja 0x1505dfcb */
L_1505DF32:
    /* cmp ebx, edi */ /* 0x1505DF32: cmp ebx, edi */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_1505E2D1; /* 0x1505DF34: jbe 0x1505e2d1 */
L_1505DF3A:
    eax = esi + edi; /* 0x1505DF3A: lea eax, [esi + edi] */
    /* nop */ /* 0x1505DF3D: nop dword ptr [eax] */
L_1505DF40:
    edx = eax; /* 0x1505DF40: mov edx, eax */
    MEM32(ebp + (-0xFC)) = eax; /* 0x1505DF42: mov dword ptr [ebp - 0xfc], eax */
    /* cmp edx, ebx */ /* 0x1505DF48: cmp edx, ebx */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_A(_flag_a, _flag_b)) goto L_1505DF88; /* 0x1505DF4A: ja 0x1505df88 */
L_1505DF4C:
    /* nop */ /* 0x1505DF4C: nop dword ptr [eax] */
L_1505DF50:
    ecx = MEM32(ebp + (-0x108)); /* 0x1505DF50: mov ecx, dword ptr [ebp - 0x108] */
    PUSH32(esp, edi); /* 0x1505DF56: push edi */
    PUSH32(esp, edx); /* 0x1505DF57: push edx */
    PUSH32(esp, MEM32(ebp + (-0x10C))); /* 0x1505DF58: push dword ptr [ebp - 0x10c] */
    RECOMP_ICALL(MEM32(0x150C02B0)); /* 0x1505DF5E: call dword ptr [0x150c02b0] */
    RECOMP_FLAGS_IN();
    RECOMP_ICALL(MEM32(ebp + (-0x108))); /* 0x1505DF64: call dword ptr [ebp - 0x108] */
    RECOMP_FLAGS_IN();
    edx = MEM32(ebp + (-0xFC)); /* 0x1505DF6A: mov edx, dword ptr [ebp - 0xfc] */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x1505DF70: add esp, 0xc */
    _flag_k = FK_ADD;
    /* test eax, eax */ /* 0x1505DF73: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = edx; /* 0x1505DF75: mov ecx, edx */
    if ((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) == 0u || (((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) { ecx = edi; } /* 0x1505DF77: cmovle ecx, edi */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edx = edx + esi; /* 0x1505DF7A: add edx, esi */
    _flag_k = FK_ADD;
    MEM32(ebp + (-0xFC)) = edx; /* 0x1505DF7C: mov dword ptr [ebp - 0xfc], edx */
    edi = ecx; /* 0x1505DF82: mov edi, ecx */
    /* cmp edx, ebx */ /* 0x1505DF84: cmp edx, ebx */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_BE(_flag_a, _flag_b)) goto L_1505DF50; /* 0x1505DF86: jbe 0x1505df50 */
L_1505DF88:
    MEM32(ebp + (-0xFC)) = esi; /* 0x1505DF88: mov dword ptr [ebp - 0xfc], esi */
    edx = ebx; /* 0x1505DF8E: mov edx, ebx */
    /* cmp edi, ebx */ /* 0x1505DF90: cmp edi, ebx */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1505DFB1; /* 0x1505DF92: je 0x1505dfb1 */
L_1505DF94:
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    edi = edi - ebx; /* 0x1505DF94: sub edi, ebx */
    _flag_k = FK_CMP;
L_1505DF96:
    SET_LO8(eax, MEM8(edx)); /* 0x1505DF96: mov al, byte ptr [edx] */
    edx = edx + 0x1; /* 0x1505DF98: lea edx, [edx + 1] */
    SET_LO8(ecx, MEM8(edi + edx + (-0x1))); /* 0x1505DF9B: mov cl, byte ptr [edi + edx - 1] */
    MEM8(edi + edx + (-0x1)) = (uint8_t)(LO8(eax)); /* 0x1505DF9F: mov byte ptr [edi + edx - 1], al */
    MEM8(edx + (-0x1)) = (uint8_t)(LO8(ecx)); /* 0x1505DFA3: mov byte ptr [edx - 1], cl */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esi = esi - 1; /* 0x1505DFA6: sub esi, 1 */
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (/* sub result */ CMP_NE(_flag_a, _flag_b)) goto L_1505DF96; /* 0x1505DFA9: jne 0x1505df96 */
L_1505DFAB:
    esi = MEM32(ebp + (-0xF8)); /* 0x1505DFAB: mov esi, dword ptr [ebp - 0xf8] */
L_1505DFB1:
    edi = MEM32(ebp + (-0x104)); /* 0x1505DFB1: mov edi, dword ptr [ebp - 0x104] */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ebx = ebx - esi; /* 0x1505DFB7: sub ebx, esi */
    _flag_k = FK_CMP;
    eax = esi + edi; /* 0x1505DFB9: lea eax, [esi + edi] */
    /* cmp ebx, edi */ /* 0x1505DFBC: cmp ebx, edi */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_A(_flag_a, _flag_b)) goto L_1505DF40; /* 0x1505DFBE: ja 0x1505df40 */
L_1505DFC0:
    ecx = MEM32(ebp + (-0x110)); /* 0x1505DFC0: mov ecx, dword ptr [ebp - 0x110] */
    goto L_1505E2D1; /* 0x1505DFC6: jmp 0x1505e2d1 */
L_1505DFCB:
    if (1u) _cf = (((eax) >> 0) & 1u); /* 0x1505DFCB: shr eax, 1 */
    if (1u) { _flag_a = recomp_flags_pack((eax >> 1u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax >> 1u; /* 0x1505DFCB: shr eax, 1 */
    eax = (uint32_t)((int32_t)eax * (int32_t)esi); /* 0x1505DFCD: imul eax, esi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edi = edi + eax; /* 0x1505DFD0: add edi, eax */
    _flag_k = FK_ADD;
    MEM32(ebp + (-0x11C)) = eax; /* 0x1505DFD2: mov dword ptr [ebp - 0x11c], eax */
    PUSH32(esp, edi); /* 0x1505DFD8: push edi */
    PUSH32(esp, MEM32(ebp + (-0x104))); /* 0x1505DFD9: push dword ptr [ebp - 0x104] */
    MEM32(ebp + (-0xFC)) = edi; /* 0x1505DFDF: mov dword ptr [ebp - 0xfc], edi */
    PUSH32(esp, MEM32(ebp + (-0x10C))); /* 0x1505DFE5: push dword ptr [ebp - 0x10c] */
    RECOMP_ICALL(MEM32(ebp + (-0x108))); /* 0x1505DFEB: call dword ptr [ebp - 0x108] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x1505DFF1: add esp, 0xc */
    _flag_k = FK_ADD;
    /* test eax, eax */ /* 0x1505DFF4: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    eax = MEM32(ebp + (-0x104)); /* 0x1505DFF6: mov eax, dword ptr [ebp - 0x104] */
    if ((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) == 0u || (((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_1505E04A; /* 0x1505DFFC: jle 0x1505e04a */
L_1505DFFE:
    MEM32(ebp + (-0x118)) = esi; /* 0x1505DFFE: mov dword ptr [ebp - 0x118], esi */
    MEM32(ebp + (-0x100)) = edi; /* 0x1505E004: mov dword ptr [ebp - 0x100], edi */
    /* cmp eax, edi */ /* 0x1505E00A: cmp eax, edi */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1505E04A; /* 0x1505E00C: je 0x1505e04a */
L_1505E00E:
    ebx = MEM32(ebp + (-0x11C)); /* 0x1505E00E: mov ebx, dword ptr [ebp - 0x11c] */
    esi = edi; /* 0x1505E014: mov esi, edi */
    edi = MEM32(ebp + (-0x118)); /* 0x1505E016: mov edi, dword ptr [ebp - 0x118] */
    /* nop */ /* 0x1505E01C: nop dword ptr [eax] */
L_1505E020:
    SET_LO8(eax, MEM8(esi)); /* 0x1505E020: mov al, byte ptr [esi] */
    edx = esi; /* 0x1505E022: mov edx, esi */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    edx = edx - ebx; /* 0x1505E024: sub edx, ebx */
    _flag_k = FK_CMP;
    SET_LO8(ecx, MEM8(edx)); /* 0x1505E026: mov cl, byte ptr [edx] */
    MEM8(edx) = (uint8_t)(LO8(eax)); /* 0x1505E028: mov byte ptr [edx], al */
    MEM8(esi) = (uint8_t)(LO8(ecx)); /* 0x1505E02A: mov byte ptr [esi], cl */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi + 1; /* 0x1505E02C: inc esi */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(1);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    edi = edi - 1; /* 0x1505E02D: sub edi, 1 */
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (/* sub result */ CMP_NE(_flag_a, _flag_b)) goto L_1505E020; /* 0x1505E030: jne 0x1505e020 */
L_1505E032:
    edi = MEM32(ebp + (-0xFC)); /* 0x1505E032: mov edi, dword ptr [ebp - 0xfc] */
    esi = MEM32(ebp + (-0xF8)); /* 0x1505E038: mov esi, dword ptr [ebp - 0xf8] */
    ebx = MEM32(ebp + (-0x114)); /* 0x1505E03E: mov ebx, dword ptr [ebp - 0x114] */
    eax = MEM32(ebp + (-0x104)); /* 0x1505E044: mov eax, dword ptr [ebp - 0x104] */
L_1505E04A:
    PUSH32(esp, ebx); /* 0x1505E04A: push ebx */
    PUSH32(esp, eax); /* 0x1505E04B: push eax */
    PUSH32(esp, MEM32(ebp + (-0x10C))); /* 0x1505E04C: push dword ptr [ebp - 0x10c] */
    RECOMP_ICALL(MEM32(ebp + (-0x108))); /* 0x1505E052: call dword ptr [ebp - 0x108] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x1505E058: add esp, 0xc */
    _flag_k = FK_ADD;
    /* test eax, eax */ /* 0x1505E05B: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if ((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) == 0u || (((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_1505E08B; /* 0x1505E05D: jle 0x1505e08b */
L_1505E05F:
    eax = MEM32(ebp + (-0x104)); /* 0x1505E05F: mov eax, dword ptr [ebp - 0x104] */
    edx = ebx; /* 0x1505E065: mov edx, ebx */
    /* cmp eax, ebx */ /* 0x1505E067: cmp eax, ebx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1505E08B; /* 0x1505E069: je 0x1505e08b */
L_1505E06B:
    edi = eax; /* 0x1505E06B: mov edi, eax */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    edi = edi - ebx; /* 0x1505E06D: sub edi, ebx */
    _flag_k = FK_CMP;
    /* nop */ /* 0x1505E06F: nop  */
L_1505E070:
    SET_LO8(eax, MEM8(edx)); /* 0x1505E070: mov al, byte ptr [edx] */
    edx = edx + 0x1; /* 0x1505E072: lea edx, [edx + 1] */
    SET_LO8(ecx, MEM8(edi + edx + (-0x1))); /* 0x1505E075: mov cl, byte ptr [edi + edx - 1] */
    MEM8(edi + edx + (-0x1)) = (uint8_t)(LO8(eax)); /* 0x1505E079: mov byte ptr [edi + edx - 1], al */
    MEM8(edx + (-0x1)) = (uint8_t)(LO8(ecx)); /* 0x1505E07D: mov byte ptr [edx - 1], cl */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esi = esi - 1; /* 0x1505E080: sub esi, 1 */
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (/* sub result */ CMP_NE(_flag_a, _flag_b)) goto L_1505E070; /* 0x1505E083: jne 0x1505e070 */
L_1505E085:
    edi = MEM32(ebp + (-0xFC)); /* 0x1505E085: mov edi, dword ptr [ebp - 0xfc] */
L_1505E08B:
    PUSH32(esp, ebx); /* 0x1505E08B: push ebx */
    PUSH32(esp, edi); /* 0x1505E08C: push edi */
    PUSH32(esp, MEM32(ebp + (-0x10C))); /* 0x1505E08D: push dword ptr [ebp - 0x10c] */
    RECOMP_ICALL(MEM32(ebp + (-0x108))); /* 0x1505E093: call dword ptr [ebp - 0x108] */
    RECOMP_FLAGS_IN();
    ecx = MEM32(ebp + (-0xF8)); /* 0x1505E099: mov ecx, dword ptr [ebp - 0xf8] */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x1505E09F: add esp, 0xc */
    _flag_k = FK_ADD;
    /* test eax, eax */ /* 0x1505E0A2: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if ((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) == 0u || (((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_1505E0D7; /* 0x1505E0A4: jle 0x1505e0d7 */
L_1505E0A6:
    esi = ecx; /* 0x1505E0A6: mov esi, ecx */
    edx = ebx; /* 0x1505E0A8: mov edx, ebx */
    /* cmp edi, ebx */ /* 0x1505E0AA: cmp edi, ebx */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1505E0D7; /* 0x1505E0AC: je 0x1505e0d7 */
L_1505E0AE:
    MEM32(ebp + (-0x118)) = edi; /* 0x1505E0AE: mov dword ptr [ebp - 0x118], edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    edi = edi - ebx; /* 0x1505E0B4: sub edi, ebx */
    _flag_k = FK_CMP;
L_1505E0B6:
    SET_LO8(eax, MEM8(edx)); /* 0x1505E0B6: mov al, byte ptr [edx] */
    edx = edx + 0x1; /* 0x1505E0B8: lea edx, [edx + 1] */
    SET_LO8(ecx, MEM8(edi + edx + (-0x1))); /* 0x1505E0BB: mov cl, byte ptr [edi + edx - 1] */
    MEM8(edi + edx + (-0x1)) = (uint8_t)(LO8(eax)); /* 0x1505E0BF: mov byte ptr [edi + edx - 1], al */
    MEM8(edx + (-0x1)) = (uint8_t)(LO8(ecx)); /* 0x1505E0C3: mov byte ptr [edx - 1], cl */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esi = esi - 1; /* 0x1505E0C6: sub esi, 1 */
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (/* sub result */ CMP_NE(_flag_a, _flag_b)) goto L_1505E0B6; /* 0x1505E0C9: jne 0x1505e0b6 */
L_1505E0CB:
    edi = MEM32(ebp + (-0xFC)); /* 0x1505E0CB: mov edi, dword ptr [ebp - 0xfc] */
    ecx = MEM32(ebp + (-0xF8)); /* 0x1505E0D1: mov ecx, dword ptr [ebp - 0xf8] */
L_1505E0D7:
    esi = MEM32(ebp + (-0x104)); /* 0x1505E0D7: mov esi, dword ptr [ebp - 0x104] */
    MEM32(ebp + (-0x100)) = ebx; /* 0x1505E0DD: mov dword ptr [ebp - 0x100], ebx */
L_1505E0E3:
    /* cmp edi, esi */ /* 0x1505E0E3: cmp edi, esi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_1505E119; /* 0x1505E0E5: jbe 0x1505e119 */
L_1505E0E7:
    /* nop */ /* 0x1505E0E7: nop word ptr [eax + eax] */
L_1505E0F0:
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esi = esi + ecx; /* 0x1505E0F0: add esi, ecx */
    _flag_k = FK_ADD;
    MEM32(ebp + (-0xFC)) = esi; /* 0x1505E0F2: mov dword ptr [ebp - 0xfc], esi */
    /* cmp esi, edi */ /* 0x1505E0F8: cmp esi, edi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_AE(_flag_a, _flag_b)) goto L_1505E119; /* 0x1505E0FA: jae 0x1505e119 */
L_1505E0FC:
    PUSH32(esp, edi); /* 0x1505E0FC: push edi */
    PUSH32(esp, esi); /* 0x1505E0FD: push esi */
    PUSH32(esp, MEM32(ebp + (-0x10C))); /* 0x1505E0FE: push dword ptr [ebp - 0x10c] */
    RECOMP_ICALL(MEM32(ebp + (-0x108))); /* 0x1505E104: call dword ptr [ebp - 0x108] */
    RECOMP_FLAGS_IN();
    ecx = MEM32(ebp + (-0xF8)); /* 0x1505E10A: mov ecx, dword ptr [ebp - 0xf8] */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x1505E110: add esp, 0xc */
    _flag_k = FK_ADD;
    /* test eax, eax */ /* 0x1505E113: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if ((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) == 0u || (((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_1505E0F0; /* 0x1505E115: jle 0x1505e0f0 */
L_1505E117:
    goto L_1505E14D; /* 0x1505E117: jmp 0x1505e14d */
L_1505E119:
    ebx = MEM32(ebp + (-0x114)); /* 0x1505E119: mov ebx, dword ptr [ebp - 0x114] */
    /* nop */ /* 0x1505E11F: nop  */
L_1505E120:
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esi = esi + ecx; /* 0x1505E120: add esi, ecx */
    _flag_k = FK_ADD;
    /* cmp esi, ebx */ /* 0x1505E122: cmp esi, ebx */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_A(_flag_a, _flag_b)) goto L_1505E141; /* 0x1505E124: ja 0x1505e141 */
L_1505E126:
    PUSH32(esp, edi); /* 0x1505E126: push edi */
    PUSH32(esp, esi); /* 0x1505E127: push esi */
    PUSH32(esp, MEM32(ebp + (-0x10C))); /* 0x1505E128: push dword ptr [ebp - 0x10c] */
    RECOMP_ICALL(MEM32(ebp + (-0x108))); /* 0x1505E12E: call dword ptr [ebp - 0x108] */
    RECOMP_FLAGS_IN();
    ecx = MEM32(ebp + (-0xF8)); /* 0x1505E134: mov ecx, dword ptr [ebp - 0xf8] */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x1505E13A: add esp, 0xc */
    _flag_k = FK_ADD;
    /* test eax, eax */ /* 0x1505E13D: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if ((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) == 0u || (((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_1505E120; /* 0x1505E13F: jle 0x1505e120 */
L_1505E141:
    ebx = MEM32(ebp + (-0x100)); /* 0x1505E141: mov ebx, dword ptr [ebp - 0x100] */
    MEM32(ebp + (-0xFC)) = esi; /* 0x1505E147: mov dword ptr [ebp - 0xfc], esi */
L_1505E14D:
    esi = MEM32(ebp + (-0x108)); /* 0x1505E14D: mov esi, dword ptr [ebp - 0x108] */
L_1505E153:
    ecx = MEM32(ebp + (-0xF8)); /* 0x1505E153: mov ecx, dword ptr [ebp - 0xf8] */
    eax = ebx; /* 0x1505E159: mov eax, ebx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ebx = ebx - ecx; /* 0x1505E15B: sub ebx, ecx */
    _flag_k = FK_CMP;
    MEM32(ebp + (-0x100)) = eax; /* 0x1505E15D: mov dword ptr [ebp - 0x100], eax */
    /* cmp ebx, edi */ /* 0x1505E163: cmp ebx, edi */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_1505E184; /* 0x1505E165: jbe 0x1505e184 */
L_1505E167:
    PUSH32(esp, edi); /* 0x1505E167: push edi */
    PUSH32(esp, ebx); /* 0x1505E168: push ebx */
    PUSH32(esp, MEM32(ebp + (-0x10C))); /* 0x1505E169: push dword ptr [ebp - 0x10c] */
    RECOMP_ICALL(esi); /* 0x1505E16F: call esi */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x1505E171: add esp, 0xc */
    _flag_k = FK_ADD;
    /* test eax, eax */ /* 0x1505E174: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if ((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) != 0u && (((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) == 0u)) goto L_1505E153; /* 0x1505E176: jg 0x1505e153 */
L_1505E178:
    ecx = MEM32(ebp + (-0xF8)); /* 0x1505E178: mov ecx, dword ptr [ebp - 0xf8] */
    eax = MEM32(ebp + (-0x100)); /* 0x1505E17E: mov eax, dword ptr [ebp - 0x100] */
L_1505E184:
    esi = MEM32(ebp + (-0xFC)); /* 0x1505E184: mov esi, dword ptr [ebp - 0xfc] */
    MEM32(ebp + (-0x100)) = ebx; /* 0x1505E18A: mov dword ptr [ebp - 0x100], ebx */
    /* cmp ebx, esi */ /* 0x1505E190: cmp ebx, esi */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_B(_flag_a, _flag_b)) goto L_1505E1D7; /* 0x1505E192: jb 0x1505e1d7 */
L_1505E194:
    MEM32(ebp + (-0x11C)) = ecx; /* 0x1505E194: mov dword ptr [ebp - 0x11c], ecx */
    edx = ebx; /* 0x1505E19A: mov edx, ebx */
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1505E1C9; /* 0x1505E19C: je 0x1505e1c9 */
L_1505E19E:
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esi = esi - ebx; /* 0x1505E19E: sub esi, ebx */
    _flag_k = FK_CMP;
    ebx = ecx; /* 0x1505E1A0: mov ebx, ecx */
L_1505E1A2:
    SET_LO8(eax, MEM8(edx)); /* 0x1505E1A2: mov al, byte ptr [edx] */
    edx = edx + 0x1; /* 0x1505E1A4: lea edx, [edx + 1] */
    SET_LO8(ecx, MEM8(esi + edx + (-0x1))); /* 0x1505E1A7: mov cl, byte ptr [esi + edx - 1] */
    MEM8(esi + edx + (-0x1)) = (uint8_t)(LO8(eax)); /* 0x1505E1AB: mov byte ptr [esi + edx - 1], al */
    MEM8(edx + (-0x1)) = (uint8_t)(LO8(ecx)); /* 0x1505E1AF: mov byte ptr [edx - 1], cl */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(1);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ebx = ebx - 1; /* 0x1505E1B2: sub ebx, 1 */
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (/* sub result */ CMP_NE(_flag_a, _flag_b)) goto L_1505E1A2; /* 0x1505E1B5: jne 0x1505e1a2 */
L_1505E1B7:
    esi = MEM32(ebp + (-0xFC)); /* 0x1505E1B7: mov esi, dword ptr [ebp - 0xfc] */
    ebx = MEM32(ebp + (-0x100)); /* 0x1505E1BD: mov ebx, dword ptr [ebp - 0x100] */
    ecx = MEM32(ebp + (-0xF8)); /* 0x1505E1C3: mov ecx, dword ptr [ebp - 0xf8] */
L_1505E1C9:
    /* cmp edi, ebx */ /* 0x1505E1C9: cmp edi, ebx */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    eax = esi; /* 0x1505E1CB: mov eax, esi */
    if (CMP_NE(_flag_a, _flag_b)) { eax = edi; } /* 0x1505E1CD: cmovne eax, edi */
    edi = eax; /* 0x1505E1D0: mov edi, eax */
    RECOMP_BACKEDGE();
    goto L_1505E0E3; /* 0x1505E1D2: jmp 0x1505e0e3 */
L_1505E1D7:
    /* cmp edi, eax */ /* 0x1505E1D7: cmp edi, eax */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_AE(_flag_a, _flag_b)) goto L_1505E20F; /* 0x1505E1D9: jae 0x1505e20f */
L_1505E1DB:
    /* nop */ /* 0x1505E1DB: nop dword ptr [eax + eax] */
L_1505E1E0:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - ecx; /* 0x1505E1E0: sub eax, ecx */
    _flag_k = FK_CMP;
    MEM32(ebp + (-0x100)) = eax; /* 0x1505E1E2: mov dword ptr [ebp - 0x100], eax */
    /* cmp eax, edi */ /* 0x1505E1E8: cmp eax, edi */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_1505E20F; /* 0x1505E1EA: jbe 0x1505e20f */
L_1505E1EC:
    PUSH32(esp, edi); /* 0x1505E1EC: push edi */
    PUSH32(esp, eax); /* 0x1505E1ED: push eax */
    PUSH32(esp, MEM32(ebp + (-0x10C))); /* 0x1505E1EE: push dword ptr [ebp - 0x10c] */
    RECOMP_ICALL(MEM32(ebp + (-0x108))); /* 0x1505E1F4: call dword ptr [ebp - 0x108] */
    RECOMP_FLAGS_IN();
    ecx = MEM32(ebp + (-0xF8)); /* 0x1505E1FA: mov ecx, dword ptr [ebp - 0xf8] */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x1505E200: add esp, 0xc */
    _flag_k = FK_ADD;
    /* test eax, eax */ /* 0x1505E203: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    eax = MEM32(ebp + (-0x100)); /* 0x1505E205: mov eax, dword ptr [ebp - 0x100] */
    RECOMP_BACKEDGE();
    if (TEST_Z(_flag_a, _flag_b)) goto L_1505E1E0; /* 0x1505E20B: je 0x1505e1e0 */
L_1505E20D:
    goto L_1505E253; /* 0x1505E20D: jmp 0x1505e253 */
L_1505E20F:
    esi = MEM32(ebp + (-0x108)); /* 0x1505E20F: mov esi, dword ptr [ebp - 0x108] */
    /* nop */ /* 0x1505E215: nop word ptr [eax + eax] */
L_1505E220:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - ecx; /* 0x1505E220: sub eax, ecx */
    _flag_k = FK_CMP;
    MEM32(ebp + (-0x100)) = eax; /* 0x1505E222: mov dword ptr [ebp - 0x100], eax */
    /* cmp eax, MEM32(ebp + (-0x104)) */ /* 0x1505E228: cmp eax, dword ptr [ebp - 0x104] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(ebp + (-0x104)));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_1505E24D; /* 0x1505E22E: jbe 0x1505e24d */
L_1505E230:
    PUSH32(esp, edi); /* 0x1505E230: push edi */
    PUSH32(esp, eax); /* 0x1505E231: push eax */
    PUSH32(esp, MEM32(ebp + (-0x10C))); /* 0x1505E232: push dword ptr [ebp - 0x10c] */
    RECOMP_ICALL(esi); /* 0x1505E238: call esi */
    RECOMP_FLAGS_IN();
    ecx = MEM32(ebp + (-0xF8)); /* 0x1505E23A: mov ecx, dword ptr [ebp - 0xf8] */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x1505E240: add esp, 0xc */
    _flag_k = FK_ADD;
    /* test eax, eax */ /* 0x1505E243: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    eax = MEM32(ebp + (-0x100)); /* 0x1505E245: mov eax, dword ptr [ebp - 0x100] */
    RECOMP_BACKEDGE();
    if (TEST_Z(_flag_a, _flag_b)) goto L_1505E220; /* 0x1505E24B: je 0x1505e220 */
L_1505E24D:
    esi = MEM32(ebp + (-0xFC)); /* 0x1505E24D: mov esi, dword ptr [ebp - 0xfc] */
L_1505E253:
    ebx = MEM32(ebp + (-0x114)); /* 0x1505E253: mov ebx, dword ptr [ebp - 0x114] */
    ecx = ebx; /* 0x1505E259: mov ecx, ebx */
    edx = MEM32(ebp + (-0x100)); /* 0x1505E25B: mov edx, dword ptr [ebp - 0x100] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ecx = ecx - esi; /* 0x1505E261: sub ecx, esi */
    _flag_k = FK_CMP;
    edi = MEM32(ebp + (-0x104)); /* 0x1505E263: mov edi, dword ptr [ebp - 0x104] */
    eax = edx; /* 0x1505E269: mov eax, edx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - edi; /* 0x1505E26B: sub eax, edi */
    _flag_k = FK_CMP;
    /* cmp eax, ecx */ /* 0x1505E26D: cmp eax, ecx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    ecx = MEM32(ebp + (-0x110)); /* 0x1505E26F: mov ecx, dword ptr [ebp - 0x110] */
    if (CMP_L(_flag_a, _flag_b)) goto L_1505E2A4; /* 0x1505E275: jl 0x1505e2a4 */
L_1505E277:
    /* cmp edi, edx */ /* 0x1505E277: cmp edi, edx */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_AE(_flag_a, _flag_b)) goto L_1505E28D; /* 0x1505E279: jae 0x1505e28d */
L_1505E27B:
    MEM32(ebp + ecx * 4 + (-0x7C)) = edi; /* 0x1505E27B: mov dword ptr [ebp + ecx*4 - 0x7c], edi */
    MEM32(ebp + ecx * 4 + (-0xF4)) = edx; /* 0x1505E27F: mov dword ptr [ebp + ecx*4 - 0xf4], edx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx + 1; /* 0x1505E286: inc ecx */
    _flag_k = FK_INC;
    MEM32(ebp + (-0x110)) = ecx; /* 0x1505E287: mov dword ptr [ebp - 0x110], ecx */
L_1505E28D:
    /* cmp esi, ebx */ /* 0x1505E28D: cmp esi, ebx */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_AE(_flag_a, _flag_b)) goto L_1505E2CB; /* 0x1505E28F: jae 0x1505e2cb */
L_1505E291:
    edi = esi; /* 0x1505E291: mov edi, esi */
    esi = MEM32(ebp + (-0xF8)); /* 0x1505E293: mov esi, dword ptr [ebp - 0xf8] */
    MEM32(ebp + (-0x104)) = edi; /* 0x1505E299: mov dword ptr [ebp - 0x104], edi */
    RECOMP_BACKEDGE();
    goto L_1505DF20; /* 0x1505E29F: jmp 0x1505df20 */
L_1505E2A4:
    /* cmp esi, ebx */ /* 0x1505E2A4: cmp esi, ebx */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_AE(_flag_a, _flag_b)) goto L_1505E2BA; /* 0x1505E2A6: jae 0x1505e2ba */
L_1505E2A8:
    MEM32(ebp + ecx * 4 + (-0x7C)) = esi; /* 0x1505E2A8: mov dword ptr [ebp + ecx*4 - 0x7c], esi */
    MEM32(ebp + ecx * 4 + (-0xF4)) = ebx; /* 0x1505E2AC: mov dword ptr [ebp + ecx*4 - 0xf4], ebx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx + 1; /* 0x1505E2B3: inc ecx */
    _flag_k = FK_INC;
    MEM32(ebp + (-0x110)) = ecx; /* 0x1505E2B4: mov dword ptr [ebp - 0x110], ecx */
L_1505E2BA:
    esi = MEM32(ebp + (-0xF8)); /* 0x1505E2BA: mov esi, dword ptr [ebp - 0xf8] */
    /* cmp edi, edx */ /* 0x1505E2C0: cmp edi, edx */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_AE(_flag_a, _flag_b)) goto L_1505E2D1; /* 0x1505E2C2: jae 0x1505e2d1 */
L_1505E2C4:
    ebx = edx; /* 0x1505E2C4: mov ebx, edx */
    RECOMP_BACKEDGE();
    goto L_1505DF17; /* 0x1505E2C6: jmp 0x1505df17 */
L_1505E2CB:
    esi = MEM32(ebp + (-0xF8)); /* 0x1505E2CB: mov esi, dword ptr [ebp - 0xf8] */
L_1505E2D1:
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ecx = ecx - 1; /* 0x1505E2D1: sub ecx, 1 */
    _flag_k = FK_CMP;
    MEM32(ebp + (-0x110)) = ecx; /* 0x1505E2D4: mov dword ptr [ebp - 0x110], ecx */
    RECOMP_BACKEDGE();
    if (/* sub result */ CMP_S(_flag_a, _flag_b)) goto L_1505DEE4; /* 0x1505E2DA: js 0x1505dee4 */
L_1505E2E0:
    edi = MEM32(ebp + ecx * 4 + (-0x7C)); /* 0x1505E2E0: mov edi, dword ptr [ebp + ecx*4 - 0x7c] */
    ebx = MEM32(ebp + ecx * 4 + (-0xF4)); /* 0x1505E2E4: mov ebx, dword ptr [ebp + ecx*4 - 0xf4] */
    MEM32(ebp + (-0x104)) = edi; /* 0x1505E2EB: mov dword ptr [ebp - 0x104], edi */
    RECOMP_BACKEDGE();
    goto L_1505DF17; /* 0x1505E2F1: jmp 0x1505df17 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    RECOMP_REGS_OUT();
}

void sub_1505E300(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1505E300u);

L_1505E300:
    RECOMP_CALL(sub_15068820); /* 0x1505E300: call 0x15068820 */
    RECOMP_FLAGS_IN();
    ecx = (uint32_t)((int32_t)MEM32(eax + 0x14) * (int32_t)0x000343FDu); /* 0x1505E305: imul ecx, dword ptr [eax + 0x14], 0x343fd */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x00269EC3u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 0x00269EC3u; /* 0x1505E30C: add ecx, 0x269ec3 */
    _flag_k = FK_ADD;
    MEM32(eax + 0x14) = ecx; /* 0x1505E312: mov dword ptr [eax + 0x14], ecx */
    if (16u) _cf = (((ecx) >> 15) & 1u); /* 0x1505E315: shr ecx, 0x10 */
    if (16u) { _flag_a = recomp_flags_pack((ecx >> 16u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ecx = ecx >> 16u; /* 0x1505E315: shr ecx, 0x10 */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x7FFFu);
    ecx = ecx & 0x7FFFu; /* 0x1505E318: and ecx, 0x7fff */
    _cf = 0;
    _flag_k = FK_TEST;
    eax = ecx; /* 0x1505E31E: mov eax, ecx */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1505E320: ret  */
    RECOMP_REGS_OUT();
}

void sub_1505E330(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1505E330u);

L_1505E330:
    edi = edi; /* 0x1505E330: mov edi, edi */
    PUSH32(esp, ebp); /* 0x1505E332: push ebp */
    ebp = esp; /* 0x1505E333: mov ebp, esp */
    RECOMP_CALL(sub_15068820); /* 0x1505E335: call 0x15068820 */
    RECOMP_FLAGS_IN();
    ecx = MEM32(ebp + 0x8); /* 0x1505E33A: mov ecx, dword ptr [ebp + 8] */
    MEM32(eax + 0x14) = ecx; /* 0x1505E33D: mov dword ptr [eax + 0x14], ecx */
    ebp = POP32_VAL(esp); /* 0x1505E340: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1505E341: ret  */
    RECOMP_REGS_OUT();
}

void sub_1505E348(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1505E348u);

L_1505E348:
    edi = edi; /* 0x1505E348: mov edi, edi */
    PUSH32(esp, ebp); /* 0x1505E34A: push ebp */
    ebp = esp; /* 0x1505E34B: mov ebp, esp */
    eax = MEM32(ebp + 0x8); /* 0x1505E34D: mov eax, dword ptr [ebp + 8] */
    MEM32(0x150BDBD8) = eax; /* 0x1505E350: mov dword ptr [0x150bdbd8], eax */
    ebp = POP32_VAL(esp); /* 0x1505E355: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1505E356: ret  */
    RECOMP_REGS_OUT();
}

void sub_1505E360(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1505E360u);

L_1505E360:
    edi = edi; /* 0x1505E360: mov edi, edi */
    PUSH32(esp, ebp); /* 0x1505E362: push ebp */
    ebp = esp; /* 0x1505E363: mov ebp, esp */
    PUSH32(esp, ecx); /* 0x1505E365: push ecx */
    PUSH32(esp, ebx); /* 0x1505E366: push ebx */
    PUSH32(esp, esi); /* 0x1505E367: push esi */
    PUSH32(esp, edi); /* 0x1505E368: push edi */
    PUSH32(esp, MEM32(0x150BDBD8)); /* 0x1505E369: push dword ptr [0x150bdbd8] */
    RECOMP_CALL(sub_1506863C); /* 0x1505E36F: call 0x1506863c */
    RECOMP_FLAGS_IN();
    ebx = eax; /* 0x1505E374: mov ebx, eax */
    eax = MEM32(ebp + 0x8); /* 0x1505E376: mov eax, dword ptr [ebp + 8] */
    ecx = POP32_VAL(esp); /* 0x1505E379: pop ecx */
    /* test eax, eax */ /* 0x1505E37A: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1505E39E; /* 0x1505E37C: jne 0x1505e39e */
L_1505E37E:
    RECOMP_CALL(sub_15036430); /* 0x1505E37E: call 0x15036430 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edi = 0; /* 0x1505E383: xor edi, edi */
    _cf = 0;
    _flag_k = FK_TEST;
L_1505E385:
    PUSH32(esp, 0x16u); /* 0x1505E385: push 0x16 */
    esi = POP32_VAL(esp); /* 0x1505E387: pop esi */
    PUSH32(esp, edi); /* 0x1505E388: push edi */
    PUSH32(esp, edi); /* 0x1505E389: push edi */
    PUSH32(esp, edi); /* 0x1505E38A: push edi */
    PUSH32(esp, edi); /* 0x1505E38B: push edi */
    PUSH32(esp, edi); /* 0x1505E38C: push edi */
    MEM32(eax) = esi; /* 0x1505E38D: mov dword ptr [eax], esi */
    RECOMP_CALL(sub_1505A110); /* 0x1505E38F: call 0x1505a110 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x14u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x14u; /* 0x1505E394: add esp, 0x14 */
    _flag_k = FK_ADD;
    eax = esi; /* 0x1505E397: mov eax, esi */
    goto L_1505E44E; /* 0x1505E399: jmp 0x1505e44e */
L_1505E39E:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edi = 0; /* 0x1505E39E: xor edi, edi */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(eax) = edi; /* 0x1505E3A0: mov dword ptr [eax], edi */
    /* test ebx, ebx */ /* 0x1505E3A2: test ebx, ebx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ebx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1505E42D; /* 0x1505E3A4: jne 0x1505e42d */
L_1505E3AA:
    PUSH32(esp, edi); /* 0x1505E3AA: push edi */
    PUSH32(esp, edi); /* 0x1505E3AB: push edi */
    PUSH32(esp, 0x15006324u); /* 0x1505E3AC: push 0x15006324 */
    RECOMP_ICALL(MEM32(0x150C0160)); /* 0x1505E3B1: call dword ptr [0x150c0160] */
    RECOMP_FLAGS_IN();
    MEM32(ebp + (-0x4)) = eax; /* 0x1505E3B7: mov dword ptr [ebp - 4], eax */
    /* test eax, eax */ /* 0x1505E3BA: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1505E3C5; /* 0x1505E3BC: jne 0x1505e3c5 */
L_1505E3BE:
    RECOMP_CALL(sub_15036430); /* 0x1505E3BE: call 0x15036430 */
    RECOMP_FLAGS_IN();
    RECOMP_BACKEDGE();
    goto L_1505E385; /* 0x1505E3C3: jmp 0x1505e385 */
L_1505E3C5:
    PUSH32(esp, 0x15006340u); /* 0x1505E3C5: push 0x15006340 */
    PUSH32(esp, eax); /* 0x1505E3CA: push eax */
    RECOMP_ICALL(MEM32(0x150C0174)); /* 0x1505E3CB: call dword ptr [0x150c0174] */
    RECOMP_FLAGS_IN();
    ebx = eax; /* 0x1505E3D1: mov ebx, eax */
    /* test ebx, ebx */ /* 0x1505E3D3: test ebx, ebx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ebx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1505E408; /* 0x1505E3D5: jne 0x1505e408 */
L_1505E3D7:
    RECOMP_CALL(sub_15036430); /* 0x1505E3D7: call 0x15036430 */
    RECOMP_FLAGS_IN();
    esi = eax; /* 0x1505E3DC: mov esi, eax */
    RECOMP_ICALL(MEM32(0x150C006C)); /* 0x1505E3DE: call dword ptr [0x150c006c] */
    RECOMP_FLAGS_IN();
    PUSH32(esp, eax); /* 0x1505E3E4: push eax */
    RECOMP_CALL(sub_150364C5); /* 0x1505E3E5: call 0x150364c5 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, edi); /* 0x1505E3EA: push edi */
    PUSH32(esp, edi); /* 0x1505E3EB: push edi */
    PUSH32(esp, edi); /* 0x1505E3EC: push edi */
    PUSH32(esp, edi); /* 0x1505E3ED: push edi */
    PUSH32(esp, edi); /* 0x1505E3EE: push edi */
    MEM32(esi) = eax; /* 0x1505E3EF: mov dword ptr [esi], eax */
    RECOMP_CALL(sub_1505A110); /* 0x1505E3F1: call 0x1505a110 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x18u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x18u; /* 0x1505E3F6: add esp, 0x18 */
    _flag_k = FK_ADD;
    RECOMP_ICALL(MEM32(0x150C006C)); /* 0x1505E3F9: call dword ptr [0x150c006c] */
    RECOMP_FLAGS_IN();
    PUSH32(esp, eax); /* 0x1505E3FF: push eax */
    RECOMP_CALL(sub_150364C5); /* 0x1505E400: call 0x150364c5 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1505E405: pop ecx */
    goto L_1505E44E; /* 0x1505E406: jmp 0x1505e44e */
L_1505E408:
    PUSH32(esp, ebx); /* 0x1505E408: push ebx */
    RECOMP_CALL(sub_15068652); /* 0x1505E409: call 0x15068652 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1505E40E: pop ecx */
    esi = eax; /* 0x1505E40F: mov esi, eax */
    RECOMP_CALL(sub_15068668); /* 0x1505E411: call 0x15068668 */
    RECOMP_FLAGS_IN();
    ecx = 0x150BDBD8u; /* 0x1505E416: mov ecx, 0x150bdbd8 */
    { uint32_t _tmp = MEM32(ecx); /* 0x1505E41B: xchg dword ptr [ecx], esi */
      MEM32(ecx) = esi;
      esi = _tmp; }
    /* cmp esi, eax */ /* 0x1505E41D: cmp esi, eax */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1505E42A; /* 0x1505E41F: je 0x1505e42a */
L_1505E421:
    PUSH32(esp, MEM32(ebp + (-0x4))); /* 0x1505E421: push dword ptr [ebp - 4] */
    RECOMP_ICALL(MEM32(0x150C0170)); /* 0x1505E424: call dword ptr [0x150c0170] */
    RECOMP_FLAGS_IN();
L_1505E42A:
    eax = MEM32(ebp + 0x8); /* 0x1505E42A: mov eax, dword ptr [ebp + 8] */
L_1505E42D:
    PUSH32(esp, 4); /* 0x1505E42D: push 4 */
    PUSH32(esp, eax); /* 0x1505E42F: push eax */
    ecx = ebx; /* 0x1505E430: mov ecx, ebx */
    RECOMP_ICALL(MEM32(0x150C02B0)); /* 0x1505E432: call dword ptr [0x150c02b0] */
    RECOMP_FLAGS_IN();
    RECOMP_ICALL(ebx); /* 0x1505E438: call ebx */
    RECOMP_FLAGS_IN();
    /* test LO8(eax), LO8(eax) */ /* 0x1505E43A: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1505E44C; /* 0x1505E43C: jne 0x1505e44c */
L_1505E43E:
    RECOMP_CALL(sub_15036430); /* 0x1505E43E: call 0x15036430 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0xCu); /* 0x1505E443: push 0xc */
    ecx = POP32_VAL(esp); /* 0x1505E445: pop ecx */
    MEM32(eax) = ecx; /* 0x1505E446: mov dword ptr [eax], ecx */
    eax = ecx; /* 0x1505E448: mov eax, ecx */
    goto L_1505E44E; /* 0x1505E44A: jmp 0x1505e44e */
L_1505E44C:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1505E44C: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
L_1505E44E:
    edi = POP32_VAL(esp); /* 0x1505E44E: pop edi */
    esi = POP32_VAL(esp); /* 0x1505E44F: pop esi */
    ebx = POP32_VAL(esp); /* 0x1505E450: pop ebx */
    esp = ebp; ebp = POP32_VAL(esp); /* 0x1505E451: leave  */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1505E452: ret  */
    RECOMP_REGS_OUT();
}

void sub_1505E460(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1505E460u);

L_1505E460:
    edi = edi; /* 0x1505E460: mov edi, edi */
    PUSH32(esp, ebp); /* 0x1505E462: push ebp */
    ebp = esp; /* 0x1505E463: mov ebp, esp */
    PUSH32(esp, ebx); /* 0x1505E465: push ebx */
    PUSH32(esp, esi); /* 0x1505E466: push esi */
    PUSH32(esp, edi); /* 0x1505E467: push edi */
    RECOMP_CALL(sub_15068840); /* 0x1505E468: call 0x15068840 */
    RECOMP_FLAGS_IN();
    edi = eax; /* 0x1505E46D: mov edi, eax */
    /* test edi, edi */ /* 0x1505E46F: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1505E4BC; /* 0x1505E471: je 0x1505e4bc */
L_1505E473:
    esi = MEM32(edi + 0x24); /* 0x1505E473: mov esi, dword ptr [edi + 0x24] */
    ebx = 0x86u; /* 0x1505E476: mov ebx, 0x86 */
    /* test esi, esi */ /* 0x1505E47B: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1505E492; /* 0x1505E47D: jne 0x1505e492 */
L_1505E47F:
    PUSH32(esp, 1); /* 0x1505E47F: push 1 */
    PUSH32(esp, ebx); /* 0x1505E481: push ebx */
    RECOMP_CALL(sub_15048EE2); /* 0x1505E482: call 0x15048ee2 */
    RECOMP_FLAGS_IN();
    esi = eax; /* 0x1505E487: mov esi, eax */
    MEM32(edi + 0x24) = esi; /* 0x1505E489: mov dword ptr [edi + 0x24], esi */
    ecx = POP32_VAL(esp); /* 0x1505E48C: pop ecx */
    ecx = POP32_VAL(esp); /* 0x1505E48D: pop ecx */
    /* test esi, esi */ /* 0x1505E48E: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1505E4BC; /* 0x1505E490: je 0x1505e4bc */
L_1505E492:
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x1505E492: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_15059547); /* 0x1505E495: call 0x15059547 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, eax); /* 0x1505E49A: push eax */
    PUSH32(esp, ebx); /* 0x1505E49B: push ebx */
    PUSH32(esp, esi); /* 0x1505E49C: push esi */
    RECOMP_CALL(sub_1508E640); /* 0x1505E49D: call 0x1508e640 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x10u; /* 0x1505E4A2: add esp, 0x10 */
    _flag_k = FK_ADD;
    /* test eax, eax */ /* 0x1505E4A5: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1505E4B8; /* 0x1505E4A7: je 0x1505e4b8 */
L_1505E4A9:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1505E4A9: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, eax); /* 0x1505E4AB: push eax */
    PUSH32(esp, eax); /* 0x1505E4AC: push eax */
    PUSH32(esp, eax); /* 0x1505E4AD: push eax */
    PUSH32(esp, eax); /* 0x1505E4AE: push eax */
    PUSH32(esp, eax); /* 0x1505E4AF: push eax */
    RECOMP_CALL(sub_1505A11B); /* 0x1505E4B0: call 0x1505a11b */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x14u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x14u; /* 0x1505E4B5: add esp, 0x14 */
    _flag_k = FK_ADD;
L_1505E4B8:
    eax = esi; /* 0x1505E4B8: mov eax, esi */
    goto L_1505E4C1; /* 0x1505E4BA: jmp 0x1505e4c1 */
L_1505E4BC:
    eax = 0x15006358u; /* 0x1505E4BC: mov eax, 0x15006358 */
L_1505E4C1:
    edi = POP32_VAL(esp); /* 0x1505E4C1: pop edi */
    esi = POP32_VAL(esp); /* 0x1505E4C2: pop esi */
    ebx = POP32_VAL(esp); /* 0x1505E4C3: pop ebx */
    ebp = POP32_VAL(esp); /* 0x1505E4C4: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1505E4C5: ret  */
    RECOMP_REGS_OUT();
}
