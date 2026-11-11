#define RECOMP_GENERATED_CODE

#include "functions.h"

void sub_15077630(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x15077630u);

L_15077630:
    edi = edi; /* 0x15077630: mov edi, edi */
    PUSH32(esp, ebp); /* 0x15077632: push ebp */
    ebp = esp; /* 0x15077633: mov ebp, esp */
    eax = ebp + 0x14; /* 0x15077635: lea eax, [ebp + 0x14] */
    PUSH32(esp, eax); /* 0x15077638: push eax */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x15077639: push dword ptr [ebp + 0x10] */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x1507763C: push dword ptr [ebp + 0xc] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x1507763F: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_150799C0); /* 0x15077642: call 0x150799c0 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x10u; /* 0x15077647: add esp, 0x10 */
    _flag_k = FK_ADD;
    ebp = POP32_VAL(esp); /* 0x1507764A: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1507764B: ret  */
    RECOMP_REGS_OUT();
}

void sub_15077660(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x15077660u);

L_15077660:
    PUSH32(esp, 0x10u); /* 0x15077660: push 0x10 */
    PUSH32(esp, 0x150B0F80u); /* 0x15077662: push 0x150b0f80 */
    RECOMP_CALL(sub_1505E988); /* 0x15077667: call 0x1505e988 */
    RECOMP_FLAGS_IN();
    ebx = MEM32(ebp + 0x8); /* 0x1507766C: mov ebx, dword ptr [ebp + 8] */
    /* test ebx, ebx */ /* 0x1507766F: test ebx, ebx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ebx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_15077692; /* 0x15077671: jne 0x15077692 */
L_15077673:
    RECOMP_CALL(sub_15036430); /* 0x15077673: call 0x15036430 */
    RECOMP_FLAGS_IN();
    MEM32(eax) = 0x16u; /* 0x15077678: mov dword ptr [eax], 0x16 */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edi = 0; /* 0x1507767E: xor edi, edi */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, edi); /* 0x15077680: push edi */
    PUSH32(esp, edi); /* 0x15077681: push edi */
    PUSH32(esp, edi); /* 0x15077682: push edi */
    PUSH32(esp, edi); /* 0x15077683: push edi */
    PUSH32(esp, edi); /* 0x15077684: push edi */
    RECOMP_CALL(sub_1505A110); /* 0x15077685: call 0x1505a110 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x14u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x14u; /* 0x1507768A: add esp, 0x14 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)((eax | 0xFFFFFFFFu)); _flag_b = (uint32_t)((eax | 0xFFFFFFFFu));
    eax = eax | 0xFFFFFFFFu; /* 0x1507768D: or eax, 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_150776DA; /* 0x15077690: jmp 0x150776da */
L_15077692:
    /* cmp MEM32(ebp + 0xC), 0 */ /* 0x15077692: cmp dword ptr [ebp + 0xc], 0 */
    _flag_a = (uint32_t)(MEM32(ebp + 0xC)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_EQ(_flag_a, _flag_b)) goto L_15077673; /* 0x15077696: je 0x15077673 */
L_15077698:
    MEM32(ebp + (-0x1C)) = ebx; /* 0x15077698: mov dword ptr [ebp - 0x1c], ebx */
    PUSH32(esp, ebx); /* 0x1507769B: push ebx */
    RECOMP_CALL(sub_1506A946); /* 0x1507769C: call 0x1506a946 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x150776A1: pop ecx */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edi = 0; /* 0x150776A2: xor edi, edi */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x4)) = edi; /* 0x150776A4: mov dword ptr [ebp - 4], edi */
    PUSH32(esp, ebx); /* 0x150776A7: push ebx */
    RECOMP_CALL(sub_15083DAF); /* 0x150776A8: call 0x15083daf */
    RECOMP_FLAGS_IN();
    esi = eax; /* 0x150776AD: mov esi, eax */
    eax = ebp + 0x10; /* 0x150776AF: lea eax, [ebp + 0x10] */
    PUSH32(esp, eax); /* 0x150776B2: push eax */
    PUSH32(esp, edi); /* 0x150776B3: push edi */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x150776B4: push dword ptr [ebp + 0xc] */
    PUSH32(esp, ebx); /* 0x150776B7: push ebx */
    RECOMP_CALL(sub_15086A80); /* 0x150776B8: call 0x15086a80 */
    RECOMP_FLAGS_IN();
    edi = eax; /* 0x150776BD: mov edi, eax */
    MEM32(ebp + (-0x20)) = edi; /* 0x150776BF: mov dword ptr [ebp - 0x20], edi */
    PUSH32(esp, ebx); /* 0x150776C2: push ebx */
    PUSH32(esp, esi); /* 0x150776C3: push esi */
    RECOMP_CALL(sub_15083D76); /* 0x150776C4: call 0x15083d76 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x1Cu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x1Cu; /* 0x150776C9: add esp, 0x1c */
    _flag_k = FK_ADD;
    MEM32(ebp + (-0x4)) = 0xFFFFFFFEu; /* 0x150776CC: mov dword ptr [ebp - 4], 0xfffffffe */
    RECOMP_CALL(sub_150776F0); /* 0x150776D3: call 0x150776f0 */
    RECOMP_FLAGS_IN();
    eax = edi; /* 0x150776D8: mov eax, edi */
L_150776DA:
    ecx = MEM32(ebp + (-0x10)); /* 0x150776DA: mov ecx, dword ptr [ebp - 0x10] */
    MEM32(FS_BASE + (0)) = ecx; /* 0x150776DD: mov dword ptr fs:[0], ecx */
    ecx = POP32_VAL(esp); /* 0x150776E4: pop ecx */
    edi = POP32_VAL(esp); /* 0x150776E5: pop edi */
    esi = POP32_VAL(esp); /* 0x150776E6: pop esi */
    ebx = POP32_VAL(esp); /* 0x150776E7: pop ebx */
    esp = ebp; ebp = POP32_VAL(esp); /* 0x150776E8: leave  */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x150776E9: ret  */
    RECOMP_REGS_OUT();
}

void sub_150776F0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x150776F0u);

L_150776F0:
    PUSH32(esp, ebx); /* 0x150776F0: push ebx */
    RECOMP_CALL(sub_1506A9C5); /* 0x150776F1: call 0x1506a9c5 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x150776F6: pop ecx */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x150776F7: ret  */
    RECOMP_REGS_OUT();
}

void sub_15077700(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x15077700u);

L_15077700:
    edi = edi; /* 0x15077700: mov edi, edi */
    PUSH32(esp, ebp); /* 0x15077702: push ebp */
    ebp = esp; /* 0x15077703: mov ebp, esp */
    eax = ebp + 0x10; /* 0x15077705: lea eax, [ebp + 0x10] */
    PUSH32(esp, eax); /* 0x15077708: push eax */
    PUSH32(esp, 0); /* 0x15077709: push 0 */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x1507770B: push dword ptr [ebp + 0xc] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x1507770E: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_150799C0); /* 0x15077711: call 0x150799c0 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x10u; /* 0x15077716: add esp, 0x10 */
    _flag_k = FK_ADD;
    ebp = POP32_VAL(esp); /* 0x15077719: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1507771A: ret  */
    RECOMP_REGS_OUT();
}

void sub_15077730(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x15077730u);

L_15077730:
    edi = edi; /* 0x15077730: mov edi, edi */
    PUSH32(esp, ebp); /* 0x15077732: push ebp */
    ebp = esp; /* 0x15077733: mov ebp, esp */
    eax = ebp + 0x14; /* 0x15077735: lea eax, [ebp + 0x14] */
    PUSH32(esp, eax); /* 0x15077738: push eax */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x15077739: push dword ptr [ebp + 0x10] */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x1507773C: push dword ptr [ebp + 0xc] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x1507773F: push dword ptr [ebp + 8] */
    PUSH32(esp, 0x15087A20u); /* 0x15077742: push 0x15087a20 */
    RECOMP_CALL(sub_150777E6); /* 0x15077747: call 0x150777e6 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x14u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x14u; /* 0x1507774C: add esp, 0x14 */
    _flag_k = FK_ADD;
    ebp = POP32_VAL(esp); /* 0x1507774F: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x15077750: ret  */
    RECOMP_REGS_OUT();
}

void sub_15077760(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x15077760u);

L_15077760:
    edi = edi; /* 0x15077760: mov edi, edi */
    PUSH32(esp, ebp); /* 0x15077762: push ebp */
    ebp = esp; /* 0x15077763: mov ebp, esp */
    eax = ebp + 0x14; /* 0x15077765: lea eax, [ebp + 0x14] */
    PUSH32(esp, eax); /* 0x15077768: push eax */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x15077769: push dword ptr [ebp + 0x10] */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x1507776C: push dword ptr [ebp + 0xc] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x1507776F: push dword ptr [ebp + 8] */
    PUSH32(esp, 0x15088FA0u); /* 0x15077772: push 0x15088fa0 */
    RECOMP_CALL(sub_150777E6); /* 0x15077777: call 0x150777e6 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x14u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x14u; /* 0x1507777C: add esp, 0x14 */
    _flag_k = FK_ADD;
    ebp = POP32_VAL(esp); /* 0x1507777F: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x15077780: ret  */
    RECOMP_REGS_OUT();
}

void sub_15077790(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x15077790u);

L_15077790:
    edi = edi; /* 0x15077790: mov edi, edi */
    PUSH32(esp, ebp); /* 0x15077792: push ebp */
    ebp = esp; /* 0x15077793: mov ebp, esp */
    eax = ebp + 0x10; /* 0x15077795: lea eax, [ebp + 0x10] */
    PUSH32(esp, eax); /* 0x15077798: push eax */
    PUSH32(esp, 0); /* 0x15077799: push 0 */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x1507779B: push dword ptr [ebp + 0xc] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x1507779E: push dword ptr [ebp + 8] */
    PUSH32(esp, 0x15087A20u); /* 0x150777A1: push 0x15087a20 */
    RECOMP_CALL(sub_150777E6); /* 0x150777A6: call 0x150777e6 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x14u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x14u; /* 0x150777AB: add esp, 0x14 */
    _flag_k = FK_ADD;
    ebp = POP32_VAL(esp); /* 0x150777AE: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x150777AF: ret  */
    RECOMP_REGS_OUT();
}

void sub_150777C0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x150777C0u);

L_150777C0:
    edi = edi; /* 0x150777C0: mov edi, edi */
    PUSH32(esp, ebp); /* 0x150777C2: push ebp */
    ebp = esp; /* 0x150777C3: mov ebp, esp */
    eax = ebp + 0x10; /* 0x150777C5: lea eax, [ebp + 0x10] */
    PUSH32(esp, eax); /* 0x150777C8: push eax */
    PUSH32(esp, 0); /* 0x150777C9: push 0 */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x150777CB: push dword ptr [ebp + 0xc] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x150777CE: push dword ptr [ebp + 8] */
    PUSH32(esp, 0x15088FA0u); /* 0x150777D1: push 0x15088fa0 */
    RECOMP_CALL(sub_150777E6); /* 0x150777D6: call 0x150777e6 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x14u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x14u; /* 0x150777DB: add esp, 0x14 */
    _flag_k = FK_ADD;
    ebp = POP32_VAL(esp); /* 0x150777DE: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x150777DF: ret  */
    RECOMP_REGS_OUT();
}

void sub_150777E6(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x150777E6u);

L_150777E6:
    PUSH32(esp, 0xCu); /* 0x150777E6: push 0xc */
    PUSH32(esp, 0x150B0FA0u); /* 0x150777E8: push 0x150b0fa0 */
    RECOMP_CALL(sub_1505E988); /* 0x150777ED: call 0x1505e988 */
    RECOMP_FLAGS_IN();
    esi = MEM32(ebp + 0xC); /* 0x150777F2: mov esi, dword ptr [ebp + 0xc] */
    /* test esi, esi */ /* 0x150777F5: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_15077818; /* 0x150777F7: jne 0x15077818 */
L_150777F9:
    RECOMP_CALL(sub_15036430); /* 0x150777F9: call 0x15036430 */
    RECOMP_FLAGS_IN();
    MEM32(eax) = 0x16u; /* 0x150777FE: mov dword ptr [eax], 0x16 */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x15077804: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, eax); /* 0x15077806: push eax */
    PUSH32(esp, eax); /* 0x15077807: push eax */
    PUSH32(esp, eax); /* 0x15077808: push eax */
    PUSH32(esp, eax); /* 0x15077809: push eax */
    PUSH32(esp, eax); /* 0x1507780A: push eax */
    RECOMP_CALL(sub_1505A110); /* 0x1507780B: call 0x1505a110 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x14u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x14u; /* 0x15077810: add esp, 0x14 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)((eax | 0xFFFFFFFFu)); _flag_b = (uint32_t)((eax | 0xFFFFFFFFu));
    eax = eax | 0xFFFFFFFFu; /* 0x15077813: or eax, 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_15077855; /* 0x15077816: jmp 0x15077855 */
L_15077818:
    /* cmp MEM32(ebp + 0x10), 0 */ /* 0x15077818: cmp dword ptr [ebp + 0x10], 0 */
    _flag_a = (uint32_t)(MEM32(ebp + 0x10)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_EQ(_flag_a, _flag_b)) goto L_150777F9; /* 0x1507781C: je 0x150777f9 */
L_1507781E:
    PUSH32(esp, esi); /* 0x1507781E: push esi */
    RECOMP_CALL(sub_1506A946); /* 0x1507781F: call 0x1506a946 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x15077824: pop ecx */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x4))); _flag_b = (uint32_t)(0);
    MEM32(ebp + (-0x4)) = MEM32(ebp + (-0x4)) & 0; /* 0x15077825: and dword ptr [ebp - 4], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, MEM32(ebp + 0x18)); /* 0x15077829: push dword ptr [ebp + 0x18] */
    PUSH32(esp, MEM32(ebp + 0x14)); /* 0x1507782C: push dword ptr [ebp + 0x14] */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x1507782F: push dword ptr [ebp + 0x10] */
    PUSH32(esp, esi); /* 0x15077832: push esi */
    ecx = MEM32(ebp + 0x8); /* 0x15077833: mov ecx, dword ptr [ebp + 8] */
    RECOMP_ICALL(MEM32(0x150C02B0)); /* 0x15077836: call dword ptr [0x150c02b0] */
    RECOMP_FLAGS_IN();
    RECOMP_ICALL(MEM32(ebp + 0x8)); /* 0x1507783C: call dword ptr [ebp + 8] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x10u; /* 0x1507783F: add esp, 0x10 */
    _flag_k = FK_ADD;
    edi = eax; /* 0x15077842: mov edi, eax */
    MEM32(ebp + (-0x1C)) = edi; /* 0x15077844: mov dword ptr [ebp - 0x1c], edi */
    MEM32(ebp + (-0x4)) = 0xFFFFFFFEu; /* 0x15077847: mov dword ptr [ebp - 4], 0xfffffffe */
    RECOMP_CALL(sub_1507786B); /* 0x1507784E: call 0x1507786b */
    RECOMP_FLAGS_IN();
    eax = edi; /* 0x15077853: mov eax, edi */
L_15077855:
    ecx = MEM32(ebp + (-0x10)); /* 0x15077855: mov ecx, dword ptr [ebp - 0x10] */
    MEM32(FS_BASE + (0)) = ecx; /* 0x15077858: mov dword ptr fs:[0], ecx */
    ecx = POP32_VAL(esp); /* 0x1507785F: pop ecx */
    edi = POP32_VAL(esp); /* 0x15077860: pop edi */
    esi = POP32_VAL(esp); /* 0x15077861: pop esi */
    ebx = POP32_VAL(esp); /* 0x15077862: pop ebx */
    esp = ebp; ebp = POP32_VAL(esp); /* 0x15077863: leave  */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x15077864: ret  */
    RECOMP_REGS_OUT();
}

void sub_1507786B(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1507786Bu);

L_1507786B:
    PUSH32(esp, esi); /* 0x1507786B: push esi */
    RECOMP_CALL(sub_1506A9C5); /* 0x1507786C: call 0x1506a9c5 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x15077871: pop ecx */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x15077872: ret  */
    RECOMP_REGS_OUT();
}

void sub_15077880(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x15077880u);

L_15077880:
    eax = MEM32(0x150BE968); /* 0x15077880: mov eax, dword ptr [0x150be968] */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x15077885: ret  */
    RECOMP_REGS_OUT();
}

void sub_15077890(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x15077890u);

L_15077890:
    edi = edi; /* 0x15077890: mov edi, edi */
    PUSH32(esp, ebp); /* 0x15077892: push ebp */
    ebp = esp; /* 0x15077893: mov ebp, esp */
    eax = MEM32(ebp + 0x8); /* 0x15077895: mov eax, dword ptr [ebp + 8] */
    PUSH32(esp, esi); /* 0x15077898: push esi */
    esi = MEM32(0x150BE968); /* 0x15077899: mov esi, dword ptr [0x150be968] */
    /* test eax, 0xFFFFFFFEu */ /* 0x1507789F: test eax, 0xfffffffe */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xFFFFFFFEu);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_150778C2; /* 0x150778A4: je 0x150778c2 */
L_150778A6:
    RECOMP_CALL(sub_15036430); /* 0x150778A6: call 0x15036430 */
    RECOMP_FLAGS_IN();
    MEM32(eax) = 0x16u; /* 0x150778AB: mov dword ptr [eax], 0x16 */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x150778B1: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, eax); /* 0x150778B3: push eax */
    PUSH32(esp, eax); /* 0x150778B4: push eax */
    PUSH32(esp, eax); /* 0x150778B5: push eax */
    PUSH32(esp, eax); /* 0x150778B6: push eax */
    PUSH32(esp, eax); /* 0x150778B7: push eax */
    RECOMP_CALL(sub_1505A110); /* 0x150778B8: call 0x1505a110 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x14u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x14u; /* 0x150778BD: add esp, 0x14 */
    _flag_k = FK_ADD;
    goto L_150778C7; /* 0x150778C0: jmp 0x150778c7 */
L_150778C2:
    MEM32(0x150BE968) = eax; /* 0x150778C2: mov dword ptr [0x150be968], eax */
L_150778C7:
    eax = esi; /* 0x150778C7: mov eax, esi */
    esi = POP32_VAL(esp); /* 0x150778C9: pop esi */
    ebp = POP32_VAL(esp); /* 0x150778CA: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x150778CB: ret  */
    RECOMP_REGS_OUT();
}

void sub_150778E0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x150778E0u);

L_150778E0:
    eax = MEM32(0x150BD680); /* 0x150778E0: mov eax, dword ptr [0x150bd680] */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x150778E5: ret  */
    RECOMP_REGS_OUT();
}

void sub_150778F0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x150778F0u);

L_150778F0:
    PUSH32(esp, 0x10u); /* 0x150778F0: push 0x10 */
    PUSH32(esp, 0x150B0FC0u); /* 0x150778F2: push 0x150b0fc0 */
    RECOMP_CALL(sub_1505E988); /* 0x150778F7: call 0x1505e988 */
    RECOMP_FLAGS_IN();
    esi = MEM32(ebp + 0x8); /* 0x150778FC: mov esi, dword ptr [ebp + 8] */
    eax = esi + (-0x14); /* 0x150778FF: lea eax, [esi - 0x14] */
    /* cmp eax, 0x7ECu */ /* 0x15077902: cmp eax, 0x7ec */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x7ECu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_1507792B; /* 0x15077907: jbe 0x1507792b */
L_15077909:
    RECOMP_CALL(sub_15036430); /* 0x15077909: call 0x15036430 */
    RECOMP_FLAGS_IN();
    MEM32(eax) = 0x16u; /* 0x1507790E: mov dword ptr [eax], 0x16 */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edi = 0; /* 0x15077914: xor edi, edi */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, edi); /* 0x15077916: push edi */
    PUSH32(esp, edi); /* 0x15077917: push edi */
    PUSH32(esp, edi); /* 0x15077918: push edi */
    PUSH32(esp, edi); /* 0x15077919: push edi */
    PUSH32(esp, edi); /* 0x1507791A: push edi */
    RECOMP_CALL(sub_1505A110); /* 0x1507791B: call 0x1505a110 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x14u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x14u; /* 0x15077920: add esp, 0x14 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)((eax | 0xFFFFFFFFu)); _flag_b = (uint32_t)((eax | 0xFFFFFFFFu));
    eax = eax | 0xFFFFFFFFu; /* 0x15077923: or eax, 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_150779E3; /* 0x15077926: jmp 0x150779e3 */
L_1507792B:
    PUSH32(esp, 1); /* 0x1507792B: push 1 */
    RECOMP_CALL(sub_15068D80); /* 0x1507792D: call 0x15068d80 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x15077932: pop ecx */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edi = 0; /* 0x15077933: xor edi, edi */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x4)) = edi; /* 0x15077935: mov dword ptr [ebp - 4], edi */
    eax = MEM32(0x150BD680); /* 0x15077938: mov eax, dword ptr [0x150bd680] */
    /* cmp esi, eax */ /* 0x1507793D: cmp esi, eax */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_LE(_flag_a, _flag_b)) goto L_15077974; /* 0x1507793F: jle 0x15077974 */
L_15077941:
    PUSH32(esp, 4); /* 0x15077941: push 4 */
    PUSH32(esp, esi); /* 0x15077943: push esi */
    PUSH32(esp, MEM32(0x150BFCE0)); /* 0x15077944: push dword ptr [0x150bfce0] */
    RECOMP_CALL(sub_15048FCA); /* 0x1507794A: call 0x15048fca */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x1507794F: add esp, 0xc */
    _flag_k = FK_ADD;
    /* test eax, eax */ /* 0x15077952: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_150779CF; /* 0x15077954: je 0x150779cf */
L_15077956:
    ecx = MEM32(0x150BD680); /* 0x15077956: mov ecx, dword ptr [0x150bd680] */
L_1507795C:
    MEM32(ebp + (-0x20)) = ecx; /* 0x1507795C: mov dword ptr [ebp - 0x20], ecx */
    /* cmp ecx, esi */ /* 0x1507795F: cmp ecx, esi */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_GE(_flag_a, _flag_b)) goto L_15077969; /* 0x15077961: jge 0x15077969 */
L_15077963:
    MEM32(eax + ecx * 4) = edi; /* 0x15077963: mov dword ptr [eax + ecx*4], edi */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx + 1; /* 0x15077966: inc ecx */
    _flag_k = FK_INC;
    RECOMP_BACKEDGE();
    goto L_1507795C; /* 0x15077967: jmp 0x1507795c */
L_15077969:
    MEM32(0x150BD680) = esi; /* 0x15077969: mov dword ptr [0x150bd680], esi */
    MEM32(ebp + (-0x1C)) = esi; /* 0x1507796F: mov dword ptr [ebp - 0x1c], esi */
    goto L_150779C8; /* 0x15077972: jmp 0x150779c8 */
L_15077974:
    if (recomp_cond_cf(_flag_k, _flag_a, _flag_b, CC_NE, _cf)) goto L_1507797A; /* 0x15077974: jne 0x1507797a */
L_15077976:
    esi = eax; /* 0x15077976: mov esi, eax */
    goto L_150779D2; /* 0x15077978: jmp 0x150779d2 */
L_1507797A:
    MEM32(ebp + (-0x1C)) = esi; /* 0x1507797A: mov dword ptr [ebp - 0x1c], esi */
    edi = eax + (-0x1); /* 0x1507797D: lea edi, [eax - 1] */
    MEM32(ebp + (-0x20)) = edi; /* 0x15077980: mov dword ptr [ebp - 0x20], edi */
    ecx = MEM32(0x150BFCE0); /* 0x15077983: mov ecx, dword ptr [0x150bfce0] */
L_15077989:
    /* cmp edi, esi */ /* 0x15077989: cmp edi, esi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_L(_flag_a, _flag_b)) goto L_150779AD; /* 0x1507798B: jl 0x150779ad */
L_1507798D:
    eax = MEM32(ecx + edi * 4); /* 0x1507798D: mov eax, dword ptr [ecx + edi*4] */
    /* test eax, eax */ /* 0x15077990: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_150779A7; /* 0x15077992: je 0x150779a7 */
L_15077994:
    /* test MEM8(eax + 0xC), 0x83u */ /* 0x15077994: test byte ptr [eax + 0xc], 0x83 */
    _flag_a = (uint32_t)(MEM8(eax + 0xC)) << 24; _flag_b = (uint32_t)(0x83u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_150779CF; /* 0x15077998: jne 0x150779cf */
L_1507799A:
    PUSH32(esp, eax); /* 0x1507799A: push eax */
    RECOMP_CALL(sub_15048840); /* 0x1507799B: call 0x15048840 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x150779A0: pop ecx */
    ecx = MEM32(0x150BFCE0); /* 0x150779A1: mov ecx, dword ptr [0x150bfce0] */
L_150779A7:
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(1);
    edi = edi - 1; /* 0x150779A7: dec edi */
    _flag_k = FK_DEC;
    MEM32(ebp + (-0x20)) = edi; /* 0x150779A8: mov dword ptr [ebp - 0x20], edi */
    RECOMP_BACKEDGE();
    goto L_15077989; /* 0x150779AB: jmp 0x15077989 */
L_150779AD:
    /* cmp esi, 0xFFFFFFFFu */ /* 0x150779AD: cmp esi, -1 */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(0xFFFFFFFFu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_150779D5; /* 0x150779B0: je 0x150779d5 */
L_150779B2:
    PUSH32(esp, 4); /* 0x150779B2: push 4 */
    PUSH32(esp, esi); /* 0x150779B4: push esi */
    PUSH32(esp, ecx); /* 0x150779B5: push ecx */
    RECOMP_CALL(sub_15048FCA); /* 0x150779B6: call 0x15048fca */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x150779BB: add esp, 0xc */
    _flag_k = FK_ADD;
    /* test eax, eax */ /* 0x150779BE: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_150779CF; /* 0x150779C0: je 0x150779cf */
L_150779C2:
    MEM32(0x150BD680) = esi; /* 0x150779C2: mov dword ptr [0x150bd680], esi */
L_150779C8:
    MEM32(0x150BFCE0) = eax; /* 0x150779C8: mov dword ptr [0x150bfce0], eax */
    goto L_150779D5; /* 0x150779CD: jmp 0x150779d5 */
L_150779CF:
    _flag_a = (uint32_t)((esi | 0xFFFFFFFFu)); _flag_b = (uint32_t)((esi | 0xFFFFFFFFu));
    esi = esi | 0xFFFFFFFFu; /* 0x150779CF: or esi, 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
L_150779D2:
    MEM32(ebp + (-0x1C)) = esi; /* 0x150779D2: mov dword ptr [ebp - 0x1c], esi */
L_150779D5:
    MEM32(ebp + (-0x4)) = 0xFFFFFFFEu; /* 0x150779D5: mov dword ptr [ebp - 4], 0xfffffffe */
    RECOMP_CALL(sub_150779F6); /* 0x150779DC: call 0x150779f6 */
    RECOMP_FLAGS_IN();
    eax = esi; /* 0x150779E1: mov eax, esi */
L_150779E3:
    ecx = MEM32(ebp + (-0x10)); /* 0x150779E3: mov ecx, dword ptr [ebp - 0x10] */
    MEM32(FS_BASE + (0)) = ecx; /* 0x150779E6: mov dword ptr fs:[0], ecx */
    ecx = POP32_VAL(esp); /* 0x150779ED: pop ecx */
    edi = POP32_VAL(esp); /* 0x150779EE: pop edi */
    esi = POP32_VAL(esp); /* 0x150779EF: pop esi */
    ebx = POP32_VAL(esp); /* 0x150779F0: pop ebx */
    esp = ebp; ebp = POP32_VAL(esp); /* 0x150779F1: leave  */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x150779F2: ret  */
    RECOMP_REGS_OUT();
}

void sub_150779F6(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x150779F6u);

L_150779F6:
    PUSH32(esp, 1); /* 0x150779F6: push 1 */
    RECOMP_CALL(sub_15068F50); /* 0x150779F8: call 0x15068f50 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x150779FD: pop ecx */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x150779FE: ret  */
    RECOMP_REGS_OUT();
}

void sub_15077A10(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x15077A10u);

L_15077A10:
    PUSH32(esp, 0x1Cu); /* 0x15077A10: push 0x1c */
    PUSH32(esp, 0x150B0FE0u); /* 0x15077A12: push 0x150b0fe0 */
    RECOMP_CALL(sub_1505E988); /* 0x15077A17: call 0x1505e988 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 4); /* 0x15077A1C: push 4 */
    edi = POP32_VAL(esp); /* 0x15077A1E: pop edi */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x1C))); _flag_b = (uint32_t)(0);
    MEM32(ebp + (-0x1C)) = MEM32(ebp + (-0x1C)) & 0; /* 0x15077A1F: and dword ptr [ebp - 0x1c], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    ebx = ebp + (-0x1C); /* 0x15077A23: lea ebx, [ebp - 0x1c] */
    esi = MEM32(ebp + 0x8); /* 0x15077A26: mov esi, dword ptr [ebp + 8] */
    /* test esi, esi */ /* 0x15077A29: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_15077A4C; /* 0x15077A2B: jne 0x15077a4c */
L_15077A2D:
    RECOMP_CALL(sub_15036430); /* 0x15077A2D: call 0x15036430 */
    RECOMP_FLAGS_IN();
    MEM32(eax) = 0x16u; /* 0x15077A32: mov dword ptr [eax], 0x16 */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x15077A38: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, eax); /* 0x15077A3A: push eax */
    PUSH32(esp, eax); /* 0x15077A3B: push eax */
    PUSH32(esp, eax); /* 0x15077A3C: push eax */
    PUSH32(esp, eax); /* 0x15077A3D: push eax */
    PUSH32(esp, eax); /* 0x15077A3E: push eax */
    RECOMP_CALL(sub_1505A110); /* 0x15077A3F: call 0x1505a110 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x14u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x14u; /* 0x15077A44: add esp, 0x14 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)((eax | 0xFFFFFFFFu)); _flag_b = (uint32_t)((eax | 0xFFFFFFFFu));
    eax = eax | 0xFFFFFFFFu; /* 0x15077A47: or eax, 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_15077AB9; /* 0x15077A4A: jmp 0x15077ab9 */
L_15077A4C:
    MEM32(ebp + (-0x20)) = esi; /* 0x15077A4C: mov dword ptr [ebp - 0x20], esi */
    PUSH32(esp, esi); /* 0x15077A4F: push esi */
    RECOMP_CALL(sub_1506A946); /* 0x15077A50: call 0x1506a946 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x15077A55: pop ecx */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x4))); _flag_b = (uint32_t)(0);
    MEM32(ebp + (-0x4)) = MEM32(ebp + (-0x4)) & 0; /* 0x15077A56: and dword ptr [ebp - 4], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
L_15077A5A:
    eax = edi; /* 0x15077A5A: mov eax, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(1);
    edi = edi - 1; /* 0x15077A5C: dec edi */
    _flag_k = FK_DEC;
    MEM32(ebp + (-0x28)) = edi; /* 0x15077A5D: mov dword ptr [ebp - 0x28], edi */
    /* test eax, eax */ /* 0x15077A60: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_15077A8A; /* 0x15077A62: je 0x15077a8a */
L_15077A64:
    eax = MEM32(esi + 0x4); /* 0x15077A64: mov eax, dword ptr [esi + 4] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - 1; /* 0x15077A67: sub eax, 1 */
    _flag_k = FK_CMP;
    MEM32(esi + 0x4) = eax; /* 0x15077A6A: mov dword ptr [esi + 4], eax */
    if (/* sub result */ CMP_S(_flag_a, _flag_b)) goto L_15077A79; /* 0x15077A6D: js 0x15077a79 */
L_15077A6F:
    eax = MEM32(esi); /* 0x15077A6F: mov eax, dword ptr [esi] */
    ecx = (uint32_t)MEM8(eax); /* 0x15077A71: movzx ecx, byte ptr [eax] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x15077A74: inc eax */
    _flag_k = FK_INC;
    MEM32(esi) = eax; /* 0x15077A75: mov dword ptr [esi], eax */
    goto L_15077A82; /* 0x15077A77: jmp 0x15077a82 */
L_15077A79:
    PUSH32(esp, esi); /* 0x15077A79: push esi */
    RECOMP_CALL(sub_15076950); /* 0x15077A7A: call 0x15076950 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x15077A7F: pop ecx */
    ecx = eax; /* 0x15077A80: mov ecx, eax */
L_15077A82:
    MEM8(ebx) = (uint8_t)(LO8(ecx)); /* 0x15077A82: mov byte ptr [ebx], cl */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(1);
    ebx = ebx + 1; /* 0x15077A84: inc ebx */
    _flag_k = FK_INC;
    MEM32(ebp + (-0x2C)) = ebx; /* 0x15077A85: mov dword ptr [ebp - 0x2c], ebx */
    RECOMP_BACKEDGE();
    goto L_15077A5A; /* 0x15077A88: jmp 0x15077a5a */
L_15077A8A:
    PUSH32(esp, esi); /* 0x15077A8A: push esi */
    RECOMP_CALL(sub_1507BEB0); /* 0x15077A8B: call 0x1507beb0 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x15077A90: pop ecx */
    /* test eax, eax */ /* 0x15077A91: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_15077AA5; /* 0x15077A93: jne 0x15077aa5 */
L_15077A95:
    PUSH32(esp, esi); /* 0x15077A95: push esi */
    RECOMP_CALL(sub_1507BEF0); /* 0x15077A96: call 0x1507bef0 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x15077A9B: pop ecx */
    /* test eax, eax */ /* 0x15077A9C: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_15077AA5; /* 0x15077A9E: jne 0x15077aa5 */
L_15077AA0:
    edi = MEM32(ebp + (-0x1C)); /* 0x15077AA0: mov edi, dword ptr [ebp - 0x1c] */
    goto L_15077AA8; /* 0x15077AA3: jmp 0x15077aa8 */
L_15077AA5:
    _flag_a = (uint32_t)((edi | 0xFFFFFFFFu)); _flag_b = (uint32_t)((edi | 0xFFFFFFFFu));
    edi = edi | 0xFFFFFFFFu; /* 0x15077AA5: or edi, 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
L_15077AA8:
    MEM32(ebp + (-0x24)) = edi; /* 0x15077AA8: mov dword ptr [ebp - 0x24], edi */
    MEM32(ebp + (-0x4)) = 0xFFFFFFFEu; /* 0x15077AAB: mov dword ptr [ebp - 4], 0xfffffffe */
    RECOMP_CALL(sub_15077ACF); /* 0x15077AB2: call 0x15077acf */
    RECOMP_FLAGS_IN();
    eax = edi; /* 0x15077AB7: mov eax, edi */
L_15077AB9:
    ecx = MEM32(ebp + (-0x10)); /* 0x15077AB9: mov ecx, dword ptr [ebp - 0x10] */
    MEM32(FS_BASE + (0)) = ecx; /* 0x15077ABC: mov dword ptr fs:[0], ecx */
    ecx = POP32_VAL(esp); /* 0x15077AC3: pop ecx */
    edi = POP32_VAL(esp); /* 0x15077AC4: pop edi */
    esi = POP32_VAL(esp); /* 0x15077AC5: pop esi */
    ebx = POP32_VAL(esp); /* 0x15077AC6: pop ebx */
    esp = ebp; ebp = POP32_VAL(esp); /* 0x15077AC7: leave  */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x15077AC8: ret  */
    RECOMP_REGS_OUT();
}

void sub_15077ACF(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x15077ACFu);

L_15077ACF:
    PUSH32(esp, esi); /* 0x15077ACF: push esi */
    RECOMP_CALL(sub_1506A9C5); /* 0x15077AD0: call 0x1506a9c5 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x15077AD5: pop ecx */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x15077AD6: ret  */
    RECOMP_REGS_OUT();
}

void sub_15077AE0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x15077AE0u);

L_15077AE0:
    edi = edi; /* 0x15077AE0: mov edi, edi */
    PUSH32(esp, ebp); /* 0x15077AE2: push ebp */
    ebp = esp; /* 0x15077AE3: mov ebp, esp */
    PUSH32(esp, 1); /* 0x15077AE5: push 1 */
    PUSH32(esp, 0xFFFFFFFFu); /* 0x15077AE7: push -1 */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x15077AE9: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_15077AFC); /* 0x15077AEC: call 0x15077afc */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x15077AF1: add esp, 0xc */
    _flag_k = FK_ADD;
    ebp = POP32_VAL(esp); /* 0x15077AF4: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x15077AF5: ret  */
    RECOMP_REGS_OUT();
}

void sub_15077AFC(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x15077AFCu);

L_15077AFC:
    PUSH32(esp, 0x1Cu); /* 0x15077AFC: push 0x1c */
    PUSH32(esp, 0x150B1000u); /* 0x15077AFE: push 0x150b1000 */
    RECOMP_CALL(sub_1505E988); /* 0x15077B03: call 0x1505e988 */
    RECOMP_FLAGS_IN();
    ecx = MEM32(ebp + 0x8); /* 0x15077B08: mov ecx, dword ptr [ebp + 8] */
    eax = ecx; /* 0x15077B0B: mov eax, ecx */
    MEM32(ebp + (-0x1C)) = eax; /* 0x15077B0D: mov dword ptr [ebp - 0x1c], eax */
    ebx = ecx; /* 0x15077B10: mov ebx, ecx */
    MEM32(ebp + (-0x20)) = ebx; /* 0x15077B12: mov dword ptr [ebp - 0x20], ebx */
    PUSH32(esp, 0xFFFFFFFEu); /* 0x15077B15: push -2 */
    edi = POP32_VAL(esp); /* 0x15077B17: pop edi */
    eax = MEM32(ebp + 0xC); /* 0x15077B18: mov eax, dword ptr [ebp + 0xc] */
    /* cmp eax, 0xFFFFFFFFu */ /* 0x15077B1B: cmp eax, -1 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xFFFFFFFFu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) { edi = eax; } /* 0x15077B1E: cmovne edi, eax */
    /* test ecx, ecx */ /* 0x15077B21: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_15077B46; /* 0x15077B23: jne 0x15077b46 */
L_15077B25:
    RECOMP_CALL(sub_15036430); /* 0x15077B25: call 0x15036430 */
    RECOMP_FLAGS_IN();
    MEM32(eax) = 0x16u; /* 0x15077B2A: mov dword ptr [eax], 0x16 */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    esi = 0; /* 0x15077B30: xor esi, esi */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, esi); /* 0x15077B32: push esi */
    PUSH32(esp, esi); /* 0x15077B33: push esi */
    PUSH32(esp, esi); /* 0x15077B34: push esi */
    PUSH32(esp, esi); /* 0x15077B35: push esi */
    PUSH32(esp, esi); /* 0x15077B36: push esi */
    RECOMP_CALL(sub_1505A110); /* 0x15077B37: call 0x1505a110 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x14u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x14u; /* 0x15077B3C: add esp, 0x14 */
    _flag_k = FK_ADD;
L_15077B3F:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x15077B3F: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_15077C12; /* 0x15077B41: jmp 0x15077c12 */
L_15077B46:
    /* test eax, eax */ /* 0x15077B46: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_Z(_flag_a, _flag_b)) goto L_15077B25; /* 0x15077B48: je 0x15077b25 */
L_15077B4A:
    PUSH32(esp, 0x150BC600u); /* 0x15077B4A: push 0x150bc600 */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    esi = 0; /* 0x15077B4F: xor esi, esi */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, esi); /* 0x15077B51: push esi */
    RECOMP_CALL(sub_1506A98D); /* 0x15077B52: call 0x1506a98d */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x15077B57: pop ecx */
    ecx = POP32_VAL(esp); /* 0x15077B58: pop ecx */
    MEM32(ebp + (-0x4)) = esi; /* 0x15077B59: mov dword ptr [ebp - 4], esi */
    PUSH32(esp, 0x150BC600u); /* 0x15077B5C: push 0x150bc600 */
    RECOMP_CALL(sub_1507C26D); /* 0x15077B61: call 0x1507c26d */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x15077B66: pop ecx */
    eax = (uint32_t)LO16(eax); /* 0x15077B67: movzx eax, ax */
    MEM32(ebp + (-0x24)) = eax; /* 0x15077B6A: mov dword ptr [ebp - 0x24], eax */
    /* cmp eax, 0xFFFFu */ /* 0x15077B6D: cmp eax, 0xffff */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xFFFFu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_15077B82; /* 0x15077B72: jne 0x15077b82 */
L_15077B74:
    ebx = esi; /* 0x15077B74: mov ebx, esi */
    MEM32(ebp + (-0x20)) = ebx; /* 0x15077B76: mov dword ptr [ebp - 0x20], ebx */
    /* cmp MEM32(ebp + 0x10), ebx */ /* 0x15077B79: cmp dword ptr [ebp + 0x10], ebx */
    _flag_a = (uint32_t)(MEM32(ebp + 0x10)); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_15077C04; /* 0x15077B7C: jne 0x15077c04 */
L_15077B82:
    edx = eax; /* 0x15077B82: mov edx, eax */
    ecx = eax; /* 0x15077B84: mov ecx, eax */
    /* cmp ecx, 0xAu */ /* 0x15077B86: cmp ecx, 0xa */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0xAu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_15077BBD; /* 0x15077B89: je 0x15077bbd */
L_15077B8B:
    /* cmp edx, 0xFFFFu */ /* 0x15077B8B: cmp edx, 0xffff */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(0xFFFFu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_15077BBD; /* 0x15077B91: je 0x15077bbd */
L_15077B93:
    /* test edi, edi */ /* 0x15077B93: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_15077BAA; /* 0x15077B95: je 0x15077baa */
L_15077B97:
    ecx = MEM32(ebp + (-0x1C)); /* 0x15077B97: mov ecx, dword ptr [ebp - 0x1c] */
    MEM16(ecx) = (uint16_t)(LO16(eax)); /* 0x15077B9A: mov word ptr [ecx], ax */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 2; /* 0x15077B9D: add ecx, 2 */
    _flag_k = FK_ADD;
    MEM32(ebp + (-0x1C)) = ecx; /* 0x15077BA0: mov dword ptr [ebp - 0x1c], ecx */
    MEM32(ebp + (-0x28)) = ecx; /* 0x15077BA3: mov dword ptr [ebp - 0x28], ecx */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(1);
    edi = edi - 1; /* 0x15077BA6: dec edi */
    _flag_k = FK_DEC;
    MEM32(ebp + (-0x2C)) = edi; /* 0x15077BA7: mov dword ptr [ebp - 0x2c], edi */
L_15077BAA:
    PUSH32(esp, 0x150BC600u); /* 0x15077BAA: push 0x150bc600 */
    RECOMP_CALL(sub_1507C26D); /* 0x15077BAF: call 0x1507c26d */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x15077BB4: pop ecx */
    eax = (uint32_t)LO16(eax); /* 0x15077BB5: movzx eax, ax */
    MEM32(ebp + (-0x24)) = eax; /* 0x15077BB8: mov dword ptr [ebp - 0x24], eax */
    RECOMP_BACKEDGE();
    goto L_15077B82; /* 0x15077BBB: jmp 0x15077b82 */
L_15077BBD:
    /* cmp MEM32(ebp + 0xC), 0xFFFFFFFFu */ /* 0x15077BBD: cmp dword ptr [ebp + 0xc], -1 */
    _flag_a = (uint32_t)(MEM32(ebp + 0xC)); _flag_b = (uint32_t)(0xFFFFFFFFu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_15077BFC; /* 0x15077BC1: je 0x15077bfc */
L_15077BC3:
    /* test edi, edi */ /* 0x15077BC3: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_15077BFC; /* 0x15077BC5: jne 0x15077bfc */
L_15077BC7:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x15077BC7: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    eax = MEM32(ebp + 0x8); /* 0x15077BC9: mov eax, dword ptr [ebp + 8] */
    MEM16(eax) = (uint16_t)(LO16(ecx)); /* 0x15077BCC: mov word ptr [eax], cx */
    RECOMP_CALL(sub_15036430); /* 0x15077BCF: call 0x15036430 */
    RECOMP_FLAGS_IN();
    MEM32(eax) = 0x22u; /* 0x15077BD4: mov dword ptr [eax], 0x22 */
    PUSH32(esp, esi); /* 0x15077BDA: push esi */
    PUSH32(esp, esi); /* 0x15077BDB: push esi */
    PUSH32(esp, esi); /* 0x15077BDC: push esi */
    PUSH32(esp, esi); /* 0x15077BDD: push esi */
    PUSH32(esp, esi); /* 0x15077BDE: push esi */
    RECOMP_CALL(sub_1505A110); /* 0x15077BDF: call 0x1505a110 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0xFFFFFFFEu); /* 0x15077BE4: push -2 */
    eax = ebp + (-0x10); /* 0x15077BE6: lea eax, [ebp - 0x10] */
    PUSH32(esp, eax); /* 0x15077BE9: push eax */
    PUSH32(esp, 0x150BD340u); /* 0x15077BEA: push 0x150bd340 */
    RECOMP_CALL(sub_1505A334); /* 0x15077BEF: call 0x1505a334 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x20u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x20u; /* 0x15077BF4: add esp, 0x20 */
    _flag_k = FK_ADD;
    RECOMP_BACKEDGE();
    goto L_15077B3F; /* 0x15077BF7: jmp 0x15077b3f */
L_15077BFC:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x15077BFC: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    eax = MEM32(ebp + (-0x1C)); /* 0x15077BFE: mov eax, dword ptr [ebp - 0x1c] */
    MEM16(eax) = (uint16_t)(LO16(ecx)); /* 0x15077C01: mov word ptr [eax], cx */
L_15077C04:
    MEM32(ebp + (-0x4)) = 0xFFFFFFFEu; /* 0x15077C04: mov dword ptr [ebp - 4], 0xfffffffe */
    RECOMP_CALL(sub_15077C27); /* 0x15077C0B: call 0x15077c27 */
    RECOMP_FLAGS_IN();
    eax = ebx; /* 0x15077C10: mov eax, ebx */
L_15077C12:
    ecx = MEM32(ebp + (-0x10)); /* 0x15077C12: mov ecx, dword ptr [ebp - 0x10] */
    MEM32(FS_BASE + (0)) = ecx; /* 0x15077C15: mov dword ptr fs:[0], ecx */
    ecx = POP32_VAL(esp); /* 0x15077C1C: pop ecx */
    edi = POP32_VAL(esp); /* 0x15077C1D: pop edi */
    esi = POP32_VAL(esp); /* 0x15077C1E: pop esi */
    ebx = POP32_VAL(esp); /* 0x15077C1F: pop ebx */
    esp = ebp; ebp = POP32_VAL(esp); /* 0x15077C20: leave  */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x15077C21: ret  */
    RECOMP_REGS_OUT();
}

void sub_15077C27(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x15077C27u);

L_15077C27:
    PUSH32(esp, 0x150BC600u); /* 0x15077C27: push 0x150bc600 */
    PUSH32(esp, esi); /* 0x15077C2C: push esi */
    RECOMP_CALL(sub_1506AA07); /* 0x15077C2D: call 0x1506aa07 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x15077C32: pop ecx */
    ecx = POP32_VAL(esp); /* 0x15077C33: pop ecx */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x15077C34: ret  */
    RECOMP_REGS_OUT();
}

void sub_15077C40(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x15077C40u);

L_15077C40:
    PUSH32(esp, 0x14u); /* 0x15077C40: push 0x14 */
    PUSH32(esp, 0x150B1020u); /* 0x15077C42: push 0x150b1020 */
    RECOMP_CALL(sub_1505E988); /* 0x15077C47: call 0x1505e988 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)((esi | 0xFFFFFFFFu)); _flag_b = (uint32_t)((esi | 0xFFFFFFFFu));
    esi = esi | 0xFFFFFFFFu; /* 0x15077C4C: or esi, 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x1C)) = esi; /* 0x15077C4F: mov dword ptr [ebp - 0x1c], esi */
    MEM32(ebp + (-0x20)) = esi; /* 0x15077C52: mov dword ptr [ebp - 0x20], esi */
    /* cmp MEM32(ebp + 0x8), 0 */ /* 0x15077C55: cmp dword ptr [ebp + 8], 0 */
    _flag_a = (uint32_t)(MEM32(ebp + 0x8)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_15077C87; /* 0x15077C59: jne 0x15077c87 */
L_15077C5B:
    RECOMP_CALL(sub_15036430); /* 0x15077C5B: call 0x15036430 */
    RECOMP_FLAGS_IN();
    MEM32(eax) = 0x16u; /* 0x15077C60: mov dword ptr [eax], 0x16 */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edi = 0; /* 0x15077C66: xor edi, edi */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, edi); /* 0x15077C68: push edi */
    PUSH32(esp, edi); /* 0x15077C69: push edi */
    PUSH32(esp, edi); /* 0x15077C6A: push edi */
    PUSH32(esp, edi); /* 0x15077C6B: push edi */
    PUSH32(esp, edi); /* 0x15077C6C: push edi */
    RECOMP_CALL(sub_1505A110); /* 0x15077C6D: call 0x1505a110 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x14u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x14u; /* 0x15077C72: add esp, 0x14 */
    _flag_k = FK_ADD;
L_15077C75:
    eax = esi; /* 0x15077C75: mov eax, esi */
    ecx = MEM32(ebp + (-0x10)); /* 0x15077C77: mov ecx, dword ptr [ebp - 0x10] */
    MEM32(FS_BASE + (0)) = ecx; /* 0x15077C7A: mov dword ptr fs:[0], ecx */
    ecx = POP32_VAL(esp); /* 0x15077C81: pop ecx */
    edi = POP32_VAL(esp); /* 0x15077C82: pop edi */
    esi = POP32_VAL(esp); /* 0x15077C83: pop esi */
    ebx = POP32_VAL(esp); /* 0x15077C84: pop ebx */
    esp = ebp; ebp = POP32_VAL(esp); /* 0x15077C85: leave  */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x15077C86: ret  */
L_15077C87:
    PUSH32(esp, 9); /* 0x15077C87: push 9 */
    RECOMP_CALL(sub_15068E1A); /* 0x15077C89: call 0x15068e1a */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x15077C8E: pop ecx */
    /* test eax, eax */ /* 0x15077C8F: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_Z(_flag_a, _flag_b)) goto L_15077C75; /* 0x15077C91: je 0x15077c75 */
L_15077C93:
    PUSH32(esp, 9); /* 0x15077C93: push 9 */
    RECOMP_CALL(sub_15068D80); /* 0x15077C95: call 0x15068d80 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x15077C9A: pop ecx */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edi = 0; /* 0x15077C9B: xor edi, edi */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x4)) = edi; /* 0x15077C9D: mov dword ptr [ebp - 4], edi */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x15077CA0: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_150782EB); /* 0x15077CA3: call 0x150782eb */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x15077CA8: pop ecx */
    ebx = eax; /* 0x15077CA9: mov ebx, eax */
    /* test ebx, ebx */ /* 0x15077CAB: test ebx, ebx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ebx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_15077CBC; /* 0x15077CAD: jne 0x15077cbc */
L_15077CAF:
    RECOMP_CALL(sub_15036430); /* 0x15077CAF: call 0x15036430 */
    RECOMP_FLAGS_IN();
    MEM32(eax) = 9; /* 0x15077CB4: mov dword ptr [eax], 9 */
    goto L_15077D09; /* 0x15077CBA: jmp 0x15077d09 */
L_15077CBC:
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x15077CBC: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_1507BE20); /* 0x15077CBF: call 0x1507be20 */
    RECOMP_FLAGS_IN();
    RECOMP_CALL(sub_15036430); /* 0x15077CC4: call 0x15036430 */
    RECOMP_FLAGS_IN();
    eax = MEM32(eax); /* 0x15077CC9: mov eax, dword ptr [eax] */
    MEM32(ebp + (-0x24)) = eax; /* 0x15077CCB: mov dword ptr [ebp - 0x24], eax */
    RECOMP_CALL(sub_15036430); /* 0x15077CCE: call 0x15036430 */
    RECOMP_FLAGS_IN();
    MEM32(eax) = edi; /* 0x15077CD3: mov dword ptr [eax], edi */
    PUSH32(esp, 1); /* 0x15077CD5: push 1 */
    PUSH32(esp, MEM32(ebx + 0x4)); /* 0x15077CD7: push dword ptr [ebx + 4] */
    eax = ebp + (-0x1C); /* 0x15077CDA: lea eax, [ebp - 0x1c] */
    PUSH32(esp, eax); /* 0x15077CDD: push eax */
    RECOMP_CALL(sub_150430A0); /* 0x15077CDE: call 0x150430a0 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x10u; /* 0x15077CE3: add esp, 0x10 */
    _flag_k = FK_ADD;
    /* cmp eax, esi */ /* 0x15077CE6: cmp eax, esi */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_15077CF4; /* 0x15077CE8: jne 0x15077cf4 */
L_15077CEA:
    RECOMP_CALL(sub_15036430); /* 0x15077CEA: call 0x15036430 */
    RECOMP_FLAGS_IN();
    /* cmp MEM32(eax), 4 */ /* 0x15077CEF: cmp dword ptr [eax], 4 */
    _flag_a = (uint32_t)(MEM32(eax)); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_15077CFA; /* 0x15077CF2: jne 0x15077cfa */
L_15077CF4:
    esi = MEM32(ebp + (-0x1C)); /* 0x15077CF4: mov esi, dword ptr [ebp - 0x1c] */
    MEM32(ebp + (-0x20)) = esi; /* 0x15077CF7: mov dword ptr [ebp - 0x20], esi */
L_15077CFA:
    RECOMP_CALL(sub_15036430); /* 0x15077CFA: call 0x15036430 */
    RECOMP_FLAGS_IN();
    ecx = MEM32(ebp + (-0x24)); /* 0x15077CFF: mov ecx, dword ptr [ebp - 0x24] */
    MEM32(eax) = ecx; /* 0x15077D02: mov dword ptr [eax], ecx */
    MEM32(ebx) = edi; /* 0x15077D04: mov dword ptr [ebx], edi */
    MEM32(ebx + 0x4) = edi; /* 0x15077D06: mov dword ptr [ebx + 4], edi */
L_15077D09:
    MEM32(ebp + (-0x4)) = 0xFFFFFFFEu; /* 0x15077D09: mov dword ptr [ebp - 4], 0xfffffffe */
    RECOMP_CALL(sub_15077D1D); /* 0x15077D10: call 0x15077d1d */
    RECOMP_FLAGS_IN();
    RECOMP_BACKEDGE();
    goto L_15077C75; /* 0x15077D15: jmp 0x15077c75 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    RECOMP_REGS_OUT();
}

void sub_15077D1D(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x15077D1Du);

L_15077D1D:
    PUSH32(esp, 9); /* 0x15077D1D: push 9 */
    RECOMP_CALL(sub_15068F50); /* 0x15077D1F: call 0x15068f50 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x15077D24: pop ecx */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x15077D25: ret  */
    RECOMP_REGS_OUT();
}

void sub_15077D30(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x15077D30u);

L_15077D30:
    PUSH32(esp, 0xA4u); /* 0x15077D30: push 0xa4 */
    PUSH32(esp, 0x150B1040u); /* 0x15077D35: push 0x150b1040 */
    RECOMP_CALL(sub_1505E988); /* 0x15077D3A: call 0x1505e988 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ebx = 0; /* 0x15077D3F: xor ebx, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x30)) = ebx; /* 0x15077D41: mov dword ptr [ebp - 0x30], ebx */
    esi = ebx; /* 0x15077D44: mov esi, ebx */
    MEM32(ebp + (-0x1C)) = esi; /* 0x15077D46: mov dword ptr [ebp - 0x1c], esi */
    MEM32(ebp + (-0x28)) = ebx; /* 0x15077D49: mov dword ptr [ebp - 0x28], ebx */
    MEM8(ebp + (-0x1E)) = (uint8_t)(LO8(ebx)); /* 0x15077D4C: mov byte ptr [ebp - 0x1e], bl */
    eax = ebx; /* 0x15077D4F: mov eax, ebx */
    MEM32(ebp + (-0x50)) = eax; /* 0x15077D51: mov dword ptr [ebp - 0x50], eax */
    /* cmp MEM32(ebp + 0x8), eax */ /* 0x15077D54: cmp dword ptr [ebp + 8], eax */
    _flag_a = (uint32_t)(MEM32(ebp + 0x8)); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_15077D78; /* 0x15077D57: jne 0x15077d78 */
L_15077D59:
    RECOMP_CALL(sub_15036430); /* 0x15077D59: call 0x15036430 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, ebx); /* 0x15077D5E: push ebx */
    PUSH32(esp, ebx); /* 0x15077D5F: push ebx */
    PUSH32(esp, ebx); /* 0x15077D60: push ebx */
    PUSH32(esp, ebx); /* 0x15077D61: push ebx */
    PUSH32(esp, ebx); /* 0x15077D62: push ebx */
L_15077D63:
    MEM32(eax) = 0x16u; /* 0x15077D63: mov dword ptr [eax], 0x16 */
L_15077D69:
    RECOMP_CALL(sub_1505A110); /* 0x15077D69: call 0x1505a110 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x14u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x14u; /* 0x15077D6E: add esp, 0x14 */
    _flag_k = FK_ADD;
L_15077D71:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x15077D71: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_150782C9; /* 0x15077D73: jmp 0x150782c9 */
L_15077D78:
    eax = MEM32(ebp + 0xC); /* 0x15077D78: mov eax, dword ptr [ebp + 0xc] */
    /* test eax, eax */ /* 0x15077D7B: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_15077D82; /* 0x15077D7D: jne 0x15077d82 */
L_15077D7F:
    RECOMP_BACKEDGE();
    goto L_15077D59; /* 0x15077D7F: jmp 0x15077d59 */
L_15077D81:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x15077D81: inc eax */
    _flag_k = FK_INC;
L_15077D82:
    SET_LO8(ecx, MEM8(eax)); /* 0x15077D82: mov cl, byte ptr [eax] */
    /* cmp LO8(ecx), 0x20u */ /* 0x15077D84: cmp cl, 0x20 */
    _flag_a = (uint32_t)(LO8(ecx)) << 24; _flag_b = (uint32_t)(0x20u) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    RECOMP_BACKEDGE();
    if (CMP_EQ(_flag_a, _flag_b)) goto L_15077D81; /* 0x15077D87: je 0x15077d81 */
L_15077D89:
    /* cmp LO8(ecx), 0x77u */ /* 0x15077D89: cmp cl, 0x77 */
    _flag_a = (uint32_t)(LO8(ecx)) << 24; _flag_b = (uint32_t)(0x77u) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_15077D9A; /* 0x15077D8C: je 0x15077d9a */
L_15077D8E:
    /* cmp LO8(ecx), 0x72u */ /* 0x15077D8E: cmp cl, 0x72 */
    _flag_a = (uint32_t)(LO8(ecx)) << 24; _flag_b = (uint32_t)(0x72u) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_15077D9A; /* 0x15077D91: je 0x15077d9a */
L_15077D93:
    edx = ebx; /* 0x15077D93: mov edx, ebx */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ebx = 0; /* 0x15077D95: xor ebx, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(1);
    ebx = ebx + 1; /* 0x15077D97: inc ebx */
    _flag_k = FK_INC;
    goto L_15077D9F; /* 0x15077D98: jmp 0x15077d9f */
L_15077D9A:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ebx = 0; /* 0x15077D9A: xor ebx, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(1);
    ebx = ebx + 1; /* 0x15077D9C: inc ebx */
    _flag_k = FK_INC;
    edx = ebx; /* 0x15077D9D: mov edx, ebx */
L_15077D9F:
    /* test edx, edx */ /* 0x15077D9F: test edx, edx */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(edx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_15077DB7; /* 0x15077DA1: jne 0x15077db7 */
L_15077DA3:
    RECOMP_CALL(sub_15036430); /* 0x15077DA3: call 0x15036430 */
    RECOMP_FLAGS_IN();
    MEM32(eax) = 0x16u; /* 0x15077DA8: mov dword ptr [eax], 0x16 */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x15077DAE: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, eax); /* 0x15077DB0: push eax */
    PUSH32(esp, eax); /* 0x15077DB1: push eax */
    PUSH32(esp, eax); /* 0x15077DB2: push eax */
    PUSH32(esp, eax); /* 0x15077DB3: push eax */
    PUSH32(esp, eax); /* 0x15077DB4: push eax */
    RECOMP_BACKEDGE();
    goto L_15077D69; /* 0x15077DB5: jmp 0x15077d69 */
L_15077DB7:
    MEM8(ebp + (-0x20)) = (uint8_t)(LO8(ecx)); /* 0x15077DB7: mov byte ptr [ebp - 0x20], cl */
L_15077DBA:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x15077DBA: inc eax */
    _flag_k = FK_INC;
    SET_LO8(ecx, MEM8(eax)); /* 0x15077DBB: mov cl, byte ptr [eax] */
    /* cmp LO8(ecx), 0x20u */ /* 0x15077DBD: cmp cl, 0x20 */
    _flag_a = (uint32_t)(LO8(ecx)) << 24; _flag_b = (uint32_t)(0x20u) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    RECOMP_BACKEDGE();
    if (CMP_EQ(_flag_a, _flag_b)) goto L_15077DBA; /* 0x15077DC0: je 0x15077dba */
L_15077DC2:
    /* test LO8(ecx), LO8(ecx) */ /* 0x15077DC2: test cl, cl */
    _flag_a = (uint32_t)(LO8(ecx)) << 24; _flag_b = (uint32_t)(LO8(ecx)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_15077DD6; /* 0x15077DC4: je 0x15077dd6 */
L_15077DC6:
    /* cmp LO8(ecx), 0x74u */ /* 0x15077DC6: cmp cl, 0x74 */
    _flag_a = (uint32_t)(LO8(ecx)) << 24; _flag_b = (uint32_t)(0x74u) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_15077DD6; /* 0x15077DC9: je 0x15077dd6 */
L_15077DCB:
    /* cmp LO8(ecx), 0x62u */ /* 0x15077DCB: cmp cl, 0x62 */
    _flag_a = (uint32_t)(LO8(ecx)) << 24; _flag_b = (uint32_t)(0x62u) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_15077DD6; /* 0x15077DCE: je 0x15077dd6 */
L_15077DD0:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edi = 0; /* 0x15077DD0: xor edi, edi */
    _cf = 0;
    _flag_k = FK_TEST;
    eax = edi; /* 0x15077DD2: mov eax, edi */
    goto L_15077DDA; /* 0x15077DD4: jmp 0x15077dda */
L_15077DD6:
    eax = ebx; /* 0x15077DD6: mov eax, ebx */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edi = 0; /* 0x15077DD8: xor edi, edi */
    _cf = 0;
    _flag_k = FK_TEST;
L_15077DDA:
    /* test eax, eax */ /* 0x15077DDA: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_15077DED; /* 0x15077DDC: jne 0x15077ded */
L_15077DDE:
    RECOMP_CALL(sub_15036430); /* 0x15077DDE: call 0x15036430 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, edi); /* 0x15077DE3: push edi */
    PUSH32(esp, edi); /* 0x15077DE4: push edi */
    PUSH32(esp, edi); /* 0x15077DE5: push edi */
    PUSH32(esp, edi); /* 0x15077DE6: push edi */
    PUSH32(esp, edi); /* 0x15077DE7: push edi */
    RECOMP_BACKEDGE();
    goto L_15077D63; /* 0x15077DE8: jmp 0x15077d63 */
L_15077DED:
    MEM8(ebp + (-0x1F)) = (uint8_t)(LO8(ecx)); /* 0x15077DED: mov byte ptr [ebp - 0x1f], cl */
    /* cmp LO8(ecx), 0x74u */ /* 0x15077DF0: cmp cl, 0x74 */
    _flag_a = (uint32_t)(LO8(ecx)) << 24; _flag_b = (uint32_t)(0x74u) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_15077DFC; /* 0x15077DF3: jne 0x15077dfc */
L_15077DF5:
    eax = 0x4000u; /* 0x15077DF5: mov eax, 0x4000 */
    goto L_15077E09; /* 0x15077DFA: jmp 0x15077e09 */
L_15077DFC:
    eax = edi; /* 0x15077DFC: mov eax, edi */
    edx = 0x8000u; /* 0x15077DFE: mov edx, 0x8000 */
    /* cmp LO8(ecx), 0x62u */ /* 0x15077E03: cmp cl, 0x62 */
    _flag_a = (uint32_t)(LO8(ecx)) << 24; _flag_b = (uint32_t)(0x62u) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) { eax = edx; } /* 0x15077E06: cmove eax, edx */
L_15077E09:
    _flag_a = (uint32_t)((eax | 0x80u)); _flag_b = (uint32_t)((eax | 0x80u));
    eax = eax | 0x80u; /* 0x15077E09: or eax, 0x80 */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, eax); /* 0x15077E0E: push eax */
    PUSH32(esp, 0x400u); /* 0x15077E0F: push 0x400 */
    eax = ebp + (-0x48); /* 0x15077E14: lea eax, [ebp - 0x48] */
    PUSH32(esp, eax); /* 0x15077E17: push eax */
    RECOMP_CALL(sub_1504D410); /* 0x15077E18: call 0x1504d410 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x15077E1D: add esp, 0xc */
    _flag_k = FK_ADD;
    /* cmp eax, 0xFFFFFFFFu */ /* 0x15077E20: cmp eax, -1 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xFFFFFFFFu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_150782C7; /* 0x15077E23: je 0x150782c7 */
L_15077E29:
    /* cmp MEM8(ebp + (-0x20)), 0x77u */ /* 0x15077E29: cmp byte ptr [ebp - 0x20], 0x77 */
    _flag_a = (uint32_t)(MEM8(ebp + (-0x20))) << 24; _flag_b = (uint32_t)(0x77u) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_15077E46; /* 0x15077E2D: jne 0x15077e46 */
L_15077E2F:
    eax = ebp + (-0x48); /* 0x15077E2F: lea eax, [ebp - 0x48] */
    MEM32(ebp + (-0x38)) = eax; /* 0x15077E32: mov dword ptr [ebp - 0x38], eax */
    eax = ebp + (-0x5C); /* 0x15077E35: lea eax, [ebp - 0x5c] */
    MEM32(ebp + (-0x3C)) = eax; /* 0x15077E38: mov dword ptr [ebp - 0x3c], eax */
    eax = ebp + (-0x44); /* 0x15077E3B: lea eax, [ebp - 0x44] */
    MEM32(ebp + (-0x40)) = eax; /* 0x15077E3E: mov dword ptr [ebp - 0x40], eax */
    eax = ebp + (-0x58); /* 0x15077E41: lea eax, [ebp - 0x58] */
    goto L_15077E5D; /* 0x15077E44: jmp 0x15077e5d */
L_15077E46:
    edi = ebx; /* 0x15077E46: mov edi, ebx */
    eax = ebp + (-0x44); /* 0x15077E48: lea eax, [ebp - 0x44] */
    MEM32(ebp + (-0x38)) = eax; /* 0x15077E4B: mov dword ptr [ebp - 0x38], eax */
    eax = ebp + (-0x58); /* 0x15077E4E: lea eax, [ebp - 0x58] */
    MEM32(ebp + (-0x3C)) = eax; /* 0x15077E51: mov dword ptr [ebp - 0x3c], eax */
    eax = ebp + (-0x48); /* 0x15077E54: lea eax, [ebp - 0x48] */
    MEM32(ebp + (-0x40)) = eax; /* 0x15077E57: mov dword ptr [ebp - 0x40], eax */
    eax = ebp + (-0x5C); /* 0x15077E5A: lea eax, [ebp - 0x5c] */
L_15077E5D:
    MEM32(ebp + (-0x34)) = eax; /* 0x15077E5D: mov dword ptr [ebp - 0x34], eax */
    PUSH32(esp, 9); /* 0x15077E60: push 9 */
    RECOMP_CALL(sub_15068E1A); /* 0x15077E62: call 0x15068e1a */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x15077E67: pop ecx */
    /* test eax, eax */ /* 0x15077E68: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_15077E83; /* 0x15077E6A: jne 0x15077e83 */
L_15077E6C:
    PUSH32(esp, MEM32(ebp + (-0x48))); /* 0x15077E6C: push dword ptr [ebp - 0x48] */
    RECOMP_CALL(sub_15049D70); /* 0x15077E6F: call 0x15049d70 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, MEM32(ebp + (-0x44))); /* 0x15077E74: push dword ptr [ebp - 0x44] */
    RECOMP_CALL(sub_15049D70); /* 0x15077E77: call 0x15049d70 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x15077E7C: pop ecx */
    ecx = POP32_VAL(esp); /* 0x15077E7D: pop ecx */
    RECOMP_BACKEDGE();
    goto L_15077D71; /* 0x15077E7E: jmp 0x15077d71 */
L_15077E83:
    PUSH32(esp, 9); /* 0x15077E83: push 9 */
    RECOMP_CALL(sub_15068D80); /* 0x15077E85: call 0x15068d80 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x15077E8A: pop ecx */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x4))); _flag_b = (uint32_t)(esi);
    MEM32(ebp + (-0x4)) = MEM32(ebp + (-0x4)) & esi; /* 0x15077E8B: and dword ptr [ebp - 4], esi */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x58)) = ebx; /* 0x15077E8E: mov dword ptr [ebp - 0x58], ebx */
    MEM32(ebp + (-0x5C)) = ebx; /* 0x15077E91: mov dword ptr [ebp - 0x5c], ebx */
    RECOMP_ICALL(MEM32(0x150C0214)); /* 0x15077E94: call dword ptr [0x150c0214] */
    RECOMP_FLAGS_IN();
    edx = eax; /* 0x15077E9A: mov edx, eax */
    ecx = MEM32(ebp + (-0x38)); /* 0x15077E9C: mov ecx, dword ptr [ebp - 0x38] */
    ecx = MEM32(ecx); /* 0x15077E9F: mov ecx, dword ptr [ecx] */
    PUSH32(esp, 2); /* 0x15077EA1: push 2 */
    PUSH32(esp, ebx); /* 0x15077EA3: push ebx */
    PUSH32(esp, 0); /* 0x15077EA4: push 0 */
    eax = ebp + (-0x30); /* 0x15077EA6: lea eax, [ebp - 0x30] */
    PUSH32(esp, eax); /* 0x15077EA9: push eax */
    PUSH32(esp, edx); /* 0x15077EAA: push edx */
    eax = ecx; /* 0x15077EAB: mov eax, ecx */
    if (5u) _cf = (((eax) >> 4) & 1u); /* 0x15077EAD: sar eax, 5 */
    if (5u) { _flag_a = recomp_flags_pack(((uint32_t)((int32_t)eax >> 5u)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = (uint32_t)((int32_t)eax >> 5u);
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x1Fu);
    ecx = ecx & 0x1Fu; /* 0x15077EB0: and ecx, 0x1f */
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = (uint32_t)((int32_t)ecx * (int32_t)0x24u); /* 0x15077EB3: imul ecx, ecx, 0x24 */
    eax = MEM32(eax * 4 + 0x150BEBC0); /* 0x15077EB6: mov eax, dword ptr [eax*4 + 0x150bebc0] */
    PUSH32(esp, MEM32(eax + ecx)); /* 0x15077EBD: push dword ptr [eax + ecx] */
    PUSH32(esp, edx); /* 0x15077EC0: push edx */
    RECOMP_ICALL(MEM32(0x150C0120)); /* 0x15077EC1: call dword ptr [0x150c0120] */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x15077EC7: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_15078295; /* 0x15077EC9: je 0x15078295 */
L_15077ECF:
    eax = MEM32(ebp + (-0x38)); /* 0x15077ECF: mov eax, dword ptr [ebp - 0x38] */
    PUSH32(esp, MEM32(eax)); /* 0x15077ED2: push dword ptr [eax] */
    RECOMP_CALL(sub_15049D70); /* 0x15077ED4: call 0x15049d70 */
    RECOMP_FLAGS_IN();
    eax = MEM32(ebp + (-0x3C)); /* 0x15077ED9: mov eax, dword ptr [ebp - 0x3c] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    esi = 0; /* 0x15077EDC: xor esi, esi */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(eax) = esi; /* 0x15077EDE: mov dword ptr [eax], esi */
    eax = ebp + (-0x20); /* 0x15077EE0: lea eax, [ebp - 0x20] */
    PUSH32(esp, eax); /* 0x15077EE3: push eax */
    eax = MEM32(ebp + (-0x40)); /* 0x15077EE4: mov eax, dword ptr [ebp - 0x40] */
    PUSH32(esp, MEM32(eax)); /* 0x15077EE7: push dword ptr [eax] */
    RECOMP_CALL(sub_15076730); /* 0x15077EE9: call 0x15076730 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x15077EEE: add esp, 0xc */
    _flag_k = FK_ADD;
    MEM32(ebp + (-0x1C)) = eax; /* 0x15077EF1: mov dword ptr [ebp - 0x1c], eax */
    /* test eax, eax */ /* 0x15077EF4: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_15078292; /* 0x15077EF6: je 0x15078292 */
L_15077EFC:
    PUSH32(esp, esi); /* 0x15077EFC: push esi */
    RECOMP_CALL(sub_150782EB); /* 0x15077EFD: call 0x150782eb */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x15077F02: pop ecx */
    MEM32(ebp + (-0x54)) = eax; /* 0x15077F03: mov dword ptr [ebp - 0x54], eax */
    /* test eax, eax */ /* 0x15077F06: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1507827B; /* 0x15077F08: je 0x1507827b */
L_15077F0E:
    PUSH32(esp, 0x15004940u); /* 0x15077F0E: push 0x15004940 */
    PUSH32(esp, esi); /* 0x15077F13: push esi */
    eax = ebp + (-0x28); /* 0x15077F14: lea eax, [ebp - 0x28] */
    PUSH32(esp, eax); /* 0x15077F17: push eax */
    RECOMP_CALL(sub_1505D654); /* 0x15077F18: call 0x1505d654 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x15077F1D: add esp, 0xc */
    _flag_k = FK_ADD;
    esi = eax; /* 0x15077F20: mov esi, eax */
    /* test esi, esi */ /* 0x15077F22: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_15077F3E; /* 0x15077F24: je 0x15077f3e */
L_15077F26:
    /* cmp esi, 0x16u */ /* 0x15077F26: cmp esi, 0x16 */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(0x16u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_15077F3A; /* 0x15077F29: jne 0x15077f3a */
L_15077F2B:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x15077F2B: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, eax); /* 0x15077F2D: push eax */
    PUSH32(esp, eax); /* 0x15077F2E: push eax */
    PUSH32(esp, eax); /* 0x15077F2F: push eax */
    PUSH32(esp, eax); /* 0x15077F30: push eax */
    PUSH32(esp, eax); /* 0x15077F31: push eax */
    RECOMP_CALL(sub_1505A11B); /* 0x15077F32: call 0x1505a11b */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x14u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x14u; /* 0x15077F37: add esp, 0x14 */
    _flag_k = FK_ADD;
L_15077F3A:
    /* test esi, esi */ /* 0x15077F3A: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_15077F48; /* 0x15077F3C: jne 0x15077f48 */
L_15077F3E:
    esi = MEM32(ebp + (-0x28)); /* 0x15077F3E: mov esi, dword ptr [ebp - 0x28] */
    MEM32(ebp + (-0x24)) = esi; /* 0x15077F41: mov dword ptr [ebp - 0x24], esi */
    /* test esi, esi */ /* 0x15077F44: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_15077F50; /* 0x15077F46: jne 0x15077f50 */
L_15077F48:
    esi = 0x1500494Cu; /* 0x15077F48: mov esi, 0x1500494c */
    MEM32(ebp + (-0x24)) = esi; /* 0x15077F4D: mov dword ptr [ebp - 0x24], esi */
L_15077F50:
    PUSH32(esp, 0x44u); /* 0x15077F50: push 0x44 */
    PUSH32(esp, 0); /* 0x15077F52: push 0 */
    eax = ebp + (-0xB4); /* 0x15077F54: lea eax, [ebp - 0xb4] */
    PUSH32(esp, eax); /* 0x15077F5A: push eax */
    RECOMP_CALL(sub_1508E3D0); /* 0x15077F5B: call 0x1508e3d0 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x15077F60: add esp, 0xc */
    _flag_k = FK_ADD;
    MEM32(ebp + (-0xB4)) = 0x44u; /* 0x15077F63: mov dword ptr [ebp - 0xb4], 0x44 */
    MEM32(ebp + (-0x88)) = 0x100u; /* 0x15077F6D: mov dword ptr [ebp - 0x88], 0x100 */
    eax = MEM32(ebp + (-0x30)); /* 0x15077F77: mov eax, dword ptr [ebp - 0x30] */
    ecx = MEM32(0x150BEBC0); /* 0x15077F7A: mov ecx, dword ptr [0x150bebc0] */
    /* test edi, edi */ /* 0x15077F80: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    edx = eax; /* 0x15077F82: mov edx, eax */
    if (TEST_Z(_flag_a, _flag_b)) goto L_15077F88; /* 0x15077F84: je 0x15077f88 */
L_15077F86:
    edx = MEM32(ecx); /* 0x15077F86: mov edx, dword ptr [ecx] */
L_15077F88:
    MEM32(ebp + (-0x7C)) = edx; /* 0x15077F88: mov dword ptr [ebp - 0x7c], edx */
    /* cmp edi, ebx */ /* 0x15077F8B: cmp edi, ebx */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_15077F92; /* 0x15077F8D: je 0x15077f92 */
L_15077F8F:
    eax = MEM32(ecx + 0x24); /* 0x15077F8F: mov eax, dword ptr [ecx + 0x24] */
L_15077F92:
    MEM32(ebp + (-0x78)) = eax; /* 0x15077F92: mov dword ptr [ebp - 0x78], eax */
    eax = MEM32(ecx + 0x48); /* 0x15077F95: mov eax, dword ptr [ecx + 0x48] */
    MEM32(ebp + (-0x74)) = eax; /* 0x15077F98: mov dword ptr [ebp - 0x74], eax */
    ecx = esi; /* 0x15077F9B: mov ecx, esi */
    edx = ecx + 0x1; /* 0x15077F9D: lea edx, [ecx + 1] */
L_15077FA0:
    SET_LO8(eax, MEM8(ecx)); /* 0x15077FA0: mov al, byte ptr [ecx] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx + 1; /* 0x15077FA2: inc ecx */
    _flag_k = FK_INC;
    /* test LO8(eax), LO8(eax) */ /* 0x15077FA3: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_15077FA0; /* 0x15077FA5: jne 0x15077fa0 */
L_15077FA7:
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ecx = ecx - edx; /* 0x15077FA7: sub ecx, edx */
    _flag_k = FK_CMP;
    edx = MEM32(ebp + 0x8); /* 0x15077FA9: mov edx, dword ptr [ebp + 8] */
    esi = edx + 0x1; /* 0x15077FAC: lea esi, [edx + 1] */
L_15077FAF:
    SET_LO8(eax, MEM8(edx)); /* 0x15077FAF: mov al, byte ptr [edx] */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(1);
    edx = edx + 1; /* 0x15077FB1: inc edx */
    _flag_k = FK_INC;
    /* test LO8(eax), LO8(eax) */ /* 0x15077FB2: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_15077FAF; /* 0x15077FB4: jne 0x15077faf */
L_15077FB6:
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    edx = edx - esi; /* 0x15077FB6: sub edx, esi */
    _flag_k = FK_CMP;
    esi = edx + 0x5; /* 0x15077FB8: lea esi, [edx + 5] */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esi = esi + ecx; /* 0x15077FBB: add esi, ecx */
    _flag_k = FK_ADD;
    PUSH32(esp, ebx); /* 0x15077FBD: push ebx */
    PUSH32(esp, esi); /* 0x15077FBE: push esi */
    RECOMP_CALL(sub_15048EE2); /* 0x15077FBF: call 0x15048ee2 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x15077FC4: pop ecx */
    ecx = POP32_VAL(esp); /* 0x15077FC5: pop ecx */
    ebx = eax; /* 0x15077FC6: mov ebx, eax */
    /* test ebx, ebx */ /* 0x15077FC8: test ebx, ebx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ebx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1507827B; /* 0x15077FCA: je 0x1507827b */
L_15077FD0:
    PUSH32(esp, MEM32(ebp + (-0x24))); /* 0x15077FD0: push dword ptr [ebp - 0x24] */
    PUSH32(esp, esi); /* 0x15077FD3: push esi */
    PUSH32(esp, ebx); /* 0x15077FD4: push ebx */
    RECOMP_CALL(sub_1508E640); /* 0x15077FD5: call 0x1508e640 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x15077FDA: add esp, 0xc */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edi = 0; /* 0x15077FDD: xor edi, edi */
    _cf = 0;
    _flag_k = FK_TEST;
    /* test eax, eax */ /* 0x15077FDF: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_15077FF0; /* 0x15077FE1: je 0x15077ff0 */
L_15077FE3:
    PUSH32(esp, edi); /* 0x15077FE3: push edi */
    PUSH32(esp, edi); /* 0x15077FE4: push edi */
    PUSH32(esp, edi); /* 0x15077FE5: push edi */
    PUSH32(esp, edi); /* 0x15077FE6: push edi */
    PUSH32(esp, edi); /* 0x15077FE7: push edi */
    RECOMP_CALL(sub_1505A11B); /* 0x15077FE8: call 0x1505a11b */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x14u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x14u; /* 0x15077FED: add esp, 0x14 */
    _flag_k = FK_ADD;
L_15077FF0:
    PUSH32(esp, 0x15007008u); /* 0x15077FF0: push 0x15007008 */
    PUSH32(esp, esi); /* 0x15077FF5: push esi */
    PUSH32(esp, ebx); /* 0x15077FF6: push ebx */
    RECOMP_CALL(sub_1508E450); /* 0x15077FF7: call 0x1508e450 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x15077FFC: add esp, 0xc */
    _flag_k = FK_ADD;
    /* test eax, eax */ /* 0x15077FFF: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_15078010; /* 0x15078001: je 0x15078010 */
L_15078003:
    PUSH32(esp, edi); /* 0x15078003: push edi */
    PUSH32(esp, edi); /* 0x15078004: push edi */
    PUSH32(esp, edi); /* 0x15078005: push edi */
    PUSH32(esp, edi); /* 0x15078006: push edi */
    PUSH32(esp, edi); /* 0x15078007: push edi */
    RECOMP_CALL(sub_1505A11B); /* 0x15078008: call 0x1505a11b */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x14u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x14u; /* 0x1507800D: add esp, 0x14 */
    _flag_k = FK_ADD;
L_15078010:
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x15078010: push dword ptr [ebp + 8] */
    PUSH32(esp, esi); /* 0x15078013: push esi */
    PUSH32(esp, ebx); /* 0x15078014: push ebx */
    RECOMP_CALL(sub_1508E450); /* 0x15078015: call 0x1508e450 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x1507801A: add esp, 0xc */
    _flag_k = FK_ADD;
    /* test eax, eax */ /* 0x1507801D: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1507802E; /* 0x1507801F: je 0x1507802e */
L_15078021:
    PUSH32(esp, edi); /* 0x15078021: push edi */
    PUSH32(esp, edi); /* 0x15078022: push edi */
    PUSH32(esp, edi); /* 0x15078023: push edi */
    PUSH32(esp, edi); /* 0x15078024: push edi */
    PUSH32(esp, edi); /* 0x15078025: push edi */
    RECOMP_CALL(sub_1505A11B); /* 0x15078026: call 0x1505a11b */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x14u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x14u; /* 0x1507802B: add esp, 0x14 */
    _flag_k = FK_ADD;
L_1507802E:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1507802E: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    edi = ebp + (-0x70); /* 0x15078030: lea edi, [ebp - 0x70] */
    MEM32(edi) = eax; edi += _df * 4; /* 0x15078033: stosd dword ptr es:[edi], eax */
    MEM32(edi) = eax; edi += _df * 4; /* 0x15078034: stosd dword ptr es:[edi], eax */
    MEM32(edi) = eax; edi += _df * 4; /* 0x15078035: stosd dword ptr es:[edi], eax */
    MEM32(edi) = eax; edi += _df * 4; /* 0x15078036: stosd dword ptr es:[edi], eax */
    RECOMP_CALL(sub_15036430); /* 0x15078037: call 0x15036430 */
    RECOMP_FLAGS_IN();
    edi = MEM32(eax); /* 0x1507803C: mov edi, dword ptr [eax] */
    MEM32(ebp + (-0x4C)) = edi; /* 0x1507803E: mov dword ptr [ebp - 0x4c], edi */
    PUSH32(esp, 0); /* 0x15078041: push 0 */
    esi = MEM32(ebp + (-0x24)); /* 0x15078043: mov esi, dword ptr [ebp - 0x24] */
    PUSH32(esp, esi); /* 0x15078046: push esi */
    RECOMP_CALL(sub_15036590); /* 0x15078047: call 0x15036590 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1507804C: pop ecx */
    ecx = POP32_VAL(esp); /* 0x1507804D: pop ecx */
    /* test eax, eax */ /* 0x1507804E: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_15078075; /* 0x15078050: jne 0x15078075 */
L_15078052:
    eax = ebp + (-0x70); /* 0x15078052: lea eax, [ebp - 0x70] */
    PUSH32(esp, eax); /* 0x15078055: push eax */
    eax = ebp + (-0xB4); /* 0x15078056: lea eax, [ebp - 0xb4] */
    PUSH32(esp, eax); /* 0x1507805C: push eax */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1507805D: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, eax); /* 0x1507805F: push eax */
    PUSH32(esp, eax); /* 0x15078060: push eax */
    PUSH32(esp, eax); /* 0x15078061: push eax */
    PUSH32(esp, 1); /* 0x15078062: push 1 */
    PUSH32(esp, eax); /* 0x15078064: push eax */
    PUSH32(esp, eax); /* 0x15078065: push eax */
    PUSH32(esp, ebx); /* 0x15078066: push ebx */
    PUSH32(esp, esi); /* 0x15078067: push esi */
    RECOMP_ICALL(MEM32(0x150C0230)); /* 0x15078068: call dword ptr [0x150c0230] */
    RECOMP_FLAGS_IN();
    esi = eax; /* 0x1507806E: mov esi, eax */
    goto L_1507822F; /* 0x15078070: jmp 0x1507822f */
L_15078075:
    _flag_a = (uint32_t)(MEM32(ebp + (-0x2C))); _flag_b = (uint32_t)(0);
    MEM32(ebp + (-0x2C)) = MEM32(ebp + (-0x2C)) & 0; /* 0x15078075: and dword ptr [ebp - 0x2c], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, 1); /* 0x15078079: push 1 */
    PUSH32(esp, 0x104u); /* 0x1507807B: push 0x104 */
    RECOMP_CALL(sub_15048EE2); /* 0x15078080: call 0x15048ee2 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x15078085: pop ecx */
    ecx = POP32_VAL(esp); /* 0x15078086: pop ecx */
    esi = eax; /* 0x15078087: mov esi, eax */
    /* test esi, esi */ /* 0x15078089: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_150780B0; /* 0x1507808B: jne 0x150780b0 */
L_1507808D:
    PUSH32(esp, eax); /* 0x1507808D: push eax */
    RECOMP_CALL(sub_15048840); /* 0x1507808E: call 0x15048840 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, ebx); /* 0x15078093: push ebx */
    RECOMP_CALL(sub_15048840); /* 0x15078094: call 0x15048840 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, MEM32(ebp + (-0x28))); /* 0x15078099: push dword ptr [ebp - 0x28] */
    RECOMP_CALL(sub_15048840); /* 0x1507809C: call 0x15048840 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x150780A1: add esp, 0xc */
    _flag_k = FK_ADD;
    RECOMP_CALL(sub_15036430); /* 0x150780A4: call 0x15036430 */
    RECOMP_FLAGS_IN();
    MEM32(eax) = edi; /* 0x150780A9: mov dword ptr [eax], edi */
    goto L_1507827B; /* 0x150780AB: jmp 0x1507827b */
L_150780B0:
    PUSH32(esp, 0x150048F4u); /* 0x150780B0: push 0x150048f4 */
    PUSH32(esp, 0); /* 0x150780B5: push 0 */
    eax = ebp + (-0x2C); /* 0x150780B7: lea eax, [ebp - 0x2c] */
    PUSH32(esp, eax); /* 0x150780BA: push eax */
    RECOMP_CALL(sub_1505D654); /* 0x150780BB: call 0x1505d654 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x150780C0: add esp, 0xc */
    _flag_k = FK_ADD;
    edi = eax; /* 0x150780C3: mov edi, eax */
    /* test edi, edi */ /* 0x150780C5: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1507810F; /* 0x150780C7: je 0x1507810f */
L_150780C9:
    /* cmp edi, 0x16u */ /* 0x150780C9: cmp edi, 0x16 */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(0x16u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_150780DD; /* 0x150780CC: jne 0x150780dd */
L_150780CE:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x150780CE: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, eax); /* 0x150780D0: push eax */
    PUSH32(esp, eax); /* 0x150780D1: push eax */
    PUSH32(esp, eax); /* 0x150780D2: push eax */
    PUSH32(esp, eax); /* 0x150780D3: push eax */
    PUSH32(esp, eax); /* 0x150780D4: push eax */
    RECOMP_CALL(sub_1505A11B); /* 0x150780D5: call 0x1505a11b */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x14u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x14u; /* 0x150780DA: add esp, 0x14 */
    _flag_k = FK_ADD;
L_150780DD:
    /* test edi, edi */ /* 0x150780DD: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1507810F; /* 0x150780DF: je 0x1507810f */
L_150780E1:
    PUSH32(esp, MEM32(ebp + (-0x2C))); /* 0x150780E1: push dword ptr [ebp - 0x2c] */
    RECOMP_CALL(sub_15048840); /* 0x150780E4: call 0x15048840 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, esi); /* 0x150780E9: push esi */
    RECOMP_CALL(sub_15048840); /* 0x150780EA: call 0x15048840 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, ebx); /* 0x150780EF: push ebx */
    RECOMP_CALL(sub_15048840); /* 0x150780F0: call 0x15048840 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, MEM32(ebp + (-0x28))); /* 0x150780F5: push dword ptr [ebp - 0x28] */
    RECOMP_CALL(sub_15048840); /* 0x150780F8: call 0x15048840 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x10u; /* 0x150780FD: add esp, 0x10 */
    _flag_k = FK_ADD;
    RECOMP_CALL(sub_15036430); /* 0x15078100: call 0x15036430 */
    RECOMP_FLAGS_IN();
    ecx = MEM32(ebp + (-0x4C)); /* 0x15078105: mov ecx, dword ptr [ebp - 0x4c] */
    MEM32(eax) = ecx; /* 0x15078108: mov dword ptr [eax], ecx */
    goto L_1507827B; /* 0x1507810A: jmp 0x1507827b */
L_1507810F:
    eax = MEM32(ebp + (-0x2C)); /* 0x1507810F: mov eax, dword ptr [ebp - 0x2c] */
L_15078112:
    PUSH32(esp, 0x103u); /* 0x15078112: push 0x103 */
    PUSH32(esp, esi); /* 0x15078117: push esi */
    PUSH32(esp, eax); /* 0x15078118: push eax */
    RECOMP_CALL(sub_1505EB80); /* 0x15078119: call 0x1505eb80 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x1507811E: add esp, 0xc */
    _flag_k = FK_ADD;
    MEM32(ebp + (-0x60)) = eax; /* 0x15078121: mov dword ptr [ebp - 0x60], eax */
    /* test eax, eax */ /* 0x15078124: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_15078219; /* 0x15078126: je 0x15078219 */
L_1507812C:
    /* cmp MEM8(esi), 0 */ /* 0x1507812C: cmp byte ptr [esi], 0 */
    _flag_a = (uint32_t)(MEM8(esi)) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_15078219; /* 0x1507812F: je 0x15078219 */
L_15078135:
    ecx = esi; /* 0x15078135: mov ecx, esi */
    edx = ecx + 0x1; /* 0x15078137: lea edx, [ecx + 1] */
L_1507813A:
    SET_LO8(eax, MEM8(ecx)); /* 0x1507813A: mov al, byte ptr [ecx] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx + 1; /* 0x1507813C: inc ecx */
    _flag_k = FK_INC;
    /* test LO8(eax), LO8(eax) */ /* 0x1507813D: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1507813A; /* 0x1507813F: jne 0x1507813a */
L_15078141:
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ecx = ecx - edx; /* 0x15078141: sub ecx, edx */
    _flag_k = FK_CMP;
    edi = esi + (-0x1); /* 0x15078143: lea edi, [esi - 1] */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edi = edi + ecx; /* 0x15078146: add edi, ecx */
    _flag_k = FK_ADD;
    SET_LO8(eax, MEM8(edi)); /* 0x15078148: mov al, byte ptr [edi] */
    /* cmp LO8(eax), 0x5Cu */ /* 0x1507814A: cmp al, 0x5c */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(0x5Cu) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_1507817C; /* 0x1507814C: jne 0x1507817c */
L_1507814E:
    PUSH32(esp, 0x5Cu); /* 0x1507814E: push 0x5c */
    PUSH32(esp, esi); /* 0x15078150: push esi */
    RECOMP_CALL(sub_15055AA0); /* 0x15078151: call 0x15055aa0 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x15078156: pop ecx */
    ecx = POP32_VAL(esp); /* 0x15078157: pop ecx */
    /* cmp edi, eax */ /* 0x15078158: cmp edi, eax */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_150781A6; /* 0x1507815A: je 0x150781a6 */
L_1507815C:
    PUSH32(esp, 0x150048FCu); /* 0x1507815C: push 0x150048fc */
    PUSH32(esp, 0x104u); /* 0x15078161: push 0x104 */
    PUSH32(esp, esi); /* 0x15078166: push esi */
    RECOMP_CALL(sub_1508E450); /* 0x15078167: call 0x1508e450 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x1507816C: add esp, 0xc */
    _flag_k = FK_ADD;
    /* test eax, eax */ /* 0x1507816F: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_150781A6; /* 0x15078171: je 0x150781a6 */
L_15078173:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edi = 0; /* 0x15078173: xor edi, edi */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, edi); /* 0x15078175: push edi */
    PUSH32(esp, edi); /* 0x15078176: push edi */
    PUSH32(esp, edi); /* 0x15078177: push edi */
    PUSH32(esp, edi); /* 0x15078178: push edi */
    PUSH32(esp, edi); /* 0x15078179: push edi */
    goto L_1507819E; /* 0x1507817A: jmp 0x1507819e */
L_1507817C:
    /* cmp LO8(eax), 0x2Fu */ /* 0x1507817C: cmp al, 0x2f */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(0x2Fu) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_150781A6; /* 0x1507817E: je 0x150781a6 */
L_15078180:
    PUSH32(esp, 0x150048FCu); /* 0x15078180: push 0x150048fc */
    PUSH32(esp, 0x104u); /* 0x15078185: push 0x104 */
    PUSH32(esp, esi); /* 0x1507818A: push esi */
    RECOMP_CALL(sub_1508E450); /* 0x1507818B: call 0x1508e450 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x15078190: add esp, 0xc */
    _flag_k = FK_ADD;
    /* test eax, eax */ /* 0x15078193: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_150781A6; /* 0x15078195: je 0x150781a6 */
L_15078197:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x15078197: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, eax); /* 0x15078199: push eax */
    PUSH32(esp, eax); /* 0x1507819A: push eax */
    PUSH32(esp, eax); /* 0x1507819B: push eax */
    PUSH32(esp, eax); /* 0x1507819C: push eax */
    PUSH32(esp, eax); /* 0x1507819D: push eax */
L_1507819E:
    RECOMP_CALL(sub_1505A11B); /* 0x1507819E: call 0x1505a11b */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x14u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x14u; /* 0x150781A3: add esp, 0x14 */
    _flag_k = FK_ADD;
L_150781A6:
    edx = esi; /* 0x150781A6: mov edx, esi */
    ecx = edx + 0x1; /* 0x150781A8: lea ecx, [edx + 1] */
L_150781AB:
    SET_LO8(eax, MEM8(edx)); /* 0x150781AB: mov al, byte ptr [edx] */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(1);
    edx = edx + 1; /* 0x150781AD: inc edx */
    _flag_k = FK_INC;
    /* test LO8(eax), LO8(eax) */ /* 0x150781AE: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_150781AB; /* 0x150781B0: jne 0x150781ab */
L_150781B2:
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    edx = edx - ecx; /* 0x150781B2: sub edx, ecx */
    _flag_k = FK_CMP;
    ecx = MEM32(ebp + (-0x24)); /* 0x150781B4: mov ecx, dword ptr [ebp - 0x24] */
    edi = ecx + 0x1; /* 0x150781B7: lea edi, [ecx + 1] */
L_150781BA:
    SET_LO8(eax, MEM8(ecx)); /* 0x150781BA: mov al, byte ptr [ecx] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx + 1; /* 0x150781BC: inc ecx */
    _flag_k = FK_INC;
    /* test LO8(eax), LO8(eax) */ /* 0x150781BD: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_150781BA; /* 0x150781BF: jne 0x150781ba */
L_150781C1:
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ecx = ecx - edi; /* 0x150781C1: sub ecx, edi */
    _flag_k = FK_CMP;
    eax = ecx + edx; /* 0x150781C3: lea eax, [ecx + edx] */
    ecx = 0x104u; /* 0x150781C6: mov ecx, 0x104 */
    /* cmp eax, ecx */ /* 0x150781CB: cmp eax, ecx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_AE(_flag_a, _flag_b)) goto L_15078219; /* 0x150781CD: jae 0x15078219 */
L_150781CF:
    PUSH32(esp, MEM32(ebp + (-0x24))); /* 0x150781CF: push dword ptr [ebp - 0x24] */
    PUSH32(esp, ecx); /* 0x150781D2: push ecx */
    PUSH32(esp, esi); /* 0x150781D3: push esi */
    RECOMP_CALL(sub_1508E450); /* 0x150781D4: call 0x1508e450 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x150781D9: add esp, 0xc */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edi = 0; /* 0x150781DC: xor edi, edi */
    _cf = 0;
    _flag_k = FK_TEST;
    /* test eax, eax */ /* 0x150781DE: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_150781EF; /* 0x150781E0: je 0x150781ef */
L_150781E2:
    PUSH32(esp, edi); /* 0x150781E2: push edi */
    PUSH32(esp, edi); /* 0x150781E3: push edi */
    PUSH32(esp, edi); /* 0x150781E4: push edi */
    PUSH32(esp, edi); /* 0x150781E5: push edi */
    PUSH32(esp, edi); /* 0x150781E6: push edi */
    RECOMP_CALL(sub_1505A11B); /* 0x150781E7: call 0x1505a11b */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x14u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x14u; /* 0x150781EC: add esp, 0x14 */
    _flag_k = FK_ADD;
L_150781EF:
    PUSH32(esp, edi); /* 0x150781EF: push edi */
    PUSH32(esp, esi); /* 0x150781F0: push esi */
    RECOMP_CALL(sub_15036590); /* 0x150781F1: call 0x15036590 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x150781F6: pop ecx */
    ecx = POP32_VAL(esp); /* 0x150781F7: pop ecx */
    /* test eax, eax */ /* 0x150781F8: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_15078270; /* 0x150781FA: jne 0x15078270 */
L_150781FC:
    eax = ebp + (-0x70); /* 0x150781FC: lea eax, [ebp - 0x70] */
    PUSH32(esp, eax); /* 0x150781FF: push eax */
    eax = ebp + (-0xB4); /* 0x15078200: lea eax, [ebp - 0xb4] */
    PUSH32(esp, eax); /* 0x15078206: push eax */
    PUSH32(esp, edi); /* 0x15078207: push edi */
    PUSH32(esp, edi); /* 0x15078208: push edi */
    PUSH32(esp, edi); /* 0x15078209: push edi */
    PUSH32(esp, 1); /* 0x1507820A: push 1 */
    PUSH32(esp, edi); /* 0x1507820C: push edi */
    PUSH32(esp, edi); /* 0x1507820D: push edi */
    PUSH32(esp, ebx); /* 0x1507820E: push ebx */
    PUSH32(esp, esi); /* 0x1507820F: push esi */
    RECOMP_ICALL(MEM32(0x150C0230)); /* 0x15078210: call dword ptr [0x150c0230] */
    RECOMP_FLAGS_IN();
    MEM32(ebp + (-0x50)) = eax; /* 0x15078216: mov dword ptr [ebp - 0x50], eax */
L_15078219:
    PUSH32(esp, MEM32(ebp + (-0x2C))); /* 0x15078219: push dword ptr [ebp - 0x2c] */
    RECOMP_CALL(sub_15048840); /* 0x1507821C: call 0x15048840 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, esi); /* 0x15078221: push esi */
    RECOMP_CALL(sub_15048840); /* 0x15078222: call 0x15048840 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x15078227: pop ecx */
    ecx = POP32_VAL(esp); /* 0x15078228: pop ecx */
    edi = MEM32(ebp + (-0x4C)); /* 0x15078229: mov edi, dword ptr [ebp - 0x4c] */
    esi = MEM32(ebp + (-0x50)); /* 0x1507822C: mov esi, dword ptr [ebp - 0x50] */
L_1507822F:
    PUSH32(esp, ebx); /* 0x1507822F: push ebx */
    RECOMP_CALL(sub_15048840); /* 0x15078230: call 0x15048840 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, MEM32(ebp + (-0x28))); /* 0x15078235: push dword ptr [ebp - 0x28] */
    RECOMP_CALL(sub_15048840); /* 0x15078238: call 0x15048840 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1507823D: pop ecx */
    ecx = POP32_VAL(esp); /* 0x1507823E: pop ecx */
    PUSH32(esp, MEM32(ebp + (-0x30))); /* 0x1507823F: push dword ptr [ebp - 0x30] */
    RECOMP_ICALL(MEM32(0x150C0124)); /* 0x15078242: call dword ptr [0x150c0124] */
    RECOMP_FLAGS_IN();
    /* test esi, esi */ /* 0x15078248: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_15078255; /* 0x1507824A: je 0x15078255 */
L_1507824C:
    PUSH32(esp, MEM32(ebp + (-0x6C))); /* 0x1507824C: push dword ptr [ebp - 0x6c] */
    RECOMP_ICALL(MEM32(0x150C0124)); /* 0x1507824F: call dword ptr [0x150c0124] */
    RECOMP_FLAGS_IN();
L_15078255:
    RECOMP_CALL(sub_15036430); /* 0x15078255: call 0x15036430 */
    RECOMP_FLAGS_IN();
    MEM32(eax) = edi; /* 0x1507825A: mov dword ptr [eax], edi */
    ecx = MEM32(ebp + (-0x54)); /* 0x1507825C: mov ecx, dword ptr [ebp - 0x54] */
    /* test esi, esi */ /* 0x1507825F: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_15078278; /* 0x15078261: je 0x15078278 */
L_15078263:
    eax = MEM32(ebp + (-0x70)); /* 0x15078263: mov eax, dword ptr [ebp - 0x70] */
    MEM32(ecx + 0x4) = eax; /* 0x15078266: mov dword ptr [ecx + 4], eax */
    esi = MEM32(ebp + (-0x1C)); /* 0x15078269: mov esi, dword ptr [ebp - 0x1c] */
    MEM32(ecx) = esi; /* 0x1507826C: mov dword ptr [ecx], esi */
    goto L_150782BB; /* 0x1507826E: jmp 0x150782bb */
L_15078270:
    eax = MEM32(ebp + (-0x60)); /* 0x15078270: mov eax, dword ptr [ebp - 0x60] */
    RECOMP_BACKEDGE();
    goto L_15078112; /* 0x15078273: jmp 0x15078112 */
L_15078278:
    _flag_a = (uint32_t)(MEM32(ecx)); _flag_b = (uint32_t)(0);
    MEM32(ecx) = MEM32(ecx) & 0; /* 0x15078278: and dword ptr [ecx], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
L_1507827B:
    esi = MEM32(ebp + (-0x1C)); /* 0x1507827B: mov esi, dword ptr [ebp - 0x1c] */
    PUSH32(esp, esi); /* 0x1507827E: push esi */
    RECOMP_CALL(sub_1507BE20); /* 0x1507827F: call 0x1507be20 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x15078284: pop ecx */
    edi = MEM32(ebp + (-0x34)); /* 0x15078285: mov edi, dword ptr [ebp - 0x34] */
    _flag_a = (uint32_t)(MEM32(edi)); _flag_b = (uint32_t)(0);
    MEM32(edi) = MEM32(edi) & 0; /* 0x15078288: and dword ptr [edi], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    esi = 0; /* 0x1507828B: xor esi, esi */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x1C)) = esi; /* 0x1507828D: mov dword ptr [ebp - 0x1c], esi */
    goto L_15078298; /* 0x15078290: jmp 0x15078298 */
L_15078292:
    esi = MEM32(ebp + (-0x1C)); /* 0x15078292: mov esi, dword ptr [ebp - 0x1c] */
L_15078295:
    edi = MEM32(ebp + (-0x34)); /* 0x15078295: mov edi, dword ptr [ebp - 0x34] */
L_15078298:
    eax = MEM32(ebp + (-0x3C)); /* 0x15078298: mov eax, dword ptr [ebp - 0x3c] */
    /* cmp MEM32(eax), 0 */ /* 0x1507829B: cmp dword ptr [eax], 0 */
    _flag_a = (uint32_t)(MEM32(eax)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_150782AB; /* 0x1507829E: je 0x150782ab */
L_150782A0:
    eax = MEM32(ebp + (-0x38)); /* 0x150782A0: mov eax, dword ptr [ebp - 0x38] */
    PUSH32(esp, MEM32(eax)); /* 0x150782A3: push dword ptr [eax] */
    RECOMP_CALL(sub_15049D70); /* 0x150782A5: call 0x15049d70 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x150782AA: pop ecx */
L_150782AB:
    /* cmp MEM32(edi), 0 */ /* 0x150782AB: cmp dword ptr [edi], 0 */
    _flag_a = (uint32_t)(MEM32(edi)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_150782BB; /* 0x150782AE: je 0x150782bb */
L_150782B0:
    eax = MEM32(ebp + (-0x40)); /* 0x150782B0: mov eax, dword ptr [ebp - 0x40] */
    PUSH32(esp, MEM32(eax)); /* 0x150782B3: push dword ptr [eax] */
    RECOMP_CALL(sub_15049D70); /* 0x150782B5: call 0x15049d70 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x150782BA: pop ecx */
L_150782BB:
    MEM32(ebp + (-0x4)) = 0xFFFFFFFEu; /* 0x150782BB: mov dword ptr [ebp - 4], 0xfffffffe */
    RECOMP_CALL(sub_150782DC); /* 0x150782C2: call 0x150782dc */
    RECOMP_FLAGS_IN();
L_150782C7:
    eax = esi; /* 0x150782C7: mov eax, esi */
L_150782C9:
    ecx = MEM32(ebp + (-0x10)); /* 0x150782C9: mov ecx, dword ptr [ebp - 0x10] */
    MEM32(FS_BASE + (0)) = ecx; /* 0x150782CC: mov dword ptr fs:[0], ecx */
    ecx = POP32_VAL(esp); /* 0x150782D3: pop ecx */
    edi = POP32_VAL(esp); /* 0x150782D4: pop edi */
    esi = POP32_VAL(esp); /* 0x150782D5: pop esi */
    ebx = POP32_VAL(esp); /* 0x150782D6: pop ebx */
    esp = ebp; ebp = POP32_VAL(esp); /* 0x150782D7: leave  */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x150782D8: ret  */
    RECOMP_REGS_OUT();
}

void sub_150782DC(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x150782DCu);

L_150782DC:
    PUSH32(esp, 9); /* 0x150782DC: push 9 */
    RECOMP_CALL(sub_15068F50); /* 0x150782DE: call 0x15068f50 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x150782E3: pop ecx */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x150782E4: ret  */
    RECOMP_REGS_OUT();
}

void sub_150782EB(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x150782EBu);

L_150782EB:
    edi = edi; /* 0x150782EB: mov edi, edi */
    PUSH32(esp, ebp); /* 0x150782ED: push ebp */
    ebp = esp; /* 0x150782EE: mov ebp, esp */
    eax = MEM32(0x150BE970); /* 0x150782F0: mov eax, dword ptr [0x150be970] */
    ecx = MEM32(0x150BE96C); /* 0x150782F5: mov ecx, dword ptr [0x150be96c] */
    edx = MEM32(ebp + 0x8); /* 0x150782FB: mov edx, dword ptr [ebp + 8] */
    PUSH32(esp, ebx); /* 0x150782FE: push ebx */
    PUSH32(esp, esi); /* 0x150782FF: push esi */
    ebx = eax + ecx * 8; /* 0x15078300: lea ebx, [eax + ecx*8] */
    esi = eax + ecx * 8; /* 0x15078303: lea esi, [eax + ecx*8] */
    goto L_1507830F; /* 0x15078306: jmp 0x1507830f */
L_15078308:
    /* cmp MEM32(eax), edx */ /* 0x15078308: cmp dword ptr [eax], edx */
    _flag_a = (uint32_t)(MEM32(eax)); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_15078313; /* 0x1507830A: je 0x15078313 */
L_1507830C:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 8; /* 0x1507830C: add eax, 8 */
    _flag_k = FK_ADD;
L_1507830F:
    /* cmp eax, esi */ /* 0x1507830F: cmp eax, esi */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_15078308; /* 0x15078311: jb 0x15078308 */
L_15078313:
    esi = POP32_VAL(esp); /* 0x15078313: pop esi */
    /* cmp eax, ebx */ /* 0x15078314: cmp eax, ebx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    ebx = POP32_VAL(esp); /* 0x15078316: pop ebx */
    if (CMP_B(_flag_a, _flag_b)) goto L_15078359; /* 0x15078317: jb 0x15078359 */
L_15078319:
    /* test edx, edx */ /* 0x15078319: test edx, edx */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(edx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_15078357; /* 0x1507831B: jne 0x15078357 */
L_1507831D:
    eax = ecx + 0x1; /* 0x1507831D: lea eax, [ecx + 1] */
    /* cmp eax, ecx */ /* 0x15078320: cmp eax, ecx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_B(_flag_a, _flag_b)) goto L_15078357; /* 0x15078322: jb 0x15078357 */
L_15078324:
    /* cmp eax, 0x1FFFFFFFu */ /* 0x15078324: cmp eax, 0x1fffffff */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x1FFFFFFFu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_AE(_flag_a, _flag_b)) goto L_15078357; /* 0x15078329: jae 0x15078357 */
L_1507832B:
    PUSH32(esp, 8); /* 0x1507832B: push 8 */
    PUSH32(esp, eax); /* 0x1507832D: push eax */
    PUSH32(esp, MEM32(0x150BE970)); /* 0x1507832E: push dword ptr [0x150be970] */
    RECOMP_CALL(sub_15048FCA); /* 0x15078334: call 0x15048fca */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x15078339: add esp, 0xc */
    _flag_k = FK_ADD;
    /* test eax, eax */ /* 0x1507833C: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_15078357; /* 0x1507833E: je 0x15078357 */
L_15078340:
    ecx = MEM32(0x150BE96C); /* 0x15078340: mov ecx, dword ptr [0x150be96c] */
    MEM32(0x150BE970) = eax; /* 0x15078346: mov dword ptr [0x150be970], eax */
    eax = eax + ecx * 8; /* 0x1507834B: lea eax, [eax + ecx*8] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx + 1; /* 0x1507834E: inc ecx */
    _flag_k = FK_INC;
    MEM32(0x150BE96C) = ecx; /* 0x1507834F: mov dword ptr [0x150be96c], ecx */
    ebp = POP32_VAL(esp); /* 0x15078355: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x15078356: ret  */
L_15078357:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x15078357: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
L_15078359:
    ebp = POP32_VAL(esp); /* 0x15078359: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1507835A: ret  */
    RECOMP_REGS_OUT();
}

void sub_15078370(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x15078370u);

L_15078370:
    edi = edi; /* 0x15078370: mov edi, edi */
    PUSH32(esp, ebp); /* 0x15078372: push ebp */
    ebp = esp; /* 0x15078373: mov ebp, esp */
    eax = ebp + 0x10; /* 0x15078375: lea eax, [ebp + 0x10] */
    PUSH32(esp, eax); /* 0x15078378: push eax */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x15078379: push dword ptr [ebp + 0xc] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x1507837C: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_15079AF0); /* 0x1507837F: call 0x15079af0 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x15078384: add esp, 0xc */
    _flag_k = FK_ADD;
    ebp = POP32_VAL(esp); /* 0x15078387: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x15078388: ret  */
    RECOMP_REGS_OUT();
}

void sub_15078390(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x15078390u);

L_15078390:
    edi = edi; /* 0x15078390: mov edi, edi */
    PUSH32(esp, ebp); /* 0x15078392: push ebp */
    ebp = esp; /* 0x15078393: mov ebp, esp */
    eax = ebp + 0xC; /* 0x15078395: lea eax, [ebp + 0xc] */
    PUSH32(esp, eax); /* 0x15078398: push eax */
    PUSH32(esp, 0); /* 0x15078399: push 0 */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x1507839B: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_15079B50); /* 0x1507839E: call 0x15079b50 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x150783A3: add esp, 0xc */
    _flag_k = FK_ADD;
    ebp = POP32_VAL(esp); /* 0x150783A6: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x150783A7: ret  */
    RECOMP_REGS_OUT();
}

void sub_150783B0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x150783B0u);

L_150783B0:
    edi = edi; /* 0x150783B0: mov edi, edi */
    PUSH32(esp, ebp); /* 0x150783B2: push ebp */
    ebp = esp; /* 0x150783B3: mov ebp, esp */
    eax = ebp + 0x10; /* 0x150783B5: lea eax, [ebp + 0x10] */
    PUSH32(esp, eax); /* 0x150783B8: push eax */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x150783B9: push dword ptr [ebp + 0xc] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x150783BC: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_15079B50); /* 0x150783BF: call 0x15079b50 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x150783C4: add esp, 0xc */
    _flag_k = FK_ADD;
    ebp = POP32_VAL(esp); /* 0x150783C7: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x150783C8: ret  */
    RECOMP_REGS_OUT();
}

void sub_150783D0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x150783D0u);

L_150783D0:
    edi = edi; /* 0x150783D0: mov edi, edi */
    PUSH32(esp, ebp); /* 0x150783D2: push ebp */
    ebp = esp; /* 0x150783D3: mov ebp, esp */
    eax = ebp + 0x10; /* 0x150783D5: lea eax, [ebp + 0x10] */
    PUSH32(esp, eax); /* 0x150783D8: push eax */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x150783D9: push dword ptr [ebp + 0xc] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x150783DC: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_15079B80); /* 0x150783DF: call 0x15079b80 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x150783E4: add esp, 0xc */
    _flag_k = FK_ADD;
    ebp = POP32_VAL(esp); /* 0x150783E7: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x150783E8: ret  */
    RECOMP_REGS_OUT();
}

void sub_150783F0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x150783F0u);

L_150783F0:
    PUSH32(esp, 0xCu); /* 0x150783F0: push 0xc */
    PUSH32(esp, 0x150B1060u); /* 0x150783F2: push 0x150b1060 */
    RECOMP_CALL(sub_1505E988); /* 0x150783F7: call 0x1505e988 */
    RECOMP_FLAGS_IN();
    /* cmp MEM32(ebp + 0x8), 0 */ /* 0x150783FC: cmp dword ptr [ebp + 8], 0 */
    _flag_a = (uint32_t)(MEM32(ebp + 0x8)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_15078421; /* 0x15078400: jne 0x15078421 */
L_15078402:
    RECOMP_CALL(sub_15036430); /* 0x15078402: call 0x15036430 */
    RECOMP_FLAGS_IN();
    MEM32(eax) = 0x16u; /* 0x15078407: mov dword ptr [eax], 0x16 */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edi = 0; /* 0x1507840D: xor edi, edi */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, edi); /* 0x1507840F: push edi */
    PUSH32(esp, edi); /* 0x15078410: push edi */
    PUSH32(esp, edi); /* 0x15078411: push edi */
    PUSH32(esp, edi); /* 0x15078412: push edi */
    PUSH32(esp, edi); /* 0x15078413: push edi */
    RECOMP_CALL(sub_1505A110); /* 0x15078414: call 0x1505a110 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x14u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x14u; /* 0x15078419: add esp, 0x14 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)((eax | 0xFFFFFFFFu)); _flag_b = (uint32_t)((eax | 0xFFFFFFFFu));
    eax = eax | 0xFFFFFFFFu; /* 0x1507841C: or eax, 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_15078468; /* 0x1507841F: jmp 0x15078468 */
L_15078421:
    ebx = 0x150BC620u; /* 0x15078421: mov ebx, 0x150bc620 */
    PUSH32(esp, ebx); /* 0x15078426: push ebx */
    PUSH32(esp, 1); /* 0x15078427: push 1 */
    RECOMP_CALL(sub_1506A98D); /* 0x15078429: call 0x1506a98d */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1507842E: pop ecx */
    ecx = POP32_VAL(esp); /* 0x1507842F: pop ecx */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edi = 0; /* 0x15078430: xor edi, edi */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x4)) = edi; /* 0x15078432: mov dword ptr [ebp - 4], edi */
    PUSH32(esp, ebx); /* 0x15078435: push ebx */
    RECOMP_CALL(sub_15083DAF); /* 0x15078436: call 0x15083daf */
    RECOMP_FLAGS_IN();
    esi = eax; /* 0x1507843B: mov esi, eax */
    eax = ebp + 0xC; /* 0x1507843D: lea eax, [ebp + 0xc] */
    PUSH32(esp, eax); /* 0x15078440: push eax */
    PUSH32(esp, edi); /* 0x15078441: push edi */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x15078442: push dword ptr [ebp + 8] */
    PUSH32(esp, ebx); /* 0x15078445: push ebx */
    RECOMP_CALL(sub_1507E600); /* 0x15078446: call 0x1507e600 */
    RECOMP_FLAGS_IN();
    edi = eax; /* 0x1507844B: mov edi, eax */
    MEM32(ebp + (-0x1C)) = edi; /* 0x1507844D: mov dword ptr [ebp - 0x1c], edi */
    PUSH32(esp, ebx); /* 0x15078450: push ebx */
    PUSH32(esp, esi); /* 0x15078451: push esi */
    RECOMP_CALL(sub_15083D76); /* 0x15078452: call 0x15083d76 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x1Cu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x1Cu; /* 0x15078457: add esp, 0x1c */
    _flag_k = FK_ADD;
    MEM32(ebp + (-0x4)) = 0xFFFFFFFEu; /* 0x1507845A: mov dword ptr [ebp - 4], 0xfffffffe */
    RECOMP_CALL(sub_15078480); /* 0x15078461: call 0x15078480 */
    RECOMP_FLAGS_IN();
    eax = edi; /* 0x15078466: mov eax, edi */
L_15078468:
    ecx = MEM32(ebp + (-0x10)); /* 0x15078468: mov ecx, dword ptr [ebp - 0x10] */
    MEM32(FS_BASE + (0)) = ecx; /* 0x1507846B: mov dword ptr fs:[0], ecx */
    ecx = POP32_VAL(esp); /* 0x15078472: pop ecx */
    edi = POP32_VAL(esp); /* 0x15078473: pop edi */
    esi = POP32_VAL(esp); /* 0x15078474: pop esi */
    ebx = POP32_VAL(esp); /* 0x15078475: pop ebx */
    esp = ebp; ebp = POP32_VAL(esp); /* 0x15078476: leave  */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x15078477: ret  */
    RECOMP_REGS_OUT();
}

void sub_15078480(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x15078480u);

L_15078480:
    PUSH32(esp, ebx); /* 0x15078480: push ebx */
    PUSH32(esp, 1); /* 0x15078481: push 1 */
    RECOMP_CALL(sub_1506AA07); /* 0x15078483: call 0x1506aa07 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x15078488: pop ecx */
    ecx = POP32_VAL(esp); /* 0x15078489: pop ecx */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1507848A: ret  */
    RECOMP_REGS_OUT();
}

void sub_150784A0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x150784A0u);

L_150784A0:
    edi = edi; /* 0x150784A0: mov edi, edi */
    PUSH32(esp, ebp); /* 0x150784A2: push ebp */
    ebp = esp; /* 0x150784A3: mov ebp, esp */
    eax = ebp + 0xC; /* 0x150784A5: lea eax, [ebp + 0xc] */
    PUSH32(esp, eax); /* 0x150784A8: push eax */
    PUSH32(esp, 0); /* 0x150784A9: push 0 */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x150784AB: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_15079B80); /* 0x150784AE: call 0x15079b80 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x150784B3: add esp, 0xc */
    _flag_k = FK_ADD;
    ebp = POP32_VAL(esp); /* 0x150784B6: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x150784B7: ret  */
    RECOMP_REGS_OUT();
}

void sub_150784C0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x150784C0u);

L_150784C0:
    PUSH32(esp, 0x18u); /* 0x150784C0: push 0x18 */
    PUSH32(esp, 0x150B1080u); /* 0x150784C2: push 0x150b1080 */
    RECOMP_CALL(sub_1505E988); /* 0x150784C7: call 0x1505e988 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 4); /* 0x150784CC: push 4 */
    ebx = POP32_VAL(esp); /* 0x150784CE: pop ebx */
    edi = ebp + 0x8; /* 0x150784CF: lea edi, [ebp + 8] */
    esi = MEM32(ebp + 0xC); /* 0x150784D2: mov esi, dword ptr [ebp + 0xc] */
    /* test esi, esi */ /* 0x150784D5: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_150784F8; /* 0x150784D7: jne 0x150784f8 */
L_150784D9:
    RECOMP_CALL(sub_15036430); /* 0x150784D9: call 0x15036430 */
    RECOMP_FLAGS_IN();
    MEM32(eax) = 0x16u; /* 0x150784DE: mov dword ptr [eax], 0x16 */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x150784E4: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, eax); /* 0x150784E6: push eax */
    PUSH32(esp, eax); /* 0x150784E7: push eax */
    PUSH32(esp, eax); /* 0x150784E8: push eax */
    PUSH32(esp, eax); /* 0x150784E9: push eax */
    PUSH32(esp, eax); /* 0x150784EA: push eax */
    RECOMP_CALL(sub_1505A110); /* 0x150784EB: call 0x1505a110 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x14u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x14u; /* 0x150784F0: add esp, 0x14 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)((eax | 0xFFFFFFFFu)); _flag_b = (uint32_t)((eax | 0xFFFFFFFFu));
    eax = eax | 0xFFFFFFFFu; /* 0x150784F3: or eax, 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_1507855A; /* 0x150784F6: jmp 0x1507855a */
L_150784F8:
    MEM32(ebp + (-0x1C)) = esi; /* 0x150784F8: mov dword ptr [ebp - 0x1c], esi */
    PUSH32(esp, esi); /* 0x150784FB: push esi */
    RECOMP_CALL(sub_1506A946); /* 0x150784FC: call 0x1506a946 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x15078501: pop ecx */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x4))); _flag_b = (uint32_t)(0);
    MEM32(ebp + (-0x4)) = MEM32(ebp + (-0x4)) & 0; /* 0x15078502: and dword ptr [ebp - 4], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
L_15078506:
    eax = ebx; /* 0x15078506: mov eax, ebx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(1);
    ebx = ebx - 1; /* 0x15078508: dec ebx */
    _flag_k = FK_DEC;
    MEM32(ebp + (-0x24)) = ebx; /* 0x15078509: mov dword ptr [ebp - 0x24], ebx */
    /* test eax, eax */ /* 0x1507850C: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_15078537; /* 0x1507850E: je 0x15078537 */
L_15078510:
    eax = MEM32(esi + 0x4); /* 0x15078510: mov eax, dword ptr [esi + 4] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - 1; /* 0x15078513: sub eax, 1 */
    _flag_k = FK_CMP;
    MEM32(esi + 0x4) = eax; /* 0x15078516: mov dword ptr [esi + 4], eax */
    SET_LO8(ecx, MEM8(edi)); /* 0x15078519: mov cl, byte ptr [edi] */
    if (/* sub result */ CMP_S(_flag_a, _flag_b)) goto L_15078525; /* 0x1507851B: js 0x15078525 */
L_1507851D:
    eax = MEM32(esi); /* 0x1507851D: mov eax, dword ptr [esi] */
    MEM8(eax) = (uint8_t)(LO8(ecx)); /* 0x1507851F: mov byte ptr [eax], cl */
    _flag_a = (uint32_t)(MEM32(esi)); _flag_b = (uint32_t)(1);
    MEM32(esi) = MEM32(esi) + 1; /* 0x15078521: inc dword ptr [esi] */
    _flag_k = FK_INC;
    goto L_15078531; /* 0x15078523: jmp 0x15078531 */
L_15078525:
    PUSH32(esp, esi); /* 0x15078525: push esi */
    eax = (int32_t)(int8_t)LO8(ecx); /* 0x15078526: movsx eax, cl */
    PUSH32(esp, eax); /* 0x15078529: push eax */
    RECOMP_CALL(sub_15076AD0); /* 0x1507852A: call 0x15076ad0 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1507852F: pop ecx */
    ecx = POP32_VAL(esp); /* 0x15078530: pop ecx */
L_15078531:
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(1);
    edi = edi + 1; /* 0x15078531: inc edi */
    _flag_k = FK_INC;
    MEM32(ebp + (-0x28)) = edi; /* 0x15078532: mov dword ptr [ebp - 0x28], edi */
    RECOMP_BACKEDGE();
    goto L_15078506; /* 0x15078535: jmp 0x15078506 */
L_15078537:
    PUSH32(esp, esi); /* 0x15078537: push esi */
    RECOMP_CALL(sub_1507BEF0); /* 0x15078538: call 0x1507bef0 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1507853D: pop ecx */
    edi = MEM32(ebp + 0x8); /* 0x1507853E: mov edi, dword ptr [ebp + 8] */
    _flag_a = (uint32_t)((ecx | 0xFFFFFFFFu)); _flag_b = (uint32_t)((ecx | 0xFFFFFFFFu));
    ecx = ecx | 0xFFFFFFFFu; /* 0x15078541: or ecx, 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    /* test eax, eax */ /* 0x15078544: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) { edi = ecx; } /* 0x15078546: cmovne edi, ecx */
    MEM32(ebp + (-0x20)) = edi; /* 0x15078549: mov dword ptr [ebp - 0x20], edi */
    MEM32(ebp + (-0x4)) = 0xFFFFFFFEu; /* 0x1507854C: mov dword ptr [ebp - 4], 0xfffffffe */
    RECOMP_CALL(sub_15078570); /* 0x15078553: call 0x15078570 */
    RECOMP_FLAGS_IN();
    eax = edi; /* 0x15078558: mov eax, edi */
L_1507855A:
    ecx = MEM32(ebp + (-0x10)); /* 0x1507855A: mov ecx, dword ptr [ebp - 0x10] */
    MEM32(FS_BASE + (0)) = ecx; /* 0x1507855D: mov dword ptr fs:[0], ecx */
    ecx = POP32_VAL(esp); /* 0x15078564: pop ecx */
    edi = POP32_VAL(esp); /* 0x15078565: pop edi */
    esi = POP32_VAL(esp); /* 0x15078566: pop esi */
    ebx = POP32_VAL(esp); /* 0x15078567: pop ebx */
    esp = ebp; ebp = POP32_VAL(esp); /* 0x15078568: leave  */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x15078569: ret  */
    RECOMP_REGS_OUT();
}

void sub_15078570(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x15078570u);

L_15078570:
    PUSH32(esp, esi); /* 0x15078570: push esi */
    RECOMP_CALL(sub_1506A9C5); /* 0x15078571: call 0x1506a9c5 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x15078576: pop ecx */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x15078577: ret  */
    RECOMP_REGS_OUT();
}

void sub_15078580(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x15078580u);

L_15078580:
    PUSH32(esp, 0x10u); /* 0x15078580: push 0x10 */
    PUSH32(esp, 0x150B10A0u); /* 0x15078582: push 0x150b10a0 */
    RECOMP_CALL(sub_1505E988); /* 0x15078587: call 0x1505e988 */
    RECOMP_FLAGS_IN();
    esi = 0xFFFFu; /* 0x1507858C: mov esi, 0xffff */
    MEM32(ebp + (-0x1C)) = esi; /* 0x15078591: mov dword ptr [ebp - 0x1c], esi */
    ebx = MEM32(ebp + 0x8); /* 0x15078594: mov ebx, dword ptr [ebp + 8] */
    /* test ebx, ebx */ /* 0x15078597: test ebx, ebx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ebx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_150785C7; /* 0x15078599: jne 0x150785c7 */
L_1507859B:
    RECOMP_CALL(sub_15036430); /* 0x1507859B: call 0x15036430 */
    RECOMP_FLAGS_IN();
    MEM32(eax) = 0x16u; /* 0x150785A0: mov dword ptr [eax], 0x16 */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x150785A6: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, eax); /* 0x150785A8: push eax */
    PUSH32(esp, eax); /* 0x150785A9: push eax */
    PUSH32(esp, eax); /* 0x150785AA: push eax */
    PUSH32(esp, eax); /* 0x150785AB: push eax */
    PUSH32(esp, eax); /* 0x150785AC: push eax */
    RECOMP_CALL(sub_1505A110); /* 0x150785AD: call 0x1505a110 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x14u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x14u; /* 0x150785B2: add esp, 0x14 */
    _flag_k = FK_ADD;
L_150785B5:
    eax = esi; /* 0x150785B5: mov eax, esi */
    ecx = MEM32(ebp + (-0x10)); /* 0x150785B7: mov ecx, dword ptr [ebp - 0x10] */
    MEM32(FS_BASE + (0)) = ecx; /* 0x150785BA: mov dword ptr fs:[0], ecx */
    ecx = POP32_VAL(esp); /* 0x150785C1: pop ecx */
    edi = POP32_VAL(esp); /* 0x150785C2: pop edi */
    esi = POP32_VAL(esp); /* 0x150785C3: pop esi */
    ebx = POP32_VAL(esp); /* 0x150785C4: pop ebx */
    esp = ebp; ebp = POP32_VAL(esp); /* 0x150785C5: leave  */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x150785C6: ret  */
L_150785C7:
    edi = 0x150BC620u; /* 0x150785C7: mov edi, 0x150bc620 */
    PUSH32(esp, edi); /* 0x150785CC: push edi */
    PUSH32(esp, 1); /* 0x150785CD: push 1 */
    RECOMP_CALL(sub_1506A98D); /* 0x150785CF: call 0x1506a98d */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x150785D4: pop ecx */
    ecx = POP32_VAL(esp); /* 0x150785D5: pop ecx */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x4))); _flag_b = (uint32_t)(0);
    MEM32(ebp + (-0x4)) = MEM32(ebp + (-0x4)) & 0; /* 0x150785D6: and dword ptr [ebp - 4], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, edi); /* 0x150785DA: push edi */
    RECOMP_CALL(sub_15083DAF); /* 0x150785DB: call 0x15083daf */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x150785E0: pop ecx */
    MEM32(ebp + (-0x20)) = eax; /* 0x150785E1: mov dword ptr [ebp - 0x20], eax */
L_150785E4:
    ecx = (uint32_t)MEM16(ebx); /* 0x150785E4: movzx ecx, word ptr [ebx] */
    PUSH32(esp, edi); /* 0x150785E7: push edi */
    /* test LO16(ecx), LO16(ecx) */ /* 0x150785E8: test cx, cx */
    _flag_a = (uint32_t)(LO16(ecx)) << 16; _flag_b = (uint32_t)(LO16(ecx)) << 16;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 16);
    if (TEST_Z(_flag_a, _flag_b)) goto L_15078602; /* 0x150785EB: je 0x15078602 */
L_150785ED:
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ebx = ebx + 2; /* 0x150785ED: add ebx, 2 */
    _flag_k = FK_ADD;
    MEM32(ebp + 0x8) = ebx; /* 0x150785F0: mov dword ptr [ebp + 8], ebx */
    PUSH32(esp, ecx); /* 0x150785F3: push ecx */
    RECOMP_CALL(sub_1507C82D); /* 0x150785F4: call 0x1507c82d */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x150785F9: pop ecx */
    ecx = POP32_VAL(esp); /* 0x150785FA: pop ecx */
    /* cmp LO16(eax), LO16(esi) */ /* 0x150785FB: cmp ax, si */
    _flag_a = (uint32_t)(LO16(eax)) << 16; _flag_b = (uint32_t)(LO16(esi)) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_15078618; /* 0x150785FE: je 0x15078618 */
L_15078600:
    RECOMP_BACKEDGE();
    goto L_150785E4; /* 0x15078600: jmp 0x150785e4 */
L_15078602:
    PUSH32(esp, 0xAu); /* 0x15078602: push 0xa */
    RECOMP_CALL(sub_1507C82D); /* 0x15078604: call 0x1507c82d */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x15078609: pop ecx */
    ecx = POP32_VAL(esp); /* 0x1507860A: pop ecx */
    ecx = esi; /* 0x1507860B: mov ecx, esi */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edx = 0; /* 0x1507860D: xor edx, edx */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp LO16(eax), LO16(ecx) */ /* 0x1507860F: cmp ax, cx */
    _flag_a = (uint32_t)(LO16(eax)) << 16; _flag_b = (uint32_t)(LO16(ecx)) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    if (CMP_NE(_flag_a, _flag_b)) { esi = edx; } /* 0x15078612: cmovne esi, edx */
    MEM32(ebp + (-0x1C)) = esi; /* 0x15078615: mov dword ptr [ebp - 0x1c], esi */
L_15078618:
    PUSH32(esp, edi); /* 0x15078618: push edi */
    PUSH32(esp, MEM32(ebp + (-0x20))); /* 0x15078619: push dword ptr [ebp - 0x20] */
    RECOMP_CALL(sub_15083D76); /* 0x1507861C: call 0x15083d76 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x15078621: pop ecx */
    ecx = POP32_VAL(esp); /* 0x15078622: pop ecx */
    MEM32(ebp + (-0x4)) = 0xFFFFFFFEu; /* 0x15078623: mov dword ptr [ebp - 4], 0xfffffffe */
    RECOMP_CALL(sub_15078639); /* 0x1507862A: call 0x15078639 */
    RECOMP_FLAGS_IN();
    RECOMP_BACKEDGE();
    goto L_150785B5; /* 0x1507862F: jmp 0x150785b5 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    RECOMP_REGS_OUT();
}

void sub_15078639(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x15078639u);

L_15078639:
    PUSH32(esp, edi); /* 0x15078639: push edi */
    PUSH32(esp, 1); /* 0x1507863A: push 1 */
    RECOMP_CALL(sub_1506AA07); /* 0x1507863C: call 0x1506aa07 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x15078641: pop ecx */
    ecx = POP32_VAL(esp); /* 0x15078642: pop ecx */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x15078643: ret  */
    RECOMP_REGS_OUT();
}

void sub_15078660(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x15078660u);

L_15078660:
    PUSH32(esp, 0x10u); /* 0x15078660: push 0x10 */
    PUSH32(esp, 0x150B10C0u); /* 0x15078662: push 0x150b10c0 */
    RECOMP_CALL(sub_1505E988); /* 0x15078667: call 0x1505e988 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edi = 0; /* 0x1507866C: xor edi, edi */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x1C)) = edi; /* 0x1507866E: mov dword ptr [ebp - 0x1c], edi */
    PUSH32(esp, 1); /* 0x15078671: push 1 */
    RECOMP_CALL(sub_15068D80); /* 0x15078673: call 0x15068d80 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x15078678: pop ecx */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x4))); _flag_b = (uint32_t)(edi);
    MEM32(ebp + (-0x4)) = MEM32(ebp + (-0x4)) & edi; /* 0x15078679: and dword ptr [ebp - 4], edi */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    esi = 0; /* 0x1507867C: xor esi, esi */
    _cf = 0;
    _flag_k = FK_TEST;
L_1507867E:
    MEM32(ebp + (-0x20)) = esi; /* 0x1507867E: mov dword ptr [ebp - 0x20], esi */
    /* cmp esi, MEM32(0x150BD680) */ /* 0x15078681: cmp esi, dword ptr [0x150bd680] */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(MEM32(0x150BD680));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_GE(_flag_a, _flag_b)) goto L_150786ED; /* 0x15078687: jge 0x150786ed */
L_15078689:
    eax = MEM32(0x150BFCE0); /* 0x15078689: mov eax, dword ptr [0x150bfce0] */
    eax = MEM32(eax + esi * 4); /* 0x1507868E: mov eax, dword ptr [eax + esi*4] */
    /* test eax, eax */ /* 0x15078691: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_150786D3; /* 0x15078693: je 0x150786d3 */
L_15078695:
    /* test MEM8(eax + 0xC), 0x83u */ /* 0x15078695: test byte ptr [eax + 0xc], 0x83 */
    _flag_a = (uint32_t)(MEM8(eax + 0xC)) << 24; _flag_b = (uint32_t)(0x83u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_150786D3; /* 0x15078699: je 0x150786d3 */
L_1507869B:
    PUSH32(esp, eax); /* 0x1507869B: push eax */
    PUSH32(esp, esi); /* 0x1507869C: push esi */
    RECOMP_CALL(sub_1506A98D); /* 0x1507869D: call 0x1506a98d */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x150786A2: pop ecx */
    ecx = POP32_VAL(esp); /* 0x150786A3: pop ecx */
    MEM32(ebp + (-0x4)) = 1; /* 0x150786A4: mov dword ptr [ebp - 4], 1 */
    eax = MEM32(0x150BFCE0); /* 0x150786AB: mov eax, dword ptr [0x150bfce0] */
    eax = MEM32(eax + esi * 4); /* 0x150786B0: mov eax, dword ptr [eax + esi*4] */
    /* test MEM8(eax + 0xC), 0x83u */ /* 0x150786B3: test byte ptr [eax + 0xc], 0x83 */
    _flag_a = (uint32_t)(MEM8(eax + 0xC)) << 24; _flag_b = (uint32_t)(0x83u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_150786CA; /* 0x150786B7: je 0x150786ca */
L_150786B9:
    /* cmp MEM32(eax + 0x1C), 0 */ /* 0x150786B9: cmp dword ptr [eax + 0x1c], 0 */
    _flag_a = (uint32_t)(MEM32(eax + 0x1C)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_150786CA; /* 0x150786BD: je 0x150786ca */
L_150786BF:
    PUSH32(esp, eax); /* 0x150786BF: push eax */
    RECOMP_CALL(sub_1507BD93); /* 0x150786C0: call 0x1507bd93 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x150786C5: pop ecx */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(1);
    edi = edi + 1; /* 0x150786C6: inc edi */
    _flag_k = FK_INC;
    MEM32(ebp + (-0x1C)) = edi; /* 0x150786C7: mov dword ptr [ebp - 0x1c], edi */
L_150786CA:
    _flag_a = (uint32_t)(MEM32(ebp + (-0x4))); _flag_b = (uint32_t)(0);
    MEM32(ebp + (-0x4)) = MEM32(ebp + (-0x4)) & 0; /* 0x150786CA: and dword ptr [ebp - 4], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_150786DC); /* 0x150786CE: call 0x150786dc */
    RECOMP_FLAGS_IN();
L_150786D3:
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi + 1; /* 0x150786D3: inc esi */
    _flag_k = FK_INC;
    RECOMP_BACKEDGE();
    goto L_1507867E; /* 0x150786D4: jmp 0x1507867e */
L_150786ED:
    MEM32(ebp + (-0x4)) = 0xFFFFFFFEu; /* 0x150786ED: mov dword ptr [ebp - 4], 0xfffffffe */
    RECOMP_CALL(sub_1507870E); /* 0x150786F4: call 0x1507870e */
    RECOMP_FLAGS_IN();
    eax = edi; /* 0x150786F9: mov eax, edi */
    ecx = MEM32(ebp + (-0x10)); /* 0x150786FB: mov ecx, dword ptr [ebp - 0x10] */
    MEM32(FS_BASE + (0)) = ecx; /* 0x150786FE: mov dword ptr fs:[0], ecx */
    ecx = POP32_VAL(esp); /* 0x15078705: pop ecx */
    edi = POP32_VAL(esp); /* 0x15078706: pop edi */
    esi = POP32_VAL(esp); /* 0x15078707: pop esi */
    ebx = POP32_VAL(esp); /* 0x15078708: pop ebx */
    esp = ebp; ebp = POP32_VAL(esp); /* 0x15078709: leave  */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1507870A: ret  */
    RECOMP_REGS_OUT();
}

void sub_150786DC(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x150786DCu);

L_150786DC:
    eax = MEM32(0x150BFCE0); /* 0x150786DC: mov eax, dword ptr [0x150bfce0] */
    PUSH32(esp, MEM32(eax + esi * 4)); /* 0x150786E1: push dword ptr [eax + esi*4] */
    PUSH32(esp, esi); /* 0x150786E4: push esi */
    RECOMP_CALL(sub_1506AA07); /* 0x150786E5: call 0x1506aa07 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x150786EA: pop ecx */
    ecx = POP32_VAL(esp); /* 0x150786EB: pop ecx */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x150786EC: ret  */
    RECOMP_REGS_OUT();
}

void sub_1507870E(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1507870Eu);

L_1507870E:
    PUSH32(esp, 1); /* 0x1507870E: push 1 */
    RECOMP_CALL(sub_15068F50); /* 0x15078710: call 0x15068f50 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x15078715: pop ecx */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x15078716: ret  */
    RECOMP_REGS_OUT();
}

void sub_15078720(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x15078720u);

L_15078720:
    edi = edi; /* 0x15078720: mov edi, edi */
    PUSH32(esp, ebp); /* 0x15078722: push ebp */
    ebp = esp; /* 0x15078723: mov ebp, esp */
    eax = ebp + 0x10; /* 0x15078725: lea eax, [ebp + 0x10] */
    PUSH32(esp, eax); /* 0x15078728: push eax */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x15078729: push dword ptr [ebp + 0xc] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x1507872C: push dword ptr [ebp + 8] */
    PUSH32(esp, 0x15084110u); /* 0x1507872F: push 0x15084110 */
    RECOMP_CALL(sub_150787A3); /* 0x15078734: call 0x150787a3 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x10u; /* 0x15078739: add esp, 0x10 */
    _flag_k = FK_ADD;
    ebp = POP32_VAL(esp); /* 0x1507873C: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1507873D: ret  */
    RECOMP_REGS_OUT();
}

void sub_15078750(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x15078750u);

L_15078750:
    edi = edi; /* 0x15078750: mov edi, edi */
    PUSH32(esp, ebp); /* 0x15078752: push ebp */
    ebp = esp; /* 0x15078753: mov ebp, esp */
    eax = ebp + 0x10; /* 0x15078755: lea eax, [ebp + 0x10] */
    PUSH32(esp, eax); /* 0x15078758: push eax */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x15078759: push dword ptr [ebp + 0xc] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x1507875C: push dword ptr [ebp + 8] */
    PUSH32(esp, 0x15085400u); /* 0x1507875F: push 0x15085400 */
    RECOMP_CALL(sub_150787A3); /* 0x15078764: call 0x150787a3 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x10u; /* 0x15078769: add esp, 0x10 */
    _flag_k = FK_ADD;
    ebp = POP32_VAL(esp); /* 0x1507876C: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1507876D: ret  */
    RECOMP_REGS_OUT();
}

void sub_15078780(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x15078780u);

L_15078780:
    edi = edi; /* 0x15078780: mov edi, edi */
    PUSH32(esp, ebp); /* 0x15078782: push ebp */
    ebp = esp; /* 0x15078783: mov ebp, esp */
    eax = ebp + 0xC; /* 0x15078785: lea eax, [ebp + 0xc] */
    PUSH32(esp, eax); /* 0x15078788: push eax */
    PUSH32(esp, 0); /* 0x15078789: push 0 */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x1507878B: push dword ptr [ebp + 8] */
    PUSH32(esp, 0x15084110u); /* 0x1507878E: push 0x15084110 */
    RECOMP_CALL(sub_150787A3); /* 0x15078793: call 0x150787a3 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x10u; /* 0x15078798: add esp, 0x10 */
    _flag_k = FK_ADD;
    ebp = POP32_VAL(esp); /* 0x1507879B: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1507879C: ret  */
    RECOMP_REGS_OUT();
}

void sub_150787A3(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x150787A3u);

L_150787A3:
    PUSH32(esp, 0xCu); /* 0x150787A3: push 0xc */
    PUSH32(esp, 0x150B10E8u); /* 0x150787A5: push 0x150b10e8 */
    RECOMP_CALL(sub_1505E988); /* 0x150787AA: call 0x1505e988 */
    RECOMP_FLAGS_IN();
    /* cmp MEM32(ebp + 0xC), 0 */ /* 0x150787AF: cmp dword ptr [ebp + 0xc], 0 */
    _flag_a = (uint32_t)(MEM32(ebp + 0xC)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_150787D4; /* 0x150787B3: jne 0x150787d4 */
L_150787B5:
    RECOMP_CALL(sub_15036430); /* 0x150787B5: call 0x15036430 */
    RECOMP_FLAGS_IN();
    MEM32(eax) = 0x16u; /* 0x150787BA: mov dword ptr [eax], 0x16 */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    esi = 0; /* 0x150787C0: xor esi, esi */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, esi); /* 0x150787C2: push esi */
    PUSH32(esp, esi); /* 0x150787C3: push esi */
    PUSH32(esp, esi); /* 0x150787C4: push esi */
    PUSH32(esp, esi); /* 0x150787C5: push esi */
    PUSH32(esp, esi); /* 0x150787C6: push esi */
    RECOMP_CALL(sub_1505A110); /* 0x150787C7: call 0x1505a110 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x14u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x14u; /* 0x150787CC: add esp, 0x14 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)((eax | 0xFFFFFFFFu)); _flag_b = (uint32_t)((eax | 0xFFFFFFFFu));
    eax = eax | 0xFFFFFFFFu; /* 0x150787CF: or eax, 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_15078813; /* 0x150787D2: jmp 0x15078813 */
L_150787D4:
    edi = 0x150BC600u; /* 0x150787D4: mov edi, 0x150bc600 */
    PUSH32(esp, edi); /* 0x150787D9: push edi */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    esi = 0; /* 0x150787DA: xor esi, esi */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, esi); /* 0x150787DC: push esi */
    RECOMP_CALL(sub_1506A98D); /* 0x150787DD: call 0x1506a98d */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x150787E2: pop ecx */
    ecx = POP32_VAL(esp); /* 0x150787E3: pop ecx */
    MEM32(ebp + (-0x4)) = esi; /* 0x150787E4: mov dword ptr [ebp - 4], esi */
    PUSH32(esp, MEM32(ebp + 0x14)); /* 0x150787E7: push dword ptr [ebp + 0x14] */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x150787EA: push dword ptr [ebp + 0x10] */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x150787ED: push dword ptr [ebp + 0xc] */
    PUSH32(esp, edi); /* 0x150787F0: push edi */
    ecx = MEM32(ebp + 0x8); /* 0x150787F1: mov ecx, dword ptr [ebp + 8] */
    RECOMP_ICALL(MEM32(0x150C02B0)); /* 0x150787F4: call dword ptr [0x150c02b0] */
    RECOMP_FLAGS_IN();
    RECOMP_ICALL(MEM32(ebp + 0x8)); /* 0x150787FA: call dword ptr [ebp + 8] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x10u; /* 0x150787FD: add esp, 0x10 */
    _flag_k = FK_ADD;
    ebx = eax; /* 0x15078800: mov ebx, eax */
    MEM32(ebp + (-0x1C)) = ebx; /* 0x15078802: mov dword ptr [ebp - 0x1c], ebx */
    MEM32(ebp + (-0x4)) = 0xFFFFFFFEu; /* 0x15078805: mov dword ptr [ebp - 4], 0xfffffffe */
    RECOMP_CALL(sub_1507882D); /* 0x1507880C: call 0x1507882d */
    RECOMP_FLAGS_IN();
    eax = ebx; /* 0x15078811: mov eax, ebx */
L_15078813:
    ecx = MEM32(ebp + (-0x10)); /* 0x15078813: mov ecx, dword ptr [ebp - 0x10] */
    MEM32(FS_BASE + (0)) = ecx; /* 0x15078816: mov dword ptr fs:[0], ecx */
    ecx = POP32_VAL(esp); /* 0x1507881D: pop ecx */
    edi = POP32_VAL(esp); /* 0x1507881E: pop edi */
    esi = POP32_VAL(esp); /* 0x1507881F: pop esi */
    ebx = POP32_VAL(esp); /* 0x15078820: pop ebx */
    esp = ebp; ebp = POP32_VAL(esp); /* 0x15078821: leave  */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x15078822: ret  */
    RECOMP_REGS_OUT();
}

void sub_1507882D(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1507882Du);

L_1507882D:
    PUSH32(esp, edi); /* 0x1507882D: push edi */
    PUSH32(esp, esi); /* 0x1507882E: push esi */
    RECOMP_CALL(sub_1506AA07); /* 0x1507882F: call 0x1506aa07 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x15078834: pop ecx */
    ecx = POP32_VAL(esp); /* 0x15078835: pop ecx */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x15078836: ret  */
    RECOMP_REGS_OUT();
}

void sub_15078840(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x15078840u);

L_15078840:
    edi = edi; /* 0x15078840: mov edi, edi */
    PUSH32(esp, ebp); /* 0x15078842: push ebp */
    ebp = esp; /* 0x15078843: mov ebp, esp */
    eax = ebp + 0xC; /* 0x15078845: lea eax, [ebp + 0xc] */
    PUSH32(esp, eax); /* 0x15078848: push eax */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x15078849: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_15079CB0); /* 0x1507884C: call 0x15079cb0 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x15078851: pop ecx */
    ecx = POP32_VAL(esp); /* 0x15078852: pop ecx */
    ebp = POP32_VAL(esp); /* 0x15078853: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x15078854: ret  */
    RECOMP_REGS_OUT();
}

void sub_15078860(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x15078860u);

L_15078860:
    edi = edi; /* 0x15078860: mov edi, edi */
    PUSH32(esp, ebp); /* 0x15078862: push ebp */
    ebp = esp; /* 0x15078863: mov ebp, esp */
    eax = ebp + 0x10; /* 0x15078865: lea eax, [ebp + 0x10] */
    PUSH32(esp, eax); /* 0x15078868: push eax */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x15078869: push dword ptr [ebp + 0xc] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x1507886C: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_15079D40); /* 0x1507886F: call 0x15079d40 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x15078874: add esp, 0xc */
    _flag_k = FK_ADD;
    ebp = POP32_VAL(esp); /* 0x15078877: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x15078878: ret  */
    RECOMP_REGS_OUT();
}

void sub_15078880(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x15078880u);

L_15078880:
    edi = edi; /* 0x15078880: mov edi, edi */
    PUSH32(esp, ebp); /* 0x15078882: push ebp */
    ebp = esp; /* 0x15078883: mov ebp, esp */
    eax = ebp + 0x10; /* 0x15078885: lea eax, [ebp + 0x10] */
    PUSH32(esp, eax); /* 0x15078888: push eax */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x15078889: push dword ptr [ebp + 0xc] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x1507888C: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_15079D70); /* 0x1507888F: call 0x15079d70 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x15078894: add esp, 0xc */
    _flag_k = FK_ADD;
    ebp = POP32_VAL(esp); /* 0x15078897: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x15078898: ret  */
    RECOMP_REGS_OUT();
}

void sub_150788A0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x150788A0u);

L_150788A0:
    edi = edi; /* 0x150788A0: mov edi, edi */
    PUSH32(esp, ebp); /* 0x150788A2: push ebp */
    ebp = esp; /* 0x150788A3: mov ebp, esp */
    eax = ebp + 0x1C; /* 0x150788A5: lea eax, [ebp + 0x1c] */
    PUSH32(esp, eax); /* 0x150788A8: push eax */
    PUSH32(esp, MEM32(ebp + 0x18)); /* 0x150788A9: push dword ptr [ebp + 0x18] */
    PUSH32(esp, MEM32(ebp + 0x14)); /* 0x150788AC: push dword ptr [ebp + 0x14] */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x150788AF: push dword ptr [ebp + 0x10] */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x150788B2: push dword ptr [ebp + 0xc] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x150788B5: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_1507A1F0); /* 0x150788B8: call 0x1507a1f0 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x18u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x18u; /* 0x150788BD: add esp, 0x18 */
    _flag_k = FK_ADD;
    ebp = POP32_VAL(esp); /* 0x150788C0: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x150788C1: ret  */
    RECOMP_REGS_OUT();
}

void sub_150788D0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x150788D0u);

L_150788D0:
    edi = edi; /* 0x150788D0: mov edi, edi */
    PUSH32(esp, ebp); /* 0x150788D2: push ebp */
    ebp = esp; /* 0x150788D3: mov ebp, esp */
    eax = ebp + 0x14; /* 0x150788D5: lea eax, [ebp + 0x14] */
    PUSH32(esp, eax); /* 0x150788D8: push eax */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x150788D9: push dword ptr [ebp + 0x10] */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x150788DC: push dword ptr [ebp + 0xc] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x150788DF: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_15079DA0); /* 0x150788E2: call 0x15079da0 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x10u; /* 0x150788E7: add esp, 0x10 */
    _flag_k = FK_ADD;
    ebp = POP32_VAL(esp); /* 0x150788EA: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x150788EB: ret  */
    RECOMP_REGS_OUT();
}

void sub_15078900(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x15078900u);

L_15078900:
    edi = edi; /* 0x15078900: mov edi, edi */
    PUSH32(esp, ebp); /* 0x15078902: push ebp */
    ebp = esp; /* 0x15078903: mov ebp, esp */
    eax = ebp + 0x18; /* 0x15078905: lea eax, [ebp + 0x18] */
    PUSH32(esp, eax); /* 0x15078908: push eax */
    PUSH32(esp, MEM32(ebp + 0x14)); /* 0x15078909: push dword ptr [ebp + 0x14] */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x1507890C: push dword ptr [ebp + 0x10] */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x1507890F: push dword ptr [ebp + 0xc] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x15078912: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_1507A340); /* 0x15078915: call 0x1507a340 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x14u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x14u; /* 0x1507891A: add esp, 0x14 */
    _flag_k = FK_ADD;
    ebp = POP32_VAL(esp); /* 0x1507891D: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1507891E: ret  */
    RECOMP_REGS_OUT();
}

void sub_15078930(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x15078930u);

L_15078930:
    edi = edi; /* 0x15078930: mov edi, edi */
    PUSH32(esp, ebp); /* 0x15078932: push ebp */
    ebp = esp; /* 0x15078933: mov ebp, esp */
    eax = ebp + 0x18; /* 0x15078935: lea eax, [ebp + 0x18] */
    PUSH32(esp, eax); /* 0x15078938: push eax */
    PUSH32(esp, MEM32(ebp + 0x14)); /* 0x15078939: push dword ptr [ebp + 0x14] */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x1507893C: push dword ptr [ebp + 0x10] */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x1507893F: push dword ptr [ebp + 0xc] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x15078942: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_1507A380); /* 0x15078945: call 0x1507a380 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x14u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x14u; /* 0x1507894A: add esp, 0x14 */
    _flag_k = FK_ADD;
    ebp = POP32_VAL(esp); /* 0x1507894D: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1507894E: ret  */
    RECOMP_REGS_OUT();
}

void sub_15078960(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x15078960u);

L_15078960:
    edi = edi; /* 0x15078960: mov edi, edi */
    PUSH32(esp, ebp); /* 0x15078962: push ebp */
    ebp = esp; /* 0x15078963: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x20u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x20u; /* 0x15078965: sub esp, 0x20 */
    _flag_k = FK_CMP;
    /* cmp MEM32(ebp + 0xC), 0 */ /* 0x15078968: cmp dword ptr [ebp + 0xc], 0 */
    _flag_a = (uint32_t)(MEM32(ebp + 0xC)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    PUSH32(esp, ebx); /* 0x1507896C: push ebx */
    if (CMP_NE(_flag_a, _flag_b)) goto L_1507898E; /* 0x1507896D: jne 0x1507898e */
L_1507896F:
    RECOMP_CALL(sub_15036430); /* 0x1507896F: call 0x15036430 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ebx = 0; /* 0x15078974: xor ebx, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, ebx); /* 0x15078976: push ebx */
    PUSH32(esp, ebx); /* 0x15078977: push ebx */
    PUSH32(esp, ebx); /* 0x15078978: push ebx */
    PUSH32(esp, ebx); /* 0x15078979: push ebx */
    PUSH32(esp, ebx); /* 0x1507897A: push ebx */
    MEM32(eax) = 0x16u; /* 0x1507897B: mov dword ptr [eax], 0x16 */
    RECOMP_CALL(sub_1505A110); /* 0x15078981: call 0x1505a110 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x14u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x14u; /* 0x15078986: add esp, 0x14 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)((eax | 0xFFFFFFFFu)); _flag_b = (uint32_t)((eax | 0xFFFFFFFFu));
    eax = eax | 0xFFFFFFFFu; /* 0x15078989: or eax, 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_150789DE; /* 0x1507898C: jmp 0x150789de */
L_1507898E:
    eax = MEM32(ebp + 0x8); /* 0x1507898E: mov eax, dword ptr [ebp + 8] */
    /* test eax, eax */ /* 0x15078991: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_Z(_flag_a, _flag_b)) goto L_1507896F; /* 0x15078993: je 0x1507896f */
L_15078995:
    PUSH32(esp, esi); /* 0x15078995: push esi */
    MEM32(ebp + (-0x18)) = eax; /* 0x15078996: mov dword ptr [ebp - 0x18], eax */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ebx = 0; /* 0x15078999: xor ebx, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x20)) = eax; /* 0x1507899B: mov dword ptr [ebp - 0x20], eax */
    eax = ebp + 0x10; /* 0x1507899E: lea eax, [ebp + 0x10] */
    PUSH32(esp, eax); /* 0x150789A1: push eax */
    PUSH32(esp, ebx); /* 0x150789A2: push ebx */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x150789A3: push dword ptr [ebp + 0xc] */
    eax = ebp + (-0x20); /* 0x150789A6: lea eax, [ebp - 0x20] */
    MEM32(ebp + (-0x1C)) = 0x7FFFFFFFu; /* 0x150789A9: mov dword ptr [ebp - 0x1c], 0x7fffffff */
    PUSH32(esp, eax); /* 0x150789B0: push eax */
    MEM32(ebp + (-0x14)) = 0x42u; /* 0x150789B1: mov dword ptr [ebp - 0x14], 0x42 */
    RECOMP_CALL(sub_1507E600); /* 0x150789B8: call 0x1507e600 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x10u; /* 0x150789BD: add esp, 0x10 */
    _flag_k = FK_ADD;
    esi = eax; /* 0x150789C0: mov esi, eax */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x1C))); _flag_b = (uint32_t)(1);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    MEM32(ebp + (-0x1C)) = MEM32(ebp + (-0x1C)) - 1; /* 0x150789C2: sub dword ptr [ebp - 0x1c], 1 */
    _flag_k = FK_CMP;
    if (/* sub result */ CMP_S(_flag_a, _flag_b)) goto L_150789CF; /* 0x150789C6: js 0x150789cf */
L_150789C8:
    ecx = MEM32(ebp + (-0x20)); /* 0x150789C8: mov ecx, dword ptr [ebp - 0x20] */
    MEM8(ecx) = (uint8_t)(LO8(ebx)); /* 0x150789CB: mov byte ptr [ecx], bl */
    goto L_150789DB; /* 0x150789CD: jmp 0x150789db */
L_150789CF:
    eax = ebp + (-0x20); /* 0x150789CF: lea eax, [ebp - 0x20] */
    PUSH32(esp, eax); /* 0x150789D2: push eax */
    PUSH32(esp, ebx); /* 0x150789D3: push ebx */
    RECOMP_CALL(sub_15076AD0); /* 0x150789D4: call 0x15076ad0 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x150789D9: pop ecx */
    ecx = POP32_VAL(esp); /* 0x150789DA: pop ecx */
L_150789DB:
    eax = esi; /* 0x150789DB: mov eax, esi */
    esi = POP32_VAL(esp); /* 0x150789DD: pop esi */
L_150789DE:
    ebx = POP32_VAL(esp); /* 0x150789DE: pop ebx */
    esp = ebp; ebp = POP32_VAL(esp); /* 0x150789DF: leave  */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x150789E0: ret  */
    RECOMP_REGS_OUT();
}

void sub_150789F0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x150789F0u);

L_150789F0:
    edi = edi; /* 0x150789F0: mov edi, edi */
    PUSH32(esp, ebp); /* 0x150789F2: push ebp */
    ebp = esp; /* 0x150789F3: mov ebp, esp */
    eax = ebp + 0xC; /* 0x150789F5: lea eax, [ebp + 0xc] */
    PUSH32(esp, eax); /* 0x150789F8: push eax */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x150789F9: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_15079E50); /* 0x150789FC: call 0x15079e50 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x15078A01: pop ecx */
    ecx = POP32_VAL(esp); /* 0x15078A02: pop ecx */
    ebp = POP32_VAL(esp); /* 0x15078A03: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x15078A04: ret  */
    RECOMP_REGS_OUT();
}

void sub_15078A10(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x15078A10u);

L_15078A10:
    edi = edi; /* 0x15078A10: mov edi, edi */
    PUSH32(esp, ebp); /* 0x15078A12: push ebp */
    ebp = esp; /* 0x15078A13: mov ebp, esp */
    eax = ebp + 0x10; /* 0x15078A15: lea eax, [ebp + 0x10] */
    PUSH32(esp, eax); /* 0x15078A18: push eax */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x15078A19: push dword ptr [ebp + 0xc] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x15078A1C: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_15079E80); /* 0x15078A1F: call 0x15079e80 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x15078A24: add esp, 0xc */
    _flag_k = FK_ADD;
    ebp = POP32_VAL(esp); /* 0x15078A27: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x15078A28: ret  */
    RECOMP_REGS_OUT();
}

void sub_15078A30(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x15078A30u);

L_15078A30:
    edi = edi; /* 0x15078A30: mov edi, edi */
    PUSH32(esp, ebp); /* 0x15078A32: push ebp */
    ebp = esp; /* 0x15078A33: mov ebp, esp */
    eax = ebp + 0x10; /* 0x15078A35: lea eax, [ebp + 0x10] */
    PUSH32(esp, eax); /* 0x15078A38: push eax */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x15078A39: push dword ptr [ebp + 0xc] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x15078A3C: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_15079EB0); /* 0x15078A3F: call 0x15079eb0 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x15078A44: add esp, 0xc */
    _flag_k = FK_ADD;
    ebp = POP32_VAL(esp); /* 0x15078A47: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x15078A48: ret  */
    RECOMP_REGS_OUT();
}

void sub_15078A50(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x15078A50u);

L_15078A50:
    edi = edi; /* 0x15078A50: mov edi, edi */
    PUSH32(esp, ebp); /* 0x15078A52: push ebp */
    ebp = esp; /* 0x15078A53: mov ebp, esp */
    eax = ebp + 0x1C; /* 0x15078A55: lea eax, [ebp + 0x1c] */
    PUSH32(esp, eax); /* 0x15078A58: push eax */
    PUSH32(esp, MEM32(ebp + 0x18)); /* 0x15078A59: push dword ptr [ebp + 0x18] */
    PUSH32(esp, MEM32(ebp + 0x14)); /* 0x15078A5C: push dword ptr [ebp + 0x14] */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x15078A5F: push dword ptr [ebp + 0x10] */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x15078A62: push dword ptr [ebp + 0xc] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x15078A65: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_1507A540); /* 0x15078A68: call 0x1507a540 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x18u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x18u; /* 0x15078A6D: add esp, 0x18 */
    _flag_k = FK_ADD;
    ebp = POP32_VAL(esp); /* 0x15078A70: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x15078A71: ret  */
    RECOMP_REGS_OUT();
}

void sub_15078A80(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x15078A80u);

L_15078A80:
    edi = edi; /* 0x15078A80: mov edi, edi */
    PUSH32(esp, ebp); /* 0x15078A82: push ebp */
    ebp = esp; /* 0x15078A83: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x20u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x20u; /* 0x15078A85: sub esp, 0x20 */
    _flag_k = FK_CMP;
    /* cmp MEM32(ebp + 0xC), 0 */ /* 0x15078A88: cmp dword ptr [ebp + 0xc], 0 */
    _flag_a = (uint32_t)(MEM32(ebp + 0xC)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    PUSH32(esp, ebx); /* 0x15078A8C: push ebx */
    if (CMP_NE(_flag_a, _flag_b)) goto L_15078AAE; /* 0x15078A8D: jne 0x15078aae */
L_15078A8F:
    RECOMP_CALL(sub_15036430); /* 0x15078A8F: call 0x15036430 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ebx = 0; /* 0x15078A94: xor ebx, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, ebx); /* 0x15078A96: push ebx */
    PUSH32(esp, ebx); /* 0x15078A97: push ebx */
    PUSH32(esp, ebx); /* 0x15078A98: push ebx */
    PUSH32(esp, ebx); /* 0x15078A99: push ebx */
    PUSH32(esp, ebx); /* 0x15078A9A: push ebx */
    MEM32(eax) = 0x16u; /* 0x15078A9B: mov dword ptr [eax], 0x16 */
    RECOMP_CALL(sub_1505A110); /* 0x15078AA1: call 0x1505a110 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x14u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x14u; /* 0x15078AA6: add esp, 0x14 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)((eax | 0xFFFFFFFFu)); _flag_b = (uint32_t)((eax | 0xFFFFFFFFu));
    eax = eax | 0xFFFFFFFFu; /* 0x15078AA9: or eax, 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_15078B1E; /* 0x15078AAC: jmp 0x15078b1e */
L_15078AAE:
    eax = MEM32(ebp + 0x8); /* 0x15078AAE: mov eax, dword ptr [ebp + 8] */
    /* test eax, eax */ /* 0x15078AB1: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_Z(_flag_a, _flag_b)) goto L_15078A8F; /* 0x15078AB3: je 0x15078a8f */
L_15078AB5:
    PUSH32(esp, esi); /* 0x15078AB5: push esi */
    MEM32(ebp + (-0x18)) = eax; /* 0x15078AB6: mov dword ptr [ebp - 0x18], eax */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ebx = 0; /* 0x15078AB9: xor ebx, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x20)) = eax; /* 0x15078ABB: mov dword ptr [ebp - 0x20], eax */
    eax = ebp + 0x10; /* 0x15078ABE: lea eax, [ebp + 0x10] */
    PUSH32(esp, eax); /* 0x15078AC1: push eax */
    PUSH32(esp, ebx); /* 0x15078AC2: push ebx */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x15078AC3: push dword ptr [ebp + 0xc] */
    eax = ebp + (-0x20); /* 0x15078AC6: lea eax, [ebp - 0x20] */
    MEM32(ebp + (-0x14)) = 0x42u; /* 0x15078AC9: mov dword ptr [ebp - 0x14], 0x42 */
    PUSH32(esp, eax); /* 0x15078AD0: push eax */
    MEM32(ebp + (-0x1C)) = 0x7FFFFFFFu; /* 0x15078AD1: mov dword ptr [ebp - 0x1c], 0x7fffffff */
    RECOMP_CALL(sub_15086A80); /* 0x15078AD8: call 0x15086a80 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x10u; /* 0x15078ADD: add esp, 0x10 */
    _flag_k = FK_ADD;
    esi = eax; /* 0x15078AE0: mov esi, eax */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x1C))); _flag_b = (uint32_t)(1);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    MEM32(ebp + (-0x1C)) = MEM32(ebp + (-0x1C)) - 1; /* 0x15078AE2: sub dword ptr [ebp - 0x1c], 1 */
    _flag_k = FK_CMP;
    if (/* sub result */ CMP_S(_flag_a, _flag_b)) goto L_15078AF6; /* 0x15078AE6: js 0x15078af6 */
L_15078AE8:
    ecx = MEM32(ebp + (-0x20)); /* 0x15078AE8: mov ecx, dword ptr [ebp - 0x20] */
    MEM8(ecx) = (uint8_t)(LO8(ebx)); /* 0x15078AEB: mov byte ptr [ecx], bl */
    ecx = MEM32(ebp + (-0x20)); /* 0x15078AED: mov ecx, dword ptr [ebp - 0x20] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx + 1; /* 0x15078AF0: inc ecx */
    _flag_k = FK_INC;
    MEM32(ebp + (-0x20)) = ecx; /* 0x15078AF1: mov dword ptr [ebp - 0x20], ecx */
    goto L_15078B05; /* 0x15078AF4: jmp 0x15078b05 */
L_15078AF6:
    eax = ebp + (-0x20); /* 0x15078AF6: lea eax, [ebp - 0x20] */
    PUSH32(esp, eax); /* 0x15078AF9: push eax */
    PUSH32(esp, ebx); /* 0x15078AFA: push ebx */
    RECOMP_CALL(sub_15076AD0); /* 0x15078AFB: call 0x15076ad0 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x15078B00: pop ecx */
    ecx = POP32_VAL(esp); /* 0x15078B01: pop ecx */
    ecx = MEM32(ebp + (-0x20)); /* 0x15078B02: mov ecx, dword ptr [ebp - 0x20] */
L_15078B05:
    _flag_a = (uint32_t)(MEM32(ebp + (-0x1C))); _flag_b = (uint32_t)(1);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    MEM32(ebp + (-0x1C)) = MEM32(ebp + (-0x1C)) - 1; /* 0x15078B05: sub dword ptr [ebp - 0x1c], 1 */
    _flag_k = FK_CMP;
    if (/* sub result */ CMP_S(_flag_a, _flag_b)) goto L_15078B0F; /* 0x15078B09: js 0x15078b0f */
L_15078B0B:
    MEM8(ecx) = (uint8_t)(LO8(ebx)); /* 0x15078B0B: mov byte ptr [ecx], bl */
    goto L_15078B1B; /* 0x15078B0D: jmp 0x15078b1b */
L_15078B0F:
    eax = ebp + (-0x20); /* 0x15078B0F: lea eax, [ebp - 0x20] */
    PUSH32(esp, eax); /* 0x15078B12: push eax */
    PUSH32(esp, ebx); /* 0x15078B13: push ebx */
    RECOMP_CALL(sub_15076AD0); /* 0x15078B14: call 0x15076ad0 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x15078B19: pop ecx */
    ecx = POP32_VAL(esp); /* 0x15078B1A: pop ecx */
L_15078B1B:
    eax = esi; /* 0x15078B1B: mov eax, esi */
    esi = POP32_VAL(esp); /* 0x15078B1D: pop esi */
L_15078B1E:
    ebx = POP32_VAL(esp); /* 0x15078B1E: pop ebx */
    esp = ebp; ebp = POP32_VAL(esp); /* 0x15078B1F: leave  */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x15078B20: ret  */
    RECOMP_REGS_OUT();
}

void sub_15078B30(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x15078B30u);

L_15078B30:
    edi = edi; /* 0x15078B30: mov edi, edi */
    PUSH32(esp, ebp); /* 0x15078B32: push ebp */
    ebp = esp; /* 0x15078B33: mov ebp, esp */
    eax = ebp + 0x18; /* 0x15078B35: lea eax, [ebp + 0x18] */
    PUSH32(esp, eax); /* 0x15078B38: push eax */
    PUSH32(esp, MEM32(ebp + 0x14)); /* 0x15078B39: push dword ptr [ebp + 0x14] */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x15078B3C: push dword ptr [ebp + 0x10] */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x15078B3F: push dword ptr [ebp + 0xc] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x15078B42: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_1507A7E0); /* 0x15078B45: call 0x1507a7e0 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x14u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x14u; /* 0x15078B4A: add esp, 0x14 */
    _flag_k = FK_ADD;
    ebp = POP32_VAL(esp); /* 0x15078B4D: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x15078B4E: ret  */
    RECOMP_REGS_OUT();
}

void sub_15078B60(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x15078B60u);

L_15078B60:
    edi = edi; /* 0x15078B60: mov edi, edi */
    PUSH32(esp, ebp); /* 0x15078B62: push ebp */
    ebp = esp; /* 0x15078B63: mov ebp, esp */
    eax = ebp + 0x18; /* 0x15078B65: lea eax, [ebp + 0x18] */
    PUSH32(esp, eax); /* 0x15078B68: push eax */
    PUSH32(esp, MEM32(ebp + 0x14)); /* 0x15078B69: push dword ptr [ebp + 0x14] */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x15078B6C: push dword ptr [ebp + 0x10] */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x15078B6F: push dword ptr [ebp + 0xc] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x15078B72: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_1507A820); /* 0x15078B75: call 0x1507a820 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x14u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x14u; /* 0x15078B7A: add esp, 0x14 */
    _flag_k = FK_ADD;
    ebp = POP32_VAL(esp); /* 0x15078B7D: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x15078B7E: ret  */
    RECOMP_REGS_OUT();
}

void sub_15078B90(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x15078B90u);

L_15078B90:
    edi = edi; /* 0x15078B90: mov edi, edi */
    PUSH32(esp, ebp); /* 0x15078B92: push ebp */
    ebp = esp; /* 0x15078B93: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x20u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x20u; /* 0x15078B95: sub esp, 0x20 */
    _flag_k = FK_CMP;
    /* cmp MEM32(ebp + 0x10), 0 */ /* 0x15078B98: cmp dword ptr [ebp + 0x10], 0 */
    _flag_a = (uint32_t)(MEM32(ebp + 0x10)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    PUSH32(esp, ebx); /* 0x15078B9C: push ebx */
    if (CMP_NE(_flag_a, _flag_b)) goto L_15078BC1; /* 0x15078B9D: jne 0x15078bc1 */
L_15078B9F:
    RECOMP_CALL(sub_15036430); /* 0x15078B9F: call 0x15036430 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ebx = 0; /* 0x15078BA4: xor ebx, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, ebx); /* 0x15078BA6: push ebx */
    PUSH32(esp, ebx); /* 0x15078BA7: push ebx */
    PUSH32(esp, ebx); /* 0x15078BA8: push ebx */
    PUSH32(esp, ebx); /* 0x15078BA9: push ebx */
    PUSH32(esp, ebx); /* 0x15078BAA: push ebx */
    MEM32(eax) = 0x16u; /* 0x15078BAB: mov dword ptr [eax], 0x16 */
    RECOMP_CALL(sub_1505A110); /* 0x15078BB1: call 0x1505a110 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x14u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x14u; /* 0x15078BB6: add esp, 0x14 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)((eax | 0xFFFFFFFFu)); _flag_b = (uint32_t)((eax | 0xFFFFFFFFu));
    eax = eax | 0xFFFFFFFFu; /* 0x15078BB9: or eax, 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_15078C45; /* 0x15078BBC: jmp 0x15078c45 */
L_15078BC1:
    eax = MEM32(ebp + 0xC); /* 0x15078BC1: mov eax, dword ptr [ebp + 0xc] */
    PUSH32(esp, esi); /* 0x15078BC4: push esi */
    esi = MEM32(ebp + 0x8); /* 0x15078BC5: mov esi, dword ptr [ebp + 8] */
    /* test eax, eax */ /* 0x15078BC8: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_15078BFB; /* 0x15078BCA: je 0x15078bfb */
L_15078BCC:
    /* test esi, esi */ /* 0x15078BCC: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_15078BEF; /* 0x15078BCE: jne 0x15078bef */
L_15078BD0:
    RECOMP_CALL(sub_15036430); /* 0x15078BD0: call 0x15036430 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ebx = 0; /* 0x15078BD5: xor ebx, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, ebx); /* 0x15078BD7: push ebx */
    PUSH32(esp, ebx); /* 0x15078BD8: push ebx */
    PUSH32(esp, ebx); /* 0x15078BD9: push ebx */
    PUSH32(esp, ebx); /* 0x15078BDA: push ebx */
    PUSH32(esp, ebx); /* 0x15078BDB: push ebx */
    MEM32(eax) = 0x16u; /* 0x15078BDC: mov dword ptr [eax], 0x16 */
    RECOMP_CALL(sub_1505A110); /* 0x15078BE2: call 0x1505a110 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x14u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x14u; /* 0x15078BE7: add esp, 0x14 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)((eax | 0xFFFFFFFFu)); _flag_b = (uint32_t)((eax | 0xFFFFFFFFu));
    eax = eax | 0xFFFFFFFFu; /* 0x15078BEA: or eax, 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_15078C44; /* 0x15078BED: jmp 0x15078c44 */
L_15078BEF:
    ecx = 0x7FFFFFFFu; /* 0x15078BEF: mov ecx, 0x7fffffff */
    MEM32(ebp + (-0x1C)) = ecx; /* 0x15078BF4: mov dword ptr [ebp - 0x1c], ecx */
    /* cmp eax, ecx */ /* 0x15078BF7: cmp eax, ecx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_A(_flag_a, _flag_b)) goto L_15078BFE; /* 0x15078BF9: ja 0x15078bfe */
L_15078BFB:
    MEM32(ebp + (-0x1C)) = eax; /* 0x15078BFB: mov dword ptr [ebp - 0x1c], eax */
L_15078BFE:
    PUSH32(esp, edi); /* 0x15078BFE: push edi */
    eax = ebp + 0x14; /* 0x15078BFF: lea eax, [ebp + 0x14] */
    MEM32(ebp + (-0x14)) = 0x42u; /* 0x15078C02: mov dword ptr [ebp - 0x14], 0x42 */
    PUSH32(esp, eax); /* 0x15078C09: push eax */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ebx = 0; /* 0x15078C0A: xor ebx, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x18)) = esi; /* 0x15078C0C: mov dword ptr [ebp - 0x18], esi */
    PUSH32(esp, ebx); /* 0x15078C0F: push ebx */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x15078C10: push dword ptr [ebp + 0x10] */
    eax = ebp + (-0x20); /* 0x15078C13: lea eax, [ebp - 0x20] */
    MEM32(ebp + (-0x20)) = esi; /* 0x15078C16: mov dword ptr [ebp - 0x20], esi */
    PUSH32(esp, eax); /* 0x15078C19: push eax */
    RECOMP_CALL(sub_1507E600); /* 0x15078C1A: call 0x1507e600 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x10u; /* 0x15078C1F: add esp, 0x10 */
    _flag_k = FK_ADD;
    edi = eax; /* 0x15078C22: mov edi, eax */
    /* test esi, esi */ /* 0x15078C24: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_15078C41; /* 0x15078C26: je 0x15078c41 */
L_15078C28:
    _flag_a = (uint32_t)(MEM32(ebp + (-0x1C))); _flag_b = (uint32_t)(1);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    MEM32(ebp + (-0x1C)) = MEM32(ebp + (-0x1C)) - 1; /* 0x15078C28: sub dword ptr [ebp - 0x1c], 1 */
    _flag_k = FK_CMP;
    if (/* sub result */ CMP_S(_flag_a, _flag_b)) goto L_15078C35; /* 0x15078C2C: js 0x15078c35 */
L_15078C2E:
    ecx = MEM32(ebp + (-0x20)); /* 0x15078C2E: mov ecx, dword ptr [ebp - 0x20] */
    MEM8(ecx) = (uint8_t)(LO8(ebx)); /* 0x15078C31: mov byte ptr [ecx], bl */
    goto L_15078C41; /* 0x15078C33: jmp 0x15078c41 */
L_15078C35:
    eax = ebp + (-0x20); /* 0x15078C35: lea eax, [ebp - 0x20] */
    PUSH32(esp, eax); /* 0x15078C38: push eax */
    PUSH32(esp, ebx); /* 0x15078C39: push ebx */
    RECOMP_CALL(sub_15076AD0); /* 0x15078C3A: call 0x15076ad0 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x15078C3F: pop ecx */
    ecx = POP32_VAL(esp); /* 0x15078C40: pop ecx */
L_15078C41:
    eax = edi; /* 0x15078C41: mov eax, edi */
    edi = POP32_VAL(esp); /* 0x15078C43: pop edi */
L_15078C44:
    esi = POP32_VAL(esp); /* 0x15078C44: pop esi */
L_15078C45:
    ebx = POP32_VAL(esp); /* 0x15078C45: pop ebx */
    esp = ebp; ebp = POP32_VAL(esp); /* 0x15078C46: leave  */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x15078C47: ret  */
    RECOMP_REGS_OUT();
}

void sub_15078C50(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x15078C50u);

L_15078C50:
    edi = edi; /* 0x15078C50: mov edi, edi */
    PUSH32(esp, ebp); /* 0x15078C52: push ebp */
    ebp = esp; /* 0x15078C53: mov ebp, esp */
    eax = ebp + 0x18; /* 0x15078C55: lea eax, [ebp + 0x18] */
    PUSH32(esp, eax); /* 0x15078C58: push eax */
    PUSH32(esp, MEM32(ebp + 0x14)); /* 0x15078C59: push dword ptr [ebp + 0x14] */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x15078C5C: push dword ptr [ebp + 0x10] */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x15078C5F: push dword ptr [ebp + 0xc] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x15078C62: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_15079FE0); /* 0x15078C65: call 0x15079fe0 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x14u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x14u; /* 0x15078C6A: add esp, 0x14 */
    _flag_k = FK_ADD;
    ebp = POP32_VAL(esp); /* 0x15078C6D: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x15078C6E: ret  */
    RECOMP_REGS_OUT();
}

void sub_15078C80(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x15078C80u);

L_15078C80:
    edi = edi; /* 0x15078C80: mov edi, edi */
    PUSH32(esp, ebp); /* 0x15078C82: push ebp */
    ebp = esp; /* 0x15078C83: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x20u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x20u; /* 0x15078C85: sub esp, 0x20 */
    _flag_k = FK_CMP;
    /* cmp MEM32(ebp + 0x10), 0 */ /* 0x15078C88: cmp dword ptr [ebp + 0x10], 0 */
    _flag_a = (uint32_t)(MEM32(ebp + 0x10)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    PUSH32(esp, ebx); /* 0x15078C8C: push ebx */
    if (CMP_NE(_flag_a, _flag_b)) goto L_15078CAE; /* 0x15078C8D: jne 0x15078cae */
L_15078C8F:
    RECOMP_CALL(sub_15036430); /* 0x15078C8F: call 0x15036430 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ebx = 0; /* 0x15078C94: xor ebx, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, ebx); /* 0x15078C96: push ebx */
    PUSH32(esp, ebx); /* 0x15078C97: push ebx */
    PUSH32(esp, ebx); /* 0x15078C98: push ebx */
    PUSH32(esp, ebx); /* 0x15078C99: push ebx */
    PUSH32(esp, ebx); /* 0x15078C9A: push ebx */
    MEM32(eax) = 0x16u; /* 0x15078C9B: mov dword ptr [eax], 0x16 */
    RECOMP_CALL(sub_1505A110); /* 0x15078CA1: call 0x1505a110 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x14u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x14u; /* 0x15078CA6: add esp, 0x14 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)((eax | 0xFFFFFFFFu)); _flag_b = (uint32_t)((eax | 0xFFFFFFFFu));
    eax = eax | 0xFFFFFFFFu; /* 0x15078CA9: or eax, 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_15078D28; /* 0x15078CAC: jmp 0x15078d28 */
L_15078CAE:
    eax = MEM32(ebp + 0xC); /* 0x15078CAE: mov eax, dword ptr [ebp + 0xc] */
    PUSH32(esp, esi); /* 0x15078CB1: push esi */
    esi = MEM32(ebp + 0x8); /* 0x15078CB2: mov esi, dword ptr [ebp + 8] */
    /* test eax, eax */ /* 0x15078CB5: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_15078CE8; /* 0x15078CB7: je 0x15078ce8 */
L_15078CB9:
    /* test esi, esi */ /* 0x15078CB9: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_15078CDC; /* 0x15078CBB: jne 0x15078cdc */
L_15078CBD:
    RECOMP_CALL(sub_15036430); /* 0x15078CBD: call 0x15036430 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ebx = 0; /* 0x15078CC2: xor ebx, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, ebx); /* 0x15078CC4: push ebx */
    PUSH32(esp, ebx); /* 0x15078CC5: push ebx */
    PUSH32(esp, ebx); /* 0x15078CC6: push ebx */
    PUSH32(esp, ebx); /* 0x15078CC7: push ebx */
    PUSH32(esp, ebx); /* 0x15078CC8: push ebx */
    MEM32(eax) = 0x16u; /* 0x15078CC9: mov dword ptr [eax], 0x16 */
    RECOMP_CALL(sub_1505A110); /* 0x15078CCF: call 0x1505a110 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x14u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x14u; /* 0x15078CD4: add esp, 0x14 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)((eax | 0xFFFFFFFFu)); _flag_b = (uint32_t)((eax | 0xFFFFFFFFu));
    eax = eax | 0xFFFFFFFFu; /* 0x15078CD7: or eax, 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_15078D27; /* 0x15078CDA: jmp 0x15078d27 */
L_15078CDC:
    ecx = 0x7FFFFFFFu; /* 0x15078CDC: mov ecx, 0x7fffffff */
    MEM32(ebp + (-0x1C)) = ecx; /* 0x15078CE1: mov dword ptr [ebp - 0x1c], ecx */
    /* cmp eax, ecx */ /* 0x15078CE4: cmp eax, ecx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_A(_flag_a, _flag_b)) goto L_15078CEB; /* 0x15078CE6: ja 0x15078ceb */
L_15078CE8:
    MEM32(ebp + (-0x1C)) = eax; /* 0x15078CE8: mov dword ptr [ebp - 0x1c], eax */
L_15078CEB:
    PUSH32(esp, edi); /* 0x15078CEB: push edi */
    eax = ebp + 0x14; /* 0x15078CEC: lea eax, [ebp + 0x14] */
    MEM32(ebp + (-0x14)) = 0x42u; /* 0x15078CEF: mov dword ptr [ebp - 0x14], 0x42 */
    PUSH32(esp, eax); /* 0x15078CF6: push eax */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ebx = 0; /* 0x15078CF7: xor ebx, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x18)) = esi; /* 0x15078CF9: mov dword ptr [ebp - 0x18], esi */
    PUSH32(esp, ebx); /* 0x15078CFC: push ebx */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x15078CFD: push dword ptr [ebp + 0x10] */
    eax = ebp + (-0x20); /* 0x15078D00: lea eax, [ebp - 0x20] */
    MEM32(ebp + (-0x20)) = esi; /* 0x15078D03: mov dword ptr [ebp - 0x20], esi */
    PUSH32(esp, eax); /* 0x15078D06: push eax */
    RECOMP_CALL(sub_1507E600); /* 0x15078D07: call 0x1507e600 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x10u; /* 0x15078D0C: add esp, 0x10 */
    _flag_k = FK_ADD;
    edi = eax; /* 0x15078D0F: mov edi, eax */
    /* test esi, esi */ /* 0x15078D11: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_15078D24; /* 0x15078D13: je 0x15078d24 */
L_15078D15:
    /* test edi, edi */ /* 0x15078D15: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_15078D3C; /* 0x15078D17: js 0x15078d3c */
L_15078D19:
    _flag_a = (uint32_t)(MEM32(ebp + (-0x1C))); _flag_b = (uint32_t)(1);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    MEM32(ebp + (-0x1C)) = MEM32(ebp + (-0x1C)) - 1; /* 0x15078D19: sub dword ptr [ebp - 0x1c], 1 */
    _flag_k = FK_CMP;
    if (/* sub result */ CMP_S(_flag_a, _flag_b)) goto L_15078D2B; /* 0x15078D1D: js 0x15078d2b */
L_15078D1F:
    eax = MEM32(ebp + (-0x20)); /* 0x15078D1F: mov eax, dword ptr [ebp - 0x20] */
    MEM8(eax) = (uint8_t)(LO8(ebx)); /* 0x15078D22: mov byte ptr [eax], bl */
L_15078D24:
    eax = edi; /* 0x15078D24: mov eax, edi */
L_15078D26:
    edi = POP32_VAL(esp); /* 0x15078D26: pop edi */
L_15078D27:
    esi = POP32_VAL(esp); /* 0x15078D27: pop esi */
L_15078D28:
    ebx = POP32_VAL(esp); /* 0x15078D28: pop ebx */
    esp = ebp; ebp = POP32_VAL(esp); /* 0x15078D29: leave  */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x15078D2A: ret  */
L_15078D2B:
    eax = ebp + (-0x20); /* 0x15078D2B: lea eax, [ebp - 0x20] */
    PUSH32(esp, eax); /* 0x15078D2E: push eax */
    PUSH32(esp, ebx); /* 0x15078D2F: push ebx */
    RECOMP_CALL(sub_15076AD0); /* 0x15078D30: call 0x15076ad0 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x15078D35: pop ecx */
    ecx = POP32_VAL(esp); /* 0x15078D36: pop ecx */
    /* cmp eax, 0xFFFFFFFFu */ /* 0x15078D37: cmp eax, -1 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xFFFFFFFFu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_NE(_flag_a, _flag_b)) goto L_15078D24; /* 0x15078D3A: jne 0x15078d24 */
L_15078D3C:
    MEM8(esi) = (uint8_t)(LO8(ebx)); /* 0x15078D3C: mov byte ptr [esi], bl */
    _flag_a = (uint32_t)((eax | 0xFFFFFFFFu)); _flag_b = (uint32_t)((eax | 0xFFFFFFFFu));
    eax = eax | 0xFFFFFFFFu; /* 0x15078D3E: or eax, 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    goto L_15078D26; /* 0x15078D41: jmp 0x15078d26 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    RECOMP_REGS_OUT();
}

void sub_15078D50(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x15078D50u);

L_15078D50:
    edi = edi; /* 0x15078D50: mov edi, edi */
    PUSH32(esp, ebp); /* 0x15078D52: push ebp */
    ebp = esp; /* 0x15078D53: mov ebp, esp */
    eax = ebp + 0x18; /* 0x15078D55: lea eax, [ebp + 0x18] */
    PUSH32(esp, eax); /* 0x15078D58: push eax */
    PUSH32(esp, MEM32(ebp + 0x14)); /* 0x15078D59: push dword ptr [ebp + 0x14] */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x15078D5C: push dword ptr [ebp + 0x10] */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x15078D5F: push dword ptr [ebp + 0xc] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x15078D62: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_1507A0D0); /* 0x15078D65: call 0x1507a0d0 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x14u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x14u; /* 0x15078D6A: add esp, 0x14 */
    _flag_k = FK_ADD;
    ebp = POP32_VAL(esp); /* 0x15078D6D: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x15078D6E: ret  */
    RECOMP_REGS_OUT();
}

void sub_15078D75(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x15078D75u);

L_15078D75:
    eax = 0x15084110u; /* 0x15078D75: mov eax, 0x15084110 */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x15078D7A: ret  */
    RECOMP_REGS_OUT();
}

void sub_15078D81(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x15078D81u);

L_15078D81:
    eax = 0x15085400u; /* 0x15078D81: mov eax, 0x15085400 */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x15078D86: ret  */
    RECOMP_REGS_OUT();
}

void sub_15078D90(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x15078D90u);

L_15078D90:
    edi = edi; /* 0x15078D90: mov edi, edi */
    PUSH32(esp, ebp); /* 0x15078D92: push ebp */
    ebp = esp; /* 0x15078D93: mov ebp, esp */
    eax = ebp + 0x14; /* 0x15078D95: lea eax, [ebp + 0x14] */
    PUSH32(esp, eax); /* 0x15078D98: push eax */
    PUSH32(esp, 0); /* 0x15078D99: push 0 */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x15078D9B: push dword ptr [ebp + 0x10] */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x15078D9E: push dword ptr [ebp + 0xc] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x15078DA1: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_15078D75); /* 0x15078DA4: call 0x15078d75 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, eax); /* 0x15078DA9: push eax */
    RECOMP_CALL(sub_15078E1B); /* 0x15078DAA: call 0x15078e1b */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x18u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x18u; /* 0x15078DAF: add esp, 0x18 */
    _flag_k = FK_ADD;
    ebp = POP32_VAL(esp); /* 0x15078DB2: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x15078DB3: ret  */
    RECOMP_REGS_OUT();
}

void sub_15078DC0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x15078DC0u);

L_15078DC0:
    edi = edi; /* 0x15078DC0: mov edi, edi */
    PUSH32(esp, ebp); /* 0x15078DC2: push ebp */
    ebp = esp; /* 0x15078DC3: mov ebp, esp */
    eax = ebp + 0x18; /* 0x15078DC5: lea eax, [ebp + 0x18] */
    PUSH32(esp, eax); /* 0x15078DC8: push eax */
    PUSH32(esp, MEM32(ebp + 0x14)); /* 0x15078DC9: push dword ptr [ebp + 0x14] */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x15078DCC: push dword ptr [ebp + 0x10] */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x15078DCF: push dword ptr [ebp + 0xc] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x15078DD2: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_15078D75); /* 0x15078DD5: call 0x15078d75 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, eax); /* 0x15078DDA: push eax */
    RECOMP_CALL(sub_15078E1B); /* 0x15078DDB: call 0x15078e1b */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x18u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x18u; /* 0x15078DE0: add esp, 0x18 */
    _flag_k = FK_ADD;
    ebp = POP32_VAL(esp); /* 0x15078DE3: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x15078DE4: ret  */
    RECOMP_REGS_OUT();
}

void sub_15078DF0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x15078DF0u);

L_15078DF0:
    edi = edi; /* 0x15078DF0: mov edi, edi */
    PUSH32(esp, ebp); /* 0x15078DF2: push ebp */
    ebp = esp; /* 0x15078DF3: mov ebp, esp */
    eax = ebp + 0x18; /* 0x15078DF5: lea eax, [ebp + 0x18] */
    PUSH32(esp, eax); /* 0x15078DF8: push eax */
    PUSH32(esp, MEM32(ebp + 0x14)); /* 0x15078DF9: push dword ptr [ebp + 0x14] */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x15078DFC: push dword ptr [ebp + 0x10] */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x15078DFF: push dword ptr [ebp + 0xc] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x15078E02: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_15078D81); /* 0x15078E05: call 0x15078d81 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, eax); /* 0x15078E0A: push eax */
    RECOMP_CALL(sub_15078E1B); /* 0x15078E0B: call 0x15078e1b */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x18u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x18u; /* 0x15078E10: add esp, 0x18 */
    _flag_k = FK_ADD;
    ebp = POP32_VAL(esp); /* 0x15078E13: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x15078E14: ret  */
    RECOMP_REGS_OUT();
}

void sub_15078E1B(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x15078E1Bu);

L_15078E1B:
    edi = edi; /* 0x15078E1B: mov edi, edi */
    PUSH32(esp, ebp); /* 0x15078E1D: push ebp */
    ebp = esp; /* 0x15078E1E: mov ebp, esp */
    eax = MEM32(ebp + 0xC); /* 0x15078E20: mov eax, dword ptr [ebp + 0xc] */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x20u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x20u; /* 0x15078E23: sub esp, 0x20 */
    _flag_k = FK_CMP;
    /* test eax, eax */ /* 0x15078E26: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_15078E49; /* 0x15078E28: jne 0x15078e49 */
L_15078E2A:
    RECOMP_CALL(sub_15036430); /* 0x15078E2A: call 0x15036430 */
    RECOMP_FLAGS_IN();
    MEM32(eax) = 0x16u; /* 0x15078E2F: mov dword ptr [eax], 0x16 */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x15078E35: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, eax); /* 0x15078E37: push eax */
    PUSH32(esp, eax); /* 0x15078E38: push eax */
    PUSH32(esp, eax); /* 0x15078E39: push eax */
    PUSH32(esp, eax); /* 0x15078E3A: push eax */
    PUSH32(esp, eax); /* 0x15078E3B: push eax */
    RECOMP_CALL(sub_1505A110); /* 0x15078E3C: call 0x1505a110 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x14u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x14u; /* 0x15078E41: add esp, 0x14 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)((eax | 0xFFFFFFFFu)); _flag_b = (uint32_t)((eax | 0xFFFFFFFFu));
    eax = eax | 0xFFFFFFFFu; /* 0x15078E44: or eax, 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    esp = ebp; ebp = POP32_VAL(esp); /* 0x15078E47: leave  */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x15078E48: ret  */
L_15078E49:
    /* cmp MEM32(ebp + 0x14), 0 */ /* 0x15078E49: cmp dword ptr [ebp + 0x14], 0 */
    _flag_a = (uint32_t)(MEM32(ebp + 0x14)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_EQ(_flag_a, _flag_b)) goto L_15078E2A; /* 0x15078E4D: je 0x15078e2a */
L_15078E4F:
    PUSH32(esp, MEM32(ebp + 0x1C)); /* 0x15078E4F: push dword ptr [ebp + 0x1c] */
    MEM32(ebp + (-0x18)) = eax; /* 0x15078E52: mov dword ptr [ebp - 0x18], eax */
    ecx = 0x7FFFFFFFu; /* 0x15078E55: mov ecx, 0x7fffffff */
    PUSH32(esp, MEM32(ebp + 0x18)); /* 0x15078E5A: push dword ptr [ebp + 0x18] */
    MEM32(ebp + (-0x20)) = eax; /* 0x15078E5D: mov dword ptr [ebp - 0x20], eax */
    eax = MEM32(ebp + 0x10); /* 0x15078E60: mov eax, dword ptr [ebp + 0x10] */
    /* cmp eax, ecx */ /* 0x15078E63: cmp eax, ecx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    PUSH32(esp, MEM32(ebp + 0x14)); /* 0x15078E65: push dword ptr [ebp + 0x14] */
    if (CMP_A(_flag_a, _flag_b)) { eax = ecx; } /* 0x15078E68: cmova eax, ecx */
    MEM32(ebp + (-0x14)) = 0x49u; /* 0x15078E6B: mov dword ptr [ebp - 0x14], 0x49 */
    ecx = MEM32(ebp + 0x8); /* 0x15078E72: mov ecx, dword ptr [ebp + 8] */
    MEM32(ebp + (-0x1C)) = eax; /* 0x15078E75: mov dword ptr [ebp - 0x1c], eax */
    eax = ebp + (-0x20); /* 0x15078E78: lea eax, [ebp - 0x20] */
    PUSH32(esp, eax); /* 0x15078E7B: push eax */
    RECOMP_ICALL(MEM32(0x150C02B0)); /* 0x15078E7C: call dword ptr [0x150c02b0] */
    RECOMP_FLAGS_IN();
    RECOMP_ICALL(MEM32(ebp + 0x8)); /* 0x15078E82: call dword ptr [ebp + 8] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x10u; /* 0x15078E85: add esp, 0x10 */
    _flag_k = FK_ADD;
    esp = ebp; ebp = POP32_VAL(esp); /* 0x15078E88: leave  */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x15078E89: ret  */
    RECOMP_REGS_OUT();
}

void sub_15078E90(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x15078E90u);

L_15078E90:
    edi = edi; /* 0x15078E90: mov edi, edi */
    PUSH32(esp, ebp); /* 0x15078E92: push ebp */
    ebp = esp; /* 0x15078E93: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x20u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x20u; /* 0x15078E95: sub esp, 0x20 */
    _flag_k = FK_CMP;
    /* cmp MEM32(ebp + 0x10), 0 */ /* 0x15078E98: cmp dword ptr [ebp + 0x10], 0 */
    _flag_a = (uint32_t)(MEM32(ebp + 0x10)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    PUSH32(esp, ebx); /* 0x15078E9C: push ebx */
    if (CMP_NE(_flag_a, _flag_b)) goto L_15078EC1; /* 0x15078E9D: jne 0x15078ec1 */
L_15078E9F:
    RECOMP_CALL(sub_15036430); /* 0x15078E9F: call 0x15036430 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ebx = 0; /* 0x15078EA4: xor ebx, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, ebx); /* 0x15078EA6: push ebx */
    PUSH32(esp, ebx); /* 0x15078EA7: push ebx */
    PUSH32(esp, ebx); /* 0x15078EA8: push ebx */
    PUSH32(esp, ebx); /* 0x15078EA9: push ebx */
    PUSH32(esp, ebx); /* 0x15078EAA: push ebx */
    MEM32(eax) = 0x16u; /* 0x15078EAB: mov dword ptr [eax], 0x16 */
    RECOMP_CALL(sub_1505A110); /* 0x15078EB1: call 0x1505a110 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x14u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x14u; /* 0x15078EB6: add esp, 0x14 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)((eax | 0xFFFFFFFFu)); _flag_b = (uint32_t)((eax | 0xFFFFFFFFu));
    eax = eax | 0xFFFFFFFFu; /* 0x15078EB9: or eax, 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_15078F6B; /* 0x15078EBC: jmp 0x15078f6b */
L_15078EC1:
    eax = MEM32(ebp + 0xC); /* 0x15078EC1: mov eax, dword ptr [ebp + 0xc] */
    PUSH32(esp, esi); /* 0x15078EC4: push esi */
    esi = MEM32(ebp + 0x8); /* 0x15078EC5: mov esi, dword ptr [ebp + 8] */
    /* test eax, eax */ /* 0x15078EC8: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_15078EEF; /* 0x15078ECA: je 0x15078eef */
L_15078ECC:
    /* test esi, esi */ /* 0x15078ECC: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_15078EEF; /* 0x15078ECE: jne 0x15078eef */
L_15078ED0:
    RECOMP_CALL(sub_15036430); /* 0x15078ED0: call 0x15036430 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ebx = 0; /* 0x15078ED5: xor ebx, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, ebx); /* 0x15078ED7: push ebx */
    PUSH32(esp, ebx); /* 0x15078ED8: push ebx */
    PUSH32(esp, ebx); /* 0x15078ED9: push ebx */
    PUSH32(esp, ebx); /* 0x15078EDA: push ebx */
    PUSH32(esp, ebx); /* 0x15078EDB: push ebx */
    MEM32(eax) = 0x16u; /* 0x15078EDC: mov dword ptr [eax], 0x16 */
    RECOMP_CALL(sub_1505A110); /* 0x15078EE2: call 0x1505a110 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x14u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x14u; /* 0x15078EE7: add esp, 0x14 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)((eax | 0xFFFFFFFFu)); _flag_b = (uint32_t)((eax | 0xFFFFFFFFu));
    eax = eax | 0xFFFFFFFFu; /* 0x15078EEA: or eax, 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_15078F6A; /* 0x15078EED: jmp 0x15078f6a */
L_15078EEF:
    MEM32(ebp + (-0x14)) = 0x42u; /* 0x15078EEF: mov dword ptr [ebp - 0x14], 0x42 */
    MEM32(ebp + (-0x18)) = esi; /* 0x15078EF6: mov dword ptr [ebp - 0x18], esi */
    MEM32(ebp + (-0x20)) = esi; /* 0x15078EF9: mov dword ptr [ebp - 0x20], esi */
    /* cmp eax, 0x3FFFFFFFu */ /* 0x15078EFC: cmp eax, 0x3fffffff */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x3FFFFFFFu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_15078F0C; /* 0x15078F01: jbe 0x15078f0c */
L_15078F03:
    MEM32(ebp + (-0x1C)) = 0x7FFFFFFFu; /* 0x15078F03: mov dword ptr [ebp - 0x1c], 0x7fffffff */
    goto L_15078F11; /* 0x15078F0A: jmp 0x15078f11 */
L_15078F0C:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + eax; /* 0x15078F0C: add eax, eax */
    _flag_k = FK_ADD;
    MEM32(ebp + (-0x1C)) = eax; /* 0x15078F0E: mov dword ptr [ebp - 0x1c], eax */
L_15078F11:
    PUSH32(esp, edi); /* 0x15078F11: push edi */
    eax = ebp + 0x14; /* 0x15078F12: lea eax, [ebp + 0x14] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ebx = 0; /* 0x15078F15: xor ebx, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, eax); /* 0x15078F17: push eax */
    PUSH32(esp, ebx); /* 0x15078F18: push ebx */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x15078F19: push dword ptr [ebp + 0x10] */
    eax = ebp + (-0x20); /* 0x15078F1C: lea eax, [ebp - 0x20] */
    PUSH32(esp, eax); /* 0x15078F1F: push eax */
    RECOMP_CALL(sub_15086A80); /* 0x15078F20: call 0x15086a80 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x10u; /* 0x15078F25: add esp, 0x10 */
    _flag_k = FK_ADD;
    edi = eax; /* 0x15078F28: mov edi, eax */
    /* test esi, esi */ /* 0x15078F2A: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_15078F67; /* 0x15078F2C: je 0x15078f67 */
L_15078F2E:
    _flag_a = (uint32_t)(MEM32(ebp + (-0x1C))); _flag_b = (uint32_t)(1);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    MEM32(ebp + (-0x1C)) = MEM32(ebp + (-0x1C)) - 1; /* 0x15078F2E: sub dword ptr [ebp - 0x1c], 1 */
    _flag_k = FK_CMP;
    if (/* sub result */ CMP_S(_flag_a, _flag_b)) goto L_15078F42; /* 0x15078F32: js 0x15078f42 */
L_15078F34:
    ecx = MEM32(ebp + (-0x20)); /* 0x15078F34: mov ecx, dword ptr [ebp - 0x20] */
    MEM8(ecx) = (uint8_t)(LO8(ebx)); /* 0x15078F37: mov byte ptr [ecx], bl */
    ecx = MEM32(ebp + (-0x20)); /* 0x15078F39: mov ecx, dword ptr [ebp - 0x20] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx + 1; /* 0x15078F3C: inc ecx */
    _flag_k = FK_INC;
    MEM32(ebp + (-0x20)) = ecx; /* 0x15078F3D: mov dword ptr [ebp - 0x20], ecx */
    goto L_15078F51; /* 0x15078F40: jmp 0x15078f51 */
L_15078F42:
    eax = ebp + (-0x20); /* 0x15078F42: lea eax, [ebp - 0x20] */
    PUSH32(esp, eax); /* 0x15078F45: push eax */
    PUSH32(esp, ebx); /* 0x15078F46: push ebx */
    RECOMP_CALL(sub_15076AD0); /* 0x15078F47: call 0x15076ad0 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x15078F4C: pop ecx */
    ecx = POP32_VAL(esp); /* 0x15078F4D: pop ecx */
    ecx = MEM32(ebp + (-0x20)); /* 0x15078F4E: mov ecx, dword ptr [ebp - 0x20] */
L_15078F51:
    _flag_a = (uint32_t)(MEM32(ebp + (-0x1C))); _flag_b = (uint32_t)(1);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    MEM32(ebp + (-0x1C)) = MEM32(ebp + (-0x1C)) - 1; /* 0x15078F51: sub dword ptr [ebp - 0x1c], 1 */
    _flag_k = FK_CMP;
    if (/* sub result */ CMP_S(_flag_a, _flag_b)) goto L_15078F5B; /* 0x15078F55: js 0x15078f5b */
L_15078F57:
    MEM8(ecx) = (uint8_t)(LO8(ebx)); /* 0x15078F57: mov byte ptr [ecx], bl */
    goto L_15078F67; /* 0x15078F59: jmp 0x15078f67 */
L_15078F5B:
    eax = ebp + (-0x20); /* 0x15078F5B: lea eax, [ebp - 0x20] */
    PUSH32(esp, eax); /* 0x15078F5E: push eax */
    PUSH32(esp, ebx); /* 0x15078F5F: push ebx */
    RECOMP_CALL(sub_15076AD0); /* 0x15078F60: call 0x15076ad0 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x15078F65: pop ecx */
    ecx = POP32_VAL(esp); /* 0x15078F66: pop ecx */
L_15078F67:
    eax = edi; /* 0x15078F67: mov eax, edi */
    edi = POP32_VAL(esp); /* 0x15078F69: pop edi */
L_15078F6A:
    esi = POP32_VAL(esp); /* 0x15078F6A: pop esi */
L_15078F6B:
    ebx = POP32_VAL(esp); /* 0x15078F6B: pop ebx */
    esp = ebp; ebp = POP32_VAL(esp); /* 0x15078F6C: leave  */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x15078F6D: ret  */
    RECOMP_REGS_OUT();
}

void sub_15078F80(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x15078F80u);

L_15078F80:
    edi = edi; /* 0x15078F80: mov edi, edi */
    PUSH32(esp, ebp); /* 0x15078F82: push ebp */
    ebp = esp; /* 0x15078F83: mov ebp, esp */
    eax = ebp + 0x18; /* 0x15078F85: lea eax, [ebp + 0x18] */
    PUSH32(esp, eax); /* 0x15078F88: push eax */
    PUSH32(esp, MEM32(ebp + 0x14)); /* 0x15078F89: push dword ptr [ebp + 0x14] */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x15078F8C: push dword ptr [ebp + 0x10] */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x15078F8F: push dword ptr [ebp + 0xc] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x15078F92: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_1507A450); /* 0x15078F95: call 0x1507a450 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x14u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x14u; /* 0x15078F9A: add esp, 0x14 */
    _flag_k = FK_ADD;
    ebp = POP32_VAL(esp); /* 0x15078F9D: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x15078F9E: ret  */
    RECOMP_REGS_OUT();
}

void sub_15078FA5(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x15078FA5u);

L_15078FA5:
    eax = 0x15087A20u; /* 0x15078FA5: mov eax, 0x15087a20 */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x15078FAA: ret  */
    RECOMP_REGS_OUT();
}

void sub_15078FB1(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x15078FB1u);

L_15078FB1:
    eax = 0x15088FA0u; /* 0x15078FB1: mov eax, 0x15088fa0 */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x15078FB6: ret  */
    RECOMP_REGS_OUT();
}

void sub_15078FC0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x15078FC0u);

L_15078FC0:
    edi = edi; /* 0x15078FC0: mov edi, edi */
    PUSH32(esp, ebp); /* 0x15078FC2: push ebp */
    ebp = esp; /* 0x15078FC3: mov ebp, esp */
    eax = ebp + 0x14; /* 0x15078FC5: lea eax, [ebp + 0x14] */
    PUSH32(esp, eax); /* 0x15078FC8: push eax */
    PUSH32(esp, 0); /* 0x15078FC9: push 0 */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x15078FCB: push dword ptr [ebp + 0x10] */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x15078FCE: push dword ptr [ebp + 0xc] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x15078FD1: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_15078FA5); /* 0x15078FD4: call 0x15078fa5 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, eax); /* 0x15078FD9: push eax */
    RECOMP_CALL(sub_1507904B); /* 0x15078FDA: call 0x1507904b */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x18u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x18u; /* 0x15078FDF: add esp, 0x18 */
    _flag_k = FK_ADD;
    ebp = POP32_VAL(esp); /* 0x15078FE2: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x15078FE3: ret  */
    RECOMP_REGS_OUT();
}

void sub_15078FF0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x15078FF0u);

L_15078FF0:
    edi = edi; /* 0x15078FF0: mov edi, edi */
    PUSH32(esp, ebp); /* 0x15078FF2: push ebp */
    ebp = esp; /* 0x15078FF3: mov ebp, esp */
    eax = ebp + 0x18; /* 0x15078FF5: lea eax, [ebp + 0x18] */
    PUSH32(esp, eax); /* 0x15078FF8: push eax */
    PUSH32(esp, MEM32(ebp + 0x14)); /* 0x15078FF9: push dword ptr [ebp + 0x14] */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x15078FFC: push dword ptr [ebp + 0x10] */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x15078FFF: push dword ptr [ebp + 0xc] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x15079002: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_15078FA5); /* 0x15079005: call 0x15078fa5 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, eax); /* 0x1507900A: push eax */
    RECOMP_CALL(sub_1507904B); /* 0x1507900B: call 0x1507904b */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x18u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x18u; /* 0x15079010: add esp, 0x18 */
    _flag_k = FK_ADD;
    ebp = POP32_VAL(esp); /* 0x15079013: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x15079014: ret  */
    RECOMP_REGS_OUT();
}

void sub_15079020(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x15079020u);

L_15079020:
    edi = edi; /* 0x15079020: mov edi, edi */
    PUSH32(esp, ebp); /* 0x15079022: push ebp */
    ebp = esp; /* 0x15079023: mov ebp, esp */
    eax = ebp + 0x18; /* 0x15079025: lea eax, [ebp + 0x18] */
    PUSH32(esp, eax); /* 0x15079028: push eax */
    PUSH32(esp, MEM32(ebp + 0x14)); /* 0x15079029: push dword ptr [ebp + 0x14] */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x1507902C: push dword ptr [ebp + 0x10] */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x1507902F: push dword ptr [ebp + 0xc] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x15079032: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_15078FB1); /* 0x15079035: call 0x15078fb1 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, eax); /* 0x1507903A: push eax */
    RECOMP_CALL(sub_1507904B); /* 0x1507903B: call 0x1507904b */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x18u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x18u; /* 0x15079040: add esp, 0x18 */
    _flag_k = FK_ADD;
    ebp = POP32_VAL(esp); /* 0x15079043: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x15079044: ret  */
    RECOMP_REGS_OUT();
}

void sub_1507904B(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1507904Bu);

L_1507904B:
    edi = edi; /* 0x1507904B: mov edi, edi */
    PUSH32(esp, ebp); /* 0x1507904D: push ebp */
    ebp = esp; /* 0x1507904E: mov ebp, esp */
    eax = MEM32(ebp + 0xC); /* 0x15079050: mov eax, dword ptr [ebp + 0xc] */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x20u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x20u; /* 0x15079053: sub esp, 0x20 */
    _flag_k = FK_CMP;
    /* test eax, eax */ /* 0x15079056: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_15079079; /* 0x15079058: jne 0x15079079 */
L_1507905A:
    RECOMP_CALL(sub_15036430); /* 0x1507905A: call 0x15036430 */
    RECOMP_FLAGS_IN();
    MEM32(eax) = 0x16u; /* 0x1507905F: mov dword ptr [eax], 0x16 */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x15079065: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, eax); /* 0x15079067: push eax */
    PUSH32(esp, eax); /* 0x15079068: push eax */
    PUSH32(esp, eax); /* 0x15079069: push eax */
    PUSH32(esp, eax); /* 0x1507906A: push eax */
    PUSH32(esp, eax); /* 0x1507906B: push eax */
    RECOMP_CALL(sub_1505A110); /* 0x1507906C: call 0x1505a110 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x14u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x14u; /* 0x15079071: add esp, 0x14 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)((eax | 0xFFFFFFFFu)); _flag_b = (uint32_t)((eax | 0xFFFFFFFFu));
    eax = eax | 0xFFFFFFFFu; /* 0x15079074: or eax, 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    esp = ebp; ebp = POP32_VAL(esp); /* 0x15079077: leave  */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x15079078: ret  */
L_15079079:
    /* cmp MEM32(ebp + 0x14), 0 */ /* 0x15079079: cmp dword ptr [ebp + 0x14], 0 */
    _flag_a = (uint32_t)(MEM32(ebp + 0x14)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1507905A; /* 0x1507907D: je 0x1507905a */
L_1507907F:
    MEM32(ebp + (-0x18)) = eax; /* 0x1507907F: mov dword ptr [ebp - 0x18], eax */
    MEM32(ebp + (-0x20)) = eax; /* 0x15079082: mov dword ptr [ebp - 0x20], eax */
    eax = MEM32(ebp + 0x10); /* 0x15079085: mov eax, dword ptr [ebp + 0x10] */
    MEM32(ebp + (-0x14)) = 0x49u; /* 0x15079088: mov dword ptr [ebp - 0x14], 0x49 */
    /* cmp eax, 0x3FFFFFFFu */ /* 0x1507908F: cmp eax, 0x3fffffff */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x3FFFFFFFu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_1507909F; /* 0x15079094: jbe 0x1507909f */
L_15079096:
    MEM32(ebp + (-0x1C)) = 0x7FFFFFFFu; /* 0x15079096: mov dword ptr [ebp - 0x1c], 0x7fffffff */
    goto L_150790A4; /* 0x1507909D: jmp 0x150790a4 */
L_1507909F:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + eax; /* 0x1507909F: add eax, eax */
    _flag_k = FK_ADD;
    MEM32(ebp + (-0x1C)) = eax; /* 0x150790A1: mov dword ptr [ebp - 0x1c], eax */
L_150790A4:
    PUSH32(esp, MEM32(ebp + 0x1C)); /* 0x150790A4: push dword ptr [ebp + 0x1c] */
    ecx = MEM32(ebp + 0x8); /* 0x150790A7: mov ecx, dword ptr [ebp + 8] */
    eax = ebp + (-0x20); /* 0x150790AA: lea eax, [ebp - 0x20] */
    PUSH32(esp, MEM32(ebp + 0x18)); /* 0x150790AD: push dword ptr [ebp + 0x18] */
    PUSH32(esp, MEM32(ebp + 0x14)); /* 0x150790B0: push dword ptr [ebp + 0x14] */
    PUSH32(esp, eax); /* 0x150790B3: push eax */
    RECOMP_ICALL(MEM32(0x150C02B0)); /* 0x150790B4: call dword ptr [0x150c02b0] */
    RECOMP_FLAGS_IN();
    RECOMP_ICALL(MEM32(ebp + 0x8)); /* 0x150790BA: call dword ptr [ebp + 8] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x10u; /* 0x150790BD: add esp, 0x10 */
    _flag_k = FK_ADD;
    esp = ebp; ebp = POP32_VAL(esp); /* 0x150790C0: leave  */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x150790C1: ret  */
    RECOMP_REGS_OUT();
}

void sub_150790D0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x150790D0u);

L_150790D0:
    edi = edi; /* 0x150790D0: mov edi, edi */
    PUSH32(esp, ebp); /* 0x150790D2: push ebp */
    ebp = esp; /* 0x150790D3: mov ebp, esp */
    eax = ebp + 0x14; /* 0x150790D5: lea eax, [ebp + 0x14] */
    PUSH32(esp, eax); /* 0x150790D8: push eax */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x150790D9: push dword ptr [ebp + 0x10] */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x150790DC: push dword ptr [ebp + 0xc] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x150790DF: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_15078D75); /* 0x150790E2: call 0x15078d75 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, eax); /* 0x150790E7: push eax */
    RECOMP_CALL(sub_15079157); /* 0x150790E8: call 0x15079157 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x14u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x14u; /* 0x150790ED: add esp, 0x14 */
    _flag_k = FK_ADD;
    ebp = POP32_VAL(esp); /* 0x150790F0: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x150790F1: ret  */
    RECOMP_REGS_OUT();
}

void sub_15079100(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x15079100u);

L_15079100:
    edi = edi; /* 0x15079100: mov edi, edi */
    PUSH32(esp, ebp); /* 0x15079102: push ebp */
    ebp = esp; /* 0x15079103: mov ebp, esp */
    eax = ebp + 0x14; /* 0x15079105: lea eax, [ebp + 0x14] */
    PUSH32(esp, eax); /* 0x15079108: push eax */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x15079109: push dword ptr [ebp + 0x10] */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x1507910C: push dword ptr [ebp + 0xc] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x1507910F: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_15078D81); /* 0x15079112: call 0x15078d81 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, eax); /* 0x15079117: push eax */
    RECOMP_CALL(sub_15079157); /* 0x15079118: call 0x15079157 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x14u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x14u; /* 0x1507911D: add esp, 0x14 */
    _flag_k = FK_ADD;
    ebp = POP32_VAL(esp); /* 0x15079120: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x15079121: ret  */
    RECOMP_REGS_OUT();
}

void sub_15079130(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x15079130u);

L_15079130:
    edi = edi; /* 0x15079130: mov edi, edi */
    PUSH32(esp, ebp); /* 0x15079132: push ebp */
    ebp = esp; /* 0x15079133: mov ebp, esp */
    eax = ebp + 0x10; /* 0x15079135: lea eax, [ebp + 0x10] */
    PUSH32(esp, eax); /* 0x15079138: push eax */
    PUSH32(esp, 0); /* 0x15079139: push 0 */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x1507913B: push dword ptr [ebp + 0xc] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x1507913E: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_15078D75); /* 0x15079141: call 0x15078d75 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, eax); /* 0x15079146: push eax */
    RECOMP_CALL(sub_15079157); /* 0x15079147: call 0x15079157 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x14u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x14u; /* 0x1507914C: add esp, 0x14 */
    _flag_k = FK_ADD;
    ebp = POP32_VAL(esp); /* 0x1507914F: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x15079150: ret  */
    RECOMP_REGS_OUT();
}

void sub_15079157(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x15079157u);

L_15079157:
    edi = edi; /* 0x15079157: mov edi, edi */
    PUSH32(esp, ebp); /* 0x15079159: push ebp */
    ebp = esp; /* 0x1507915A: mov ebp, esp */
    edx = MEM32(ebp + 0xC); /* 0x1507915C: mov edx, dword ptr [ebp + 0xc] */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x20u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x20u; /* 0x1507915F: sub esp, 0x20 */
    _flag_k = FK_CMP;
    ecx = edx; /* 0x15079162: mov ecx, edx */
    PUSH32(esp, esi); /* 0x15079164: push esi */
    esi = ecx + 0x1; /* 0x15079165: lea esi, [ecx + 1] */
L_15079168:
    SET_LO8(eax, MEM8(ecx)); /* 0x15079168: mov al, byte ptr [ecx] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx + 1; /* 0x1507916A: inc ecx */
    _flag_k = FK_INC;
    /* test LO8(eax), LO8(eax) */ /* 0x1507916B: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_15079168; /* 0x1507916D: jne 0x15079168 */
L_1507916F:
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ecx = ecx - esi; /* 0x1507916F: sub ecx, esi */
    _flag_k = FK_CMP;
    esi = POP32_VAL(esp); /* 0x15079171: pop esi */
    /* test edx, edx */ /* 0x15079172: test edx, edx */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(edx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_15079195; /* 0x15079174: jne 0x15079195 */
L_15079176:
    RECOMP_CALL(sub_15036430); /* 0x15079176: call 0x15036430 */
    RECOMP_FLAGS_IN();
    MEM32(eax) = 0x16u; /* 0x1507917B: mov dword ptr [eax], 0x16 */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x15079181: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, eax); /* 0x15079183: push eax */
    PUSH32(esp, eax); /* 0x15079184: push eax */
    PUSH32(esp, eax); /* 0x15079185: push eax */
    PUSH32(esp, eax); /* 0x15079186: push eax */
    PUSH32(esp, eax); /* 0x15079187: push eax */
    RECOMP_CALL(sub_1505A110); /* 0x15079188: call 0x1505a110 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x14u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x14u; /* 0x1507918D: add esp, 0x14 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)((eax | 0xFFFFFFFFu)); _flag_b = (uint32_t)((eax | 0xFFFFFFFFu));
    eax = eax | 0xFFFFFFFFu; /* 0x15079190: or eax, 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    esp = ebp; ebp = POP32_VAL(esp); /* 0x15079193: leave  */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x15079194: ret  */
L_15079195:
    /* cmp MEM32(ebp + 0x10), 0 */ /* 0x15079195: cmp dword ptr [ebp + 0x10], 0 */
    _flag_a = (uint32_t)(MEM32(ebp + 0x10)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_EQ(_flag_a, _flag_b)) goto L_15079176; /* 0x15079199: je 0x15079176 */
L_1507919B:
    PUSH32(esp, MEM32(ebp + 0x18)); /* 0x1507919B: push dword ptr [ebp + 0x18] */
    eax = 0x7FFFFFFFu; /* 0x1507919E: mov eax, 0x7fffffff */
    MEM32(ebp + (-0x14)) = 0x49u; /* 0x150791A3: mov dword ptr [ebp - 0x14], 0x49 */
    PUSH32(esp, MEM32(ebp + 0x14)); /* 0x150791AA: push dword ptr [ebp + 0x14] */
    /* cmp ecx, eax */ /* 0x150791AD: cmp ecx, eax */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    MEM32(ebp + (-0x18)) = edx; /* 0x150791AF: mov dword ptr [ebp - 0x18], edx */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x150791B2: push dword ptr [ebp + 0x10] */
    if (CMP_A(_flag_a, _flag_b)) { ecx = eax; } /* 0x150791B5: cmova ecx, eax */
    MEM32(ebp + (-0x20)) = edx; /* 0x150791B8: mov dword ptr [ebp - 0x20], edx */
    eax = ebp + (-0x20); /* 0x150791BB: lea eax, [ebp - 0x20] */
    MEM32(ebp + (-0x1C)) = ecx; /* 0x150791BE: mov dword ptr [ebp - 0x1c], ecx */
    ecx = MEM32(ebp + 0x8); /* 0x150791C1: mov ecx, dword ptr [ebp + 8] */
    PUSH32(esp, eax); /* 0x150791C4: push eax */
    RECOMP_ICALL(MEM32(0x150C02B0)); /* 0x150791C5: call dword ptr [0x150c02b0] */
    RECOMP_FLAGS_IN();
    RECOMP_ICALL(MEM32(ebp + 0x8)); /* 0x150791CB: call dword ptr [ebp + 8] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x10u; /* 0x150791CE: add esp, 0x10 */
    _flag_k = FK_ADD;
    esp = ebp; ebp = POP32_VAL(esp); /* 0x150791D1: leave  */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x150791D2: ret  */
    RECOMP_REGS_OUT();
}

void sub_150791E0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x150791E0u);

L_150791E0:
    edi = edi; /* 0x150791E0: mov edi, edi */
    PUSH32(esp, ebp); /* 0x150791E2: push ebp */
    ebp = esp; /* 0x150791E3: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x20u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x20u; /* 0x150791E5: sub esp, 0x20 */
    _flag_k = FK_CMP;
    /* cmp MEM32(ebp + 0x10), 0 */ /* 0x150791E8: cmp dword ptr [ebp + 0x10], 0 */
    _flag_a = (uint32_t)(MEM32(ebp + 0x10)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    PUSH32(esp, ebx); /* 0x150791EC: push ebx */
    if (CMP_NE(_flag_a, _flag_b)) goto L_15079211; /* 0x150791ED: jne 0x15079211 */
L_150791EF:
    RECOMP_CALL(sub_15036430); /* 0x150791EF: call 0x15036430 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ebx = 0; /* 0x150791F4: xor ebx, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, ebx); /* 0x150791F6: push ebx */
    PUSH32(esp, ebx); /* 0x150791F7: push ebx */
    PUSH32(esp, ebx); /* 0x150791F8: push ebx */
    PUSH32(esp, ebx); /* 0x150791F9: push ebx */
    PUSH32(esp, ebx); /* 0x150791FA: push ebx */
    MEM32(eax) = 0x16u; /* 0x150791FB: mov dword ptr [eax], 0x16 */
    RECOMP_CALL(sub_1505A110); /* 0x15079201: call 0x1505a110 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x14u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x14u; /* 0x15079206: add esp, 0x14 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)((eax | 0xFFFFFFFFu)); _flag_b = (uint32_t)((eax | 0xFFFFFFFFu));
    eax = eax | 0xFFFFFFFFu; /* 0x15079209: or eax, 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_150792B6; /* 0x1507920C: jmp 0x150792b6 */
L_15079211:
    eax = MEM32(ebp + 0xC); /* 0x15079211: mov eax, dword ptr [ebp + 0xc] */
    PUSH32(esp, esi); /* 0x15079214: push esi */
    esi = MEM32(ebp + 0x8); /* 0x15079215: mov esi, dword ptr [ebp + 8] */
    /* test eax, eax */ /* 0x15079218: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1507923F; /* 0x1507921A: je 0x1507923f */
L_1507921C:
    /* test esi, esi */ /* 0x1507921C: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1507923F; /* 0x1507921E: jne 0x1507923f */
L_15079220:
    RECOMP_CALL(sub_15036430); /* 0x15079220: call 0x15036430 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ebx = 0; /* 0x15079225: xor ebx, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, ebx); /* 0x15079227: push ebx */
    PUSH32(esp, ebx); /* 0x15079228: push ebx */
    PUSH32(esp, ebx); /* 0x15079229: push ebx */
    PUSH32(esp, ebx); /* 0x1507922A: push ebx */
    PUSH32(esp, ebx); /* 0x1507922B: push ebx */
    MEM32(eax) = 0x16u; /* 0x1507922C: mov dword ptr [eax], 0x16 */
    RECOMP_CALL(sub_1505A110); /* 0x15079232: call 0x1505a110 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x14u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x14u; /* 0x15079237: add esp, 0x14 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)((eax | 0xFFFFFFFFu)); _flag_b = (uint32_t)((eax | 0xFFFFFFFFu));
    eax = eax | 0xFFFFFFFFu; /* 0x1507923A: or eax, 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_150792B5; /* 0x1507923D: jmp 0x150792b5 */
L_1507923F:
    MEM32(ebp + (-0x14)) = 0x42u; /* 0x1507923F: mov dword ptr [ebp - 0x14], 0x42 */
    MEM32(ebp + (-0x18)) = esi; /* 0x15079246: mov dword ptr [ebp - 0x18], esi */
    MEM32(ebp + (-0x20)) = esi; /* 0x15079249: mov dword ptr [ebp - 0x20], esi */
    /* cmp eax, 0x3FFFFFFFu */ /* 0x1507924C: cmp eax, 0x3fffffff */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x3FFFFFFFu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_1507925C; /* 0x15079251: jbe 0x1507925c */
L_15079253:
    MEM32(ebp + (-0x1C)) = 0x7FFFFFFFu; /* 0x15079253: mov dword ptr [ebp - 0x1c], 0x7fffffff */
    goto L_15079261; /* 0x1507925A: jmp 0x15079261 */
L_1507925C:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + eax; /* 0x1507925C: add eax, eax */
    _flag_k = FK_ADD;
    MEM32(ebp + (-0x1C)) = eax; /* 0x1507925E: mov dword ptr [ebp - 0x1c], eax */
L_15079261:
    PUSH32(esp, edi); /* 0x15079261: push edi */
    eax = ebp + 0x14; /* 0x15079262: lea eax, [ebp + 0x14] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ebx = 0; /* 0x15079265: xor ebx, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, eax); /* 0x15079267: push eax */
    PUSH32(esp, ebx); /* 0x15079268: push ebx */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x15079269: push dword ptr [ebp + 0x10] */
    eax = ebp + (-0x20); /* 0x1507926C: lea eax, [ebp - 0x20] */
    PUSH32(esp, eax); /* 0x1507926F: push eax */
    RECOMP_CALL(sub_15086A80); /* 0x15079270: call 0x15086a80 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x10u; /* 0x15079275: add esp, 0x10 */
    _flag_k = FK_ADD;
    edi = eax; /* 0x15079278: mov edi, eax */
    /* test esi, esi */ /* 0x1507927A: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_150792B2; /* 0x1507927C: je 0x150792b2 */
L_1507927E:
    /* test edi, edi */ /* 0x1507927E: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_150792CA; /* 0x15079280: js 0x150792ca */
L_15079282:
    _flag_a = (uint32_t)(MEM32(ebp + (-0x1C))); _flag_b = (uint32_t)(1);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    MEM32(ebp + (-0x1C)) = MEM32(ebp + (-0x1C)) - 1; /* 0x15079282: sub dword ptr [ebp - 0x1c], 1 */
    _flag_k = FK_CMP;
    if (/* sub result */ CMP_S(_flag_a, _flag_b)) goto L_15079296; /* 0x15079286: js 0x15079296 */
L_15079288:
    eax = MEM32(ebp + (-0x20)); /* 0x15079288: mov eax, dword ptr [ebp - 0x20] */
    MEM8(eax) = (uint8_t)(LO8(ebx)); /* 0x1507928B: mov byte ptr [eax], bl */
    eax = MEM32(ebp + (-0x20)); /* 0x1507928D: mov eax, dword ptr [ebp - 0x20] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x15079290: inc eax */
    _flag_k = FK_INC;
    MEM32(ebp + (-0x20)) = eax; /* 0x15079291: mov dword ptr [ebp - 0x20], eax */
    goto L_150792AA; /* 0x15079294: jmp 0x150792aa */
L_15079296:
    eax = ebp + (-0x20); /* 0x15079296: lea eax, [ebp - 0x20] */
    PUSH32(esp, eax); /* 0x15079299: push eax */
    PUSH32(esp, ebx); /* 0x1507929A: push ebx */
    RECOMP_CALL(sub_15076AD0); /* 0x1507929B: call 0x15076ad0 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x150792A0: pop ecx */
    ecx = POP32_VAL(esp); /* 0x150792A1: pop ecx */
    /* cmp eax, 0xFFFFFFFFu */ /* 0x150792A2: cmp eax, -1 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xFFFFFFFFu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_150792CA; /* 0x150792A5: je 0x150792ca */
L_150792A7:
    eax = MEM32(ebp + (-0x20)); /* 0x150792A7: mov eax, dword ptr [ebp - 0x20] */
L_150792AA:
    _flag_a = (uint32_t)(MEM32(ebp + (-0x1C))); _flag_b = (uint32_t)(1);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    MEM32(ebp + (-0x1C)) = MEM32(ebp + (-0x1C)) - 1; /* 0x150792AA: sub dword ptr [ebp - 0x1c], 1 */
    _flag_k = FK_CMP;
    if (/* sub result */ CMP_S(_flag_a, _flag_b)) goto L_150792B9; /* 0x150792AE: js 0x150792b9 */
L_150792B0:
    MEM8(eax) = (uint8_t)(LO8(ebx)); /* 0x150792B0: mov byte ptr [eax], bl */
L_150792B2:
    eax = edi; /* 0x150792B2: mov eax, edi */
L_150792B4:
    edi = POP32_VAL(esp); /* 0x150792B4: pop edi */
L_150792B5:
    esi = POP32_VAL(esp); /* 0x150792B5: pop esi */
L_150792B6:
    ebx = POP32_VAL(esp); /* 0x150792B6: pop ebx */
    esp = ebp; ebp = POP32_VAL(esp); /* 0x150792B7: leave  */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x150792B8: ret  */
L_150792B9:
    eax = ebp + (-0x20); /* 0x150792B9: lea eax, [ebp - 0x20] */
    PUSH32(esp, eax); /* 0x150792BC: push eax */
    PUSH32(esp, ebx); /* 0x150792BD: push ebx */
    RECOMP_CALL(sub_15076AD0); /* 0x150792BE: call 0x15076ad0 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x150792C3: pop ecx */
    ecx = POP32_VAL(esp); /* 0x150792C4: pop ecx */
    /* cmp eax, 0xFFFFFFFFu */ /* 0x150792C5: cmp eax, -1 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xFFFFFFFFu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_NE(_flag_a, _flag_b)) goto L_150792B2; /* 0x150792C8: jne 0x150792b2 */
L_150792CA:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x150792CA: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)((eax | 0xFFFFFFFFu)); _flag_b = (uint32_t)((eax | 0xFFFFFFFFu));
    eax = eax | 0xFFFFFFFFu; /* 0x150792CC: or eax, 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM16(esi) = (uint16_t)(LO16(ecx)); /* 0x150792CF: mov word ptr [esi], cx */
    RECOMP_BACKEDGE();
    goto L_150792B4; /* 0x150792D2: jmp 0x150792b4 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    RECOMP_REGS_OUT();
}

void sub_150792E0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x150792E0u);

L_150792E0:
    edi = edi; /* 0x150792E0: mov edi, edi */
    PUSH32(esp, ebp); /* 0x150792E2: push ebp */
    ebp = esp; /* 0x150792E3: mov ebp, esp */
    eax = ebp + 0x18; /* 0x150792E5: lea eax, [ebp + 0x18] */
    PUSH32(esp, eax); /* 0x150792E8: push eax */
    PUSH32(esp, MEM32(ebp + 0x14)); /* 0x150792E9: push dword ptr [ebp + 0x14] */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x150792EC: push dword ptr [ebp + 0x10] */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x150792EF: push dword ptr [ebp + 0xc] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x150792F2: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_1507A690); /* 0x150792F5: call 0x1507a690 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x14u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x14u; /* 0x150792FA: add esp, 0x14 */
    _flag_k = FK_ADD;
    ebp = POP32_VAL(esp); /* 0x150792FD: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x150792FE: ret  */
    RECOMP_REGS_OUT();
}

void sub_15079310(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x15079310u);

L_15079310:
    edi = edi; /* 0x15079310: mov edi, edi */
    PUSH32(esp, ebp); /* 0x15079312: push ebp */
    ebp = esp; /* 0x15079313: mov ebp, esp */
    eax = ebp + 0x14; /* 0x15079315: lea eax, [ebp + 0x14] */
    PUSH32(esp, eax); /* 0x15079318: push eax */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x15079319: push dword ptr [ebp + 0x10] */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x1507931C: push dword ptr [ebp + 0xc] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x1507931F: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_15078FA5); /* 0x15079322: call 0x15078fa5 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, eax); /* 0x15079327: push eax */
    RECOMP_CALL(sub_15079397); /* 0x15079328: call 0x15079397 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x14u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x14u; /* 0x1507932D: add esp, 0x14 */
    _flag_k = FK_ADD;
    ebp = POP32_VAL(esp); /* 0x15079330: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x15079331: ret  */
    RECOMP_REGS_OUT();
}

void sub_15079340(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x15079340u);

L_15079340:
    edi = edi; /* 0x15079340: mov edi, edi */
    PUSH32(esp, ebp); /* 0x15079342: push ebp */
    ebp = esp; /* 0x15079343: mov ebp, esp */
    eax = ebp + 0x14; /* 0x15079345: lea eax, [ebp + 0x14] */
    PUSH32(esp, eax); /* 0x15079348: push eax */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x15079349: push dword ptr [ebp + 0x10] */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x1507934C: push dword ptr [ebp + 0xc] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x1507934F: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_15078FB1); /* 0x15079352: call 0x15078fb1 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, eax); /* 0x15079357: push eax */
    RECOMP_CALL(sub_15079397); /* 0x15079358: call 0x15079397 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x14u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x14u; /* 0x1507935D: add esp, 0x14 */
    _flag_k = FK_ADD;
    ebp = POP32_VAL(esp); /* 0x15079360: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x15079361: ret  */
    RECOMP_REGS_OUT();
}

void sub_15079370(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x15079370u);

L_15079370:
    edi = edi; /* 0x15079370: mov edi, edi */
    PUSH32(esp, ebp); /* 0x15079372: push ebp */
    ebp = esp; /* 0x15079373: mov ebp, esp */
    eax = ebp + 0x10; /* 0x15079375: lea eax, [ebp + 0x10] */
    PUSH32(esp, eax); /* 0x15079378: push eax */
    PUSH32(esp, 0); /* 0x15079379: push 0 */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x1507937B: push dword ptr [ebp + 0xc] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x1507937E: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_15078FA5); /* 0x15079381: call 0x15078fa5 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, eax); /* 0x15079386: push eax */
    RECOMP_CALL(sub_15079397); /* 0x15079387: call 0x15079397 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x14u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x14u; /* 0x1507938C: add esp, 0x14 */
    _flag_k = FK_ADD;
    ebp = POP32_VAL(esp); /* 0x1507938F: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x15079390: ret  */
    RECOMP_REGS_OUT();
}

void sub_15079397(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x15079397u);

L_15079397:
    edi = edi; /* 0x15079397: mov edi, edi */
    PUSH32(esp, ebp); /* 0x15079399: push ebp */
    ebp = esp; /* 0x1507939A: mov ebp, esp */
    edx = MEM32(ebp + 0xC); /* 0x1507939C: mov edx, dword ptr [ebp + 0xc] */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x20u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x20u; /* 0x1507939F: sub esp, 0x20 */
    _flag_k = FK_CMP;
    ecx = edx; /* 0x150793A2: mov ecx, edx */
    PUSH32(esp, esi); /* 0x150793A4: push esi */
    PUSH32(esp, edi); /* 0x150793A5: push edi */
    esi = ecx + 0x2; /* 0x150793A6: lea esi, [ecx + 2] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edi = 0; /* 0x150793A9: xor edi, edi */
    _cf = 0;
    _flag_k = FK_TEST;
L_150793AB:
    SET_LO16(eax, MEM16(ecx)); /* 0x150793AB: mov ax, word ptr [ecx] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 2; /* 0x150793AE: add ecx, 2 */
    _flag_k = FK_ADD;
    /* cmp LO16(eax), LO16(edi) */ /* 0x150793B1: cmp ax, di */
    _flag_a = (uint32_t)(LO16(eax)) << 16; _flag_b = (uint32_t)(LO16(edi)) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    RECOMP_BACKEDGE();
    if (CMP_NE(_flag_a, _flag_b)) goto L_150793AB; /* 0x150793B4: jne 0x150793ab */
L_150793B6:
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ecx = ecx - esi; /* 0x150793B6: sub ecx, esi */
    _flag_k = FK_CMP;
    if (1u) _cf = (((ecx) >> 0) & 1u); /* 0x150793B8: sar ecx, 1 */
    if (1u) { _flag_a = recomp_flags_pack(((uint32_t)((int32_t)ecx >> 1u)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ecx = (uint32_t)((int32_t)ecx >> 1u);
    /* test edx, edx */ /* 0x150793BA: test edx, edx */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(edx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_150793DB; /* 0x150793BC: jne 0x150793db */
L_150793BE:
    RECOMP_CALL(sub_15036430); /* 0x150793BE: call 0x15036430 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, edi); /* 0x150793C3: push edi */
    PUSH32(esp, edi); /* 0x150793C4: push edi */
    PUSH32(esp, edi); /* 0x150793C5: push edi */
    PUSH32(esp, edi); /* 0x150793C6: push edi */
    PUSH32(esp, edi); /* 0x150793C7: push edi */
    MEM32(eax) = 0x16u; /* 0x150793C8: mov dword ptr [eax], 0x16 */
    RECOMP_CALL(sub_1505A110); /* 0x150793CE: call 0x1505a110 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x14u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x14u; /* 0x150793D3: add esp, 0x14 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)((eax | 0xFFFFFFFFu)); _flag_b = (uint32_t)((eax | 0xFFFFFFFFu));
    eax = eax | 0xFFFFFFFFu; /* 0x150793D6: or eax, 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_15079420; /* 0x150793D9: jmp 0x15079420 */
L_150793DB:
    /* cmp MEM32(ebp + 0x10), edi */ /* 0x150793DB: cmp dword ptr [ebp + 0x10], edi */
    _flag_a = (uint32_t)(MEM32(ebp + 0x10)); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_EQ(_flag_a, _flag_b)) goto L_150793BE; /* 0x150793DE: je 0x150793be */
L_150793E0:
    MEM32(ebp + (-0x14)) = 0x49u; /* 0x150793E0: mov dword ptr [ebp - 0x14], 0x49 */
    MEM32(ebp + (-0x18)) = edx; /* 0x150793E7: mov dword ptr [ebp - 0x18], edx */
    MEM32(ebp + (-0x20)) = edx; /* 0x150793EA: mov dword ptr [ebp - 0x20], edx */
    /* cmp ecx, 0x3FFFFFFFu */ /* 0x150793ED: cmp ecx, 0x3fffffff */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x3FFFFFFFu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_150793FE; /* 0x150793F3: jbe 0x150793fe */
L_150793F5:
    MEM32(ebp + (-0x1C)) = 0x7FFFFFFFu; /* 0x150793F5: mov dword ptr [ebp - 0x1c], 0x7fffffff */
    goto L_15079404; /* 0x150793FC: jmp 0x15079404 */
L_150793FE:
    eax = ecx + ecx; /* 0x150793FE: lea eax, [ecx + ecx] */
    MEM32(ebp + (-0x1C)) = eax; /* 0x15079401: mov dword ptr [ebp - 0x1c], eax */
L_15079404:
    PUSH32(esp, MEM32(ebp + 0x18)); /* 0x15079404: push dword ptr [ebp + 0x18] */
    ecx = MEM32(ebp + 0x8); /* 0x15079407: mov ecx, dword ptr [ebp + 8] */
    eax = ebp + (-0x20); /* 0x1507940A: lea eax, [ebp - 0x20] */
    PUSH32(esp, MEM32(ebp + 0x14)); /* 0x1507940D: push dword ptr [ebp + 0x14] */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x15079410: push dword ptr [ebp + 0x10] */
    PUSH32(esp, eax); /* 0x15079413: push eax */
    RECOMP_ICALL(MEM32(0x150C02B0)); /* 0x15079414: call dword ptr [0x150c02b0] */
    RECOMP_FLAGS_IN();
    RECOMP_ICALL(MEM32(ebp + 0x8)); /* 0x1507941A: call dword ptr [ebp + 8] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x10u; /* 0x1507941D: add esp, 0x10 */
    _flag_k = FK_ADD;
L_15079420:
    edi = POP32_VAL(esp); /* 0x15079420: pop edi */
    esi = POP32_VAL(esp); /* 0x15079421: pop esi */
    esp = ebp; ebp = POP32_VAL(esp); /* 0x15079422: leave  */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x15079423: ret  */
    RECOMP_REGS_OUT();
}

void sub_15079430(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x15079430u);

L_15079430:
    PUSH32(esp, 0x20u); /* 0x15079430: push 0x20 */
    PUSH32(esp, 0x150B1108u); /* 0x15079432: push 0x150b1108 */
    RECOMP_CALL(sub_1505E988); /* 0x15079437: call 0x1505e988 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ebx = 0; /* 0x1507943C: xor ebx, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
    esi = ebx; /* 0x1507943E: mov esi, ebx */
    MEM32(ebp + (-0x24)) = ebx; /* 0x15079440: mov dword ptr [ebp - 0x24], ebx */
    MEM32(ebp + (-0x20)) = ebx; /* 0x15079443: mov dword ptr [ebp - 0x20], ebx */
    PUSH32(esp, 2); /* 0x15079446: push 2 */
    RECOMP_CALL(sub_15068E1A); /* 0x15079448: call 0x15068e1a */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1507944D: pop ecx */
    /* test eax, eax */ /* 0x1507944E: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_15079683; /* 0x15079450: je 0x15079683 */
L_15079456:
    PUSH32(esp, 0x15007010u); /* 0x15079456: push 0x15007010 */
    PUSH32(esp, ebx); /* 0x1507945B: push ebx */
    eax = ebp + (-0x20); /* 0x1507945C: lea eax, [ebp - 0x20] */
    PUSH32(esp, eax); /* 0x1507945F: push eax */
    RECOMP_CALL(sub_1505D654); /* 0x15079460: call 0x1505d654 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x15079465: add esp, 0xc */
    _flag_k = FK_ADD;
    edi = eax; /* 0x15079468: mov edi, eax */
    /* test edi, edi */ /* 0x1507946A: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_15079484; /* 0x1507946C: je 0x15079484 */
L_1507946E:
    /* cmp edi, 0x16u */ /* 0x1507946E: cmp edi, 0x16 */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(0x16u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_15079480; /* 0x15079471: jne 0x15079480 */
L_15079473:
    PUSH32(esp, ebx); /* 0x15079473: push ebx */
    PUSH32(esp, ebx); /* 0x15079474: push ebx */
    PUSH32(esp, ebx); /* 0x15079475: push ebx */
    PUSH32(esp, ebx); /* 0x15079476: push ebx */
    PUSH32(esp, ebx); /* 0x15079477: push ebx */
    RECOMP_CALL(sub_1505A11B); /* 0x15079478: call 0x1505a11b */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x14u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x14u; /* 0x1507947D: add esp, 0x14 */
    _flag_k = FK_ADD;
L_15079480:
    /* test edi, edi */ /* 0x15079480: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1507949D; /* 0x15079482: jne 0x1507949d */
L_15079484:
    /* cmp MEM32(ebp + (-0x20)), ebx */ /* 0x15079484: cmp dword ptr [ebp - 0x20], ebx */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x20))); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1507949D; /* 0x15079487: je 0x1507949d */
L_15079489:
    PUSH32(esp, ebx); /* 0x15079489: push ebx */
    PUSH32(esp, MEM32(ebp + (-0x20))); /* 0x1507948A: push dword ptr [ebp - 0x20] */
    RECOMP_CALL(sub_15036590); /* 0x1507948D: call 0x15036590 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x15079492: pop ecx */
    ecx = POP32_VAL(esp); /* 0x15079493: pop ecx */
    /* test eax, eax */ /* 0x15079494: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1507949D; /* 0x15079496: jne 0x1507949d */
L_15079498:
    edi = MEM32(ebp + (-0x20)); /* 0x15079498: mov edi, dword ptr [ebp - 0x20] */
    goto L_150794C9; /* 0x1507949B: jmp 0x150794c9 */
L_1507949D:
    edi = MEM32(ebp + 0x8); /* 0x1507949D: mov edi, dword ptr [ebp + 8] */
    /* test edi, edi */ /* 0x150794A0: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_150794B1; /* 0x150794A2: je 0x150794b1 */
L_150794A4:
    PUSH32(esp, ebx); /* 0x150794A4: push ebx */
    PUSH32(esp, edi); /* 0x150794A5: push edi */
    RECOMP_CALL(sub_15036590); /* 0x150794A6: call 0x15036590 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x150794AB: pop ecx */
    ecx = POP32_VAL(esp); /* 0x150794AC: pop ecx */
    /* test eax, eax */ /* 0x150794AD: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_150794C9; /* 0x150794AF: je 0x150794c9 */
L_150794B1:
    PUSH32(esp, ebx); /* 0x150794B1: push ebx */
    edi = 0x150048FCu; /* 0x150794B2: mov edi, 0x150048fc */
    PUSH32(esp, edi); /* 0x150794B7: push edi */
    RECOMP_CALL(sub_15036590); /* 0x150794B8: call 0x15036590 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x150794BD: pop ecx */
    ecx = POP32_VAL(esp); /* 0x150794BE: pop ecx */
    ecx = 0x150052E4u; /* 0x150794BF: mov ecx, 0x150052e4 */
    /* test eax, eax */ /* 0x150794C4: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) { edi = ecx; } /* 0x150794C6: cmovne edi, ecx */
L_150794C9:
    /* cmp MEM32(ebp + 0xC), ebx */ /* 0x150794C9: cmp dword ptr [ebp + 0xc], ebx */
    _flag_a = (uint32_t)(MEM32(ebp + 0xC)); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_150794E0; /* 0x150794CC: je 0x150794e0 */
L_150794CE:
    esi = MEM32(ebp + 0xC); /* 0x150794CE: mov esi, dword ptr [ebp + 0xc] */
    ecx = esi + 0x1; /* 0x150794D1: lea ecx, [esi + 1] */
L_150794D4:
    SET_LO8(eax, MEM8(esi)); /* 0x150794D4: mov al, byte ptr [esi] */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi + 1; /* 0x150794D6: inc esi */
    _flag_k = FK_INC;
    /* test LO8(eax), LO8(eax) */ /* 0x150794D7: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_150794D4; /* 0x150794D9: jne 0x150794d4 */
L_150794DB:
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esi = esi - ecx; /* 0x150794DB: sub esi, ecx */
    _flag_k = FK_CMP;
    MEM32(ebp + (-0x24)) = esi; /* 0x150794DD: mov dword ptr [ebp - 0x24], esi */
L_150794E0:
    ecx = edi; /* 0x150794E0: mov ecx, edi */
    edx = ecx + 0x1; /* 0x150794E2: lea edx, [ecx + 1] */
L_150794E5:
    SET_LO8(eax, MEM8(ecx)); /* 0x150794E5: mov al, byte ptr [ecx] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx + 1; /* 0x150794E7: inc ecx */
    _flag_k = FK_INC;
    /* test LO8(eax), LO8(eax) */ /* 0x150794E8: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_150794E5; /* 0x150794EA: jne 0x150794e5 */
L_150794EC:
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ecx = ecx - edx; /* 0x150794EC: sub ecx, edx */
    _flag_k = FK_CMP;
    eax = ecx + 0xC; /* 0x150794EE: lea eax, [ecx + 0xc] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + esi; /* 0x150794F1: add eax, esi */
    _flag_k = FK_ADD;
    MEM32(ebp + (-0x1C)) = eax; /* 0x150794F3: mov dword ptr [ebp - 0x1c], eax */
    PUSH32(esp, 1); /* 0x150794F6: push 1 */
    PUSH32(esp, eax); /* 0x150794F8: push eax */
    RECOMP_CALL(sub_150487F0); /* 0x150794F9: call 0x150487f0 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x150794FE: pop ecx */
    ecx = POP32_VAL(esp); /* 0x150794FF: pop ecx */
    esi = eax; /* 0x15079500: mov esi, eax */
    MEM32(ebp + (-0x28)) = esi; /* 0x15079502: mov dword ptr [ebp - 0x28], esi */
    /* test esi, esi */ /* 0x15079505: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_15079671; /* 0x15079507: je 0x15079671 */
L_1507950D:
    MEM8(esi) = (uint8_t)(LO8(ebx)); /* 0x1507950D: mov byte ptr [esi], bl */
    PUSH32(esp, edi); /* 0x1507950F: push edi */
    PUSH32(esp, MEM32(ebp + (-0x1C))); /* 0x15079510: push dword ptr [ebp - 0x1c] */
    PUSH32(esp, esi); /* 0x15079513: push esi */
    RECOMP_CALL(sub_1508E450); /* 0x15079514: call 0x1508e450 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x15079519: add esp, 0xc */
    _flag_k = FK_ADD;
    /* test eax, eax */ /* 0x1507951C: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1507952D; /* 0x1507951E: je 0x1507952d */
L_15079520:
    PUSH32(esp, ebx); /* 0x15079520: push ebx */
    PUSH32(esp, ebx); /* 0x15079521: push ebx */
    PUSH32(esp, ebx); /* 0x15079522: push ebx */
    PUSH32(esp, ebx); /* 0x15079523: push ebx */
    PUSH32(esp, ebx); /* 0x15079524: push ebx */
    RECOMP_CALL(sub_1505A11B); /* 0x15079525: call 0x1505a11b */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x14u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x14u; /* 0x1507952A: add esp, 0x14 */
    _flag_k = FK_ADD;
L_1507952D:
    ecx = edi; /* 0x1507952D: mov ecx, edi */
    edx = ecx + 0x1; /* 0x1507952F: lea edx, [ecx + 1] */
L_15079532:
    SET_LO8(eax, MEM8(ecx)); /* 0x15079532: mov al, byte ptr [ecx] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx + 1; /* 0x15079534: inc ecx */
    _flag_k = FK_INC;
    /* test LO8(eax), LO8(eax) */ /* 0x15079535: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_15079532; /* 0x15079537: jne 0x15079532 */
L_15079539:
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ecx = ecx - edx; /* 0x15079539: sub ecx, edx */
    _flag_k = FK_CMP;
    eax = ecx + (-0x1); /* 0x1507953B: lea eax, [ecx - 1] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + edi; /* 0x1507953E: add eax, edi */
    _flag_k = FK_ADD;
    MEM32(ebp + (-0x2C)) = eax; /* 0x15079540: mov dword ptr [ebp - 0x2c], eax */
    SET_LO8(eax, MEM8(eax)); /* 0x15079543: mov al, byte ptr [eax] */
    /* cmp LO8(eax), 0x5Cu */ /* 0x15079545: cmp al, 0x5c */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(0x5Cu) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_15079558; /* 0x15079547: jne 0x15079558 */
L_15079549:
    PUSH32(esp, 0x5Cu); /* 0x15079549: push 0x5c */
    PUSH32(esp, edi); /* 0x1507954B: push edi */
    RECOMP_CALL(sub_15055AA0); /* 0x1507954C: call 0x15055aa0 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x15079551: pop ecx */
    ecx = POP32_VAL(esp); /* 0x15079552: pop ecx */
    /* cmp MEM32(ebp + (-0x2C)), eax */ /* 0x15079553: cmp dword ptr [ebp - 0x2c], eax */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x2C))); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    goto L_1507955A; /* 0x15079556: jmp 0x1507955a */
L_15079558:
    /* cmp LO8(eax), 0x2Fu */ /* 0x15079558: cmp al, 0x2f */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(0x2Fu) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
L_1507955A:
    edi = MEM32(ebp + (-0x1C)); /* 0x1507955A: mov edi, dword ptr [ebp - 0x1c] */
    if (recomp_cond_cf(_flag_k, _flag_a, _flag_b, CC_E, _cf)) goto L_1507957F; /* 0x1507955D: je 0x1507957f */
L_1507955F:
    PUSH32(esp, 0x150048FCu); /* 0x1507955F: push 0x150048fc */
    PUSH32(esp, edi); /* 0x15079564: push edi */
    PUSH32(esp, esi); /* 0x15079565: push esi */
    RECOMP_CALL(sub_1508E450); /* 0x15079566: call 0x1508e450 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x1507956B: add esp, 0xc */
    _flag_k = FK_ADD;
    /* test eax, eax */ /* 0x1507956E: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1507957F; /* 0x15079570: je 0x1507957f */
L_15079572:
    PUSH32(esp, ebx); /* 0x15079572: push ebx */
    PUSH32(esp, ebx); /* 0x15079573: push ebx */
    PUSH32(esp, ebx); /* 0x15079574: push ebx */
    PUSH32(esp, ebx); /* 0x15079575: push ebx */
    PUSH32(esp, ebx); /* 0x15079576: push ebx */
    RECOMP_CALL(sub_1505A11B); /* 0x15079577: call 0x1505a11b */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x14u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x14u; /* 0x1507957C: add esp, 0x14 */
    _flag_k = FK_ADD;
L_1507957F:
    /* cmp MEM32(ebp + 0xC), ebx */ /* 0x1507957F: cmp dword ptr [ebp + 0xc], ebx */
    _flag_a = (uint32_t)(MEM32(ebp + 0xC)); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_150795A2; /* 0x15079582: je 0x150795a2 */
L_15079584:
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x15079584: push dword ptr [ebp + 0xc] */
    PUSH32(esp, edi); /* 0x15079587: push edi */
    PUSH32(esp, esi); /* 0x15079588: push esi */
    RECOMP_CALL(sub_1508E450); /* 0x15079589: call 0x1508e450 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x1507958E: add esp, 0xc */
    _flag_k = FK_ADD;
    /* test eax, eax */ /* 0x15079591: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_150795A2; /* 0x15079593: je 0x150795a2 */
L_15079595:
    PUSH32(esp, ebx); /* 0x15079595: push ebx */
    PUSH32(esp, ebx); /* 0x15079596: push ebx */
    PUSH32(esp, ebx); /* 0x15079597: push ebx */
    PUSH32(esp, ebx); /* 0x15079598: push ebx */
    PUSH32(esp, ebx); /* 0x15079599: push ebx */
    RECOMP_CALL(sub_1505A11B); /* 0x1507959A: call 0x1505a11b */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x14u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x14u; /* 0x1507959F: add esp, 0x14 */
    _flag_k = FK_ADD;
L_150795A2:
    ecx = esi; /* 0x150795A2: mov ecx, esi */
    edx = ecx + 0x1; /* 0x150795A4: lea edx, [ecx + 1] */
L_150795A7:
    SET_LO8(eax, MEM8(ecx)); /* 0x150795A7: mov al, byte ptr [ecx] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx + 1; /* 0x150795A9: inc ecx */
    _flag_k = FK_INC;
    /* test LO8(eax), LO8(eax) */ /* 0x150795AA: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_150795A7; /* 0x150795AC: jne 0x150795a7 */
L_150795AE:
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ecx = ecx - edx; /* 0x150795AE: sub ecx, edx */
    _flag_k = FK_CMP;
    eax = ecx + esi; /* 0x150795B0: lea eax, [ecx + esi] */
    MEM32(ebp + (-0x30)) = eax; /* 0x150795B3: mov dword ptr [ebp - 0x30], eax */
    PUSH32(esp, 2); /* 0x150795B6: push 2 */
    RECOMP_CALL(sub_15068D80); /* 0x150795B8: call 0x15068d80 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x150795BD: pop ecx */
    MEM32(ebp + (-0x4)) = ebx; /* 0x150795BE: mov dword ptr [ebp - 4], ebx */
    eax = MEM32(ebp + (-0x24)); /* 0x150795C1: mov eax, dword ptr [ebp - 0x24] */
    /* cmp MEM32(0x150BE974), eax */ /* 0x150795C4: cmp dword ptr [0x150be974], eax */
    _flag_a = (uint32_t)(MEM32(0x150BE974)); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_AE(_flag_a, _flag_b)) goto L_150795D6; /* 0x150795CA: jae 0x150795d6 */
L_150795CC:
    MEM32(0x150BD684) = 1; /* 0x150795CC: mov dword ptr [0x150bd684], 1 */
L_150795D6:
    MEM32(0x150BE974) = eax; /* 0x150795D6: mov dword ptr [0x150be974], eax */
    eax = MEM32(0x150BD684); /* 0x150795DB: mov eax, dword ptr [0x150bd684] */
    MEM32(ebp + (-0x2C)) = eax; /* 0x150795E0: mov dword ptr [ebp - 0x2c], eax */
    RECOMP_CALL(sub_15036430); /* 0x150795E3: call 0x15036430 */
    RECOMP_FLAGS_IN();
    edi = MEM32(eax); /* 0x150795E8: mov edi, dword ptr [eax] */
L_150795EA:
    ecx = MEM32(0x150BD684); /* 0x150795EA: mov ecx, dword ptr [0x150bd684] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx + 1; /* 0x150795F0: inc ecx */
    _flag_k = FK_INC;
    MEM32(0x150BD684) = ecx; /* 0x150795F1: mov dword ptr [0x150bd684], ecx */
    eax = ecx; /* 0x150795F7: mov eax, ecx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(ebp + (-0x2C)));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - MEM32(ebp + (-0x2C)); /* 0x150795F9: sub eax, dword ptr [ebp - 0x2c] */
    _flag_k = FK_CMP;
    /* cmp eax, 0x7FFFFFFFu */ /* 0x150795FC: cmp eax, 0x7fffffff */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x7FFFFFFFu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_A(_flag_a, _flag_b)) goto L_15079652; /* 0x15079601: ja 0x15079652 */
L_15079603:
    PUSH32(esp, 0xAu); /* 0x15079603: push 0xa */
    eax = MEM32(ebp + (-0x1C)); /* 0x15079605: mov eax, dword ptr [ebp - 0x1c] */
    edx = MEM32(ebp + (-0x30)); /* 0x15079608: mov edx, dword ptr [ebp - 0x30] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - edx; /* 0x1507960B: sub eax, edx */
    _flag_k = FK_CMP;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + esi; /* 0x1507960D: add eax, esi */
    _flag_k = FK_ADD;
    PUSH32(esp, eax); /* 0x1507960F: push eax */
    PUSH32(esp, edx); /* 0x15079610: push edx */
    PUSH32(esp, ecx); /* 0x15079611: push ecx */
    RECOMP_CALL(sub_15030EF0); /* 0x15079612: call 0x15030ef0 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x10u; /* 0x15079617: add esp, 0x10 */
    _flag_k = FK_ADD;
    /* test eax, eax */ /* 0x1507961A: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1507962B; /* 0x1507961C: je 0x1507962b */
L_1507961E:
    PUSH32(esp, ebx); /* 0x1507961E: push ebx */
    PUSH32(esp, ebx); /* 0x1507961F: push ebx */
    PUSH32(esp, ebx); /* 0x15079620: push ebx */
    PUSH32(esp, ebx); /* 0x15079621: push ebx */
    PUSH32(esp, ebx); /* 0x15079622: push ebx */
    RECOMP_CALL(sub_1505A11B); /* 0x15079623: call 0x1505a11b */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x14u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x14u; /* 0x15079628: add esp, 0x14 */
    _flag_k = FK_ADD;
L_1507962B:
    RECOMP_CALL(sub_15036430); /* 0x1507962B: call 0x15036430 */
    RECOMP_FLAGS_IN();
    MEM32(eax) = ebx; /* 0x15079630: mov dword ptr [eax], ebx */
    PUSH32(esp, ebx); /* 0x15079632: push ebx */
    PUSH32(esp, esi); /* 0x15079633: push esi */
    RECOMP_CALL(sub_15036590); /* 0x15079634: call 0x15036590 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x15079639: pop ecx */
    ecx = POP32_VAL(esp); /* 0x1507963A: pop ecx */
    /* test eax, eax */ /* 0x1507963B: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_Z(_flag_a, _flag_b)) goto L_150795EA; /* 0x1507963D: je 0x150795ea */
L_1507963F:
    RECOMP_CALL(sub_15036430); /* 0x1507963F: call 0x15036430 */
    RECOMP_FLAGS_IN();
    /* cmp MEM32(eax), 0xDu */ /* 0x15079644: cmp dword ptr [eax], 0xd */
    _flag_a = (uint32_t)(MEM32(eax)); _flag_b = (uint32_t)(0xDu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_EQ(_flag_a, _flag_b)) goto L_150795EA; /* 0x15079647: je 0x150795ea */
L_15079649:
    RECOMP_CALL(sub_15036430); /* 0x15079649: call 0x15036430 */
    RECOMP_FLAGS_IN();
    MEM32(eax) = edi; /* 0x1507964E: mov dword ptr [eax], edi */
    goto L_15079665; /* 0x15079650: jmp 0x15079665 */
L_15079652:
    RECOMP_CALL(sub_15036430); /* 0x15079652: call 0x15036430 */
    RECOMP_FLAGS_IN();
    MEM32(eax) = edi; /* 0x15079657: mov dword ptr [eax], edi */
    PUSH32(esp, esi); /* 0x15079659: push esi */
    RECOMP_CALL(sub_15048840); /* 0x1507965A: call 0x15048840 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1507965F: pop ecx */
    esi = ebx; /* 0x15079660: mov esi, ebx */
    MEM32(ebp + (-0x28)) = esi; /* 0x15079662: mov dword ptr [ebp - 0x28], esi */
L_15079665:
    MEM32(ebp + (-0x4)) = 0xFFFFFFFEu; /* 0x15079665: mov dword ptr [ebp - 4], 0xfffffffe */
    RECOMP_CALL(sub_15079698); /* 0x1507966C: call 0x15079698 */
    RECOMP_FLAGS_IN();
L_15079671:
    PUSH32(esp, MEM32(ebp + (-0x20))); /* 0x15079671: push dword ptr [ebp - 0x20] */
    RECOMP_CALL(sub_15048840); /* 0x15079674: call 0x15048840 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, ebx); /* 0x15079679: push ebx */
    RECOMP_CALL(sub_15048840); /* 0x1507967A: call 0x15048840 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1507967F: pop ecx */
    ecx = POP32_VAL(esp); /* 0x15079680: pop ecx */
    eax = esi; /* 0x15079681: mov eax, esi */
L_15079683:
    ecx = MEM32(ebp + (-0x10)); /* 0x15079683: mov ecx, dword ptr [ebp - 0x10] */
    MEM32(FS_BASE + (0)) = ecx; /* 0x15079686: mov dword ptr fs:[0], ecx */
    ecx = POP32_VAL(esp); /* 0x1507968D: pop ecx */
    edi = POP32_VAL(esp); /* 0x1507968E: pop edi */
    esi = POP32_VAL(esp); /* 0x1507968F: pop esi */
    ebx = POP32_VAL(esp); /* 0x15079690: pop ebx */
    esp = ebp; ebp = POP32_VAL(esp); /* 0x15079691: leave  */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x15079692: ret  */
    RECOMP_REGS_OUT();
}

void sub_15079698(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x15079698u);

L_15079698:
    PUSH32(esp, 2); /* 0x15079698: push 2 */
    RECOMP_CALL(sub_15068F50); /* 0x1507969A: call 0x15068f50 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1507969F: pop ecx */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x150796A0: ret  */
    RECOMP_REGS_OUT();
}

void sub_150796B0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x150796B0u);

L_150796B0:
    edi = edi; /* 0x150796B0: mov edi, edi */
    PUSH32(esp, ebp); /* 0x150796B2: push ebp */
    ebp = esp; /* 0x150796B3: mov ebp, esp */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x150796B5: push dword ptr [ebp + 0xc] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x150796B8: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_15079430); /* 0x150796BB: call 0x15079430 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x150796C0: pop ecx */
    ecx = POP32_VAL(esp); /* 0x150796C1: pop ecx */
    ebp = POP32_VAL(esp); /* 0x150796C2: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x150796C3: ret  */
    RECOMP_REGS_OUT();
}

void sub_150796D0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x150796D0u);

L_150796D0:
    edi = edi; /* 0x150796D0: mov edi, edi */
    PUSH32(esp, ebp); /* 0x150796D2: push ebp */
    ebp = esp; /* 0x150796D3: mov ebp, esp */
    PUSH32(esp, MEM32(ebp + 0x14)); /* 0x150796D5: push dword ptr [ebp + 0x14] */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x150796D8: push dword ptr [ebp + 0x10] */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x150796DB: push dword ptr [ebp + 0xc] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x150796DE: push dword ptr [ebp + 8] */
    PUSH32(esp, 0x1507E600u); /* 0x150796E1: push 0x1507e600 */
    RECOMP_CALL(sub_150797B5); /* 0x150796E6: call 0x150797b5 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x14u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x14u; /* 0x150796EB: add esp, 0x14 */
    _flag_k = FK_ADD;
    ebp = POP32_VAL(esp); /* 0x150796EE: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x150796EF: ret  */
    RECOMP_REGS_OUT();
}

void sub_15079700(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x15079700u);

L_15079700:
    edi = edi; /* 0x15079700: mov edi, edi */
    PUSH32(esp, ebp); /* 0x15079702: push ebp */
    ebp = esp; /* 0x15079703: mov ebp, esp */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x15079705: push dword ptr [ebp + 0x10] */
    PUSH32(esp, 0); /* 0x15079708: push 0 */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x1507970A: push dword ptr [ebp + 0xc] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x1507970D: push dword ptr [ebp + 8] */
    PUSH32(esp, 0x1507F390u); /* 0x15079710: push 0x1507f390 */
    RECOMP_CALL(sub_150797B5); /* 0x15079715: call 0x150797b5 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x14u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x14u; /* 0x1507971A: add esp, 0x14 */
    _flag_k = FK_ADD;
    ebp = POP32_VAL(esp); /* 0x1507971D: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1507971E: ret  */
    RECOMP_REGS_OUT();
}

void sub_15079730(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x15079730u);

L_15079730:
    edi = edi; /* 0x15079730: mov edi, edi */
    PUSH32(esp, ebp); /* 0x15079732: push ebp */
    ebp = esp; /* 0x15079733: mov ebp, esp */
    PUSH32(esp, MEM32(ebp + 0x14)); /* 0x15079735: push dword ptr [ebp + 0x14] */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x15079738: push dword ptr [ebp + 0x10] */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x1507973B: push dword ptr [ebp + 0xc] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x1507973E: push dword ptr [ebp + 8] */
    PUSH32(esp, 0x1507F390u); /* 0x15079741: push 0x1507f390 */
    RECOMP_CALL(sub_150797B5); /* 0x15079746: call 0x150797b5 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x14u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x14u; /* 0x1507974B: add esp, 0x14 */
    _flag_k = FK_ADD;
    ebp = POP32_VAL(esp); /* 0x1507974E: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1507974F: ret  */
    RECOMP_REGS_OUT();
}

void sub_15079760(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x15079760u);

L_15079760:
    edi = edi; /* 0x15079760: mov edi, edi */
    PUSH32(esp, ebp); /* 0x15079762: push ebp */
    ebp = esp; /* 0x15079763: mov ebp, esp */
    PUSH32(esp, MEM32(ebp + 0x14)); /* 0x15079765: push dword ptr [ebp + 0x14] */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x15079768: push dword ptr [ebp + 0x10] */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x1507976B: push dword ptr [ebp + 0xc] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x1507976E: push dword ptr [ebp + 8] */
    PUSH32(esp, 0x15081150u); /* 0x15079771: push 0x15081150 */
    RECOMP_CALL(sub_150797B5); /* 0x15079776: call 0x150797b5 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x14u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x14u; /* 0x1507977B: add esp, 0x14 */
    _flag_k = FK_ADD;
    ebp = POP32_VAL(esp); /* 0x1507977E: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1507977F: ret  */
    RECOMP_REGS_OUT();
}

void sub_15079790(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x15079790u);

L_15079790:
    edi = edi; /* 0x15079790: mov edi, edi */
    PUSH32(esp, ebp); /* 0x15079792: push ebp */
    ebp = esp; /* 0x15079793: mov ebp, esp */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x15079795: push dword ptr [ebp + 0x10] */
    PUSH32(esp, 0); /* 0x15079798: push 0 */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x1507979A: push dword ptr [ebp + 0xc] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x1507979D: push dword ptr [ebp + 8] */
    PUSH32(esp, 0x1507E600u); /* 0x150797A0: push 0x1507e600 */
    RECOMP_CALL(sub_150797B5); /* 0x150797A5: call 0x150797b5 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x14u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x14u; /* 0x150797AA: add esp, 0x14 */
    _flag_k = FK_ADD;
    ebp = POP32_VAL(esp); /* 0x150797AD: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x150797AE: ret  */
    RECOMP_REGS_OUT();
}

void sub_150797B5(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x150797B5u);

L_150797B5:
    PUSH32(esp, 0x14u); /* 0x150797B5: push 0x14 */
    PUSH32(esp, 0x150B1128u); /* 0x150797B7: push 0x150b1128 */
    RECOMP_CALL(sub_1505E988); /* 0x150797BC: call 0x1505e988 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edi = 0; /* 0x150797C1: xor edi, edi */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x1C)) = edi; /* 0x150797C3: mov dword ptr [ebp - 0x1c], edi */
    ebx = MEM32(ebp + 0xC); /* 0x150797C6: mov ebx, dword ptr [ebp + 0xc] */
    /* test ebx, ebx */ /* 0x150797C9: test ebx, ebx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ebx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_150797ED; /* 0x150797CB: jne 0x150797ed */
L_150797CD:
    RECOMP_CALL(sub_15036430); /* 0x150797CD: call 0x15036430 */
    RECOMP_FLAGS_IN();
    MEM32(eax) = 0x16u; /* 0x150797D2: mov dword ptr [eax], 0x16 */
    PUSH32(esp, edi); /* 0x150797D8: push edi */
    PUSH32(esp, edi); /* 0x150797D9: push edi */
    PUSH32(esp, edi); /* 0x150797DA: push edi */
    PUSH32(esp, edi); /* 0x150797DB: push edi */
    PUSH32(esp, edi); /* 0x150797DC: push edi */
    RECOMP_CALL(sub_1505A110); /* 0x150797DD: call 0x1505a110 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x14u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x14u; /* 0x150797E2: add esp, 0x14 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)((eax | 0xFFFFFFFFu)); _flag_b = (uint32_t)((eax | 0xFFFFFFFFu));
    eax = eax | 0xFFFFFFFFu; /* 0x150797E5: or eax, 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_150798D5; /* 0x150797E8: jmp 0x150798d5 */
L_150797ED:
    /* cmp MEM32(ebp + 0x10), edi */ /* 0x150797ED: cmp dword ptr [ebp + 0x10], edi */
    _flag_a = (uint32_t)(MEM32(ebp + 0x10)); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_EQ(_flag_a, _flag_b)) goto L_150797CD; /* 0x150797F0: je 0x150797cd */
L_150797F2:
    MEM32(ebp + (-0x24)) = ebx; /* 0x150797F2: mov dword ptr [ebp - 0x24], ebx */
    PUSH32(esp, ebx); /* 0x150797F5: push ebx */
    RECOMP_CALL(sub_1506A946); /* 0x150797F6: call 0x1506a946 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x150797FB: pop ecx */
    MEM32(ebp + (-0x4)) = edi; /* 0x150797FC: mov dword ptr [ebp - 4], edi */
    /* test MEM8(ebx + 0xC), 0x40u */ /* 0x150797FF: test byte ptr [ebx + 0xc], 0x40 */
    _flag_a = (uint32_t)(MEM8(ebx + 0xC)) << 24; _flag_b = (uint32_t)(0x40u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_15079870; /* 0x15079803: jne 0x15079870 */
L_15079805:
    PUSH32(esp, ebx); /* 0x15079805: push ebx */
    RECOMP_CALL(sub_15076A90); /* 0x15079806: call 0x15076a90 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1507980B: pop ecx */
    /* cmp eax, 0xFFFFFFFFu */ /* 0x1507980C: cmp eax, -1 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xFFFFFFFFu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_15079834; /* 0x1507980F: je 0x15079834 */
L_15079811:
    /* cmp eax, 0xFFFFFFFEu */ /* 0x15079811: cmp eax, -2 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xFFFFFFFEu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_15079834; /* 0x15079814: je 0x15079834 */
L_15079816:
    edx = eax; /* 0x15079816: mov edx, eax */
    if (5u) _cf = (((edx) >> 4) & 1u); /* 0x15079818: sar edx, 5 */
    if (5u) { _flag_a = recomp_flags_pack(((uint32_t)((int32_t)edx >> 5u)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    edx = (uint32_t)((int32_t)edx >> 5u);
    esi = eax; /* 0x1507981B: mov esi, eax */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(0x1Fu);
    esi = esi & 0x1Fu; /* 0x1507981D: and esi, 0x1f */
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = (uint32_t)((int32_t)esi * (int32_t)0x24u); /* 0x15079820: imul ecx, esi, 0x24 */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(MEM32(edx * 4 + 0x150BEBC0));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + MEM32(edx * 4 + 0x150BEBC0); /* 0x15079823: add ecx, dword ptr [edx*4 + 0x150bebc0] */
    _flag_k = FK_ADD;
    MEM32(ebp + (-0x20)) = ecx; /* 0x1507982A: mov dword ptr [ebp - 0x20], ecx */
    ecx = 0x150BCEA0u; /* 0x1507982D: mov ecx, 0x150bcea0 */
    goto L_15079846; /* 0x15079832: jmp 0x15079846 */
L_15079834:
    ecx = 0x150BCEA0u; /* 0x15079834: mov ecx, 0x150bcea0 */
    MEM32(ebp + (-0x20)) = ecx; /* 0x15079839: mov dword ptr [ebp - 0x20], ecx */
    edx = eax; /* 0x1507983C: mov edx, eax */
    if (5u) _cf = (((edx) >> 4) & 1u); /* 0x1507983E: sar edx, 5 */
    if (5u) { _flag_a = recomp_flags_pack(((uint32_t)((int32_t)edx >> 5u)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    edx = (uint32_t)((int32_t)edx >> 5u);
    esi = eax; /* 0x15079841: mov esi, eax */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(0x1Fu);
    esi = esi & 0x1Fu; /* 0x15079843: and esi, 0x1f */
    _cf = 0;
    _flag_k = FK_TEST;
L_15079846:
    ebx = MEM32(ebp + (-0x20)); /* 0x15079846: mov ebx, dword ptr [ebp - 0x20] */
    /* test MEM8(ebx + 0x8), 3 */ /* 0x15079849: test byte ptr [ebx + 8], 3 */
    _flag_a = (uint32_t)(MEM8(ebx + 0x8)) << 24; _flag_b = (uint32_t)(3) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    ebx = MEM32(ebp + 0xC); /* 0x1507984D: mov ebx, dword ptr [ebp + 0xc] */
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1507986C; /* 0x15079850: jne 0x1507986c */
L_15079852:
    /* cmp eax, 0xFFFFFFFFu */ /* 0x15079852: cmp eax, -1 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xFFFFFFFFu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_15079866; /* 0x15079855: je 0x15079866 */
L_15079857:
    /* cmp eax, 0xFFFFFFFEu */ /* 0x15079857: cmp eax, -2 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xFFFFFFFEu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_15079866; /* 0x1507985A: je 0x15079866 */
L_1507985C:
    ecx = (uint32_t)((int32_t)esi * (int32_t)0x24u); /* 0x1507985C: imul ecx, esi, 0x24 */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(MEM32(edx * 4 + 0x150BEBC0));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + MEM32(edx * 4 + 0x150BEBC0); /* 0x1507985F: add ecx, dword ptr [edx*4 + 0x150bebc0] */
    _flag_k = FK_ADD;
L_15079866:
    /* test MEM8(ecx + 0x8), 8 */ /* 0x15079866: test byte ptr [ecx + 8], 8 */
    _flag_a = (uint32_t)(MEM8(ecx + 0x8)) << 24; _flag_b = (uint32_t)(8) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_15079870; /* 0x1507986A: je 0x15079870 */
L_1507986C:
    eax = edi; /* 0x1507986C: mov eax, edi */
    goto L_15079873; /* 0x1507986E: jmp 0x15079873 */
L_15079870:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x15079870: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x15079872: inc eax */
    _flag_k = FK_INC;
L_15079873:
    /* test eax, eax */ /* 0x15079873: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_15079895; /* 0x15079875: jne 0x15079895 */
L_15079877:
    RECOMP_CALL(sub_15036430); /* 0x15079877: call 0x15036430 */
    RECOMP_FLAGS_IN();
    MEM32(eax) = 0x16u; /* 0x1507987C: mov dword ptr [eax], 0x16 */
    PUSH32(esp, edi); /* 0x15079882: push edi */
    PUSH32(esp, edi); /* 0x15079883: push edi */
    PUSH32(esp, edi); /* 0x15079884: push edi */
    PUSH32(esp, edi); /* 0x15079885: push edi */
    PUSH32(esp, edi); /* 0x15079886: push edi */
    RECOMP_CALL(sub_1505A110); /* 0x15079887: call 0x1505a110 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x14u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x14u; /* 0x1507988C: add esp, 0x14 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)((edi | 0xFFFFFFFFu)); _flag_b = (uint32_t)((edi | 0xFFFFFFFFu));
    edi = edi | 0xFFFFFFFFu; /* 0x1507988F: or edi, 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x1C)) = edi; /* 0x15079892: mov dword ptr [ebp - 0x1c], edi */
L_15079895:
    /* test edi, edi */ /* 0x15079895: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_150798C7; /* 0x15079897: jne 0x150798c7 */
L_15079899:
    PUSH32(esp, ebx); /* 0x15079899: push ebx */
    RECOMP_CALL(sub_15083DAF); /* 0x1507989A: call 0x15083daf */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1507989F: pop ecx */
    esi = eax; /* 0x150798A0: mov esi, eax */
    PUSH32(esp, MEM32(ebp + 0x18)); /* 0x150798A2: push dword ptr [ebp + 0x18] */
    PUSH32(esp, MEM32(ebp + 0x14)); /* 0x150798A5: push dword ptr [ebp + 0x14] */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x150798A8: push dword ptr [ebp + 0x10] */
    PUSH32(esp, ebx); /* 0x150798AB: push ebx */
    ecx = MEM32(ebp + 0x8); /* 0x150798AC: mov ecx, dword ptr [ebp + 8] */
    RECOMP_ICALL(MEM32(0x150C02B0)); /* 0x150798AF: call dword ptr [0x150c02b0] */
    RECOMP_FLAGS_IN();
    RECOMP_ICALL(MEM32(ebp + 0x8)); /* 0x150798B5: call dword ptr [ebp + 8] */
    RECOMP_FLAGS_IN();
    edi = eax; /* 0x150798B8: mov edi, eax */
    MEM32(ebp + (-0x1C)) = edi; /* 0x150798BA: mov dword ptr [ebp - 0x1c], edi */
    PUSH32(esp, ebx); /* 0x150798BD: push ebx */
    PUSH32(esp, esi); /* 0x150798BE: push esi */
    RECOMP_CALL(sub_15083D76); /* 0x150798BF: call 0x15083d76 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x18u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x18u; /* 0x150798C4: add esp, 0x18 */
    _flag_k = FK_ADD;
L_150798C7:
    MEM32(ebp + (-0x4)) = 0xFFFFFFFEu; /* 0x150798C7: mov dword ptr [ebp - 4], 0xfffffffe */
    RECOMP_CALL(sub_150798EB); /* 0x150798CE: call 0x150798eb */
    RECOMP_FLAGS_IN();
    eax = edi; /* 0x150798D3: mov eax, edi */
L_150798D5:
    ecx = MEM32(ebp + (-0x10)); /* 0x150798D5: mov ecx, dword ptr [ebp - 0x10] */
    MEM32(FS_BASE + (0)) = ecx; /* 0x150798D8: mov dword ptr fs:[0], ecx */
    ecx = POP32_VAL(esp); /* 0x150798DF: pop ecx */
    edi = POP32_VAL(esp); /* 0x150798E0: pop edi */
    esi = POP32_VAL(esp); /* 0x150798E1: pop esi */
    ebx = POP32_VAL(esp); /* 0x150798E2: pop ebx */
    esp = ebp; ebp = POP32_VAL(esp); /* 0x150798E3: leave  */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x150798E4: ret  */
    RECOMP_REGS_OUT();
}

void sub_150798EB(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x150798EBu);

L_150798EB:
    PUSH32(esp, ebx); /* 0x150798EB: push ebx */
    RECOMP_CALL(sub_1506A9C5); /* 0x150798EC: call 0x1506a9c5 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x150798F1: pop ecx */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x150798F2: ret  */
    RECOMP_REGS_OUT();
}

void sub_15079900(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x15079900u);

L_15079900:
    edi = edi; /* 0x15079900: mov edi, edi */
    PUSH32(esp, ebp); /* 0x15079902: push ebp */
    ebp = esp; /* 0x15079903: mov ebp, esp */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x15079905: push dword ptr [ebp + 0x10] */
    PUSH32(esp, 0); /* 0x15079908: push 0 */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x1507990A: push dword ptr [ebp + 0xc] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x1507990D: push dword ptr [ebp + 8] */
    PUSH32(esp, 0x15081150u); /* 0x15079910: push 0x15081150 */
    RECOMP_CALL(sub_150797B5); /* 0x15079915: call 0x150797b5 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x14u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x14u; /* 0x1507991A: add esp, 0x14 */
    _flag_k = FK_ADD;
    ebp = POP32_VAL(esp); /* 0x1507991D: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1507991E: ret  */
    RECOMP_REGS_OUT();
}

void sub_15079930(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x15079930u);

L_15079930:
    edi = edi; /* 0x15079930: mov edi, edi */
    PUSH32(esp, ebp); /* 0x15079932: push ebp */
    ebp = esp; /* 0x15079933: mov ebp, esp */
    PUSH32(esp, MEM32(ebp + 0x14)); /* 0x15079935: push dword ptr [ebp + 0x14] */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x15079938: push dword ptr [ebp + 0x10] */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x1507993B: push dword ptr [ebp + 0xc] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x1507993E: push dword ptr [ebp + 8] */
    PUSH32(esp, 0x15086A80u); /* 0x15079941: push 0x15086a80 */
    RECOMP_CALL(sub_15079A15); /* 0x15079946: call 0x15079a15 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x14u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x14u; /* 0x1507994B: add esp, 0x14 */
    _flag_k = FK_ADD;
    ebp = POP32_VAL(esp); /* 0x1507994E: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1507994F: ret  */
    RECOMP_REGS_OUT();
}

void sub_15079960(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x15079960u);

L_15079960:
    edi = edi; /* 0x15079960: mov edi, edi */
    PUSH32(esp, ebp); /* 0x15079962: push ebp */
    ebp = esp; /* 0x15079963: mov ebp, esp */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x15079965: push dword ptr [ebp + 0x10] */
    PUSH32(esp, 0); /* 0x15079968: push 0 */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x1507996A: push dword ptr [ebp + 0xc] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x1507996D: push dword ptr [ebp + 8] */
    PUSH32(esp, 0x15082020u); /* 0x15079970: push 0x15082020 */
    RECOMP_CALL(sub_15079A15); /* 0x15079975: call 0x15079a15 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x14u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x14u; /* 0x1507997A: add esp, 0x14 */
    _flag_k = FK_ADD;
    ebp = POP32_VAL(esp); /* 0x1507997D: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1507997E: ret  */
    RECOMP_REGS_OUT();
}
