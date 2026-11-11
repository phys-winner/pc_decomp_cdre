#define RECOMP_GENERATED_CODE

#include "functions.h"

void sub_100BEE00(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x100BEE00u);

L_100BEE00:
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x100BEE00: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x100BEE02: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x100BEE04: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x100BEE06: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x100BEE08: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x100BEE0A: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x100BEE0C: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    RECOMP_ITAIL(0x100BEE0Eu); { RECOMP_REGS_OUT(); return; } /* falls through */
    RECOMP_REGS_OUT();
}

void sub_100BF768(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x100BF768u);

L_100BF768:
    PUSH32(esp, ebp); /* 0x100BF768: push ebp */
    ebp = esp; /* 0x100BF769: mov ebp, esp */
    PUSH32(esp, ecx); /* 0x100BF76B: push ecx */
    PUSH32(esp, ecx); /* 0x100BF76C: push ecx */
    fp_push(0.0); /* 0x100BF76D: fldz  */
    eax = MEM32(ebp + 0x8); /* 0x100BF76F: mov eax, dword ptr [ebp + 8] */
    { double _v = fp_pop(); *(double*)ADDR(ebp + (-0x8)) = _v; } /* 0x100BF772: fstp qword ptr [ebp - 8] */
    MEM32(ebp + (-0x8)) = eax; /* 0x100BF775: mov dword ptr [ebp - 8], eax */
    eax = MEM32(ebp + 0xC); /* 0x100BF778: mov eax, dword ptr [ebp + 0xc] */
    ecx = eax; /* 0x100BF77B: mov ecx, eax */
    ecx = ~ecx; /* 0x100BF77D: not ecx */
    _flag_a = (uint32_t)((ecx ^ eax)); _flag_b = (uint32_t)((ecx ^ eax));
    ecx = ecx ^ eax; /* 0x100BF77F: xor ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    eax = ~eax; /* 0x100BF781: not eax */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x7FFFFFFFu);
    ecx = ecx & 0x7FFFFFFFu; /* 0x100BF783: and ecx, 0x7fffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)((ecx ^ eax)); _flag_b = (uint32_t)((ecx ^ eax));
    ecx = ecx ^ eax; /* 0x100BF789: xor ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x4)) = ecx; /* 0x100BF78B: mov dword ptr [ebp - 4], ecx */
    fp_push(*(double*)ADDR(ebp + (-0x8))); /* 0x100BF78E: fld qword ptr [ebp - 8] */
    esp = ebp; /* 0x100BF791: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x100BF793: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x100BF794: ret  */
    RECOMP_REGS_OUT();
}

void sub_100BF795(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x100BF795u);

L_100BF795:
    PUSH32(esp, ebp); /* 0x100BF795: push ebp */
    ebp = esp; /* 0x100BF796: mov ebp, esp */
    PUSH32(esp, ecx); /* 0x100BF798: push ecx */
    eax = MEM32(ebp + 0x8); /* 0x100BF799: mov eax, dword ptr [ebp + 8] */
    ecx = eax; /* 0x100BF79C: mov ecx, eax */
    ecx = ~ecx; /* 0x100BF79E: not ecx */
    _flag_a = (uint32_t)((ecx ^ eax)); _flag_b = (uint32_t)((ecx ^ eax));
    ecx = ecx ^ eax; /* 0x100BF7A0: xor ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    eax = ~eax; /* 0x100BF7A2: not eax */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x7FFFFFFFu);
    ecx = ecx & 0x7FFFFFFFu; /* 0x100BF7A4: and ecx, 0x7fffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)((ecx ^ eax)); _flag_b = (uint32_t)((ecx ^ eax));
    ecx = ecx ^ eax; /* 0x100BF7AA: xor ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x4)) = ecx; /* 0x100BF7AC: mov dword ptr [ebp - 4], ecx */
    fp_push(*(float*)&MEM32(ebp + (-0x4))); /* 0x100BF7AF: fld dword ptr [ebp - 4] */
    esp = ebp; /* 0x100BF7B2: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x100BF7B4: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x100BF7B5: ret  */
    RECOMP_REGS_OUT();
}

void sub_100BF7B6(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x100BF7B6u);

L_100BF7B6:
    PUSH32(esp, ebp); /* 0x100BF7B6: push ebp */
    ebp = esp; /* 0x100BF7B7: mov ebp, esp */
    PUSH32(esp, ecx); /* 0x100BF7B9: push ecx */
    PUSH32(esp, ecx); /* 0x100BF7BA: push ecx */
    fp_push(0.0); /* 0x100BF7BB: fldz  */
    eax = MEM32(ebp + 0x8); /* 0x100BF7BD: mov eax, dword ptr [ebp + 8] */
    { double _v = fp_pop(); *(double*)ADDR(ebp + (-0x8)) = _v; } /* 0x100BF7C0: fstp qword ptr [ebp - 8] */
    MEM32(ebp + (-0x8)) = eax; /* 0x100BF7C3: mov dword ptr [ebp - 8], eax */
    eax = MEM32(ebp + 0x14); /* 0x100BF7C6: mov eax, dword ptr [ebp + 0x14] */
    _flag_a = (uint32_t)((eax ^ MEM32(ebp + 0xC))); _flag_b = (uint32_t)((eax ^ MEM32(ebp + 0xC)));
    eax = eax ^ MEM32(ebp + 0xC); /* 0x100BF7C9: xor eax, dword ptr [ebp + 0xc] */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x7FFFFFFFu);
    eax = eax & 0x7FFFFFFFu; /* 0x100BF7CC: and eax, 0x7fffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)((eax ^ MEM32(ebp + 0x14))); _flag_b = (uint32_t)((eax ^ MEM32(ebp + 0x14)));
    eax = eax ^ MEM32(ebp + 0x14); /* 0x100BF7D1: xor eax, dword ptr [ebp + 0x14] */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x4)) = eax; /* 0x100BF7D4: mov dword ptr [ebp - 4], eax */
    fp_push(*(double*)ADDR(ebp + (-0x8))); /* 0x100BF7D7: fld qword ptr [ebp - 8] */
    esp = ebp; /* 0x100BF7DA: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x100BF7DC: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x100BF7DD: ret  */
    RECOMP_REGS_OUT();
}

void sub_100BF7DE(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x100BF7DEu);

L_100BF7DE:
    PUSH32(esp, ebp); /* 0x100BF7DE: push ebp */
    ebp = esp; /* 0x100BF7DF: mov ebp, esp */
    PUSH32(esp, ecx); /* 0x100BF7E1: push ecx */
    eax = MEM32(ebp + 0xC); /* 0x100BF7E2: mov eax, dword ptr [ebp + 0xc] */
    _flag_a = (uint32_t)((eax ^ MEM32(ebp + 0x8))); _flag_b = (uint32_t)((eax ^ MEM32(ebp + 0x8)));
    eax = eax ^ MEM32(ebp + 0x8); /* 0x100BF7E5: xor eax, dword ptr [ebp + 8] */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x7FFFFFFFu);
    eax = eax & 0x7FFFFFFFu; /* 0x100BF7E8: and eax, 0x7fffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)((eax ^ MEM32(ebp + 0xC))); _flag_b = (uint32_t)((eax ^ MEM32(ebp + 0xC)));
    eax = eax ^ MEM32(ebp + 0xC); /* 0x100BF7ED: xor eax, dword ptr [ebp + 0xc] */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x4)) = eax; /* 0x100BF7F0: mov dword ptr [ebp - 4], eax */
    fp_push(*(float*)&MEM32(ebp + (-0x4))); /* 0x100BF7F3: fld dword ptr [ebp - 4] */
    esp = ebp; /* 0x100BF7F6: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x100BF7F8: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x100BF7F9: ret  */
    RECOMP_REGS_OUT();
}

void sub_100BF7FA(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x100BF7FAu);

L_100BF7FA:
    PUSH32(esp, ebp); /* 0x100BF7FA: push ebp */
    ebp = esp; /* 0x100BF7FB: mov ebp, esp */
    SET_LO16(ecx, MEM16(ebp + 0xE)); /* 0x100BF7FD: mov cx, word ptr [ebp + 0xe] */
    edx = 0x7FF0u; /* 0x100BF801: mov edx, 0x7ff0 */
    SET_LO16(eax, LO16(ecx)); /* 0x100BF806: mov ax, cx */
    _flag_a = (uint32_t)(LO16(eax)) << 16; _flag_b = (uint32_t)(LO16(edx)) << 16;
    SET_LO16(eax, LO16(eax) & LO16(edx)); /* 0x100BF809: and ax, dx */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 16);
    /* cmp LO16(eax), LO16(edx) */ /* 0x100BF80C: cmp ax, dx */
    _flag_a = (uint32_t)(LO16(eax)) << 16; _flag_b = (uint32_t)(LO16(edx)) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    if (CMP_NE(_flag_a, _flag_b)) goto L_100BF83E; /* 0x100BF80F: jne 0x100bf83e */
L_100BF811:
    fp_push(*(double*)ADDR(ebp + 0x8)); /* 0x100BF811: fld qword ptr [ebp + 8] */
    PUSH32(esp, ecx); /* 0x100BF814: push ecx */
    PUSH32(esp, ecx); /* 0x100BF815: push ecx */
    { double _v = fp_pop(); *(double*)ADDR(esp) = _v; } /* 0x100BF816: fstp qword ptr [esp] */
    RECOMP_CALL(sub_100D305A); /* 0x100BF819: call 0x100d305a */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x100BF81E: pop ecx */
    ecx = POP32_VAL(esp); /* 0x100BF81F: pop ecx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax - 1; /* 0x100BF820: dec eax */
    _flag_k = FK_DEC;
    if (/* dec result */ CMP_EQ(_flag_a, _flag_b)) goto L_100BF837; /* 0x100BF821: je 0x100bf837 */
L_100BF823:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax - 1; /* 0x100BF823: dec eax */
    _flag_k = FK_DEC;
    if (/* dec result */ CMP_EQ(_flag_a, _flag_b)) goto L_100BF832; /* 0x100BF824: je 0x100bf832 */
L_100BF826:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax - 1; /* 0x100BF826: dec eax */
    _flag_k = FK_DEC;
    if (/* dec result */ CMP_EQ(_flag_a, _flag_b)) goto L_100BF82E; /* 0x100BF827: je 0x100bf82e */
L_100BF829:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x100BF829: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x100BF82B: inc eax */
    _flag_k = FK_INC;
    ebp = POP32_VAL(esp); /* 0x100BF82C: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x100BF82D: ret  */
L_100BF82E:
    PUSH32(esp, 2); /* 0x100BF82E: push 2 */
    goto L_100BF834; /* 0x100BF830: jmp 0x100bf834 */
L_100BF832:
    PUSH32(esp, 4); /* 0x100BF832: push 4 */
L_100BF834:
    eax = POP32_VAL(esp); /* 0x100BF834: pop eax */
    ebp = POP32_VAL(esp); /* 0x100BF835: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x100BF836: ret  */
L_100BF837:
    eax = 0x200u; /* 0x100BF837: mov eax, 0x200 */
    ebp = POP32_VAL(esp); /* 0x100BF83C: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x100BF83D: ret  */
L_100BF83E:
    ecx = (uint32_t)LO16(ecx); /* 0x100BF83E: movzx ecx, cx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x8000u);
    ecx = ecx & 0x8000u; /* 0x100BF841: and ecx, 0x8000 */
    _cf = 0;
    _flag_k = FK_TEST;
    /* test LO16(eax), LO16(eax) */ /* 0x100BF847: test ax, ax */
    _flag_a = (uint32_t)(LO16(eax)) << 16; _flag_b = (uint32_t)(LO16(eax)) << 16;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 16);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_100BF86A; /* 0x100BF84A: jne 0x100bf86a */
L_100BF84C:
    /* test MEM32(ebp + 0xC), 0x000FFFFFu */ /* 0x100BF84C: test dword ptr [ebp + 0xc], 0xfffff */
    _flag_a = (uint32_t)(MEM32(ebp + 0xC)); _flag_b = (uint32_t)(0x000FFFFFu);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_100BF85B; /* 0x100BF853: jne 0x100bf85b */
L_100BF855:
    /* cmp MEM32(ebp + 0x8), 0 */ /* 0x100BF855: cmp dword ptr [ebp + 8], 0 */
    _flag_a = (uint32_t)(MEM32(ebp + 0x8)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_100BF86A; /* 0x100BF859: je 0x100bf86a */
L_100BF85B:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(ecx);
    _cf = (ecx) != 0;
    ecx = (uint32_t)(-(int32_t)ecx); /* 0x100BF85B: neg ecx */
    _flag_k = FK_CMP;
    { uint32_t _sa = ecx, _sb = ecx, _sc = (uint32_t)CMP_B(_flag_a, _flag_b); /* 0x100BF85D: sbb ecx, ecx */
      ecx = _sc ? 0xFFFFFFFFu : 0;
      _flag_a = recomp_flags_sbb(_sa, _sb, _sc); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0xFFFFFF90u);
    ecx = ecx & 0xFFFFFF90u; /* 0x100BF85F: and ecx, 0xffffff90 */
    _cf = 0;
    _flag_k = FK_TEST;
    eax = ecx + 0x80; /* 0x100BF862: lea eax, [ecx + 0x80] */
    ebp = POP32_VAL(esp); /* 0x100BF868: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x100BF869: ret  */
L_100BF86A:
    fp_push(*(double*)ADDR(ebp + 0x8)); /* 0x100BF86A: fld qword ptr [ebp + 8] */
    fp_push(0.0); /* 0x100BF86D: fldz  */
    _fpu_cmp = FPU_CMP(_st[0], _st[1]); /* 0x100BF86F: fucompp  */
    fp_pop(); fp_pop();
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x100BF871: fnstsw ax */
    /* test HI8(eax), 0x44u */ /* 0x100BF873: test ah, 0x44 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(0x44u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (RECOMP_PF((_flag_a & _flag_b), 24)) goto L_100BF884; /* 0x100BF876: jp 0x100bf884 */
L_100BF878:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(ecx);
    _cf = (ecx) != 0;
    ecx = (uint32_t)(-(int32_t)ecx); /* 0x100BF878: neg ecx */
    _flag_k = FK_CMP;
    { uint32_t _sa = ecx, _sb = ecx, _sc = (uint32_t)CMP_B(_flag_a, _flag_b); /* 0x100BF87A: sbb ecx, ecx */
      ecx = _sc ? 0xFFFFFFFFu : 0;
      _flag_a = recomp_flags_sbb(_sa, _sb, _sc); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0xFFFFFFE0u);
    ecx = ecx & 0xFFFFFFE0u; /* 0x100BF87C: and ecx, 0xffffffe0 */
    _cf = 0;
    _flag_k = FK_TEST;
    eax = ecx + 0x40; /* 0x100BF87F: lea eax, [ecx + 0x40] */
    ebp = POP32_VAL(esp); /* 0x100BF882: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x100BF883: ret  */
L_100BF884:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(ecx);
    _cf = (ecx) != 0;
    ecx = (uint32_t)(-(int32_t)ecx); /* 0x100BF884: neg ecx */
    _flag_k = FK_CMP;
    { uint32_t _sa = ecx, _sb = ecx, _sc = (uint32_t)CMP_B(_flag_a, _flag_b); /* 0x100BF886: sbb ecx, ecx */
      ecx = _sc ? 0xFFFFFFFFu : 0;
      _flag_a = recomp_flags_sbb(_sa, _sb, _sc); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0xFFFFFF08u);
    ecx = ecx & 0xFFFFFF08u; /* 0x100BF888: and ecx, 0xffffff08 */
    _cf = 0;
    _flag_k = FK_TEST;
    eax = ecx + 0x100; /* 0x100BF88E: lea eax, [ecx + 0x100] */
    ebp = POP32_VAL(esp); /* 0x100BF894: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x100BF895: ret  */
    RECOMP_REGS_OUT();
}

void sub_100BF896(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x100BF896u);

L_100BF896:
    PUSH32(esp, ebp); /* 0x100BF896: push ebp */
    ebp = esp; /* 0x100BF897: mov ebp, esp */
    eax = MEM32(ebp + 0xE); /* 0x100BF899: mov eax, dword ptr [ebp + 0xe] */
    edx = 0x7FF8u; /* 0x100BF89C: mov edx, 0x7ff8 */
    _flag_a = (uint32_t)(LO16(eax)) << 16; _flag_b = (uint32_t)(LO16(edx)) << 16;
    SET_LO16(eax, LO16(eax) & LO16(edx)); /* 0x100BF8A1: and ax, dx */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 16);
    ecx = edx + (-0x8); /* 0x100BF8A4: lea ecx, [edx - 8] */
    /* cmp LO16(eax), LO16(ecx) */ /* 0x100BF8A7: cmp ax, cx */
    _flag_a = (uint32_t)(LO16(eax)) << 16; _flag_b = (uint32_t)(LO16(ecx)) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    if (CMP_NE(_flag_a, _flag_b)) goto L_100BF8BB; /* 0x100BF8AA: jne 0x100bf8bb */
L_100BF8AC:
    /* test MEM32(ebp + 0xC), 0x0007FFFFu */ /* 0x100BF8AC: test dword ptr [ebp + 0xc], 0x7ffff */
    _flag_a = (uint32_t)(MEM32(ebp + 0xC)); _flag_b = (uint32_t)(0x0007FFFFu);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_100BF8C0; /* 0x100BF8B3: jne 0x100bf8c0 */
L_100BF8B5:
    /* cmp MEM32(ebp + 0x8), 0 */ /* 0x100BF8B5: cmp dword ptr [ebp + 8], 0 */
    _flag_a = (uint32_t)(MEM32(ebp + 0x8)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_100BF8C0; /* 0x100BF8B9: jne 0x100bf8c0 */
L_100BF8BB:
    /* cmp LO16(eax), LO16(edx) */ /* 0x100BF8BB: cmp ax, dx */
    _flag_a = (uint32_t)(LO16(eax)) << 16; _flag_b = (uint32_t)(LO16(edx)) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    if (CMP_NE(_flag_a, _flag_b)) goto L_100BF8C5; /* 0x100BF8BE: jne 0x100bf8c5 */
L_100BF8C0:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x100BF8C0: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x100BF8C2: inc eax */
    _flag_k = FK_INC;
    ebp = POP32_VAL(esp); /* 0x100BF8C3: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x100BF8C4: ret  */
L_100BF8C5:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x100BF8C5: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    ebp = POP32_VAL(esp); /* 0x100BF8C7: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x100BF8C8: ret  */
    RECOMP_REGS_OUT();
}

void sub_100BF8C9(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x100BF8C9u);

L_100BF8C9:
    PUSH32(esp, ebp); /* 0x100BF8C9: push ebp */
    ebp = esp; /* 0x100BF8CA: mov ebp, esp */
    PUSH32(esp, ecx); /* 0x100BF8CC: push ecx */
    PUSH32(esp, esi); /* 0x100BF8CD: push esi */
    PUSH32(esp, edi); /* 0x100BF8CE: push edi */
    edi = 0xFFFFu; /* 0x100BF8CF: mov edi, 0xffff */
    PUSH32(esp, edi); /* 0x100BF8D4: push edi */
    PUSH32(esp, 0x133Fu); /* 0x100BF8D5: push 0x133f */
    RECOMP_CALL(sub_100D3175); /* 0x100BF8DA: call 0x100d3175 */
    RECOMP_FLAGS_IN();
    fp_push(*(double*)ADDR(ebp + 0x8)); /* 0x100BF8DF: fld qword ptr [ebp + 8] */
    esi = eax; /* 0x100BF8E2: mov esi, eax */
    ecx = POP32_VAL(esp); /* 0x100BF8E4: pop ecx */
    ecx = POP32_VAL(esp); /* 0x100BF8E5: pop ecx */
    ecx = MEM32(ebp + 0xE); /* 0x100BF8E6: mov ecx, dword ptr [ebp + 0xe] */
    eax = 0x7FF0u; /* 0x100BF8E9: mov eax, 0x7ff0 */
    ecx = (uint32_t)LO16(ecx); /* 0x100BF8EE: movzx ecx, cx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(eax);
    ecx = ecx & eax; /* 0x100BF8F1: and ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp LO16(ecx), LO16(eax) */ /* 0x100BF8F3: cmp cx, ax */
    _flag_a = (uint32_t)(LO16(ecx)) << 16; _flag_b = (uint32_t)(LO16(eax)) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    if (CMP_NE(_flag_a, _flag_b)) goto L_100BF956; /* 0x100BF8F6: jne 0x100bf956 */
L_100BF8F8:
    PUSH32(esp, ecx); /* 0x100BF8F8: push ecx */
    PUSH32(esp, ecx); /* 0x100BF8F9: push ecx */
    { double _v = fp_pop(); *(double*)ADDR(esp) = _v; } /* 0x100BF8FA: fstp qword ptr [esp] */
    RECOMP_CALL(sub_100D305A); /* 0x100BF8FD: call 0x100d305a */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x100BF902: pop ecx */
    ecx = POP32_VAL(esp); /* 0x100BF903: pop ecx */
    /* test eax, eax */ /* 0x100BF904: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if ((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) == 0u || (((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_100BF932; /* 0x100BF906: jle 0x100bf932 */
L_100BF908:
    /* cmp eax, 2 */ /* 0x100BF908: cmp eax, 2 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_LE(_flag_a, _flag_b)) goto L_100BF927; /* 0x100BF90B: jle 0x100bf927 */
L_100BF90D:
    /* cmp eax, 3 */ /* 0x100BF90D: cmp eax, 3 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(3);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_100BF932; /* 0x100BF910: jne 0x100bf932 */
L_100BF912:
    fp_push(*(double*)ADDR(ebp + 0x8)); /* 0x100BF912: fld qword ptr [ebp + 8] */
    PUSH32(esp, esi); /* 0x100BF915: push esi */
    PUSH32(esp, ecx); /* 0x100BF916: push ecx */
    PUSH32(esp, ecx); /* 0x100BF917: push ecx */
    { double _v = fp_pop(); *(double*)ADDR(esp) = _v; } /* 0x100BF918: fstp qword ptr [esp] */
    PUSH32(esp, 0x25u); /* 0x100BF91B: push 0x25 */
    RECOMP_CALL(sub_100C03F1); /* 0x100BF91D: call 0x100c03f1 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x10u; /* 0x100BF922: add esp, 0x10 */
    _flag_k = FK_ADD;
    goto L_100BF9A4; /* 0x100BF925: jmp 0x100bf9a4 */
L_100BF927:
    PUSH32(esp, edi); /* 0x100BF927: push edi */
    PUSH32(esp, esi); /* 0x100BF928: push esi */
    RECOMP_CALL(sub_100D3175); /* 0x100BF929: call 0x100d3175 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x100BF92E: pop ecx */
    ecx = POP32_VAL(esp); /* 0x100BF92F: pop ecx */
    goto L_100BF9A1; /* 0x100BF930: jmp 0x100bf9a1 */
L_100BF932:
    fp_push(*(double*)ADDR(ebp + 0x8)); /* 0x100BF932: fld qword ptr [ebp + 8] */
    fp_push(*(double*)ADDR(0x10067CD8)); /* 0x100BF935: fld qword ptr [0x10067cd8] */
    PUSH32(esp, esi); /* 0x100BF93B: push esi */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x10u; /* 0x100BF93C: sub esp, 0x10 */
    _flag_k = FK_CMP;
    _st[0] += _st[1]; /* 0x100BF93F: fadd st(1) */
    { double _v = fp_pop(); *(double*)ADDR(esp + 0x8) = _v; } /* 0x100BF941: fstp qword ptr [esp + 8] */
    { double _v = fp_pop(); *(double*)ADDR(esp) = _v; } /* 0x100BF945: fstp qword ptr [esp] */
    PUSH32(esp, 0x25u); /* 0x100BF948: push 0x25 */
    PUSH32(esp, 8); /* 0x100BF94A: push 8 */
L_100BF94C:
    RECOMP_CALL(sub_100C006F); /* 0x100BF94C: call 0x100c006f */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x1Cu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x1Cu; /* 0x100BF951: add esp, 0x1c */
    _flag_k = FK_ADD;
    goto L_100BF9A4; /* 0x100BF954: jmp 0x100bf9a4 */
L_100BF956:
    fp_push(0.0); /* 0x100BF956: fldz  */
    _fpu_cmp = FPU_CMP(_st[0], _st[1]); /* 0x100BF958: fucomp st(1) */
    fp_pop();
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x100BF95A: fnstsw ax */
    /* test HI8(eax), 0x44u */ /* 0x100BF95C: test ah, 0x44 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(0x44u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (RECOMP_PF((_flag_a & _flag_b), 24)) goto L_100BF97A; /* 0x100BF95F: jp 0x100bf97a */
L_100BF961:
    fp_push(*(double*)ADDR(0x100E28D0)); /* 0x100BF961: fld qword ptr [0x100e28d0] */
    PUSH32(esp, esi); /* 0x100BF967: push esi */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x10u; /* 0x100BF968: sub esp, 0x10 */
    _flag_k = FK_CMP;
    _st[0] = -_st[0]; /* 0x100BF96B: fchs  */
    { double _v = fp_pop(); *(double*)ADDR(esp + 0x8) = _v; } /* 0x100BF96D: fstp qword ptr [esp + 8] */
    { double _v = fp_pop(); *(double*)ADDR(esp) = _v; } /* 0x100BF971: fstp qword ptr [esp] */
    PUSH32(esp, 0x25u); /* 0x100BF974: push 0x25 */
    PUSH32(esp, 4); /* 0x100BF976: push 4 */
    RECOMP_BACKEDGE();
    goto L_100BF94C; /* 0x100BF978: jmp 0x100bf94c */
L_100BF97A:
    eax = ebp + (-0x4); /* 0x100BF97A: lea eax, [ebp - 4] */
    PUSH32(esp, eax); /* 0x100BF97D: push eax */
    PUSH32(esp, ecx); /* 0x100BF97E: push ecx */
    PUSH32(esp, ecx); /* 0x100BF97F: push ecx */
    { double _v = fp_pop(); *(double*)ADDR(esp) = _v; } /* 0x100BF980: fstp qword ptr [esp] */
    RECOMP_CALL(sub_100D2F40); /* 0x100BF983: call 0x100d2f40 */
    RECOMP_FLAGS_IN();
    eax = MEM32(ebp + (-0x4)); /* 0x100BF988: mov eax, dword ptr [ebp - 4] */
    { _st[0] = _st[0]; g_st_i64[0] = g_st_i64[0]; fp_pop(); } /* 0x100BF98B: fstp st(0) */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax - 1; /* 0x100BF98D: dec eax */
    _flag_k = FK_DEC;
    MEM32(ebp + 0xC) = eax; /* 0x100BF98E: mov dword ptr [ebp + 0xc], eax */
    fp_push((double)(int32_t)MEM32(ebp + 0xC)); /* 0x100BF991: fild dword ptr [ebp + 0xc] */
    PUSH32(esp, edi); /* 0x100BF994: push edi */
    PUSH32(esp, esi); /* 0x100BF995: push esi */
    { double _v = fp_pop(); *(double*)ADDR(ebp + 0x8) = _v; } /* 0x100BF996: fstp qword ptr [ebp + 8] */
    RECOMP_CALL(sub_100D3175); /* 0x100BF999: call 0x100d3175 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x14u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x14u; /* 0x100BF99E: add esp, 0x14 */
    _flag_k = FK_ADD;
L_100BF9A1:
    fp_push(*(double*)ADDR(ebp + 0x8)); /* 0x100BF9A1: fld qword ptr [ebp + 8] */
L_100BF9A4:
    edi = POP32_VAL(esp); /* 0x100BF9A4: pop edi */
    esi = POP32_VAL(esp); /* 0x100BF9A5: pop esi */
    esp = ebp; /* 0x100BF9A6: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x100BF9A8: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x100BF9A9: ret  */
    RECOMP_REGS_OUT();
}

void sub_100BF9AA(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x100BF9AAu);

L_100BF9AA:
    PUSH32(esp, ebp); /* 0x100BF9AA: push ebp */
    ebp = esp; /* 0x100BF9AB: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0xCu; /* 0x100BF9AD: sub esp, 0xc */
    _flag_k = FK_CMP;
    fp_push(0.0); /* 0x100BF9B0: fldz  */
    PUSH32(esp, ebx); /* 0x100BF9B2: push ebx */
    PUSH32(esp, esi); /* 0x100BF9B3: push esi */
    PUSH32(esp, edi); /* 0x100BF9B4: push edi */
    PUSH32(esp, 0xFFFFu); /* 0x100BF9B5: push 0xffff */
    PUSH32(esp, 0x133Fu); /* 0x100BF9BA: push 0x133f */
    { double _v = fp_pop(); *(double*)ADDR(ebp + (-0xC)) = _v; } /* 0x100BF9BF: fstp qword ptr [ebp - 0xc] */
    RECOMP_CALL(sub_100D3175); /* 0x100BF9C2: call 0x100d3175 */
    RECOMP_FLAGS_IN();
    SET_LO16(edx, MEM16(ebp + 0xE)); /* 0x100BF9C7: mov dx, word ptr [ebp + 0xe] */
    edi = eax; /* 0x100BF9CB: mov edi, eax */
    esi = MEM32(ebp + 0xC); /* 0x100BF9CD: mov esi, dword ptr [ebp + 0xc] */
    eax = 0x7FF0u; /* 0x100BF9D0: mov eax, 0x7ff0 */
    ebx = MEM32(ebp + 0x8); /* 0x100BF9D5: mov ebx, dword ptr [ebp + 8] */
    ecx = POP32_VAL(esp); /* 0x100BF9D8: pop ecx */
    ecx = POP32_VAL(esp); /* 0x100BF9D9: pop ecx */
    ecx = (uint32_t)LO16(edx); /* 0x100BF9DA: movzx ecx, dx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(eax);
    ecx = ecx & eax; /* 0x100BF9DD: and ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x4)) = eax; /* 0x100BF9DF: mov dword ptr [ebp - 4], eax */
    /* cmp LO16(ecx), LO16(eax) */ /* 0x100BF9E2: cmp cx, ax */
    _flag_a = (uint32_t)(LO16(ecx)) << 16; _flag_b = (uint32_t)(LO16(eax)) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    SET_LO16(ecx, MEM16(ebp + 0x16)); /* 0x100BF9E5: mov cx, word ptr [ebp + 0x16] */
    if (CMP_EQ(_flag_a, _flag_b)) goto L_100BF9FE; /* 0x100BF9E9: je 0x100bf9fe */
L_100BF9EB:
    eax = (uint32_t)LO16(ecx); /* 0x100BF9EB: movzx eax, cx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x7FF0u);
    eax = eax & 0x7FF0u; /* 0x100BF9EE: and eax, 0x7ff0 */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp LO16(eax), MEM16(ebp + (-0x4)) */ /* 0x100BF9F3: cmp ax, word ptr [ebp - 4] */
    _flag_a = (uint32_t)(LO16(eax)) << 16; _flag_b = (uint32_t)(MEM16(ebp + (-0x4))) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    if (CMP_NE(_flag_a, _flag_b)) goto L_100BFA73; /* 0x100BF9F7: jne 0x100bfa73 */
L_100BF9F9:
    eax = 0x7FF0u; /* 0x100BF9F9: mov eax, 0x7ff0 */
L_100BF9FE:
    MEM32(ebp + (-0x4)) = 0x7FF8u; /* 0x100BF9FE: mov dword ptr [ebp - 4], 0x7ff8 */
    _flag_a = (uint32_t)(LO16(edx)) << 16; _flag_b = (uint32_t)(MEM16(ebp + (-0x4))) << 16;
    SET_LO16(edx, LO16(edx) & MEM16(ebp + (-0x4))); /* 0x100BFA05: and dx, word ptr [ebp - 4] */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 16);
    /* cmp LO16(edx), LO16(eax) */ /* 0x100BFA09: cmp dx, ax */
    _flag_a = (uint32_t)(LO16(edx)) << 16; _flag_b = (uint32_t)(LO16(eax)) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    if (CMP_NE(_flag_a, _flag_b)) goto L_100BFA1A; /* 0x100BFA0C: jne 0x100bfa1a */
L_100BFA0E:
    /* test esi, 0x0007FFFFu */ /* 0x100BFA0E: test esi, 0x7ffff */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(0x0007FFFFu);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_100BFA32; /* 0x100BFA14: jne 0x100bfa32 */
L_100BFA16:
    /* test ebx, ebx */ /* 0x100BFA16: test ebx, ebx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ebx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_100BFA32; /* 0x100BFA18: jne 0x100bfa32 */
L_100BFA1A:
    _flag_a = (uint32_t)(LO16(ecx)) << 16; _flag_b = (uint32_t)(MEM16(ebp + (-0x4))) << 16;
    SET_LO16(ecx, LO16(ecx) & MEM16(ebp + (-0x4))); /* 0x100BFA1A: and cx, word ptr [ebp - 4] */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 16);
    /* cmp LO16(ecx), LO16(eax) */ /* 0x100BFA1E: cmp cx, ax */
    _flag_a = (uint32_t)(LO16(ecx)) << 16; _flag_b = (uint32_t)(LO16(eax)) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    if (CMP_NE(_flag_a, _flag_b)) goto L_100BFA5E; /* 0x100BFA21: jne 0x100bfa5e */
L_100BFA23:
    /* test MEM32(ebp + 0x14), 0x0007FFFFu */ /* 0x100BFA23: test dword ptr [ebp + 0x14], 0x7ffff */
    _flag_a = (uint32_t)(MEM32(ebp + 0x14)); _flag_b = (uint32_t)(0x0007FFFFu);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_100BFA32; /* 0x100BFA2A: jne 0x100bfa32 */
L_100BFA2C:
    /* cmp MEM32(ebp + 0x10), 0 */ /* 0x100BFA2C: cmp dword ptr [ebp + 0x10], 0 */
    _flag_a = (uint32_t)(MEM32(ebp + 0x10)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_100BFA5E; /* 0x100BFA30: je 0x100bfa5e */
L_100BFA32:
    fp_push(*(double*)ADDR(ebp + 0x8)); /* 0x100BFA32: fld qword ptr [ebp + 8] */
    fp_push(_st[0]); /* 0x100BFA35: fld st(0) */
    fp_push(*(double*)ADDR(ebp + 0x10)); /* 0x100BFA37: fld qword ptr [ebp + 0x10] */
    PUSH32(esp, edi); /* 0x100BFA3A: push edi */
    _st[1] += _st[0]; /* 0x100BFA3B: fadd st(1), st(0) */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x18u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x18u; /* 0x100BFA3D: sub esp, 0x18 */
    _flag_k = FK_CMP;
    fp_xch(1); /* 0x100BFA40: fxch st(1) */
    { double _v = fp_pop(); *(double*)ADDR(esp + 0x10) = _v; } /* 0x100BFA42: fstp qword ptr [esp + 0x10] */
    { double _v = fp_pop(); *(double*)ADDR(esp + 0x8) = _v; } /* 0x100BFA46: fstp qword ptr [esp + 8] */
    { double _v = fp_pop(); *(double*)ADDR(esp) = _v; } /* 0x100BFA4A: fstp qword ptr [esp] */
    PUSH32(esp, 0x26u); /* 0x100BFA4D: push 0x26 */
    PUSH32(esp, 8); /* 0x100BFA4F: push 8 */
L_100BFA51:
    RECOMP_CALL(sub_100C0137); /* 0x100BFA51: call 0x100c0137 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x24u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x24u; /* 0x100BFA56: add esp, 0x24 */
    _flag_k = FK_ADD;
    goto L_100BFC43; /* 0x100BFA59: jmp 0x100bfc43 */
L_100BFA5E:
    eax = MEM32(ebp + (-0x4)); /* 0x100BFA5E: mov eax, dword ptr [ebp - 4] */
    /* cmp LO16(edx), LO16(eax) */ /* 0x100BFA61: cmp dx, ax */
    _flag_a = (uint32_t)(LO16(edx)) << 16; _flag_b = (uint32_t)(LO16(eax)) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_100BFC28; /* 0x100BFA64: je 0x100bfc28 */
L_100BFA6A:
    /* cmp LO16(ecx), LO16(eax) */ /* 0x100BFA6A: cmp cx, ax */
    _flag_a = (uint32_t)(LO16(ecx)) << 16; _flag_b = (uint32_t)(LO16(eax)) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_100BFC28; /* 0x100BFA6D: je 0x100bfc28 */
L_100BFA73:
    fp_push(*(double*)ADDR(ebp + 0x10)); /* 0x100BFA73: fld qword ptr [ebp + 0x10] */
    fp_push(*(double*)ADDR(ebp + 0x8)); /* 0x100BFA76: fld qword ptr [ebp + 8] */
    _fpu_cmp = FPU_CMP(_st[0], _st[1]); /* 0x100BFA79: fucom st(1) */
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x100BFA7B: fnstsw ax */
    /* test HI8(eax), 0x44u */ /* 0x100BFA7D: test ah, 0x44 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(0x44u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (RECOMP_PF((_flag_a & _flag_b), 24)) goto L_100BFA9B; /* 0x100BFA80: jp 0x100bfa9b */
L_100BFA82:
    PUSH32(esp, 0xFFFFu); /* 0x100BFA82: push 0xffff */
    { _st[0] = _st[0]; g_st_i64[0] = g_st_i64[0]; fp_pop(); } /* 0x100BFA87: fstp st(0) */
    PUSH32(esp, edi); /* 0x100BFA89: push edi */
    { _st[0] = _st[0]; g_st_i64[0] = g_st_i64[0]; fp_pop(); } /* 0x100BFA8A: fstp st(0) */
    RECOMP_CALL(sub_100D3175); /* 0x100BFA8C: call 0x100d3175 */
    RECOMP_FLAGS_IN();
    fp_push(*(double*)ADDR(ebp + 0x8)); /* 0x100BFA91: fld qword ptr [ebp + 8] */
    ecx = POP32_VAL(esp); /* 0x100BFA94: pop ecx */
    ecx = POP32_VAL(esp); /* 0x100BFA95: pop ecx */
    goto L_100BFC43; /* 0x100BFA96: jmp 0x100bfc43 */
L_100BFA9B:
    fp_push(0.0); /* 0x100BFA9B: fldz  */
    _fpu_cmp = FPU_CMP(_st[0], _st[1]); /* 0x100BFA9D: fucom st(1) */
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x100BFA9F: fnstsw ax */
    fp_xch(2); /* 0x100BFAA1: fxch st(2) */
    /* test HI8(eax), 0x44u */ /* 0x100BFAA3: test ah, 0x44 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(0x44u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (RECOMP_PF((_flag_a & _flag_b), 24)) goto L_100BFAC5; /* 0x100BFAA6: jp 0x100bfac5 */
L_100BFAA8:
    _fpu_cmp = FPU_CMP(_st[0], _st[1]); /* 0x100BFAA8: fcom st(1) */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edx = 0; /* 0x100BFAAA: xor edx, edx */
    _cf = 0;
    _flag_k = FK_TEST;
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x100BFAAC: fnstsw ax */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(1);
    edx = edx + 1; /* 0x100BFAAE: inc edx */
    _flag_k = FK_INC;
    MEM32(ebp + (-0xC)) = edx; /* 0x100BFAAF: mov dword ptr [ebp - 0xc], edx */
    /* test HI8(eax), 0x41u */ /* 0x100BFAB2: test ah, 0x41 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(0x41u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_100BFABB; /* 0x100BFAB5: jne 0x100bfabb */
L_100BFAB7:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x100BFAB7: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_100BFAC0; /* 0x100BFAB9: jmp 0x100bfac0 */
L_100BFABB:
    ecx = 0x80000000u; /* 0x100BFABB: mov ecx, 0x80000000 */
L_100BFAC0:
    MEM32(ebp + (-0x8)) = ecx; /* 0x100BFAC0: mov dword ptr [ebp - 8], ecx */
    goto L_100BFACB; /* 0x100BFAC3: jmp 0x100bfacb */
L_100BFAC5:
    ecx = MEM32(ebp + (-0x8)); /* 0x100BFAC5: mov ecx, dword ptr [ebp - 8] */
    edx = MEM32(ebp + (-0xC)); /* 0x100BFAC8: mov edx, dword ptr [ebp - 0xc] */
L_100BFACB:
    fp_xch(1); /* 0x100BFACB: fxch st(1) */
    _fpu_cmp = FPU_CMP(_st[0], _st[2]); /* 0x100BFACD: fcom st(2) */
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x100BFACF: fnstsw ax */
    /* test HI8(eax), 0x41u */ /* 0x100BFAD1: test ah, 0x41 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(0x41u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_100BFADF; /* 0x100BFAD4: jne 0x100bfadf */
L_100BFAD6:
    _fpu_cmp = FPU_CMP(_st[0], _st[1]); /* 0x100BFAD6: fcom st(1) */
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x100BFAD8: fnstsw ax */
    /* test HI8(eax), 0x41u */ /* 0x100BFADA: test ah, 0x41 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(0x41u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_100BFAF1; /* 0x100BFADD: je 0x100bfaf1 */
L_100BFADF:
    _fpu_cmp = FPU_CMP(_st[0], _st[2]); /* 0x100BFADF: fcom st(2) */
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x100BFAE1: fnstsw ax */
    /* test HI8(eax), 5 */ /* 0x100BFAE3: test ah, 5 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(5) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (RECOMP_PF((_flag_a & _flag_b), 24)) goto L_100BFB0E; /* 0x100BFAE6: jp 0x100bfb0e */
L_100BFAE8:
    _fpu_cmp = FPU_CMP(_st[0], _st[1]); /* 0x100BFAE8: fcom st(1) */
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x100BFAEA: fnstsw ax */
    /* test HI8(eax), 5 */ /* 0x100BFAEC: test ah, 5 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(5) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (RECOMP_PF((_flag_a & _flag_b), 24)) goto L_100BFB0E; /* 0x100BFAEF: jp 0x100bfb0e */
L_100BFAF1:
    edx = ebx + (-0x1); /* 0x100BFAF1: lea edx, [ebx - 1] */
    { _st[0] = _st[0]; g_st_i64[0] = g_st_i64[0]; fp_pop(); } /* 0x100BFAF4: fstp st(0) */
    MEM32(ebp + (-0xC)) = edx; /* 0x100BFAF6: mov dword ptr [ebp - 0xc], edx */
    { _st[0] = _st[0]; g_st_i64[0] = g_st_i64[0]; fp_pop(); } /* 0x100BFAF9: fstp st(0) */
    ecx = esi; /* 0x100BFAFB: mov ecx, esi */
    { _st[0] = _st[0]; g_st_i64[0] = g_st_i64[0]; fp_pop(); } /* 0x100BFAFD: fstp st(0) */
    MEM32(ebp + (-0x8)) = ecx; /* 0x100BFAFF: mov dword ptr [ebp - 8], ecx */
    /* test ebx, ebx */ /* 0x100BFB02: test ebx, ebx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ebx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_100BFB54; /* 0x100BFB04: jne 0x100bfb54 */
L_100BFB06:
    ecx = esi + (-0x1); /* 0x100BFB06: lea ecx, [esi - 1] */
L_100BFB09:
    MEM32(ebp + (-0x8)) = ecx; /* 0x100BFB09: mov dword ptr [ebp - 8], ecx */
    goto L_100BFB54; /* 0x100BFB0C: jmp 0x100bfb54 */
L_100BFB0E:
    _fpu_cmp = FPU_CMP(_st[0], _st[2]); /* 0x100BFB0E: fcom st(2) */
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x100BFB10: fnstsw ax */
    /* test HI8(eax), 0x41u */ /* 0x100BFB12: test ah, 0x41 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(0x41u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_100BFB20; /* 0x100BFB15: jne 0x100bfb20 */
L_100BFB17:
    _fpu_cmp = FPU_CMP(_st[0], _st[1]); /* 0x100BFB17: fcom st(1) */
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x100BFB19: fnstsw ax */
    /* test HI8(eax), 5 */ /* 0x100BFB1B: test ah, 5 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(5) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if ((!RECOMP_PF((_flag_a & _flag_b), 24))) goto L_100BFB36; /* 0x100BFB1E: jnp 0x100bfb36 */
L_100BFB20:
    _fpu_cmp = FPU_CMP(_st[0], _st[2]); /* 0x100BFB20: fcom st(2) */
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x100BFB22: fnstsw ax */
    { _st[2] = _st[0]; g_st_i64[2] = g_st_i64[0]; fp_pop(); } /* 0x100BFB24: fstp st(2) */
    /* test HI8(eax), 5 */ /* 0x100BFB26: test ah, 5 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(5) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (RECOMP_PF((_flag_a & _flag_b), 24)) goto L_100BFB50; /* 0x100BFB29: jp 0x100bfb50 */
L_100BFB2B:
    _fpu_cmp = FPU_CMP(_st[0], _st[1]); /* 0x100BFB2B: fcompp  */
    fp_pop(); fp_pop();
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x100BFB2D: fnstsw ax */
    /* test HI8(eax), 5 */ /* 0x100BFB2F: test ah, 5 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(5) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if ((!RECOMP_PF((_flag_a & _flag_b), 24))) goto L_100BFB3C; /* 0x100BFB32: jnp 0x100bfb3c */
L_100BFB34:
    goto L_100BFB54; /* 0x100BFB34: jmp 0x100bfb54 */
L_100BFB36:
    { _st[0] = _st[0]; g_st_i64[0] = g_st_i64[0]; fp_pop(); } /* 0x100BFB36: fstp st(0) */
    { _st[0] = _st[0]; g_st_i64[0] = g_st_i64[0]; fp_pop(); } /* 0x100BFB38: fstp st(0) */
    { _st[0] = _st[0]; g_st_i64[0] = g_st_i64[0]; fp_pop(); } /* 0x100BFB3A: fstp st(0) */
L_100BFB3C:
    edx = ebx + 0x1; /* 0x100BFB3C: lea edx, [ebx + 1] */
    ecx = esi; /* 0x100BFB3F: mov ecx, esi */
    MEM32(ebp + (-0xC)) = edx; /* 0x100BFB41: mov dword ptr [ebp - 0xc], edx */
    MEM32(ebp + (-0x8)) = ecx; /* 0x100BFB44: mov dword ptr [ebp - 8], ecx */
    /* test edx, edx */ /* 0x100BFB47: test edx, edx */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(edx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_100BFB54; /* 0x100BFB49: jne 0x100bfb54 */
L_100BFB4B:
    ecx = esi + 0x1; /* 0x100BFB4B: lea ecx, [esi + 1] */
    RECOMP_BACKEDGE();
    goto L_100BFB09; /* 0x100BFB4E: jmp 0x100bfb09 */
L_100BFB50:
    { _st[1] = _st[0]; g_st_i64[1] = g_st_i64[0]; fp_pop(); } /* 0x100BFB50: fstp st(1) */
    { _st[0] = _st[0]; g_st_i64[0] = g_st_i64[0]; fp_pop(); } /* 0x100BFB52: fstp st(0) */
L_100BFB54:
    eax = ecx; /* 0x100BFB54: mov eax, ecx */
    ebx = 0x7FF0u; /* 0x100BFB56: mov ebx, 0x7ff0 */
    if (16u) _cf = (((eax) >> 15) & 1u); /* 0x100BFB5B: shr eax, 0x10 */
    if (16u) { _flag_a = recomp_flags_pack((eax >> 16u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax >> 16u; /* 0x100BFB5B: shr eax, 0x10 */
    /* test ebx, eax */ /* 0x100BFB5E: test ebx, eax */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_100BFBB6; /* 0x100BFB60: jne 0x100bfbb6 */
L_100BFB62:
    /* test ecx, 0x000FFFFFu */ /* 0x100BFB62: test ecx, 0xfffff */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x000FFFFFu);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_100BFB6E; /* 0x100BFB68: jne 0x100bfb6e */
L_100BFB6A:
    /* test edx, edx */ /* 0x100BFB6A: test edx, edx */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(edx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_100BFBB6; /* 0x100BFB6C: je 0x100bfbb6 */
L_100BFB6E:
    fp_push(*(double*)ADDR(ebp + (-0xC))); /* 0x100BFB6E: fld qword ptr [ebp - 0xc] */
    eax = ebp + (-0x4); /* 0x100BFB71: lea eax, [ebp - 4] */
    PUSH32(esp, eax); /* 0x100BFB74: push eax */
    PUSH32(esp, ecx); /* 0x100BFB75: push ecx */
    PUSH32(esp, ecx); /* 0x100BFB76: push ecx */
    { double _v = fp_pop(); *(double*)ADDR(esp) = _v; } /* 0x100BFB77: fstp qword ptr [esp] */
    RECOMP_CALL(sub_100D2F40); /* 0x100BFB7A: call 0x100d2f40 */
    RECOMP_FLAGS_IN();
    eax = MEM32(ebp + (-0x4)); /* 0x100BFB7F: mov eax, dword ptr [ebp - 4] */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x100BFB82: add esp, 0xc */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x600u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 0x600u; /* 0x100BFB85: add eax, 0x600 */
    _flag_k = FK_ADD;
    PUSH32(esp, eax); /* 0x100BFB8A: push eax */
    PUSH32(esp, ecx); /* 0x100BFB8B: push ecx */
    PUSH32(esp, ecx); /* 0x100BFB8C: push ecx */
    { double _v = fp_pop(); *(double*)ADDR(esp) = _v; } /* 0x100BFB8D: fstp qword ptr [esp] */
    RECOMP_CALL(sub_100D302B); /* 0x100BFB90: call 0x100d302b */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x100BFB95: add esp, 0xc */
    _flag_k = FK_ADD;
    PUSH32(esp, edi); /* 0x100BFB98: push edi */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x18u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x18u; /* 0x100BFB99: sub esp, 0x18 */
    _flag_k = FK_CMP;
    { double _v = fp_pop(); *(double*)ADDR(esp + 0x10) = _v; } /* 0x100BFB9C: fstp qword ptr [esp + 0x10] */
    fp_push(*(double*)ADDR(ebp + 0x10)); /* 0x100BFBA0: fld qword ptr [ebp + 0x10] */
    { double _v = fp_pop(); *(double*)ADDR(esp + 0x8) = _v; } /* 0x100BFBA3: fstp qword ptr [esp + 8] */
    fp_push(*(double*)ADDR(ebp + 0x8)); /* 0x100BFBA7: fld qword ptr [ebp + 8] */
    { double _v = fp_pop(); *(double*)ADDR(esp) = _v; } /* 0x100BFBAA: fstp qword ptr [esp] */
    PUSH32(esp, 0x26u); /* 0x100BFBAD: push 0x26 */
    PUSH32(esp, 0x12u); /* 0x100BFBAF: push 0x12 */
    RECOMP_BACKEDGE();
    goto L_100BFA51; /* 0x100BFBB1: jmp 0x100bfa51 */
L_100BFBB6:
    /* cmp ecx, 0x7FF00000u */ /* 0x100BFBB6: cmp ecx, 0x7ff00000 */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x7FF00000u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_100BFBC2; /* 0x100BFBBC: jne 0x100bfbc2 */
L_100BFBBE:
    /* test edx, edx */ /* 0x100BFBBE: test edx, edx */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(edx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_100BFBCE; /* 0x100BFBC0: je 0x100bfbce */
L_100BFBC2:
    /* cmp ecx, 0xFFF00000u */ /* 0x100BFBC2: cmp ecx, 0xfff00000 */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0xFFF00000u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_100BFC16; /* 0x100BFBC8: jne 0x100bfc16 */
L_100BFBCA:
    /* test edx, edx */ /* 0x100BFBCA: test edx, edx */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(edx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_100BFC16; /* 0x100BFBCC: jne 0x100bfc16 */
L_100BFBCE:
    fp_push(*(double*)ADDR(ebp + (-0xC))); /* 0x100BFBCE: fld qword ptr [ebp - 0xc] */
    eax = ebp + (-0x4); /* 0x100BFBD1: lea eax, [ebp - 4] */
    PUSH32(esp, eax); /* 0x100BFBD4: push eax */
    PUSH32(esp, ecx); /* 0x100BFBD5: push ecx */
    PUSH32(esp, ecx); /* 0x100BFBD6: push ecx */
    { double _v = fp_pop(); *(double*)ADDR(esp) = _v; } /* 0x100BFBD7: fstp qword ptr [esp] */
    RECOMP_CALL(sub_100D2F40); /* 0x100BFBDA: call 0x100d2f40 */
    RECOMP_FLAGS_IN();
    eax = MEM32(ebp + (-0x4)); /* 0x100BFBDF: mov eax, dword ptr [ebp - 4] */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x100BFBE2: add esp, 0xc */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xFFFFFA00u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 0xFFFFFA00u; /* 0x100BFBE5: add eax, 0xfffffa00 */
    _flag_k = FK_ADD;
    PUSH32(esp, eax); /* 0x100BFBEA: push eax */
    PUSH32(esp, ecx); /* 0x100BFBEB: push ecx */
    PUSH32(esp, ecx); /* 0x100BFBEC: push ecx */
    { double _v = fp_pop(); *(double*)ADDR(esp) = _v; } /* 0x100BFBED: fstp qword ptr [esp] */
    RECOMP_CALL(sub_100D302B); /* 0x100BFBF0: call 0x100d302b */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x100BFBF5: add esp, 0xc */
    _flag_k = FK_ADD;
    PUSH32(esp, edi); /* 0x100BFBF8: push edi */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x18u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x18u; /* 0x100BFBF9: sub esp, 0x18 */
    _flag_k = FK_CMP;
    { double _v = fp_pop(); *(double*)ADDR(esp + 0x10) = _v; } /* 0x100BFBFC: fstp qword ptr [esp + 0x10] */
    fp_push(*(double*)ADDR(ebp + 0x10)); /* 0x100BFC00: fld qword ptr [ebp + 0x10] */
    { double _v = fp_pop(); *(double*)ADDR(esp + 0x8) = _v; } /* 0x100BFC03: fstp qword ptr [esp + 8] */
    fp_push(*(double*)ADDR(ebp + 0x8)); /* 0x100BFC07: fld qword ptr [ebp + 8] */
    { double _v = fp_pop(); *(double*)ADDR(esp) = _v; } /* 0x100BFC0A: fstp qword ptr [esp] */
    PUSH32(esp, 0x26u); /* 0x100BFC0D: push 0x26 */
    PUSH32(esp, 0x11u); /* 0x100BFC0F: push 0x11 */
    RECOMP_BACKEDGE();
    goto L_100BFA51; /* 0x100BFC11: jmp 0x100bfa51 */
L_100BFC16:
    PUSH32(esp, 0xFFFFu); /* 0x100BFC16: push 0xffff */
    PUSH32(esp, edi); /* 0x100BFC1B: push edi */
    RECOMP_CALL(sub_100D3175); /* 0x100BFC1C: call 0x100d3175 */
    RECOMP_FLAGS_IN();
    fp_push(*(double*)ADDR(ebp + (-0xC))); /* 0x100BFC21: fld qword ptr [ebp - 0xc] */
    ecx = POP32_VAL(esp); /* 0x100BFC24: pop ecx */
    ecx = POP32_VAL(esp); /* 0x100BFC25: pop ecx */
    goto L_100BFC43; /* 0x100BFC26: jmp 0x100bfc43 */
L_100BFC28:
    fp_push(*(double*)ADDR(ebp + 0x10)); /* 0x100BFC28: fld qword ptr [ebp + 0x10] */
    PUSH32(esp, edi); /* 0x100BFC2B: push edi */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x10u; /* 0x100BFC2C: sub esp, 0x10 */
    _flag_k = FK_CMP;
    { double _v = fp_pop(); *(double*)ADDR(esp + 0x8) = _v; } /* 0x100BFC2F: fstp qword ptr [esp + 8] */
    fp_push(*(double*)ADDR(ebp + 0x8)); /* 0x100BFC33: fld qword ptr [ebp + 8] */
    { double _v = fp_pop(); *(double*)ADDR(esp) = _v; } /* 0x100BFC36: fstp qword ptr [esp] */
    PUSH32(esp, 0x26u); /* 0x100BFC39: push 0x26 */
    RECOMP_CALL(sub_100C0441); /* 0x100BFC3B: call 0x100c0441 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x18u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x18u; /* 0x100BFC40: add esp, 0x18 */
    _flag_k = FK_ADD;
L_100BFC43:
    edi = POP32_VAL(esp); /* 0x100BFC43: pop edi */
    esi = POP32_VAL(esp); /* 0x100BFC44: pop esi */
    ebx = POP32_VAL(esp); /* 0x100BFC45: pop ebx */
    esp = ebp; /* 0x100BFC46: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x100BFC48: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x100BFC49: ret  */
    RECOMP_REGS_OUT();
}

void sub_100BFC4A(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x100BFC4Au);

L_100BFC4A:
    PUSH32(esp, ebp); /* 0x100BFC4A: push ebp */
    ebp = esp; /* 0x100BFC4B: mov ebp, esp */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x100BFC4D: push dword ptr [ebp + 0x10] */
    fp_push(*(double*)ADDR(ebp + 0x8)); /* 0x100BFC50: fld qword ptr [ebp + 8] */
    PUSH32(esp, ecx); /* 0x100BFC53: push ecx */
    PUSH32(esp, ecx); /* 0x100BFC54: push ecx */
    { double _v = fp_pop(); *(double*)ADDR(esp) = _v; } /* 0x100BFC55: fstp qword ptr [esp] */
    RECOMP_CALL(sub_100CC299); /* 0x100BFC58: call 0x100cc299 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x100BFC5D: add esp, 0xc */
    _flag_k = FK_ADD;
    ebp = POP32_VAL(esp); /* 0x100BFC60: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x100BFC61: ret  */
    RECOMP_REGS_OUT();
}

void sub_100BFC62(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x100BFC62u);

L_100BFC62:
    PUSH32(esp, ebp); /* 0x100BFC62: push ebp */
    ebp = esp; /* 0x100BFC63: mov ebp, esp */
    eax = ebp + 0x8; /* 0x100BFC65: lea eax, [ebp + 8] */
    PUSH32(esp, eax); /* 0x100BFC68: push eax */
    RECOMP_CALL(sub_100BFE08); /* 0x100BFC69: call 0x100bfe08 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x100BFC6E: pop ecx */
    ebp = POP32_VAL(esp); /* 0x100BFC6F: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x100BFC70: ret  */
    RECOMP_REGS_OUT();
}

void sub_100BFC71(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x100BFC71u);

L_100BFC71:
    PUSH32(esp, ebp); /* 0x100BFC71: push ebp */
    ebp = esp; /* 0x100BFC72: mov ebp, esp */
    eax = ebp + 0x8; /* 0x100BFC74: lea eax, [ebp + 8] */
    PUSH32(esp, esi); /* 0x100BFC77: push esi */
    PUSH32(esp, eax); /* 0x100BFC78: push eax */
    RECOMP_CALL(sub_100BFE08); /* 0x100BFC79: call 0x100bfe08 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x100BFC7E: pop ecx */
    PUSH32(esp, 2); /* 0x100BFC7F: push 2 */
    esi = POP32_VAL(esp); /* 0x100BFC81: pop esi */
    /* cmp LO16(eax), LO16(esi) */ /* 0x100BFC82: cmp ax, si */
    _flag_a = (uint32_t)(LO16(eax)) << 16; _flag_b = (uint32_t)(LO16(esi)) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_100BFCC0; /* 0x100BFC85: je 0x100bfcc0 */
L_100BFC87:
    eax = ebp + 0x10; /* 0x100BFC87: lea eax, [ebp + 0x10] */
    PUSH32(esp, eax); /* 0x100BFC8A: push eax */
    RECOMP_CALL(sub_100BFE08); /* 0x100BFC8B: call 0x100bfe08 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x100BFC90: pop ecx */
    /* cmp LO16(eax), LO16(esi) */ /* 0x100BFC91: cmp ax, si */
    _flag_a = (uint32_t)(LO16(eax)) << 16; _flag_b = (uint32_t)(LO16(esi)) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_100BFCC0; /* 0x100BFC94: je 0x100bfcc0 */
L_100BFC96:
    fp_push(*(double*)ADDR(ebp + 0x10)); /* 0x100BFC96: fld qword ptr [ebp + 0x10] */
    fp_push(*(double*)ADDR(ebp + 0x8)); /* 0x100BFC99: fld qword ptr [ebp + 8] */
    _fpu_cmp = FPU_CMP(_st[0], _st[1]); /* 0x100BFC9C: fcom st(1) */
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x100BFC9E: fnstsw ax */
    /* test HI8(eax), 5 */ /* 0x100BFCA0: test ah, 5 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(5) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (RECOMP_PF((_flag_a & _flag_b), 24)) goto L_100BFCAE; /* 0x100BFCA3: jp 0x100bfcae */
L_100BFCA5:
    { _st[1] = _st[0]; g_st_i64[1] = g_st_i64[0]; fp_pop(); } /* 0x100BFCA5: fstp st(1) */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x100BFCA7: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    { _st[0] = _st[0]; g_st_i64[0] = g_st_i64[0]; fp_pop(); } /* 0x100BFCA9: fstp st(0) */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x100BFCAB: inc eax */
    _flag_k = FK_INC;
    goto L_100BFCC2; /* 0x100BFCAC: jmp 0x100bfcc2 */
L_100BFCAE:
    _fpu_cmp = FPU_CMP(_st[0], _st[1]); /* 0x100BFCAE: fcompp  */
    fp_pop(); fp_pop();
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x100BFCB0: fnstsw ax */
    /* test HI8(eax), 0x41u */ /* 0x100BFCB2: test ah, 0x41 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(0x41u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_100BFCBC; /* 0x100BFCB5: jne 0x100bfcbc */
L_100BFCB7:
    PUSH32(esp, 4); /* 0x100BFCB7: push 4 */
    eax = POP32_VAL(esp); /* 0x100BFCB9: pop eax */
    goto L_100BFCC2; /* 0x100BFCBA: jmp 0x100bfcc2 */
L_100BFCBC:
    eax = esi; /* 0x100BFCBC: mov eax, esi */
    goto L_100BFCC2; /* 0x100BFCBE: jmp 0x100bfcc2 */
L_100BFCC0:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x100BFCC0: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
L_100BFCC2:
    esi = POP32_VAL(esp); /* 0x100BFCC2: pop esi */
    ebp = POP32_VAL(esp); /* 0x100BFCC3: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x100BFCC4: ret  */
    RECOMP_REGS_OUT();
}

void sub_100BFCC5(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x100BFCC5u);

L_100BFCC5:
    PUSH32(esp, ebp); /* 0x100BFCC5: push ebp */
    ebp = esp; /* 0x100BFCC6: mov ebp, esp */
    eax = MEM32(ebp + 0xE); /* 0x100BFCC8: mov eax, dword ptr [ebp + 0xe] */
    eax = (uint32_t)LO16(eax); /* 0x100BFCCB: movzx eax, ax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x8000u);
    eax = eax & 0x8000u; /* 0x100BFCCE: and eax, 0x8000 */
    _cf = 0;
    _flag_k = FK_TEST;
    ebp = POP32_VAL(esp); /* 0x100BFCD3: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x100BFCD4: ret  */
    RECOMP_REGS_OUT();
}

void sub_100BFCD5(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x100BFCD5u);

L_100BFCD5:
    fp_push(*(double*)ADDR(0x10065B58)); /* 0x100BFCD5: fld qword ptr [0x10065b58] */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x100BFCDB: ret  */
    RECOMP_REGS_OUT();
}

void sub_100BFCDC(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x100BFCDCu);

L_100BFCDC:
    PUSH32(esp, ebp); /* 0x100BFCDC: push ebp */
    ebp = esp; /* 0x100BFCDD: mov ebp, esp */
    PUSH32(esp, esi); /* 0x100BFCDF: push esi */
    esi = MEM32(ebp + 0x8); /* 0x100BFCE0: mov esi, dword ptr [ebp + 8] */
    eax = 0x7FFu; /* 0x100BFCE3: mov eax, 0x7ff */
    edx = (uint32_t)MEM16(esi + 0x6); /* 0x100BFCE8: movzx edx, word ptr [esi + 6] */
    ecx = edx; /* 0x100BFCEC: mov ecx, edx */
    if (4u) _cf = (((ecx) >> 3) & 1u); /* 0x100BFCEE: shr ecx, 4 */
    if (4u) { _flag_a = recomp_flags_pack((ecx >> 4u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ecx = ecx >> 4u; /* 0x100BFCEE: shr ecx, 4 */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(eax);
    ecx = ecx & eax; /* 0x100BFCF1: and ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + 0x8) = ecx; /* 0x100BFCF3: mov dword ptr [ebp + 8], ecx */
    /* cmp LO16(ecx), LO16(eax) */ /* 0x100BFCF6: cmp cx, ax */
    _flag_a = (uint32_t)(LO16(ecx)) << 16; _flag_b = (uint32_t)(LO16(eax)) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    if (CMP_NE(_flag_a, _flag_b)) goto L_100BFD21; /* 0x100BFCF9: jne 0x100bfd21 */
L_100BFCFB:
    /* test LO8(edx), 0xFu */ /* 0x100BFCFB: test dl, 0xf */
    _flag_a = (uint32_t)(LO8(edx)) << 24; _flag_b = (uint32_t)(0xFu) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_100BFD19; /* 0x100BFCFE: jne 0x100bfd19 */
L_100BFD00:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x100BFD00: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp MEM16(esi + 0x4), LO16(eax) */ /* 0x100BFD02: cmp word ptr [esi + 4], ax */
    _flag_a = (uint32_t)(MEM16(esi + 0x4)) << 16; _flag_b = (uint32_t)(LO16(eax)) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    if (CMP_NE(_flag_a, _flag_b)) goto L_100BFD19; /* 0x100BFD06: jne 0x100bfd19 */
L_100BFD08:
    /* cmp MEM16(esi + 0x2), LO16(eax) */ /* 0x100BFD08: cmp word ptr [esi + 2], ax */
    _flag_a = (uint32_t)(MEM16(esi + 0x2)) << 16; _flag_b = (uint32_t)(LO16(eax)) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    if (CMP_NE(_flag_a, _flag_b)) goto L_100BFD19; /* 0x100BFD0C: jne 0x100bfd19 */
L_100BFD0E:
    /* cmp MEM16(esi), LO16(eax) */ /* 0x100BFD0E: cmp word ptr [esi], ax */
    _flag_a = (uint32_t)(MEM16(esi)) << 16; _flag_b = (uint32_t)(LO16(eax)) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    if (CMP_NE(_flag_a, _flag_b)) goto L_100BFD19; /* 0x100BFD11: jne 0x100bfd19 */
L_100BFD13:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x100BFD13: inc eax */
    _flag_k = FK_INC;
    goto L_100BFDD5; /* 0x100BFD14: jmp 0x100bfdd5 */
L_100BFD19:
    PUSH32(esp, 2); /* 0x100BFD19: push 2 */
    eax = POP32_VAL(esp); /* 0x100BFD1B: pop eax */
    goto L_100BFDD5; /* 0x100BFD1C: jmp 0x100bfdd5 */
L_100BFD21:
    /* test edx, 0xFFFF7FFFu */ /* 0x100BFD21: test edx, 0xffff7fff */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(0xFFFF7FFFu);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_100BFD43; /* 0x100BFD27: jne 0x100bfd43 */
L_100BFD29:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x100BFD29: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp MEM16(esi + 0x4), LO16(eax) */ /* 0x100BFD2B: cmp word ptr [esi + 4], ax */
    _flag_a = (uint32_t)(MEM16(esi + 0x4)) << 16; _flag_b = (uint32_t)(LO16(eax)) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    if (CMP_NE(_flag_a, _flag_b)) goto L_100BFD43; /* 0x100BFD2F: jne 0x100bfd43 */
L_100BFD31:
    /* cmp MEM16(esi + 0x2), LO16(eax) */ /* 0x100BFD31: cmp word ptr [esi + 2], ax */
    _flag_a = (uint32_t)(MEM16(esi + 0x2)) << 16; _flag_b = (uint32_t)(LO16(eax)) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    if (CMP_NE(_flag_a, _flag_b)) goto L_100BFD43; /* 0x100BFD35: jne 0x100bfd43 */
L_100BFD37:
    /* cmp MEM16(esi), LO16(eax) */ /* 0x100BFD37: cmp word ptr [esi], ax */
    _flag_a = (uint32_t)(MEM16(esi)) << 16; _flag_b = (uint32_t)(LO16(eax)) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    if (CMP_NE(_flag_a, _flag_b)) goto L_100BFD43; /* 0x100BFD3A: jne 0x100bfd43 */
L_100BFD3C:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x100BFD3C: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_100BFDD5; /* 0x100BFD3E: jmp 0x100bfdd5 */
L_100BFD43:
    eax = 0x433u; /* 0x100BFD43: mov eax, 0x433 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - ecx; /* 0x100BFD48: sub eax, ecx */
    _flag_k = FK_CMP;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(ebp + 0xC));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - MEM32(ebp + 0xC); /* 0x100BFD4A: sub eax, dword ptr [ebp + 0xc] */
    _flag_k = FK_CMP;
    ecx = (uint32_t)LO16(eax); /* 0x100BFD4D: movzx ecx, ax */
    SET_LO16(eax, LO16(ecx)); /* 0x100BFD50: mov ax, cx */
    MEM32(ebp + 0x8) = ecx; /* 0x100BFD53: mov dword ptr [ebp + 8], ecx */
    /* test LO16(eax), LO16(eax) */ /* 0x100BFD56: test ax, ax */
    _flag_a = (uint32_t)(LO16(eax)) << 16; _flag_b = (uint32_t)(LO16(eax)) << 16;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 16);
    RECOMP_BACKEDGE();
    if ((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) == 0u || (((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_100BFD3C; /* 0x100BFD59: jle 0x100bfd3c */
L_100BFD5B:
    PUSH32(esp, edi); /* 0x100BFD5B: push edi */
    PUSH32(esp, 0x35u); /* 0x100BFD5C: push 0x35 */
    edi = POP32_VAL(esp); /* 0x100BFD5E: pop edi */
    /* cmp LO16(edi), LO16(eax) */ /* 0x100BFD5F: cmp di, ax */
    _flag_a = (uint32_t)(LO16(edi)) << 16; _flag_b = (uint32_t)(LO16(eax)) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    if (CMP_G(_flag_a, _flag_b)) goto L_100BFD7B; /* 0x100BFD62: jg 0x100bfd7b */
L_100BFD64:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x100BFD64: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(0x8000u);
    edx = edx & 0x8000u; /* 0x100BFD66: and edx, 0x8000 */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(esi + 0x2) = eax; /* 0x100BFD6C: mov dword ptr [esi + 2], eax */
    MEM16(esi) = (uint16_t)(LO16(eax)); /* 0x100BFD6F: mov word ptr [esi], ax */
    _flag_a = (uint32_t)((eax | 0xFFFFFFFFu)); _flag_b = (uint32_t)((eax | 0xFFFFFFFFu));
    eax = eax | 0xFFFFFFFFu; /* 0x100BFD72: or eax, 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM16(esi + 0x6) = (uint16_t)(LO16(edx)); /* 0x100BFD75: mov word ptr [esi + 6], dx */
    goto L_100BFDD4; /* 0x100BFD79: jmp 0x100bfdd4 */
L_100BFD7B:
    if (4u) _cf = (((LO16(eax)) >> 3) & 1u); /* 0x100BFD7B: sar ax, 4 */
    if (4u) { _flag_a = recomp_flags_pack(((uint32_t)(((uint32_t)((int32_t)(int32_t)(int16_t)(LO16(eax)) >> 4u))) << 16), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    SET_LO16(eax, (uint32_t)((int32_t)(int32_t)(int16_t)(LO16(eax)) >> 4u));
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0xFu);
    ecx = ecx & 0xFu; /* 0x100BFD7F: and ecx, 0xf */
    _cf = 0;
    _flag_k = FK_TEST;
    edi = (int32_t)(int16_t)LO16(eax); /* 0x100BFD82: movsx edi, ax */
    edx = (uint32_t)MEM16(ecx * 2 + 0x100BFDD8); /* 0x100BFD85: movzx edx, word ptr [ecx*2 + 0x100bfdd8] */
    ecx = MEM32(edi * 4 + 0x100BFDF8); /* 0x100BFD8D: mov ecx, dword ptr [edi*4 + 0x100bfdf8] */
    eax = (uint32_t)MEM16(esi + ecx * 2); /* 0x100BFD94: movzx eax, word ptr [esi + ecx*2] */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(eax);
    edx = edx & eax; /* 0x100BFD98: and edx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)((eax ^ edx)); _flag_b = (uint32_t)((eax ^ edx));
    eax = eax ^ edx; /* 0x100BFD9A: xor eax, edx */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + 0x8) = edx; /* 0x100BFD9C: mov dword ptr [ebp + 8], edx */
    MEM16(esi + ecx * 2) = (uint16_t)(LO16(eax)); /* 0x100BFD9F: mov word ptr [esi + ecx*2], ax */
    SET_LO16(ecx, LO16(edx)); /* 0x100BFDA3: mov cx, dx */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(1);
    edi = edi - 1; /* 0x100BFDA6: dec edi */
    _flag_k = FK_DEC;
    if (/* dec result */ CMP_EQ(_flag_a, _flag_b)) goto L_100BFDC3; /* 0x100BFDA7: je 0x100bfdc3 */
L_100BFDA9:
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(1);
    edi = edi - 1; /* 0x100BFDA9: dec edi */
    _flag_k = FK_DEC;
    if (/* dec result */ CMP_EQ(_flag_a, _flag_b)) goto L_100BFDB9; /* 0x100BFDAA: je 0x100bfdb9 */
L_100BFDAC:
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(1);
    edi = edi - 1; /* 0x100BFDAC: dec edi */
    _flag_k = FK_DEC;
    if (/* dec result */ CMP_NE(_flag_a, _flag_b)) goto L_100BFDCB; /* 0x100BFDAD: jne 0x100bfdcb */
L_100BFDAF:
    _flag_a = (uint32_t)((LO16(ecx) | MEM16(esi + 0x4))) << 16; _flag_b = (uint32_t)((LO16(ecx) | MEM16(esi + 0x4))) << 16;
    SET_LO16(ecx, LO16(ecx) | MEM16(esi + 0x4)); /* 0x100BFDAF: or cx, word ptr [esi + 4] */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 16);
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x100BFDB3: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM16(esi + 0x4) = (uint16_t)(LO16(eax)); /* 0x100BFDB5: mov word ptr [esi + 4], ax */
L_100BFDB9:
    _flag_a = (uint32_t)((LO16(ecx) | MEM16(esi + 0x2))) << 16; _flag_b = (uint32_t)((LO16(ecx) | MEM16(esi + 0x2))) << 16;
    SET_LO16(ecx, LO16(ecx) | MEM16(esi + 0x2)); /* 0x100BFDB9: or cx, word ptr [esi + 2] */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 16);
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x100BFDBD: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM16(esi + 0x2) = (uint16_t)(LO16(eax)); /* 0x100BFDBF: mov word ptr [esi + 2], ax */
L_100BFDC3:
    _flag_a = (uint32_t)((LO16(ecx) | MEM16(esi))) << 16; _flag_b = (uint32_t)((LO16(ecx) | MEM16(esi))) << 16;
    SET_LO16(ecx, LO16(ecx) | MEM16(esi)); /* 0x100BFDC3: or cx, word ptr [esi] */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 16);
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x100BFDC6: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM16(esi) = (uint16_t)(LO16(eax)); /* 0x100BFDC8: mov word ptr [esi], ax */
L_100BFDCB:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x100BFDCB: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    /* test LO16(ecx), LO16(ecx) */ /* 0x100BFDCD: test cx, cx */
    _flag_a = (uint32_t)(LO16(ecx)) << 16; _flag_b = (uint32_t)(LO16(ecx)) << 16;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 16);
    SET_LO8(eax, (TEST_Z(_flag_a, _flag_b)) ? 1 : 0); /* 0x100BFDD0: sete al */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax - 1; /* 0x100BFDD3: dec eax */
    _flag_k = FK_DEC;
L_100BFDD4:
    edi = POP32_VAL(esp); /* 0x100BFDD4: pop edi */
L_100BFDD5:
    esi = POP32_VAL(esp); /* 0x100BFDD5: pop esi */
    ebp = POP32_VAL(esp); /* 0x100BFDD6: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x100BFDD7: ret  */
    RECOMP_REGS_OUT();
}

void sub_100BFE08(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x100BFE08u);

L_100BFE08:
    PUSH32(esp, ebp); /* 0x100BFE08: push ebp */
    ebp = esp; /* 0x100BFE09: mov ebp, esp */
    ecx = MEM32(ebp + 0x8); /* 0x100BFE0B: mov ecx, dword ptr [ebp + 8] */
    PUSH32(esp, esi); /* 0x100BFE0E: push esi */
    esi = 0x7FF0u; /* 0x100BFE0F: mov esi, 0x7ff0 */
    eax = (uint32_t)MEM16(ecx + 0x6); /* 0x100BFE14: movzx eax, word ptr [ecx + 6] */
    edx = eax; /* 0x100BFE18: mov edx, eax */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(esi);
    edx = edx & esi; /* 0x100BFE1A: and edx, esi */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp LO16(edx), LO16(esi) */ /* 0x100BFE1C: cmp dx, si */
    _flag_a = (uint32_t)(LO16(edx)) << 16; _flag_b = (uint32_t)(LO16(esi)) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    esi = POP32_VAL(esp); /* 0x100BFE1F: pop esi */
    if (CMP_NE(_flag_a, _flag_b)) goto L_100BFE41; /* 0x100BFE20: jne 0x100bfe41 */
L_100BFE22:
    /* test LO8(eax), 0xFu */ /* 0x100BFE22: test al, 0xf */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(0xFu) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_100BFE3C; /* 0x100BFE24: jne 0x100bfe3c */
L_100BFE26:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x100BFE26: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp MEM16(ecx + 0x4), LO16(eax) */ /* 0x100BFE28: cmp word ptr [ecx + 4], ax */
    _flag_a = (uint32_t)(MEM16(ecx + 0x4)) << 16; _flag_b = (uint32_t)(LO16(eax)) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    if (CMP_NE(_flag_a, _flag_b)) goto L_100BFE3C; /* 0x100BFE2C: jne 0x100bfe3c */
L_100BFE2E:
    /* cmp MEM16(ecx + 0x2), LO16(eax) */ /* 0x100BFE2E: cmp word ptr [ecx + 2], ax */
    _flag_a = (uint32_t)(MEM16(ecx + 0x2)) << 16; _flag_b = (uint32_t)(LO16(eax)) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    if (CMP_NE(_flag_a, _flag_b)) goto L_100BFE3C; /* 0x100BFE32: jne 0x100bfe3c */
L_100BFE34:
    /* cmp MEM16(ecx), LO16(eax) */ /* 0x100BFE34: cmp word ptr [ecx], ax */
    _flag_a = (uint32_t)(MEM16(ecx)) << 16; _flag_b = (uint32_t)(LO16(eax)) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    if (CMP_NE(_flag_a, _flag_b)) goto L_100BFE3C; /* 0x100BFE37: jne 0x100bfe3c */
L_100BFE39:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x100BFE39: inc eax */
    _flag_k = FK_INC;
    ebp = POP32_VAL(esp); /* 0x100BFE3A: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x100BFE3B: ret  */
L_100BFE3C:
    PUSH32(esp, 2); /* 0x100BFE3C: push 2 */
    eax = POP32_VAL(esp); /* 0x100BFE3E: pop eax */
    ebp = POP32_VAL(esp); /* 0x100BFE3F: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x100BFE40: ret  */
L_100BFE41:
    /* test eax, 0xFFFF7FFFu */ /* 0x100BFE41: test eax, 0xffff7fff */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xFFFF7FFFu);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_100BFE5D; /* 0x100BFE46: jne 0x100bfe5d */
L_100BFE48:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x100BFE48: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp MEM16(ecx + 0x4), LO16(eax) */ /* 0x100BFE4A: cmp word ptr [ecx + 4], ax */
    _flag_a = (uint32_t)(MEM16(ecx + 0x4)) << 16; _flag_b = (uint32_t)(LO16(eax)) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    if (CMP_NE(_flag_a, _flag_b)) goto L_100BFE5D; /* 0x100BFE4E: jne 0x100bfe5d */
L_100BFE50:
    /* cmp MEM16(ecx + 0x2), LO16(eax) */ /* 0x100BFE50: cmp word ptr [ecx + 2], ax */
    _flag_a = (uint32_t)(MEM16(ecx + 0x2)) << 16; _flag_b = (uint32_t)(LO16(eax)) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    if (CMP_NE(_flag_a, _flag_b)) goto L_100BFE5D; /* 0x100BFE54: jne 0x100bfe5d */
L_100BFE56:
    /* cmp MEM16(ecx), LO16(eax) */ /* 0x100BFE56: cmp word ptr [ecx], ax */
    _flag_a = (uint32_t)(MEM16(ecx)) << 16; _flag_b = (uint32_t)(LO16(eax)) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    if (CMP_NE(_flag_a, _flag_b)) goto L_100BFE5D; /* 0x100BFE59: jne 0x100bfe5d */
L_100BFE5B:
    ebp = POP32_VAL(esp); /* 0x100BFE5B: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x100BFE5C: ret  */
L_100BFE5D:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x100BFE5D: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    /* test LO16(edx), LO16(edx) */ /* 0x100BFE5F: test dx, dx */
    _flag_a = (uint32_t)(LO16(edx)) << 16; _flag_b = (uint32_t)(LO16(edx)) << 16;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 16);
    SET_LO8(eax, (TEST_NZ(_flag_a, _flag_b)) ? 1 : 0); /* 0x100BFE62: setne al */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - 2; /* 0x100BFE65: sub eax, 2 */
    _flag_k = FK_CMP;
    ebp = POP32_VAL(esp); /* 0x100BFE68: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x100BFE69: ret  */
    RECOMP_REGS_OUT();
}

void sub_100BFE6A(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x100BFE6Au);

L_100BFE6A:
    PUSH32(esp, ebp); /* 0x100BFE6A: push ebp */
    ebp = esp; /* 0x100BFE6B: mov ebp, esp */
    PUSH32(esp, esi); /* 0x100BFE6D: push esi */
    esi = MEM32(ebp + 0x8); /* 0x100BFE6E: mov esi, dword ptr [ebp + 8] */
    eax = 0xFFu; /* 0x100BFE71: mov eax, 0xff */
    ecx = (uint32_t)MEM16(esi + 0x2); /* 0x100BFE76: movzx ecx, word ptr [esi + 2] */
    edx = ecx; /* 0x100BFE7A: mov edx, ecx */
    if (7u) _cf = (((edx) >> 6) & 1u); /* 0x100BFE7C: shr edx, 7 */
    if (7u) { _flag_a = recomp_flags_pack((edx >> 7u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    edx = edx >> 7u; /* 0x100BFE7C: shr edx, 7 */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(eax);
    edx = edx & eax; /* 0x100BFE7F: and edx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + 0x8) = edx; /* 0x100BFE81: mov dword ptr [ebp + 8], edx */
    /* cmp LO16(edx), LO16(eax) */ /* 0x100BFE84: cmp dx, ax */
    _flag_a = (uint32_t)(LO16(edx)) << 16; _flag_b = (uint32_t)(LO16(eax)) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    if (CMP_NE(_flag_a, _flag_b)) goto L_100BFEA4; /* 0x100BFE87: jne 0x100bfea4 */
L_100BFE89:
    /* test LO8(ecx), 0x7Fu */ /* 0x100BFE89: test cl, 0x7f */
    _flag_a = (uint32_t)(LO8(ecx)) << 24; _flag_b = (uint32_t)(0x7Fu) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_100BFE9C; /* 0x100BFE8C: jne 0x100bfe9c */
L_100BFE8E:
    /* cmp MEM16(esi), 0 */ /* 0x100BFE8E: cmp word ptr [esi], 0 */
    _flag_a = (uint32_t)(MEM16(esi)) << 16; _flag_b = (uint32_t)(0) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    if (CMP_NE(_flag_a, _flag_b)) goto L_100BFE9C; /* 0x100BFE92: jne 0x100bfe9c */
L_100BFE94:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x100BFE94: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x100BFE96: inc eax */
    _flag_k = FK_INC;
    goto L_100BFF31; /* 0x100BFE97: jmp 0x100bff31 */
L_100BFE9C:
    PUSH32(esp, 2); /* 0x100BFE9C: push 2 */
    eax = POP32_VAL(esp); /* 0x100BFE9E: pop eax */
    goto L_100BFF31; /* 0x100BFE9F: jmp 0x100bff31 */
L_100BFEA4:
    /* test ecx, 0xFFFF7FFFu */ /* 0x100BFEA4: test ecx, 0xffff7fff */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0xFFFF7FFFu);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_100BFEB6; /* 0x100BFEAA: jne 0x100bfeb6 */
L_100BFEAC:
    /* cmp MEM16(esi), 0 */ /* 0x100BFEAC: cmp word ptr [esi], 0 */
    _flag_a = (uint32_t)(MEM16(esi)) << 16; _flag_b = (uint32_t)(0) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    if (CMP_NE(_flag_a, _flag_b)) goto L_100BFEB6; /* 0x100BFEB0: jne 0x100bfeb6 */
L_100BFEB2:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x100BFEB2: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_100BFF31; /* 0x100BFEB4: jmp 0x100bff31 */
L_100BFEB6:
    eax = 0x96u; /* 0x100BFEB6: mov eax, 0x96 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - edx; /* 0x100BFEBB: sub eax, edx */
    _flag_k = FK_CMP;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(ebp + 0xC));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - MEM32(ebp + 0xC); /* 0x100BFEBD: sub eax, dword ptr [ebp + 0xc] */
    _flag_k = FK_CMP;
    eax = (uint32_t)LO16(eax); /* 0x100BFEC0: movzx eax, ax */
    PUSH32(esp, edi); /* 0x100BFEC3: push edi */
    SET_LO16(edi, LO16(eax)); /* 0x100BFEC4: mov di, ax */
    MEM32(ebp + 0x8) = eax; /* 0x100BFEC7: mov dword ptr [ebp + 8], eax */
    /* test LO16(edi), LO16(edi) */ /* 0x100BFECA: test di, di */
    _flag_a = (uint32_t)(LO16(edi)) << 16; _flag_b = (uint32_t)(LO16(edi)) << 16;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 16);
    if ((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) != 0u && (((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) == 0u)) goto L_100BFED3; /* 0x100BFECD: jg 0x100bfed3 */
L_100BFECF:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x100BFECF: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_100BFF30; /* 0x100BFED1: jmp 0x100bff30 */
L_100BFED3:
    PUSH32(esp, 0x18u); /* 0x100BFED3: push 0x18 */
    edx = POP32_VAL(esp); /* 0x100BFED5: pop edx */
    /* cmp LO16(edx), LO16(edi) */ /* 0x100BFED6: cmp dx, di */
    _flag_a = (uint32_t)(LO16(edx)) << 16; _flag_b = (uint32_t)(LO16(edi)) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    if (CMP_G(_flag_a, _flag_b)) goto L_100BFEEF; /* 0x100BFED9: jg 0x100bfeef */
L_100BFEDB:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x100BFEDB: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x8000u);
    ecx = ecx & 0x8000u; /* 0x100BFEDD: and ecx, 0x8000 */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM16(esi) = (uint16_t)(LO16(eax)); /* 0x100BFEE3: mov word ptr [esi], ax */
    _flag_a = (uint32_t)((eax | 0xFFFFFFFFu)); _flag_b = (uint32_t)((eax | 0xFFFFFFFFu));
    eax = eax | 0xFFFFFFFFu; /* 0x100BFEE6: or eax, 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM16(esi + 0x2) = (uint16_t)(LO16(ecx)); /* 0x100BFEE9: mov word ptr [esi + 2], cx */
    goto L_100BFF30; /* 0x100BFEED: jmp 0x100bff30 */
L_100BFEEF:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xFu);
    eax = eax & 0xFu; /* 0x100BFEEF: and eax, 0xf */
    _cf = 0;
    _flag_k = FK_TEST;
    if (4u) _cf = (((LO16(edi)) >> 3) & 1u); /* 0x100BFEF2: sar di, 4 */
    if (4u) { _flag_a = recomp_flags_pack(((uint32_t)(((uint32_t)((int32_t)(int32_t)(int16_t)(LO16(edi)) >> 4u))) << 16), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    SET_LO16(edi, (uint32_t)((int32_t)(int32_t)(int16_t)(LO16(edi)) >> 4u));
    edx = (uint32_t)MEM16(eax * 2 + 0x100BFF34); /* 0x100BFEF6: movzx edx, word ptr [eax*2 + 0x100bff34] */
    eax = (int32_t)(int16_t)LO16(edi); /* 0x100BFEFE: movsx eax, di */
    ecx = MEM32(eax * 4 + 0x100BFF54); /* 0x100BFF01: mov ecx, dword ptr [eax*4 + 0x100bff54] */
    eax = (uint32_t)MEM16(esi + ecx * 2); /* 0x100BFF08: movzx eax, word ptr [esi + ecx*2] */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(eax);
    edx = edx & eax; /* 0x100BFF0C: and edx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)((eax ^ edx)); _flag_b = (uint32_t)((eax ^ edx));
    eax = eax ^ edx; /* 0x100BFF0E: xor eax, edx */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + 0x8) = edx; /* 0x100BFF10: mov dword ptr [ebp + 8], edx */
    MEM16(esi + ecx * 2) = (uint16_t)(LO16(eax)); /* 0x100BFF13: mov word ptr [esi + ecx*2], ax */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x100BFF17: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    SET_LO16(ecx, LO16(edx)); /* 0x100BFF19: mov cx, dx */
    /* cmp LO16(eax), LO16(edi) */ /* 0x100BFF1C: cmp ax, di */
    _flag_a = (uint32_t)(LO16(eax)) << 16; _flag_b = (uint32_t)(LO16(edi)) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    if (CMP_GE(_flag_a, _flag_b)) goto L_100BFF27; /* 0x100BFF1F: jge 0x100bff27 */
L_100BFF21:
    _flag_a = (uint32_t)((LO16(ecx) | MEM16(esi))) << 16; _flag_b = (uint32_t)((LO16(ecx) | MEM16(esi))) << 16;
    SET_LO16(ecx, LO16(ecx) | MEM16(esi)); /* 0x100BFF21: or cx, word ptr [esi] */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 16);
    MEM16(esi) = (uint16_t)(LO16(eax)); /* 0x100BFF24: mov word ptr [esi], ax */
L_100BFF27:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x100BFF27: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    /* test LO16(ecx), LO16(ecx) */ /* 0x100BFF29: test cx, cx */
    _flag_a = (uint32_t)(LO16(ecx)) << 16; _flag_b = (uint32_t)(LO16(ecx)) << 16;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 16);
    SET_LO8(eax, (TEST_Z(_flag_a, _flag_b)) ? 1 : 0); /* 0x100BFF2C: sete al */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax - 1; /* 0x100BFF2F: dec eax */
    _flag_k = FK_DEC;
L_100BFF30:
    edi = POP32_VAL(esp); /* 0x100BFF30: pop edi */
L_100BFF31:
    esi = POP32_VAL(esp); /* 0x100BFF31: pop esi */
    ebp = POP32_VAL(esp); /* 0x100BFF32: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x100BFF33: ret  */
    RECOMP_REGS_OUT();
}

void sub_100BFF5C(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x100BFF5Cu);

L_100BFF5C:
    PUSH32(esp, ebp); /* 0x100BFF5C: push ebp */
    ebp = esp; /* 0x100BFF5D: mov ebp, esp */
    ecx = MEM32(ebp + 0x8); /* 0x100BFF5F: mov ecx, dword ptr [ebp + 8] */
    PUSH32(esp, esi); /* 0x100BFF62: push esi */
    esi = 0x7F80u; /* 0x100BFF63: mov esi, 0x7f80 */
    eax = (uint32_t)MEM16(ecx + 0x2); /* 0x100BFF68: movzx eax, word ptr [ecx + 2] */
    edx = eax; /* 0x100BFF6C: mov edx, eax */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(esi);
    edx = edx & esi; /* 0x100BFF6E: and edx, esi */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp LO16(edx), LO16(esi) */ /* 0x100BFF70: cmp dx, si */
    _flag_a = (uint32_t)(LO16(edx)) << 16; _flag_b = (uint32_t)(LO16(esi)) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    esi = POP32_VAL(esp); /* 0x100BFF73: pop esi */
    if (CMP_NE(_flag_a, _flag_b)) goto L_100BFF8A; /* 0x100BFF74: jne 0x100bff8a */
L_100BFF76:
    /* test LO8(eax), 0x7Fu */ /* 0x100BFF76: test al, 0x7f */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(0x7Fu) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_100BFF85; /* 0x100BFF78: jne 0x100bff85 */
L_100BFF7A:
    /* cmp MEM16(ecx), 0 */ /* 0x100BFF7A: cmp word ptr [ecx], 0 */
    _flag_a = (uint32_t)(MEM16(ecx)) << 16; _flag_b = (uint32_t)(0) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    if (CMP_NE(_flag_a, _flag_b)) goto L_100BFF85; /* 0x100BFF7E: jne 0x100bff85 */
L_100BFF80:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x100BFF80: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x100BFF82: inc eax */
    _flag_k = FK_INC;
    ebp = POP32_VAL(esp); /* 0x100BFF83: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x100BFF84: ret  */
L_100BFF85:
    PUSH32(esp, 2); /* 0x100BFF85: push 2 */
    eax = POP32_VAL(esp); /* 0x100BFF87: pop eax */
    ebp = POP32_VAL(esp); /* 0x100BFF88: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x100BFF89: ret  */
L_100BFF8A:
    /* test eax, 0xFFFF7FFFu */ /* 0x100BFF8A: test eax, 0xffff7fff */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xFFFF7FFFu);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_100BFF9B; /* 0x100BFF8F: jne 0x100bff9b */
L_100BFF91:
    /* cmp MEM16(ecx), 0 */ /* 0x100BFF91: cmp word ptr [ecx], 0 */
    _flag_a = (uint32_t)(MEM16(ecx)) << 16; _flag_b = (uint32_t)(0) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    if (CMP_NE(_flag_a, _flag_b)) goto L_100BFF9B; /* 0x100BFF95: jne 0x100bff9b */
L_100BFF97:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x100BFF97: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    ebp = POP32_VAL(esp); /* 0x100BFF99: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x100BFF9A: ret  */
L_100BFF9B:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x100BFF9B: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    /* test LO16(edx), LO16(edx) */ /* 0x100BFF9D: test dx, dx */
    _flag_a = (uint32_t)(LO16(edx)) << 16; _flag_b = (uint32_t)(LO16(edx)) << 16;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 16);
    SET_LO8(eax, (TEST_NZ(_flag_a, _flag_b)) ? 1 : 0); /* 0x100BFFA0: setne al */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - 2; /* 0x100BFFA3: sub eax, 2 */
    _flag_k = FK_CMP;
    ebp = POP32_VAL(esp); /* 0x100BFFA6: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x100BFFA7: ret  */
    RECOMP_REGS_OUT();
}

void sub_100BFFA8(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x100BFFA8u);

L_100BFFA8:
    PUSH32(esp, ebp); /* 0x100BFFA8: push ebp */
    ebp = esp; /* 0x100BFFA9: mov ebp, esp */
    PUSH32(esp, ecx); /* 0x100BFFAB: push ecx */
    PUSH32(esp, ebx); /* 0x100BFFAC: push ebx */
    ebx = MEM32(ebp + 0x8); /* 0x100BFFAD: mov ebx, dword ptr [ebp + 8] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x100BFFB0: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x4)) = eax; /* 0x100BFFB2: mov dword ptr [ebp - 4], eax */
    /* test LO8(ebx), 0x18u */ /* 0x100BFFB5: test bl, 0x18 */
    _flag_a = (uint32_t)(LO8(ebx)) << 24; _flag_b = (uint32_t)(0x18u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_100BFFBD; /* 0x100BFFB8: je 0x100bffbd */
L_100BFFBA:
    _flag_a = (uint32_t)((ebx | 0x20u)); _flag_b = (uint32_t)((ebx | 0x20u));
    ebx = ebx | 0x20u; /* 0x100BFFBA: or ebx, 0x20 */
    _cf = 0;
    _flag_k = FK_TEST;
L_100BFFBD:
    /* test LO8(ebx), 0x20u */ /* 0x100BFFBD: test bl, 0x20 */
    _flag_a = (uint32_t)(LO8(ebx)) << 24; _flag_b = (uint32_t)(0x20u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_100BFFC8; /* 0x100BFFC0: je 0x100bffc8 */
L_100BFFC2:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x100BFFC2: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x100BFFC4: inc eax */
    _flag_k = FK_INC;
    MEM32(ebp + (-0x4)) = eax; /* 0x100BFFC5: mov dword ptr [ebp - 4], eax */
L_100BFFC8:
    /* test LO8(ebx), 0x10u */ /* 0x100BFFC8: test bl, 0x10 */
    _flag_a = (uint32_t)(LO8(ebx)) << 24; _flag_b = (uint32_t)(0x10u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_100BFFD3; /* 0x100BFFCB: je 0x100bffd3 */
L_100BFFCD:
    _flag_a = (uint32_t)((eax | 2)); _flag_b = (uint32_t)((eax | 2));
    eax = eax | 2; /* 0x100BFFCD: or eax, 2 */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x4)) = eax; /* 0x100BFFD0: mov dword ptr [ebp - 4], eax */
L_100BFFD3:
    /* test LO8(ebx), 8 */ /* 0x100BFFD3: test bl, 8 */
    _flag_a = (uint32_t)(LO8(ebx)) << 24; _flag_b = (uint32_t)(8) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_100BFFDE; /* 0x100BFFD6: je 0x100bffde */
L_100BFFD8:
    _flag_a = (uint32_t)((eax | 4)); _flag_b = (uint32_t)((eax | 4));
    eax = eax | 4; /* 0x100BFFD8: or eax, 4 */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x4)) = eax; /* 0x100BFFDB: mov dword ptr [ebp - 4], eax */
L_100BFFDE:
    /* test LO8(ebx), 4 */ /* 0x100BFFDE: test bl, 4 */
    _flag_a = (uint32_t)(LO8(ebx)) << 24; _flag_b = (uint32_t)(4) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_100BFFE9; /* 0x100BFFE1: je 0x100bffe9 */
L_100BFFE3:
    _flag_a = (uint32_t)((eax | 8)); _flag_b = (uint32_t)((eax | 8));
    eax = eax | 8; /* 0x100BFFE3: or eax, 8 */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x4)) = eax; /* 0x100BFFE6: mov dword ptr [ebp - 4], eax */
L_100BFFE9:
    PUSH32(esp, esi); /* 0x100BFFE9: push esi */
    esi = ebx; /* 0x100BFFEA: mov esi, ebx */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi & 1; /* 0x100BFFEC: and esi, 1 */
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_100BFFF7; /* 0x100BFFEF: je 0x100bfff7 */
L_100BFFF1:
    _flag_a = (uint32_t)((eax | 0x10u)); _flag_b = (uint32_t)((eax | 0x10u));
    eax = eax | 0x10u; /* 0x100BFFF1: or eax, 0x10 */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x4)) = eax; /* 0x100BFFF4: mov dword ptr [ebp - 4], eax */
L_100BFFF7:
    eax = ebp + (-0x4); /* 0x100BFFF7: lea eax, [ebp - 4] */
    PUSH32(esp, 0x1Fu); /* 0x100BFFFA: push 0x1f */
    PUSH32(esp, eax); /* 0x100BFFFC: push eax */
    RECOMP_CALL(sub_100CA69F); /* 0x100BFFFD: call 0x100ca69f */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x100C0002: pop ecx */
    ecx = POP32_VAL(esp); /* 0x100C0003: pop ecx */
    /* test esi, esi */ /* 0x100C0004: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    esi = POP32_VAL(esp); /* 0x100C0006: pop esi */
    if (TEST_Z(_flag_a, _flag_b)) goto L_100C0016; /* 0x100C0007: je 0x100c0016 */
L_100C0009:
    RECOMP_CALL(sub_1001177D); /* 0x100C0009: call 0x1001177d */
    RECOMP_FLAGS_IN();
    MEM32(eax) = 0x21u; /* 0x100C000E: mov dword ptr [eax], 0x21 */
    goto L_100C0026; /* 0x100C0014: jmp 0x100c0026 */
L_100C0016:
    /* test LO8(ebx), 0x1Cu */ /* 0x100C0016: test bl, 0x1c */
    _flag_a = (uint32_t)(LO8(ebx)) << 24; _flag_b = (uint32_t)(0x1Cu) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_100C0026; /* 0x100C0019: je 0x100c0026 */
L_100C001B:
    RECOMP_CALL(sub_1001177D); /* 0x100C001B: call 0x1001177d */
    RECOMP_FLAGS_IN();
    MEM32(eax) = 0x22u; /* 0x100C0020: mov dword ptr [eax], 0x22 */
L_100C0026:
    ebx = POP32_VAL(esp); /* 0x100C0026: pop ebx */
    esp = ebp; /* 0x100C0027: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x100C0029: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x100C002A: ret  */
    RECOMP_REGS_OUT();
}

void sub_100C002B(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x100C002Bu);

    goto L_100C002B;
L_100BFCDC:
    PUSH32(esp, ebp); /* 0x100BFCDC: push ebp */
    ebp = esp; /* 0x100BFCDD: mov ebp, esp */
    PUSH32(esp, esi); /* 0x100BFCDF: push esi */
    esi = MEM32(ebp + 0x8); /* 0x100BFCE0: mov esi, dword ptr [ebp + 8] */
    eax = 0x7FFu; /* 0x100BFCE3: mov eax, 0x7ff */
    edx = (uint32_t)MEM16(esi + 0x6); /* 0x100BFCE8: movzx edx, word ptr [esi + 6] */
    ecx = edx; /* 0x100BFCEC: mov ecx, edx */
    if (4u) _cf = (((ecx) >> 3) & 1u); /* 0x100BFCEE: shr ecx, 4 */
    if (4u) { _flag_a = recomp_flags_pack((ecx >> 4u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ecx = ecx >> 4u; /* 0x100BFCEE: shr ecx, 4 */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(eax);
    ecx = ecx & eax; /* 0x100BFCF1: and ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + 0x8) = ecx; /* 0x100BFCF3: mov dword ptr [ebp + 8], ecx */
    /* cmp LO16(ecx), LO16(eax) */ /* 0x100BFCF6: cmp cx, ax */
    _flag_a = (uint32_t)(LO16(ecx)) << 16; _flag_b = (uint32_t)(LO16(eax)) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    if (CMP_NE(_flag_a, _flag_b)) goto L_100BFD21; /* 0x100BFCF9: jne 0x100bfd21 */
L_100BFCFB:
    /* test LO8(edx), 0xFu */ /* 0x100BFCFB: test dl, 0xf */
    _flag_a = (uint32_t)(LO8(edx)) << 24; _flag_b = (uint32_t)(0xFu) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_100BFD19; /* 0x100BFCFE: jne 0x100bfd19 */
L_100BFD00:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x100BFD00: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp MEM16(esi + 0x4), LO16(eax) */ /* 0x100BFD02: cmp word ptr [esi + 4], ax */
    _flag_a = (uint32_t)(MEM16(esi + 0x4)) << 16; _flag_b = (uint32_t)(LO16(eax)) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    if (CMP_NE(_flag_a, _flag_b)) goto L_100BFD19; /* 0x100BFD06: jne 0x100bfd19 */
L_100BFD08:
    /* cmp MEM16(esi + 0x2), LO16(eax) */ /* 0x100BFD08: cmp word ptr [esi + 2], ax */
    _flag_a = (uint32_t)(MEM16(esi + 0x2)) << 16; _flag_b = (uint32_t)(LO16(eax)) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    if (CMP_NE(_flag_a, _flag_b)) goto L_100BFD19; /* 0x100BFD0C: jne 0x100bfd19 */
L_100BFD0E:
    /* cmp MEM16(esi), LO16(eax) */ /* 0x100BFD0E: cmp word ptr [esi], ax */
    _flag_a = (uint32_t)(MEM16(esi)) << 16; _flag_b = (uint32_t)(LO16(eax)) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    if (CMP_NE(_flag_a, _flag_b)) goto L_100BFD19; /* 0x100BFD11: jne 0x100bfd19 */
L_100BFD13:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x100BFD13: inc eax */
    _flag_k = FK_INC;
    goto L_100BFDD5; /* 0x100BFD14: jmp 0x100bfdd5 */
L_100BFD19:
    PUSH32(esp, 2); /* 0x100BFD19: push 2 */
    eax = POP32_VAL(esp); /* 0x100BFD1B: pop eax */
    goto L_100BFDD5; /* 0x100BFD1C: jmp 0x100bfdd5 */
L_100BFD21:
    /* test edx, 0xFFFF7FFFu */ /* 0x100BFD21: test edx, 0xffff7fff */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(0xFFFF7FFFu);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_100BFD43; /* 0x100BFD27: jne 0x100bfd43 */
L_100BFD29:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x100BFD29: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp MEM16(esi + 0x4), LO16(eax) */ /* 0x100BFD2B: cmp word ptr [esi + 4], ax */
    _flag_a = (uint32_t)(MEM16(esi + 0x4)) << 16; _flag_b = (uint32_t)(LO16(eax)) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    if (CMP_NE(_flag_a, _flag_b)) goto L_100BFD43; /* 0x100BFD2F: jne 0x100bfd43 */
L_100BFD31:
    /* cmp MEM16(esi + 0x2), LO16(eax) */ /* 0x100BFD31: cmp word ptr [esi + 2], ax */
    _flag_a = (uint32_t)(MEM16(esi + 0x2)) << 16; _flag_b = (uint32_t)(LO16(eax)) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    if (CMP_NE(_flag_a, _flag_b)) goto L_100BFD43; /* 0x100BFD35: jne 0x100bfd43 */
L_100BFD37:
    /* cmp MEM16(esi), LO16(eax) */ /* 0x100BFD37: cmp word ptr [esi], ax */
    _flag_a = (uint32_t)(MEM16(esi)) << 16; _flag_b = (uint32_t)(LO16(eax)) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    if (CMP_NE(_flag_a, _flag_b)) goto L_100BFD43; /* 0x100BFD3A: jne 0x100bfd43 */
L_100BFD3C:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x100BFD3C: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_100BFDD5; /* 0x100BFD3E: jmp 0x100bfdd5 */
L_100BFD43:
    eax = 0x433u; /* 0x100BFD43: mov eax, 0x433 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - ecx; /* 0x100BFD48: sub eax, ecx */
    _flag_k = FK_CMP;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(ebp + 0xC));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - MEM32(ebp + 0xC); /* 0x100BFD4A: sub eax, dword ptr [ebp + 0xc] */
    _flag_k = FK_CMP;
    ecx = (uint32_t)LO16(eax); /* 0x100BFD4D: movzx ecx, ax */
    SET_LO16(eax, LO16(ecx)); /* 0x100BFD50: mov ax, cx */
    MEM32(ebp + 0x8) = ecx; /* 0x100BFD53: mov dword ptr [ebp + 8], ecx */
    /* test LO16(eax), LO16(eax) */ /* 0x100BFD56: test ax, ax */
    _flag_a = (uint32_t)(LO16(eax)) << 16; _flag_b = (uint32_t)(LO16(eax)) << 16;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 16);
    RECOMP_BACKEDGE();
    if ((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) == 0u || (((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_100BFD3C; /* 0x100BFD59: jle 0x100bfd3c */
L_100BFD5B:
    PUSH32(esp, edi); /* 0x100BFD5B: push edi */
    PUSH32(esp, 0x35u); /* 0x100BFD5C: push 0x35 */
    edi = POP32_VAL(esp); /* 0x100BFD5E: pop edi */
    /* cmp LO16(edi), LO16(eax) */ /* 0x100BFD5F: cmp di, ax */
    _flag_a = (uint32_t)(LO16(edi)) << 16; _flag_b = (uint32_t)(LO16(eax)) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    if (CMP_G(_flag_a, _flag_b)) goto L_100BFD7B; /* 0x100BFD62: jg 0x100bfd7b */
L_100BFD64:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x100BFD64: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(0x8000u);
    edx = edx & 0x8000u; /* 0x100BFD66: and edx, 0x8000 */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(esi + 0x2) = eax; /* 0x100BFD6C: mov dword ptr [esi + 2], eax */
    MEM16(esi) = (uint16_t)(LO16(eax)); /* 0x100BFD6F: mov word ptr [esi], ax */
    _flag_a = (uint32_t)((eax | 0xFFFFFFFFu)); _flag_b = (uint32_t)((eax | 0xFFFFFFFFu));
    eax = eax | 0xFFFFFFFFu; /* 0x100BFD72: or eax, 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM16(esi + 0x6) = (uint16_t)(LO16(edx)); /* 0x100BFD75: mov word ptr [esi + 6], dx */
    goto L_100BFDD4; /* 0x100BFD79: jmp 0x100bfdd4 */
L_100BFD7B:
    if (4u) _cf = (((LO16(eax)) >> 3) & 1u); /* 0x100BFD7B: sar ax, 4 */
    if (4u) { _flag_a = recomp_flags_pack(((uint32_t)(((uint32_t)((int32_t)(int32_t)(int16_t)(LO16(eax)) >> 4u))) << 16), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    SET_LO16(eax, (uint32_t)((int32_t)(int32_t)(int16_t)(LO16(eax)) >> 4u));
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0xFu);
    ecx = ecx & 0xFu; /* 0x100BFD7F: and ecx, 0xf */
    _cf = 0;
    _flag_k = FK_TEST;
    edi = (int32_t)(int16_t)LO16(eax); /* 0x100BFD82: movsx edi, ax */
    edx = (uint32_t)MEM16(ecx * 2 + 0x100BFDD8); /* 0x100BFD85: movzx edx, word ptr [ecx*2 + 0x100bfdd8] */
    ecx = MEM32(edi * 4 + 0x100BFDF8); /* 0x100BFD8D: mov ecx, dword ptr [edi*4 + 0x100bfdf8] */
    eax = (uint32_t)MEM16(esi + ecx * 2); /* 0x100BFD94: movzx eax, word ptr [esi + ecx*2] */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(eax);
    edx = edx & eax; /* 0x100BFD98: and edx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)((eax ^ edx)); _flag_b = (uint32_t)((eax ^ edx));
    eax = eax ^ edx; /* 0x100BFD9A: xor eax, edx */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + 0x8) = edx; /* 0x100BFD9C: mov dword ptr [ebp + 8], edx */
    MEM16(esi + ecx * 2) = (uint16_t)(LO16(eax)); /* 0x100BFD9F: mov word ptr [esi + ecx*2], ax */
    SET_LO16(ecx, LO16(edx)); /* 0x100BFDA3: mov cx, dx */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(1);
    edi = edi - 1; /* 0x100BFDA6: dec edi */
    _flag_k = FK_DEC;
    if (/* dec result */ CMP_EQ(_flag_a, _flag_b)) goto L_100BFDC3; /* 0x100BFDA7: je 0x100bfdc3 */
L_100BFDA9:
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(1);
    edi = edi - 1; /* 0x100BFDA9: dec edi */
    _flag_k = FK_DEC;
    if (/* dec result */ CMP_EQ(_flag_a, _flag_b)) goto L_100BFDB9; /* 0x100BFDAA: je 0x100bfdb9 */
L_100BFDAC:
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(1);
    edi = edi - 1; /* 0x100BFDAC: dec edi */
    _flag_k = FK_DEC;
    if (/* dec result */ CMP_NE(_flag_a, _flag_b)) goto L_100BFDCB; /* 0x100BFDAD: jne 0x100bfdcb */
L_100BFDAF:
    _flag_a = (uint32_t)((LO16(ecx) | MEM16(esi + 0x4))) << 16; _flag_b = (uint32_t)((LO16(ecx) | MEM16(esi + 0x4))) << 16;
    SET_LO16(ecx, LO16(ecx) | MEM16(esi + 0x4)); /* 0x100BFDAF: or cx, word ptr [esi + 4] */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 16);
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x100BFDB3: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM16(esi + 0x4) = (uint16_t)(LO16(eax)); /* 0x100BFDB5: mov word ptr [esi + 4], ax */
L_100BFDB9:
    _flag_a = (uint32_t)((LO16(ecx) | MEM16(esi + 0x2))) << 16; _flag_b = (uint32_t)((LO16(ecx) | MEM16(esi + 0x2))) << 16;
    SET_LO16(ecx, LO16(ecx) | MEM16(esi + 0x2)); /* 0x100BFDB9: or cx, word ptr [esi + 2] */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 16);
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x100BFDBD: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM16(esi + 0x2) = (uint16_t)(LO16(eax)); /* 0x100BFDBF: mov word ptr [esi + 2], ax */
L_100BFDC3:
    _flag_a = (uint32_t)((LO16(ecx) | MEM16(esi))) << 16; _flag_b = (uint32_t)((LO16(ecx) | MEM16(esi))) << 16;
    SET_LO16(ecx, LO16(ecx) | MEM16(esi)); /* 0x100BFDC3: or cx, word ptr [esi] */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 16);
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x100BFDC6: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM16(esi) = (uint16_t)(LO16(eax)); /* 0x100BFDC8: mov word ptr [esi], ax */
L_100BFDCB:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x100BFDCB: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    /* test LO16(ecx), LO16(ecx) */ /* 0x100BFDCD: test cx, cx */
    _flag_a = (uint32_t)(LO16(ecx)) << 16; _flag_b = (uint32_t)(LO16(ecx)) << 16;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 16);
    SET_LO8(eax, (TEST_Z(_flag_a, _flag_b)) ? 1 : 0); /* 0x100BFDD0: sete al */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax - 1; /* 0x100BFDD3: dec eax */
    _flag_k = FK_DEC;
L_100BFDD4:
    edi = POP32_VAL(esp); /* 0x100BFDD4: pop edi */
L_100BFDD5:
    esi = POP32_VAL(esp); /* 0x100BFDD5: pop esi */
    ebp = POP32_VAL(esp); /* 0x100BFDD6: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x100BFDD7: ret  */
L_100C002B:
    PUSH32(esp, ebp); /* 0x100C002B: push ebp */
    ebp = esp; /* 0x100C002C: mov ebp, esp */
    ebp = POP32_VAL(esp); /* 0x100C002E: pop ebp */
    RECOMP_BACKEDGE();
    goto L_100BFCDC; /* 0x100C002F: jmp 0x100bfcdc */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    RECOMP_REGS_OUT();
}

void sub_100C0034(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x100C0034u);

    goto L_100C0034;
L_100BFE08:
    PUSH32(esp, ebp); /* 0x100BFE08: push ebp */
    ebp = esp; /* 0x100BFE09: mov ebp, esp */
    ecx = MEM32(ebp + 0x8); /* 0x100BFE0B: mov ecx, dword ptr [ebp + 8] */
    PUSH32(esp, esi); /* 0x100BFE0E: push esi */
    esi = 0x7FF0u; /* 0x100BFE0F: mov esi, 0x7ff0 */
    eax = (uint32_t)MEM16(ecx + 0x6); /* 0x100BFE14: movzx eax, word ptr [ecx + 6] */
    edx = eax; /* 0x100BFE18: mov edx, eax */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(esi);
    edx = edx & esi; /* 0x100BFE1A: and edx, esi */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp LO16(edx), LO16(esi) */ /* 0x100BFE1C: cmp dx, si */
    _flag_a = (uint32_t)(LO16(edx)) << 16; _flag_b = (uint32_t)(LO16(esi)) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    esi = POP32_VAL(esp); /* 0x100BFE1F: pop esi */
    if (CMP_NE(_flag_a, _flag_b)) goto L_100BFE41; /* 0x100BFE20: jne 0x100bfe41 */
L_100BFE22:
    /* test LO8(eax), 0xFu */ /* 0x100BFE22: test al, 0xf */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(0xFu) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_100BFE3C; /* 0x100BFE24: jne 0x100bfe3c */
L_100BFE26:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x100BFE26: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp MEM16(ecx + 0x4), LO16(eax) */ /* 0x100BFE28: cmp word ptr [ecx + 4], ax */
    _flag_a = (uint32_t)(MEM16(ecx + 0x4)) << 16; _flag_b = (uint32_t)(LO16(eax)) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    if (CMP_NE(_flag_a, _flag_b)) goto L_100BFE3C; /* 0x100BFE2C: jne 0x100bfe3c */
L_100BFE2E:
    /* cmp MEM16(ecx + 0x2), LO16(eax) */ /* 0x100BFE2E: cmp word ptr [ecx + 2], ax */
    _flag_a = (uint32_t)(MEM16(ecx + 0x2)) << 16; _flag_b = (uint32_t)(LO16(eax)) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    if (CMP_NE(_flag_a, _flag_b)) goto L_100BFE3C; /* 0x100BFE32: jne 0x100bfe3c */
L_100BFE34:
    /* cmp MEM16(ecx), LO16(eax) */ /* 0x100BFE34: cmp word ptr [ecx], ax */
    _flag_a = (uint32_t)(MEM16(ecx)) << 16; _flag_b = (uint32_t)(LO16(eax)) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    if (CMP_NE(_flag_a, _flag_b)) goto L_100BFE3C; /* 0x100BFE37: jne 0x100bfe3c */
L_100BFE39:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x100BFE39: inc eax */
    _flag_k = FK_INC;
    ebp = POP32_VAL(esp); /* 0x100BFE3A: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x100BFE3B: ret  */
L_100BFE3C:
    PUSH32(esp, 2); /* 0x100BFE3C: push 2 */
    eax = POP32_VAL(esp); /* 0x100BFE3E: pop eax */
    ebp = POP32_VAL(esp); /* 0x100BFE3F: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x100BFE40: ret  */
L_100BFE41:
    /* test eax, 0xFFFF7FFFu */ /* 0x100BFE41: test eax, 0xffff7fff */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xFFFF7FFFu);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_100BFE5D; /* 0x100BFE46: jne 0x100bfe5d */
L_100BFE48:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x100BFE48: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp MEM16(ecx + 0x4), LO16(eax) */ /* 0x100BFE4A: cmp word ptr [ecx + 4], ax */
    _flag_a = (uint32_t)(MEM16(ecx + 0x4)) << 16; _flag_b = (uint32_t)(LO16(eax)) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    if (CMP_NE(_flag_a, _flag_b)) goto L_100BFE5D; /* 0x100BFE4E: jne 0x100bfe5d */
L_100BFE50:
    /* cmp MEM16(ecx + 0x2), LO16(eax) */ /* 0x100BFE50: cmp word ptr [ecx + 2], ax */
    _flag_a = (uint32_t)(MEM16(ecx + 0x2)) << 16; _flag_b = (uint32_t)(LO16(eax)) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    if (CMP_NE(_flag_a, _flag_b)) goto L_100BFE5D; /* 0x100BFE54: jne 0x100bfe5d */
L_100BFE56:
    /* cmp MEM16(ecx), LO16(eax) */ /* 0x100BFE56: cmp word ptr [ecx], ax */
    _flag_a = (uint32_t)(MEM16(ecx)) << 16; _flag_b = (uint32_t)(LO16(eax)) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    if (CMP_NE(_flag_a, _flag_b)) goto L_100BFE5D; /* 0x100BFE59: jne 0x100bfe5d */
L_100BFE5B:
    ebp = POP32_VAL(esp); /* 0x100BFE5B: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x100BFE5C: ret  */
L_100BFE5D:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x100BFE5D: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    /* test LO16(edx), LO16(edx) */ /* 0x100BFE5F: test dx, dx */
    _flag_a = (uint32_t)(LO16(edx)) << 16; _flag_b = (uint32_t)(LO16(edx)) << 16;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 16);
    SET_LO8(eax, (TEST_NZ(_flag_a, _flag_b)) ? 1 : 0); /* 0x100BFE62: setne al */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - 2; /* 0x100BFE65: sub eax, 2 */
    _flag_k = FK_CMP;
    ebp = POP32_VAL(esp); /* 0x100BFE68: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x100BFE69: ret  */
L_100C0034:
    PUSH32(esp, ebp); /* 0x100C0034: push ebp */
    ebp = esp; /* 0x100C0035: mov ebp, esp */
    ebp = POP32_VAL(esp); /* 0x100C0037: pop ebp */
    RECOMP_BACKEDGE();
    goto L_100BFE08; /* 0x100C0038: jmp 0x100bfe08 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    RECOMP_REGS_OUT();
}

void sub_100C003D(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x100C003Du);

L_100C003D:
    PUSH32(esp, ebp); /* 0x100C003D: push ebp */
    ebp = esp; /* 0x100C003E: mov ebp, esp */
    eax = MEM32(ebp + 0x8); /* 0x100C0040: mov eax, dword ptr [ebp + 8] */
    /* test LO8(eax), 0x20u */ /* 0x100C0043: test al, 0x20 */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(0x20u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_100C004B; /* 0x100C0045: je 0x100c004b */
L_100C0047:
    PUSH32(esp, 5); /* 0x100C0047: push 5 */
    goto L_100C0062; /* 0x100C0049: jmp 0x100c0062 */
L_100C004B:
    /* test LO8(eax), 8 */ /* 0x100C004B: test al, 8 */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(8) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_100C0054; /* 0x100C004D: je 0x100c0054 */
L_100C004F:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x100C004F: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x100C0051: inc eax */
    _flag_k = FK_INC;
    ebp = POP32_VAL(esp); /* 0x100C0052: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x100C0053: ret  */
L_100C0054:
    /* test LO8(eax), 4 */ /* 0x100C0054: test al, 4 */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(4) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_100C005C; /* 0x100C0056: je 0x100c005c */
L_100C0058:
    PUSH32(esp, 2); /* 0x100C0058: push 2 */
    goto L_100C0062; /* 0x100C005A: jmp 0x100c0062 */
L_100C005C:
    /* test LO8(eax), 1 */ /* 0x100C005C: test al, 1 */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(1) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_100C0065; /* 0x100C005E: je 0x100c0065 */
L_100C0060:
    PUSH32(esp, 3); /* 0x100C0060: push 3 */
L_100C0062:
    eax = POP32_VAL(esp); /* 0x100C0062: pop eax */
    ebp = POP32_VAL(esp); /* 0x100C0063: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x100C0064: ret  */
L_100C0065:
    eax = (uint32_t)LO8(eax); /* 0x100C0065: movzx eax, al */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(2);
    eax = eax & 2; /* 0x100C0068: and eax, 2 */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + eax; /* 0x100C006B: add eax, eax */
    _flag_k = FK_ADD;
    ebp = POP32_VAL(esp); /* 0x100C006D: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x100C006E: ret  */
    RECOMP_REGS_OUT();
}

void sub_100C006F(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x100C006Fu);

L_100C006F:
    PUSH32(esp, ebx); /* 0x100C006F: push ebx */
    ebx = esp; /* 0x100C0070: mov ebx, esp */
    PUSH32(esp, ecx); /* 0x100C0072: push ecx */
    PUSH32(esp, ecx); /* 0x100C0073: push ecx */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xFFFFFFF0u);
    esp = esp & 0xFFFFFFF0u; /* 0x100C0074: and esp, 0xfffffff0 */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x100C0077: add esp, 4 */
    _flag_k = FK_ADD;
    PUSH32(esp, ebp); /* 0x100C007A: push ebp */
    ebp = MEM32(ebx + 0x4); /* 0x100C007B: mov ebp, dword ptr [ebx + 4] */
    MEM32(esp + 0x4) = ebp; /* 0x100C007E: mov dword ptr [esp + 4], ebp */
    ebp = esp; /* 0x100C0082: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x8Cu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x8Cu; /* 0x100C0084: sub esp, 0x8c */
    _flag_k = FK_CMP;
    eax = MEM32(0x100DF7B8); /* 0x100C008A: mov eax, dword ptr [0x100df7b8] */
    _flag_a = (uint32_t)((eax ^ ebp)); _flag_b = (uint32_t)((eax ^ ebp));
    eax = eax ^ ebp; /* 0x100C008F: xor eax, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x4)) = eax; /* 0x100C0091: mov dword ptr [ebp - 4], eax */
    PUSH32(esp, esi); /* 0x100C0094: push esi */
    esi = MEM32(ebx + 0x20); /* 0x100C0095: mov esi, dword ptr [ebx + 0x20] */
    eax = ebx + 0x18; /* 0x100C0098: lea eax, [ebx + 0x18] */
    PUSH32(esp, esi); /* 0x100C009B: push esi */
    PUSH32(esp, eax); /* 0x100C009C: push eax */
    PUSH32(esp, MEM32(ebx + 0x8)); /* 0x100C009D: push dword ptr [ebx + 8] */
    RECOMP_CALL(sub_100C0213); /* 0x100C00A0: call 0x100c0213 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x100C00A5: add esp, 0xc */
    _flag_k = FK_ADD;
    /* test eax, eax */ /* 0x100C00A8: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_100C00D2; /* 0x100C00AA: jne 0x100c00d2 */
L_100C00AC:
    _flag_a = (uint32_t)(MEM32(ebp + (-0x40))); _flag_b = (uint32_t)(0xFFFFFFFEu);
    MEM32(ebp + (-0x40)) = MEM32(ebp + (-0x40)) & 0xFFFFFFFEu; /* 0x100C00AC: and dword ptr [ebp - 0x40], 0xfffffffe */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, eax); /* 0x100C00B0: push eax */
    eax = ebx + 0x18; /* 0x100C00B1: lea eax, [ebx + 0x18] */
    PUSH32(esp, eax); /* 0x100C00B4: push eax */
    eax = ebx + 0x10; /* 0x100C00B5: lea eax, [ebx + 0x10] */
    PUSH32(esp, eax); /* 0x100C00B8: push eax */
    PUSH32(esp, MEM32(ebx + 0xC)); /* 0x100C00B9: push dword ptr [ebx + 0xc] */
    eax = ebx + 0x20; /* 0x100C00BC: lea eax, [ebx + 0x20] */
    PUSH32(esp, MEM32(ebx + 0x8)); /* 0x100C00BF: push dword ptr [ebx + 8] */
    PUSH32(esp, eax); /* 0x100C00C2: push eax */
    eax = ebp + (-0x80); /* 0x100C00C3: lea eax, [ebp - 0x80] */
    PUSH32(esp, eax); /* 0x100C00C6: push eax */
    RECOMP_CALL(sub_100C04C2); /* 0x100C00C7: call 0x100c04c2 */
    RECOMP_FLAGS_IN();
    esi = MEM32(ebx + 0x20); /* 0x100C00CC: mov esi, dword ptr [ebx + 0x20] */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x1Cu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x1Cu; /* 0x100C00CF: add esp, 0x1c */
    _flag_k = FK_ADD;
L_100C00D2:
    PUSH32(esp, MEM32(ebx + 0x8)); /* 0x100C00D2: push dword ptr [ebx + 8] */
    RECOMP_CALL(sub_100C003D); /* 0x100C00D5: call 0x100c003d */
    RECOMP_FLAGS_IN();
    /* cmp MEM32(0x100E1444), 0 */ /* 0x100C00DA: cmp dword ptr [0x100e1444], 0 */
    _flag_a = (uint32_t)(MEM32(0x100E1444)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    ecx = POP32_VAL(esp); /* 0x100C00E1: pop ecx */
    if (CMP_NE(_flag_a, _flag_b)) goto L_100C010D; /* 0x100C00E2: jne 0x100c010d */
L_100C00E4:
    /* test eax, eax */ /* 0x100C00E4: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_100C010D; /* 0x100C00E6: je 0x100c010d */
L_100C00E8:
    fp_push(*(double*)ADDR(ebx + 0x18)); /* 0x100C00E8: fld qword ptr [ebx + 0x18] */
    PUSH32(esp, esi); /* 0x100C00EB: push esi */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x18u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x18u; /* 0x100C00EC: sub esp, 0x18 */
    _flag_k = FK_CMP;
    { double _v = fp_pop(); *(double*)ADDR(esp + 0x10) = _v; } /* 0x100C00EF: fstp qword ptr [esp + 0x10] */
    fp_push(0.0); /* 0x100C00F3: fldz  */
    { double _v = fp_pop(); *(double*)ADDR(esp + 0x8) = _v; } /* 0x100C00F5: fstp qword ptr [esp + 8] */
    fp_push(*(double*)ADDR(ebx + 0x10)); /* 0x100C00F9: fld qword ptr [ebx + 0x10] */
    { double _v = fp_pop(); *(double*)ADDR(esp) = _v; } /* 0x100C00FC: fstp qword ptr [esp] */
    PUSH32(esp, MEM32(ebx + 0xC)); /* 0x100C00FF: push dword ptr [ebx + 0xc] */
    PUSH32(esp, eax); /* 0x100C0102: push eax */
    RECOMP_CALL(sub_100C07D4); /* 0x100C0103: call 0x100c07d4 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x24u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x24u; /* 0x100C0108: add esp, 0x24 */
    _flag_k = FK_ADD;
    goto L_100C0125; /* 0x100C010B: jmp 0x100c0125 */
L_100C010D:
    PUSH32(esp, eax); /* 0x100C010D: push eax */
    RECOMP_CALL(sub_100C07A7); /* 0x100C010E: call 0x100c07a7 */
    RECOMP_FLAGS_IN();
    MEM32(esp) = 0xFFFFu; /* 0x100C0113: mov dword ptr [esp], 0xffff */
    PUSH32(esp, esi); /* 0x100C011A: push esi */
    RECOMP_CALL(sub_100D3175); /* 0x100C011B: call 0x100d3175 */
    RECOMP_FLAGS_IN();
    fp_push(*(double*)ADDR(ebx + 0x18)); /* 0x100C0120: fld qword ptr [ebx + 0x18] */
    ecx = POP32_VAL(esp); /* 0x100C0123: pop ecx */
    ecx = POP32_VAL(esp); /* 0x100C0124: pop ecx */
L_100C0125:
    ecx = MEM32(ebp + (-0x4)); /* 0x100C0125: mov ecx, dword ptr [ebp - 4] */
    _flag_a = (uint32_t)((ecx ^ ebp)); _flag_b = (uint32_t)((ecx ^ ebp));
    ecx = ecx ^ ebp; /* 0x100C0128: xor ecx, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    esi = POP32_VAL(esp); /* 0x100C012A: pop esi */
    RECOMP_CALL(sub_1000F7C6); /* 0x100C012B: call 0x1000f7c6 */
    RECOMP_FLAGS_IN();
    esp = ebp; /* 0x100C0130: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x100C0132: pop ebp */
    esp = ebx; /* 0x100C0133: mov esp, ebx */
    ebx = POP32_VAL(esp); /* 0x100C0135: pop ebx */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x100C0136: ret  */
    RECOMP_REGS_OUT();
}

void sub_100C0137(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x100C0137u);

L_100C0137:
    PUSH32(esp, ebx); /* 0x100C0137: push ebx */
    ebx = esp; /* 0x100C0138: mov ebx, esp */
    PUSH32(esp, ecx); /* 0x100C013A: push ecx */
    PUSH32(esp, ecx); /* 0x100C013B: push ecx */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xFFFFFFF0u);
    esp = esp & 0xFFFFFFF0u; /* 0x100C013C: and esp, 0xfffffff0 */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x100C013F: add esp, 4 */
    _flag_k = FK_ADD;
    PUSH32(esp, ebp); /* 0x100C0142: push ebp */
    ebp = MEM32(ebx + 0x4); /* 0x100C0143: mov ebp, dword ptr [ebx + 4] */
    MEM32(esp + 0x4) = ebp; /* 0x100C0146: mov dword ptr [esp + 4], ebp */
    ebp = esp; /* 0x100C014A: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x8Cu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x8Cu; /* 0x100C014C: sub esp, 0x8c */
    _flag_k = FK_CMP;
    eax = MEM32(0x100DF7B8); /* 0x100C0152: mov eax, dword ptr [0x100df7b8] */
    _flag_a = (uint32_t)((eax ^ ebp)); _flag_b = (uint32_t)((eax ^ ebp));
    eax = eax ^ ebp; /* 0x100C0157: xor eax, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x4)) = eax; /* 0x100C0159: mov dword ptr [ebp - 4], eax */
    PUSH32(esp, esi); /* 0x100C015C: push esi */
    esi = MEM32(ebx + 0x28); /* 0x100C015D: mov esi, dword ptr [ebx + 0x28] */
    eax = ebx + 0x20; /* 0x100C0160: lea eax, [ebx + 0x20] */
    PUSH32(esp, esi); /* 0x100C0163: push esi */
    PUSH32(esp, eax); /* 0x100C0164: push eax */
    PUSH32(esp, MEM32(ebx + 0x8)); /* 0x100C0165: push dword ptr [ebx + 8] */
    RECOMP_CALL(sub_100C0213); /* 0x100C0168: call 0x100c0213 */
    RECOMP_FLAGS_IN();
    fp_push(*(double*)ADDR(ebx + 0x18)); /* 0x100C016D: fld qword ptr [ebx + 0x18] */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x100C0170: add esp, 0xc */
    _flag_k = FK_ADD;
    /* test eax, eax */ /* 0x100C0173: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_100C01AB; /* 0x100C0175: jne 0x100c01ab */
L_100C0177:
    eax = MEM32(ebp + (-0x40)); /* 0x100C0177: mov eax, dword ptr [ebp - 0x40] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xFFFFFFE3u);
    eax = eax & 0xFFFFFFE3u; /* 0x100C017A: and eax, 0xffffffe3 */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)((eax | 3)); _flag_b = (uint32_t)((eax | 3));
    eax = eax | 3; /* 0x100C017D: or eax, 3 */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x40)) = eax; /* 0x100C0180: mov dword ptr [ebp - 0x40], eax */
    eax = ebx + 0x20; /* 0x100C0183: lea eax, [ebx + 0x20] */
    PUSH32(esp, 0); /* 0x100C0186: push 0 */
    PUSH32(esp, eax); /* 0x100C0188: push eax */
    eax = ebx + 0x10; /* 0x100C0189: lea eax, [ebx + 0x10] */
    PUSH32(esp, eax); /* 0x100C018C: push eax */
    PUSH32(esp, MEM32(ebx + 0xC)); /* 0x100C018D: push dword ptr [ebx + 0xc] */
    eax = ebx + 0x28; /* 0x100C0190: lea eax, [ebx + 0x28] */
    PUSH32(esp, MEM32(ebx + 0x8)); /* 0x100C0193: push dword ptr [ebx + 8] */
    { double _v = fp_pop(); *(double*)ADDR(ebp + (-0x50)) = _v; } /* 0x100C0196: fstp qword ptr [ebp - 0x50] */
    PUSH32(esp, eax); /* 0x100C0199: push eax */
    eax = ebp + (-0x80); /* 0x100C019A: lea eax, [ebp - 0x80] */
    PUSH32(esp, eax); /* 0x100C019D: push eax */
    RECOMP_CALL(sub_100C04C2); /* 0x100C019E: call 0x100c04c2 */
    RECOMP_FLAGS_IN();
    esi = MEM32(ebx + 0x28); /* 0x100C01A3: mov esi, dword ptr [ebx + 0x28] */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x1Cu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x1Cu; /* 0x100C01A6: add esp, 0x1c */
    _flag_k = FK_ADD;
    goto L_100C01AD; /* 0x100C01A9: jmp 0x100c01ad */
L_100C01AB:
    { _st[0] = _st[0]; g_st_i64[0] = g_st_i64[0]; fp_pop(); } /* 0x100C01AB: fstp st(0) */
L_100C01AD:
    PUSH32(esp, MEM32(ebx + 0x8)); /* 0x100C01AD: push dword ptr [ebx + 8] */
    RECOMP_CALL(sub_100C003D); /* 0x100C01B0: call 0x100c003d */
    RECOMP_FLAGS_IN();
    /* cmp MEM32(0x100E1444), 0 */ /* 0x100C01B5: cmp dword ptr [0x100e1444], 0 */
    _flag_a = (uint32_t)(MEM32(0x100E1444)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    ecx = POP32_VAL(esp); /* 0x100C01BC: pop ecx */
    if (CMP_NE(_flag_a, _flag_b)) goto L_100C01E9; /* 0x100C01BD: jne 0x100c01e9 */
L_100C01BF:
    /* test eax, eax */ /* 0x100C01BF: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_100C01E9; /* 0x100C01C1: je 0x100c01e9 */
L_100C01C3:
    fp_push(*(double*)ADDR(ebx + 0x20)); /* 0x100C01C3: fld qword ptr [ebx + 0x20] */
    PUSH32(esp, esi); /* 0x100C01C6: push esi */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x18u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x18u; /* 0x100C01C7: sub esp, 0x18 */
    _flag_k = FK_CMP;
    { double _v = fp_pop(); *(double*)ADDR(esp + 0x10) = _v; } /* 0x100C01CA: fstp qword ptr [esp + 0x10] */
    fp_push(*(double*)ADDR(ebx + 0x18)); /* 0x100C01CE: fld qword ptr [ebx + 0x18] */
    { double _v = fp_pop(); *(double*)ADDR(esp + 0x8) = _v; } /* 0x100C01D1: fstp qword ptr [esp + 8] */
    fp_push(*(double*)ADDR(ebx + 0x10)); /* 0x100C01D5: fld qword ptr [ebx + 0x10] */
    { double _v = fp_pop(); *(double*)ADDR(esp) = _v; } /* 0x100C01D8: fstp qword ptr [esp] */
    PUSH32(esp, MEM32(ebx + 0xC)); /* 0x100C01DB: push dword ptr [ebx + 0xc] */
    PUSH32(esp, eax); /* 0x100C01DE: push eax */
    RECOMP_CALL(sub_100C07D4); /* 0x100C01DF: call 0x100c07d4 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x24u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x24u; /* 0x100C01E4: add esp, 0x24 */
    _flag_k = FK_ADD;
    goto L_100C0201; /* 0x100C01E7: jmp 0x100c0201 */
L_100C01E9:
    PUSH32(esp, eax); /* 0x100C01E9: push eax */
    RECOMP_CALL(sub_100C07A7); /* 0x100C01EA: call 0x100c07a7 */
    RECOMP_FLAGS_IN();
    MEM32(esp) = 0xFFFFu; /* 0x100C01EF: mov dword ptr [esp], 0xffff */
    PUSH32(esp, esi); /* 0x100C01F6: push esi */
    RECOMP_CALL(sub_100D3175); /* 0x100C01F7: call 0x100d3175 */
    RECOMP_FLAGS_IN();
    fp_push(*(double*)ADDR(ebx + 0x20)); /* 0x100C01FC: fld qword ptr [ebx + 0x20] */
    ecx = POP32_VAL(esp); /* 0x100C01FF: pop ecx */
    ecx = POP32_VAL(esp); /* 0x100C0200: pop ecx */
L_100C0201:
    ecx = MEM32(ebp + (-0x4)); /* 0x100C0201: mov ecx, dword ptr [ebp - 4] */
    _flag_a = (uint32_t)((ecx ^ ebp)); _flag_b = (uint32_t)((ecx ^ ebp));
    ecx = ecx ^ ebp; /* 0x100C0204: xor ecx, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    esi = POP32_VAL(esp); /* 0x100C0206: pop esi */
    RECOMP_CALL(sub_1000F7C6); /* 0x100C0207: call 0x1000f7c6 */
    RECOMP_FLAGS_IN();
    esp = ebp; /* 0x100C020C: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x100C020E: pop ebp */
    esp = ebx; /* 0x100C020F: mov esp, ebx */
    ebx = POP32_VAL(esp); /* 0x100C0211: pop ebx */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x100C0212: ret  */
    RECOMP_REGS_OUT();
}

void sub_100C0213(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x100C0213u);

L_100C0213:
    PUSH32(esp, ebp); /* 0x100C0213: push ebp */
    ebp = esp; /* 0x100C0214: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0xCu; /* 0x100C0216: sub esp, 0xc */
    _flag_k = FK_CMP;
    PUSH32(esp, ebx); /* 0x100C0219: push ebx */
    ebx = MEM32(ebp + 0x8); /* 0x100C021A: mov ebx, dword ptr [ebp + 8] */
    PUSH32(esp, esi); /* 0x100C021D: push esi */
    esi = ebx; /* 0x100C021E: mov esi, ebx */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(0x1Fu);
    esi = esi & 0x1Fu; /* 0x100C0220: and esi, 0x1f */
    _cf = 0;
    _flag_k = FK_TEST;
    /* test LO8(ebx), 8 */ /* 0x100C0223: test bl, 8 */
    _flag_a = (uint32_t)(LO8(ebx)) << 24; _flag_b = (uint32_t)(8) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_100C023E; /* 0x100C0226: je 0x100c023e */
L_100C0228:
    /* test MEM8(ebp + 0x10), 1 */ /* 0x100C0228: test byte ptr [ebp + 0x10], 1 */
    _flag_a = (uint32_t)(MEM8(ebp + 0x10)) << 24; _flag_b = (uint32_t)(1) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_100C023E; /* 0x100C022C: je 0x100c023e */
L_100C022E:
    PUSH32(esp, 1); /* 0x100C022E: push 1 */
    RECOMP_CALL(sub_100D31A0); /* 0x100C0230: call 0x100d31a0 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x100C0235: pop ecx */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(0xFFFFFFF7u);
    esi = esi & 0xFFFFFFF7u; /* 0x100C0236: and esi, 0xfffffff7 */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_100C03CE; /* 0x100C0239: jmp 0x100c03ce */
L_100C023E:
    /* test LO8(ebx), 4 */ /* 0x100C023E: test bl, 4 */
    _flag_a = (uint32_t)(LO8(ebx)) << 24; _flag_b = (uint32_t)(4) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_100C0259; /* 0x100C0241: je 0x100c0259 */
L_100C0243:
    /* test MEM8(ebp + 0x10), 4 */ /* 0x100C0243: test byte ptr [ebp + 0x10], 4 */
    _flag_a = (uint32_t)(MEM8(ebp + 0x10)) << 24; _flag_b = (uint32_t)(4) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_100C0259; /* 0x100C0247: je 0x100c0259 */
L_100C0249:
    PUSH32(esp, 4); /* 0x100C0249: push 4 */
    RECOMP_CALL(sub_100D31A0); /* 0x100C024B: call 0x100d31a0 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x100C0250: pop ecx */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(0xFFFFFFFBu);
    esi = esi & 0xFFFFFFFBu; /* 0x100C0251: and esi, 0xfffffffb */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_100C03CE; /* 0x100C0254: jmp 0x100c03ce */
L_100C0259:
    /* test LO8(ebx), 1 */ /* 0x100C0259: test bl, 1 */
    _flag_a = (uint32_t)(LO8(ebx)) << 24; _flag_b = (uint32_t)(1) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_100C02FC; /* 0x100C025C: je 0x100c02fc */
L_100C0262:
    /* test MEM8(ebp + 0x10), 8 */ /* 0x100C0262: test byte ptr [ebp + 0x10], 8 */
    _flag_a = (uint32_t)(MEM8(ebp + 0x10)) << 24; _flag_b = (uint32_t)(8) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_100C02FC; /* 0x100C0266: je 0x100c02fc */
L_100C026C:
    PUSH32(esp, 8); /* 0x100C026C: push 8 */
    RECOMP_CALL(sub_100D31A0); /* 0x100C026E: call 0x100d31a0 */
    RECOMP_FLAGS_IN();
    eax = MEM32(ebp + 0x10); /* 0x100C0273: mov eax, dword ptr [ebp + 0x10] */
    ecx = POP32_VAL(esp); /* 0x100C0276: pop ecx */
    ecx = 0xC00u; /* 0x100C0277: mov ecx, 0xc00 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ecx);
    eax = eax & ecx; /* 0x100C027C: and eax, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_100C02D4; /* 0x100C027E: je 0x100c02d4 */
L_100C0280:
    /* cmp eax, 0x400u */ /* 0x100C0280: cmp eax, 0x400 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x400u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_100C02BE; /* 0x100C0285: je 0x100c02be */
L_100C0287:
    /* cmp eax, 0x800u */ /* 0x100C0287: cmp eax, 0x800 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x800u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_100C02A8; /* 0x100C028C: je 0x100c02a8 */
L_100C028E:
    /* cmp eax, ecx */ /* 0x100C028E: cmp eax, ecx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_100C02F4; /* 0x100C0290: jne 0x100c02f4 */
L_100C0292:
    ecx = MEM32(ebp + 0xC); /* 0x100C0292: mov ecx, dword ptr [ebp + 0xc] */
    fp_push(0.0); /* 0x100C0295: fldz  */
    _fpu_cmp = FPU_CMP(_st[0], *(double*)ADDR(ecx)); /* 0x100C0297: fcomp qword ptr [ecx] */
    fp_pop();
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x100C0299: fnstsw ax */
    fp_push(*(double*)ADDR(0x100E28E0)); /* 0x100C029B: fld qword ptr [0x100e28e0] */
    /* test HI8(eax), 5 */ /* 0x100C02A1: test ah, 5 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(5) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (RECOMP_PF((_flag_a & _flag_b), 24)) goto L_100C02F0; /* 0x100C02A4: jp 0x100c02f0 */
L_100C02A6:
    goto L_100C02F2; /* 0x100C02A6: jmp 0x100c02f2 */
L_100C02A8:
    ecx = MEM32(ebp + 0xC); /* 0x100C02A8: mov ecx, dword ptr [ebp + 0xc] */
    fp_push(0.0); /* 0x100C02AB: fldz  */
    _fpu_cmp = FPU_CMP(_st[0], *(double*)ADDR(ecx)); /* 0x100C02AD: fcomp qword ptr [ecx] */
    fp_pop();
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x100C02AF: fnstsw ax */
    /* test HI8(eax), 5 */ /* 0x100C02B1: test ah, 5 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(5) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if ((!RECOMP_PF((_flag_a & _flag_b), 24))) goto L_100C02E2; /* 0x100C02B4: jnp 0x100c02e2 */
L_100C02B6:
    fp_push(*(double*)ADDR(0x100E28E0)); /* 0x100C02B6: fld qword ptr [0x100e28e0] */
    goto L_100C02F0; /* 0x100C02BC: jmp 0x100c02f0 */
L_100C02BE:
    ecx = MEM32(ebp + 0xC); /* 0x100C02BE: mov ecx, dword ptr [ebp + 0xc] */
    fp_push(0.0); /* 0x100C02C1: fldz  */
    _fpu_cmp = FPU_CMP(_st[0], *(double*)ADDR(ecx)); /* 0x100C02C3: fcomp qword ptr [ecx] */
    fp_pop();
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x100C02C5: fnstsw ax */
    /* test HI8(eax), 5 */ /* 0x100C02C7: test ah, 5 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(5) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (RECOMP_PF((_flag_a & _flag_b), 24)) goto L_100C02EA; /* 0x100C02CA: jp 0x100c02ea */
L_100C02CC:
    fp_push(*(double*)ADDR(0x100E28E0)); /* 0x100C02CC: fld qword ptr [0x100e28e0] */
    goto L_100C02F2; /* 0x100C02D2: jmp 0x100c02f2 */
L_100C02D4:
    ecx = MEM32(ebp + 0xC); /* 0x100C02D4: mov ecx, dword ptr [ebp + 0xc] */
    fp_push(0.0); /* 0x100C02D7: fldz  */
    _fpu_cmp = FPU_CMP(_st[0], *(double*)ADDR(ecx)); /* 0x100C02D9: fcomp qword ptr [ecx] */
    fp_pop();
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x100C02DB: fnstsw ax */
    /* test HI8(eax), 5 */ /* 0x100C02DD: test ah, 5 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(5) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (RECOMP_PF((_flag_a & _flag_b), 24)) goto L_100C02EA; /* 0x100C02E0: jp 0x100c02ea */
L_100C02E2:
    fp_push(*(double*)ADDR(0x100E28D0)); /* 0x100C02E2: fld qword ptr [0x100e28d0] */
    goto L_100C02F2; /* 0x100C02E8: jmp 0x100c02f2 */
L_100C02EA:
    fp_push(*(double*)ADDR(0x100E28D0)); /* 0x100C02EA: fld qword ptr [0x100e28d0] */
L_100C02F0:
    _st[0] = -_st[0]; /* 0x100C02F0: fchs  */
L_100C02F2:
    { double _v = fp_pop(); *(double*)ADDR(ecx) = _v; } /* 0x100C02F2: fstp qword ptr [ecx] */
L_100C02F4:
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(0xFFFFFFFEu);
    esi = esi & 0xFFFFFFFEu; /* 0x100C02F4: and esi, 0xfffffffe */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_100C03CE; /* 0x100C02F7: jmp 0x100c03ce */
L_100C02FC:
    /* test LO8(ebx), 2 */ /* 0x100C02FC: test bl, 2 */
    _flag_a = (uint32_t)(LO8(ebx)) << 24; _flag_b = (uint32_t)(2) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_100C03CE; /* 0x100C02FF: je 0x100c03ce */
L_100C0305:
    /* test MEM8(ebp + 0x10), 0x10u */ /* 0x100C0305: test byte ptr [ebp + 0x10], 0x10 */
    _flag_a = (uint32_t)(MEM8(ebp + 0x10)) << 24; _flag_b = (uint32_t)(0x10u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_100C03CE; /* 0x100C0309: je 0x100c03ce */
L_100C030F:
    PUSH32(esp, edi); /* 0x100C030F: push edi */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edi = 0; /* 0x100C0310: xor edi, edi */
    _cf = 0;
    _flag_k = FK_TEST;
    /* test LO8(ebx), 0x10u */ /* 0x100C0312: test bl, 0x10 */
    _flag_a = (uint32_t)(LO8(ebx)) << 24; _flag_b = (uint32_t)(0x10u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_100C0318; /* 0x100C0315: je 0x100c0318 */
L_100C0317:
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(1);
    edi = edi + 1; /* 0x100C0317: inc edi */
    _flag_k = FK_INC;
L_100C0318:
    ecx = MEM32(ebp + 0xC); /* 0x100C0318: mov ecx, dword ptr [ebp + 0xc] */
    fp_push(*(double*)ADDR(ecx)); /* 0x100C031B: fld qword ptr [ecx] */
    fp_push(0.0); /* 0x100C031D: fldz  */
    _fpu_cmp = FPU_CMP(_st[0], _st[1]); /* 0x100C031F: fucompp  */
    fp_pop(); fp_pop();
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x100C0321: fnstsw ax */
    /* test HI8(eax), 0x44u */ /* 0x100C0323: test ah, 0x44 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(0x44u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if ((!RECOMP_PF((_flag_a & _flag_b), 24))) goto L_100C03BB; /* 0x100C0326: jnp 0x100c03bb */
L_100C032C:
    fp_push(*(double*)ADDR(ecx)); /* 0x100C032C: fld qword ptr [ecx] */
    eax = ebp + 0x8; /* 0x100C032E: lea eax, [ebp + 8] */
    PUSH32(esp, eax); /* 0x100C0331: push eax */
    PUSH32(esp, ecx); /* 0x100C0332: push ecx */
    PUSH32(esp, ecx); /* 0x100C0333: push ecx */
    { double _v = fp_pop(); *(double*)ADDR(esp) = _v; } /* 0x100C0334: fstp qword ptr [esp] */
    RECOMP_CALL(sub_100D2F40); /* 0x100C0337: call 0x100d2f40 */
    RECOMP_FLAGS_IN();
    eax = MEM32(ebp + 0x8); /* 0x100C033C: mov eax, dword ptr [ebp + 8] */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x100C033F: add esp, 0xc */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xFFFFFA00u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 0xFFFFFA00u; /* 0x100C0342: add eax, 0xfffffa00 */
    _flag_k = FK_ADD;
    MEM32(ebp + 0x8) = eax; /* 0x100C0347: mov dword ptr [ebp + 8], eax */
    *(double*)ADDR(ebp + (-0xC)) = _st[0]; /* 0x100C034A: fst qword ptr [ebp - 0xc] */
    fp_push(0.0); /* 0x100C034D: fldz  */
    /* cmp eax, 0xFFFFFBCEu */ /* 0x100C034F: cmp eax, 0xfffffbce */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xFFFFFBCEu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_GE(_flag_a, _flag_b)) goto L_100C035D; /* 0x100C0354: jge 0x100c035d */
L_100C0356:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edi = 0; /* 0x100C0356: xor edi, edi */
    _cf = 0;
    _flag_k = FK_TEST;
    { double _v = fp_pop(); _st[0] *= _v; } /* 0x100C0358: fmulp st(1) */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(1);
    edi = edi + 1; /* 0x100C035A: inc edi */
    _flag_k = FK_INC;
    goto L_100C03B4; /* 0x100C035B: jmp 0x100c03b4 */
L_100C035D:
    _fpu_cmp = FPU_CMP(_st[0], _st[1]); /* 0x100C035D: fcompp  */
    fp_pop(); fp_pop();
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edx = 0; /* 0x100C035F: xor edx, edx */
    _cf = 0;
    _flag_k = FK_TEST;
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x100C0361: fnstsw ax */
    /* test HI8(eax), 0x41u */ /* 0x100C0363: test ah, 0x41 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(0x41u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_100C0369; /* 0x100C0366: jne 0x100c0369 */
L_100C0368:
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(1);
    edx = edx + 1; /* 0x100C0368: inc edx */
    _flag_k = FK_INC;
L_100C0369:
    eax = MEM32(ebp + (-0x6)); /* 0x100C0369: mov eax, dword ptr [ebp - 6] */
    ecx = 0xFFFFFC03u; /* 0x100C036C: mov ecx, 0xfffffc03 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xFu);
    eax = eax & 0xFu; /* 0x100C0371: and eax, 0xf */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)((eax | 0x10u)); _flag_b = (uint32_t)((eax | 0x10u));
    eax = eax | 0x10u; /* 0x100C0374: or eax, 0x10 */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM16(ebp + (-0x6)) = (uint16_t)(LO16(eax)); /* 0x100C0377: mov word ptr [ebp - 6], ax */
    eax = MEM32(ebp + 0x8); /* 0x100C037B: mov eax, dword ptr [ebp + 8] */
    /* cmp eax, ecx */ /* 0x100C037E: cmp eax, ecx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_GE(_flag_a, _flag_b)) goto L_100C03AB; /* 0x100C0380: jge 0x100c03ab */
L_100C0382:
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ecx = ecx - eax; /* 0x100C0382: sub ecx, eax */
    _flag_k = FK_CMP;
    eax = MEM32(ebp + (-0xC)); /* 0x100C0384: mov eax, dword ptr [ebp - 0xc] */
L_100C0387:
    /* test MEM8(ebp + (-0xC)), 1 */ /* 0x100C0387: test byte ptr [ebp - 0xc], 1 */
    _flag_a = (uint32_t)(MEM8(ebp + (-0xC))) << 24; _flag_b = (uint32_t)(1) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_100C0392; /* 0x100C038B: je 0x100c0392 */
L_100C038D:
    /* test edi, edi */ /* 0x100C038D: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_100C0392; /* 0x100C038F: jne 0x100c0392 */
L_100C0391:
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(1);
    edi = edi + 1; /* 0x100C0391: inc edi */
    _flag_k = FK_INC;
L_100C0392:
    if (1u) _cf = (((eax) >> 0) & 1u); /* 0x100C0392: shr eax, 1 */
    if (1u) { _flag_a = recomp_flags_pack((eax >> 1u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax >> 1u; /* 0x100C0392: shr eax, 1 */
    /* test MEM8(ebp + (-0x8)), 1 */ /* 0x100C0394: test byte ptr [ebp - 8], 1 */
    _flag_a = (uint32_t)(MEM8(ebp + (-0x8))) << 24; _flag_b = (uint32_t)(1) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    MEM32(ebp + (-0xC)) = eax; /* 0x100C0398: mov dword ptr [ebp - 0xc], eax */
    if (TEST_Z(_flag_a, _flag_b)) goto L_100C03A5; /* 0x100C039B: je 0x100c03a5 */
L_100C039D:
    _flag_a = (uint32_t)((eax | 0x80000000u)); _flag_b = (uint32_t)((eax | 0x80000000u));
    eax = eax | 0x80000000u; /* 0x100C039D: or eax, 0x80000000 */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0xC)) = eax; /* 0x100C03A2: mov dword ptr [ebp - 0xc], eax */
L_100C03A5:
    if (1u) _cf = (((MEM32(ebp + (-0x8))) >> 0) & 1u); /* 0x100C03A5: shr dword ptr [ebp - 8], 1 */
    if (1u) { _flag_a = recomp_flags_pack((MEM32(ebp + (-0x8)) >> 1u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    MEM32(ebp + (-0x8)) = MEM32(ebp + (-0x8)) >> 1u; /* 0x100C03A5: shr dword ptr [ebp - 8], 1 */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx - 1; /* 0x100C03A8: dec ecx */
    _flag_k = FK_DEC;
    RECOMP_BACKEDGE();
    if (/* dec result */ CMP_NE(_flag_a, _flag_b)) goto L_100C0387; /* 0x100C03A9: jne 0x100c0387 */
L_100C03AB:
    fp_push(*(double*)ADDR(ebp + (-0xC))); /* 0x100C03AB: fld qword ptr [ebp - 0xc] */
    /* test edx, edx */ /* 0x100C03AE: test edx, edx */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(edx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_100C03B4; /* 0x100C03B0: je 0x100c03b4 */
L_100C03B2:
    _st[0] = -_st[0]; /* 0x100C03B2: fchs  */
L_100C03B4:
    eax = MEM32(ebp + 0xC); /* 0x100C03B4: mov eax, dword ptr [ebp + 0xc] */
    { double _v = fp_pop(); *(double*)ADDR(eax) = _v; } /* 0x100C03B7: fstp qword ptr [eax] */
    goto L_100C03BE; /* 0x100C03B9: jmp 0x100c03be */
L_100C03BB:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edi = 0; /* 0x100C03BB: xor edi, edi */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(1);
    edi = edi + 1; /* 0x100C03BD: inc edi */
    _flag_k = FK_INC;
L_100C03BE:
    /* test edi, edi */ /* 0x100C03BE: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    edi = POP32_VAL(esp); /* 0x100C03C0: pop edi */
    if (TEST_Z(_flag_a, _flag_b)) goto L_100C03CB; /* 0x100C03C1: je 0x100c03cb */
L_100C03C3:
    PUSH32(esp, 0x10u); /* 0x100C03C3: push 0x10 */
    RECOMP_CALL(sub_100D31A0); /* 0x100C03C5: call 0x100d31a0 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x100C03CA: pop ecx */
L_100C03CB:
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(0xFFFFFFFDu);
    esi = esi & 0xFFFFFFFDu; /* 0x100C03CB: and esi, 0xfffffffd */
    _cf = 0;
    _flag_k = FK_TEST;
L_100C03CE:
    /* test LO8(ebx), 0x10u */ /* 0x100C03CE: test bl, 0x10 */
    _flag_a = (uint32_t)(LO8(ebx)) << 24; _flag_b = (uint32_t)(0x10u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_100C03E4; /* 0x100C03D1: je 0x100c03e4 */
L_100C03D3:
    /* test MEM8(ebp + 0x10), 0x20u */ /* 0x100C03D3: test byte ptr [ebp + 0x10], 0x20 */
    _flag_a = (uint32_t)(MEM8(ebp + 0x10)) << 24; _flag_b = (uint32_t)(0x20u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_100C03E4; /* 0x100C03D7: je 0x100c03e4 */
L_100C03D9:
    PUSH32(esp, 0x20u); /* 0x100C03D9: push 0x20 */
    RECOMP_CALL(sub_100D31A0); /* 0x100C03DB: call 0x100d31a0 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x100C03E0: pop ecx */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(0xFFFFFFEFu);
    esi = esi & 0xFFFFFFEFu; /* 0x100C03E1: and esi, 0xffffffef */
    _cf = 0;
    _flag_k = FK_TEST;
L_100C03E4:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x100C03E4: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    /* test esi, esi */ /* 0x100C03E6: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    esi = POP32_VAL(esp); /* 0x100C03E8: pop esi */
    SET_LO8(eax, (TEST_Z(_flag_a, _flag_b)) ? 1 : 0); /* 0x100C03E9: sete al */
    ebx = POP32_VAL(esp); /* 0x100C03EC: pop ebx */
    esp = ebp; /* 0x100C03ED: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x100C03EF: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x100C03F0: ret  */
    RECOMP_REGS_OUT();
}

void sub_100C03F1(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x100C03F1u);

L_100C03F1:
    PUSH32(esp, ebp); /* 0x100C03F1: push ebp */
    ebp = esp; /* 0x100C03F2: mov ebp, esp */
    /* cmp MEM32(0x100E1444), 0 */ /* 0x100C03F4: cmp dword ptr [0x100e1444], 0 */
    _flag_a = (uint32_t)(MEM32(0x100E1444)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_100C0422; /* 0x100C03FB: jne 0x100c0422 */
L_100C03FD:
    PUSH32(esp, MEM32(ebp + 0x14)); /* 0x100C03FD: push dword ptr [ebp + 0x14] */
    fp_push(*(double*)ADDR(ebp + 0xC)); /* 0x100C0400: fld qword ptr [ebp + 0xc] */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x18u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x18u; /* 0x100C0403: sub esp, 0x18 */
    _flag_k = FK_CMP;
    *(double*)ADDR(esp + 0x10) = _st[0]; /* 0x100C0406: fst qword ptr [esp + 0x10] */
    fp_push(0.0); /* 0x100C040A: fldz  */
    { double _v = fp_pop(); *(double*)ADDR(esp + 0x8) = _v; } /* 0x100C040C: fstp qword ptr [esp + 8] */
    { double _v = fp_pop(); *(double*)ADDR(esp) = _v; } /* 0x100C0410: fstp qword ptr [esp] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x100C0413: push dword ptr [ebp + 8] */
    PUSH32(esp, 1); /* 0x100C0416: push 1 */
    RECOMP_CALL(sub_100C07D4); /* 0x100C0418: call 0x100c07d4 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x24u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x24u; /* 0x100C041D: add esp, 0x24 */
    _flag_k = FK_ADD;
    ebp = POP32_VAL(esp); /* 0x100C0420: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x100C0421: ret  */
L_100C0422:
    RECOMP_CALL(sub_1001177D); /* 0x100C0422: call 0x1001177d */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0xFFFFu); /* 0x100C0427: push 0xffff */
    PUSH32(esp, MEM32(ebp + 0x14)); /* 0x100C042C: push dword ptr [ebp + 0x14] */
    MEM32(eax) = 0x21u; /* 0x100C042F: mov dword ptr [eax], 0x21 */
    RECOMP_CALL(sub_100D3175); /* 0x100C0435: call 0x100d3175 */
    RECOMP_FLAGS_IN();
    fp_push(*(double*)ADDR(ebp + 0xC)); /* 0x100C043A: fld qword ptr [ebp + 0xc] */
    ecx = POP32_VAL(esp); /* 0x100C043D: pop ecx */
    ecx = POP32_VAL(esp); /* 0x100C043E: pop ecx */
    ebp = POP32_VAL(esp); /* 0x100C043F: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x100C0440: ret  */
    RECOMP_REGS_OUT();
}

void sub_100C0441(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x100C0441u);

L_100C0441:
    PUSH32(esp, ebp); /* 0x100C0441: push ebp */
    ebp = esp; /* 0x100C0442: mov ebp, esp */
    /* cmp MEM32(0x100E1444), 0 */ /* 0x100C0444: cmp dword ptr [0x100e1444], 0 */
    _flag_a = (uint32_t)(MEM32(0x100E1444)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    fp_push(*(double*)ADDR(ebp + 0xC)); /* 0x100C044B: fld qword ptr [ebp + 0xc] */
    fp_push(_st[0]); /* 0x100C044E: fld st(0) */
    fp_push(*(double*)ADDR(ebp + 0x14)); /* 0x100C0450: fld qword ptr [ebp + 0x14] */
    _st[1] += _st[0]; /* 0x100C0453: fadd st(1), st(0) */
    fp_xch(1); /* 0x100C0455: fxch st(1) */
    *(double*)ADDR(ebp + 0xC) = _st[0]; /* 0x100C0457: fst qword ptr [ebp + 0xc] */
    if (CMP_NE(_flag_a, _flag_b)) goto L_100C047C; /* 0x100C045A: jne 0x100c047c */
L_100C045C:
    PUSH32(esp, MEM32(ebp + 0x1C)); /* 0x100C045C: push dword ptr [ebp + 0x1c] */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x18u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x18u; /* 0x100C045F: sub esp, 0x18 */
    _flag_k = FK_CMP;
    { double _v = fp_pop(); *(double*)ADDR(esp + 0x10) = _v; } /* 0x100C0462: fstp qword ptr [esp + 0x10] */
    { double _v = fp_pop(); *(double*)ADDR(esp + 0x8) = _v; } /* 0x100C0466: fstp qword ptr [esp + 8] */
    { double _v = fp_pop(); *(double*)ADDR(esp) = _v; } /* 0x100C046A: fstp qword ptr [esp] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x100C046D: push dword ptr [ebp + 8] */
    PUSH32(esp, 1); /* 0x100C0470: push 1 */
    RECOMP_CALL(sub_100C07D4); /* 0x100C0472: call 0x100c07d4 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x24u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x24u; /* 0x100C0477: add esp, 0x24 */
    _flag_k = FK_ADD;
    ebp = POP32_VAL(esp); /* 0x100C047A: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x100C047B: ret  */
L_100C047C:
    { _st[0] = _st[0]; g_st_i64[0] = g_st_i64[0]; fp_pop(); } /* 0x100C047C: fstp st(0) */
    { _st[1] = _st[0]; g_st_i64[1] = g_st_i64[0]; fp_pop(); } /* 0x100C047E: fstp st(1) */
    { _st[0] = _st[0]; g_st_i64[0] = g_st_i64[0]; fp_pop(); } /* 0x100C0480: fstp st(0) */
    RECOMP_CALL(sub_1001177D); /* 0x100C0482: call 0x1001177d */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0xFFFFu); /* 0x100C0487: push 0xffff */
    PUSH32(esp, MEM32(ebp + 0x1C)); /* 0x100C048C: push dword ptr [ebp + 0x1c] */
    MEM32(eax) = 0x21u; /* 0x100C048F: mov dword ptr [eax], 0x21 */
    RECOMP_CALL(sub_100D3175); /* 0x100C0495: call 0x100d3175 */
    RECOMP_FLAGS_IN();
    fp_push(*(double*)ADDR(ebp + 0xC)); /* 0x100C049A: fld qword ptr [ebp + 0xc] */
    ecx = POP32_VAL(esp); /* 0x100C049D: pop ecx */
    ecx = POP32_VAL(esp); /* 0x100C049E: pop ecx */
    ebp = POP32_VAL(esp); /* 0x100C049F: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x100C04A0: ret  */
    RECOMP_REGS_OUT();
}

void sub_100C04A1(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x100C04A1u);

L_100C04A1:
    PUSH32(esp, ebp); /* 0x100C04A1: push ebp */
    ebp = esp; /* 0x100C04A2: mov ebp, esp */
    PUSH32(esp, 0); /* 0x100C04A4: push 0 */
    PUSH32(esp, MEM32(ebp + 0x1C)); /* 0x100C04A6: push dword ptr [ebp + 0x1c] */
    PUSH32(esp, MEM32(ebp + 0x18)); /* 0x100C04A9: push dword ptr [ebp + 0x18] */
    PUSH32(esp, MEM32(ebp + 0x14)); /* 0x100C04AC: push dword ptr [ebp + 0x14] */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x100C04AF: push dword ptr [ebp + 0x10] */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x100C04B2: push dword ptr [ebp + 0xc] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x100C04B5: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_100C04C2); /* 0x100C04B8: call 0x100c04c2 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x1Cu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x1Cu; /* 0x100C04BD: add esp, 0x1c */
    _flag_k = FK_ADD;
    ebp = POP32_VAL(esp); /* 0x100C04C0: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x100C04C1: ret  */
    RECOMP_REGS_OUT();
}

void sub_100C04C2(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x100C04C2u);

L_100C04C2:
    PUSH32(esp, ebp); /* 0x100C04C2: push ebp */
    ebp = esp; /* 0x100C04C3: mov ebp, esp */
    eax = MEM32(ebp + 0x8); /* 0x100C04C5: mov eax, dword ptr [ebp + 8] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x100C04C8: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, ebx); /* 0x100C04CA: push ebx */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ebx = 0; /* 0x100C04CB: xor ebx, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(1);
    ebx = ebx + 1; /* 0x100C04CD: inc ebx */
    _flag_k = FK_INC;
    MEM32(eax + 0x4) = ecx; /* 0x100C04CE: mov dword ptr [eax + 4], ecx */
    eax = MEM32(ebp + 0x8); /* 0x100C04D1: mov eax, dword ptr [ebp + 8] */
    PUSH32(esp, edi); /* 0x100C04D4: push edi */
    edi = 0xC000000Du; /* 0x100C04D5: mov edi, 0xc000000d */
    MEM32(eax + 0x8) = ecx; /* 0x100C04DA: mov dword ptr [eax + 8], ecx */
    eax = MEM32(ebp + 0x8); /* 0x100C04DD: mov eax, dword ptr [ebp + 8] */
    MEM32(eax + 0xC) = ecx; /* 0x100C04E0: mov dword ptr [eax + 0xc], ecx */
    ecx = MEM32(ebp + 0x10); /* 0x100C04E3: mov ecx, dword ptr [ebp + 0x10] */
    /* test LO8(ecx), 0x10u */ /* 0x100C04E6: test cl, 0x10 */
    _flag_a = (uint32_t)(LO8(ecx)) << 24; _flag_b = (uint32_t)(0x10u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_100C04F6; /* 0x100C04E9: je 0x100c04f6 */
L_100C04EB:
    eax = MEM32(ebp + 0x8); /* 0x100C04EB: mov eax, dword ptr [ebp + 8] */
    edi = 0xC000008Fu; /* 0x100C04EE: mov edi, 0xc000008f */
    _flag_a = (uint32_t)((MEM32(eax + 0x4) | ebx)); _flag_b = (uint32_t)((MEM32(eax + 0x4) | ebx));
    MEM32(eax + 0x4) = MEM32(eax + 0x4) | ebx; /* 0x100C04F3: or dword ptr [eax + 4], ebx */
    _cf = 0;
    _flag_k = FK_TEST;
L_100C04F6:
    /* test LO8(ecx), 2 */ /* 0x100C04F6: test cl, 2 */
    _flag_a = (uint32_t)(LO8(ecx)) << 24; _flag_b = (uint32_t)(2) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_100C0507; /* 0x100C04F9: je 0x100c0507 */
L_100C04FB:
    eax = MEM32(ebp + 0x8); /* 0x100C04FB: mov eax, dword ptr [ebp + 8] */
    edi = 0xC0000093u; /* 0x100C04FE: mov edi, 0xc0000093 */
    _flag_a = (uint32_t)((MEM32(eax + 0x4) | 2)); _flag_b = (uint32_t)((MEM32(eax + 0x4) | 2));
    MEM32(eax + 0x4) = MEM32(eax + 0x4) | 2; /* 0x100C0503: or dword ptr [eax + 4], 2 */
    _cf = 0;
    _flag_k = FK_TEST;
L_100C0507:
    /* test LO8(ecx), 1 */ /* 0x100C0507: test cl, 1 */
    _flag_a = (uint32_t)(LO8(ecx)) << 24; _flag_b = (uint32_t)(1) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_100C0518; /* 0x100C050A: je 0x100c0518 */
L_100C050C:
    eax = MEM32(ebp + 0x8); /* 0x100C050C: mov eax, dword ptr [ebp + 8] */
    edi = 0xC0000091u; /* 0x100C050F: mov edi, 0xc0000091 */
    _flag_a = (uint32_t)((MEM32(eax + 0x4) | 4)); _flag_b = (uint32_t)((MEM32(eax + 0x4) | 4));
    MEM32(eax + 0x4) = MEM32(eax + 0x4) | 4; /* 0x100C0514: or dword ptr [eax + 4], 4 */
    _cf = 0;
    _flag_k = FK_TEST;
L_100C0518:
    /* test LO8(ecx), 4 */ /* 0x100C0518: test cl, 4 */
    _flag_a = (uint32_t)(LO8(ecx)) << 24; _flag_b = (uint32_t)(4) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_100C0529; /* 0x100C051B: je 0x100c0529 */
L_100C051D:
    eax = MEM32(ebp + 0x8); /* 0x100C051D: mov eax, dword ptr [ebp + 8] */
    edi = 0xC000008Eu; /* 0x100C0520: mov edi, 0xc000008e */
    _flag_a = (uint32_t)((MEM32(eax + 0x4) | 8)); _flag_b = (uint32_t)((MEM32(eax + 0x4) | 8));
    MEM32(eax + 0x4) = MEM32(eax + 0x4) | 8; /* 0x100C0525: or dword ptr [eax + 4], 8 */
    _cf = 0;
    _flag_k = FK_TEST;
L_100C0529:
    /* test LO8(ecx), 8 */ /* 0x100C0529: test cl, 8 */
    _flag_a = (uint32_t)(LO8(ecx)) << 24; _flag_b = (uint32_t)(8) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_100C053A; /* 0x100C052C: je 0x100c053a */
L_100C052E:
    eax = MEM32(ebp + 0x8); /* 0x100C052E: mov eax, dword ptr [ebp + 8] */
    edi = 0xC0000090u; /* 0x100C0531: mov edi, 0xc0000090 */
    _flag_a = (uint32_t)((MEM32(eax + 0x4) | 0x10u)); _flag_b = (uint32_t)((MEM32(eax + 0x4) | 0x10u));
    MEM32(eax + 0x4) = MEM32(eax + 0x4) | 0x10u; /* 0x100C0536: or dword ptr [eax + 4], 0x10 */
    _cf = 0;
    _flag_k = FK_TEST;
L_100C053A:
    ecx = MEM32(ebp + 0x8); /* 0x100C053A: mov ecx, dword ptr [ebp + 8] */
    PUSH32(esp, esi); /* 0x100C053D: push esi */
    esi = MEM32(ebp + 0xC); /* 0x100C053E: mov esi, dword ptr [ebp + 0xc] */
    eax = MEM32(esi); /* 0x100C0541: mov eax, dword ptr [esi] */
    if (4u) _cf = (((eax) >> 28) & 1u); /* 0x100C0543: shl eax, 4 */
    if (4u) { _flag_a = recomp_flags_pack((eax << 4u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax << 4u; /* 0x100C0543: shl eax, 4 */
    eax = ~eax; /* 0x100C0546: not eax */
    _flag_a = (uint32_t)((eax ^ MEM32(ecx + 0x8))); _flag_b = (uint32_t)((eax ^ MEM32(ecx + 0x8)));
    eax = eax ^ MEM32(ecx + 0x8); /* 0x100C0548: xor eax, dword ptr [ecx + 8] */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x10u);
    eax = eax & 0x10u; /* 0x100C054B: and eax, 0x10 */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)((MEM32(ecx + 0x8) ^ eax)); _flag_b = (uint32_t)((MEM32(ecx + 0x8) ^ eax));
    MEM32(ecx + 0x8) = MEM32(ecx + 0x8) ^ eax; /* 0x100C054E: xor dword ptr [ecx + 8], eax */
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = MEM32(ebp + 0x8); /* 0x100C0551: mov ecx, dword ptr [ebp + 8] */
    eax = MEM32(esi); /* 0x100C0554: mov eax, dword ptr [esi] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + eax; /* 0x100C0556: add eax, eax */
    _flag_k = FK_ADD;
    eax = ~eax; /* 0x100C0558: not eax */
    _flag_a = (uint32_t)((eax ^ MEM32(ecx + 0x8))); _flag_b = (uint32_t)((eax ^ MEM32(ecx + 0x8)));
    eax = eax ^ MEM32(ecx + 0x8); /* 0x100C055A: xor eax, dword ptr [ecx + 8] */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(8);
    eax = eax & 8; /* 0x100C055D: and eax, 8 */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)((MEM32(ecx + 0x8) ^ eax)); _flag_b = (uint32_t)((MEM32(ecx + 0x8) ^ eax));
    MEM32(ecx + 0x8) = MEM32(ecx + 0x8) ^ eax; /* 0x100C0560: xor dword ptr [ecx + 8], eax */
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = MEM32(ebp + 0x8); /* 0x100C0563: mov ecx, dword ptr [ebp + 8] */
    eax = MEM32(esi); /* 0x100C0566: mov eax, dword ptr [esi] */
    if (1u) _cf = (((eax) >> 0) & 1u); /* 0x100C0568: shr eax, 1 */
    if (1u) { _flag_a = recomp_flags_pack((eax >> 1u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax >> 1u; /* 0x100C0568: shr eax, 1 */
    eax = ~eax; /* 0x100C056A: not eax */
    _flag_a = (uint32_t)((eax ^ MEM32(ecx + 0x8))); _flag_b = (uint32_t)((eax ^ MEM32(ecx + 0x8)));
    eax = eax ^ MEM32(ecx + 0x8); /* 0x100C056C: xor eax, dword ptr [ecx + 8] */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(4);
    eax = eax & 4; /* 0x100C056F: and eax, 4 */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)((MEM32(ecx + 0x8) ^ eax)); _flag_b = (uint32_t)((MEM32(ecx + 0x8) ^ eax));
    MEM32(ecx + 0x8) = MEM32(ecx + 0x8) ^ eax; /* 0x100C0572: xor dword ptr [ecx + 8], eax */
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = MEM32(ebp + 0x8); /* 0x100C0575: mov ecx, dword ptr [ebp + 8] */
    eax = MEM32(esi); /* 0x100C0578: mov eax, dword ptr [esi] */
    if (3u) _cf = (((eax) >> 2) & 1u); /* 0x100C057A: shr eax, 3 */
    if (3u) { _flag_a = recomp_flags_pack((eax >> 3u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax >> 3u; /* 0x100C057A: shr eax, 3 */
    eax = ~eax; /* 0x100C057D: not eax */
    _flag_a = (uint32_t)((eax ^ MEM32(ecx + 0x8))); _flag_b = (uint32_t)((eax ^ MEM32(ecx + 0x8)));
    eax = eax ^ MEM32(ecx + 0x8); /* 0x100C057F: xor eax, dword ptr [ecx + 8] */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(2);
    eax = eax & 2; /* 0x100C0582: and eax, 2 */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)((MEM32(ecx + 0x8) ^ eax)); _flag_b = (uint32_t)((MEM32(ecx + 0x8) ^ eax));
    MEM32(ecx + 0x8) = MEM32(ecx + 0x8) ^ eax; /* 0x100C0585: xor dword ptr [ecx + 8], eax */
    _cf = 0;
    _flag_k = FK_TEST;
    eax = MEM32(esi); /* 0x100C0588: mov eax, dword ptr [esi] */
    ecx = MEM32(ebp + 0x8); /* 0x100C058A: mov ecx, dword ptr [ebp + 8] */
    if (5u) _cf = (((eax) >> 4) & 1u); /* 0x100C058D: shr eax, 5 */
    if (5u) { _flag_a = recomp_flags_pack((eax >> 5u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax >> 5u; /* 0x100C058D: shr eax, 5 */
    eax = ~eax; /* 0x100C0590: not eax */
    _flag_a = (uint32_t)((eax ^ MEM32(ecx + 0x8))); _flag_b = (uint32_t)((eax ^ MEM32(ecx + 0x8)));
    eax = eax ^ MEM32(ecx + 0x8); /* 0x100C0592: xor eax, dword ptr [ecx + 8] */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ebx);
    eax = eax & ebx; /* 0x100C0595: and eax, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)((MEM32(ecx + 0x8) ^ eax)); _flag_b = (uint32_t)((MEM32(ecx + 0x8) ^ eax));
    MEM32(ecx + 0x8) = MEM32(ecx + 0x8) ^ eax; /* 0x100C0597: xor dword ptr [ecx + 8], eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_100D31F8); /* 0x100C059A: call 0x100d31f8 */
    RECOMP_FLAGS_IN();
    edx = eax; /* 0x100C059F: mov edx, eax */
    /* test LO8(edx), 1 */ /* 0x100C05A1: test dl, 1 */
    _flag_a = (uint32_t)(LO8(edx)) << 24; _flag_b = (uint32_t)(1) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_100C05AD; /* 0x100C05A4: je 0x100c05ad */
L_100C05A6:
    ecx = MEM32(ebp + 0x8); /* 0x100C05A6: mov ecx, dword ptr [ebp + 8] */
    _flag_a = (uint32_t)((MEM32(ecx + 0xC) | 0x10u)); _flag_b = (uint32_t)((MEM32(ecx + 0xC) | 0x10u));
    MEM32(ecx + 0xC) = MEM32(ecx + 0xC) | 0x10u; /* 0x100C05A9: or dword ptr [ecx + 0xc], 0x10 */
    _cf = 0;
    _flag_k = FK_TEST;
L_100C05AD:
    /* test LO8(edx), 4 */ /* 0x100C05AD: test dl, 4 */
    _flag_a = (uint32_t)(LO8(edx)) << 24; _flag_b = (uint32_t)(4) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_100C05B9; /* 0x100C05B0: je 0x100c05b9 */
L_100C05B2:
    eax = MEM32(ebp + 0x8); /* 0x100C05B2: mov eax, dword ptr [ebp + 8] */
    _flag_a = (uint32_t)((MEM32(eax + 0xC) | 8)); _flag_b = (uint32_t)((MEM32(eax + 0xC) | 8));
    MEM32(eax + 0xC) = MEM32(eax + 0xC) | 8; /* 0x100C05B5: or dword ptr [eax + 0xc], 8 */
    _cf = 0;
    _flag_k = FK_TEST;
L_100C05B9:
    /* test LO8(edx), 8 */ /* 0x100C05B9: test dl, 8 */
    _flag_a = (uint32_t)(LO8(edx)) << 24; _flag_b = (uint32_t)(8) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_100C05C5; /* 0x100C05BC: je 0x100c05c5 */
L_100C05BE:
    eax = MEM32(ebp + 0x8); /* 0x100C05BE: mov eax, dword ptr [ebp + 8] */
    _flag_a = (uint32_t)((MEM32(eax + 0xC) | 4)); _flag_b = (uint32_t)((MEM32(eax + 0xC) | 4));
    MEM32(eax + 0xC) = MEM32(eax + 0xC) | 4; /* 0x100C05C1: or dword ptr [eax + 0xc], 4 */
    _cf = 0;
    _flag_k = FK_TEST;
L_100C05C5:
    /* test LO8(edx), 0x10u */ /* 0x100C05C5: test dl, 0x10 */
    _flag_a = (uint32_t)(LO8(edx)) << 24; _flag_b = (uint32_t)(0x10u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_100C05D1; /* 0x100C05C8: je 0x100c05d1 */
L_100C05CA:
    eax = MEM32(ebp + 0x8); /* 0x100C05CA: mov eax, dword ptr [ebp + 8] */
    _flag_a = (uint32_t)((MEM32(eax + 0xC) | 2)); _flag_b = (uint32_t)((MEM32(eax + 0xC) | 2));
    MEM32(eax + 0xC) = MEM32(eax + 0xC) | 2; /* 0x100C05CD: or dword ptr [eax + 0xc], 2 */
    _cf = 0;
    _flag_k = FK_TEST;
L_100C05D1:
    /* test LO8(edx), 0x20u */ /* 0x100C05D1: test dl, 0x20 */
    _flag_a = (uint32_t)(LO8(edx)) << 24; _flag_b = (uint32_t)(0x20u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_100C05DC; /* 0x100C05D4: je 0x100c05dc */
L_100C05D6:
    eax = MEM32(ebp + 0x8); /* 0x100C05D6: mov eax, dword ptr [ebp + 8] */
    _flag_a = (uint32_t)((MEM32(eax + 0xC) | ebx)); _flag_b = (uint32_t)((MEM32(eax + 0xC) | ebx));
    MEM32(eax + 0xC) = MEM32(eax + 0xC) | ebx; /* 0x100C05D9: or dword ptr [eax + 0xc], ebx */
    _cf = 0;
    _flag_k = FK_TEST;
L_100C05DC:
    eax = MEM32(esi); /* 0x100C05DC: mov eax, dword ptr [esi] */
    ecx = 0xC00u; /* 0x100C05DE: mov ecx, 0xc00 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ecx);
    eax = eax & ecx; /* 0x100C05E3: and eax, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_100C061C; /* 0x100C05E5: je 0x100c061c */
L_100C05E7:
    /* cmp eax, 0x400u */ /* 0x100C05E7: cmp eax, 0x400 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x400u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_100C0610; /* 0x100C05EC: je 0x100c0610 */
L_100C05EE:
    /* cmp eax, 0x800u */ /* 0x100C05EE: cmp eax, 0x800 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x800u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_100C0601; /* 0x100C05F3: je 0x100c0601 */
L_100C05F5:
    /* cmp eax, ecx */ /* 0x100C05F5: cmp eax, ecx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_100C0622; /* 0x100C05F7: jne 0x100c0622 */
L_100C05F9:
    eax = MEM32(ebp + 0x8); /* 0x100C05F9: mov eax, dword ptr [ebp + 8] */
    _flag_a = (uint32_t)((MEM32(eax) | 3)); _flag_b = (uint32_t)((MEM32(eax) | 3));
    MEM32(eax) = MEM32(eax) | 3; /* 0x100C05FC: or dword ptr [eax], 3 */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_100C0622; /* 0x100C05FF: jmp 0x100c0622 */
L_100C0601:
    ecx = MEM32(ebp + 0x8); /* 0x100C0601: mov ecx, dword ptr [ebp + 8] */
    eax = MEM32(ecx); /* 0x100C0604: mov eax, dword ptr [ecx] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xFFFFFFFEu);
    eax = eax & 0xFFFFFFFEu; /* 0x100C0606: and eax, 0xfffffffe */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)((eax | 2)); _flag_b = (uint32_t)((eax | 2));
    eax = eax | 2; /* 0x100C0609: or eax, 2 */
    _cf = 0;
    _flag_k = FK_TEST;
L_100C060C:
    MEM32(ecx) = eax; /* 0x100C060C: mov dword ptr [ecx], eax */
    goto L_100C0622; /* 0x100C060E: jmp 0x100c0622 */
L_100C0610:
    ecx = MEM32(ebp + 0x8); /* 0x100C0610: mov ecx, dword ptr [ebp + 8] */
    eax = MEM32(ecx); /* 0x100C0613: mov eax, dword ptr [ecx] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xFFFFFFFDu);
    eax = eax & 0xFFFFFFFDu; /* 0x100C0615: and eax, 0xfffffffd */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)((eax | ebx)); _flag_b = (uint32_t)((eax | ebx));
    eax = eax | ebx; /* 0x100C0618: or eax, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    goto L_100C060C; /* 0x100C061A: jmp 0x100c060c */
L_100C061C:
    eax = MEM32(ebp + 0x8); /* 0x100C061C: mov eax, dword ptr [ebp + 8] */
    _flag_a = (uint32_t)(MEM32(eax)); _flag_b = (uint32_t)(0xFFFFFFFCu);
    MEM32(eax) = MEM32(eax) & 0xFFFFFFFCu; /* 0x100C061F: and dword ptr [eax], 0xfffffffc */
    _cf = 0;
    _flag_k = FK_TEST;
L_100C0622:
    eax = MEM32(esi); /* 0x100C0622: mov eax, dword ptr [esi] */
    ecx = 0x300u; /* 0x100C0624: mov ecx, 0x300 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ecx);
    eax = eax & ecx; /* 0x100C0629: and eax, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_100C064D; /* 0x100C062B: je 0x100c064d */
L_100C062D:
    /* cmp eax, 0x200u */ /* 0x100C062D: cmp eax, 0x200 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x200u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_100C0640; /* 0x100C0632: je 0x100c0640 */
L_100C0634:
    /* cmp eax, ecx */ /* 0x100C0634: cmp eax, ecx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_100C065A; /* 0x100C0636: jne 0x100c065a */
L_100C0638:
    eax = MEM32(ebp + 0x8); /* 0x100C0638: mov eax, dword ptr [ebp + 8] */
    _flag_a = (uint32_t)(MEM32(eax)); _flag_b = (uint32_t)(0xFFFFFFE3u);
    MEM32(eax) = MEM32(eax) & 0xFFFFFFE3u; /* 0x100C063B: and dword ptr [eax], 0xffffffe3 */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_100C065A; /* 0x100C063E: jmp 0x100c065a */
L_100C0640:
    ecx = MEM32(ebp + 0x8); /* 0x100C0640: mov ecx, dword ptr [ebp + 8] */
    eax = MEM32(ecx); /* 0x100C0643: mov eax, dword ptr [ecx] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xFFFFFFE7u);
    eax = eax & 0xFFFFFFE7u; /* 0x100C0645: and eax, 0xffffffe7 */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)((eax | 4)); _flag_b = (uint32_t)((eax | 4));
    eax = eax | 4; /* 0x100C0648: or eax, 4 */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_100C0658; /* 0x100C064B: jmp 0x100c0658 */
L_100C064D:
    ecx = MEM32(ebp + 0x8); /* 0x100C064D: mov ecx, dword ptr [ebp + 8] */
    eax = MEM32(ecx); /* 0x100C0650: mov eax, dword ptr [ecx] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xFFFFFFEBu);
    eax = eax & 0xFFFFFFEBu; /* 0x100C0652: and eax, 0xffffffeb */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)((eax | 8)); _flag_b = (uint32_t)((eax | 8));
    eax = eax | 8; /* 0x100C0655: or eax, 8 */
    _cf = 0;
    _flag_k = FK_TEST;
L_100C0658:
    MEM32(ecx) = eax; /* 0x100C0658: mov dword ptr [ecx], eax */
L_100C065A:
    eax = MEM32(ebp + 0x8); /* 0x100C065A: mov eax, dword ptr [ebp + 8] */
    ecx = MEM32(ebp + 0x14); /* 0x100C065D: mov ecx, dword ptr [ebp + 0x14] */
    if (5u) _cf = (((ecx) >> 27) & 1u); /* 0x100C0660: shl ecx, 5 */
    if (5u) { _flag_a = recomp_flags_pack((ecx << 5u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ecx = ecx << 5u; /* 0x100C0660: shl ecx, 5 */
    _flag_a = (uint32_t)((ecx ^ MEM32(eax))); _flag_b = (uint32_t)((ecx ^ MEM32(eax)));
    ecx = ecx ^ MEM32(eax); /* 0x100C0663: xor ecx, dword ptr [eax] */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x0001FFE0u);
    ecx = ecx & 0x0001FFE0u; /* 0x100C0665: and ecx, 0x1ffe0 */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)((MEM32(eax) ^ ecx)); _flag_b = (uint32_t)((MEM32(eax) ^ ecx));
    MEM32(eax) = MEM32(eax) ^ ecx; /* 0x100C066B: xor dword ptr [eax], ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    eax = MEM32(ebp + 0x8); /* 0x100C066D: mov eax, dword ptr [ebp + 8] */
    _flag_a = (uint32_t)((MEM32(eax + 0x20) | ebx)); _flag_b = (uint32_t)((MEM32(eax + 0x20) | ebx));
    MEM32(eax + 0x20) = MEM32(eax + 0x20) | ebx; /* 0x100C0670: or dword ptr [eax + 0x20], ebx */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp MEM32(ebp + 0x20), 0 */ /* 0x100C0673: cmp dword ptr [ebp + 0x20], 0 */
    _flag_a = (uint32_t)(MEM32(ebp + 0x20)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_100C06A5; /* 0x100C0677: je 0x100c06a5 */
L_100C0679:
    eax = MEM32(ebp + 0x8); /* 0x100C0679: mov eax, dword ptr [ebp + 8] */
    _flag_a = (uint32_t)(MEM32(eax + 0x20)); _flag_b = (uint32_t)(0xFFFFFFE1u);
    MEM32(eax + 0x20) = MEM32(eax + 0x20) & 0xFFFFFFE1u; /* 0x100C067C: and dword ptr [eax + 0x20], 0xffffffe1 */
    _cf = 0;
    _flag_k = FK_TEST;
    eax = MEM32(ebp + 0x18); /* 0x100C0680: mov eax, dword ptr [ebp + 0x18] */
    fp_push(*(float*)&MEM32(eax)); /* 0x100C0683: fld dword ptr [eax] */
    eax = MEM32(ebp + 0x8); /* 0x100C0685: mov eax, dword ptr [ebp + 8] */
    { float _v = (float)fp_pop(); *(float*)ADDR(eax + 0x10) = _v; } /* 0x100C0688: fstp dword ptr [eax + 0x10] */
    eax = MEM32(ebp + 0x8); /* 0x100C068B: mov eax, dword ptr [ebp + 8] */
    _flag_a = (uint32_t)((MEM32(eax + 0x60) | ebx)); _flag_b = (uint32_t)((MEM32(eax + 0x60) | ebx));
    MEM32(eax + 0x60) = MEM32(eax + 0x60) | ebx; /* 0x100C068E: or dword ptr [eax + 0x60], ebx */
    _cf = 0;
    _flag_k = FK_TEST;
    eax = MEM32(ebp + 0x8); /* 0x100C0691: mov eax, dword ptr [ebp + 8] */
    ebx = MEM32(ebp + 0x1C); /* 0x100C0694: mov ebx, dword ptr [ebp + 0x1c] */
    _flag_a = (uint32_t)(MEM32(eax + 0x60)); _flag_b = (uint32_t)(0xFFFFFFE1u);
    MEM32(eax + 0x60) = MEM32(eax + 0x60) & 0xFFFFFFE1u; /* 0x100C0697: and dword ptr [eax + 0x60], 0xffffffe1 */
    _cf = 0;
    _flag_k = FK_TEST;
    eax = MEM32(ebp + 0x8); /* 0x100C069B: mov eax, dword ptr [ebp + 8] */
    fp_push(*(float*)&MEM32(ebx)); /* 0x100C069E: fld dword ptr [ebx] */
    { float _v = (float)fp_pop(); *(float*)ADDR(eax + 0x50) = _v; } /* 0x100C06A0: fstp dword ptr [eax + 0x50] */
    goto L_100C06DF; /* 0x100C06A3: jmp 0x100c06df */
L_100C06A5:
    ecx = MEM32(ebp + 0x8); /* 0x100C06A5: mov ecx, dword ptr [ebp + 8] */
    eax = MEM32(ecx + 0x20); /* 0x100C06A8: mov eax, dword ptr [ecx + 0x20] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xFFFFFFE3u);
    eax = eax & 0xFFFFFFE3u; /* 0x100C06AB: and eax, 0xffffffe3 */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)((eax | 2)); _flag_b = (uint32_t)((eax | 2));
    eax = eax | 2; /* 0x100C06AE: or eax, 2 */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ecx + 0x20) = eax; /* 0x100C06B1: mov dword ptr [ecx + 0x20], eax */
    eax = MEM32(ebp + 0x18); /* 0x100C06B4: mov eax, dword ptr [ebp + 0x18] */
    fp_push(*(double*)ADDR(eax)); /* 0x100C06B7: fld qword ptr [eax] */
    eax = MEM32(ebp + 0x8); /* 0x100C06B9: mov eax, dword ptr [ebp + 8] */
    { double _v = fp_pop(); *(double*)ADDR(eax + 0x10) = _v; } /* 0x100C06BC: fstp qword ptr [eax + 0x10] */
    eax = MEM32(ebp + 0x8); /* 0x100C06BF: mov eax, dword ptr [ebp + 8] */
    _flag_a = (uint32_t)((MEM32(eax + 0x60) | ebx)); _flag_b = (uint32_t)((MEM32(eax + 0x60) | ebx));
    MEM32(eax + 0x60) = MEM32(eax + 0x60) | ebx; /* 0x100C06C2: or dword ptr [eax + 0x60], ebx */
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = MEM32(ebp + 0x8); /* 0x100C06C5: mov ecx, dword ptr [ebp + 8] */
    ebx = MEM32(ebp + 0x1C); /* 0x100C06C8: mov ebx, dword ptr [ebp + 0x1c] */
    eax = MEM32(ecx + 0x60); /* 0x100C06CB: mov eax, dword ptr [ecx + 0x60] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xFFFFFFE3u);
    eax = eax & 0xFFFFFFE3u; /* 0x100C06CE: and eax, 0xffffffe3 */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)((eax | 2)); _flag_b = (uint32_t)((eax | 2));
    eax = eax | 2; /* 0x100C06D1: or eax, 2 */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ecx + 0x60) = eax; /* 0x100C06D4: mov dword ptr [ecx + 0x60], eax */
    eax = MEM32(ebp + 0x8); /* 0x100C06D7: mov eax, dword ptr [ebp + 8] */
    fp_push(*(double*)ADDR(ebx)); /* 0x100C06DA: fld qword ptr [ebx] */
    { double _v = fp_pop(); *(double*)ADDR(eax + 0x50) = _v; } /* 0x100C06DC: fstp qword ptr [eax + 0x50] */
L_100C06DF:
    RECOMP_CALL(sub_100D3164); /* 0x100C06DF: call 0x100d3164 */
    RECOMP_FLAGS_IN();
    eax = ebp + 0x8; /* 0x100C06E4: lea eax, [ebp + 8] */
    PUSH32(esp, eax); /* 0x100C06E7: push eax */
    PUSH32(esp, 1); /* 0x100C06E8: push 1 */
    PUSH32(esp, 0); /* 0x100C06EA: push 0 */
    PUSH32(esp, edi); /* 0x100C06EC: push edi */
    RECOMP_ICALL(MEM32(0x100E5008)); /* 0x100C06ED: call dword ptr [0x100e5008] */
    RECOMP_FLAGS_IN();
    ecx = MEM32(ebp + 0x8); /* 0x100C06F3: mov ecx, dword ptr [ebp + 8] */
    /* test MEM8(ecx + 0x8), 0x10u */ /* 0x100C06F6: test byte ptr [ecx + 8], 0x10 */
    _flag_a = (uint32_t)(MEM8(ecx + 0x8)) << 24; _flag_b = (uint32_t)(0x10u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_100C06FF; /* 0x100C06FA: je 0x100c06ff */
L_100C06FC:
    _flag_a = (uint32_t)(MEM32(esi)); _flag_b = (uint32_t)(0xFFFFFFFEu);
    MEM32(esi) = MEM32(esi) & 0xFFFFFFFEu; /* 0x100C06FC: and dword ptr [esi], 0xfffffffe */
    _cf = 0;
    _flag_k = FK_TEST;
L_100C06FF:
    /* test MEM8(ecx + 0x8), 8 */ /* 0x100C06FF: test byte ptr [ecx + 8], 8 */
    _flag_a = (uint32_t)(MEM8(ecx + 0x8)) << 24; _flag_b = (uint32_t)(8) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_100C0708; /* 0x100C0703: je 0x100c0708 */
L_100C0705:
    _flag_a = (uint32_t)(MEM32(esi)); _flag_b = (uint32_t)(0xFFFFFFFBu);
    MEM32(esi) = MEM32(esi) & 0xFFFFFFFBu; /* 0x100C0705: and dword ptr [esi], 0xfffffffb */
    _cf = 0;
    _flag_k = FK_TEST;
L_100C0708:
    /* test MEM8(ecx + 0x8), 4 */ /* 0x100C0708: test byte ptr [ecx + 8], 4 */
    _flag_a = (uint32_t)(MEM8(ecx + 0x8)) << 24; _flag_b = (uint32_t)(4) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_100C0711; /* 0x100C070C: je 0x100c0711 */
L_100C070E:
    _flag_a = (uint32_t)(MEM32(esi)); _flag_b = (uint32_t)(0xFFFFFFF7u);
    MEM32(esi) = MEM32(esi) & 0xFFFFFFF7u; /* 0x100C070E: and dword ptr [esi], 0xfffffff7 */
    _cf = 0;
    _flag_k = FK_TEST;
L_100C0711:
    /* test MEM8(ecx + 0x8), 2 */ /* 0x100C0711: test byte ptr [ecx + 8], 2 */
    _flag_a = (uint32_t)(MEM8(ecx + 0x8)) << 24; _flag_b = (uint32_t)(2) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_100C071A; /* 0x100C0715: je 0x100c071a */
L_100C0717:
    _flag_a = (uint32_t)(MEM32(esi)); _flag_b = (uint32_t)(0xFFFFFFEFu);
    MEM32(esi) = MEM32(esi) & 0xFFFFFFEFu; /* 0x100C0717: and dword ptr [esi], 0xffffffef */
    _cf = 0;
    _flag_k = FK_TEST;
L_100C071A:
    /* test MEM8(ecx + 0x8), 1 */ /* 0x100C071A: test byte ptr [ecx + 8], 1 */
    _flag_a = (uint32_t)(MEM8(ecx + 0x8)) << 24; _flag_b = (uint32_t)(1) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_100C0723; /* 0x100C071E: je 0x100c0723 */
L_100C0720:
    _flag_a = (uint32_t)(MEM32(esi)); _flag_b = (uint32_t)(0xFFFFFFDFu);
    MEM32(esi) = MEM32(esi) & 0xFFFFFFDFu; /* 0x100C0720: and dword ptr [esi], 0xffffffdf */
    _cf = 0;
    _flag_k = FK_TEST;
L_100C0723:
    eax = MEM32(ecx); /* 0x100C0723: mov eax, dword ptr [ecx] */
    edx = 0xFFFFF3FFu; /* 0x100C0725: mov edx, 0xfffff3ff */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(3);
    eax = eax & 3; /* 0x100C072A: and eax, 3 */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - 0; /* 0x100C072D: sub eax, 0 */
    _flag_k = FK_CMP;
    if (/* sub result */ CMP_EQ(_flag_a, _flag_b)) goto L_100C0761; /* 0x100C0730: je 0x100c0761 */
L_100C0732:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax - 1; /* 0x100C0732: dec eax */
    _flag_k = FK_DEC;
    if (/* dec result */ CMP_EQ(_flag_a, _flag_b)) goto L_100C0753; /* 0x100C0733: je 0x100c0753 */
L_100C0735:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax - 1; /* 0x100C0735: dec eax */
    _flag_k = FK_DEC;
    if (/* dec result */ CMP_EQ(_flag_a, _flag_b)) goto L_100C0743; /* 0x100C0736: je 0x100c0743 */
L_100C0738:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax - 1; /* 0x100C0738: dec eax */
    _flag_k = FK_DEC;
    if (/* dec result */ CMP_NE(_flag_a, _flag_b)) goto L_100C0763; /* 0x100C0739: jne 0x100c0763 */
L_100C073B:
    _flag_a = (uint32_t)((MEM32(esi) | 0xC00u)); _flag_b = (uint32_t)((MEM32(esi) | 0xC00u));
    MEM32(esi) = MEM32(esi) | 0xC00u; /* 0x100C073B: or dword ptr [esi], 0xc00 */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_100C0763; /* 0x100C0741: jmp 0x100c0763 */
L_100C0743:
    eax = MEM32(esi); /* 0x100C0743: mov eax, dword ptr [esi] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xFFFFFBFFu);
    eax = eax & 0xFFFFFBFFu; /* 0x100C0745: and eax, 0xfffffbff */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)((eax | 0x800u)); _flag_b = (uint32_t)((eax | 0x800u));
    eax = eax | 0x800u; /* 0x100C074A: or eax, 0x800 */
    _cf = 0;
    _flag_k = FK_TEST;
L_100C074F:
    MEM32(esi) = eax; /* 0x100C074F: mov dword ptr [esi], eax */
    goto L_100C0763; /* 0x100C0751: jmp 0x100c0763 */
L_100C0753:
    eax = MEM32(esi); /* 0x100C0753: mov eax, dword ptr [esi] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xFFFFF7FFu);
    eax = eax & 0xFFFFF7FFu; /* 0x100C0755: and eax, 0xfffff7ff */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)((eax | 0x400u)); _flag_b = (uint32_t)((eax | 0x400u));
    eax = eax | 0x400u; /* 0x100C075A: or eax, 0x400 */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    goto L_100C074F; /* 0x100C075F: jmp 0x100c074f */
L_100C0761:
    _flag_a = (uint32_t)(MEM32(esi)); _flag_b = (uint32_t)(edx);
    MEM32(esi) = MEM32(esi) & edx; /* 0x100C0761: and dword ptr [esi], edx */
    _cf = 0;
    _flag_k = FK_TEST;
L_100C0763:
    eax = MEM32(ecx); /* 0x100C0763: mov eax, dword ptr [ecx] */
    if (2u) _cf = (((eax) >> 1) & 1u); /* 0x100C0765: shr eax, 2 */
    if (2u) { _flag_a = recomp_flags_pack((eax >> 2u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax >> 2u; /* 0x100C0765: shr eax, 2 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(7);
    eax = eax & 7; /* 0x100C0768: and eax, 7 */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - 0; /* 0x100C076B: sub eax, 0 */
    _flag_k = FK_CMP;
    if (/* sub result */ CMP_EQ(_flag_a, _flag_b)) goto L_100C0785; /* 0x100C076E: je 0x100c0785 */
L_100C0770:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax - 1; /* 0x100C0770: dec eax */
    _flag_k = FK_DEC;
    if (/* dec result */ CMP_EQ(_flag_a, _flag_b)) goto L_100C077A; /* 0x100C0771: je 0x100c077a */
L_100C0773:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax - 1; /* 0x100C0773: dec eax */
    _flag_k = FK_DEC;
    if (/* dec result */ CMP_NE(_flag_a, _flag_b)) goto L_100C0790; /* 0x100C0774: jne 0x100c0790 */
L_100C0776:
    _flag_a = (uint32_t)(MEM32(esi)); _flag_b = (uint32_t)(edx);
    MEM32(esi) = MEM32(esi) & edx; /* 0x100C0776: and dword ptr [esi], edx */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_100C0790; /* 0x100C0778: jmp 0x100c0790 */
L_100C077A:
    eax = MEM32(esi); /* 0x100C077A: mov eax, dword ptr [esi] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edx);
    eax = eax & edx; /* 0x100C077C: and eax, edx */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)((eax | 0x200u)); _flag_b = (uint32_t)((eax | 0x200u));
    eax = eax | 0x200u; /* 0x100C077E: or eax, 0x200 */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_100C078E; /* 0x100C0783: jmp 0x100c078e */
L_100C0785:
    eax = MEM32(esi); /* 0x100C0785: mov eax, dword ptr [esi] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edx);
    eax = eax & edx; /* 0x100C0787: and eax, edx */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)((eax | 0x300u)); _flag_b = (uint32_t)((eax | 0x300u));
    eax = eax | 0x300u; /* 0x100C0789: or eax, 0x300 */
    _cf = 0;
    _flag_k = FK_TEST;
L_100C078E:
    MEM32(esi) = eax; /* 0x100C078E: mov dword ptr [esi], eax */
L_100C0790:
    /* cmp MEM32(ebp + 0x20), 0 */ /* 0x100C0790: cmp dword ptr [ebp + 0x20], 0 */
    _flag_a = (uint32_t)(MEM32(ebp + 0x20)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    esi = POP32_VAL(esp); /* 0x100C0794: pop esi */
    if (CMP_EQ(_flag_a, _flag_b)) goto L_100C079E; /* 0x100C0795: je 0x100c079e */
L_100C0797:
    fp_push(*(float*)&MEM32(ecx + 0x50)); /* 0x100C0797: fld dword ptr [ecx + 0x50] */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebx) = _v; } /* 0x100C079A: fstp dword ptr [ebx] */
    goto L_100C07A3; /* 0x100C079C: jmp 0x100c07a3 */
L_100C079E:
    fp_push(*(double*)ADDR(ecx + 0x50)); /* 0x100C079E: fld qword ptr [ecx + 0x50] */
    { double _v = fp_pop(); *(double*)ADDR(ebx) = _v; } /* 0x100C07A1: fstp qword ptr [ebx] */
L_100C07A3:
    edi = POP32_VAL(esp); /* 0x100C07A3: pop edi */
    ebx = POP32_VAL(esp); /* 0x100C07A4: pop ebx */
    ebp = POP32_VAL(esp); /* 0x100C07A5: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x100C07A6: ret  */
    RECOMP_REGS_OUT();
}

void sub_100C07A7(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x100C07A7u);

L_100C07A7:
    PUSH32(esp, ebp); /* 0x100C07A7: push ebp */
    ebp = esp; /* 0x100C07A8: mov ebp, esp */
    eax = MEM32(ebp + 0x8); /* 0x100C07AA: mov eax, dword ptr [ebp + 8] */
    /* cmp eax, 1 */ /* 0x100C07AD: cmp eax, 1 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_100C07C7; /* 0x100C07B0: je 0x100c07c7 */
L_100C07B2:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xFFFFFFFEu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 0xFFFFFFFEu; /* 0x100C07B2: add eax, -2 */
    _flag_k = FK_ADD;
    /* cmp eax, 1 */ /* 0x100C07B5: cmp eax, 1 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_A(_flag_a, _flag_b)) goto L_100C07D2; /* 0x100C07B8: ja 0x100c07d2 */
L_100C07BA:
    RECOMP_CALL(sub_1001177D); /* 0x100C07BA: call 0x1001177d */
    RECOMP_FLAGS_IN();
    MEM32(eax) = 0x22u; /* 0x100C07BF: mov dword ptr [eax], 0x22 */
    ebp = POP32_VAL(esp); /* 0x100C07C5: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x100C07C6: ret  */
L_100C07C7:
    RECOMP_CALL(sub_1001177D); /* 0x100C07C7: call 0x1001177d */
    RECOMP_FLAGS_IN();
    MEM32(eax) = 0x21u; /* 0x100C07CC: mov dword ptr [eax], 0x21 */
L_100C07D2:
    ebp = POP32_VAL(esp); /* 0x100C07D2: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x100C07D3: ret  */
    RECOMP_REGS_OUT();
}

void sub_100C07D4(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x100C07D4u);

L_100C07D4:
    PUSH32(esp, ebp); /* 0x100C07D4: push ebp */
    ebp = esp; /* 0x100C07D5: mov ebp, esp */
    edx = MEM32(ebp + 0xC); /* 0x100C07D7: mov edx, dword ptr [ebp + 0xc] */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x20u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x20u; /* 0x100C07DA: sub esp, 0x20 */
    _flag_k = FK_CMP;
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x100C07DD: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    eax = ecx; /* 0x100C07DF: mov eax, ecx */
L_100C07E1:
    /* cmp MEM32(eax * 8 + 0x100E19A8), edx */ /* 0x100C07E1: cmp dword ptr [eax*8 + 0x100e19a8], edx */
    _flag_a = (uint32_t)(MEM32(eax * 8 + 0x100E19A8)); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_100C07F2; /* 0x100C07E8: je 0x100c07f2 */
L_100C07EA:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x100C07EA: inc eax */
    _flag_k = FK_INC;
    /* cmp eax, 0x1Du */ /* 0x100C07EB: cmp eax, 0x1d */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x1Du);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_GE(_flag_a, _flag_b)) goto L_100C07F9; /* 0x100C07EE: jge 0x100c07f9 */
L_100C07F0:
    RECOMP_BACKEDGE();
    goto L_100C07E1; /* 0x100C07F0: jmp 0x100c07e1 */
L_100C07F2:
    ecx = MEM32(eax * 8 + 0x100E19AC); /* 0x100C07F2: mov ecx, dword ptr [eax*8 + 0x100e19ac] */
L_100C07F9:
    MEM32(ebp + (-0x1C)) = ecx; /* 0x100C07F9: mov dword ptr [ebp - 0x1c], ecx */
    /* test ecx, ecx */ /* 0x100C07FC: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_100C0855; /* 0x100C07FE: je 0x100c0855 */
L_100C0800:
    eax = MEM32(ebp + 0x10); /* 0x100C0800: mov eax, dword ptr [ebp + 0x10] */
    MEM32(ebp + (-0x18)) = eax; /* 0x100C0803: mov dword ptr [ebp - 0x18], eax */
    eax = MEM32(ebp + 0x14); /* 0x100C0806: mov eax, dword ptr [ebp + 0x14] */
    MEM32(ebp + (-0x14)) = eax; /* 0x100C0809: mov dword ptr [ebp - 0x14], eax */
    eax = MEM32(ebp + 0x18); /* 0x100C080C: mov eax, dword ptr [ebp + 0x18] */
    MEM32(ebp + (-0x10)) = eax; /* 0x100C080F: mov dword ptr [ebp - 0x10], eax */
    eax = MEM32(ebp + 0x1C); /* 0x100C0812: mov eax, dword ptr [ebp + 0x1c] */
    PUSH32(esp, esi); /* 0x100C0815: push esi */
    esi = MEM32(ebp + 0x8); /* 0x100C0816: mov esi, dword ptr [ebp + 8] */
    MEM32(ebp + (-0xC)) = eax; /* 0x100C0819: mov dword ptr [ebp - 0xc], eax */
    eax = MEM32(ebp + 0x20); /* 0x100C081C: mov eax, dword ptr [ebp + 0x20] */
    PUSH32(esp, 0xFFFFu); /* 0x100C081F: push 0xffff */
    PUSH32(esp, MEM32(ebp + 0x28)); /* 0x100C0824: push dword ptr [ebp + 0x28] */
    MEM32(ebp + (-0x8)) = eax; /* 0x100C0827: mov dword ptr [ebp - 8], eax */
    eax = MEM32(ebp + 0x24); /* 0x100C082A: mov eax, dword ptr [ebp + 0x24] */
    MEM32(ebp + (-0x20)) = esi; /* 0x100C082D: mov dword ptr [ebp - 0x20], esi */
    MEM32(ebp + (-0x4)) = eax; /* 0x100C0830: mov dword ptr [ebp - 4], eax */
    RECOMP_CALL(sub_100D3175); /* 0x100C0833: call 0x100d3175 */
    RECOMP_FLAGS_IN();
    eax = ebp + (-0x20); /* 0x100C0838: lea eax, [ebp - 0x20] */
    PUSH32(esp, eax); /* 0x100C083B: push eax */
    RECOMP_CALL(sub_1007BA03); /* 0x100C083C: call 0x1007ba03 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x100C0841: add esp, 0xc */
    _flag_k = FK_ADD;
    /* test eax, eax */ /* 0x100C0844: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_100C084F; /* 0x100C0846: jne 0x100c084f */
L_100C0848:
    PUSH32(esp, esi); /* 0x100C0848: push esi */
    RECOMP_CALL(sub_100C07A7); /* 0x100C0849: call 0x100c07a7 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x100C084E: pop ecx */
L_100C084F:
    fp_push(*(double*)ADDR(ebp + (-0x8))); /* 0x100C084F: fld qword ptr [ebp - 8] */
    esi = POP32_VAL(esp); /* 0x100C0852: pop esi */
    goto L_100C0870; /* 0x100C0853: jmp 0x100c0870 */
L_100C0855:
    PUSH32(esp, 0xFFFFu); /* 0x100C0855: push 0xffff */
    PUSH32(esp, MEM32(ebp + 0x28)); /* 0x100C085A: push dword ptr [ebp + 0x28] */
    RECOMP_CALL(sub_100D3175); /* 0x100C085D: call 0x100d3175 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x100C0862: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_100C07A7); /* 0x100C0865: call 0x100c07a7 */
    RECOMP_FLAGS_IN();
    fp_push(*(double*)ADDR(ebp + 0x20)); /* 0x100C086A: fld qword ptr [ebp + 0x20] */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x100C086D: add esp, 0xc */
    _flag_k = FK_ADD;
L_100C0870:
    esp = ebp; /* 0x100C0870: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x100C0872: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x100C0873: ret  */
    RECOMP_REGS_OUT();
}

void sub_100C0874(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x100C0874u);

L_100C0874:
    PUSH32(esp, ebp); /* 0x100C0874: push ebp */
    ebp = esp; /* 0x100C0875: mov ebp, esp */
    eax = ebp + 0x8; /* 0x100C0877: lea eax, [ebp + 8] */
    PUSH32(esp, eax); /* 0x100C087A: push eax */
    RECOMP_CALL(sub_100BFF5C); /* 0x100C087B: call 0x100bff5c */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x100C0880: pop ecx */
    ebp = POP32_VAL(esp); /* 0x100C0881: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x100C0882: ret  */
    RECOMP_REGS_OUT();
}

void sub_100C0883(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x100C0883u);

L_100C0883:
    PUSH32(esp, ebp); /* 0x100C0883: push ebp */
    ebp = esp; /* 0x100C0884: mov ebp, esp */
    eax = ebp + 0x8; /* 0x100C0886: lea eax, [ebp + 8] */
    PUSH32(esp, esi); /* 0x100C0889: push esi */
    PUSH32(esp, eax); /* 0x100C088A: push eax */
    RECOMP_CALL(sub_100BFF5C); /* 0x100C088B: call 0x100bff5c */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x100C0890: pop ecx */
    PUSH32(esp, 2); /* 0x100C0891: push 2 */
    esi = POP32_VAL(esp); /* 0x100C0893: pop esi */
    /* cmp LO16(eax), LO16(esi) */ /* 0x100C0894: cmp ax, si */
    _flag_a = (uint32_t)(LO16(eax)) << 16; _flag_b = (uint32_t)(LO16(esi)) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_100C08D2; /* 0x100C0897: je 0x100c08d2 */
L_100C0899:
    eax = ebp + 0xC; /* 0x100C0899: lea eax, [ebp + 0xc] */
    PUSH32(esp, eax); /* 0x100C089C: push eax */
    RECOMP_CALL(sub_100BFF5C); /* 0x100C089D: call 0x100bff5c */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x100C08A2: pop ecx */
    /* cmp LO16(eax), LO16(esi) */ /* 0x100C08A3: cmp ax, si */
    _flag_a = (uint32_t)(LO16(eax)) << 16; _flag_b = (uint32_t)(LO16(esi)) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_100C08D2; /* 0x100C08A6: je 0x100c08d2 */
L_100C08A8:
    fp_push(*(float*)&MEM32(ebp + 0x8)); /* 0x100C08A8: fld dword ptr [ebp + 8] */
    fp_push(*(float*)&MEM32(ebp + 0xC)); /* 0x100C08AB: fld dword ptr [ebp + 0xc] */
    _fpu_cmp = FPU_CMP(_st[0], _st[1]); /* 0x100C08AE: fcom st(1) */
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x100C08B0: fnstsw ax */
    /* test HI8(eax), 0x41u */ /* 0x100C08B2: test ah, 0x41 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(0x41u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_100C08C0; /* 0x100C08B5: jne 0x100c08c0 */
L_100C08B7:
    { _st[1] = _st[0]; g_st_i64[1] = g_st_i64[0]; fp_pop(); } /* 0x100C08B7: fstp st(1) */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x100C08B9: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    { _st[0] = _st[0]; g_st_i64[0] = g_st_i64[0]; fp_pop(); } /* 0x100C08BB: fstp st(0) */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x100C08BD: inc eax */
    _flag_k = FK_INC;
    goto L_100C08D4; /* 0x100C08BE: jmp 0x100c08d4 */
L_100C08C0:
    _fpu_cmp = FPU_CMP(_st[0], _st[1]); /* 0x100C08C0: fcompp  */
    fp_pop(); fp_pop();
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x100C08C2: fnstsw ax */
    /* test HI8(eax), 5 */ /* 0x100C08C4: test ah, 5 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(5) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (RECOMP_PF((_flag_a & _flag_b), 24)) goto L_100C08CE; /* 0x100C08C7: jp 0x100c08ce */
L_100C08C9:
    PUSH32(esp, 4); /* 0x100C08C9: push 4 */
    eax = POP32_VAL(esp); /* 0x100C08CB: pop eax */
    goto L_100C08D4; /* 0x100C08CC: jmp 0x100c08d4 */
L_100C08CE:
    eax = esi; /* 0x100C08CE: mov eax, esi */
    goto L_100C08D4; /* 0x100C08D0: jmp 0x100c08d4 */
L_100C08D2:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x100C08D2: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
L_100C08D4:
    esi = POP32_VAL(esp); /* 0x100C08D4: pop esi */
    ebp = POP32_VAL(esp); /* 0x100C08D5: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x100C08D6: ret  */
    RECOMP_REGS_OUT();
}

void sub_100C08D7(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x100C08D7u);

L_100C08D7:
    PUSH32(esp, ebp); /* 0x100C08D7: push ebp */
    ebp = esp; /* 0x100C08D8: mov ebp, esp */
    eax = MEM32(ebp + 0x8); /* 0x100C08DA: mov eax, dword ptr [ebp + 8] */
    if (16u) _cf = (((eax) >> 15) & 1u); /* 0x100C08DD: shr eax, 0x10 */
    if (16u) { _flag_a = recomp_flags_pack((eax >> 16u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax >> 16u; /* 0x100C08DD: shr eax, 0x10 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x8000u);
    eax = eax & 0x8000u; /* 0x100C08E0: and eax, 0x8000 */
    _cf = 0;
    _flag_k = FK_TEST;
    ebp = POP32_VAL(esp); /* 0x100C08E5: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x100C08E6: ret  */
    RECOMP_REGS_OUT();
}

void sub_100C08E7(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x100C08E7u);

L_100C08E7:
    fp_push(*(float*)&MEM32(0x10065B78)); /* 0x100C08E7: fld dword ptr [0x10065b78] */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x100C08ED: ret  */
    RECOMP_REGS_OUT();
}

void sub_100C08EE(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x100C08EEu);

L_100C08EE:
    PUSH32(esp, ebp); /* 0x100C08EE: push ebp */
    ebp = esp; /* 0x100C08EF: mov ebp, esp */
    eax = MEM32(ebp + 0x8); /* 0x100C08F1: mov eax, dword ptr [ebp + 8] */
    /* cmp eax, 7 */ /* 0x100C08F4: cmp eax, 7 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(7);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_A(_flag_a, _flag_b)) goto L_100C0906; /* 0x100C08F7: ja 0x100c0906 */
L_100C08F9:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(ebp + 0xC));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - MEM32(ebp + 0xC); /* 0x100C08F9: sub eax, dword ptr [ebp + 0xc] */
    _flag_k = FK_CMP;
    if (/* sub result */ CMP_S(_flag_a, _flag_b)) goto L_100C0903; /* 0x100C08FC: js 0x100c0903 */
L_100C08FE:
    /* cmp eax, 7 */ /* 0x100C08FE: cmp eax, 7 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(7);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_LE(_flag_a, _flag_b)) goto L_100C0906; /* 0x100C0901: jle 0x100c0906 */
L_100C0903:
    PUSH32(esp, 0x1Fu); /* 0x100C0903: push 0x1f */
    eax = POP32_VAL(esp); /* 0x100C0905: pop eax */
L_100C0906:
    ebp = POP32_VAL(esp); /* 0x100C0906: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x100C0907: ret  */
    RECOMP_REGS_OUT();
}

void sub_100C0908(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x100C0908u);

L_100C0908:
    PUSH32(esp, ebp); /* 0x100C0908: push ebp */
    ebp = esp; /* 0x100C0909: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x58u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x58u; /* 0x100C090B: sub esp, 0x58 */
    _flag_k = FK_CMP;
    eax = MEM32(0x100DF7B8); /* 0x100C090E: mov eax, dword ptr [0x100df7b8] */
    _flag_a = (uint32_t)((eax ^ ebp)); _flag_b = (uint32_t)((eax ^ ebp));
    eax = eax ^ ebp; /* 0x100C0913: xor eax, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x4)) = eax; /* 0x100C0915: mov dword ptr [ebp - 4], eax */
    PUSH32(esp, ebx); /* 0x100C0918: push ebx */
    ebx = MEM32(ebp + 0x8); /* 0x100C0919: mov ebx, dword ptr [ebp + 8] */
    PUSH32(esp, esi); /* 0x100C091C: push esi */
    esi = MEM32(ebp + 0xC); /* 0x100C091D: mov esi, dword ptr [ebp + 0xc] */
    MEM32(ebp + (-0x58)) = esi; /* 0x100C0920: mov dword ptr [ebp - 0x58], esi */
    /* test esi, esi */ /* 0x100C0923: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if ((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) == 0u || (((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_100C09A0; /* 0x100C0925: jle 0x100c09a0 */
L_100C0927:
    PUSH32(esp, edi); /* 0x100C0927: push edi */
    edi = esi; /* 0x100C0928: mov edi, esi */
L_100C092A:
    ecx = MEM32(ebx + 0x4); /* 0x100C092A: mov ecx, dword ptr [ebx + 4] */
    if (11u) _cf = (((ecx) >> 10) & 1u); /* 0x100C092D: shr ecx, 0xb */
    if (11u) { _flag_a = recomp_flags_pack((ecx >> 11u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ecx = ecx >> 11u; /* 0x100C092D: shr ecx, 0xb */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(7);
    ecx = ecx & 7; /* 0x100C0930: and ecx, 7 */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, 3); /* 0x100C0933: push 3 */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + ecx; /* 0x100C0935: add ecx, ecx */
    _flag_k = FK_ADD;
    edx = POP32_VAL(esp); /* 0x100C0937: pop edx */
    if (((LO8(ecx)) & 31)) _cf = ((((LO8(ecx)) & 31)) <= 32 ? (((edx) >> (32 - (((LO8(ecx)) & 31)))) & 1u) : 0u); /* 0x100C0938: shl edx, cl */
    if (((LO8(ecx)) & 31)) { _flag_a = recomp_flags_pack((edx << ((LO8(ecx)) & 31)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    edx = edx << ((LO8(ecx)) & 31); /* 0x100C0938: shl edx, cl */
    eax = edx; /* 0x100C093A: mov eax, edx */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(edx);
    edx = edx & edx; /* 0x100C093C: and edx, edx */
    _cf = 0;
    _flag_k = FK_TEST;
    eax = ~eax; /* 0x100C093E: not eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(ebx + 0x8));
    eax = eax & MEM32(ebx + 0x8); /* 0x100C0940: and eax, dword ptr [ebx + 8] */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)((eax | edx)); _flag_b = (uint32_t)((eax | edx));
    eax = eax | edx; /* 0x100C0943: or eax, edx */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebx + 0x8) = eax; /* 0x100C0945: mov dword ptr [ebx + 8], eax */
    eax = MEM32(ebx + 0x4); /* 0x100C0948: mov eax, dword ptr [ebx + 4] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xFFFFF800u);
    eax = eax & 0xFFFFF800u; /* 0x100C094B: and eax, 0xfffff800 */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x800u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 0x800u; /* 0x100C0950: add eax, 0x800 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)((eax ^ MEM32(ebx + 0x4))); _flag_b = (uint32_t)((eax ^ MEM32(ebx + 0x4)));
    eax = eax ^ MEM32(ebx + 0x4); /* 0x100C0955: xor eax, dword ptr [ebx + 4] */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x3800u);
    eax = eax & 0x3800u; /* 0x100C0958: and eax, 0x3800 */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)((MEM32(ebx + 0x4) ^ eax)); _flag_b = (uint32_t)((MEM32(ebx + 0x4) ^ eax));
    MEM32(ebx + 0x4) = MEM32(ebx + 0x4) ^ eax; /* 0x100C095D: xor dword ptr [ebx + 4], eax */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(1);
    edi = edi - 1; /* 0x100C0960: dec edi */
    _flag_k = FK_DEC;
    RECOMP_BACKEDGE();
    if (/* dec result */ CMP_NE(_flag_a, _flag_b)) goto L_100C092A; /* 0x100C0961: jne 0x100c092a */
L_100C0963:
    edi = (uint32_t)((int32_t)esi * (int32_t)0xAu); /* 0x100C0963: imul edi, esi, 0xa */
    eax = ebp + (-0x54); /* 0x100C0966: lea eax, [ebp - 0x54] */
    esi = ebx + 0x1C; /* 0x100C0969: lea esi, [ebx + 0x1c] */
    PUSH32(esp, edi); /* 0x100C096C: push edi */
    PUSH32(esp, esi); /* 0x100C096D: push esi */
    PUSH32(esp, eax); /* 0x100C096E: push eax */
    RECOMP_CALL(sub_1000F594); /* 0x100C096F: call 0x1000f594 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 8); /* 0x100C0974: push 8 */
    eax = POP32_VAL(esp); /* 0x100C0976: pop eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(ebp + (-0x58)));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - MEM32(ebp + (-0x58)); /* 0x100C0977: sub eax, dword ptr [ebp - 0x58] */
    _flag_k = FK_CMP;
    eax = (uint32_t)((int32_t)eax * (int32_t)0xAu); /* 0x100C097A: imul eax, eax, 0xa */
    PUSH32(esp, eax); /* 0x100C097D: push eax */
    eax = ebx + 0x1C; /* 0x100C097E: lea eax, [ebx + 0x1c] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + edi; /* 0x100C0981: add eax, edi */
    _flag_k = FK_ADD;
    PUSH32(esp, eax); /* 0x100C0983: push eax */
    PUSH32(esp, esi); /* 0x100C0984: push esi */
    RECOMP_CALL(sub_1000F10E); /* 0x100C0985: call 0x1000f10e */
    RECOMP_FLAGS_IN();
    PUSH32(esp, edi); /* 0x100C098A: push edi */
    eax = ebp + (-0x54); /* 0x100C098B: lea eax, [ebp - 0x54] */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ebx = ebx - edi; /* 0x100C098E: sub ebx, edi */
    _flag_k = FK_CMP;
    PUSH32(esp, eax); /* 0x100C0990: push eax */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(0x6Cu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ebx = ebx + 0x6Cu; /* 0x100C0991: add ebx, 0x6c */
    _flag_k = FK_ADD;
    PUSH32(esp, ebx); /* 0x100C0994: push ebx */
    RECOMP_CALL(sub_1000F594); /* 0x100C0995: call 0x1000f594 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x24u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x24u; /* 0x100C099A: add esp, 0x24 */
    _flag_k = FK_ADD;
    edi = POP32_VAL(esp); /* 0x100C099D: pop edi */
    goto L_100C09EC; /* 0x100C099E: jmp 0x100c09ec */
L_100C09A0:
    if (recomp_cond_cf(_flag_k, _flag_a, _flag_b, CC_NS, _cf)) goto L_100C09EC; /* 0x100C09A0: jns 0x100c09ec */
L_100C09A2:
    ecx = MEM32(ebx + 0x4); /* 0x100C09A2: mov ecx, dword ptr [ebx + 4] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x100C09A5: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    if (11u) _cf = (((ecx) >> 10) & 1u); /* 0x100C09A7: shr ecx, 0xb */
    if (11u) { _flag_a = recomp_flags_pack((ecx >> 11u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ecx = ecx >> 11u; /* 0x100C09A7: shr ecx, 0xb */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx - 1; /* 0x100C09AA: dec ecx */
    _flag_k = FK_DEC;
    if (11u) _cf = (((ecx) >> 21) & 1u); /* 0x100C09AB: shl ecx, 0xb */
    if (11u) { _flag_a = recomp_flags_pack((ecx << 11u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ecx = ecx << 11u; /* 0x100C09AB: shl ecx, 0xb */
    _flag_a = (uint32_t)((ecx ^ MEM32(ebx + 0x4))); _flag_b = (uint32_t)((ecx ^ MEM32(ebx + 0x4)));
    ecx = ecx ^ MEM32(ebx + 0x4); /* 0x100C09AE: xor ecx, dword ptr [ebx + 4] */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x3800u);
    ecx = ecx & 0x3800u; /* 0x100C09B1: and ecx, 0x3800 */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)((ecx ^ MEM32(ebx + 0x4))); _flag_b = (uint32_t)((ecx ^ MEM32(ebx + 0x4)));
    ecx = ecx ^ MEM32(ebx + 0x4); /* 0x100C09B7: xor ecx, dword ptr [ebx + 4] */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebx + 0x4) = ecx; /* 0x100C09BA: mov dword ptr [ebx + 4], ecx */
    if (11u) _cf = (((ecx) >> 10) & 1u); /* 0x100C09BD: shr ecx, 0xb */
    if (11u) { _flag_a = recomp_flags_pack((ecx >> 11u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ecx = ecx >> 11u; /* 0x100C09BD: shr ecx, 0xb */
    PUSH32(esp, 3); /* 0x100C09C0: push 3 */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(7);
    ecx = ecx & 7; /* 0x100C09C2: and ecx, 7 */
    _cf = 0;
    _flag_k = FK_TEST;
    esi = POP32_VAL(esp); /* 0x100C09C5: pop esi */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + ecx; /* 0x100C09C6: add ecx, ecx */
    _flag_k = FK_ADD;
    if (((LO8(ecx)) & 31)) _cf = ((((LO8(ecx)) & 31)) <= 32 ? (((esi) >> (32 - (((LO8(ecx)) & 31)))) & 1u) : 0u); /* 0x100C09C8: shl esi, cl */
    if (((LO8(ecx)) & 31)) { _flag_a = recomp_flags_pack((esi << ((LO8(ecx)) & 31)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    esi = esi << ((LO8(ecx)) & 31); /* 0x100C09C8: shl esi, cl */
    if (((LO8(ecx)) & 31)) _cf = ((((LO8(ecx)) & 31)) <= 32 ? (((eax) >> (32 - (((LO8(ecx)) & 31)))) & 1u) : 0u); /* 0x100C09CA: shl eax, cl */
    if (((LO8(ecx)) & 31)) { _flag_a = recomp_flags_pack((eax << ((LO8(ecx)) & 31)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax << ((LO8(ecx)) & 31); /* 0x100C09CA: shl eax, cl */
    edx = esi; /* 0x100C09CC: mov edx, esi */
    edx = ~edx; /* 0x100C09CE: not edx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(esi);
    eax = eax & esi; /* 0x100C09D0: and eax, esi */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(MEM32(ebx + 0x8));
    edx = edx & MEM32(ebx + 0x8); /* 0x100C09D2: and edx, dword ptr [ebx + 8] */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)((edx | eax)); _flag_b = (uint32_t)((edx | eax));
    edx = edx | eax; /* 0x100C09D5: or edx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    eax = ebx + 0x1C; /* 0x100C09D7: lea eax, [ebx + 0x1c] */
    PUSH32(esp, 0x46u); /* 0x100C09DA: push 0x46 */
    PUSH32(esp, eax); /* 0x100C09DC: push eax */
    eax = ebx + 0x26; /* 0x100C09DD: lea eax, [ebx + 0x26] */
    MEM32(ebx + 0x8) = edx; /* 0x100C09E0: mov dword ptr [ebx + 8], edx */
    PUSH32(esp, eax); /* 0x100C09E3: push eax */
    RECOMP_CALL(sub_1000F10E); /* 0x100C09E4: call 0x1000f10e */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x100C09E9: add esp, 0xc */
    _flag_k = FK_ADD;
L_100C09EC:
    ecx = MEM32(ebp + (-0x4)); /* 0x100C09EC: mov ecx, dword ptr [ebp - 4] */
    esi = POP32_VAL(esp); /* 0x100C09EF: pop esi */
    _flag_a = (uint32_t)((ecx ^ ebp)); _flag_b = (uint32_t)((ecx ^ ebp));
    ecx = ecx ^ ebp; /* 0x100C09F0: xor ecx, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    ebx = POP32_VAL(esp); /* 0x100C09F2: pop ebx */
    RECOMP_CALL(sub_1000F7C6); /* 0x100C09F3: call 0x1000f7c6 */
    RECOMP_FLAGS_IN();
    esp = ebp; /* 0x100C09F8: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x100C09FA: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x100C09FB: ret  */
    RECOMP_REGS_OUT();
}

void sub_100C09FC(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x100C09FCu);

L_100C09FC:
    PUSH32(esp, ebp); /* 0x100C09FC: push ebp */
    ebp = esp; /* 0x100C09FD: mov ebp, esp */
    ecx = MEM32(ebp + 0x10); /* 0x100C09FF: mov ecx, dword ptr [ebp + 0x10] */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0xCu; /* 0x100C0A02: sub esp, 0xc */
    _flag_k = FK_CMP;
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edx = 0; /* 0x100C0A05: xor edx, edx */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(1);
    edx = edx + 1; /* 0x100C0A07: inc edx */
    _flag_k = FK_INC;
    PUSH32(esp, esi); /* 0x100C0A08: push esi */
    PUSH32(esp, edi); /* 0x100C0A09: push edi */
    edi = MEM32(ebp + 0x8); /* 0x100C0A0A: mov edi, dword ptr [ebp + 8] */
    eax = MEM32(edi + 0x10); /* 0x100C0A0D: mov eax, dword ptr [edi + 0x10] */
    _flag_a = (uint32_t)((eax | edx)); _flag_b = (uint32_t)((eax | edx));
    eax = eax | edx; /* 0x100C0A10: or eax, edx */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(edi + 0x10) = eax; /* 0x100C0A12: mov dword ptr [edi + 0x10], eax */
    /* cmp ecx, 0xDu */ /* 0x100C0A15: cmp ecx, 0xd */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0xDu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_G(_flag_a, _flag_b)) goto L_100C0B31; /* 0x100C0A18: jg 0x100c0b31 */
L_100C0A1E:
    if (CMP_EQ(_flag_a, _flag_b)) goto L_100C0B1F; /* 0x100C0A1E: je 0x100c0b1f */
L_100C0A24:
    /* test ecx, ecx */ /* 0x100C0A24: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_100C0B88; /* 0x100C0A26: js 0x100c0b88 */
L_100C0A2C:
    /* cmp ecx, 7 */ /* 0x100C0A2C: cmp ecx, 7 */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(7);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_LE(_flag_a, _flag_b)) goto L_100C0AFE; /* 0x100C0A2F: jle 0x100c0afe */
L_100C0A35:
    /* cmp ecx, 8 */ /* 0x100C0A35: cmp ecx, 8 */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_100C0B44; /* 0x100C0A38: je 0x100c0b44 */
L_100C0A3E:
    /* cmp ecx, 9 */ /* 0x100C0A3E: cmp ecx, 9 */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(9);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_100C0AA5; /* 0x100C0A41: je 0x100c0aa5 */
L_100C0A43:
    /* cmp ecx, 0xAu */ /* 0x100C0A43: cmp ecx, 0xa */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0xAu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_100C0A8B; /* 0x100C0A46: je 0x100c0a8b */
L_100C0A48:
    /* cmp ecx, 0xBu */ /* 0x100C0A48: cmp ecx, 0xb */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0xBu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_100C0A73; /* 0x100C0A4B: je 0x100c0a73 */
L_100C0A4D:
    /* cmp ecx, 0xCu */ /* 0x100C0A4D: cmp ecx, 0xc */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_100C0B88; /* 0x100C0A50: jne 0x100c0b88 */
L_100C0A56:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xFFFFFFEDu);
    eax = eax & 0xFFFFFFEDu; /* 0x100C0A56: and eax, 0xffffffed */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)((eax | ecx)); _flag_b = (uint32_t)((eax | ecx));
    eax = eax | ecx; /* 0x100C0A59: or eax, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(edi + 0x10) = eax; /* 0x100C0A5B: mov dword ptr [edi + 0x10], eax */
    eax = MEM32(ebp + 0xC); /* 0x100C0A5E: mov eax, dword ptr [ebp + 0xc] */
    ecx = MEM32(eax + 0x14); /* 0x100C0A61: mov ecx, dword ptr [eax + 0x14] */
    eax = MEM32(ecx); /* 0x100C0A64: mov eax, dword ptr [ecx] */
    MEM32(edi) = eax; /* 0x100C0A66: mov dword ptr [edi], eax */
    eax = MEM32(ecx + 0x4); /* 0x100C0A68: mov eax, dword ptr [ecx + 4] */
    MEM32(edi + 0x4) = eax; /* 0x100C0A6B: mov dword ptr [edi + 4], eax */
    goto L_100C0B88; /* 0x100C0A6E: jmp 0x100c0b88 */
L_100C0A73:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xFFFFFFEBu);
    eax = eax & 0xFFFFFFEBu; /* 0x100C0A73: and eax, 0xffffffeb */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)((eax | 0xAu)); _flag_b = (uint32_t)((eax | 0xAu));
    eax = eax | 0xAu; /* 0x100C0A76: or eax, 0xa */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(edi + 0x10) = eax; /* 0x100C0A79: mov dword ptr [edi + 0x10], eax */
    eax = MEM32(ebp + 0xC); /* 0x100C0A7C: mov eax, dword ptr [ebp + 0xc] */
    eax = MEM32(eax + 0x14); /* 0x100C0A7F: mov eax, dword ptr [eax + 0x14] */
    eax = MEM32(eax); /* 0x100C0A82: mov eax, dword ptr [eax] */
    MEM32(edi) = eax; /* 0x100C0A84: mov dword ptr [edi], eax */
    goto L_100C0B88; /* 0x100C0A86: jmp 0x100c0b88 */
L_100C0A8B:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xFFFFFFE9u);
    eax = eax & 0xFFFFFFE9u; /* 0x100C0A8B: and eax, 0xffffffe9 */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)((eax | 8)); _flag_b = (uint32_t)((eax | 8));
    eax = eax | 8; /* 0x100C0A8E: or eax, 8 */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(edi + 0x10) = eax; /* 0x100C0A91: mov dword ptr [edi + 0x10], eax */
    eax = MEM32(ebp + 0xC); /* 0x100C0A94: mov eax, dword ptr [ebp + 0xc] */
    eax = MEM32(eax + 0x14); /* 0x100C0A97: mov eax, dword ptr [eax + 0x14] */
    SET_LO16(eax, MEM16(eax)); /* 0x100C0A9A: mov ax, word ptr [eax] */
    MEM16(edi) = (uint16_t)(LO16(eax)); /* 0x100C0A9D: mov word ptr [edi], ax */
    goto L_100C0B88; /* 0x100C0AA0: jmp 0x100c0b88 */
L_100C0AA5:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xFFFFFFF7u);
    eax = eax & 0xFFFFFFF7u; /* 0x100C0AA5: and eax, 0xfffffff7 */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)((eax | 0x16u)); _flag_b = (uint32_t)((eax | 0x16u));
    eax = eax | 0x16u; /* 0x100C0AA8: or eax, 0x16 */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(edi + 0x10) = eax; /* 0x100C0AAB: mov dword ptr [edi + 0x10], eax */
    eax = MEM32(ebp + 0xC); /* 0x100C0AAE: mov eax, dword ptr [ebp + 0xc] */
    eax = MEM32(eax + 0x4); /* 0x100C0AB1: mov eax, dword ptr [eax + 4] */
    ecx = eax; /* 0x100C0AB4: mov ecx, eax */
    if (3u) _cf = (((ecx) >> 2) & 1u); /* 0x100C0AB6: shr ecx, 3 */
    if (3u) { _flag_a = recomp_flags_pack((ecx >> 3u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ecx = ecx >> 3u; /* 0x100C0AB6: shr ecx, 3 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x100u);
    eax = eax & 0x100u; /* 0x100C0AB9: and eax, 0x100 */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0xA0u);
    ecx = ecx & 0xA0u; /* 0x100C0ABE: and ecx, 0xa0 */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)((ecx | eax)); _flag_b = (uint32_t)((ecx | eax));
    ecx = ecx | eax; /* 0x100C0AC4: or ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    if (5u) _cf = (((ecx) >> 4) & 1u); /* 0x100C0AC6: shr ecx, 5 */
    if (5u) { _flag_a = recomp_flags_pack((ecx >> 5u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ecx = ecx >> 5u; /* 0x100C0AC6: shr ecx, 5 */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ecx = ecx - 0; /* 0x100C0AC9: sub ecx, 0 */
    _flag_k = FK_CMP;
    if (/* sub result */ CMP_EQ(_flag_a, _flag_b)) goto L_100C0AF7; /* 0x100C0ACC: je 0x100c0af7 */
L_100C0ACE:
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx - 1; /* 0x100C0ACE: dec ecx */
    _flag_k = FK_DEC;
    if (/* dec result */ CMP_EQ(_flag_a, _flag_b)) goto L_100C0AEC; /* 0x100C0ACF: je 0x100c0aec */
L_100C0AD1:
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0xFFu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ecx = ecx - 0xFFu; /* 0x100C0AD1: sub ecx, 0xff */
    _flag_k = FK_CMP;
    if (/* sub result */ CMP_EQ(_flag_a, _flag_b)) goto L_100C0AE4; /* 0x100C0AD7: je 0x100c0ae4 */
L_100C0AD9:
    MEM32(edi) = 3; /* 0x100C0AD9: mov dword ptr [edi], 3 */
    goto L_100C0B88; /* 0x100C0ADF: jmp 0x100c0b88 */
L_100C0AE4:
    _flag_a = (uint32_t)(MEM32(edi)); _flag_b = (uint32_t)(0);
    MEM32(edi) = MEM32(edi) & 0; /* 0x100C0AE4: and dword ptr [edi], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_100C0B88; /* 0x100C0AE7: jmp 0x100c0b88 */
L_100C0AEC:
    MEM32(edi) = 2; /* 0x100C0AEC: mov dword ptr [edi], 2 */
    goto L_100C0B88; /* 0x100C0AF2: jmp 0x100c0b88 */
L_100C0AF7:
    MEM32(edi) = edx; /* 0x100C0AF7: mov dword ptr [edi], edx */
    goto L_100C0B88; /* 0x100C0AF9: jmp 0x100c0b88 */
L_100C0AFE:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xFFFFFFE5u);
    eax = eax & 0xFFFFFFE5u; /* 0x100C0AFE: and eax, 0xffffffe5 */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)((eax | 4)); _flag_b = (uint32_t)((eax | 4));
    eax = eax | 4; /* 0x100C0B01: or eax, 4 */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, ecx); /* 0x100C0B04: push ecx */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x100C0B05: push dword ptr [ebp + 0xc] */
    MEM32(edi + 0x10) = eax; /* 0x100C0B08: mov dword ptr [edi + 0x10], eax */
    eax = ebp + (-0xC); /* 0x100C0B0B: lea eax, [ebp - 0xc] */
    PUSH32(esp, eax); /* 0x100C0B0E: push eax */
    RECOMP_CALL(sub_100C0B8E); /* 0x100C0B0F: call 0x100c0b8e */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x100C0B14: add esp, 0xc */
    _flag_k = FK_ADD;
    esi = eax; /* 0x100C0B17: mov esi, eax */
L_100C0B19:
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x100C0B19: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x100C0B1A: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM16(edi) = MEM16(esi); esi += _df * 2; edi += _df * 2; /* 0x100C0B1B: movsw word ptr es:[edi], word ptr [esi] */
    goto L_100C0B88; /* 0x100C0B1D: jmp 0x100c0b88 */
L_100C0B1F:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xFFFFFFE1u);
    eax = eax & 0xFFFFFFE1u; /* 0x100C0B1F: and eax, 0xffffffe1 */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(edi + 0x10) = eax; /* 0x100C0B22: mov dword ptr [edi + 0x10], eax */
    eax = MEM32(ebp + 0xC); /* 0x100C0B25: mov eax, dword ptr [ebp + 0xc] */
    eax = MEM32(eax + 0x14); /* 0x100C0B28: mov eax, dword ptr [eax + 0x14] */
    fp_push(*(float*)&MEM32(eax)); /* 0x100C0B2B: fld dword ptr [eax] */
    { float _v = (float)fp_pop(); *(float*)ADDR(edi) = _v; } /* 0x100C0B2D: fstp dword ptr [edi] */
    goto L_100C0B88; /* 0x100C0B2F: jmp 0x100c0b88 */
L_100C0B31:
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0xEu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ecx = ecx - 0xEu; /* 0x100C0B31: sub ecx, 0xe */
    _flag_k = FK_CMP;
    if (/* sub result */ CMP_EQ(_flag_a, _flag_b)) goto L_100C0B75; /* 0x100C0B34: je 0x100c0b75 */
L_100C0B36:
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx - 1; /* 0x100C0B36: dec ecx */
    _flag_k = FK_DEC;
    if (/* dec result */ CMP_EQ(_flag_a, _flag_b)) goto L_100C0B64; /* 0x100C0B37: je 0x100c0b64 */
L_100C0B39:
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx - 1; /* 0x100C0B39: dec ecx */
    _flag_k = FK_DEC;
    if (/* dec result */ CMP_EQ(_flag_a, _flag_b)) goto L_100C0B5C; /* 0x100C0B3A: je 0x100c0b5c */
L_100C0B3C:
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx - 1; /* 0x100C0B3C: dec ecx */
    _flag_k = FK_DEC;
    if (/* dec result */ CMP_EQ(_flag_a, _flag_b)) goto L_100C0B4C; /* 0x100C0B3D: je 0x100c0b4c */
L_100C0B3F:
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0xEu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ecx = ecx - 0xEu; /* 0x100C0B3F: sub ecx, 0xe */
    _flag_k = FK_CMP;
    if (/* sub result */ CMP_NE(_flag_a, _flag_b)) goto L_100C0B88; /* 0x100C0B42: jne 0x100c0b88 */
L_100C0B44:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xFFFFFFFEu);
    eax = eax & 0xFFFFFFFEu; /* 0x100C0B44: and eax, 0xfffffffe */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(edi + 0x10) = eax; /* 0x100C0B47: mov dword ptr [edi + 0x10], eax */
    goto L_100C0B88; /* 0x100C0B4A: jmp 0x100c0b88 */
L_100C0B4C:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xFFFFFFE5u);
    eax = eax & 0xFFFFFFE5u; /* 0x100C0B4C: and eax, 0xffffffe5 */
    _cf = 0;
    _flag_k = FK_TEST;
    esi = 0x100E44D4u; /* 0x100C0B4F: mov esi, 0x100e44d4 */
    _flag_a = (uint32_t)((eax | 4)); _flag_b = (uint32_t)((eax | 4));
    eax = eax | 4; /* 0x100C0B54: or eax, 4 */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(edi + 0x10) = eax; /* 0x100C0B57: mov dword ptr [edi + 0x10], eax */
    RECOMP_BACKEDGE();
    goto L_100C0B19; /* 0x100C0B5A: jmp 0x100c0b19 */
L_100C0B5C:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xFFFFFFF5u);
    eax = eax & 0xFFFFFFF5u; /* 0x100C0B5C: and eax, 0xfffffff5 */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)((eax | 0x14u)); _flag_b = (uint32_t)((eax | 0x14u));
    eax = eax | 0x14u; /* 0x100C0B5F: or eax, 0x14 */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_100C0B6A; /* 0x100C0B62: jmp 0x100c0b6a */
L_100C0B64:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xFFFFFFE5u);
    eax = eax & 0xFFFFFFE5u; /* 0x100C0B64: and eax, 0xffffffe5 */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)((eax | 4)); _flag_b = (uint32_t)((eax | 4));
    eax = eax | 4; /* 0x100C0B67: or eax, 4 */
    _cf = 0;
    _flag_k = FK_TEST;
L_100C0B6A:
    esi = MEM32(ebp + 0xC); /* 0x100C0B6A: mov esi, dword ptr [ebp + 0xc] */
    MEM32(edi + 0x10) = eax; /* 0x100C0B6D: mov dword ptr [edi + 0x10], eax */
    esi = MEM32(esi + 0x14); /* 0x100C0B70: mov esi, dword ptr [esi + 0x14] */
    RECOMP_BACKEDGE();
    goto L_100C0B19; /* 0x100C0B73: jmp 0x100c0b19 */
L_100C0B75:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xFFFFFFE3u);
    eax = eax & 0xFFFFFFE3u; /* 0x100C0B75: and eax, 0xffffffe3 */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)((eax | 2)); _flag_b = (uint32_t)((eax | 2));
    eax = eax | 2; /* 0x100C0B78: or eax, 2 */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(edi + 0x10) = eax; /* 0x100C0B7B: mov dword ptr [edi + 0x10], eax */
    eax = MEM32(ebp + 0xC); /* 0x100C0B7E: mov eax, dword ptr [ebp + 0xc] */
    eax = MEM32(eax + 0x14); /* 0x100C0B81: mov eax, dword ptr [eax + 0x14] */
    fp_push(*(double*)ADDR(eax)); /* 0x100C0B84: fld qword ptr [eax] */
    { double _v = fp_pop(); *(double*)ADDR(edi) = _v; } /* 0x100C0B86: fstp qword ptr [edi] */
L_100C0B88:
    edi = POP32_VAL(esp); /* 0x100C0B88: pop edi */
    esi = POP32_VAL(esp); /* 0x100C0B89: pop esi */
    esp = ebp; /* 0x100C0B8A: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x100C0B8C: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x100C0B8D: ret  */
    RECOMP_REGS_OUT();
}

void sub_100C0B8E(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x100C0B8Eu);

L_100C0B8E:
    PUSH32(esp, ebp); /* 0x100C0B8E: push ebp */
    ebp = esp; /* 0x100C0B8F: mov ebp, esp */
    eax = MEM32(ebp + 0x10); /* 0x100C0B91: mov eax, dword ptr [ebp + 0x10] */
    PUSH32(esp, esi); /* 0x100C0B94: push esi */
    PUSH32(esp, edi); /* 0x100C0B95: push edi */
    /* cmp eax, 7 */ /* 0x100C0B96: cmp eax, 7 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(7);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_A(_flag_a, _flag_b)) goto L_100C0BA8; /* 0x100C0B99: ja 0x100c0ba8 */
L_100C0B9B:
    esi = MEM32(ebp + 0xC); /* 0x100C0B9B: mov esi, dword ptr [ebp + 0xc] */
    ecx = (uint32_t)((int32_t)eax * (int32_t)0xAu); /* 0x100C0B9E: imul ecx, eax, 0xa */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(0x1Cu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esi = esi + 0x1Cu; /* 0x100C0BA1: add esi, 0x1c */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esi = esi + ecx; /* 0x100C0BA4: add esi, ecx */
    _flag_k = FK_ADD;
    goto L_100C0BAD; /* 0x100C0BA6: jmp 0x100c0bad */
L_100C0BA8:
    esi = 0x100E44D4u; /* 0x100C0BA8: mov esi, 0x100e44d4 */
L_100C0BAD:
    eax = MEM32(ebp + 0x8); /* 0x100C0BAD: mov eax, dword ptr [ebp + 8] */
    edi = eax; /* 0x100C0BB0: mov edi, eax */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x100C0BB2: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x100C0BB3: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM16(edi) = MEM16(esi); esi += _df * 2; edi += _df * 2; /* 0x100C0BB4: movsw word ptr es:[edi], word ptr [esi] */
    edi = POP32_VAL(esp); /* 0x100C0BB6: pop edi */
    esi = POP32_VAL(esp); /* 0x100C0BB7: pop esi */
    ebp = POP32_VAL(esp); /* 0x100C0BB8: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x100C0BB9: ret  */
    RECOMP_REGS_OUT();
}

void sub_100C0BBA(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x100C0BBAu);

L_100C0BBA:
    PUSH32(esp, ebp); /* 0x100C0BBA: push ebp */
    ebp = esp; /* 0x100C0BBB: mov ebp, esp */
    ecx = MEM32(ebp + 0xC); /* 0x100C0BBD: mov ecx, dword ptr [ebp + 0xc] */
    eax = ecx + (-0xA); /* 0x100C0BC0: lea eax, [ecx - 0xa] */
    /* cmp eax, 6 */ /* 0x100C0BC3: cmp eax, 6 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(6);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_A(_flag_a, _flag_b)) goto L_100C0BE9; /* 0x100C0BC6: ja 0x100c0be9 */
L_100C0BC8:
    edx = MEM32(ebp + 0x8); /* 0x100C0BC8: mov edx, dword ptr [ebp + 8] */
    eax = MEM32(edx + 0xC4); /* 0x100C0BCB: mov eax, dword ptr [edx + 0xc4] */
    /* cmp eax, MEM32(edx + 0x30) */ /* 0x100C0BD1: cmp eax, dword ptr [edx + 0x30] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(edx + 0x30));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_100C0BE9; /* 0x100C0BD4: jbe 0x100c0be9 */
L_100C0BD6:
    PUSH32(esp, esp); /* 0x100C0BD6: push esp */
    eax = POP32_VAL(esp); /* 0x100C0BD7: pop eax */
    MEM32(ebp + 0xC) = eax; /* 0x100C0BD8: mov dword ptr [ebp + 0xc], eax */
    eax = MEM32(edx + 0x30); /* 0x100C0BDB: mov eax, dword ptr [edx + 0x30] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 4; /* 0x100C0BDE: add eax, 4 */
    _flag_k = FK_ADD;
    /* cmp MEM32(ebp + 0xC), eax */ /* 0x100C0BE1: cmp dword ptr [ebp + 0xc], eax */
    _flag_a = (uint32_t)(MEM32(ebp + 0xC)); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_A(_flag_a, _flag_b)) goto L_100C0BE9; /* 0x100C0BE4: ja 0x100c0be9 */
L_100C0BE6:
    PUSH32(esp, 0x1Fu); /* 0x100C0BE6: push 0x1f */
    ecx = POP32_VAL(esp); /* 0x100C0BE8: pop ecx */
L_100C0BE9:
    eax = ecx; /* 0x100C0BE9: mov eax, ecx */
    ebp = POP32_VAL(esp); /* 0x100C0BEB: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x100C0BEC: ret  */
    RECOMP_REGS_OUT();
}

void sub_100C0BED(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x100C0BEDu);

L_100C0BED:
    PUSH32(esp, ebp); /* 0x100C0BED: push ebp */
    ebp = esp; /* 0x100C0BEE: mov ebp, esp */
    ecx = MEM32(ebp + 0xC); /* 0x100C0BF0: mov ecx, dword ptr [ebp + 0xc] */
    /* cmp ecx, 7 */ /* 0x100C0BF3: cmp ecx, 7 */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(7);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_A(_flag_a, _flag_b)) goto L_100C0C5B; /* 0x100C0BF6: ja 0x100c0c5b */
L_100C0BF8:
    PUSH32(esp, ebx); /* 0x100C0BF8: push ebx */
    ebx = MEM32(ebp + 0x8); /* 0x100C0BF9: mov ebx, dword ptr [ebp + 8] */
    edx = 0x7FFFu; /* 0x100C0BFC: mov edx, 0x7fff */
    PUSH32(esp, esi); /* 0x100C0C01: push esi */
    eax = (uint32_t)((int32_t)ecx * (int32_t)0xAu); /* 0x100C0C02: imul eax, ecx, 0xa */
    PUSH32(esp, edi); /* 0x100C0C05: push edi */
    edi = ebx + 0x1C; /* 0x100C0C06: lea edi, [ebx + 0x1c] */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edi = edi + eax; /* 0x100C0C09: add edi, eax */
    _flag_k = FK_ADD;
    eax = MEM32(ebp + 0x10); /* 0x100C0C0B: mov eax, dword ptr [ebp + 0x10] */
    esi = eax; /* 0x100C0C0E: mov esi, eax */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x100C0C10: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x100C0C11: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM16(edi) = MEM16(esi); esi += _df * 2; edi += _df * 2; /* 0x100C0C12: movsw word ptr es:[edi], word ptr [esi] */
    esi = MEM32(ebx + 0x4); /* 0x100C0C14: mov esi, dword ptr [ebx + 4] */
    if (11u) _cf = (((esi) >> 10) & 1u); /* 0x100C0C17: shr esi, 0xb */
    if (11u) { _flag_a = recomp_flags_pack((esi >> 11u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    esi = esi >> 11u; /* 0x100C0C17: shr esi, 0xb */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esi = esi + ecx; /* 0x100C0C1A: add esi, ecx */
    _flag_k = FK_ADD;
    ecx = (uint32_t)MEM16(eax + 0x8); /* 0x100C0C1C: movzx ecx, word ptr [eax + 8] */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(7);
    esi = esi & 7; /* 0x100C0C20: and esi, 7 */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(edx);
    ecx = ecx & edx; /* 0x100C0C23: and ecx, edx */
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_100C0C2F; /* 0x100C0C25: je 0x100c0c2f */
L_100C0C27:
    /* cmp ecx, edx */ /* 0x100C0C27: cmp ecx, edx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_100C0C3F; /* 0x100C0C29: je 0x100c0c3f */
L_100C0C2B:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edx = 0; /* 0x100C0C2B: xor edx, edx */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_100C0C42; /* 0x100C0C2D: jmp 0x100c0c42 */
L_100C0C2F:
    /* cmp MEM32(eax), 0 */ /* 0x100C0C2F: cmp dword ptr [eax], 0 */
    _flag_a = (uint32_t)(MEM32(eax)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_100C0C3F; /* 0x100C0C32: jne 0x100c0c3f */
L_100C0C34:
    /* cmp MEM32(eax + 0x4), 0 */ /* 0x100C0C34: cmp dword ptr [eax + 4], 0 */
    _flag_a = (uint32_t)(MEM32(eax + 0x4)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_100C0C3F; /* 0x100C0C38: jne 0x100c0c3f */
L_100C0C3A:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edx = 0; /* 0x100C0C3A: xor edx, edx */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(1);
    edx = edx + 1; /* 0x100C0C3C: inc edx */
    _flag_k = FK_INC;
    goto L_100C0C42; /* 0x100C0C3D: jmp 0x100c0c42 */
L_100C0C3F:
    PUSH32(esp, 2); /* 0x100C0C3F: push 2 */
    edx = POP32_VAL(esp); /* 0x100C0C41: pop edx */
L_100C0C42:
    PUSH32(esp, 3); /* 0x100C0C42: push 3 */
    eax = POP32_VAL(esp); /* 0x100C0C44: pop eax */
    ecx = esi + esi; /* 0x100C0C45: lea ecx, [esi + esi] */
    if (((LO8(ecx)) & 31)) _cf = ((((LO8(ecx)) & 31)) <= 32 ? (((eax) >> (32 - (((LO8(ecx)) & 31)))) & 1u) : 0u); /* 0x100C0C48: shl eax, cl */
    if (((LO8(ecx)) & 31)) { _flag_a = recomp_flags_pack((eax << ((LO8(ecx)) & 31)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax << ((LO8(ecx)) & 31); /* 0x100C0C48: shl eax, cl */
    if (((LO8(ecx)) & 31)) _cf = ((((LO8(ecx)) & 31)) <= 32 ? (((edx) >> (32 - (((LO8(ecx)) & 31)))) & 1u) : 0u); /* 0x100C0C4A: shl edx, cl */
    if (((LO8(ecx)) & 31)) { _flag_a = recomp_flags_pack((edx << ((LO8(ecx)) & 31)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    edx = edx << ((LO8(ecx)) & 31); /* 0x100C0C4A: shl edx, cl */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(eax);
    edx = edx & eax; /* 0x100C0C4C: and edx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    eax = ~eax; /* 0x100C0C4E: not eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(ebx + 0x8));
    eax = eax & MEM32(ebx + 0x8); /* 0x100C0C50: and eax, dword ptr [ebx + 8] */
    _cf = 0;
    _flag_k = FK_TEST;
    edi = POP32_VAL(esp); /* 0x100C0C53: pop edi */
    _flag_a = (uint32_t)((edx | eax)); _flag_b = (uint32_t)((edx | eax));
    edx = edx | eax; /* 0x100C0C54: or edx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    esi = POP32_VAL(esp); /* 0x100C0C56: pop esi */
    MEM32(ebx + 0x8) = edx; /* 0x100C0C57: mov dword ptr [ebx + 8], edx */
    ebx = POP32_VAL(esp); /* 0x100C0C5A: pop ebx */
L_100C0C5B:
    ebp = POP32_VAL(esp); /* 0x100C0C5B: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x100C0C5C: ret  */
    RECOMP_REGS_OUT();
}

void sub_100C0C5D(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x100C0C5Du);

L_100C0C5D:
    PUSH32(esp, ebp); /* 0x100C0C5D: push ebp */
    ebp = esp; /* 0x100C0C5E: mov ebp, esp */
    PUSH32(esp, esi); /* 0x100C0C60: push esi */
    esi = MEM32(ebp + 0x14); /* 0x100C0C61: mov esi, dword ptr [ebp + 0x14] */
    /* test esi, esi */ /* 0x100C0C64: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) == 0u)) goto L_100C0C73; /* 0x100C0C66: jns 0x100c0c73 */
L_100C0C68:
    PUSH32(esp, esi); /* 0x100C0C68: push esi */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x100C0C69: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_100C0908); /* 0x100C0C6C: call 0x100c0908 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x100C0C71: pop ecx */
    ecx = POP32_VAL(esp); /* 0x100C0C72: pop ecx */
L_100C0C73:
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x100C0C73: push dword ptr [ebp + 0x10] */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x100C0C76: push dword ptr [ebp + 0xc] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x100C0C79: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_100C0C96); /* 0x100C0C7C: call 0x100c0c96 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x100C0C81: add esp, 0xc */
    _flag_k = FK_ADD;
    /* test esi, esi */ /* 0x100C0C84: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if ((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) == 0u || (((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_100C0C93; /* 0x100C0C86: jle 0x100c0c93 */
L_100C0C88:
    PUSH32(esp, esi); /* 0x100C0C88: push esi */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x100C0C89: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_100C0908); /* 0x100C0C8C: call 0x100c0908 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x100C0C91: pop ecx */
    ecx = POP32_VAL(esp); /* 0x100C0C92: pop ecx */
L_100C0C93:
    esi = POP32_VAL(esp); /* 0x100C0C93: pop esi */
    ebp = POP32_VAL(esp); /* 0x100C0C94: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x100C0C95: ret  */
    RECOMP_REGS_OUT();
}

void sub_100C0C96(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x100C0C96u);

L_100C0C96:
    PUSH32(esp, ebp); /* 0x100C0C96: push ebp */
    ebp = esp; /* 0x100C0C97: mov ebp, esp */
    eax = MEM32(ebp + 0x10); /* 0x100C0C99: mov eax, dword ptr [ebp + 0x10] */
    PUSH32(esp, esi); /* 0x100C0C9C: push esi */
    PUSH32(esp, edi); /* 0x100C0C9D: push edi */
    /* cmp eax, 0xCu */ /* 0x100C0C9E: cmp eax, 0xc */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_G(_flag_a, _flag_b)) goto L_100C0D76; /* 0x100C0CA1: jg 0x100c0d76 */
L_100C0CA7:
    if (CMP_EQ(_flag_a, _flag_b)) goto L_100C0D61; /* 0x100C0CA7: je 0x100c0d61 */
L_100C0CAD:
    /* test eax, eax */ /* 0x100C0CAD: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_100C0DAF; /* 0x100C0CAF: js 0x100c0daf */
L_100C0CB5:
    /* cmp eax, 7 */ /* 0x100C0CB5: cmp eax, 7 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(7);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_LE(_flag_a, _flag_b)) goto L_100C0D50; /* 0x100C0CB8: jle 0x100c0d50 */
L_100C0CBE:
    /* cmp eax, 9 */ /* 0x100C0CBE: cmp eax, 9 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(9);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_100C0CF7; /* 0x100C0CC1: je 0x100c0cf7 */
L_100C0CC3:
    /* cmp eax, 0xAu */ /* 0x100C0CC3: cmp eax, 0xa */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xAu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_100C0CE3; /* 0x100C0CC6: je 0x100c0ce3 */
L_100C0CC8:
    /* cmp eax, 0xBu */ /* 0x100C0CC8: cmp eax, 0xb */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xBu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_100C0DAF; /* 0x100C0CCB: jne 0x100c0daf */
L_100C0CD1:
    eax = MEM32(ebp + 0x8); /* 0x100C0CD1: mov eax, dword ptr [ebp + 8] */
    ecx = MEM32(eax + 0x14); /* 0x100C0CD4: mov ecx, dword ptr [eax + 0x14] */
    eax = MEM32(ebp + 0xC); /* 0x100C0CD7: mov eax, dword ptr [ebp + 0xc] */
    eax = MEM32(eax); /* 0x100C0CDA: mov eax, dword ptr [eax] */
    MEM32(ecx) = eax; /* 0x100C0CDC: mov dword ptr [ecx], eax */
    goto L_100C0DAF; /* 0x100C0CDE: jmp 0x100c0daf */
L_100C0CE3:
    eax = MEM32(ebp + 0x8); /* 0x100C0CE3: mov eax, dword ptr [ebp + 8] */
    ecx = MEM32(eax + 0x14); /* 0x100C0CE6: mov ecx, dword ptr [eax + 0x14] */
    eax = MEM32(ebp + 0xC); /* 0x100C0CE9: mov eax, dword ptr [ebp + 0xc] */
    SET_LO16(eax, MEM16(eax)); /* 0x100C0CEC: mov ax, word ptr [eax] */
    MEM16(ecx) = (uint16_t)(LO16(eax)); /* 0x100C0CEF: mov word ptr [ecx], ax */
    goto L_100C0DAF; /* 0x100C0CF2: jmp 0x100c0daf */
L_100C0CF7:
    eax = MEM32(ebp + 0xC); /* 0x100C0CF7: mov eax, dword ptr [ebp + 0xc] */
    eax = MEM32(eax); /* 0x100C0CFA: mov eax, dword ptr [eax] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - 0; /* 0x100C0CFC: sub eax, 0 */
    _flag_k = FK_CMP;
    if (/* sub result */ CMP_EQ(_flag_a, _flag_b)) goto L_100C0D3B; /* 0x100C0CFF: je 0x100c0d3b */
L_100C0D01:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax - 1; /* 0x100C0D01: dec eax */
    _flag_k = FK_DEC;
    if (/* dec result */ CMP_EQ(_flag_a, _flag_b)) goto L_100C0D2F; /* 0x100C0D02: je 0x100c0d2f */
L_100C0D04:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax - 1; /* 0x100C0D04: dec eax */
    _flag_k = FK_DEC;
    if (/* dec result */ CMP_EQ(_flag_a, _flag_b)) goto L_100C0D1D; /* 0x100C0D05: je 0x100c0d1d */
L_100C0D07:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax - 1; /* 0x100C0D07: dec eax */
    _flag_k = FK_DEC;
    if (/* dec result */ CMP_NE(_flag_a, _flag_b)) goto L_100C0DAF; /* 0x100C0D08: jne 0x100c0daf */
L_100C0D0E:
    eax = MEM32(ebp + 0x8); /* 0x100C0D0E: mov eax, dword ptr [ebp + 8] */
    _flag_a = (uint32_t)((MEM32(eax + 0x4) | 0x4500u)); _flag_b = (uint32_t)((MEM32(eax + 0x4) | 0x4500u));
    MEM32(eax + 0x4) = MEM32(eax + 0x4) | 0x4500u; /* 0x100C0D11: or dword ptr [eax + 4], 0x4500 */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_100C0DAF; /* 0x100C0D18: jmp 0x100c0daf */
L_100C0D1D:
    ecx = MEM32(ebp + 0x8); /* 0x100C0D1D: mov ecx, dword ptr [ebp + 8] */
    eax = MEM32(ecx + 0x4); /* 0x100C0D20: mov eax, dword ptr [ecx + 4] */
    _flag_a = (uint32_t)((eax | 0x100u)); _flag_b = (uint32_t)((eax | 0x100u));
    eax = eax | 0x100u; /* 0x100C0D23: or eax, 0x100 */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xFFFFBBFFu);
    eax = eax & 0xFFFFBBFFu; /* 0x100C0D28: and eax, 0xffffbbff */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_100C0D4B; /* 0x100C0D2D: jmp 0x100c0d4b */
L_100C0D2F:
    eax = MEM32(ebp + 0x8); /* 0x100C0D2F: mov eax, dword ptr [ebp + 8] */
    _flag_a = (uint32_t)(MEM32(eax + 0x4)); _flag_b = (uint32_t)(0xFFFFBAFFu);
    MEM32(eax + 0x4) = MEM32(eax + 0x4) & 0xFFFFBAFFu; /* 0x100C0D32: and dword ptr [eax + 4], 0xffffbaff */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_100C0DAF; /* 0x100C0D39: jmp 0x100c0daf */
L_100C0D3B:
    ecx = MEM32(ebp + 0x8); /* 0x100C0D3B: mov ecx, dword ptr [ebp + 8] */
    eax = MEM32(ecx + 0x4); /* 0x100C0D3E: mov eax, dword ptr [ecx + 4] */
    _flag_a = (uint32_t)((eax | 0x4000u)); _flag_b = (uint32_t)((eax | 0x4000u));
    eax = eax | 0x4000u; /* 0x100C0D41: or eax, 0x4000 */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xFFFFFAFFu);
    eax = eax & 0xFFFFFAFFu; /* 0x100C0D46: and eax, 0xfffffaff */
    _cf = 0;
    _flag_k = FK_TEST;
L_100C0D4B:
    MEM32(ecx + 0x4) = eax; /* 0x100C0D4B: mov dword ptr [ecx + 4], eax */
    goto L_100C0DAF; /* 0x100C0D4E: jmp 0x100c0daf */
L_100C0D50:
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x100C0D50: push dword ptr [ebp + 0xc] */
    PUSH32(esp, eax); /* 0x100C0D53: push eax */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x100C0D54: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_100C0BED); /* 0x100C0D57: call 0x100c0bed */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x100C0D5C: add esp, 0xc */
    _flag_k = FK_ADD;
    goto L_100C0DAF; /* 0x100C0D5F: jmp 0x100c0daf */
L_100C0D61:
    eax = MEM32(ebp + 0x8); /* 0x100C0D61: mov eax, dword ptr [ebp + 8] */
    ecx = MEM32(ebp + 0xC); /* 0x100C0D64: mov ecx, dword ptr [ebp + 0xc] */
    edx = MEM32(eax + 0x14); /* 0x100C0D67: mov edx, dword ptr [eax + 0x14] */
    eax = MEM32(ecx); /* 0x100C0D6A: mov eax, dword ptr [ecx] */
    MEM32(edx) = eax; /* 0x100C0D6C: mov dword ptr [edx], eax */
    eax = MEM32(ecx + 0x4); /* 0x100C0D6E: mov eax, dword ptr [ecx + 4] */
    MEM32(edx + 0x4) = eax; /* 0x100C0D71: mov dword ptr [edx + 4], eax */
    goto L_100C0DAF; /* 0x100C0D74: jmp 0x100c0daf */
L_100C0D76:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xDu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - 0xDu; /* 0x100C0D76: sub eax, 0xd */
    _flag_k = FK_CMP;
    if (/* sub result */ CMP_EQ(_flag_a, _flag_b)) goto L_100C0DA2; /* 0x100C0D79: je 0x100c0da2 */
L_100C0D7B:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax - 1; /* 0x100C0D7B: dec eax */
    _flag_k = FK_DEC;
    if (/* dec result */ CMP_EQ(_flag_a, _flag_b)) goto L_100C0D93; /* 0x100C0D7C: je 0x100c0d93 */
L_100C0D7E:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax - 1; /* 0x100C0D7E: dec eax */
    _flag_k = FK_DEC;
    if (/* dec result */ CMP_EQ(_flag_a, _flag_b)) goto L_100C0D84; /* 0x100C0D7F: je 0x100c0d84 */
L_100C0D81:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax - 1; /* 0x100C0D81: dec eax */
    _flag_k = FK_DEC;
    if (/* dec result */ CMP_NE(_flag_a, _flag_b)) goto L_100C0DAF; /* 0x100C0D82: jne 0x100c0daf */
L_100C0D84:
    edi = MEM32(ebp + 0x8); /* 0x100C0D84: mov edi, dword ptr [ebp + 8] */
    esi = MEM32(ebp + 0xC); /* 0x100C0D87: mov esi, dword ptr [ebp + 0xc] */
    edi = MEM32(edi + 0x14); /* 0x100C0D8A: mov edi, dword ptr [edi + 0x14] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x100C0D8D: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x100C0D8E: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM16(edi) = MEM16(esi); esi += _df * 2; edi += _df * 2; /* 0x100C0D8F: movsw word ptr es:[edi], word ptr [esi] */
    goto L_100C0DAF; /* 0x100C0D91: jmp 0x100c0daf */
L_100C0D93:
    eax = MEM32(ebp + 0x8); /* 0x100C0D93: mov eax, dword ptr [ebp + 8] */
    ecx = MEM32(eax + 0x14); /* 0x100C0D96: mov ecx, dword ptr [eax + 0x14] */
    eax = MEM32(ebp + 0xC); /* 0x100C0D99: mov eax, dword ptr [ebp + 0xc] */
    fp_push(*(double*)ADDR(eax)); /* 0x100C0D9C: fld qword ptr [eax] */
    { double _v = fp_pop(); *(double*)ADDR(ecx) = _v; } /* 0x100C0D9E: fstp qword ptr [ecx] */
    goto L_100C0DAF; /* 0x100C0DA0: jmp 0x100c0daf */
L_100C0DA2:
    eax = MEM32(ebp + 0x8); /* 0x100C0DA2: mov eax, dword ptr [ebp + 8] */
    ecx = MEM32(eax + 0x14); /* 0x100C0DA5: mov ecx, dword ptr [eax + 0x14] */
    eax = MEM32(ebp + 0xC); /* 0x100C0DA8: mov eax, dword ptr [ebp + 0xc] */
    fp_push(*(float*)&MEM32(eax)); /* 0x100C0DAB: fld dword ptr [eax] */
    { float _v = (float)fp_pop(); *(float*)ADDR(ecx) = _v; } /* 0x100C0DAD: fstp dword ptr [ecx] */
L_100C0DAF:
    edi = POP32_VAL(esp); /* 0x100C0DAF: pop edi */
    esi = POP32_VAL(esp); /* 0x100C0DB0: pop esi */
    ebp = POP32_VAL(esp); /* 0x100C0DB1: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x100C0DB2: ret  */
    RECOMP_REGS_OUT();
}

void sub_100C0DB3(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x100C0DB3u);

L_100C0DB3:
    PUSH32(esp, ebx); /* 0x100C0DB3: push ebx */
    ebx = esp; /* 0x100C0DB4: mov ebx, esp */
    PUSH32(esp, ecx); /* 0x100C0DB6: push ecx */
    PUSH32(esp, ecx); /* 0x100C0DB7: push ecx */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xFFFFFFF0u);
    esp = esp & 0xFFFFFFF0u; /* 0x100C0DB8: and esp, 0xfffffff0 */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x100C0DBB: add esp, 4 */
    _flag_k = FK_ADD;
    PUSH32(esp, ebp); /* 0x100C0DBE: push ebp */
    ebp = MEM32(ebx + 0x4); /* 0x100C0DBF: mov ebp, dword ptr [ebx + 4] */
    MEM32(esp + 0x4) = ebp; /* 0x100C0DC2: mov dword ptr [esp + 4], ebp */
    ebp = esp; /* 0x100C0DC6: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xC8u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0xC8u; /* 0x100C0DC8: sub esp, 0xc8 */
    _flag_k = FK_CMP;
    eax = MEM32(0x100DF7B8); /* 0x100C0DCE: mov eax, dword ptr [0x100df7b8] */
    _flag_a = (uint32_t)((eax ^ ebp)); _flag_b = (uint32_t)((eax ^ ebp));
    eax = eax ^ ebp; /* 0x100C0DD3: xor eax, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x4)) = eax; /* 0x100C0DD5: mov dword ptr [ebp - 4], eax */
    edx = MEM32(ebx + 0x8); /* 0x100C0DD8: mov edx, dword ptr [ebx + 8] */
    eax = 0xC00002B4u; /* 0x100C0DDB: mov eax, 0xc00002b4 */
    ecx = MEM32(ebx + 0xC); /* 0x100C0DE0: mov ecx, dword ptr [ebx + 0xc] */
    PUSH32(esp, esi); /* 0x100C0DE3: push esi */
    PUSH32(esp, edi); /* 0x100C0DE4: push edi */
    edi = MEM32(ebx + 0x10); /* 0x100C0DE5: mov edi, dword ptr [ebx + 0x10] */
    esi = eax + 0x1; /* 0x100C0DE8: lea esi, [eax + 1] */
    MEM32(ebp + (-0x9C)) = edi; /* 0x100C0DEB: mov dword ptr [ebp - 0x9c], edi */
    /* cmp edx, 0xC000008Eu */ /* 0x100C0DF1: cmp edx, 0xc000008e */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(0xC000008Eu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_100C0E28; /* 0x100C0DF7: je 0x100c0e28 */
L_100C0DF9:
    /* cmp edx, 0xC000008Fu */ /* 0x100C0DF9: cmp edx, 0xc000008f */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(0xC000008Fu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_100C0E28; /* 0x100C0DFF: je 0x100c0e28 */
L_100C0E01:
    /* cmp edx, 0xC0000090u */ /* 0x100C0E01: cmp edx, 0xc0000090 */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(0xC0000090u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_100C0E28; /* 0x100C0E07: je 0x100c0e28 */
L_100C0E09:
    /* cmp edx, 0xC0000091u */ /* 0x100C0E09: cmp edx, 0xc0000091 */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(0xC0000091u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_100C0E28; /* 0x100C0E0F: je 0x100c0e28 */
L_100C0E11:
    /* cmp edx, 0xC0000093u */ /* 0x100C0E11: cmp edx, 0xc0000093 */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(0xC0000093u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_100C0E28; /* 0x100C0E17: je 0x100c0e28 */
L_100C0E19:
    /* cmp edx, eax */ /* 0x100C0E19: cmp edx, eax */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_100C0E28; /* 0x100C0E1B: je 0x100c0e28 */
L_100C0E1D:
    /* cmp edx, esi */ /* 0x100C0E1D: cmp edx, esi */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_100C0E28; /* 0x100C0E1F: je 0x100c0e28 */
L_100C0E21:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x100C0E21: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_100C1463; /* 0x100C0E23: jmp 0x100c1463 */
L_100C0E28:
    void_lift_trap(0x100C0E28u, "fninit "); /* 0x100C0E28: fninit  */
    /* cmp edx, eax */ /* 0x100C0E2A: cmp edx, eax */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_100C1458; /* 0x100C0E2C: je 0x100c1458 */
L_100C0E32:
    /* cmp edx, esi */ /* 0x100C0E32: cmp edx, esi */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_100C1458; /* 0x100C0E34: je 0x100c1458 */
L_100C0E3A:
    eax = MEM32(ecx); /* 0x100C0E3A: mov eax, dword ptr [ecx] */
    ecx = MEM32(ecx + 0x4); /* 0x100C0E3C: mov ecx, dword ptr [ecx + 4] */
    MEM32(ebp + (-0x98)) = ecx; /* 0x100C0E3F: mov dword ptr [ebp - 0x98], ecx */
    /* cmp MEM32(eax + 0x14), 0 */ /* 0x100C0E45: cmp dword ptr [eax + 0x14], 0 */
    _flag_a = (uint32_t)(MEM32(eax + 0x14)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    esi = ecx + 0x1C; /* 0x100C0E49: lea esi, [ecx + 0x1c] */
    if (CMP_EQ(_flag_a, _flag_b)) goto L_100C0E66; /* 0x100C0E4C: je 0x100c0e66 */
L_100C0E4E:
    PUSH32(esp, MEM32(eax + 0x14)); /* 0x100C0E4E: push dword ptr [eax + 0x14] */
    RECOMP_ICALL(edi); /* 0x100C0E51: call edi */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x100C0E53: pop ecx */
    /* cmp eax, 0xFFFFFFFFu */ /* 0x100C0E54: cmp eax, -1 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xFFFFFFFFu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_100C1463; /* 0x100C0E57: jne 0x100c1463 */
L_100C0E5D:
    MEM8(esi + 0x4) = (uint8_t)(0); /* 0x100C0E5D: mov byte ptr [esi + 4], 0 */
    goto L_100C1463; /* 0x100C0E61: jmp 0x100c1463 */
L_100C0E66:
    ecx = MEM32(esi + 0xC); /* 0x100C0E66: mov ecx, dword ptr [esi + 0xc] */
    eax = (uint32_t)MEM8(ecx); /* 0x100C0E69: movzx eax, byte ptr [ecx] */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(0xF8u) << 24;
    SET_LO8(eax, LO8(eax) & 0xF8u); /* 0x100C0E6C: and al, 0xf8 */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    /* cmp LO8(eax), 0xD8u */ /* 0x100C0E6E: cmp al, 0xd8 */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(0xD8u) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    RECOMP_BACKEDGE();
    if (CMP_NE(_flag_a, _flag_b)) goto L_100C0E21; /* 0x100C0E70: jne 0x100c0e21 */
L_100C0E72:
    SET_LO16(eax, MEM16(ecx)); /* 0x100C0E72: mov ax, word ptr [ecx] */
    MEM16(ebp + (-0x84)) = (uint16_t)(LO16(eax)); /* 0x100C0E75: mov word ptr [ebp - 0x84], ax */
    eax = 0xC000u; /* 0x100C0E7C: mov eax, 0xc000 */
    ecx = MEM32(ebp + (-0x84)); /* 0x100C0E81: mov ecx, dword ptr [ebp - 0x84] */
    edi = ecx; /* 0x100C0E87: mov edi, ecx */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(eax);
    edi = edi & eax; /* 0x100C0E89: and edi, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    edi = edi - eax; /* 0x100C0E8B: sub edi, eax */
    _flag_k = FK_CMP;
    eax = ecx; /* 0x100C0E8D: mov eax, ecx */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(edi);
    _cf = (edi) != 0;
    edi = (uint32_t)(-(int32_t)edi); /* 0x100C0E8F: neg edi */
    _flag_k = FK_CMP;
    { uint32_t _sa = edi, _sb = edi, _sc = (uint32_t)CMP_B(_flag_a, _flag_b); /* 0x100C0E91: sbb edi, edi */
      edi = _sc ? 0xFFFFFFFFu : 0;
      _flag_a = recomp_flags_sbb(_sa, _sb, _sc); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(7);
    eax = eax & 7; /* 0x100C0E93: and eax, 7 */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + eax; /* 0x100C0E96: add eax, eax */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(1);
    edi = edi + 1; /* 0x100C0E98: inc edi */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)((edi | eax)); _flag_b = (uint32_t)((edi | eax));
    edi = edi | eax; /* 0x100C0E99: or edi, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    eax = ecx; /* 0x100C0E9B: mov eax, ecx */
    ecx = MEM32(ebp + (-0x80)); /* 0x100C0E9D: mov ecx, dword ptr [ebp - 0x80] */
    if (11u) _cf = (((eax) >> 10) & 1u); /* 0x100C0EA0: shr eax, 0xb */
    if (11u) { _flag_a = recomp_flags_pack((eax >> 11u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax >> 11u; /* 0x100C0EA0: shr eax, 0xb */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(7);
    eax = eax & 7; /* 0x100C0EA3: and eax, 7 */
    _cf = 0;
    _flag_k = FK_TEST;
    if (3u) _cf = (((edi) >> 29) & 1u); /* 0x100C0EA6: shl edi, 3 */
    if (3u) { _flag_a = recomp_flags_pack((edi << 3u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    edi = edi << 3u; /* 0x100C0EA6: shl edi, 3 */
    _flag_a = (uint32_t)((edi | eax)); _flag_b = (uint32_t)((edi | eax));
    edi = edi | eax; /* 0x100C0EA9: or edi, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0xA0)) = edi; /* 0x100C0EAB: mov dword ptr [ebp - 0xa0], edi */
    eax = MEM32(edi * 4 + 0x100E1A90); /* 0x100C0EB1: mov eax, dword ptr [edi*4 + 0x100e1a90] */
    MEM32(ebp + (-0x8C)) = eax; /* 0x100C0EB8: mov dword ptr [ebp - 0x8c], eax */
    if (5u) _cf = (((eax) >> 27) & 1u); /* 0x100C0EBE: shl eax, 5 */
    if (5u) { _flag_a = recomp_flags_pack((eax << 5u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax << 5u; /* 0x100C0EBE: shl eax, 5 */
    _flag_a = (uint32_t)((eax ^ ecx)); _flag_b = (uint32_t)((eax ^ ecx));
    eax = eax ^ ecx; /* 0x100C0EC1: xor eax, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x0001FFE0u);
    eax = eax & 0x0001FFE0u; /* 0x100C0EC3: and eax, 0x1ffe0 */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)((ecx ^ eax)); _flag_b = (uint32_t)((ecx ^ eax));
    ecx = ecx ^ eax; /* 0x100C0EC8: xor ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    eax = MEM32(ebp + (-0x8C)); /* 0x100C0ECA: mov eax, dword ptr [ebp - 0x8c] */
    if (2u) _cf = (((eax) >> 30) & 1u); /* 0x100C0ED0: shl eax, 2 */
    if (2u) { _flag_a = recomp_flags_pack((eax << 2u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax << 2u; /* 0x100C0ED0: shl eax, 2 */
    if (29u) _cf = (((eax) >> 28) & 1u); /* 0x100C0ED3: sar eax, 0x1d */
    if (29u) { _flag_a = recomp_flags_pack(((uint32_t)((int32_t)eax >> 29u)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = (uint32_t)((int32_t)eax >> 29u);
    MEM32(ebp + (-0x80)) = ecx; /* 0x100C0ED6: mov dword ptr [ebp - 0x80], ecx */
    edi = MEM32(esi + 0x4); /* 0x100C0ED9: mov edi, dword ptr [esi + 4] */
    MEM32(ebp + (-0xA4)) = eax; /* 0x100C0EDC: mov dword ptr [ebp - 0xa4], eax */
    MEM32(ebp + (-0x90)) = eax; /* 0x100C0EE2: mov dword ptr [ebp - 0x90], eax */
    eax = MEM32(esi); /* 0x100C0EE8: mov eax, dword ptr [esi] */
    MEM32(ebp + (-0x94)) = edi; /* 0x100C0EEA: mov dword ptr [ebp - 0x94], edi */
    edi = 0xC00u; /* 0x100C0EF0: mov edi, 0xc00 */
    MEM32(ebp + (-0x88)) = eax; /* 0x100C0EF5: mov dword ptr [ebp - 0x88], eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edi);
    eax = eax & edi; /* 0x100C0EFB: and eax, edi */
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_100C0F26; /* 0x100C0EFD: je 0x100c0f26 */
L_100C0EFF:
    /* cmp eax, 0x400u */ /* 0x100C0EFF: cmp eax, 0x400 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x400u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_100C0F1E; /* 0x100C0F04: je 0x100c0f1e */
L_100C0F06:
    /* cmp eax, 0x800u */ /* 0x100C0F06: cmp eax, 0x800 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x800u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_100C0F16; /* 0x100C0F0B: je 0x100c0f16 */
L_100C0F0D:
    /* cmp eax, edi */ /* 0x100C0F0D: cmp eax, edi */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_100C0F2C; /* 0x100C0F0F: jne 0x100c0f2c */
L_100C0F11:
    _flag_a = (uint32_t)((ecx | 3)); _flag_b = (uint32_t)((ecx | 3));
    ecx = ecx | 3; /* 0x100C0F11: or ecx, 3 */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_100C0F29; /* 0x100C0F14: jmp 0x100c0f29 */
L_100C0F16:
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0xFFFFFFFEu);
    ecx = ecx & 0xFFFFFFFEu; /* 0x100C0F16: and ecx, 0xfffffffe */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)((ecx | 2)); _flag_b = (uint32_t)((ecx | 2));
    ecx = ecx | 2; /* 0x100C0F19: or ecx, 2 */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_100C0F29; /* 0x100C0F1C: jmp 0x100c0f29 */
L_100C0F1E:
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0xFFFFFFFDu);
    ecx = ecx & 0xFFFFFFFDu; /* 0x100C0F1E: and ecx, 0xfffffffd */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)((ecx | 1)); _flag_b = (uint32_t)((ecx | 1));
    ecx = ecx | 1; /* 0x100C0F21: or ecx, 1 */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_100C0F29; /* 0x100C0F24: jmp 0x100c0f29 */
L_100C0F26:
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0xFFFFFFFCu);
    ecx = ecx & 0xFFFFFFFCu; /* 0x100C0F26: and ecx, 0xfffffffc */
    _cf = 0;
    _flag_k = FK_TEST;
L_100C0F29:
    MEM32(ebp + (-0x80)) = ecx; /* 0x100C0F29: mov dword ptr [ebp - 0x80], ecx */
L_100C0F2C:
    eax = MEM32(ebp + (-0x88)); /* 0x100C0F2C: mov eax, dword ptr [ebp - 0x88] */
    PUSH32(esp, 8); /* 0x100C0F32: push 8 */
    edi = POP32_VAL(esp); /* 0x100C0F34: pop edi */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x300u);
    eax = eax & 0x300u; /* 0x100C0F35: and eax, 0x300 */
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_100C0F57; /* 0x100C0F3A: je 0x100c0f57 */
L_100C0F3C:
    /* cmp eax, 0x200u */ /* 0x100C0F3C: cmp eax, 0x200 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x200u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_100C0F4F; /* 0x100C0F41: je 0x100c0f4f */
L_100C0F43:
    /* cmp eax, 0x300u */ /* 0x100C0F43: cmp eax, 0x300 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x300u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_100C0F5F; /* 0x100C0F48: jne 0x100c0f5f */
L_100C0F4A:
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0xFFFFFFE3u);
    ecx = ecx & 0xFFFFFFE3u; /* 0x100C0F4A: and ecx, 0xffffffe3 */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_100C0F5C; /* 0x100C0F4D: jmp 0x100c0f5c */
L_100C0F4F:
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0xFFFFFFE7u);
    ecx = ecx & 0xFFFFFFE7u; /* 0x100C0F4F: and ecx, 0xffffffe7 */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)((ecx | 4)); _flag_b = (uint32_t)((ecx | 4));
    ecx = ecx | 4; /* 0x100C0F52: or ecx, 4 */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_100C0F5C; /* 0x100C0F55: jmp 0x100c0f5c */
L_100C0F57:
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0xFFFFFFEBu);
    ecx = ecx & 0xFFFFFFEBu; /* 0x100C0F57: and ecx, 0xffffffeb */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)((ecx | edi)); _flag_b = (uint32_t)((ecx | edi));
    ecx = ecx | edi; /* 0x100C0F5A: or ecx, edi */
    _cf = 0;
    _flag_k = FK_TEST;
L_100C0F5C:
    MEM32(ebp + (-0x80)) = ecx; /* 0x100C0F5C: mov dword ptr [ebp - 0x80], ecx */
L_100C0F5F:
    eax = MEM32(ebp + (-0x88)); /* 0x100C0F5F: mov eax, dword ptr [ebp - 0x88] */
    ecx = eax; /* 0x100C0F65: mov ecx, eax */
    if (5u) _cf = (((eax) >> 4) & 1u); /* 0x100C0F67: shr eax, 5 */
    if (5u) { _flag_a = recomp_flags_pack((eax >> 5u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax >> 5u; /* 0x100C0F67: shr eax, 5 */
    eax = ~eax; /* 0x100C0F6A: not eax */
    if (4u) _cf = (((ecx) >> 28) & 1u); /* 0x100C0F6C: shl ecx, 4 */
    if (4u) { _flag_a = recomp_flags_pack((ecx << 4u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ecx = ecx << 4u; /* 0x100C0F6C: shl ecx, 4 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax & 1; /* 0x100C0F6F: and eax, 1 */
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = ~ecx; /* 0x100C0F72: not ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x10u);
    ecx = ecx & 0x10u; /* 0x100C0F74: and ecx, 0x10 */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)((ecx | eax)); _flag_b = (uint32_t)((ecx | eax));
    ecx = ecx | eax; /* 0x100C0F77: or ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    eax = MEM32(ebp + (-0x88)); /* 0x100C0F79: mov eax, dword ptr [ebp - 0x88] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + eax; /* 0x100C0F7F: add eax, eax */
    _flag_k = FK_ADD;
    eax = ~eax; /* 0x100C0F81: not eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edi);
    eax = eax & edi; /* 0x100C0F83: and eax, edi */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)((ecx | eax)); _flag_b = (uint32_t)((ecx | eax));
    ecx = ecx | eax; /* 0x100C0F85: or ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    eax = MEM32(ebp + (-0x88)); /* 0x100C0F87: mov eax, dword ptr [ebp - 0x88] */
    if (1u) _cf = (((eax) >> 0) & 1u); /* 0x100C0F8D: shr eax, 1 */
    if (1u) { _flag_a = recomp_flags_pack((eax >> 1u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax >> 1u; /* 0x100C0F8D: shr eax, 1 */
    eax = ~eax; /* 0x100C0F8F: not eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(4);
    eax = eax & 4; /* 0x100C0F91: and eax, 4 */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)((ecx | eax)); _flag_b = (uint32_t)((ecx | eax));
    ecx = ecx | eax; /* 0x100C0F94: or ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    eax = MEM32(ebp + (-0x88)); /* 0x100C0F96: mov eax, dword ptr [ebp - 0x88] */
    if (3u) _cf = (((eax) >> 2) & 1u); /* 0x100C0F9C: shr eax, 3 */
    if (3u) { _flag_a = recomp_flags_pack((eax >> 3u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax >> 3u; /* 0x100C0F9C: shr eax, 3 */
    eax = ~eax; /* 0x100C0F9F: not eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(2);
    eax = eax & 2; /* 0x100C0FA1: and eax, 2 */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)((ecx | eax)); _flag_b = (uint32_t)((ecx | eax));
    ecx = ecx | eax; /* 0x100C0FA4: or ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    eax = MEM32(ebp + (-0x78)); /* 0x100C0FA6: mov eax, dword ptr [ebp - 0x78] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xFFFFFFE0u);
    eax = eax & 0xFFFFFFE0u; /* 0x100C0FA9: and eax, 0xffffffe0 */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)((ecx | eax)); _flag_b = (uint32_t)((ecx | eax));
    ecx = ecx | eax; /* 0x100C0FAC: or ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    eax = MEM32(ebp + (-0x94)); /* 0x100C0FAE: mov eax, dword ptr [ebp - 0x94] */
    MEM32(ebp + (-0x78)) = ecx; /* 0x100C0FB4: mov dword ptr [ebp - 0x78], ecx */
    ecx = eax; /* 0x100C0FB7: mov ecx, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x10u);
    eax = eax & 0x10u; /* 0x100C0FB9: and eax, 0x10 */
    _cf = 0;
    _flag_k = FK_TEST;
    if (2u) _cf = (((ecx) >> 1) & 1u); /* 0x100C0FBC: shr ecx, 2 */
    if (2u) { _flag_a = recomp_flags_pack((ecx >> 2u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ecx = ecx >> 2u; /* 0x100C0FBC: shr ecx, 2 */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(edi);
    ecx = ecx & edi; /* 0x100C0FBF: and ecx, edi */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)((ecx | eax)); _flag_b = (uint32_t)((ecx | eax));
    ecx = ecx | eax; /* 0x100C0FC1: or ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    eax = MEM32(ebp + (-0x94)); /* 0x100C0FC3: mov eax, dword ptr [ebp - 0x94] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edi);
    eax = eax & edi; /* 0x100C0FC9: and eax, edi */
    _cf = 0;
    _flag_k = FK_TEST;
    if (2u) _cf = (((ecx) >> 1) & 1u); /* 0x100C0FCB: shr ecx, 2 */
    if (2u) { _flag_a = recomp_flags_pack((ecx >> 2u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ecx = ecx >> 2u; /* 0x100C0FCB: shr ecx, 2 */
    edi = MEM32(ebp + (-0x94)); /* 0x100C0FCE: mov edi, dword ptr [ebp - 0x94] */
    _flag_a = (uint32_t)((ecx | eax)); _flag_b = (uint32_t)((ecx | eax));
    ecx = ecx | eax; /* 0x100C0FD4: or ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    eax = MEM32(ebp + (-0x94)); /* 0x100C0FD6: mov eax, dword ptr [ebp - 0x94] */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(4);
    edi = edi & 4; /* 0x100C0FDC: and edi, 4 */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax & 1; /* 0x100C0FDF: and eax, 1 */
    _cf = 0;
    _flag_k = FK_TEST;
    if (1u) _cf = (((ecx) >> 0) & 1u); /* 0x100C0FE2: shr ecx, 1 */
    if (1u) { _flag_a = recomp_flags_pack((ecx >> 1u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ecx = ecx >> 1u; /* 0x100C0FE2: shr ecx, 1 */
    if (3u) _cf = (((eax) >> 29) & 1u); /* 0x100C0FE4: shl eax, 3 */
    if (3u) { _flag_a = recomp_flags_pack((eax << 3u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax << 3u; /* 0x100C0FE4: shl eax, 3 */
    _flag_a = (uint32_t)((eax | edi)); _flag_b = (uint32_t)((eax | edi));
    eax = eax | edi; /* 0x100C0FE7: or eax, edi */
    _cf = 0;
    _flag_k = FK_TEST;
    edi = MEM32(ebp + (-0xA0)); /* 0x100C0FE9: mov edi, dword ptr [ebp - 0xa0] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + eax; /* 0x100C0FEF: add eax, eax */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)((ecx | eax)); _flag_b = (uint32_t)((ecx | eax));
    ecx = ecx | eax; /* 0x100C0FF1: or ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    eax = MEM32(ebp + (-0x74)); /* 0x100C0FF3: mov eax, dword ptr [ebp - 0x74] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xFFFFFFE0u);
    eax = eax & 0xFFFFFFE0u; /* 0x100C0FF6: and eax, 0xffffffe0 */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)((ecx | eax)); _flag_b = (uint32_t)((ecx | eax));
    ecx = ecx | eax; /* 0x100C0FF9: or ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    /* test MEM8(ebp + (-0x78)), 1 */ /* 0x100C0FFB: test byte ptr [ebp - 0x78], 1 */
    _flag_a = (uint32_t)(MEM8(ebp + (-0x78))) << 24; _flag_b = (uint32_t)(1) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    MEM32(ebp + (-0x74)) = ecx; /* 0x100C0FFF: mov dword ptr [ebp - 0x74], ecx */
    if (TEST_Z(_flag_a, _flag_b)) goto L_100C100E; /* 0x100C1002: je 0x100c100e */
L_100C1004:
    /* test LO8(ecx), 1 */ /* 0x100C1004: test cl, 1 */
    _flag_a = (uint32_t)(LO8(ecx)) << 24; _flag_b = (uint32_t)(1) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_100C100E; /* 0x100C1007: je 0x100c100e */
L_100C1009:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x100C1009: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x100C100B: inc eax */
    _flag_k = FK_INC;
    goto L_100C1010; /* 0x100C100C: jmp 0x100c1010 */
L_100C100E:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x100C100E: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
L_100C1010:
    ecx = MEM32(ebp + (-0x7C)); /* 0x100C1010: mov ecx, dword ptr [ebp - 0x7c] */
    _flag_a = (uint32_t)((eax ^ ecx)); _flag_b = (uint32_t)((eax ^ ecx));
    eax = eax ^ ecx; /* 0x100C1013: xor eax, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax & 1; /* 0x100C1015: and eax, 1 */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)((ecx ^ eax)); _flag_b = (uint32_t)((ecx ^ eax));
    ecx = ecx ^ eax; /* 0x100C1018: xor ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    /* test MEM8(ebp + (-0x78)), 2 */ /* 0x100C101A: test byte ptr [ebp - 0x78], 2 */
    _flag_a = (uint32_t)(MEM8(ebp + (-0x78))) << 24; _flag_b = (uint32_t)(2) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_100C102B; /* 0x100C101E: je 0x100c102b */
L_100C1020:
    /* test MEM8(ebp + (-0x74)), 2 */ /* 0x100C1020: test byte ptr [ebp - 0x74], 2 */
    _flag_a = (uint32_t)(MEM8(ebp + (-0x74))) << 24; _flag_b = (uint32_t)(2) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_100C102B; /* 0x100C1024: je 0x100c102b */
L_100C1026:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x100C1026: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x100C1028: inc eax */
    _flag_k = FK_INC;
    goto L_100C102D; /* 0x100C1029: jmp 0x100c102d */
L_100C102B:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x100C102B: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
L_100C102D:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + eax; /* 0x100C102D: add eax, eax */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)((eax ^ ecx)); _flag_b = (uint32_t)((eax ^ ecx));
    eax = eax ^ ecx; /* 0x100C102F: xor eax, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(2);
    eax = eax & 2; /* 0x100C1031: and eax, 2 */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)((ecx ^ eax)); _flag_b = (uint32_t)((ecx ^ eax));
    ecx = ecx ^ eax; /* 0x100C1034: xor ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    /* test MEM8(ebp + (-0x78)), 4 */ /* 0x100C1036: test byte ptr [ebp - 0x78], 4 */
    _flag_a = (uint32_t)(MEM8(ebp + (-0x78))) << 24; _flag_b = (uint32_t)(4) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_100C1047; /* 0x100C103A: je 0x100c1047 */
L_100C103C:
    /* test MEM8(ebp + (-0x74)), 4 */ /* 0x100C103C: test byte ptr [ebp - 0x74], 4 */
    _flag_a = (uint32_t)(MEM8(ebp + (-0x74))) << 24; _flag_b = (uint32_t)(4) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_100C1047; /* 0x100C1040: je 0x100c1047 */
L_100C1042:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x100C1042: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x100C1044: inc eax */
    _flag_k = FK_INC;
    goto L_100C1049; /* 0x100C1045: jmp 0x100c1049 */
L_100C1047:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x100C1047: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
L_100C1049:
    if (2u) _cf = (((eax) >> 30) & 1u); /* 0x100C1049: shl eax, 2 */
    if (2u) { _flag_a = recomp_flags_pack((eax << 2u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax << 2u; /* 0x100C1049: shl eax, 2 */
    _flag_a = (uint32_t)((eax ^ ecx)); _flag_b = (uint32_t)((eax ^ ecx));
    eax = eax ^ ecx; /* 0x100C104C: xor eax, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(4);
    eax = eax & 4; /* 0x100C104E: and eax, 4 */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)((ecx ^ eax)); _flag_b = (uint32_t)((ecx ^ eax));
    ecx = ecx ^ eax; /* 0x100C1051: xor ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    /* test MEM8(ebp + (-0x78)), 8 */ /* 0x100C1053: test byte ptr [ebp - 0x78], 8 */
    _flag_a = (uint32_t)(MEM8(ebp + (-0x78))) << 24; _flag_b = (uint32_t)(8) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_100C1064; /* 0x100C1057: je 0x100c1064 */
L_100C1059:
    /* test MEM8(ebp + (-0x74)), 8 */ /* 0x100C1059: test byte ptr [ebp - 0x74], 8 */
    _flag_a = (uint32_t)(MEM8(ebp + (-0x74))) << 24; _flag_b = (uint32_t)(8) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_100C1064; /* 0x100C105D: je 0x100c1064 */
L_100C105F:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x100C105F: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x100C1061: inc eax */
    _flag_k = FK_INC;
    goto L_100C1066; /* 0x100C1062: jmp 0x100c1066 */
L_100C1064:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x100C1064: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
L_100C1066:
    if (3u) _cf = (((eax) >> 29) & 1u); /* 0x100C1066: shl eax, 3 */
    if (3u) { _flag_a = recomp_flags_pack((eax << 3u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax << 3u; /* 0x100C1066: shl eax, 3 */
    _flag_a = (uint32_t)((eax ^ ecx)); _flag_b = (uint32_t)((eax ^ ecx));
    eax = eax ^ ecx; /* 0x100C1069: xor eax, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(8);
    eax = eax & 8; /* 0x100C106B: and eax, 8 */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)((ecx ^ eax)); _flag_b = (uint32_t)((ecx ^ eax));
    ecx = ecx ^ eax; /* 0x100C106E: xor ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    /* test MEM8(ebp + (-0x78)), 0x10u */ /* 0x100C1070: test byte ptr [ebp - 0x78], 0x10 */
    _flag_a = (uint32_t)(MEM8(ebp + (-0x78))) << 24; _flag_b = (uint32_t)(0x10u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_100C1081; /* 0x100C1074: je 0x100c1081 */
L_100C1076:
    /* test MEM8(ebp + (-0x74)), 0x10u */ /* 0x100C1076: test byte ptr [ebp - 0x74], 0x10 */
    _flag_a = (uint32_t)(MEM8(ebp + (-0x74))) << 24; _flag_b = (uint32_t)(0x10u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_100C1081; /* 0x100C107A: je 0x100c1081 */
L_100C107C:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x100C107C: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x100C107E: inc eax */
    _flag_k = FK_INC;
    goto L_100C1083; /* 0x100C107F: jmp 0x100c1083 */
L_100C1081:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x100C1081: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
L_100C1083:
    if (4u) _cf = (((eax) >> 28) & 1u); /* 0x100C1083: shl eax, 4 */
    if (4u) { _flag_a = recomp_flags_pack((eax << 4u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax << 4u; /* 0x100C1083: shl eax, 4 */
    _flag_a = (uint32_t)((eax ^ ecx)); _flag_b = (uint32_t)((eax ^ ecx));
    eax = eax ^ ecx; /* 0x100C1086: xor eax, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x10u);
    eax = eax & 0x10u; /* 0x100C1088: and eax, 0x10 */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)((ecx ^ eax)); _flag_b = (uint32_t)((ecx ^ eax));
    ecx = ecx ^ eax; /* 0x100C108B: xor ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    eax = 0x100E1C90u; /* 0x100C108D: mov eax, 0x100e1c90 */
    MEM32(ebp + (-0x7C)) = ecx; /* 0x100C1092: mov dword ptr [ebp - 0x7c], ecx */
L_100C1095:
    /* cmp MEM32(eax), edi */ /* 0x100C1095: cmp dword ptr [eax], edi */
    _flag_a = (uint32_t)(MEM32(eax)); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_100C10AE; /* 0x100C1097: jne 0x100c10ae */
L_100C1099:
    /* test LO8(ecx), 0x10u */ /* 0x100C1099: test cl, 0x10 */
    _flag_a = (uint32_t)(LO8(ecx)) << 24; _flag_b = (uint32_t)(0x10u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_100C10AE; /* 0x100C109C: jne 0x100c10ae */
L_100C109E:
    /* cmp MEM32(ebp + (-0x90)), 0 */ /* 0x100C109E: cmp dword ptr [ebp - 0x90], 0 */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x90))); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_GE(_flag_a, _flag_b)) goto L_100C10AE; /* 0x100C10A5: jge 0x100c10ae */
L_100C10A7:
    _flag_a = (uint32_t)(MEM32(ebp + (-0x90))); _flag_b = (uint32_t)(0);
    MEM32(ebp + (-0x90)) = MEM32(ebp + (-0x90)) & 0; /* 0x100C10A7: and dword ptr [ebp - 0x90], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
L_100C10AE:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 4; /* 0x100C10AE: add eax, 4 */
    _flag_k = FK_ADD;
    /* cmp eax, 0x100E1CA0u */ /* 0x100C10B1: cmp eax, 0x100e1ca0 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x100E1CA0u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_L(_flag_a, _flag_b)) goto L_100C1095; /* 0x100C10B6: jl 0x100c1095 */
L_100C10B8:
    edi = MEM32(ebp + (-0x8C)); /* 0x100C10B8: mov edi, dword ptr [ebp - 0x8c] */
    ecx = edi; /* 0x100C10BE: mov ecx, edi */
    eax = MEM32(ebp + (-0x84)); /* 0x100C10C0: mov eax, dword ptr [ebp - 0x84] */
    if (12u) _cf = (((ecx) >> 11) & 1u); /* 0x100C10C6: shr ecx, 0xc */
    if (12u) { _flag_a = recomp_flags_pack((ecx >> 12u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ecx = ecx >> 12u; /* 0x100C10C6: shr ecx, 0xc */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x1Fu);
    ecx = ecx & 0x1Fu; /* 0x100C10C9: and ecx, 0x1f */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp ecx, 8 */ /* 0x100C10CC: cmp ecx, 8 */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_100C10D9; /* 0x100C10CF: jne 0x100c10d9 */
L_100C10D1:
    ecx = eax; /* 0x100C10D1: mov ecx, eax */
    if (8u) _cf = (((ecx) >> 7) & 1u); /* 0x100C10D3: shr ecx, 8 */
    if (8u) { _flag_a = recomp_flags_pack((ecx >> 8u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ecx = ecx >> 8u; /* 0x100C10D3: shr ecx, 8 */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(7);
    ecx = ecx & 7; /* 0x100C10D6: and ecx, 7 */
    _cf = 0;
    _flag_k = FK_TEST;
L_100C10D9:
    if (17u) _cf = (((edi) >> 16) & 1u); /* 0x100C10D9: shr edi, 0x11 */
    if (17u) { _flag_a = recomp_flags_pack((edi >> 17u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    edi = edi >> 17u; /* 0x100C10D9: shr edi, 0x11 */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(0x1Fu);
    edi = edi & 0x1Fu; /* 0x100C10DC: and edi, 0x1f */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp edi, 8 */ /* 0x100C10DF: cmp edi, 8 */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_100C10EC; /* 0x100C10E2: jne 0x100c10ec */
L_100C10E4:
    edi = eax; /* 0x100C10E4: mov edi, eax */
    if (8u) _cf = (((edi) >> 7) & 1u); /* 0x100C10E6: shr edi, 8 */
    if (8u) { _flag_a = recomp_flags_pack((edi >> 8u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    edi = edi >> 8u; /* 0x100C10E6: shr edi, 8 */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(7);
    edi = edi & 7; /* 0x100C10E9: and edi, 7 */
    _cf = 0;
    _flag_k = FK_TEST;
L_100C10EC:
    if (22u) _cf = (((MEM32(ebp + (-0x8C))) >> 21) & 1u); /* 0x100C10EC: shr dword ptr [ebp - 0x8c], 0x16 */
    if (22u) { _flag_a = recomp_flags_pack((MEM32(ebp + (-0x8C)) >> 22u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    MEM32(ebp + (-0x8C)) = MEM32(ebp + (-0x8C)) >> 22u; /* 0x100C10EC: shr dword ptr [ebp - 0x8c], 0x16 */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x8C))); _flag_b = (uint32_t)(0x1Fu);
    MEM32(ebp + (-0x8C)) = MEM32(ebp + (-0x8C)) & 0x1Fu; /* 0x100C10F3: and dword ptr [ebp - 0x8c], 0x1f */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp MEM32(ebp + (-0x8C)), 8 */ /* 0x100C10FA: cmp dword ptr [ebp - 0x8c], 8 */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x8C))); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_100C1117; /* 0x100C1101: jne 0x100c1117 */
L_100C1103:
    if (8u) _cf = (((eax) >> 7) & 1u); /* 0x100C1103: shr eax, 8 */
    if (8u) { _flag_a = recomp_flags_pack((eax >> 8u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax >> 8u; /* 0x100C1103: shr eax, 8 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(7);
    eax = eax & 7; /* 0x100C1106: and eax, 7 */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x88)) = eax; /* 0x100C1109: mov dword ptr [ebp - 0x88], eax */
    eax = MEM32(ebp + (-0x8C)); /* 0x100C110F: mov eax, dword ptr [ebp - 0x8c] */
    goto L_100C1123; /* 0x100C1115: jmp 0x100c1123 */
L_100C1117:
    eax = MEM32(ebp + (-0x8C)); /* 0x100C1117: mov eax, dword ptr [ebp - 0x8c] */
    MEM32(ebp + (-0x88)) = eax; /* 0x100C111D: mov dword ptr [ebp - 0x88], eax */
L_100C1123:
    /* cmp edx, 0xC000008Eu */ /* 0x100C1123: cmp edx, 0xc000008e */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(0xC000008Eu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_100C1327; /* 0x100C1129: je 0x100c1327 */
L_100C112F:
    /* cmp edx, 0xC000008Fu */ /* 0x100C112F: cmp edx, 0xc000008f */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(0xC000008Fu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_100C1275; /* 0x100C1135: je 0x100c1275 */
L_100C113B:
    /* cmp edx, 0xC0000090u */ /* 0x100C113B: cmp edx, 0xc0000090 */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(0xC0000090u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_100C1327; /* 0x100C1141: je 0x100c1327 */
L_100C1147:
    /* cmp edx, 0xC0000091u */ /* 0x100C1147: cmp edx, 0xc0000091 */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(0xC0000091u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_100C1162; /* 0x100C114D: je 0x100c1162 */
L_100C114F:
    /* cmp edx, 0xC0000093u */ /* 0x100C114F: cmp edx, 0xc0000093 */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(0xC0000093u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_100C1162; /* 0x100C1155: je 0x100c1162 */
L_100C1157:
    edi = MEM32(ebp + (-0x90)); /* 0x100C1157: mov edi, dword ptr [ebp - 0x90] */
    goto L_100C139C; /* 0x100C115D: jmp 0x100c139c */
L_100C1162:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xFFFFFFF6u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 0xFFFFFFF6u; /* 0x100C1162: add eax, -0xa */
    _flag_k = FK_ADD;
    /* cmp eax, 6 */ /* 0x100C1165: cmp eax, 6 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(6);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_A(_flag_a, _flag_b)) goto L_100C1275; /* 0x100C1168: ja 0x100c1275 */
L_100C116E:
    PUSH32(esp, ecx); /* 0x100C116E: push ecx */
    eax = ebp + (-0x70); /* 0x100C116F: lea eax, [ebp - 0x70] */
    PUSH32(esp, esi); /* 0x100C1172: push esi */
    PUSH32(esp, eax); /* 0x100C1173: push eax */
    RECOMP_CALL(sub_100C09FC); /* 0x100C1174: call 0x100c09fc */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0); /* 0x100C1179: push 0 */
    eax = ebp + (-0xC8); /* 0x100C117B: lea eax, [ebp - 0xc8] */
    PUSH32(esp, esi); /* 0x100C1181: push esi */
    PUSH32(esp, eax); /* 0x100C1182: push eax */
    RECOMP_CALL(sub_100C0B8E); /* 0x100C1183: call 0x100c0b8e */
    RECOMP_FLAGS_IN();
    esi = eax; /* 0x100C1188: mov esi, eax */
    edi = ebp + (-0xB4); /* 0x100C118A: lea edi, [ebp - 0xb4] */
    eax = MEM32(ebp + (-0x20)); /* 0x100C1190: mov eax, dword ptr [ebp - 0x20] */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x18u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x18u; /* 0x100C1193: add esp, 0x18 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)((eax | 1)); _flag_b = (uint32_t)((eax | 1));
    eax = eax | 1; /* 0x100C1196: or eax, 1 */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x100C1199: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x100C119A: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM16(edi) = MEM16(esi); esi += _df * 2; edi += _df * 2; /* 0x100C119B: movsw word ptr es:[edi], word ptr [esi] */
    esi = MEM32(ebp + (-0x88)); /* 0x100C119D: mov esi, dword ptr [ebp - 0x88] */
    /* cmp esi, 0xDu */ /* 0x100C11A3: cmp esi, 0xd */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(0xDu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_100C11B5; /* 0x100C11A6: jne 0x100c11b5 */
L_100C11A8:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xFFFFFFE1u);
    eax = eax & 0xFFFFFFE1u; /* 0x100C11A8: and eax, 0xffffffe1 */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x20)) = eax; /* 0x100C11AB: mov dword ptr [ebp - 0x20], eax */
    eax = 0xC0u; /* 0x100C11AE: mov eax, 0xc0 */
    goto L_100C11C3; /* 0x100C11B3: jmp 0x100c11c3 */
L_100C11B5:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xFFFFFFE3u);
    eax = eax & 0xFFFFFFE3u; /* 0x100C11B5: and eax, 0xffffffe3 */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)((eax | 2)); _flag_b = (uint32_t)((eax | 2));
    eax = eax | 2; /* 0x100C11B8: or eax, 2 */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x20)) = eax; /* 0x100C11BB: mov dword ptr [ebp - 0x20], eax */
    eax = 0x600u; /* 0x100C11BE: mov eax, 0x600 */
L_100C11C3:
    /* cmp MEM32(ebx + 0x8), 0xC0000091u */ /* 0x100C11C3: cmp dword ptr [ebx + 8], 0xc0000091 */
    _flag_a = (uint32_t)(MEM32(ebx + 0x8)); _flag_b = (uint32_t)(0xC0000091u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    MEM32(ebp + (-0x84)) = eax; /* 0x100C11CA: mov dword ptr [ebp - 0x84], eax */
    if (CMP_NE(_flag_a, _flag_b)) goto L_100C11DA; /* 0x100C11D0: jne 0x100c11da */
L_100C11D2:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(eax);
    _cf = (eax) != 0;
    eax = (uint32_t)(-(int32_t)eax); /* 0x100C11D2: neg eax */
    _flag_k = FK_CMP;
    MEM32(ebp + (-0x84)) = eax; /* 0x100C11D4: mov dword ptr [ebp - 0x84], eax */
L_100C11DA:
    fp_push((double)(int32_t)MEM32(ebp + (-0x84))); /* 0x100C11DA: fild dword ptr [ebp - 0x84] */
    fp_push(fp_ld80((const uint8_t*)ADDR(ebp + (-0xB4)))); /* 0x100C11E0: fld xword ptr [ebp - 0xb4] */
    _st[0] *= pow(2.0, (double)(int)_st[1]); /* 0x100C11E6: fscale  */
    { _st[1] = _st[0]; g_st_i64[1] = g_st_i64[0]; fp_pop(); } /* 0x100C11E8: fstp st(1) */
    fp_st80((uint8_t*)ADDR(ebp + (-0xB4)), fp_pop()); /* 0x100C11EA: fstp xword ptr [ebp - 0xb4] */
    /* cmp esi, 0xDu */ /* 0x100C11F0: cmp esi, 0xd */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(0xDu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_100C120C; /* 0x100C11F3: jne 0x100c120c */
L_100C11F5:
    fp_push(fp_ld80((const uint8_t*)ADDR(ebp + (-0xB4)))); /* 0x100C11F5: fld xword ptr [ebp - 0xb4] */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x90)) = _v; } /* 0x100C11FB: fstp dword ptr [ebp - 0x90] */
    fp_push(*(float*)&MEM32(ebp + (-0x90))); /* 0x100C1201: fld dword ptr [ebp - 0x90] */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x30)) = _v; } /* 0x100C1207: fstp dword ptr [ebp - 0x30] */
    goto L_100C1221; /* 0x100C120A: jmp 0x100c1221 */
L_100C120C:
    fp_push(fp_ld80((const uint8_t*)ADDR(ebp + (-0xB4)))); /* 0x100C120C: fld xword ptr [ebp - 0xb4] */
    { double _v = fp_pop(); *(double*)ADDR(ebp + (-0xA8)) = _v; } /* 0x100C1212: fstp qword ptr [ebp - 0xa8] */
    fp_push(*(double*)ADDR(ebp + (-0xA8))); /* 0x100C1218: fld qword ptr [ebp - 0xa8] */
    { double _v = fp_pop(); *(double*)ADDR(ebp + (-0x30)) = _v; } /* 0x100C121E: fstp qword ptr [ebp - 0x30] */
L_100C1221:
    { extern void void_fpu_clear_exceptions(uint32_t); void_fpu_clear_exceptions(0x100C1221u); } /* 0x100C1221: fnclex  */
    eax = ebp + (-0x80); /* 0x100C1223: lea eax, [ebp - 0x80] */
    PUSH32(esp, eax); /* 0x100C1226: push eax */
    RECOMP_ICALL(MEM32(ebp + (-0x9C))); /* 0x100C1227: call dword ptr [ebp - 0x9c] */
    RECOMP_FLAGS_IN();
    edi = eax; /* 0x100C122D: mov edi, eax */
    ecx = POP32_VAL(esp); /* 0x100C122F: pop ecx */
    /* cmp edi, 0xFFFFFFFFu */ /* 0x100C1230: cmp edi, -1 */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(0xFFFFFFFFu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_100C1454; /* 0x100C1233: jne 0x100c1454 */
L_100C1239:
    PUSH32(esp, esi); /* 0x100C1239: push esi */
    PUSH32(esp, MEM32(ebp + (-0x98))); /* 0x100C123A: push dword ptr [ebp - 0x98] */
    RECOMP_CALL(sub_100C0BBA); /* 0x100C1240: call 0x100c0bba */
    RECOMP_FLAGS_IN();
    ecx = MEM32(ebp + (-0xA0)); /* 0x100C1245: mov ecx, dword ptr [ebp - 0xa0] */
    esi = MEM32(ebp + (-0x98)); /* 0x100C124B: mov esi, dword ptr [ebp - 0x98] */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(0x1Cu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esi = esi + 0x1Cu; /* 0x100C1251: add esi, 0x1c */
    _flag_k = FK_ADD;
    ecx = MEM32(ecx * 4 + 0x100E1A90); /* 0x100C1254: mov ecx, dword ptr [ecx*4 + 0x100e1a90] */
    if (2u) _cf = (((ecx) >> 30) & 1u); /* 0x100C125B: shl ecx, 2 */
    if (2u) { _flag_a = recomp_flags_pack((ecx << 2u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ecx = ecx << 2u; /* 0x100C125B: shl ecx, 2 */
    if (29u) _cf = (((ecx) >> 28) & 1u); /* 0x100C125E: sar ecx, 0x1d */
    if (29u) { _flag_a = recomp_flags_pack(((uint32_t)((int32_t)ecx >> 29u)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ecx = (uint32_t)((int32_t)ecx >> 29u);
    PUSH32(esp, ecx); /* 0x100C1261: push ecx */
    PUSH32(esp, eax); /* 0x100C1262: push eax */
    eax = ebp + (-0x30); /* 0x100C1263: lea eax, [ebp - 0x30] */
    PUSH32(esp, eax); /* 0x100C1266: push eax */
    PUSH32(esp, esi); /* 0x100C1267: push esi */
    RECOMP_CALL(sub_100C0C5D); /* 0x100C1268: call 0x100c0c5d */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x18u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x18u; /* 0x100C126D: add esp, 0x18 */
    _flag_k = FK_ADD;
    goto L_100C13A5; /* 0x100C1270: jmp 0x100c13a5 */
L_100C1275:
    PUSH32(esp, MEM32(ebp + (-0xA4))); /* 0x100C1275: push dword ptr [ebp - 0xa4] */
    PUSH32(esp, ecx); /* 0x100C127B: push ecx */
    RECOMP_CALL(sub_100C08EE); /* 0x100C127C: call 0x100c08ee */
    RECOMP_FLAGS_IN();
    PUSH32(esp, MEM32(ebp + (-0xA4))); /* 0x100C1281: push dword ptr [ebp - 0xa4] */
    MEM32(ebp + (-0x84)) = eax; /* 0x100C1287: mov dword ptr [ebp - 0x84], eax */
    PUSH32(esp, edi); /* 0x100C128D: push edi */
    RECOMP_CALL(sub_100C08EE); /* 0x100C128E: call 0x100c08ee */
    RECOMP_FLAGS_IN();
    PUSH32(esp, MEM32(ebp + (-0xA4))); /* 0x100C1293: push dword ptr [ebp - 0xa4] */
    edi = eax; /* 0x100C1299: mov edi, eax */
    PUSH32(esp, MEM32(ebp + (-0x88))); /* 0x100C129B: push dword ptr [ebp - 0x88] */
    RECOMP_CALL(sub_100C08EE); /* 0x100C12A1: call 0x100c08ee */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x18u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x18u; /* 0x100C12A6: add esp, 0x18 */
    _flag_k = FK_ADD;
    MEM32(ebp + (-0x90)) = eax; /* 0x100C12A9: mov dword ptr [ebp - 0x90], eax */
    /* cmp MEM32(ebp + (-0x84)), eax */ /* 0x100C12AF: cmp dword ptr [ebp - 0x84], eax */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x84))); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_100C12C1; /* 0x100C12B5: jne 0x100c12c1 */
L_100C12B7:
    MEM32(ebp + (-0x84)) = 0x1Fu; /* 0x100C12B7: mov dword ptr [ebp - 0x84], 0x1f */
L_100C12C1:
    /* cmp edi, eax */ /* 0x100C12C1: cmp edi, eax */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_100C12C8; /* 0x100C12C3: jne 0x100c12c8 */
L_100C12C5:
    PUSH32(esp, 0x1Fu); /* 0x100C12C5: push 0x1f */
    edi = POP32_VAL(esp); /* 0x100C12C7: pop edi */
L_100C12C8:
    PUSH32(esp, eax); /* 0x100C12C8: push eax */
    eax = ebp + (-0x30); /* 0x100C12C9: lea eax, [ebp - 0x30] */
    PUSH32(esp, esi); /* 0x100C12CC: push esi */
    PUSH32(esp, eax); /* 0x100C12CD: push eax */
    RECOMP_CALL(sub_100C09FC); /* 0x100C12CE: call 0x100c09fc */
    RECOMP_FLAGS_IN();
    PUSH32(esp, MEM32(ebp + (-0x84))); /* 0x100C12D3: push dword ptr [ebp - 0x84] */
    eax = ebp + (-0x70); /* 0x100C12D9: lea eax, [ebp - 0x70] */
    PUSH32(esp, esi); /* 0x100C12DC: push esi */
    PUSH32(esp, eax); /* 0x100C12DD: push eax */
    RECOMP_CALL(sub_100C09FC); /* 0x100C12DE: call 0x100c09fc */
    RECOMP_FLAGS_IN();
    PUSH32(esp, edi); /* 0x100C12E3: push edi */
    eax = ebp + (-0x50); /* 0x100C12E4: lea eax, [ebp - 0x50] */
    PUSH32(esp, esi); /* 0x100C12E7: push esi */
    PUSH32(esp, eax); /* 0x100C12E8: push eax */
    RECOMP_CALL(sub_100C09FC); /* 0x100C12E9: call 0x100c09fc */
    RECOMP_FLAGS_IN();
    eax = ebp + (-0x80); /* 0x100C12EE: lea eax, [ebp - 0x80] */
    PUSH32(esp, eax); /* 0x100C12F1: push eax */
    RECOMP_ICALL(MEM32(ebp + (-0x9C))); /* 0x100C12F2: call dword ptr [ebp - 0x9c] */
    RECOMP_FLAGS_IN();
    edi = eax; /* 0x100C12F8: mov edi, eax */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x28u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x28u; /* 0x100C12FA: add esp, 0x28 */
    _flag_k = FK_ADD;
    /* cmp edi, 0xFFFFFFFFu */ /* 0x100C12FD: cmp edi, -1 */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(0xFFFFFFFFu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_100C1454; /* 0x100C1300: jne 0x100c1454 */
L_100C1306:
    PUSH32(esp, MEM32(ebp + (-0x90))); /* 0x100C1306: push dword ptr [ebp - 0x90] */
    PUSH32(esp, MEM32(ebp + (-0x98))); /* 0x100C130C: push dword ptr [ebp - 0x98] */
    RECOMP_CALL(sub_100C0BBA); /* 0x100C1312: call 0x100c0bba */
    RECOMP_FLAGS_IN();
    PUSH32(esp, eax); /* 0x100C1317: push eax */
    eax = ebp + (-0x30); /* 0x100C1318: lea eax, [ebp - 0x30] */
    PUSH32(esp, eax); /* 0x100C131B: push eax */
    PUSH32(esp, esi); /* 0x100C131C: push esi */
    RECOMP_CALL(sub_100C0C96); /* 0x100C131D: call 0x100c0c96 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x14u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x14u; /* 0x100C1322: add esp, 0x14 */
    _flag_k = FK_ADD;
    goto L_100C13A5; /* 0x100C1325: jmp 0x100c13a5 */
L_100C1327:
    PUSH32(esp, ecx); /* 0x100C1327: push ecx */
    eax = ebp + (-0x70); /* 0x100C1328: lea eax, [ebp - 0x70] */
    PUSH32(esp, esi); /* 0x100C132B: push esi */
    PUSH32(esp, eax); /* 0x100C132C: push eax */
    RECOMP_CALL(sub_100C09FC); /* 0x100C132D: call 0x100c09fc */
    RECOMP_FLAGS_IN();
    PUSH32(esp, edi); /* 0x100C1332: push edi */
    eax = ebp + (-0x50); /* 0x100C1333: lea eax, [ebp - 0x50] */
    PUSH32(esp, esi); /* 0x100C1336: push esi */
    PUSH32(esp, eax); /* 0x100C1337: push eax */
    RECOMP_CALL(sub_100C09FC); /* 0x100C1338: call 0x100c09fc */
    RECOMP_FLAGS_IN();
    PUSH32(esp, MEM32(ebp + (-0x88))); /* 0x100C133D: push dword ptr [ebp - 0x88] */
    eax = ebp + (-0x30); /* 0x100C1343: lea eax, [ebp - 0x30] */
    PUSH32(esp, esi); /* 0x100C1346: push esi */
    PUSH32(esp, eax); /* 0x100C1347: push eax */
    RECOMP_CALL(sub_100C09FC); /* 0x100C1348: call 0x100c09fc */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(MEM32(ebp + (-0x20))); _flag_b = (uint32_t)(0xFFFFFFFEu);
    MEM32(ebp + (-0x20)) = MEM32(ebp + (-0x20)) & 0xFFFFFFFEu; /* 0x100C134D: and dword ptr [ebp - 0x20], 0xfffffffe */
    _cf = 0;
    _flag_k = FK_TEST;
    eax = ebp + (-0x80); /* 0x100C1351: lea eax, [ebp - 0x80] */
    PUSH32(esp, eax); /* 0x100C1354: push eax */
    RECOMP_ICALL(MEM32(ebp + (-0x9C))); /* 0x100C1355: call dword ptr [ebp - 0x9c] */
    RECOMP_FLAGS_IN();
    edi = eax; /* 0x100C135B: mov edi, eax */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x28u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x28u; /* 0x100C135D: add esp, 0x28 */
    _flag_k = FK_ADD;
    /* cmp edi, 0xFFFFFFFFu */ /* 0x100C1360: cmp edi, -1 */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(0xFFFFFFFFu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_100C1454; /* 0x100C1363: jne 0x100c1454 */
L_100C1369:
    PUSH32(esp, MEM32(ebp + (-0x88))); /* 0x100C1369: push dword ptr [ebp - 0x88] */
    PUSH32(esp, MEM32(ebp + (-0x98))); /* 0x100C136F: push dword ptr [ebp - 0x98] */
    RECOMP_CALL(sub_100C0BBA); /* 0x100C1375: call 0x100c0bba */
    RECOMP_FLAGS_IN();
    ecx = MEM32(ebp + (-0xA0)); /* 0x100C137A: mov ecx, dword ptr [ebp - 0xa0] */
    ecx = MEM32(ecx * 4 + 0x100E1A90); /* 0x100C1380: mov ecx, dword ptr [ecx*4 + 0x100e1a90] */
    if (2u) _cf = (((ecx) >> 30) & 1u); /* 0x100C1387: shl ecx, 2 */
    if (2u) { _flag_a = recomp_flags_pack((ecx << 2u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ecx = ecx << 2u; /* 0x100C1387: shl ecx, 2 */
    if (29u) _cf = (((ecx) >> 28) & 1u); /* 0x100C138A: sar ecx, 0x1d */
    if (29u) { _flag_a = recomp_flags_pack(((uint32_t)((int32_t)ecx >> 29u)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ecx = (uint32_t)((int32_t)ecx >> 29u);
    PUSH32(esp, ecx); /* 0x100C138D: push ecx */
    PUSH32(esp, eax); /* 0x100C138E: push eax */
    eax = ebp + (-0x30); /* 0x100C138F: lea eax, [ebp - 0x30] */
    PUSH32(esp, eax); /* 0x100C1392: push eax */
    PUSH32(esp, esi); /* 0x100C1393: push esi */
    RECOMP_CALL(sub_100C0C5D); /* 0x100C1394: call 0x100c0c5d */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x18u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x18u; /* 0x100C1399: add esp, 0x18 */
    _flag_k = FK_ADD;
L_100C139C:
    /* cmp edi, 0xFFFFFFFFu */ /* 0x100C139C: cmp edi, -1 */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(0xFFFFFFFFu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_100C1454; /* 0x100C139F: jne 0x100c1454 */
L_100C13A5:
    eax = MEM32(esi); /* 0x100C13A5: mov eax, dword ptr [esi] */
    MEM8(esi + 0x4) = (uint8_t)(0); /* 0x100C13A7: mov byte ptr [esi + 4], 0 */
    ecx = MEM32(ebp + (-0x80)); /* 0x100C13AB: mov ecx, dword ptr [ebp - 0x80] */
    edx = ecx; /* 0x100C13AE: mov edx, ecx */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(3);
    edx = edx & 3; /* 0x100C13B0: and edx, 3 */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    edx = edx - 0; /* 0x100C13B3: sub edx, 0 */
    _flag_k = FK_CMP;
    if (/* sub result */ CMP_EQ(_flag_a, _flag_b)) goto L_100C13E0; /* 0x100C13B6: je 0x100c13e0 */
L_100C13B8:
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(1);
    edx = edx - 1; /* 0x100C13B8: dec edx */
    _flag_k = FK_DEC;
    if (/* dec result */ CMP_EQ(_flag_a, _flag_b)) goto L_100C13D4; /* 0x100C13B9: je 0x100c13d4 */
L_100C13BB:
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(1);
    edx = edx - 1; /* 0x100C13BB: dec edx */
    _flag_k = FK_DEC;
    if (/* dec result */ CMP_EQ(_flag_a, _flag_b)) goto L_100C13C8; /* 0x100C13BC: je 0x100c13c8 */
L_100C13BE:
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(1);
    edx = edx - 1; /* 0x100C13BE: dec edx */
    _flag_k = FK_DEC;
    if (/* dec result */ CMP_NE(_flag_a, _flag_b)) goto L_100C13E5; /* 0x100C13BF: jne 0x100c13e5 */
L_100C13C1:
    _flag_a = (uint32_t)((eax | 0xC00u)); _flag_b = (uint32_t)((eax | 0xC00u));
    eax = eax | 0xC00u; /* 0x100C13C1: or eax, 0xc00 */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_100C13E5; /* 0x100C13C6: jmp 0x100c13e5 */
L_100C13C8:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xFFFFFBFFu);
    eax = eax & 0xFFFFFBFFu; /* 0x100C13C8: and eax, 0xfffffbff */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)((eax | 0x800u)); _flag_b = (uint32_t)((eax | 0x800u));
    eax = eax | 0x800u; /* 0x100C13CD: or eax, 0x800 */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_100C13E5; /* 0x100C13D2: jmp 0x100c13e5 */
L_100C13D4:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xFFFFF7FFu);
    eax = eax & 0xFFFFF7FFu; /* 0x100C13D4: and eax, 0xfffff7ff */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)((eax | 0x400u)); _flag_b = (uint32_t)((eax | 0x400u));
    eax = eax | 0x400u; /* 0x100C13D9: or eax, 0x400 */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_100C13E5; /* 0x100C13DE: jmp 0x100c13e5 */
L_100C13E0:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xFFFFF3FFu);
    eax = eax & 0xFFFFF3FFu; /* 0x100C13E0: and eax, 0xfffff3ff */
    _cf = 0;
    _flag_k = FK_TEST;
L_100C13E5:
    if (2u) _cf = (((ecx) >> 1) & 1u); /* 0x100C13E5: shr ecx, 2 */
    if (2u) { _flag_a = recomp_flags_pack((ecx >> 2u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ecx = ecx >> 2u; /* 0x100C13E5: shr ecx, 2 */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(7);
    ecx = ecx & 7; /* 0x100C13E8: and ecx, 7 */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ecx = ecx - 0; /* 0x100C13EB: sub ecx, 0 */
    _flag_k = FK_CMP;
    if (/* sub result */ CMP_EQ(_flag_a, _flag_b)) goto L_100C1409; /* 0x100C13EE: je 0x100c1409 */
L_100C13F0:
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx - 1; /* 0x100C13F0: dec ecx */
    _flag_k = FK_DEC;
    if (/* dec result */ CMP_EQ(_flag_a, _flag_b)) goto L_100C13FD; /* 0x100C13F1: je 0x100c13fd */
L_100C13F3:
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx - 1; /* 0x100C13F3: dec ecx */
    _flag_k = FK_DEC;
    if (/* dec result */ CMP_NE(_flag_a, _flag_b)) goto L_100C140E; /* 0x100C13F4: jne 0x100c140e */
L_100C13F6:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xFFFFFCFFu);
    eax = eax & 0xFFFFFCFFu; /* 0x100C13F6: and eax, 0xfffffcff */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_100C140E; /* 0x100C13FB: jmp 0x100c140e */
L_100C13FD:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xFFFFFEFFu);
    eax = eax & 0xFFFFFEFFu; /* 0x100C13FD: and eax, 0xfffffeff */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)((eax | 0x200u)); _flag_b = (uint32_t)((eax | 0x200u));
    eax = eax | 0x200u; /* 0x100C1402: or eax, 0x200 */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_100C140E; /* 0x100C1407: jmp 0x100c140e */
L_100C1409:
    _flag_a = (uint32_t)((eax | 0x300u)); _flag_b = (uint32_t)((eax | 0x300u));
    eax = eax | 0x300u; /* 0x100C1409: or eax, 0x300 */
    _cf = 0;
    _flag_k = FK_TEST;
L_100C140E:
    SET_LO8(ecx, MEM8(ebp + (-0x78))); /* 0x100C140E: mov cl, byte ptr [ebp - 0x78] */
    /* test LO8(ecx), 1 */ /* 0x100C1411: test cl, 1 */
    _flag_a = (uint32_t)(LO8(ecx)) << 24; _flag_b = (uint32_t)(1) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_100C141B; /* 0x100C1414: je 0x100c141b */
L_100C1416:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xFFFFFFDFu);
    eax = eax & 0xFFFFFFDFu; /* 0x100C1416: and eax, 0xffffffdf */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_100C141E; /* 0x100C1419: jmp 0x100c141e */
L_100C141B:
    _flag_a = (uint32_t)((eax | 0x20u)); _flag_b = (uint32_t)((eax | 0x20u));
    eax = eax | 0x20u; /* 0x100C141B: or eax, 0x20 */
    _cf = 0;
    _flag_k = FK_TEST;
L_100C141E:
    /* test LO8(ecx), 2 */ /* 0x100C141E: test cl, 2 */
    _flag_a = (uint32_t)(LO8(ecx)) << 24; _flag_b = (uint32_t)(2) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_100C1428; /* 0x100C1421: je 0x100c1428 */
L_100C1423:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xFFFFFFEFu);
    eax = eax & 0xFFFFFFEFu; /* 0x100C1423: and eax, 0xffffffef */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_100C142B; /* 0x100C1426: jmp 0x100c142b */
L_100C1428:
    _flag_a = (uint32_t)((eax | 0x10u)); _flag_b = (uint32_t)((eax | 0x10u));
    eax = eax | 0x10u; /* 0x100C1428: or eax, 0x10 */
    _cf = 0;
    _flag_k = FK_TEST;
L_100C142B:
    /* test LO8(ecx), 4 */ /* 0x100C142B: test cl, 4 */
    _flag_a = (uint32_t)(LO8(ecx)) << 24; _flag_b = (uint32_t)(4) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_100C1435; /* 0x100C142E: je 0x100c1435 */
L_100C1430:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xFFFFFFF7u);
    eax = eax & 0xFFFFFFF7u; /* 0x100C1430: and eax, 0xfffffff7 */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_100C1438; /* 0x100C1433: jmp 0x100c1438 */
L_100C1435:
    _flag_a = (uint32_t)((eax | 8)); _flag_b = (uint32_t)((eax | 8));
    eax = eax | 8; /* 0x100C1435: or eax, 8 */
    _cf = 0;
    _flag_k = FK_TEST;
L_100C1438:
    /* test LO8(ecx), 8 */ /* 0x100C1438: test cl, 8 */
    _flag_a = (uint32_t)(LO8(ecx)) << 24; _flag_b = (uint32_t)(8) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_100C1442; /* 0x100C143B: je 0x100c1442 */
L_100C143D:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xFFFFFFFBu);
    eax = eax & 0xFFFFFFFBu; /* 0x100C143D: and eax, 0xfffffffb */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_100C1445; /* 0x100C1440: jmp 0x100c1445 */
L_100C1442:
    _flag_a = (uint32_t)((eax | 4)); _flag_b = (uint32_t)((eax | 4));
    eax = eax | 4; /* 0x100C1442: or eax, 4 */
    _cf = 0;
    _flag_k = FK_TEST;
L_100C1445:
    /* test LO8(ecx), 0x10u */ /* 0x100C1445: test cl, 0x10 */
    _flag_a = (uint32_t)(LO8(ecx)) << 24; _flag_b = (uint32_t)(0x10u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_100C144F; /* 0x100C1448: je 0x100c144f */
L_100C144A:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xFFFFFFFEu);
    eax = eax & 0xFFFFFFFEu; /* 0x100C144A: and eax, 0xfffffffe */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_100C1452; /* 0x100C144D: jmp 0x100c1452 */
L_100C144F:
    _flag_a = (uint32_t)((eax | 1)); _flag_b = (uint32_t)((eax | 1));
    eax = eax | 1; /* 0x100C144F: or eax, 1 */
    _cf = 0;
    _flag_k = FK_TEST;
L_100C1452:
    MEM32(esi) = eax; /* 0x100C1452: mov dword ptr [esi], eax */
L_100C1454:
    eax = edi; /* 0x100C1454: mov eax, edi */
    goto L_100C1463; /* 0x100C1456: jmp 0x100c1463 */
L_100C1458:
    PUSH32(esp, edi); /* 0x100C1458: push edi */
    PUSH32(esp, ecx); /* 0x100C1459: push ecx */
    PUSH32(esp, edx); /* 0x100C145A: push edx */
    RECOMP_CALL(sub_100D42D8); /* 0x100C145B: call 0x100d42d8 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x100C1460: add esp, 0xc */
    _flag_k = FK_ADD;
L_100C1463:
    ecx = MEM32(ebp + (-0x4)); /* 0x100C1463: mov ecx, dword ptr [ebp - 4] */
    edi = POP32_VAL(esp); /* 0x100C1466: pop edi */
    _flag_a = (uint32_t)((ecx ^ ebp)); _flag_b = (uint32_t)((ecx ^ ebp));
    ecx = ecx ^ ebp; /* 0x100C1467: xor ecx, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    esi = POP32_VAL(esp); /* 0x100C1469: pop esi */
    RECOMP_CALL(sub_1000F7C6); /* 0x100C146A: call 0x1000f7c6 */
    RECOMP_FLAGS_IN();
    esp = ebp; /* 0x100C146F: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x100C1471: pop ebp */
    esp = ebx; /* 0x100C1472: mov esp, ebx */
    ebx = POP32_VAL(esp); /* 0x100C1474: pop ebx */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x100C1475: ret  */
    RECOMP_REGS_OUT();
}

void sub_100C1476(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x100C1476u);

L_100C1476:
    PUSH32(esp, ebp); /* 0x100C1476: push ebp */
    ebp = esp; /* 0x100C1477: mov ebp, esp */
    eax = MEM32(ebp + 0xC); /* 0x100C1479: mov eax, dword ptr [ebp + 0xc] */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x10u; /* 0x100C147C: sub esp, 0x10 */
    _flag_k = FK_CMP;
    ecx = eax; /* 0x100C147F: mov ecx, eax */
    if (23u) _cf = (((ecx) >> 22) & 1u); /* 0x100C1481: shr ecx, 0x17 */
    if (23u) { _flag_a = recomp_flags_pack((ecx >> 23u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ecx = ecx >> 23u; /* 0x100C1481: shr ecx, 0x17 */
    PUSH32(esp, ebx); /* 0x100C1484: push ebx */
    PUSH32(esp, esi); /* 0x100C1485: push esi */
    esi = MEM32(ebp + 0x8); /* 0x100C1486: mov esi, dword ptr [ebp + 8] */
    ebx = 0xFFu; /* 0x100C1489: mov ebx, 0xff */
    edx = esi; /* 0x100C148E: mov edx, esi */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ebx);
    ecx = ecx & ebx; /* 0x100C1490: and ecx, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
    if (23u) _cf = (((edx) >> 22) & 1u); /* 0x100C1492: shr edx, 0x17 */
    if (23u) { _flag_a = recomp_flags_pack((edx >> 23u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    edx = edx >> 23u; /* 0x100C1492: shr edx, 0x17 */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(ebx);
    edx = edx & ebx; /* 0x100C1495: and edx, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp edx, ebx */ /* 0x100C1497: cmp edx, ebx */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_100C154F; /* 0x100C1499: je 0x100c154f */
L_100C149F:
    /* cmp ecx, ebx */ /* 0x100C149F: cmp ecx, ebx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_100C154F; /* 0x100C14A1: je 0x100c154f */
L_100C14A7:
    eax = edx; /* 0x100C14A7: mov eax, edx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - ecx; /* 0x100C14A9: sub eax, ecx */
    _flag_k = FK_CMP;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x1Cu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 0x1Cu; /* 0x100C14AB: add eax, 0x1c */
    _flag_k = FK_ADD;
    PUSH32(esp, ecx); /* 0x100C14AE: push ecx */
    PUSH32(esp, ecx); /* 0x100C14AF: push ecx */
    /* cmp eax, 0x38u */ /* 0x100C14B0: cmp eax, 0x38 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x38u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_A(_flag_a, _flag_b)) goto L_100C1516; /* 0x100C14B3: ja 0x100c1516 */
L_100C14B5:
    fp_push(*(float*)&MEM32(ebp + 0x8)); /* 0x100C14B5: fld dword ptr [ebp + 8] */
    eax = edx + ecx; /* 0x100C14B8: lea eax, [edx + ecx] */
    fp_push(*(float*)&MEM32(ebp + 0xC)); /* 0x100C14BB: fld dword ptr [ebp + 0xc] */
    _st[0] *= _st[0]; /* 0x100C14BE: fmul st(0), st(0) */
    fp_xch(1); /* 0x100C14C0: fxch st(1) */
    _st[0] *= _st[0]; /* 0x100C14C2: fmul st(0), st(0) */
    { double _v = fp_pop(); _st[0] += _v; } /* 0x100C14C4: faddp st(1) */
    { double _v = fp_pop(); *(double*)ADDR(esp) = _v; } /* 0x100C14C6: fstp qword ptr [esp] */
    /* cmp eax, 0x17Au */ /* 0x100C14C9: cmp eax, 0x17a */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x17Au);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_LE(_flag_a, _flag_b)) goto L_100C1504; /* 0x100C14CE: jle 0x100c1504 */
L_100C14D0:
    RECOMP_CALL(sub_10036E0B); /* 0x100C14D0: call 0x10036e0b */
    RECOMP_FLAGS_IN();
    *(double*)ADDR(ebp + (-0x10)) = _st[0]; /* 0x100C14D5: fst qword ptr [ebp - 0x10] */
    /* cmp MEM32(ebp + (-0xC)), 0x47F00000u */ /* 0x100C14D8: cmp dword ptr [ebp - 0xc], 0x47f00000 */
    _flag_a = (uint32_t)(MEM32(ebp + (-0xC))); _flag_b = (uint32_t)(0x47F00000u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
L_100C14DF:
    ecx = POP32_VAL(esp); /* 0x100C14DF: pop ecx */
    ecx = POP32_VAL(esp); /* 0x100C14E0: pop ecx */
    if (recomp_cond_cf(_flag_k, _flag_a, _flag_b, CC_L, _cf)) goto L_100C150B; /* 0x100C14E1: jl 0x100c150b */
L_100C14E3:
    PUSH32(esp, 0x2Fu); /* 0x100C14E3: push 0x2f */
    eax = ebp + (-0x4); /* 0x100C14E5: lea eax, [ebp - 4] */
    PUSH32(esp, eax); /* 0x100C14E8: push eax */
    eax = ebp + 0xC; /* 0x100C14E9: lea eax, [ebp + 0xc] */
    PUSH32(esp, eax); /* 0x100C14EC: push eax */
    eax = ebp + 0x8; /* 0x100C14ED: lea eax, [ebp + 8] */
    PUSH32(esp, eax); /* 0x100C14F0: push eax */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x4)) = _v; } /* 0x100C14F1: fstp dword ptr [ebp - 4] */
    RECOMP_CALL(sub_100D6158); /* 0x100C14F4: call 0x100d6158 */
    RECOMP_FLAGS_IN();
    fp_push(*(float*)&MEM32(ebp + (-0x4))); /* 0x100C14F9: fld dword ptr [ebp - 4] */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x10u; /* 0x100C14FC: add esp, 0x10 */
    _flag_k = FK_ADD;
    goto L_100C15AF; /* 0x100C14FF: jmp 0x100c15af */
L_100C1504:
    RECOMP_CALL(sub_10036E0B); /* 0x100C1504: call 0x10036e0b */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x100C1509: pop ecx */
    ecx = POP32_VAL(esp); /* 0x100C150A: pop ecx */
L_100C150B:
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x8)) = _v; } /* 0x100C150B: fstp dword ptr [ebp - 8] */
    fp_push(*(float*)&MEM32(ebp + (-0x8))); /* 0x100C150E: fld dword ptr [ebp - 8] */
    goto L_100C15AF; /* 0x100C1511: jmp 0x100c15af */
L_100C1516:
    fp_push(*(float*)&MEM32(ebp + 0x8)); /* 0x100C1516: fld dword ptr [ebp + 8] */
    { double _v = fp_pop(); *(double*)ADDR(esp) = _v; } /* 0x100C1519: fstp qword ptr [esp] */
    RECOMP_CALL(sub_100CA3C2); /* 0x100C151C: call 0x100ca3c2 */
    RECOMP_FLAGS_IN();
    _st[0] *= *(double*)ADDR(0x10063BD0); /* 0x100C1521: fmul qword ptr [0x10063bd0] */
    { double _v = fp_pop(); *(double*)ADDR(ebp + (-0x10)) = _v; } /* 0x100C1527: fstp qword ptr [ebp - 0x10] */
    fp_push(*(float*)&MEM32(ebp + 0xC)); /* 0x100C152A: fld dword ptr [ebp + 0xc] */
    { double _v = fp_pop(); *(double*)ADDR(esp) = _v; } /* 0x100C152D: fstp qword ptr [esp] */
    RECOMP_CALL(sub_100CA3C2); /* 0x100C1530: call 0x100ca3c2 */
    RECOMP_FLAGS_IN();
    _st[0] *= *(double*)ADDR(0x10063BD0); /* 0x100C1535: fmul qword ptr [0x10063bd0] */
    _st[0] += *(double*)ADDR(ebp + (-0x10)); /* 0x100C153B: fadd qword ptr [ebp - 0x10] */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x8)) = _v; } /* 0x100C153E: fstp dword ptr [ebp - 8] */
    fp_push(*(float*)&MEM32(ebp + (-0x8))); /* 0x100C1541: fld dword ptr [ebp - 8] */
    /* cmp MEM32(ebp + (-0x8)), 0x7F000000u */ /* 0x100C1544: cmp dword ptr [ebp - 8], 0x7f000000 */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x8))); _flag_b = (uint32_t)(0x7F000000u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    _st[0] += _st[0]; /* 0x100C154B: fadd st(0), st(0) */
    RECOMP_BACKEDGE();
    goto L_100C14DF; /* 0x100C154D: jmp 0x100c14df */
L_100C154F:
    PUSH32(esp, edi); /* 0x100C154F: push edi */
    edi = 0x7FFFFFFFu; /* 0x100C1550: mov edi, 0x7fffffff */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(edi);
    esi = esi & edi; /* 0x100C1555: and esi, edi */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edi);
    eax = eax & edi; /* 0x100C1557: and eax, edi */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + 0x8) = esi; /* 0x100C1559: mov dword ptr [ebp + 8], esi */
    edi = 0x007FFFFFu; /* 0x100C155C: mov edi, 0x7fffff */
    MEM32(ebp + 0xC) = eax; /* 0x100C1561: mov dword ptr [ebp + 0xc], eax */
    /* cmp edx, ebx */ /* 0x100C1564: cmp edx, ebx */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_100C156C; /* 0x100C1566: jne 0x100c156c */
L_100C1568:
    /* test edi, esi */ /* 0x100C1568: test edi, esi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_100C1574; /* 0x100C156A: jne 0x100c1574 */
L_100C156C:
    /* cmp ecx, ebx */ /* 0x100C156C: cmp ecx, ebx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_100C1582; /* 0x100C156E: jne 0x100c1582 */
L_100C1570:
    /* test edi, eax */ /* 0x100C1570: test edi, eax */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_100C1582; /* 0x100C1572: je 0x100c1582 */
L_100C1574:
    fp_push(*(float*)&MEM32(ebp + 0x8)); /* 0x100C1574: fld dword ptr [ebp + 8] */
    fp_push(_st[0]); /* 0x100C1577: fld st(0) */
    fp_push(*(float*)&MEM32(ebp + 0xC)); /* 0x100C1579: fld dword ptr [ebp + 0xc] */
    fp_push(_st[0]); /* 0x100C157C: fld st(0) */
    { double _v = fp_pop(); _st[1] *= _v; } /* 0x100C157E: fmulp st(2) */
    goto L_100C158E; /* 0x100C1580: jmp 0x100c158e */
L_100C1582:
    fp_push(*(float*)&MEM32(ebp + 0x8)); /* 0x100C1582: fld dword ptr [ebp + 8] */
    fp_push(_st[0]); /* 0x100C1585: fld st(0) */
    fp_push(*(float*)&MEM32(ebp + 0xC)); /* 0x100C1587: fld dword ptr [ebp + 0xc] */
    fp_push(_st[0]); /* 0x100C158A: fld st(0) */
    { double _v = fp_pop(); _st[1] += _v; } /* 0x100C158C: faddp st(2) */
L_100C158E:
    fp_xch(1); /* 0x100C158E: fxch st(1) */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x8)) = _v; } /* 0x100C1590: fstp dword ptr [ebp - 8] */
    /* cmp edx, ebx */ /* 0x100C1593: cmp edx, ebx */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_100C159F; /* 0x100C1595: jne 0x100c159f */
L_100C1597:
    /* test edi, esi */ /* 0x100C1597: test edi, esi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_100C159F; /* 0x100C1599: jne 0x100c159f */
L_100C159B:
    { _st[0] = _st[0]; g_st_i64[0] = g_st_i64[0]; fp_pop(); } /* 0x100C159B: fstp st(0) */
    goto L_100C15AE; /* 0x100C159D: jmp 0x100c15ae */
L_100C159F:
    { _st[1] = _st[0]; g_st_i64[1] = g_st_i64[0]; fp_pop(); } /* 0x100C159F: fstp st(1) */
    /* cmp ecx, ebx */ /* 0x100C15A1: cmp ecx, ebx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_100C15A9; /* 0x100C15A3: jne 0x100c15a9 */
L_100C15A5:
    /* test edi, eax */ /* 0x100C15A5: test edi, eax */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_100C15AE; /* 0x100C15A7: je 0x100c15ae */
L_100C15A9:
    { _st[0] = _st[0]; g_st_i64[0] = g_st_i64[0]; fp_pop(); } /* 0x100C15A9: fstp st(0) */
    fp_push(*(float*)&MEM32(ebp + (-0x8))); /* 0x100C15AB: fld dword ptr [ebp - 8] */
L_100C15AE:
    edi = POP32_VAL(esp); /* 0x100C15AE: pop edi */
L_100C15AF:
    esi = POP32_VAL(esp); /* 0x100C15AF: pop esi */
    ebx = POP32_VAL(esp); /* 0x100C15B0: pop ebx */
    esp = ebp; /* 0x100C15B1: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x100C15B3: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x100C15B4: ret  */
    RECOMP_REGS_OUT();
}

void sub_100C15B5(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x100C15B5u);

L_100C15B5:
    PUSH32(esp, ebp); /* 0x100C15B5: push ebp */
    ebp = esp; /* 0x100C15B6: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x20u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x20u; /* 0x100C15B8: sub esp, 0x20 */
    _flag_k = FK_CMP;
    fp_push(0.0); /* 0x100C15BB: fldz  */
    fp_push(*(double*)ADDR(ebp + 0x8)); /* 0x100C15BD: fld qword ptr [ebp + 8] */
    *(double*)ADDR(ebp + (-0x8)) = _st[0]; /* 0x100C15C0: fst qword ptr [ebp - 8] */
    _fpu_cmp = FPU_CMP(_st[0], _st[1]); /* 0x100C15C3: fcom st(1) */
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x100C15C5: fnstsw ax */
    { _st[1] = _st[0]; g_st_i64[1] = g_st_i64[0]; fp_pop(); } /* 0x100C15C7: fstp st(1) */
    /* test HI8(eax), 5 */ /* 0x100C15C9: test ah, 5 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(5) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (RECOMP_PF((_flag_a & _flag_b), 24)) goto L_100C15D3; /* 0x100C15CC: jp 0x100c15d3 */
L_100C15CE:
    _st[0] = -_st[0]; /* 0x100C15CE: fchs  */
    *(double*)ADDR(ebp + (-0x8)) = _st[0]; /* 0x100C15D0: fst qword ptr [ebp - 8] */
L_100C15D3:
    fp_push(*(double*)ADDR(0x10063C00)); /* 0x100C15D3: fld qword ptr [0x10063c00] */
    _fpu_cmp = FPU_CMP(_st[0], _st[1]); /* 0x100C15D9: fcomp st(1) */
    fp_pop();
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x100C15DB: fnstsw ax */
    /* test HI8(eax), 1 */ /* 0x100C15DD: test ah, 1 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(1) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_100C1631; /* 0x100C15E0: jne 0x100c1631 */
L_100C15E2:
    _st[0] *= _st[0]; /* 0x100C15E2: fmul st(0), st(0) */
    eax = 0x100E1CF0u; /* 0x100C15E4: mov eax, 0x100e1cf0 */
    fp_push(*(double*)ADDR(0x100E1CF8)); /* 0x100C15E9: fld qword ptr [0x100e1cf8] */
    _st[0] *= _st[1]; /* 0x100C15EF: fmul st(1) */
L_100C15F1:
    _st[0] += *(double*)ADDR(eax); /* 0x100C15F1: fadd qword ptr [eax] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - 8; /* 0x100C15F3: sub eax, 8 */
    _flag_k = FK_CMP;
    _st[0] *= _st[1]; /* 0x100C15F6: fmul st(1) */
    /* cmp eax, 0x100E1CA0u */ /* 0x100C15F8: cmp eax, 0x100e1ca0 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x100E1CA0u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_G(_flag_a, _flag_b)) goto L_100C15F1; /* 0x100C15FD: jg 0x100c15f1 */
L_100C15FF:
    _st[0] += *(double*)ADDR(0x100E1CA0); /* 0x100C15FF: fadd qword ptr [0x100e1ca0] */
    eax = 0x100E1D18u; /* 0x100C1605: mov eax, 0x100e1d18 */
    fp_push(*(double*)ADDR(0x100E1D20)); /* 0x100C160A: fld qword ptr [0x100e1d20] */
    _st[0] *= _st[2]; /* 0x100C1610: fmul st(2) */
L_100C1612:
    _st[0] += *(double*)ADDR(eax); /* 0x100C1612: fadd qword ptr [eax] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - 8; /* 0x100C1614: sub eax, 8 */
    _flag_k = FK_CMP;
    _st[0] *= _st[2]; /* 0x100C1617: fmul st(2) */
    /* cmp eax, 0x100E1D00u */ /* 0x100C1619: cmp eax, 0x100e1d00 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x100E1D00u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_G(_flag_a, _flag_b)) goto L_100C1612; /* 0x100C161E: jg 0x100c1612 */
L_100C1620:
    { _st[2] = _st[0]; g_st_i64[2] = g_st_i64[0]; fp_pop(); } /* 0x100C1620: fstp st(2) */
    fp_push(*(double*)ADDR(0x100E1D00)); /* 0x100C1622: fld qword ptr [0x100e1d00] */
    { double _v = fp_pop(); _st[1] += _v; } /* 0x100C1628: faddp st(2) */
    { double _v = fp_pop(); _st[0] = _st[0] == 0.0 ? _v : _v / _st[0]; } /* 0x100C162A: fdivrp st(1) */
    goto L_100C1720; /* 0x100C162C: jmp 0x100c1720 */
L_100C1631:
    fp_push(*(double*)ADDR(0x10063C08)); /* 0x100C1631: fld qword ptr [0x10063c08] */
    eax = 0x100E1D48u; /* 0x100C1637: mov eax, 0x100e1d48 */
    _st[0] /= _st[1]; /* 0x100C163C: fdiv st(1) */
    *(double*)ADDR(ebp + (-0x18)) = _st[0]; /* 0x100C163E: fst qword ptr [ebp - 0x18] */
    fp_push(_st[0]); /* 0x100C1641: fld st(0) */
    { double _v = fp_pop(); _st[0] *= _v; } /* 0x100C1643: fmulp st(1) */
    fp_push(*(double*)ADDR(0x100E1D50)); /* 0x100C1645: fld qword ptr [0x100e1d50] */
    _st[0] *= _st[1]; /* 0x100C164B: fmul st(1) */
L_100C164D:
    _st[0] += *(double*)ADDR(eax); /* 0x100C164D: fadd qword ptr [eax] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - 8; /* 0x100C164F: sub eax, 8 */
    _flag_k = FK_CMP;
    _st[0] *= _st[1]; /* 0x100C1652: fmul st(1) */
    /* cmp eax, 0x100E1D28u */ /* 0x100C1654: cmp eax, 0x100e1d28 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x100E1D28u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_G(_flag_a, _flag_b)) goto L_100C164D; /* 0x100C1659: jg 0x100c164d */
L_100C165B:
    _st[0] += *(double*)ADDR(0x100E1D28); /* 0x100C165B: fadd qword ptr [0x100e1d28] */
    eax = 0x100E1D78u; /* 0x100C1661: mov eax, 0x100e1d78 */
    fp_push(*(double*)ADDR(0x100E1D80)); /* 0x100C1666: fld qword ptr [0x100e1d80] */
    _st[0] *= _st[2]; /* 0x100C166C: fmul st(2) */
L_100C166E:
    _st[0] += *(double*)ADDR(eax); /* 0x100C166E: fadd qword ptr [eax] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - 8; /* 0x100C1670: sub eax, 8 */
    _flag_k = FK_CMP;
    _st[0] *= _st[2]; /* 0x100C1673: fmul st(2) */
    /* cmp eax, 0x100E1D58u */ /* 0x100C1675: cmp eax, 0x100e1d58 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x100E1D58u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_G(_flag_a, _flag_b)) goto L_100C166E; /* 0x100C167A: jg 0x100c166e */
L_100C167C:
    _st[0] += *(double*)ADDR(0x100E1D58); /* 0x100C167C: fadd qword ptr [0x100e1d58] */
    eax = 0x100E1DA8u; /* 0x100C1682: mov eax, 0x100e1da8 */
    { double _v = fp_pop(); _st[0] = _v == 0.0 ? _st[0] : _st[0] / _v; } /* 0x100C1687: fdivp st(1) */
    { double _v = fp_pop(); *(double*)ADDR(ebp + 0x8) = _v; } /* 0x100C1689: fstp qword ptr [ebp + 8] */
    fp_push(*(double*)ADDR(0x100E1DB0)); /* 0x100C168C: fld qword ptr [0x100e1db0] */
    _st[0] *= _st[1]; /* 0x100C1692: fmul st(1) */
L_100C1694:
    _st[0] += *(double*)ADDR(eax); /* 0x100C1694: fadd qword ptr [eax] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - 8; /* 0x100C1696: sub eax, 8 */
    _flag_k = FK_CMP;
    _st[0] *= _st[1]; /* 0x100C1699: fmul st(1) */
    /* cmp eax, 0x100E1D88u */ /* 0x100C169B: cmp eax, 0x100e1d88 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x100E1D88u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_G(_flag_a, _flag_b)) goto L_100C1694; /* 0x100C16A0: jg 0x100c1694 */
L_100C16A2:
    _st[0] += *(double*)ADDR(0x100E1D88); /* 0x100C16A2: fadd qword ptr [0x100e1d88] */
    eax = 0x100E1DD8u; /* 0x100C16A8: mov eax, 0x100e1dd8 */
    fp_push(*(double*)ADDR(0x100E1DE0)); /* 0x100C16AD: fld qword ptr [0x100e1de0] */
    _st[0] *= _st[2]; /* 0x100C16B3: fmul st(2) */
L_100C16B5:
    _st[0] += *(double*)ADDR(eax); /* 0x100C16B5: fadd qword ptr [eax] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - 8; /* 0x100C16B7: sub eax, 8 */
    _flag_k = FK_CMP;
    _st[0] *= _st[2]; /* 0x100C16BA: fmul st(2) */
    /* cmp eax, 0x100E1DB8u */ /* 0x100C16BC: cmp eax, 0x100e1db8 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x100E1DB8u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_G(_flag_a, _flag_b)) goto L_100C16B5; /* 0x100C16C1: jg 0x100c16b5 */
L_100C16C3:
    { _st[2] = _st[0]; g_st_i64[2] = g_st_i64[0]; fp_pop(); } /* 0x100C16C3: fstp st(2) */
    fp_push(*(double*)ADDR(0x100E1DB8)); /* 0x100C16C5: fld qword ptr [0x100e1db8] */
    { double _v = fp_pop(); _st[1] += _v; } /* 0x100C16CB: faddp st(2) */
    PUSH32(esp, ecx); /* 0x100C16CD: push ecx */
    PUSH32(esp, ecx); /* 0x100C16CE: push ecx */
    { double _v = fp_pop(); _st[0] = _st[0] == 0.0 ? _v : _v / _st[0]; } /* 0x100C16CF: fdivrp st(1) */
    { double _v = fp_pop(); *(double*)ADDR(ebp + (-0x20)) = _v; } /* 0x100C16D1: fstp qword ptr [ebp - 0x20] */
    _st[0] -= *(double*)ADDR(0x10063BE0); /* 0x100C16D4: fsub qword ptr [0x10063be0] */
    *(double*)ADDR(ebp + (-0x10)) = _st[0]; /* 0x100C16DA: fst qword ptr [ebp - 0x10] */
    { double _v = fp_pop(); *(double*)ADDR(esp) = _v; } /* 0x100C16DD: fstp qword ptr [esp] */
    RECOMP_CALL(sub_10036596); /* 0x100C16E0: call 0x10036596 */
    RECOMP_FLAGS_IN();
    _st[0] *= *(double*)ADDR(ebp + 0x8); /* 0x100C16E5: fmul qword ptr [ebp + 8] */
    { double _v = fp_pop(); *(double*)ADDR(ebp + 0x8) = _v; } /* 0x100C16E8: fstp qword ptr [ebp + 8] */
    fp_push(*(double*)ADDR(ebp + (-0x10))); /* 0x100C16EB: fld qword ptr [ebp - 0x10] */
    { double _v = fp_pop(); *(double*)ADDR(esp) = _v; } /* 0x100C16EE: fstp qword ptr [esp] */
    RECOMP_CALL(sub_10036CCF); /* 0x100C16F1: call 0x10036ccf */
    RECOMP_FLAGS_IN();
    fp_push(*(double*)ADDR(ebp + (-0x18))); /* 0x100C16F6: fld qword ptr [ebp - 0x18] */
    _st[0] *= *(double*)ADDR(ebp + (-0x20)); /* 0x100C16F9: fmul qword ptr [ebp - 0x20] */
    { double _v = fp_pop(); _st[0] *= _v; } /* 0x100C16FC: fmulp st(1) */
    _st[0] = *(double*)ADDR(ebp + 0x8) - _st[0]; /* 0x100C16FE: fsubr qword ptr [ebp + 8] */
    { double _v = fp_pop(); *(double*)ADDR(ebp + 0x8) = _v; } /* 0x100C1701: fstp qword ptr [ebp + 8] */
    fp_push(*(double*)ADDR(ebp + (-0x8))); /* 0x100C1704: fld qword ptr [ebp - 8] */
    _st[0] *= *(double*)ADDR(0x10063BF8); /* 0x100C1707: fmul qword ptr [0x10063bf8] */
    _st[0] = *(double*)ADDR(0x10063BE8) / _st[0]; /* 0x100C170D: fdivr qword ptr [0x10063be8] */
    { double _v = fp_pop(); *(double*)ADDR(esp) = _v; } /* 0x100C1713: fstp qword ptr [esp] */
    RECOMP_CALL(sub_10036E0B); /* 0x100C1716: call 0x10036e0b */
    RECOMP_FLAGS_IN();
    _st[0] *= *(double*)ADDR(ebp + 0x8); /* 0x100C171B: fmul qword ptr [ebp + 8] */
    ecx = POP32_VAL(esp); /* 0x100C171E: pop ecx */
    ecx = POP32_VAL(esp); /* 0x100C171F: pop ecx */
L_100C1720:
    esp = ebp; /* 0x100C1720: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x100C1722: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x100C1723: ret  */
    RECOMP_REGS_OUT();
}

void sub_100C1724(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x100C1724u);

L_100C1724:
    PUSH32(esp, ebp); /* 0x100C1724: push ebp */
    ebp = esp; /* 0x100C1725: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x24u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x24u; /* 0x100C1727: sub esp, 0x24 */
    _flag_k = FK_CMP;
    fp_push(0.0); /* 0x100C172A: fldz  */
    fp_push(*(double*)ADDR(ebp + 0x8)); /* 0x100C172C: fld qword ptr [ebp + 8] */
    *(double*)ADDR(ebp + (-0xC)) = _st[0]; /* 0x100C172F: fst qword ptr [ebp - 0xc] */
    _fpu_cmp = FPU_CMP(_st[0], _st[1]); /* 0x100C1732: fcom st(1) */
    MEM32(ebp + (-0x4)) = 1; /* 0x100C1734: mov dword ptr [ebp - 4], 1 */
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x100C173B: fnstsw ax */
    { _st[1] = _st[0]; g_st_i64[1] = g_st_i64[0]; fp_pop(); } /* 0x100C173D: fstp st(1) */
    /* test HI8(eax), 5 */ /* 0x100C173F: test ah, 5 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(5) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (RECOMP_PF((_flag_a & _flag_b), 24)) goto L_100C174D; /* 0x100C1742: jp 0x100c174d */
L_100C1744:
    _flag_a = (uint32_t)((MEM32(ebp + (-0x4)) | 0xFFFFFFFFu)); _flag_b = (uint32_t)((MEM32(ebp + (-0x4)) | 0xFFFFFFFFu));
    MEM32(ebp + (-0x4)) = MEM32(ebp + (-0x4)) | 0xFFFFFFFFu; /* 0x100C1744: or dword ptr [ebp - 4], 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    _st[0] = -_st[0]; /* 0x100C1748: fchs  */
    *(double*)ADDR(ebp + (-0xC)) = _st[0]; /* 0x100C174A: fst qword ptr [ebp - 0xc] */
L_100C174D:
    fp_push(*(double*)ADDR(0x10063C00)); /* 0x100C174D: fld qword ptr [0x10063c00] */
    _fpu_cmp = FPU_CMP(_st[0], _st[1]); /* 0x100C1753: fcomp st(1) */
    fp_pop();
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x100C1755: fnstsw ax */
    /* test HI8(eax), 1 */ /* 0x100C1757: test ah, 1 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(1) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_100C17BA; /* 0x100C175A: jne 0x100c17ba */
L_100C175C:
    fp_push(_st[0]); /* 0x100C175C: fld st(0) */
    eax = 0x100E1E30u; /* 0x100C175E: mov eax, 0x100e1e30 */
    _st[0] *= _st[1]; /* 0x100C1763: fmul st(1) */
    fp_push(*(double*)ADDR(0x100E1E38)); /* 0x100C1765: fld qword ptr [0x100e1e38] */
    _st[0] *= _st[1]; /* 0x100C176B: fmul st(1) */
L_100C176D:
    _st[0] += *(double*)ADDR(eax); /* 0x100C176D: fadd qword ptr [eax] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - 8; /* 0x100C176F: sub eax, 8 */
    _flag_k = FK_CMP;
    _st[0] *= _st[1]; /* 0x100C1772: fmul st(1) */
    /* cmp eax, 0x100E1DE8u */ /* 0x100C1774: cmp eax, 0x100e1de8 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x100E1DE8u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_G(_flag_a, _flag_b)) goto L_100C176D; /* 0x100C1779: jg 0x100c176d */
L_100C177B:
    _st[0] += *(double*)ADDR(0x100E1DE8); /* 0x100C177B: fadd qword ptr [0x100e1de8] */
    eax = 0x100E1E58u; /* 0x100C1781: mov eax, 0x100e1e58 */
    fp_push(*(double*)ADDR(0x100E1E60)); /* 0x100C1786: fld qword ptr [0x100e1e60] */
    _st[0] *= _st[2]; /* 0x100C178C: fmul st(2) */
L_100C178E:
    _st[0] += *(double*)ADDR(eax); /* 0x100C178E: fadd qword ptr [eax] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - 8; /* 0x100C1790: sub eax, 8 */
    _flag_k = FK_CMP;
    _st[0] *= _st[2]; /* 0x100C1793: fmul st(2) */
    /* cmp eax, 0x100E1E40u */ /* 0x100C1795: cmp eax, 0x100e1e40 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x100E1E40u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_G(_flag_a, _flag_b)) goto L_100C178E; /* 0x100C179A: jg 0x100c178e */
L_100C179C:
    { _st[2] = _st[0]; g_st_i64[2] = g_st_i64[0]; fp_pop(); } /* 0x100C179C: fstp st(2) */
    fp_push(*(double*)ADDR(0x100E1E40)); /* 0x100C179E: fld qword ptr [0x100e1e40] */
    { double _v = fp_pop(); _st[1] += _v; } /* 0x100C17A4: faddp st(2) */
    { double _v = fp_pop(); _st[0] = _st[0] == 0.0 ? _v : _v / _st[0]; } /* 0x100C17A6: fdivrp st(1) */
    fp_push((double)(int32_t)MEM32(ebp + (-0x4))); /* 0x100C17A8: fild dword ptr [ebp - 4] */
    { double _v = fp_pop(); *(double*)ADDR(ebp + 0x8) = _v; } /* 0x100C17AB: fstp qword ptr [ebp + 8] */
    fp_push(*(double*)ADDR(ebp + 0x8)); /* 0x100C17AE: fld qword ptr [ebp + 8] */
    { double _v = fp_pop(); _st[1] *= _v; } /* 0x100C17B1: fmulp st(2) */
    { double _v = fp_pop(); _st[0] *= _v; } /* 0x100C17B3: fmulp st(1) */
    goto L_100C18B2; /* 0x100C17B5: jmp 0x100c18b2 */
L_100C17BA:
    fp_push(*(double*)ADDR(0x10063C08)); /* 0x100C17BA: fld qword ptr [0x10063c08] */
    eax = 0x100E1E88u; /* 0x100C17C0: mov eax, 0x100e1e88 */
    _st[0] /= _st[1]; /* 0x100C17C5: fdiv st(1) */
    *(double*)ADDR(ebp + (-0x1C)) = _st[0]; /* 0x100C17C7: fst qword ptr [ebp - 0x1c] */
    fp_push(_st[0]); /* 0x100C17CA: fld st(0) */
    { double _v = fp_pop(); _st[0] *= _v; } /* 0x100C17CC: fmulp st(1) */
    fp_push(*(double*)ADDR(0x100E1E90)); /* 0x100C17CE: fld qword ptr [0x100e1e90] */
    _st[0] *= _st[1]; /* 0x100C17D4: fmul st(1) */
L_100C17D6:
    _st[0] += *(double*)ADDR(eax); /* 0x100C17D6: fadd qword ptr [eax] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - 8; /* 0x100C17D8: sub eax, 8 */
    _flag_k = FK_CMP;
    _st[0] *= _st[1]; /* 0x100C17DB: fmul st(1) */
    /* cmp eax, 0x100E1E68u */ /* 0x100C17DD: cmp eax, 0x100e1e68 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x100E1E68u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_G(_flag_a, _flag_b)) goto L_100C17D6; /* 0x100C17E2: jg 0x100c17d6 */
L_100C17E4:
    _st[0] += *(double*)ADDR(0x100E1E68); /* 0x100C17E4: fadd qword ptr [0x100e1e68] */
    eax = 0x100E1EB8u; /* 0x100C17EA: mov eax, 0x100e1eb8 */
    fp_push(*(double*)ADDR(0x100E1EC0)); /* 0x100C17EF: fld qword ptr [0x100e1ec0] */
    _st[0] *= _st[2]; /* 0x100C17F5: fmul st(2) */
L_100C17F7:
    _st[0] += *(double*)ADDR(eax); /* 0x100C17F7: fadd qword ptr [eax] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - 8; /* 0x100C17F9: sub eax, 8 */
    _flag_k = FK_CMP;
    _st[0] *= _st[2]; /* 0x100C17FC: fmul st(2) */
    /* cmp eax, 0x100E1E98u */ /* 0x100C17FE: cmp eax, 0x100e1e98 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x100E1E98u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_G(_flag_a, _flag_b)) goto L_100C17F7; /* 0x100C1803: jg 0x100c17f7 */
L_100C1805:
    _st[0] += *(double*)ADDR(0x100E1E98); /* 0x100C1805: fadd qword ptr [0x100e1e98] */
    eax = 0x100E1EE8u; /* 0x100C180B: mov eax, 0x100e1ee8 */
    { double _v = fp_pop(); _st[0] = _v == 0.0 ? _st[0] : _st[0] / _v; } /* 0x100C1810: fdivp st(1) */
    { double _v = fp_pop(); *(double*)ADDR(ebp + 0x8) = _v; } /* 0x100C1812: fstp qword ptr [ebp + 8] */
    fp_push(*(double*)ADDR(0x100E1EF0)); /* 0x100C1815: fld qword ptr [0x100e1ef0] */
    _st[0] *= _st[1]; /* 0x100C181B: fmul st(1) */
L_100C181D:
    _st[0] += *(double*)ADDR(eax); /* 0x100C181D: fadd qword ptr [eax] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - 8; /* 0x100C181F: sub eax, 8 */
    _flag_k = FK_CMP;
    _st[0] *= _st[1]; /* 0x100C1822: fmul st(1) */
    /* cmp eax, 0x100E1EC8u */ /* 0x100C1824: cmp eax, 0x100e1ec8 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x100E1EC8u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_G(_flag_a, _flag_b)) goto L_100C181D; /* 0x100C1829: jg 0x100c181d */
L_100C182B:
    _st[0] += *(double*)ADDR(0x100E1EC8); /* 0x100C182B: fadd qword ptr [0x100e1ec8] */
    eax = 0x100E1F18u; /* 0x100C1831: mov eax, 0x100e1f18 */
    fp_push(*(double*)ADDR(0x100E1F20)); /* 0x100C1836: fld qword ptr [0x100e1f20] */
    _st[0] *= _st[2]; /* 0x100C183C: fmul st(2) */
L_100C183E:
    _st[0] += *(double*)ADDR(eax); /* 0x100C183E: fadd qword ptr [eax] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - 8; /* 0x100C1840: sub eax, 8 */
    _flag_k = FK_CMP;
    _st[0] *= _st[2]; /* 0x100C1843: fmul st(2) */
    /* cmp eax, 0x100E1EF8u */ /* 0x100C1845: cmp eax, 0x100e1ef8 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x100E1EF8u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_G(_flag_a, _flag_b)) goto L_100C183E; /* 0x100C184A: jg 0x100c183e */
L_100C184C:
    { _st[2] = _st[0]; g_st_i64[2] = g_st_i64[0]; fp_pop(); } /* 0x100C184C: fstp st(2) */
    fp_push(*(double*)ADDR(0x100E1EF8)); /* 0x100C184E: fld qword ptr [0x100e1ef8] */
    { double _v = fp_pop(); _st[1] += _v; } /* 0x100C1854: faddp st(2) */
    PUSH32(esp, ecx); /* 0x100C1856: push ecx */
    PUSH32(esp, ecx); /* 0x100C1857: push ecx */
    { double _v = fp_pop(); _st[0] = _st[0] == 0.0 ? _v : _v / _st[0]; } /* 0x100C1858: fdivrp st(1) */
    { double _v = fp_pop(); *(double*)ADDR(ebp + (-0x24)) = _v; } /* 0x100C185A: fstp qword ptr [ebp - 0x24] */
    _st[0] -= *(double*)ADDR(0x10063BF0); /* 0x100C185D: fsub qword ptr [0x10063bf0] */
    *(double*)ADDR(ebp + (-0x14)) = _st[0]; /* 0x100C1863: fst qword ptr [ebp - 0x14] */
    { double _v = fp_pop(); *(double*)ADDR(esp) = _v; } /* 0x100C1866: fstp qword ptr [esp] */
    RECOMP_CALL(sub_10036596); /* 0x100C1869: call 0x10036596 */
    RECOMP_FLAGS_IN();
    _st[0] *= *(double*)ADDR(ebp + 0x8); /* 0x100C186E: fmul qword ptr [ebp + 8] */
    { double _v = fp_pop(); *(double*)ADDR(ebp + 0x8) = _v; } /* 0x100C1871: fstp qword ptr [ebp + 8] */
    fp_push(*(double*)ADDR(ebp + (-0x14))); /* 0x100C1874: fld qword ptr [ebp - 0x14] */
    { double _v = fp_pop(); *(double*)ADDR(esp) = _v; } /* 0x100C1877: fstp qword ptr [esp] */
    RECOMP_CALL(sub_10036CCF); /* 0x100C187A: call 0x10036ccf */
    RECOMP_FLAGS_IN();
    fp_push(*(double*)ADDR(ebp + (-0x1C))); /* 0x100C187F: fld qword ptr [ebp - 0x1c] */
    _st[0] *= *(double*)ADDR(ebp + (-0x24)); /* 0x100C1882: fmul qword ptr [ebp - 0x24] */
    { double _v = fp_pop(); _st[0] *= _v; } /* 0x100C1885: fmulp st(1) */
    _st[0] = *(double*)ADDR(ebp + 0x8) - _st[0]; /* 0x100C1887: fsubr qword ptr [ebp + 8] */
    { double _v = fp_pop(); *(double*)ADDR(ebp + 0x8) = _v; } /* 0x100C188A: fstp qword ptr [ebp + 8] */
    fp_push(*(double*)ADDR(ebp + (-0xC))); /* 0x100C188D: fld qword ptr [ebp - 0xc] */
    _st[0] *= *(double*)ADDR(0x10063BF8); /* 0x100C1890: fmul qword ptr [0x10063bf8] */
    _st[0] = *(double*)ADDR(0x10063BE8) / _st[0]; /* 0x100C1896: fdivr qword ptr [0x10063be8] */
    { double _v = fp_pop(); *(double*)ADDR(esp) = _v; } /* 0x100C189C: fstp qword ptr [esp] */
    RECOMP_CALL(sub_10036E0B); /* 0x100C189F: call 0x10036e0b */
    RECOMP_FLAGS_IN();
    fp_push((double)(int32_t)MEM32(ebp + (-0x4))); /* 0x100C18A4: fild dword ptr [ebp - 4] */
    ecx = POP32_VAL(esp); /* 0x100C18A7: pop ecx */
    ecx = POP32_VAL(esp); /* 0x100C18A8: pop ecx */
    { double _v = fp_pop(); *(double*)ADDR(ebp + (-0x24)) = _v; } /* 0x100C18A9: fstp qword ptr [ebp - 0x24] */
    _st[0] *= *(double*)ADDR(ebp + (-0x24)); /* 0x100C18AC: fmul qword ptr [ebp - 0x24] */
    _st[0] *= *(double*)ADDR(ebp + 0x8); /* 0x100C18AF: fmul qword ptr [ebp + 8] */
L_100C18B2:
    esp = ebp; /* 0x100C18B2: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x100C18B4: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x100C18B5: ret  */
    RECOMP_REGS_OUT();
}

void sub_100C18B6(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x100C18B6u);

L_100C18B6:
    PUSH32(esp, ebp); /* 0x100C18B6: push ebp */
    ebp = esp; /* 0x100C18B7: mov ebp, esp */
    fp_push(*(double*)ADDR(ebp + 0xC)); /* 0x100C18B9: fld qword ptr [ebp + 0xc] */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x18u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x18u; /* 0x100C18BC: sub esp, 0x18 */
    _flag_k = FK_CMP;
    PUSH32(esp, esi); /* 0x100C18BF: push esi */
    esi = MEM32(ebp + 0x8); /* 0x100C18C0: mov esi, dword ptr [ebp + 8] */
    /* test esi, esi */ /* 0x100C18C3: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) == 0u)) goto L_100C18CE; /* 0x100C18C5: jns 0x100c18ce */
L_100C18C7:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(esi);
    _cf = (esi) != 0;
    esi = (uint32_t)(-(int32_t)esi); /* 0x100C18C7: neg esi */
    _flag_k = FK_CMP;
    _st[0] = -_st[0]; /* 0x100C18C9: fchs  */
    MEM32(ebp + 0x8) = esi; /* 0x100C18CB: mov dword ptr [ebp + 8], esi */
L_100C18CE:
    *(double*)ADDR(ebp + (-0x8)) = _st[0]; /* 0x100C18CE: fst qword ptr [ebp - 8] */
    /* test esi, esi */ /* 0x100C18D1: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_100C18E4; /* 0x100C18D3: jne 0x100c18e4 */
L_100C18D5:
    PUSH32(esp, ecx); /* 0x100C18D5: push ecx */
    PUSH32(esp, ecx); /* 0x100C18D6: push ecx */
    { double _v = fp_pop(); *(double*)ADDR(esp) = _v; } /* 0x100C18D7: fstp qword ptr [esp] */
    RECOMP_CALL(sub_100C15B5); /* 0x100C18DA: call 0x100c15b5 */
    RECOMP_FLAGS_IN();
    goto L_100C1A09; /* 0x100C18DF: jmp 0x100c1a09 */
L_100C18E4:
    /* cmp esi, 1 */ /* 0x100C18E4: cmp esi, 1 */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_100C18F8; /* 0x100C18E7: jne 0x100c18f8 */
L_100C18E9:
    PUSH32(esp, ecx); /* 0x100C18E9: push ecx */
    PUSH32(esp, ecx); /* 0x100C18EA: push ecx */
    { double _v = fp_pop(); *(double*)ADDR(esp) = _v; } /* 0x100C18EB: fstp qword ptr [esp] */
    RECOMP_CALL(sub_100C1724); /* 0x100C18EE: call 0x100c1724 */
    RECOMP_FLAGS_IN();
    goto L_100C1A09; /* 0x100C18F3: jmp 0x100c1a09 */
L_100C18F8:
    fp_push(0.0); /* 0x100C18F8: fldz  */
    _fpu_cmp = FPU_CMP(_st[0], _st[1]); /* 0x100C18FA: fucom st(1) */
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x100C18FC: fnstsw ax */
    /* test HI8(eax), 0x44u */ /* 0x100C18FE: test ah, 0x44 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(0x44u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (RECOMP_PF((_flag_a & _flag_b), 24)) goto L_100C190A; /* 0x100C1901: jp 0x100c190a */
L_100C1903:
    { _st[1] = _st[0]; g_st_i64[1] = g_st_i64[0]; fp_pop(); } /* 0x100C1903: fstp st(1) */
    goto L_100C1A0B; /* 0x100C1905: jmp 0x100c1a0b */
L_100C190A:
    { _st[0] = _st[0]; g_st_i64[0] = g_st_i64[0]; fp_pop(); } /* 0x100C190A: fstp st(0) */
    fp_push((double)(int32_t)MEM32(ebp + 0x8)); /* 0x100C190C: fild dword ptr [ebp + 8] */
    PUSH32(esp, ecx); /* 0x100C190F: push ecx */
    PUSH32(esp, ecx); /* 0x100C1910: push ecx */
    { double _v = fp_pop(); *(double*)ADDR(ebp + (-0x10)) = _v; } /* 0x100C1911: fstp qword ptr [ebp - 0x10] */
    fp_push(*(double*)ADDR(ebp + (-0x10))); /* 0x100C1914: fld qword ptr [ebp - 0x10] */
    { double _v = fp_pop(); *(double*)ADDR(ebp + (-0x10)) = _v; } /* 0x100C1917: fstp qword ptr [ebp - 0x10] */
    { double _v = fp_pop(); *(double*)ADDR(esp) = _v; } /* 0x100C191A: fstp qword ptr [esp] */
    RECOMP_CALL(sub_100CA3C2); /* 0x100C191D: call 0x100ca3c2 */
    RECOMP_FLAGS_IN();
    _fpu_cmp = FPU_CMP(_st[0], *(double*)ADDR(ebp + (-0x10))); /* 0x100C1922: fcomp qword ptr [ebp - 0x10] */
    fp_pop();
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x100C1925: fnstsw ax */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esi = esi + esi; /* 0x100C1927: add esi, esi */
    _flag_k = FK_ADD;
    ecx = POP32_VAL(esp); /* 0x100C1929: pop ecx */
    ecx = POP32_VAL(esp); /* 0x100C192A: pop ecx */
    fp_push(*(double*)ADDR(ebp + (-0x8))); /* 0x100C192B: fld qword ptr [ebp - 8] */
    /* test HI8(eax), 0x41u */ /* 0x100C192E: test ah, 0x41 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(0x41u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_100C1992; /* 0x100C1931: jne 0x100c1992 */
L_100C1933:
    PUSH32(esp, ecx); /* 0x100C1933: push ecx */
    PUSH32(esp, ecx); /* 0x100C1934: push ecx */
    { double _v = fp_pop(); *(double*)ADDR(esp) = _v; } /* 0x100C1935: fstp qword ptr [esp] */
    RECOMP_CALL(sub_100C15B5); /* 0x100C1938: call 0x100c15b5 */
    RECOMP_FLAGS_IN();
    { double _v = fp_pop(); *(double*)ADDR(ebp + (-0x10)) = _v; } /* 0x100C193D: fstp qword ptr [ebp - 0x10] */
    fp_push(*(double*)ADDR(ebp + (-0x8))); /* 0x100C1940: fld qword ptr [ebp - 8] */
    { double _v = fp_pop(); *(double*)ADDR(esp) = _v; } /* 0x100C1943: fstp qword ptr [esp] */
    RECOMP_CALL(sub_100C1724); /* 0x100C1946: call 0x100c1724 */
    RECOMP_FLAGS_IN();
    fp_push(_st[0]); /* 0x100C194B: fld st(0) */
    _st[0] += _st[1]; /* 0x100C194D: fadd st(1) */
    fp_push(*(double*)ADDR(ebp + (-0x8))); /* 0x100C194F: fld qword ptr [ebp - 8] */
    ecx = POP32_VAL(esp); /* 0x100C1952: pop ecx */
    ecx = POP32_VAL(esp); /* 0x100C1953: pop ecx */
    PUSH32(esp, 4); /* 0x100C1954: push 4 */
    _st[1] /= _st[0]; /* 0x100C1956: fdiv st(1), st(0) */
    eax = POP32_VAL(esp); /* 0x100C1958: pop eax */
    MEM32(ebp + (-0x4)) = eax; /* 0x100C1959: mov dword ptr [ebp - 4], eax */
    fp_push(*(double*)ADDR(ebp + (-0x10))); /* 0x100C195C: fld qword ptr [ebp - 0x10] */
    { double _v = fp_pop(); _st[1] -= _v; } /* 0x100C195F: fsubp st(2) */
    /* cmp esi, eax */ /* 0x100C1961: cmp esi, eax */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_100C196F; /* 0x100C1963: jne 0x100c196f */
L_100C1965:
    { _st[0] = _st[0]; g_st_i64[0] = g_st_i64[0]; fp_pop(); } /* 0x100C1965: fstp st(0) */
    RECOMP_BACKEDGE();
    goto L_100C1903; /* 0x100C1967: jmp 0x100c1903 */
L_100C1969:
    fp_xch(1); /* 0x100C1969: fxch st(1) */
    fp_xch(2); /* 0x100C196B: fxch st(2) */
    fp_xch(1); /* 0x100C196D: fxch st(1) */
L_100C196F:
    fp_push(_st[1]); /* 0x100C196F: fld st(1) */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 2; /* 0x100C1971: add eax, 2 */
    _flag_k = FK_ADD;
    fp_push((double)(int32_t)MEM32(ebp + (-0x4))); /* 0x100C1974: fild dword ptr [ebp - 4] */
    MEM32(ebp + (-0x4)) = eax; /* 0x100C1977: mov dword ptr [ebp - 4], eax */
    { double _v = fp_pop(); *(double*)ADDR(ebp + (-0x10)) = _v; } /* 0x100C197A: fstp qword ptr [ebp - 0x10] */
    fp_push(*(double*)ADDR(ebp + (-0x10))); /* 0x100C197D: fld qword ptr [ebp - 0x10] */
    { double _v = fp_pop(); _st[2] *= _v; } /* 0x100C1980: fmulp st(3) */
    fp_xch(2); /* 0x100C1982: fxch st(2) */
    _st[0] /= _st[1]; /* 0x100C1984: fdiv st(1) */
    { double _v = fp_pop(); _st[2] = _v - _st[2]; } /* 0x100C1986: fsubrp st(3) */
    /* cmp eax, esi */ /* 0x100C1988: cmp eax, esi */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_NE(_flag_a, _flag_b)) goto L_100C1969; /* 0x100C198A: jne 0x100c1969 */
L_100C198C:
    { _st[0] = _st[0]; g_st_i64[0] = g_st_i64[0]; fp_pop(); } /* 0x100C198C: fstp st(0) */
    { _st[0] = _st[0]; g_st_i64[0] = g_st_i64[0]; fp_pop(); } /* 0x100C198E: fstp st(0) */
    goto L_100C1A0B; /* 0x100C1990: jmp 0x100c1a0b */
L_100C1992:
    eax = esi + 0x24; /* 0x100C1992: lea eax, [esi + 0x24] */
    MEM32(ebp + 0x8) = esi; /* 0x100C1995: mov dword ptr [ebp + 8], esi */
    MEM32(ebp + (-0x4)) = eax; /* 0x100C1998: mov dword ptr [ebp - 4], eax */
    fp_push(_st[0]); /* 0x100C199B: fld st(0) */
    _st[0] *= _st[1]; /* 0x100C199D: fmul st(1) */
    /* cmp eax, esi */ /* 0x100C199F: cmp eax, esi */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_LE(_flag_a, _flag_b)) goto L_100C19C0; /* 0x100C19A1: jle 0x100c19c0 */
L_100C19A3:
    fp_push(0.0); /* 0x100C19A3: fldz  */
L_100C19A5:
    fp_push((double)(int32_t)MEM32(ebp + (-0x4))); /* 0x100C19A5: fild dword ptr [ebp - 4] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - 2; /* 0x100C19A8: sub eax, 2 */
    _flag_k = FK_CMP;
    MEM32(ebp + (-0x4)) = eax; /* 0x100C19AB: mov dword ptr [ebp - 4], eax */
    { double _v = fp_pop(); *(double*)ADDR(ebp + (-0x10)) = _v; } /* 0x100C19AE: fstp qword ptr [ebp - 0x10] */
    _st[0] = *(double*)ADDR(ebp + (-0x10)) - _st[0]; /* 0x100C19B1: fsubr qword ptr [ebp - 0x10] */
    fp_push(_st[1]); /* 0x100C19B4: fld st(1) */
    { double _v = fp_pop(); _st[0] = _st[0] == 0.0 ? _v : _v / _st[0]; } /* 0x100C19B6: fdivrp st(1) */
    /* cmp eax, esi */ /* 0x100C19B8: cmp eax, esi */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_G(_flag_a, _flag_b)) goto L_100C19A5; /* 0x100C19BA: jg 0x100c19a5 */
L_100C19BC:
    { _st[1] = _st[0]; g_st_i64[1] = g_st_i64[0]; fp_pop(); } /* 0x100C19BC: fstp st(1) */
    goto L_100C19C4; /* 0x100C19BE: jmp 0x100c19c4 */
L_100C19C0:
    { _st[0] = _st[0]; g_st_i64[0] = g_st_i64[0]; fp_pop(); } /* 0x100C19C0: fstp st(0) */
    fp_push(0.0); /* 0x100C19C2: fldz  */
L_100C19C4:
    fp_push((double)(int32_t)MEM32(ebp + 0x8)); /* 0x100C19C4: fild dword ptr [ebp + 8] */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(0xFFFFFFFEu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esi = esi + 0xFFFFFFFEu; /* 0x100C19C7: add esi, -2 */
    _flag_k = FK_ADD;
    MEM32(ebp + (-0x4)) = esi; /* 0x100C19CA: mov dword ptr [ebp - 4], esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi - 1; /* 0x100C19CD: dec esi */
    _flag_k = FK_DEC;
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi - 1; /* 0x100C19CE: dec esi */
    _flag_k = FK_DEC;
    { double _v = fp_pop(); *(double*)ADDR(ebp + (-0x10)) = _v; } /* 0x100C19CF: fstp qword ptr [ebp - 0x10] */
    _st[0] = *(double*)ADDR(ebp + (-0x10)) - _st[0]; /* 0x100C19D2: fsubr qword ptr [ebp - 0x10] */
    fp_push(_st[1]); /* 0x100C19D5: fld st(1) */
    { double _v = fp_pop(); _st[0] = _st[0] == 0.0 ? _v : _v / _st[0]; } /* 0x100C19D7: fdivrp st(1) */
    *(double*)ADDR(ebp + (-0x18)) = _st[0]; /* 0x100C19D9: fst qword ptr [ebp - 0x18] */
    fp_push(1.0); /* 0x100C19DC: fld1  */
    fp_push((double)(int32_t)MEM32(ebp + (-0x4))); /* 0x100C19DE: fild dword ptr [ebp - 4] */
    MEM32(ebp + (-0x4)) = esi; /* 0x100C19E1: mov dword ptr [ebp - 4], esi */
    { double _v = fp_pop(); *(double*)ADDR(ebp + (-0x10)) = _v; } /* 0x100C19E4: fstp qword ptr [ebp - 0x10] */
    fp_push(*(double*)ADDR(ebp + (-0x10))); /* 0x100C19E7: fld qword ptr [ebp - 0x10] */
    _st[0] /= _st[3]; /* 0x100C19EA: fdiv st(3) */
    { double _v = fp_pop(); _st[1] = _v - _st[1]; } /* 0x100C19EC: fsubrp st(2) */
    fp_xch(1); /* 0x100C19EE: fxch st(1) */
    *(double*)ADDR(ebp + (-0x10)) = _st[0]; /* 0x100C19F0: fst qword ptr [ebp - 0x10] */
    if (/* dec result */ CMP_NE(_flag_a, _flag_b)) goto L_100C1A12; /* 0x100C19F3: jne 0x100c1a12 */
L_100C19F5:
    { _st[0] = _st[0]; g_st_i64[0] = g_st_i64[0]; fp_pop(); } /* 0x100C19F5: fstp st(0) */
    { _st[0] = _st[0]; g_st_i64[0] = g_st_i64[0]; fp_pop(); } /* 0x100C19F7: fstp st(0) */
L_100C19F9:
    PUSH32(esp, ecx); /* 0x100C19F9: push ecx */
    PUSH32(esp, ecx); /* 0x100C19FA: push ecx */
    { double _v = fp_pop(); *(double*)ADDR(esp) = _v; } /* 0x100C19FB: fstp qword ptr [esp] */
    RECOMP_CALL(sub_100C15B5); /* 0x100C19FE: call 0x100c15b5 */
    RECOMP_FLAGS_IN();
    _st[0] *= *(double*)ADDR(ebp + (-0x18)); /* 0x100C1A03: fmul qword ptr [ebp - 0x18] */
    _st[0] /= *(double*)ADDR(ebp + (-0x10)); /* 0x100C1A06: fdiv qword ptr [ebp - 0x10] */
L_100C1A09:
    ecx = POP32_VAL(esp); /* 0x100C1A09: pop ecx */
    ecx = POP32_VAL(esp); /* 0x100C1A0A: pop ecx */
L_100C1A0B:
    esi = POP32_VAL(esp); /* 0x100C1A0B: pop esi */
    esp = ebp; /* 0x100C1A0C: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x100C1A0E: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x100C1A0F: ret  */
L_100C1A10:
    fp_xch(1); /* 0x100C1A10: fxch st(1) */
L_100C1A12:
    fp_push(_st[0]); /* 0x100C1A12: fld st(0) */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi - 1; /* 0x100C1A14: dec esi */
    _flag_k = FK_DEC;
    fp_push((double)(int32_t)MEM32(ebp + (-0x4))); /* 0x100C1A15: fild dword ptr [ebp - 4] */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi - 1; /* 0x100C1A18: dec esi */
    _flag_k = FK_DEC;
    MEM32(ebp + (-0x4)) = esi; /* 0x100C1A19: mov dword ptr [ebp - 4], esi */
    { double _v = fp_pop(); *(double*)ADDR(ebp + (-0x10)) = _v; } /* 0x100C1A1C: fstp qword ptr [ebp - 0x10] */
    fp_push(*(double*)ADDR(ebp + (-0x10))); /* 0x100C1A1F: fld qword ptr [ebp - 0x10] */
    { double _v = fp_pop(); _st[1] *= _v; } /* 0x100C1A22: fmulp st(2) */
    fp_xch(1); /* 0x100C1A24: fxch st(1) */
    _st[0] /= _st[3]; /* 0x100C1A26: fdiv st(3) */
    { double _v = fp_pop(); _st[1] = _v - _st[1]; } /* 0x100C1A28: fsubrp st(2) */
    RECOMP_BACKEDGE();
    if (/* dec result */ CMP_NE(_flag_a, _flag_b)) goto L_100C1A10; /* 0x100C1A2A: jne 0x100c1a10 */
L_100C1A2C:
    { _st[0] = _st[0]; g_st_i64[0] = g_st_i64[0]; fp_pop(); } /* 0x100C1A2C: fstp st(0) */
    { double _v = fp_pop(); *(double*)ADDR(ebp + (-0x10)) = _v; } /* 0x100C1A2E: fstp qword ptr [ebp - 0x10] */
    RECOMP_BACKEDGE();
    goto L_100C19F9; /* 0x100C1A31: jmp 0x100c19f9 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    RECOMP_REGS_OUT();
}

void sub_100C1A33(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x100C1A33u);

L_100C1A33:
    PUSH32(esp, ebp); /* 0x100C1A33: push ebp */
    ebp = esp; /* 0x100C1A34: mov ebp, esp */
    fp_push(0.0); /* 0x100C1A36: fldz  */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x20u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x20u; /* 0x100C1A38: sub esp, 0x20 */
    _flag_k = FK_CMP;
    fp_push(*(double*)ADDR(ebp + 0x8)); /* 0x100C1A3B: fld qword ptr [ebp + 8] */
    _fpu_cmp = FPU_CMP(_st[0], _st[1]); /* 0x100C1A3E: fcom st(1) */
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x100C1A40: fnstsw ax */
    { _st[1] = _st[0]; g_st_i64[1] = g_st_i64[0]; fp_pop(); } /* 0x100C1A42: fstp st(1) */
    /* test HI8(eax), 5 */ /* 0x100C1A44: test ah, 5 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(5) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (RECOMP_PF((_flag_a & _flag_b), 24)) goto L_100C1A68; /* 0x100C1A47: jp 0x100c1a68 */
L_100C1A49:
    fp_push(*(double*)ADDR(0x100E28D8)); /* 0x100C1A49: fld qword ptr [0x100e28d8] */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x10u; /* 0x100C1A4F: sub esp, 0x10 */
    _flag_k = FK_CMP;
    { double _v = fp_pop(); *(double*)ADDR(esp + 0x8) = _v; } /* 0x100C1A52: fstp qword ptr [esp + 8] */
    { double _v = fp_pop(); *(double*)ADDR(esp) = _v; } /* 0x100C1A56: fstp qword ptr [esp] */
    PUSH32(esp, 0x22u); /* 0x100C1A59: push 0x22 */
    RECOMP_CALL(sub_100C1E89); /* 0x100C1A5B: call 0x100c1e89 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x14u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x14u; /* 0x100C1A60: add esp, 0x14 */
    _flag_k = FK_ADD;
    goto L_100C1BDE; /* 0x100C1A63: jmp 0x100c1bde */
L_100C1A68:
    fp_push(*(double*)ADDR(0x10063C00)); /* 0x100C1A68: fld qword ptr [0x10063c00] */
    _fpu_cmp = FPU_CMP(_st[0], _st[1]); /* 0x100C1A6E: fcomp st(1) */
    fp_pop();
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x100C1A70: fnstsw ax */
    /* test HI8(eax), 1 */ /* 0x100C1A72: test ah, 1 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(1) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_100C1AEF; /* 0x100C1A75: jne 0x100c1aef */
L_100C1A77:
    fp_push(_st[0]); /* 0x100C1A77: fld st(0) */
    eax = 0x100E1F60u; /* 0x100C1A79: mov eax, 0x100e1f60 */
    _st[0] *= _st[1]; /* 0x100C1A7E: fmul st(1) */
    fp_push(*(double*)ADDR(0x100E1F68)); /* 0x100C1A80: fld qword ptr [0x100e1f68] */
    _st[0] *= _st[1]; /* 0x100C1A86: fmul st(1) */
L_100C1A88:
    _st[0] += *(double*)ADDR(eax); /* 0x100C1A88: fadd qword ptr [eax] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - 8; /* 0x100C1A8A: sub eax, 8 */
    _flag_k = FK_CMP;
    _st[0] *= _st[1]; /* 0x100C1A8D: fmul st(1) */
    /* cmp eax, 0x100E1F28u */ /* 0x100C1A8F: cmp eax, 0x100e1f28 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x100E1F28u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_G(_flag_a, _flag_b)) goto L_100C1A88; /* 0x100C1A94: jg 0x100c1a88 */
L_100C1A96:
    _st[0] += *(double*)ADDR(0x100E1F28); /* 0x100C1A96: fadd qword ptr [0x100e1f28] */
    eax = 0x100E1FA8u; /* 0x100C1A9C: mov eax, 0x100e1fa8 */
    fp_push(*(double*)ADDR(0x100E1FB0)); /* 0x100C1AA1: fld qword ptr [0x100e1fb0] */
    _st[0] *= _st[2]; /* 0x100C1AA7: fmul st(2) */
L_100C1AA9:
    _st[0] += *(double*)ADDR(eax); /* 0x100C1AA9: fadd qword ptr [eax] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - 8; /* 0x100C1AAB: sub eax, 8 */
    _flag_k = FK_CMP;
    _st[0] *= _st[2]; /* 0x100C1AAE: fmul st(2) */
    /* cmp eax, 0x100E1F70u */ /* 0x100C1AB0: cmp eax, 0x100e1f70 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x100E1F70u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_G(_flag_a, _flag_b)) goto L_100C1AA9; /* 0x100C1AB5: jg 0x100c1aa9 */
L_100C1AB7:
    { _st[2] = _st[0]; g_st_i64[2] = g_st_i64[0]; fp_pop(); } /* 0x100C1AB7: fstp st(2) */
    fp_push(*(double*)ADDR(0x100E1F70)); /* 0x100C1AB9: fld qword ptr [0x100e1f70] */
    { double _v = fp_pop(); _st[1] += _v; } /* 0x100C1ABF: faddp st(2) */
    PUSH32(esp, ecx); /* 0x100C1AC1: push ecx */
    PUSH32(esp, ecx); /* 0x100C1AC2: push ecx */
    { double _v = fp_pop(); _st[0] = _st[0] == 0.0 ? _v : _v / _st[0]; } /* 0x100C1AC3: fdivrp st(1) */
    { double _v = fp_pop(); *(double*)ADDR(ebp + (-0x10)) = _v; } /* 0x100C1AC5: fstp qword ptr [ebp - 0x10] */
    { double _v = fp_pop(); *(double*)ADDR(esp) = _v; } /* 0x100C1AC8: fstp qword ptr [esp] */
    RECOMP_CALL(sub_100C15B5); /* 0x100C1ACB: call 0x100c15b5 */
    RECOMP_FLAGS_IN();
    _st[0] *= *(double*)ADDR(0x10063BD8); /* 0x100C1AD0: fmul qword ptr [0x10063bd8] */
    { double _v = fp_pop(); *(double*)ADDR(ebp + (-0x8)) = _v; } /* 0x100C1AD6: fstp qword ptr [ebp - 8] */
    fp_push(*(double*)ADDR(ebp + 0x8)); /* 0x100C1AD9: fld qword ptr [ebp + 8] */
    { double _v = fp_pop(); *(double*)ADDR(esp) = _v; } /* 0x100C1ADC: fstp qword ptr [esp] */
    RECOMP_CALL(sub_100367A8); /* 0x100C1ADF: call 0x100367a8 */
    RECOMP_FLAGS_IN();
    _st[0] *= *(double*)ADDR(ebp + (-0x8)); /* 0x100C1AE4: fmul qword ptr [ebp - 8] */
    _st[0] += *(double*)ADDR(ebp + (-0x10)); /* 0x100C1AE7: fadd qword ptr [ebp - 0x10] */
    goto L_100C1BDC; /* 0x100C1AEA: jmp 0x100c1bdc */
L_100C1AEF:
    fp_push(*(double*)ADDR(0x10063C08)); /* 0x100C1AEF: fld qword ptr [0x10063c08] */
    eax = 0x100E1D48u; /* 0x100C1AF5: mov eax, 0x100e1d48 */
    _st[0] /= _st[1]; /* 0x100C1AFA: fdiv st(1) */
    *(double*)ADDR(ebp + (-0x10)) = _st[0]; /* 0x100C1AFC: fst qword ptr [ebp - 0x10] */
    fp_push(_st[0]); /* 0x100C1AFF: fld st(0) */
    { double _v = fp_pop(); _st[0] *= _v; } /* 0x100C1B01: fmulp st(1) */
    fp_push(*(double*)ADDR(0x100E1D50)); /* 0x100C1B03: fld qword ptr [0x100e1d50] */
    _st[0] *= _st[1]; /* 0x100C1B09: fmul st(1) */
L_100C1B0B:
    _st[0] += *(double*)ADDR(eax); /* 0x100C1B0B: fadd qword ptr [eax] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - 8; /* 0x100C1B0D: sub eax, 8 */
    _flag_k = FK_CMP;
    _st[0] *= _st[1]; /* 0x100C1B10: fmul st(1) */
    /* cmp eax, 0x100E1D28u */ /* 0x100C1B12: cmp eax, 0x100e1d28 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x100E1D28u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_G(_flag_a, _flag_b)) goto L_100C1B0B; /* 0x100C1B17: jg 0x100c1b0b */
L_100C1B19:
    _st[0] += *(double*)ADDR(0x100E1D28); /* 0x100C1B19: fadd qword ptr [0x100e1d28] */
    eax = 0x100E1D78u; /* 0x100C1B1F: mov eax, 0x100e1d78 */
    fp_push(*(double*)ADDR(0x100E1D80)); /* 0x100C1B24: fld qword ptr [0x100e1d80] */
    _st[0] *= _st[2]; /* 0x100C1B2A: fmul st(2) */
L_100C1B2C:
    _st[0] += *(double*)ADDR(eax); /* 0x100C1B2C: fadd qword ptr [eax] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - 8; /* 0x100C1B2E: sub eax, 8 */
    _flag_k = FK_CMP;
    _st[0] *= _st[2]; /* 0x100C1B31: fmul st(2) */
    /* cmp eax, 0x100E1D58u */ /* 0x100C1B33: cmp eax, 0x100e1d58 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x100E1D58u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_G(_flag_a, _flag_b)) goto L_100C1B2C; /* 0x100C1B38: jg 0x100c1b2c */
L_100C1B3A:
    _st[0] += *(double*)ADDR(0x100E1D58); /* 0x100C1B3A: fadd qword ptr [0x100e1d58] */
    eax = 0x100E1DA8u; /* 0x100C1B40: mov eax, 0x100e1da8 */
    { double _v = fp_pop(); _st[0] = _v == 0.0 ? _st[0] : _st[0] / _v; } /* 0x100C1B45: fdivp st(1) */
    { double _v = fp_pop(); *(double*)ADDR(ebp + (-0x20)) = _v; } /* 0x100C1B47: fstp qword ptr [ebp - 0x20] */
    fp_push(*(double*)ADDR(0x100E1DB0)); /* 0x100C1B4A: fld qword ptr [0x100e1db0] */
    _st[0] *= _st[1]; /* 0x100C1B50: fmul st(1) */
L_100C1B52:
    _st[0] += *(double*)ADDR(eax); /* 0x100C1B52: fadd qword ptr [eax] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - 8; /* 0x100C1B54: sub eax, 8 */
    _flag_k = FK_CMP;
    _st[0] *= _st[1]; /* 0x100C1B57: fmul st(1) */
    /* cmp eax, 0x100E1D88u */ /* 0x100C1B59: cmp eax, 0x100e1d88 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x100E1D88u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_G(_flag_a, _flag_b)) goto L_100C1B52; /* 0x100C1B5E: jg 0x100c1b52 */
L_100C1B60:
    _st[0] += *(double*)ADDR(0x100E1D88); /* 0x100C1B60: fadd qword ptr [0x100e1d88] */
    eax = 0x100E1DD8u; /* 0x100C1B66: mov eax, 0x100e1dd8 */
    fp_push(*(double*)ADDR(0x100E1DE0)); /* 0x100C1B6B: fld qword ptr [0x100e1de0] */
    _st[0] *= _st[2]; /* 0x100C1B71: fmul st(2) */
L_100C1B73:
    _st[0] += *(double*)ADDR(eax); /* 0x100C1B73: fadd qword ptr [eax] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - 8; /* 0x100C1B75: sub eax, 8 */
    _flag_k = FK_CMP;
    _st[0] *= _st[2]; /* 0x100C1B78: fmul st(2) */
    /* cmp eax, 0x100E1DB8u */ /* 0x100C1B7A: cmp eax, 0x100e1db8 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x100E1DB8u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_G(_flag_a, _flag_b)) goto L_100C1B73; /* 0x100C1B7F: jg 0x100c1b73 */
L_100C1B81:
    { _st[2] = _st[0]; g_st_i64[2] = g_st_i64[0]; fp_pop(); } /* 0x100C1B81: fstp st(2) */
    fp_push(*(double*)ADDR(0x100E1DB8)); /* 0x100C1B83: fld qword ptr [0x100e1db8] */
    { double _v = fp_pop(); _st[1] += _v; } /* 0x100C1B89: faddp st(2) */
    PUSH32(esp, ecx); /* 0x100C1B8B: push ecx */
    PUSH32(esp, ecx); /* 0x100C1B8C: push ecx */
    { double _v = fp_pop(); _st[0] = _st[0] == 0.0 ? _v : _v / _st[0]; } /* 0x100C1B8D: fdivrp st(1) */
    { double _v = fp_pop(); *(double*)ADDR(ebp + (-0x8)) = _v; } /* 0x100C1B8F: fstp qword ptr [ebp - 8] */
    _st[0] -= *(double*)ADDR(0x10063BE0); /* 0x100C1B92: fsub qword ptr [0x10063be0] */
    *(double*)ADDR(ebp + (-0x18)) = _st[0]; /* 0x100C1B98: fst qword ptr [ebp - 0x18] */
    { double _v = fp_pop(); *(double*)ADDR(esp) = _v; } /* 0x100C1B9B: fstp qword ptr [esp] */
    RECOMP_CALL(sub_10036596); /* 0x100C1B9E: call 0x10036596 */
    RECOMP_FLAGS_IN();
    fp_push(*(double*)ADDR(ebp + (-0x10))); /* 0x100C1BA3: fld qword ptr [ebp - 0x10] */
    _st[0] *= *(double*)ADDR(ebp + (-0x8)); /* 0x100C1BA6: fmul qword ptr [ebp - 8] */
    { double _v = fp_pop(); _st[0] *= _v; } /* 0x100C1BA9: fmulp st(1) */
    { double _v = fp_pop(); *(double*)ADDR(ebp + (-0x10)) = _v; } /* 0x100C1BAB: fstp qword ptr [ebp - 0x10] */
    fp_push(*(double*)ADDR(ebp + (-0x18))); /* 0x100C1BAE: fld qword ptr [ebp - 0x18] */
    { double _v = fp_pop(); *(double*)ADDR(esp) = _v; } /* 0x100C1BB1: fstp qword ptr [esp] */
    RECOMP_CALL(sub_10036CCF); /* 0x100C1BB4: call 0x10036ccf */
    RECOMP_FLAGS_IN();
    _st[0] *= *(double*)ADDR(ebp + (-0x20)); /* 0x100C1BB9: fmul qword ptr [ebp - 0x20] */
    _st[0] += *(double*)ADDR(ebp + (-0x10)); /* 0x100C1BBC: fadd qword ptr [ebp - 0x10] */
    { double _v = fp_pop(); *(double*)ADDR(ebp + (-0x20)) = _v; } /* 0x100C1BBF: fstp qword ptr [ebp - 0x20] */
    fp_push(*(double*)ADDR(ebp + 0x8)); /* 0x100C1BC2: fld qword ptr [ebp + 8] */
    _st[0] *= *(double*)ADDR(0x10063BF8); /* 0x100C1BC5: fmul qword ptr [0x10063bf8] */
    _st[0] = *(double*)ADDR(0x10063BE8) / _st[0]; /* 0x100C1BCB: fdivr qword ptr [0x10063be8] */
    { double _v = fp_pop(); *(double*)ADDR(esp) = _v; } /* 0x100C1BD1: fstp qword ptr [esp] */
    RECOMP_CALL(sub_10036E0B); /* 0x100C1BD4: call 0x10036e0b */
    RECOMP_FLAGS_IN();
    _st[0] *= *(double*)ADDR(ebp + (-0x20)); /* 0x100C1BD9: fmul qword ptr [ebp - 0x20] */
L_100C1BDC:
    ecx = POP32_VAL(esp); /* 0x100C1BDC: pop ecx */
    ecx = POP32_VAL(esp); /* 0x100C1BDD: pop ecx */
L_100C1BDE:
    esp = ebp; /* 0x100C1BDE: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x100C1BE0: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x100C1BE1: ret  */
    RECOMP_REGS_OUT();
}

void sub_100C1BE2(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x100C1BE2u);

L_100C1BE2:
    PUSH32(esp, ebp); /* 0x100C1BE2: push ebp */
    ebp = esp; /* 0x100C1BE3: mov ebp, esp */
    fp_push(0.0); /* 0x100C1BE5: fldz  */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x20u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x20u; /* 0x100C1BE7: sub esp, 0x20 */
    _flag_k = FK_CMP;
    fp_push(*(double*)ADDR(ebp + 0x8)); /* 0x100C1BEA: fld qword ptr [ebp + 8] */
    _fpu_cmp = FPU_CMP(_st[0], _st[1]); /* 0x100C1BED: fcom st(1) */
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x100C1BEF: fnstsw ax */
    { _st[1] = _st[0]; g_st_i64[1] = g_st_i64[0]; fp_pop(); } /* 0x100C1BF1: fstp st(1) */
    /* test HI8(eax), 5 */ /* 0x100C1BF3: test ah, 5 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(5) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (RECOMP_PF((_flag_a & _flag_b), 24)) goto L_100C1C17; /* 0x100C1BF6: jp 0x100c1c17 */
L_100C1BF8:
    fp_push(*(double*)ADDR(0x100E28D8)); /* 0x100C1BF8: fld qword ptr [0x100e28d8] */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x10u; /* 0x100C1BFE: sub esp, 0x10 */
    _flag_k = FK_CMP;
    { double _v = fp_pop(); *(double*)ADDR(esp + 0x8) = _v; } /* 0x100C1C01: fstp qword ptr [esp + 8] */
    { double _v = fp_pop(); *(double*)ADDR(esp) = _v; } /* 0x100C1C05: fstp qword ptr [esp] */
    PUSH32(esp, 0x23u); /* 0x100C1C08: push 0x23 */
    RECOMP_CALL(sub_100C1E89); /* 0x100C1C0A: call 0x100c1e89 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x14u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x14u; /* 0x100C1C0F: add esp, 0x14 */
    _flag_k = FK_ADD;
    goto L_100C1DA0; /* 0x100C1C12: jmp 0x100c1da0 */
L_100C1C17:
    fp_push(*(double*)ADDR(0x10063C00)); /* 0x100C1C17: fld qword ptr [0x10063c00] */
    _fpu_cmp = FPU_CMP(_st[0], _st[1]); /* 0x100C1C1D: fcomp st(1) */
    fp_pop();
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x100C1C1F: fnstsw ax */
    /* test HI8(eax), 1 */ /* 0x100C1C21: test ah, 1 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(1) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_100C1CB1; /* 0x100C1C24: jne 0x100c1cb1 */
L_100C1C2A:
    fp_push(_st[0]); /* 0x100C1C2A: fld st(0) */
    eax = 0x100E1FE8u; /* 0x100C1C2C: mov eax, 0x100e1fe8 */
    _st[0] *= _st[1]; /* 0x100C1C31: fmul st(1) */
    fp_push(*(double*)ADDR(0x100E1FF0)); /* 0x100C1C33: fld qword ptr [0x100e1ff0] */
    _st[0] *= _st[1]; /* 0x100C1C39: fmul st(1) */
L_100C1C3B:
    _st[0] += *(double*)ADDR(eax); /* 0x100C1C3B: fadd qword ptr [eax] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - 8; /* 0x100C1C3D: sub eax, 8 */
    _flag_k = FK_CMP;
    _st[0] *= _st[1]; /* 0x100C1C40: fmul st(1) */
    /* cmp eax, 0x100E1FB8u */ /* 0x100C1C42: cmp eax, 0x100e1fb8 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x100E1FB8u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_G(_flag_a, _flag_b)) goto L_100C1C3B; /* 0x100C1C47: jg 0x100c1c3b */
L_100C1C49:
    _st[0] += *(double*)ADDR(0x100E1FB8); /* 0x100C1C49: fadd qword ptr [0x100e1fb8] */
    eax = 0x100E2030u; /* 0x100C1C4F: mov eax, 0x100e2030 */
    fp_push(*(double*)ADDR(0x100E2038)); /* 0x100C1C54: fld qword ptr [0x100e2038] */
    _st[0] *= _st[2]; /* 0x100C1C5A: fmul st(2) */
L_100C1C5C:
    _st[0] += *(double*)ADDR(eax); /* 0x100C1C5C: fadd qword ptr [eax] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - 8; /* 0x100C1C5E: sub eax, 8 */
    _flag_k = FK_CMP;
    _st[0] *= _st[2]; /* 0x100C1C61: fmul st(2) */
    /* cmp eax, 0x100E1FF8u */ /* 0x100C1C63: cmp eax, 0x100e1ff8 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x100E1FF8u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_G(_flag_a, _flag_b)) goto L_100C1C5C; /* 0x100C1C68: jg 0x100c1c5c */
L_100C1C6A:
    { _st[2] = _st[0]; g_st_i64[2] = g_st_i64[0]; fp_pop(); } /* 0x100C1C6A: fstp st(2) */
    fp_push(*(double*)ADDR(0x100E1FF8)); /* 0x100C1C6C: fld qword ptr [0x100e1ff8] */
    { double _v = fp_pop(); _st[1] += _v; } /* 0x100C1C72: faddp st(2) */
    PUSH32(esp, ecx); /* 0x100C1C74: push ecx */
    PUSH32(esp, ecx); /* 0x100C1C75: push ecx */
    { double _v = fp_pop(); _st[0] = _st[0] == 0.0 ? _v : _v / _st[0]; } /* 0x100C1C76: fdivrp st(1) */
    { double _v = fp_pop(); *(double*)ADDR(ebp + (-0x10)) = _v; } /* 0x100C1C78: fstp qword ptr [ebp - 0x10] */
    { double _v = fp_pop(); *(double*)ADDR(esp) = _v; } /* 0x100C1C7B: fstp qword ptr [esp] */
    RECOMP_CALL(sub_100C1724); /* 0x100C1C7E: call 0x100c1724 */
    RECOMP_FLAGS_IN();
    { double _v = fp_pop(); *(double*)ADDR(ebp + (-0x8)) = _v; } /* 0x100C1C83: fstp qword ptr [ebp - 8] */
    fp_push(*(double*)ADDR(ebp + 0x8)); /* 0x100C1C86: fld qword ptr [ebp + 8] */
    { double _v = fp_pop(); *(double*)ADDR(esp) = _v; } /* 0x100C1C89: fstp qword ptr [esp] */
    RECOMP_CALL(sub_100367A8); /* 0x100C1C8C: call 0x100367a8 */
    RECOMP_FLAGS_IN();
    _st[0] *= *(double*)ADDR(ebp + (-0x8)); /* 0x100C1C91: fmul qword ptr [ebp - 8] */
    fp_push(1.0); /* 0x100C1C94: fld1  */
    fp_push(*(double*)ADDR(ebp + 0x8)); /* 0x100C1C96: fld qword ptr [ebp + 8] */
    _st[1] /= _st[0]; /* 0x100C1C99: fdiv st(1), st(0) */
    fp_xch(2); /* 0x100C1C9B: fxch st(2) */
    { double _v = fp_pop(); _st[0] = _v - _st[0]; } /* 0x100C1C9D: fsubrp st(1) */
    _st[0] *= *(double*)ADDR(0x10063BD8); /* 0x100C1C9F: fmul qword ptr [0x10063bd8] */
    fp_push(*(double*)ADDR(ebp + (-0x10))); /* 0x100C1CA5: fld qword ptr [ebp - 0x10] */
    { double _v = fp_pop(); _st[1] *= _v; } /* 0x100C1CA8: fmulp st(2) */
    { double _v = fp_pop(); _st[0] += _v; } /* 0x100C1CAA: faddp st(1) */
    goto L_100C1D9E; /* 0x100C1CAC: jmp 0x100c1d9e */
L_100C1CB1:
    fp_push(*(double*)ADDR(0x10063C08)); /* 0x100C1CB1: fld qword ptr [0x10063c08] */
    eax = 0x100E1E88u; /* 0x100C1CB7: mov eax, 0x100e1e88 */
    _st[0] /= _st[1]; /* 0x100C1CBC: fdiv st(1) */
    *(double*)ADDR(ebp + (-0x10)) = _st[0]; /* 0x100C1CBE: fst qword ptr [ebp - 0x10] */
    fp_push(_st[0]); /* 0x100C1CC1: fld st(0) */
    { double _v = fp_pop(); _st[0] *= _v; } /* 0x100C1CC3: fmulp st(1) */
    fp_push(*(double*)ADDR(0x100E1E90)); /* 0x100C1CC5: fld qword ptr [0x100e1e90] */
    _st[0] *= _st[1]; /* 0x100C1CCB: fmul st(1) */
L_100C1CCD:
    _st[0] += *(double*)ADDR(eax); /* 0x100C1CCD: fadd qword ptr [eax] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - 8; /* 0x100C1CCF: sub eax, 8 */
    _flag_k = FK_CMP;
    _st[0] *= _st[1]; /* 0x100C1CD2: fmul st(1) */
    /* cmp eax, 0x100E1E68u */ /* 0x100C1CD4: cmp eax, 0x100e1e68 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x100E1E68u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_G(_flag_a, _flag_b)) goto L_100C1CCD; /* 0x100C1CD9: jg 0x100c1ccd */
L_100C1CDB:
    _st[0] += *(double*)ADDR(0x100E1E68); /* 0x100C1CDB: fadd qword ptr [0x100e1e68] */
    eax = 0x100E1EB8u; /* 0x100C1CE1: mov eax, 0x100e1eb8 */
    fp_push(*(double*)ADDR(0x100E1EC0)); /* 0x100C1CE6: fld qword ptr [0x100e1ec0] */
    _st[0] *= _st[2]; /* 0x100C1CEC: fmul st(2) */
L_100C1CEE:
    _st[0] += *(double*)ADDR(eax); /* 0x100C1CEE: fadd qword ptr [eax] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - 8; /* 0x100C1CF0: sub eax, 8 */
    _flag_k = FK_CMP;
    _st[0] *= _st[2]; /* 0x100C1CF3: fmul st(2) */
    /* cmp eax, 0x100E1E98u */ /* 0x100C1CF5: cmp eax, 0x100e1e98 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x100E1E98u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_G(_flag_a, _flag_b)) goto L_100C1CEE; /* 0x100C1CFA: jg 0x100c1cee */
L_100C1CFC:
    _st[0] += *(double*)ADDR(0x100E1E98); /* 0x100C1CFC: fadd qword ptr [0x100e1e98] */
    eax = 0x100E1EE8u; /* 0x100C1D02: mov eax, 0x100e1ee8 */
    { double _v = fp_pop(); _st[0] = _v == 0.0 ? _st[0] : _st[0] / _v; } /* 0x100C1D07: fdivp st(1) */
    { double _v = fp_pop(); *(double*)ADDR(ebp + (-0x20)) = _v; } /* 0x100C1D09: fstp qword ptr [ebp - 0x20] */
    fp_push(*(double*)ADDR(0x100E1EF0)); /* 0x100C1D0C: fld qword ptr [0x100e1ef0] */
    _st[0] *= _st[1]; /* 0x100C1D12: fmul st(1) */
L_100C1D14:
    _st[0] += *(double*)ADDR(eax); /* 0x100C1D14: fadd qword ptr [eax] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - 8; /* 0x100C1D16: sub eax, 8 */
    _flag_k = FK_CMP;
    _st[0] *= _st[1]; /* 0x100C1D19: fmul st(1) */
    /* cmp eax, 0x100E1EC8u */ /* 0x100C1D1B: cmp eax, 0x100e1ec8 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x100E1EC8u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_G(_flag_a, _flag_b)) goto L_100C1D14; /* 0x100C1D20: jg 0x100c1d14 */
L_100C1D22:
    _st[0] += *(double*)ADDR(0x100E1EC8); /* 0x100C1D22: fadd qword ptr [0x100e1ec8] */
    eax = 0x100E1F18u; /* 0x100C1D28: mov eax, 0x100e1f18 */
    fp_push(*(double*)ADDR(0x100E1F20)); /* 0x100C1D2D: fld qword ptr [0x100e1f20] */
    _st[0] *= _st[2]; /* 0x100C1D33: fmul st(2) */
L_100C1D35:
    _st[0] += *(double*)ADDR(eax); /* 0x100C1D35: fadd qword ptr [eax] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - 8; /* 0x100C1D37: sub eax, 8 */
    _flag_k = FK_CMP;
    _st[0] *= _st[2]; /* 0x100C1D3A: fmul st(2) */
    /* cmp eax, 0x100E1EF8u */ /* 0x100C1D3C: cmp eax, 0x100e1ef8 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x100E1EF8u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_G(_flag_a, _flag_b)) goto L_100C1D35; /* 0x100C1D41: jg 0x100c1d35 */
L_100C1D43:
    { _st[2] = _st[0]; g_st_i64[2] = g_st_i64[0]; fp_pop(); } /* 0x100C1D43: fstp st(2) */
    fp_push(*(double*)ADDR(0x100E1EF8)); /* 0x100C1D45: fld qword ptr [0x100e1ef8] */
    { double _v = fp_pop(); _st[1] += _v; } /* 0x100C1D4B: faddp st(2) */
    PUSH32(esp, ecx); /* 0x100C1D4D: push ecx */
    PUSH32(esp, ecx); /* 0x100C1D4E: push ecx */
    { double _v = fp_pop(); _st[0] = _st[0] == 0.0 ? _v : _v / _st[0]; } /* 0x100C1D4F: fdivrp st(1) */
    { double _v = fp_pop(); *(double*)ADDR(ebp + (-0x8)) = _v; } /* 0x100C1D51: fstp qword ptr [ebp - 8] */
    _st[0] -= *(double*)ADDR(0x10063BF0); /* 0x100C1D54: fsub qword ptr [0x10063bf0] */
    *(double*)ADDR(ebp + (-0x18)) = _st[0]; /* 0x100C1D5A: fst qword ptr [ebp - 0x18] */
    { double _v = fp_pop(); *(double*)ADDR(esp) = _v; } /* 0x100C1D5D: fstp qword ptr [esp] */
    RECOMP_CALL(sub_10036596); /* 0x100C1D60: call 0x10036596 */
    RECOMP_FLAGS_IN();
    fp_push(*(double*)ADDR(ebp + (-0x10))); /* 0x100C1D65: fld qword ptr [ebp - 0x10] */
    _st[0] *= *(double*)ADDR(ebp + (-0x8)); /* 0x100C1D68: fmul qword ptr [ebp - 8] */
    { double _v = fp_pop(); _st[0] *= _v; } /* 0x100C1D6B: fmulp st(1) */
    { double _v = fp_pop(); *(double*)ADDR(ebp + (-0x10)) = _v; } /* 0x100C1D6D: fstp qword ptr [ebp - 0x10] */
    fp_push(*(double*)ADDR(ebp + (-0x18))); /* 0x100C1D70: fld qword ptr [ebp - 0x18] */
    { double _v = fp_pop(); *(double*)ADDR(esp) = _v; } /* 0x100C1D73: fstp qword ptr [esp] */
    RECOMP_CALL(sub_10036CCF); /* 0x100C1D76: call 0x10036ccf */
    RECOMP_FLAGS_IN();
    _st[0] *= *(double*)ADDR(ebp + (-0x20)); /* 0x100C1D7B: fmul qword ptr [ebp - 0x20] */
    _st[0] += *(double*)ADDR(ebp + (-0x10)); /* 0x100C1D7E: fadd qword ptr [ebp - 0x10] */
    { double _v = fp_pop(); *(double*)ADDR(ebp + (-0x20)) = _v; } /* 0x100C1D81: fstp qword ptr [ebp - 0x20] */
    fp_push(*(double*)ADDR(ebp + 0x8)); /* 0x100C1D84: fld qword ptr [ebp + 8] */
    _st[0] *= *(double*)ADDR(0x10063BF8); /* 0x100C1D87: fmul qword ptr [0x10063bf8] */
    _st[0] = *(double*)ADDR(0x10063BE8) / _st[0]; /* 0x100C1D8D: fdivr qword ptr [0x10063be8] */
    { double _v = fp_pop(); *(double*)ADDR(esp) = _v; } /* 0x100C1D93: fstp qword ptr [esp] */
    RECOMP_CALL(sub_10036E0B); /* 0x100C1D96: call 0x10036e0b */
    RECOMP_FLAGS_IN();
    _st[0] *= *(double*)ADDR(ebp + (-0x20)); /* 0x100C1D9B: fmul qword ptr [ebp - 0x20] */
L_100C1D9E:
    ecx = POP32_VAL(esp); /* 0x100C1D9E: pop ecx */
    ecx = POP32_VAL(esp); /* 0x100C1D9F: pop ecx */
L_100C1DA0:
    esp = ebp; /* 0x100C1DA0: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x100C1DA2: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x100C1DA3: ret  */
    RECOMP_REGS_OUT();
}

void sub_100C1DA4(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x100C1DA4u);

L_100C1DA4:
    PUSH32(esp, ebp); /* 0x100C1DA4: push ebp */
    ebp = esp; /* 0x100C1DA5: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x14u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x14u; /* 0x100C1DA7: sub esp, 0x14 */
    _flag_k = FK_CMP;
    fp_push(0.0); /* 0x100C1DAA: fldz  */
    *(double*)ADDR(ebp + (-0xC)) = _st[0]; /* 0x100C1DAC: fst qword ptr [ebp - 0xc] */
    fp_push(*(double*)ADDR(ebp + 0xC)); /* 0x100C1DAF: fld qword ptr [ebp + 0xc] */
    _fpu_cmp = FPU_CMP(_st[0], _st[1]); /* 0x100C1DB2: fcom st(1) */
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x100C1DB4: fnstsw ax */
    { _st[1] = _st[0]; g_st_i64[1] = g_st_i64[0]; fp_pop(); } /* 0x100C1DB6: fstp st(1) */
    /* test HI8(eax), 5 */ /* 0x100C1DB8: test ah, 5 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(5) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (RECOMP_PF((_flag_a & _flag_b), 24)) goto L_100C1DDC; /* 0x100C1DBB: jp 0x100c1ddc */
L_100C1DBD:
    fp_push(*(double*)ADDR(0x100E28D8)); /* 0x100C1DBD: fld qword ptr [0x100e28d8] */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x10u; /* 0x100C1DC3: sub esp, 0x10 */
    _flag_k = FK_CMP;
    { double _v = fp_pop(); *(double*)ADDR(esp + 0x8) = _v; } /* 0x100C1DC6: fstp qword ptr [esp + 8] */
    { double _v = fp_pop(); *(double*)ADDR(esp) = _v; } /* 0x100C1DCA: fstp qword ptr [esp] */
    PUSH32(esp, 0x24u); /* 0x100C1DCD: push 0x24 */
    RECOMP_CALL(sub_100C1E89); /* 0x100C1DCF: call 0x100c1e89 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x14u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x14u; /* 0x100C1DD4: add esp, 0x14 */
    _flag_k = FK_ADD;
    goto L_100C1E81; /* 0x100C1DD7: jmp 0x100c1e81 */
L_100C1DDC:
    PUSH32(esp, ebx); /* 0x100C1DDC: push ebx */
    ebx = MEM32(ebp + 0x8); /* 0x100C1DDD: mov ebx, dword ptr [ebp + 8] */
    PUSH32(esp, esi); /* 0x100C1DE0: push esi */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    esi = 0; /* 0x100C1DE1: xor esi, esi */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi + 1; /* 0x100C1DE3: inc esi */
    _flag_k = FK_INC;
    MEM32(ebp + (-0x4)) = esi; /* 0x100C1DE4: mov dword ptr [ebp - 4], esi */
    /* test ebx, ebx */ /* 0x100C1DE7: test ebx, ebx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ebx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) == 0u)) goto L_100C1DF8; /* 0x100C1DE9: jns 0x100c1df8 */
L_100C1DEB:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(ebx);
    _cf = (ebx) != 0;
    ebx = (uint32_t)(-(int32_t)ebx); /* 0x100C1DEB: neg ebx */
    _flag_k = FK_CMP;
    /* test LO8(ebx), 1 */ /* 0x100C1DED: test bl, 1 */
    _flag_a = (uint32_t)(LO8(ebx)) << 24; _flag_b = (uint32_t)(1) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_100C1DF6; /* 0x100C1DF0: je 0x100c1df6 */
L_100C1DF2:
    _flag_a = (uint32_t)((MEM32(ebp + (-0x4)) | 0xFFFFFFFFu)); _flag_b = (uint32_t)((MEM32(ebp + (-0x4)) | 0xFFFFFFFFu));
    MEM32(ebp + (-0x4)) = MEM32(ebp + (-0x4)) | 0xFFFFFFFFu; /* 0x100C1DF2: or dword ptr [ebp - 4], 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
L_100C1DF6:
    /* test ebx, ebx */ /* 0x100C1DF6: test ebx, ebx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ebx);
    _cf = 0;
    _flag_k = FK_TEST;
L_100C1DF8:
    PUSH32(esp, ecx); /* 0x100C1DF8: push ecx */
    PUSH32(esp, ecx); /* 0x100C1DF9: push ecx */
    { double _v = fp_pop(); *(double*)ADDR(esp) = _v; } /* 0x100C1DFA: fstp qword ptr [esp] */
    if (recomp_cond_cf(_flag_k, _flag_a, _flag_b, CC_NE, _cf)) goto L_100C1E11; /* 0x100C1DFD: jne 0x100c1e11 */
L_100C1DFF:
    RECOMP_CALL(sub_100C1A33); /* 0x100C1DFF: call 0x100c1a33 */
    RECOMP_FLAGS_IN();
    fp_push((double)(int32_t)MEM32(ebp + (-0x4))); /* 0x100C1E04: fild dword ptr [ebp - 4] */
    ecx = POP32_VAL(esp); /* 0x100C1E07: pop ecx */
    ecx = POP32_VAL(esp); /* 0x100C1E08: pop ecx */
    { double _v = fp_pop(); *(double*)ADDR(ebp + 0xC) = _v; } /* 0x100C1E09: fstp qword ptr [ebp + 0xc] */
    _st[0] *= *(double*)ADDR(ebp + 0xC); /* 0x100C1E0C: fmul qword ptr [ebp + 0xc] */
    goto L_100C1E7F; /* 0x100C1E0F: jmp 0x100c1e7f */
L_100C1E11:
    /* cmp ebx, esi */ /* 0x100C1E11: cmp ebx, esi */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_100C1E27; /* 0x100C1E13: jne 0x100c1e27 */
L_100C1E15:
    RECOMP_CALL(sub_100C1BE2); /* 0x100C1E15: call 0x100c1be2 */
    RECOMP_FLAGS_IN();
    fp_push((double)(int32_t)MEM32(ebp + (-0x4))); /* 0x100C1E1A: fild dword ptr [ebp - 4] */
    ecx = POP32_VAL(esp); /* 0x100C1E1D: pop ecx */
    ecx = POP32_VAL(esp); /* 0x100C1E1E: pop ecx */
    { double _v = fp_pop(); *(double*)ADDR(ebp + 0xC) = _v; } /* 0x100C1E1F: fstp qword ptr [ebp + 0xc] */
    _st[0] *= *(double*)ADDR(ebp + 0xC); /* 0x100C1E22: fmul qword ptr [ebp + 0xc] */
    goto L_100C1E7F; /* 0x100C1E25: jmp 0x100c1e7f */
L_100C1E27:
    RECOMP_CALL(sub_100C1A33); /* 0x100C1E27: call 0x100c1a33 */
    RECOMP_FLAGS_IN();
    { double _v = fp_pop(); *(double*)ADDR(ebp + (-0x14)) = _v; } /* 0x100C1E2C: fstp qword ptr [ebp - 0x14] */
    fp_push(*(double*)ADDR(ebp + 0xC)); /* 0x100C1E2F: fld qword ptr [ebp + 0xc] */
    { double _v = fp_pop(); *(double*)ADDR(esp) = _v; } /* 0x100C1E32: fstp qword ptr [esp] */
    RECOMP_CALL(sub_100C1BE2); /* 0x100C1E35: call 0x100c1be2 */
    RECOMP_FLAGS_IN();
    fp_push(*(double*)ADDR(0x10063BE8)); /* 0x100C1E3A: fld qword ptr [0x10063be8] */
    _st[0] /= *(double*)ADDR(ebp + 0xC); /* 0x100C1E40: fdiv qword ptr [ebp + 0xc] */
    MEM32(ebp + 0x10) = esi; /* 0x100C1E43: mov dword ptr [ebp + 0x10], esi */
    ecx = POP32_VAL(esp); /* 0x100C1E46: pop ecx */
    ecx = POP32_VAL(esp); /* 0x100C1E47: pop ecx */
    /* cmp ebx, esi */ /* 0x100C1E48: cmp ebx, esi */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_LE(_flag_a, _flag_b)) goto L_100C1E85; /* 0x100C1E4A: jle 0x100c1e85 */
L_100C1E4C:
    fp_push(*(double*)ADDR(ebp + (-0x14))); /* 0x100C1E4C: fld qword ptr [ebp - 0x14] */
    goto L_100C1E53; /* 0x100C1E4F: jmp 0x100c1e53 */
L_100C1E51:
    fp_xch(2); /* 0x100C1E51: fxch st(2) */
L_100C1E53:
    fp_push((double)(int32_t)MEM32(ebp + 0x10)); /* 0x100C1E53: fild dword ptr [ebp + 0x10] */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi + 1; /* 0x100C1E56: inc esi */
    _flag_k = FK_INC;
    { double _v = fp_pop(); *(double*)ADDR(ebp + 0xC) = _v; } /* 0x100C1E57: fstp qword ptr [ebp + 0xc] */
    fp_push(*(double*)ADDR(ebp + 0xC)); /* 0x100C1E5A: fld qword ptr [ebp + 0xc] */
    _st[0] *= _st[2]; /* 0x100C1E5D: fmul st(2) */
    MEM32(ebp + 0x10) = esi; /* 0x100C1E5F: mov dword ptr [ebp + 0x10], esi */
    _st[0] *= _st[3]; /* 0x100C1E62: fmul st(3) */
    { double _v = fp_pop(); _st[0] = _v - _st[0]; } /* 0x100C1E64: fsubrp st(1) */
    *(double*)ADDR(ebp + (-0xC)) = _st[0]; /* 0x100C1E66: fst qword ptr [ebp - 0xc] */
    /* cmp esi, ebx */ /* 0x100C1E69: cmp esi, ebx */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_L(_flag_a, _flag_b)) goto L_100C1E51; /* 0x100C1E6B: jl 0x100c1e51 */
L_100C1E6D:
    { _st[0] = _st[0]; g_st_i64[0] = g_st_i64[0]; fp_pop(); } /* 0x100C1E6D: fstp st(0) */
    { _st[0] = _st[0]; g_st_i64[0] = g_st_i64[0]; fp_pop(); } /* 0x100C1E6F: fstp st(0) */
L_100C1E71:
    { _st[0] = _st[0]; g_st_i64[0] = g_st_i64[0]; fp_pop(); } /* 0x100C1E71: fstp st(0) */
    fp_push((double)(int32_t)MEM32(ebp + (-0x4))); /* 0x100C1E73: fild dword ptr [ebp - 4] */
    { double _v = fp_pop(); *(double*)ADDR(ebp + 0xC) = _v; } /* 0x100C1E76: fstp qword ptr [ebp + 0xc] */
    fp_push(*(double*)ADDR(ebp + 0xC)); /* 0x100C1E79: fld qword ptr [ebp + 0xc] */
    _st[0] *= *(double*)ADDR(ebp + (-0xC)); /* 0x100C1E7C: fmul qword ptr [ebp - 0xc] */
L_100C1E7F:
    esi = POP32_VAL(esp); /* 0x100C1E7F: pop esi */
    ebx = POP32_VAL(esp); /* 0x100C1E80: pop ebx */
L_100C1E81:
    esp = ebp; /* 0x100C1E81: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x100C1E83: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x100C1E84: ret  */
L_100C1E85:
    { _st[1] = _st[0]; g_st_i64[1] = g_st_i64[0]; fp_pop(); } /* 0x100C1E85: fstp st(1) */
    RECOMP_BACKEDGE();
    goto L_100C1E71; /* 0x100C1E87: jmp 0x100c1e71 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    RECOMP_REGS_OUT();
}

void sub_100C1E89(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x100C1E89u);

L_100C1E89:
    PUSH32(esp, ebp); /* 0x100C1E89: push ebp */
    ebp = esp; /* 0x100C1E8A: mov ebp, esp */
    PUSH32(esp, 0xFFFFu); /* 0x100C1E8C: push 0xffff */
    PUSH32(esp, 0x133Fu); /* 0x100C1E91: push 0x133f */
    RECOMP_CALL(sub_100D3175); /* 0x100C1E96: call 0x100d3175 */
    RECOMP_FLAGS_IN();
    fp_push(*(double*)ADDR(ebp + 0x14)); /* 0x100C1E9B: fld qword ptr [ebp + 0x14] */
    ecx = POP32_VAL(esp); /* 0x100C1E9E: pop ecx */
    ecx = POP32_VAL(esp); /* 0x100C1E9F: pop ecx */
    PUSH32(esp, eax); /* 0x100C1EA0: push eax */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x10u; /* 0x100C1EA1: sub esp, 0x10 */
    _flag_k = FK_CMP;
    { double _v = fp_pop(); *(double*)ADDR(esp + 0x8) = _v; } /* 0x100C1EA4: fstp qword ptr [esp + 8] */
    fp_push(*(double*)ADDR(ebp + 0xC)); /* 0x100C1EA8: fld qword ptr [ebp + 0xc] */
    { double _v = fp_pop(); *(double*)ADDR(esp) = _v; } /* 0x100C1EAB: fstp qword ptr [esp] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x100C1EAE: push dword ptr [ebp + 8] */
    PUSH32(esp, 8); /* 0x100C1EB1: push 8 */
    RECOMP_CALL(sub_100C006F); /* 0x100C1EB3: call 0x100c006f */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x1Cu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x1Cu; /* 0x100C1EB8: add esp, 0x1c */
    _flag_k = FK_ADD;
    ebp = POP32_VAL(esp); /* 0x100C1EBB: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x100C1EBC: ret  */
    RECOMP_REGS_OUT();
}

void sub_100C1EBD(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x100C1EBDu);

L_100C1EBD:
    PUSH32(esp, ebp); /* 0x100C1EBD: push ebp */
    ebp = esp; /* 0x100C1EBE: mov ebp, esp */
    eax = ebp + 0x8; /* 0x100C1EC0: lea eax, [ebp + 8] */
    PUSH32(esp, eax); /* 0x100C1EC3: push eax */
    RECOMP_CALL(sub_100C0034); /* 0x100C1EC4: call 0x100c0034 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x100C1EC9: pop ecx */
    ebp = POP32_VAL(esp); /* 0x100C1ECA: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x100C1ECB: ret  */
    RECOMP_REGS_OUT();
}

void sub_100C1ECC(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x100C1ECCu);

L_100C1ECC:
    PUSH32(esp, ebp); /* 0x100C1ECC: push ebp */
    ebp = esp; /* 0x100C1ECD: mov ebp, esp */
    eax = ebp + 0x8; /* 0x100C1ECF: lea eax, [ebp + 8] */
    PUSH32(esp, esi); /* 0x100C1ED2: push esi */
    PUSH32(esp, eax); /* 0x100C1ED3: push eax */
    RECOMP_CALL(sub_100C0034); /* 0x100C1ED4: call 0x100c0034 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x100C1ED9: pop ecx */
    PUSH32(esp, 2); /* 0x100C1EDA: push 2 */
    esi = POP32_VAL(esp); /* 0x100C1EDC: pop esi */
    /* cmp LO16(eax), LO16(esi) */ /* 0x100C1EDD: cmp ax, si */
    _flag_a = (uint32_t)(LO16(eax)) << 16; _flag_b = (uint32_t)(LO16(esi)) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_100C1F1B; /* 0x100C1EE0: je 0x100c1f1b */
L_100C1EE2:
    eax = ebp + 0x10; /* 0x100C1EE2: lea eax, [ebp + 0x10] */
    PUSH32(esp, eax); /* 0x100C1EE5: push eax */
    RECOMP_CALL(sub_100C0034); /* 0x100C1EE6: call 0x100c0034 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x100C1EEB: pop ecx */
    /* cmp LO16(eax), LO16(esi) */ /* 0x100C1EEC: cmp ax, si */
    _flag_a = (uint32_t)(LO16(eax)) << 16; _flag_b = (uint32_t)(LO16(esi)) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_100C1F1B; /* 0x100C1EEF: je 0x100c1f1b */
L_100C1EF1:
    fp_push(*(double*)ADDR(ebp + 0x10)); /* 0x100C1EF1: fld qword ptr [ebp + 0x10] */
    fp_push(*(double*)ADDR(ebp + 0x8)); /* 0x100C1EF4: fld qword ptr [ebp + 8] */
    _fpu_cmp = FPU_CMP(_st[0], _st[1]); /* 0x100C1EF7: fcom st(1) */
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x100C1EF9: fnstsw ax */
    /* test HI8(eax), 5 */ /* 0x100C1EFB: test ah, 5 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(5) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (RECOMP_PF((_flag_a & _flag_b), 24)) goto L_100C1F09; /* 0x100C1EFE: jp 0x100c1f09 */
L_100C1F00:
    { _st[1] = _st[0]; g_st_i64[1] = g_st_i64[0]; fp_pop(); } /* 0x100C1F00: fstp st(1) */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x100C1F02: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    { _st[0] = _st[0]; g_st_i64[0] = g_st_i64[0]; fp_pop(); } /* 0x100C1F04: fstp st(0) */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x100C1F06: inc eax */
    _flag_k = FK_INC;
    goto L_100C1F1D; /* 0x100C1F07: jmp 0x100c1f1d */
L_100C1F09:
    _fpu_cmp = FPU_CMP(_st[0], _st[1]); /* 0x100C1F09: fcompp  */
    fp_pop(); fp_pop();
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x100C1F0B: fnstsw ax */
    /* test HI8(eax), 0x41u */ /* 0x100C1F0D: test ah, 0x41 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(0x41u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_100C1F17; /* 0x100C1F10: jne 0x100c1f17 */
L_100C1F12:
    PUSH32(esp, 4); /* 0x100C1F12: push 4 */
    eax = POP32_VAL(esp); /* 0x100C1F14: pop eax */
    goto L_100C1F1D; /* 0x100C1F15: jmp 0x100c1f1d */
L_100C1F17:
    eax = esi; /* 0x100C1F17: mov eax, esi */
    goto L_100C1F1D; /* 0x100C1F19: jmp 0x100c1f1d */
L_100C1F1B:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x100C1F1B: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
L_100C1F1D:
    esi = POP32_VAL(esp); /* 0x100C1F1D: pop esi */
    ebp = POP32_VAL(esp); /* 0x100C1F1E: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x100C1F1F: ret  */
    RECOMP_REGS_OUT();
}

void sub_100C1F20(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x100C1F20u);

L_100C1F20:
    fp_push(*(double*)ADDR(0x10065B98)); /* 0x100C1F20: fld qword ptr [0x10065b98] */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x100C1F26: ret  */
    RECOMP_REGS_OUT();
}

void sub_100C1F27(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x100C1F27u);

L_100C1F27:
    PUSH32(esp, ebp); /* 0x100C1F27: push ebp */
    ebp = esp; /* 0x100C1F28: mov ebp, esp */
    eax = MEM32(ebp + 0x8); /* 0x100C1F2A: mov eax, dword ptr [ebp + 8] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x100C1F2D: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp MEM32(0x100DF7C0), 1 */ /* 0x100C1F2F: cmp dword ptr [0x100df7c0], 1 */
    _flag_a = (uint32_t)(MEM32(0x100DF7C0)); _flag_b = (uint32_t)(1);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    SET_LO8(ecx, (CMP_GE(_flag_a, _flag_b)) ? 1 : 0); /* 0x100C1F36: setge cl */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(eax);
    _cf = (eax) != 0;
    eax = (uint32_t)(-(int32_t)eax); /* 0x100C1F39: neg eax */
    _flag_k = FK_CMP;
    { uint32_t _sa = eax, _sb = eax, _sc = (uint32_t)CMP_B(_flag_a, _flag_b); /* 0x100C1F3B: sbb eax, eax */
      eax = _sc ? 0xFFFFFFFFu : 0;
      _flag_a = recomp_flags_sbb(_sa, _sb, _sc); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ecx);
    eax = eax & ecx; /* 0x100C1F3D: and eax, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(0x100E065C) = eax; /* 0x100C1F3F: mov dword ptr [0x100e065c], eax */
    ebp = POP32_VAL(esp); /* 0x100C1F44: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x100C1F45: ret  */
    RECOMP_REGS_OUT();
}

void sub_100C1F46(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x100C1F46u);

L_100C1F46:
    PUSH32(esp, ebp); /* 0x100C1F46: push ebp */
    ebp = esp; /* 0x100C1F47: mov ebp, esp */
    PUSH32(esp, ecx); /* 0x100C1F49: push ecx */
    PUSH32(esp, ecx); /* 0x100C1F4A: push ecx */
    eax = ebp + 0x8; /* 0x100C1F4B: lea eax, [ebp + 8] */
    PUSH32(esp, eax); /* 0x100C1F4E: push eax */
    RECOMP_CALL(sub_100BFE08); /* 0x100C1F4F: call 0x100bfe08 */
    RECOMP_FLAGS_IN();
    eax = (uint32_t)(int32_t)(int16_t)LO16(eax); /* 0x100C1F54: cwde  */
    ecx = POP32_VAL(esp); /* 0x100C1F55: pop ecx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax - 1; /* 0x100C1F56: dec eax */
    _flag_k = FK_DEC;
    if (/* dec result */ CMP_EQ(_flag_a, _flag_b)) goto L_100C1F64; /* 0x100C1F57: je 0x100c1f64 */
L_100C1F59:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax - 1; /* 0x100C1F59: dec eax */
    _flag_k = FK_DEC;
L_100C1F5A:
    if (recomp_cond_cf(_flag_k, _flag_a, _flag_b, CC_NE, _cf)) goto L_100C1F71; /* 0x100C1F5A: jne 0x100c1f71 */
L_100C1F5C:
    fp_push(*(double*)ADDR(ebp + 0x8)); /* 0x100C1F5C: fld qword ptr [ebp + 8] */
    goto L_100C1FEE; /* 0x100C1F5F: jmp 0x100c1fee */
L_100C1F64:
    eax = MEM32(ebp + 0xE); /* 0x100C1F64: mov eax, dword ptr [ebp + 0xe] */
    eax = (uint32_t)LO16(eax); /* 0x100C1F67: movzx eax, ax */
    /* test eax, 0x8000u */ /* 0x100C1F6A: test eax, 0x8000 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x8000u);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    goto L_100C1F5A; /* 0x100C1F6F: jmp 0x100c1f5a */
L_100C1F71:
    fp_push(1.0); /* 0x100C1F71: fld1  */
    fp_push(*(double*)ADDR(ebp + 0x8)); /* 0x100C1F73: fld qword ptr [ebp + 8] */
    _fpu_cmp = FPU_CMP(_st[0], _st[1]); /* 0x100C1F76: fcom st(1) */
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x100C1F78: fnstsw ax */
    /* test HI8(eax), 5 */ /* 0x100C1F7A: test ah, 5 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(5) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (RECOMP_PF((_flag_a & _flag_b), 24)) goto L_100C1F92; /* 0x100C1F7D: jp 0x100c1f92 */
L_100C1F7F:
    { _st[0] = _st[0]; g_st_i64[0] = g_st_i64[0]; fp_pop(); } /* 0x100C1F7F: fstp st(0) */
    PUSH32(esp, 1); /* 0x100C1F81: push 1 */
    { _st[0] = _st[0]; g_st_i64[0] = g_st_i64[0]; fp_pop(); } /* 0x100C1F83: fstp st(0) */
    RECOMP_CALL(sub_100BFFA8); /* 0x100C1F85: call 0x100bffa8 */
    RECOMP_FLAGS_IN();
    fp_push(*(double*)ADDR(0x10065B58)); /* 0x100C1F8A: fld qword ptr [0x10065b58] */
    goto L_100C1FED; /* 0x100C1F90: jmp 0x100c1fed */
L_100C1F92:
    _fpu_cmp = FPU_CMP(_st[0], _st[1]); /* 0x100C1F92: fucom st(1) */
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x100C1F94: fnstsw ax */
    /* test HI8(eax), 0x44u */ /* 0x100C1F96: test ah, 0x44 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(0x44u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (RECOMP_PF((_flag_a & _flag_b), 24)) goto L_100C1FA3; /* 0x100C1F99: jp 0x100c1fa3 */
L_100C1F9B:
    { _st[0] = _st[0]; g_st_i64[0] = g_st_i64[0]; fp_pop(); } /* 0x100C1F9B: fstp st(0) */
    { _st[0] = _st[0]; g_st_i64[0] = g_st_i64[0]; fp_pop(); } /* 0x100C1F9D: fstp st(0) */
    fp_push(0.0); /* 0x100C1F9F: fldz  */
    goto L_100C1FEE; /* 0x100C1FA1: jmp 0x100c1fee */
L_100C1FA3:
    fp_push(*(double*)ADDR(0x10063BE8)); /* 0x100C1FA3: fld qword ptr [0x10063be8] */
    _st[0] /= *(double*)ADDR(0x10065BA8); /* 0x100C1FA9: fdiv qword ptr [0x10065ba8] */
    PUSH32(esp, ecx); /* 0x100C1FAF: push ecx */
    PUSH32(esp, ecx); /* 0x100C1FB0: push ecx */
    _fpu_cmp = FPU_CMP(_st[0], _st[1]); /* 0x100C1FB1: fcomp st(1) */
    fp_pop();
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x100C1FB3: fnstsw ax */
    /* test HI8(eax), 0x41u */ /* 0x100C1FB5: test ah, 0x41 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(0x41u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_100C1FDC; /* 0x100C1FB8: jne 0x100c1fdc */
L_100C1FBA:
    fp_push(_st[0]); /* 0x100C1FBA: fld st(0) */
    _st[0] -= _st[2]; /* 0x100C1FBC: fsub st(2) */
    *(double*)ADDR(ebp + (-0x8)) = _st[0]; /* 0x100C1FBE: fst qword ptr [ebp - 8] */
    fp_xch(1); /* 0x100C1FC1: fxch st(1) */
    { double _v = fp_pop(); _st[1] += _v; } /* 0x100C1FC3: faddp st(2) */
    { double _v = fp_pop(); _st[0] *= _v; } /* 0x100C1FC5: fmulp st(1) */
    { double _v = fp_pop(); *(double*)ADDR(esp) = _v; } /* 0x100C1FC7: fstp qword ptr [esp] */
    RECOMP_CALL(sub_10036E0B); /* 0x100C1FCA: call 0x10036e0b */
    RECOMP_FLAGS_IN();
    _st[0] += *(double*)ADDR(ebp + (-0x8)); /* 0x100C1FCF: fadd qword ptr [ebp - 8] */
    { double _v = fp_pop(); *(double*)ADDR(esp) = _v; } /* 0x100C1FD2: fstp qword ptr [esp] */
    RECOMP_CALL(sub_100CF1BD); /* 0x100C1FD5: call 0x100cf1bd */
    RECOMP_FLAGS_IN();
    goto L_100C1FEC; /* 0x100C1FDA: jmp 0x100c1fec */
L_100C1FDC:
    { _st[1] = _st[0]; g_st_i64[1] = g_st_i64[0]; fp_pop(); } /* 0x100C1FDC: fstp st(1) */
    { double _v = fp_pop(); *(double*)ADDR(esp) = _v; } /* 0x100C1FDE: fstp qword ptr [esp] */
    RECOMP_CALL(sub_100367A8); /* 0x100C1FE1: call 0x100367a8 */
    RECOMP_FLAGS_IN();
    _st[0] += *(double*)ADDR(0x10063C10); /* 0x100C1FE6: fadd qword ptr [0x10063c10] */
L_100C1FEC:
    ecx = POP32_VAL(esp); /* 0x100C1FEC: pop ecx */
L_100C1FED:
    ecx = POP32_VAL(esp); /* 0x100C1FED: pop ecx */
L_100C1FEE:
    esp = ebp; /* 0x100C1FEE: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x100C1FF0: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x100C1FF1: ret  */
    RECOMP_REGS_OUT();
}

void sub_100C1FF2(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x100C1FF2u);

L_100C1FF2:
    PUSH32(esp, ebp); /* 0x100C1FF2: push ebp */
    ebp = esp; /* 0x100C1FF3: mov ebp, esp */
    PUSH32(esp, ecx); /* 0x100C1FF5: push ecx */
    PUSH32(esp, ecx); /* 0x100C1FF6: push ecx */
    eax = ebp + 0x8; /* 0x100C1FF7: lea eax, [ebp + 8] */
    PUSH32(esp, eax); /* 0x100C1FFA: push eax */
    RECOMP_CALL(sub_100BFF5C); /* 0x100C1FFB: call 0x100bff5c */
    RECOMP_FLAGS_IN();
    eax = (uint32_t)(int32_t)(int16_t)LO16(eax); /* 0x100C2000: cwde  */
    ecx = POP32_VAL(esp); /* 0x100C2001: pop ecx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax - 1; /* 0x100C2002: dec eax */
    _flag_k = FK_DEC;
    if (/* dec result */ CMP_EQ(_flag_a, _flag_b)) goto L_100C2010; /* 0x100C2003: je 0x100c2010 */
L_100C2005:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax - 1; /* 0x100C2005: dec eax */
    _flag_k = FK_DEC;
L_100C2006:
    if (recomp_cond_cf(_flag_k, _flag_a, _flag_b, CC_NE, _cf)) goto L_100C201D; /* 0x100C2006: jne 0x100c201d */
L_100C2008:
    fp_push(*(float*)&MEM32(ebp + 0x8)); /* 0x100C2008: fld dword ptr [ebp + 8] */
    goto L_100C20AB; /* 0x100C200B: jmp 0x100c20ab */
L_100C2010:
    eax = MEM32(ebp + 0xA); /* 0x100C2010: mov eax, dword ptr [ebp + 0xa] */
    eax = (uint32_t)LO16(eax); /* 0x100C2013: movzx eax, ax */
    /* test eax, 0x8000u */ /* 0x100C2016: test eax, 0x8000 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x8000u);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    goto L_100C2006; /* 0x100C201B: jmp 0x100c2006 */
L_100C201D:
    fp_push(1.0); /* 0x100C201D: fld1  */
    fp_push(*(float*)&MEM32(ebp + 0x8)); /* 0x100C201F: fld dword ptr [ebp + 8] */
    _fpu_cmp = FPU_CMP(_st[0], _st[1]); /* 0x100C2022: fcom st(1) */
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x100C2024: fnstsw ax */
    /* test HI8(eax), 5 */ /* 0x100C2026: test ah, 5 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(5) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (RECOMP_PF((_flag_a & _flag_b), 24)) goto L_100C203E; /* 0x100C2029: jp 0x100c203e */
L_100C202B:
    { _st[1] = _st[0]; g_st_i64[1] = g_st_i64[0]; fp_pop(); } /* 0x100C202B: fstp st(1) */
    PUSH32(esp, 1); /* 0x100C202D: push 1 */
    { _st[0] = _st[0]; g_st_i64[0] = g_st_i64[0]; fp_pop(); } /* 0x100C202F: fstp st(0) */
    RECOMP_CALL(sub_100BFFA8); /* 0x100C2031: call 0x100bffa8 */
    RECOMP_FLAGS_IN();
    fp_push(*(float*)&MEM32(0x10065B78)); /* 0x100C2036: fld dword ptr [0x10065b78] */
    goto L_100C20AA; /* 0x100C203C: jmp 0x100c20aa */
L_100C203E:
    _fpu_cmp = FPU_CMP(_st[0], _st[1]); /* 0x100C203E: fucom st(1) */
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x100C2040: fnstsw ax */
    { _st[1] = _st[0]; g_st_i64[1] = g_st_i64[0]; fp_pop(); } /* 0x100C2042: fstp st(1) */
    /* test HI8(eax), 0x44u */ /* 0x100C2044: test ah, 0x44 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(0x44u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (RECOMP_PF((_flag_a & _flag_b), 24)) goto L_100C204F; /* 0x100C2047: jp 0x100c204f */
L_100C2049:
    { _st[0] = _st[0]; g_st_i64[0] = g_st_i64[0]; fp_pop(); } /* 0x100C2049: fstp st(0) */
    fp_push(0.0); /* 0x100C204B: fldz  */
    goto L_100C20AB; /* 0x100C204D: jmp 0x100c20ab */
L_100C204F:
    fp_push(*(float*)&MEM32(0x10065BC8)); /* 0x100C204F: fld dword ptr [0x10065bc8] */
    _st[0] = *(double*)ADDR(0x10063BE8) / _st[0]; /* 0x100C2055: fdivr qword ptr [0x10063be8] */
    PUSH32(esp, ecx); /* 0x100C205B: push ecx */
    _fpu_cmp = FPU_CMP(_st[0], _st[1]); /* 0x100C205C: fcomp st(1) */
    fp_pop();
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x100C205E: fnstsw ax */
    /* test HI8(eax), 0x41u */ /* 0x100C2060: test ah, 0x41 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(0x41u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_100C2096; /* 0x100C2063: jne 0x100c2096 */
L_100C2065:
    fp_push(_st[0]); /* 0x100C2065: fld st(0) */
    fp_push(1.0); /* 0x100C2067: fld1  */
    _st[1] -= _st[0]; /* 0x100C2069: fsub st(1), st(0) */
    fp_xch(1); /* 0x100C206B: fxch st(1) */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x4)) = _v; } /* 0x100C206D: fstp dword ptr [ebp - 4] */
    { double _v = fp_pop(); _st[0] += _v; } /* 0x100C2070: faddp st(1) */
    _st[0] *= (double)*(float*)ADDR(ebp + (-0x4)); /* 0x100C2072: fmul dword ptr [ebp - 4] */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x8)) = _v; } /* 0x100C2075: fstp dword ptr [ebp - 8] */
    fp_push(*(float*)&MEM32(ebp + (-0x8))); /* 0x100C2078: fld dword ptr [ebp - 8] */
    { float _v = (float)fp_pop(); *(float*)ADDR(esp) = _v; } /* 0x100C207B: fstp dword ptr [esp] */
    RECOMP_CALL(sub_100C20C9); /* 0x100C207E: call 0x100c20c9 */
    RECOMP_FLAGS_IN();
    _st[0] += (double)*(float*)ADDR(ebp + (-0x4)); /* 0x100C2083: fadd dword ptr [ebp - 4] */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x8)) = _v; } /* 0x100C2086: fstp dword ptr [ebp - 8] */
    fp_push(*(float*)&MEM32(ebp + (-0x8))); /* 0x100C2089: fld dword ptr [ebp - 8] */
    { float _v = (float)fp_pop(); *(float*)ADDR(esp) = _v; } /* 0x100C208C: fstp dword ptr [esp] */
    RECOMP_CALL(sub_100CF25E); /* 0x100C208F: call 0x100cf25e */
    RECOMP_FLAGS_IN();
    goto L_100C20AA; /* 0x100C2094: jmp 0x100c20aa */
L_100C2096:
    { float _v = (float)fp_pop(); *(float*)ADDR(esp) = _v; } /* 0x100C2096: fstp dword ptr [esp] */
    RECOMP_CALL(sub_100C20AF); /* 0x100C2099: call 0x100c20af */
    RECOMP_FLAGS_IN();
    _st[0] += *(double*)ADDR(0x10063C18); /* 0x100C209E: fadd qword ptr [0x10063c18] */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x8)) = _v; } /* 0x100C20A4: fstp dword ptr [ebp - 8] */
    fp_push(*(float*)&MEM32(ebp + (-0x8))); /* 0x100C20A7: fld dword ptr [ebp - 8] */
L_100C20AA:
    ecx = POP32_VAL(esp); /* 0x100C20AA: pop ecx */
L_100C20AB:
    esp = ebp; /* 0x100C20AB: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x100C20AD: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x100C20AE: ret  */
    RECOMP_REGS_OUT();
}

void sub_100C20AF(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x100C20AFu);

L_100C20AF:
    PUSH32(esp, ebp); /* 0x100C20AF: push ebp */
    ebp = esp; /* 0x100C20B0: mov ebp, esp */
    fp_push(*(float*)&MEM32(ebp + 0x8)); /* 0x100C20B2: fld dword ptr [ebp + 8] */
    PUSH32(esp, ecx); /* 0x100C20B5: push ecx */
    PUSH32(esp, ecx); /* 0x100C20B6: push ecx */
    { double _v = fp_pop(); *(double*)ADDR(esp) = _v; } /* 0x100C20B7: fstp qword ptr [esp] */
    RECOMP_CALL(sub_100367A8); /* 0x100C20BA: call 0x100367a8 */
    RECOMP_FLAGS_IN();
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + 0x8) = _v; } /* 0x100C20BF: fstp dword ptr [ebp + 8] */
    fp_push(*(float*)&MEM32(ebp + 0x8)); /* 0x100C20C2: fld dword ptr [ebp + 8] */
    ecx = POP32_VAL(esp); /* 0x100C20C5: pop ecx */
    ecx = POP32_VAL(esp); /* 0x100C20C6: pop ecx */
    ebp = POP32_VAL(esp); /* 0x100C20C7: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x100C20C8: ret  */
    RECOMP_REGS_OUT();
}

void sub_100C20C9(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x100C20C9u);

L_100C20C9:
    PUSH32(esp, ebp); /* 0x100C20C9: push ebp */
    ebp = esp; /* 0x100C20CA: mov ebp, esp */
    fp_push(*(float*)&MEM32(ebp + 0x8)); /* 0x100C20CC: fld dword ptr [ebp + 8] */
    PUSH32(esp, ecx); /* 0x100C20CF: push ecx */
    PUSH32(esp, ecx); /* 0x100C20D0: push ecx */
    { double _v = fp_pop(); *(double*)ADDR(esp) = _v; } /* 0x100C20D1: fstp qword ptr [esp] */
    RECOMP_CALL(sub_10036E0B); /* 0x100C20D4: call 0x10036e0b */
    RECOMP_FLAGS_IN();
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + 0x8) = _v; } /* 0x100C20D9: fstp dword ptr [ebp + 8] */
    fp_push(*(float*)&MEM32(ebp + 0x8)); /* 0x100C20DC: fld dword ptr [ebp + 8] */
    ecx = POP32_VAL(esp); /* 0x100C20DF: pop ecx */
    ecx = POP32_VAL(esp); /* 0x100C20E0: pop ecx */
    ebp = POP32_VAL(esp); /* 0x100C20E1: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x100C20E2: ret  */
    RECOMP_REGS_OUT();
}

void sub_100C20E3(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x100C20E3u);

L_100C20E3:
    PUSH32(esp, ebp); /* 0x100C20E3: push ebp */
    ebp = esp; /* 0x100C20E4: mov ebp, esp */
    PUSH32(esp, ecx); /* 0x100C20E6: push ecx */
    PUSH32(esp, ecx); /* 0x100C20E7: push ecx */
    eax = ebp + 0x8; /* 0x100C20E8: lea eax, [ebp + 8] */
    PUSH32(esp, eax); /* 0x100C20EB: push eax */
    RECOMP_CALL(sub_100C0034); /* 0x100C20EC: call 0x100c0034 */
    RECOMP_FLAGS_IN();
    eax = (uint32_t)(int32_t)(int16_t)LO16(eax); /* 0x100C20F1: cwde  */
    ecx = POP32_VAL(esp); /* 0x100C20F2: pop ecx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax - 1; /* 0x100C20F3: dec eax */
    _flag_k = FK_DEC;
    if (/* dec result */ CMP_EQ(_flag_a, _flag_b)) goto L_100C2101; /* 0x100C20F4: je 0x100c2101 */
L_100C20F6:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax - 1; /* 0x100C20F6: dec eax */
    _flag_k = FK_DEC;
L_100C20F7:
    if (recomp_cond_cf(_flag_k, _flag_a, _flag_b, CC_NE, _cf)) goto L_100C210E; /* 0x100C20F7: jne 0x100c210e */
L_100C20F9:
    fp_push(*(double*)ADDR(ebp + 0x8)); /* 0x100C20F9: fld qword ptr [ebp + 8] */
    goto L_100C218B; /* 0x100C20FC: jmp 0x100c218b */
L_100C2101:
    eax = MEM32(ebp + 0xE); /* 0x100C2101: mov eax, dword ptr [ebp + 0xe] */
    eax = (uint32_t)LO16(eax); /* 0x100C2104: movzx eax, ax */
    /* test eax, 0x8000u */ /* 0x100C2107: test eax, 0x8000 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x8000u);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    goto L_100C20F7; /* 0x100C210C: jmp 0x100c20f7 */
L_100C210E:
    fp_push(1.0); /* 0x100C210E: fld1  */
    fp_push(*(double*)ADDR(ebp + 0x8)); /* 0x100C2110: fld qword ptr [ebp + 8] */
    _fpu_cmp = FPU_CMP(_st[0], _st[1]); /* 0x100C2113: fcom st(1) */
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x100C2115: fnstsw ax */
    /* test HI8(eax), 5 */ /* 0x100C2117: test ah, 5 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(5) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (RECOMP_PF((_flag_a & _flag_b), 24)) goto L_100C212F; /* 0x100C211A: jp 0x100c212f */
L_100C211C:
    { _st[0] = _st[0]; g_st_i64[0] = g_st_i64[0]; fp_pop(); } /* 0x100C211C: fstp st(0) */
    PUSH32(esp, 1); /* 0x100C211E: push 1 */
    { _st[0] = _st[0]; g_st_i64[0] = g_st_i64[0]; fp_pop(); } /* 0x100C2120: fstp st(0) */
    RECOMP_CALL(sub_100BFFA8); /* 0x100C2122: call 0x100bffa8 */
    RECOMP_FLAGS_IN();
    fp_push(*(double*)ADDR(0x10065B98)); /* 0x100C2127: fld qword ptr [0x10065b98] */
    goto L_100C218A; /* 0x100C212D: jmp 0x100c218a */
L_100C212F:
    _fpu_cmp = FPU_CMP(_st[0], _st[1]); /* 0x100C212F: fucom st(1) */
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x100C2131: fnstsw ax */
    /* test HI8(eax), 0x44u */ /* 0x100C2133: test ah, 0x44 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(0x44u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (RECOMP_PF((_flag_a & _flag_b), 24)) goto L_100C2140; /* 0x100C2136: jp 0x100c2140 */
L_100C2138:
    { _st[0] = _st[0]; g_st_i64[0] = g_st_i64[0]; fp_pop(); } /* 0x100C2138: fstp st(0) */
    { _st[0] = _st[0]; g_st_i64[0] = g_st_i64[0]; fp_pop(); } /* 0x100C213A: fstp st(0) */
    fp_push(0.0); /* 0x100C213C: fldz  */
    goto L_100C218B; /* 0x100C213E: jmp 0x100c218b */
L_100C2140:
    fp_push(*(double*)ADDR(0x10063BE8)); /* 0x100C2140: fld qword ptr [0x10063be8] */
    _st[0] /= *(double*)ADDR(0x10065BE8); /* 0x100C2146: fdiv qword ptr [0x10065be8] */
    PUSH32(esp, ecx); /* 0x100C214C: push ecx */
    PUSH32(esp, ecx); /* 0x100C214D: push ecx */
    _fpu_cmp = FPU_CMP(_st[0], _st[1]); /* 0x100C214E: fcomp st(1) */
    fp_pop();
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x100C2150: fnstsw ax */
    /* test HI8(eax), 0x41u */ /* 0x100C2152: test ah, 0x41 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(0x41u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_100C2179; /* 0x100C2155: jne 0x100c2179 */
L_100C2157:
    fp_push(_st[0]); /* 0x100C2157: fld st(0) */
    _st[0] -= _st[2]; /* 0x100C2159: fsub st(2) */
    *(double*)ADDR(ebp + (-0x8)) = _st[0]; /* 0x100C215B: fst qword ptr [ebp - 8] */
    fp_xch(1); /* 0x100C215E: fxch st(1) */
    { double _v = fp_pop(); _st[1] += _v; } /* 0x100C2160: faddp st(2) */
    { double _v = fp_pop(); _st[0] *= _v; } /* 0x100C2162: fmulp st(1) */
    { double _v = fp_pop(); *(double*)ADDR(esp) = _v; } /* 0x100C2164: fstp qword ptr [esp] */
    RECOMP_CALL(sub_10036E0B); /* 0x100C2167: call 0x10036e0b */
    RECOMP_FLAGS_IN();
    _st[0] += *(double*)ADDR(ebp + (-0x8)); /* 0x100C216C: fadd qword ptr [ebp - 8] */
    { double _v = fp_pop(); *(double*)ADDR(esp) = _v; } /* 0x100C216F: fstp qword ptr [esp] */
    RECOMP_CALL(sub_100CF305); /* 0x100C2172: call 0x100cf305 */
    RECOMP_FLAGS_IN();
    goto L_100C2189; /* 0x100C2177: jmp 0x100c2189 */
L_100C2179:
    { _st[1] = _st[0]; g_st_i64[1] = g_st_i64[0]; fp_pop(); } /* 0x100C2179: fstp st(1) */
    { double _v = fp_pop(); *(double*)ADDR(esp) = _v; } /* 0x100C217B: fstp qword ptr [esp] */
    RECOMP_CALL(sub_100367A8); /* 0x100C217E: call 0x100367a8 */
    RECOMP_FLAGS_IN();
    _st[0] += *(double*)ADDR(0x10063C10); /* 0x100C2183: fadd qword ptr [0x10063c10] */
L_100C2189:
    ecx = POP32_VAL(esp); /* 0x100C2189: pop ecx */
L_100C218A:
    ecx = POP32_VAL(esp); /* 0x100C218A: pop ecx */
L_100C218B:
    esp = ebp; /* 0x100C218B: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x100C218D: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x100C218E: ret  */
    RECOMP_REGS_OUT();
}

void sub_100C218F(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x100C218Fu);

L_100C218F:
    PUSH32(esp, ebp); /* 0x100C218F: push ebp */
    ebp = esp; /* 0x100C2190: mov ebp, esp */
    PUSH32(esp, ecx); /* 0x100C2192: push ecx */
    PUSH32(esp, ecx); /* 0x100C2193: push ecx */
    eax = ebp + 0x8; /* 0x100C2194: lea eax, [ebp + 8] */
    PUSH32(esp, eax); /* 0x100C2197: push eax */
    RECOMP_CALL(sub_100BFE08); /* 0x100C2198: call 0x100bfe08 */
    RECOMP_FLAGS_IN();
    eax = (uint32_t)(int32_t)(int16_t)LO16(eax); /* 0x100C219D: cwde  */
    ecx = POP32_VAL(esp); /* 0x100C219E: pop ecx */
    /* cmp eax, 2 */ /* 0x100C219F: cmp eax, 2 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_A(_flag_a, _flag_b)) goto L_100C21A9; /* 0x100C21A2: ja 0x100c21a9 */
L_100C21A4:
    fp_push(*(double*)ADDR(ebp + 0x8)); /* 0x100C21A4: fld qword ptr [ebp + 8] */
    goto L_100C2215; /* 0x100C21A7: jmp 0x100c2215 */
L_100C21A9:
    fp_push(0.0); /* 0x100C21A9: fldz  */
    fp_push(*(double*)ADDR(ebp + 0x8)); /* 0x100C21AB: fld qword ptr [ebp + 8] */
    _fpu_cmp = FPU_CMP(_st[0], _st[1]); /* 0x100C21AE: fcom st(1) */
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x100C21B0: fnstsw ax */
    PUSH32(esp, esi); /* 0x100C21B2: push esi */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    esi = 0; /* 0x100C21B3: xor esi, esi */
    _cf = 0;
    _flag_k = FK_TEST;
    { _st[1] = _st[0]; g_st_i64[1] = g_st_i64[0]; fp_pop(); } /* 0x100C21B5: fstp st(1) */
    /* test HI8(eax), 5 */ /* 0x100C21B7: test ah, 5 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(5) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (RECOMP_PF((_flag_a & _flag_b), 24)) goto L_100C21C2; /* 0x100C21BA: jp 0x100c21c2 */
L_100C21BC:
    _st[0] = -_st[0]; /* 0x100C21BC: fchs  */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi + 1; /* 0x100C21BE: inc esi */
    _flag_k = FK_INC;
    *(double*)ADDR(ebp + 0x8) = _st[0]; /* 0x100C21BF: fst qword ptr [ebp + 8] */
L_100C21C2:
    fp_push(*(double*)ADDR(0x10063BE8)); /* 0x100C21C2: fld qword ptr [0x10063be8] */
    _st[0] /= *(double*)ADDR(0x10065BA8); /* 0x100C21C8: fdiv qword ptr [0x10065ba8] */
    PUSH32(esp, ecx); /* 0x100C21CE: push ecx */
    PUSH32(esp, ecx); /* 0x100C21CF: push ecx */
    _fpu_cmp = FPU_CMP(_st[0], _st[1]); /* 0x100C21D0: fcomp st(1) */
    fp_pop();
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x100C21D2: fnstsw ax */
    /* test HI8(eax), 0x41u */ /* 0x100C21D4: test ah, 0x41 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(0x41u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_100C21FE; /* 0x100C21D7: jne 0x100c21fe */
L_100C21D9:
    _st[0] *= _st[0]; /* 0x100C21D9: fmul st(0), st(0) */
    *(double*)ADDR(ebp + (-0x8)) = _st[0]; /* 0x100C21DB: fst qword ptr [ebp - 8] */
    fp_push(1.0); /* 0x100C21DE: fld1  */
    { double _v = fp_pop(); _st[0] += _v; } /* 0x100C21E0: faddp st(1) */
    { double _v = fp_pop(); *(double*)ADDR(esp) = _v; } /* 0x100C21E2: fstp qword ptr [esp] */
    RECOMP_CALL(sub_10036E0B); /* 0x100C21E5: call 0x10036e0b */
    RECOMP_FLAGS_IN();
    fp_push(1.0); /* 0x100C21EA: fld1  */
    { double _v = fp_pop(); _st[0] += _v; } /* 0x100C21EC: faddp st(1) */
    _st[0] = *(double*)ADDR(ebp + (-0x8)) / _st[0]; /* 0x100C21EE: fdivr qword ptr [ebp - 8] */
    _st[0] += *(double*)ADDR(ebp + 0x8); /* 0x100C21F1: fadd qword ptr [ebp + 8] */
    { double _v = fp_pop(); *(double*)ADDR(esp) = _v; } /* 0x100C21F4: fstp qword ptr [esp] */
    RECOMP_CALL(sub_100CF1BD); /* 0x100C21F7: call 0x100cf1bd */
    RECOMP_FLAGS_IN();
    goto L_100C220C; /* 0x100C21FC: jmp 0x100c220c */
L_100C21FE:
    { double _v = fp_pop(); *(double*)ADDR(esp) = _v; } /* 0x100C21FE: fstp qword ptr [esp] */
    RECOMP_CALL(sub_100367A8); /* 0x100C2201: call 0x100367a8 */
    RECOMP_FLAGS_IN();
    _st[0] += *(double*)ADDR(0x10063C10); /* 0x100C2206: fadd qword ptr [0x10063c10] */
L_100C220C:
    ecx = POP32_VAL(esp); /* 0x100C220C: pop ecx */
    ecx = POP32_VAL(esp); /* 0x100C220D: pop ecx */
    /* test esi, esi */ /* 0x100C220E: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    esi = POP32_VAL(esp); /* 0x100C2210: pop esi */
    if (TEST_Z(_flag_a, _flag_b)) goto L_100C2215; /* 0x100C2211: je 0x100c2215 */
L_100C2213:
    _st[0] = -_st[0]; /* 0x100C2213: fchs  */
L_100C2215:
    esp = ebp; /* 0x100C2215: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x100C2217: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x100C2218: ret  */
    RECOMP_REGS_OUT();
}

void sub_100C2219(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x100C2219u);

L_100C2219:
    PUSH32(esp, ebp); /* 0x100C2219: push ebp */
    ebp = esp; /* 0x100C221A: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0xCu; /* 0x100C221C: sub esp, 0xc */
    _flag_k = FK_CMP;
    eax = ebp + 0x8; /* 0x100C221F: lea eax, [ebp + 8] */
    PUSH32(esp, eax); /* 0x100C2222: push eax */
    RECOMP_CALL(sub_100BFF5C); /* 0x100C2223: call 0x100bff5c */
    RECOMP_FLAGS_IN();
    eax = (uint32_t)(int32_t)(int16_t)LO16(eax); /* 0x100C2228: cwde  */
    ecx = POP32_VAL(esp); /* 0x100C2229: pop ecx */
    /* cmp eax, 2 */ /* 0x100C222A: cmp eax, 2 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_A(_flag_a, _flag_b)) goto L_100C2237; /* 0x100C222D: ja 0x100c2237 */
L_100C222F:
    fp_push(*(float*)&MEM32(ebp + 0x8)); /* 0x100C222F: fld dword ptr [ebp + 8] */
    goto L_100C22BC; /* 0x100C2232: jmp 0x100c22bc */
L_100C2237:
    fp_push(0.0); /* 0x100C2237: fldz  */
    fp_push(*(float*)&MEM32(ebp + 0x8)); /* 0x100C2239: fld dword ptr [ebp + 8] */
    _fpu_cmp = FPU_CMP(_st[0], _st[1]); /* 0x100C223C: fcom st(1) */
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x100C223E: fnstsw ax */
    PUSH32(esp, esi); /* 0x100C2240: push esi */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    esi = 0; /* 0x100C2241: xor esi, esi */
    _cf = 0;
    _flag_k = FK_TEST;
    { _st[1] = _st[0]; g_st_i64[1] = g_st_i64[0]; fp_pop(); } /* 0x100C2243: fstp st(1) */
    /* test HI8(eax), 5 */ /* 0x100C2245: test ah, 5 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(5) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (RECOMP_PF((_flag_a & _flag_b), 24)) goto L_100C2253; /* 0x100C2248: jp 0x100c2253 */
L_100C224A:
    _st[0] = -_st[0]; /* 0x100C224A: fchs  */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi + 1; /* 0x100C224C: inc esi */
    _flag_k = FK_INC;
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + 0x8) = _v; } /* 0x100C224D: fstp dword ptr [ebp + 8] */
    fp_push(*(float*)&MEM32(ebp + 0x8)); /* 0x100C2250: fld dword ptr [ebp + 8] */
L_100C2253:
    fp_push(*(float*)&MEM32(0x10065BC8)); /* 0x100C2253: fld dword ptr [0x10065bc8] */
    _st[0] = *(double*)ADDR(0x10063BE8) / _st[0]; /* 0x100C2259: fdivr qword ptr [0x10063be8] */
    PUSH32(esp, ecx); /* 0x100C225F: push ecx */
    _fpu_cmp = FPU_CMP(_st[0], _st[1]); /* 0x100C2260: fcomp st(1) */
    fp_pop();
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x100C2262: fnstsw ax */
    /* test HI8(eax), 0x41u */ /* 0x100C2264: test ah, 0x41 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(0x41u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_100C229A; /* 0x100C2267: jne 0x100c229a */
L_100C2269:
    _st[0] *= _st[0]; /* 0x100C2269: fmul st(0), st(0) */
    *(double*)ADDR(ebp + (-0xC)) = _st[0]; /* 0x100C226B: fst qword ptr [ebp - 0xc] */
    fp_push(1.0); /* 0x100C226E: fld1  */
    { double _v = fp_pop(); _st[0] += _v; } /* 0x100C2270: faddp st(1) */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x4)) = _v; } /* 0x100C2272: fstp dword ptr [ebp - 4] */
    fp_push(*(float*)&MEM32(ebp + (-0x4))); /* 0x100C2275: fld dword ptr [ebp - 4] */
    { float _v = (float)fp_pop(); *(float*)ADDR(esp) = _v; } /* 0x100C2278: fstp dword ptr [esp] */
    RECOMP_CALL(sub_100C20C9); /* 0x100C227B: call 0x100c20c9 */
    RECOMP_FLAGS_IN();
    fp_push(1.0); /* 0x100C2280: fld1  */
    { double _v = fp_pop(); _st[0] += _v; } /* 0x100C2282: faddp st(1) */
    _st[0] = *(double*)ADDR(ebp + (-0xC)) / _st[0]; /* 0x100C2284: fdivr qword ptr [ebp - 0xc] */
    _st[0] += (double)*(float*)ADDR(ebp + 0x8); /* 0x100C2287: fadd dword ptr [ebp + 8] */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x4)) = _v; } /* 0x100C228A: fstp dword ptr [ebp - 4] */
    fp_push(*(float*)&MEM32(ebp + (-0x4))); /* 0x100C228D: fld dword ptr [ebp - 4] */
    { float _v = (float)fp_pop(); *(float*)ADDR(esp) = _v; } /* 0x100C2290: fstp dword ptr [esp] */
    RECOMP_CALL(sub_100CF25E); /* 0x100C2293: call 0x100cf25e */
    RECOMP_FLAGS_IN();
    goto L_100C22A8; /* 0x100C2298: jmp 0x100c22a8 */
L_100C229A:
    { float _v = (float)fp_pop(); *(float*)ADDR(esp) = _v; } /* 0x100C229A: fstp dword ptr [esp] */
    RECOMP_CALL(sub_100C20AF); /* 0x100C229D: call 0x100c20af */
    RECOMP_FLAGS_IN();
    _st[0] += *(double*)ADDR(0x10063C18); /* 0x100C22A2: fadd qword ptr [0x10063c18] */
L_100C22A8:
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x4)) = _v; } /* 0x100C22A8: fstp dword ptr [ebp - 4] */
    fp_push(*(float*)&MEM32(ebp + (-0x4))); /* 0x100C22AB: fld dword ptr [ebp - 4] */
    /* test esi, esi */ /* 0x100C22AE: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = POP32_VAL(esp); /* 0x100C22B0: pop ecx */
    esi = POP32_VAL(esp); /* 0x100C22B1: pop esi */
    if (TEST_Z(_flag_a, _flag_b)) goto L_100C22B6; /* 0x100C22B2: je 0x100c22b6 */
L_100C22B4:
    _st[0] = -_st[0]; /* 0x100C22B4: fchs  */
L_100C22B6:
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x4)) = _v; } /* 0x100C22B6: fstp dword ptr [ebp - 4] */
    fp_push(*(float*)&MEM32(ebp + (-0x4))); /* 0x100C22B9: fld dword ptr [ebp - 4] */
L_100C22BC:
    esp = ebp; /* 0x100C22BC: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x100C22BE: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x100C22BF: ret  */
    RECOMP_REGS_OUT();
}

void sub_100C22C0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x100C22C0u);

L_100C22C0:
    PUSH32(esp, ebp); /* 0x100C22C0: push ebp */
    ebp = esp; /* 0x100C22C1: mov ebp, esp */
    eax = ebp + 0x8; /* 0x100C22C3: lea eax, [ebp + 8] */
    PUSH32(esp, eax); /* 0x100C22C6: push eax */
    RECOMP_CALL(sub_100C0034); /* 0x100C22C7: call 0x100c0034 */
    RECOMP_FLAGS_IN();
    eax = (uint32_t)(int32_t)(int16_t)LO16(eax); /* 0x100C22CC: cwde  */
    ecx = POP32_VAL(esp); /* 0x100C22CD: pop ecx */
    /* cmp eax, 2 */ /* 0x100C22CE: cmp eax, 2 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_A(_flag_a, _flag_b)) goto L_100C22D8; /* 0x100C22D1: ja 0x100c22d8 */
L_100C22D3:
    fp_push(*(double*)ADDR(ebp + 0x8)); /* 0x100C22D3: fld qword ptr [ebp + 8] */
    ebp = POP32_VAL(esp); /* 0x100C22D6: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x100C22D7: ret  */
L_100C22D8:
    fp_push(0.0); /* 0x100C22D8: fldz  */
    fp_push(*(double*)ADDR(ebp + 0x8)); /* 0x100C22DA: fld qword ptr [ebp + 8] */
    _fpu_cmp = FPU_CMP(_st[0], _st[1]); /* 0x100C22DD: fcom st(1) */
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x100C22DF: fnstsw ax */
    PUSH32(esp, esi); /* 0x100C22E1: push esi */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    esi = 0; /* 0x100C22E2: xor esi, esi */
    _cf = 0;
    _flag_k = FK_TEST;
    { _st[1] = _st[0]; g_st_i64[1] = g_st_i64[0]; fp_pop(); } /* 0x100C22E4: fstp st(1) */
    /* test HI8(eax), 5 */ /* 0x100C22E6: test ah, 5 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(5) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (RECOMP_PF((_flag_a & _flag_b), 24)) goto L_100C22F1; /* 0x100C22E9: jp 0x100c22f1 */
L_100C22EB:
    _st[0] = -_st[0]; /* 0x100C22EB: fchs  */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi + 1; /* 0x100C22ED: inc esi */
    _flag_k = FK_INC;
    *(double*)ADDR(ebp + 0x8) = _st[0]; /* 0x100C22EE: fst qword ptr [ebp + 8] */
L_100C22F1:
    fp_push(*(double*)ADDR(0x10063BE8)); /* 0x100C22F1: fld qword ptr [0x10063be8] */
    _st[0] /= *(double*)ADDR(0x10065BE8); /* 0x100C22F7: fdiv qword ptr [0x10065be8] */
    PUSH32(esp, ecx); /* 0x100C22FD: push ecx */
    PUSH32(esp, ecx); /* 0x100C22FE: push ecx */
    _fpu_cmp = FPU_CMP(_st[0], _st[1]); /* 0x100C22FF: fcomp st(1) */
    fp_pop();
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x100C2301: fnstsw ax */
    /* test HI8(eax), 0x41u */ /* 0x100C2303: test ah, 0x41 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(0x41u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_100C232F; /* 0x100C2306: jne 0x100c232f */
L_100C2308:
    _st[0] *= _st[0]; /* 0x100C2308: fmul st(0), st(0) */
    fp_push(1.0); /* 0x100C230A: fld1  */
    { double _v = fp_pop(); _st[0] += _v; } /* 0x100C230C: faddp st(1) */
    { double _v = fp_pop(); *(double*)ADDR(esp) = _v; } /* 0x100C230E: fstp qword ptr [esp] */
    RECOMP_CALL(sub_10036E0B); /* 0x100C2311: call 0x10036e0b */
    RECOMP_FLAGS_IN();
    fp_push(*(double*)ADDR(ebp + 0x8)); /* 0x100C2316: fld qword ptr [ebp + 8] */
    fp_push(_st[0]); /* 0x100C2319: fld st(0) */
    _st[0] *= _st[1]; /* 0x100C231B: fmul st(1) */
    fp_push(1.0); /* 0x100C231D: fld1  */
    { double _v = fp_pop(); _st[2] += _v; } /* 0x100C231F: faddp st(3) */
    { double _v = fp_pop(); _st[1] = _st[1] == 0.0 ? _v : _v / _st[1]; } /* 0x100C2321: fdivrp st(2) */
    { double _v = fp_pop(); _st[0] += _v; } /* 0x100C2323: faddp st(1) */
    { double _v = fp_pop(); *(double*)ADDR(esp) = _v; } /* 0x100C2325: fstp qword ptr [esp] */
    RECOMP_CALL(sub_100CF305); /* 0x100C2328: call 0x100cf305 */
    RECOMP_FLAGS_IN();
    goto L_100C233D; /* 0x100C232D: jmp 0x100c233d */
L_100C232F:
    { double _v = fp_pop(); *(double*)ADDR(esp) = _v; } /* 0x100C232F: fstp qword ptr [esp] */
    RECOMP_CALL(sub_100367A8); /* 0x100C2332: call 0x100367a8 */
    RECOMP_FLAGS_IN();
    _st[0] += *(double*)ADDR(0x10063C10); /* 0x100C2337: fadd qword ptr [0x10063c10] */
L_100C233D:
    ecx = POP32_VAL(esp); /* 0x100C233D: pop ecx */
    ecx = POP32_VAL(esp); /* 0x100C233E: pop ecx */
    /* test esi, esi */ /* 0x100C233F: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    esi = POP32_VAL(esp); /* 0x100C2341: pop esi */
    if (TEST_Z(_flag_a, _flag_b)) goto L_100C2346; /* 0x100C2342: je 0x100c2346 */
L_100C2344:
    _st[0] = -_st[0]; /* 0x100C2344: fchs  */
L_100C2346:
    ebp = POP32_VAL(esp); /* 0x100C2346: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x100C2347: ret  */
    RECOMP_REGS_OUT();
}

void sub_100C2348(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x100C2348u);

L_100C2348:
    PUSH32(esp, ebp); /* 0x100C2348: push ebp */
    ebp = esp; /* 0x100C2349: mov ebp, esp */
    eax = ebp + 0x8; /* 0x100C234B: lea eax, [ebp + 8] */
    PUSH32(esp, esi); /* 0x100C234E: push esi */
    PUSH32(esp, eax); /* 0x100C234F: push eax */
    RECOMP_CALL(sub_100BFE08); /* 0x100C2350: call 0x100bfe08 */
    RECOMP_FLAGS_IN();
    eax = (uint32_t)(int32_t)(int16_t)LO16(eax); /* 0x100C2355: cwde  */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    esi = 0; /* 0x100C2356: xor esi, esi */
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = POP32_VAL(esp); /* 0x100C2358: pop ecx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - esi; /* 0x100C2359: sub eax, esi */
    _flag_k = FK_CMP;
    if (/* sub result */ CMP_EQ(_flag_a, _flag_b)) goto L_100C23D6; /* 0x100C235B: je 0x100c23d6 */
L_100C235D:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax - 1; /* 0x100C235D: dec eax */
    _flag_k = FK_DEC;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax - 1; /* 0x100C235E: dec eax */
    _flag_k = FK_DEC;
    if (/* dec result */ CMP_EQ(_flag_a, _flag_b)) goto L_100C23D6; /* 0x100C235F: je 0x100c23d6 */
L_100C2361:
    fp_push(0.0); /* 0x100C2361: fldz  */
    fp_push(*(double*)ADDR(ebp + 0x8)); /* 0x100C2363: fld qword ptr [ebp + 8] */
    _fpu_cmp = FPU_CMP(_st[0], _st[1]); /* 0x100C2366: fcom st(1) */
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x100C2368: fnstsw ax */
    { _st[1] = _st[0]; g_st_i64[1] = g_st_i64[0]; fp_pop(); } /* 0x100C236A: fstp st(1) */
    /* test HI8(eax), 5 */ /* 0x100C236C: test ah, 5 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(5) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (RECOMP_PF((_flag_a & _flag_b), 24)) goto L_100C2377; /* 0x100C236F: jp 0x100c2377 */
L_100C2371:
    _st[0] = -_st[0]; /* 0x100C2371: fchs  */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi + 1; /* 0x100C2373: inc esi */
    _flag_k = FK_INC;
    *(double*)ADDR(ebp + 0x8) = _st[0]; /* 0x100C2374: fst qword ptr [ebp + 8] */
L_100C2377:
    fp_push(1.0); /* 0x100C2377: fld1  */
    _fpu_cmp = FPU_CMP(_st[0], _st[1]); /* 0x100C2379: fcom st(1) */
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x100C237B: fnstsw ax */
    /* test HI8(eax), 5 */ /* 0x100C237D: test ah, 5 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(5) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (RECOMP_PF((_flag_a & _flag_b), 24)) goto L_100C2396; /* 0x100C2380: jp 0x100c2396 */
L_100C2382:
    { _st[1] = _st[0]; g_st_i64[1] = g_st_i64[0]; fp_pop(); } /* 0x100C2382: fstp st(1) */
    PUSH32(esp, 1); /* 0x100C2384: push 1 */
    { _st[0] = _st[0]; g_st_i64[0] = g_st_i64[0]; fp_pop(); } /* 0x100C2386: fstp st(0) */
    RECOMP_CALL(sub_100BFFA8); /* 0x100C2388: call 0x100bffa8 */
    RECOMP_FLAGS_IN();
    fp_push(*(double*)ADDR(0x10065B58)); /* 0x100C238D: fld qword ptr [0x10065b58] */
    ecx = POP32_VAL(esp); /* 0x100C2393: pop ecx */
    goto L_100C23D9; /* 0x100C2394: jmp 0x100c23d9 */
L_100C2396:
    _fpu_cmp = FPU_CMP(_st[0], _st[1]); /* 0x100C2396: fucom st(1) */
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x100C2398: fnstsw ax */
    /* test HI8(eax), 0x44u */ /* 0x100C239A: test ah, 0x44 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(0x44u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (RECOMP_PF((_flag_a & _flag_b), 24)) goto L_100C23B9; /* 0x100C239D: jp 0x100c23b9 */
L_100C239F:
    { _st[1] = _st[0]; g_st_i64[1] = g_st_i64[0]; fp_pop(); } /* 0x100C239F: fstp st(1) */
    PUSH32(esp, 4); /* 0x100C23A1: push 4 */
    { _st[0] = _st[0]; g_st_i64[0] = g_st_i64[0]; fp_pop(); } /* 0x100C23A3: fstp st(0) */
    RECOMP_CALL(sub_100BFFA8); /* 0x100C23A5: call 0x100bffa8 */
    RECOMP_FLAGS_IN();
    fp_push(*(double*)ADDR(0x10065B48)); /* 0x100C23AA: fld qword ptr [0x10065b48] */
L_100C23B0:
    ecx = POP32_VAL(esp); /* 0x100C23B0: pop ecx */
    /* test esi, esi */ /* 0x100C23B1: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_100C23D9; /* 0x100C23B3: je 0x100c23d9 */
L_100C23B5:
    _st[0] = -_st[0]; /* 0x100C23B5: fchs  */
    goto L_100C23D9; /* 0x100C23B7: jmp 0x100c23d9 */
L_100C23B9:
    fp_push(_st[1]); /* 0x100C23B9: fld st(1) */
    _st[0] += _st[0]; /* 0x100C23BB: fadd st(0), st(0) */
    fp_xch(1); /* 0x100C23BD: fxch st(1) */
    { double _v = fp_pop(); _st[1] = _v - _st[1]; } /* 0x100C23BF: fsubrp st(2) */
    PUSH32(esp, ecx); /* 0x100C23C1: push ecx */
    PUSH32(esp, ecx); /* 0x100C23C2: push ecx */
    { double _v = fp_pop(); _st[0] = _st[0] == 0.0 ? _v : _v / _st[0]; } /* 0x100C23C3: fdivrp st(1) */
    { double _v = fp_pop(); *(double*)ADDR(esp) = _v; } /* 0x100C23C5: fstp qword ptr [esp] */
    RECOMP_CALL(sub_100CF1BD); /* 0x100C23C8: call 0x100cf1bd */
    RECOMP_FLAGS_IN();
    _st[0] *= *(double*)ADDR(0x10063BD0); /* 0x100C23CD: fmul qword ptr [0x10063bd0] */
    ecx = POP32_VAL(esp); /* 0x100C23D3: pop ecx */
    RECOMP_BACKEDGE();
    goto L_100C23B0; /* 0x100C23D4: jmp 0x100c23b0 */
L_100C23D6:
    fp_push(*(double*)ADDR(ebp + 0x8)); /* 0x100C23D6: fld qword ptr [ebp + 8] */
L_100C23D9:
    esi = POP32_VAL(esp); /* 0x100C23D9: pop esi */
    ebp = POP32_VAL(esp); /* 0x100C23DA: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x100C23DB: ret  */
    RECOMP_REGS_OUT();
}

void sub_100C23DC(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x100C23DCu);

L_100C23DC:
    PUSH32(esp, ebp); /* 0x100C23DC: push ebp */
    ebp = esp; /* 0x100C23DD: mov ebp, esp */
    PUSH32(esp, ecx); /* 0x100C23DF: push ecx */
    eax = ebp + 0x8; /* 0x100C23E0: lea eax, [ebp + 8] */
    PUSH32(esp, esi); /* 0x100C23E3: push esi */
    PUSH32(esp, eax); /* 0x100C23E4: push eax */
    RECOMP_CALL(sub_100BFF5C); /* 0x100C23E5: call 0x100bff5c */
    RECOMP_FLAGS_IN();
    eax = (uint32_t)(int32_t)(int16_t)LO16(eax); /* 0x100C23EA: cwde  */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    esi = 0; /* 0x100C23EB: xor esi, esi */
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = POP32_VAL(esp); /* 0x100C23ED: pop ecx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - esi; /* 0x100C23EE: sub eax, esi */
    _flag_k = FK_CMP;
    if (/* sub result */ CMP_EQ(_flag_a, _flag_b)) goto L_100C2495; /* 0x100C23F0: je 0x100c2495 */
L_100C23F6:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax - 1; /* 0x100C23F6: dec eax */
    _flag_k = FK_DEC;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax - 1; /* 0x100C23F7: dec eax */
    _flag_k = FK_DEC;
    if (/* dec result */ CMP_EQ(_flag_a, _flag_b)) goto L_100C2495; /* 0x100C23F8: je 0x100c2495 */
L_100C23FE:
    fp_push(0.0); /* 0x100C23FE: fldz  */
    fp_push(*(float*)&MEM32(ebp + 0x8)); /* 0x100C2400: fld dword ptr [ebp + 8] */
    _fpu_cmp = FPU_CMP(_st[0], _st[1]); /* 0x100C2403: fcom st(1) */
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x100C2405: fnstsw ax */
    { _st[1] = _st[0]; g_st_i64[1] = g_st_i64[0]; fp_pop(); } /* 0x100C2407: fstp st(1) */
    /* test HI8(eax), 5 */ /* 0x100C2409: test ah, 5 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(5) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (RECOMP_PF((_flag_a & _flag_b), 24)) goto L_100C2417; /* 0x100C240C: jp 0x100c2417 */
L_100C240E:
    _st[0] = -_st[0]; /* 0x100C240E: fchs  */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi + 1; /* 0x100C2410: inc esi */
    _flag_k = FK_INC;
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + 0x8) = _v; } /* 0x100C2411: fstp dword ptr [ebp + 8] */
    fp_push(*(float*)&MEM32(ebp + 0x8)); /* 0x100C2414: fld dword ptr [ebp + 8] */
L_100C2417:
    fp_push(1.0); /* 0x100C2417: fld1  */
    _fpu_cmp = FPU_CMP(_st[0], _st[1]); /* 0x100C2419: fcom st(1) */
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x100C241B: fnstsw ax */
    /* test HI8(eax), 5 */ /* 0x100C241D: test ah, 5 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(5) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (RECOMP_PF((_flag_a & _flag_b), 24)) goto L_100C2436; /* 0x100C2420: jp 0x100c2436 */
L_100C2422:
    { _st[1] = _st[0]; g_st_i64[1] = g_st_i64[0]; fp_pop(); } /* 0x100C2422: fstp st(1) */
    PUSH32(esp, 1); /* 0x100C2424: push 1 */
    { _st[0] = _st[0]; g_st_i64[0] = g_st_i64[0]; fp_pop(); } /* 0x100C2426: fstp st(0) */
    RECOMP_CALL(sub_100BFFA8); /* 0x100C2428: call 0x100bffa8 */
    RECOMP_FLAGS_IN();
    fp_push(*(float*)&MEM32(0x10065B78)); /* 0x100C242D: fld dword ptr [0x10065b78] */
    ecx = POP32_VAL(esp); /* 0x100C2433: pop ecx */
    goto L_100C2498; /* 0x100C2434: jmp 0x100c2498 */
L_100C2436:
    fp_push(1.0); /* 0x100C2436: fld1  */
    _fpu_cmp = FPU_CMP(_st[0], _st[2]); /* 0x100C2438: fucomp st(2) */
    fp_pop();
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x100C243A: fnstsw ax */
    /* test HI8(eax), 0x44u */ /* 0x100C243C: test ah, 0x44 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(0x44u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (RECOMP_PF((_flag_a & _flag_b), 24)) goto L_100C2461; /* 0x100C243F: jp 0x100c2461 */
L_100C2441:
    { _st[1] = _st[0]; g_st_i64[1] = g_st_i64[0]; fp_pop(); } /* 0x100C2441: fstp st(1) */
    PUSH32(esp, 4); /* 0x100C2443: push 4 */
    { _st[0] = _st[0]; g_st_i64[0] = g_st_i64[0]; fp_pop(); } /* 0x100C2445: fstp st(0) */
    RECOMP_CALL(sub_100BFFA8); /* 0x100C2447: call 0x100bffa8 */
    RECOMP_FLAGS_IN();
    fp_push(*(float*)&MEM32(0x10065B68)); /* 0x100C244C: fld dword ptr [0x10065b68] */
    ecx = POP32_VAL(esp); /* 0x100C2452: pop ecx */
    /* test esi, esi */ /* 0x100C2453: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_100C2459; /* 0x100C2455: je 0x100c2459 */
L_100C2457:
    _st[0] = -_st[0]; /* 0x100C2457: fchs  */
L_100C2459:
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x4)) = _v; } /* 0x100C2459: fstp dword ptr [ebp - 4] */
    fp_push(*(float*)&MEM32(ebp + (-0x4))); /* 0x100C245C: fld dword ptr [ebp - 4] */
    goto L_100C2498; /* 0x100C245F: jmp 0x100c2498 */
L_100C2461:
    fp_push(_st[1]); /* 0x100C2461: fld st(1) */
    _st[0] += _st[0]; /* 0x100C2463: fadd st(0), st(0) */
    fp_xch(1); /* 0x100C2465: fxch st(1) */
    { double _v = fp_pop(); _st[1] = _v - _st[1]; } /* 0x100C2467: fsubrp st(2) */
    PUSH32(esp, ecx); /* 0x100C2469: push ecx */
    { double _v = fp_pop(); _st[0] = _st[0] == 0.0 ? _v : _v / _st[0]; } /* 0x100C246A: fdivrp st(1) */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x4)) = _v; } /* 0x100C246C: fstp dword ptr [ebp - 4] */
    fp_push(*(float*)&MEM32(ebp + (-0x4))); /* 0x100C246F: fld dword ptr [ebp - 4] */
    { float _v = (float)fp_pop(); *(float*)ADDR(esp) = _v; } /* 0x100C2472: fstp dword ptr [esp] */
    RECOMP_CALL(sub_100CF25E); /* 0x100C2475: call 0x100cf25e */
    RECOMP_FLAGS_IN();
    _st[0] *= *(double*)ADDR(0x10063BD0); /* 0x100C247A: fmul qword ptr [0x10063bd0] */
    ecx = POP32_VAL(esp); /* 0x100C2480: pop ecx */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x4)) = _v; } /* 0x100C2481: fstp dword ptr [ebp - 4] */
    fp_push(*(float*)&MEM32(ebp + (-0x4))); /* 0x100C2484: fld dword ptr [ebp - 4] */
    /* test esi, esi */ /* 0x100C2487: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_100C248D; /* 0x100C2489: je 0x100c248d */
L_100C248B:
    _st[0] = -_st[0]; /* 0x100C248B: fchs  */
L_100C248D:
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x4)) = _v; } /* 0x100C248D: fstp dword ptr [ebp - 4] */
    fp_push(*(float*)&MEM32(ebp + (-0x4))); /* 0x100C2490: fld dword ptr [ebp - 4] */
    goto L_100C2498; /* 0x100C2493: jmp 0x100c2498 */
L_100C2495:
    fp_push(*(float*)&MEM32(ebp + 0x8)); /* 0x100C2495: fld dword ptr [ebp + 8] */
L_100C2498:
    esi = POP32_VAL(esp); /* 0x100C2498: pop esi */
    esp = ebp; /* 0x100C2499: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x100C249B: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x100C249C: ret  */
    RECOMP_REGS_OUT();
}

void sub_100C249D(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x100C249Du);

L_100C249D:
    PUSH32(esp, ebp); /* 0x100C249D: push ebp */
    ebp = esp; /* 0x100C249E: mov ebp, esp */
    eax = ebp + 0x8; /* 0x100C24A0: lea eax, [ebp + 8] */
    PUSH32(esp, esi); /* 0x100C24A3: push esi */
    PUSH32(esp, eax); /* 0x100C24A4: push eax */
    RECOMP_CALL(sub_100C0034); /* 0x100C24A5: call 0x100c0034 */
    RECOMP_FLAGS_IN();
    eax = (uint32_t)(int32_t)(int16_t)LO16(eax); /* 0x100C24AA: cwde  */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    esi = 0; /* 0x100C24AB: xor esi, esi */
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = POP32_VAL(esp); /* 0x100C24AD: pop ecx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - esi; /* 0x100C24AE: sub eax, esi */
    _flag_k = FK_CMP;
    if (/* sub result */ CMP_EQ(_flag_a, _flag_b)) goto L_100C252B; /* 0x100C24B0: je 0x100c252b */
L_100C24B2:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax - 1; /* 0x100C24B2: dec eax */
    _flag_k = FK_DEC;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax - 1; /* 0x100C24B3: dec eax */
    _flag_k = FK_DEC;
    if (/* dec result */ CMP_EQ(_flag_a, _flag_b)) goto L_100C252B; /* 0x100C24B4: je 0x100c252b */
L_100C24B6:
    fp_push(0.0); /* 0x100C24B6: fldz  */
    fp_push(*(double*)ADDR(ebp + 0x8)); /* 0x100C24B8: fld qword ptr [ebp + 8] */
    _fpu_cmp = FPU_CMP(_st[0], _st[1]); /* 0x100C24BB: fcom st(1) */
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x100C24BD: fnstsw ax */
    { _st[1] = _st[0]; g_st_i64[1] = g_st_i64[0]; fp_pop(); } /* 0x100C24BF: fstp st(1) */
    /* test HI8(eax), 5 */ /* 0x100C24C1: test ah, 5 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(5) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (RECOMP_PF((_flag_a & _flag_b), 24)) goto L_100C24CC; /* 0x100C24C4: jp 0x100c24cc */
L_100C24C6:
    _st[0] = -_st[0]; /* 0x100C24C6: fchs  */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi + 1; /* 0x100C24C8: inc esi */
    _flag_k = FK_INC;
    *(double*)ADDR(ebp + 0x8) = _st[0]; /* 0x100C24C9: fst qword ptr [ebp + 8] */
L_100C24CC:
    fp_push(1.0); /* 0x100C24CC: fld1  */
    _fpu_cmp = FPU_CMP(_st[0], _st[1]); /* 0x100C24CE: fcom st(1) */
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x100C24D0: fnstsw ax */
    /* test HI8(eax), 5 */ /* 0x100C24D2: test ah, 5 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(5) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (RECOMP_PF((_flag_a & _flag_b), 24)) goto L_100C24EB; /* 0x100C24D5: jp 0x100c24eb */
L_100C24D7:
    { _st[1] = _st[0]; g_st_i64[1] = g_st_i64[0]; fp_pop(); } /* 0x100C24D7: fstp st(1) */
    PUSH32(esp, 1); /* 0x100C24D9: push 1 */
    { _st[0] = _st[0]; g_st_i64[0] = g_st_i64[0]; fp_pop(); } /* 0x100C24DB: fstp st(0) */
    RECOMP_CALL(sub_100BFFA8); /* 0x100C24DD: call 0x100bffa8 */
    RECOMP_FLAGS_IN();
    fp_push(*(double*)ADDR(0x10065B98)); /* 0x100C24E2: fld qword ptr [0x10065b98] */
    ecx = POP32_VAL(esp); /* 0x100C24E8: pop ecx */
    goto L_100C252E; /* 0x100C24E9: jmp 0x100c252e */
L_100C24EB:
    _fpu_cmp = FPU_CMP(_st[0], _st[1]); /* 0x100C24EB: fucom st(1) */
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x100C24ED: fnstsw ax */
    /* test HI8(eax), 0x44u */ /* 0x100C24EF: test ah, 0x44 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(0x44u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (RECOMP_PF((_flag_a & _flag_b), 24)) goto L_100C250E; /* 0x100C24F2: jp 0x100c250e */
L_100C24F4:
    { _st[1] = _st[0]; g_st_i64[1] = g_st_i64[0]; fp_pop(); } /* 0x100C24F4: fstp st(1) */
    PUSH32(esp, 4); /* 0x100C24F6: push 4 */
    { _st[0] = _st[0]; g_st_i64[0] = g_st_i64[0]; fp_pop(); } /* 0x100C24F8: fstp st(0) */
    RECOMP_CALL(sub_100BFFA8); /* 0x100C24FA: call 0x100bffa8 */
    RECOMP_FLAGS_IN();
    fp_push(*(double*)ADDR(0x10065B88)); /* 0x100C24FF: fld qword ptr [0x10065b88] */
L_100C2505:
    ecx = POP32_VAL(esp); /* 0x100C2505: pop ecx */
    /* test esi, esi */ /* 0x100C2506: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_100C252E; /* 0x100C2508: je 0x100c252e */
L_100C250A:
    _st[0] = -_st[0]; /* 0x100C250A: fchs  */
    goto L_100C252E; /* 0x100C250C: jmp 0x100c252e */
L_100C250E:
    fp_push(_st[1]); /* 0x100C250E: fld st(1) */
    _st[0] += _st[0]; /* 0x100C2510: fadd st(0), st(0) */
    fp_xch(1); /* 0x100C2512: fxch st(1) */
    { double _v = fp_pop(); _st[1] = _v - _st[1]; } /* 0x100C2514: fsubrp st(2) */
    PUSH32(esp, ecx); /* 0x100C2516: push ecx */
    PUSH32(esp, ecx); /* 0x100C2517: push ecx */
    { double _v = fp_pop(); _st[0] = _st[0] == 0.0 ? _v : _v / _st[0]; } /* 0x100C2518: fdivrp st(1) */
    { double _v = fp_pop(); *(double*)ADDR(esp) = _v; } /* 0x100C251A: fstp qword ptr [esp] */
    RECOMP_CALL(sub_100CF305); /* 0x100C251D: call 0x100cf305 */
    RECOMP_FLAGS_IN();
    _st[0] *= *(double*)ADDR(0x10063BD0); /* 0x100C2522: fmul qword ptr [0x10063bd0] */
    ecx = POP32_VAL(esp); /* 0x100C2528: pop ecx */
    RECOMP_BACKEDGE();
    goto L_100C2505; /* 0x100C2529: jmp 0x100c2505 */
L_100C252B:
    fp_push(*(double*)ADDR(ebp + 0x8)); /* 0x100C252B: fld qword ptr [ebp + 8] */
L_100C252E:
    esi = POP32_VAL(esp); /* 0x100C252E: pop esi */
    ebp = POP32_VAL(esp); /* 0x100C252F: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x100C2530: ret  */
    RECOMP_REGS_OUT();
}

void sub_100C2531(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x100C2531u);

L_100C2531:
    PUSH32(esp, ebp); /* 0x100C2531: push ebp */
    ebp = esp; /* 0x100C2532: mov ebp, esp */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x100C2534: push dword ptr [ebp + 0xc] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x100C2537: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_100C5E33); /* 0x100C253A: call 0x100c5e33 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x100C253F: pop ecx */
    { float _v = (float)fp_pop(); *(float*)ADDR(esp) = _v; } /* 0x100C2540: fstp dword ptr [esp] */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x100C2543: push dword ptr [ebp + 0xc] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x100C2546: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_100C6B58); /* 0x100C2549: call 0x100c6b58 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x100C254E: pop ecx */
    { float _v = (float)fp_pop(); *(float*)ADDR(esp) = _v; } /* 0x100C254F: fstp dword ptr [esp] */
    RECOMP_CALL(sub_100C255B); /* 0x100C2552: call 0x100c255b */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x100C2557: pop ecx */
    ecx = POP32_VAL(esp); /* 0x100C2558: pop ecx */
    ebp = POP32_VAL(esp); /* 0x100C2559: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x100C255A: ret  */
    RECOMP_REGS_OUT();
}

void sub_100C255B(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x100C255Bu);

L_100C255B:
    PUSH32(esp, ebp); /* 0x100C255B: push ebp */
    ebp = esp; /* 0x100C255C: mov ebp, esp */
    fp_push(*(float*)&MEM32(ebp + 0xC)); /* 0x100C255E: fld dword ptr [ebp + 0xc] */
    PUSH32(esp, ecx); /* 0x100C2561: push ecx */
    PUSH32(esp, ecx); /* 0x100C2562: push ecx */
    { float _v = (float)fp_pop(); *(float*)ADDR(esp + 0x4) = _v; } /* 0x100C2563: fstp dword ptr [esp + 4] */
    fp_push(*(float*)&MEM32(ebp + 0x8)); /* 0x100C2567: fld dword ptr [ebp + 8] */
    { float _v = (float)fp_pop(); *(float*)ADDR(esp) = _v; } /* 0x100C256A: fstp dword ptr [esp] */
    RECOMP_CALL(sub_100C1476); /* 0x100C256D: call 0x100c1476 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x100C2572: pop ecx */
    ecx = POP32_VAL(esp); /* 0x100C2573: pop ecx */
    ebp = POP32_VAL(esp); /* 0x100C2574: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x100C2575: ret  */
    RECOMP_REGS_OUT();
}

void sub_100C2576(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x100C2576u);

L_100C2576:
    PUSH32(esp, ebp); /* 0x100C2576: push ebp */
    ebp = esp; /* 0x100C2577: mov ebp, esp */
    PUSH32(esp, esi); /* 0x100C2579: push esi */
    PUSH32(esp, edi); /* 0x100C257A: push edi */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x10u; /* 0x100C257B: sub esp, 0x10 */
    _flag_k = FK_CMP;
    esi = ebp + 0x8; /* 0x100C257E: lea esi, [ebp + 8] */
    edi = esp; /* 0x100C2581: mov edi, esp */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x100C2583: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x100C2584: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x100C2585: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x100C2586: movsd dword ptr es:[edi], dword ptr [esi] */
    RECOMP_CALL(sub_100C5E60); /* 0x100C2587: call 0x100c5e60 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, ecx); /* 0x100C258C: push ecx */
    PUSH32(esp, ecx); /* 0x100C258D: push ecx */
    { double _v = fp_pop(); *(double*)ADDR(esp + 0x10) = _v; } /* 0x100C258E: fstp qword ptr [esp + 0x10] */
    edi = esp; /* 0x100C2592: mov edi, esp */
    esi = ebp + 0x8; /* 0x100C2594: lea esi, [ebp + 8] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x100C2597: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x100C2598: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x100C2599: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x100C259A: movsd dword ptr es:[edi], dword ptr [esi] */
    RECOMP_CALL(sub_100C6B29); /* 0x100C259B: call 0x100c6b29 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x100C25A0: pop ecx */
    ecx = POP32_VAL(esp); /* 0x100C25A1: pop ecx */
    { double _v = fp_pop(); *(double*)ADDR(esp) = _v; } /* 0x100C25A2: fstp qword ptr [esp] */
    RECOMP_CALL(sub_10068AB0); /* 0x100C25A5: call 0x10068ab0 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x10u; /* 0x100C25AA: add esp, 0x10 */
    _flag_k = FK_ADD;
    edi = POP32_VAL(esp); /* 0x100C25AD: pop edi */
    esi = POP32_VAL(esp); /* 0x100C25AE: pop esi */
    ebp = POP32_VAL(esp); /* 0x100C25AF: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x100C25B0: ret  */
    RECOMP_REGS_OUT();
}

void sub_100C25B1(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x100C25B1u);

L_100C25B1:
    PUSH32(esp, ebp); /* 0x100C25B1: push ebp */
    ebp = esp; /* 0x100C25B2: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x58u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x58u; /* 0x100C25B4: sub esp, 0x58 */
    _flag_k = FK_CMP;
    PUSH32(esp, esi); /* 0x100C25B7: push esi */
    PUSH32(esp, edi); /* 0x100C25B8: push edi */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x10u; /* 0x100C25B9: sub esp, 0x10 */
    _flag_k = FK_CMP;
    esi = ebp + 0xC; /* 0x100C25BC: lea esi, [ebp + 0xc] */
    edi = esp; /* 0x100C25BF: mov edi, esp */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x100C25C1: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x100C25C2: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x100C25C3: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x100C25C4: movsd dword ptr es:[edi], dword ptr [esi] */
    RECOMP_CALL(sub_100C6B29); /* 0x100C25C5: call 0x100c6b29 */
    RECOMP_FLAGS_IN();
    edi = esp; /* 0x100C25CA: mov edi, esp */
    esi = ebp + 0xC; /* 0x100C25CC: lea esi, [ebp + 0xc] */
    { double _v = fp_pop(); *(double*)ADDR(ebp + (-0x10)) = _v; } /* 0x100C25CF: fstp qword ptr [ebp - 0x10] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x100C25D2: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x100C25D3: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x100C25D4: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x100C25D5: movsd dword ptr es:[edi], dword ptr [esi] */
    RECOMP_CALL(sub_100C5E60); /* 0x100C25D6: call 0x100c5e60 */
    RECOMP_FLAGS_IN();
    eax = ebp + (-0x10); /* 0x100C25DB: lea eax, [ebp - 0x10] */
    PUSH32(esp, eax); /* 0x100C25DE: push eax */
    { double _v = fp_pop(); *(double*)ADDR(ebp + (-0x8)) = _v; } /* 0x100C25DF: fstp qword ptr [ebp - 8] */
    RECOMP_CALL(sub_100BFE08); /* 0x100C25E2: call 0x100bfe08 */
    RECOMP_FLAGS_IN();
    esi = (uint32_t)LO16(eax); /* 0x100C25E7: movzx esi, ax */
    eax = ebp + (-0x8); /* 0x100C25EA: lea eax, [ebp - 8] */
    PUSH32(esp, eax); /* 0x100C25ED: push eax */
    RECOMP_CALL(sub_100BFE08); /* 0x100C25EE: call 0x100bfe08 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x18u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x18u; /* 0x100C25F3: add esp, 0x18 */
    _flag_k = FK_ADD;
    eax = (uint32_t)LO16(eax); /* 0x100C25F6: movzx eax, ax */
    PUSH32(esp, 2); /* 0x100C25F9: push 2 */
    ecx = POP32_VAL(esp); /* 0x100C25FB: pop ecx */
    /* cmp LO16(esi), LO16(ecx) */ /* 0x100C25FC: cmp si, cx */
    _flag_a = (uint32_t)(LO16(esi)) << 16; _flag_b = (uint32_t)(LO16(ecx)) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    if (CMP_NE(_flag_a, _flag_b)) goto L_100C2615; /* 0x100C25FF: jne 0x100c2615 */
L_100C2601:
    fp_push(*(double*)ADDR(ebp + (-0x10))); /* 0x100C2601: fld qword ptr [ebp - 0x10] */
    /* cmp LO16(eax), LO16(ecx) */ /* 0x100C2604: cmp ax, cx */
    _flag_a = (uint32_t)(LO16(eax)) << 16; _flag_b = (uint32_t)(LO16(ecx)) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_100C2639; /* 0x100C2607: je 0x100c2639 */
L_100C2609:
    /* cmp LO16(eax), 1 */ /* 0x100C2609: cmp ax, 1 */
    _flag_a = (uint32_t)(LO16(eax)) << 16; _flag_b = (uint32_t)(1) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_100C26A9; /* 0x100C260D: je 0x100c26a9 */
L_100C2613:
    goto L_100C2644; /* 0x100C2613: jmp 0x100c2644 */
L_100C2615:
    /* cmp LO16(eax), LO16(ecx) */ /* 0x100C2615: cmp ax, cx */
    _flag_a = (uint32_t)(LO16(eax)) << 16; _flag_b = (uint32_t)(LO16(ecx)) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    if (CMP_NE(_flag_a, _flag_b)) goto L_100C264B; /* 0x100C2618: jne 0x100c264b */
L_100C261A:
    /* cmp LO16(esi), 1 */ /* 0x100C261A: cmp si, 1 */
    _flag_a = (uint32_t)(LO16(esi)) << 16; _flag_b = (uint32_t)(1) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    if (CMP_NE(_flag_a, _flag_b)) goto L_100C262E; /* 0x100C261E: jne 0x100c262e */
L_100C2620:
    fp_push(*(double*)ADDR(ebp + (-0x8))); /* 0x100C2620: fld qword ptr [ebp - 8] */
    fp_push(*(double*)ADDR(0x10065B48)); /* 0x100C2623: fld qword ptr [0x10065b48] */
    goto L_100C286B; /* 0x100C2629: jmp 0x100c286b */
L_100C262E:
    /* test LO16(esi), LO16(esi) */ /* 0x100C262E: test si, si */
    _flag_a = (uint32_t)(LO16(esi)) << 16; _flag_b = (uint32_t)(LO16(esi)) << 16;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 16);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_100C2641; /* 0x100C2631: jne 0x100c2641 */
L_100C2633:
    fp_push(*(double*)ADDR(0x10063C20)); /* 0x100C2633: fld qword ptr [0x10063c20] */
L_100C2639:
    fp_push(*(double*)ADDR(ebp + (-0x8))); /* 0x100C2639: fld qword ptr [ebp - 8] */
    goto L_100C286B; /* 0x100C263C: jmp 0x100c286b */
L_100C2641:
    fp_push(*(double*)ADDR(ebp + (-0x8))); /* 0x100C2641: fld qword ptr [ebp - 8] */
L_100C2644:
    fp_push(_st[0]); /* 0x100C2644: fld st(0) */
    goto L_100C286B; /* 0x100C2646: jmp 0x100c286b */
L_100C264B:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x100C264B: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx + 1; /* 0x100C264D: inc ecx */
    _flag_k = FK_INC;
    /* cmp LO16(esi), LO16(ecx) */ /* 0x100C264E: cmp si, cx */
    _flag_a = (uint32_t)(LO16(esi)) << 16; _flag_b = (uint32_t)(LO16(ecx)) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    if (CMP_NE(_flag_a, _flag_b)) goto L_100C269E; /* 0x100C2651: jne 0x100c269e */
L_100C2653:
    fp_push(0.0); /* 0x100C2653: fldz  */
    /* cmp LO16(eax), LO16(ecx) */ /* 0x100C2655: cmp ax, cx */
    _flag_a = (uint32_t)(LO16(eax)) << 16; _flag_b = (uint32_t)(LO16(ecx)) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    if (CMP_NE(_flag_a, _flag_b)) goto L_100C2674; /* 0x100C2658: jne 0x100c2674 */
L_100C265A:
    _fpu_cmp = FPU_CMP(_st[0], *(double*)ADDR(ebp + (-0x10))); /* 0x100C265A: fcomp qword ptr [ebp - 0x10] */
    fp_pop();
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x100C265D: fnstsw ax */
    /* test HI8(eax), 0x41u */ /* 0x100C265F: test ah, 0x41 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(0x41u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_100C266C; /* 0x100C2662: jne 0x100c266c */
L_100C2664:
    fp_push(*(double*)ADDR(0x10063BF0)); /* 0x100C2664: fld qword ptr [0x10063bf0] */
    goto L_100C2686; /* 0x100C266A: jmp 0x100c2686 */
L_100C266C:
    fp_push(*(double*)ADDR(0x10063BE0)); /* 0x100C266C: fld qword ptr [0x10063be0] */
    goto L_100C2686; /* 0x100C2672: jmp 0x100c2686 */
L_100C2674:
    _fpu_cmp = FPU_CMP(_st[0], *(double*)ADDR(ebp + (-0x10))); /* 0x100C2674: fcom qword ptr [ebp - 0x10] */
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x100C2677: fnstsw ax */
    /* test HI8(eax), 0x41u */ /* 0x100C2679: test ah, 0x41 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(0x41u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_100C2686; /* 0x100C267C: jne 0x100c2686 */
L_100C267E:
    { _st[0] = _st[0]; g_st_i64[0] = g_st_i64[0]; fp_pop(); } /* 0x100C267E: fstp st(0) */
    fp_push(*(double*)ADDR(0x10063BF8)); /* 0x100C2680: fld qword ptr [0x10063bf8] */
L_100C2686:
    eax = (uint32_t)MEM16(ebp + (-0x2)); /* 0x100C2686: movzx eax, word ptr [ebp - 2] */
    fp_push(*(double*)ADDR(0x10065B48)); /* 0x100C268A: fld qword ptr [0x10065b48] */
    _st[0] = -_st[0]; /* 0x100C2690: fchs  */
    /* test eax, 0x8000u */ /* 0x100C2692: test eax, 0x8000 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x8000u);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_100C26AC; /* 0x100C2697: jne 0x100c26ac */
L_100C2699:
    goto L_100C286B; /* 0x100C2699: jmp 0x100c286b */
L_100C269E:
    /* cmp LO16(eax), LO16(ecx) */ /* 0x100C269E: cmp ax, cx */
    _flag_a = (uint32_t)(LO16(eax)) << 16; _flag_b = (uint32_t)(LO16(ecx)) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    if (CMP_NE(_flag_a, _flag_b)) goto L_100C26B3; /* 0x100C26A1: jne 0x100c26b3 */
L_100C26A3:
    fp_push(*(double*)ADDR(0x10063C20)); /* 0x100C26A3: fld qword ptr [0x10063c20] */
L_100C26A9:
    fp_push(*(double*)ADDR(ebp + (-0x8))); /* 0x100C26A9: fld qword ptr [ebp - 8] */
L_100C26AC:
    _st[0] = -_st[0]; /* 0x100C26AC: fchs  */
    goto L_100C286B; /* 0x100C26AE: jmp 0x100c286b */
L_100C26B3:
    fp_push(*(double*)ADDR(ebp + (-0x8))); /* 0x100C26B3: fld qword ptr [ebp - 8] */
    eax = ebp + (-0x58); /* 0x100C26B6: lea eax, [ebp - 0x58] */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x10u; /* 0x100C26B9: sub esp, 0x10 */
    _flag_k = FK_CMP;
    _st[0] = -_st[0]; /* 0x100C26BC: fchs  */
    { double _v = fp_pop(); *(double*)ADDR(esp + 0x8) = _v; } /* 0x100C26BE: fstp qword ptr [esp + 8] */
    fp_push(*(double*)ADDR(ebp + (-0x10))); /* 0x100C26C2: fld qword ptr [ebp - 0x10] */
    fp_push(1.0); /* 0x100C26C5: fld1  */
    { double _v = fp_pop(); _st[0] += _v; } /* 0x100C26C7: faddp st(1) */
    { double _v = fp_pop(); *(double*)ADDR(esp) = _v; } /* 0x100C26C9: fstp qword ptr [esp] */
    PUSH32(esp, eax); /* 0x100C26CC: push eax */
    RECOMP_CALL(sub_100AACD2); /* 0x100C26CD: call 0x100aacd2 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x100C26D2: add esp, 4 */
    _flag_k = FK_ADD;
    esi = eax; /* 0x100C26D5: mov esi, eax */
    edi = esp; /* 0x100C26D7: mov edi, esp */
    eax = ebp + (-0x38); /* 0x100C26D9: lea eax, [ebp - 0x38] */
    PUSH32(esp, eax); /* 0x100C26DC: push eax */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x100C26DD: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x100C26DE: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x100C26DF: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x100C26E0: movsd dword ptr es:[edi], dword ptr [esi] */
    RECOMP_CALL(sub_100C76B8); /* 0x100C26E1: call 0x100c76b8 */
    RECOMP_FLAGS_IN();
    fp_push(*(double*)ADDR(ebp + (-0x8))); /* 0x100C26E6: fld qword ptr [ebp - 8] */
    edi = ebp + (-0x48); /* 0x100C26E9: lea edi, [ebp - 0x48] */
    esi = eax; /* 0x100C26EC: mov esi, eax */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x100C26EE: add esp, 4 */
    _flag_k = FK_ADD;
    _st[0] = -_st[0]; /* 0x100C26F1: fchs  */
    eax = ebp + (-0x58); /* 0x100C26F3: lea eax, [ebp - 0x58] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x100C26F6: movsd dword ptr es:[edi], dword ptr [esi] */
    { double _v = fp_pop(); *(double*)ADDR(esp + 0x8) = _v; } /* 0x100C26F7: fstp qword ptr [esp + 8] */
    fp_push(1.0); /* 0x100C26FB: fld1  */
    _st[0] -= *(double*)ADDR(ebp + (-0x10)); /* 0x100C26FD: fsub qword ptr [ebp - 0x10] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x100C2700: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x100C2701: movsd dword ptr es:[edi], dword ptr [esi] */
    { double _v = fp_pop(); *(double*)ADDR(esp) = _v; } /* 0x100C2702: fstp qword ptr [esp] */
    PUSH32(esp, eax); /* 0x100C2705: push eax */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x100C2706: movsd dword ptr es:[edi], dword ptr [esi] */
    RECOMP_CALL(sub_100AACD2); /* 0x100C2707: call 0x100aacd2 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x100C270C: add esp, 4 */
    _flag_k = FK_ADD;
    esi = eax; /* 0x100C270F: mov esi, eax */
    edi = esp; /* 0x100C2711: mov edi, esp */
    eax = ebp + (-0x38); /* 0x100C2713: lea eax, [ebp - 0x38] */
    PUSH32(esp, eax); /* 0x100C2716: push eax */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x100C2717: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x100C2718: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x100C2719: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x100C271A: movsd dword ptr es:[edi], dword ptr [esi] */
    RECOMP_CALL(sub_100C76B8); /* 0x100C271B: call 0x100c76b8 */
    RECOMP_FLAGS_IN();
    esi = eax; /* 0x100C2720: mov esi, eax */
    edi = ebp + (-0x20); /* 0x100C2722: lea edi, [ebp - 0x20] */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x100C2725: add esp, 4 */
    _flag_k = FK_ADD;
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x100C2728: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x100C2729: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x100C272A: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x100C272B: movsd dword ptr es:[edi], dword ptr [esi] */
    edi = esp; /* 0x100C272C: mov edi, esp */
    esi = ebp + (-0x48); /* 0x100C272E: lea esi, [ebp - 0x48] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x100C2731: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x100C2732: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x100C2733: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x100C2734: movsd dword ptr es:[edi], dword ptr [esi] */
    RECOMP_CALL(sub_100C6B29); /* 0x100C2735: call 0x100c6b29 */
    RECOMP_FLAGS_IN();
    edi = esp; /* 0x100C273A: mov edi, esp */
    esi = ebp + (-0x48); /* 0x100C273C: lea esi, [ebp - 0x48] */
    { double _v = fp_pop(); *(double*)ADDR(ebp + (-0x30)) = _v; } /* 0x100C273F: fstp qword ptr [ebp - 0x30] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x100C2742: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x100C2743: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x100C2744: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x100C2745: movsd dword ptr es:[edi], dword ptr [esi] */
    RECOMP_CALL(sub_100C5E60); /* 0x100C2746: call 0x100c5e60 */
    RECOMP_FLAGS_IN();
    edi = esp; /* 0x100C274B: mov edi, esp */
    esi = ebp + (-0x20); /* 0x100C274D: lea esi, [ebp - 0x20] */
    { double _v = fp_pop(); *(double*)ADDR(ebp + (-0x50)) = _v; } /* 0x100C2750: fstp qword ptr [ebp - 0x50] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x100C2753: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x100C2754: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x100C2755: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x100C2756: movsd dword ptr es:[edi], dword ptr [esi] */
    RECOMP_CALL(sub_100C5E60); /* 0x100C2757: call 0x100c5e60 */
    RECOMP_FLAGS_IN();
    edi = esp; /* 0x100C275C: mov edi, esp */
    esi = ebp + (-0x20); /* 0x100C275E: lea esi, [ebp - 0x20] */
    { double _v = fp_pop(); *(double*)ADDR(ebp + (-0x28)) = _v; } /* 0x100C2761: fstp qword ptr [ebp - 0x28] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x100C2764: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x100C2765: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x100C2766: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x100C2767: movsd dword ptr es:[edi], dword ptr [esi] */
    RECOMP_CALL(sub_100C6B29); /* 0x100C2768: call 0x100c6b29 */
    RECOMP_FLAGS_IN();
    edi = esp; /* 0x100C276D: mov edi, esp */
    esi = ebp + (-0x48); /* 0x100C276F: lea esi, [ebp - 0x48] */
    eax = ebp + (-0x48); /* 0x100C2772: lea eax, [ebp - 0x48] */
    PUSH32(esp, eax); /* 0x100C2775: push eax */
    { double _v = fp_pop(); *(double*)ADDR(ebp + (-0x18)) = _v; } /* 0x100C2776: fstp qword ptr [ebp - 0x18] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x100C2779: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x100C277A: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x100C277B: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x100C277C: movsd dword ptr es:[edi], dword ptr [esi] */
    RECOMP_CALL(sub_100C657E); /* 0x100C277D: call 0x100c657e */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x100C2782: add esp, 4 */
    _flag_k = FK_ADD;
    esi = eax; /* 0x100C2785: mov esi, eax */
    edi = esp; /* 0x100C2787: mov edi, esp */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x100C2789: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x100C278A: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x100C278B: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x100C278C: movsd dword ptr es:[edi], dword ptr [esi] */
    RECOMP_CALL(sub_100C6B29); /* 0x100C278D: call 0x100c6b29 */
    RECOMP_FLAGS_IN();
    { double _v = fp_pop(); *(double*)ADDR(esp + 0x8) = _v; } /* 0x100C2792: fstp qword ptr [esp + 8] */
    fp_push(*(double*)ADDR(ebp + (-0x18))); /* 0x100C2796: fld qword ptr [ebp - 0x18] */
    { double _v = fp_pop(); *(double*)ADDR(esp) = _v; } /* 0x100C2799: fstp qword ptr [esp] */
    RECOMP_CALL(sub_10036582); /* 0x100C279C: call 0x10036582 */
    RECOMP_FLAGS_IN();
    _st[0] += _st[0]; /* 0x100C27A1: fadd st(0), st(0) */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x10u; /* 0x100C27A3: add esp, 0x10 */
    _flag_k = FK_ADD;
    { double _v = fp_pop(); *(double*)ADDR(ebp + (-0x40)) = _v; } /* 0x100C27A6: fstp qword ptr [ebp - 0x40] */
    fp_push(*(double*)ADDR(0x10063C28)); /* 0x100C27A9: fld qword ptr [0x10063c28] */
    fp_push(*(double*)ADDR(ebp + (-0x30))); /* 0x100C27AF: fld qword ptr [ebp - 0x30] */
    _fpu_cmp = FPU_CMP(_st[0], _st[1]); /* 0x100C27B2: fcom st(1) */
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x100C27B4: fnstsw ax */
    fp_push(0.0); /* 0x100C27B6: fldz  */
    /* test HI8(eax), 0x41u */ /* 0x100C27B8: test ah, 0x41 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(0x41u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_100C27CF; /* 0x100C27BB: jne 0x100c27cf */
L_100C27BD:
    { _st[0] = _st[0]; g_st_i64[0] = g_st_i64[0]; fp_pop(); } /* 0x100C27BD: fstp st(0) */
    { _st[1] = _st[0]; g_st_i64[1] = g_st_i64[0]; fp_pop(); } /* 0x100C27BF: fstp st(1) */
    *(double*)ADDR(ebp + (-0x30)) = _st[0]; /* 0x100C27C1: fst qword ptr [ebp - 0x30] */
    _st[0] = *(double*)ADDR(ebp + (-0x18)) / _st[0]; /* 0x100C27C4: fdivr qword ptr [ebp - 0x18] */
    _st[0] *= *(double*)ADDR(ebp + (-0x50)); /* 0x100C27C7: fmul qword ptr [ebp - 0x50] */
    _st[0] += *(double*)ADDR(ebp + (-0x28)); /* 0x100C27CA: fadd qword ptr [ebp - 0x28] */
    goto L_100C2817; /* 0x100C27CD: jmp 0x100c2817 */
L_100C27CF:
    fp_push(*(double*)ADDR(ebp + (-0x50))); /* 0x100C27CF: fld qword ptr [ebp - 0x50] */
    _fpu_cmp = FPU_CMP(_st[0], _st[3]); /* 0x100C27D2: fcom st(3) */
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x100C27D4: fnstsw ax */
    /* test HI8(eax), 0x41u */ /* 0x100C27D6: test ah, 0x41 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(0x41u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_100C27E6; /* 0x100C27D9: jne 0x100c27e6 */
L_100C27DB:
    { _st[1] = _st[0]; g_st_i64[1] = g_st_i64[0]; fp_pop(); } /* 0x100C27DB: fstp st(1) */
    { _st[2] = _st[0]; g_st_i64[2] = g_st_i64[0]; fp_pop(); } /* 0x100C27DD: fstp st(2) */
    fp_push(_st[1]); /* 0x100C27DF: fld st(1) */
    { double _v = fp_pop(); *(double*)ADDR(ebp + (-0x30)) = _v; } /* 0x100C27E1: fstp qword ptr [ebp - 0x30] */
    goto L_100C27FC; /* 0x100C27E4: jmp 0x100c27fc */
L_100C27E6:
    fp_push(_st[0]); /* 0x100C27E6: fld st(0) */
    _st[0] = -_st[0]; /* 0x100C27E8: fchs  */
    *(double*)ADDR(ebp + (-0x30)) = _st[0]; /* 0x100C27EA: fst qword ptr [ebp - 0x30] */
    _fpu_cmp = FPU_CMP(_st[0], _st[4]); /* 0x100C27ED: fcom st(4) */
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x100C27EF: fnstsw ax */
    { _st[4] = _st[0]; g_st_i64[4] = g_st_i64[0]; fp_pop(); } /* 0x100C27F1: fstp st(4) */
    /* test HI8(eax), 0x41u */ /* 0x100C27F3: test ah, 0x41 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(0x41u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_100C2808; /* 0x100C27F6: jne 0x100c2808 */
L_100C27F8:
    { _st[1] = _st[0]; g_st_i64[1] = g_st_i64[0]; fp_pop(); } /* 0x100C27F8: fstp st(1) */
    { _st[0] = _st[0]; g_st_i64[0] = g_st_i64[0]; fp_pop(); } /* 0x100C27FA: fstp st(0) */
L_100C27FC:
    fp_push(*(double*)ADDR(ebp + (-0x28))); /* 0x100C27FC: fld qword ptr [ebp - 0x28] */
    { double _v = fp_pop(); _st[1] = _st[1] == 0.0 ? _v : _v / _st[1]; } /* 0x100C27FF: fdivrp st(2) */
    { double _v = fp_pop(); _st[0] *= _v; } /* 0x100C2801: fmulp st(1) */
    _st[0] += *(double*)ADDR(ebp + (-0x18)); /* 0x100C2803: fadd qword ptr [ebp - 0x18] */
    goto L_100C2817; /* 0x100C2806: jmp 0x100c2817 */
L_100C2808:
    { _st[3] = _st[0]; g_st_i64[3] = g_st_i64[0]; fp_pop(); } /* 0x100C2808: fstp st(3) */
    { double _v = fp_pop(); *(double*)ADDR(ebp + (-0x30)) = _v; } /* 0x100C280A: fstp qword ptr [ebp - 0x30] */
    fp_push(*(double*)ADDR(ebp + (-0x18))); /* 0x100C280D: fld qword ptr [ebp - 0x18] */
    { double _v = fp_pop(); _st[1] *= _v; } /* 0x100C2810: fmulp st(2) */
    _st[0] *= *(double*)ADDR(ebp + (-0x28)); /* 0x100C2812: fmul qword ptr [ebp - 0x28] */
    { double _v = fp_pop(); _st[0] += _v; } /* 0x100C2815: faddp st(1) */
L_100C2817:
    PUSH32(esp, ecx); /* 0x100C2817: push ecx */
    PUSH32(esp, ecx); /* 0x100C2818: push ecx */
    { double _v = fp_pop(); *(double*)ADDR(esp) = _v; } /* 0x100C2819: fstp qword ptr [esp] */
    RECOMP_CALL(sub_100C218F); /* 0x100C281C: call 0x100c218f */
    RECOMP_FLAGS_IN();
    *(double*)ADDR(ebp + (-0x50)) = _st[0]; /* 0x100C2821: fst qword ptr [ebp - 0x50] */
    fp_push(*(double*)ADDR(ebp + (-0x30))); /* 0x100C2824: fld qword ptr [ebp - 0x30] */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 8; /* 0x100C2827: add esp, 8 */
    _flag_k = FK_ADD;
    fp_push(0.0); /* 0x100C282A: fldz  */
    _fpu_cmp = FPU_CMP(_st[0], _st[1]); /* 0x100C282C: fucom st(1) */
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x100C282E: fnstsw ax */
    /* test HI8(eax), 0x44u */ /* 0x100C2830: test ah, 0x44 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(0x44u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if ((!RECOMP_PF((_flag_a & _flag_b), 24))) goto L_100C2862; /* 0x100C2833: jnp 0x100c2862 */
L_100C2835:
    { _st[2] = _st[0]; g_st_i64[2] = g_st_i64[0]; fp_pop(); } /* 0x100C2835: fstp st(2) */
    fp_push(*(double*)ADDR(ebp + (-0x40))); /* 0x100C2837: fld qword ptr [ebp - 0x40] */
    _fpu_cmp = FPU_CMP(_st[0], _st[2]); /* 0x100C283A: fcomp st(2) */
    fp_pop();
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x100C283C: fnstsw ax */
    PUSH32(esp, ecx); /* 0x100C283E: push ecx */
    PUSH32(esp, ecx); /* 0x100C283F: push ecx */
    { _st[1] = _st[0]; g_st_i64[1] = g_st_i64[0]; fp_pop(); } /* 0x100C2840: fstp st(1) */
    { double _v = fp_pop(); *(double*)ADDR(esp) = _v; } /* 0x100C2842: fstp qword ptr [esp] */
    /* test HI8(eax), 1 */ /* 0x100C2845: test ah, 1 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(1) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_100C2856; /* 0x100C2848: jne 0x100c2856 */
L_100C284A:
    RECOMP_CALL(sub_100367A8); /* 0x100C284A: call 0x100367a8 */
    RECOMP_FLAGS_IN();
    _st[0] += *(double*)ADDR(ebp + (-0x50)); /* 0x100C284F: fadd qword ptr [ebp - 0x50] */
    ecx = POP32_VAL(esp); /* 0x100C2852: pop ecx */
    ecx = POP32_VAL(esp); /* 0x100C2853: pop ecx */
    goto L_100C2866; /* 0x100C2854: jmp 0x100c2866 */
L_100C2856:
    RECOMP_CALL(sub_100367A8); /* 0x100C2856: call 0x100367a8 */
    RECOMP_FLAGS_IN();
    _st[0] = *(double*)ADDR(ebp + (-0x50)) - _st[0]; /* 0x100C285B: fsubr qword ptr [ebp - 0x50] */
    ecx = POP32_VAL(esp); /* 0x100C285E: pop ecx */
    ecx = POP32_VAL(esp); /* 0x100C285F: pop ecx */
    goto L_100C2866; /* 0x100C2860: jmp 0x100c2866 */
L_100C2862:
    { _st[1] = _st[0]; g_st_i64[1] = g_st_i64[0]; fp_pop(); } /* 0x100C2862: fstp st(1) */
    { _st[0] = _st[0]; g_st_i64[0] = g_st_i64[0]; fp_pop(); } /* 0x100C2864: fstp st(0) */
L_100C2866:
    fp_push(*(double*)ADDR(ebp + (-0x40))); /* 0x100C2866: fld qword ptr [ebp - 0x40] */
    fp_xch(1); /* 0x100C2869: fxch st(1) */
L_100C286B:
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x10u; /* 0x100C286B: sub esp, 0x10 */
    _flag_k = FK_CMP;
    eax = ebp + (-0x58); /* 0x100C286E: lea eax, [ebp - 0x58] */
    { double _v = fp_pop(); *(double*)ADDR(esp + 0x8) = _v; } /* 0x100C2871: fstp qword ptr [esp + 8] */
    { double _v = fp_pop(); *(double*)ADDR(esp) = _v; } /* 0x100C2875: fstp qword ptr [esp] */
    PUSH32(esp, eax); /* 0x100C2878: push eax */
    RECOMP_CALL(sub_100AACD2); /* 0x100C2879: call 0x100aacd2 */
    RECOMP_FLAGS_IN();
    esi = eax; /* 0x100C287E: mov esi, eax */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x14u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x14u; /* 0x100C2880: add esp, 0x14 */
    _flag_k = FK_ADD;
    eax = MEM32(ebp + 0x8); /* 0x100C2883: mov eax, dword ptr [ebp + 8] */
    edi = eax; /* 0x100C2886: mov edi, eax */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x100C2888: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x100C2889: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x100C288A: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x100C288B: movsd dword ptr es:[edi], dword ptr [esi] */
    edi = POP32_VAL(esp); /* 0x100C288C: pop edi */
    esi = POP32_VAL(esp); /* 0x100C288D: pop esi */
    esp = ebp; /* 0x100C288E: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x100C2890: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x100C2891: ret  */
    RECOMP_REGS_OUT();
}

void sub_100C2892(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x100C2892u);

L_100C2892:
    PUSH32(esp, ebp); /* 0x100C2892: push ebp */
    ebp = esp; /* 0x100C2893: mov ebp, esp */
    fp_push(*(float*)&MEM32(ebp + 0xC)); /* 0x100C2895: fld dword ptr [ebp + 0xc] */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x10u; /* 0x100C2898: sub esp, 0x10 */
    _flag_k = FK_CMP;
    { double _v = fp_pop(); *(double*)ADDR(esp + 0x8) = _v; } /* 0x100C289B: fstp qword ptr [esp + 8] */
    fp_push(*(float*)&MEM32(ebp + 0x8)); /* 0x100C289F: fld dword ptr [ebp + 8] */
    { double _v = fp_pop(); *(double*)ADDR(esp) = _v; } /* 0x100C28A2: fstp qword ptr [esp] */
    RECOMP_CALL(sub_10036582); /* 0x100C28A5: call 0x10036582 */
    RECOMP_FLAGS_IN();
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + 0xC) = _v; } /* 0x100C28AA: fstp dword ptr [ebp + 0xc] */
    fp_push(*(float*)&MEM32(ebp + 0xC)); /* 0x100C28AD: fld dword ptr [ebp + 0xc] */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x10u; /* 0x100C28B0: add esp, 0x10 */
    _flag_k = FK_ADD;
    ebp = POP32_VAL(esp); /* 0x100C28B3: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x100C28B4: ret  */
    RECOMP_REGS_OUT();
}

void sub_100C28B5(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x100C28B5u);

L_100C28B5:
    PUSH32(esp, ebp); /* 0x100C28B5: push ebp */
    ebp = esp; /* 0x100C28B6: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x24u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x24u; /* 0x100C28B8: sub esp, 0x24 */
    _flag_k = FK_CMP;
    PUSH32(esp, esi); /* 0x100C28BB: push esi */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x100C28BC: push dword ptr [ebp + 0xc] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x100C28BF: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_100C6B58); /* 0x100C28C2: call 0x100c6b58 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x100C28C7: push dword ptr [ebp + 0xc] */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x10)) = _v; } /* 0x100C28CA: fstp dword ptr [ebp - 0x10] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x100C28CD: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_100C5E33); /* 0x100C28D0: call 0x100c5e33 */
    RECOMP_FLAGS_IN();
    eax = ebp + (-0x10); /* 0x100C28D5: lea eax, [ebp - 0x10] */
    PUSH32(esp, eax); /* 0x100C28D8: push eax */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0xC)) = _v; } /* 0x100C28D9: fstp dword ptr [ebp - 0xc] */
    RECOMP_CALL(sub_100BFF5C); /* 0x100C28DC: call 0x100bff5c */
    RECOMP_FLAGS_IN();
    esi = (uint32_t)LO16(eax); /* 0x100C28E1: movzx esi, ax */
    eax = ebp + (-0xC); /* 0x100C28E4: lea eax, [ebp - 0xc] */
    PUSH32(esp, eax); /* 0x100C28E7: push eax */
    RECOMP_CALL(sub_100BFF5C); /* 0x100C28E8: call 0x100bff5c */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x18u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x18u; /* 0x100C28ED: add esp, 0x18 */
    _flag_k = FK_ADD;
    eax = (uint32_t)LO16(eax); /* 0x100C28F0: movzx eax, ax */
    PUSH32(esp, 2); /* 0x100C28F3: push 2 */
    ecx = POP32_VAL(esp); /* 0x100C28F5: pop ecx */
    /* cmp LO16(esi), LO16(ecx) */ /* 0x100C28F6: cmp si, cx */
    _flag_a = (uint32_t)(LO16(esi)) << 16; _flag_b = (uint32_t)(LO16(ecx)) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    if (CMP_NE(_flag_a, _flag_b)) goto L_100C291A; /* 0x100C28F9: jne 0x100c291a */
L_100C28FB:
    fp_push(*(float*)&MEM32(ebp + (-0x10))); /* 0x100C28FB: fld dword ptr [ebp - 0x10] */
    /* cmp LO16(eax), LO16(ecx) */ /* 0x100C28FE: cmp ax, cx */
    _flag_a = (uint32_t)(LO16(eax)) << 16; _flag_b = (uint32_t)(LO16(ecx)) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    if (CMP_NE(_flag_a, _flag_b)) goto L_100C290E; /* 0x100C2901: jne 0x100c290e */
L_100C2903:
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x8)) = _v; } /* 0x100C2903: fstp dword ptr [ebp - 8] */
    fp_push(*(float*)&MEM32(ebp + (-0xC))); /* 0x100C2906: fld dword ptr [ebp - 0xc] */
    goto L_100C2B2D; /* 0x100C2909: jmp 0x100c2b2d */
L_100C290E:
    /* cmp LO16(eax), 1 */ /* 0x100C290E: cmp ax, 1 */
    _flag_a = (uint32_t)(LO16(eax)) << 16; _flag_b = (uint32_t)(1) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_100C29B6; /* 0x100C2912: je 0x100c29b6 */
L_100C2918:
    goto L_100C2946; /* 0x100C2918: jmp 0x100c2946 */
L_100C291A:
    /* cmp LO16(eax), LO16(ecx) */ /* 0x100C291A: cmp ax, cx */
    _flag_a = (uint32_t)(LO16(eax)) << 16; _flag_b = (uint32_t)(LO16(ecx)) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    if (CMP_NE(_flag_a, _flag_b)) goto L_100C294E; /* 0x100C291D: jne 0x100c294e */
L_100C291F:
    /* cmp LO16(esi), 1 */ /* 0x100C291F: cmp si, 1 */
    _flag_a = (uint32_t)(LO16(esi)) << 16; _flag_b = (uint32_t)(1) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    if (CMP_NE(_flag_a, _flag_b)) goto L_100C2936; /* 0x100C2923: jne 0x100c2936 */
L_100C2925:
    fp_push(*(float*)&MEM32(ebp + (-0xC))); /* 0x100C2925: fld dword ptr [ebp - 0xc] */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x8)) = _v; } /* 0x100C2928: fstp dword ptr [ebp - 8] */
    fp_push(*(float*)&MEM32(0x10065B68)); /* 0x100C292B: fld dword ptr [0x10065b68] */
    goto L_100C2B2D; /* 0x100C2931: jmp 0x100c2b2d */
L_100C2936:
    /* test LO16(esi), LO16(esi) */ /* 0x100C2936: test si, si */
    _flag_a = (uint32_t)(LO16(esi)) << 16; _flag_b = (uint32_t)(LO16(esi)) << 16;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 16);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_100C2943; /* 0x100C2939: jne 0x100c2943 */
L_100C293B:
    fp_push(*(float*)&MEM32(0x10063C34)); /* 0x100C293B: fld dword ptr [0x10063c34] */
    RECOMP_BACKEDGE();
    goto L_100C2903; /* 0x100C2941: jmp 0x100c2903 */
L_100C2943:
    fp_push(*(float*)&MEM32(ebp + (-0xC))); /* 0x100C2943: fld dword ptr [ebp - 0xc] */
L_100C2946:
    { float _v = (float)_st[0]; *(float*)ADDR(ebp + (-0x8)) = _v; } /* 0x100C2946: fst dword ptr [ebp - 8] */
    goto L_100C2B2D; /* 0x100C2949: jmp 0x100c2b2d */
L_100C294E:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x100C294E: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx + 1; /* 0x100C2950: inc ecx */
    _flag_k = FK_INC;
    /* cmp LO16(esi), LO16(ecx) */ /* 0x100C2951: cmp si, cx */
    _flag_a = (uint32_t)(LO16(esi)) << 16; _flag_b = (uint32_t)(LO16(ecx)) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    if (CMP_NE(_flag_a, _flag_b)) goto L_100C29AB; /* 0x100C2954: jne 0x100c29ab */
L_100C2956:
    fp_push(0.0); /* 0x100C2956: fldz  */
    /* cmp LO16(eax), LO16(ecx) */ /* 0x100C2958: cmp ax, cx */
    _flag_a = (uint32_t)(LO16(eax)) << 16; _flag_b = (uint32_t)(LO16(ecx)) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    if (CMP_NE(_flag_a, _flag_b)) goto L_100C2977; /* 0x100C295B: jne 0x100c2977 */
L_100C295D:
    _fpu_cmp = FPU_CMP(_st[0], (double)*(float*)ADDR(ebp + (-0x10))); /* 0x100C295D: fcomp dword ptr [ebp - 0x10] */
    fp_pop();
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x100C2960: fnstsw ax */
    /* test HI8(eax), 0x41u */ /* 0x100C2962: test ah, 0x41 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(0x41u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_100C296F; /* 0x100C2965: jne 0x100c296f */
L_100C2967:
    fp_push(*(float*)&MEM32(0x10063C38)); /* 0x100C2967: fld dword ptr [0x10063c38] */
    goto L_100C2989; /* 0x100C296D: jmp 0x100c2989 */
L_100C296F:
    fp_push(*(float*)&MEM32(0x10063C30)); /* 0x100C296F: fld dword ptr [0x10063c30] */
    goto L_100C2989; /* 0x100C2975: jmp 0x100c2989 */
L_100C2977:
    _fpu_cmp = FPU_CMP(_st[0], (double)*(float*)ADDR(ebp + (-0x10))); /* 0x100C2977: fcom dword ptr [ebp - 0x10] */
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x100C297A: fnstsw ax */
    /* test HI8(eax), 0x41u */ /* 0x100C297C: test ah, 0x41 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(0x41u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_100C2989; /* 0x100C297F: jne 0x100c2989 */
L_100C2981:
    { _st[0] = _st[0]; g_st_i64[0] = g_st_i64[0]; fp_pop(); } /* 0x100C2981: fstp st(0) */
    fp_push(*(float*)&MEM32(0x10063C3C)); /* 0x100C2983: fld dword ptr [0x10063c3c] */
L_100C2989:
    eax = (uint32_t)MEM16(ebp + (-0xA)); /* 0x100C2989: movzx eax, word ptr [ebp - 0xa] */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x8)) = _v; } /* 0x100C298D: fstp dword ptr [ebp - 8] */
    fp_push(*(float*)&MEM32(0x10065B68)); /* 0x100C2990: fld dword ptr [0x10065b68] */
    _st[0] = -_st[0]; /* 0x100C2996: fchs  */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x4)) = _v; } /* 0x100C2998: fstp dword ptr [ebp - 4] */
    /* test eax, 0x8000u */ /* 0x100C299B: test eax, 0x8000 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x8000u);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_100C2B47; /* 0x100C29A0: je 0x100c2b47 */
L_100C29A6:
    fp_push(*(float*)&MEM32(ebp + (-0x4))); /* 0x100C29A6: fld dword ptr [ebp - 4] */
    goto L_100C29BC; /* 0x100C29A9: jmp 0x100c29bc */
L_100C29AB:
    /* cmp LO16(eax), LO16(ecx) */ /* 0x100C29AB: cmp ax, cx */
    _flag_a = (uint32_t)(LO16(eax)) << 16; _flag_b = (uint32_t)(LO16(ecx)) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    if (CMP_NE(_flag_a, _flag_b)) goto L_100C29C3; /* 0x100C29AE: jne 0x100c29c3 */
L_100C29B0:
    fp_push(*(float*)&MEM32(0x10063C34)); /* 0x100C29B0: fld dword ptr [0x10063c34] */
L_100C29B6:
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x8)) = _v; } /* 0x100C29B6: fstp dword ptr [ebp - 8] */
    fp_push(*(float*)&MEM32(ebp + (-0xC))); /* 0x100C29B9: fld dword ptr [ebp - 0xc] */
L_100C29BC:
    _st[0] = -_st[0]; /* 0x100C29BC: fchs  */
    goto L_100C2B2D; /* 0x100C29BE: jmp 0x100c2b2d */
L_100C29C3:
    fp_push(*(float*)&MEM32(ebp + (-0xC))); /* 0x100C29C3: fld dword ptr [ebp - 0xc] */
    _st[0] = -_st[0]; /* 0x100C29C6: fchs  */
    PUSH32(esp, edi); /* 0x100C29C8: push edi */
    PUSH32(esp, ecx); /* 0x100C29C9: push ecx */
    PUSH32(esp, ecx); /* 0x100C29CA: push ecx */
    { float _v = (float)fp_pop(); *(float*)ADDR(esp + 0x4) = _v; } /* 0x100C29CB: fstp dword ptr [esp + 4] */
    fp_push(*(float*)&MEM32(ebp + (-0x10))); /* 0x100C29CF: fld dword ptr [ebp - 0x10] */
    fp_push(1.0); /* 0x100C29D2: fld1  */
    { double _v = fp_pop(); _st[0] += _v; } /* 0x100C29D4: faddp st(1) */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x1C)) = _v; } /* 0x100C29D6: fstp dword ptr [ebp - 0x1c] */
    fp_push(*(float*)&MEM32(ebp + (-0x1C))); /* 0x100C29D9: fld dword ptr [ebp - 0x1c] */
    { float _v = (float)fp_pop(); *(float*)ADDR(esp) = _v; } /* 0x100C29DC: fstp dword ptr [esp] */
    RECOMP_CALL(sub_100AADAF); /* 0x100C29DF: call 0x100aadaf */
    RECOMP_FLAGS_IN();
    PUSH32(esp, edx); /* 0x100C29E4: push edx */
    PUSH32(esp, eax); /* 0x100C29E5: push eax */
    RECOMP_CALL(sub_100C7A98); /* 0x100C29E6: call 0x100c7a98 */
    RECOMP_FLAGS_IN();
    fp_push(*(float*)&MEM32(ebp + (-0xC))); /* 0x100C29EB: fld dword ptr [ebp - 0xc] */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 8; /* 0x100C29EE: add esp, 8 */
    _flag_k = FK_ADD;
    _st[0] = -_st[0]; /* 0x100C29F1: fchs  */
    MEM32(ebp + (-0x8)) = eax; /* 0x100C29F3: mov dword ptr [ebp - 8], eax */
    MEM32(ebp + (-0x14)) = edx; /* 0x100C29F6: mov dword ptr [ebp - 0x14], edx */
    { float _v = (float)fp_pop(); *(float*)ADDR(esp + 0x4) = _v; } /* 0x100C29F9: fstp dword ptr [esp + 4] */
    fp_push(*(float*)&MEM32(ebp + (-0x10))); /* 0x100C29FD: fld dword ptr [ebp - 0x10] */
    fp_push(1.0); /* 0x100C2A00: fld1  */
    { double _v = fp_pop(); _st[0] = _v - _st[0]; } /* 0x100C2A02: fsubrp st(1) */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x1C)) = _v; } /* 0x100C2A04: fstp dword ptr [ebp - 0x1c] */
    fp_push(*(float*)&MEM32(ebp + (-0x1C))); /* 0x100C2A07: fld dword ptr [ebp - 0x1c] */
    { float _v = (float)fp_pop(); *(float*)ADDR(esp) = _v; } /* 0x100C2A0A: fstp dword ptr [esp] */
    RECOMP_CALL(sub_100AADAF); /* 0x100C2A0D: call 0x100aadaf */
    RECOMP_FLAGS_IN();
    PUSH32(esp, edx); /* 0x100C2A12: push edx */
    PUSH32(esp, eax); /* 0x100C2A13: push eax */
    RECOMP_CALL(sub_100C7A98); /* 0x100C2A14: call 0x100c7a98 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, MEM32(ebp + (-0x14))); /* 0x100C2A19: push dword ptr [ebp - 0x14] */
    edi = eax; /* 0x100C2A1C: mov edi, eax */
    esi = edx; /* 0x100C2A1E: mov esi, edx */
    PUSH32(esp, MEM32(ebp + (-0x8))); /* 0x100C2A20: push dword ptr [ebp - 8] */
    RECOMP_CALL(sub_100C6B58); /* 0x100C2A23: call 0x100c6b58 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, MEM32(ebp + (-0x14))); /* 0x100C2A28: push dword ptr [ebp - 0x14] */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x20)) = _v; } /* 0x100C2A2B: fstp dword ptr [ebp - 0x20] */
    PUSH32(esp, MEM32(ebp + (-0x8))); /* 0x100C2A2E: push dword ptr [ebp - 8] */
    RECOMP_CALL(sub_100C5E33); /* 0x100C2A31: call 0x100c5e33 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, esi); /* 0x100C2A36: push esi */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x1C)) = _v; } /* 0x100C2A37: fstp dword ptr [ebp - 0x1c] */
    PUSH32(esp, edi); /* 0x100C2A3A: push edi */
    RECOMP_CALL(sub_100C5E33); /* 0x100C2A3B: call 0x100c5e33 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, esi); /* 0x100C2A40: push esi */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x18)) = _v; } /* 0x100C2A41: fstp dword ptr [ebp - 0x18] */
    PUSH32(esp, edi); /* 0x100C2A44: push edi */
    RECOMP_CALL(sub_100C6B58); /* 0x100C2A45: call 0x100c6b58 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, MEM32(ebp + (-0x14))); /* 0x100C2A4A: push dword ptr [ebp - 0x14] */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x4)) = _v; } /* 0x100C2A4D: fstp dword ptr [ebp - 4] */
    PUSH32(esp, MEM32(ebp + (-0x8))); /* 0x100C2A50: push dword ptr [ebp - 8] */
    RECOMP_CALL(sub_100C65C2); /* 0x100C2A53: call 0x100c65c2 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, edx); /* 0x100C2A58: push edx */
    PUSH32(esp, eax); /* 0x100C2A59: push eax */
    RECOMP_CALL(sub_100C6B58); /* 0x100C2A5A: call 0x100c6b58 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x38u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x38u; /* 0x100C2A5F: add esp, 0x38 */
    _flag_k = FK_ADD;
    { float _v = (float)fp_pop(); *(float*)ADDR(esp + 0x4) = _v; } /* 0x100C2A62: fstp dword ptr [esp + 4] */
    fp_push(*(float*)&MEM32(ebp + (-0x4))); /* 0x100C2A66: fld dword ptr [ebp - 4] */
    { float _v = (float)fp_pop(); *(float*)ADDR(esp) = _v; } /* 0x100C2A69: fstp dword ptr [esp] */
    RECOMP_CALL(sub_100C2892); /* 0x100C2A6C: call 0x100c2892 */
    RECOMP_FLAGS_IN();
    _st[0] += _st[0]; /* 0x100C2A71: fadd st(0), st(0) */
    ecx = POP32_VAL(esp); /* 0x100C2A73: pop ecx */
    ecx = POP32_VAL(esp); /* 0x100C2A74: pop ecx */
    edi = POP32_VAL(esp); /* 0x100C2A75: pop edi */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x8)) = _v; } /* 0x100C2A76: fstp dword ptr [ebp - 8] */
    fp_push(*(float*)&MEM32(ebp + (-0x20))); /* 0x100C2A79: fld dword ptr [ebp - 0x20] */
    fp_push(*(double*)ADDR(0x10063C40)); /* 0x100C2A7C: fld qword ptr [0x10063c40] */
    _fpu_cmp = FPU_CMP(_st[0], _st[1]); /* 0x100C2A82: fcom st(1) */
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x100C2A84: fnstsw ax */
    fp_push(0.0); /* 0x100C2A86: fldz  */
    /* test HI8(eax), 5 */ /* 0x100C2A88: test ah, 5 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(5) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (RECOMP_PF((_flag_a & _flag_b), 24)) goto L_100C2A9F; /* 0x100C2A8B: jp 0x100c2a9f */
L_100C2A8D:
    { _st[1] = _st[0]; g_st_i64[1] = g_st_i64[0]; fp_pop(); } /* 0x100C2A8D: fstp st(1) */
    { _st[0] = _st[0]; g_st_i64[0] = g_st_i64[0]; fp_pop(); } /* 0x100C2A8F: fstp st(0) */
    { float _v = (float)_st[0]; *(float*)ADDR(ebp + (-0x14)) = _v; } /* 0x100C2A91: fst dword ptr [ebp - 0x14] */
    _st[0] = (double)*(float*)ADDR(ebp + (-0x4)) / _st[0]; /* 0x100C2A94: fdivr dword ptr [ebp - 4] */
    _st[0] *= (double)*(float*)ADDR(ebp + (-0x1C)); /* 0x100C2A97: fmul dword ptr [ebp - 0x1c] */
    _st[0] += (double)*(float*)ADDR(ebp + (-0x18)); /* 0x100C2A9A: fadd dword ptr [ebp - 0x18] */
    goto L_100C2AEF; /* 0x100C2A9D: jmp 0x100c2aef */
L_100C2A9F:
    fp_push(*(float*)&MEM32(ebp + (-0x1C))); /* 0x100C2A9F: fld dword ptr [ebp - 0x1c] */
    _fpu_cmp = FPU_CMP(_st[0], _st[2]); /* 0x100C2AA2: fcom st(2) */
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x100C2AA4: fnstsw ax */
    /* test HI8(eax), 0x41u */ /* 0x100C2AA6: test ah, 0x41 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(0x41u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_100C2ABC; /* 0x100C2AA9: jne 0x100c2abc */
L_100C2AAB:
    { _st[2] = _st[0]; g_st_i64[2] = g_st_i64[0]; fp_pop(); } /* 0x100C2AAB: fstp st(2) */
    { _st[0] = _st[0]; g_st_i64[0] = g_st_i64[0]; fp_pop(); } /* 0x100C2AAD: fstp st(0) */
    { float _v = (float)_st[0]; *(float*)ADDR(ebp + (-0x14)) = _v; } /* 0x100C2AAF: fst dword ptr [ebp - 0x14] */
    _st[0] = (double)*(float*)ADDR(ebp + (-0x18)) / _st[0]; /* 0x100C2AB2: fdivr dword ptr [ebp - 0x18] */
L_100C2AB5:
    { double _v = fp_pop(); _st[0] *= _v; } /* 0x100C2AB5: fmulp st(1) */
    _st[0] += (double)*(float*)ADDR(ebp + (-0x4)); /* 0x100C2AB7: fadd dword ptr [ebp - 4] */
    goto L_100C2AEF; /* 0x100C2ABA: jmp 0x100c2aef */
L_100C2ABC:
    fp_push(_st[0]); /* 0x100C2ABC: fld st(0) */
    _st[0] = -_st[0]; /* 0x100C2ABE: fchs  */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x20)) = _v; } /* 0x100C2AC0: fstp dword ptr [ebp - 0x20] */
    fp_push(*(float*)&MEM32(ebp + (-0x20))); /* 0x100C2AC3: fld dword ptr [ebp - 0x20] */
    _fpu_cmp = FPU_CMP(_st[0], _st[3]); /* 0x100C2AC6: fcom st(3) */
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x100C2AC8: fnstsw ax */
    { _st[3] = _st[0]; g_st_i64[3] = g_st_i64[0]; fp_pop(); } /* 0x100C2ACA: fstp st(3) */
    /* test HI8(eax), 0x41u */ /* 0x100C2ACC: test ah, 0x41 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(0x41u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_100C2AE0; /* 0x100C2ACF: jne 0x100c2ae0 */
L_100C2AD1:
    { _st[0] = _st[0]; g_st_i64[0] = g_st_i64[0]; fp_pop(); } /* 0x100C2AD1: fstp st(0) */
    { _st[0] = _st[0]; g_st_i64[0] = g_st_i64[0]; fp_pop(); } /* 0x100C2AD3: fstp st(0) */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x14)) = _v; } /* 0x100C2AD5: fstp dword ptr [ebp - 0x14] */
    fp_push(*(float*)&MEM32(ebp + (-0x18))); /* 0x100C2AD8: fld dword ptr [ebp - 0x18] */
    _st[0] /= (double)*(float*)ADDR(ebp + (-0x14)); /* 0x100C2ADB: fdiv dword ptr [ebp - 0x14] */
    RECOMP_BACKEDGE();
    goto L_100C2AB5; /* 0x100C2ADE: jmp 0x100c2ab5 */
L_100C2AE0:
    { _st[2] = _st[0]; g_st_i64[2] = g_st_i64[0]; fp_pop(); } /* 0x100C2AE0: fstp st(2) */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x14)) = _v; } /* 0x100C2AE2: fstp dword ptr [ebp - 0x14] */
    _st[0] *= (double)*(float*)ADDR(ebp + (-0x4)); /* 0x100C2AE5: fmul dword ptr [ebp - 4] */
    fp_push(*(float*)&MEM32(ebp + (-0x18))); /* 0x100C2AE8: fld dword ptr [ebp - 0x18] */
    { double _v = fp_pop(); _st[1] *= _v; } /* 0x100C2AEB: fmulp st(2) */
    { double _v = fp_pop(); _st[0] += _v; } /* 0x100C2AED: faddp st(1) */
L_100C2AEF:
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x18)) = _v; } /* 0x100C2AEF: fstp dword ptr [ebp - 0x18] */
    fp_push(*(float*)&MEM32(ebp + (-0x18))); /* 0x100C2AF2: fld dword ptr [ebp - 0x18] */
    PUSH32(esp, ecx); /* 0x100C2AF5: push ecx */
    { float _v = (float)fp_pop(); *(float*)ADDR(esp) = _v; } /* 0x100C2AF6: fstp dword ptr [esp] */
    RECOMP_CALL(sub_100C2219); /* 0x100C2AF9: call 0x100c2219 */
    RECOMP_FLAGS_IN();
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x4)) = _v; } /* 0x100C2AFE: fstp dword ptr [ebp - 4] */
    fp_push(*(float*)&MEM32(ebp + (-0x14))); /* 0x100C2B01: fld dword ptr [ebp - 0x14] */
    fp_push(0.0); /* 0x100C2B04: fldz  */
    _fpu_cmp = FPU_CMP(_st[0], _st[1]); /* 0x100C2B06: fucomp st(1) */
    fp_pop();
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x100C2B08: fnstsw ax */
    ecx = POP32_VAL(esp); /* 0x100C2B0A: pop ecx */
    /* test HI8(eax), 0x44u */ /* 0x100C2B0B: test ah, 0x44 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(0x44u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if ((!RECOMP_PF((_flag_a & _flag_b), 24))) goto L_100C2B45; /* 0x100C2B0E: jnp 0x100c2b45 */
L_100C2B10:
    fp_push(*(float*)&MEM32(ebp + (-0x8))); /* 0x100C2B10: fld dword ptr [ebp - 8] */
    _fpu_cmp = FPU_CMP(_st[0], *(double*)ADDR(0x10067CD0)); /* 0x100C2B13: fcomp qword ptr [0x10067cd0] */
    fp_pop();
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x100C2B19: fnstsw ax */
    PUSH32(esp, ecx); /* 0x100C2B1B: push ecx */
    /* test HI8(eax), 1 */ /* 0x100C2B1C: test ah, 1 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(1) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_100C2B32; /* 0x100C2B1F: jne 0x100c2b32 */
L_100C2B21:
    { float _v = (float)fp_pop(); *(float*)ADDR(esp) = _v; } /* 0x100C2B21: fstp dword ptr [esp] */
    RECOMP_CALL(sub_100C20AF); /* 0x100C2B24: call 0x100c20af */
    RECOMP_FLAGS_IN();
    _st[0] += (double)*(float*)ADDR(ebp + (-0x4)); /* 0x100C2B29: fadd dword ptr [ebp - 4] */
L_100C2B2C:
    ecx = POP32_VAL(esp); /* 0x100C2B2C: pop ecx */
L_100C2B2D:
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x4)) = _v; } /* 0x100C2B2D: fstp dword ptr [ebp - 4] */
    goto L_100C2B47; /* 0x100C2B30: jmp 0x100c2b47 */
L_100C2B32:
    fp_push(*(float*)&MEM32(ebp + (-0x4))); /* 0x100C2B32: fld dword ptr [ebp - 4] */
    { double _v = fp_pop(); *(double*)ADDR(ebp + (-0x24)) = _v; } /* 0x100C2B35: fstp qword ptr [ebp - 0x24] */
    { float _v = (float)fp_pop(); *(float*)ADDR(esp) = _v; } /* 0x100C2B38: fstp dword ptr [esp] */
    RECOMP_CALL(sub_100C20AF); /* 0x100C2B3B: call 0x100c20af */
    RECOMP_FLAGS_IN();
    _st[0] = *(double*)ADDR(ebp + (-0x24)) - _st[0]; /* 0x100C2B40: fsubr qword ptr [ebp - 0x24] */
    RECOMP_BACKEDGE();
    goto L_100C2B2C; /* 0x100C2B43: jmp 0x100c2b2c */
L_100C2B45:
    { _st[0] = _st[0]; g_st_i64[0] = g_st_i64[0]; fp_pop(); } /* 0x100C2B45: fstp st(0) */
L_100C2B47:
    fp_push(*(float*)&MEM32(ebp + (-0x4))); /* 0x100C2B47: fld dword ptr [ebp - 4] */
    PUSH32(esp, ecx); /* 0x100C2B4A: push ecx */
    PUSH32(esp, ecx); /* 0x100C2B4B: push ecx */
    { float _v = (float)fp_pop(); *(float*)ADDR(esp + 0x4) = _v; } /* 0x100C2B4C: fstp dword ptr [esp + 4] */
    fp_push(*(float*)&MEM32(ebp + (-0x8))); /* 0x100C2B50: fld dword ptr [ebp - 8] */
    { float _v = (float)fp_pop(); *(float*)ADDR(esp) = _v; } /* 0x100C2B53: fstp dword ptr [esp] */
    RECOMP_CALL(sub_100AADAF); /* 0x100C2B56: call 0x100aadaf */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x100C2B5B: pop ecx */
    ecx = POP32_VAL(esp); /* 0x100C2B5C: pop ecx */
    esi = POP32_VAL(esp); /* 0x100C2B5D: pop esi */
    esp = ebp; /* 0x100C2B5E: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x100C2B60: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x100C2B61: ret  */
    RECOMP_REGS_OUT();
}

void sub_100C2B62(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x100C2B62u);

L_100C2B62:
    PUSH32(esp, ebp); /* 0x100C2B62: push ebp */
    ebp = esp; /* 0x100C2B63: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x58u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x58u; /* 0x100C2B65: sub esp, 0x58 */
    _flag_k = FK_CMP;
    PUSH32(esp, ebx); /* 0x100C2B68: push ebx */
    PUSH32(esp, esi); /* 0x100C2B69: push esi */
    PUSH32(esp, edi); /* 0x100C2B6A: push edi */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x10u; /* 0x100C2B6B: sub esp, 0x10 */
    _flag_k = FK_CMP;
    esi = ebp + 0xC; /* 0x100C2B6E: lea esi, [ebp + 0xc] */
    edi = esp; /* 0x100C2B71: mov edi, esp */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x100C2B73: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x100C2B74: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x100C2B75: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x100C2B76: movsd dword ptr es:[edi], dword ptr [esi] */
    RECOMP_CALL(sub_100C6B29); /* 0x100C2B77: call 0x100c6b29 */
    RECOMP_FLAGS_IN();
    edi = esp; /* 0x100C2B7C: mov edi, esp */
    esi = ebp + 0xC; /* 0x100C2B7E: lea esi, [ebp + 0xc] */
    { double _v = fp_pop(); *(double*)ADDR(ebp + (-0x18)) = _v; } /* 0x100C2B81: fstp qword ptr [ebp - 0x18] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x100C2B84: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x100C2B85: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x100C2B86: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x100C2B87: movsd dword ptr es:[edi], dword ptr [esi] */
    RECOMP_CALL(sub_100C5E60); /* 0x100C2B88: call 0x100c5e60 */
    RECOMP_FLAGS_IN();
    eax = ebp + (-0x18); /* 0x100C2B8D: lea eax, [ebp - 0x18] */
    PUSH32(esp, eax); /* 0x100C2B90: push eax */
    { double _v = fp_pop(); *(double*)ADDR(ebp + (-0x8)) = _v; } /* 0x100C2B91: fstp qword ptr [ebp - 8] */
    RECOMP_CALL(sub_100BFE08); /* 0x100C2B94: call 0x100bfe08 */
    RECOMP_FLAGS_IN();
    esi = (uint32_t)LO16(eax); /* 0x100C2B99: movzx esi, ax */
    eax = ebp + (-0x8); /* 0x100C2B9C: lea eax, [ebp - 8] */
    PUSH32(esp, eax); /* 0x100C2B9F: push eax */
    RECOMP_CALL(sub_100BFE08); /* 0x100C2BA0: call 0x100bfe08 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x18u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x18u; /* 0x100C2BA5: add esp, 0x18 */
    _flag_k = FK_ADD;
    eax = (uint32_t)LO16(eax); /* 0x100C2BA8: movzx eax, ax */
    PUSH32(esp, 2); /* 0x100C2BAB: push 2 */
    ecx = POP32_VAL(esp); /* 0x100C2BAD: pop ecx */
    /* cmp LO16(esi), LO16(ecx) */ /* 0x100C2BAE: cmp si, cx */
    _flag_a = (uint32_t)(LO16(esi)) << 16; _flag_b = (uint32_t)(LO16(ecx)) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    if (CMP_NE(_flag_a, _flag_b)) goto L_100C2BD9; /* 0x100C2BB1: jne 0x100c2bd9 */
L_100C2BB3:
    /* cmp LO16(eax), LO16(ecx) */ /* 0x100C2BB3: cmp ax, cx */
    _flag_a = (uint32_t)(LO16(eax)) << 16; _flag_b = (uint32_t)(LO16(ecx)) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    if (CMP_NE(_flag_a, _flag_b)) goto L_100C2BBD; /* 0x100C2BB6: jne 0x100c2bbd */
L_100C2BB8:
    fp_push(*(double*)ADDR(ebp + (-0x18))); /* 0x100C2BB8: fld qword ptr [ebp - 0x18] */
    goto L_100C2BEA; /* 0x100C2BBB: jmp 0x100c2bea */
L_100C2BBD:
    /* cmp LO16(eax), 1 */ /* 0x100C2BBD: cmp ax, 1 */
    _flag_a = (uint32_t)(LO16(eax)) << 16; _flag_b = (uint32_t)(1) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    if (CMP_NE(_flag_a, _flag_b)) goto L_100C2BD4; /* 0x100C2BC1: jne 0x100c2bd4 */
L_100C2BC3:
    fp_push(*(double*)ADDR(0x10065B48)); /* 0x100C2BC3: fld qword ptr [0x10065b48] */
    { double _v = fp_pop(); *(double*)ADDR(ebp + (-0x10)) = _v; } /* 0x100C2BC9: fstp qword ptr [ebp - 0x10] */
    fp_push(*(double*)ADDR(ebp + (-0x18))); /* 0x100C2BCC: fld qword ptr [ebp - 0x18] */
    goto L_100C2E65; /* 0x100C2BCF: jmp 0x100c2e65 */
L_100C2BD4:
    fp_push(*(double*)ADDR(ebp + (-0x18))); /* 0x100C2BD4: fld qword ptr [ebp - 0x18] */
    goto L_100C2BF8; /* 0x100C2BD7: jmp 0x100c2bf8 */
L_100C2BD9:
    /* cmp LO16(eax), LO16(ecx) */ /* 0x100C2BD9: cmp ax, cx */
    _flag_a = (uint32_t)(LO16(eax)) << 16; _flag_b = (uint32_t)(LO16(ecx)) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    if (CMP_NE(_flag_a, _flag_b)) goto L_100C2C00; /* 0x100C2BDC: jne 0x100c2c00 */
L_100C2BDE:
    /* cmp LO16(esi), 1 */ /* 0x100C2BDE: cmp si, 1 */
    _flag_a = (uint32_t)(LO16(esi)) << 16; _flag_b = (uint32_t)(1) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    if (CMP_NE(_flag_a, _flag_b)) goto L_100C2BF5; /* 0x100C2BE2: jne 0x100c2bf5 */
L_100C2BE4:
    fp_push(*(double*)ADDR(0x10065B48)); /* 0x100C2BE4: fld qword ptr [0x10065b48] */
L_100C2BEA:
    { double _v = fp_pop(); *(double*)ADDR(ebp + (-0x10)) = _v; } /* 0x100C2BEA: fstp qword ptr [ebp - 0x10] */
    fp_push(*(double*)ADDR(ebp + (-0x8))); /* 0x100C2BED: fld qword ptr [ebp - 8] */
    goto L_100C2E65; /* 0x100C2BF0: jmp 0x100c2e65 */
L_100C2BF5:
    fp_push(*(double*)ADDR(ebp + (-0x8))); /* 0x100C2BF5: fld qword ptr [ebp - 8] */
L_100C2BF8:
    *(double*)ADDR(ebp + (-0x10)) = _st[0]; /* 0x100C2BF8: fst qword ptr [ebp - 0x10] */
    goto L_100C2E65; /* 0x100C2BFB: jmp 0x100c2e65 */
L_100C2C00:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ebx = 0; /* 0x100C2C00: xor ebx, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(1);
    ebx = ebx + 1; /* 0x100C2C02: inc ebx */
    _flag_k = FK_INC;
    /* cmp LO16(esi), LO16(ebx) */ /* 0x100C2C03: cmp si, bx */
    _flag_a = (uint32_t)(LO16(esi)) << 16; _flag_b = (uint32_t)(LO16(ebx)) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    if (CMP_NE(_flag_a, _flag_b)) goto L_100C2C52; /* 0x100C2C06: jne 0x100c2c52 */
L_100C2C08:
    fp_push(*(double*)ADDR(0x10065B48)); /* 0x100C2C08: fld qword ptr [0x10065b48] */
    { double _v = fp_pop(); *(double*)ADDR(ebp + (-0x10)) = _v; } /* 0x100C2C0E: fstp qword ptr [ebp - 0x10] */
    fp_push(0.0); /* 0x100C2C11: fldz  */
    /* cmp LO16(eax), LO16(ebx) */ /* 0x100C2C13: cmp ax, bx */
    _flag_a = (uint32_t)(LO16(eax)) << 16; _flag_b = (uint32_t)(LO16(ebx)) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    if (CMP_NE(_flag_a, _flag_b)) goto L_100C2C32; /* 0x100C2C16: jne 0x100c2c32 */
L_100C2C18:
    _fpu_cmp = FPU_CMP(_st[0], *(double*)ADDR(ebp + (-0x18))); /* 0x100C2C18: fcomp qword ptr [ebp - 0x18] */
    fp_pop();
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x100C2C1B: fnstsw ax */
    /* test HI8(eax), 0x41u */ /* 0x100C2C1D: test ah, 0x41 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(0x41u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_100C2C2A; /* 0x100C2C20: jne 0x100c2c2a */
L_100C2C22:
    fp_push(*(double*)ADDR(0x10063BF0)); /* 0x100C2C22: fld qword ptr [0x10063bf0] */
    goto L_100C2C44; /* 0x100C2C28: jmp 0x100c2c44 */
L_100C2C2A:
    fp_push(*(double*)ADDR(0x10063BE0)); /* 0x100C2C2A: fld qword ptr [0x10063be0] */
    goto L_100C2C44; /* 0x100C2C30: jmp 0x100c2c44 */
L_100C2C32:
    _fpu_cmp = FPU_CMP(_st[0], *(double*)ADDR(ebp + (-0x18))); /* 0x100C2C32: fcom qword ptr [ebp - 0x18] */
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x100C2C35: fnstsw ax */
    /* test HI8(eax), 0x41u */ /* 0x100C2C37: test ah, 0x41 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(0x41u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_100C2C44; /* 0x100C2C3A: jne 0x100c2c44 */
L_100C2C3C:
    { _st[0] = _st[0]; g_st_i64[0] = g_st_i64[0]; fp_pop(); } /* 0x100C2C3C: fstp st(0) */
    fp_push(*(double*)ADDR(0x10063BF8)); /* 0x100C2C3E: fld qword ptr [0x10063bf8] */
L_100C2C44:
    eax = (uint32_t)MEM16(ebp + (-0x2)); /* 0x100C2C44: movzx eax, word ptr [ebp - 2] */
    /* test eax, 0x8000u */ /* 0x100C2C48: test eax, 0x8000 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x8000u);
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_100C2E61; /* 0x100C2C4D: jmp 0x100c2e61 */
L_100C2C52:
    /* cmp LO16(eax), LO16(ebx) */ /* 0x100C2C52: cmp ax, bx */
    _flag_a = (uint32_t)(LO16(eax)) << 16; _flag_b = (uint32_t)(LO16(ebx)) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    if (CMP_NE(_flag_a, _flag_b)) goto L_100C2C82; /* 0x100C2C55: jne 0x100c2c82 */
L_100C2C57:
    fp_push(*(double*)ADDR(0x10065B48)); /* 0x100C2C57: fld qword ptr [0x10065b48] */
    { double _v = fp_pop(); *(double*)ADDR(ebp + (-0x10)) = _v; } /* 0x100C2C5D: fstp qword ptr [ebp - 0x10] */
    fp_push(0.0); /* 0x100C2C60: fldz  */
    _fpu_cmp = FPU_CMP(_st[0], *(double*)ADDR(ebp + (-0x8))); /* 0x100C2C62: fcomp qword ptr [ebp - 8] */
    fp_pop();
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x100C2C65: fnstsw ax */
    /* test HI8(eax), 0x41u */ /* 0x100C2C67: test ah, 0x41 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(0x41u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_100C2C77; /* 0x100C2C6A: jne 0x100c2c77 */
L_100C2C6C:
    fp_push(*(double*)ADDR(0x10063C48)); /* 0x100C2C6C: fld qword ptr [0x10063c48] */
    goto L_100C2E65; /* 0x100C2C72: jmp 0x100c2e65 */
L_100C2C77:
    fp_push(*(double*)ADDR(0x10063C20)); /* 0x100C2C77: fld qword ptr [0x10063c20] */
    goto L_100C2E65; /* 0x100C2C7D: jmp 0x100c2e65 */
L_100C2C82:
    fp_push(*(double*)ADDR(ebp + (-0x8))); /* 0x100C2C82: fld qword ptr [ebp - 8] */
    eax = ebp + (-0x58); /* 0x100C2C85: lea eax, [ebp - 0x58] */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x10u; /* 0x100C2C88: sub esp, 0x10 */
    _flag_k = FK_CMP;
    _st[0] = -_st[0]; /* 0x100C2C8B: fchs  */
    { double _v = fp_pop(); *(double*)ADDR(esp + 0x8) = _v; } /* 0x100C2C8D: fstp qword ptr [esp + 8] */
    fp_push(*(double*)ADDR(ebp + (-0x18))); /* 0x100C2C91: fld qword ptr [ebp - 0x18] */
    fp_push(1.0); /* 0x100C2C94: fld1  */
    { double _v = fp_pop(); _st[0] -= _v; } /* 0x100C2C96: fsubp st(1) */
    { double _v = fp_pop(); *(double*)ADDR(esp) = _v; } /* 0x100C2C98: fstp qword ptr [esp] */
    PUSH32(esp, eax); /* 0x100C2C9B: push eax */
    RECOMP_CALL(sub_100AACD2); /* 0x100C2C9C: call 0x100aacd2 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x100C2CA1: add esp, 4 */
    _flag_k = FK_ADD;
    esi = eax; /* 0x100C2CA4: mov esi, eax */
    edi = esp; /* 0x100C2CA6: mov edi, esp */
    eax = ebp + (-0x38); /* 0x100C2CA8: lea eax, [ebp - 0x38] */
    PUSH32(esp, eax); /* 0x100C2CAB: push eax */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x100C2CAC: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x100C2CAD: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x100C2CAE: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x100C2CAF: movsd dword ptr es:[edi], dword ptr [esi] */
    RECOMP_CALL(sub_100C76B8); /* 0x100C2CB0: call 0x100c76b8 */
    RECOMP_FLAGS_IN();
    fp_push(*(double*)ADDR(ebp + (-0x8))); /* 0x100C2CB5: fld qword ptr [ebp - 8] */
    edi = ebp + (-0x48); /* 0x100C2CB8: lea edi, [ebp - 0x48] */
    esi = eax; /* 0x100C2CBB: mov esi, eax */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x100C2CBD: add esp, 4 */
    _flag_k = FK_ADD;
    eax = ebp + (-0x38); /* 0x100C2CC0: lea eax, [ebp - 0x38] */
    { double _v = fp_pop(); *(double*)ADDR(esp + 0x8) = _v; } /* 0x100C2CC3: fstp qword ptr [esp + 8] */
    fp_push(*(double*)ADDR(ebp + (-0x18))); /* 0x100C2CC7: fld qword ptr [ebp - 0x18] */
    fp_push(1.0); /* 0x100C2CCA: fld1  */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x100C2CCC: movsd dword ptr es:[edi], dword ptr [esi] */
    { double _v = fp_pop(); _st[0] += _v; } /* 0x100C2CCD: faddp st(1) */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x100C2CCF: movsd dword ptr es:[edi], dword ptr [esi] */
    { double _v = fp_pop(); *(double*)ADDR(esp) = _v; } /* 0x100C2CD0: fstp qword ptr [esp] */
    PUSH32(esp, eax); /* 0x100C2CD3: push eax */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x100C2CD4: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x100C2CD5: movsd dword ptr es:[edi], dword ptr [esi] */
    RECOMP_CALL(sub_100AACD2); /* 0x100C2CD6: call 0x100aacd2 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x100C2CDB: add esp, 4 */
    _flag_k = FK_ADD;
    esi = eax; /* 0x100C2CDE: mov esi, eax */
    edi = esp; /* 0x100C2CE0: mov edi, esp */
    eax = ebp + (-0x28); /* 0x100C2CE2: lea eax, [ebp - 0x28] */
    PUSH32(esp, eax); /* 0x100C2CE5: push eax */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x100C2CE6: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x100C2CE7: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x100C2CE8: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x100C2CE9: movsd dword ptr es:[edi], dword ptr [esi] */
    RECOMP_CALL(sub_100C76B8); /* 0x100C2CEA: call 0x100c76b8 */
    RECOMP_FLAGS_IN();
    esi = eax; /* 0x100C2CEF: mov esi, eax */
    edi = ebp + (-0x58); /* 0x100C2CF1: lea edi, [ebp - 0x58] */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x100C2CF4: add esp, 4 */
    _flag_k = FK_ADD;
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x100C2CF7: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x100C2CF8: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x100C2CF9: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x100C2CFA: movsd dword ptr es:[edi], dword ptr [esi] */
    edi = esp; /* 0x100C2CFB: mov edi, esp */
    esi = ebp + (-0x48); /* 0x100C2CFD: lea esi, [ebp - 0x48] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x100C2D00: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x100C2D01: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x100C2D02: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x100C2D03: movsd dword ptr es:[edi], dword ptr [esi] */
    RECOMP_CALL(sub_100C6B29); /* 0x100C2D04: call 0x100c6b29 */
    RECOMP_FLAGS_IN();
    edi = esp; /* 0x100C2D09: mov edi, esp */
    esi = ebp + (-0x48); /* 0x100C2D0B: lea esi, [ebp - 0x48] */
    { double _v = fp_pop(); *(double*)ADDR(ebp + (-0x20)) = _v; } /* 0x100C2D0E: fstp qword ptr [ebp - 0x20] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x100C2D11: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x100C2D12: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x100C2D13: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x100C2D14: movsd dword ptr es:[edi], dword ptr [esi] */
    RECOMP_CALL(sub_100C5E60); /* 0x100C2D15: call 0x100c5e60 */
    RECOMP_FLAGS_IN();
    edi = esp; /* 0x100C2D1A: mov edi, esp */
    esi = ebp + (-0x58); /* 0x100C2D1C: lea esi, [ebp - 0x58] */
    { double _v = fp_pop(); *(double*)ADDR(ebp + (-0x30)) = _v; } /* 0x100C2D1F: fstp qword ptr [ebp - 0x30] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x100C2D22: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x100C2D23: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x100C2D24: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x100C2D25: movsd dword ptr es:[edi], dword ptr [esi] */
    RECOMP_CALL(sub_100C5E60); /* 0x100C2D26: call 0x100c5e60 */
    RECOMP_FLAGS_IN();
    edi = esp; /* 0x100C2D2B: mov edi, esp */
    esi = ebp + (-0x58); /* 0x100C2D2D: lea esi, [ebp - 0x58] */
    { double _v = fp_pop(); *(double*)ADDR(ebp + (-0x10)) = _v; } /* 0x100C2D30: fstp qword ptr [ebp - 0x10] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x100C2D33: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x100C2D34: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x100C2D35: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x100C2D36: movsd dword ptr es:[edi], dword ptr [esi] */
    RECOMP_CALL(sub_100C6B29); /* 0x100C2D37: call 0x100c6b29 */
    RECOMP_FLAGS_IN();
    *(double*)ADDR(ebp + (-0x40)) = _st[0]; /* 0x100C2D3C: fst qword ptr [ebp - 0x40] */
    fp_push(*(double*)ADDR(0x10063C28)); /* 0x100C2D3F: fld qword ptr [0x10063c28] */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x10u; /* 0x100C2D45: add esp, 0x10 */
    _flag_k = FK_ADD;
    fp_push(*(double*)ADDR(ebp + (-0x20))); /* 0x100C2D48: fld qword ptr [ebp - 0x20] */
    _fpu_cmp = FPU_CMP(_st[0], _st[1]); /* 0x100C2D4B: fcom st(1) */
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x100C2D4D: fnstsw ax */
    fp_push(0.0); /* 0x100C2D4F: fldz  */
    /* test HI8(eax), 0x41u */ /* 0x100C2D51: test ah, 0x41 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(0x41u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_100C2D65; /* 0x100C2D54: jne 0x100c2d65 */
L_100C2D56:
    { _st[0] = _st[0]; g_st_i64[0] = g_st_i64[0]; fp_pop(); } /* 0x100C2D56: fstp st(0) */
    { _st[1] = _st[0]; g_st_i64[1] = g_st_i64[0]; fp_pop(); } /* 0x100C2D58: fstp st(1) */
    *(double*)ADDR(ebp + (-0x20)) = _st[0]; /* 0x100C2D5A: fst qword ptr [ebp - 0x20] */
    _st[0] = *(double*)ADDR(ebp + (-0x10)) / _st[0]; /* 0x100C2D5D: fdivr qword ptr [ebp - 0x10] */
    _st[0] *= *(double*)ADDR(ebp + (-0x30)); /* 0x100C2D60: fmul qword ptr [ebp - 0x30] */
    goto L_100C2DA7; /* 0x100C2D63: jmp 0x100c2da7 */
L_100C2D65:
    fp_push(*(double*)ADDR(ebp + (-0x30))); /* 0x100C2D65: fld qword ptr [ebp - 0x30] */
    _fpu_cmp = FPU_CMP(_st[0], _st[3]); /* 0x100C2D68: fcom st(3) */
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x100C2D6A: fnstsw ax */
    /* test HI8(eax), 0x41u */ /* 0x100C2D6C: test ah, 0x41 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(0x41u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_100C2D7C; /* 0x100C2D6F: jne 0x100c2d7c */
L_100C2D71:
    { _st[1] = _st[0]; g_st_i64[1] = g_st_i64[0]; fp_pop(); } /* 0x100C2D71: fstp st(1) */
    { _st[2] = _st[0]; g_st_i64[2] = g_st_i64[0]; fp_pop(); } /* 0x100C2D73: fstp st(2) */
    fp_push(_st[1]); /* 0x100C2D75: fld st(1) */
    { double _v = fp_pop(); *(double*)ADDR(ebp + (-0x20)) = _v; } /* 0x100C2D77: fstp qword ptr [ebp - 0x20] */
    goto L_100C2D92; /* 0x100C2D7A: jmp 0x100c2d92 */
L_100C2D7C:
    fp_push(_st[0]); /* 0x100C2D7C: fld st(0) */
    _st[0] = -_st[0]; /* 0x100C2D7E: fchs  */
    *(double*)ADDR(ebp + (-0x20)) = _st[0]; /* 0x100C2D80: fst qword ptr [ebp - 0x20] */
    _fpu_cmp = FPU_CMP(_st[0], _st[4]); /* 0x100C2D83: fcom st(4) */
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x100C2D85: fnstsw ax */
    { _st[4] = _st[0]; g_st_i64[4] = g_st_i64[0]; fp_pop(); } /* 0x100C2D87: fstp st(4) */
    /* test HI8(eax), 0x41u */ /* 0x100C2D89: test ah, 0x41 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(0x41u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_100C2D9D; /* 0x100C2D8C: jne 0x100c2d9d */
L_100C2D8E:
    { _st[1] = _st[0]; g_st_i64[1] = g_st_i64[0]; fp_pop(); } /* 0x100C2D8E: fstp st(1) */
    { _st[0] = _st[0]; g_st_i64[0] = g_st_i64[0]; fp_pop(); } /* 0x100C2D90: fstp st(0) */
L_100C2D92:
    fp_xch(2); /* 0x100C2D92: fxch st(2) */
    { double _v = fp_pop(); _st[0] = _st[0] == 0.0 ? _v : _v / _st[0]; } /* 0x100C2D94: fdivrp st(1) */
    { double _v = fp_pop(); _st[0] *= _v; } /* 0x100C2D96: fmulp st(1) */
    _st[0] -= *(double*)ADDR(ebp + (-0x10)); /* 0x100C2D98: fsub qword ptr [ebp - 0x10] */
    goto L_100C2DA9; /* 0x100C2D9B: jmp 0x100c2da9 */
L_100C2D9D:
    { _st[3] = _st[0]; g_st_i64[3] = g_st_i64[0]; fp_pop(); } /* 0x100C2D9D: fstp st(3) */
    { double _v = fp_pop(); *(double*)ADDR(ebp + (-0x20)) = _v; } /* 0x100C2D9F: fstp qword ptr [ebp - 0x20] */
    { double _v = fp_pop(); _st[1] *= _v; } /* 0x100C2DA2: fmulp st(2) */
    _st[0] *= *(double*)ADDR(ebp + (-0x10)); /* 0x100C2DA4: fmul qword ptr [ebp - 0x10] */
L_100C2DA7:
    { double _v = fp_pop(); _st[0] -= _v; } /* 0x100C2DA7: fsubp st(1) */
L_100C2DA9:
    PUSH32(esp, ecx); /* 0x100C2DA9: push ecx */
    PUSH32(esp, ecx); /* 0x100C2DAA: push ecx */
    { double _v = fp_pop(); *(double*)ADDR(esp) = _v; } /* 0x100C2DAB: fstp qword ptr [esp] */
    RECOMP_CALL(sub_100C218F); /* 0x100C2DAE: call 0x100c218f */
    RECOMP_FLAGS_IN();
    *(double*)ADDR(ebp + (-0x10)) = _st[0]; /* 0x100C2DB3: fst qword ptr [ebp - 0x10] */
    fp_push(*(double*)ADDR(ebp + (-0x20))); /* 0x100C2DB6: fld qword ptr [ebp - 0x20] */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 8; /* 0x100C2DB9: add esp, 8 */
    _flag_k = FK_ADD;
    fp_push(0.0); /* 0x100C2DBC: fldz  */
    _fpu_cmp = FPU_CMP(_st[0], _st[1]); /* 0x100C2DBE: fucom st(1) */
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x100C2DC0: fnstsw ax */
    /* test HI8(eax), 0x44u */ /* 0x100C2DC2: test ah, 0x44 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(0x44u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if ((!RECOMP_PF((_flag_a & _flag_b), 24))) goto L_100C2DF0; /* 0x100C2DC5: jnp 0x100c2df0 */
L_100C2DC7:
    _fpu_cmp = FPU_CMP(_st[0], _st[2]); /* 0x100C2DC7: fcomp st(2) */
    fp_pop();
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x100C2DC9: fnstsw ax */
    PUSH32(esp, ecx); /* 0x100C2DCB: push ecx */
    PUSH32(esp, ecx); /* 0x100C2DCC: push ecx */
    { _st[1] = _st[0]; g_st_i64[1] = g_st_i64[0]; fp_pop(); } /* 0x100C2DCD: fstp st(1) */
    { double _v = fp_pop(); *(double*)ADDR(esp) = _v; } /* 0x100C2DCF: fstp qword ptr [esp] */
    /* test HI8(eax), 0x41u */ /* 0x100C2DD2: test ah, 0x41 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(0x41u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (RECOMP_PF((_flag_a & _flag_b), 24)) goto L_100C2DE6; /* 0x100C2DD5: jp 0x100c2de6 */
L_100C2DD7:
    RECOMP_CALL(sub_100367A8); /* 0x100C2DD7: call 0x100367a8 */
    RECOMP_FLAGS_IN();
    _st[0] += *(double*)ADDR(ebp + (-0x10)); /* 0x100C2DDC: fadd qword ptr [ebp - 0x10] */
L_100C2DDF:
    ecx = POP32_VAL(esp); /* 0x100C2DDF: pop ecx */
    { double _v = fp_pop(); *(double*)ADDR(ebp + (-0x10)) = _v; } /* 0x100C2DE0: fstp qword ptr [ebp - 0x10] */
    ecx = POP32_VAL(esp); /* 0x100C2DE3: pop ecx */
    goto L_100C2DF6; /* 0x100C2DE4: jmp 0x100c2df6 */
L_100C2DE6:
    RECOMP_CALL(sub_100367A8); /* 0x100C2DE6: call 0x100367a8 */
    RECOMP_FLAGS_IN();
    _st[0] = *(double*)ADDR(ebp + (-0x10)) - _st[0]; /* 0x100C2DEB: fsubr qword ptr [ebp - 0x10] */
    RECOMP_BACKEDGE();
    goto L_100C2DDF; /* 0x100C2DEE: jmp 0x100c2ddf */
L_100C2DF0:
    { _st[1] = _st[0]; g_st_i64[1] = g_st_i64[0]; fp_pop(); } /* 0x100C2DF0: fstp st(1) */
    { _st[1] = _st[0]; g_st_i64[1] = g_st_i64[0]; fp_pop(); } /* 0x100C2DF2: fstp st(1) */
    { _st[0] = _st[0]; g_st_i64[0] = g_st_i64[0]; fp_pop(); } /* 0x100C2DF4: fstp st(0) */
L_100C2DF6:
    eax = (uint32_t)MEM16(ebp + (-0x2)); /* 0x100C2DF6: movzx eax, word ptr [ebp - 2] */
    fp_push(*(double*)ADDR(ebp + (-0x8))); /* 0x100C2DFA: fld qword ptr [ebp - 8] */
    /* test eax, 0x8000u */ /* 0x100C2DFD: test eax, 0x8000 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x8000u);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_100C2E0B; /* 0x100C2E02: je 0x100c2e0b */
L_100C2E04:
    _st[0] = -_st[0]; /* 0x100C2E04: fchs  */
    *(double*)ADDR(ebp + (-0x8)) = _st[0]; /* 0x100C2E06: fst qword ptr [ebp - 8] */
    goto L_100C2E0D; /* 0x100C2E09: jmp 0x100c2e0d */
L_100C2E0B:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ebx = 0; /* 0x100C2E0B: xor ebx, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
L_100C2E0D:
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x10u; /* 0x100C2E0D: sub esp, 0x10 */
    _flag_k = FK_CMP;
    eax = ebp + (-0x58); /* 0x100C2E10: lea eax, [ebp - 0x58] */
    { double _v = fp_pop(); *(double*)ADDR(esp + 0x8) = _v; } /* 0x100C2E13: fstp qword ptr [esp + 8] */
    fp_push(*(double*)ADDR(ebp + (-0x18))); /* 0x100C2E17: fld qword ptr [ebp - 0x18] */
    fp_push(1.0); /* 0x100C2E1A: fld1  */
    { double _v = fp_pop(); _st[0] -= _v; } /* 0x100C2E1C: fsubp st(1) */
    { double _v = fp_pop(); *(double*)ADDR(esp) = _v; } /* 0x100C2E1E: fstp qword ptr [esp] */
    PUSH32(esp, eax); /* 0x100C2E21: push eax */
    RECOMP_CALL(sub_100AACD2); /* 0x100C2E22: call 0x100aacd2 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x100C2E27: add esp, 4 */
    _flag_k = FK_ADD;
    esi = eax; /* 0x100C2E2A: mov esi, eax */
    edi = esp; /* 0x100C2E2C: mov edi, esp */
    eax = ebp + (-0x38); /* 0x100C2E2E: lea eax, [ebp - 0x38] */
    PUSH32(esp, eax); /* 0x100C2E31: push eax */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x100C2E32: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x100C2E33: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x100C2E34: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x100C2E35: movsd dword ptr es:[edi], dword ptr [esi] */
    RECOMP_CALL(sub_100C76B8); /* 0x100C2E36: call 0x100c76b8 */
    RECOMP_FLAGS_IN();
    fp_push(*(double*)ADDR(ebp + (-0x40))); /* 0x100C2E3B: fld qword ptr [ebp - 0x40] */
    esi = eax; /* 0x100C2E3E: mov esi, eax */
    PUSH32(esp, ecx); /* 0x100C2E40: push ecx */
    { double _v = fp_pop(); *(double*)ADDR(esp + 0x10) = _v; } /* 0x100C2E41: fstp qword ptr [esp + 0x10] */
    edi = esp; /* 0x100C2E45: mov edi, esp */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x100C2E47: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x100C2E48: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x100C2E49: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x100C2E4A: movsd dword ptr es:[edi], dword ptr [esi] */
    RECOMP_CALL(sub_100C5E60); /* 0x100C2E4B: call 0x100c5e60 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x100C2E50: pop ecx */
    ecx = POP32_VAL(esp); /* 0x100C2E51: pop ecx */
    { double _v = fp_pop(); *(double*)ADDR(esp) = _v; } /* 0x100C2E52: fstp qword ptr [esp] */
    RECOMP_CALL(sub_10036582); /* 0x100C2E55: call 0x10036582 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x10u; /* 0x100C2E5A: add esp, 0x10 */
    _flag_k = FK_ADD;
    _st[0] += _st[0]; /* 0x100C2E5D: fadd st(0), st(0) */
    /* test ebx, ebx */ /* 0x100C2E5F: test ebx, ebx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ebx);
    _cf = 0;
    _flag_k = FK_TEST;
L_100C2E61:
    if (recomp_cond_cf(_flag_k, _flag_a, _flag_b, CC_E, _cf)) goto L_100C2E65; /* 0x100C2E61: je 0x100c2e65 */
L_100C2E63:
    _st[0] = -_st[0]; /* 0x100C2E63: fchs  */
L_100C2E65:
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x10u; /* 0x100C2E65: sub esp, 0x10 */
    _flag_k = FK_CMP;
    eax = ebp + (-0x58); /* 0x100C2E68: lea eax, [ebp - 0x58] */
    { double _v = fp_pop(); *(double*)ADDR(esp + 0x8) = _v; } /* 0x100C2E6B: fstp qword ptr [esp + 8] */
    fp_push(*(double*)ADDR(ebp + (-0x10))); /* 0x100C2E6F: fld qword ptr [ebp - 0x10] */
    { double _v = fp_pop(); *(double*)ADDR(esp) = _v; } /* 0x100C2E72: fstp qword ptr [esp] */
    PUSH32(esp, eax); /* 0x100C2E75: push eax */
    RECOMP_CALL(sub_100AACD2); /* 0x100C2E76: call 0x100aacd2 */
    RECOMP_FLAGS_IN();
    esi = eax; /* 0x100C2E7B: mov esi, eax */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x14u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x14u; /* 0x100C2E7D: add esp, 0x14 */
    _flag_k = FK_ADD;
    eax = MEM32(ebp + 0x8); /* 0x100C2E80: mov eax, dword ptr [ebp + 8] */
    edi = eax; /* 0x100C2E83: mov edi, eax */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x100C2E85: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x100C2E86: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x100C2E87: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x100C2E88: movsd dword ptr es:[edi], dword ptr [esi] */
    edi = POP32_VAL(esp); /* 0x100C2E89: pop edi */
    esi = POP32_VAL(esp); /* 0x100C2E8A: pop esi */
    ebx = POP32_VAL(esp); /* 0x100C2E8B: pop ebx */
    esp = ebp; /* 0x100C2E8C: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x100C2E8E: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x100C2E8F: ret  */
    RECOMP_REGS_OUT();
}

void sub_100C2E90(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x100C2E90u);

L_100C2E90:
    PUSH32(esp, ebp); /* 0x100C2E90: push ebp */
    ebp = esp; /* 0x100C2E91: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x1Cu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x1Cu; /* 0x100C2E93: sub esp, 0x1c */
    _flag_k = FK_CMP;
    PUSH32(esp, esi); /* 0x100C2E96: push esi */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x100C2E97: push dword ptr [ebp + 0xc] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x100C2E9A: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_100C6B58); /* 0x100C2E9D: call 0x100c6b58 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x100C2EA2: push dword ptr [ebp + 0xc] */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x10)) = _v; } /* 0x100C2EA5: fstp dword ptr [ebp - 0x10] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x100C2EA8: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_100C5E33); /* 0x100C2EAB: call 0x100c5e33 */
    RECOMP_FLAGS_IN();
    eax = ebp + (-0x10); /* 0x100C2EB0: lea eax, [ebp - 0x10] */
    PUSH32(esp, eax); /* 0x100C2EB3: push eax */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x8)) = _v; } /* 0x100C2EB4: fstp dword ptr [ebp - 8] */
    RECOMP_CALL(sub_100BFF5C); /* 0x100C2EB7: call 0x100bff5c */
    RECOMP_FLAGS_IN();
    esi = (uint32_t)LO16(eax); /* 0x100C2EBC: movzx esi, ax */
    eax = ebp + (-0x8); /* 0x100C2EBF: lea eax, [ebp - 8] */
    PUSH32(esp, eax); /* 0x100C2EC2: push eax */
    RECOMP_CALL(sub_100BFF5C); /* 0x100C2EC3: call 0x100bff5c */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x18u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x18u; /* 0x100C2EC8: add esp, 0x18 */
    _flag_k = FK_ADD;
    eax = (uint32_t)LO16(eax); /* 0x100C2ECB: movzx eax, ax */
    PUSH32(esp, 2); /* 0x100C2ECE: push 2 */
    ecx = POP32_VAL(esp); /* 0x100C2ED0: pop ecx */
    /* cmp LO16(esi), LO16(ecx) */ /* 0x100C2ED1: cmp si, cx */
    _flag_a = (uint32_t)(LO16(esi)) << 16; _flag_b = (uint32_t)(LO16(ecx)) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    if (CMP_NE(_flag_a, _flag_b)) goto L_100C2EFF; /* 0x100C2ED4: jne 0x100c2eff */
L_100C2ED6:
    /* cmp LO16(eax), LO16(ecx) */ /* 0x100C2ED6: cmp ax, cx */
    _flag_a = (uint32_t)(LO16(eax)) << 16; _flag_b = (uint32_t)(LO16(ecx)) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    if (CMP_NE(_flag_a, _flag_b)) goto L_100C2EE6; /* 0x100C2ED9: jne 0x100c2ee6 */
L_100C2EDB:
    fp_push(*(float*)&MEM32(ebp + (-0x10))); /* 0x100C2EDB: fld dword ptr [ebp - 0x10] */
L_100C2EDE:
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0xC)) = _v; } /* 0x100C2EDE: fstp dword ptr [ebp - 0xc] */
    fp_push(*(float*)&MEM32(ebp + (-0x8))); /* 0x100C2EE1: fld dword ptr [ebp - 8] */
    goto L_100C2F18; /* 0x100C2EE4: jmp 0x100c2f18 */
L_100C2EE6:
    /* cmp LO16(eax), 1 */ /* 0x100C2EE6: cmp ax, 1 */
    _flag_a = (uint32_t)(LO16(eax)) << 16; _flag_b = (uint32_t)(1) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    if (CMP_NE(_flag_a, _flag_b)) goto L_100C2EFA; /* 0x100C2EEA: jne 0x100c2efa */
L_100C2EEC:
    fp_push(*(float*)&MEM32(0x10065B68)); /* 0x100C2EEC: fld dword ptr [0x10065b68] */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0xC)) = _v; } /* 0x100C2EF2: fstp dword ptr [ebp - 0xc] */
    fp_push(*(float*)&MEM32(ebp + (-0x10))); /* 0x100C2EF5: fld dword ptr [ebp - 0x10] */
    goto L_100C2F18; /* 0x100C2EF8: jmp 0x100c2f18 */
L_100C2EFA:
    fp_push(*(float*)&MEM32(ebp + (-0x10))); /* 0x100C2EFA: fld dword ptr [ebp - 0x10] */
    goto L_100C2F15; /* 0x100C2EFD: jmp 0x100c2f15 */
L_100C2EFF:
    /* cmp LO16(eax), LO16(ecx) */ /* 0x100C2EFF: cmp ax, cx */
    _flag_a = (uint32_t)(LO16(eax)) << 16; _flag_b = (uint32_t)(LO16(ecx)) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    if (CMP_NE(_flag_a, _flag_b)) goto L_100C2F20; /* 0x100C2F02: jne 0x100c2f20 */
L_100C2F04:
    /* cmp LO16(esi), 1 */ /* 0x100C2F04: cmp si, 1 */
    _flag_a = (uint32_t)(LO16(esi)) << 16; _flag_b = (uint32_t)(1) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    if (CMP_NE(_flag_a, _flag_b)) goto L_100C2F12; /* 0x100C2F08: jne 0x100c2f12 */
L_100C2F0A:
    fp_push(*(float*)&MEM32(0x10065B68)); /* 0x100C2F0A: fld dword ptr [0x10065b68] */
    RECOMP_BACKEDGE();
    goto L_100C2EDE; /* 0x100C2F10: jmp 0x100c2ede */
L_100C2F12:
    fp_push(*(float*)&MEM32(ebp + (-0x8))); /* 0x100C2F12: fld dword ptr [ebp - 8] */
L_100C2F15:
    { float _v = (float)_st[0]; *(float*)ADDR(ebp + (-0xC)) = _v; } /* 0x100C2F15: fst dword ptr [ebp - 0xc] */
L_100C2F18:
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x4)) = _v; } /* 0x100C2F18: fstp dword ptr [ebp - 4] */
    goto L_100C316C; /* 0x100C2F1B: jmp 0x100c316c */
L_100C2F20:
    PUSH32(esp, ebx); /* 0x100C2F20: push ebx */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ebx = 0; /* 0x100C2F21: xor ebx, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(1);
    ebx = ebx + 1; /* 0x100C2F23: inc ebx */
    _flag_k = FK_INC;
    /* cmp LO16(esi), LO16(ebx) */ /* 0x100C2F24: cmp si, bx */
    _flag_a = (uint32_t)(LO16(esi)) << 16; _flag_b = (uint32_t)(LO16(ebx)) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    if (CMP_NE(_flag_a, _flag_b)) goto L_100C2F73; /* 0x100C2F27: jne 0x100c2f73 */
L_100C2F29:
    fp_push(*(float*)&MEM32(0x10065B68)); /* 0x100C2F29: fld dword ptr [0x10065b68] */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0xC)) = _v; } /* 0x100C2F2F: fstp dword ptr [ebp - 0xc] */
    fp_push(0.0); /* 0x100C2F32: fldz  */
    /* cmp LO16(eax), LO16(ebx) */ /* 0x100C2F34: cmp ax, bx */
    _flag_a = (uint32_t)(LO16(eax)) << 16; _flag_b = (uint32_t)(LO16(ebx)) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    if (CMP_NE(_flag_a, _flag_b)) goto L_100C2F53; /* 0x100C2F37: jne 0x100c2f53 */
L_100C2F39:
    _fpu_cmp = FPU_CMP(_st[0], (double)*(float*)ADDR(ebp + (-0x10))); /* 0x100C2F39: fcomp dword ptr [ebp - 0x10] */
    fp_pop();
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x100C2F3C: fnstsw ax */
    /* test HI8(eax), 0x41u */ /* 0x100C2F3E: test ah, 0x41 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(0x41u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_100C2F4B; /* 0x100C2F41: jne 0x100c2f4b */
L_100C2F43:
    fp_push(*(float*)&MEM32(0x10063C38)); /* 0x100C2F43: fld dword ptr [0x10063c38] */
    goto L_100C2F65; /* 0x100C2F49: jmp 0x100c2f65 */
L_100C2F4B:
    fp_push(*(float*)&MEM32(0x10063C30)); /* 0x100C2F4B: fld dword ptr [0x10063c30] */
    goto L_100C2F65; /* 0x100C2F51: jmp 0x100c2f65 */
L_100C2F53:
    _fpu_cmp = FPU_CMP(_st[0], (double)*(float*)ADDR(ebp + (-0x10))); /* 0x100C2F53: fcom dword ptr [ebp - 0x10] */
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x100C2F56: fnstsw ax */
    /* test HI8(eax), 0x41u */ /* 0x100C2F58: test ah, 0x41 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(0x41u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_100C2F65; /* 0x100C2F5B: jne 0x100c2f65 */
L_100C2F5D:
    { _st[0] = _st[0]; g_st_i64[0] = g_st_i64[0]; fp_pop(); } /* 0x100C2F5D: fstp st(0) */
    fp_push(*(float*)&MEM32(0x10063C3C)); /* 0x100C2F5F: fld dword ptr [0x10063c3c] */
L_100C2F65:
    eax = (uint32_t)MEM16(ebp + (-0x6)); /* 0x100C2F65: movzx eax, word ptr [ebp - 6] */
    /* test eax, 0x8000u */ /* 0x100C2F69: test eax, 0x8000 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x8000u);
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_100C315E; /* 0x100C2F6E: jmp 0x100c315e */
L_100C2F73:
    /* cmp LO16(eax), LO16(ebx) */ /* 0x100C2F73: cmp ax, bx */
    _flag_a = (uint32_t)(LO16(eax)) << 16; _flag_b = (uint32_t)(LO16(ebx)) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    if (CMP_NE(_flag_a, _flag_b)) goto L_100C2FA3; /* 0x100C2F76: jne 0x100c2fa3 */
L_100C2F78:
    fp_push(*(float*)&MEM32(0x10065B68)); /* 0x100C2F78: fld dword ptr [0x10065b68] */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0xC)) = _v; } /* 0x100C2F7E: fstp dword ptr [ebp - 0xc] */
    fp_push(0.0); /* 0x100C2F81: fldz  */
    _fpu_cmp = FPU_CMP(_st[0], (double)*(float*)ADDR(ebp + (-0x8))); /* 0x100C2F83: fcomp dword ptr [ebp - 8] */
    fp_pop();
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x100C2F86: fnstsw ax */
    /* test HI8(eax), 0x41u */ /* 0x100C2F88: test ah, 0x41 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(0x41u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_100C2F98; /* 0x100C2F8B: jne 0x100c2f98 */
L_100C2F8D:
    fp_push(*(float*)&MEM32(0x10063C50)); /* 0x100C2F8D: fld dword ptr [0x10063c50] */
    goto L_100C3168; /* 0x100C2F93: jmp 0x100c3168 */
L_100C2F98:
    fp_push(*(float*)&MEM32(0x10063C34)); /* 0x100C2F98: fld dword ptr [0x10063c34] */
    goto L_100C3168; /* 0x100C2F9E: jmp 0x100c3168 */
L_100C2FA3:
    fp_push(*(float*)&MEM32(ebp + (-0x8))); /* 0x100C2FA3: fld dword ptr [ebp - 8] */
    _st[0] = -_st[0]; /* 0x100C2FA6: fchs  */
    PUSH32(esp, edi); /* 0x100C2FA8: push edi */
    PUSH32(esp, ecx); /* 0x100C2FA9: push ecx */
    PUSH32(esp, ecx); /* 0x100C2FAA: push ecx */
    { float _v = (float)fp_pop(); *(float*)ADDR(esp + 0x4) = _v; } /* 0x100C2FAB: fstp dword ptr [esp + 4] */
    fp_push(*(float*)&MEM32(ebp + (-0x10))); /* 0x100C2FAF: fld dword ptr [ebp - 0x10] */
    fp_push(1.0); /* 0x100C2FB2: fld1  */
    { double _v = fp_pop(); _st[0] -= _v; } /* 0x100C2FB4: fsubp st(1) */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x18)) = _v; } /* 0x100C2FB6: fstp dword ptr [ebp - 0x18] */
    fp_push(*(float*)&MEM32(ebp + (-0x18))); /* 0x100C2FB9: fld dword ptr [ebp - 0x18] */
    { float _v = (float)fp_pop(); *(float*)ADDR(esp) = _v; } /* 0x100C2FBC: fstp dword ptr [esp] */
    RECOMP_CALL(sub_100AADAF); /* 0x100C2FBF: call 0x100aadaf */
    RECOMP_FLAGS_IN();
    PUSH32(esp, edx); /* 0x100C2FC4: push edx */
    PUSH32(esp, eax); /* 0x100C2FC5: push eax */
    RECOMP_CALL(sub_100C7A98); /* 0x100C2FC6: call 0x100c7a98 */
    RECOMP_FLAGS_IN();
    fp_push(*(float*)&MEM32(ebp + (-0x8))); /* 0x100C2FCB: fld dword ptr [ebp - 8] */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 8; /* 0x100C2FCE: add esp, 8 */
    _flag_k = FK_ADD;
    MEM32(ebp + (-0xC)) = eax; /* 0x100C2FD1: mov dword ptr [ebp - 0xc], eax */
    MEM32(ebp + (-0x14)) = edx; /* 0x100C2FD4: mov dword ptr [ebp - 0x14], edx */
    { float _v = (float)fp_pop(); *(float*)ADDR(esp + 0x4) = _v; } /* 0x100C2FD7: fstp dword ptr [esp + 4] */
    fp_push(*(float*)&MEM32(ebp + (-0x10))); /* 0x100C2FDB: fld dword ptr [ebp - 0x10] */
    fp_push(1.0); /* 0x100C2FDE: fld1  */
    { double _v = fp_pop(); _st[0] += _v; } /* 0x100C2FE0: faddp st(1) */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x18)) = _v; } /* 0x100C2FE2: fstp dword ptr [ebp - 0x18] */
    fp_push(*(float*)&MEM32(ebp + (-0x18))); /* 0x100C2FE5: fld dword ptr [ebp - 0x18] */
    { float _v = (float)fp_pop(); *(float*)ADDR(esp) = _v; } /* 0x100C2FE8: fstp dword ptr [esp] */
    RECOMP_CALL(sub_100AADAF); /* 0x100C2FEB: call 0x100aadaf */
    RECOMP_FLAGS_IN();
    PUSH32(esp, edx); /* 0x100C2FF0: push edx */
    PUSH32(esp, eax); /* 0x100C2FF1: push eax */
    RECOMP_CALL(sub_100C7A98); /* 0x100C2FF2: call 0x100c7a98 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, MEM32(ebp + (-0x14))); /* 0x100C2FF7: push dword ptr [ebp - 0x14] */
    edi = eax; /* 0x100C2FFA: mov edi, eax */
    esi = edx; /* 0x100C2FFC: mov esi, edx */
    PUSH32(esp, MEM32(ebp + (-0xC))); /* 0x100C2FFE: push dword ptr [ebp - 0xc] */
    RECOMP_CALL(sub_100C6B58); /* 0x100C3001: call 0x100c6b58 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, MEM32(ebp + (-0x14))); /* 0x100C3006: push dword ptr [ebp - 0x14] */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x4)) = _v; } /* 0x100C3009: fstp dword ptr [ebp - 4] */
    PUSH32(esp, MEM32(ebp + (-0xC))); /* 0x100C300C: push dword ptr [ebp - 0xc] */
    RECOMP_CALL(sub_100C5E33); /* 0x100C300F: call 0x100c5e33 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, esi); /* 0x100C3014: push esi */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x18)) = _v; } /* 0x100C3015: fstp dword ptr [ebp - 0x18] */
    PUSH32(esp, edi); /* 0x100C3018: push edi */
    RECOMP_CALL(sub_100C5E33); /* 0x100C3019: call 0x100c5e33 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, esi); /* 0x100C301E: push esi */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0xC)) = _v; } /* 0x100C301F: fstp dword ptr [ebp - 0xc] */
    PUSH32(esp, edi); /* 0x100C3022: push edi */
    RECOMP_CALL(sub_100C6B58); /* 0x100C3023: call 0x100c6b58 */
    RECOMP_FLAGS_IN();
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x14)) = _v; } /* 0x100C3028: fstp dword ptr [ebp - 0x14] */
    fp_push(*(float*)&MEM32(ebp + (-0x4))); /* 0x100C302B: fld dword ptr [ebp - 4] */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x30u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x30u; /* 0x100C302E: add esp, 0x30 */
    _flag_k = FK_ADD;
    fp_push(*(double*)ADDR(0x10063C40)); /* 0x100C3031: fld qword ptr [0x10063c40] */
    _fpu_cmp = FPU_CMP(_st[0], _st[1]); /* 0x100C3037: fcom st(1) */
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x100C3039: fnstsw ax */
    edi = POP32_VAL(esp); /* 0x100C303B: pop edi */
    fp_push(0.0); /* 0x100C303C: fldz  */
    /* test HI8(eax), 5 */ /* 0x100C303E: test ah, 5 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(5) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (RECOMP_PF((_flag_a & _flag_b), 24)) goto L_100C305B; /* 0x100C3041: jp 0x100c305b */
L_100C3043:
    { _st[1] = _st[0]; g_st_i64[1] = g_st_i64[0]; fp_pop(); } /* 0x100C3043: fstp st(1) */
    { _st[0] = _st[0]; g_st_i64[0] = g_st_i64[0]; fp_pop(); } /* 0x100C3045: fstp st(0) */
    { float _v = (float)_st[0]; *(float*)ADDR(ebp + (-0x4)) = _v; } /* 0x100C3047: fst dword ptr [ebp - 4] */
    fp_push(*(float*)&MEM32(ebp + (-0x14))); /* 0x100C304A: fld dword ptr [ebp - 0x14] */
    fp_push(*(float*)&MEM32(ebp + (-0xC))); /* 0x100C304D: fld dword ptr [ebp - 0xc] */
    { double _v = fp_pop(); _st[1] = _st[1] == 0.0 ? _v : _v / _st[1]; } /* 0x100C3050: fdivrp st(2) */
    fp_push(*(float*)&MEM32(ebp + (-0x18))); /* 0x100C3052: fld dword ptr [ebp - 0x18] */
    { double _v = fp_pop(); _st[1] *= _v; } /* 0x100C3055: fmulp st(2) */
    { double _v = fp_pop(); _st[0] = _v - _st[0]; } /* 0x100C3057: fsubrp st(1) */
    goto L_100C30AB; /* 0x100C3059: jmp 0x100c30ab */
L_100C305B:
    fp_push(*(float*)&MEM32(ebp + (-0x18))); /* 0x100C305B: fld dword ptr [ebp - 0x18] */
    _fpu_cmp = FPU_CMP(_st[0], _st[2]); /* 0x100C305E: fcom st(2) */
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x100C3060: fnstsw ax */
    /* test HI8(eax), 0x41u */ /* 0x100C3062: test ah, 0x41 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(0x41u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_100C3078; /* 0x100C3065: jne 0x100c3078 */
L_100C3067:
    { _st[2] = _st[0]; g_st_i64[2] = g_st_i64[0]; fp_pop(); } /* 0x100C3067: fstp st(2) */
    { _st[0] = _st[0]; g_st_i64[0] = g_st_i64[0]; fp_pop(); } /* 0x100C3069: fstp st(0) */
    { float _v = (float)_st[0]; *(float*)ADDR(ebp + (-0x4)) = _v; } /* 0x100C306B: fst dword ptr [ebp - 4] */
    _st[0] = (double)*(float*)ADDR(ebp + (-0x14)) / _st[0]; /* 0x100C306E: fdivr dword ptr [ebp - 0x14] */
L_100C3071:
    { double _v = fp_pop(); _st[0] *= _v; } /* 0x100C3071: fmulp st(1) */
    _st[0] -= (double)*(float*)ADDR(ebp + (-0xC)); /* 0x100C3073: fsub dword ptr [ebp - 0xc] */
    goto L_100C30AB; /* 0x100C3076: jmp 0x100c30ab */
L_100C3078:
    fp_push(_st[0]); /* 0x100C3078: fld st(0) */
    _st[0] = -_st[0]; /* 0x100C307A: fchs  */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x18)) = _v; } /* 0x100C307C: fstp dword ptr [ebp - 0x18] */
    fp_push(*(float*)&MEM32(ebp + (-0x18))); /* 0x100C307F: fld dword ptr [ebp - 0x18] */
    _fpu_cmp = FPU_CMP(_st[0], _st[3]); /* 0x100C3082: fcom st(3) */
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x100C3084: fnstsw ax */
    { _st[3] = _st[0]; g_st_i64[3] = g_st_i64[0]; fp_pop(); } /* 0x100C3086: fstp st(3) */
    /* test HI8(eax), 0x41u */ /* 0x100C3088: test ah, 0x41 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(0x41u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_100C309C; /* 0x100C308B: jne 0x100c309c */
L_100C308D:
    { _st[0] = _st[0]; g_st_i64[0] = g_st_i64[0]; fp_pop(); } /* 0x100C308D: fstp st(0) */
    { _st[0] = _st[0]; g_st_i64[0] = g_st_i64[0]; fp_pop(); } /* 0x100C308F: fstp st(0) */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x4)) = _v; } /* 0x100C3091: fstp dword ptr [ebp - 4] */
    fp_push(*(float*)&MEM32(ebp + (-0x14))); /* 0x100C3094: fld dword ptr [ebp - 0x14] */
    _st[0] /= (double)*(float*)ADDR(ebp + (-0x4)); /* 0x100C3097: fdiv dword ptr [ebp - 4] */
    RECOMP_BACKEDGE();
    goto L_100C3071; /* 0x100C309A: jmp 0x100c3071 */
L_100C309C:
    { _st[2] = _st[0]; g_st_i64[2] = g_st_i64[0]; fp_pop(); } /* 0x100C309C: fstp st(2) */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x4)) = _v; } /* 0x100C309E: fstp dword ptr [ebp - 4] */
    fp_push(*(float*)&MEM32(ebp + (-0x14))); /* 0x100C30A1: fld dword ptr [ebp - 0x14] */
    { double _v = fp_pop(); _st[1] *= _v; } /* 0x100C30A4: fmulp st(2) */
    _st[0] *= (double)*(float*)ADDR(ebp + (-0xC)); /* 0x100C30A6: fmul dword ptr [ebp - 0xc] */
    { double _v = fp_pop(); _st[0] -= _v; } /* 0x100C30A9: fsubp st(1) */
L_100C30AB:
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0xC)) = _v; } /* 0x100C30AB: fstp dword ptr [ebp - 0xc] */
    fp_push(*(float*)&MEM32(ebp + (-0xC))); /* 0x100C30AE: fld dword ptr [ebp - 0xc] */
    PUSH32(esp, ecx); /* 0x100C30B1: push ecx */
    { float _v = (float)fp_pop(); *(float*)ADDR(esp) = _v; } /* 0x100C30B2: fstp dword ptr [esp] */
    RECOMP_CALL(sub_100C2219); /* 0x100C30B5: call 0x100c2219 */
    RECOMP_FLAGS_IN();
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0xC)) = _v; } /* 0x100C30BA: fstp dword ptr [ebp - 0xc] */
    fp_push(*(float*)&MEM32(ebp + (-0x4))); /* 0x100C30BD: fld dword ptr [ebp - 4] */
    fp_push(0.0); /* 0x100C30C0: fldz  */
    _fpu_cmp = FPU_CMP(_st[0], _st[1]); /* 0x100C30C2: fucomp st(1) */
    fp_pop();
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x100C30C4: fnstsw ax */
    ecx = POP32_VAL(esp); /* 0x100C30C6: pop ecx */
    /* test HI8(eax), 0x44u */ /* 0x100C30C7: test ah, 0x44 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(0x44u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if ((!RECOMP_PF((_flag_a & _flag_b), 24))) goto L_100C3100; /* 0x100C30CA: jnp 0x100c3100 */
L_100C30CC:
    fp_push(*(float*)&MEM32(ebp + (-0xC))); /* 0x100C30CC: fld dword ptr [ebp - 0xc] */
    _fpu_cmp = FPU_CMP(_st[0], *(double*)ADDR(0x10067CD0)); /* 0x100C30CF: fcom qword ptr [0x10067cd0] */
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x100C30D5: fnstsw ax */
    PUSH32(esp, ecx); /* 0x100C30D7: push ecx */
    /* test HI8(eax), 1 */ /* 0x100C30D8: test ah, 1 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(1) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_100C30F0; /* 0x100C30DB: jne 0x100c30f0 */
L_100C30DD:
    { _st[0] = _st[0]; g_st_i64[0] = g_st_i64[0]; fp_pop(); } /* 0x100C30DD: fstp st(0) */
    { float _v = (float)fp_pop(); *(float*)ADDR(esp) = _v; } /* 0x100C30DF: fstp dword ptr [esp] */
    RECOMP_CALL(sub_100C20AF); /* 0x100C30E2: call 0x100c20af */
    RECOMP_FLAGS_IN();
    _st[0] += (double)*(float*)ADDR(ebp + (-0xC)); /* 0x100C30E7: fadd dword ptr [ebp - 0xc] */
L_100C30EA:
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0xC)) = _v; } /* 0x100C30EA: fstp dword ptr [ebp - 0xc] */
    ecx = POP32_VAL(esp); /* 0x100C30ED: pop ecx */
    goto L_100C3102; /* 0x100C30EE: jmp 0x100c3102 */
L_100C30F0:
    { double _v = fp_pop(); *(double*)ADDR(ebp + (-0x1C)) = _v; } /* 0x100C30F0: fstp qword ptr [ebp - 0x1c] */
    { float _v = (float)fp_pop(); *(float*)ADDR(esp) = _v; } /* 0x100C30F3: fstp dword ptr [esp] */
    RECOMP_CALL(sub_100C20AF); /* 0x100C30F6: call 0x100c20af */
    RECOMP_FLAGS_IN();
    _st[0] = *(double*)ADDR(ebp + (-0x1C)) - _st[0]; /* 0x100C30FB: fsubr qword ptr [ebp - 0x1c] */
    RECOMP_BACKEDGE();
    goto L_100C30EA; /* 0x100C30FE: jmp 0x100c30ea */
L_100C3100:
    { _st[0] = _st[0]; g_st_i64[0] = g_st_i64[0]; fp_pop(); } /* 0x100C3100: fstp st(0) */
L_100C3102:
    eax = (uint32_t)MEM16(ebp + (-0x6)); /* 0x100C3102: movzx eax, word ptr [ebp - 6] */
    /* test eax, 0x8000u */ /* 0x100C3106: test eax, 0x8000 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x8000u);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_100C3117; /* 0x100C310B: je 0x100c3117 */
L_100C310D:
    fp_push(*(float*)&MEM32(ebp + (-0x8))); /* 0x100C310D: fld dword ptr [ebp - 8] */
    _st[0] = -_st[0]; /* 0x100C3110: fchs  */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x8)) = _v; } /* 0x100C3112: fstp dword ptr [ebp - 8] */
    goto L_100C3119; /* 0x100C3115: jmp 0x100c3119 */
L_100C3117:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ebx = 0; /* 0x100C3117: xor ebx, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
L_100C3119:
    fp_push(*(float*)&MEM32(ebp + (-0x14))); /* 0x100C3119: fld dword ptr [ebp - 0x14] */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0xCu; /* 0x100C311C: sub esp, 0xc */
    _flag_k = FK_CMP;
    { float _v = (float)fp_pop(); *(float*)ADDR(esp + 0x8) = _v; } /* 0x100C311F: fstp dword ptr [esp + 8] */
    fp_push(*(float*)&MEM32(ebp + (-0x8))); /* 0x100C3123: fld dword ptr [ebp - 8] */
    { float _v = (float)fp_pop(); *(float*)ADDR(esp + 0x4) = _v; } /* 0x100C3126: fstp dword ptr [esp + 4] */
    fp_push(*(float*)&MEM32(ebp + (-0x10))); /* 0x100C312A: fld dword ptr [ebp - 0x10] */
    fp_push(1.0); /* 0x100C312D: fld1  */
    { double _v = fp_pop(); _st[0] -= _v; } /* 0x100C312F: fsubp st(1) */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x18)) = _v; } /* 0x100C3131: fstp dword ptr [ebp - 0x18] */
    fp_push(*(float*)&MEM32(ebp + (-0x18))); /* 0x100C3134: fld dword ptr [ebp - 0x18] */
    { float _v = (float)fp_pop(); *(float*)ADDR(esp) = _v; } /* 0x100C3137: fstp dword ptr [esp] */
    RECOMP_CALL(sub_100AADAF); /* 0x100C313A: call 0x100aadaf */
    RECOMP_FLAGS_IN();
    PUSH32(esp, edx); /* 0x100C313F: push edx */
    PUSH32(esp, eax); /* 0x100C3140: push eax */
    RECOMP_CALL(sub_100C7A98); /* 0x100C3141: call 0x100c7a98 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, edx); /* 0x100C3146: push edx */
    PUSH32(esp, eax); /* 0x100C3147: push eax */
    RECOMP_CALL(sub_100C5E33); /* 0x100C3148: call 0x100c5e33 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x14u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x14u; /* 0x100C314D: add esp, 0x14 */
    _flag_k = FK_ADD;
    { float _v = (float)fp_pop(); *(float*)ADDR(esp) = _v; } /* 0x100C3150: fstp dword ptr [esp] */
    RECOMP_CALL(sub_100C2892); /* 0x100C3153: call 0x100c2892 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x100C3158: pop ecx */
    ecx = POP32_VAL(esp); /* 0x100C3159: pop ecx */
    _st[0] += _st[0]; /* 0x100C315A: fadd st(0), st(0) */
    /* test ebx, ebx */ /* 0x100C315C: test ebx, ebx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ebx);
    _cf = 0;
    _flag_k = FK_TEST;
L_100C315E:
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x4)) = _v; } /* 0x100C315E: fstp dword ptr [ebp - 4] */
    if (recomp_cond_cf(_flag_k, _flag_a, _flag_b, CC_E, _cf)) goto L_100C316B; /* 0x100C3161: je 0x100c316b */
L_100C3163:
    fp_push(*(float*)&MEM32(ebp + (-0x4))); /* 0x100C3163: fld dword ptr [ebp - 4] */
    _st[0] = -_st[0]; /* 0x100C3166: fchs  */
L_100C3168:
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x4)) = _v; } /* 0x100C3168: fstp dword ptr [ebp - 4] */
L_100C316B:
    ebx = POP32_VAL(esp); /* 0x100C316B: pop ebx */
L_100C316C:
    fp_push(*(float*)&MEM32(ebp + (-0x4))); /* 0x100C316C: fld dword ptr [ebp - 4] */
    PUSH32(esp, ecx); /* 0x100C316F: push ecx */
    PUSH32(esp, ecx); /* 0x100C3170: push ecx */
    { float _v = (float)fp_pop(); *(float*)ADDR(esp + 0x4) = _v; } /* 0x100C3171: fstp dword ptr [esp + 4] */
    fp_push(*(float*)&MEM32(ebp + (-0xC))); /* 0x100C3175: fld dword ptr [ebp - 0xc] */
    { float _v = (float)fp_pop(); *(float*)ADDR(esp) = _v; } /* 0x100C3178: fstp dword ptr [esp] */
    RECOMP_CALL(sub_100AADAF); /* 0x100C317B: call 0x100aadaf */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x100C3180: pop ecx */
    ecx = POP32_VAL(esp); /* 0x100C3181: pop ecx */
    esi = POP32_VAL(esp); /* 0x100C3182: pop esi */
    esp = ebp; /* 0x100C3183: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x100C3185: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x100C3186: ret  */
    RECOMP_REGS_OUT();
}

void sub_100C3187(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x100C3187u);

L_100C3187:
    PUSH32(esp, ebp); /* 0x100C3187: push ebp */
    ebp = esp; /* 0x100C3188: mov ebp, esp */
    fp_push(*(double*)ADDR(ebp + 0x10)); /* 0x100C318A: fld qword ptr [ebp + 0x10] */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x10u; /* 0x100C318D: sub esp, 0x10 */
    _flag_k = FK_CMP;
    { double _v = fp_pop(); *(double*)ADDR(esp + 0x8) = _v; } /* 0x100C3190: fstp qword ptr [esp + 8] */
    fp_push(*(double*)ADDR(ebp + 0x8)); /* 0x100C3194: fld qword ptr [ebp + 8] */
    { double _v = fp_pop(); *(double*)ADDR(esp) = _v; } /* 0x100C3197: fstp qword ptr [esp] */
    RECOMP_CALL(sub_10036582); /* 0x100C319A: call 0x10036582 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x10u; /* 0x100C319F: add esp, 0x10 */
    _flag_k = FK_ADD;
    ebp = POP32_VAL(esp); /* 0x100C31A2: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x100C31A3: ret  */
    RECOMP_REGS_OUT();
}

void sub_100C31A4(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x100C31A4u);

L_100C31A4:
    PUSH32(esp, ebp); /* 0x100C31A4: push ebp */
    ebp = esp; /* 0x100C31A5: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x58u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x58u; /* 0x100C31A7: sub esp, 0x58 */
    _flag_k = FK_CMP;
    PUSH32(esp, ebx); /* 0x100C31AA: push ebx */
    PUSH32(esp, esi); /* 0x100C31AB: push esi */
    PUSH32(esp, edi); /* 0x100C31AC: push edi */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x10u; /* 0x100C31AD: sub esp, 0x10 */
    _flag_k = FK_CMP;
    esi = ebp + 0xC; /* 0x100C31B0: lea esi, [ebp + 0xc] */
    edi = esp; /* 0x100C31B3: mov edi, esp */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x100C31B5: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x100C31B6: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x100C31B7: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x100C31B8: movsd dword ptr es:[edi], dword ptr [esi] */
    RECOMP_CALL(sub_100C6B29); /* 0x100C31B9: call 0x100c6b29 */
    RECOMP_FLAGS_IN();
    edi = esp; /* 0x100C31BE: mov edi, esp */
    esi = ebp + 0xC; /* 0x100C31C0: lea esi, [ebp + 0xc] */
    { double _v = fp_pop(); *(double*)ADDR(ebp + (-0x18)) = _v; } /* 0x100C31C3: fstp qword ptr [ebp - 0x18] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x100C31C6: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x100C31C7: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x100C31C8: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x100C31C9: movsd dword ptr es:[edi], dword ptr [esi] */
    RECOMP_CALL(sub_100C5E60); /* 0x100C31CA: call 0x100c5e60 */
    RECOMP_FLAGS_IN();
    eax = ebp + (-0x18); /* 0x100C31CF: lea eax, [ebp - 0x18] */
    PUSH32(esp, eax); /* 0x100C31D2: push eax */
    { double _v = fp_pop(); *(double*)ADDR(ebp + (-0x8)) = _v; } /* 0x100C31D3: fstp qword ptr [ebp - 8] */
    RECOMP_CALL(sub_100C0034); /* 0x100C31D6: call 0x100c0034 */
    RECOMP_FLAGS_IN();
    esi = (uint32_t)LO16(eax); /* 0x100C31DB: movzx esi, ax */
    eax = ebp + (-0x8); /* 0x100C31DE: lea eax, [ebp - 8] */
    PUSH32(esp, eax); /* 0x100C31E1: push eax */
    RECOMP_CALL(sub_100C0034); /* 0x100C31E2: call 0x100c0034 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x18u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x18u; /* 0x100C31E7: add esp, 0x18 */
    _flag_k = FK_ADD;
    eax = (uint32_t)LO16(eax); /* 0x100C31EA: movzx eax, ax */
    PUSH32(esp, 2); /* 0x100C31ED: push 2 */
    ecx = POP32_VAL(esp); /* 0x100C31EF: pop ecx */
    /* cmp LO16(esi), LO16(ecx) */ /* 0x100C31F0: cmp si, cx */
    _flag_a = (uint32_t)(LO16(esi)) << 16; _flag_b = (uint32_t)(LO16(ecx)) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    if (CMP_NE(_flag_a, _flag_b)) goto L_100C321B; /* 0x100C31F3: jne 0x100c321b */
L_100C31F5:
    /* cmp LO16(eax), LO16(ecx) */ /* 0x100C31F5: cmp ax, cx */
    _flag_a = (uint32_t)(LO16(eax)) << 16; _flag_b = (uint32_t)(LO16(ecx)) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    if (CMP_NE(_flag_a, _flag_b)) goto L_100C31FF; /* 0x100C31F8: jne 0x100c31ff */
L_100C31FA:
    fp_push(*(double*)ADDR(ebp + (-0x18))); /* 0x100C31FA: fld qword ptr [ebp - 0x18] */
    goto L_100C322C; /* 0x100C31FD: jmp 0x100c322c */
L_100C31FF:
    /* cmp LO16(eax), 1 */ /* 0x100C31FF: cmp ax, 1 */
    _flag_a = (uint32_t)(LO16(eax)) << 16; _flag_b = (uint32_t)(1) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    if (CMP_NE(_flag_a, _flag_b)) goto L_100C3216; /* 0x100C3203: jne 0x100c3216 */
L_100C3205:
    fp_push(*(double*)ADDR(0x10065B88)); /* 0x100C3205: fld qword ptr [0x10065b88] */
    { double _v = fp_pop(); *(double*)ADDR(ebp + (-0x10)) = _v; } /* 0x100C320B: fstp qword ptr [ebp - 0x10] */
    fp_push(*(double*)ADDR(ebp + (-0x18))); /* 0x100C320E: fld qword ptr [ebp - 0x18] */
    goto L_100C34A7; /* 0x100C3211: jmp 0x100c34a7 */
L_100C3216:
    fp_push(*(double*)ADDR(ebp + (-0x18))); /* 0x100C3216: fld qword ptr [ebp - 0x18] */
    goto L_100C323A; /* 0x100C3219: jmp 0x100c323a */
L_100C321B:
    /* cmp LO16(eax), LO16(ecx) */ /* 0x100C321B: cmp ax, cx */
    _flag_a = (uint32_t)(LO16(eax)) << 16; _flag_b = (uint32_t)(LO16(ecx)) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    if (CMP_NE(_flag_a, _flag_b)) goto L_100C3242; /* 0x100C321E: jne 0x100c3242 */
L_100C3220:
    /* cmp LO16(esi), 1 */ /* 0x100C3220: cmp si, 1 */
    _flag_a = (uint32_t)(LO16(esi)) << 16; _flag_b = (uint32_t)(1) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    if (CMP_NE(_flag_a, _flag_b)) goto L_100C3237; /* 0x100C3224: jne 0x100c3237 */
L_100C3226:
    fp_push(*(double*)ADDR(0x10065B88)); /* 0x100C3226: fld qword ptr [0x10065b88] */
L_100C322C:
    { double _v = fp_pop(); *(double*)ADDR(ebp + (-0x10)) = _v; } /* 0x100C322C: fstp qword ptr [ebp - 0x10] */
    fp_push(*(double*)ADDR(ebp + (-0x8))); /* 0x100C322F: fld qword ptr [ebp - 8] */
    goto L_100C34A7; /* 0x100C3232: jmp 0x100c34a7 */
L_100C3237:
    fp_push(*(double*)ADDR(ebp + (-0x8))); /* 0x100C3237: fld qword ptr [ebp - 8] */
L_100C323A:
    *(double*)ADDR(ebp + (-0x10)) = _st[0]; /* 0x100C323A: fst qword ptr [ebp - 0x10] */
    goto L_100C34A7; /* 0x100C323D: jmp 0x100c34a7 */
L_100C3242:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ebx = 0; /* 0x100C3242: xor ebx, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(1);
    ebx = ebx + 1; /* 0x100C3244: inc ebx */
    _flag_k = FK_INC;
    /* cmp LO16(esi), LO16(ebx) */ /* 0x100C3245: cmp si, bx */
    _flag_a = (uint32_t)(LO16(esi)) << 16; _flag_b = (uint32_t)(LO16(ebx)) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    if (CMP_NE(_flag_a, _flag_b)) goto L_100C3294; /* 0x100C3248: jne 0x100c3294 */
L_100C324A:
    fp_push(*(double*)ADDR(0x10065B88)); /* 0x100C324A: fld qword ptr [0x10065b88] */
    { double _v = fp_pop(); *(double*)ADDR(ebp + (-0x10)) = _v; } /* 0x100C3250: fstp qword ptr [ebp - 0x10] */
    fp_push(0.0); /* 0x100C3253: fldz  */
    /* cmp LO16(eax), LO16(ebx) */ /* 0x100C3255: cmp ax, bx */
    _flag_a = (uint32_t)(LO16(eax)) << 16; _flag_b = (uint32_t)(LO16(ebx)) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    if (CMP_NE(_flag_a, _flag_b)) goto L_100C3274; /* 0x100C3258: jne 0x100c3274 */
L_100C325A:
    _fpu_cmp = FPU_CMP(_st[0], *(double*)ADDR(ebp + (-0x18))); /* 0x100C325A: fcomp qword ptr [ebp - 0x18] */
    fp_pop();
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x100C325D: fnstsw ax */
    /* test HI8(eax), 0x41u */ /* 0x100C325F: test ah, 0x41 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(0x41u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_100C326C; /* 0x100C3262: jne 0x100c326c */
L_100C3264:
    fp_push(*(double*)ADDR(0x10063BF0)); /* 0x100C3264: fld qword ptr [0x10063bf0] */
    goto L_100C3286; /* 0x100C326A: jmp 0x100c3286 */
L_100C326C:
    fp_push(*(double*)ADDR(0x10063BE0)); /* 0x100C326C: fld qword ptr [0x10063be0] */
    goto L_100C3286; /* 0x100C3272: jmp 0x100c3286 */
L_100C3274:
    _fpu_cmp = FPU_CMP(_st[0], *(double*)ADDR(ebp + (-0x18))); /* 0x100C3274: fcom qword ptr [ebp - 0x18] */
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x100C3277: fnstsw ax */
    /* test HI8(eax), 0x41u */ /* 0x100C3279: test ah, 0x41 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(0x41u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_100C3286; /* 0x100C327C: jne 0x100c3286 */
L_100C327E:
    { _st[0] = _st[0]; g_st_i64[0] = g_st_i64[0]; fp_pop(); } /* 0x100C327E: fstp st(0) */
    fp_push(*(double*)ADDR(0x10063BF8)); /* 0x100C3280: fld qword ptr [0x10063bf8] */
L_100C3286:
    eax = (uint32_t)MEM16(ebp + (-0x2)); /* 0x100C3286: movzx eax, word ptr [ebp - 2] */
    /* test eax, 0x8000u */ /* 0x100C328A: test eax, 0x8000 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x8000u);
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_100C34A3; /* 0x100C328F: jmp 0x100c34a3 */
L_100C3294:
    /* cmp LO16(eax), LO16(ebx) */ /* 0x100C3294: cmp ax, bx */
    _flag_a = (uint32_t)(LO16(eax)) << 16; _flag_b = (uint32_t)(LO16(ebx)) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    if (CMP_NE(_flag_a, _flag_b)) goto L_100C32C4; /* 0x100C3297: jne 0x100c32c4 */
L_100C3299:
    fp_push(*(double*)ADDR(0x10065B88)); /* 0x100C3299: fld qword ptr [0x10065b88] */
    { double _v = fp_pop(); *(double*)ADDR(ebp + (-0x10)) = _v; } /* 0x100C329F: fstp qword ptr [ebp - 0x10] */
    fp_push(0.0); /* 0x100C32A2: fldz  */
    _fpu_cmp = FPU_CMP(_st[0], *(double*)ADDR(ebp + (-0x8))); /* 0x100C32A4: fcomp qword ptr [ebp - 8] */
    fp_pop();
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x100C32A7: fnstsw ax */
    /* test HI8(eax), 0x41u */ /* 0x100C32A9: test ah, 0x41 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(0x41u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_100C32B9; /* 0x100C32AC: jne 0x100c32b9 */
L_100C32AE:
    fp_push(*(double*)ADDR(0x10063C48)); /* 0x100C32AE: fld qword ptr [0x10063c48] */
    goto L_100C34A7; /* 0x100C32B4: jmp 0x100c34a7 */
L_100C32B9:
    fp_push(*(double*)ADDR(0x10063C20)); /* 0x100C32B9: fld qword ptr [0x10063c20] */
    goto L_100C34A7; /* 0x100C32BF: jmp 0x100c34a7 */
L_100C32C4:
    fp_push(*(double*)ADDR(ebp + (-0x8))); /* 0x100C32C4: fld qword ptr [ebp - 8] */
    eax = ebp + (-0x58); /* 0x100C32C7: lea eax, [ebp - 0x58] */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x10u; /* 0x100C32CA: sub esp, 0x10 */
    _flag_k = FK_CMP;
    _st[0] = -_st[0]; /* 0x100C32CD: fchs  */
    { double _v = fp_pop(); *(double*)ADDR(esp + 0x8) = _v; } /* 0x100C32CF: fstp qword ptr [esp + 8] */
    fp_push(*(double*)ADDR(ebp + (-0x18))); /* 0x100C32D3: fld qword ptr [ebp - 0x18] */
    fp_push(1.0); /* 0x100C32D6: fld1  */
    { double _v = fp_pop(); _st[0] -= _v; } /* 0x100C32D8: fsubp st(1) */
    { double _v = fp_pop(); *(double*)ADDR(esp) = _v; } /* 0x100C32DA: fstp qword ptr [esp] */
    PUSH32(esp, eax); /* 0x100C32DD: push eax */
    RECOMP_CALL(sub_100AACD2); /* 0x100C32DE: call 0x100aacd2 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x100C32E3: add esp, 4 */
    _flag_k = FK_ADD;
    esi = eax; /* 0x100C32E6: mov esi, eax */
    edi = esp; /* 0x100C32E8: mov edi, esp */
    eax = ebp + (-0x38); /* 0x100C32EA: lea eax, [ebp - 0x38] */
    PUSH32(esp, eax); /* 0x100C32ED: push eax */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x100C32EE: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x100C32EF: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x100C32F0: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x100C32F1: movsd dword ptr es:[edi], dword ptr [esi] */
    RECOMP_CALL(sub_100C7E68); /* 0x100C32F2: call 0x100c7e68 */
    RECOMP_FLAGS_IN();
    fp_push(*(double*)ADDR(ebp + (-0x8))); /* 0x100C32F7: fld qword ptr [ebp - 8] */
    edi = ebp + (-0x48); /* 0x100C32FA: lea edi, [ebp - 0x48] */
    esi = eax; /* 0x100C32FD: mov esi, eax */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x100C32FF: add esp, 4 */
    _flag_k = FK_ADD;
    eax = ebp + (-0x38); /* 0x100C3302: lea eax, [ebp - 0x38] */
    { double _v = fp_pop(); *(double*)ADDR(esp + 0x8) = _v; } /* 0x100C3305: fstp qword ptr [esp + 8] */
    fp_push(*(double*)ADDR(ebp + (-0x18))); /* 0x100C3309: fld qword ptr [ebp - 0x18] */
    fp_push(1.0); /* 0x100C330C: fld1  */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x100C330E: movsd dword ptr es:[edi], dword ptr [esi] */
    { double _v = fp_pop(); _st[0] += _v; } /* 0x100C330F: faddp st(1) */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x100C3311: movsd dword ptr es:[edi], dword ptr [esi] */
    { double _v = fp_pop(); *(double*)ADDR(esp) = _v; } /* 0x100C3312: fstp qword ptr [esp] */
    PUSH32(esp, eax); /* 0x100C3315: push eax */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x100C3316: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x100C3317: movsd dword ptr es:[edi], dword ptr [esi] */
    RECOMP_CALL(sub_100AACD2); /* 0x100C3318: call 0x100aacd2 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x100C331D: add esp, 4 */
    _flag_k = FK_ADD;
    esi = eax; /* 0x100C3320: mov esi, eax */
    edi = esp; /* 0x100C3322: mov edi, esp */
    eax = ebp + (-0x28); /* 0x100C3324: lea eax, [ebp - 0x28] */
    PUSH32(esp, eax); /* 0x100C3327: push eax */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x100C3328: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x100C3329: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x100C332A: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x100C332B: movsd dword ptr es:[edi], dword ptr [esi] */
    RECOMP_CALL(sub_100C7E68); /* 0x100C332C: call 0x100c7e68 */
    RECOMP_FLAGS_IN();
    esi = eax; /* 0x100C3331: mov esi, eax */
    edi = ebp + (-0x58); /* 0x100C3333: lea edi, [ebp - 0x58] */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x100C3336: add esp, 4 */
    _flag_k = FK_ADD;
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x100C3339: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x100C333A: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x100C333B: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x100C333C: movsd dword ptr es:[edi], dword ptr [esi] */
    edi = esp; /* 0x100C333D: mov edi, esp */
    esi = ebp + (-0x48); /* 0x100C333F: lea esi, [ebp - 0x48] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x100C3342: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x100C3343: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x100C3344: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x100C3345: movsd dword ptr es:[edi], dword ptr [esi] */
    RECOMP_CALL(sub_100C6B29); /* 0x100C3346: call 0x100c6b29 */
    RECOMP_FLAGS_IN();
    edi = esp; /* 0x100C334B: mov edi, esp */
    esi = ebp + (-0x48); /* 0x100C334D: lea esi, [ebp - 0x48] */
    { double _v = fp_pop(); *(double*)ADDR(ebp + (-0x20)) = _v; } /* 0x100C3350: fstp qword ptr [ebp - 0x20] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x100C3353: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x100C3354: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x100C3355: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x100C3356: movsd dword ptr es:[edi], dword ptr [esi] */
    RECOMP_CALL(sub_100C5E60); /* 0x100C3357: call 0x100c5e60 */
    RECOMP_FLAGS_IN();
    edi = esp; /* 0x100C335C: mov edi, esp */
    esi = ebp + (-0x58); /* 0x100C335E: lea esi, [ebp - 0x58] */
    { double _v = fp_pop(); *(double*)ADDR(ebp + (-0x30)) = _v; } /* 0x100C3361: fstp qword ptr [ebp - 0x30] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x100C3364: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x100C3365: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x100C3366: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x100C3367: movsd dword ptr es:[edi], dword ptr [esi] */
    RECOMP_CALL(sub_100C5E60); /* 0x100C3368: call 0x100c5e60 */
    RECOMP_FLAGS_IN();
    edi = esp; /* 0x100C336D: mov edi, esp */
    esi = ebp + (-0x58); /* 0x100C336F: lea esi, [ebp - 0x58] */
    { double _v = fp_pop(); *(double*)ADDR(ebp + (-0x10)) = _v; } /* 0x100C3372: fstp qword ptr [ebp - 0x10] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x100C3375: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x100C3376: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x100C3377: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x100C3378: movsd dword ptr es:[edi], dword ptr [esi] */
    RECOMP_CALL(sub_100C6B29); /* 0x100C3379: call 0x100c6b29 */
    RECOMP_FLAGS_IN();
    *(double*)ADDR(ebp + (-0x40)) = _st[0]; /* 0x100C337E: fst qword ptr [ebp - 0x40] */
    fp_push(*(double*)ADDR(0x10063C28)); /* 0x100C3381: fld qword ptr [0x10063c28] */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x10u; /* 0x100C3387: add esp, 0x10 */
    _flag_k = FK_ADD;
    fp_push(*(double*)ADDR(ebp + (-0x20))); /* 0x100C338A: fld qword ptr [ebp - 0x20] */
    _fpu_cmp = FPU_CMP(_st[0], _st[1]); /* 0x100C338D: fcom st(1) */
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x100C338F: fnstsw ax */
    fp_push(0.0); /* 0x100C3391: fldz  */
    /* test HI8(eax), 0x41u */ /* 0x100C3393: test ah, 0x41 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(0x41u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_100C33A7; /* 0x100C3396: jne 0x100c33a7 */
L_100C3398:
    { _st[0] = _st[0]; g_st_i64[0] = g_st_i64[0]; fp_pop(); } /* 0x100C3398: fstp st(0) */
    { _st[1] = _st[0]; g_st_i64[1] = g_st_i64[0]; fp_pop(); } /* 0x100C339A: fstp st(1) */
    *(double*)ADDR(ebp + (-0x20)) = _st[0]; /* 0x100C339C: fst qword ptr [ebp - 0x20] */
    _st[0] = *(double*)ADDR(ebp + (-0x10)) / _st[0]; /* 0x100C339F: fdivr qword ptr [ebp - 0x10] */
    _st[0] *= *(double*)ADDR(ebp + (-0x30)); /* 0x100C33A2: fmul qword ptr [ebp - 0x30] */
    goto L_100C33E9; /* 0x100C33A5: jmp 0x100c33e9 */
L_100C33A7:
    fp_push(*(double*)ADDR(ebp + (-0x30))); /* 0x100C33A7: fld qword ptr [ebp - 0x30] */
    _fpu_cmp = FPU_CMP(_st[0], _st[3]); /* 0x100C33AA: fcom st(3) */
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x100C33AC: fnstsw ax */
    /* test HI8(eax), 0x41u */ /* 0x100C33AE: test ah, 0x41 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(0x41u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_100C33BE; /* 0x100C33B1: jne 0x100c33be */
L_100C33B3:
    { _st[1] = _st[0]; g_st_i64[1] = g_st_i64[0]; fp_pop(); } /* 0x100C33B3: fstp st(1) */
    { _st[2] = _st[0]; g_st_i64[2] = g_st_i64[0]; fp_pop(); } /* 0x100C33B5: fstp st(2) */
    fp_push(_st[1]); /* 0x100C33B7: fld st(1) */
    { double _v = fp_pop(); *(double*)ADDR(ebp + (-0x20)) = _v; } /* 0x100C33B9: fstp qword ptr [ebp - 0x20] */
    goto L_100C33D4; /* 0x100C33BC: jmp 0x100c33d4 */
L_100C33BE:
    fp_push(_st[0]); /* 0x100C33BE: fld st(0) */
    _st[0] = -_st[0]; /* 0x100C33C0: fchs  */
    *(double*)ADDR(ebp + (-0x20)) = _st[0]; /* 0x100C33C2: fst qword ptr [ebp - 0x20] */
    _fpu_cmp = FPU_CMP(_st[0], _st[4]); /* 0x100C33C5: fcom st(4) */
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x100C33C7: fnstsw ax */
    { _st[4] = _st[0]; g_st_i64[4] = g_st_i64[0]; fp_pop(); } /* 0x100C33C9: fstp st(4) */
    /* test HI8(eax), 0x41u */ /* 0x100C33CB: test ah, 0x41 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(0x41u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_100C33DF; /* 0x100C33CE: jne 0x100c33df */
L_100C33D0:
    { _st[1] = _st[0]; g_st_i64[1] = g_st_i64[0]; fp_pop(); } /* 0x100C33D0: fstp st(1) */
    { _st[0] = _st[0]; g_st_i64[0] = g_st_i64[0]; fp_pop(); } /* 0x100C33D2: fstp st(0) */
L_100C33D4:
    fp_xch(2); /* 0x100C33D4: fxch st(2) */
    { double _v = fp_pop(); _st[0] = _st[0] == 0.0 ? _v : _v / _st[0]; } /* 0x100C33D6: fdivrp st(1) */
    { double _v = fp_pop(); _st[0] *= _v; } /* 0x100C33D8: fmulp st(1) */
    _st[0] -= *(double*)ADDR(ebp + (-0x10)); /* 0x100C33DA: fsub qword ptr [ebp - 0x10] */
    goto L_100C33EB; /* 0x100C33DD: jmp 0x100c33eb */
L_100C33DF:
    { _st[3] = _st[0]; g_st_i64[3] = g_st_i64[0]; fp_pop(); } /* 0x100C33DF: fstp st(3) */
    { double _v = fp_pop(); *(double*)ADDR(ebp + (-0x20)) = _v; } /* 0x100C33E1: fstp qword ptr [ebp - 0x20] */
    { double _v = fp_pop(); _st[1] *= _v; } /* 0x100C33E4: fmulp st(2) */
    _st[0] *= *(double*)ADDR(ebp + (-0x10)); /* 0x100C33E6: fmul qword ptr [ebp - 0x10] */
L_100C33E9:
    { double _v = fp_pop(); _st[0] -= _v; } /* 0x100C33E9: fsubp st(1) */
L_100C33EB:
    PUSH32(esp, ecx); /* 0x100C33EB: push ecx */
    PUSH32(esp, ecx); /* 0x100C33EC: push ecx */
    { double _v = fp_pop(); *(double*)ADDR(esp) = _v; } /* 0x100C33ED: fstp qword ptr [esp] */
    RECOMP_CALL(sub_100C22C0); /* 0x100C33F0: call 0x100c22c0 */
    RECOMP_FLAGS_IN();
    *(double*)ADDR(ebp + (-0x10)) = _st[0]; /* 0x100C33F5: fst qword ptr [ebp - 0x10] */
    fp_push(*(double*)ADDR(ebp + (-0x20))); /* 0x100C33F8: fld qword ptr [ebp - 0x20] */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 8; /* 0x100C33FB: add esp, 8 */
    _flag_k = FK_ADD;
    fp_push(0.0); /* 0x100C33FE: fldz  */
    _fpu_cmp = FPU_CMP(_st[0], _st[1]); /* 0x100C3400: fucom st(1) */
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x100C3402: fnstsw ax */
    /* test HI8(eax), 0x44u */ /* 0x100C3404: test ah, 0x44 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(0x44u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if ((!RECOMP_PF((_flag_a & _flag_b), 24))) goto L_100C3432; /* 0x100C3407: jnp 0x100c3432 */
L_100C3409:
    _fpu_cmp = FPU_CMP(_st[0], _st[2]); /* 0x100C3409: fcomp st(2) */
    fp_pop();
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x100C340B: fnstsw ax */
    PUSH32(esp, ecx); /* 0x100C340D: push ecx */
    PUSH32(esp, ecx); /* 0x100C340E: push ecx */
    { _st[1] = _st[0]; g_st_i64[1] = g_st_i64[0]; fp_pop(); } /* 0x100C340F: fstp st(1) */
    { double _v = fp_pop(); *(double*)ADDR(esp) = _v; } /* 0x100C3411: fstp qword ptr [esp] */
    /* test HI8(eax), 0x41u */ /* 0x100C3414: test ah, 0x41 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(0x41u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (RECOMP_PF((_flag_a & _flag_b), 24)) goto L_100C3428; /* 0x100C3417: jp 0x100c3428 */
L_100C3419:
    RECOMP_CALL(sub_100367A8); /* 0x100C3419: call 0x100367a8 */
    RECOMP_FLAGS_IN();
    _st[0] += *(double*)ADDR(ebp + (-0x10)); /* 0x100C341E: fadd qword ptr [ebp - 0x10] */
L_100C3421:
    ecx = POP32_VAL(esp); /* 0x100C3421: pop ecx */
    { double _v = fp_pop(); *(double*)ADDR(ebp + (-0x10)) = _v; } /* 0x100C3422: fstp qword ptr [ebp - 0x10] */
    ecx = POP32_VAL(esp); /* 0x100C3425: pop ecx */
    goto L_100C3438; /* 0x100C3426: jmp 0x100c3438 */
L_100C3428:
    RECOMP_CALL(sub_100367A8); /* 0x100C3428: call 0x100367a8 */
    RECOMP_FLAGS_IN();
    _st[0] = *(double*)ADDR(ebp + (-0x10)) - _st[0]; /* 0x100C342D: fsubr qword ptr [ebp - 0x10] */
    RECOMP_BACKEDGE();
    goto L_100C3421; /* 0x100C3430: jmp 0x100c3421 */
L_100C3432:
    { _st[1] = _st[0]; g_st_i64[1] = g_st_i64[0]; fp_pop(); } /* 0x100C3432: fstp st(1) */
    { _st[1] = _st[0]; g_st_i64[1] = g_st_i64[0]; fp_pop(); } /* 0x100C3434: fstp st(1) */
    { _st[0] = _st[0]; g_st_i64[0] = g_st_i64[0]; fp_pop(); } /* 0x100C3436: fstp st(0) */
L_100C3438:
    eax = (uint32_t)MEM16(ebp + (-0x2)); /* 0x100C3438: movzx eax, word ptr [ebp - 2] */
    fp_push(*(double*)ADDR(ebp + (-0x8))); /* 0x100C343C: fld qword ptr [ebp - 8] */
    /* test eax, 0x8000u */ /* 0x100C343F: test eax, 0x8000 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x8000u);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_100C344D; /* 0x100C3444: je 0x100c344d */
L_100C3446:
    _st[0] = -_st[0]; /* 0x100C3446: fchs  */
    *(double*)ADDR(ebp + (-0x8)) = _st[0]; /* 0x100C3448: fst qword ptr [ebp - 8] */
    goto L_100C344F; /* 0x100C344B: jmp 0x100c344f */
L_100C344D:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ebx = 0; /* 0x100C344D: xor ebx, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
L_100C344F:
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x10u; /* 0x100C344F: sub esp, 0x10 */
    _flag_k = FK_CMP;
    eax = ebp + (-0x58); /* 0x100C3452: lea eax, [ebp - 0x58] */
    { double _v = fp_pop(); *(double*)ADDR(esp + 0x8) = _v; } /* 0x100C3455: fstp qword ptr [esp + 8] */
    fp_push(*(double*)ADDR(ebp + (-0x18))); /* 0x100C3459: fld qword ptr [ebp - 0x18] */
    fp_push(1.0); /* 0x100C345C: fld1  */
    { double _v = fp_pop(); _st[0] -= _v; } /* 0x100C345E: fsubp st(1) */
    { double _v = fp_pop(); *(double*)ADDR(esp) = _v; } /* 0x100C3460: fstp qword ptr [esp] */
    PUSH32(esp, eax); /* 0x100C3463: push eax */
    RECOMP_CALL(sub_100AACD2); /* 0x100C3464: call 0x100aacd2 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x100C3469: add esp, 4 */
    _flag_k = FK_ADD;
    esi = eax; /* 0x100C346C: mov esi, eax */
    edi = esp; /* 0x100C346E: mov edi, esp */
    eax = ebp + (-0x38); /* 0x100C3470: lea eax, [ebp - 0x38] */
    PUSH32(esp, eax); /* 0x100C3473: push eax */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x100C3474: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x100C3475: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x100C3476: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x100C3477: movsd dword ptr es:[edi], dword ptr [esi] */
    RECOMP_CALL(sub_100C7E68); /* 0x100C3478: call 0x100c7e68 */
    RECOMP_FLAGS_IN();
    fp_push(*(double*)ADDR(ebp + (-0x40))); /* 0x100C347D: fld qword ptr [ebp - 0x40] */
    esi = eax; /* 0x100C3480: mov esi, eax */
    PUSH32(esp, ecx); /* 0x100C3482: push ecx */
    { double _v = fp_pop(); *(double*)ADDR(esp + 0x10) = _v; } /* 0x100C3483: fstp qword ptr [esp + 0x10] */
    edi = esp; /* 0x100C3487: mov edi, esp */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x100C3489: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x100C348A: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x100C348B: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x100C348C: movsd dword ptr es:[edi], dword ptr [esi] */
    RECOMP_CALL(sub_100C5E60); /* 0x100C348D: call 0x100c5e60 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x100C3492: pop ecx */
    ecx = POP32_VAL(esp); /* 0x100C3493: pop ecx */
    { double _v = fp_pop(); *(double*)ADDR(esp) = _v; } /* 0x100C3494: fstp qword ptr [esp] */
    RECOMP_CALL(sub_100C3187); /* 0x100C3497: call 0x100c3187 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x10u; /* 0x100C349C: add esp, 0x10 */
    _flag_k = FK_ADD;
    _st[0] += _st[0]; /* 0x100C349F: fadd st(0), st(0) */
    /* test ebx, ebx */ /* 0x100C34A1: test ebx, ebx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ebx);
    _cf = 0;
    _flag_k = FK_TEST;
L_100C34A3:
    if (recomp_cond_cf(_flag_k, _flag_a, _flag_b, CC_E, _cf)) goto L_100C34A7; /* 0x100C34A3: je 0x100c34a7 */
L_100C34A5:
    _st[0] = -_st[0]; /* 0x100C34A5: fchs  */
L_100C34A7:
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x10u; /* 0x100C34A7: sub esp, 0x10 */
    _flag_k = FK_CMP;
    eax = ebp + (-0x58); /* 0x100C34AA: lea eax, [ebp - 0x58] */
    { double _v = fp_pop(); *(double*)ADDR(esp + 0x8) = _v; } /* 0x100C34AD: fstp qword ptr [esp + 8] */
    fp_push(*(double*)ADDR(ebp + (-0x10))); /* 0x100C34B1: fld qword ptr [ebp - 0x10] */
    { double _v = fp_pop(); *(double*)ADDR(esp) = _v; } /* 0x100C34B4: fstp qword ptr [esp] */
    PUSH32(esp, eax); /* 0x100C34B7: push eax */
    RECOMP_CALL(sub_100AACD2); /* 0x100C34B8: call 0x100aacd2 */
    RECOMP_FLAGS_IN();
    esi = eax; /* 0x100C34BD: mov esi, eax */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x14u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x14u; /* 0x100C34BF: add esp, 0x14 */
    _flag_k = FK_ADD;
    eax = MEM32(ebp + 0x8); /* 0x100C34C2: mov eax, dword ptr [ebp + 8] */
    edi = eax; /* 0x100C34C5: mov edi, eax */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x100C34C7: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x100C34C8: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x100C34C9: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x100C34CA: movsd dword ptr es:[edi], dword ptr [esi] */
    edi = POP32_VAL(esp); /* 0x100C34CB: pop edi */
    esi = POP32_VAL(esp); /* 0x100C34CC: pop esi */
    ebx = POP32_VAL(esp); /* 0x100C34CD: pop ebx */
    esp = ebp; /* 0x100C34CE: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x100C34D0: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x100C34D1: ret  */
    RECOMP_REGS_OUT();
}

void sub_100C34D2(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x100C34D2u);

L_100C34D2:
    PUSH32(esp, ebp); /* 0x100C34D2: push ebp */
    ebp = esp; /* 0x100C34D3: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x58u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x58u; /* 0x100C34D5: sub esp, 0x58 */
    _flag_k = FK_CMP;
    PUSH32(esp, esi); /* 0x100C34D8: push esi */
    PUSH32(esp, edi); /* 0x100C34D9: push edi */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x10u; /* 0x100C34DA: sub esp, 0x10 */
    _flag_k = FK_CMP;
    esi = ebp + 0xC; /* 0x100C34DD: lea esi, [ebp + 0xc] */
    edi = esp; /* 0x100C34E0: mov edi, esp */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x100C34E2: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x100C34E3: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x100C34E4: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x100C34E5: movsd dword ptr es:[edi], dword ptr [esi] */
    RECOMP_CALL(sub_100C6B29); /* 0x100C34E6: call 0x100c6b29 */
    RECOMP_FLAGS_IN();
    edi = esp; /* 0x100C34EB: mov edi, esp */
    esi = ebp + 0xC; /* 0x100C34ED: lea esi, [ebp + 0xc] */
    { double _v = fp_pop(); *(double*)ADDR(ebp + (-0x10)) = _v; } /* 0x100C34F0: fstp qword ptr [ebp - 0x10] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x100C34F3: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x100C34F4: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x100C34F5: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x100C34F6: movsd dword ptr es:[edi], dword ptr [esi] */
    RECOMP_CALL(sub_100C5E60); /* 0x100C34F7: call 0x100c5e60 */
    RECOMP_FLAGS_IN();
    eax = ebp + (-0x10); /* 0x100C34FC: lea eax, [ebp - 0x10] */
    PUSH32(esp, eax); /* 0x100C34FF: push eax */
    { double _v = fp_pop(); *(double*)ADDR(ebp + (-0x8)) = _v; } /* 0x100C3500: fstp qword ptr [ebp - 8] */
    RECOMP_CALL(sub_100C0034); /* 0x100C3503: call 0x100c0034 */
    RECOMP_FLAGS_IN();
    esi = (uint32_t)LO16(eax); /* 0x100C3508: movzx esi, ax */
    eax = ebp + (-0x8); /* 0x100C350B: lea eax, [ebp - 8] */
    PUSH32(esp, eax); /* 0x100C350E: push eax */
    RECOMP_CALL(sub_100C0034); /* 0x100C350F: call 0x100c0034 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x18u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x18u; /* 0x100C3514: add esp, 0x18 */
    _flag_k = FK_ADD;
    eax = (uint32_t)LO16(eax); /* 0x100C3517: movzx eax, ax */
    PUSH32(esp, 2); /* 0x100C351A: push 2 */
    ecx = POP32_VAL(esp); /* 0x100C351C: pop ecx */
    /* cmp LO16(esi), LO16(ecx) */ /* 0x100C351D: cmp si, cx */
    _flag_a = (uint32_t)(LO16(esi)) << 16; _flag_b = (uint32_t)(LO16(ecx)) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    if (CMP_NE(_flag_a, _flag_b)) goto L_100C3536; /* 0x100C3520: jne 0x100c3536 */
L_100C3522:
    fp_push(*(double*)ADDR(ebp + (-0x10))); /* 0x100C3522: fld qword ptr [ebp - 0x10] */
    /* cmp LO16(eax), LO16(ecx) */ /* 0x100C3525: cmp ax, cx */
    _flag_a = (uint32_t)(LO16(eax)) << 16; _flag_b = (uint32_t)(LO16(ecx)) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_100C355A; /* 0x100C3528: je 0x100c355a */
L_100C352A:
    /* cmp LO16(eax), 1 */ /* 0x100C352A: cmp ax, 1 */
    _flag_a = (uint32_t)(LO16(eax)) << 16; _flag_b = (uint32_t)(1) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_100C35CA; /* 0x100C352E: je 0x100c35ca */
L_100C3534:
    goto L_100C3565; /* 0x100C3534: jmp 0x100c3565 */
L_100C3536:
    /* cmp LO16(eax), LO16(ecx) */ /* 0x100C3536: cmp ax, cx */
    _flag_a = (uint32_t)(LO16(eax)) << 16; _flag_b = (uint32_t)(LO16(ecx)) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    if (CMP_NE(_flag_a, _flag_b)) goto L_100C356C; /* 0x100C3539: jne 0x100c356c */
L_100C353B:
    /* cmp LO16(esi), 1 */ /* 0x100C353B: cmp si, 1 */
    _flag_a = (uint32_t)(LO16(esi)) << 16; _flag_b = (uint32_t)(1) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    if (CMP_NE(_flag_a, _flag_b)) goto L_100C354F; /* 0x100C353F: jne 0x100c354f */
L_100C3541:
    fp_push(*(double*)ADDR(ebp + (-0x8))); /* 0x100C3541: fld qword ptr [ebp - 8] */
    fp_push(*(double*)ADDR(0x10065B88)); /* 0x100C3544: fld qword ptr [0x10065b88] */
    goto L_100C378C; /* 0x100C354A: jmp 0x100c378c */
L_100C354F:
    /* test LO16(esi), LO16(esi) */ /* 0x100C354F: test si, si */
    _flag_a = (uint32_t)(LO16(esi)) << 16; _flag_b = (uint32_t)(LO16(esi)) << 16;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 16);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_100C3562; /* 0x100C3552: jne 0x100c3562 */
L_100C3554:
    fp_push(*(double*)ADDR(0x10063C20)); /* 0x100C3554: fld qword ptr [0x10063c20] */
L_100C355A:
    fp_push(*(double*)ADDR(ebp + (-0x8))); /* 0x100C355A: fld qword ptr [ebp - 8] */
    goto L_100C378C; /* 0x100C355D: jmp 0x100c378c */
L_100C3562:
    fp_push(*(double*)ADDR(ebp + (-0x8))); /* 0x100C3562: fld qword ptr [ebp - 8] */
L_100C3565:
    fp_push(_st[0]); /* 0x100C3565: fld st(0) */
    goto L_100C378C; /* 0x100C3567: jmp 0x100c378c */
L_100C356C:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x100C356C: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx + 1; /* 0x100C356E: inc ecx */
    _flag_k = FK_INC;
    /* cmp LO16(esi), LO16(ecx) */ /* 0x100C356F: cmp si, cx */
    _flag_a = (uint32_t)(LO16(esi)) << 16; _flag_b = (uint32_t)(LO16(ecx)) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    if (CMP_NE(_flag_a, _flag_b)) goto L_100C35BF; /* 0x100C3572: jne 0x100c35bf */
L_100C3574:
    fp_push(0.0); /* 0x100C3574: fldz  */
    /* cmp LO16(eax), LO16(ecx) */ /* 0x100C3576: cmp ax, cx */
    _flag_a = (uint32_t)(LO16(eax)) << 16; _flag_b = (uint32_t)(LO16(ecx)) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    if (CMP_NE(_flag_a, _flag_b)) goto L_100C3595; /* 0x100C3579: jne 0x100c3595 */
L_100C357B:
    _fpu_cmp = FPU_CMP(_st[0], *(double*)ADDR(ebp + (-0x10))); /* 0x100C357B: fcomp qword ptr [ebp - 0x10] */
    fp_pop();
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x100C357E: fnstsw ax */
    /* test HI8(eax), 0x41u */ /* 0x100C3580: test ah, 0x41 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(0x41u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_100C358D; /* 0x100C3583: jne 0x100c358d */
L_100C3585:
    fp_push(*(double*)ADDR(0x10063BF0)); /* 0x100C3585: fld qword ptr [0x10063bf0] */
    goto L_100C35A7; /* 0x100C358B: jmp 0x100c35a7 */
L_100C358D:
    fp_push(*(double*)ADDR(0x10063BE0)); /* 0x100C358D: fld qword ptr [0x10063be0] */
    goto L_100C35A7; /* 0x100C3593: jmp 0x100c35a7 */
L_100C3595:
    _fpu_cmp = FPU_CMP(_st[0], *(double*)ADDR(ebp + (-0x10))); /* 0x100C3595: fcom qword ptr [ebp - 0x10] */
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x100C3598: fnstsw ax */
    /* test HI8(eax), 0x41u */ /* 0x100C359A: test ah, 0x41 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(0x41u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_100C35A7; /* 0x100C359D: jne 0x100c35a7 */
L_100C359F:
    { _st[0] = _st[0]; g_st_i64[0] = g_st_i64[0]; fp_pop(); } /* 0x100C359F: fstp st(0) */
    fp_push(*(double*)ADDR(0x10063BF8)); /* 0x100C35A1: fld qword ptr [0x10063bf8] */
L_100C35A7:
    eax = (uint32_t)MEM16(ebp + (-0x2)); /* 0x100C35A7: movzx eax, word ptr [ebp - 2] */
    fp_push(*(double*)ADDR(0x10065B88)); /* 0x100C35AB: fld qword ptr [0x10065b88] */
    _st[0] = -_st[0]; /* 0x100C35B1: fchs  */
    /* test eax, 0x8000u */ /* 0x100C35B3: test eax, 0x8000 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x8000u);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_100C35CD; /* 0x100C35B8: jne 0x100c35cd */
L_100C35BA:
    goto L_100C378C; /* 0x100C35BA: jmp 0x100c378c */
L_100C35BF:
    /* cmp LO16(eax), LO16(ecx) */ /* 0x100C35BF: cmp ax, cx */
    _flag_a = (uint32_t)(LO16(eax)) << 16; _flag_b = (uint32_t)(LO16(ecx)) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    if (CMP_NE(_flag_a, _flag_b)) goto L_100C35D4; /* 0x100C35C2: jne 0x100c35d4 */
L_100C35C4:
    fp_push(*(double*)ADDR(0x10063C20)); /* 0x100C35C4: fld qword ptr [0x10063c20] */
L_100C35CA:
    fp_push(*(double*)ADDR(ebp + (-0x8))); /* 0x100C35CA: fld qword ptr [ebp - 8] */
L_100C35CD:
    _st[0] = -_st[0]; /* 0x100C35CD: fchs  */
    goto L_100C378C; /* 0x100C35CF: jmp 0x100c378c */
L_100C35D4:
    fp_push(*(double*)ADDR(ebp + (-0x8))); /* 0x100C35D4: fld qword ptr [ebp - 8] */
    eax = ebp + (-0x58); /* 0x100C35D7: lea eax, [ebp - 0x58] */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x10u; /* 0x100C35DA: sub esp, 0x10 */
    _flag_k = FK_CMP;
    _st[0] = -_st[0]; /* 0x100C35DD: fchs  */
    { double _v = fp_pop(); *(double*)ADDR(esp + 0x8) = _v; } /* 0x100C35DF: fstp qword ptr [esp + 8] */
    fp_push(*(double*)ADDR(ebp + (-0x10))); /* 0x100C35E3: fld qword ptr [ebp - 0x10] */
    fp_push(1.0); /* 0x100C35E6: fld1  */
    { double _v = fp_pop(); _st[0] += _v; } /* 0x100C35E8: faddp st(1) */
    { double _v = fp_pop(); *(double*)ADDR(esp) = _v; } /* 0x100C35EA: fstp qword ptr [esp] */
    PUSH32(esp, eax); /* 0x100C35ED: push eax */
    RECOMP_CALL(sub_100AACD2); /* 0x100C35EE: call 0x100aacd2 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x100C35F3: add esp, 4 */
    _flag_k = FK_ADD;
    esi = eax; /* 0x100C35F6: mov esi, eax */
    edi = esp; /* 0x100C35F8: mov edi, esp */
    eax = ebp + (-0x38); /* 0x100C35FA: lea eax, [ebp - 0x38] */
    PUSH32(esp, eax); /* 0x100C35FD: push eax */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x100C35FE: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x100C35FF: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x100C3600: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x100C3601: movsd dword ptr es:[edi], dword ptr [esi] */
    RECOMP_CALL(sub_100C7E68); /* 0x100C3602: call 0x100c7e68 */
    RECOMP_FLAGS_IN();
    fp_push(*(double*)ADDR(ebp + (-0x8))); /* 0x100C3607: fld qword ptr [ebp - 8] */
    edi = ebp + (-0x48); /* 0x100C360A: lea edi, [ebp - 0x48] */
    esi = eax; /* 0x100C360D: mov esi, eax */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x100C360F: add esp, 4 */
    _flag_k = FK_ADD;
    _st[0] = -_st[0]; /* 0x100C3612: fchs  */
    eax = ebp + (-0x58); /* 0x100C3614: lea eax, [ebp - 0x58] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x100C3617: movsd dword ptr es:[edi], dword ptr [esi] */
    { double _v = fp_pop(); *(double*)ADDR(esp + 0x8) = _v; } /* 0x100C3618: fstp qword ptr [esp + 8] */
    fp_push(1.0); /* 0x100C361C: fld1  */
    _st[0] -= *(double*)ADDR(ebp + (-0x10)); /* 0x100C361E: fsub qword ptr [ebp - 0x10] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x100C3621: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x100C3622: movsd dword ptr es:[edi], dword ptr [esi] */
    { double _v = fp_pop(); *(double*)ADDR(esp) = _v; } /* 0x100C3623: fstp qword ptr [esp] */
    PUSH32(esp, eax); /* 0x100C3626: push eax */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x100C3627: movsd dword ptr es:[edi], dword ptr [esi] */
    RECOMP_CALL(sub_100AACD2); /* 0x100C3628: call 0x100aacd2 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x100C362D: add esp, 4 */
    _flag_k = FK_ADD;
    esi = eax; /* 0x100C3630: mov esi, eax */
    edi = esp; /* 0x100C3632: mov edi, esp */
    eax = ebp + (-0x38); /* 0x100C3634: lea eax, [ebp - 0x38] */
    PUSH32(esp, eax); /* 0x100C3637: push eax */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x100C3638: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x100C3639: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x100C363A: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x100C363B: movsd dword ptr es:[edi], dword ptr [esi] */
    RECOMP_CALL(sub_100C7E68); /* 0x100C363C: call 0x100c7e68 */
    RECOMP_FLAGS_IN();
    esi = eax; /* 0x100C3641: mov esi, eax */
    edi = ebp + (-0x20); /* 0x100C3643: lea edi, [ebp - 0x20] */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x100C3646: add esp, 4 */
    _flag_k = FK_ADD;
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x100C3649: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x100C364A: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x100C364B: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x100C364C: movsd dword ptr es:[edi], dword ptr [esi] */
    edi = esp; /* 0x100C364D: mov edi, esp */
    esi = ebp + (-0x48); /* 0x100C364F: lea esi, [ebp - 0x48] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x100C3652: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x100C3653: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x100C3654: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x100C3655: movsd dword ptr es:[edi], dword ptr [esi] */
    RECOMP_CALL(sub_100C6B29); /* 0x100C3656: call 0x100c6b29 */
    RECOMP_FLAGS_IN();
    edi = esp; /* 0x100C365B: mov edi, esp */
    esi = ebp + (-0x48); /* 0x100C365D: lea esi, [ebp - 0x48] */
    { double _v = fp_pop(); *(double*)ADDR(ebp + (-0x30)) = _v; } /* 0x100C3660: fstp qword ptr [ebp - 0x30] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x100C3663: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x100C3664: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x100C3665: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x100C3666: movsd dword ptr es:[edi], dword ptr [esi] */
    RECOMP_CALL(sub_100C5E60); /* 0x100C3667: call 0x100c5e60 */
    RECOMP_FLAGS_IN();
    edi = esp; /* 0x100C366C: mov edi, esp */
    esi = ebp + (-0x20); /* 0x100C366E: lea esi, [ebp - 0x20] */
    { double _v = fp_pop(); *(double*)ADDR(ebp + (-0x50)) = _v; } /* 0x100C3671: fstp qword ptr [ebp - 0x50] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x100C3674: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x100C3675: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x100C3676: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x100C3677: movsd dword ptr es:[edi], dword ptr [esi] */
    RECOMP_CALL(sub_100C5E60); /* 0x100C3678: call 0x100c5e60 */
    RECOMP_FLAGS_IN();
    edi = esp; /* 0x100C367D: mov edi, esp */
    esi = ebp + (-0x20); /* 0x100C367F: lea esi, [ebp - 0x20] */
    { double _v = fp_pop(); *(double*)ADDR(ebp + (-0x28)) = _v; } /* 0x100C3682: fstp qword ptr [ebp - 0x28] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x100C3685: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x100C3686: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x100C3687: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x100C3688: movsd dword ptr es:[edi], dword ptr [esi] */
    RECOMP_CALL(sub_100C6B29); /* 0x100C3689: call 0x100c6b29 */
    RECOMP_FLAGS_IN();
    edi = esp; /* 0x100C368E: mov edi, esp */
    esi = ebp + (-0x48); /* 0x100C3690: lea esi, [ebp - 0x48] */
    eax = ebp + (-0x48); /* 0x100C3693: lea eax, [ebp - 0x48] */
    PUSH32(esp, eax); /* 0x100C3696: push eax */
    { double _v = fp_pop(); *(double*)ADDR(ebp + (-0x18)) = _v; } /* 0x100C3697: fstp qword ptr [ebp - 0x18] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x100C369A: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x100C369B: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x100C369C: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x100C369D: movsd dword ptr es:[edi], dword ptr [esi] */
    RECOMP_CALL(sub_100C657E); /* 0x100C369E: call 0x100c657e */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x100C36A3: add esp, 4 */
    _flag_k = FK_ADD;
    esi = eax; /* 0x100C36A6: mov esi, eax */
    edi = esp; /* 0x100C36A8: mov edi, esp */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x100C36AA: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x100C36AB: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x100C36AC: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x100C36AD: movsd dword ptr es:[edi], dword ptr [esi] */
    RECOMP_CALL(sub_100C6B29); /* 0x100C36AE: call 0x100c6b29 */
    RECOMP_FLAGS_IN();
    { double _v = fp_pop(); *(double*)ADDR(esp + 0x8) = _v; } /* 0x100C36B3: fstp qword ptr [esp + 8] */
    fp_push(*(double*)ADDR(ebp + (-0x18))); /* 0x100C36B7: fld qword ptr [ebp - 0x18] */
    { double _v = fp_pop(); *(double*)ADDR(esp) = _v; } /* 0x100C36BA: fstp qword ptr [esp] */
    RECOMP_CALL(sub_100C3187); /* 0x100C36BD: call 0x100c3187 */
    RECOMP_FLAGS_IN();
    _st[0] += _st[0]; /* 0x100C36C2: fadd st(0), st(0) */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x10u; /* 0x100C36C4: add esp, 0x10 */
    _flag_k = FK_ADD;
    { double _v = fp_pop(); *(double*)ADDR(ebp + (-0x40)) = _v; } /* 0x100C36C7: fstp qword ptr [ebp - 0x40] */
    fp_push(*(double*)ADDR(0x10063C28)); /* 0x100C36CA: fld qword ptr [0x10063c28] */
    fp_push(*(double*)ADDR(ebp + (-0x30))); /* 0x100C36D0: fld qword ptr [ebp - 0x30] */
    _fpu_cmp = FPU_CMP(_st[0], _st[1]); /* 0x100C36D3: fcom st(1) */
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x100C36D5: fnstsw ax */
    fp_push(0.0); /* 0x100C36D7: fldz  */
    /* test HI8(eax), 0x41u */ /* 0x100C36D9: test ah, 0x41 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(0x41u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_100C36F0; /* 0x100C36DC: jne 0x100c36f0 */
L_100C36DE:
    { _st[0] = _st[0]; g_st_i64[0] = g_st_i64[0]; fp_pop(); } /* 0x100C36DE: fstp st(0) */
    { _st[1] = _st[0]; g_st_i64[1] = g_st_i64[0]; fp_pop(); } /* 0x100C36E0: fstp st(1) */
    *(double*)ADDR(ebp + (-0x30)) = _st[0]; /* 0x100C36E2: fst qword ptr [ebp - 0x30] */
    _st[0] = *(double*)ADDR(ebp + (-0x18)) / _st[0]; /* 0x100C36E5: fdivr qword ptr [ebp - 0x18] */
    _st[0] *= *(double*)ADDR(ebp + (-0x50)); /* 0x100C36E8: fmul qword ptr [ebp - 0x50] */
    _st[0] += *(double*)ADDR(ebp + (-0x28)); /* 0x100C36EB: fadd qword ptr [ebp - 0x28] */
    goto L_100C3738; /* 0x100C36EE: jmp 0x100c3738 */
L_100C36F0:
    fp_push(*(double*)ADDR(ebp + (-0x50))); /* 0x100C36F0: fld qword ptr [ebp - 0x50] */
    _fpu_cmp = FPU_CMP(_st[0], _st[3]); /* 0x100C36F3: fcom st(3) */
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x100C36F5: fnstsw ax */
    /* test HI8(eax), 0x41u */ /* 0x100C36F7: test ah, 0x41 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(0x41u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_100C3707; /* 0x100C36FA: jne 0x100c3707 */
L_100C36FC:
    { _st[1] = _st[0]; g_st_i64[1] = g_st_i64[0]; fp_pop(); } /* 0x100C36FC: fstp st(1) */
    { _st[2] = _st[0]; g_st_i64[2] = g_st_i64[0]; fp_pop(); } /* 0x100C36FE: fstp st(2) */
    fp_push(_st[1]); /* 0x100C3700: fld st(1) */
    { double _v = fp_pop(); *(double*)ADDR(ebp + (-0x30)) = _v; } /* 0x100C3702: fstp qword ptr [ebp - 0x30] */
    goto L_100C371D; /* 0x100C3705: jmp 0x100c371d */
L_100C3707:
    fp_push(_st[0]); /* 0x100C3707: fld st(0) */
    _st[0] = -_st[0]; /* 0x100C3709: fchs  */
    *(double*)ADDR(ebp + (-0x30)) = _st[0]; /* 0x100C370B: fst qword ptr [ebp - 0x30] */
    _fpu_cmp = FPU_CMP(_st[0], _st[4]); /* 0x100C370E: fcom st(4) */
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x100C3710: fnstsw ax */
    { _st[4] = _st[0]; g_st_i64[4] = g_st_i64[0]; fp_pop(); } /* 0x100C3712: fstp st(4) */
    /* test HI8(eax), 0x41u */ /* 0x100C3714: test ah, 0x41 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(0x41u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_100C3729; /* 0x100C3717: jne 0x100c3729 */
L_100C3719:
    { _st[1] = _st[0]; g_st_i64[1] = g_st_i64[0]; fp_pop(); } /* 0x100C3719: fstp st(1) */
    { _st[0] = _st[0]; g_st_i64[0] = g_st_i64[0]; fp_pop(); } /* 0x100C371B: fstp st(0) */
L_100C371D:
    fp_push(*(double*)ADDR(ebp + (-0x28))); /* 0x100C371D: fld qword ptr [ebp - 0x28] */
    { double _v = fp_pop(); _st[1] = _st[1] == 0.0 ? _v : _v / _st[1]; } /* 0x100C3720: fdivrp st(2) */
    { double _v = fp_pop(); _st[0] *= _v; } /* 0x100C3722: fmulp st(1) */
    _st[0] += *(double*)ADDR(ebp + (-0x18)); /* 0x100C3724: fadd qword ptr [ebp - 0x18] */
    goto L_100C3738; /* 0x100C3727: jmp 0x100c3738 */
L_100C3729:
    { _st[3] = _st[0]; g_st_i64[3] = g_st_i64[0]; fp_pop(); } /* 0x100C3729: fstp st(3) */
    { double _v = fp_pop(); *(double*)ADDR(ebp + (-0x30)) = _v; } /* 0x100C372B: fstp qword ptr [ebp - 0x30] */
    fp_push(*(double*)ADDR(ebp + (-0x18))); /* 0x100C372E: fld qword ptr [ebp - 0x18] */
    { double _v = fp_pop(); _st[1] *= _v; } /* 0x100C3731: fmulp st(2) */
    _st[0] *= *(double*)ADDR(ebp + (-0x28)); /* 0x100C3733: fmul qword ptr [ebp - 0x28] */
    { double _v = fp_pop(); _st[0] += _v; } /* 0x100C3736: faddp st(1) */
L_100C3738:
    PUSH32(esp, ecx); /* 0x100C3738: push ecx */
    PUSH32(esp, ecx); /* 0x100C3739: push ecx */
    { double _v = fp_pop(); *(double*)ADDR(esp) = _v; } /* 0x100C373A: fstp qword ptr [esp] */
    RECOMP_CALL(sub_100C22C0); /* 0x100C373D: call 0x100c22c0 */
    RECOMP_FLAGS_IN();
    *(double*)ADDR(ebp + (-0x50)) = _st[0]; /* 0x100C3742: fst qword ptr [ebp - 0x50] */
    fp_push(*(double*)ADDR(ebp + (-0x30))); /* 0x100C3745: fld qword ptr [ebp - 0x30] */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 8; /* 0x100C3748: add esp, 8 */
    _flag_k = FK_ADD;
    fp_push(0.0); /* 0x100C374B: fldz  */
    _fpu_cmp = FPU_CMP(_st[0], _st[1]); /* 0x100C374D: fucom st(1) */
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x100C374F: fnstsw ax */
    /* test HI8(eax), 0x44u */ /* 0x100C3751: test ah, 0x44 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(0x44u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if ((!RECOMP_PF((_flag_a & _flag_b), 24))) goto L_100C3783; /* 0x100C3754: jnp 0x100c3783 */
L_100C3756:
    { _st[2] = _st[0]; g_st_i64[2] = g_st_i64[0]; fp_pop(); } /* 0x100C3756: fstp st(2) */
    fp_push(*(double*)ADDR(ebp + (-0x40))); /* 0x100C3758: fld qword ptr [ebp - 0x40] */
    _fpu_cmp = FPU_CMP(_st[0], _st[2]); /* 0x100C375B: fcomp st(2) */
    fp_pop();
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x100C375D: fnstsw ax */
    PUSH32(esp, ecx); /* 0x100C375F: push ecx */
    PUSH32(esp, ecx); /* 0x100C3760: push ecx */
    { _st[1] = _st[0]; g_st_i64[1] = g_st_i64[0]; fp_pop(); } /* 0x100C3761: fstp st(1) */
    { double _v = fp_pop(); *(double*)ADDR(esp) = _v; } /* 0x100C3763: fstp qword ptr [esp] */
    /* test HI8(eax), 1 */ /* 0x100C3766: test ah, 1 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(1) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_100C3777; /* 0x100C3769: jne 0x100c3777 */
L_100C376B:
    RECOMP_CALL(sub_100367A8); /* 0x100C376B: call 0x100367a8 */
    RECOMP_FLAGS_IN();
    _st[0] += *(double*)ADDR(ebp + (-0x50)); /* 0x100C3770: fadd qword ptr [ebp - 0x50] */
    ecx = POP32_VAL(esp); /* 0x100C3773: pop ecx */
    ecx = POP32_VAL(esp); /* 0x100C3774: pop ecx */
    goto L_100C3787; /* 0x100C3775: jmp 0x100c3787 */
L_100C3777:
    RECOMP_CALL(sub_100367A8); /* 0x100C3777: call 0x100367a8 */
    RECOMP_FLAGS_IN();
    _st[0] = *(double*)ADDR(ebp + (-0x50)) - _st[0]; /* 0x100C377C: fsubr qword ptr [ebp - 0x50] */
    ecx = POP32_VAL(esp); /* 0x100C377F: pop ecx */
    ecx = POP32_VAL(esp); /* 0x100C3780: pop ecx */
    goto L_100C3787; /* 0x100C3781: jmp 0x100c3787 */
L_100C3783:
    { _st[1] = _st[0]; g_st_i64[1] = g_st_i64[0]; fp_pop(); } /* 0x100C3783: fstp st(1) */
    { _st[0] = _st[0]; g_st_i64[0] = g_st_i64[0]; fp_pop(); } /* 0x100C3785: fstp st(0) */
L_100C3787:
    fp_push(*(double*)ADDR(ebp + (-0x40))); /* 0x100C3787: fld qword ptr [ebp - 0x40] */
    fp_xch(1); /* 0x100C378A: fxch st(1) */
L_100C378C:
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x10u; /* 0x100C378C: sub esp, 0x10 */
    _flag_k = FK_CMP;
    eax = ebp + (-0x58); /* 0x100C378F: lea eax, [ebp - 0x58] */
    { double _v = fp_pop(); *(double*)ADDR(esp + 0x8) = _v; } /* 0x100C3792: fstp qword ptr [esp + 8] */
    { double _v = fp_pop(); *(double*)ADDR(esp) = _v; } /* 0x100C3796: fstp qword ptr [esp] */
    PUSH32(esp, eax); /* 0x100C3799: push eax */
    RECOMP_CALL(sub_100AACD2); /* 0x100C379A: call 0x100aacd2 */
    RECOMP_FLAGS_IN();
    esi = eax; /* 0x100C379F: mov esi, eax */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x14u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x14u; /* 0x100C37A1: add esp, 0x14 */
    _flag_k = FK_ADD;
    eax = MEM32(ebp + 0x8); /* 0x100C37A4: mov eax, dword ptr [ebp + 8] */
    edi = eax; /* 0x100C37A7: mov edi, eax */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x100C37A9: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x100C37AA: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x100C37AB: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x100C37AC: movsd dword ptr es:[edi], dword ptr [esi] */
    edi = POP32_VAL(esp); /* 0x100C37AD: pop edi */
    esi = POP32_VAL(esp); /* 0x100C37AE: pop esi */
    esp = ebp; /* 0x100C37AF: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x100C37B1: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x100C37B2: ret  */
    RECOMP_REGS_OUT();
}

void sub_100C37B3(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x100C37B3u);

L_100C37B3:
    PUSH32(esp, ebp); /* 0x100C37B3: push ebp */
    ebp = esp; /* 0x100C37B4: mov ebp, esp */
    PUSH32(esp, esi); /* 0x100C37B6: push esi */
    PUSH32(esp, edi); /* 0x100C37B7: push edi */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x10u; /* 0x100C37B8: sub esp, 0x10 */
    _flag_k = FK_CMP;
    esi = ebp + 0x8; /* 0x100C37BB: lea esi, [ebp + 8] */
    edi = esp; /* 0x100C37BE: mov edi, esp */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x100C37C0: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x100C37C1: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x100C37C2: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x100C37C3: movsd dword ptr es:[edi], dword ptr [esi] */
    RECOMP_CALL(sub_100C6B29); /* 0x100C37C4: call 0x100c6b29 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, ecx); /* 0x100C37C9: push ecx */
    PUSH32(esp, ecx); /* 0x100C37CA: push ecx */
    { double _v = fp_pop(); *(double*)ADDR(esp + 0x10) = _v; } /* 0x100C37CB: fstp qword ptr [esp + 0x10] */
    edi = esp; /* 0x100C37CF: mov edi, esp */
    esi = ebp + 0x8; /* 0x100C37D1: lea esi, [ebp + 8] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x100C37D4: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x100C37D5: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x100C37D6: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x100C37D7: movsd dword ptr es:[edi], dword ptr [esi] */
    RECOMP_CALL(sub_100C5E60); /* 0x100C37D8: call 0x100c5e60 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x100C37DD: pop ecx */
    ecx = POP32_VAL(esp); /* 0x100C37DE: pop ecx */
    { double _v = fp_pop(); *(double*)ADDR(esp) = _v; } /* 0x100C37DF: fstp qword ptr [esp] */
    RECOMP_CALL(sub_10036582); /* 0x100C37E2: call 0x10036582 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x10u; /* 0x100C37E7: add esp, 0x10 */
    _flag_k = FK_ADD;
    edi = POP32_VAL(esp); /* 0x100C37EA: pop edi */
    esi = POP32_VAL(esp); /* 0x100C37EB: pop esi */
    ebp = POP32_VAL(esp); /* 0x100C37EC: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x100C37ED: ret  */
    RECOMP_REGS_OUT();
}

void sub_100C37EE(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x100C37EEu);

L_100C37EE:
    PUSH32(esp, ebp); /* 0x100C37EE: push ebp */
    ebp = esp; /* 0x100C37EF: mov ebp, esp */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x100C37F1: push dword ptr [ebp + 0xc] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x100C37F4: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_100C6B58); /* 0x100C37F7: call 0x100c6b58 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x100C37FC: pop ecx */
    { float _v = (float)fp_pop(); *(float*)ADDR(esp) = _v; } /* 0x100C37FD: fstp dword ptr [esp] */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x100C3800: push dword ptr [ebp + 0xc] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x100C3803: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_100C5E33); /* 0x100C3806: call 0x100c5e33 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x100C380B: pop ecx */
    { float _v = (float)fp_pop(); *(float*)ADDR(esp) = _v; } /* 0x100C380C: fstp dword ptr [esp] */
    RECOMP_CALL(sub_100C2892); /* 0x100C380F: call 0x100c2892 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x100C3814: pop ecx */
    ecx = POP32_VAL(esp); /* 0x100C3815: pop ecx */
    ebp = POP32_VAL(esp); /* 0x100C3816: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x100C3817: ret  */
    RECOMP_REGS_OUT();
}

void sub_100C3818(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x100C3818u);

L_100C3818:
    PUSH32(esp, ebp); /* 0x100C3818: push ebp */
    ebp = esp; /* 0x100C3819: mov ebp, esp */
    PUSH32(esp, esi); /* 0x100C381B: push esi */
    PUSH32(esp, edi); /* 0x100C381C: push edi */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x10u; /* 0x100C381D: sub esp, 0x10 */
    _flag_k = FK_CMP;
    esi = ebp + 0x8; /* 0x100C3820: lea esi, [ebp + 8] */
    edi = esp; /* 0x100C3823: mov edi, esp */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x100C3825: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x100C3826: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x100C3827: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x100C3828: movsd dword ptr es:[edi], dword ptr [esi] */
    RECOMP_CALL(sub_100C6B29); /* 0x100C3829: call 0x100c6b29 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, ecx); /* 0x100C382E: push ecx */
    PUSH32(esp, ecx); /* 0x100C382F: push ecx */
    { double _v = fp_pop(); *(double*)ADDR(esp + 0x10) = _v; } /* 0x100C3830: fstp qword ptr [esp + 0x10] */
    edi = esp; /* 0x100C3834: mov edi, esp */
    esi = ebp + 0x8; /* 0x100C3836: lea esi, [ebp + 8] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x100C3839: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x100C383A: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x100C383B: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x100C383C: movsd dword ptr es:[edi], dword ptr [esi] */
    RECOMP_CALL(sub_100C5E60); /* 0x100C383D: call 0x100c5e60 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x100C3842: pop ecx */
    ecx = POP32_VAL(esp); /* 0x100C3843: pop ecx */
    { double _v = fp_pop(); *(double*)ADDR(esp) = _v; } /* 0x100C3844: fstp qword ptr [esp] */
    RECOMP_CALL(sub_100C3187); /* 0x100C3847: call 0x100c3187 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x10u; /* 0x100C384C: add esp, 0x10 */
    _flag_k = FK_ADD;
    edi = POP32_VAL(esp); /* 0x100C384F: pop edi */
    esi = POP32_VAL(esp); /* 0x100C3850: pop esi */
    ebp = POP32_VAL(esp); /* 0x100C3851: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x100C3852: ret  */
    RECOMP_REGS_OUT();
}

void sub_100C3853(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x100C3853u);

L_100C3853:
    PUSH32(esp, ebp); /* 0x100C3853: push ebp */
    ebp = esp; /* 0x100C3854: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x20u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x20u; /* 0x100C3856: sub esp, 0x20 */
    _flag_k = FK_CMP;
    PUSH32(esp, esi); /* 0x100C3859: push esi */
    PUSH32(esp, edi); /* 0x100C385A: push edi */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x10u; /* 0x100C385B: sub esp, 0x10 */
    _flag_k = FK_CMP;
    esi = ebp + 0xC; /* 0x100C385E: lea esi, [ebp + 0xc] */
    edi = esp; /* 0x100C3861: mov edi, esp */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x100C3863: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x100C3864: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x100C3865: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x100C3866: movsd dword ptr es:[edi], dword ptr [esi] */
    RECOMP_CALL(sub_100C6B29); /* 0x100C3867: call 0x100c6b29 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, ecx); /* 0x100C386C: push ecx */
    PUSH32(esp, ecx); /* 0x100C386D: push ecx */
    { double _v = fp_pop(); *(double*)ADDR(esp + 0x10) = _v; } /* 0x100C386E: fstp qword ptr [esp + 0x10] */
    edi = esp; /* 0x100C3872: mov edi, esp */
    esi = ebp + 0xC; /* 0x100C3874: lea esi, [ebp + 0xc] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x100C3877: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x100C3878: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x100C3879: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x100C387A: movsd dword ptr es:[edi], dword ptr [esi] */
    RECOMP_CALL(sub_100C5E60); /* 0x100C387B: call 0x100c5e60 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 8; /* 0x100C3880: add esp, 8 */
    _flag_k = FK_ADD;
    eax = ebp + (-0x10); /* 0x100C3883: lea eax, [ebp - 0x10] */
    _st[0] = -_st[0]; /* 0x100C3886: fchs  */
    { double _v = fp_pop(); *(double*)ADDR(esp) = _v; } /* 0x100C3888: fstp qword ptr [esp] */
    PUSH32(esp, eax); /* 0x100C388B: push eax */
    RECOMP_CALL(sub_100AACD2); /* 0x100C388C: call 0x100aacd2 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x100C3891: add esp, 4 */
    _flag_k = FK_ADD;
    esi = eax; /* 0x100C3894: mov esi, eax */
    edi = esp; /* 0x100C3896: mov edi, esp */
    eax = ebp + (-0x20); /* 0x100C3898: lea eax, [ebp - 0x20] */
    PUSH32(esp, eax); /* 0x100C389B: push eax */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x100C389C: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x100C389D: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x100C389E: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x100C389F: movsd dword ptr es:[edi], dword ptr [esi] */
    RECOMP_CALL(sub_100C3954); /* 0x100C38A0: call 0x100c3954 */
    RECOMP_FLAGS_IN();
    esi = eax; /* 0x100C38A5: mov esi, eax */
    edi = ebp + 0xC; /* 0x100C38A7: lea edi, [ebp + 0xc] */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x100C38AA: add esp, 4 */
    _flag_k = FK_ADD;
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x100C38AD: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x100C38AE: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x100C38AF: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x100C38B0: movsd dword ptr es:[edi], dword ptr [esi] */
    esi = eax; /* 0x100C38B1: mov esi, eax */
    edi = esp; /* 0x100C38B3: mov edi, esp */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x100C38B5: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x100C38B6: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x100C38B7: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x100C38B8: movsd dword ptr es:[edi], dword ptr [esi] */
    RECOMP_CALL(sub_100C6B29); /* 0x100C38B9: call 0x100c6b29 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, ecx); /* 0x100C38BE: push ecx */
    PUSH32(esp, ecx); /* 0x100C38BF: push ecx */
    edi = esp; /* 0x100C38C0: mov edi, esp */
    esi = ebp + 0xC; /* 0x100C38C2: lea esi, [ebp + 0xc] */
    _st[0] = -_st[0]; /* 0x100C38C5: fchs  */
    { double _v = fp_pop(); *(double*)ADDR(esp + 0x10) = _v; } /* 0x100C38C7: fstp qword ptr [esp + 0x10] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x100C38CB: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x100C38CC: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x100C38CD: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x100C38CE: movsd dword ptr es:[edi], dword ptr [esi] */
    RECOMP_CALL(sub_100C5E60); /* 0x100C38CF: call 0x100c5e60 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x100C38D4: pop ecx */
    ecx = POP32_VAL(esp); /* 0x100C38D5: pop ecx */
    eax = ebp + (-0x20); /* 0x100C38D6: lea eax, [ebp - 0x20] */
    { double _v = fp_pop(); *(double*)ADDR(esp) = _v; } /* 0x100C38D9: fstp qword ptr [esp] */
    PUSH32(esp, eax); /* 0x100C38DC: push eax */
    RECOMP_CALL(sub_100AACD2); /* 0x100C38DD: call 0x100aacd2 */
    RECOMP_FLAGS_IN();
    esi = eax; /* 0x100C38E2: mov esi, eax */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x14u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x14u; /* 0x100C38E4: add esp, 0x14 */
    _flag_k = FK_ADD;
    eax = MEM32(ebp + 0x8); /* 0x100C38E7: mov eax, dword ptr [ebp + 8] */
    edi = eax; /* 0x100C38EA: mov edi, eax */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x100C38EC: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x100C38ED: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x100C38EE: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x100C38EF: movsd dword ptr es:[edi], dword ptr [esi] */
    edi = POP32_VAL(esp); /* 0x100C38F0: pop edi */
    esi = POP32_VAL(esp); /* 0x100C38F1: pop esi */
    esp = ebp; /* 0x100C38F2: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x100C38F4: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x100C38F5: ret  */
    RECOMP_REGS_OUT();
}

void sub_100C38F6(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x100C38F6u);

L_100C38F6:
    PUSH32(esp, ebp); /* 0x100C38F6: push ebp */
    ebp = esp; /* 0x100C38F7: mov ebp, esp */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x100C38F9: push dword ptr [ebp + 0xc] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x100C38FC: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_100C6B58); /* 0x100C38FF: call 0x100c6b58 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x100C3904: pop ecx */
    { float _v = (float)fp_pop(); *(float*)ADDR(esp) = _v; } /* 0x100C3905: fstp dword ptr [esp] */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x100C3908: push dword ptr [ebp + 0xc] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x100C390B: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_100C5E33); /* 0x100C390E: call 0x100c5e33 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x100C3913: add esp, 4 */
    _flag_k = FK_ADD;
    _st[0] = -_st[0]; /* 0x100C3916: fchs  */
    { float _v = (float)fp_pop(); *(float*)ADDR(esp) = _v; } /* 0x100C3918: fstp dword ptr [esp] */
    RECOMP_CALL(sub_100AADAF); /* 0x100C391B: call 0x100aadaf */
    RECOMP_FLAGS_IN();
    PUSH32(esp, edx); /* 0x100C3920: push edx */
    PUSH32(esp, eax); /* 0x100C3921: push eax */
    RECOMP_CALL(sub_100C3C5B); /* 0x100C3922: call 0x100c3c5b */
    RECOMP_FLAGS_IN();
    PUSH32(esp, edx); /* 0x100C3927: push edx */
    PUSH32(esp, eax); /* 0x100C3928: push eax */
    MEM32(ebp + 0x8) = eax; /* 0x100C3929: mov dword ptr [ebp + 8], eax */
    MEM32(ebp + 0xC) = edx; /* 0x100C392C: mov dword ptr [ebp + 0xc], edx */
    RECOMP_CALL(sub_100C6B58); /* 0x100C392F: call 0x100c6b58 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x14u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x14u; /* 0x100C3934: add esp, 0x14 */
    _flag_k = FK_ADD;
    _st[0] = -_st[0]; /* 0x100C3937: fchs  */
    { float _v = (float)fp_pop(); *(float*)ADDR(esp) = _v; } /* 0x100C3939: fstp dword ptr [esp] */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x100C393C: push dword ptr [ebp + 0xc] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x100C393F: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_100C5E33); /* 0x100C3942: call 0x100c5e33 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x100C3947: pop ecx */
    { float _v = (float)fp_pop(); *(float*)ADDR(esp) = _v; } /* 0x100C3948: fstp dword ptr [esp] */
    RECOMP_CALL(sub_100AADAF); /* 0x100C394B: call 0x100aadaf */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x100C3950: pop ecx */
    ecx = POP32_VAL(esp); /* 0x100C3951: pop ecx */
    ebp = POP32_VAL(esp); /* 0x100C3952: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x100C3953: ret  */
    RECOMP_REGS_OUT();
}

void sub_100C3954(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x100C3954u);

L_100C3954:
    PUSH32(esp, ebp); /* 0x100C3954: push ebp */
    ebp = esp; /* 0x100C3955: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x58u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x58u; /* 0x100C3957: sub esp, 0x58 */
    _flag_k = FK_CMP;
    PUSH32(esp, esi); /* 0x100C395A: push esi */
    PUSH32(esp, edi); /* 0x100C395B: push edi */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x10u; /* 0x100C395C: sub esp, 0x10 */
    _flag_k = FK_CMP;
    esi = ebp + 0xC; /* 0x100C395F: lea esi, [ebp + 0xc] */
    edi = esp; /* 0x100C3962: mov edi, esp */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x100C3964: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x100C3965: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x100C3966: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x100C3967: movsd dword ptr es:[edi], dword ptr [esi] */
    RECOMP_CALL(sub_100C6B29); /* 0x100C3968: call 0x100c6b29 */
    RECOMP_FLAGS_IN();
    edi = esp; /* 0x100C396D: mov edi, esp */
    esi = ebp + 0xC; /* 0x100C396F: lea esi, [ebp + 0xc] */
    { double _v = fp_pop(); *(double*)ADDR(ebp + (-0x18)) = _v; } /* 0x100C3972: fstp qword ptr [ebp - 0x18] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x100C3975: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x100C3976: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x100C3977: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x100C3978: movsd dword ptr es:[edi], dword ptr [esi] */
    RECOMP_CALL(sub_100C5E60); /* 0x100C3979: call 0x100c5e60 */
    RECOMP_FLAGS_IN();
    eax = ebp + (-0x18); /* 0x100C397E: lea eax, [ebp - 0x18] */
    PUSH32(esp, eax); /* 0x100C3981: push eax */
    { double _v = fp_pop(); *(double*)ADDR(ebp + (-0x8)) = _v; } /* 0x100C3982: fstp qword ptr [ebp - 8] */
    RECOMP_CALL(sub_100BFE08); /* 0x100C3985: call 0x100bfe08 */
    RECOMP_FLAGS_IN();
    esi = (uint32_t)LO16(eax); /* 0x100C398A: movzx esi, ax */
    eax = ebp + (-0x8); /* 0x100C398D: lea eax, [ebp - 8] */
    PUSH32(esp, eax); /* 0x100C3990: push eax */
    RECOMP_CALL(sub_100BFE08); /* 0x100C3991: call 0x100bfe08 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x18u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x18u; /* 0x100C3996: add esp, 0x18 */
    _flag_k = FK_ADD;
    eax = (uint32_t)LO16(eax); /* 0x100C3999: movzx eax, ax */
    PUSH32(esp, 2); /* 0x100C399C: push 2 */
    ecx = POP32_VAL(esp); /* 0x100C399E: pop ecx */
    /* cmp LO16(esi), LO16(ecx) */ /* 0x100C399F: cmp si, cx */
    _flag_a = (uint32_t)(LO16(esi)) << 16; _flag_b = (uint32_t)(LO16(ecx)) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    if (CMP_NE(_flag_a, _flag_b)) goto L_100C39CF; /* 0x100C39A2: jne 0x100c39cf */
L_100C39A4:
    /* cmp LO16(eax), LO16(ecx) */ /* 0x100C39A4: cmp ax, cx */
    _flag_a = (uint32_t)(LO16(eax)) << 16; _flag_b = (uint32_t)(LO16(ecx)) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_100C39C4; /* 0x100C39A7: je 0x100c39c4 */
L_100C39A9:
    /* test LO16(eax), LO16(eax) */ /* 0x100C39A9: test ax, ax */
    _flag_a = (uint32_t)(LO16(eax)) << 16; _flag_b = (uint32_t)(LO16(eax)) << 16;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 16);
    if (TEST_Z(_flag_a, _flag_b)) goto L_100C39C4; /* 0x100C39AC: je 0x100c39c4 */
L_100C39AE:
    /* cmp LO16(eax), 1 */ /* 0x100C39AE: cmp ax, 1 */
    _flag_a = (uint32_t)(LO16(eax)) << 16; _flag_b = (uint32_t)(1) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    if (CMP_NE(_flag_a, _flag_b)) goto L_100C39BF; /* 0x100C39B2: jne 0x100c39bf */
L_100C39B4:
    fp_push(*(double*)ADDR(ebp + (-0x8))); /* 0x100C39B4: fld qword ptr [ebp - 8] */
    fp_push(*(double*)ADDR(ebp + (-0x18))); /* 0x100C39B7: fld qword ptr [ebp - 0x18] */
    goto L_100C3C34; /* 0x100C39BA: jmp 0x100c3c34 */
L_100C39BF:
    fp_push(*(double*)ADDR(ebp + (-0x18))); /* 0x100C39BF: fld qword ptr [ebp - 0x18] */
    goto L_100C39DD; /* 0x100C39C2: jmp 0x100c39dd */
L_100C39C4:
    fp_push(*(double*)ADDR(ebp + (-0x18))); /* 0x100C39C4: fld qword ptr [ebp - 0x18] */
    fp_push(*(double*)ADDR(ebp + (-0x8))); /* 0x100C39C7: fld qword ptr [ebp - 8] */
    goto L_100C3C34; /* 0x100C39CA: jmp 0x100c3c34 */
L_100C39CF:
    /* cmp LO16(eax), LO16(ecx) */ /* 0x100C39CF: cmp ax, cx */
    _flag_a = (uint32_t)(LO16(eax)) << 16; _flag_b = (uint32_t)(LO16(ecx)) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    if (CMP_NE(_flag_a, _flag_b)) goto L_100C39E4; /* 0x100C39D2: jne 0x100c39e4 */
L_100C39D4:
    /* cmp LO16(esi), 1 */ /* 0x100C39D4: cmp si, 1 */
    _flag_a = (uint32_t)(LO16(esi)) << 16; _flag_b = (uint32_t)(1) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    RECOMP_BACKEDGE();
    if (CMP_EQ(_flag_a, _flag_b)) goto L_100C39C4; /* 0x100C39D8: je 0x100c39c4 */
L_100C39DA:
    fp_push(*(double*)ADDR(ebp + (-0x8))); /* 0x100C39DA: fld qword ptr [ebp - 8] */
L_100C39DD:
    fp_push(_st[0]); /* 0x100C39DD: fld st(0) */
    goto L_100C3C34; /* 0x100C39DF: jmp 0x100c3c34 */
L_100C39E4:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x100C39E4: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx + 1; /* 0x100C39E6: inc ecx */
    _flag_k = FK_INC;
    /* cmp LO16(esi), LO16(ecx) */ /* 0x100C39E7: cmp si, cx */
    _flag_a = (uint32_t)(LO16(esi)) << 16; _flag_b = (uint32_t)(LO16(ecx)) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    if (CMP_NE(_flag_a, _flag_b)) goto L_100C3A38; /* 0x100C39EA: jne 0x100c3a38 */
L_100C39EC:
    fp_push(*(double*)ADDR(ebp + (-0x18))); /* 0x100C39EC: fld qword ptr [ebp - 0x18] */
    /* cmp LO16(eax), LO16(ecx) */ /* 0x100C39EF: cmp ax, cx */
    _flag_a = (uint32_t)(LO16(eax)) << 16; _flag_b = (uint32_t)(LO16(ecx)) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    if (CMP_NE(_flag_a, _flag_b)) goto L_100C3A19; /* 0x100C39F2: jne 0x100c3a19 */
L_100C39F4:
    { double _v = fp_pop(); *(double*)ADDR(ebp + (-0x10)) = _v; } /* 0x100C39F4: fstp qword ptr [ebp - 0x10] */
    fp_push(0.0); /* 0x100C39F7: fldz  */
    _fpu_cmp = FPU_CMP(_st[0], *(double*)ADDR(ebp + (-0x8))); /* 0x100C39F9: fcomp qword ptr [ebp - 8] */
    fp_pop();
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x100C39FC: fnstsw ax */
    /* test HI8(eax), 0x41u */ /* 0x100C39FE: test ah, 0x41 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(0x41u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_100C3A0E; /* 0x100C3A01: jne 0x100c3a0e */
L_100C3A03:
    fp_push(*(double*)ADDR(0x10063C58)); /* 0x100C3A03: fld qword ptr [0x10063c58] */
    goto L_100C3C2F; /* 0x100C3A09: jmp 0x100c3c2f */
L_100C3A0E:
    fp_push(*(double*)ADDR(0x10063BE0)); /* 0x100C3A0E: fld qword ptr [0x10063be0] */
    goto L_100C3C2F; /* 0x100C3A14: jmp 0x100c3c2f */
L_100C3A19:
    eax = (uint32_t)MEM16(ebp + (-0x2)); /* 0x100C3A19: movzx eax, word ptr [ebp - 2] */
    /* test eax, 0x8000u */ /* 0x100C3A1D: test eax, 0x8000 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x8000u);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_100C3A31; /* 0x100C3A22: je 0x100c3a31 */
L_100C3A24:
    fp_push(*(double*)ADDR(0x10065C08)); /* 0x100C3A24: fld qword ptr [0x10065c08] */
    _st[0] = -_st[0]; /* 0x100C3A2A: fchs  */
    goto L_100C3C34; /* 0x100C3A2C: jmp 0x100c3c34 */
L_100C3A31:
    fp_push(0.0); /* 0x100C3A31: fldz  */
    goto L_100C3C34; /* 0x100C3A33: jmp 0x100c3c34 */
L_100C3A38:
    /* cmp LO16(eax), LO16(ecx) */ /* 0x100C3A38: cmp ax, cx */
    _flag_a = (uint32_t)(LO16(eax)) << 16; _flag_b = (uint32_t)(LO16(ecx)) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    if (CMP_NE(_flag_a, _flag_b)) goto L_100C3A69; /* 0x100C3A3B: jne 0x100c3a69 */
L_100C3A3D:
    fp_push(*(double*)ADDR(ebp + (-0x8))); /* 0x100C3A3D: fld qword ptr [ebp - 8] */
    { double _v = fp_pop(); *(double*)ADDR(ebp + (-0x10)) = _v; } /* 0x100C3A40: fstp qword ptr [ebp - 0x10] */
    fp_push(0.0); /* 0x100C3A43: fldz  */
    fp_push(*(double*)ADDR(ebp + (-0x10))); /* 0x100C3A45: fld qword ptr [ebp - 0x10] */
    _fpu_cmp = FPU_CMP(_st[0], _st[1]); /* 0x100C3A48: fcom st(1) */
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x100C3A4A: fnstsw ax */
    { _st[1] = _st[0]; g_st_i64[1] = g_st_i64[0]; fp_pop(); } /* 0x100C3A4C: fstp st(1) */
    /* test HI8(eax), 5 */ /* 0x100C3A4E: test ah, 5 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(5) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (RECOMP_PF((_flag_a & _flag_b), 24)) goto L_100C3A5E; /* 0x100C3A51: jp 0x100c3a5e */
L_100C3A53:
    fp_push(*(double*)ADDR(0x10063C48)); /* 0x100C3A53: fld qword ptr [0x10063c48] */
    goto L_100C3C34; /* 0x100C3A59: jmp 0x100c3c34 */
L_100C3A5E:
    fp_push(*(double*)ADDR(0x10063C20)); /* 0x100C3A5E: fld qword ptr [0x10063c20] */
    goto L_100C3C34; /* 0x100C3A64: jmp 0x100c3c34 */
L_100C3A69:
    fp_push(*(double*)ADDR(ebp + (-0x18))); /* 0x100C3A69: fld qword ptr [ebp - 0x18] */
    eax = ebp + (-0x48); /* 0x100C3A6C: lea eax, [ebp - 0x48] */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x10u; /* 0x100C3A6F: sub esp, 0x10 */
    _flag_k = FK_CMP;
    { double _v = fp_pop(); *(double*)ADDR(esp + 0x8) = _v; } /* 0x100C3A72: fstp qword ptr [esp + 8] */
    fp_push(1.0); /* 0x100C3A76: fld1  */
    _st[0] -= *(double*)ADDR(ebp + (-0x8)); /* 0x100C3A78: fsub qword ptr [ebp - 8] */
    { double _v = fp_pop(); *(double*)ADDR(esp) = _v; } /* 0x100C3A7B: fstp qword ptr [esp] */
    PUSH32(esp, eax); /* 0x100C3A7E: push eax */
    RECOMP_CALL(sub_100AACD2); /* 0x100C3A7F: call 0x100aacd2 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x100C3A84: add esp, 4 */
    _flag_k = FK_ADD;
    esi = eax; /* 0x100C3A87: mov esi, eax */
    edi = esp; /* 0x100C3A89: mov edi, esp */
    eax = ebp + (-0x38); /* 0x100C3A8B: lea eax, [ebp - 0x38] */
    PUSH32(esp, eax); /* 0x100C3A8E: push eax */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x100C3A8F: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x100C3A90: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x100C3A91: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x100C3A92: movsd dword ptr es:[edi], dword ptr [esi] */
    RECOMP_CALL(sub_100C76B8); /* 0x100C3A93: call 0x100c76b8 */
    RECOMP_FLAGS_IN();
    fp_push(*(double*)ADDR(ebp + (-0x18))); /* 0x100C3A98: fld qword ptr [ebp - 0x18] */
    edi = ebp + (-0x58); /* 0x100C3A9B: lea edi, [ebp - 0x58] */
    esi = eax; /* 0x100C3A9E: mov esi, eax */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x100C3AA0: add esp, 4 */
    _flag_k = FK_ADD;
    _st[0] = -_st[0]; /* 0x100C3AA3: fchs  */
    eax = ebp + (-0x38); /* 0x100C3AA5: lea eax, [ebp - 0x38] */
    { double _v = fp_pop(); *(double*)ADDR(esp + 0x8) = _v; } /* 0x100C3AA8: fstp qword ptr [esp + 8] */
    fp_push(*(double*)ADDR(ebp + (-0x8))); /* 0x100C3AAC: fld qword ptr [ebp - 8] */
    fp_push(1.0); /* 0x100C3AAF: fld1  */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x100C3AB1: movsd dword ptr es:[edi], dword ptr [esi] */
    { double _v = fp_pop(); _st[0] += _v; } /* 0x100C3AB2: faddp st(1) */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x100C3AB4: movsd dword ptr es:[edi], dword ptr [esi] */
    { double _v = fp_pop(); *(double*)ADDR(esp) = _v; } /* 0x100C3AB5: fstp qword ptr [esp] */
    PUSH32(esp, eax); /* 0x100C3AB8: push eax */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x100C3AB9: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x100C3ABA: movsd dword ptr es:[edi], dword ptr [esi] */
    RECOMP_CALL(sub_100AACD2); /* 0x100C3ABB: call 0x100aacd2 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x100C3AC0: add esp, 4 */
    _flag_k = FK_ADD;
    esi = eax; /* 0x100C3AC3: mov esi, eax */
    edi = esp; /* 0x100C3AC5: mov edi, esp */
    eax = ebp + (-0x28); /* 0x100C3AC7: lea eax, [ebp - 0x28] */
    PUSH32(esp, eax); /* 0x100C3ACA: push eax */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x100C3ACB: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x100C3ACC: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x100C3ACD: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x100C3ACE: movsd dword ptr es:[edi], dword ptr [esi] */
    RECOMP_CALL(sub_100C76B8); /* 0x100C3ACF: call 0x100c76b8 */
    RECOMP_FLAGS_IN();
    fp_push(*(double*)ADDR(ebp + (-0x18))); /* 0x100C3AD4: fld qword ptr [ebp - 0x18] */
    edi = ebp + (-0x48); /* 0x100C3AD7: lea edi, [ebp - 0x48] */
    esi = eax; /* 0x100C3ADA: mov esi, eax */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x14u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x14u; /* 0x100C3ADC: add esp, 0x14 */
    _flag_k = FK_ADD;
    *(double*)ADDR(ebp + (-0x10)) = _st[0]; /* 0x100C3ADF: fst qword ptr [ebp - 0x10] */
    fp_push(0.0); /* 0x100C3AE2: fldz  */
    _fpu_cmp = FPU_CMP(_st[0], _st[1]); /* 0x100C3AE4: fucompp  */
    fp_pop(); fp_pop();
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x100C3AE6: movsd dword ptr es:[edi], dword ptr [esi] */
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x100C3AE7: fnstsw ax */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x100C3AE9: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x100C3AEA: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x100C3AEB: movsd dword ptr es:[edi], dword ptr [esi] */
    /* test HI8(eax), 0x44u */ /* 0x100C3AEC: test ah, 0x44 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(0x44u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if ((!RECOMP_PF((_flag_a & _flag_b), 24))) goto L_100C3BEC; /* 0x100C3AEF: jnp 0x100c3bec */
L_100C3AF5:
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x10u; /* 0x100C3AF5: sub esp, 0x10 */
    _flag_k = FK_CMP;
    esi = ebp + (-0x58); /* 0x100C3AF8: lea esi, [ebp - 0x58] */
    edi = esp; /* 0x100C3AFB: mov edi, esp */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x100C3AFD: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x100C3AFE: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x100C3AFF: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x100C3B00: movsd dword ptr es:[edi], dword ptr [esi] */
    RECOMP_CALL(sub_100C6B29); /* 0x100C3B01: call 0x100c6b29 */
    RECOMP_FLAGS_IN();
    edi = esp; /* 0x100C3B06: mov edi, esp */
    esi = ebp + (-0x58); /* 0x100C3B08: lea esi, [ebp - 0x58] */
    { double _v = fp_pop(); *(double*)ADDR(ebp + (-0x20)) = _v; } /* 0x100C3B0B: fstp qword ptr [ebp - 0x20] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x100C3B0E: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x100C3B0F: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x100C3B10: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x100C3B11: movsd dword ptr es:[edi], dword ptr [esi] */
    RECOMP_CALL(sub_100C5E60); /* 0x100C3B12: call 0x100c5e60 */
    RECOMP_FLAGS_IN();
    edi = esp; /* 0x100C3B17: mov edi, esp */
    esi = ebp + (-0x48); /* 0x100C3B19: lea esi, [ebp - 0x48] */
    { double _v = fp_pop(); *(double*)ADDR(ebp + (-0x30)) = _v; } /* 0x100C3B1C: fstp qword ptr [ebp - 0x30] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x100C3B1F: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x100C3B20: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x100C3B21: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x100C3B22: movsd dword ptr es:[edi], dword ptr [esi] */
    RECOMP_CALL(sub_100C6B29); /* 0x100C3B23: call 0x100c6b29 */
    RECOMP_FLAGS_IN();
    edi = esp; /* 0x100C3B28: mov edi, esp */
    esi = ebp + (-0x48); /* 0x100C3B2A: lea esi, [ebp - 0x48] */
    { double _v = fp_pop(); *(double*)ADDR(ebp + (-0x10)) = _v; } /* 0x100C3B2D: fstp qword ptr [ebp - 0x10] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x100C3B30: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x100C3B31: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x100C3B32: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x100C3B33: movsd dword ptr es:[edi], dword ptr [esi] */
    RECOMP_CALL(sub_100C5E60); /* 0x100C3B34: call 0x100c5e60 */
    RECOMP_FLAGS_IN();
    fp_push(*(double*)ADDR(0x10063C28)); /* 0x100C3B39: fld qword ptr [0x10063c28] */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x10u; /* 0x100C3B3F: add esp, 0x10 */
    _flag_k = FK_ADD;
    fp_push(*(double*)ADDR(ebp + (-0x20))); /* 0x100C3B42: fld qword ptr [ebp - 0x20] */
    _fpu_cmp = FPU_CMP(_st[0], _st[1]); /* 0x100C3B45: fcom st(1) */
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x100C3B47: fnstsw ax */
    /* test HI8(eax), 0x41u */ /* 0x100C3B49: test ah, 0x41 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(0x41u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_100C3B5B; /* 0x100C3B4C: jne 0x100c3b5b */
L_100C3B4E:
    { _st[1] = _st[0]; g_st_i64[1] = g_st_i64[0]; fp_pop(); } /* 0x100C3B4E: fstp st(1) */
    *(double*)ADDR(ebp + (-0x20)) = _st[0]; /* 0x100C3B50: fst qword ptr [ebp - 0x20] */
    _st[0] = *(double*)ADDR(ebp + (-0x10)) / _st[0]; /* 0x100C3B53: fdivr qword ptr [ebp - 0x10] */
    _st[0] *= *(double*)ADDR(ebp + (-0x30)); /* 0x100C3B56: fmul qword ptr [ebp - 0x30] */
    goto L_100C3B9D; /* 0x100C3B59: jmp 0x100c3b9d */
L_100C3B5B:
    fp_push(*(double*)ADDR(ebp + (-0x30))); /* 0x100C3B5B: fld qword ptr [ebp - 0x30] */
    _fpu_cmp = FPU_CMP(_st[0], _st[2]); /* 0x100C3B5E: fcom st(2) */
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x100C3B60: fnstsw ax */
    /* test HI8(eax), 0x41u */ /* 0x100C3B62: test ah, 0x41 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(0x41u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_100C3B70; /* 0x100C3B65: jne 0x100c3b70 */
L_100C3B67:
    { _st[2] = _st[0]; g_st_i64[2] = g_st_i64[0]; fp_pop(); } /* 0x100C3B67: fstp st(2) */
    fp_push(_st[1]); /* 0x100C3B69: fld st(1) */
    { double _v = fp_pop(); *(double*)ADDR(ebp + (-0x20)) = _v; } /* 0x100C3B6B: fstp qword ptr [ebp - 0x20] */
    goto L_100C3B84; /* 0x100C3B6E: jmp 0x100c3b84 */
L_100C3B70:
    fp_push(_st[0]); /* 0x100C3B70: fld st(0) */
    _st[0] = -_st[0]; /* 0x100C3B72: fchs  */
    *(double*)ADDR(ebp + (-0x20)) = _st[0]; /* 0x100C3B74: fst qword ptr [ebp - 0x20] */
    _fpu_cmp = FPU_CMP(_st[0], _st[3]); /* 0x100C3B77: fcom st(3) */
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x100C3B79: fnstsw ax */
    { _st[3] = _st[0]; g_st_i64[3] = g_st_i64[0]; fp_pop(); } /* 0x100C3B7B: fstp st(3) */
    /* test HI8(eax), 0x41u */ /* 0x100C3B7D: test ah, 0x41 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(0x41u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_100C3B8F; /* 0x100C3B80: jne 0x100c3b8f */
L_100C3B82:
    { _st[0] = _st[0]; g_st_i64[0] = g_st_i64[0]; fp_pop(); } /* 0x100C3B82: fstp st(0) */
L_100C3B84:
    fp_xch(2); /* 0x100C3B84: fxch st(2) */
    { double _v = fp_pop(); _st[0] = _st[0] == 0.0 ? _v : _v / _st[0]; } /* 0x100C3B86: fdivrp st(1) */
    { double _v = fp_pop(); _st[0] *= _v; } /* 0x100C3B88: fmulp st(1) */
    _st[0] = *(double*)ADDR(ebp + (-0x10)) - _st[0]; /* 0x100C3B8A: fsubr qword ptr [ebp - 0x10] */
    goto L_100C3B9F; /* 0x100C3B8D: jmp 0x100c3b9f */
L_100C3B8F:
    { _st[2] = _st[0]; g_st_i64[2] = g_st_i64[0]; fp_pop(); } /* 0x100C3B8F: fstp st(2) */
    fp_push(0.0); /* 0x100C3B91: fldz  */
    { double _v = fp_pop(); *(double*)ADDR(ebp + (-0x20)) = _v; } /* 0x100C3B93: fstp qword ptr [ebp - 0x20] */
    fp_push(*(double*)ADDR(ebp + (-0x10))); /* 0x100C3B96: fld qword ptr [ebp - 0x10] */
    { double _v = fp_pop(); _st[1] *= _v; } /* 0x100C3B99: fmulp st(2) */
    { double _v = fp_pop(); _st[1] *= _v; } /* 0x100C3B9B: fmulp st(2) */
L_100C3B9D:
    { double _v = fp_pop(); _st[0] = _v - _st[0]; } /* 0x100C3B9D: fsubrp st(1) */
L_100C3B9F:
    PUSH32(esp, ecx); /* 0x100C3B9F: push ecx */
    PUSH32(esp, ecx); /* 0x100C3BA0: push ecx */
    { double _v = fp_pop(); *(double*)ADDR(esp) = _v; } /* 0x100C3BA1: fstp qword ptr [esp] */
    RECOMP_CALL(sub_100C218F); /* 0x100C3BA4: call 0x100c218f */
    RECOMP_FLAGS_IN();
    *(double*)ADDR(ebp + (-0x10)) = _st[0]; /* 0x100C3BA9: fst qword ptr [ebp - 0x10] */
    fp_push(*(double*)ADDR(ebp + (-0x20))); /* 0x100C3BAC: fld qword ptr [ebp - 0x20] */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 8; /* 0x100C3BAF: add esp, 8 */
    _flag_k = FK_ADD;
    fp_push(0.0); /* 0x100C3BB2: fldz  */
    _fpu_cmp = FPU_CMP(_st[0], _st[1]); /* 0x100C3BB4: fucom st(1) */
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x100C3BB6: fnstsw ax */
    /* test HI8(eax), 0x44u */ /* 0x100C3BB8: test ah, 0x44 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(0x44u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if ((!RECOMP_PF((_flag_a & _flag_b), 24))) goto L_100C3BE6; /* 0x100C3BBB: jnp 0x100c3be6 */
L_100C3BBD:
    _fpu_cmp = FPU_CMP(_st[0], _st[2]); /* 0x100C3BBD: fcomp st(2) */
    fp_pop();
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x100C3BBF: fnstsw ax */
    PUSH32(esp, ecx); /* 0x100C3BC1: push ecx */
    PUSH32(esp, ecx); /* 0x100C3BC2: push ecx */
    { _st[1] = _st[0]; g_st_i64[1] = g_st_i64[0]; fp_pop(); } /* 0x100C3BC3: fstp st(1) */
    { double _v = fp_pop(); *(double*)ADDR(esp) = _v; } /* 0x100C3BC5: fstp qword ptr [esp] */
    /* test HI8(eax), 0x41u */ /* 0x100C3BC8: test ah, 0x41 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(0x41u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (RECOMP_PF((_flag_a & _flag_b), 24)) goto L_100C3BDC; /* 0x100C3BCB: jp 0x100c3bdc */
L_100C3BCD:
    RECOMP_CALL(sub_100367A8); /* 0x100C3BCD: call 0x100367a8 */
    RECOMP_FLAGS_IN();
    _st[0] += *(double*)ADDR(ebp + (-0x10)); /* 0x100C3BD2: fadd qword ptr [ebp - 0x10] */
L_100C3BD5:
    ecx = POP32_VAL(esp); /* 0x100C3BD5: pop ecx */
    { double _v = fp_pop(); *(double*)ADDR(ebp + (-0x10)) = _v; } /* 0x100C3BD6: fstp qword ptr [ebp - 0x10] */
    ecx = POP32_VAL(esp); /* 0x100C3BD9: pop ecx */
    goto L_100C3BEC; /* 0x100C3BDA: jmp 0x100c3bec */
L_100C3BDC:
    RECOMP_CALL(sub_100367A8); /* 0x100C3BDC: call 0x100367a8 */
    RECOMP_FLAGS_IN();
    _st[0] = *(double*)ADDR(ebp + (-0x10)) - _st[0]; /* 0x100C3BE1: fsubr qword ptr [ebp - 0x10] */
    RECOMP_BACKEDGE();
    goto L_100C3BD5; /* 0x100C3BE4: jmp 0x100c3bd5 */
L_100C3BE6:
    { _st[2] = _st[0]; g_st_i64[2] = g_st_i64[0]; fp_pop(); } /* 0x100C3BE6: fstp st(2) */
    { _st[0] = _st[0]; g_st_i64[0] = g_st_i64[0]; fp_pop(); } /* 0x100C3BE8: fstp st(0) */
    { _st[0] = _st[0]; g_st_i64[0] = g_st_i64[0]; fp_pop(); } /* 0x100C3BEA: fstp st(0) */
L_100C3BEC:
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x10u; /* 0x100C3BEC: sub esp, 0x10 */
    _flag_k = FK_CMP;
    esi = ebp + (-0x48); /* 0x100C3BEF: lea esi, [ebp - 0x48] */
    edi = esp; /* 0x100C3BF2: mov edi, esp */
    eax = ebp + (-0x58); /* 0x100C3BF4: lea eax, [ebp - 0x58] */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x10u; /* 0x100C3BF7: sub esp, 0x10 */
    _flag_k = FK_CMP;
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x100C3BFA: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x100C3BFB: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x100C3BFC: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x100C3BFD: movsd dword ptr es:[edi], dword ptr [esi] */
    edi = esp; /* 0x100C3BFE: mov edi, esp */
    esi = ebp + (-0x58); /* 0x100C3C00: lea esi, [ebp - 0x58] */
    PUSH32(esp, eax); /* 0x100C3C03: push eax */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x100C3C04: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x100C3C05: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x100C3C06: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x100C3C07: movsd dword ptr es:[edi], dword ptr [esi] */
    RECOMP_CALL(sub_100C6958); /* 0x100C3C08: call 0x100c6958 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x14u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x14u; /* 0x100C3C0D: add esp, 0x14 */
    _flag_k = FK_ADD;
    esi = eax; /* 0x100C3C10: mov esi, eax */
    edi = esp; /* 0x100C3C12: mov edi, esp */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x100C3C14: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x100C3C15: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x100C3C16: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x100C3C17: movsd dword ptr es:[edi], dword ptr [esi] */
    RECOMP_CALL(sub_100C6B29); /* 0x100C3C18: call 0x100c6b29 */
    RECOMP_FLAGS_IN();
    { double _v = fp_pop(); *(double*)ADDR(esp + 0x8) = _v; } /* 0x100C3C1D: fstp qword ptr [esp + 8] */
    fp_push(*(double*)ADDR(ebp + (-0x8))); /* 0x100C3C21: fld qword ptr [ebp - 8] */
    { double _v = fp_pop(); *(double*)ADDR(esp) = _v; } /* 0x100C3C24: fstp qword ptr [esp] */
    RECOMP_CALL(sub_10036582); /* 0x100C3C27: call 0x10036582 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x10u; /* 0x100C3C2C: add esp, 0x10 */
    _flag_k = FK_ADD;
L_100C3C2F:
    fp_push(*(double*)ADDR(ebp + (-0x10))); /* 0x100C3C2F: fld qword ptr [ebp - 0x10] */
    fp_xch(1); /* 0x100C3C32: fxch st(1) */
L_100C3C34:
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x10u; /* 0x100C3C34: sub esp, 0x10 */
    _flag_k = FK_CMP;
    eax = ebp + (-0x58); /* 0x100C3C37: lea eax, [ebp - 0x58] */
    { double _v = fp_pop(); *(double*)ADDR(esp + 0x8) = _v; } /* 0x100C3C3A: fstp qword ptr [esp + 8] */
    { double _v = fp_pop(); *(double*)ADDR(esp) = _v; } /* 0x100C3C3E: fstp qword ptr [esp] */
    PUSH32(esp, eax); /* 0x100C3C41: push eax */
    RECOMP_CALL(sub_100AACD2); /* 0x100C3C42: call 0x100aacd2 */
    RECOMP_FLAGS_IN();
    esi = eax; /* 0x100C3C47: mov esi, eax */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x14u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x14u; /* 0x100C3C49: add esp, 0x14 */
    _flag_k = FK_ADD;
    eax = MEM32(ebp + 0x8); /* 0x100C3C4C: mov eax, dword ptr [ebp + 8] */
    edi = eax; /* 0x100C3C4F: mov edi, eax */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x100C3C51: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x100C3C52: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x100C3C53: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x100C3C54: movsd dword ptr es:[edi], dword ptr [esi] */
    edi = POP32_VAL(esp); /* 0x100C3C55: pop edi */
    esi = POP32_VAL(esp); /* 0x100C3C56: pop esi */
    esp = ebp; /* 0x100C3C57: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x100C3C59: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x100C3C5A: ret  */
    RECOMP_REGS_OUT();
}

void sub_100C3C5B(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x100C3C5Bu);

L_100C3C5B:
    PUSH32(esp, ebp); /* 0x100C3C5B: push ebp */
    ebp = esp; /* 0x100C3C5C: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x24u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x24u; /* 0x100C3C5E: sub esp, 0x24 */
    _flag_k = FK_CMP;
    PUSH32(esp, esi); /* 0x100C3C61: push esi */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x100C3C62: push dword ptr [ebp + 0xc] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x100C3C65: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_100C6B58); /* 0x100C3C68: call 0x100c6b58 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x100C3C6D: push dword ptr [ebp + 0xc] */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x10)) = _v; } /* 0x100C3C70: fstp dword ptr [ebp - 0x10] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x100C3C73: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_100C5E33); /* 0x100C3C76: call 0x100c5e33 */
    RECOMP_FLAGS_IN();
    eax = ebp + (-0x10); /* 0x100C3C7B: lea eax, [ebp - 0x10] */
    PUSH32(esp, eax); /* 0x100C3C7E: push eax */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0xC)) = _v; } /* 0x100C3C7F: fstp dword ptr [ebp - 0xc] */
    RECOMP_CALL(sub_100BFF5C); /* 0x100C3C82: call 0x100bff5c */
    RECOMP_FLAGS_IN();
    esi = (uint32_t)LO16(eax); /* 0x100C3C87: movzx esi, ax */
    eax = ebp + (-0xC); /* 0x100C3C8A: lea eax, [ebp - 0xc] */
    PUSH32(esp, eax); /* 0x100C3C8D: push eax */
    RECOMP_CALL(sub_100BFF5C); /* 0x100C3C8E: call 0x100bff5c */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x18u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x18u; /* 0x100C3C93: add esp, 0x18 */
    _flag_k = FK_ADD;
    eax = (uint32_t)LO16(eax); /* 0x100C3C96: movzx eax, ax */
    PUSH32(esp, 2); /* 0x100C3C99: push 2 */
    ecx = POP32_VAL(esp); /* 0x100C3C9B: pop ecx */
    /* cmp LO16(esi), LO16(ecx) */ /* 0x100C3C9C: cmp si, cx */
    _flag_a = (uint32_t)(LO16(esi)) << 16; _flag_b = (uint32_t)(LO16(ecx)) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    if (CMP_NE(_flag_a, _flag_b)) goto L_100C3CD8; /* 0x100C3C9F: jne 0x100c3cd8 */
L_100C3CA1:
    /* cmp LO16(eax), LO16(ecx) */ /* 0x100C3CA1: cmp ax, cx */
    _flag_a = (uint32_t)(LO16(eax)) << 16; _flag_b = (uint32_t)(LO16(ecx)) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_100C3CCA; /* 0x100C3CA4: je 0x100c3cca */
L_100C3CA6:
    /* test LO16(eax), LO16(eax) */ /* 0x100C3CA6: test ax, ax */
    _flag_a = (uint32_t)(LO16(eax)) << 16; _flag_b = (uint32_t)(LO16(eax)) << 16;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 16);
    if (TEST_Z(_flag_a, _flag_b)) goto L_100C3CCA; /* 0x100C3CA9: je 0x100c3cca */
L_100C3CAB:
    /* cmp LO16(eax), 1 */ /* 0x100C3CAB: cmp ax, 1 */
    _flag_a = (uint32_t)(LO16(eax)) << 16; _flag_b = (uint32_t)(1) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    if (CMP_NE(_flag_a, _flag_b)) goto L_100C3CBF; /* 0x100C3CAF: jne 0x100c3cbf */
L_100C3CB1:
    fp_push(*(float*)&MEM32(ebp + (-0xC))); /* 0x100C3CB1: fld dword ptr [ebp - 0xc] */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x4)) = _v; } /* 0x100C3CB4: fstp dword ptr [ebp - 4] */
    fp_push(*(float*)&MEM32(ebp + (-0x10))); /* 0x100C3CB7: fld dword ptr [ebp - 0x10] */
    goto L_100C3EFF; /* 0x100C3CBA: jmp 0x100c3eff */
L_100C3CBF:
    fp_push(*(float*)&MEM32(ebp + (-0x10))); /* 0x100C3CBF: fld dword ptr [ebp - 0x10] */
L_100C3CC2:
    { float _v = (float)_st[0]; *(float*)ADDR(ebp + (-0x4)) = _v; } /* 0x100C3CC2: fst dword ptr [ebp - 4] */
    goto L_100C3EFF; /* 0x100C3CC5: jmp 0x100c3eff */
L_100C3CCA:
    fp_push(*(float*)&MEM32(ebp + (-0x10))); /* 0x100C3CCA: fld dword ptr [ebp - 0x10] */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x4)) = _v; } /* 0x100C3CCD: fstp dword ptr [ebp - 4] */
    fp_push(*(float*)&MEM32(ebp + (-0xC))); /* 0x100C3CD0: fld dword ptr [ebp - 0xc] */
    goto L_100C3EFF; /* 0x100C3CD3: jmp 0x100c3eff */
L_100C3CD8:
    /* cmp LO16(eax), LO16(ecx) */ /* 0x100C3CD8: cmp ax, cx */
    _flag_a = (uint32_t)(LO16(eax)) << 16; _flag_b = (uint32_t)(LO16(ecx)) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    if (CMP_NE(_flag_a, _flag_b)) goto L_100C3CE8; /* 0x100C3CDB: jne 0x100c3ce8 */
L_100C3CDD:
    /* cmp LO16(esi), 1 */ /* 0x100C3CDD: cmp si, 1 */
    _flag_a = (uint32_t)(LO16(esi)) << 16; _flag_b = (uint32_t)(1) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    RECOMP_BACKEDGE();
    if (CMP_EQ(_flag_a, _flag_b)) goto L_100C3CCA; /* 0x100C3CE1: je 0x100c3cca */
L_100C3CE3:
    fp_push(*(float*)&MEM32(ebp + (-0xC))); /* 0x100C3CE3: fld dword ptr [ebp - 0xc] */
    RECOMP_BACKEDGE();
    goto L_100C3CC2; /* 0x100C3CE6: jmp 0x100c3cc2 */
L_100C3CE8:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x100C3CE8: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx + 1; /* 0x100C3CEA: inc ecx */
    _flag_k = FK_INC;
    /* cmp LO16(esi), LO16(ecx) */ /* 0x100C3CEB: cmp si, cx */
    _flag_a = (uint32_t)(LO16(esi)) << 16; _flag_b = (uint32_t)(LO16(ecx)) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    if (CMP_NE(_flag_a, _flag_b)) goto L_100C3D3C; /* 0x100C3CEE: jne 0x100c3d3c */
L_100C3CF0:
    fp_push(*(float*)&MEM32(ebp + (-0x10))); /* 0x100C3CF0: fld dword ptr [ebp - 0x10] */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x4)) = _v; } /* 0x100C3CF3: fstp dword ptr [ebp - 4] */
    /* cmp LO16(eax), LO16(ecx) */ /* 0x100C3CF6: cmp ax, cx */
    _flag_a = (uint32_t)(LO16(eax)) << 16; _flag_b = (uint32_t)(LO16(ecx)) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    if (CMP_NE(_flag_a, _flag_b)) goto L_100C3D1D; /* 0x100C3CF9: jne 0x100c3d1d */
L_100C3CFB:
    fp_push(0.0); /* 0x100C3CFB: fldz  */
    _fpu_cmp = FPU_CMP(_st[0], (double)*(float*)ADDR(ebp + (-0xC))); /* 0x100C3CFD: fcomp dword ptr [ebp - 0xc] */
    fp_pop();
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x100C3D00: fnstsw ax */
    /* test HI8(eax), 0x41u */ /* 0x100C3D02: test ah, 0x41 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(0x41u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_100C3D12; /* 0x100C3D05: jne 0x100c3d12 */
L_100C3D07:
    fp_push(*(float*)&MEM32(0x100C3F20)); /* 0x100C3D07: fld dword ptr [0x100c3f20] */
    goto L_100C3EFF; /* 0x100C3D0D: jmp 0x100c3eff */
L_100C3D12:
    fp_push(*(float*)&MEM32(0x10063C30)); /* 0x100C3D12: fld dword ptr [0x10063c30] */
    goto L_100C3EFF; /* 0x100C3D18: jmp 0x100c3eff */
L_100C3D1D:
    eax = (uint32_t)MEM16(ebp + (-0xA)); /* 0x100C3D1D: movzx eax, word ptr [ebp - 0xa] */
    /* test eax, 0x8000u */ /* 0x100C3D21: test eax, 0x8000 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x8000u);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_100C3D35; /* 0x100C3D26: je 0x100c3d35 */
L_100C3D28:
    fp_push(*(float*)&MEM32(0x10065C18)); /* 0x100C3D28: fld dword ptr [0x10065c18] */
    _st[0] = -_st[0]; /* 0x100C3D2E: fchs  */
    goto L_100C3EFF; /* 0x100C3D30: jmp 0x100c3eff */
L_100C3D35:
    fp_push(0.0); /* 0x100C3D35: fldz  */
    goto L_100C3EFF; /* 0x100C3D37: jmp 0x100c3eff */
L_100C3D3C:
    /* cmp LO16(eax), LO16(ecx) */ /* 0x100C3D3C: cmp ax, cx */
    _flag_a = (uint32_t)(LO16(eax)) << 16; _flag_b = (uint32_t)(LO16(ecx)) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    if (CMP_NE(_flag_a, _flag_b)) goto L_100C3D68; /* 0x100C3D3F: jne 0x100c3d68 */
L_100C3D41:
    fp_push(*(float*)&MEM32(ebp + (-0xC))); /* 0x100C3D41: fld dword ptr [ebp - 0xc] */
    { float _v = (float)_st[0]; *(float*)ADDR(ebp + (-0x4)) = _v; } /* 0x100C3D44: fst dword ptr [ebp - 4] */
    fp_push(0.0); /* 0x100C3D47: fldz  */
    _fpu_cmp = FPU_CMP(_st[0], _st[1]); /* 0x100C3D49: fcompp  */
    fp_pop(); fp_pop();
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x100C3D4B: fnstsw ax */
    /* test HI8(eax), 0x41u */ /* 0x100C3D4D: test ah, 0x41 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(0x41u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_100C3D5D; /* 0x100C3D50: jne 0x100c3d5d */
L_100C3D52:
    fp_push(*(float*)&MEM32(0x10063C50)); /* 0x100C3D52: fld dword ptr [0x10063c50] */
    goto L_100C3EFF; /* 0x100C3D58: jmp 0x100c3eff */
L_100C3D5D:
    fp_push(*(float*)&MEM32(0x10063C34)); /* 0x100C3D5D: fld dword ptr [0x10063c34] */
    goto L_100C3EFF; /* 0x100C3D63: jmp 0x100c3eff */
L_100C3D68:
    fp_push(*(float*)&MEM32(ebp + (-0x10))); /* 0x100C3D68: fld dword ptr [ebp - 0x10] */
    PUSH32(esp, edi); /* 0x100C3D6B: push edi */
    PUSH32(esp, ecx); /* 0x100C3D6C: push ecx */
    PUSH32(esp, ecx); /* 0x100C3D6D: push ecx */
    { float _v = (float)fp_pop(); *(float*)ADDR(esp + 0x4) = _v; } /* 0x100C3D6E: fstp dword ptr [esp + 4] */
    fp_push(*(float*)&MEM32(ebp + (-0xC))); /* 0x100C3D72: fld dword ptr [ebp - 0xc] */
    fp_push(1.0); /* 0x100C3D75: fld1  */
    { double _v = fp_pop(); _st[0] = _v - _st[0]; } /* 0x100C3D77: fsubrp st(1) */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x20)) = _v; } /* 0x100C3D79: fstp dword ptr [ebp - 0x20] */
    fp_push(*(float*)&MEM32(ebp + (-0x20))); /* 0x100C3D7C: fld dword ptr [ebp - 0x20] */
    { float _v = (float)fp_pop(); *(float*)ADDR(esp) = _v; } /* 0x100C3D7F: fstp dword ptr [esp] */
    RECOMP_CALL(sub_100AADAF); /* 0x100C3D82: call 0x100aadaf */
    RECOMP_FLAGS_IN();
    PUSH32(esp, edx); /* 0x100C3D87: push edx */
    PUSH32(esp, eax); /* 0x100C3D88: push eax */
    RECOMP_CALL(sub_100C7A98); /* 0x100C3D89: call 0x100c7a98 */
    RECOMP_FLAGS_IN();
    fp_push(*(float*)&MEM32(ebp + (-0x10))); /* 0x100C3D8E: fld dword ptr [ebp - 0x10] */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 8; /* 0x100C3D91: add esp, 8 */
    _flag_k = FK_ADD;
    _st[0] = -_st[0]; /* 0x100C3D94: fchs  */
    esi = eax; /* 0x100C3D96: mov esi, eax */
    edi = edx; /* 0x100C3D98: mov edi, edx */
    { float _v = (float)fp_pop(); *(float*)ADDR(esp + 0x4) = _v; } /* 0x100C3D9A: fstp dword ptr [esp + 4] */
    fp_push(*(float*)&MEM32(ebp + (-0xC))); /* 0x100C3D9E: fld dword ptr [ebp - 0xc] */
    fp_push(1.0); /* 0x100C3DA1: fld1  */
    { double _v = fp_pop(); _st[0] += _v; } /* 0x100C3DA3: faddp st(1) */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x20)) = _v; } /* 0x100C3DA5: fstp dword ptr [ebp - 0x20] */
    fp_push(*(float*)&MEM32(ebp + (-0x20))); /* 0x100C3DA8: fld dword ptr [ebp - 0x20] */
    { float _v = (float)fp_pop(); *(float*)ADDR(esp) = _v; } /* 0x100C3DAB: fstp dword ptr [esp] */
    RECOMP_CALL(sub_100AADAF); /* 0x100C3DAE: call 0x100aadaf */
    RECOMP_FLAGS_IN();
    PUSH32(esp, edx); /* 0x100C3DB3: push edx */
    PUSH32(esp, eax); /* 0x100C3DB4: push eax */
    RECOMP_CALL(sub_100C7A98); /* 0x100C3DB5: call 0x100c7a98 */
    RECOMP_FLAGS_IN();
    fp_push(*(float*)&MEM32(ebp + (-0x10))); /* 0x100C3DBA: fld dword ptr [ebp - 0x10] */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x10u; /* 0x100C3DBD: add esp, 0x10 */
    _flag_k = FK_ADD;
    fp_push(0.0); /* 0x100C3DC0: fldz  */
    _fpu_cmp = FPU_CMP(_st[0], _st[1]); /* 0x100C3DC2: fucomp st(1) */
    fp_pop();
    MEM32(ebp + (-0x1C)) = eax; /* 0x100C3DC4: mov dword ptr [ebp - 0x1c], eax */
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x100C3DC7: fnstsw ax */
    MEM32(ebp + (-0x18)) = edx; /* 0x100C3DC9: mov dword ptr [ebp - 0x18], edx */
    /* test HI8(eax), 0x44u */ /* 0x100C3DCC: test ah, 0x44 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(0x44u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if ((!RECOMP_PF((_flag_a & _flag_b), 24))) goto L_100C3EBF; /* 0x100C3DCF: jnp 0x100c3ebf */
L_100C3DD5:
    PUSH32(esp, edi); /* 0x100C3DD5: push edi */
    { _st[0] = _st[0]; g_st_i64[0] = g_st_i64[0]; fp_pop(); } /* 0x100C3DD6: fstp st(0) */
    PUSH32(esp, esi); /* 0x100C3DD8: push esi */
    RECOMP_CALL(sub_100C6B58); /* 0x100C3DD9: call 0x100c6b58 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, edi); /* 0x100C3DDE: push edi */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x8)) = _v; } /* 0x100C3DDF: fstp dword ptr [ebp - 8] */
    PUSH32(esp, esi); /* 0x100C3DE2: push esi */
    RECOMP_CALL(sub_100C5E33); /* 0x100C3DE3: call 0x100c5e33 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, MEM32(ebp + (-0x18))); /* 0x100C3DE8: push dword ptr [ebp - 0x18] */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x20)) = _v; } /* 0x100C3DEB: fstp dword ptr [ebp - 0x20] */
    PUSH32(esp, MEM32(ebp + (-0x1C))); /* 0x100C3DEE: push dword ptr [ebp - 0x1c] */
    RECOMP_CALL(sub_100C6B58); /* 0x100C3DF1: call 0x100c6b58 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, MEM32(ebp + (-0x18))); /* 0x100C3DF6: push dword ptr [ebp - 0x18] */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x4)) = _v; } /* 0x100C3DF9: fstp dword ptr [ebp - 4] */
    PUSH32(esp, MEM32(ebp + (-0x1C))); /* 0x100C3DFC: push dword ptr [ebp - 0x1c] */
    RECOMP_CALL(sub_100C5E33); /* 0x100C3DFF: call 0x100c5e33 */
    RECOMP_FLAGS_IN();
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x14)) = _v; } /* 0x100C3E04: fstp dword ptr [ebp - 0x14] */
    fp_push(*(float*)&MEM32(ebp + (-0x8))); /* 0x100C3E07: fld dword ptr [ebp - 8] */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x20u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x20u; /* 0x100C3E0A: add esp, 0x20 */
    _flag_k = FK_ADD;
    fp_push(*(double*)ADDR(0x10063C40)); /* 0x100C3E0D: fld qword ptr [0x10063c40] */
    _fpu_cmp = FPU_CMP(_st[0], _st[1]); /* 0x100C3E13: fcom st(1) */
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x100C3E15: fnstsw ax */
    /* test HI8(eax), 5 */ /* 0x100C3E17: test ah, 5 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(5) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (RECOMP_PF((_flag_a & _flag_b), 24)) goto L_100C3E2C; /* 0x100C3E1A: jp 0x100c3e2c */
L_100C3E1C:
    { _st[0] = _st[0]; g_st_i64[0] = g_st_i64[0]; fp_pop(); } /* 0x100C3E1C: fstp st(0) */
    { float _v = (float)_st[0]; *(float*)ADDR(ebp + (-0x8)) = _v; } /* 0x100C3E1E: fst dword ptr [ebp - 8] */
    _st[0] = (double)*(float*)ADDR(ebp + (-0x4)) / _st[0]; /* 0x100C3E21: fdivr dword ptr [ebp - 4] */
    _st[0] *= (double)*(float*)ADDR(ebp + (-0x20)); /* 0x100C3E24: fmul dword ptr [ebp - 0x20] */
    _st[0] -= (double)*(float*)ADDR(ebp + (-0x14)); /* 0x100C3E27: fsub dword ptr [ebp - 0x14] */
    goto L_100C3E7F; /* 0x100C3E2A: jmp 0x100c3e7f */
L_100C3E2C:
    fp_push(*(float*)&MEM32(ebp + (-0x20))); /* 0x100C3E2C: fld dword ptr [ebp - 0x20] */
    _fpu_cmp = FPU_CMP(_st[0], _st[1]); /* 0x100C3E2F: fcom st(1) */
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x100C3E31: fnstsw ax */
    /* test HI8(eax), 0x41u */ /* 0x100C3E33: test ah, 0x41 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(0x41u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_100C3E49; /* 0x100C3E36: jne 0x100c3e49 */
L_100C3E38:
    { _st[1] = _st[0]; g_st_i64[1] = g_st_i64[0]; fp_pop(); } /* 0x100C3E38: fstp st(1) */
    { float _v = (float)_st[0]; *(float*)ADDR(ebp + (-0x8)) = _v; } /* 0x100C3E3A: fst dword ptr [ebp - 8] */
    fp_push(*(float*)&MEM32(ebp + (-0x4))); /* 0x100C3E3D: fld dword ptr [ebp - 4] */
    fp_push(*(float*)&MEM32(ebp + (-0x14))); /* 0x100C3E40: fld dword ptr [ebp - 0x14] */
    { double _v = fp_pop(); _st[1] = _st[1] == 0.0 ? _v : _v / _st[1]; } /* 0x100C3E43: fdivrp st(2) */
    fp_xch(1); /* 0x100C3E45: fxch st(1) */
    goto L_100C3E7B; /* 0x100C3E47: jmp 0x100c3e7b */
L_100C3E49:
    fp_push(_st[0]); /* 0x100C3E49: fld st(0) */
    _st[0] = -_st[0]; /* 0x100C3E4B: fchs  */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x20)) = _v; } /* 0x100C3E4D: fstp dword ptr [ebp - 0x20] */
    fp_push(*(float*)&MEM32(ebp + (-0x20))); /* 0x100C3E50: fld dword ptr [ebp - 0x20] */
    _fpu_cmp = FPU_CMP(_st[0], _st[2]); /* 0x100C3E53: fcom st(2) */
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x100C3E55: fnstsw ax */
    { _st[2] = _st[0]; g_st_i64[2] = g_st_i64[0]; fp_pop(); } /* 0x100C3E57: fstp st(2) */
    /* test HI8(eax), 0x41u */ /* 0x100C3E59: test ah, 0x41 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(0x41u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_100C3E6E; /* 0x100C3E5C: jne 0x100c3e6e */
L_100C3E5E:
    { _st[0] = _st[0]; g_st_i64[0] = g_st_i64[0]; fp_pop(); } /* 0x100C3E5E: fstp st(0) */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x8)) = _v; } /* 0x100C3E60: fstp dword ptr [ebp - 8] */
    fp_push(*(float*)&MEM32(ebp + (-0x4))); /* 0x100C3E63: fld dword ptr [ebp - 4] */
    fp_push(*(float*)&MEM32(ebp + (-0x14))); /* 0x100C3E66: fld dword ptr [ebp - 0x14] */
    _st[0] /= (double)*(float*)ADDR(ebp + (-0x8)); /* 0x100C3E69: fdiv dword ptr [ebp - 8] */
    goto L_100C3E7B; /* 0x100C3E6C: jmp 0x100c3e7b */
L_100C3E6E:
    { _st[1] = _st[0]; g_st_i64[1] = g_st_i64[0]; fp_pop(); } /* 0x100C3E6E: fstp st(1) */
    fp_push(0.0); /* 0x100C3E70: fldz  */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x8)) = _v; } /* 0x100C3E72: fstp dword ptr [ebp - 8] */
    _st[0] *= (double)*(float*)ADDR(ebp + (-0x4)); /* 0x100C3E75: fmul dword ptr [ebp - 4] */
    fp_push(*(float*)&MEM32(ebp + (-0x14))); /* 0x100C3E78: fld dword ptr [ebp - 0x14] */
L_100C3E7B:
    { double _v = fp_pop(); _st[1] *= _v; } /* 0x100C3E7B: fmulp st(2) */
    { double _v = fp_pop(); _st[0] = _v - _st[0]; } /* 0x100C3E7D: fsubrp st(1) */
L_100C3E7F:
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x14)) = _v; } /* 0x100C3E7F: fstp dword ptr [ebp - 0x14] */
    fp_push(*(float*)&MEM32(ebp + (-0x14))); /* 0x100C3E82: fld dword ptr [ebp - 0x14] */
    PUSH32(esp, ecx); /* 0x100C3E85: push ecx */
    { float _v = (float)fp_pop(); *(float*)ADDR(esp) = _v; } /* 0x100C3E86: fstp dword ptr [esp] */
    RECOMP_CALL(sub_100C2219); /* 0x100C3E89: call 0x100c2219 */
    RECOMP_FLAGS_IN();
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x4)) = _v; } /* 0x100C3E8E: fstp dword ptr [ebp - 4] */
    fp_push(*(float*)&MEM32(ebp + (-0x8))); /* 0x100C3E91: fld dword ptr [ebp - 8] */
    fp_push(0.0); /* 0x100C3E94: fldz  */
    _fpu_cmp = FPU_CMP(_st[0], _st[1]); /* 0x100C3E96: fucomp st(1) */
    fp_pop();
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x100C3E98: fnstsw ax */
    ecx = POP32_VAL(esp); /* 0x100C3E9A: pop ecx */
    /* test HI8(eax), 0x44u */ /* 0x100C3E9B: test ah, 0x44 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(0x44u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if ((!RECOMP_PF((_flag_a & _flag_b), 24))) goto L_100C3ED4; /* 0x100C3E9E: jnp 0x100c3ed4 */
L_100C3EA0:
    fp_push(*(float*)&MEM32(ebp + (-0x4))); /* 0x100C3EA0: fld dword ptr [ebp - 4] */
    _fpu_cmp = FPU_CMP(_st[0], *(double*)ADDR(0x10067CD0)); /* 0x100C3EA3: fcom qword ptr [0x10067cd0] */
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x100C3EA9: fnstsw ax */
    PUSH32(esp, ecx); /* 0x100C3EAB: push ecx */
    /* test HI8(eax), 1 */ /* 0x100C3EAC: test ah, 1 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(1) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_100C3EC4; /* 0x100C3EAF: jne 0x100c3ec4 */
L_100C3EB1:
    { _st[0] = _st[0]; g_st_i64[0] = g_st_i64[0]; fp_pop(); } /* 0x100C3EB1: fstp st(0) */
    { float _v = (float)fp_pop(); *(float*)ADDR(esp) = _v; } /* 0x100C3EB3: fstp dword ptr [esp] */
    RECOMP_CALL(sub_100C20AF); /* 0x100C3EB6: call 0x100c20af */
    RECOMP_FLAGS_IN();
    _st[0] += (double)*(float*)ADDR(ebp + (-0x4)); /* 0x100C3EBB: fadd dword ptr [ebp - 4] */
L_100C3EBE:
    ecx = POP32_VAL(esp); /* 0x100C3EBE: pop ecx */
L_100C3EBF:
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x4)) = _v; } /* 0x100C3EBF: fstp dword ptr [ebp - 4] */
    goto L_100C3ED6; /* 0x100C3EC2: jmp 0x100c3ed6 */
L_100C3EC4:
    { double _v = fp_pop(); *(double*)ADDR(ebp + (-0x24)) = _v; } /* 0x100C3EC4: fstp qword ptr [ebp - 0x24] */
    { float _v = (float)fp_pop(); *(float*)ADDR(esp) = _v; } /* 0x100C3EC7: fstp dword ptr [esp] */
    RECOMP_CALL(sub_100C20AF); /* 0x100C3ECA: call 0x100c20af */
    RECOMP_FLAGS_IN();
    _st[0] = *(double*)ADDR(ebp + (-0x24)) - _st[0]; /* 0x100C3ECF: fsubr qword ptr [ebp - 0x24] */
    RECOMP_BACKEDGE();
    goto L_100C3EBE; /* 0x100C3ED2: jmp 0x100c3ebe */
L_100C3ED4:
    { _st[0] = _st[0]; g_st_i64[0] = g_st_i64[0]; fp_pop(); } /* 0x100C3ED4: fstp st(0) */
L_100C3ED6:
    PUSH32(esp, MEM32(ebp + (-0x18))); /* 0x100C3ED6: push dword ptr [ebp - 0x18] */
    PUSH32(esp, MEM32(ebp + (-0x1C))); /* 0x100C3ED9: push dword ptr [ebp - 0x1c] */
    PUSH32(esp, edi); /* 0x100C3EDC: push edi */
    PUSH32(esp, esi); /* 0x100C3EDD: push esi */
    RECOMP_CALL(sub_100C67B2); /* 0x100C3EDE: call 0x100c67b2 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, edx); /* 0x100C3EE3: push edx */
    PUSH32(esp, eax); /* 0x100C3EE4: push eax */
    RECOMP_CALL(sub_100C6B58); /* 0x100C3EE5: call 0x100c6b58 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x10u; /* 0x100C3EEA: add esp, 0x10 */
    _flag_k = FK_ADD;
    { float _v = (float)fp_pop(); *(float*)ADDR(esp + 0x4) = _v; } /* 0x100C3EED: fstp dword ptr [esp + 4] */
    fp_push(*(float*)&MEM32(ebp + (-0xC))); /* 0x100C3EF1: fld dword ptr [ebp - 0xc] */
    { float _v = (float)fp_pop(); *(float*)ADDR(esp) = _v; } /* 0x100C3EF4: fstp dword ptr [esp] */
    RECOMP_CALL(sub_100C2892); /* 0x100C3EF7: call 0x100c2892 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x100C3EFC: pop ecx */
    ecx = POP32_VAL(esp); /* 0x100C3EFD: pop ecx */
    edi = POP32_VAL(esp); /* 0x100C3EFE: pop edi */
L_100C3EFF:
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x8)) = _v; } /* 0x100C3EFF: fstp dword ptr [ebp - 8] */
    fp_push(*(float*)&MEM32(ebp + (-0x8))); /* 0x100C3F02: fld dword ptr [ebp - 8] */
    PUSH32(esp, ecx); /* 0x100C3F05: push ecx */
    PUSH32(esp, ecx); /* 0x100C3F06: push ecx */
    { float _v = (float)fp_pop(); *(float*)ADDR(esp + 0x4) = _v; } /* 0x100C3F07: fstp dword ptr [esp + 4] */
    fp_push(*(float*)&MEM32(ebp + (-0x4))); /* 0x100C3F0B: fld dword ptr [ebp - 4] */
    { float _v = (float)fp_pop(); *(float*)ADDR(esp) = _v; } /* 0x100C3F0E: fstp dword ptr [esp] */
    RECOMP_CALL(sub_100AADAF); /* 0x100C3F11: call 0x100aadaf */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x100C3F16: pop ecx */
    ecx = POP32_VAL(esp); /* 0x100C3F17: pop ecx */
    esi = POP32_VAL(esp); /* 0x100C3F18: pop esi */
    esp = ebp; /* 0x100C3F19: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x100C3F1B: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x100C3F1C: ret  */
    RECOMP_REGS_OUT();
}

void sub_100C3F24(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x100C3F24u);

L_100C3F24:
    PUSH32(esp, ebp); /* 0x100C3F24: push ebp */
    ebp = esp; /* 0x100C3F25: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x58u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x58u; /* 0x100C3F27: sub esp, 0x58 */
    _flag_k = FK_CMP;
    PUSH32(esp, esi); /* 0x100C3F2A: push esi */
    PUSH32(esp, edi); /* 0x100C3F2B: push edi */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x10u; /* 0x100C3F2C: sub esp, 0x10 */
    _flag_k = FK_CMP;
    esi = ebp + 0xC; /* 0x100C3F2F: lea esi, [ebp + 0xc] */
    edi = esp; /* 0x100C3F32: mov edi, esp */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x100C3F34: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x100C3F35: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x100C3F36: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x100C3F37: movsd dword ptr es:[edi], dword ptr [esi] */
    RECOMP_CALL(sub_100C6B29); /* 0x100C3F38: call 0x100c6b29 */
    RECOMP_FLAGS_IN();
    edi = esp; /* 0x100C3F3D: mov edi, esp */
    esi = ebp + 0xC; /* 0x100C3F3F: lea esi, [ebp + 0xc] */
    { double _v = fp_pop(); *(double*)ADDR(ebp + (-0x18)) = _v; } /* 0x100C3F42: fstp qword ptr [ebp - 0x18] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x100C3F45: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x100C3F46: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x100C3F47: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x100C3F48: movsd dword ptr es:[edi], dword ptr [esi] */
    RECOMP_CALL(sub_100C5E60); /* 0x100C3F49: call 0x100c5e60 */
    RECOMP_FLAGS_IN();
    eax = ebp + (-0x18); /* 0x100C3F4E: lea eax, [ebp - 0x18] */
    PUSH32(esp, eax); /* 0x100C3F51: push eax */
    { double _v = fp_pop(); *(double*)ADDR(ebp + (-0x8)) = _v; } /* 0x100C3F52: fstp qword ptr [ebp - 8] */
    RECOMP_CALL(sub_100C0034); /* 0x100C3F55: call 0x100c0034 */
    RECOMP_FLAGS_IN();
    esi = (uint32_t)LO16(eax); /* 0x100C3F5A: movzx esi, ax */
    eax = ebp + (-0x8); /* 0x100C3F5D: lea eax, [ebp - 8] */
    PUSH32(esp, eax); /* 0x100C3F60: push eax */
    RECOMP_CALL(sub_100C0034); /* 0x100C3F61: call 0x100c0034 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x18u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x18u; /* 0x100C3F66: add esp, 0x18 */
    _flag_k = FK_ADD;
    eax = (uint32_t)LO16(eax); /* 0x100C3F69: movzx eax, ax */
    PUSH32(esp, 2); /* 0x100C3F6C: push 2 */
    ecx = POP32_VAL(esp); /* 0x100C3F6E: pop ecx */
    /* cmp LO16(esi), LO16(ecx) */ /* 0x100C3F6F: cmp si, cx */
    _flag_a = (uint32_t)(LO16(esi)) << 16; _flag_b = (uint32_t)(LO16(ecx)) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    if (CMP_NE(_flag_a, _flag_b)) goto L_100C3F9F; /* 0x100C3F72: jne 0x100c3f9f */
L_100C3F74:
    /* cmp LO16(eax), LO16(ecx) */ /* 0x100C3F74: cmp ax, cx */
    _flag_a = (uint32_t)(LO16(eax)) << 16; _flag_b = (uint32_t)(LO16(ecx)) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_100C3F94; /* 0x100C3F77: je 0x100c3f94 */
L_100C3F79:
    /* test LO16(eax), LO16(eax) */ /* 0x100C3F79: test ax, ax */
    _flag_a = (uint32_t)(LO16(eax)) << 16; _flag_b = (uint32_t)(LO16(eax)) << 16;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 16);
    if (TEST_Z(_flag_a, _flag_b)) goto L_100C3F94; /* 0x100C3F7C: je 0x100c3f94 */
L_100C3F7E:
    /* cmp LO16(eax), 1 */ /* 0x100C3F7E: cmp ax, 1 */
    _flag_a = (uint32_t)(LO16(eax)) << 16; _flag_b = (uint32_t)(1) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    if (CMP_NE(_flag_a, _flag_b)) goto L_100C3F8F; /* 0x100C3F82: jne 0x100c3f8f */
L_100C3F84:
    fp_push(*(double*)ADDR(ebp + (-0x8))); /* 0x100C3F84: fld qword ptr [ebp - 8] */
    fp_push(*(double*)ADDR(ebp + (-0x18))); /* 0x100C3F87: fld qword ptr [ebp - 0x18] */
    goto L_100C4204; /* 0x100C3F8A: jmp 0x100c4204 */
L_100C3F8F:
    fp_push(*(double*)ADDR(ebp + (-0x18))); /* 0x100C3F8F: fld qword ptr [ebp - 0x18] */
    goto L_100C3FAD; /* 0x100C3F92: jmp 0x100c3fad */
L_100C3F94:
    fp_push(*(double*)ADDR(ebp + (-0x18))); /* 0x100C3F94: fld qword ptr [ebp - 0x18] */
    fp_push(*(double*)ADDR(ebp + (-0x8))); /* 0x100C3F97: fld qword ptr [ebp - 8] */
    goto L_100C4204; /* 0x100C3F9A: jmp 0x100c4204 */
L_100C3F9F:
    /* cmp LO16(eax), LO16(ecx) */ /* 0x100C3F9F: cmp ax, cx */
    _flag_a = (uint32_t)(LO16(eax)) << 16; _flag_b = (uint32_t)(LO16(ecx)) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    if (CMP_NE(_flag_a, _flag_b)) goto L_100C3FB4; /* 0x100C3FA2: jne 0x100c3fb4 */
L_100C3FA4:
    /* cmp LO16(esi), 1 */ /* 0x100C3FA4: cmp si, 1 */
    _flag_a = (uint32_t)(LO16(esi)) << 16; _flag_b = (uint32_t)(1) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    RECOMP_BACKEDGE();
    if (CMP_EQ(_flag_a, _flag_b)) goto L_100C3F94; /* 0x100C3FA8: je 0x100c3f94 */
L_100C3FAA:
    fp_push(*(double*)ADDR(ebp + (-0x8))); /* 0x100C3FAA: fld qword ptr [ebp - 8] */
L_100C3FAD:
    fp_push(_st[0]); /* 0x100C3FAD: fld st(0) */
    goto L_100C4204; /* 0x100C3FAF: jmp 0x100c4204 */
L_100C3FB4:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x100C3FB4: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx + 1; /* 0x100C3FB6: inc ecx */
    _flag_k = FK_INC;
    /* cmp LO16(esi), LO16(ecx) */ /* 0x100C3FB7: cmp si, cx */
    _flag_a = (uint32_t)(LO16(esi)) << 16; _flag_b = (uint32_t)(LO16(ecx)) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    if (CMP_NE(_flag_a, _flag_b)) goto L_100C4008; /* 0x100C3FBA: jne 0x100c4008 */
L_100C3FBC:
    fp_push(*(double*)ADDR(ebp + (-0x18))); /* 0x100C3FBC: fld qword ptr [ebp - 0x18] */
    /* cmp LO16(eax), LO16(ecx) */ /* 0x100C3FBF: cmp ax, cx */
    _flag_a = (uint32_t)(LO16(eax)) << 16; _flag_b = (uint32_t)(LO16(ecx)) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    if (CMP_NE(_flag_a, _flag_b)) goto L_100C3FE9; /* 0x100C3FC2: jne 0x100c3fe9 */
L_100C3FC4:
    { double _v = fp_pop(); *(double*)ADDR(ebp + (-0x10)) = _v; } /* 0x100C3FC4: fstp qword ptr [ebp - 0x10] */
    fp_push(0.0); /* 0x100C3FC7: fldz  */
    _fpu_cmp = FPU_CMP(_st[0], *(double*)ADDR(ebp + (-0x8))); /* 0x100C3FC9: fcomp qword ptr [ebp - 8] */
    fp_pop();
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x100C3FCC: fnstsw ax */
    /* test HI8(eax), 0x41u */ /* 0x100C3FCE: test ah, 0x41 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(0x41u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_100C3FDE; /* 0x100C3FD1: jne 0x100c3fde */
L_100C3FD3:
    fp_push(*(double*)ADDR(0x10063C58)); /* 0x100C3FD3: fld qword ptr [0x10063c58] */
    goto L_100C41FF; /* 0x100C3FD9: jmp 0x100c41ff */
L_100C3FDE:
    fp_push(*(double*)ADDR(0x10063BE0)); /* 0x100C3FDE: fld qword ptr [0x10063be0] */
    goto L_100C41FF; /* 0x100C3FE4: jmp 0x100c41ff */
L_100C3FE9:
    eax = (uint32_t)MEM16(ebp + (-0x2)); /* 0x100C3FE9: movzx eax, word ptr [ebp - 2] */
    /* test eax, 0x8000u */ /* 0x100C3FED: test eax, 0x8000 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x8000u);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_100C4001; /* 0x100C3FF2: je 0x100c4001 */
L_100C3FF4:
    fp_push(*(double*)ADDR(0x10065C20)); /* 0x100C3FF4: fld qword ptr [0x10065c20] */
    _st[0] = -_st[0]; /* 0x100C3FFA: fchs  */
    goto L_100C4204; /* 0x100C3FFC: jmp 0x100c4204 */
L_100C4001:
    fp_push(0.0); /* 0x100C4001: fldz  */
    goto L_100C4204; /* 0x100C4003: jmp 0x100c4204 */
L_100C4008:
    /* cmp LO16(eax), LO16(ecx) */ /* 0x100C4008: cmp ax, cx */
    _flag_a = (uint32_t)(LO16(eax)) << 16; _flag_b = (uint32_t)(LO16(ecx)) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    if (CMP_NE(_flag_a, _flag_b)) goto L_100C4039; /* 0x100C400B: jne 0x100c4039 */
L_100C400D:
    fp_push(*(double*)ADDR(ebp + (-0x8))); /* 0x100C400D: fld qword ptr [ebp - 8] */
    { double _v = fp_pop(); *(double*)ADDR(ebp + (-0x10)) = _v; } /* 0x100C4010: fstp qword ptr [ebp - 0x10] */
    fp_push(0.0); /* 0x100C4013: fldz  */
    fp_push(*(double*)ADDR(ebp + (-0x10))); /* 0x100C4015: fld qword ptr [ebp - 0x10] */
    _fpu_cmp = FPU_CMP(_st[0], _st[1]); /* 0x100C4018: fcom st(1) */
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x100C401A: fnstsw ax */
    { _st[1] = _st[0]; g_st_i64[1] = g_st_i64[0]; fp_pop(); } /* 0x100C401C: fstp st(1) */
    /* test HI8(eax), 5 */ /* 0x100C401E: test ah, 5 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(5) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (RECOMP_PF((_flag_a & _flag_b), 24)) goto L_100C402E; /* 0x100C4021: jp 0x100c402e */
L_100C4023:
    fp_push(*(double*)ADDR(0x10063C48)); /* 0x100C4023: fld qword ptr [0x10063c48] */
    goto L_100C4204; /* 0x100C4029: jmp 0x100c4204 */
L_100C402E:
    fp_push(*(double*)ADDR(0x10063C20)); /* 0x100C402E: fld qword ptr [0x10063c20] */
    goto L_100C4204; /* 0x100C4034: jmp 0x100c4204 */
L_100C4039:
    fp_push(*(double*)ADDR(ebp + (-0x18))); /* 0x100C4039: fld qword ptr [ebp - 0x18] */
    eax = ebp + (-0x48); /* 0x100C403C: lea eax, [ebp - 0x48] */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x10u; /* 0x100C403F: sub esp, 0x10 */
    _flag_k = FK_CMP;
    { double _v = fp_pop(); *(double*)ADDR(esp + 0x8) = _v; } /* 0x100C4042: fstp qword ptr [esp + 8] */
    fp_push(1.0); /* 0x100C4046: fld1  */
    _st[0] -= *(double*)ADDR(ebp + (-0x8)); /* 0x100C4048: fsub qword ptr [ebp - 8] */
    { double _v = fp_pop(); *(double*)ADDR(esp) = _v; } /* 0x100C404B: fstp qword ptr [esp] */
    PUSH32(esp, eax); /* 0x100C404E: push eax */
    RECOMP_CALL(sub_100AACD2); /* 0x100C404F: call 0x100aacd2 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x100C4054: add esp, 4 */
    _flag_k = FK_ADD;
    esi = eax; /* 0x100C4057: mov esi, eax */
    edi = esp; /* 0x100C4059: mov edi, esp */
    eax = ebp + (-0x38); /* 0x100C405B: lea eax, [ebp - 0x38] */
    PUSH32(esp, eax); /* 0x100C405E: push eax */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x100C405F: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x100C4060: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x100C4061: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x100C4062: movsd dword ptr es:[edi], dword ptr [esi] */
    RECOMP_CALL(sub_100C7E68); /* 0x100C4063: call 0x100c7e68 */
    RECOMP_FLAGS_IN();
    fp_push(*(double*)ADDR(ebp + (-0x18))); /* 0x100C4068: fld qword ptr [ebp - 0x18] */
    edi = ebp + (-0x58); /* 0x100C406B: lea edi, [ebp - 0x58] */
    esi = eax; /* 0x100C406E: mov esi, eax */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x100C4070: add esp, 4 */
    _flag_k = FK_ADD;
    _st[0] = -_st[0]; /* 0x100C4073: fchs  */
    eax = ebp + (-0x38); /* 0x100C4075: lea eax, [ebp - 0x38] */
    { double _v = fp_pop(); *(double*)ADDR(esp + 0x8) = _v; } /* 0x100C4078: fstp qword ptr [esp + 8] */
    fp_push(*(double*)ADDR(ebp + (-0x8))); /* 0x100C407C: fld qword ptr [ebp - 8] */
    fp_push(1.0); /* 0x100C407F: fld1  */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x100C4081: movsd dword ptr es:[edi], dword ptr [esi] */
    { double _v = fp_pop(); _st[0] += _v; } /* 0x100C4082: faddp st(1) */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x100C4084: movsd dword ptr es:[edi], dword ptr [esi] */
    { double _v = fp_pop(); *(double*)ADDR(esp) = _v; } /* 0x100C4085: fstp qword ptr [esp] */
    PUSH32(esp, eax); /* 0x100C4088: push eax */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x100C4089: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x100C408A: movsd dword ptr es:[edi], dword ptr [esi] */
    RECOMP_CALL(sub_100AACD2); /* 0x100C408B: call 0x100aacd2 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x100C4090: add esp, 4 */
    _flag_k = FK_ADD;
    esi = eax; /* 0x100C4093: mov esi, eax */
    edi = esp; /* 0x100C4095: mov edi, esp */
    eax = ebp + (-0x28); /* 0x100C4097: lea eax, [ebp - 0x28] */
    PUSH32(esp, eax); /* 0x100C409A: push eax */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x100C409B: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x100C409C: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x100C409D: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x100C409E: movsd dword ptr es:[edi], dword ptr [esi] */
    RECOMP_CALL(sub_100C7E68); /* 0x100C409F: call 0x100c7e68 */
    RECOMP_FLAGS_IN();
    fp_push(*(double*)ADDR(ebp + (-0x18))); /* 0x100C40A4: fld qword ptr [ebp - 0x18] */
    edi = ebp + (-0x48); /* 0x100C40A7: lea edi, [ebp - 0x48] */
    esi = eax; /* 0x100C40AA: mov esi, eax */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x14u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x14u; /* 0x100C40AC: add esp, 0x14 */
    _flag_k = FK_ADD;
    *(double*)ADDR(ebp + (-0x10)) = _st[0]; /* 0x100C40AF: fst qword ptr [ebp - 0x10] */
    fp_push(0.0); /* 0x100C40B2: fldz  */
    _fpu_cmp = FPU_CMP(_st[0], _st[1]); /* 0x100C40B4: fucompp  */
    fp_pop(); fp_pop();
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x100C40B6: movsd dword ptr es:[edi], dword ptr [esi] */
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x100C40B7: fnstsw ax */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x100C40B9: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x100C40BA: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x100C40BB: movsd dword ptr es:[edi], dword ptr [esi] */
    /* test HI8(eax), 0x44u */ /* 0x100C40BC: test ah, 0x44 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(0x44u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if ((!RECOMP_PF((_flag_a & _flag_b), 24))) goto L_100C41BC; /* 0x100C40BF: jnp 0x100c41bc */
L_100C40C5:
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x10u; /* 0x100C40C5: sub esp, 0x10 */
    _flag_k = FK_CMP;
    esi = ebp + (-0x58); /* 0x100C40C8: lea esi, [ebp - 0x58] */
    edi = esp; /* 0x100C40CB: mov edi, esp */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x100C40CD: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x100C40CE: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x100C40CF: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x100C40D0: movsd dword ptr es:[edi], dword ptr [esi] */
    RECOMP_CALL(sub_100C6B29); /* 0x100C40D1: call 0x100c6b29 */
    RECOMP_FLAGS_IN();
    edi = esp; /* 0x100C40D6: mov edi, esp */
    esi = ebp + (-0x58); /* 0x100C40D8: lea esi, [ebp - 0x58] */
    { double _v = fp_pop(); *(double*)ADDR(ebp + (-0x20)) = _v; } /* 0x100C40DB: fstp qword ptr [ebp - 0x20] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x100C40DE: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x100C40DF: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x100C40E0: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x100C40E1: movsd dword ptr es:[edi], dword ptr [esi] */
    RECOMP_CALL(sub_100C5E60); /* 0x100C40E2: call 0x100c5e60 */
    RECOMP_FLAGS_IN();
    edi = esp; /* 0x100C40E7: mov edi, esp */
    esi = ebp + (-0x48); /* 0x100C40E9: lea esi, [ebp - 0x48] */
    { double _v = fp_pop(); *(double*)ADDR(ebp + (-0x30)) = _v; } /* 0x100C40EC: fstp qword ptr [ebp - 0x30] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x100C40EF: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x100C40F0: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x100C40F1: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x100C40F2: movsd dword ptr es:[edi], dword ptr [esi] */
    RECOMP_CALL(sub_100C6B29); /* 0x100C40F3: call 0x100c6b29 */
    RECOMP_FLAGS_IN();
    edi = esp; /* 0x100C40F8: mov edi, esp */
    esi = ebp + (-0x48); /* 0x100C40FA: lea esi, [ebp - 0x48] */
    { double _v = fp_pop(); *(double*)ADDR(ebp + (-0x10)) = _v; } /* 0x100C40FD: fstp qword ptr [ebp - 0x10] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x100C4100: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x100C4101: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x100C4102: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x100C4103: movsd dword ptr es:[edi], dword ptr [esi] */
    RECOMP_CALL(sub_100C5E60); /* 0x100C4104: call 0x100c5e60 */
    RECOMP_FLAGS_IN();
    fp_push(*(double*)ADDR(0x10063C28)); /* 0x100C4109: fld qword ptr [0x10063c28] */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x10u; /* 0x100C410F: add esp, 0x10 */
    _flag_k = FK_ADD;
    fp_push(*(double*)ADDR(ebp + (-0x20))); /* 0x100C4112: fld qword ptr [ebp - 0x20] */
    _fpu_cmp = FPU_CMP(_st[0], _st[1]); /* 0x100C4115: fcom st(1) */
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x100C4117: fnstsw ax */
    /* test HI8(eax), 0x41u */ /* 0x100C4119: test ah, 0x41 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(0x41u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_100C412B; /* 0x100C411C: jne 0x100c412b */
L_100C411E:
    { _st[1] = _st[0]; g_st_i64[1] = g_st_i64[0]; fp_pop(); } /* 0x100C411E: fstp st(1) */
    *(double*)ADDR(ebp + (-0x20)) = _st[0]; /* 0x100C4120: fst qword ptr [ebp - 0x20] */
    _st[0] = *(double*)ADDR(ebp + (-0x10)) / _st[0]; /* 0x100C4123: fdivr qword ptr [ebp - 0x10] */
    _st[0] *= *(double*)ADDR(ebp + (-0x30)); /* 0x100C4126: fmul qword ptr [ebp - 0x30] */
    goto L_100C416D; /* 0x100C4129: jmp 0x100c416d */
L_100C412B:
    fp_push(*(double*)ADDR(ebp + (-0x30))); /* 0x100C412B: fld qword ptr [ebp - 0x30] */
    _fpu_cmp = FPU_CMP(_st[0], _st[2]); /* 0x100C412E: fcom st(2) */
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x100C4130: fnstsw ax */
    /* test HI8(eax), 0x41u */ /* 0x100C4132: test ah, 0x41 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(0x41u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_100C4140; /* 0x100C4135: jne 0x100c4140 */
L_100C4137:
    { _st[2] = _st[0]; g_st_i64[2] = g_st_i64[0]; fp_pop(); } /* 0x100C4137: fstp st(2) */
    fp_push(_st[1]); /* 0x100C4139: fld st(1) */
    { double _v = fp_pop(); *(double*)ADDR(ebp + (-0x20)) = _v; } /* 0x100C413B: fstp qword ptr [ebp - 0x20] */
    goto L_100C4154; /* 0x100C413E: jmp 0x100c4154 */
L_100C4140:
    fp_push(_st[0]); /* 0x100C4140: fld st(0) */
    _st[0] = -_st[0]; /* 0x100C4142: fchs  */
    *(double*)ADDR(ebp + (-0x20)) = _st[0]; /* 0x100C4144: fst qword ptr [ebp - 0x20] */
    _fpu_cmp = FPU_CMP(_st[0], _st[3]); /* 0x100C4147: fcom st(3) */
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x100C4149: fnstsw ax */
    { _st[3] = _st[0]; g_st_i64[3] = g_st_i64[0]; fp_pop(); } /* 0x100C414B: fstp st(3) */
    /* test HI8(eax), 0x41u */ /* 0x100C414D: test ah, 0x41 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(0x41u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_100C415F; /* 0x100C4150: jne 0x100c415f */
L_100C4152:
    { _st[0] = _st[0]; g_st_i64[0] = g_st_i64[0]; fp_pop(); } /* 0x100C4152: fstp st(0) */
L_100C4154:
    fp_xch(2); /* 0x100C4154: fxch st(2) */
    { double _v = fp_pop(); _st[0] = _st[0] == 0.0 ? _v : _v / _st[0]; } /* 0x100C4156: fdivrp st(1) */
    { double _v = fp_pop(); _st[0] *= _v; } /* 0x100C4158: fmulp st(1) */
    _st[0] = *(double*)ADDR(ebp + (-0x10)) - _st[0]; /* 0x100C415A: fsubr qword ptr [ebp - 0x10] */
    goto L_100C416F; /* 0x100C415D: jmp 0x100c416f */
L_100C415F:
    { _st[2] = _st[0]; g_st_i64[2] = g_st_i64[0]; fp_pop(); } /* 0x100C415F: fstp st(2) */
    fp_push(0.0); /* 0x100C4161: fldz  */
    { double _v = fp_pop(); *(double*)ADDR(ebp + (-0x20)) = _v; } /* 0x100C4163: fstp qword ptr [ebp - 0x20] */
    fp_push(*(double*)ADDR(ebp + (-0x10))); /* 0x100C4166: fld qword ptr [ebp - 0x10] */
    { double _v = fp_pop(); _st[1] *= _v; } /* 0x100C4169: fmulp st(2) */
    { double _v = fp_pop(); _st[1] *= _v; } /* 0x100C416B: fmulp st(2) */
L_100C416D:
    { double _v = fp_pop(); _st[0] = _v - _st[0]; } /* 0x100C416D: fsubrp st(1) */
L_100C416F:
    PUSH32(esp, ecx); /* 0x100C416F: push ecx */
    PUSH32(esp, ecx); /* 0x100C4170: push ecx */
    { double _v = fp_pop(); *(double*)ADDR(esp) = _v; } /* 0x100C4171: fstp qword ptr [esp] */
    RECOMP_CALL(sub_100C22C0); /* 0x100C4174: call 0x100c22c0 */
    RECOMP_FLAGS_IN();
    *(double*)ADDR(ebp + (-0x10)) = _st[0]; /* 0x100C4179: fst qword ptr [ebp - 0x10] */
    fp_push(*(double*)ADDR(ebp + (-0x20))); /* 0x100C417C: fld qword ptr [ebp - 0x20] */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 8; /* 0x100C417F: add esp, 8 */
    _flag_k = FK_ADD;
    fp_push(0.0); /* 0x100C4182: fldz  */
    _fpu_cmp = FPU_CMP(_st[0], _st[1]); /* 0x100C4184: fucom st(1) */
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x100C4186: fnstsw ax */
    /* test HI8(eax), 0x44u */ /* 0x100C4188: test ah, 0x44 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(0x44u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if ((!RECOMP_PF((_flag_a & _flag_b), 24))) goto L_100C41B6; /* 0x100C418B: jnp 0x100c41b6 */
L_100C418D:
    _fpu_cmp = FPU_CMP(_st[0], _st[2]); /* 0x100C418D: fcomp st(2) */
    fp_pop();
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x100C418F: fnstsw ax */
    PUSH32(esp, ecx); /* 0x100C4191: push ecx */
    PUSH32(esp, ecx); /* 0x100C4192: push ecx */
    { _st[1] = _st[0]; g_st_i64[1] = g_st_i64[0]; fp_pop(); } /* 0x100C4193: fstp st(1) */
    { double _v = fp_pop(); *(double*)ADDR(esp) = _v; } /* 0x100C4195: fstp qword ptr [esp] */
    /* test HI8(eax), 0x41u */ /* 0x100C4198: test ah, 0x41 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(0x41u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (RECOMP_PF((_flag_a & _flag_b), 24)) goto L_100C41AC; /* 0x100C419B: jp 0x100c41ac */
L_100C419D:
    RECOMP_CALL(sub_100367A8); /* 0x100C419D: call 0x100367a8 */
    RECOMP_FLAGS_IN();
    _st[0] += *(double*)ADDR(ebp + (-0x10)); /* 0x100C41A2: fadd qword ptr [ebp - 0x10] */
L_100C41A5:
    ecx = POP32_VAL(esp); /* 0x100C41A5: pop ecx */
    { double _v = fp_pop(); *(double*)ADDR(ebp + (-0x10)) = _v; } /* 0x100C41A6: fstp qword ptr [ebp - 0x10] */
    ecx = POP32_VAL(esp); /* 0x100C41A9: pop ecx */
    goto L_100C41BC; /* 0x100C41AA: jmp 0x100c41bc */
L_100C41AC:
    RECOMP_CALL(sub_100367A8); /* 0x100C41AC: call 0x100367a8 */
    RECOMP_FLAGS_IN();
    _st[0] = *(double*)ADDR(ebp + (-0x10)) - _st[0]; /* 0x100C41B1: fsubr qword ptr [ebp - 0x10] */
    RECOMP_BACKEDGE();
    goto L_100C41A5; /* 0x100C41B4: jmp 0x100c41a5 */
L_100C41B6:
    { _st[2] = _st[0]; g_st_i64[2] = g_st_i64[0]; fp_pop(); } /* 0x100C41B6: fstp st(2) */
    { _st[0] = _st[0]; g_st_i64[0] = g_st_i64[0]; fp_pop(); } /* 0x100C41B8: fstp st(0) */
    { _st[0] = _st[0]; g_st_i64[0] = g_st_i64[0]; fp_pop(); } /* 0x100C41BA: fstp st(0) */
L_100C41BC:
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x10u; /* 0x100C41BC: sub esp, 0x10 */
    _flag_k = FK_CMP;
    esi = ebp + (-0x48); /* 0x100C41BF: lea esi, [ebp - 0x48] */
    edi = esp; /* 0x100C41C2: mov edi, esp */
    eax = ebp + (-0x58); /* 0x100C41C4: lea eax, [ebp - 0x58] */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x10u; /* 0x100C41C7: sub esp, 0x10 */
    _flag_k = FK_CMP;
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x100C41CA: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x100C41CB: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x100C41CC: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x100C41CD: movsd dword ptr es:[edi], dword ptr [esi] */
    edi = esp; /* 0x100C41CE: mov edi, esp */
    esi = ebp + (-0x58); /* 0x100C41D0: lea esi, [ebp - 0x58] */
    PUSH32(esp, eax); /* 0x100C41D3: push eax */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x100C41D4: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x100C41D5: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x100C41D6: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x100C41D7: movsd dword ptr es:[edi], dword ptr [esi] */
    RECOMP_CALL(sub_100C6958); /* 0x100C41D8: call 0x100c6958 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x14u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x14u; /* 0x100C41DD: add esp, 0x14 */
    _flag_k = FK_ADD;
    esi = eax; /* 0x100C41E0: mov esi, eax */
    edi = esp; /* 0x100C41E2: mov edi, esp */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x100C41E4: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x100C41E5: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x100C41E6: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x100C41E7: movsd dword ptr es:[edi], dword ptr [esi] */
    RECOMP_CALL(sub_100C6B29); /* 0x100C41E8: call 0x100c6b29 */
    RECOMP_FLAGS_IN();
    { double _v = fp_pop(); *(double*)ADDR(esp + 0x8) = _v; } /* 0x100C41ED: fstp qword ptr [esp + 8] */
    fp_push(*(double*)ADDR(ebp + (-0x8))); /* 0x100C41F1: fld qword ptr [ebp - 8] */
    { double _v = fp_pop(); *(double*)ADDR(esp) = _v; } /* 0x100C41F4: fstp qword ptr [esp] */
    RECOMP_CALL(sub_100C3187); /* 0x100C41F7: call 0x100c3187 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x10u; /* 0x100C41FC: add esp, 0x10 */
    _flag_k = FK_ADD;
L_100C41FF:
    fp_push(*(double*)ADDR(ebp + (-0x10))); /* 0x100C41FF: fld qword ptr [ebp - 0x10] */
    fp_xch(1); /* 0x100C4202: fxch st(1) */
L_100C4204:
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x10u; /* 0x100C4204: sub esp, 0x10 */
    _flag_k = FK_CMP;
    eax = ebp + (-0x58); /* 0x100C4207: lea eax, [ebp - 0x58] */
    { double _v = fp_pop(); *(double*)ADDR(esp + 0x8) = _v; } /* 0x100C420A: fstp qword ptr [esp + 8] */
    { double _v = fp_pop(); *(double*)ADDR(esp) = _v; } /* 0x100C420E: fstp qword ptr [esp] */
    PUSH32(esp, eax); /* 0x100C4211: push eax */
    RECOMP_CALL(sub_100AACD2); /* 0x100C4212: call 0x100aacd2 */
    RECOMP_FLAGS_IN();
    esi = eax; /* 0x100C4217: mov esi, eax */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x14u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x14u; /* 0x100C4219: add esp, 0x14 */
    _flag_k = FK_ADD;
    eax = MEM32(ebp + 0x8); /* 0x100C421C: mov eax, dword ptr [ebp + 8] */
    edi = eax; /* 0x100C421F: mov edi, eax */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x100C4221: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x100C4222: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x100C4223: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x100C4224: movsd dword ptr es:[edi], dword ptr [esi] */
    edi = POP32_VAL(esp); /* 0x100C4225: pop edi */
    esi = POP32_VAL(esp); /* 0x100C4226: pop esi */
    esp = ebp; /* 0x100C4227: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x100C4229: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x100C422A: ret  */
    RECOMP_REGS_OUT();
}

void sub_100C422B(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x100C422Bu);

L_100C422B:
    PUSH32(esp, ebp); /* 0x100C422B: push ebp */
    ebp = esp; /* 0x100C422C: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x20u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x20u; /* 0x100C422E: sub esp, 0x20 */
    _flag_k = FK_CMP;
    PUSH32(esp, esi); /* 0x100C4231: push esi */
    PUSH32(esp, edi); /* 0x100C4232: push edi */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x10u; /* 0x100C4233: sub esp, 0x10 */
    _flag_k = FK_CMP;
    esi = ebp + 0xC; /* 0x100C4236: lea esi, [ebp + 0xc] */
    edi = esp; /* 0x100C4239: mov edi, esp */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x100C423B: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x100C423C: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x100C423D: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x100C423E: movsd dword ptr es:[edi], dword ptr [esi] */
    RECOMP_CALL(sub_100C6B29); /* 0x100C423F: call 0x100c6b29 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, ecx); /* 0x100C4244: push ecx */
    PUSH32(esp, ecx); /* 0x100C4245: push ecx */
    { double _v = fp_pop(); *(double*)ADDR(esp + 0x10) = _v; } /* 0x100C4246: fstp qword ptr [esp + 0x10] */
    edi = esp; /* 0x100C424A: mov edi, esp */
    esi = ebp + 0xC; /* 0x100C424C: lea esi, [ebp + 0xc] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x100C424F: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x100C4250: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x100C4251: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x100C4252: movsd dword ptr es:[edi], dword ptr [esi] */
    RECOMP_CALL(sub_100C5E60); /* 0x100C4253: call 0x100c5e60 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 8; /* 0x100C4258: add esp, 8 */
    _flag_k = FK_ADD;
    eax = ebp + (-0x10); /* 0x100C425B: lea eax, [ebp - 0x10] */
    _st[0] = -_st[0]; /* 0x100C425E: fchs  */
    { double _v = fp_pop(); *(double*)ADDR(esp) = _v; } /* 0x100C4260: fstp qword ptr [esp] */
    PUSH32(esp, eax); /* 0x100C4263: push eax */
    RECOMP_CALL(sub_100AACD2); /* 0x100C4264: call 0x100aacd2 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x100C4269: add esp, 4 */
    _flag_k = FK_ADD;
    esi = eax; /* 0x100C426C: mov esi, eax */
    edi = esp; /* 0x100C426E: mov edi, esp */
    eax = ebp + (-0x20); /* 0x100C4270: lea eax, [ebp - 0x20] */
    PUSH32(esp, eax); /* 0x100C4273: push eax */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x100C4274: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x100C4275: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x100C4276: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x100C4277: movsd dword ptr es:[edi], dword ptr [esi] */
    RECOMP_CALL(sub_100C3F24); /* 0x100C4278: call 0x100c3f24 */
    RECOMP_FLAGS_IN();
    esi = eax; /* 0x100C427D: mov esi, eax */
    edi = ebp + 0xC; /* 0x100C427F: lea edi, [ebp + 0xc] */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x100C4282: add esp, 4 */
    _flag_k = FK_ADD;
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x100C4285: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x100C4286: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x100C4287: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x100C4288: movsd dword ptr es:[edi], dword ptr [esi] */
    esi = eax; /* 0x100C4289: mov esi, eax */
    edi = esp; /* 0x100C428B: mov edi, esp */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x100C428D: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x100C428E: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x100C428F: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x100C4290: movsd dword ptr es:[edi], dword ptr [esi] */
    RECOMP_CALL(sub_100C6B29); /* 0x100C4291: call 0x100c6b29 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, ecx); /* 0x100C4296: push ecx */
    PUSH32(esp, ecx); /* 0x100C4297: push ecx */
    edi = esp; /* 0x100C4298: mov edi, esp */
    esi = ebp + 0xC; /* 0x100C429A: lea esi, [ebp + 0xc] */
    _st[0] = -_st[0]; /* 0x100C429D: fchs  */
    { double _v = fp_pop(); *(double*)ADDR(esp + 0x10) = _v; } /* 0x100C429F: fstp qword ptr [esp + 0x10] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x100C42A3: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x100C42A4: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x100C42A5: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x100C42A6: movsd dword ptr es:[edi], dword ptr [esi] */
    RECOMP_CALL(sub_100C5E60); /* 0x100C42A7: call 0x100c5e60 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x100C42AC: pop ecx */
    ecx = POP32_VAL(esp); /* 0x100C42AD: pop ecx */
    eax = ebp + (-0x20); /* 0x100C42AE: lea eax, [ebp - 0x20] */
    { double _v = fp_pop(); *(double*)ADDR(esp) = _v; } /* 0x100C42B1: fstp qword ptr [esp] */
    PUSH32(esp, eax); /* 0x100C42B4: push eax */
    RECOMP_CALL(sub_100AACD2); /* 0x100C42B5: call 0x100aacd2 */
    RECOMP_FLAGS_IN();
    esi = eax; /* 0x100C42BA: mov esi, eax */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x14u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x14u; /* 0x100C42BC: add esp, 0x14 */
    _flag_k = FK_ADD;
    eax = MEM32(ebp + 0x8); /* 0x100C42BF: mov eax, dword ptr [ebp + 8] */
    edi = eax; /* 0x100C42C2: mov edi, eax */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x100C42C4: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x100C42C5: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x100C42C6: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x100C42C7: movsd dword ptr es:[edi], dword ptr [esi] */
    edi = POP32_VAL(esp); /* 0x100C42C8: pop edi */
    esi = POP32_VAL(esp); /* 0x100C42C9: pop esi */
    esp = ebp; /* 0x100C42CA: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x100C42CC: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x100C42CD: ret  */
    RECOMP_REGS_OUT();
}

void sub_100C42CE(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x100C42CEu);

L_100C42CE:
    PUSH32(esp, ebp); /* 0x100C42CE: push ebp */
    ebp = esp; /* 0x100C42CF: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x20u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x20u; /* 0x100C42D1: sub esp, 0x20 */
    _flag_k = FK_CMP;
    PUSH32(esp, esi); /* 0x100C42D4: push esi */
    PUSH32(esp, edi); /* 0x100C42D5: push edi */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x10u; /* 0x100C42D6: sub esp, 0x10 */
    _flag_k = FK_CMP;
    esi = ebp + 0xC; /* 0x100C42D9: lea esi, [ebp + 0xc] */
    edi = esp; /* 0x100C42DC: mov edi, esp */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x100C42DE: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x100C42DF: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x100C42E0: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x100C42E1: movsd dword ptr es:[edi], dword ptr [esi] */
    RECOMP_CALL(sub_100C6B29); /* 0x100C42E2: call 0x100c6b29 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, ecx); /* 0x100C42E7: push ecx */
    PUSH32(esp, ecx); /* 0x100C42E8: push ecx */
    { double _v = fp_pop(); *(double*)ADDR(esp + 0x10) = _v; } /* 0x100C42E9: fstp qword ptr [esp + 0x10] */
    edi = esp; /* 0x100C42ED: mov edi, esp */
    esi = ebp + 0xC; /* 0x100C42EF: lea esi, [ebp + 0xc] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x100C42F2: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x100C42F3: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x100C42F4: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x100C42F5: movsd dword ptr es:[edi], dword ptr [esi] */
    RECOMP_CALL(sub_100C5E60); /* 0x100C42F6: call 0x100c5e60 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 8; /* 0x100C42FB: add esp, 8 */
    _flag_k = FK_ADD;
    eax = ebp + (-0x10); /* 0x100C42FE: lea eax, [ebp - 0x10] */
    _st[0] = -_st[0]; /* 0x100C4301: fchs  */
    { double _v = fp_pop(); *(double*)ADDR(esp) = _v; } /* 0x100C4303: fstp qword ptr [esp] */
    PUSH32(esp, eax); /* 0x100C4306: push eax */
    RECOMP_CALL(sub_100AACD2); /* 0x100C4307: call 0x100aacd2 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x100C430C: add esp, 4 */
    _flag_k = FK_ADD;
    esi = eax; /* 0x100C430F: mov esi, eax */
    edi = esp; /* 0x100C4311: mov edi, esp */
    eax = ebp + (-0x20); /* 0x100C4313: lea eax, [ebp - 0x20] */
    PUSH32(esp, eax); /* 0x100C4316: push eax */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x100C4317: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x100C4318: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x100C4319: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x100C431A: movsd dword ptr es:[edi], dword ptr [esi] */
    RECOMP_CALL(sub_100C43CF); /* 0x100C431B: call 0x100c43cf */
    RECOMP_FLAGS_IN();
    esi = eax; /* 0x100C4320: mov esi, eax */
    edi = ebp + 0xC; /* 0x100C4322: lea edi, [ebp + 0xc] */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x100C4325: add esp, 4 */
    _flag_k = FK_ADD;
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x100C4328: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x100C4329: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x100C432A: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x100C432B: movsd dword ptr es:[edi], dword ptr [esi] */
    esi = eax; /* 0x100C432C: mov esi, eax */
    edi = esp; /* 0x100C432E: mov edi, esp */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x100C4330: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x100C4331: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x100C4332: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x100C4333: movsd dword ptr es:[edi], dword ptr [esi] */
    RECOMP_CALL(sub_100C6B29); /* 0x100C4334: call 0x100c6b29 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, ecx); /* 0x100C4339: push ecx */
    PUSH32(esp, ecx); /* 0x100C433A: push ecx */
    edi = esp; /* 0x100C433B: mov edi, esp */
    esi = ebp + 0xC; /* 0x100C433D: lea esi, [ebp + 0xc] */
    _st[0] = -_st[0]; /* 0x100C4340: fchs  */
    { double _v = fp_pop(); *(double*)ADDR(esp + 0x10) = _v; } /* 0x100C4342: fstp qword ptr [esp + 0x10] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x100C4346: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x100C4347: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x100C4348: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x100C4349: movsd dword ptr es:[edi], dword ptr [esi] */
    RECOMP_CALL(sub_100C5E60); /* 0x100C434A: call 0x100c5e60 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x100C434F: pop ecx */
    ecx = POP32_VAL(esp); /* 0x100C4350: pop ecx */
    eax = ebp + (-0x20); /* 0x100C4351: lea eax, [ebp - 0x20] */
    { double _v = fp_pop(); *(double*)ADDR(esp) = _v; } /* 0x100C4354: fstp qword ptr [esp] */
    PUSH32(esp, eax); /* 0x100C4357: push eax */
    RECOMP_CALL(sub_100AACD2); /* 0x100C4358: call 0x100aacd2 */
    RECOMP_FLAGS_IN();
    esi = eax; /* 0x100C435D: mov esi, eax */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x14u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x14u; /* 0x100C435F: add esp, 0x14 */
    _flag_k = FK_ADD;
    eax = MEM32(ebp + 0x8); /* 0x100C4362: mov eax, dword ptr [ebp + 8] */
    edi = eax; /* 0x100C4365: mov edi, eax */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x100C4367: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x100C4368: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x100C4369: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x100C436A: movsd dword ptr es:[edi], dword ptr [esi] */
    edi = POP32_VAL(esp); /* 0x100C436B: pop edi */
    esi = POP32_VAL(esp); /* 0x100C436C: pop esi */
    esp = ebp; /* 0x100C436D: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x100C436F: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x100C4370: ret  */
    RECOMP_REGS_OUT();
}

void sub_100C4371(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x100C4371u);

L_100C4371:
    PUSH32(esp, ebp); /* 0x100C4371: push ebp */
    ebp = esp; /* 0x100C4372: mov ebp, esp */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x100C4374: push dword ptr [ebp + 0xc] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x100C4377: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_100C6B58); /* 0x100C437A: call 0x100c6b58 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x100C437F: pop ecx */
    { float _v = (float)fp_pop(); *(float*)ADDR(esp) = _v; } /* 0x100C4380: fstp dword ptr [esp] */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x100C4383: push dword ptr [ebp + 0xc] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x100C4386: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_100C5E33); /* 0x100C4389: call 0x100c5e33 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x100C438E: add esp, 4 */
    _flag_k = FK_ADD;
    _st[0] = -_st[0]; /* 0x100C4391: fchs  */
    { float _v = (float)fp_pop(); *(float*)ADDR(esp) = _v; } /* 0x100C4393: fstp dword ptr [esp] */
    RECOMP_CALL(sub_100AADAF); /* 0x100C4396: call 0x100aadaf */
    RECOMP_FLAGS_IN();
    PUSH32(esp, edx); /* 0x100C439B: push edx */
    PUSH32(esp, eax); /* 0x100C439C: push eax */
    RECOMP_CALL(sub_100C4693); /* 0x100C439D: call 0x100c4693 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, edx); /* 0x100C43A2: push edx */
    PUSH32(esp, eax); /* 0x100C43A3: push eax */
    MEM32(ebp + 0x8) = eax; /* 0x100C43A4: mov dword ptr [ebp + 8], eax */
    MEM32(ebp + 0xC) = edx; /* 0x100C43A7: mov dword ptr [ebp + 0xc], edx */
    RECOMP_CALL(sub_100C6B58); /* 0x100C43AA: call 0x100c6b58 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x14u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x14u; /* 0x100C43AF: add esp, 0x14 */
    _flag_k = FK_ADD;
    _st[0] = -_st[0]; /* 0x100C43B2: fchs  */
    { float _v = (float)fp_pop(); *(float*)ADDR(esp) = _v; } /* 0x100C43B4: fstp dword ptr [esp] */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x100C43B7: push dword ptr [ebp + 0xc] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x100C43BA: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_100C5E33); /* 0x100C43BD: call 0x100c5e33 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x100C43C2: pop ecx */
    { float _v = (float)fp_pop(); *(float*)ADDR(esp) = _v; } /* 0x100C43C3: fstp dword ptr [esp] */
    RECOMP_CALL(sub_100AADAF); /* 0x100C43C6: call 0x100aadaf */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x100C43CB: pop ecx */
    ecx = POP32_VAL(esp); /* 0x100C43CC: pop ecx */
    ebp = POP32_VAL(esp); /* 0x100C43CD: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x100C43CE: ret  */
    RECOMP_REGS_OUT();
}

void sub_100C43CF(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x100C43CFu);

L_100C43CF:
    PUSH32(esp, ebp); /* 0x100C43CF: push ebp */
    ebp = esp; /* 0x100C43D0: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x30u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x30u; /* 0x100C43D2: sub esp, 0x30 */
    _flag_k = FK_CMP;
    PUSH32(esp, esi); /* 0x100C43D5: push esi */
    PUSH32(esp, edi); /* 0x100C43D6: push edi */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x10u; /* 0x100C43D7: sub esp, 0x10 */
    _flag_k = FK_CMP;
    esi = ebp + 0xC; /* 0x100C43DA: lea esi, [ebp + 0xc] */
    edi = esp; /* 0x100C43DD: mov edi, esp */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x100C43DF: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x100C43E0: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x100C43E1: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x100C43E2: movsd dword ptr es:[edi], dword ptr [esi] */
    RECOMP_CALL(sub_100C6B29); /* 0x100C43E3: call 0x100c6b29 */
    RECOMP_FLAGS_IN();
    edi = esp; /* 0x100C43E8: mov edi, esp */
    esi = ebp + 0xC; /* 0x100C43EA: lea esi, [ebp + 0xc] */
    { double _v = fp_pop(); *(double*)ADDR(ebp + (-0x10)) = _v; } /* 0x100C43ED: fstp qword ptr [ebp - 0x10] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x100C43F0: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x100C43F1: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x100C43F2: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x100C43F3: movsd dword ptr es:[edi], dword ptr [esi] */
    RECOMP_CALL(sub_100C5E60); /* 0x100C43F4: call 0x100c5e60 */
    RECOMP_FLAGS_IN();
    eax = ebp + (-0x10); /* 0x100C43F9: lea eax, [ebp - 0x10] */
    PUSH32(esp, eax); /* 0x100C43FC: push eax */
    { double _v = fp_pop(); *(double*)ADDR(ebp + (-0x8)) = _v; } /* 0x100C43FD: fstp qword ptr [ebp - 8] */
    RECOMP_CALL(sub_100BFE08); /* 0x100C4400: call 0x100bfe08 */
    RECOMP_FLAGS_IN();
    esi = (uint32_t)LO16(eax); /* 0x100C4405: movzx esi, ax */
    eax = ebp + (-0x8); /* 0x100C4408: lea eax, [ebp - 8] */
    PUSH32(esp, eax); /* 0x100C440B: push eax */
    RECOMP_CALL(sub_100BFE08); /* 0x100C440C: call 0x100bfe08 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x18u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x18u; /* 0x100C4411: add esp, 0x18 */
    _flag_k = FK_ADD;
    eax = (uint32_t)LO16(eax); /* 0x100C4414: movzx eax, ax */
    PUSH32(esp, 2); /* 0x100C4417: push 2 */
    ecx = POP32_VAL(esp); /* 0x100C4419: pop ecx */
    /* cmp LO16(esi), LO16(ecx) */ /* 0x100C441A: cmp si, cx */
    _flag_a = (uint32_t)(LO16(esi)) << 16; _flag_b = (uint32_t)(LO16(ecx)) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    if (CMP_NE(_flag_a, _flag_b)) goto L_100C4450; /* 0x100C441D: jne 0x100c4450 */
L_100C441F:
    /* cmp LO16(eax), LO16(ecx) */ /* 0x100C441F: cmp ax, cx */
    _flag_a = (uint32_t)(LO16(eax)) << 16; _flag_b = (uint32_t)(LO16(ecx)) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    if (CMP_NE(_flag_a, _flag_b)) goto L_100C4429; /* 0x100C4422: jne 0x100c4429 */
L_100C4424:
    fp_push(*(double*)ADDR(ebp + (-0x10))); /* 0x100C4424: fld qword ptr [ebp - 0x10] */
    goto L_100C447C; /* 0x100C4427: jmp 0x100c447c */
L_100C4429:
    /* cmp LO16(eax), 1 */ /* 0x100C4429: cmp ax, 1 */
    _flag_a = (uint32_t)(LO16(eax)) << 16; _flag_b = (uint32_t)(1) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    if (CMP_NE(_flag_a, _flag_b)) goto L_100C4446; /* 0x100C442D: jne 0x100c4446 */
L_100C442F:
    fp_push(0.0); /* 0x100C442F: fldz  */
    _fpu_cmp = FPU_CMP(_st[0], *(double*)ADDR(ebp + (-0x8))); /* 0x100C4431: fcom qword ptr [ebp - 8] */
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x100C4434: fnstsw ax */
    /* test HI8(eax), 0x41u */ /* 0x100C4436: test ah, 0x41 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(0x41u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_100C44AD; /* 0x100C4439: jne 0x100c44ad */
L_100C443B:
    fp_push(*(double*)ADDR(0x10063C48)); /* 0x100C443B: fld qword ptr [0x10063c48] */
    goto L_100C4668; /* 0x100C4441: jmp 0x100c4668 */
L_100C4446:
    fp_push(*(double*)ADDR(ebp + (-0x10))); /* 0x100C4446: fld qword ptr [ebp - 0x10] */
L_100C4449:
    fp_push(_st[0]); /* 0x100C4449: fld st(0) */
    goto L_100C4668; /* 0x100C444B: jmp 0x100c4668 */
L_100C4450:
    /* cmp LO16(eax), LO16(ecx) */ /* 0x100C4450: cmp ax, cx */
    _flag_a = (uint32_t)(LO16(eax)) << 16; _flag_b = (uint32_t)(LO16(ecx)) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    if (CMP_NE(_flag_a, _flag_b)) goto L_100C4484; /* 0x100C4453: jne 0x100c4484 */
L_100C4455:
    /* cmp LO16(esi), 1 */ /* 0x100C4455: cmp si, 1 */
    _flag_a = (uint32_t)(LO16(esi)) << 16; _flag_b = (uint32_t)(1) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_100C4465; /* 0x100C4459: je 0x100c4465 */
L_100C445B:
    /* test LO16(esi), LO16(esi) */ /* 0x100C445B: test si, si */
    _flag_a = (uint32_t)(LO16(esi)) << 16; _flag_b = (uint32_t)(LO16(esi)) << 16;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 16);
    if (TEST_Z(_flag_a, _flag_b)) goto L_100C4465; /* 0x100C445E: je 0x100c4465 */
L_100C4460:
    fp_push(*(double*)ADDR(ebp + (-0x8))); /* 0x100C4460: fld qword ptr [ebp - 8] */
    RECOMP_BACKEDGE();
    goto L_100C4449; /* 0x100C4463: jmp 0x100c4449 */
L_100C4465:
    eax = (uint32_t)MEM16(ebp + (-0xA)); /* 0x100C4465: movzx eax, word ptr [ebp - 0xa] */
    /* test eax, 0x8000u */ /* 0x100C4469: test eax, 0x8000 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x8000u);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_100C447A; /* 0x100C446E: je 0x100c447a */
L_100C4470:
    fp_push(*(double*)ADDR(0x10065C08)); /* 0x100C4470: fld qword ptr [0x10065c08] */
    _st[0] = -_st[0]; /* 0x100C4476: fchs  */
    goto L_100C447C; /* 0x100C4478: jmp 0x100c447c */
L_100C447A:
    fp_push(0.0); /* 0x100C447A: fldz  */
L_100C447C:
    fp_push(*(double*)ADDR(ebp + (-0x8))); /* 0x100C447C: fld qword ptr [ebp - 8] */
    goto L_100C4668; /* 0x100C447F: jmp 0x100c4668 */
L_100C4484:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edi = 0; /* 0x100C4484: xor edi, edi */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(1);
    edi = edi + 1; /* 0x100C4486: inc edi */
    _flag_k = FK_INC;
    /* cmp LO16(esi), LO16(edi) */ /* 0x100C4487: cmp si, di */
    _flag_a = (uint32_t)(LO16(esi)) << 16; _flag_b = (uint32_t)(LO16(edi)) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    if (CMP_NE(_flag_a, _flag_b)) goto L_100C44B8; /* 0x100C448A: jne 0x100c44b8 */
L_100C448C:
    fp_push(0.0); /* 0x100C448C: fldz  */
    _fpu_cmp = FPU_CMP(_st[0], *(double*)ADDR(ebp + (-0x10))); /* 0x100C448E: fcom qword ptr [ebp - 0x10] */
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x100C4491: fnstsw ax */
    /* test HI8(eax), 0x41u */ /* 0x100C4493: test ah, 0x41 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(0x41u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_100C44A2; /* 0x100C4496: jne 0x100c44a2 */
L_100C4498:
    { _st[0] = _st[0]; g_st_i64[0] = g_st_i64[0]; fp_pop(); } /* 0x100C4498: fstp st(0) */
    fp_push(*(double*)ADDR(0x10065C08)); /* 0x100C449A: fld qword ptr [0x10065c08] */
    _st[0] = -_st[0]; /* 0x100C44A0: fchs  */
L_100C44A2:
    eax = (uint32_t)MEM16(ebp + (-0x2)); /* 0x100C44A2: movzx eax, word ptr [ebp - 2] */
    /* test eax, 0x8000u */ /* 0x100C44A6: test eax, 0x8000 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x8000u);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_100C443B; /* 0x100C44AB: jne 0x100c443b */
L_100C44AD:
    fp_push(*(double*)ADDR(0x10063C20)); /* 0x100C44AD: fld qword ptr [0x10063c20] */
    goto L_100C4668; /* 0x100C44B3: jmp 0x100c4668 */
L_100C44B8:
    eax = (uint32_t)MEM16(ebp + (-0x2)); /* 0x100C44B8: movzx eax, word ptr [ebp - 2] */
    fp_push(*(double*)ADDR(ebp + (-0x8))); /* 0x100C44BC: fld qword ptr [ebp - 8] */
    fp_push(_st[0]); /* 0x100C44BF: fld st(0) */
    /* test eax, 0x8000u */ /* 0x100C44C1: test eax, 0x8000 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x8000u);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_100C44CA; /* 0x100C44C6: je 0x100c44ca */
L_100C44C8:
    _st[0] = -_st[0]; /* 0x100C44C8: fchs  */
L_100C44CA:
    *(double*)ADDR(ebp + (-0x18)) = _st[0]; /* 0x100C44CA: fst qword ptr [ebp - 0x18] */
    fp_push(0.0); /* 0x100C44CD: fldz  */
    fp_push(*(double*)ADDR(ebp + (-0x10))); /* 0x100C44CF: fld qword ptr [ebp - 0x10] */
    _fpu_cmp = FPU_CMP(_st[0], _st[1]); /* 0x100C44D2: fcom st(1) */
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x100C44D4: fnstsw ax */
    /* test HI8(eax), 5 */ /* 0x100C44D6: test ah, 5 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(5) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (RECOMP_PF((_flag_a & _flag_b), 24)) goto L_100C44E2; /* 0x100C44D9: jp 0x100c44e2 */
L_100C44DB:
    _st[0] = -_st[0]; /* 0x100C44DB: fchs  */
    *(double*)ADDR(ebp + (-0x10)) = _st[0]; /* 0x100C44DD: fst qword ptr [ebp - 0x10] */
    goto L_100C44ED; /* 0x100C44E0: jmp 0x100c44ed */
L_100C44E2:
    fp_xch(3); /* 0x100C44E2: fxch st(3) */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edi = 0; /* 0x100C44E4: xor edi, edi */
    _cf = 0;
    _flag_k = FK_TEST;
    _st[0] = -_st[0]; /* 0x100C44E6: fchs  */
    *(double*)ADDR(ebp + (-0x8)) = _st[0]; /* 0x100C44E8: fst qword ptr [ebp - 8] */
    fp_xch(3); /* 0x100C44EB: fxch st(3) */
L_100C44ED:
    fp_push(*(double*)ADDR(0x10063C28)); /* 0x100C44ED: fld qword ptr [0x10063c28] */
    _fpu_cmp = FPU_CMP(_st[0], _st[1]); /* 0x100C44F3: fcom st(1) */
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x100C44F5: fnstsw ax */
    /* test HI8(eax), 5 */ /* 0x100C44F7: test ah, 5 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(5) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (RECOMP_PF((_flag_a & _flag_b), 24)) goto L_100C4528; /* 0x100C44FA: jp 0x100c4528 */
L_100C44FC:
    { _st[0] = _st[0]; g_st_i64[0] = g_st_i64[0]; fp_pop(); } /* 0x100C44FC: fstp st(0) */
    { _st[2] = _st[0]; g_st_i64[2] = g_st_i64[0]; fp_pop(); } /* 0x100C44FE: fstp st(2) */
    fp_push(_st[2]); /* 0x100C4500: fld st(2) */
    _st[0] /= _st[2]; /* 0x100C4502: fdiv st(2) */
    fp_push(1.0); /* 0x100C4504: fld1  */
    fp_push(_st[0]); /* 0x100C4506: fld st(0) */
    { double _v = fp_pop(); _st[3] = _st[3] == 0.0 ? _v : _v / _st[3]; } /* 0x100C4508: fdivrp st(4) */
    fp_xch(1); /* 0x100C450A: fxch st(1) */
    _st[0] *= _st[0]; /* 0x100C450C: fmul st(0), st(0) */
    { double _v = fp_pop(); _st[0] += _v; } /* 0x100C450E: faddp st(1) */
    { double _v = fp_pop(); _st[1] = _v == 0.0 ? _st[1] : _st[1] / _v; } /* 0x100C4510: fdivp st(2) */
    _fpu_cmp = FPU_CMP(_st[0], _st[2]); /* 0x100C4512: fcomp st(2) */
    fp_pop();
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x100C4514: fnstsw ax */
    { _st[1] = _st[0]; g_st_i64[1] = g_st_i64[0]; fp_pop(); } /* 0x100C4516: fstp st(1) */
    /* test HI8(eax), 0x41u */ /* 0x100C4518: test ah, 0x41 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(0x41u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_100C4552; /* 0x100C451B: je 0x100c4552 */
L_100C451D:
    fp_push(*(double*)ADDR(0x10063C20)); /* 0x100C451D: fld qword ptr [0x10063c20] */
    goto L_100C465E; /* 0x100C4523: jmp 0x100c465e */
L_100C4528:
    _fpu_cmp = FPU_CMP(_st[0], _st[3]); /* 0x100C4528: fcomp st(3) */
    fp_pop();
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x100C452A: fnstsw ax */
    /* test HI8(eax), 5 */ /* 0x100C452C: test ah, 5 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(5) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (RECOMP_PF((_flag_a & _flag_b), 24)) goto L_100C455D; /* 0x100C452F: jp 0x100c455d */
L_100C4531:
    { _st[2] = _st[0]; g_st_i64[2] = g_st_i64[0]; fp_pop(); } /* 0x100C4531: fstp st(2) */
    fp_xch(1); /* 0x100C4533: fxch st(1) */
    _st[0] /= _st[2]; /* 0x100C4535: fdiv st(2) */
    fp_push(_st[0]); /* 0x100C4537: fld st(0) */
    _st[0] /= _st[3]; /* 0x100C4539: fdiv st(3) */
    fp_xch(1); /* 0x100C453B: fxch st(1) */
    _st[0] *= _st[0]; /* 0x100C453D: fmul st(0), st(0) */
    _st[0] += *(double*)ADDR(0x10067CD8); /* 0x100C453F: fadd qword ptr [0x10067cd8] */
    { double _v = fp_pop(); _st[0] = _v == 0.0 ? _st[0] : _st[0] / _v; } /* 0x100C4545: fdivp st(1) */
    fp_xch(2); /* 0x100C4547: fxch st(2) */
    _fpu_cmp = FPU_CMP(_st[0], _st[1]); /* 0x100C4549: fcompp  */
    fp_pop(); fp_pop();
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x100C454B: fnstsw ax */
    /* test HI8(eax), 5 */ /* 0x100C454D: test ah, 5 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(5) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    RECOMP_BACKEDGE();
    if (RECOMP_PF((_flag_a & _flag_b), 24)) goto L_100C451D; /* 0x100C4550: jp 0x100c451d */
L_100C4552:
    fp_push(*(double*)ADDR(0x10063C48)); /* 0x100C4552: fld qword ptr [0x10063c48] */
    goto L_100C465E; /* 0x100C4558: jmp 0x100c465e */
L_100C455D:
    fp_push(1.0); /* 0x100C455D: fld1  */
    _fpu_cmp = FPU_CMP(_st[0], _st[1]); /* 0x100C455F: fucom st(1) */
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x100C4561: fnstsw ax */
    /* test HI8(eax), 0x44u */ /* 0x100C4563: test ah, 0x44 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(0x44u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if ((!RECOMP_PF((_flag_a & _flag_b), 24))) goto L_100C45CC; /* 0x100C4566: jnp 0x100c45cc */
L_100C4568:
    { _st[4] = _st[0]; g_st_i64[4] = g_st_i64[0]; fp_pop(); } /* 0x100C4568: fstp st(4) */
    { _st[1] = _st[0]; g_st_i64[1] = g_st_i64[0]; fp_pop(); } /* 0x100C456A: fstp st(1) */
    _st[2] -= _st[0]; /* 0x100C456C: fsub st(2), st(0) */
    fp_xch(2); /* 0x100C456E: fxch st(2) */
    PUSH32(esp, ecx); /* 0x100C4570: push ecx */
    PUSH32(esp, ecx); /* 0x100C4571: push ecx */
    *(double*)ADDR(ebp + (-0x28)) = _st[0]; /* 0x100C4572: fst qword ptr [ebp - 0x28] */
    fp_xch(1); /* 0x100C4575: fxch st(1) */
    _st[0] *= _st[0]; /* 0x100C4577: fmul st(0), st(0) */
    *(double*)ADDR(ebp + (-0x18)) = _st[0]; /* 0x100C4579: fst qword ptr [ebp - 0x18] */
    fp_xch(2); /* 0x100C457C: fxch st(2) */
    _st[0] *= *(double*)ADDR(0x10063C68); /* 0x100C457E: fmul qword ptr [0x10063c68] */
    fp_push(_st[1]); /* 0x100C4584: fld st(1) */
    { double _v = fp_pop(); _st[1] *= _v; } /* 0x100C4586: fmulp st(2) */
    fp_xch(1); /* 0x100C4588: fxch st(1) */
    { double _v = fp_pop(); _st[1] += _v; } /* 0x100C458A: faddp st(2) */
    { double _v = fp_pop(); _st[0] = _st[0] == 0.0 ? _v : _v / _st[0]; } /* 0x100C458C: fdivrp st(1) */
    { double _v = fp_pop(); *(double*)ADDR(esp) = _v; } /* 0x100C458E: fstp qword ptr [esp] */
    RECOMP_CALL(sub_100CF1BD); /* 0x100C4591: call 0x100cf1bd */
    RECOMP_FLAGS_IN();
    _st[0] *= *(double*)ADDR(0x10063C60); /* 0x100C4596: fmul qword ptr [0x10063c60] */
    { double _v = fp_pop(); *(double*)ADDR(ebp + (-0x20)) = _v; } /* 0x100C459C: fstp qword ptr [ebp - 0x20] */
    fp_push(*(double*)ADDR(ebp + (-0x10))); /* 0x100C459F: fld qword ptr [ebp - 0x10] */
    fp_push(1.0); /* 0x100C45A2: fld1  */
    { double _v = fp_pop(); _st[0] += _v; } /* 0x100C45A4: faddp st(1) */
    _st[0] *= *(double*)ADDR(ebp + (-0x28)); /* 0x100C45A6: fmul qword ptr [ebp - 0x28] */
    _st[0] -= *(double*)ADDR(ebp + (-0x18)); /* 0x100C45A9: fsub qword ptr [ebp - 0x18] */
    { double _v = fp_pop(); *(double*)ADDR(esp) = _v; } /* 0x100C45AC: fstp qword ptr [esp] */
    fp_push(*(double*)ADDR(ebp + (-0x8))); /* 0x100C45AF: fld qword ptr [ebp - 8] */
    _st[0] += _st[0]; /* 0x100C45B2: fadd st(0), st(0) */
    PUSH32(esp, ecx); /* 0x100C45B4: push ecx */
    PUSH32(esp, ecx); /* 0x100C45B5: push ecx */
    { double _v = fp_pop(); *(double*)ADDR(esp) = _v; } /* 0x100C45B6: fstp qword ptr [esp] */
    RECOMP_CALL(sub_10036582); /* 0x100C45B9: call 0x10036582 */
    RECOMP_FLAGS_IN();
    _st[0] *= *(double*)ADDR(0x10063BD0); /* 0x100C45BE: fmul qword ptr [0x10063bd0] */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x10u; /* 0x100C45C4: add esp, 0x10 */
    _flag_k = FK_ADD;
    goto L_100C4659; /* 0x100C45C7: jmp 0x100c4659 */
L_100C45CC:
    { _st[0] = _st[0]; g_st_i64[0] = g_st_i64[0]; fp_pop(); } /* 0x100C45CC: fstp st(0) */
    { _st[2] = _st[0]; g_st_i64[2] = g_st_i64[0]; fp_pop(); } /* 0x100C45CE: fstp st(2) */
    { _st[1] = _st[0]; g_st_i64[1] = g_st_i64[0]; fp_pop(); } /* 0x100C45D0: fstp st(1) */
    _fpu_cmp = FPU_CMP(_st[0], _st[1]); /* 0x100C45D2: fucomp st(1) */
    fp_pop();
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x100C45D4: fnstsw ax */
    /* test HI8(eax), 0x44u */ /* 0x100C45D6: test ah, 0x44 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(0x44u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (RECOMP_PF((_flag_a & _flag_b), 24)) goto L_100C45F0; /* 0x100C45D9: jp 0x100c45f0 */
L_100C45DB:
    PUSH32(esp, 4); /* 0x100C45DB: push 4 */
    { _st[0] = _st[0]; g_st_i64[0] = g_st_i64[0]; fp_pop(); } /* 0x100C45DD: fstp st(0) */
    RECOMP_CALL(sub_100BFFA8); /* 0x100C45DF: call 0x100bffa8 */
    RECOMP_FLAGS_IN();
    fp_push(*(double*)ADDR(0x10065B48)); /* 0x100C45E4: fld qword ptr [0x10065b48] */
    fp_push(*(double*)ADDR(ebp + (-0x8))); /* 0x100C45EA: fld qword ptr [ebp - 8] */
    ecx = POP32_VAL(esp); /* 0x100C45ED: pop ecx */
    goto L_100C465E; /* 0x100C45EE: jmp 0x100c465e */
L_100C45F0:
    _st[0] *= _st[0]; /* 0x100C45F0: fmul st(0), st(0) */
    PUSH32(esp, ecx); /* 0x100C45F2: push ecx */
    PUSH32(esp, ecx); /* 0x100C45F3: push ecx */
    _st[0] += *(double*)ADDR(0x10063C68); /* 0x100C45F4: fadd qword ptr [0x10063c68] */
    { double _v = fp_pop(); *(double*)ADDR(esp) = _v; } /* 0x100C45FA: fstp qword ptr [esp] */
    RECOMP_CALL(sub_10036E0B); /* 0x100C45FD: call 0x10036e0b */
    RECOMP_FLAGS_IN();
    { double _v = fp_pop(); *(double*)ADDR(esp) = _v; } /* 0x100C4602: fstp qword ptr [esp] */
    RECOMP_CALL(sub_10036E0B); /* 0x100C4605: call 0x10036e0b */
    RECOMP_FLAGS_IN();
    { double _v = fp_pop(); *(double*)ADDR(ebp + (-0x28)) = _v; } /* 0x100C460A: fstp qword ptr [ebp - 0x28] */
    fp_push(*(double*)ADDR(ebp + (-0x18))); /* 0x100C460D: fld qword ptr [ebp - 0x18] */
    { double _v = fp_pop(); *(double*)ADDR(esp) = _v; } /* 0x100C4610: fstp qword ptr [esp] */
    RECOMP_CALL(sub_10036E0B); /* 0x100C4613: call 0x10036e0b */
    RECOMP_FLAGS_IN();
    _st[0] = *(double*)ADDR(ebp + (-0x28)) / _st[0]; /* 0x100C4618: fdivr qword ptr [ebp - 0x28] */
    { double _v = fp_pop(); *(double*)ADDR(esp) = _v; } /* 0x100C461B: fstp qword ptr [esp] */
    RECOMP_CALL(sub_100367A8); /* 0x100C461E: call 0x100367a8 */
    RECOMP_FLAGS_IN();
    { double _v = fp_pop(); *(double*)ADDR(ebp + (-0x20)) = _v; } /* 0x100C4623: fstp qword ptr [ebp - 0x20] */
    fp_push(*(double*)ADDR(0x10063BE8)); /* 0x100C4626: fld qword ptr [0x10063be8] */
    { double _v = fp_pop(); *(double*)ADDR(esp) = _v; } /* 0x100C462C: fstp qword ptr [esp] */
    fp_push(*(double*)ADDR(ebp + (-0x18))); /* 0x100C462F: fld qword ptr [ebp - 0x18] */
    PUSH32(esp, ecx); /* 0x100C4632: push ecx */
    PUSH32(esp, ecx); /* 0x100C4633: push ecx */
    { double _v = fp_pop(); *(double*)ADDR(esp) = _v; } /* 0x100C4634: fstp qword ptr [esp] */
    RECOMP_CALL(sub_10036582); /* 0x100C4637: call 0x10036582 */
    RECOMP_FLAGS_IN();
    _st[0] += *(double*)ADDR(0x10063C20); /* 0x100C463C: fadd qword ptr [0x10063c20] */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x10u; /* 0x100C4642: add esp, 0x10 */
    _flag_k = FK_ADD;
    _st[0] *= *(double*)ADDR(0x10063BD0); /* 0x100C4645: fmul qword ptr [0x10063bd0] */
    fp_push(0.0); /* 0x100C464B: fldz  */
    _fpu_cmp = FPU_CMP(_st[0], *(double*)ADDR(ebp + (-0x8))); /* 0x100C464D: fcomp qword ptr [ebp - 8] */
    fp_pop();
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x100C4650: fnstsw ax */
    /* test HI8(eax), 0x41u */ /* 0x100C4652: test ah, 0x41 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(0x41u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_100C4659; /* 0x100C4655: jne 0x100c4659 */
L_100C4657:
    _st[0] = -_st[0]; /* 0x100C4657: fchs  */
L_100C4659:
    fp_push(*(double*)ADDR(ebp + (-0x20))); /* 0x100C4659: fld qword ptr [ebp - 0x20] */
    fp_xch(1); /* 0x100C465C: fxch st(1) */
L_100C465E:
    /* test edi, edi */ /* 0x100C465E: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_100C468F; /* 0x100C4660: je 0x100c468f */
L_100C4662:
    fp_xch(1); /* 0x100C4662: fxch st(1) */
    _st[0] = -_st[0]; /* 0x100C4664: fchs  */
    fp_xch(1); /* 0x100C4666: fxch st(1) */
L_100C4668:
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x10u; /* 0x100C4668: sub esp, 0x10 */
    _flag_k = FK_CMP;
    eax = ebp + (-0x30); /* 0x100C466B: lea eax, [ebp - 0x30] */
    { double _v = fp_pop(); *(double*)ADDR(esp + 0x8) = _v; } /* 0x100C466E: fstp qword ptr [esp + 8] */
    { double _v = fp_pop(); *(double*)ADDR(esp) = _v; } /* 0x100C4672: fstp qword ptr [esp] */
    PUSH32(esp, eax); /* 0x100C4675: push eax */
    RECOMP_CALL(sub_100AACD2); /* 0x100C4676: call 0x100aacd2 */
    RECOMP_FLAGS_IN();
    esi = eax; /* 0x100C467B: mov esi, eax */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x14u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x14u; /* 0x100C467D: add esp, 0x14 */
    _flag_k = FK_ADD;
    eax = MEM32(ebp + 0x8); /* 0x100C4680: mov eax, dword ptr [ebp + 8] */
    edi = eax; /* 0x100C4683: mov edi, eax */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x100C4685: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x100C4686: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x100C4687: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x100C4688: movsd dword ptr es:[edi], dword ptr [esi] */
    edi = POP32_VAL(esp); /* 0x100C4689: pop edi */
    esi = POP32_VAL(esp); /* 0x100C468A: pop esi */
    esp = ebp; /* 0x100C468B: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x100C468D: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x100C468E: ret  */
L_100C468F:
    _st[0] = -_st[0]; /* 0x100C468F: fchs  */
    RECOMP_BACKEDGE();
    goto L_100C4668; /* 0x100C4691: jmp 0x100c4668 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    RECOMP_REGS_OUT();
}

void sub_100C4693(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x100C4693u);

L_100C4693:
    PUSH32(esp, ebp); /* 0x100C4693: push ebp */
    ebp = esp; /* 0x100C4694: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x18u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x18u; /* 0x100C4696: sub esp, 0x18 */
    _flag_k = FK_CMP;
    PUSH32(esp, esi); /* 0x100C4699: push esi */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x100C469A: push dword ptr [ebp + 0xc] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x100C469D: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_100C6B58); /* 0x100C46A0: call 0x100c6b58 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x100C46A5: push dword ptr [ebp + 0xc] */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x10)) = _v; } /* 0x100C46A8: fstp dword ptr [ebp - 0x10] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x100C46AB: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_100C5E33); /* 0x100C46AE: call 0x100c5e33 */
    RECOMP_FLAGS_IN();
    eax = ebp + (-0x10); /* 0x100C46B3: lea eax, [ebp - 0x10] */
    PUSH32(esp, eax); /* 0x100C46B6: push eax */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0xC)) = _v; } /* 0x100C46B7: fstp dword ptr [ebp - 0xc] */
    RECOMP_CALL(sub_100BFF5C); /* 0x100C46BA: call 0x100bff5c */
    RECOMP_FLAGS_IN();
    esi = (uint32_t)LO16(eax); /* 0x100C46BF: movzx esi, ax */
    eax = ebp + (-0xC); /* 0x100C46C2: lea eax, [ebp - 0xc] */
    PUSH32(esp, eax); /* 0x100C46C5: push eax */
    RECOMP_CALL(sub_100BFF5C); /* 0x100C46C6: call 0x100bff5c */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x18u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x18u; /* 0x100C46CB: add esp, 0x18 */
    _flag_k = FK_ADD;
    eax = (uint32_t)LO16(eax); /* 0x100C46CE: movzx eax, ax */
    PUSH32(esp, 2); /* 0x100C46D1: push 2 */
    ecx = POP32_VAL(esp); /* 0x100C46D3: pop ecx */
    /* cmp LO16(esi), LO16(ecx) */ /* 0x100C46D4: cmp si, cx */
    _flag_a = (uint32_t)(LO16(esi)) << 16; _flag_b = (uint32_t)(LO16(ecx)) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    if (CMP_NE(_flag_a, _flag_b)) goto L_100C4710; /* 0x100C46D7: jne 0x100c4710 */
L_100C46D9:
    /* cmp LO16(eax), LO16(ecx) */ /* 0x100C46D9: cmp ax, cx */
    _flag_a = (uint32_t)(LO16(eax)) << 16; _flag_b = (uint32_t)(LO16(ecx)) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    if (CMP_NE(_flag_a, _flag_b)) goto L_100C46E3; /* 0x100C46DC: jne 0x100c46e3 */
L_100C46DE:
    fp_push(*(float*)&MEM32(ebp + (-0x10))); /* 0x100C46DE: fld dword ptr [ebp - 0x10] */
    goto L_100C473C; /* 0x100C46E1: jmp 0x100c473c */
L_100C46E3:
    /* cmp LO16(eax), 1 */ /* 0x100C46E3: cmp ax, 1 */
    _flag_a = (uint32_t)(LO16(eax)) << 16; _flag_b = (uint32_t)(1) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    if (CMP_NE(_flag_a, _flag_b)) goto L_100C4708; /* 0x100C46E7: jne 0x100c4708 */
L_100C46E9:
    fp_push(0.0); /* 0x100C46E9: fldz  */
    { float _v = (float)_st[0]; *(float*)ADDR(ebp + (-0x8)) = _v; } /* 0x100C46EB: fst dword ptr [ebp - 8] */
    _fpu_cmp = FPU_CMP(_st[0], (double)*(float*)ADDR(ebp + (-0xC))); /* 0x100C46EE: fcomp dword ptr [ebp - 0xc] */
    fp_pop();
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x100C46F1: fnstsw ax */
    /* test HI8(eax), 0x41u */ /* 0x100C46F3: test ah, 0x41 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(0x41u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_100C4700; /* 0x100C46F6: jne 0x100c4700 */
L_100C46F8:
    fp_push(*(float*)&MEM32(0x10063C50)); /* 0x100C46F8: fld dword ptr [0x10063c50] */
    goto L_100C4742; /* 0x100C46FE: jmp 0x100c4742 */
L_100C4700:
    fp_push(*(float*)&MEM32(0x10063C34)); /* 0x100C4700: fld dword ptr [0x10063c34] */
    goto L_100C4742; /* 0x100C4706: jmp 0x100c4742 */
L_100C4708:
    fp_push(*(float*)&MEM32(ebp + (-0x10))); /* 0x100C4708: fld dword ptr [ebp - 0x10] */
L_100C470B:
    { float _v = (float)_st[0]; *(float*)ADDR(ebp + (-0x8)) = _v; } /* 0x100C470B: fst dword ptr [ebp - 8] */
    goto L_100C4742; /* 0x100C470E: jmp 0x100c4742 */
L_100C4710:
    /* cmp LO16(eax), LO16(ecx) */ /* 0x100C4710: cmp ax, cx */
    _flag_a = (uint32_t)(LO16(eax)) << 16; _flag_b = (uint32_t)(LO16(ecx)) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    if (CMP_NE(_flag_a, _flag_b)) goto L_100C474A; /* 0x100C4713: jne 0x100c474a */
L_100C4715:
    /* cmp LO16(esi), 1 */ /* 0x100C4715: cmp si, 1 */
    _flag_a = (uint32_t)(LO16(esi)) << 16; _flag_b = (uint32_t)(1) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_100C4725; /* 0x100C4719: je 0x100c4725 */
L_100C471B:
    /* test LO16(esi), LO16(esi) */ /* 0x100C471B: test si, si */
    _flag_a = (uint32_t)(LO16(esi)) << 16; _flag_b = (uint32_t)(LO16(esi)) << 16;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 16);
    if (TEST_Z(_flag_a, _flag_b)) goto L_100C4725; /* 0x100C471E: je 0x100c4725 */
L_100C4720:
    fp_push(*(float*)&MEM32(ebp + (-0xC))); /* 0x100C4720: fld dword ptr [ebp - 0xc] */
    RECOMP_BACKEDGE();
    goto L_100C470B; /* 0x100C4723: jmp 0x100c470b */
L_100C4725:
    eax = (uint32_t)MEM16(ebp + (-0xE)); /* 0x100C4725: movzx eax, word ptr [ebp - 0xe] */
    /* test eax, 0x8000u */ /* 0x100C4729: test eax, 0x8000 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x8000u);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_100C473A; /* 0x100C472E: je 0x100c473a */
L_100C4730:
    fp_push(*(float*)&MEM32(0x10065C18)); /* 0x100C4730: fld dword ptr [0x10065c18] */
    _st[0] = -_st[0]; /* 0x100C4736: fchs  */
    goto L_100C473C; /* 0x100C4738: jmp 0x100c473c */
L_100C473A:
    fp_push(0.0); /* 0x100C473A: fldz  */
L_100C473C:
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x8)) = _v; } /* 0x100C473C: fstp dword ptr [ebp - 8] */
    fp_push(*(float*)&MEM32(ebp + (-0xC))); /* 0x100C473F: fld dword ptr [ebp - 0xc] */
L_100C4742:
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x4)) = _v; } /* 0x100C4742: fstp dword ptr [ebp - 4] */
    goto L_100C497F; /* 0x100C4745: jmp 0x100c497f */
L_100C474A:
    PUSH32(esp, edi); /* 0x100C474A: push edi */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edi = 0; /* 0x100C474B: xor edi, edi */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(1);
    edi = edi + 1; /* 0x100C474D: inc edi */
    _flag_k = FK_INC;
    /* cmp LO16(esi), LO16(edi) */ /* 0x100C474E: cmp si, di */
    _flag_a = (uint32_t)(LO16(esi)) << 16; _flag_b = (uint32_t)(LO16(edi)) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    if (CMP_NE(_flag_a, _flag_b)) goto L_100C478D; /* 0x100C4751: jne 0x100c478d */
L_100C4753:
    fp_push(0.0); /* 0x100C4753: fldz  */
    _fpu_cmp = FPU_CMP(_st[0], (double)*(float*)ADDR(ebp + (-0x10))); /* 0x100C4755: fcom dword ptr [ebp - 0x10] */
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x100C4758: fnstsw ax */
    /* test HI8(eax), 0x41u */ /* 0x100C475A: test ah, 0x41 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(0x41u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_100C4769; /* 0x100C475D: jne 0x100c4769 */
L_100C475F:
    { _st[0] = _st[0]; g_st_i64[0] = g_st_i64[0]; fp_pop(); } /* 0x100C475F: fstp st(0) */
    fp_push(*(float*)&MEM32(0x10065C18)); /* 0x100C4761: fld dword ptr [0x10065c18] */
    _st[0] = -_st[0]; /* 0x100C4767: fchs  */
L_100C4769:
    eax = (uint32_t)MEM16(ebp + (-0xA)); /* 0x100C4769: movzx eax, word ptr [ebp - 0xa] */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x8)) = _v; } /* 0x100C476D: fstp dword ptr [ebp - 8] */
    /* test eax, 0x8000u */ /* 0x100C4770: test eax, 0x8000 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x8000u);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_100C4782; /* 0x100C4775: je 0x100c4782 */
L_100C4777:
    fp_push(*(float*)&MEM32(0x10063C50)); /* 0x100C4777: fld dword ptr [0x10063c50] */
    goto L_100C497B; /* 0x100C477D: jmp 0x100c497b */
L_100C4782:
    fp_push(*(float*)&MEM32(0x10063C34)); /* 0x100C4782: fld dword ptr [0x10063c34] */
    goto L_100C497B; /* 0x100C4788: jmp 0x100c497b */
L_100C478D:
    eax = (uint32_t)MEM16(ebp + (-0xA)); /* 0x100C478D: movzx eax, word ptr [ebp - 0xa] */
    fp_push(*(float*)&MEM32(ebp + (-0xC))); /* 0x100C4791: fld dword ptr [ebp - 0xc] */
    /* test eax, 0x8000u */ /* 0x100C4794: test eax, 0x8000 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x8000u);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_100C47A4; /* 0x100C4799: je 0x100c47a4 */
L_100C479B:
    fp_push(_st[0]); /* 0x100C479B: fld st(0) */
    _st[0] = -_st[0]; /* 0x100C479D: fchs  */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x4)) = _v; } /* 0x100C479F: fstp dword ptr [ebp - 4] */
    goto L_100C47A7; /* 0x100C47A2: jmp 0x100c47a7 */
L_100C47A4:
    { float _v = (float)_st[0]; *(float*)ADDR(ebp + (-0x4)) = _v; } /* 0x100C47A4: fst dword ptr [ebp - 4] */
L_100C47A7:
    fp_push(0.0); /* 0x100C47A7: fldz  */
    fp_push(*(float*)&MEM32(ebp + (-0x10))); /* 0x100C47A9: fld dword ptr [ebp - 0x10] */
    _fpu_cmp = FPU_CMP(_st[0], _st[1]); /* 0x100C47AC: fcom st(1) */
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x100C47AE: fnstsw ax */
    /* test HI8(eax), 5 */ /* 0x100C47B0: test ah, 5 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(5) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (RECOMP_PF((_flag_a & _flag_b), 24)) goto L_100C47BF; /* 0x100C47B3: jp 0x100c47bf */
L_100C47B5:
    _st[0] = -_st[0]; /* 0x100C47B5: fchs  */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x10)) = _v; } /* 0x100C47B7: fstp dword ptr [ebp - 0x10] */
    fp_push(*(float*)&MEM32(ebp + (-0x10))); /* 0x100C47BA: fld dword ptr [ebp - 0x10] */
    goto L_100C47CD; /* 0x100C47BD: jmp 0x100c47cd */
L_100C47BF:
    fp_xch(2); /* 0x100C47BF: fxch st(2) */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edi = 0; /* 0x100C47C1: xor edi, edi */
    _cf = 0;
    _flag_k = FK_TEST;
    _st[0] = -_st[0]; /* 0x100C47C3: fchs  */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0xC)) = _v; } /* 0x100C47C5: fstp dword ptr [ebp - 0xc] */
    fp_push(*(float*)&MEM32(ebp + (-0xC))); /* 0x100C47C8: fld dword ptr [ebp - 0xc] */
    fp_xch(2); /* 0x100C47CB: fxch st(2) */
L_100C47CD:
    fp_push(*(double*)ADDR(0x10063C40)); /* 0x100C47CD: fld qword ptr [0x10063c40] */
    _fpu_cmp = FPU_CMP(_st[0], _st[1]); /* 0x100C47D3: fcom st(1) */
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x100C47D5: fnstsw ax */
    /* test HI8(eax), 5 */ /* 0x100C47D7: test ah, 5 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(5) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (RECOMP_PF((_flag_a & _flag_b), 24)) goto L_100C481A; /* 0x100C47DA: jp 0x100c481a */
L_100C47DC:
    { _st[0] = _st[0]; g_st_i64[0] = g_st_i64[0]; fp_pop(); } /* 0x100C47DC: fstp st(0) */
    fp_push(_st[2]); /* 0x100C47DE: fld st(2) */
    fp_push(_st[1]); /* 0x100C47E0: fld st(1) */
    { double _v = fp_pop(); _st[0] = _v == 0.0 ? _st[0] : _st[0] / _v; } /* 0x100C47E2: fdivp st(1) */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x14)) = _v; } /* 0x100C47E4: fstp dword ptr [ebp - 0x14] */
    fp_push(*(float*)&MEM32(ebp + (-0x14))); /* 0x100C47E7: fld dword ptr [ebp - 0x14] */
    fp_push(1.0); /* 0x100C47EA: fld1  */
    fp_push(_st[0]); /* 0x100C47EC: fld st(0) */
    { double _v = fp_pop(); _st[2] = _st[2] == 0.0 ? _v : _v / _st[2]; } /* 0x100C47EE: fdivrp st(3) */
    fp_xch(1); /* 0x100C47F0: fxch st(1) */
    _st[0] *= _st[0]; /* 0x100C47F2: fmul st(0), st(0) */
    { double _v = fp_pop(); _st[0] += _v; } /* 0x100C47F4: faddp st(1) */
L_100C47F6:
    { double _v = fp_pop(); _st[0] = _v == 0.0 ? _st[0] : _st[0] / _v; } /* 0x100C47F6: fdivp st(1) */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x8)) = _v; } /* 0x100C47F8: fstp dword ptr [ebp - 8] */
    _fpu_cmp = FPU_CMP(_st[0], _st[1]); /* 0x100C47FB: fcompp  */
    fp_pop(); fp_pop();
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x100C47FD: fnstsw ax */
    /* test HI8(eax), 0x41u */ /* 0x100C47FF: test ah, 0x41 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(0x41u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_100C480F; /* 0x100C4802: jne 0x100c480f */
L_100C4804:
    fp_push(*(float*)&MEM32(0x10063C50)); /* 0x100C4804: fld dword ptr [0x10063c50] */
    goto L_100C4965; /* 0x100C480A: jmp 0x100c4965 */
L_100C480F:
    fp_push(*(float*)&MEM32(0x10063C34)); /* 0x100C480F: fld dword ptr [0x10063c34] */
    goto L_100C4965; /* 0x100C4815: jmp 0x100c4965 */
L_100C481A:
    fp_push(*(float*)&MEM32(ebp + (-0x4))); /* 0x100C481A: fld dword ptr [ebp - 4] */
    _fpu_cmp = FPU_CMP(_st[0], _st[1]); /* 0x100C481D: fcom st(1) */
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x100C481F: fnstsw ax */
    { _st[1] = _st[0]; g_st_i64[1] = g_st_i64[0]; fp_pop(); } /* 0x100C4821: fstp st(1) */
    /* test HI8(eax), 0x41u */ /* 0x100C4823: test ah, 0x41 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(0x41u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_100C4846; /* 0x100C4826: jne 0x100c4846 */
L_100C4828:
    { _st[0] = _st[0]; g_st_i64[0] = g_st_i64[0]; fp_pop(); } /* 0x100C4828: fstp st(0) */
    fp_push(_st[2]); /* 0x100C482A: fld st(2) */
    { double _v = fp_pop(); _st[0] = _v == 0.0 ? _st[0] : _st[0] / _v; } /* 0x100C482C: fdivp st(1) */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x14)) = _v; } /* 0x100C482E: fstp dword ptr [ebp - 0x14] */
    fp_push(*(float*)&MEM32(ebp + (-0x14))); /* 0x100C4831: fld dword ptr [ebp - 0x14] */
    fp_push(_st[0]); /* 0x100C4834: fld st(0) */
    fp_push(_st[3]); /* 0x100C4836: fld st(3) */
    { double _v = fp_pop(); _st[0] = _v == 0.0 ? _st[0] : _st[0] / _v; } /* 0x100C4838: fdivp st(1) */
    fp_xch(1); /* 0x100C483A: fxch st(1) */
    _st[0] *= _st[0]; /* 0x100C483C: fmul st(0), st(0) */
    _st[0] += *(double*)ADDR(0x10067CD8); /* 0x100C483E: fadd qword ptr [0x10067cd8] */
    RECOMP_BACKEDGE();
    goto L_100C47F6; /* 0x100C4844: jmp 0x100c47f6 */
L_100C4846:
    fp_push(1.0); /* 0x100C4846: fld1  */
    _fpu_cmp = FPU_CMP(_st[0], _st[2]); /* 0x100C4848: fucomp st(2) */
    fp_pop();
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x100C484A: fnstsw ax */
    /* test HI8(eax), 0x44u */ /* 0x100C484C: test ah, 0x44 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(0x44u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if ((!RECOMP_PF((_flag_a & _flag_b), 24))) goto L_100C48C8; /* 0x100C484F: jnp 0x100c48c8 */
L_100C4851:
    { _st[3] = _st[0]; g_st_i64[3] = g_st_i64[0]; fp_pop(); } /* 0x100C4851: fstp st(3) */
    { _st[1] = _st[0]; g_st_i64[1] = g_st_i64[0]; fp_pop(); } /* 0x100C4853: fstp st(1) */
    fp_push(_st[0]); /* 0x100C4855: fld st(0) */
    fp_push(1.0); /* 0x100C4857: fld1  */
    { double _v = fp_pop(); _st[0] = _v - _st[0]; } /* 0x100C4859: fsubrp st(1) */
    PUSH32(esp, ecx); /* 0x100C485B: push ecx */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x4)) = _v; } /* 0x100C485C: fstp dword ptr [ebp - 4] */
    fp_xch(1); /* 0x100C485F: fxch st(1) */
    _st[0] *= _st[0]; /* 0x100C4861: fmul st(0), st(0) */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x14)) = _v; } /* 0x100C4863: fstp dword ptr [ebp - 0x14] */
    fp_push(*(float*)&MEM32(ebp + (-0x4))); /* 0x100C4866: fld dword ptr [ebp - 4] */
    fp_xch(1); /* 0x100C4869: fxch st(1) */
    _st[0] *= *(double*)ADDR(0x10063C68); /* 0x100C486B: fmul qword ptr [0x10063c68] */
    fp_xch(1); /* 0x100C4871: fxch st(1) */
    _st[0] *= _st[0]; /* 0x100C4873: fmul st(0), st(0) */
    _st[0] += (double)*(float*)ADDR(ebp + (-0x14)); /* 0x100C4875: fadd dword ptr [ebp - 0x14] */
    { double _v = fp_pop(); _st[0] = _v == 0.0 ? _st[0] : _st[0] / _v; } /* 0x100C4878: fdivp st(1) */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x8)) = _v; } /* 0x100C487A: fstp dword ptr [ebp - 8] */
    fp_push(*(float*)&MEM32(ebp + (-0x8))); /* 0x100C487D: fld dword ptr [ebp - 8] */
    { float _v = (float)fp_pop(); *(float*)ADDR(esp) = _v; } /* 0x100C4880: fstp dword ptr [esp] */
    RECOMP_CALL(sub_100CF25E); /* 0x100C4883: call 0x100cf25e */
    RECOMP_FLAGS_IN();
    _st[0] *= *(double*)ADDR(0x10063C60); /* 0x100C4888: fmul qword ptr [0x10063c60] */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x8)) = _v; } /* 0x100C488E: fstp dword ptr [ebp - 8] */
    fp_push(*(float*)&MEM32(ebp + (-0x10))); /* 0x100C4891: fld dword ptr [ebp - 0x10] */
    fp_push(1.0); /* 0x100C4894: fld1  */
    { double _v = fp_pop(); _st[0] += _v; } /* 0x100C4896: faddp st(1) */
    _st[0] *= (double)*(float*)ADDR(ebp + (-0x4)); /* 0x100C4898: fmul dword ptr [ebp - 4] */
    _st[0] -= (double)*(float*)ADDR(ebp + (-0x14)); /* 0x100C489B: fsub dword ptr [ebp - 0x14] */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x14)) = _v; } /* 0x100C489E: fstp dword ptr [ebp - 0x14] */
    fp_push(*(float*)&MEM32(ebp + (-0x14))); /* 0x100C48A1: fld dword ptr [ebp - 0x14] */
    { float _v = (float)fp_pop(); *(float*)ADDR(esp) = _v; } /* 0x100C48A4: fstp dword ptr [esp] */
    fp_push(*(float*)&MEM32(ebp + (-0xC))); /* 0x100C48A7: fld dword ptr [ebp - 0xc] */
    _st[0] += _st[0]; /* 0x100C48AA: fadd st(0), st(0) */
    PUSH32(esp, ecx); /* 0x100C48AC: push ecx */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x14)) = _v; } /* 0x100C48AD: fstp dword ptr [ebp - 0x14] */
    fp_push(*(float*)&MEM32(ebp + (-0x14))); /* 0x100C48B0: fld dword ptr [ebp - 0x14] */
    { float _v = (float)fp_pop(); *(float*)ADDR(esp) = _v; } /* 0x100C48B3: fstp dword ptr [esp] */
    RECOMP_CALL(sub_100C2892); /* 0x100C48B6: call 0x100c2892 */
    RECOMP_FLAGS_IN();
    _st[0] *= *(double*)ADDR(0x10063BD0); /* 0x100C48BB: fmul qword ptr [0x10063bd0] */
    ecx = POP32_VAL(esp); /* 0x100C48C1: pop ecx */
    ecx = POP32_VAL(esp); /* 0x100C48C2: pop ecx */
    goto L_100C4965; /* 0x100C48C3: jmp 0x100c4965 */
L_100C48C8:
    { _st[1] = _st[0]; g_st_i64[1] = g_st_i64[0]; fp_pop(); } /* 0x100C48C8: fstp st(1) */
    { _st[0] = _st[0]; g_st_i64[0] = g_st_i64[0]; fp_pop(); } /* 0x100C48CA: fstp st(0) */
    _fpu_cmp = FPU_CMP(_st[0], _st[1]); /* 0x100C48CC: fucomp st(1) */
    fp_pop();
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x100C48CE: fnstsw ax */
    /* test HI8(eax), 0x44u */ /* 0x100C48D0: test ah, 0x44 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(0x44u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (RECOMP_PF((_flag_a & _flag_b), 24)) goto L_100C48ED; /* 0x100C48D3: jp 0x100c48ed */
L_100C48D5:
    PUSH32(esp, 4); /* 0x100C48D5: push 4 */
    { _st[0] = _st[0]; g_st_i64[0] = g_st_i64[0]; fp_pop(); } /* 0x100C48D7: fstp st(0) */
    RECOMP_CALL(sub_100BFFA8); /* 0x100C48D9: call 0x100bffa8 */
    RECOMP_FLAGS_IN();
    fp_push(*(float*)&MEM32(0x10065B68)); /* 0x100C48DE: fld dword ptr [0x10065b68] */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x8)) = _v; } /* 0x100C48E4: fstp dword ptr [ebp - 8] */
    fp_push(*(float*)&MEM32(ebp + (-0xC))); /* 0x100C48E7: fld dword ptr [ebp - 0xc] */
    ecx = POP32_VAL(esp); /* 0x100C48EA: pop ecx */
    goto L_100C4965; /* 0x100C48EB: jmp 0x100c4965 */
L_100C48ED:
    _st[0] *= _st[0]; /* 0x100C48ED: fmul st(0), st(0) */
    PUSH32(esp, ecx); /* 0x100C48EF: push ecx */
    _st[0] += *(double*)ADDR(0x10063C68); /* 0x100C48F0: fadd qword ptr [0x10063c68] */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x14)) = _v; } /* 0x100C48F6: fstp dword ptr [ebp - 0x14] */
    fp_push(*(float*)&MEM32(ebp + (-0x14))); /* 0x100C48F9: fld dword ptr [ebp - 0x14] */
    { float _v = (float)fp_pop(); *(float*)ADDR(esp) = _v; } /* 0x100C48FC: fstp dword ptr [esp] */
    RECOMP_CALL(sub_100C20C9); /* 0x100C48FF: call 0x100c20c9 */
    RECOMP_FLAGS_IN();
    { float _v = (float)fp_pop(); *(float*)ADDR(esp) = _v; } /* 0x100C4904: fstp dword ptr [esp] */
    RECOMP_CALL(sub_100C20C9); /* 0x100C4907: call 0x100c20c9 */
    RECOMP_FLAGS_IN();
    { double _v = fp_pop(); *(double*)ADDR(ebp + (-0x18)) = _v; } /* 0x100C490C: fstp qword ptr [ebp - 0x18] */
    fp_push(*(float*)&MEM32(ebp + (-0x4))); /* 0x100C490F: fld dword ptr [ebp - 4] */
    { float _v = (float)fp_pop(); *(float*)ADDR(esp) = _v; } /* 0x100C4912: fstp dword ptr [esp] */
    RECOMP_CALL(sub_100C20C9); /* 0x100C4915: call 0x100c20c9 */
    RECOMP_FLAGS_IN();
    _st[0] = *(double*)ADDR(ebp + (-0x18)) / _st[0]; /* 0x100C491A: fdivr qword ptr [ebp - 0x18] */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x14)) = _v; } /* 0x100C491D: fstp dword ptr [ebp - 0x14] */
    fp_push(*(float*)&MEM32(ebp + (-0x14))); /* 0x100C4920: fld dword ptr [ebp - 0x14] */
    { float _v = (float)fp_pop(); *(float*)ADDR(esp) = _v; } /* 0x100C4923: fstp dword ptr [esp] */
    RECOMP_CALL(sub_100C20AF); /* 0x100C4926: call 0x100c20af */
    RECOMP_FLAGS_IN();
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x8)) = _v; } /* 0x100C492B: fstp dword ptr [ebp - 8] */
    fp_push(*(float*)&MEM32(0x10063C70)); /* 0x100C492E: fld dword ptr [0x10063c70] */
    { float _v = (float)fp_pop(); *(float*)ADDR(esp) = _v; } /* 0x100C4934: fstp dword ptr [esp] */
    fp_push(*(float*)&MEM32(ebp + (-0x4))); /* 0x100C4937: fld dword ptr [ebp - 4] */
    PUSH32(esp, ecx); /* 0x100C493A: push ecx */
    { float _v = (float)fp_pop(); *(float*)ADDR(esp) = _v; } /* 0x100C493B: fstp dword ptr [esp] */
    RECOMP_CALL(sub_100C2892); /* 0x100C493E: call 0x100c2892 */
    RECOMP_FLAGS_IN();
    _st[0] += *(double*)ADDR(0x100C49A0); /* 0x100C4943: fadd qword ptr [0x100c49a0] */
    ecx = POP32_VAL(esp); /* 0x100C4949: pop ecx */
    ecx = POP32_VAL(esp); /* 0x100C494A: pop ecx */
    _st[0] *= *(double*)ADDR(0x10063BD0); /* 0x100C494B: fmul qword ptr [0x10063bd0] */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x4)) = _v; } /* 0x100C4951: fstp dword ptr [ebp - 4] */
    fp_push(0.0); /* 0x100C4954: fldz  */
    _fpu_cmp = FPU_CMP(_st[0], (double)*(float*)ADDR(ebp + (-0xC))); /* 0x100C4956: fcomp dword ptr [ebp - 0xc] */
    fp_pop();
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x100C4959: fnstsw ax */
    /* test HI8(eax), 0x41u */ /* 0x100C495B: test ah, 0x41 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(0x41u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_100C4968; /* 0x100C495E: jne 0x100c4968 */
L_100C4960:
    fp_push(*(float*)&MEM32(ebp + (-0x4))); /* 0x100C4960: fld dword ptr [ebp - 4] */
    _st[0] = -_st[0]; /* 0x100C4963: fchs  */
L_100C4965:
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x4)) = _v; } /* 0x100C4965: fstp dword ptr [ebp - 4] */
L_100C4968:
    /* test edi, edi */ /* 0x100C4968: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_100C4976; /* 0x100C496A: je 0x100c4976 */
L_100C496C:
    fp_push(*(float*)&MEM32(ebp + (-0x8))); /* 0x100C496C: fld dword ptr [ebp - 8] */
    _st[0] = -_st[0]; /* 0x100C496F: fchs  */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x8)) = _v; } /* 0x100C4971: fstp dword ptr [ebp - 8] */
    goto L_100C497E; /* 0x100C4974: jmp 0x100c497e */
L_100C4976:
    fp_push(*(float*)&MEM32(ebp + (-0x4))); /* 0x100C4976: fld dword ptr [ebp - 4] */
    _st[0] = -_st[0]; /* 0x100C4979: fchs  */
L_100C497B:
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x4)) = _v; } /* 0x100C497B: fstp dword ptr [ebp - 4] */
L_100C497E:
    edi = POP32_VAL(esp); /* 0x100C497E: pop edi */
L_100C497F:
    fp_push(*(float*)&MEM32(ebp + (-0x4))); /* 0x100C497F: fld dword ptr [ebp - 4] */
    PUSH32(esp, ecx); /* 0x100C4982: push ecx */
    PUSH32(esp, ecx); /* 0x100C4983: push ecx */
    { float _v = (float)fp_pop(); *(float*)ADDR(esp + 0x4) = _v; } /* 0x100C4984: fstp dword ptr [esp + 4] */
    fp_push(*(float*)&MEM32(ebp + (-0x8))); /* 0x100C4988: fld dword ptr [ebp - 8] */
    { float _v = (float)fp_pop(); *(float*)ADDR(esp) = _v; } /* 0x100C498B: fstp dword ptr [esp] */
    RECOMP_CALL(sub_100AADAF); /* 0x100C498E: call 0x100aadaf */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x100C4993: pop ecx */
    ecx = POP32_VAL(esp); /* 0x100C4994: pop ecx */
    esi = POP32_VAL(esp); /* 0x100C4995: pop esi */
    esp = ebp; /* 0x100C4996: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x100C4998: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x100C4999: ret  */
    RECOMP_REGS_OUT();
}

void sub_100C49A8(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x100C49A8u);

L_100C49A8:
    PUSH32(esp, ebp); /* 0x100C49A8: push ebp */
    ebp = esp; /* 0x100C49A9: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x30u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x30u; /* 0x100C49AB: sub esp, 0x30 */
    _flag_k = FK_CMP;
    PUSH32(esp, esi); /* 0x100C49AE: push esi */
    PUSH32(esp, edi); /* 0x100C49AF: push edi */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x10u; /* 0x100C49B0: sub esp, 0x10 */
    _flag_k = FK_CMP;
    esi = ebp + 0xC; /* 0x100C49B3: lea esi, [ebp + 0xc] */
    edi = esp; /* 0x100C49B6: mov edi, esp */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x100C49B8: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x100C49B9: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x100C49BA: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x100C49BB: movsd dword ptr es:[edi], dword ptr [esi] */
    RECOMP_CALL(sub_100C6B29); /* 0x100C49BC: call 0x100c6b29 */
    RECOMP_FLAGS_IN();
    edi = esp; /* 0x100C49C1: mov edi, esp */
    esi = ebp + 0xC; /* 0x100C49C3: lea esi, [ebp + 0xc] */
    { double _v = fp_pop(); *(double*)ADDR(ebp + (-0x10)) = _v; } /* 0x100C49C6: fstp qword ptr [ebp - 0x10] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x100C49C9: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x100C49CA: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x100C49CB: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x100C49CC: movsd dword ptr es:[edi], dword ptr [esi] */
    RECOMP_CALL(sub_100C5E60); /* 0x100C49CD: call 0x100c5e60 */
    RECOMP_FLAGS_IN();
    eax = ebp + (-0x10); /* 0x100C49D2: lea eax, [ebp - 0x10] */
    PUSH32(esp, eax); /* 0x100C49D5: push eax */
    { double _v = fp_pop(); *(double*)ADDR(ebp + (-0x8)) = _v; } /* 0x100C49D6: fstp qword ptr [ebp - 8] */
    RECOMP_CALL(sub_100C0034); /* 0x100C49D9: call 0x100c0034 */
    RECOMP_FLAGS_IN();
    esi = (uint32_t)LO16(eax); /* 0x100C49DE: movzx esi, ax */
    eax = ebp + (-0x8); /* 0x100C49E1: lea eax, [ebp - 8] */
    PUSH32(esp, eax); /* 0x100C49E4: push eax */
    RECOMP_CALL(sub_100C0034); /* 0x100C49E5: call 0x100c0034 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x18u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x18u; /* 0x100C49EA: add esp, 0x18 */
    _flag_k = FK_ADD;
    eax = (uint32_t)LO16(eax); /* 0x100C49ED: movzx eax, ax */
    PUSH32(esp, 2); /* 0x100C49F0: push 2 */
    ecx = POP32_VAL(esp); /* 0x100C49F2: pop ecx */
    /* cmp LO16(esi), LO16(ecx) */ /* 0x100C49F3: cmp si, cx */
    _flag_a = (uint32_t)(LO16(esi)) << 16; _flag_b = (uint32_t)(LO16(ecx)) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    if (CMP_NE(_flag_a, _flag_b)) goto L_100C4A29; /* 0x100C49F6: jne 0x100c4a29 */
L_100C49F8:
    /* cmp LO16(eax), LO16(ecx) */ /* 0x100C49F8: cmp ax, cx */
    _flag_a = (uint32_t)(LO16(eax)) << 16; _flag_b = (uint32_t)(LO16(ecx)) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    if (CMP_NE(_flag_a, _flag_b)) goto L_100C4A02; /* 0x100C49FB: jne 0x100c4a02 */
L_100C49FD:
    fp_push(*(double*)ADDR(ebp + (-0x10))); /* 0x100C49FD: fld qword ptr [ebp - 0x10] */
    goto L_100C4A55; /* 0x100C4A00: jmp 0x100c4a55 */
L_100C4A02:
    /* cmp LO16(eax), 1 */ /* 0x100C4A02: cmp ax, 1 */
    _flag_a = (uint32_t)(LO16(eax)) << 16; _flag_b = (uint32_t)(1) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    if (CMP_NE(_flag_a, _flag_b)) goto L_100C4A1F; /* 0x100C4A06: jne 0x100c4a1f */
L_100C4A08:
    fp_push(0.0); /* 0x100C4A08: fldz  */
    _fpu_cmp = FPU_CMP(_st[0], *(double*)ADDR(ebp + (-0x8))); /* 0x100C4A0A: fcom qword ptr [ebp - 8] */
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x100C4A0D: fnstsw ax */
    /* test HI8(eax), 0x41u */ /* 0x100C4A0F: test ah, 0x41 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(0x41u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_100C4A86; /* 0x100C4A12: jne 0x100c4a86 */
L_100C4A14:
    fp_push(*(double*)ADDR(0x10063C48)); /* 0x100C4A14: fld qword ptr [0x10063c48] */
    goto L_100C4C41; /* 0x100C4A1A: jmp 0x100c4c41 */
L_100C4A1F:
    fp_push(*(double*)ADDR(ebp + (-0x10))); /* 0x100C4A1F: fld qword ptr [ebp - 0x10] */
L_100C4A22:
    fp_push(_st[0]); /* 0x100C4A22: fld st(0) */
    goto L_100C4C41; /* 0x100C4A24: jmp 0x100c4c41 */
L_100C4A29:
    /* cmp LO16(eax), LO16(ecx) */ /* 0x100C4A29: cmp ax, cx */
    _flag_a = (uint32_t)(LO16(eax)) << 16; _flag_b = (uint32_t)(LO16(ecx)) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    if (CMP_NE(_flag_a, _flag_b)) goto L_100C4A5D; /* 0x100C4A2C: jne 0x100c4a5d */
L_100C4A2E:
    /* cmp LO16(esi), 1 */ /* 0x100C4A2E: cmp si, 1 */
    _flag_a = (uint32_t)(LO16(esi)) << 16; _flag_b = (uint32_t)(1) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_100C4A3E; /* 0x100C4A32: je 0x100c4a3e */
L_100C4A34:
    /* test LO16(esi), LO16(esi) */ /* 0x100C4A34: test si, si */
    _flag_a = (uint32_t)(LO16(esi)) << 16; _flag_b = (uint32_t)(LO16(esi)) << 16;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 16);
    if (TEST_Z(_flag_a, _flag_b)) goto L_100C4A3E; /* 0x100C4A37: je 0x100c4a3e */
L_100C4A39:
    fp_push(*(double*)ADDR(ebp + (-0x8))); /* 0x100C4A39: fld qword ptr [ebp - 8] */
    RECOMP_BACKEDGE();
    goto L_100C4A22; /* 0x100C4A3C: jmp 0x100c4a22 */
L_100C4A3E:
    eax = (uint32_t)MEM16(ebp + (-0xA)); /* 0x100C4A3E: movzx eax, word ptr [ebp - 0xa] */
    /* test eax, 0x8000u */ /* 0x100C4A42: test eax, 0x8000 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x8000u);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_100C4A53; /* 0x100C4A47: je 0x100c4a53 */
L_100C4A49:
    fp_push(*(double*)ADDR(0x10065C20)); /* 0x100C4A49: fld qword ptr [0x10065c20] */
    _st[0] = -_st[0]; /* 0x100C4A4F: fchs  */
    goto L_100C4A55; /* 0x100C4A51: jmp 0x100c4a55 */
L_100C4A53:
    fp_push(0.0); /* 0x100C4A53: fldz  */
L_100C4A55:
    fp_push(*(double*)ADDR(ebp + (-0x8))); /* 0x100C4A55: fld qword ptr [ebp - 8] */
    goto L_100C4C41; /* 0x100C4A58: jmp 0x100c4c41 */
L_100C4A5D:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edi = 0; /* 0x100C4A5D: xor edi, edi */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(1);
    edi = edi + 1; /* 0x100C4A5F: inc edi */
    _flag_k = FK_INC;
    /* cmp LO16(esi), LO16(edi) */ /* 0x100C4A60: cmp si, di */
    _flag_a = (uint32_t)(LO16(esi)) << 16; _flag_b = (uint32_t)(LO16(edi)) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    if (CMP_NE(_flag_a, _flag_b)) goto L_100C4A91; /* 0x100C4A63: jne 0x100c4a91 */
L_100C4A65:
    fp_push(0.0); /* 0x100C4A65: fldz  */
    _fpu_cmp = FPU_CMP(_st[0], *(double*)ADDR(ebp + (-0x10))); /* 0x100C4A67: fcom qword ptr [ebp - 0x10] */
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x100C4A6A: fnstsw ax */
    /* test HI8(eax), 0x41u */ /* 0x100C4A6C: test ah, 0x41 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(0x41u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_100C4A7B; /* 0x100C4A6F: jne 0x100c4a7b */
L_100C4A71:
    { _st[0] = _st[0]; g_st_i64[0] = g_st_i64[0]; fp_pop(); } /* 0x100C4A71: fstp st(0) */
    fp_push(*(double*)ADDR(0x10065C20)); /* 0x100C4A73: fld qword ptr [0x10065c20] */
    _st[0] = -_st[0]; /* 0x100C4A79: fchs  */
L_100C4A7B:
    eax = (uint32_t)MEM16(ebp + (-0x2)); /* 0x100C4A7B: movzx eax, word ptr [ebp - 2] */
    /* test eax, 0x8000u */ /* 0x100C4A7F: test eax, 0x8000 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x8000u);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_100C4A14; /* 0x100C4A84: jne 0x100c4a14 */
L_100C4A86:
    fp_push(*(double*)ADDR(0x10063C20)); /* 0x100C4A86: fld qword ptr [0x10063c20] */
    goto L_100C4C41; /* 0x100C4A8C: jmp 0x100c4c41 */
L_100C4A91:
    eax = (uint32_t)MEM16(ebp + (-0x2)); /* 0x100C4A91: movzx eax, word ptr [ebp - 2] */
    fp_push(*(double*)ADDR(ebp + (-0x8))); /* 0x100C4A95: fld qword ptr [ebp - 8] */
    fp_push(_st[0]); /* 0x100C4A98: fld st(0) */
    /* test eax, 0x8000u */ /* 0x100C4A9A: test eax, 0x8000 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x8000u);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_100C4AA3; /* 0x100C4A9F: je 0x100c4aa3 */
L_100C4AA1:
    _st[0] = -_st[0]; /* 0x100C4AA1: fchs  */
L_100C4AA3:
    *(double*)ADDR(ebp + (-0x18)) = _st[0]; /* 0x100C4AA3: fst qword ptr [ebp - 0x18] */
    fp_push(0.0); /* 0x100C4AA6: fldz  */
    fp_push(*(double*)ADDR(ebp + (-0x10))); /* 0x100C4AA8: fld qword ptr [ebp - 0x10] */
    _fpu_cmp = FPU_CMP(_st[0], _st[1]); /* 0x100C4AAB: fcom st(1) */
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x100C4AAD: fnstsw ax */
    /* test HI8(eax), 5 */ /* 0x100C4AAF: test ah, 5 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(5) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (RECOMP_PF((_flag_a & _flag_b), 24)) goto L_100C4ABB; /* 0x100C4AB2: jp 0x100c4abb */
L_100C4AB4:
    _st[0] = -_st[0]; /* 0x100C4AB4: fchs  */
    *(double*)ADDR(ebp + (-0x10)) = _st[0]; /* 0x100C4AB6: fst qword ptr [ebp - 0x10] */
    goto L_100C4AC6; /* 0x100C4AB9: jmp 0x100c4ac6 */
L_100C4ABB:
    fp_xch(3); /* 0x100C4ABB: fxch st(3) */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edi = 0; /* 0x100C4ABD: xor edi, edi */
    _cf = 0;
    _flag_k = FK_TEST;
    _st[0] = -_st[0]; /* 0x100C4ABF: fchs  */
    *(double*)ADDR(ebp + (-0x8)) = _st[0]; /* 0x100C4AC1: fst qword ptr [ebp - 8] */
    fp_xch(3); /* 0x100C4AC4: fxch st(3) */
L_100C4AC6:
    fp_push(*(double*)ADDR(0x10063C28)); /* 0x100C4AC6: fld qword ptr [0x10063c28] */
    _fpu_cmp = FPU_CMP(_st[0], _st[1]); /* 0x100C4ACC: fcom st(1) */
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x100C4ACE: fnstsw ax */
    /* test HI8(eax), 5 */ /* 0x100C4AD0: test ah, 5 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(5) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (RECOMP_PF((_flag_a & _flag_b), 24)) goto L_100C4B01; /* 0x100C4AD3: jp 0x100c4b01 */
L_100C4AD5:
    { _st[0] = _st[0]; g_st_i64[0] = g_st_i64[0]; fp_pop(); } /* 0x100C4AD5: fstp st(0) */
    { _st[2] = _st[0]; g_st_i64[2] = g_st_i64[0]; fp_pop(); } /* 0x100C4AD7: fstp st(2) */
    fp_push(_st[2]); /* 0x100C4AD9: fld st(2) */
    _st[0] /= _st[2]; /* 0x100C4ADB: fdiv st(2) */
    fp_push(1.0); /* 0x100C4ADD: fld1  */
    fp_push(_st[0]); /* 0x100C4ADF: fld st(0) */
    { double _v = fp_pop(); _st[3] = _st[3] == 0.0 ? _v : _v / _st[3]; } /* 0x100C4AE1: fdivrp st(4) */
    fp_xch(1); /* 0x100C4AE3: fxch st(1) */
    _st[0] *= _st[0]; /* 0x100C4AE5: fmul st(0), st(0) */
    { double _v = fp_pop(); _st[0] += _v; } /* 0x100C4AE7: faddp st(1) */
    { double _v = fp_pop(); _st[1] = _v == 0.0 ? _st[1] : _st[1] / _v; } /* 0x100C4AE9: fdivp st(2) */
    _fpu_cmp = FPU_CMP(_st[0], _st[2]); /* 0x100C4AEB: fcomp st(2) */
    fp_pop();
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x100C4AED: fnstsw ax */
    { _st[1] = _st[0]; g_st_i64[1] = g_st_i64[0]; fp_pop(); } /* 0x100C4AEF: fstp st(1) */
    /* test HI8(eax), 0x41u */ /* 0x100C4AF1: test ah, 0x41 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(0x41u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_100C4B2B; /* 0x100C4AF4: je 0x100c4b2b */
L_100C4AF6:
    fp_push(*(double*)ADDR(0x10063C20)); /* 0x100C4AF6: fld qword ptr [0x10063c20] */
    goto L_100C4C37; /* 0x100C4AFC: jmp 0x100c4c37 */
L_100C4B01:
    _fpu_cmp = FPU_CMP(_st[0], _st[3]); /* 0x100C4B01: fcomp st(3) */
    fp_pop();
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x100C4B03: fnstsw ax */
    /* test HI8(eax), 5 */ /* 0x100C4B05: test ah, 5 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(5) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (RECOMP_PF((_flag_a & _flag_b), 24)) goto L_100C4B36; /* 0x100C4B08: jp 0x100c4b36 */
L_100C4B0A:
    { _st[2] = _st[0]; g_st_i64[2] = g_st_i64[0]; fp_pop(); } /* 0x100C4B0A: fstp st(2) */
    fp_xch(1); /* 0x100C4B0C: fxch st(1) */
    _st[0] /= _st[2]; /* 0x100C4B0E: fdiv st(2) */
    fp_push(_st[0]); /* 0x100C4B10: fld st(0) */
    _st[0] /= _st[3]; /* 0x100C4B12: fdiv st(3) */
    fp_xch(1); /* 0x100C4B14: fxch st(1) */
    _st[0] *= _st[0]; /* 0x100C4B16: fmul st(0), st(0) */
    _st[0] += *(double*)ADDR(0x10067CD8); /* 0x100C4B18: fadd qword ptr [0x10067cd8] */
    { double _v = fp_pop(); _st[0] = _v == 0.0 ? _st[0] : _st[0] / _v; } /* 0x100C4B1E: fdivp st(1) */
    fp_xch(2); /* 0x100C4B20: fxch st(2) */
    _fpu_cmp = FPU_CMP(_st[0], _st[1]); /* 0x100C4B22: fcompp  */
    fp_pop(); fp_pop();
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x100C4B24: fnstsw ax */
    /* test HI8(eax), 5 */ /* 0x100C4B26: test ah, 5 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(5) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    RECOMP_BACKEDGE();
    if (RECOMP_PF((_flag_a & _flag_b), 24)) goto L_100C4AF6; /* 0x100C4B29: jp 0x100c4af6 */
L_100C4B2B:
    fp_push(*(double*)ADDR(0x10063C48)); /* 0x100C4B2B: fld qword ptr [0x10063c48] */
    goto L_100C4C37; /* 0x100C4B31: jmp 0x100c4c37 */
L_100C4B36:
    fp_push(1.0); /* 0x100C4B36: fld1  */
    _fpu_cmp = FPU_CMP(_st[0], _st[1]); /* 0x100C4B38: fucom st(1) */
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x100C4B3A: fnstsw ax */
    /* test HI8(eax), 0x44u */ /* 0x100C4B3C: test ah, 0x44 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(0x44u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if ((!RECOMP_PF((_flag_a & _flag_b), 24))) goto L_100C4BA5; /* 0x100C4B3F: jnp 0x100c4ba5 */
L_100C4B41:
    { _st[4] = _st[0]; g_st_i64[4] = g_st_i64[0]; fp_pop(); } /* 0x100C4B41: fstp st(4) */
    { _st[1] = _st[0]; g_st_i64[1] = g_st_i64[0]; fp_pop(); } /* 0x100C4B43: fstp st(1) */
    _st[2] -= _st[0]; /* 0x100C4B45: fsub st(2), st(0) */
    fp_xch(2); /* 0x100C4B47: fxch st(2) */
    PUSH32(esp, ecx); /* 0x100C4B49: push ecx */
    PUSH32(esp, ecx); /* 0x100C4B4A: push ecx */
    *(double*)ADDR(ebp + (-0x28)) = _st[0]; /* 0x100C4B4B: fst qword ptr [ebp - 0x28] */
    fp_xch(1); /* 0x100C4B4E: fxch st(1) */
    _st[0] *= _st[0]; /* 0x100C4B50: fmul st(0), st(0) */
    *(double*)ADDR(ebp + (-0x18)) = _st[0]; /* 0x100C4B52: fst qword ptr [ebp - 0x18] */
    fp_xch(2); /* 0x100C4B55: fxch st(2) */
    _st[0] *= *(double*)ADDR(0x10063C68); /* 0x100C4B57: fmul qword ptr [0x10063c68] */
    fp_push(_st[1]); /* 0x100C4B5D: fld st(1) */
    { double _v = fp_pop(); _st[1] *= _v; } /* 0x100C4B5F: fmulp st(2) */
    fp_xch(1); /* 0x100C4B61: fxch st(1) */
    { double _v = fp_pop(); _st[1] += _v; } /* 0x100C4B63: faddp st(2) */
    { double _v = fp_pop(); _st[0] = _st[0] == 0.0 ? _v : _v / _st[0]; } /* 0x100C4B65: fdivrp st(1) */
    { double _v = fp_pop(); *(double*)ADDR(esp) = _v; } /* 0x100C4B67: fstp qword ptr [esp] */
    RECOMP_CALL(sub_100CF305); /* 0x100C4B6A: call 0x100cf305 */
    RECOMP_FLAGS_IN();
    _st[0] *= *(double*)ADDR(0x10063C60); /* 0x100C4B6F: fmul qword ptr [0x10063c60] */
    { double _v = fp_pop(); *(double*)ADDR(ebp + (-0x20)) = _v; } /* 0x100C4B75: fstp qword ptr [ebp - 0x20] */
    fp_push(*(double*)ADDR(ebp + (-0x10))); /* 0x100C4B78: fld qword ptr [ebp - 0x10] */
    fp_push(1.0); /* 0x100C4B7B: fld1  */
    { double _v = fp_pop(); _st[0] += _v; } /* 0x100C4B7D: faddp st(1) */
    _st[0] *= *(double*)ADDR(ebp + (-0x28)); /* 0x100C4B7F: fmul qword ptr [ebp - 0x28] */
    _st[0] -= *(double*)ADDR(ebp + (-0x18)); /* 0x100C4B82: fsub qword ptr [ebp - 0x18] */
    { double _v = fp_pop(); *(double*)ADDR(esp) = _v; } /* 0x100C4B85: fstp qword ptr [esp] */
    fp_push(*(double*)ADDR(ebp + (-0x8))); /* 0x100C4B88: fld qword ptr [ebp - 8] */
    _st[0] += _st[0]; /* 0x100C4B8B: fadd st(0), st(0) */
    PUSH32(esp, ecx); /* 0x100C4B8D: push ecx */
    PUSH32(esp, ecx); /* 0x100C4B8E: push ecx */
    { double _v = fp_pop(); *(double*)ADDR(esp) = _v; } /* 0x100C4B8F: fstp qword ptr [esp] */
    RECOMP_CALL(sub_100C3187); /* 0x100C4B92: call 0x100c3187 */
    RECOMP_FLAGS_IN();
    _st[0] *= *(double*)ADDR(0x10063BD0); /* 0x100C4B97: fmul qword ptr [0x10063bd0] */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x10u; /* 0x100C4B9D: add esp, 0x10 */
    _flag_k = FK_ADD;
    goto L_100C4C32; /* 0x100C4BA0: jmp 0x100c4c32 */
L_100C4BA5:
    { _st[0] = _st[0]; g_st_i64[0] = g_st_i64[0]; fp_pop(); } /* 0x100C4BA5: fstp st(0) */
    { _st[2] = _st[0]; g_st_i64[2] = g_st_i64[0]; fp_pop(); } /* 0x100C4BA7: fstp st(2) */
    { _st[1] = _st[0]; g_st_i64[1] = g_st_i64[0]; fp_pop(); } /* 0x100C4BA9: fstp st(1) */
    _fpu_cmp = FPU_CMP(_st[0], _st[1]); /* 0x100C4BAB: fucomp st(1) */
    fp_pop();
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x100C4BAD: fnstsw ax */
    /* test HI8(eax), 0x44u */ /* 0x100C4BAF: test ah, 0x44 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(0x44u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (RECOMP_PF((_flag_a & _flag_b), 24)) goto L_100C4BC9; /* 0x100C4BB2: jp 0x100c4bc9 */
L_100C4BB4:
    PUSH32(esp, 4); /* 0x100C4BB4: push 4 */
    { _st[0] = _st[0]; g_st_i64[0] = g_st_i64[0]; fp_pop(); } /* 0x100C4BB6: fstp st(0) */
    RECOMP_CALL(sub_100BFFA8); /* 0x100C4BB8: call 0x100bffa8 */
    RECOMP_FLAGS_IN();
    fp_push(*(double*)ADDR(0x10065B88)); /* 0x100C4BBD: fld qword ptr [0x10065b88] */
    fp_push(*(double*)ADDR(ebp + (-0x8))); /* 0x100C4BC3: fld qword ptr [ebp - 8] */
    ecx = POP32_VAL(esp); /* 0x100C4BC6: pop ecx */
    goto L_100C4C37; /* 0x100C4BC7: jmp 0x100c4c37 */
L_100C4BC9:
    _st[0] *= _st[0]; /* 0x100C4BC9: fmul st(0), st(0) */
    PUSH32(esp, ecx); /* 0x100C4BCB: push ecx */
    PUSH32(esp, ecx); /* 0x100C4BCC: push ecx */
    _st[0] += *(double*)ADDR(0x10063C68); /* 0x100C4BCD: fadd qword ptr [0x10063c68] */
    { double _v = fp_pop(); *(double*)ADDR(esp) = _v; } /* 0x100C4BD3: fstp qword ptr [esp] */
    RECOMP_CALL(sub_10036E0B); /* 0x100C4BD6: call 0x10036e0b */
    RECOMP_FLAGS_IN();
    { double _v = fp_pop(); *(double*)ADDR(esp) = _v; } /* 0x100C4BDB: fstp qword ptr [esp] */
    RECOMP_CALL(sub_10036E0B); /* 0x100C4BDE: call 0x10036e0b */
    RECOMP_FLAGS_IN();
    { double _v = fp_pop(); *(double*)ADDR(ebp + (-0x28)) = _v; } /* 0x100C4BE3: fstp qword ptr [ebp - 0x28] */
    fp_push(*(double*)ADDR(ebp + (-0x18))); /* 0x100C4BE6: fld qword ptr [ebp - 0x18] */
    { double _v = fp_pop(); *(double*)ADDR(esp) = _v; } /* 0x100C4BE9: fstp qword ptr [esp] */
    RECOMP_CALL(sub_10036E0B); /* 0x100C4BEC: call 0x10036e0b */
    RECOMP_FLAGS_IN();
    _st[0] = *(double*)ADDR(ebp + (-0x28)) / _st[0]; /* 0x100C4BF1: fdivr qword ptr [ebp - 0x28] */
    { double _v = fp_pop(); *(double*)ADDR(esp) = _v; } /* 0x100C4BF4: fstp qword ptr [esp] */
    RECOMP_CALL(sub_100367A8); /* 0x100C4BF7: call 0x100367a8 */
    RECOMP_FLAGS_IN();
    { double _v = fp_pop(); *(double*)ADDR(ebp + (-0x20)) = _v; } /* 0x100C4BFC: fstp qword ptr [ebp - 0x20] */
    fp_push(*(double*)ADDR(0x10063BE8)); /* 0x100C4BFF: fld qword ptr [0x10063be8] */
    { double _v = fp_pop(); *(double*)ADDR(esp) = _v; } /* 0x100C4C05: fstp qword ptr [esp] */
    fp_push(*(double*)ADDR(ebp + (-0x18))); /* 0x100C4C08: fld qword ptr [ebp - 0x18] */
    PUSH32(esp, ecx); /* 0x100C4C0B: push ecx */
    PUSH32(esp, ecx); /* 0x100C4C0C: push ecx */
    { double _v = fp_pop(); *(double*)ADDR(esp) = _v; } /* 0x100C4C0D: fstp qword ptr [esp] */
    RECOMP_CALL(sub_100C3187); /* 0x100C4C10: call 0x100c3187 */
    RECOMP_FLAGS_IN();
    _st[0] += *(double*)ADDR(0x10063C20); /* 0x100C4C15: fadd qword ptr [0x10063c20] */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x10u; /* 0x100C4C1B: add esp, 0x10 */
    _flag_k = FK_ADD;
    _st[0] *= *(double*)ADDR(0x10063BD0); /* 0x100C4C1E: fmul qword ptr [0x10063bd0] */
    fp_push(0.0); /* 0x100C4C24: fldz  */
    _fpu_cmp = FPU_CMP(_st[0], *(double*)ADDR(ebp + (-0x8))); /* 0x100C4C26: fcomp qword ptr [ebp - 8] */
    fp_pop();
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x100C4C29: fnstsw ax */
    /* test HI8(eax), 0x41u */ /* 0x100C4C2B: test ah, 0x41 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(0x41u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_100C4C32; /* 0x100C4C2E: jne 0x100c4c32 */
L_100C4C30:
    _st[0] = -_st[0]; /* 0x100C4C30: fchs  */
L_100C4C32:
    fp_push(*(double*)ADDR(ebp + (-0x20))); /* 0x100C4C32: fld qword ptr [ebp - 0x20] */
    fp_xch(1); /* 0x100C4C35: fxch st(1) */
L_100C4C37:
    /* test edi, edi */ /* 0x100C4C37: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_100C4C68; /* 0x100C4C39: je 0x100c4c68 */
L_100C4C3B:
    fp_xch(1); /* 0x100C4C3B: fxch st(1) */
    _st[0] = -_st[0]; /* 0x100C4C3D: fchs  */
    fp_xch(1); /* 0x100C4C3F: fxch st(1) */
L_100C4C41:
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x10u; /* 0x100C4C41: sub esp, 0x10 */
    _flag_k = FK_CMP;
    eax = ebp + (-0x30); /* 0x100C4C44: lea eax, [ebp - 0x30] */
    { double _v = fp_pop(); *(double*)ADDR(esp + 0x8) = _v; } /* 0x100C4C47: fstp qword ptr [esp + 8] */
    { double _v = fp_pop(); *(double*)ADDR(esp) = _v; } /* 0x100C4C4B: fstp qword ptr [esp] */
    PUSH32(esp, eax); /* 0x100C4C4E: push eax */
    RECOMP_CALL(sub_100AACD2); /* 0x100C4C4F: call 0x100aacd2 */
    RECOMP_FLAGS_IN();
    esi = eax; /* 0x100C4C54: mov esi, eax */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x14u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x14u; /* 0x100C4C56: add esp, 0x14 */
    _flag_k = FK_ADD;
    eax = MEM32(ebp + 0x8); /* 0x100C4C59: mov eax, dword ptr [ebp + 8] */
    edi = eax; /* 0x100C4C5C: mov edi, eax */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x100C4C5E: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x100C4C5F: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x100C4C60: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x100C4C61: movsd dword ptr es:[edi], dword ptr [esi] */
    edi = POP32_VAL(esp); /* 0x100C4C62: pop edi */
    esi = POP32_VAL(esp); /* 0x100C4C63: pop esi */
    esp = ebp; /* 0x100C4C64: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x100C4C66: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x100C4C67: ret  */
L_100C4C68:
    _st[0] = -_st[0]; /* 0x100C4C68: fchs  */
    RECOMP_BACKEDGE();
    goto L_100C4C41; /* 0x100C4C6A: jmp 0x100c4c41 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    RECOMP_REGS_OUT();
}

void sub_100C4C6C(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x100C4C6Cu);

L_100C4C6C:
    PUSH32(esp, ebp); /* 0x100C4C6C: push ebp */
    ebp = esp; /* 0x100C4C6D: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x20u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x20u; /* 0x100C4C6F: sub esp, 0x20 */
    _flag_k = FK_CMP;
    PUSH32(esp, esi); /* 0x100C4C72: push esi */
    PUSH32(esp, edi); /* 0x100C4C73: push edi */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x10u; /* 0x100C4C74: sub esp, 0x10 */
    _flag_k = FK_CMP;
    esi = ebp + 0xC; /* 0x100C4C77: lea esi, [ebp + 0xc] */
    edi = esp; /* 0x100C4C7A: mov edi, esp */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x100C4C7C: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x100C4C7D: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x100C4C7E: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x100C4C7F: movsd dword ptr es:[edi], dword ptr [esi] */
    RECOMP_CALL(sub_100C6B29); /* 0x100C4C80: call 0x100c6b29 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, ecx); /* 0x100C4C85: push ecx */
    PUSH32(esp, ecx); /* 0x100C4C86: push ecx */
    { double _v = fp_pop(); *(double*)ADDR(esp + 0x10) = _v; } /* 0x100C4C87: fstp qword ptr [esp + 0x10] */
    edi = esp; /* 0x100C4C8B: mov edi, esp */
    esi = ebp + 0xC; /* 0x100C4C8D: lea esi, [ebp + 0xc] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x100C4C90: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x100C4C91: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x100C4C92: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x100C4C93: movsd dword ptr es:[edi], dword ptr [esi] */
    RECOMP_CALL(sub_100C5E60); /* 0x100C4C94: call 0x100c5e60 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 8; /* 0x100C4C99: add esp, 8 */
    _flag_k = FK_ADD;
    eax = ebp + (-0x10); /* 0x100C4C9C: lea eax, [ebp - 0x10] */
    _st[0] = -_st[0]; /* 0x100C4C9F: fchs  */
    { double _v = fp_pop(); *(double*)ADDR(esp) = _v; } /* 0x100C4CA1: fstp qword ptr [esp] */
    PUSH32(esp, eax); /* 0x100C4CA4: push eax */
    RECOMP_CALL(sub_100AACD2); /* 0x100C4CA5: call 0x100aacd2 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x100C4CAA: add esp, 4 */
    _flag_k = FK_ADD;
    esi = eax; /* 0x100C4CAD: mov esi, eax */
    edi = esp; /* 0x100C4CAF: mov edi, esp */
    eax = ebp + (-0x20); /* 0x100C4CB1: lea eax, [ebp - 0x20] */
    PUSH32(esp, eax); /* 0x100C4CB4: push eax */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x100C4CB5: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x100C4CB6: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x100C4CB7: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x100C4CB8: movsd dword ptr es:[edi], dword ptr [esi] */
    RECOMP_CALL(sub_100C49A8); /* 0x100C4CB9: call 0x100c49a8 */
    RECOMP_FLAGS_IN();
    esi = eax; /* 0x100C4CBE: mov esi, eax */
    edi = ebp + 0xC; /* 0x100C4CC0: lea edi, [ebp + 0xc] */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x100C4CC3: add esp, 4 */
    _flag_k = FK_ADD;
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x100C4CC6: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x100C4CC7: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x100C4CC8: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x100C4CC9: movsd dword ptr es:[edi], dword ptr [esi] */
    esi = eax; /* 0x100C4CCA: mov esi, eax */
    edi = esp; /* 0x100C4CCC: mov edi, esp */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x100C4CCE: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x100C4CCF: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x100C4CD0: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x100C4CD1: movsd dword ptr es:[edi], dword ptr [esi] */
    RECOMP_CALL(sub_100C6B29); /* 0x100C4CD2: call 0x100c6b29 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, ecx); /* 0x100C4CD7: push ecx */
    PUSH32(esp, ecx); /* 0x100C4CD8: push ecx */
    edi = esp; /* 0x100C4CD9: mov edi, esp */
    esi = ebp + 0xC; /* 0x100C4CDB: lea esi, [ebp + 0xc] */
    _st[0] = -_st[0]; /* 0x100C4CDE: fchs  */
    { double _v = fp_pop(); *(double*)ADDR(esp + 0x10) = _v; } /* 0x100C4CE0: fstp qword ptr [esp + 0x10] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x100C4CE4: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x100C4CE5: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x100C4CE6: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x100C4CE7: movsd dword ptr es:[edi], dword ptr [esi] */
    RECOMP_CALL(sub_100C5E60); /* 0x100C4CE8: call 0x100c5e60 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x100C4CED: pop ecx */
    ecx = POP32_VAL(esp); /* 0x100C4CEE: pop ecx */
    eax = ebp + (-0x20); /* 0x100C4CEF: lea eax, [ebp - 0x20] */
    { double _v = fp_pop(); *(double*)ADDR(esp) = _v; } /* 0x100C4CF2: fstp qword ptr [esp] */
    PUSH32(esp, eax); /* 0x100C4CF5: push eax */
    RECOMP_CALL(sub_100AACD2); /* 0x100C4CF6: call 0x100aacd2 */
    RECOMP_FLAGS_IN();
    esi = eax; /* 0x100C4CFB: mov esi, eax */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x14u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x14u; /* 0x100C4CFD: add esp, 0x14 */
    _flag_k = FK_ADD;
    eax = MEM32(ebp + 0x8); /* 0x100C4D00: mov eax, dword ptr [ebp + 8] */
    edi = eax; /* 0x100C4D03: mov edi, eax */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x100C4D05: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x100C4D06: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x100C4D07: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x100C4D08: movsd dword ptr es:[edi], dword ptr [esi] */
    edi = POP32_VAL(esp); /* 0x100C4D09: pop edi */
    esi = POP32_VAL(esp); /* 0x100C4D0A: pop esi */
    esp = ebp; /* 0x100C4D0B: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x100C4D0D: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x100C4D0E: ret  */
    RECOMP_REGS_OUT();
}

void sub_100C4D0F(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x100C4D0Fu);

L_100C4D0F:
    PUSH32(esp, ebp); /* 0x100C4D0F: push ebp */
    ebp = esp; /* 0x100C4D10: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x10u; /* 0x100C4D12: sub esp, 0x10 */
    _flag_k = FK_CMP;
    eax = ebp + 0x8; /* 0x100C4D15: lea eax, [ebp + 8] */
    PUSH32(esp, eax); /* 0x100C4D18: push eax */
    eax = ebp + (-0x4); /* 0x100C4D19: lea eax, [ebp - 4] */
    PUSH32(esp, eax); /* 0x100C4D1C: push eax */
    RECOMP_CALL(sub_100D687A); /* 0x100C4D1D: call 0x100d687a */
    RECOMP_FLAGS_IN();
    eax = (uint32_t)(int32_t)(int16_t)LO16(eax); /* 0x100C4D22: cwde  */
    ecx = POP32_VAL(esp); /* 0x100C4D23: pop ecx */
    ecx = POP32_VAL(esp); /* 0x100C4D24: pop ecx */
    /* cmp eax, 2 */ /* 0x100C4D25: cmp eax, 2 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_A(_flag_a, _flag_b)) goto L_100C4D32; /* 0x100C4D28: ja 0x100c4d32 */
L_100C4D2A:
    fp_push(*(double*)ADDR(ebp + 0x8)); /* 0x100C4D2A: fld qword ptr [ebp + 8] */
    goto L_100C4E0F; /* 0x100C4D2D: jmp 0x100c4e0f */
L_100C4D32:
    PUSH32(esp, ebx); /* 0x100C4D32: push ebx */
    PUSH32(esp, esi); /* 0x100C4D33: push esi */
    SET_LO16(esi, MEM16(ebp + (-0x4))); /* 0x100C4D34: mov si, word ptr [ebp - 4] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ebx = 0; /* 0x100C4D38: xor ebx, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = (int32_t)(int16_t)LO16(esi); /* 0x100C4D3A: movsx ecx, si */
    eax = ecx; /* 0x100C4D3D: mov eax, ecx */
    MEM32(ebp + (-0x8)) = 3; /* 0x100C4D3F: mov dword ptr [ebp - 8], 3 */
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFFu : 0; /* 0x100C4D46: cdq  */
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax; int32_t _dv = (int32_t)MEM32(ebp + (-0x8)); /* 0x100C4D47: idiv dword ptr [ebp - 8] */
      if (_dv && !(_dv == -1 && _dividend == INT64_MIN)) { eax = (uint32_t)((int32_t)(_dividend / _dv)); edx = (uint32_t)((int32_t)(_dividend % _dv)); }
      else { eax = 0; edx = 0; } }
    PUSH32(esp, edi); /* 0x100C4D4A: push edi */
    eax = (uint32_t)((int32_t)eax * (int32_t)3); /* 0x100C4D4B: imul eax, eax, 3 */
    edi = ebx; /* 0x100C4D4E: mov edi, ebx */
    /* cmp eax, ecx */ /* 0x100C4D50: cmp eax, ecx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_100C4D7F; /* 0x100C4D52: je 0x100c4d7f */
L_100C4D54:
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(1);
    edi = edi - 1; /* 0x100C4D54: dec edi */
    _flag_k = FK_DEC;
    _flag_a = (uint32_t)(LO16(esi)) << 16; _flag_b = (uint32_t)(1) << 16;
    SET_LO16(esi, LO16(esi) + 1); /* 0x100C4D55: inc si */
    _flag_k = FK_NARROW(FK_INC, 16);
    ecx = (int32_t)(int16_t)LO16(esi); /* 0x100C4D57: movsx ecx, si */
    eax = ecx; /* 0x100C4D5A: mov eax, ecx */
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFFu : 0; /* 0x100C4D5C: cdq  */
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax; int32_t _dv = (int32_t)MEM32(ebp + (-0x8)); /* 0x100C4D5D: idiv dword ptr [ebp - 8] */
      if (_dv && !(_dv == -1 && _dividend == INT64_MIN)) { eax = (uint32_t)((int32_t)(_dividend / _dv)); edx = (uint32_t)((int32_t)(_dividend % _dv)); }
      else { eax = 0; edx = 0; } }
    eax = (uint32_t)((int32_t)eax * (int32_t)3); /* 0x100C4D60: imul eax, eax, 3 */
    /* cmp eax, ecx */ /* 0x100C4D63: cmp eax, ecx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_NE(_flag_a, _flag_b)) goto L_100C4D54; /* 0x100C4D65: jne 0x100c4d54 */
L_100C4D67:
    MEM16(ebp + (-0x4)) = (uint16_t)(LO16(esi)); /* 0x100C4D67: mov word ptr [ebp - 4], si */
    /* test edi, edi */ /* 0x100C4D6B: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) == 0u)) goto L_100C4D7F; /* 0x100C4D6D: jns 0x100c4d7f */
L_100C4D6F:
    eax = ebp + 0x8; /* 0x100C4D6F: lea eax, [ebp + 8] */
    PUSH32(esp, edi); /* 0x100C4D72: push edi */
    PUSH32(esp, eax); /* 0x100C4D73: push eax */
    RECOMP_CALL(sub_100D649E); /* 0x100C4D74: call 0x100d649e */
    RECOMP_FLAGS_IN();
    SET_LO16(esi, MEM16(ebp + (-0x4))); /* 0x100C4D79: mov si, word ptr [ebp - 4] */
    ecx = POP32_VAL(esp); /* 0x100C4D7D: pop ecx */
    ecx = POP32_VAL(esp); /* 0x100C4D7E: pop ecx */
L_100C4D7F:
    eax = MEM32(ebp + 0xE); /* 0x100C4D7F: mov eax, dword ptr [ebp + 0xe] */
    fp_push(*(double*)ADDR(ebp + 0x8)); /* 0x100C4D82: fld qword ptr [ebp + 8] */
    eax = (uint32_t)LO16(eax); /* 0x100C4D85: movzx eax, ax */
    /* test eax, 0x8000u */ /* 0x100C4D88: test eax, 0x8000 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x8000u);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_100C4D94; /* 0x100C4D8D: je 0x100c4d94 */
L_100C4D8F:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ebx = 0; /* 0x100C4D8F: xor ebx, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
    _st[0] = -_st[0]; /* 0x100C4D91: fchs  */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(1);
    ebx = ebx + 1; /* 0x100C4D93: inc ebx */
    _flag_k = FK_INC;
L_100C4D94:
    fp_push(*(double*)ADDR(0x10063C80)); /* 0x100C4D94: fld qword ptr [0x10063c80] */
    _st[0] *= _st[1]; /* 0x100C4D9A: fmul st(1) */
    _st[0] += *(double*)ADDR(0x10063C90); /* 0x100C4D9C: fadd qword ptr [0x10063c90] */
    _st[0] *= _st[1]; /* 0x100C4DA2: fmul st(1) */
    _st[0] += *(double*)ADDR(0x10063C78); /* 0x100C4DA4: fadd qword ptr [0x10063c78] */
    fp_push(_st[1]); /* 0x100C4DAA: fld st(1) */
    _st[0] += *(double*)ADDR(0x10063C88); /* 0x100C4DAC: fadd qword ptr [0x10063c88] */
    { double _v = fp_pop(); _st[0] = _v == 0.0 ? _st[0] : _st[0] / _v; } /* 0x100C4DB2: fdivp st(1) */
    fp_push(_st[1]); /* 0x100C4DB4: fld st(1) */
    _st[0] *= *(double*)ADDR(0x10063C98); /* 0x100C4DB6: fmul qword ptr [0x10063c98] */
    fp_push(*(double*)ADDR(0x10063BD0)); /* 0x100C4DBC: fld qword ptr [0x10063bd0] */
    _st[3] *= _st[0]; /* 0x100C4DC2: fmul st(3), st(0) */
    fp_push(_st[3]); /* 0x100C4DC4: fld st(3) */
    _st[0] /= _st[3]; /* 0x100C4DC6: fdiv st(3) */
    fp_push(_st[3]); /* 0x100C4DC8: fld st(3) */
    _st[0] *= _st[4]; /* 0x100C4DCA: fmul st(4) */
    { double _v = fp_pop(); _st[0] += _v; } /* 0x100C4DCC: faddp st(1) */
    fp_push(_st[2]); /* 0x100C4DCE: fld st(2) */
    { double _v = fp_pop(); _st[0] = _st[0] == 0.0 ? _v : _v / _st[0]; } /* 0x100C4DD0: fdivrp st(1) */
    { double _v = fp_pop(); _st[2] += _v; } /* 0x100C4DD2: faddp st(3) */
    _st[2] *= _st[0]; /* 0x100C4DD4: fmul st(2), st(0) */
    fp_xch(3); /* 0x100C4DD6: fxch st(3) */
    _st[0] /= _st[2]; /* 0x100C4DD8: fdiv st(2) */
    fp_push(_st[2]); /* 0x100C4DDA: fld st(2) */
    _st[0] *= _st[3]; /* 0x100C4DDC: fmul st(3) */
    { double _v = fp_pop(); _st[0] += _v; } /* 0x100C4DDE: faddp st(1) */
    { double _v = fp_pop(); _st[0] = _v == 0.0 ? _st[0] : _st[0] / _v; } /* 0x100C4DE0: fdivp st(1) */
    { double _v = fp_pop(); _st[0] += _v; } /* 0x100C4DE2: faddp st(1) */
    { double _v = fp_pop(); _st[0] *= _v; } /* 0x100C4DE4: fmulp st(1) */
    *(double*)ADDR(ebp + (-0x10)) = _st[0]; /* 0x100C4DE6: fst qword ptr [ebp - 0x10] */
    /* test ebx, ebx */ /* 0x100C4DE9: test ebx, ebx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ebx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_100C4DF4; /* 0x100C4DEB: je 0x100c4df4 */
L_100C4DED:
    _st[0] = -_st[0]; /* 0x100C4DED: fchs  */
    { double _v = fp_pop(); *(double*)ADDR(ebp + (-0x10)) = _v; } /* 0x100C4DEF: fstp qword ptr [ebp - 0x10] */
    goto L_100C4DF6; /* 0x100C4DF2: jmp 0x100c4df6 */
L_100C4DF4:
    { _st[0] = _st[0]; g_st_i64[0] = g_st_i64[0]; fp_pop(); } /* 0x100C4DF4: fstp st(0) */
L_100C4DF6:
    eax = (int32_t)(int16_t)LO16(esi); /* 0x100C4DF6: movsx eax, si */
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFFu : 0; /* 0x100C4DF9: cdq  */
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax; int32_t _dv = (int32_t)MEM32(ebp + (-0x8)); /* 0x100C4DFA: idiv dword ptr [ebp - 8] */
      if (_dv && !(_dv == -1 && _dividend == INT64_MIN)) { eax = (uint32_t)((int32_t)(_dividend / _dv)); edx = (uint32_t)((int32_t)(_dividend % _dv)); }
      else { eax = 0; edx = 0; } }
    PUSH32(esp, eax); /* 0x100C4DFD: push eax */
    eax = ebp + (-0x10); /* 0x100C4DFE: lea eax, [ebp - 0x10] */
    PUSH32(esp, eax); /* 0x100C4E01: push eax */
    RECOMP_CALL(sub_100D649E); /* 0x100C4E02: call 0x100d649e */
    RECOMP_FLAGS_IN();
    fp_push(*(double*)ADDR(ebp + (-0x10))); /* 0x100C4E07: fld qword ptr [ebp - 0x10] */
    ecx = POP32_VAL(esp); /* 0x100C4E0A: pop ecx */
    ecx = POP32_VAL(esp); /* 0x100C4E0B: pop ecx */
    edi = POP32_VAL(esp); /* 0x100C4E0C: pop edi */
    esi = POP32_VAL(esp); /* 0x100C4E0D: pop esi */
    ebx = POP32_VAL(esp); /* 0x100C4E0E: pop ebx */
L_100C4E0F:
    esp = ebp; /* 0x100C4E0F: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x100C4E11: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x100C4E12: ret  */
    RECOMP_REGS_OUT();
}

void sub_100C4E13(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x100C4E13u);

L_100C4E13:
    PUSH32(esp, ebp); /* 0x100C4E13: push ebp */
    ebp = esp; /* 0x100C4E14: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0xCu; /* 0x100C4E16: sub esp, 0xc */
    _flag_k = FK_CMP;
    eax = ebp + 0x8; /* 0x100C4E19: lea eax, [ebp + 8] */
    PUSH32(esp, eax); /* 0x100C4E1C: push eax */
    eax = ebp + (-0x4); /* 0x100C4E1D: lea eax, [ebp - 4] */
    PUSH32(esp, eax); /* 0x100C4E20: push eax */
    RECOMP_CALL(sub_100D690E); /* 0x100C4E21: call 0x100d690e */
    RECOMP_FLAGS_IN();
    eax = (uint32_t)(int32_t)(int16_t)LO16(eax); /* 0x100C4E26: cwde  */
    ecx = POP32_VAL(esp); /* 0x100C4E27: pop ecx */
    ecx = POP32_VAL(esp); /* 0x100C4E28: pop ecx */
    /* cmp eax, 2 */ /* 0x100C4E29: cmp eax, 2 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_A(_flag_a, _flag_b)) goto L_100C4E36; /* 0x100C4E2C: ja 0x100c4e36 */
L_100C4E2E:
    fp_push(*(float*)&MEM32(ebp + 0x8)); /* 0x100C4E2E: fld dword ptr [ebp + 8] */
    goto L_100C4F16; /* 0x100C4E31: jmp 0x100c4f16 */
L_100C4E36:
    PUSH32(esp, ebx); /* 0x100C4E36: push ebx */
    PUSH32(esp, esi); /* 0x100C4E37: push esi */
    SET_LO16(esi, MEM16(ebp + (-0x4))); /* 0x100C4E38: mov si, word ptr [ebp - 4] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ebx = 0; /* 0x100C4E3C: xor ebx, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = (int32_t)(int16_t)LO16(esi); /* 0x100C4E3E: movsx ecx, si */
    eax = ecx; /* 0x100C4E41: mov eax, ecx */
    MEM32(ebp + (-0xC)) = 3; /* 0x100C4E43: mov dword ptr [ebp - 0xc], 3 */
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFFu : 0; /* 0x100C4E4A: cdq  */
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax; int32_t _dv = (int32_t)MEM32(ebp + (-0xC)); /* 0x100C4E4B: idiv dword ptr [ebp - 0xc] */
      if (_dv && !(_dv == -1 && _dividend == INT64_MIN)) { eax = (uint32_t)((int32_t)(_dividend / _dv)); edx = (uint32_t)((int32_t)(_dividend % _dv)); }
      else { eax = 0; edx = 0; } }
    PUSH32(esp, edi); /* 0x100C4E4E: push edi */
    eax = (uint32_t)((int32_t)eax * (int32_t)3); /* 0x100C4E4F: imul eax, eax, 3 */
    edi = ebx; /* 0x100C4E52: mov edi, ebx */
    /* cmp eax, ecx */ /* 0x100C4E54: cmp eax, ecx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_100C4E83; /* 0x100C4E56: je 0x100c4e83 */
L_100C4E58:
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(1);
    edi = edi - 1; /* 0x100C4E58: dec edi */
    _flag_k = FK_DEC;
    _flag_a = (uint32_t)(LO16(esi)) << 16; _flag_b = (uint32_t)(1) << 16;
    SET_LO16(esi, LO16(esi) + 1); /* 0x100C4E59: inc si */
    _flag_k = FK_NARROW(FK_INC, 16);
    ecx = (int32_t)(int16_t)LO16(esi); /* 0x100C4E5B: movsx ecx, si */
    eax = ecx; /* 0x100C4E5E: mov eax, ecx */
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFFu : 0; /* 0x100C4E60: cdq  */
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax; int32_t _dv = (int32_t)MEM32(ebp + (-0xC)); /* 0x100C4E61: idiv dword ptr [ebp - 0xc] */
      if (_dv && !(_dv == -1 && _dividend == INT64_MIN)) { eax = (uint32_t)((int32_t)(_dividend / _dv)); edx = (uint32_t)((int32_t)(_dividend % _dv)); }
      else { eax = 0; edx = 0; } }
    eax = (uint32_t)((int32_t)eax * (int32_t)3); /* 0x100C4E64: imul eax, eax, 3 */
    /* cmp eax, ecx */ /* 0x100C4E67: cmp eax, ecx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_NE(_flag_a, _flag_b)) goto L_100C4E58; /* 0x100C4E69: jne 0x100c4e58 */
L_100C4E6B:
    MEM16(ebp + (-0x4)) = (uint16_t)(LO16(esi)); /* 0x100C4E6B: mov word ptr [ebp - 4], si */
    /* test edi, edi */ /* 0x100C4E6F: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) == 0u)) goto L_100C4E83; /* 0x100C4E71: jns 0x100c4e83 */
L_100C4E73:
    eax = ebp + 0x8; /* 0x100C4E73: lea eax, [ebp + 8] */
    PUSH32(esp, edi); /* 0x100C4E76: push edi */
    PUSH32(esp, eax); /* 0x100C4E77: push eax */
    RECOMP_CALL(sub_100D66D7); /* 0x100C4E78: call 0x100d66d7 */
    RECOMP_FLAGS_IN();
    SET_LO16(esi, MEM16(ebp + (-0x4))); /* 0x100C4E7D: mov si, word ptr [ebp - 4] */
    ecx = POP32_VAL(esp); /* 0x100C4E81: pop ecx */
    ecx = POP32_VAL(esp); /* 0x100C4E82: pop ecx */
L_100C4E83:
    eax = MEM32(ebp + 0xA); /* 0x100C4E83: mov eax, dword ptr [ebp + 0xa] */
    eax = (uint32_t)LO16(eax); /* 0x100C4E86: movzx eax, ax */
    /* test eax, 0x8000u */ /* 0x100C4E89: test eax, 0x8000 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x8000u);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_100C4E9B; /* 0x100C4E8E: je 0x100c4e9b */
L_100C4E90:
    fp_push(*(float*)&MEM32(ebp + 0x8)); /* 0x100C4E90: fld dword ptr [ebp + 8] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ebx = 0; /* 0x100C4E93: xor ebx, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
    _st[0] = -_st[0]; /* 0x100C4E95: fchs  */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(1);
    ebx = ebx + 1; /* 0x100C4E97: inc ebx */
    _flag_k = FK_INC;
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + 0x8) = _v; } /* 0x100C4E98: fstp dword ptr [ebp + 8] */
L_100C4E9B:
    fp_push(*(float*)&MEM32(ebp + 0x8)); /* 0x100C4E9B: fld dword ptr [ebp + 8] */
    fp_push(*(double*)ADDR(0x100C4F28)); /* 0x100C4E9E: fld qword ptr [0x100c4f28] */
    _st[0] *= _st[1]; /* 0x100C4EA4: fmul st(1) */
    _st[0] += *(double*)ADDR(0x100C4F38); /* 0x100C4EA6: fadd qword ptr [0x100c4f38] */
    fp_push(_st[1]); /* 0x100C4EAC: fld st(1) */
    { double _v = fp_pop(); _st[0] *= _v; } /* 0x100C4EAE: fmulp st(1) */
    _st[0] += *(double*)ADDR(0x100C4F20); /* 0x100C4EB0: fadd qword ptr [0x100c4f20] */
    fp_push(_st[1]); /* 0x100C4EB6: fld st(1) */
    _st[0] += *(double*)ADDR(0x100C4F30); /* 0x100C4EB8: fadd qword ptr [0x100c4f30] */
    { double _v = fp_pop(); _st[0] = _v == 0.0 ? _st[0] : _st[0] / _v; } /* 0x100C4EBE: fdivp st(1) */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x8)) = _v; } /* 0x100C4EC0: fstp dword ptr [ebp - 8] */
    fp_push(_st[0]); /* 0x100C4EC3: fld st(0) */
    fp_push(*(double*)ADDR(0x10063BD0)); /* 0x100C4EC5: fld qword ptr [0x10063bd0] */
    _st[1] *= _st[0]; /* 0x100C4ECB: fmul st(1), st(0) */
    fp_push(*(float*)&MEM32(ebp + (-0x8))); /* 0x100C4ECD: fld dword ptr [ebp - 8] */
    fp_push(_st[0]); /* 0x100C4ED0: fld st(0) */
    { double _v = fp_pop(); _st[2] = _v == 0.0 ? _st[2] : _st[2] / _v; } /* 0x100C4ED2: fdivp st(3) */
    fp_push(_st[0]); /* 0x100C4ED4: fld st(0) */
    fp_xch(4); /* 0x100C4ED6: fxch st(4) */
    _st[0] *= *(double*)ADDR(0x10063C98); /* 0x100C4ED8: fmul qword ptr [0x10063c98] */
    fp_xch(4); /* 0x100C4EDE: fxch st(4) */
    _st[0] *= _st[0]; /* 0x100C4EE0: fmul st(0), st(0) */
    { double _v = fp_pop(); _st[2] += _v; } /* 0x100C4EE2: faddp st(3) */
    fp_xch(3); /* 0x100C4EE4: fxch st(3) */
    { double _v = fp_pop(); _st[1] = _st[1] == 0.0 ? _v : _v / _st[1]; } /* 0x100C4EE6: fdivrp st(2) */
    fp_xch(1); /* 0x100C4EE8: fxch st(1) */
    { double _v = fp_pop(); _st[1] += _v; } /* 0x100C4EEA: faddp st(2) */
    { double _v = fp_pop(); _st[0] *= _v; } /* 0x100C4EEC: fmulp st(1) */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x8)) = _v; } /* 0x100C4EEE: fstp dword ptr [ebp - 8] */
    /* test ebx, ebx */ /* 0x100C4EF1: test ebx, ebx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ebx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_100C4EFD; /* 0x100C4EF3: je 0x100c4efd */
L_100C4EF5:
    fp_push(*(float*)&MEM32(ebp + (-0x8))); /* 0x100C4EF5: fld dword ptr [ebp - 8] */
    _st[0] = -_st[0]; /* 0x100C4EF8: fchs  */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x8)) = _v; } /* 0x100C4EFA: fstp dword ptr [ebp - 8] */
L_100C4EFD:
    eax = (int32_t)(int16_t)LO16(esi); /* 0x100C4EFD: movsx eax, si */
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFFu : 0; /* 0x100C4F00: cdq  */
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax; int32_t _dv = (int32_t)MEM32(ebp + (-0xC)); /* 0x100C4F01: idiv dword ptr [ebp - 0xc] */
      if (_dv && !(_dv == -1 && _dividend == INT64_MIN)) { eax = (uint32_t)((int32_t)(_dividend / _dv)); edx = (uint32_t)((int32_t)(_dividend % _dv)); }
      else { eax = 0; edx = 0; } }
    PUSH32(esp, eax); /* 0x100C4F04: push eax */
    eax = ebp + (-0x8); /* 0x100C4F05: lea eax, [ebp - 8] */
    PUSH32(esp, eax); /* 0x100C4F08: push eax */
    RECOMP_CALL(sub_100D66D7); /* 0x100C4F09: call 0x100d66d7 */
    RECOMP_FLAGS_IN();
    fp_push(*(float*)&MEM32(ebp + (-0x8))); /* 0x100C4F0E: fld dword ptr [ebp - 8] */
    ecx = POP32_VAL(esp); /* 0x100C4F11: pop ecx */
    ecx = POP32_VAL(esp); /* 0x100C4F12: pop ecx */
    edi = POP32_VAL(esp); /* 0x100C4F13: pop edi */
    esi = POP32_VAL(esp); /* 0x100C4F14: pop esi */
    ebx = POP32_VAL(esp); /* 0x100C4F15: pop ebx */
L_100C4F16:
    esp = ebp; /* 0x100C4F16: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x100C4F18: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x100C4F19: ret  */
    RECOMP_REGS_OUT();
}

void sub_100C4F40(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x100C4F40u);

L_100C4F40:
    PUSH32(esp, ebp); /* 0x100C4F40: push ebp */
    ebp = esp; /* 0x100C4F41: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x10u; /* 0x100C4F43: sub esp, 0x10 */
    _flag_k = FK_CMP;
    eax = ebp + 0x8; /* 0x100C4F46: lea eax, [ebp + 8] */
    PUSH32(esp, eax); /* 0x100C4F49: push eax */
    eax = ebp + (-0x4); /* 0x100C4F4A: lea eax, [ebp - 4] */
    PUSH32(esp, eax); /* 0x100C4F4D: push eax */
    RECOMP_CALL(sub_100D6993); /* 0x100C4F4E: call 0x100d6993 */
    RECOMP_FLAGS_IN();
    eax = (uint32_t)(int32_t)(int16_t)LO16(eax); /* 0x100C4F53: cwde  */
    ecx = POP32_VAL(esp); /* 0x100C4F54: pop ecx */
    ecx = POP32_VAL(esp); /* 0x100C4F55: pop ecx */
    /* cmp eax, 2 */ /* 0x100C4F56: cmp eax, 2 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_A(_flag_a, _flag_b)) goto L_100C4F63; /* 0x100C4F59: ja 0x100c4f63 */
L_100C4F5B:
    fp_push(*(double*)ADDR(ebp + 0x8)); /* 0x100C4F5B: fld qword ptr [ebp + 8] */
    goto L_100C5040; /* 0x100C4F5E: jmp 0x100c5040 */
L_100C4F63:
    PUSH32(esp, ebx); /* 0x100C4F63: push ebx */
    PUSH32(esp, esi); /* 0x100C4F64: push esi */
    SET_LO16(esi, MEM16(ebp + (-0x4))); /* 0x100C4F65: mov si, word ptr [ebp - 4] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ebx = 0; /* 0x100C4F69: xor ebx, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = (int32_t)(int16_t)LO16(esi); /* 0x100C4F6B: movsx ecx, si */
    eax = ecx; /* 0x100C4F6E: mov eax, ecx */
    MEM32(ebp + (-0x8)) = 3; /* 0x100C4F70: mov dword ptr [ebp - 8], 3 */
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFFu : 0; /* 0x100C4F77: cdq  */
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax; int32_t _dv = (int32_t)MEM32(ebp + (-0x8)); /* 0x100C4F78: idiv dword ptr [ebp - 8] */
      if (_dv && !(_dv == -1 && _dividend == INT64_MIN)) { eax = (uint32_t)((int32_t)(_dividend / _dv)); edx = (uint32_t)((int32_t)(_dividend % _dv)); }
      else { eax = 0; edx = 0; } }
    PUSH32(esp, edi); /* 0x100C4F7B: push edi */
    eax = (uint32_t)((int32_t)eax * (int32_t)3); /* 0x100C4F7C: imul eax, eax, 3 */
    edi = ebx; /* 0x100C4F7F: mov edi, ebx */
    /* cmp eax, ecx */ /* 0x100C4F81: cmp eax, ecx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_100C4FB0; /* 0x100C4F83: je 0x100c4fb0 */
L_100C4F85:
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(1);
    edi = edi - 1; /* 0x100C4F85: dec edi */
    _flag_k = FK_DEC;
    _flag_a = (uint32_t)(LO16(esi)) << 16; _flag_b = (uint32_t)(1) << 16;
    SET_LO16(esi, LO16(esi) + 1); /* 0x100C4F86: inc si */
    _flag_k = FK_NARROW(FK_INC, 16);
    ecx = (int32_t)(int16_t)LO16(esi); /* 0x100C4F88: movsx ecx, si */
    eax = ecx; /* 0x100C4F8B: mov eax, ecx */
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFFu : 0; /* 0x100C4F8D: cdq  */
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax; int32_t _dv = (int32_t)MEM32(ebp + (-0x8)); /* 0x100C4F8E: idiv dword ptr [ebp - 8] */
      if (_dv && !(_dv == -1 && _dividend == INT64_MIN)) { eax = (uint32_t)((int32_t)(_dividend / _dv)); edx = (uint32_t)((int32_t)(_dividend % _dv)); }
      else { eax = 0; edx = 0; } }
    eax = (uint32_t)((int32_t)eax * (int32_t)3); /* 0x100C4F91: imul eax, eax, 3 */
    /* cmp eax, ecx */ /* 0x100C4F94: cmp eax, ecx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_NE(_flag_a, _flag_b)) goto L_100C4F85; /* 0x100C4F96: jne 0x100c4f85 */
L_100C4F98:
    MEM16(ebp + (-0x4)) = (uint16_t)(LO16(esi)); /* 0x100C4F98: mov word ptr [ebp - 4], si */
    /* test edi, edi */ /* 0x100C4F9C: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) == 0u)) goto L_100C4FB0; /* 0x100C4F9E: jns 0x100c4fb0 */
L_100C4FA0:
    eax = ebp + 0x8; /* 0x100C4FA0: lea eax, [ebp + 8] */
    PUSH32(esp, edi); /* 0x100C4FA3: push edi */
    PUSH32(esp, eax); /* 0x100C4FA4: push eax */
    RECOMP_CALL(sub_100D6871); /* 0x100C4FA5: call 0x100d6871 */
    RECOMP_FLAGS_IN();
    SET_LO16(esi, MEM16(ebp + (-0x4))); /* 0x100C4FAA: mov si, word ptr [ebp - 4] */
    ecx = POP32_VAL(esp); /* 0x100C4FAE: pop ecx */
    ecx = POP32_VAL(esp); /* 0x100C4FAF: pop ecx */
L_100C4FB0:
    eax = MEM32(ebp + 0xE); /* 0x100C4FB0: mov eax, dword ptr [ebp + 0xe] */
    fp_push(*(double*)ADDR(ebp + 0x8)); /* 0x100C4FB3: fld qword ptr [ebp + 8] */
    eax = (uint32_t)LO16(eax); /* 0x100C4FB6: movzx eax, ax */
    /* test eax, 0x8000u */ /* 0x100C4FB9: test eax, 0x8000 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x8000u);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_100C4FC5; /* 0x100C4FBE: je 0x100c4fc5 */
L_100C4FC0:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ebx = 0; /* 0x100C4FC0: xor ebx, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
    _st[0] = -_st[0]; /* 0x100C4FC2: fchs  */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(1);
    ebx = ebx + 1; /* 0x100C4FC4: inc ebx */
    _flag_k = FK_INC;
L_100C4FC5:
    fp_push(*(double*)ADDR(0x10063C80)); /* 0x100C4FC5: fld qword ptr [0x10063c80] */
    _st[0] *= _st[1]; /* 0x100C4FCB: fmul st(1) */
    _st[0] += *(double*)ADDR(0x10063C90); /* 0x100C4FCD: fadd qword ptr [0x10063c90] */
    _st[0] *= _st[1]; /* 0x100C4FD3: fmul st(1) */
    _st[0] += *(double*)ADDR(0x10063C78); /* 0x100C4FD5: fadd qword ptr [0x10063c78] */
    fp_push(_st[1]); /* 0x100C4FDB: fld st(1) */
    _st[0] += *(double*)ADDR(0x10063C88); /* 0x100C4FDD: fadd qword ptr [0x10063c88] */
    { double _v = fp_pop(); _st[0] = _v == 0.0 ? _st[0] : _st[0] / _v; } /* 0x100C4FE3: fdivp st(1) */
    fp_push(_st[1]); /* 0x100C4FE5: fld st(1) */
    _st[0] *= *(double*)ADDR(0x10063C98); /* 0x100C4FE7: fmul qword ptr [0x10063c98] */
    fp_push(*(double*)ADDR(0x10063BD0)); /* 0x100C4FED: fld qword ptr [0x10063bd0] */
    _st[3] *= _st[0]; /* 0x100C4FF3: fmul st(3), st(0) */
    fp_push(_st[3]); /* 0x100C4FF5: fld st(3) */
    _st[0] /= _st[3]; /* 0x100C4FF7: fdiv st(3) */
    fp_push(_st[3]); /* 0x100C4FF9: fld st(3) */
    _st[0] *= _st[4]; /* 0x100C4FFB: fmul st(4) */
    { double _v = fp_pop(); _st[0] += _v; } /* 0x100C4FFD: faddp st(1) */
    fp_push(_st[2]); /* 0x100C4FFF: fld st(2) */
    { double _v = fp_pop(); _st[0] = _st[0] == 0.0 ? _v : _v / _st[0]; } /* 0x100C5001: fdivrp st(1) */
    { double _v = fp_pop(); _st[2] += _v; } /* 0x100C5003: faddp st(3) */
    _st[2] *= _st[0]; /* 0x100C5005: fmul st(2), st(0) */
    fp_xch(3); /* 0x100C5007: fxch st(3) */
    _st[0] /= _st[2]; /* 0x100C5009: fdiv st(2) */
    fp_push(_st[2]); /* 0x100C500B: fld st(2) */
    _st[0] *= _st[3]; /* 0x100C500D: fmul st(3) */
    { double _v = fp_pop(); _st[0] += _v; } /* 0x100C500F: faddp st(1) */
    { double _v = fp_pop(); _st[0] = _v == 0.0 ? _st[0] : _st[0] / _v; } /* 0x100C5011: fdivp st(1) */
    { double _v = fp_pop(); _st[0] += _v; } /* 0x100C5013: faddp st(1) */
    { double _v = fp_pop(); _st[0] *= _v; } /* 0x100C5015: fmulp st(1) */
    *(double*)ADDR(ebp + (-0x10)) = _st[0]; /* 0x100C5017: fst qword ptr [ebp - 0x10] */
    /* test ebx, ebx */ /* 0x100C501A: test ebx, ebx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ebx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_100C5025; /* 0x100C501C: je 0x100c5025 */
L_100C501E:
    _st[0] = -_st[0]; /* 0x100C501E: fchs  */
    { double _v = fp_pop(); *(double*)ADDR(ebp + (-0x10)) = _v; } /* 0x100C5020: fstp qword ptr [ebp - 0x10] */
    goto L_100C5027; /* 0x100C5023: jmp 0x100c5027 */
L_100C5025:
    { _st[0] = _st[0]; g_st_i64[0] = g_st_i64[0]; fp_pop(); } /* 0x100C5025: fstp st(0) */
L_100C5027:
    eax = (int32_t)(int16_t)LO16(esi); /* 0x100C5027: movsx eax, si */
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFFu : 0; /* 0x100C502A: cdq  */
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax; int32_t _dv = (int32_t)MEM32(ebp + (-0x8)); /* 0x100C502B: idiv dword ptr [ebp - 8] */
      if (_dv && !(_dv == -1 && _dividend == INT64_MIN)) { eax = (uint32_t)((int32_t)(_dividend / _dv)); edx = (uint32_t)((int32_t)(_dividend % _dv)); }
      else { eax = 0; edx = 0; } }
    PUSH32(esp, eax); /* 0x100C502E: push eax */
    eax = ebp + (-0x10); /* 0x100C502F: lea eax, [ebp - 0x10] */
    PUSH32(esp, eax); /* 0x100C5032: push eax */
    RECOMP_CALL(sub_100D6871); /* 0x100C5033: call 0x100d6871 */
    RECOMP_FLAGS_IN();
    fp_push(*(double*)ADDR(ebp + (-0x10))); /* 0x100C5038: fld qword ptr [ebp - 0x10] */
    ecx = POP32_VAL(esp); /* 0x100C503B: pop ecx */
    ecx = POP32_VAL(esp); /* 0x100C503C: pop ecx */
    edi = POP32_VAL(esp); /* 0x100C503D: pop edi */
    esi = POP32_VAL(esp); /* 0x100C503E: pop esi */
    ebx = POP32_VAL(esp); /* 0x100C503F: pop ebx */
L_100C5040:
    esp = ebp; /* 0x100C5040: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x100C5042: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x100C5043: ret  */
    RECOMP_REGS_OUT();
}

void sub_100C5044(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x100C5044u);

L_100C5044:
    PUSH32(esp, ebp); /* 0x100C5044: push ebp */
    ebp = esp; /* 0x100C5045: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x20u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x20u; /* 0x100C5047: sub esp, 0x20 */
    _flag_k = FK_CMP;
    PUSH32(esp, esi); /* 0x100C504A: push esi */
    PUSH32(esp, edi); /* 0x100C504B: push edi */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x10u; /* 0x100C504C: sub esp, 0x10 */
    _flag_k = FK_CMP;
    esi = ebp + 0xC; /* 0x100C504F: lea esi, [ebp + 0xc] */
    edi = esp; /* 0x100C5052: mov edi, esp */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x100C5054: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x100C5055: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x100C5056: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x100C5057: movsd dword ptr es:[edi], dword ptr [esi] */
    RECOMP_CALL(sub_100C6B29); /* 0x100C5058: call 0x100c6b29 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, ecx); /* 0x100C505D: push ecx */
    PUSH32(esp, ecx); /* 0x100C505E: push ecx */
    { double _v = fp_pop(); *(double*)ADDR(esp + 0x10) = _v; } /* 0x100C505F: fstp qword ptr [esp + 0x10] */
    edi = esp; /* 0x100C5063: mov edi, esp */
    esi = ebp + 0xC; /* 0x100C5065: lea esi, [ebp + 0xc] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x100C5068: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x100C5069: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x100C506A: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x100C506B: movsd dword ptr es:[edi], dword ptr [esi] */
    RECOMP_CALL(sub_100C5E60); /* 0x100C506C: call 0x100c5e60 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 8; /* 0x100C5071: add esp, 8 */
    _flag_k = FK_ADD;
    eax = ebp + (-0x10); /* 0x100C5074: lea eax, [ebp - 0x10] */
    _st[0] = -_st[0]; /* 0x100C5077: fchs  */
    { double _v = fp_pop(); *(double*)ADDR(esp) = _v; } /* 0x100C5079: fstp qword ptr [esp] */
    PUSH32(esp, eax); /* 0x100C507C: push eax */
    RECOMP_CALL(sub_100AACD2); /* 0x100C507D: call 0x100aacd2 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x100C5082: add esp, 4 */
    _flag_k = FK_ADD;
    esi = eax; /* 0x100C5085: mov esi, eax */
    edi = esp; /* 0x100C5087: mov edi, esp */
    eax = ebp + (-0x20); /* 0x100C5089: lea eax, [ebp - 0x20] */
    PUSH32(esp, eax); /* 0x100C508C: push eax */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x100C508D: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x100C508E: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x100C508F: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x100C5090: movsd dword ptr es:[edi], dword ptr [esi] */
    RECOMP_CALL(sub_100C51AE); /* 0x100C5091: call 0x100c51ae */
    RECOMP_FLAGS_IN();
    esi = eax; /* 0x100C5096: mov esi, eax */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x14u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x14u; /* 0x100C5098: add esp, 0x14 */
    _flag_k = FK_ADD;
    eax = MEM32(ebp + 0x8); /* 0x100C509B: mov eax, dword ptr [ebp + 8] */
    edi = eax; /* 0x100C509E: mov edi, eax */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x100C50A0: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x100C50A1: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x100C50A2: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x100C50A3: movsd dword ptr es:[edi], dword ptr [esi] */
    edi = POP32_VAL(esp); /* 0x100C50A4: pop edi */
    esi = POP32_VAL(esp); /* 0x100C50A5: pop esi */
    esp = ebp; /* 0x100C50A6: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x100C50A8: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x100C50A9: ret  */
    RECOMP_REGS_OUT();
}

void sub_100C50AA(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x100C50AAu);

L_100C50AA:
    PUSH32(esp, ebp); /* 0x100C50AA: push ebp */
    ebp = esp; /* 0x100C50AB: mov ebp, esp */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x100C50AD: push dword ptr [ebp + 0xc] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x100C50B0: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_100C6B58); /* 0x100C50B3: call 0x100c6b58 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x100C50B8: pop ecx */
    { float _v = (float)fp_pop(); *(float*)ADDR(esp) = _v; } /* 0x100C50B9: fstp dword ptr [esp] */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x100C50BC: push dword ptr [ebp + 0xc] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x100C50BF: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_100C5E33); /* 0x100C50C2: call 0x100c5e33 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x100C50C7: add esp, 4 */
    _flag_k = FK_ADD;
    _st[0] = -_st[0]; /* 0x100C50CA: fchs  */
    { float _v = (float)fp_pop(); *(float*)ADDR(esp) = _v; } /* 0x100C50CC: fstp dword ptr [esp] */
    RECOMP_CALL(sub_100AADAF); /* 0x100C50CF: call 0x100aadaf */
    RECOMP_FLAGS_IN();
    PUSH32(esp, edx); /* 0x100C50D4: push edx */
    PUSH32(esp, eax); /* 0x100C50D5: push eax */
    RECOMP_CALL(sub_100C5429); /* 0x100C50D6: call 0x100c5429 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x10u; /* 0x100C50DB: add esp, 0x10 */
    _flag_k = FK_ADD;
    ebp = POP32_VAL(esp); /* 0x100C50DE: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x100C50DF: ret  */
    RECOMP_REGS_OUT();
}

void sub_100C50E0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x100C50E0u);

L_100C50E0:
    PUSH32(esp, ebp); /* 0x100C50E0: push ebp */
    ebp = esp; /* 0x100C50E1: mov ebp, esp */
    eax = ebp + 0x8; /* 0x100C50E3: lea eax, [ebp + 8] */
    PUSH32(esp, esi); /* 0x100C50E6: push esi */
    PUSH32(esp, eax); /* 0x100C50E7: push eax */
    RECOMP_CALL(sub_100BFE08); /* 0x100C50E8: call 0x100bfe08 */
    RECOMP_FLAGS_IN();
    esi = (uint32_t)LO16(eax); /* 0x100C50ED: movzx esi, ax */
    eax = ebp + 0x10; /* 0x100C50F0: lea eax, [ebp + 0x10] */
    PUSH32(esp, eax); /* 0x100C50F3: push eax */
    RECOMP_CALL(sub_100BFE08); /* 0x100C50F4: call 0x100bfe08 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x100C50F9: pop ecx */
    ecx = POP32_VAL(esp); /* 0x100C50FA: pop ecx */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x100C50FB: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    eax = (uint32_t)LO16(eax); /* 0x100C50FD: movzx eax, ax */
    /* cmp LO16(ecx), LO16(esi) */ /* 0x100C5100: cmp cx, si */
    _flag_a = (uint32_t)(LO16(ecx)) << 16; _flag_b = (uint32_t)(LO16(esi)) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    if (CMP_LE(_flag_a, _flag_b)) goto L_100C5164; /* 0x100C5103: jle 0x100c5164 */
L_100C5105:
    /* cmp LO16(ecx), LO16(eax) */ /* 0x100C5105: cmp cx, ax */
    _flag_a = (uint32_t)(LO16(ecx)) << 16; _flag_b = (uint32_t)(LO16(eax)) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    if (CMP_LE(_flag_a, _flag_b)) goto L_100C5164; /* 0x100C5108: jle 0x100c5164 */
L_100C510A:
    fp_push(0.0); /* 0x100C510A: fldz  */
    fp_push(*(double*)ADDR(ebp + 0x8)); /* 0x100C510C: fld qword ptr [ebp + 8] */
    _fpu_cmp = FPU_CMP(_st[0], _st[1]); /* 0x100C510F: fcom st(1) */
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x100C5111: fnstsw ax */
    { _st[1] = _st[0]; g_st_i64[1] = g_st_i64[0]; fp_pop(); } /* 0x100C5113: fstp st(1) */
    /* test HI8(eax), 5 */ /* 0x100C5115: test ah, 5 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(5) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (RECOMP_PF((_flag_a & _flag_b), 24)) goto L_100C511F; /* 0x100C5118: jp 0x100c511f */
L_100C511A:
    _st[0] = -_st[0]; /* 0x100C511A: fchs  */
    *(double*)ADDR(ebp + 0x8) = _st[0]; /* 0x100C511C: fst qword ptr [ebp + 8] */
L_100C511F:
    _fpu_cmp = FPU_CMP(_st[0], *(double*)ADDR(0x10065C10)); /* 0x100C511F: fcomp qword ptr [0x10065c10] */
    fp_pop();
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x100C5125: fnstsw ax */
    PUSH32(esp, 0xFFFFFFFFu); /* 0x100C5127: push -1 */
    PUSH32(esp, ecx); /* 0x100C5129: push ecx */
    PUSH32(esp, ecx); /* 0x100C512A: push ecx */
    /* test HI8(eax), 5 */ /* 0x100C512B: test ah, 5 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(5) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    eax = ebp + 0x8; /* 0x100C512E: lea eax, [ebp + 8] */
    if (RECOMP_PF((_flag_a & _flag_b), 24)) goto L_100C5153; /* 0x100C5131: jp 0x100c5153 */
L_100C5133:
    fp_push(1.0); /* 0x100C5133: fld1  */
    { double _v = fp_pop(); *(double*)ADDR(esp) = _v; } /* 0x100C5135: fstp qword ptr [esp] */
    PUSH32(esp, eax); /* 0x100C5138: push eax */
    RECOMP_CALL(sub_100C978E); /* 0x100C5139: call 0x100c978e */
    RECOMP_FLAGS_IN();
    fp_push(*(double*)ADDR(0x10063C60)); /* 0x100C513E: fld qword ptr [0x10063c60] */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x10u; /* 0x100C5144: add esp, 0x10 */
    _flag_k = FK_ADD;
    fp_push(*(double*)ADDR(ebp + 0x8)); /* 0x100C5147: fld qword ptr [ebp + 8] */
    _st[1] /= _st[0]; /* 0x100C514A: fdiv st(1), st(0) */
    { double _v = fp_pop(); _st[0] += _v; } /* 0x100C514C: faddp st(1) */
    _st[0] *= *(double*)ADDR(ebp + 0x10); /* 0x100C514E: fmul qword ptr [ebp + 0x10] */
    goto L_100C51AB; /* 0x100C5151: jmp 0x100c51ab */
L_100C5153:
    fp_push(*(double*)ADDR(ebp + 0x10)); /* 0x100C5153: fld qword ptr [ebp + 0x10] */
    { double _v = fp_pop(); *(double*)ADDR(esp) = _v; } /* 0x100C5156: fstp qword ptr [esp] */
    PUSH32(esp, eax); /* 0x100C5159: push eax */
    RECOMP_CALL(sub_100C978E); /* 0x100C515A: call 0x100c978e */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x10u; /* 0x100C515F: add esp, 0x10 */
    _flag_k = FK_ADD;
    goto L_100C516C; /* 0x100C5162: jmp 0x100c516c */
L_100C5164:
    PUSH32(esp, 2); /* 0x100C5164: push 2 */
    ecx = POP32_VAL(esp); /* 0x100C5166: pop ecx */
    /* cmp LO16(esi), LO16(ecx) */ /* 0x100C5167: cmp si, cx */
    _flag_a = (uint32_t)(LO16(esi)) << 16; _flag_b = (uint32_t)(LO16(ecx)) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    if (CMP_NE(_flag_a, _flag_b)) goto L_100C5171; /* 0x100C516A: jne 0x100c5171 */
L_100C516C:
    fp_push(*(double*)ADDR(ebp + 0x8)); /* 0x100C516C: fld qword ptr [ebp + 8] */
    goto L_100C51AB; /* 0x100C516F: jmp 0x100c51ab */
L_100C5171:
    /* cmp LO16(eax), LO16(ecx) */ /* 0x100C5171: cmp ax, cx */
    _flag_a = (uint32_t)(LO16(eax)) << 16; _flag_b = (uint32_t)(LO16(ecx)) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_100C51A8; /* 0x100C5174: je 0x100c51a8 */
L_100C5176:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x100C5176: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx + 1; /* 0x100C5178: inc ecx */
    _flag_k = FK_INC;
    /* cmp LO16(esi), LO16(ecx) */ /* 0x100C5179: cmp si, cx */
    _flag_a = (uint32_t)(LO16(esi)) << 16; _flag_b = (uint32_t)(LO16(ecx)) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    if (CMP_NE(_flag_a, _flag_b)) goto L_100C51A8; /* 0x100C517C: jne 0x100c51a8 */
L_100C517E:
    /* test LO16(eax), LO16(eax) */ /* 0x100C517E: test ax, ax */
    _flag_a = (uint32_t)(LO16(eax)) << 16; _flag_b = (uint32_t)(LO16(eax)) << 16;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 16);
    if (TEST_Z(_flag_a, _flag_b)) goto L_100C5199; /* 0x100C5181: je 0x100c5199 */
L_100C5183:
    fp_push(0.0); /* 0x100C5183: fldz  */
    _fpu_cmp = FPU_CMP(_st[0], *(double*)ADDR(ebp + 0x10)); /* 0x100C5185: fcomp qword ptr [ebp + 0x10] */
    fp_pop();
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x100C5188: fnstsw ax */
    fp_push(*(double*)ADDR(0x10065B48)); /* 0x100C518A: fld qword ptr [0x10065b48] */
    /* test HI8(eax), 0x41u */ /* 0x100C5190: test ah, 0x41 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(0x41u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_100C51AB; /* 0x100C5193: jne 0x100c51ab */
L_100C5195:
    _st[0] = -_st[0]; /* 0x100C5195: fchs  */
    goto L_100C51AB; /* 0x100C5197: jmp 0x100c51ab */
L_100C5199:
    PUSH32(esp, ecx); /* 0x100C5199: push ecx */
    RECOMP_CALL(sub_100BFFA8); /* 0x100C519A: call 0x100bffa8 */
    RECOMP_FLAGS_IN();
    fp_push(*(double*)ADDR(0x10065B58)); /* 0x100C519F: fld qword ptr [0x10065b58] */
    ecx = POP32_VAL(esp); /* 0x100C51A5: pop ecx */
    goto L_100C51AB; /* 0x100C51A6: jmp 0x100c51ab */
L_100C51A8:
    fp_push(*(double*)ADDR(ebp + 0x10)); /* 0x100C51A8: fld qword ptr [ebp + 0x10] */
L_100C51AB:
    esi = POP32_VAL(esp); /* 0x100C51AB: pop esi */
    ebp = POP32_VAL(esp); /* 0x100C51AC: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x100C51AD: ret  */
    RECOMP_REGS_OUT();
}

void sub_100C51AE(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x100C51AEu);

L_100C51AE:
    PUSH32(esp, ebp); /* 0x100C51AE: push ebp */
    ebp = esp; /* 0x100C51AF: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x20u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x20u; /* 0x100C51B1: sub esp, 0x20 */
    _flag_k = FK_CMP;
    PUSH32(esp, esi); /* 0x100C51B4: push esi */
    PUSH32(esp, edi); /* 0x100C51B5: push edi */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x10u; /* 0x100C51B6: sub esp, 0x10 */
    _flag_k = FK_CMP;
    esi = ebp + 0xC; /* 0x100C51B9: lea esi, [ebp + 0xc] */
    edi = esp; /* 0x100C51BC: mov edi, esp */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x100C51BE: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x100C51BF: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x100C51C0: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x100C51C1: movsd dword ptr es:[edi], dword ptr [esi] */
    RECOMP_CALL(sub_100C6B29); /* 0x100C51C2: call 0x100c6b29 */
    RECOMP_FLAGS_IN();
    edi = esp; /* 0x100C51C7: mov edi, esp */
    esi = ebp + 0xC; /* 0x100C51C9: lea esi, [ebp + 0xc] */
    { double _v = fp_pop(); *(double*)ADDR(ebp + (-0x10)) = _v; } /* 0x100C51CC: fstp qword ptr [ebp - 0x10] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x100C51CF: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x100C51D0: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x100C51D1: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x100C51D2: movsd dword ptr es:[edi], dword ptr [esi] */
    RECOMP_CALL(sub_100C5E60); /* 0x100C51D3: call 0x100c5e60 */
    RECOMP_FLAGS_IN();
    eax = ebp + (-0x10); /* 0x100C51D8: lea eax, [ebp - 0x10] */
    PUSH32(esp, eax); /* 0x100C51DB: push eax */
    { double _v = fp_pop(); *(double*)ADDR(ebp + (-0x8)) = _v; } /* 0x100C51DC: fstp qword ptr [ebp - 8] */
    RECOMP_CALL(sub_100BFE08); /* 0x100C51DF: call 0x100bfe08 */
    RECOMP_FLAGS_IN();
    esi = (uint32_t)LO16(eax); /* 0x100C51E4: movzx esi, ax */
    eax = ebp + (-0x8); /* 0x100C51E7: lea eax, [ebp - 8] */
    PUSH32(esp, eax); /* 0x100C51EA: push eax */
    RECOMP_CALL(sub_100BFE08); /* 0x100C51EB: call 0x100bfe08 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x18u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x18u; /* 0x100C51F0: add esp, 0x18 */
    _flag_k = FK_ADD;
    eax = (uint32_t)LO16(eax); /* 0x100C51F3: movzx eax, ax */
    PUSH32(esp, 2); /* 0x100C51F6: push 2 */
    ecx = POP32_VAL(esp); /* 0x100C51F8: pop ecx */
    /* cmp LO16(esi), LO16(ecx) */ /* 0x100C51F9: cmp si, cx */
    _flag_a = (uint32_t)(LO16(esi)) << 16; _flag_b = (uint32_t)(LO16(ecx)) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    if (CMP_NE(_flag_a, _flag_b)) goto L_100C522A; /* 0x100C51FC: jne 0x100c522a */
L_100C51FE:
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x10u; /* 0x100C51FE: sub esp, 0x10 */
    _flag_k = FK_CMP;
    /* test LO16(eax), LO16(eax) */ /* 0x100C5201: test ax, ax */
    _flag_a = (uint32_t)(LO16(eax)) << 16; _flag_b = (uint32_t)(LO16(eax)) << 16;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 16);
    eax = ebp + (-0x20); /* 0x100C5204: lea eax, [ebp - 0x20] */
    if (TEST_NZ(_flag_a, _flag_b)) goto L_100C521B; /* 0x100C5207: jne 0x100c521b */
L_100C5209:
    fp_push(*(double*)ADDR(ebp + (-0x8))); /* 0x100C5209: fld qword ptr [ebp - 8] */
    { double _v = fp_pop(); *(double*)ADDR(esp + 0x8) = _v; } /* 0x100C520C: fstp qword ptr [esp + 8] */
    fp_push(*(double*)ADDR(0x10065B58)); /* 0x100C5210: fld qword ptr [0x10065b58] */
    goto L_100C532B; /* 0x100C5216: jmp 0x100c532b */
L_100C521B:
    fp_push(*(double*)ADDR(0x10065B58)); /* 0x100C521B: fld qword ptr [0x10065b58] */
L_100C5221:
    *(double*)ADDR(esp + 0x8) = _st[0]; /* 0x100C5221: fst qword ptr [esp + 8] */
    goto L_100C532B; /* 0x100C5225: jmp 0x100c532b */
L_100C522A:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edi = 0; /* 0x100C522A: xor edi, edi */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(1);
    edi = edi + 1; /* 0x100C522C: inc edi */
    _flag_k = FK_INC;
    /* cmp LO16(eax), LO16(edi) */ /* 0x100C522D: cmp ax, di */
    _flag_a = (uint32_t)(LO16(eax)) << 16; _flag_b = (uint32_t)(LO16(edi)) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    if (CMP_NE(_flag_a, _flag_b)) goto L_100C5286; /* 0x100C5230: jne 0x100c5286 */
L_100C5232:
    PUSH32(esp, edi); /* 0x100C5232: push edi */
    RECOMP_CALL(sub_100BFFA8); /* 0x100C5233: call 0x100bffa8 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x100C5238: pop ecx */
    /* test LO16(esi), LO16(esi) */ /* 0x100C5239: test si, si */
    _flag_a = (uint32_t)(LO16(esi)) << 16; _flag_b = (uint32_t)(LO16(esi)) << 16;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 16);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_100C5266; /* 0x100C523C: jne 0x100c5266 */
L_100C523E:
    fp_push(0.0); /* 0x100C523E: fldz  */
    _fpu_cmp = FPU_CMP(_st[0], *(double*)ADDR(ebp + (-0x8))); /* 0x100C5240: fcom qword ptr [ebp - 8] */
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x100C5243: fnstsw ax */
    /* test HI8(eax), 0x41u */ /* 0x100C5245: test ah, 0x41 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(0x41u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_100C5254; /* 0x100C5248: jne 0x100c5254 */
L_100C524A:
    { _st[0] = _st[0]; g_st_i64[0] = g_st_i64[0]; fp_pop(); } /* 0x100C524A: fstp st(0) */
    fp_push(*(double*)ADDR(0x10065C08)); /* 0x100C524C: fld qword ptr [0x10065c08] */
    _st[0] = -_st[0]; /* 0x100C5252: fchs  */
L_100C5254:
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x10u; /* 0x100C5254: sub esp, 0x10 */
    _flag_k = FK_CMP;
    { double _v = fp_pop(); *(double*)ADDR(esp + 0x8) = _v; } /* 0x100C5257: fstp qword ptr [esp + 8] */
    fp_push(*(double*)ADDR(0x10065B58)); /* 0x100C525B: fld qword ptr [0x10065b58] */
    goto L_100C5328; /* 0x100C5261: jmp 0x100c5328 */
L_100C5266:
    fp_push(*(double*)ADDR(0x10065B58)); /* 0x100C5266: fld qword ptr [0x10065b58] */
    eax = ebp + (-0x20); /* 0x100C526C: lea eax, [ebp - 0x20] */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x10u; /* 0x100C526F: sub esp, 0x10 */
    _flag_k = FK_CMP;
    /* cmp LO16(esi), LO16(edi) */ /* 0x100C5272: cmp si, di */
    _flag_a = (uint32_t)(LO16(esi)) << 16; _flag_b = (uint32_t)(LO16(edi)) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    RECOMP_BACKEDGE();
    if (CMP_NE(_flag_a, _flag_b)) goto L_100C5221; /* 0x100C5275: jne 0x100c5221 */
L_100C5277:
    { double _v = fp_pop(); *(double*)ADDR(esp + 0x8) = _v; } /* 0x100C5277: fstp qword ptr [esp + 8] */
    fp_push(*(double*)ADDR(0x10065B48)); /* 0x100C527B: fld qword ptr [0x10065b48] */
    goto L_100C532B; /* 0x100C5281: jmp 0x100c532b */
L_100C5286:
    /* cmp LO16(eax), LO16(ecx) */ /* 0x100C5286: cmp ax, cx */
    _flag_a = (uint32_t)(LO16(eax)) << 16; _flag_b = (uint32_t)(LO16(ecx)) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    if (CMP_NE(_flag_a, _flag_b)) goto L_100C5295; /* 0x100C5289: jne 0x100c5295 */
L_100C528B:
    /* test LO16(esi), LO16(esi) */ /* 0x100C528B: test si, si */
    _flag_a = (uint32_t)(LO16(esi)) << 16; _flag_b = (uint32_t)(LO16(esi)) << 16;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 16);
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_100C5266; /* 0x100C528E: jne 0x100c5266 */
L_100C5290:
    fp_push(*(double*)ADDR(ebp + (-0x10))); /* 0x100C5290: fld qword ptr [ebp - 0x10] */
    RECOMP_BACKEDGE();
    goto L_100C5254; /* 0x100C5293: jmp 0x100c5254 */
L_100C5295:
    /* cmp LO16(esi), LO16(edi) */ /* 0x100C5295: cmp si, di */
    _flag_a = (uint32_t)(LO16(esi)) << 16; _flag_b = (uint32_t)(LO16(edi)) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    if (CMP_NE(_flag_a, _flag_b)) goto L_100C52EA; /* 0x100C5298: jne 0x100c52ea */
L_100C529A:
    /* test LO16(eax), LO16(eax) */ /* 0x100C529A: test ax, ax */
    _flag_a = (uint32_t)(LO16(eax)) << 16; _flag_b = (uint32_t)(LO16(eax)) << 16;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 16);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_100C52BF; /* 0x100C529D: jne 0x100c52bf */
L_100C529F:
    fp_push(0.0); /* 0x100C529F: fldz  */
    _fpu_cmp = FPU_CMP(_st[0], *(double*)ADDR(ebp + (-0x10))); /* 0x100C52A1: fcomp qword ptr [ebp - 0x10] */
    fp_pop();
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x100C52A4: fnstsw ax */
    fp_push(*(double*)ADDR(ebp + (-0x8))); /* 0x100C52A6: fld qword ptr [ebp - 8] */
    /* test HI8(eax), 0x41u */ /* 0x100C52A9: test ah, 0x41 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(0x41u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_100C52B0; /* 0x100C52AC: jne 0x100c52b0 */
L_100C52AE:
    _st[0] = -_st[0]; /* 0x100C52AE: fchs  */
L_100C52B0:
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x10u; /* 0x100C52B0: sub esp, 0x10 */
    _flag_k = FK_CMP;
    { double _v = fp_pop(); *(double*)ADDR(esp + 0x8) = _v; } /* 0x100C52B3: fstp qword ptr [esp + 8] */
    fp_push(*(double*)ADDR(0x10065B48)); /* 0x100C52B7: fld qword ptr [0x10065b48] */
    goto L_100C5328; /* 0x100C52BD: jmp 0x100c5328 */
L_100C52BF:
    fp_push(*(double*)ADDR(ebp + (-0x8))); /* 0x100C52BF: fld qword ptr [ebp - 8] */
    PUSH32(esp, ecx); /* 0x100C52C2: push ecx */
    PUSH32(esp, ecx); /* 0x100C52C3: push ecx */
    { double _v = fp_pop(); *(double*)ADDR(esp) = _v; } /* 0x100C52C4: fstp qword ptr [esp] */
    RECOMP_CALL(sub_10036CCF); /* 0x100C52C7: call 0x10036ccf */
    RECOMP_FLAGS_IN();
    _st[0] *= *(double*)ADDR(0x10065B48); /* 0x100C52CC: fmul qword ptr [0x10065b48] */
    { double _v = fp_pop(); *(double*)ADDR(esp) = _v; } /* 0x100C52D2: fstp qword ptr [esp] */
    fp_push(*(double*)ADDR(ebp + (-0x8))); /* 0x100C52D5: fld qword ptr [ebp - 8] */
    PUSH32(esp, ecx); /* 0x100C52D8: push ecx */
    PUSH32(esp, ecx); /* 0x100C52D9: push ecx */
    { double _v = fp_pop(); *(double*)ADDR(esp) = _v; } /* 0x100C52DA: fstp qword ptr [esp] */
    RECOMP_CALL(sub_10036596); /* 0x100C52DD: call 0x10036596 */
    RECOMP_FLAGS_IN();
    _st[0] *= *(double*)ADDR(0x10065B48); /* 0x100C52E2: fmul qword ptr [0x10065b48] */
    goto L_100C5328; /* 0x100C52E8: jmp 0x100c5328 */
L_100C52EA:
    fp_push(*(double*)ADDR(ebp + (-0x8))); /* 0x100C52EA: fld qword ptr [ebp - 8] */
    PUSH32(esp, ecx); /* 0x100C52ED: push ecx */
    PUSH32(esp, ecx); /* 0x100C52EE: push ecx */
    { double _v = fp_pop(); *(double*)ADDR(esp) = _v; } /* 0x100C52EF: fstp qword ptr [esp] */
    RECOMP_CALL(sub_10036CCF); /* 0x100C52F2: call 0x10036ccf */
    RECOMP_FLAGS_IN();
    { double _v = fp_pop(); *(double*)ADDR(esp) = _v; } /* 0x100C52F7: fstp qword ptr [esp] */
    fp_push(*(double*)ADDR(ebp + (-0x10))); /* 0x100C52FA: fld qword ptr [ebp - 0x10] */
    PUSH32(esp, ecx); /* 0x100C52FD: push ecx */
    PUSH32(esp, ecx); /* 0x100C52FE: push ecx */
    { double _v = fp_pop(); *(double*)ADDR(esp) = _v; } /* 0x100C52FF: fstp qword ptr [esp] */
    RECOMP_CALL(sub_100C6C86); /* 0x100C5302: call 0x100c6c86 */
    RECOMP_FLAGS_IN();
    { double _v = fp_pop(); *(double*)ADDR(esp + 0x8) = _v; } /* 0x100C5307: fstp qword ptr [esp + 8] */
    fp_push(*(double*)ADDR(ebp + (-0x8))); /* 0x100C530B: fld qword ptr [ebp - 8] */
    { double _v = fp_pop(); *(double*)ADDR(esp) = _v; } /* 0x100C530E: fstp qword ptr [esp] */
    RECOMP_CALL(sub_10036596); /* 0x100C5311: call 0x10036596 */
    RECOMP_FLAGS_IN();
    { double _v = fp_pop(); *(double*)ADDR(esp) = _v; } /* 0x100C5316: fstp qword ptr [esp] */
    fp_push(*(double*)ADDR(ebp + (-0x10))); /* 0x100C5319: fld qword ptr [ebp - 0x10] */
    PUSH32(esp, ecx); /* 0x100C531C: push ecx */
    PUSH32(esp, ecx); /* 0x100C531D: push ecx */
    { double _v = fp_pop(); *(double*)ADDR(esp) = _v; } /* 0x100C531E: fstp qword ptr [esp] */
    RECOMP_CALL(sub_100C50E0); /* 0x100C5321: call 0x100c50e0 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x100C5326: pop ecx */
    ecx = POP32_VAL(esp); /* 0x100C5327: pop ecx */
L_100C5328:
    eax = ebp + (-0x20); /* 0x100C5328: lea eax, [ebp - 0x20] */
L_100C532B:
    { double _v = fp_pop(); *(double*)ADDR(esp) = _v; } /* 0x100C532B: fstp qword ptr [esp] */
    PUSH32(esp, eax); /* 0x100C532E: push eax */
    RECOMP_CALL(sub_100AACD2); /* 0x100C532F: call 0x100aacd2 */
    RECOMP_FLAGS_IN();
    esi = eax; /* 0x100C5334: mov esi, eax */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x14u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x14u; /* 0x100C5336: add esp, 0x14 */
    _flag_k = FK_ADD;
    eax = MEM32(ebp + 0x8); /* 0x100C5339: mov eax, dword ptr [ebp + 8] */
    edi = eax; /* 0x100C533C: mov edi, eax */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x100C533E: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x100C533F: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x100C5340: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x100C5341: movsd dword ptr es:[edi], dword ptr [esi] */
    edi = POP32_VAL(esp); /* 0x100C5342: pop edi */
    esi = POP32_VAL(esp); /* 0x100C5343: pop esi */
    esp = ebp; /* 0x100C5344: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x100C5346: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x100C5347: ret  */
    RECOMP_REGS_OUT();
}
