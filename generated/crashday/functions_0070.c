#define RECOMP_GENERATED_CODE

#include "functions.h"

void sub_0077F5D8(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0077F5D8u);

L_0077F5D8:
    PUSH32(esp, ebp); /* 0x0077F5D8: push ebp */
    ebp = esp; /* 0x0077F5D9: mov ebp, esp */
    /* test MEM8(ebp + 0x8), 2 */ /* 0x0077F5DB: test byte ptr [ebp + 8], 2 */
    _flag_a = (uint32_t)(MEM8(ebp + 0x8)) << 24; _flag_b = (uint32_t)(2) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    PUSH32(esp, esi); /* 0x0077F5DF: push esi */
    esi = ecx; /* 0x0077F5E0: mov esi, ecx */
    if (TEST_Z(_flag_a, _flag_b)) goto L_0077F609; /* 0x0077F5E2: je 0x77f609 */
L_0077F5E4:
    PUSH32(esp, edi); /* 0x0077F5E4: push edi */
    PUSH32(esp, 0x0077FD2Cu); /* 0x0077F5E5: push 0x77fd2c */
    edi = esi + (-0x4); /* 0x0077F5EA: lea edi, [esi - 4] */
    PUSH32(esp, MEM32(edi)); /* 0x0077F5ED: push dword ptr [edi] */
    PUSH32(esp, 0xCu); /* 0x0077F5EF: push 0xc */
    PUSH32(esp, esi); /* 0x0077F5F1: push esi */
    RECOMP_CALL(sub_0077F628); /* 0x0077F5F2: call 0x77f628 */
    RECOMP_FLAGS_IN();
    /* test MEM8(ebp + 0x8), 1 */ /* 0x0077F5F7: test byte ptr [ebp + 8], 1 */
    _flag_a = (uint32_t)(MEM8(ebp + 0x8)) << 24; _flag_b = (uint32_t)(1) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_0077F604; /* 0x0077F5FB: je 0x77f604 */
L_0077F5FD:
    PUSH32(esp, edi); /* 0x0077F5FD: push edi */
    RECOMP_CALL(sub_0077F5D2); /* 0x0077F5FE: call 0x77f5d2 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x0077F603: pop ecx */
L_0077F604:
    eax = edi; /* 0x0077F604: mov eax, edi */
    edi = POP32_VAL(esp); /* 0x0077F606: pop edi */
    goto L_0077F61D; /* 0x0077F607: jmp 0x77f61d */
L_0077F609:
    RECOMP_CALL(sub_0077FD2C); /* 0x0077F609: call 0x77fd2c */
    RECOMP_FLAGS_IN();
    /* test MEM8(ebp + 0x8), 1 */ /* 0x0077F60E: test byte ptr [ebp + 8], 1 */
    _flag_a = (uint32_t)(MEM8(ebp + 0x8)) << 24; _flag_b = (uint32_t)(1) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_0077F61B; /* 0x0077F612: je 0x77f61b */
L_0077F614:
    PUSH32(esp, esi); /* 0x0077F614: push esi */
    RECOMP_CALL(sub_0077F5D2); /* 0x0077F615: call 0x77f5d2 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x0077F61A: pop ecx */
L_0077F61B:
    eax = esi; /* 0x0077F61B: mov eax, esi */
L_0077F61D:
    esi = POP32_VAL(esp); /* 0x0077F61D: pop esi */
    ebp = POP32_VAL(esp); /* 0x0077F61E: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x0077F61F: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_0077F622(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0077F622u);

L_0077F622:
    { _itail_tgt = (uint32_t)(MEM32(0x7CC698)); goto _ljump; }
    { RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_0077F628(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0077F628u);

L_0077F628:
    PUSH32(esp, 0xCu); /* 0x0077F628: push 0xc */
    PUSH32(esp, 0x0084FE10u); /* 0x0077F62A: push 0x84fe10 */
    RECOMP_CALL(sub_0077FCB0); /* 0x0077F62F: call 0x77fcb0 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(MEM32(ebp + (-0x1C))); _flag_b = (uint32_t)(0);
    MEM32(ebp + (-0x1C)) = MEM32(ebp + (-0x1C)) & 0; /* 0x0077F634: and dword ptr [ebp - 0x1c], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    ebx = MEM32(ebp + 0xC); /* 0x0077F638: mov ebx, dword ptr [ebp + 0xc] */
    eax = ebx; /* 0x0077F63B: mov eax, ebx */
    edi = MEM32(ebp + 0x10); /* 0x0077F63D: mov edi, dword ptr [ebp + 0x10] */
    eax = (uint32_t)((int32_t)eax * (int32_t)edi); /* 0x0077F640: imul eax, edi */
    esi = MEM32(ebp + 0x8); /* 0x0077F643: mov esi, dword ptr [ebp + 8] */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esi = esi + eax; /* 0x0077F646: add esi, eax */
    _flag_k = FK_ADD;
    MEM32(ebp + 0x8) = esi; /* 0x0077F648: mov dword ptr [ebp + 8], esi */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x4))); _flag_b = (uint32_t)(0);
    MEM32(ebp + (-0x4)) = MEM32(ebp + (-0x4)) & 0; /* 0x0077F64B: and dword ptr [ebp - 4], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
L_0077F64F:
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(1);
    edi = edi - 1; /* 0x0077F64F: dec edi */
    _flag_k = FK_DEC;
    MEM32(ebp + 0x10) = edi; /* 0x0077F650: mov dword ptr [ebp + 0x10], edi */
    if (/* dec result */ CMP_S(_flag_a, _flag_b)) goto L_0077F661; /* 0x0077F653: js 0x77f661 */
L_0077F655:
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esi = esi - ebx; /* 0x0077F655: sub esi, ebx */
    _flag_k = FK_CMP;
    MEM32(ebp + 0x8) = esi; /* 0x0077F657: mov dword ptr [ebp + 8], esi */
    ecx = esi; /* 0x0077F65A: mov ecx, esi */
    RECOMP_ICALL(MEM32(ebp + 0x14)); /* 0x0077F65C: call dword ptr [ebp + 0x14] */
    RECOMP_FLAGS_IN();
    RECOMP_BACKEDGE();
    goto L_0077F64F; /* 0x0077F65F: jmp 0x77f64f */
L_0077F661:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x0077F661: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x0077F663: inc eax */
    _flag_k = FK_INC;
    MEM32(ebp + (-0x1C)) = eax; /* 0x0077F664: mov dword ptr [ebp - 0x1c], eax */
    MEM32(ebp + (-0x4)) = 0xFFFFFFFEu; /* 0x0077F667: mov dword ptr [ebp - 4], 0xfffffffe */
    RECOMP_CALL(sub_0077F687); /* 0x0077F66E: call 0x77f687 */
    RECOMP_FLAGS_IN();
    RECOMP_CALL(sub_0077FCF5); /* 0x0077F673: call 0x77fcf5 */
    RECOMP_FLAGS_IN();
    RECOMP_FLAGS_OUT(); esp += 20; { RECOMP_REGS_OUT(); return; } /* 0x0077F678: ret 0x10 */
    RECOMP_REGS_OUT();
}

void sub_0077F67B(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0077F67Bu);

L_0077F67B:
    edi = MEM32(ebp + 0x10); /* 0x0077F67B: mov edi, dword ptr [ebp + 0x10] */
    ebx = MEM32(ebp + 0xC); /* 0x0077F67E: mov ebx, dword ptr [ebp + 0xc] */
    esi = MEM32(ebp + 0x8); /* 0x0077F681: mov esi, dword ptr [ebp + 8] */
    eax = MEM32(ebp + (-0x1C)); /* 0x0077F684: mov eax, dword ptr [ebp - 0x1c] */
    /* test eax, eax */ /* 0x0077F687: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_0077F696; /* 0x0077F689: jne 0x77f696 */
L_0077F68B:
    PUSH32(esp, MEM32(ebp + 0x14)); /* 0x0077F68B: push dword ptr [ebp + 0x14] */
    PUSH32(esp, edi); /* 0x0077F68E: push edi */
    PUSH32(esp, ebx); /* 0x0077F68F: push ebx */
    PUSH32(esp, esi); /* 0x0077F690: push esi */
    RECOMP_CALL(sub_0077F697); /* 0x0077F691: call 0x77f697 */
    RECOMP_FLAGS_IN();
L_0077F696:
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x0077F696: ret  */
    RECOMP_REGS_OUT();
}

void sub_0077F687(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0077F687u);

L_0077F687:
    /* test eax, eax */ /* 0x0077F687: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_0077F696; /* 0x0077F689: jne 0x77f696 */
L_0077F68B:
    PUSH32(esp, MEM32(ebp + 0x14)); /* 0x0077F68B: push dword ptr [ebp + 0x14] */
    PUSH32(esp, edi); /* 0x0077F68E: push edi */
    PUSH32(esp, ebx); /* 0x0077F68F: push ebx */
    PUSH32(esp, esi); /* 0x0077F690: push esi */
    RECOMP_CALL(sub_0077F697); /* 0x0077F691: call 0x77f697 */
    RECOMP_FLAGS_IN();
L_0077F696:
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x0077F696: ret  */
    RECOMP_REGS_OUT();
}

void sub_0077F697(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0077F697u);

L_0077F697:
    PUSH32(esp, 0x14u); /* 0x0077F697: push 0x14 */
    PUSH32(esp, 0x0084FE30u); /* 0x0077F699: push 0x84fe30 */
    RECOMP_CALL(sub_0077FCB0); /* 0x0077F69E: call 0x77fcb0 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(MEM32(ebp + (-0x4))); _flag_b = (uint32_t)(0);
    MEM32(ebp + (-0x4)) = MEM32(ebp + (-0x4)) & 0; /* 0x0077F6A3: and dword ptr [ebp - 4], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
L_0077F6A7:
    _flag_a = (uint32_t)(MEM32(ebp + 0x10)); _flag_b = (uint32_t)(1);
    MEM32(ebp + 0x10) = MEM32(ebp + 0x10) - 1; /* 0x0077F6A7: dec dword ptr [ebp + 0x10] */
    _flag_k = FK_DEC;
    if (/* dec result */ CMP_S(_flag_a, _flag_b)) goto L_0077F6E6; /* 0x0077F6AA: js 0x77f6e6 */
L_0077F6AC:
    ecx = MEM32(ebp + 0x8); /* 0x0077F6AC: mov ecx, dword ptr [ebp + 8] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(MEM32(ebp + 0xC));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ecx = ecx - MEM32(ebp + 0xC); /* 0x0077F6AF: sub ecx, dword ptr [ebp + 0xc] */
    _flag_k = FK_CMP;
    MEM32(ebp + 0x8) = ecx; /* 0x0077F6B2: mov dword ptr [ebp + 8], ecx */
    RECOMP_ICALL(MEM32(ebp + 0x14)); /* 0x0077F6B5: call dword ptr [ebp + 0x14] */
    RECOMP_FLAGS_IN();
    RECOMP_BACKEDGE();
    goto L_0077F6A7; /* 0x0077F6B8: jmp 0x77f6a7 */
L_0077F6E6:
    MEM32(ebp + (-0x4)) = 0xFFFFFFFEu; /* 0x0077F6E6: mov dword ptr [ebp - 4], 0xfffffffe */
    RECOMP_CALL(sub_0077FCF5); /* 0x0077F6ED: call 0x77fcf5 */
    RECOMP_FLAGS_IN();
    RECOMP_FLAGS_OUT(); esp += 20; { RECOMP_REGS_OUT(); return; } /* 0x0077F6F2: ret 0x10 */
    RECOMP_REGS_OUT();
}

void sub_0077F6BA(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0077F6BAu);

L_0077F6BA:
    eax = MEM32(ebp + (-0x14)); /* 0x0077F6BA: mov eax, dword ptr [ebp - 0x14] */
    MEM32(ebp + (-0x1C)) = eax; /* 0x0077F6BD: mov dword ptr [ebp - 0x1c], eax */
    eax = MEM32(ebp + (-0x1C)); /* 0x0077F6C0: mov eax, dword ptr [ebp - 0x1c] */
    eax = MEM32(eax); /* 0x0077F6C3: mov eax, dword ptr [eax] */
    MEM32(ebp + (-0x20)) = eax; /* 0x0077F6C5: mov dword ptr [ebp - 0x20], eax */
    eax = MEM32(ebp + (-0x20)); /* 0x0077F6C8: mov eax, dword ptr [ebp - 0x20] */
    /* cmp MEM32(eax), 0xE06D7363u */ /* 0x0077F6CB: cmp dword ptr [eax], 0xe06d7363 */
    _flag_a = (uint32_t)(MEM32(eax)); _flag_b = (uint32_t)(0xE06D7363u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_0077F6DE; /* 0x0077F6D1: je 0x77f6de */
L_0077F6D3:
    MEM32(ebp + (-0x24)) = 0; /* 0x0077F6D3: mov dword ptr [ebp - 0x24], 0 */
    eax = MEM32(ebp + (-0x24)); /* 0x0077F6DA: mov eax, dword ptr [ebp - 0x24] */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x0077F6DD: ret  */
L_0077F6DE:
    RECOMP_CALL(sub_0077F97E); /* 0x0077F6DE: call 0x77f97e */
    RECOMP_FLAGS_IN();
    esp = MEM32(ebp + (-0x18)); /* 0x0077F6E3: mov esp, dword ptr [ebp - 0x18] */
    MEM32(ebp + (-0x4)) = 0xFFFFFFFEu; /* 0x0077F6E6: mov dword ptr [ebp - 4], 0xfffffffe */
    RECOMP_CALL(sub_0077FCF5); /* 0x0077F6ED: call 0x77fcf5 */
    RECOMP_FLAGS_IN();
    RECOMP_FLAGS_OUT(); esp += 20; { RECOMP_REGS_OUT(); return; } /* 0x0077F6F2: ret 0x10 */
    RECOMP_REGS_OUT();
}

void sub_0077F6E3(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0077F6E3u);

L_0077F6E3:
    esp = MEM32(ebp + (-0x18)); /* 0x0077F6E3: mov esp, dword ptr [ebp - 0x18] */
    MEM32(ebp + (-0x4)) = 0xFFFFFFFEu; /* 0x0077F6E6: mov dword ptr [ebp - 4], 0xfffffffe */
    RECOMP_CALL(sub_0077FCF5); /* 0x0077F6ED: call 0x77fcf5 */
    RECOMP_FLAGS_IN();
    RECOMP_FLAGS_OUT(); esp += 20; { RECOMP_REGS_OUT(); return; } /* 0x0077F6F2: ret 0x10 */
    RECOMP_REGS_OUT();
}

void sub_0077F6F5(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0077F6F5u);

L_0077F6F5:
    PUSH32(esp, 0x10u); /* 0x0077F6F5: push 0x10 */
    PUSH32(esp, 0x0084FE50u); /* 0x0077F6F7: push 0x84fe50 */
    RECOMP_CALL(sub_0077FCB0); /* 0x0077F6FC: call 0x77fcb0 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    esi = 0; /* 0x0077F701: xor esi, esi */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x1C)) = esi; /* 0x0077F703: mov dword ptr [ebp - 0x1c], esi */
    MEM32(ebp + (-0x20)) = esi; /* 0x0077F706: mov dword ptr [ebp - 0x20], esi */
    MEM32(ebp + (-0x4)) = esi; /* 0x0077F709: mov dword ptr [ebp - 4], esi */
L_0077F70C:
    /* cmp esi, MEM32(ebp + 0x10) */ /* 0x0077F70C: cmp esi, dword ptr [ebp + 0x10] */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(MEM32(ebp + 0x10));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_GE(_flag_a, _flag_b)) goto L_0077F723; /* 0x0077F70F: jge 0x77f723 */
L_0077F711:
    ecx = MEM32(ebp + 0x8); /* 0x0077F711: mov ecx, dword ptr [ebp + 8] */
    RECOMP_ICALL(MEM32(ebp + 0x14)); /* 0x0077F714: call dword ptr [ebp + 0x14] */
    RECOMP_FLAGS_IN();
    eax = MEM32(ebp + 0xC); /* 0x0077F717: mov eax, dword ptr [ebp + 0xc] */
    _flag_a = (uint32_t)(MEM32(ebp + 0x8)); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM32(ebp + 0x8) = MEM32(ebp + 0x8) + eax; /* 0x0077F71A: add dword ptr [ebp + 8], eax */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi + 1; /* 0x0077F71D: inc esi */
    _flag_k = FK_INC;
    MEM32(ebp + (-0x1C)) = esi; /* 0x0077F71E: mov dword ptr [ebp - 0x1c], esi */
    RECOMP_BACKEDGE();
    goto L_0077F70C; /* 0x0077F721: jmp 0x77f70c */
L_0077F723:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x0077F723: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x0077F725: inc eax */
    _flag_k = FK_INC;
    MEM32(ebp + (-0x20)) = eax; /* 0x0077F726: mov dword ptr [ebp - 0x20], eax */
    MEM32(ebp + (-0x4)) = 0xFFFFFFFEu; /* 0x0077F729: mov dword ptr [ebp - 4], 0xfffffffe */
    RECOMP_CALL(sub_0077F743); /* 0x0077F730: call 0x77f743 */
    RECOMP_FLAGS_IN();
    RECOMP_CALL(sub_0077FCF5); /* 0x0077F735: call 0x77fcf5 */
    RECOMP_FLAGS_IN();
    RECOMP_FLAGS_OUT(); esp += 24; { RECOMP_REGS_OUT(); return; } /* 0x0077F73A: ret 0x14 */
    RECOMP_REGS_OUT();
}

void sub_0077F73D(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0077F73Du);

L_0077F73D:
    esi = MEM32(ebp + (-0x1C)); /* 0x0077F73D: mov esi, dword ptr [ebp - 0x1c] */
    eax = MEM32(ebp + (-0x20)); /* 0x0077F740: mov eax, dword ptr [ebp - 0x20] */
    /* test eax, eax */ /* 0x0077F743: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_0077F756; /* 0x0077F745: jne 0x77f756 */
L_0077F747:
    PUSH32(esp, MEM32(ebp + 0x18)); /* 0x0077F747: push dword ptr [ebp + 0x18] */
    PUSH32(esp, esi); /* 0x0077F74A: push esi */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x0077F74B: push dword ptr [ebp + 0xc] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x0077F74E: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_0077F697); /* 0x0077F751: call 0x77f697 */
    RECOMP_FLAGS_IN();
L_0077F756:
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x0077F756: ret  */
    RECOMP_REGS_OUT();
}

void sub_0077F743(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0077F743u);

L_0077F743:
    /* test eax, eax */ /* 0x0077F743: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_0077F756; /* 0x0077F745: jne 0x77f756 */
L_0077F747:
    PUSH32(esp, MEM32(ebp + 0x18)); /* 0x0077F747: push dword ptr [ebp + 0x18] */
    PUSH32(esp, esi); /* 0x0077F74A: push esi */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x0077F74B: push dword ptr [ebp + 0xc] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x0077F74E: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_0077F697); /* 0x0077F751: call 0x77f697 */
    RECOMP_FLAGS_IN();
L_0077F756:
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x0077F756: ret  */
    RECOMP_REGS_OUT();
}

void sub_0077F758(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0077F758u);

L_0077F758:
    { _itail_tgt = (uint32_t)(MEM32(0x7CC6BC)); goto _ljump; }
    { RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_0077F75E(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0077F75Eu);

L_0077F75E:
    { _itail_tgt = (uint32_t)(MEM32(0x7CC6C4)); goto _ljump; }
    { RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_0077F764(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0077F764u);

L_0077F764:
    { _itail_tgt = (uint32_t)(MEM32(0x7CC6C8)); goto _ljump; }
    { RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_0077F76A(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0077F76Au);

L_0077F76A:
    PUSH32(esp, ebp); /* 0x0077F76A: push ebp */
    ebp = esp; /* 0x0077F76B: mov ebp, esp */
    RECOMP_ICALL(MEM32(0x7CC19C)); /* 0x0077F76D: call dword ptr [0x7cc19c] */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 1); /* 0x0077F773: push 1 */
    MEM32(0x868D84) = eax; /* 0x0077F775: mov dword ptr [0x868d84], eax */
    RECOMP_CALL(sub_0077FD32); /* 0x0077F77A: call 0x77fd32 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x0077F77F: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_0077FD38); /* 0x0077F782: call 0x77fd38 */
    RECOMP_FLAGS_IN();
    /* cmp MEM32(0x868D84), 0 */ /* 0x0077F787: cmp dword ptr [0x868d84], 0 */
    _flag_a = (uint32_t)(MEM32(0x868D84)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    ecx = POP32_VAL(esp); /* 0x0077F78E: pop ecx */
    ecx = POP32_VAL(esp); /* 0x0077F78F: pop ecx */
    if (CMP_NE(_flag_a, _flag_b)) goto L_0077F79A; /* 0x0077F790: jne 0x77f79a */
L_0077F792:
    PUSH32(esp, 1); /* 0x0077F792: push 1 */
    RECOMP_CALL(sub_0077FD32); /* 0x0077F794: call 0x77fd32 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x0077F799: pop ecx */
L_0077F79A:
    PUSH32(esp, 0xC0000409u); /* 0x0077F79A: push 0xc0000409 */
    RECOMP_CALL(sub_0077FD3E); /* 0x0077F79F: call 0x77fd3e */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x0077F7A4: pop ecx */
    ebp = POP32_VAL(esp); /* 0x0077F7A5: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x0077F7A6: ret  */
    RECOMP_REGS_OUT();
}

void sub_0077F8A2(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0077F8A2u);

L_0077F8A2:
    PUSH32(esp, ebp); /* 0x0077F8A2: push ebp */
    ebp = esp; /* 0x0077F8A3: mov ebp, esp */
    PUSH32(esp, 8); /* 0x0077F8A5: push 8 */
    RECOMP_CALL(sub_0077F8AE); /* 0x0077F8A7: call 0x77f8ae */
    RECOMP_FLAGS_IN();
    ebp = POP32_VAL(esp); /* 0x0077F8AC: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x0077F8AD: ret  */
    RECOMP_REGS_OUT();
}

void sub_0077F8AE(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0077F8AEu);

L_0077F8AE:
    PUSH32(esp, ebp); /* 0x0077F8AE: push ebp */
    ebp = esp; /* 0x0077F8AF: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x31Cu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x31Cu; /* 0x0077F8B1: sub esp, 0x31c */
    _flag_k = FK_CMP;
    PUSH32(esp, 0x17u); /* 0x0077F8B7: push 0x17 */
    RECOMP_CALL(sub_0078000A); /* 0x0077F8B9: call 0x78000a */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x0077F8BE: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_0077F8C7; /* 0x0077F8C0: je 0x77f8c7 */
L_0077F8C2:
    ecx = MEM32(ebp + 0x8); /* 0x0077F8C2: mov ecx, dword ptr [ebp + 8] */
    void_lift_trap(0x0077F8C5u, "int 0x29");
L_0077F8C7:
    MEM32(0x868B68) = eax; /* 0x0077F8C7: mov dword ptr [0x868b68], eax */
    MEM32(0x868B64) = ecx; /* 0x0077F8CC: mov dword ptr [0x868b64], ecx */
    MEM32(0x868B60) = edx; /* 0x0077F8D2: mov dword ptr [0x868b60], edx */
    MEM32(0x868B5C) = ebx; /* 0x0077F8D8: mov dword ptr [0x868b5c], ebx */
    MEM32(0x868B58) = esi; /* 0x0077F8DE: mov dword ptr [0x868b58], esi */
    MEM32(0x868B54) = edi; /* 0x0077F8E4: mov dword ptr [0x868b54], edi */
    MEM16(0x868B80) = (uint16_t)(_seg_ss); /* 0x0077F8EA: mov word ptr [0x868b80], ss */
    MEM16(0x868B74) = (uint16_t)(_seg_cs); /* 0x0077F8F1: mov word ptr [0x868b74], cs */
    MEM16(0x868B50) = (uint16_t)(_seg_ds); /* 0x0077F8F8: mov word ptr [0x868b50], ds */
    MEM16(0x868B4C) = (uint16_t)(_seg_es); /* 0x0077F8FF: mov word ptr [0x868b4c], es */
    MEM16(0x868B48) = (uint16_t)(_seg_fs); /* 0x0077F906: mov word ptr [0x868b48], fs */
    MEM16(0x868B44) = (uint16_t)(_seg_gs); /* 0x0077F90D: mov word ptr [0x868b44], gs */
    PUSH32(esp, recomp_eflags(_flag_k, _flag_a, _flag_b, _cf, _df)); /* 0x0077F914: pushfd  */
    POP32(esp, MEM32(0x868B78)); /* 0x0077F915: pop dword ptr [0x868b78] */
    eax = MEM32(ebp); /* 0x0077F91B: mov eax, dword ptr [ebp] */
    MEM32(0x868B6C) = eax; /* 0x0077F91E: mov dword ptr [0x868b6c], eax */
    eax = MEM32(ebp + 0x4); /* 0x0077F923: mov eax, dword ptr [ebp + 4] */
    MEM32(0x868B70) = eax; /* 0x0077F926: mov dword ptr [0x868b70], eax */
    eax = ebp + 0x8; /* 0x0077F92B: lea eax, [ebp + 8] */
    MEM32(0x868B7C) = eax; /* 0x0077F92E: mov dword ptr [0x868b7c], eax */
    eax = MEM32(ebp + (-0x31C)); /* 0x0077F933: mov eax, dword ptr [ebp - 0x31c] */
    eax = MEM32(0x868B70); /* 0x0077F939: mov eax, dword ptr [0x868b70] */
    MEM32(0x868A74) = eax; /* 0x0077F93E: mov dword ptr [0x868a74], eax */
    MEM32(0x868A68) = 0xC0000409u; /* 0x0077F943: mov dword ptr [0x868a68], 0xc0000409 */
    MEM32(0x868A6C) = 1; /* 0x0077F94D: mov dword ptr [0x868a6c], 1 */
    MEM32(0x868A78) = 1; /* 0x0077F957: mov dword ptr [0x868a78], 1 */
    PUSH32(esp, 4); /* 0x0077F961: push 4 */
    eax = POP32_VAL(esp); /* 0x0077F963: pop eax */
    eax = (uint32_t)((int32_t)eax * (int32_t)0); /* 0x0077F964: imul eax, eax, 0 */
    ecx = MEM32(ebp + 0x8); /* 0x0077F967: mov ecx, dword ptr [ebp + 8] */
    MEM32(eax + 0x868A7C) = ecx; /* 0x0077F96A: mov dword ptr [eax + 0x868a7c], ecx */
    PUSH32(esp, 0x007CCE00u); /* 0x0077F970: push 0x7cce00 */
    RECOMP_CALL(sub_0077F76A); /* 0x0077F975: call 0x77f76a */
    RECOMP_FLAGS_IN();
    esp = ebp; /* 0x0077F97A: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x0077F97C: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x0077F97D: ret  */
    RECOMP_REGS_OUT();
}

void sub_0077F97E(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0077F97Eu);

L_0077F97E:
    { _itail_tgt = (uint32_t)(MEM32(0x7CC490)); goto _ljump; }
    { RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_0077F984(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0077F984u);

L_0077F984:
    { _itail_tgt = (uint32_t)(MEM32(0x7CC51C)); goto _ljump; }
    { RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_0077F98A(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0077F98Au);

L_0077F98A:
    eax = 0x5A4Du; /* 0x0077F98A: mov eax, 0x5a4d */
    /* cmp MEM16(0x400000), LO16(eax) */ /* 0x0077F98F: cmp word ptr [0x400000], ax */
    _flag_a = (uint32_t)(MEM16(0x400000)) << 16; _flag_b = (uint32_t)(LO16(eax)) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_0077F99C; /* 0x0077F996: je 0x77f99c */
L_0077F998:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x0077F998: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_0077F9D0; /* 0x0077F99A: jmp 0x77f9d0 */
L_0077F99C:
    ecx = MEM32(0x40003C); /* 0x0077F99C: mov ecx, dword ptr [0x40003c] */
    /* cmp MEM32(ecx + 0x400000), 0x4550u */ /* 0x0077F9A2: cmp dword ptr [ecx + 0x400000], 0x4550 */
    _flag_a = (uint32_t)(MEM32(ecx + 0x400000)); _flag_b = (uint32_t)(0x4550u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_NE(_flag_a, _flag_b)) goto L_0077F998; /* 0x0077F9AC: jne 0x77f998 */
L_0077F9AE:
    eax = 0x10Bu; /* 0x0077F9AE: mov eax, 0x10b */
    /* cmp MEM16(ecx + 0x400018), LO16(eax) */ /* 0x0077F9B3: cmp word ptr [ecx + 0x400018], ax */
    _flag_a = (uint32_t)(MEM16(ecx + 0x400018)) << 16; _flag_b = (uint32_t)(LO16(eax)) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    RECOMP_BACKEDGE();
    if (CMP_NE(_flag_a, _flag_b)) goto L_0077F998; /* 0x0077F9BA: jne 0x77f998 */
L_0077F9BC:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x0077F9BC: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp MEM32(ecx + 0x400074), 0xEu */ /* 0x0077F9BE: cmp dword ptr [ecx + 0x400074], 0xe */
    _flag_a = (uint32_t)(MEM32(ecx + 0x400074)); _flag_b = (uint32_t)(0xEu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_0077F9D0; /* 0x0077F9C5: jbe 0x77f9d0 */
L_0077F9C7:
    /* cmp MEM32(ecx + 0x4000E8), eax */ /* 0x0077F9C7: cmp dword ptr [ecx + 0x4000e8], eax */
    _flag_a = (uint32_t)(MEM32(ecx + 0x4000E8)); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    SET_LO8(eax, (CMP_NE(_flag_a, _flag_b)) ? 1 : 0); /* 0x0077F9CD: setne al */
L_0077F9D0:
    PUSH32(esp, 2); /* 0x0077F9D0: push 2 */
    MEM32(0x868D90) = eax; /* 0x0077F9D2: mov dword ptr [0x868d90], eax */
    RECOMP_ICALL(MEM32(0x7CC630)); /* 0x0077F9D7: call dword ptr [0x7cc630] */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x0077F9DD: pop ecx */
    PUSH32(esp, 0xFFFFFFFFu); /* 0x0077F9DE: push -1 */
    RECOMP_ICALL(MEM32(0x7CC210)); /* 0x0077F9E0: call dword ptr [0x7cc210] */
    RECOMP_FLAGS_IN();
    ecx = MEM32(0x7CC4E0); /* 0x0077F9E6: mov ecx, dword ptr [0x7cc4e0] */
    MEM32(0x92C564) = eax; /* 0x0077F9EC: mov dword ptr [0x92c564], eax */
    MEM32(0x92C568) = eax; /* 0x0077F9F1: mov dword ptr [0x92c568], eax */
    eax = MEM32(0x868DB4); /* 0x0077F9F6: mov eax, dword ptr [0x868db4] */
    MEM32(ecx) = eax; /* 0x0077F9FB: mov dword ptr [ecx], eax */
    ecx = MEM32(0x7CC654); /* 0x0077F9FD: mov ecx, dword ptr [0x7cc654] */
    eax = MEM32(0x868DA8); /* 0x0077FA03: mov eax, dword ptr [0x868da8] */
    MEM32(ecx) = eax; /* 0x0077FA08: mov dword ptr [ecx], eax */
    RECOMP_CALL(sub_0077FF7D); /* 0x0077FA0A: call 0x77ff7d */
    RECOMP_FLAGS_IN();
    RECOMP_CALL(sub_006658D0); /* 0x0077FA0F: call 0x6658d0 */
    RECOMP_FLAGS_IN();
    /* cmp MEM32(0x855010), 0 */ /* 0x0077FA14: cmp dword ptr [0x855010], 0 */
    _flag_a = (uint32_t)(MEM32(0x855010)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_0077FA29; /* 0x0077FA1B: jne 0x77fa29 */
L_0077FA1D:
    PUSH32(esp, 0x006658D0u); /* 0x0077FA1D: push 0x6658d0 */
    RECOMP_ICALL(MEM32(0x7CC644)); /* 0x0077FA22: call dword ptr [0x7cc644] */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x0077FA28: pop ecx */
L_0077FA29:
    RECOMP_CALL(sub_0077FFBD); /* 0x0077FA29: call 0x77ffbd */
    RECOMP_FLAGS_IN();
    /* cmp MEM32(0x855014), 0xFFFFFFFFu */ /* 0x0077FA2E: cmp dword ptr [0x855014], -1 */
    _flag_a = (uint32_t)(MEM32(0x855014)); _flag_b = (uint32_t)(0xFFFFFFFFu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_0077FA40; /* 0x0077FA35: jne 0x77fa40 */
L_0077FA37:
    PUSH32(esp, 0xFFFFFFFFu); /* 0x0077FA37: push -1 */
    RECOMP_ICALL(MEM32(0x7CC640)); /* 0x0077FA39: call dword ptr [0x7cc640] */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x0077FA3F: pop ecx */
L_0077FA40:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x0077FA40: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x0077FA42: ret  */
    RECOMP_REGS_OUT();
}

void sub_0077FA43(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0077FA43u);

L_0077FA43:
    PUSH32(esp, 0x0077FF9Du); /* 0x0077FA43: push 0x77ff9d */
    RECOMP_CALL(sub_0077F5B6); /* 0x0077FA48: call 0x77f5b6 */
    RECOMP_FLAGS_IN();
    eax = MEM32(0x868DB0); /* 0x0077FA4D: mov eax, dword ptr [0x868db0] */
    MEM32(esp) = 0x00868DA4u; /* 0x0077FA52: mov dword ptr [esp], 0x868da4 */
    PUSH32(esp, MEM32(0x868DAC)); /* 0x0077FA59: push dword ptr [0x868dac] */
    MEM32(0x868DA4) = eax; /* 0x0077FA5F: mov dword ptr [0x868da4], eax */
    PUSH32(esp, 0x00868D9Cu); /* 0x0077FA64: push 0x868d9c */
    PUSH32(esp, 0x00868D98u); /* 0x0077FA69: push 0x868d98 */
    PUSH32(esp, 0x00868D94u); /* 0x0077FA6E: push 0x868d94 */
    RECOMP_ICALL(MEM32(0x7CC62C)); /* 0x0077FA73: call dword ptr [0x7cc62c] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x14u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x14u; /* 0x0077FA79: add esp, 0x14 */
    _flag_k = FK_ADD;
    MEM32(0x868DA0) = eax; /* 0x0077FA7C: mov dword ptr [0x868da0], eax */
    /* test eax, eax */ /* 0x0077FA81: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) == 0u)) goto L_0077FA8D; /* 0x0077FA83: jns 0x77fa8d */
L_0077FA85:
    PUSH32(esp, 8); /* 0x0077FA85: push 8 */
    RECOMP_CALL(sub_0077FD9A); /* 0x0077FA87: call 0x77fd9a */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x0077FA8C: pop ecx */
L_0077FA8D:
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x0077FA8D: ret  */
    RECOMP_REGS_OUT();
}

void sub_0077FA8E(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0077FA8Eu);

L_0077FA8E:
    RECOMP_CALL(sub_0077FEE1); /* 0x0077FA8E: call 0x77fee1 */
    RECOMP_FLAGS_IN();
    goto L_0077FA98; /* 0x0077FA93: jmp 0x77fa98 */
L_0077FA98:
    PUSH32(esp, 0x14u); /* 0x0077FA98: push 0x14 */
    PUSH32(esp, 0x0084FE70u); /* 0x0077FA9A: push 0x84fe70 */
    RECOMP_CALL(sub_0077FCB0); /* 0x0077FA9F: call 0x77fcb0 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    esi = 0; /* 0x0077FAA4: xor esi, esi */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x1C)) = esi; /* 0x0077FAA6: mov dword ptr [ebp - 0x1c], esi */
    MEM32(ebp + (-0x20)) = esi; /* 0x0077FAA9: mov dword ptr [ebp - 0x20], esi */
    RECOMP_ICALL(MEM32(0x7CC624)); /* 0x0077FAAC: call dword ptr [0x7cc624] */
    RECOMP_FLAGS_IN();
    ebx = (uint32_t)LO16(eax); /* 0x0077FAB2: movzx ebx, ax */
    MEM32(ebp + (-0x4)) = esi; /* 0x0077FAB5: mov dword ptr [ebp - 4], esi */
    eax = MEM32(FS_BASE + (0x18)); /* 0x0077FAB8: mov eax, dword ptr fs:[0x18] */
    edx = MEM32(eax + 0x4); /* 0x0077FABE: mov edx, dword ptr [eax + 4] */
    edi = esi; /* 0x0077FAC1: mov edi, esi */
    esi = 0x0092C558u; /* 0x0077FAC3: mov esi, 0x92c558 */
L_0077FAC8:
    ecx = edx; /* 0x0077FAC8: mov ecx, edx */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x0077FACA: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(esi));
    _cf = (uint32_t)((uint32_t)_flag_a < (uint32_t)_flag_b);
    { uint32_t _d = MEM32(esi); if (eax == _d) { MEM32(esi) = ecx; } else { eax = _d; } } /* 0x0077FACC: lock cmpxchg dword ptr [esi], ecx */
    _flag_k = FK_CMP;
    /* test eax, eax */ /* 0x0077FAD0: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_0077FADF; /* 0x0077FAD2: je 0x77fadf */
L_0077FAD4:
    /* cmp eax, edx */ /* 0x0077FAD4: cmp eax, edx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_NE(_flag_a, _flag_b)) goto L_0077FAC8; /* 0x0077FAD6: jne 0x77fac8 */
L_0077FAD8:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    esi = 0; /* 0x0077FAD8: xor esi, esi */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi + 1; /* 0x0077FADA: inc esi */
    _flag_k = FK_INC;
    edi = esi; /* 0x0077FADB: mov edi, esi */
    goto L_0077FAE2; /* 0x0077FADD: jmp 0x77fae2 */
L_0077FADF:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    esi = 0; /* 0x0077FADF: xor esi, esi */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi + 1; /* 0x0077FAE1: inc esi */
    _flag_k = FK_INC;
L_0077FAE2:
    /* cmp MEM32(0x92C55C), esi */ /* 0x0077FAE2: cmp dword ptr [0x92c55c], esi */
    _flag_a = (uint32_t)(MEM32(0x92C55C)); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_0077FAF4; /* 0x0077FAE8: jne 0x77faf4 */
L_0077FAEA:
    PUSH32(esp, 0x1Fu); /* 0x0077FAEA: push 0x1f */
    RECOMP_CALL(sub_0077FD9A); /* 0x0077FAEC: call 0x77fd9a */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x0077FAF1: pop ecx */
    goto L_0077FB2F; /* 0x0077FAF2: jmp 0x77fb2f */
L_0077FAF4:
    /* cmp MEM32(0x92C55C), 0 */ /* 0x0077FAF4: cmp dword ptr [0x92c55c], 0 */
    _flag_a = (uint32_t)(MEM32(0x92C55C)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_0077FB29; /* 0x0077FAFB: jne 0x77fb29 */
L_0077FAFD:
    MEM32(0x92C55C) = esi; /* 0x0077FAFD: mov dword ptr [0x92c55c], esi */
    PUSH32(esp, 0x007CCD04u); /* 0x0077FB03: push 0x7ccd04 */
    PUSH32(esp, 0x007CCCF0u); /* 0x0077FB08: push 0x7cccf0 */
    RECOMP_CALL(sub_0077FFE4); /* 0x0077FB0D: call 0x77ffe4 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x0077FB12: pop ecx */
    ecx = POP32_VAL(esp); /* 0x0077FB13: pop ecx */
    /* test eax, eax */ /* 0x0077FB14: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_0077FB2F; /* 0x0077FB16: je 0x77fb2f */
L_0077FB18:
    MEM32(ebp + (-0x4)) = 0xFFFFFFFEu; /* 0x0077FB18: mov dword ptr [ebp - 4], 0xfffffffe */
    eax = 0xFFu; /* 0x0077FB1F: mov eax, 0xff */
    goto L_0077FC46; /* 0x0077FB24: jmp 0x77fc46 */
L_0077FB29:
    MEM32(0x868D88) = esi; /* 0x0077FB29: mov dword ptr [0x868d88], esi */
L_0077FB2F:
    /* cmp MEM32(0x92C55C), esi */ /* 0x0077FB2F: cmp dword ptr [0x92c55c], esi */
    _flag_a = (uint32_t)(MEM32(0x92C55C)); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_0077FB52; /* 0x0077FB35: jne 0x77fb52 */
L_0077FB37:
    PUSH32(esp, 0x007CCCECu); /* 0x0077FB37: push 0x7cccec */
    PUSH32(esp, 0x007CC9B4u); /* 0x0077FB3C: push 0x7cc9b4 */
    RECOMP_CALL(sub_0077FFEA); /* 0x0077FB41: call 0x77ffea */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x0077FB46: pop ecx */
    ecx = POP32_VAL(esp); /* 0x0077FB47: pop ecx */
    MEM32(0x92C55C) = 2; /* 0x0077FB48: mov dword ptr [0x92c55c], 2 */
L_0077FB52:
    /* test edi, edi */ /* 0x0077FB52: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_0077FB5F; /* 0x0077FB54: jne 0x77fb5f */
L_0077FB56:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x0077FB56: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = 0x0092C558u; /* 0x0077FB58: mov ecx, 0x92c558 */
    { uint32_t _tmp = MEM32(ecx); /* 0x0077FB5D: xchg dword ptr [ecx], eax */
      MEM32(ecx) = eax;
      eax = _tmp; }
L_0077FB5F:
    /* cmp MEM32(0x92C560), 0 */ /* 0x0077FB5F: cmp dword ptr [0x92c560], 0 */
    _flag_a = (uint32_t)(MEM32(0x92C560)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_0077FB83; /* 0x0077FB66: je 0x77fb83 */
L_0077FB68:
    PUSH32(esp, 0x0092C560u); /* 0x0077FB68: push 0x92c560 */
    RECOMP_CALL(sub_0077FDF0); /* 0x0077FB6D: call 0x77fdf0 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x0077FB72: pop ecx */
    /* test eax, eax */ /* 0x0077FB73: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_0077FB83; /* 0x0077FB75: je 0x77fb83 */
L_0077FB77:
    PUSH32(esp, 0); /* 0x0077FB77: push 0 */
    PUSH32(esp, 2); /* 0x0077FB79: push 2 */
    PUSH32(esp, 0); /* 0x0077FB7B: push 0 */
    RECOMP_ICALL(MEM32(0x92C560)); /* 0x0077FB7D: call dword ptr [0x92c560] */
    RECOMP_FLAGS_IN();
L_0077FB83:
    eax = MEM32(0x7CC650); /* 0x0077FB83: mov eax, dword ptr [0x7cc650] */
    esi = MEM32(eax); /* 0x0077FB88: mov esi, dword ptr [eax] */
    MEM32(ebp + (-0x1C)) = esi; /* 0x0077FB8A: mov dword ptr [ebp - 0x1c], esi */
    edi = MEM32(ebp + (-0x20)); /* 0x0077FB8D: mov edi, dword ptr [ebp - 0x20] */
L_0077FB90:
    SET_LO8(ecx, MEM8(esi)); /* 0x0077FB90: mov cl, byte ptr [esi] */
    /* cmp LO8(ecx), 0x20u */ /* 0x0077FB92: cmp cl, 0x20 */
    _flag_a = (uint32_t)(LO8(ecx)) << 24; _flag_b = (uint32_t)(0x20u) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_A(_flag_a, _flag_b)) goto L_0077FBD2; /* 0x0077FB95: ja 0x77fbd2 */
L_0077FB97:
    /* test LO8(ecx), LO8(ecx) */ /* 0x0077FB97: test cl, cl */
    _flag_a = (uint32_t)(LO8(ecx)) << 24; _flag_b = (uint32_t)(LO8(ecx)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_0077FB9F; /* 0x0077FB99: je 0x77fb9f */
L_0077FB9B:
    /* test edi, edi */ /* 0x0077FB9B: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_0077FBD2; /* 0x0077FB9D: jne 0x77fbd2 */
L_0077FB9F:
    SET_LO8(eax, MEM8(esi)); /* 0x0077FB9F: mov al, byte ptr [esi] */
    /* test LO8(eax), LO8(eax) */ /* 0x0077FBA1: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_0077FBAF; /* 0x0077FBA3: je 0x77fbaf */
L_0077FBA5:
    /* cmp LO8(eax), 0x20u */ /* 0x0077FBA5: cmp al, 0x20 */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(0x20u) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_A(_flag_a, _flag_b)) goto L_0077FBAF; /* 0x0077FBA7: ja 0x77fbaf */
L_0077FBA9:
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi + 1; /* 0x0077FBA9: inc esi */
    _flag_k = FK_INC;
    MEM32(ebp + (-0x1C)) = esi; /* 0x0077FBAA: mov dword ptr [ebp - 0x1c], esi */
    RECOMP_BACKEDGE();
    goto L_0077FB9F; /* 0x0077FBAD: jmp 0x77fb9f */
L_0077FBAF:
    PUSH32(esp, ebx); /* 0x0077FBAF: push ebx */
    PUSH32(esp, esi); /* 0x0077FBB0: push esi */
    PUSH32(esp, 0); /* 0x0077FBB1: push 0 */
    PUSH32(esp, 0x00400000u); /* 0x0077FBB3: push 0x400000 */
    RECOMP_CALL(sub_00664DF0); /* 0x0077FBB8: call 0x664df0 */
    RECOMP_FLAGS_IN();
    MEM32(0x868D8C) = eax; /* 0x0077FBBD: mov dword ptr [0x868d8c], eax */
    /* cmp MEM32(0x868D90), 0 */ /* 0x0077FBC2: cmp dword ptr [0x868d90], 0 */
    _flag_a = (uint32_t)(MEM32(0x868D90)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_0077FC2B; /* 0x0077FBC9: jne 0x77fc2b */
L_0077FBCB:
    PUSH32(esp, eax); /* 0x0077FBCB: push eax */
    RECOMP_ICALL(MEM32(0x7CC540)); /* 0x0077FBCC: call dword ptr [0x7cc540] */
    RECOMP_FLAGS_IN();
L_0077FBD2:
    /* cmp LO8(ecx), 0x22u */ /* 0x0077FBD2: cmp cl, 0x22 */
    _flag_a = (uint32_t)(LO8(ecx)) << 24; _flag_b = (uint32_t)(0x22u) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_0077FBE3; /* 0x0077FBD5: jne 0x77fbe3 */
L_0077FBD7:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x0077FBD7: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    /* test edi, edi */ /* 0x0077FBD9: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    SET_LO8(eax, (TEST_Z(_flag_a, _flag_b)) ? 1 : 0); /* 0x0077FBDB: sete al */
    edi = eax; /* 0x0077FBDE: mov edi, eax */
    MEM32(ebp + (-0x20)) = edi; /* 0x0077FBE0: mov dword ptr [ebp - 0x20], edi */
L_0077FBE3:
    eax = (uint32_t)LO8(ecx); /* 0x0077FBE3: movzx eax, cl */
    PUSH32(esp, eax); /* 0x0077FBE6: push eax */
    RECOMP_ICALL(MEM32(0x7CC63C)); /* 0x0077FBE7: call dword ptr [0x7cc63c] */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x0077FBED: pop ecx */
    /* test eax, eax */ /* 0x0077FBEE: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_0077FBF6; /* 0x0077FBF0: je 0x77fbf6 */
L_0077FBF2:
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi + 1; /* 0x0077FBF2: inc esi */
    _flag_k = FK_INC;
    MEM32(ebp + (-0x1C)) = esi; /* 0x0077FBF3: mov dword ptr [ebp - 0x1c], esi */
L_0077FBF6:
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi + 1; /* 0x0077FBF6: inc esi */
    _flag_k = FK_INC;
    MEM32(ebp + (-0x1C)) = esi; /* 0x0077FBF7: mov dword ptr [ebp - 0x1c], esi */
    RECOMP_BACKEDGE();
    goto L_0077FB90; /* 0x0077FBFA: jmp 0x77fb90 */
L_0077FC2B:
    /* cmp MEM32(0x868D88), 0 */ /* 0x0077FC2B: cmp dword ptr [0x868d88], 0 */
    _flag_a = (uint32_t)(MEM32(0x868D88)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_0077FC3F; /* 0x0077FC32: jne 0x77fc3f */
L_0077FC34:
    RECOMP_ICALL(MEM32(0x7CC638)); /* 0x0077FC34: call dword ptr [0x7cc638] */
    RECOMP_FLAGS_IN();
    eax = MEM32(0x868D8C); /* 0x0077FC3A: mov eax, dword ptr [0x868d8c] */
L_0077FC3F:
    MEM32(ebp + (-0x4)) = 0xFFFFFFFEu; /* 0x0077FC3F: mov dword ptr [ebp - 4], 0xfffffffe */
L_0077FC46:
    RECOMP_CALL(sub_0077FCF5); /* 0x0077FC46: call 0x77fcf5 */
    RECOMP_FLAGS_IN();
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x0077FC4B: ret  */
    RECOMP_REGS_OUT();
}

void sub_0077FBFC(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0077FBFCu);

L_0077FBFC:
    ecx = MEM32(ebp + (-0x14)); /* 0x0077FBFC: mov ecx, dword ptr [ebp - 0x14] */
    eax = MEM32(ecx); /* 0x0077FBFF: mov eax, dword ptr [ecx] */
    eax = MEM32(eax); /* 0x0077FC01: mov eax, dword ptr [eax] */
    MEM32(ebp + (-0x24)) = eax; /* 0x0077FC03: mov dword ptr [ebp - 0x24], eax */
    PUSH32(esp, ecx); /* 0x0077FC06: push ecx */
    PUSH32(esp, eax); /* 0x0077FC07: push eax */
    RECOMP_CALL(sub_0077FD94); /* 0x0077FC08: call 0x77fd94 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x0077FC0D: pop ecx */
    ecx = POP32_VAL(esp); /* 0x0077FC0E: pop ecx */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x0077FC0F: ret  */
    RECOMP_REGS_OUT();
}

void sub_0077FC10(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0077FC10u);

L_0077FC10:
    esp = MEM32(ebp + (-0x18)); /* 0x0077FC10: mov esp, dword ptr [ebp - 0x18] */
    eax = MEM32(ebp + (-0x24)); /* 0x0077FC13: mov eax, dword ptr [ebp - 0x24] */
    MEM32(0x868D8C) = eax; /* 0x0077FC16: mov dword ptr [0x868d8c], eax */
    /* cmp MEM32(0x868D90), 0 */ /* 0x0077FC1B: cmp dword ptr [0x868d90], 0 */
    _flag_a = (uint32_t)(MEM32(0x868D90)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_0077FC2B; /* 0x0077FC22: jne 0x77fc2b */
L_0077FC24:
    PUSH32(esp, eax); /* 0x0077FC24: push eax */
    RECOMP_ICALL(MEM32(0x7CC634)); /* 0x0077FC25: call dword ptr [0x7cc634] */
    RECOMP_FLAGS_IN();
L_0077FC2B:
    /* cmp MEM32(0x868D88), 0 */ /* 0x0077FC2B: cmp dword ptr [0x868d88], 0 */
    _flag_a = (uint32_t)(MEM32(0x868D88)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_0077FC3F; /* 0x0077FC32: jne 0x77fc3f */
L_0077FC34:
    RECOMP_ICALL(MEM32(0x7CC638)); /* 0x0077FC34: call dword ptr [0x7cc638] */
    RECOMP_FLAGS_IN();
    eax = MEM32(0x868D8C); /* 0x0077FC3A: mov eax, dword ptr [0x868d8c] */
L_0077FC3F:
    MEM32(ebp + (-0x4)) = 0xFFFFFFFEu; /* 0x0077FC3F: mov dword ptr [ebp - 4], 0xfffffffe */
    RECOMP_CALL(sub_0077FCF5); /* 0x0077FC46: call 0x77fcf5 */
    RECOMP_FLAGS_IN();
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x0077FC4B: ret  */
    RECOMP_REGS_OUT();
}

void sub_0077FC4C(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0077FC4Cu);

L_0077FC4C:
    { _itail_tgt = (uint32_t)(MEM32(0x7CC5B4)); goto _ljump; }
    { RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_0077FC52(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0077FC52u);

L_0077FC52:
    { _itail_tgt = (uint32_t)(MEM32(0x7CC5B8)); goto _ljump; }
    { RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_0077FC58(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0077FC58u);

L_0077FC58:
    { _itail_tgt = (uint32_t)(MEM32(0x7CC5BC)); goto _ljump; }
    { RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_0077FC5E(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0077FC5Eu);

L_0077FC5E:
    { _itail_tgt = (uint32_t)(MEM32(0x7CC5C0)); goto _ljump; }
    { RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_0077FC64(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0077FC64u);

L_0077FC64:
    { _itail_tgt = (uint32_t)(MEM32(0x7CC5C4)); goto _ljump; }
    { RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_0077FC6A(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0077FC6Au);

L_0077FC6A:
    { _itail_tgt = (uint32_t)(MEM32(0x7CC5C8)); goto _ljump; }
    { RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_0077FC70(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0077FC70u);

L_0077FC70:
    { _itail_tgt = (uint32_t)(MEM32(0x7CC5CC)); goto _ljump; }
    { RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_0077FC76(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0077FC76u);

L_0077FC76:
    { _itail_tgt = (uint32_t)(MEM32(0x7CC5D0)); goto _ljump; }
    { RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_0077FC7C(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0077FC7Cu);

L_0077FC7C:
    { _itail_tgt = (uint32_t)(MEM32(0x7CC5D4)); goto _ljump; }
    { RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_0077FC82(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0077FC82u);

L_0077FC82:
    { _itail_tgt = (uint32_t)(MEM32(0x7CC5D8)); goto _ljump; }
    { RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_0077FC88(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0077FC88u);

L_0077FC88:
    { _itail_tgt = (uint32_t)(MEM32(0x7CC5DC)); goto _ljump; }
    { RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_0077FC90(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0077FC90u);

L_0077FC90:
    { _itail_tgt = (uint32_t)(MEM32(0x7CC5FC)); goto _ljump; }
    { RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_0077FC96(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0077FC96u);

L_0077FC96:
    { _itail_tgt = (uint32_t)(MEM32(0x7CC600)); goto _ljump; }
    { RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_0077FC9C(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0077FC9Cu);

L_0077FC9C:
    { _itail_tgt = (uint32_t)(MEM32(0x7CC608)); goto _ljump; }
    { RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_0077FCB0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0077FCB0u);

L_0077FCB0:
    PUSH32(esp, 0x0077FD09u); /* 0x0077FCB0: push 0x77fd09 */
    PUSH32(esp, MEM32(FS_BASE + (0))); /* 0x0077FCB5: push dword ptr fs:[0] */
    eax = MEM32(esp + 0x10); /* 0x0077FCBC: mov eax, dword ptr [esp + 0x10] */
    MEM32(esp + 0x10) = ebp; /* 0x0077FCC0: mov dword ptr [esp + 0x10], ebp */
    ebp = esp + 0x10; /* 0x0077FCC4: lea ebp, [esp + 0x10] */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - eax; /* 0x0077FCC8: sub esp, eax */
    _flag_k = FK_CMP;
    PUSH32(esp, ebx); /* 0x0077FCCA: push ebx */
    PUSH32(esp, esi); /* 0x0077FCCB: push esi */
    PUSH32(esp, edi); /* 0x0077FCCC: push edi */
    eax = MEM32(0x855000); /* 0x0077FCCD: mov eax, dword ptr [0x855000] */
    _flag_a = (uint32_t)((MEM32(ebp + (-0x4)) ^ eax)); _flag_b = (uint32_t)((MEM32(ebp + (-0x4)) ^ eax));
    MEM32(ebp + (-0x4)) = MEM32(ebp + (-0x4)) ^ eax; /* 0x0077FCD2: xor dword ptr [ebp - 4], eax */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)((eax ^ ebp)); _flag_b = (uint32_t)((eax ^ ebp));
    eax = eax ^ ebp; /* 0x0077FCD5: xor eax, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, eax); /* 0x0077FCD7: push eax */
    MEM32(ebp + (-0x18)) = esp; /* 0x0077FCD8: mov dword ptr [ebp - 0x18], esp */
    PUSH32(esp, MEM32(ebp + (-0x8))); /* 0x0077FCDB: push dword ptr [ebp - 8] */
    eax = MEM32(ebp + (-0x4)); /* 0x0077FCDE: mov eax, dword ptr [ebp - 4] */
    MEM32(ebp + (-0x4)) = 0xFFFFFFFEu; /* 0x0077FCE1: mov dword ptr [ebp - 4], 0xfffffffe */
    MEM32(ebp + (-0x8)) = eax; /* 0x0077FCE8: mov dword ptr [ebp - 8], eax */
    eax = ebp + (-0x10); /* 0x0077FCEB: lea eax, [ebp - 0x10] */
    MEM32(FS_BASE + (0)) = eax; /* 0x0077FCEE: mov dword ptr fs:[0], eax */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x0077FCF4: ret  */
    RECOMP_REGS_OUT();
}

void sub_0077FCF5(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0077FCF5u);

L_0077FCF5:
    ecx = MEM32(ebp + (-0x10)); /* 0x0077FCF5: mov ecx, dword ptr [ebp - 0x10] */
    MEM32(FS_BASE + (0)) = ecx; /* 0x0077FCF8: mov dword ptr fs:[0], ecx */
    ecx = POP32_VAL(esp); /* 0x0077FCFF: pop ecx */
    edi = POP32_VAL(esp); /* 0x0077FD00: pop edi */
    edi = POP32_VAL(esp); /* 0x0077FD01: pop edi */
    esi = POP32_VAL(esp); /* 0x0077FD02: pop esi */
    ebx = POP32_VAL(esp); /* 0x0077FD03: pop ebx */
    esp = ebp; /* 0x0077FD04: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x0077FD06: pop ebp */
    PUSH32(esp, ecx); /* 0x0077FD07: push ecx */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x0077FD08: ret  */
    RECOMP_REGS_OUT();
}

void sub_0077FD09(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0077FD09u);

L_0077FD09:
    PUSH32(esp, ebp); /* 0x0077FD09: push ebp */
    ebp = esp; /* 0x0077FD0A: mov ebp, esp */
    PUSH32(esp, MEM32(ebp + 0x14)); /* 0x0077FD0C: push dword ptr [ebp + 0x14] */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x0077FD0F: push dword ptr [ebp + 0x10] */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x0077FD12: push dword ptr [ebp + 0xc] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x0077FD15: push dword ptr [ebp + 8] */
    PUSH32(esp, 0x0077F4C2u); /* 0x0077FD18: push 0x77f4c2 */
    PUSH32(esp, 0x00855000u); /* 0x0077FD1D: push 0x855000 */
    RECOMP_CALL(sub_0077FFF0); /* 0x0077FD22: call 0x77fff0 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x18u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x18u; /* 0x0077FD27: add esp, 0x18 */
    _flag_k = FK_ADD;
    ebp = POP32_VAL(esp); /* 0x0077FD2A: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x0077FD2B: ret  */
    RECOMP_REGS_OUT();
}

void sub_0077FD2C(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0077FD2Cu);

L_0077FD2C:
    { _itail_tgt = (uint32_t)(MEM32(0x7CC610)); goto _ljump; }
    { RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_0077FD32(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0077FD32u);

L_0077FD32:
    { _itail_tgt = (uint32_t)(MEM32(0x7CC614)); goto _ljump; }
    { RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_0077FD38(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0077FD38u);

L_0077FD38:
    { _itail_tgt = (uint32_t)(MEM32(0x7CC618)); goto _ljump; }
    { RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_0077FD3E(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0077FD3Eu);

L_0077FD3E:
    { _itail_tgt = (uint32_t)(MEM32(0x7CC61C)); goto _ljump; }
    { RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_0077FD44(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0077FD44u);

L_0077FD44:
    PUSH32(esp, ebp); /* 0x0077FD44: push ebp */
    ebp = esp; /* 0x0077FD45: mov ebp, esp */
    eax = MEM32(ebp + 0x8); /* 0x0077FD47: mov eax, dword ptr [ebp + 8] */
    eax = MEM32(eax); /* 0x0077FD4A: mov eax, dword ptr [eax] */
    /* cmp MEM32(eax), 0xE06D7363u */ /* 0x0077FD4C: cmp dword ptr [eax], 0xe06d7363 */
    _flag_a = (uint32_t)(MEM32(eax)); _flag_b = (uint32_t)(0xE06D7363u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_0077FD79; /* 0x0077FD52: jne 0x77fd79 */
L_0077FD54:
    /* cmp MEM32(eax + 0x10), 3 */ /* 0x0077FD54: cmp dword ptr [eax + 0x10], 3 */
    _flag_a = (uint32_t)(MEM32(eax + 0x10)); _flag_b = (uint32_t)(3);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_0077FD79; /* 0x0077FD58: jne 0x77fd79 */
L_0077FD5A:
    eax = MEM32(eax + 0x14); /* 0x0077FD5A: mov eax, dword ptr [eax + 0x14] */
    /* cmp eax, 0x19930520u */ /* 0x0077FD5D: cmp eax, 0x19930520 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x19930520u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_0077FD7F; /* 0x0077FD62: je 0x77fd7f */
L_0077FD64:
    /* cmp eax, 0x19930521u */ /* 0x0077FD64: cmp eax, 0x19930521 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x19930521u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_0077FD7F; /* 0x0077FD69: je 0x77fd7f */
L_0077FD6B:
    /* cmp eax, 0x19930522u */ /* 0x0077FD6B: cmp eax, 0x19930522 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x19930522u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_0077FD7F; /* 0x0077FD70: je 0x77fd7f */
L_0077FD72:
    /* cmp eax, 0x01994000u */ /* 0x0077FD72: cmp eax, 0x1994000 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x01994000u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_0077FD7F; /* 0x0077FD77: je 0x77fd7f */
L_0077FD79:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x0077FD79: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    ebp = POP32_VAL(esp); /* 0x0077FD7B: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x0077FD7C: ret 4 */
L_0077FD7F:
    RECOMP_CALL(sub_0077F97E); /* 0x0077FD7F: call 0x77f97e */
    RECOMP_FLAGS_IN();
    void_lift_trap(0x0077FD84u, "int3 ");
    { RECOMP_REGS_OUT(); return; } /* end of function */
    RECOMP_REGS_OUT();
}

void sub_0077FD85(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0077FD85u);

L_0077FD85:
    PUSH32(esp, 0x0077FD44u); /* 0x0077FD85: push 0x77fd44 */
    RECOMP_CALL(sub_0077FFF6); /* 0x0077FD8A: call 0x77fff6 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x0077FD8F: pop ecx */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x0077FD90: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x0077FD92: ret  */
    RECOMP_REGS_OUT();
}

void sub_0077FD94(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0077FD94u);

L_0077FD94:
    { _itail_tgt = (uint32_t)(MEM32(0x7CC620)); goto _ljump; }
    { RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_0077FD9A(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0077FD9Au);

L_0077FD9A:
    { _itail_tgt = (uint32_t)(MEM32(0x7CC628)); goto _ljump; }
    { RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_0077FDA0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0077FDA0u);

L_0077FDA0:
    PUSH32(esp, ebp); /* 0x0077FDA0: push ebp */
    ebp = esp; /* 0x0077FDA1: mov ebp, esp */
    eax = MEM32(ebp + 0x8); /* 0x0077FDA3: mov eax, dword ptr [ebp + 8] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edx = 0; /* 0x0077FDA6: xor edx, edx */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, ebx); /* 0x0077FDA8: push ebx */
    PUSH32(esp, esi); /* 0x0077FDA9: push esi */
    PUSH32(esp, edi); /* 0x0077FDAA: push edi */
    ecx = MEM32(eax + 0x3C); /* 0x0077FDAB: mov ecx, dword ptr [eax + 0x3c] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + eax; /* 0x0077FDAE: add ecx, eax */
    _flag_k = FK_ADD;
    eax = (uint32_t)MEM16(ecx + 0x14); /* 0x0077FDB0: movzx eax, word ptr [ecx + 0x14] */
    ebx = (uint32_t)MEM16(ecx + 0x6); /* 0x0077FDB4: movzx ebx, word ptr [ecx + 6] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x18u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 0x18u; /* 0x0077FDB8: add eax, 0x18 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + ecx; /* 0x0077FDBB: add eax, ecx */
    _flag_k = FK_ADD;
    /* test ebx, ebx */ /* 0x0077FDBD: test ebx, ebx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ebx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_0077FDDC; /* 0x0077FDBF: je 0x77fddc */
L_0077FDC1:
    edi = MEM32(ebp + 0xC); /* 0x0077FDC1: mov edi, dword ptr [ebp + 0xc] */
L_0077FDC4:
    esi = MEM32(eax + 0xC); /* 0x0077FDC4: mov esi, dword ptr [eax + 0xc] */
    /* cmp edi, esi */ /* 0x0077FDC7: cmp edi, esi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_B(_flag_a, _flag_b)) goto L_0077FDD4; /* 0x0077FDC9: jb 0x77fdd4 */
L_0077FDCB:
    ecx = MEM32(eax + 0x8); /* 0x0077FDCB: mov ecx, dword ptr [eax + 8] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + esi; /* 0x0077FDCE: add ecx, esi */
    _flag_k = FK_ADD;
    /* cmp edi, ecx */ /* 0x0077FDD0: cmp edi, ecx */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_B(_flag_a, _flag_b)) goto L_0077FDDE; /* 0x0077FDD2: jb 0x77fdde */
L_0077FDD4:
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(1);
    edx = edx + 1; /* 0x0077FDD4: inc edx */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x28u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 0x28u; /* 0x0077FDD5: add eax, 0x28 */
    _flag_k = FK_ADD;
    /* cmp edx, ebx */ /* 0x0077FDD8: cmp edx, ebx */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_0077FDC4; /* 0x0077FDDA: jb 0x77fdc4 */
L_0077FDDC:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x0077FDDC: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
L_0077FDDE:
    edi = POP32_VAL(esp); /* 0x0077FDDE: pop edi */
    esi = POP32_VAL(esp); /* 0x0077FDDF: pop esi */
    ebx = POP32_VAL(esp); /* 0x0077FDE0: pop ebx */
    ebp = POP32_VAL(esp); /* 0x0077FDE1: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x0077FDE2: ret  */
    RECOMP_REGS_OUT();
}

void sub_0077FDF0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0077FDF0u);

L_0077FDF0:
    PUSH32(esp, ebp); /* 0x0077FDF0: push ebp */
    ebp = esp; /* 0x0077FDF1: mov ebp, esp */
    PUSH32(esp, 0xFFFFFFFEu); /* 0x0077FDF3: push -2 */
    PUSH32(esp, 0x0084FE90u); /* 0x0077FDF5: push 0x84fe90 */
    PUSH32(esp, 0x0077FD09u); /* 0x0077FDFA: push 0x77fd09 */
    eax = MEM32(FS_BASE + (0)); /* 0x0077FDFF: mov eax, dword ptr fs:[0] */
    PUSH32(esp, eax); /* 0x0077FE05: push eax */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 8; /* 0x0077FE06: sub esp, 8 */
    _flag_k = FK_CMP;
    PUSH32(esp, ebx); /* 0x0077FE09: push ebx */
    PUSH32(esp, esi); /* 0x0077FE0A: push esi */
    PUSH32(esp, edi); /* 0x0077FE0B: push edi */
    eax = MEM32(0x855000); /* 0x0077FE0C: mov eax, dword ptr [0x855000] */
    _flag_a = (uint32_t)((MEM32(ebp + (-0x8)) ^ eax)); _flag_b = (uint32_t)((MEM32(ebp + (-0x8)) ^ eax));
    MEM32(ebp + (-0x8)) = MEM32(ebp + (-0x8)) ^ eax; /* 0x0077FE11: xor dword ptr [ebp - 8], eax */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)((eax ^ ebp)); _flag_b = (uint32_t)((eax ^ ebp));
    eax = eax ^ ebp; /* 0x0077FE14: xor eax, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, eax); /* 0x0077FE16: push eax */
    eax = ebp + (-0x10); /* 0x0077FE17: lea eax, [ebp - 0x10] */
    MEM32(FS_BASE + (0)) = eax; /* 0x0077FE1A: mov dword ptr fs:[0], eax */
    MEM32(ebp + (-0x18)) = esp; /* 0x0077FE20: mov dword ptr [ebp - 0x18], esp */
    MEM32(ebp + (-0x4)) = 0; /* 0x0077FE23: mov dword ptr [ebp - 4], 0 */
    PUSH32(esp, 0x00400000u); /* 0x0077FE2A: push 0x400000 */
    RECOMP_CALL(sub_0077FEB0); /* 0x0077FE2F: call 0x77feb0 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x0077FE34: add esp, 4 */
    _flag_k = FK_ADD;
    /* test eax, eax */ /* 0x0077FE37: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_0077FE8F; /* 0x0077FE39: je 0x77fe8f */
L_0077FE3B:
    eax = MEM32(ebp + 0x8); /* 0x0077FE3B: mov eax, dword ptr [ebp + 8] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x00400000u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - 0x00400000u; /* 0x0077FE3E: sub eax, 0x400000 */
    _flag_k = FK_CMP;
    PUSH32(esp, eax); /* 0x0077FE43: push eax */
    PUSH32(esp, 0x00400000u); /* 0x0077FE44: push 0x400000 */
    RECOMP_CALL(sub_0077FDA0); /* 0x0077FE49: call 0x77fda0 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 8; /* 0x0077FE4E: add esp, 8 */
    _flag_k = FK_ADD;
    /* test eax, eax */ /* 0x0077FE51: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_0077FE8F; /* 0x0077FE53: je 0x77fe8f */
L_0077FE55:
    eax = MEM32(eax + 0x24); /* 0x0077FE55: mov eax, dword ptr [eax + 0x24] */
    if (31u) _cf = (((eax) >> 30) & 1u); /* 0x0077FE58: shr eax, 0x1f */
    if (31u) { _flag_a = recomp_flags_pack((eax >> 31u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax >> 31u; /* 0x0077FE58: shr eax, 0x1f */
    eax = ~eax; /* 0x0077FE5B: not eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax & 1; /* 0x0077FE5D: and eax, 1 */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x4)) = 0xFFFFFFFEu; /* 0x0077FE60: mov dword ptr [ebp - 4], 0xfffffffe */
    ecx = MEM32(ebp + (-0x10)); /* 0x0077FE67: mov ecx, dword ptr [ebp - 0x10] */
    MEM32(FS_BASE + (0)) = ecx; /* 0x0077FE6A: mov dword ptr fs:[0], ecx */
    ecx = POP32_VAL(esp); /* 0x0077FE71: pop ecx */
    edi = POP32_VAL(esp); /* 0x0077FE72: pop edi */
    esi = POP32_VAL(esp); /* 0x0077FE73: pop esi */
    ebx = POP32_VAL(esp); /* 0x0077FE74: pop ebx */
    esp = ebp; /* 0x0077FE75: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x0077FE77: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x0077FE78: ret  */
L_0077FE8F:
    MEM32(ebp + (-0x4)) = 0xFFFFFFFEu; /* 0x0077FE8F: mov dword ptr [ebp - 4], 0xfffffffe */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x0077FE96: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = MEM32(ebp + (-0x10)); /* 0x0077FE98: mov ecx, dword ptr [ebp - 0x10] */
    MEM32(FS_BASE + (0)) = ecx; /* 0x0077FE9B: mov dword ptr fs:[0], ecx */
    ecx = POP32_VAL(esp); /* 0x0077FEA2: pop ecx */
    edi = POP32_VAL(esp); /* 0x0077FEA3: pop edi */
    esi = POP32_VAL(esp); /* 0x0077FEA4: pop esi */
    ebx = POP32_VAL(esp); /* 0x0077FEA5: pop ebx */
    esp = ebp; /* 0x0077FEA6: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x0077FEA8: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x0077FEA9: ret  */
    RECOMP_REGS_OUT();
}

void sub_0077FE79(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0077FE79u);

L_0077FE79:
    eax = MEM32(ebp + (-0x14)); /* 0x0077FE79: mov eax, dword ptr [ebp - 0x14] */
    eax = MEM32(eax); /* 0x0077FE7C: mov eax, dword ptr [eax] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x0077FE7E: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp MEM32(eax), 0xC0000005u */ /* 0x0077FE80: cmp dword ptr [eax], 0xc0000005 */
    _flag_a = (uint32_t)(MEM32(eax)); _flag_b = (uint32_t)(0xC0000005u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    SET_LO8(ecx, (CMP_EQ(_flag_a, _flag_b)) ? 1 : 0); /* 0x0077FE86: sete cl */
    eax = ecx; /* 0x0077FE89: mov eax, ecx */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x0077FE8B: ret  */
    RECOMP_REGS_OUT();
}

void sub_0077FE8C(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0077FE8Cu);

L_0077FE8C:
    esp = MEM32(ebp + (-0x18)); /* 0x0077FE8C: mov esp, dword ptr [ebp - 0x18] */
    MEM32(ebp + (-0x4)) = 0xFFFFFFFEu; /* 0x0077FE8F: mov dword ptr [ebp - 4], 0xfffffffe */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x0077FE96: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = MEM32(ebp + (-0x10)); /* 0x0077FE98: mov ecx, dword ptr [ebp - 0x10] */
    MEM32(FS_BASE + (0)) = ecx; /* 0x0077FE9B: mov dword ptr fs:[0], ecx */
    ecx = POP32_VAL(esp); /* 0x0077FEA2: pop ecx */
    edi = POP32_VAL(esp); /* 0x0077FEA3: pop edi */
    esi = POP32_VAL(esp); /* 0x0077FEA4: pop esi */
    ebx = POP32_VAL(esp); /* 0x0077FEA5: pop ebx */
    esp = ebp; /* 0x0077FEA6: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x0077FEA8: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x0077FEA9: ret  */
    RECOMP_REGS_OUT();
}

void sub_0077FEB0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0077FEB0u);

L_0077FEB0:
    PUSH32(esp, ebp); /* 0x0077FEB0: push ebp */
    ebp = esp; /* 0x0077FEB1: mov ebp, esp */
    eax = MEM32(ebp + 0x8); /* 0x0077FEB3: mov eax, dword ptr [ebp + 8] */
    ecx = 0x5A4Du; /* 0x0077FEB6: mov ecx, 0x5a4d */
    /* cmp MEM16(eax), LO16(ecx) */ /* 0x0077FEBB: cmp word ptr [eax], cx */
    _flag_a = (uint32_t)(MEM16(eax)) << 16; _flag_b = (uint32_t)(LO16(ecx)) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_0077FEC4; /* 0x0077FEBE: je 0x77fec4 */
L_0077FEC0:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x0077FEC0: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    ebp = POP32_VAL(esp); /* 0x0077FEC2: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x0077FEC3: ret  */
L_0077FEC4:
    ecx = MEM32(eax + 0x3C); /* 0x0077FEC4: mov ecx, dword ptr [eax + 0x3c] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + eax; /* 0x0077FEC7: add ecx, eax */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x0077FEC9: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp MEM32(ecx), 0x4550u */ /* 0x0077FECB: cmp dword ptr [ecx], 0x4550 */
    _flag_a = (uint32_t)(MEM32(ecx)); _flag_b = (uint32_t)(0x4550u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_0077FEDF; /* 0x0077FED1: jne 0x77fedf */
L_0077FED3:
    edx = 0x10Bu; /* 0x0077FED3: mov edx, 0x10b */
    /* cmp MEM16(ecx + 0x18), LO16(edx) */ /* 0x0077FED8: cmp word ptr [ecx + 0x18], dx */
    _flag_a = (uint32_t)(MEM16(ecx + 0x18)) << 16; _flag_b = (uint32_t)(LO16(edx)) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    SET_LO8(eax, (CMP_EQ(_flag_a, _flag_b)) ? 1 : 0); /* 0x0077FEDC: sete al */
L_0077FEDF:
    ebp = POP32_VAL(esp); /* 0x0077FEDF: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x0077FEE0: ret  */
    RECOMP_REGS_OUT();
}

void sub_0077FEE1(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0077FEE1u);

L_0077FEE1:
    PUSH32(esp, ebp); /* 0x0077FEE1: push ebp */
    ebp = esp; /* 0x0077FEE2: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x14u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x14u; /* 0x0077FEE4: sub esp, 0x14 */
    _flag_k = FK_CMP;
    _flag_a = (uint32_t)(MEM32(ebp + (-0xC))); _flag_b = (uint32_t)(0);
    MEM32(ebp + (-0xC)) = MEM32(ebp + (-0xC)) & 0; /* 0x0077FEE7: and dword ptr [ebp - 0xc], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(MEM32(ebp + (-0x8))); _flag_b = (uint32_t)(0);
    MEM32(ebp + (-0x8)) = MEM32(ebp + (-0x8)) & 0; /* 0x0077FEEB: and dword ptr [ebp - 8], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    eax = MEM32(0x855000); /* 0x0077FEEF: mov eax, dword ptr [0x855000] */
    PUSH32(esp, esi); /* 0x0077FEF4: push esi */
    PUSH32(esp, edi); /* 0x0077FEF5: push edi */
    edi = 0xBB40E64Eu; /* 0x0077FEF6: mov edi, 0xbb40e64e */
    esi = 0xFFFF0000u; /* 0x0077FEFB: mov esi, 0xffff0000 */
    /* cmp eax, edi */ /* 0x0077FF00: cmp eax, edi */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_0077FF11; /* 0x0077FF02: je 0x77ff11 */
L_0077FF04:
    /* test esi, eax */ /* 0x0077FF04: test esi, eax */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_0077FF11; /* 0x0077FF06: je 0x77ff11 */
L_0077FF08:
    eax = ~eax; /* 0x0077FF08: not eax */
    MEM32(0x855004) = eax; /* 0x0077FF0A: mov dword ptr [0x855004], eax */
    goto L_0077FF77; /* 0x0077FF0F: jmp 0x77ff77 */
L_0077FF11:
    eax = ebp + (-0xC); /* 0x0077FF11: lea eax, [ebp - 0xc] */
    PUSH32(esp, eax); /* 0x0077FF14: push eax */
    RECOMP_ICALL(MEM32(0x7CC220)); /* 0x0077FF15: call dword ptr [0x7cc220] */
    RECOMP_FLAGS_IN();
    eax = MEM32(ebp + (-0x8)); /* 0x0077FF1B: mov eax, dword ptr [ebp - 8] */
    _flag_a = (uint32_t)((eax ^ MEM32(ebp + (-0xC)))); _flag_b = (uint32_t)((eax ^ MEM32(ebp + (-0xC))));
    eax = eax ^ MEM32(ebp + (-0xC)); /* 0x0077FF1E: xor eax, dword ptr [ebp - 0xc] */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x4)) = eax; /* 0x0077FF21: mov dword ptr [ebp - 4], eax */
    RECOMP_ICALL(MEM32(0x7CC130)); /* 0x0077FF24: call dword ptr [0x7cc130] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)((MEM32(ebp + (-0x4)) ^ eax)); _flag_b = (uint32_t)((MEM32(ebp + (-0x4)) ^ eax));
    MEM32(ebp + (-0x4)) = MEM32(ebp + (-0x4)) ^ eax; /* 0x0077FF2A: xor dword ptr [ebp - 4], eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_ICALL(MEM32(0x7CC0FC)); /* 0x0077FF2D: call dword ptr [0x7cc0fc] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)((MEM32(ebp + (-0x4)) ^ eax)); _flag_b = (uint32_t)((MEM32(ebp + (-0x4)) ^ eax));
    MEM32(ebp + (-0x4)) = MEM32(ebp + (-0x4)) ^ eax; /* 0x0077FF33: xor dword ptr [ebp - 4], eax */
    _cf = 0;
    _flag_k = FK_TEST;
    eax = ebp + (-0x14); /* 0x0077FF36: lea eax, [ebp - 0x14] */
    PUSH32(esp, eax); /* 0x0077FF39: push eax */
    RECOMP_ICALL(MEM32(0x7CC100)); /* 0x0077FF3A: call dword ptr [0x7cc100] */
    RECOMP_FLAGS_IN();
    ecx = MEM32(ebp + (-0x10)); /* 0x0077FF40: mov ecx, dword ptr [ebp - 0x10] */
    eax = ebp + (-0x4); /* 0x0077FF43: lea eax, [ebp - 4] */
    _flag_a = (uint32_t)((ecx ^ MEM32(ebp + (-0x14)))); _flag_b = (uint32_t)((ecx ^ MEM32(ebp + (-0x14))));
    ecx = ecx ^ MEM32(ebp + (-0x14)); /* 0x0077FF46: xor ecx, dword ptr [ebp - 0x14] */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)((ecx ^ MEM32(ebp + (-0x4)))); _flag_b = (uint32_t)((ecx ^ MEM32(ebp + (-0x4))));
    ecx = ecx ^ MEM32(ebp + (-0x4)); /* 0x0077FF49: xor ecx, dword ptr [ebp - 4] */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)((ecx ^ eax)); _flag_b = (uint32_t)((ecx ^ eax));
    ecx = ecx ^ eax; /* 0x0077FF4C: xor ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp ecx, edi */ /* 0x0077FF4E: cmp ecx, edi */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_0077FF59; /* 0x0077FF50: jne 0x77ff59 */
L_0077FF52:
    ecx = 0xBB40E64Fu; /* 0x0077FF52: mov ecx, 0xbb40e64f */
    goto L_0077FF69; /* 0x0077FF57: jmp 0x77ff69 */
L_0077FF59:
    /* test esi, ecx */ /* 0x0077FF59: test esi, ecx */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_0077FF69; /* 0x0077FF5B: jne 0x77ff69 */
L_0077FF5D:
    eax = ecx; /* 0x0077FF5D: mov eax, ecx */
    _flag_a = (uint32_t)((eax | 0x4711u)); _flag_b = (uint32_t)((eax | 0x4711u));
    eax = eax | 0x4711u; /* 0x0077FF5F: or eax, 0x4711 */
    _cf = 0;
    _flag_k = FK_TEST;
    if (16u) _cf = (((eax) >> 16) & 1u); /* 0x0077FF64: shl eax, 0x10 */
    if (16u) { _flag_a = recomp_flags_pack((eax << 16u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax << 16u; /* 0x0077FF64: shl eax, 0x10 */
    _flag_a = (uint32_t)((ecx | eax)); _flag_b = (uint32_t)((ecx | eax));
    ecx = ecx | eax; /* 0x0077FF67: or ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
L_0077FF69:
    MEM32(0x855000) = ecx; /* 0x0077FF69: mov dword ptr [0x855000], ecx */
    ecx = ~ecx; /* 0x0077FF6F: not ecx */
    MEM32(0x855004) = ecx; /* 0x0077FF71: mov dword ptr [0x855004], ecx */
L_0077FF77:
    edi = POP32_VAL(esp); /* 0x0077FF77: pop edi */
    esi = POP32_VAL(esp); /* 0x0077FF78: pop esi */
    esp = ebp; /* 0x0077FF79: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x0077FF7B: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x0077FF7C: ret  */
    RECOMP_REGS_OUT();
}

void sub_0077FF7D(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0077FF7Du);

L_0077FF7D:
    PUSH32(esp, esi); /* 0x0077FF7D: push esi */
    PUSH32(esp, edi); /* 0x0077FF7E: push edi */
    esi = 0x0080E948u; /* 0x0077FF7F: mov esi, 0x80e948 */
    edi = 0x0080E948u; /* 0x0077FF84: mov edi, 0x80e948 */
    goto L_0077FF96; /* 0x0077FF89: jmp 0x77ff96 */
L_0077FF8B:
    eax = MEM32(esi); /* 0x0077FF8B: mov eax, dword ptr [esi] */
    /* test eax, eax */ /* 0x0077FF8D: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_0077FF93; /* 0x0077FF8F: je 0x77ff93 */
L_0077FF91:
    RECOMP_ICALL(eax); /* 0x0077FF91: call eax */
    RECOMP_FLAGS_IN();
L_0077FF93:
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esi = esi + 4; /* 0x0077FF93: add esi, 4 */
    _flag_k = FK_ADD;
L_0077FF96:
    /* cmp esi, edi */ /* 0x0077FF96: cmp esi, edi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_0077FF8B; /* 0x0077FF98: jb 0x77ff8b */
L_0077FF9A:
    edi = POP32_VAL(esp); /* 0x0077FF9A: pop edi */
    esi = POP32_VAL(esp); /* 0x0077FF9B: pop esi */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x0077FF9C: ret  */
    RECOMP_REGS_OUT();
}

void sub_0077FF9D(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0077FF9Du);

L_0077FF9D:
    PUSH32(esp, esi); /* 0x0077FF9D: push esi */
    PUSH32(esp, edi); /* 0x0077FF9E: push edi */
    esi = 0x0080E950u; /* 0x0077FF9F: mov esi, 0x80e950 */
    edi = 0x0080E950u; /* 0x0077FFA4: mov edi, 0x80e950 */
    goto L_0077FFB6; /* 0x0077FFA9: jmp 0x77ffb6 */
L_0077FFAB:
    eax = MEM32(esi); /* 0x0077FFAB: mov eax, dword ptr [esi] */
    /* test eax, eax */ /* 0x0077FFAD: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_0077FFB3; /* 0x0077FFAF: je 0x77ffb3 */
L_0077FFB1:
    RECOMP_ICALL(eax); /* 0x0077FFB1: call eax */
    RECOMP_FLAGS_IN();
L_0077FFB3:
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esi = esi + 4; /* 0x0077FFB3: add esi, 4 */
    _flag_k = FK_ADD;
L_0077FFB6:
    /* cmp esi, edi */ /* 0x0077FFB6: cmp esi, edi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_0077FFAB; /* 0x0077FFB8: jb 0x77ffab */
L_0077FFBA:
    edi = POP32_VAL(esp); /* 0x0077FFBA: pop edi */
    esi = POP32_VAL(esp); /* 0x0077FFBB: pop esi */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x0077FFBC: ret  */
    RECOMP_REGS_OUT();
}

void sub_0077FFBD(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0077FFBDu);

L_0077FFBD:
    PUSH32(esp, esi); /* 0x0077FFBD: push esi */
    PUSH32(esp, 0x00030000u); /* 0x0077FFBE: push 0x30000 */
    PUSH32(esp, 0x00010000u); /* 0x0077FFC3: push 0x10000 */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    esi = 0; /* 0x0077FFC8: xor esi, esi */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, esi); /* 0x0077FFCA: push esi */
    RECOMP_CALL(sub_00780004); /* 0x0077FFCB: call 0x780004 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x0077FFD0: add esp, 0xc */
    _flag_k = FK_ADD;
    /* test eax, eax */ /* 0x0077FFD3: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_0077FFD9; /* 0x0077FFD5: jne 0x77ffd9 */
L_0077FFD7:
    esi = POP32_VAL(esp); /* 0x0077FFD7: pop esi */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x0077FFD8: ret  */
L_0077FFD9:
    PUSH32(esp, esi); /* 0x0077FFD9: push esi */
    PUSH32(esp, esi); /* 0x0077FFDA: push esi */
    PUSH32(esp, esi); /* 0x0077FFDB: push esi */
    PUSH32(esp, esi); /* 0x0077FFDC: push esi */
    PUSH32(esp, esi); /* 0x0077FFDD: push esi */
    RECOMP_CALL(sub_0077FFFE); /* 0x0077FFDE: call 0x77fffe */
    RECOMP_FLAGS_IN();
    void_lift_trap(0x0077FFE3u, "int3 ");
    { RECOMP_REGS_OUT(); return; } /* end of function */
    RECOMP_REGS_OUT();
}

void sub_0077FFE4(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0077FFE4u);

L_0077FFE4:
    { _itail_tgt = (uint32_t)(MEM32(0x7CC648)); goto _ljump; }
    { RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_0077FFEA(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0077FFEAu);

L_0077FFEA:
    { _itail_tgt = (uint32_t)(MEM32(0x7CC64C)); goto _ljump; }
    { RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_0077FFF0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0077FFF0u);

L_0077FFF0:
    { _itail_tgt = (uint32_t)(MEM32(0x7CC658)); goto _ljump; }
    { RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_0077FFF6(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0077FFF6u);

L_0077FFF6:
    { _itail_tgt = (uint32_t)(MEM32(0x7CC65C)); goto _ljump; }
    { RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_0077FFFE(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0077FFFEu);

L_0077FFFE:
    { _itail_tgt = (uint32_t)(MEM32(0x7CC660)); goto _ljump; }
    { RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_00780004(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00780004u);

L_00780004:
    { _itail_tgt = (uint32_t)(MEM32(0x7CC664)); goto _ljump; }
    { RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_0078000A(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0078000Au);

L_0078000A:
    { _itail_tgt = (uint32_t)(MEM32(0x7CC218)); goto _ljump; }
    { RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_00780010(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00780010u);

L_00780010:
    { _itail_tgt = (uint32_t)(MEM32(0x7CC668)); goto _ljump; }
    { RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_00780016(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00780016u);

L_00780016:
    { _itail_tgt = (uint32_t)(MEM32(0x7CC66C)); goto _ljump; }
    { RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_00780022(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00780022u);

L_00780022:
    { _itail_tgt = (uint32_t)(MEM32(0x7CC674)); goto _ljump; }
    { RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_00780030(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00780030u);

L_00780030:
    goto L_007809C0; /* 0x00780030: jmp 0x7809c0 */
L_007809C0:
    eax = esp; /* 0x007809C0: mov eax, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x90u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x90u; /* 0x007809C2: sub esp, 0x90 */
    _flag_k = FK_CMP;
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xFFFFFFF0u);
    esp = esp & 0xFFFFFFF0u; /* 0x007809C8: and esp, 0xfffffff0 */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(esp + 0x54) = eax; /* 0x007809CB: mov dword ptr [esp + 0x54], eax */
    xmm_st(esp, _xmm[0]); /* 0x007809CF: movapd xmmword ptr [esp], xmm0 */
    { xmm_t _s = xmm_ld(0x92D0A0); for (int _k = 0; _k < 4; _k++) _xmm[0].u32[_k] = _xmm[0].u32[_k] & _s.u32[_k]; } /* 0x007809D4: pand xmm0, xmmword ptr [0x92d0a0] */
    _xmm[4] = xmm_ld(0x92D0C0); /* 0x007809DC: movapd xmm4, xmmword ptr [0x92d0c0] */
    _xmm[2] = _xmm[0]; /* 0x007809E4: movapd xmm2, xmm0 */
    _xmm[7] = _xmm[0]; /* 0x007809E8: movapd xmm7, xmm0 */
    { double _s0 = sse_f64(MEM64(0x92D120)); double _s1 = sse_f64(MEM64(0x92D120 + 8)); xmm_t _d = _xmm[0]; _d.f64[0] = (double)(_d.f64[0] + _s0); _d.f64[1] = (double)(_d.f64[1] + _s1); _xmm[0] = _d; } /* 0x007809EC: addpd xmm0, xmmword ptr [0x92d120] */
    { double _s0 = sse_f64(MEM64(0x92D000)); double _s1 = sse_f64(MEM64(0x92D000 + 8)); xmm_t _d = _xmm[0]; _d.f64[0] = (double)(_d.f64[0] * _s0); _d.f64[1] = (double)(_d.f64[1] * _s1); _xmm[0] = _d; } /* 0x007809F4: mulpd xmm0, xmmword ptr [0x92d000] */
    _xmm[5] = xmm_ld(0x92D0D0); /* 0x007809FC: movapd xmm5, xmmword ptr [0x92d0d0] */
    _xmm[6] = xmm_ld(0x92D0E0); /* 0x00780A04: movapd xmm6, xmmword ptr [0x92d0e0] */
    { double _s0 = sse_f64(MEM64(0x92D0B0)); double _s1 = sse_f64(MEM64(0x92D0B0 + 8)); xmm_t _d = _xmm[0]; _d.f64[0] = (double)(_d.f64[0] + _s0); _d.f64[1] = (double)(_d.f64[1] + _s1); _xmm[0] = _d; } /* 0x00780A0C: addpd xmm0, xmmword ptr [0x92d0b0] */
    _xmm[3] = _xmm[0]; /* 0x00780A14: movapd xmm3, xmm0 */
    { double _s0 = sse_f64(MEM64(0x92D0B0)); double _s1 = sse_f64(MEM64(0x92D0B0 + 8)); xmm_t _d = _xmm[0]; _d.f64[0] = (double)(_d.f64[0] - _s0); _d.f64[1] = (double)(_d.f64[1] - _s1); _xmm[0] = _d; } /* 0x00780A18: subpd xmm0, xmmword ptr [0x92d0b0] */
    { double _s0 = sse_f64(MEM64(0x92D110)); double _s1 = sse_f64(MEM64(0x92D110 + 8)); xmm_t _d = _xmm[0]; _d.f64[0] = (double)(_d.f64[0] - _s0); _d.f64[1] = (double)(_d.f64[1] - _s1); _xmm[0] = _d; } /* 0x00780A20: subpd xmm0, xmmword ptr [0x92d110] */
    { xmm_t _s = xmm_ld(0x92D100); for (int _k = 0; _k < 4; _k++) _xmm[7].u32[_k] = (_xmm[7].i32[_k] > _s.i32[_k]) ? (uint32_t)~0u : 0; } /* 0x00780A28: pcmpgtd xmm7, xmmword ptr [0x92d100] */
    eax = ((uint32_t)((_xmm[7].u64[0] >> 63) << 0) | (uint32_t)((_xmm[7].u64[1] >> 63) << 1)); /* 0x00780A30: movmskpd eax, xmm7 */
    _flag_a = (uint32_t)((eax | eax)); _flag_b = (uint32_t)((eax | eax));
    eax = eax | eax; /* 0x00780A34: or eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_00780AEF; /* 0x00780A36: jne 0x780aef */
L_00780A3C:
    _xmm[7] = xmm_ld(0x92D0F0); /* 0x00780A3C: movapd xmm7, xmmword ptr [0x92d0f0] */
    { double _s0 = _xmm[0].f64[0]; double _s1 = _xmm[0].f64[1]; xmm_t _d = _xmm[4]; _d.f64[0] = (double)(_d.f64[0] * _s0); _d.f64[1] = (double)(_d.f64[1] * _s1); _xmm[4] = _d; } /* 0x00780A44: mulpd xmm4, xmm0 */
    { double _s0 = _xmm[0].f64[0]; double _s1 = _xmm[0].f64[1]; xmm_t _d = _xmm[5]; _d.f64[0] = (double)(_d.f64[0] * _s0); _d.f64[1] = (double)(_d.f64[1] * _s1); _xmm[5] = _d; } /* 0x00780A48: mulpd xmm5, xmm0 */
    { double _s0 = _xmm[0].f64[0]; double _s1 = _xmm[0].f64[1]; xmm_t _d = _xmm[6]; _d.f64[0] = (double)(_d.f64[0] * _s0); _d.f64[1] = (double)(_d.f64[1] * _s1); _xmm[6] = _d; } /* 0x00780A4C: mulpd xmm6, xmm0 */
    { double _s0 = _xmm[0].f64[0]; double _s1 = _xmm[0].f64[1]; xmm_t _d = _xmm[7]; _d.f64[0] = (double)(_d.f64[0] * _s0); _d.f64[1] = (double)(_d.f64[1] * _s1); _xmm[7] = _d; } /* 0x00780A50: mulpd xmm7, xmm0 */
    { double _s0 = _xmm[4].f64[0]; double _s1 = _xmm[4].f64[1]; xmm_t _d = _xmm[2]; _d.f64[0] = (double)(_d.f64[0] - _s0); _d.f64[1] = (double)(_d.f64[1] - _s1); _xmm[2] = _d; } /* 0x00780A54: subpd xmm2, xmm4 */
    { double _s0 = _xmm[5].f64[0]; double _s1 = _xmm[5].f64[1]; xmm_t _d = _xmm[2]; _d.f64[0] = (double)(_d.f64[0] - _s0); _d.f64[1] = (double)(_d.f64[1] - _s1); _xmm[2] = _d; } /* 0x00780A58: subpd xmm2, xmm5 */
    { double _s0 = _xmm[6].f64[0]; double _s1 = _xmm[6].f64[1]; xmm_t _d = _xmm[2]; _d.f64[0] = (double)(_d.f64[0] - _s0); _d.f64[1] = (double)(_d.f64[1] - _s1); _xmm[2] = _d; } /* 0x00780A5C: subpd xmm2, xmm6 */
    { double _s0 = _xmm[7].f64[0]; double _s1 = _xmm[7].f64[1]; xmm_t _d = _xmm[2]; _d.f64[0] = (double)(_d.f64[0] - _s0); _d.f64[1] = (double)(_d.f64[1] - _s1); _xmm[2] = _d; } /* 0x00780A60: subpd xmm2, xmm7 */
    { uint64_t _c = 63u; for (int _k = 0; _k < 2; _k++) _xmm[3].u64[_k] = _c > 63 ? 0 : (uint64_t)(_xmm[3].u64[_k] << _c); } /* 0x00780A64: psllq xmm3, 0x3f */
L_00780A69:
    _xmm[0] = xmm_ld(0x92D080); /* 0x00780A69: movapd xmm0, xmmword ptr [0x92d080] */
    _xmm[6] = xmm_ld(0x92D070); /* 0x00780A71: movapd xmm6, xmmword ptr [0x92d070] */
    _xmm[1] = _xmm[2]; /* 0x00780A79: movapd xmm1, xmm2 */
    { double _s0 = _xmm[2].f64[0]; double _s1 = _xmm[2].f64[1]; xmm_t _d = _xmm[2]; _d.f64[0] = (double)(_d.f64[0] * _s0); _d.f64[1] = (double)(_d.f64[1] * _s1); _xmm[2] = _d; } /* 0x00780A7D: mulpd xmm2, xmm2 */
    _xmm[4] = _xmm[2]; /* 0x00780A81: movapd xmm4, xmm2 */
    { double _s0 = _xmm[4].f64[0]; double _s1 = _xmm[4].f64[1]; xmm_t _d = _xmm[4]; _d.f64[0] = (double)(_d.f64[0] * _s0); _d.f64[1] = (double)(_d.f64[1] * _s1); _xmm[4] = _d; } /* 0x00780A85: mulpd xmm4, xmm4 */
    { double _s0 = _xmm[1].f64[0]; double _s1 = _xmm[1].f64[1]; xmm_t _d = _xmm[2]; _d.f64[0] = (double)(_d.f64[0] * _s0); _d.f64[1] = (double)(_d.f64[1] * _s1); _xmm[2] = _d; } /* 0x00780A89: mulpd xmm2, xmm1 */
    { double _s0 = _xmm[4].f64[0]; double _s1 = _xmm[4].f64[1]; xmm_t _d = _xmm[0]; _d.f64[0] = (double)(_d.f64[0] * _s0); _d.f64[1] = (double)(_d.f64[1] * _s1); _xmm[0] = _d; } /* 0x00780A8D: mulpd xmm0, xmm4 */
    { double _s0 = _xmm[4].f64[0]; double _s1 = _xmm[4].f64[1]; xmm_t _d = _xmm[6]; _d.f64[0] = (double)(_d.f64[0] * _s0); _d.f64[1] = (double)(_d.f64[1] * _s1); _xmm[6] = _d; } /* 0x00780A91: mulpd xmm6, xmm4 */
    { double _s0 = sse_f64(MEM64(0x92D060)); double _s1 = sse_f64(MEM64(0x92D060 + 8)); xmm_t _d = _xmm[0]; _d.f64[0] = (double)(_d.f64[0] + _s0); _d.f64[1] = (double)(_d.f64[1] + _s1); _xmm[0] = _d; } /* 0x00780A95: addpd xmm0, xmmword ptr [0x92d060] */
    { double _s0 = sse_f64(MEM64(0x92D050)); double _s1 = sse_f64(MEM64(0x92D050 + 8)); xmm_t _d = _xmm[6]; _d.f64[0] = (double)(_d.f64[0] + _s0); _d.f64[1] = (double)(_d.f64[1] + _s1); _xmm[6] = _d; } /* 0x00780A9D: addpd xmm6, xmmword ptr [0x92d050] */
    { double _s0 = _xmm[4].f64[0]; double _s1 = _xmm[4].f64[1]; xmm_t _d = _xmm[0]; _d.f64[0] = (double)(_d.f64[0] * _s0); _d.f64[1] = (double)(_d.f64[1] * _s1); _xmm[0] = _d; } /* 0x00780AA5: mulpd xmm0, xmm4 */
    { double _s0 = _xmm[4].f64[0]; double _s1 = _xmm[4].f64[1]; xmm_t _d = _xmm[6]; _d.f64[0] = (double)(_d.f64[0] * _s0); _d.f64[1] = (double)(_d.f64[1] * _s1); _xmm[6] = _d; } /* 0x00780AA9: mulpd xmm6, xmm4 */
    { double _s0 = sse_f64(MEM64(0x92D040)); double _s1 = sse_f64(MEM64(0x92D040 + 8)); xmm_t _d = _xmm[0]; _d.f64[0] = (double)(_d.f64[0] + _s0); _d.f64[1] = (double)(_d.f64[1] + _s1); _xmm[0] = _d; } /* 0x00780AAD: addpd xmm0, xmmword ptr [0x92d040] */
    { double _s0 = sse_f64(MEM64(0x92D030)); double _s1 = sse_f64(MEM64(0x92D030 + 8)); xmm_t _d = _xmm[6]; _d.f64[0] = (double)(_d.f64[0] + _s0); _d.f64[1] = (double)(_d.f64[1] + _s1); _xmm[6] = _d; } /* 0x00780AB5: addpd xmm6, xmmword ptr [0x92d030] */
    { double _s0 = _xmm[4].f64[0]; double _s1 = _xmm[4].f64[1]; xmm_t _d = _xmm[0]; _d.f64[0] = (double)(_d.f64[0] * _s0); _d.f64[1] = (double)(_d.f64[1] * _s1); _xmm[0] = _d; } /* 0x00780ABD: mulpd xmm0, xmm4 */
    { double _s0 = _xmm[4].f64[0]; double _s1 = _xmm[4].f64[1]; xmm_t _d = _xmm[6]; _d.f64[0] = (double)(_d.f64[0] * _s0); _d.f64[1] = (double)(_d.f64[1] * _s1); _xmm[6] = _d; } /* 0x00780AC1: mulpd xmm6, xmm4 */
    { double _s0 = sse_f64(MEM64(0x92D020)); double _s1 = sse_f64(MEM64(0x92D020 + 8)); xmm_t _d = _xmm[0]; _d.f64[0] = (double)(_d.f64[0] + _s0); _d.f64[1] = (double)(_d.f64[1] + _s1); _xmm[0] = _d; } /* 0x00780AC5: addpd xmm0, xmmword ptr [0x92d020] */
    { double _s0 = sse_f64(MEM64(0x92D010)); double _s1 = sse_f64(MEM64(0x92D010 + 8)); xmm_t _d = _xmm[6]; _d.f64[0] = (double)(_d.f64[0] + _s0); _d.f64[1] = (double)(_d.f64[1] + _s1); _xmm[6] = _d; } /* 0x00780ACD: addpd xmm6, xmmword ptr [0x92d010] */
    { double _s0 = _xmm[4].f64[0]; double _s1 = _xmm[4].f64[1]; xmm_t _d = _xmm[0]; _d.f64[0] = (double)(_d.f64[0] * _s0); _d.f64[1] = (double)(_d.f64[1] * _s1); _xmm[0] = _d; } /* 0x00780AD5: mulpd xmm0, xmm4 */
    { double _s0 = _xmm[2].f64[0]; double _s1 = _xmm[2].f64[1]; xmm_t _d = _xmm[6]; _d.f64[0] = (double)(_d.f64[0] * _s0); _d.f64[1] = (double)(_d.f64[1] * _s1); _xmm[6] = _d; } /* 0x00780AD9: mulpd xmm6, xmm2 */
    { double _s0 = _xmm[1].f64[0]; double _s1 = _xmm[1].f64[1]; xmm_t _d = _xmm[0]; _d.f64[0] = (double)(_d.f64[0] * _s0); _d.f64[1] = (double)(_d.f64[1] * _s1); _xmm[0] = _d; } /* 0x00780ADD: mulpd xmm0, xmm1 */
    { double _s0 = _xmm[1].f64[0]; double _s1 = _xmm[1].f64[1]; xmm_t _d = _xmm[6]; _d.f64[0] = (double)(_d.f64[0] + _s0); _d.f64[1] = (double)(_d.f64[1] + _s1); _xmm[6] = _d; } /* 0x00780AE1: addpd xmm6, xmm1 */
    { double _s0 = _xmm[6].f64[0]; double _s1 = _xmm[6].f64[1]; xmm_t _d = _xmm[0]; _d.f64[0] = (double)(_d.f64[0] + _s0); _d.f64[1] = (double)(_d.f64[1] + _s1); _xmm[0] = _d; } /* 0x00780AE5: addpd xmm0, xmm6 */
    { xmm_t _s = _xmm[3]; for (int _k = 0; _k < 4; _k++) _xmm[0].u32[_k] = _xmm[0].u32[_k] ^ _s.u32[_k]; } /* 0x00780AE9: pxor xmm0, xmm3 */
    goto L_00780B5B; /* 0x00780AED: jmp 0x780b5b */
L_00780AEF:
    _xmm[0] = xmm_ld(esp); /* 0x00780AEF: movapd xmm0, xmmword ptr [esp] */
    { xmm_t _s = xmm_ld(0x92D0A0); for (int _k = 0; _k < 4; _k++) _xmm[0].u32[_k] = _xmm[0].u32[_k] & _s.u32[_k]; } /* 0x00780AF4: pand xmm0, xmmword ptr [0x92d0a0] */
    xmm_st(esp + 0x30, _xmm[0]); /* 0x00780AFC: movapd xmmword ptr [esp + 0x30], xmm0 */
    fp_push(*(double*)ADDR(esp + 0x30)); /* 0x00780B02: fld qword ptr [esp + 0x30] */
    eax = esp + 0x20; /* 0x00780B06: lea eax, [esp + 0x20] */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x20u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x20u; /* 0x00780B0A: sub esp, 0x20 */
    _flag_k = FK_CMP;
    { double _v = fp_pop(); *(double*)ADDR(esp) = _v; } /* 0x00780B0D: fstp qword ptr [esp] */
    MEM32(esp + 0x8) = eax; /* 0x00780B10: mov dword ptr [esp + 8], eax */
    RECOMP_CALL(sub_00781080); /* 0x00780B14: call 0x781080 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x20u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x20u; /* 0x00780B19: add esp, 0x20 */
    _flag_k = FK_ADD;
    MEM32(esp + 0x14) = eax; /* 0x00780B1C: mov dword ptr [esp + 0x14], eax */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x00780B20: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(esp + 0x10) = eax; /* 0x00780B22: mov dword ptr [esp + 0x10], eax */
    fp_push(*(double*)ADDR(esp + 0x38)); /* 0x00780B26: fld qword ptr [esp + 0x38] */
    eax = esp + 0x28; /* 0x00780B2A: lea eax, [esp + 0x28] */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x20u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x20u; /* 0x00780B2E: sub esp, 0x20 */
    _flag_k = FK_CMP;
    { double _v = fp_pop(); *(double*)ADDR(esp) = _v; } /* 0x00780B31: fstp qword ptr [esp] */
    MEM32(esp + 0x8) = eax; /* 0x00780B34: mov dword ptr [esp + 8], eax */
    RECOMP_CALL(sub_00781080); /* 0x00780B38: call 0x781080 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x20u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x20u; /* 0x00780B3D: add esp, 0x20 */
    _flag_k = FK_ADD;
    MEM32(esp + 0x1C) = eax; /* 0x00780B40: mov dword ptr [esp + 0x1c], eax */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x00780B44: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(esp + 0x18) = eax; /* 0x00780B46: mov dword ptr [esp + 0x18], eax */
    _xmm[2] = xmm_ld(esp + 0x20); /* 0x00780B4A: movapd xmm2, xmmword ptr [esp + 0x20] */
    _xmm[3] = xmm_ld(esp + 0x10); /* 0x00780B50: movapd xmm3, xmmword ptr [esp + 0x10] */
    RECOMP_BACKEDGE();
    goto L_00780A69; /* 0x00780B56: jmp 0x780a69 */
L_00780B5B:
    esp = MEM32(esp + 0x54); /* 0x00780B5B: mov esp, dword ptr [esp + 0x54] */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x00780B5F: ret  */
    RECOMP_REGS_OUT();
}

void sub_00780040(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00780040u);

L_00780040:
    goto L_00780B60; /* 0x00780040: jmp 0x780b60 */
L_00780B60:
    eax = esp; /* 0x00780B60: mov eax, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xA0u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0xA0u; /* 0x00780B62: sub esp, 0xa0 */
    _flag_k = FK_CMP;
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xFFFFFFF0u);
    esp = esp & 0xFFFFFFF0u; /* 0x00780B68: and esp, 0xfffffff0 */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(esp + 0x64) = eax; /* 0x00780B6B: mov dword ptr [esp + 0x64], eax */
    xmm_st(esp, _xmm[0]); /* 0x00780B6F: movapd xmmword ptr [esp], xmm0 */
    _xmm[1] = _xmm[0]; /* 0x00780B74: movapd xmm1, xmm0 */
    { xmm_t _s = xmm_ld(0x92D2B0); for (int _k = 0; _k < 4; _k++) _xmm[0].u32[_k] = _xmm[0].u32[_k] & _s.u32[_k]; } /* 0x00780B78: pand xmm0, xmmword ptr [0x92d2b0] */
    _xmm[4] = xmm_ld(0x92D2D0); /* 0x00780B80: movapd xmm4, xmmword ptr [0x92d2d0] */
    { xmm_t _s = xmm_ld(0x92D2A0); for (int _k = 0; _k < 4; _k++) _xmm[1].u32[_k] = _xmm[1].u32[_k] & _s.u32[_k]; } /* 0x00780B88: pand xmm1, xmmword ptr [0x92d2a0] */
    _xmm[2] = _xmm[0]; /* 0x00780B90: movapd xmm2, xmm0 */
    _xmm[7] = _xmm[0]; /* 0x00780B94: movapd xmm7, xmm0 */
    { double _s0 = sse_f64(MEM64(0x92D200)); double _s1 = sse_f64(MEM64(0x92D200 + 8)); xmm_t _d = _xmm[0]; _d.f64[0] = (double)(_d.f64[0] * _s0); _d.f64[1] = (double)(_d.f64[1] * _s1); _xmm[0] = _d; } /* 0x00780B98: mulpd xmm0, xmmword ptr [0x92d200] */
    _xmm[5] = xmm_ld(0x92D2E0); /* 0x00780BA0: movapd xmm5, xmmword ptr [0x92d2e0] */
    _xmm[6] = xmm_ld(0x92D2F0); /* 0x00780BA8: movapd xmm6, xmmword ptr [0x92d2f0] */
    { double _s0 = sse_f64(MEM64(0x92D2C0)); double _s1 = sse_f64(MEM64(0x92D2C0 + 8)); xmm_t _d = _xmm[0]; _d.f64[0] = (double)(_d.f64[0] + _s0); _d.f64[1] = (double)(_d.f64[1] + _s1); _xmm[0] = _d; } /* 0x00780BB0: addpd xmm0, xmmword ptr [0x92d2c0] */
    _xmm[3] = _xmm[0]; /* 0x00780BB8: movapd xmm3, xmm0 */
    { double _s0 = sse_f64(MEM64(0x92D2C0)); double _s1 = sse_f64(MEM64(0x92D2C0 + 8)); xmm_t _d = _xmm[0]; _d.f64[0] = (double)(_d.f64[0] - _s0); _d.f64[1] = (double)(_d.f64[1] - _s1); _xmm[0] = _d; } /* 0x00780BBC: subpd xmm0, xmmword ptr [0x92d2c0] */
    { xmm_t _s = xmm_ld(0x92D310); for (int _k = 0; _k < 4; _k++) _xmm[7].u32[_k] = (_xmm[7].i32[_k] > _s.i32[_k]) ? (uint32_t)~0u : 0; } /* 0x00780BC4: pcmpgtd xmm7, xmmword ptr [0x92d310] */
    eax = ((uint32_t)((_xmm[7].u64[0] >> 63) << 0) | (uint32_t)((_xmm[7].u64[1] >> 63) << 1)); /* 0x00780BCC: movmskpd eax, xmm7 */
    _flag_a = (uint32_t)((eax | eax)); _flag_b = (uint32_t)((eax | eax));
    eax = eax | eax; /* 0x00780BD0: or eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_00780C92; /* 0x00780BD2: jne 0x780c92 */
L_00780BD8:
    _xmm[7] = xmm_ld(0x92D300); /* 0x00780BD8: movapd xmm7, xmmword ptr [0x92d300] */
    { double _s0 = _xmm[0].f64[0]; double _s1 = _xmm[0].f64[1]; xmm_t _d = _xmm[4]; _d.f64[0] = (double)(_d.f64[0] * _s0); _d.f64[1] = (double)(_d.f64[1] * _s1); _xmm[4] = _d; } /* 0x00780BE0: mulpd xmm4, xmm0 */
    { double _s0 = _xmm[0].f64[0]; double _s1 = _xmm[0].f64[1]; xmm_t _d = _xmm[5]; _d.f64[0] = (double)(_d.f64[0] * _s0); _d.f64[1] = (double)(_d.f64[1] * _s1); _xmm[5] = _d; } /* 0x00780BE4: mulpd xmm5, xmm0 */
    { double _s0 = _xmm[0].f64[0]; double _s1 = _xmm[0].f64[1]; xmm_t _d = _xmm[6]; _d.f64[0] = (double)(_d.f64[0] * _s0); _d.f64[1] = (double)(_d.f64[1] * _s1); _xmm[6] = _d; } /* 0x00780BE8: mulpd xmm6, xmm0 */
    { double _s0 = _xmm[0].f64[0]; double _s1 = _xmm[0].f64[1]; xmm_t _d = _xmm[7]; _d.f64[0] = (double)(_d.f64[0] * _s0); _d.f64[1] = (double)(_d.f64[1] * _s1); _xmm[7] = _d; } /* 0x00780BEC: mulpd xmm7, xmm0 */
    { uint64_t _c = 63u; for (int _k = 0; _k < 2; _k++) _xmm[3].u64[_k] = _c > 63 ? 0 : (uint64_t)(_xmm[3].u64[_k] << _c); } /* 0x00780BF0: psllq xmm3, 0x3f */
    { xmm_t _s = _xmm[1]; for (int _k = 0; _k < 4; _k++) _xmm[3].u32[_k] = _xmm[3].u32[_k] ^ _s.u32[_k]; } /* 0x00780BF5: pxor xmm3, xmm1 */
    { double _s0 = _xmm[4].f64[0]; double _s1 = _xmm[4].f64[1]; xmm_t _d = _xmm[2]; _d.f64[0] = (double)(_d.f64[0] - _s0); _d.f64[1] = (double)(_d.f64[1] - _s1); _xmm[2] = _d; } /* 0x00780BF9: subpd xmm2, xmm4 */
    { double _s0 = _xmm[5].f64[0]; double _s1 = _xmm[5].f64[1]; xmm_t _d = _xmm[2]; _d.f64[0] = (double)(_d.f64[0] - _s0); _d.f64[1] = (double)(_d.f64[1] - _s1); _xmm[2] = _d; } /* 0x00780BFD: subpd xmm2, xmm5 */
    { double _s0 = _xmm[6].f64[0]; double _s1 = _xmm[6].f64[1]; xmm_t _d = _xmm[2]; _d.f64[0] = (double)(_d.f64[0] - _s0); _d.f64[1] = (double)(_d.f64[1] - _s1); _xmm[2] = _d; } /* 0x00780C01: subpd xmm2, xmm6 */
    { double _s0 = _xmm[7].f64[0]; double _s1 = _xmm[7].f64[1]; xmm_t _d = _xmm[2]; _d.f64[0] = (double)(_d.f64[0] - _s0); _d.f64[1] = (double)(_d.f64[1] - _s1); _xmm[2] = _d; } /* 0x00780C05: subpd xmm2, xmm7 */
L_00780C09:
    _xmm[0] = xmm_ld(0x92D290); /* 0x00780C09: movapd xmm0, xmmword ptr [0x92d290] */
    _xmm[6] = xmm_ld(0x92D280); /* 0x00780C11: movapd xmm6, xmmword ptr [0x92d280] */
    _xmm[1] = _xmm[2]; /* 0x00780C19: movapd xmm1, xmm2 */
    { double _s0 = _xmm[2].f64[0]; double _s1 = _xmm[2].f64[1]; xmm_t _d = _xmm[2]; _d.f64[0] = (double)(_d.f64[0] * _s0); _d.f64[1] = (double)(_d.f64[1] * _s1); _xmm[2] = _d; } /* 0x00780C1D: mulpd xmm2, xmm2 */
    _xmm[4] = _xmm[2]; /* 0x00780C21: movapd xmm4, xmm2 */
    { double _s0 = _xmm[4].f64[0]; double _s1 = _xmm[4].f64[1]; xmm_t _d = _xmm[4]; _d.f64[0] = (double)(_d.f64[0] * _s0); _d.f64[1] = (double)(_d.f64[1] * _s1); _xmm[4] = _d; } /* 0x00780C25: mulpd xmm4, xmm4 */
    { double _s0 = _xmm[1].f64[0]; double _s1 = _xmm[1].f64[1]; xmm_t _d = _xmm[2]; _d.f64[0] = (double)(_d.f64[0] * _s0); _d.f64[1] = (double)(_d.f64[1] * _s1); _xmm[2] = _d; } /* 0x00780C29: mulpd xmm2, xmm1 */
    { double _s0 = _xmm[4].f64[0]; double _s1 = _xmm[4].f64[1]; xmm_t _d = _xmm[0]; _d.f64[0] = (double)(_d.f64[0] * _s0); _d.f64[1] = (double)(_d.f64[1] * _s1); _xmm[0] = _d; } /* 0x00780C2D: mulpd xmm0, xmm4 */
    { double _s0 = _xmm[4].f64[0]; double _s1 = _xmm[4].f64[1]; xmm_t _d = _xmm[6]; _d.f64[0] = (double)(_d.f64[0] * _s0); _d.f64[1] = (double)(_d.f64[1] * _s1); _xmm[6] = _d; } /* 0x00780C31: mulpd xmm6, xmm4 */
    { double _s0 = sse_f64(MEM64(0x92D270)); double _s1 = sse_f64(MEM64(0x92D270 + 8)); xmm_t _d = _xmm[0]; _d.f64[0] = (double)(_d.f64[0] + _s0); _d.f64[1] = (double)(_d.f64[1] + _s1); _xmm[0] = _d; } /* 0x00780C35: addpd xmm0, xmmword ptr [0x92d270] */
    { double _s0 = sse_f64(MEM64(0x92D260)); double _s1 = sse_f64(MEM64(0x92D260 + 8)); xmm_t _d = _xmm[6]; _d.f64[0] = (double)(_d.f64[0] + _s0); _d.f64[1] = (double)(_d.f64[1] + _s1); _xmm[6] = _d; } /* 0x00780C3D: addpd xmm6, xmmword ptr [0x92d260] */
    { double _s0 = _xmm[4].f64[0]; double _s1 = _xmm[4].f64[1]; xmm_t _d = _xmm[0]; _d.f64[0] = (double)(_d.f64[0] * _s0); _d.f64[1] = (double)(_d.f64[1] * _s1); _xmm[0] = _d; } /* 0x00780C45: mulpd xmm0, xmm4 */
    { double _s0 = _xmm[4].f64[0]; double _s1 = _xmm[4].f64[1]; xmm_t _d = _xmm[6]; _d.f64[0] = (double)(_d.f64[0] * _s0); _d.f64[1] = (double)(_d.f64[1] * _s1); _xmm[6] = _d; } /* 0x00780C49: mulpd xmm6, xmm4 */
    { double _s0 = sse_f64(MEM64(0x92D250)); double _s1 = sse_f64(MEM64(0x92D250 + 8)); xmm_t _d = _xmm[0]; _d.f64[0] = (double)(_d.f64[0] + _s0); _d.f64[1] = (double)(_d.f64[1] + _s1); _xmm[0] = _d; } /* 0x00780C4D: addpd xmm0, xmmword ptr [0x92d250] */
    { double _s0 = sse_f64(MEM64(0x92D240)); double _s1 = sse_f64(MEM64(0x92D240 + 8)); xmm_t _d = _xmm[6]; _d.f64[0] = (double)(_d.f64[0] + _s0); _d.f64[1] = (double)(_d.f64[1] + _s1); _xmm[6] = _d; } /* 0x00780C55: addpd xmm6, xmmword ptr [0x92d240] */
    { double _s0 = _xmm[4].f64[0]; double _s1 = _xmm[4].f64[1]; xmm_t _d = _xmm[0]; _d.f64[0] = (double)(_d.f64[0] * _s0); _d.f64[1] = (double)(_d.f64[1] * _s1); _xmm[0] = _d; } /* 0x00780C5D: mulpd xmm0, xmm4 */
    { double _s0 = _xmm[4].f64[0]; double _s1 = _xmm[4].f64[1]; xmm_t _d = _xmm[6]; _d.f64[0] = (double)(_d.f64[0] * _s0); _d.f64[1] = (double)(_d.f64[1] * _s1); _xmm[6] = _d; } /* 0x00780C61: mulpd xmm6, xmm4 */
    { double _s0 = sse_f64(MEM64(0x92D230)); double _s1 = sse_f64(MEM64(0x92D230 + 8)); xmm_t _d = _xmm[0]; _d.f64[0] = (double)(_d.f64[0] + _s0); _d.f64[1] = (double)(_d.f64[1] + _s1); _xmm[0] = _d; } /* 0x00780C65: addpd xmm0, xmmword ptr [0x92d230] */
    { double _s0 = sse_f64(MEM64(0x92D220)); double _s1 = sse_f64(MEM64(0x92D220 + 8)); xmm_t _d = _xmm[6]; _d.f64[0] = (double)(_d.f64[0] + _s0); _d.f64[1] = (double)(_d.f64[1] + _s1); _xmm[6] = _d; } /* 0x00780C6D: addpd xmm6, xmmword ptr [0x92d220] */
    { double _s0 = _xmm[4].f64[0]; double _s1 = _xmm[4].f64[1]; xmm_t _d = _xmm[0]; _d.f64[0] = (double)(_d.f64[0] * _s0); _d.f64[1] = (double)(_d.f64[1] * _s1); _xmm[0] = _d; } /* 0x00780C75: mulpd xmm0, xmm4 */
    { double _s0 = _xmm[2].f64[0]; double _s1 = _xmm[2].f64[1]; xmm_t _d = _xmm[6]; _d.f64[0] = (double)(_d.f64[0] * _s0); _d.f64[1] = (double)(_d.f64[1] * _s1); _xmm[6] = _d; } /* 0x00780C79: mulpd xmm6, xmm2 */
    { double _s0 = _xmm[1].f64[0]; double _s1 = _xmm[1].f64[1]; xmm_t _d = _xmm[0]; _d.f64[0] = (double)(_d.f64[0] * _s0); _d.f64[1] = (double)(_d.f64[1] * _s1); _xmm[0] = _d; } /* 0x00780C7D: mulpd xmm0, xmm1 */
    { double _s0 = _xmm[1].f64[0]; double _s1 = _xmm[1].f64[1]; xmm_t _d = _xmm[6]; _d.f64[0] = (double)(_d.f64[0] + _s0); _d.f64[1] = (double)(_d.f64[1] + _s1); _xmm[6] = _d; } /* 0x00780C81: addpd xmm6, xmm1 */
    { double _s0 = _xmm[6].f64[0]; double _s1 = _xmm[6].f64[1]; xmm_t _d = _xmm[0]; _d.f64[0] = (double)(_d.f64[0] + _s0); _d.f64[1] = (double)(_d.f64[1] + _s1); _xmm[0] = _d; } /* 0x00780C85: addpd xmm0, xmm6 */
    { xmm_t _s = _xmm[3]; for (int _k = 0; _k < 4; _k++) _xmm[0].u32[_k] = _xmm[0].u32[_k] ^ _s.u32[_k]; } /* 0x00780C89: pxor xmm0, xmm3 */
    goto L_00780D16; /* 0x00780C8D: jmp 0x780d16 */
L_00780C92:
    _xmm[0] = xmm_ld(esp); /* 0x00780C92: movapd xmm0, xmmword ptr [esp] */
    _xmm[1] = _xmm[0]; /* 0x00780C97: movapd xmm1, xmm0 */
    { xmm_t _s = xmm_ld(0x92D2B0); for (int _k = 0; _k < 4; _k++) _xmm[0].u32[_k] = _xmm[0].u32[_k] & _s.u32[_k]; } /* 0x00780C9B: pand xmm0, xmmword ptr [0x92d2b0] */
    { xmm_t _s = xmm_ld(0x92D2A0); for (int _k = 0; _k < 4; _k++) _xmm[1].u32[_k] = _xmm[1].u32[_k] & _s.u32[_k]; } /* 0x00780CA3: pand xmm1, xmmword ptr [0x92d2a0] */
    xmm_st(esp + 0x30, _xmm[0]); /* 0x00780CAB: movapd xmmword ptr [esp + 0x30], xmm0 */
    xmm_st(esp + 0x40, _xmm[1]); /* 0x00780CB1: movapd xmmword ptr [esp + 0x40], xmm1 */
    fp_push(*(double*)ADDR(esp + 0x30)); /* 0x00780CB7: fld qword ptr [esp + 0x30] */
    eax = esp + 0x20; /* 0x00780CBB: lea eax, [esp + 0x20] */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x20u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x20u; /* 0x00780CBF: sub esp, 0x20 */
    _flag_k = FK_CMP;
    { double _v = fp_pop(); *(double*)ADDR(esp) = _v; } /* 0x00780CC2: fstp qword ptr [esp] */
    MEM32(esp + 0x8) = eax; /* 0x00780CC5: mov dword ptr [esp + 8], eax */
    RECOMP_CALL(sub_00780D30); /* 0x00780CC9: call 0x780d30 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x20u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x20u; /* 0x00780CCE: add esp, 0x20 */
    _flag_k = FK_ADD;
    MEM32(esp + 0x14) = eax; /* 0x00780CD1: mov dword ptr [esp + 0x14], eax */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x00780CD5: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(esp + 0x10) = eax; /* 0x00780CD7: mov dword ptr [esp + 0x10], eax */
    fp_push(*(double*)ADDR(esp + 0x38)); /* 0x00780CDB: fld qword ptr [esp + 0x38] */
    eax = esp + 0x28; /* 0x00780CDF: lea eax, [esp + 0x28] */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x20u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x20u; /* 0x00780CE3: sub esp, 0x20 */
    _flag_k = FK_CMP;
    { double _v = fp_pop(); *(double*)ADDR(esp) = _v; } /* 0x00780CE6: fstp qword ptr [esp] */
    MEM32(esp + 0x8) = eax; /* 0x00780CE9: mov dword ptr [esp + 8], eax */
    RECOMP_CALL(sub_00780D30); /* 0x00780CED: call 0x780d30 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x20u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x20u; /* 0x00780CF2: add esp, 0x20 */
    _flag_k = FK_ADD;
    MEM32(esp + 0x1C) = eax; /* 0x00780CF5: mov dword ptr [esp + 0x1c], eax */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x00780CF9: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(esp + 0x18) = eax; /* 0x00780CFB: mov dword ptr [esp + 0x18], eax */
    _xmm[2] = xmm_ld(esp + 0x20); /* 0x00780CFF: movapd xmm2, xmmword ptr [esp + 0x20] */
    _xmm[3] = xmm_ld(esp + 0x10); /* 0x00780D05: movapd xmm3, xmmword ptr [esp + 0x10] */
    { xmm_t _s = xmm_ld(esp + 0x40); for (int _k = 0; _k < 4; _k++) _xmm[3].u32[_k] = _xmm[3].u32[_k] ^ _s.u32[_k]; } /* 0x00780D0B: xorpd xmm3, xmmword ptr [esp + 0x40] */
    RECOMP_BACKEDGE();
    goto L_00780C09; /* 0x00780D11: jmp 0x780c09 */
L_00780D16:
    esp = MEM32(esp + 0x64); /* 0x00780D16: mov esp, dword ptr [esp + 0x64] */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x00780D1A: ret  */
    RECOMP_REGS_OUT();
}

void sub_00780050(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00780050u);

L_00780050:
    PUSH32(esp, edi); /* 0x00780050: push edi */
    PUSH32(esp, esi); /* 0x00780051: push esi */
    PUSH32(esp, ebx); /* 0x00780052: push ebx */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edi = 0; /* 0x00780053: xor edi, edi */
    _cf = 0;
    _flag_k = FK_TEST;
    eax = MEM32(esp + 0x14); /* 0x00780055: mov eax, dword ptr [esp + 0x14] */
    _flag_a = (uint32_t)((eax | eax)); _flag_b = (uint32_t)((eax | eax));
    eax = eax | eax; /* 0x00780059: or eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) == 0u)) goto L_00780071; /* 0x0078005B: jge 0x780071 */
L_0078005D:
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(1);
    edi = edi + 1; /* 0x0078005D: inc edi */
    _flag_k = FK_INC;
    edx = MEM32(esp + 0x10); /* 0x0078005E: mov edx, dword ptr [esp + 0x10] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(eax);
    _cf = (eax) != 0;
    eax = (uint32_t)(-(int32_t)eax); /* 0x00780062: neg eax */
    _flag_k = FK_CMP;
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(edx);
    _cf = (edx) != 0;
    edx = (uint32_t)(-(int32_t)edx); /* 0x00780064: neg edx */
    _flag_k = FK_CMP;
    { uint32_t _sa = eax, _sb = 0, _sc = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x00780066: sbb eax, 0 */
      eax = _sa - _sb - _sc;
      _flag_a = recomp_flags_sbb(_sa, _sb, _sc); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    MEM32(esp + 0x14) = eax; /* 0x00780069: mov dword ptr [esp + 0x14], eax */
    MEM32(esp + 0x10) = edx; /* 0x0078006D: mov dword ptr [esp + 0x10], edx */
L_00780071:
    eax = MEM32(esp + 0x1C); /* 0x00780071: mov eax, dword ptr [esp + 0x1c] */
    _flag_a = (uint32_t)((eax | eax)); _flag_b = (uint32_t)((eax | eax));
    eax = eax | eax; /* 0x00780075: or eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) == 0u)) goto L_0078008D; /* 0x00780077: jge 0x78008d */
L_00780079:
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(1);
    edi = edi + 1; /* 0x00780079: inc edi */
    _flag_k = FK_INC;
    edx = MEM32(esp + 0x18); /* 0x0078007A: mov edx, dword ptr [esp + 0x18] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(eax);
    _cf = (eax) != 0;
    eax = (uint32_t)(-(int32_t)eax); /* 0x0078007E: neg eax */
    _flag_k = FK_CMP;
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(edx);
    _cf = (edx) != 0;
    edx = (uint32_t)(-(int32_t)edx); /* 0x00780080: neg edx */
    _flag_k = FK_CMP;
    { uint32_t _sa = eax, _sb = 0, _sc = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x00780082: sbb eax, 0 */
      eax = _sa - _sb - _sc;
      _flag_a = recomp_flags_sbb(_sa, _sb, _sc); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    MEM32(esp + 0x1C) = eax; /* 0x00780085: mov dword ptr [esp + 0x1c], eax */
    MEM32(esp + 0x18) = edx; /* 0x00780089: mov dword ptr [esp + 0x18], edx */
L_0078008D:
    _flag_a = (uint32_t)((eax | eax)); _flag_b = (uint32_t)((eax | eax));
    eax = eax | eax; /* 0x0078008D: or eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_007800A9; /* 0x0078008F: jne 0x7800a9 */
L_00780091:
    ecx = MEM32(esp + 0x18); /* 0x00780091: mov ecx, dword ptr [esp + 0x18] */
    eax = MEM32(esp + 0x14); /* 0x00780095: mov eax, dword ptr [esp + 0x14] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edx = 0; /* 0x00780099: xor edx, edx */
    _cf = 0;
    _flag_k = FK_TEST;
    { uint64_t _dividend = ((uint64_t)edx << 32) | eax; uint32_t _dv = (uint32_t)ecx; /* 0x0078009B: div ecx */
      if (_dv) { eax = (uint32_t)(_dividend / _dv); edx = (uint32_t)(_dividend % _dv); }
      else { eax = 0; edx = 0; } }
    ebx = eax; /* 0x0078009D: mov ebx, eax */
    eax = MEM32(esp + 0x10); /* 0x0078009F: mov eax, dword ptr [esp + 0x10] */
    { uint64_t _dividend = ((uint64_t)edx << 32) | eax; uint32_t _dv = (uint32_t)ecx; /* 0x007800A3: div ecx */
      if (_dv) { eax = (uint32_t)(_dividend / _dv); edx = (uint32_t)(_dividend % _dv); }
      else { eax = 0; edx = 0; } }
    edx = ebx; /* 0x007800A5: mov edx, ebx */
    goto L_007800EA; /* 0x007800A7: jmp 0x7800ea */
L_007800A9:
    ebx = eax; /* 0x007800A9: mov ebx, eax */
    ecx = MEM32(esp + 0x18); /* 0x007800AB: mov ecx, dword ptr [esp + 0x18] */
    edx = MEM32(esp + 0x14); /* 0x007800AF: mov edx, dword ptr [esp + 0x14] */
    eax = MEM32(esp + 0x10); /* 0x007800B3: mov eax, dword ptr [esp + 0x10] */
L_007800B7:
    if (1u) _cf = (((ebx) >> 0) & 1u); /* 0x007800B7: shr ebx, 1 */
    if (1u) { _flag_a = recomp_flags_pack((ebx >> 1u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ebx = ebx >> 1u; /* 0x007800B7: shr ebx, 1 */
    { uint32_t _rv = (ecx) & 0xFFFFFFFFu, _rn = ((1) & 31) % 33u; for (uint32_t _i=0;_i<_rn;_i++){ uint32_t _rb = _rv & 1u; _rv = ((_rv >> 1) | (_cf << 31)) & 0xFFFFFFFFu; _cf = _rb; } if (_rn) { _flag_a = recomp_eflags_setcf(_flag_k, _flag_a, _flag_b, _cf, _df); _flag_b = 0; _flag_k = FK_EFLAGS; } ecx = _rv; } /* 0x007800B9: rcr ecx, 1 */
    if (1u) _cf = (((edx) >> 0) & 1u); /* 0x007800BB: shr edx, 1 */
    if (1u) { _flag_a = recomp_flags_pack((edx >> 1u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    edx = edx >> 1u; /* 0x007800BB: shr edx, 1 */
    { uint32_t _rv = (eax) & 0xFFFFFFFFu, _rn = ((1) & 31) % 33u; for (uint32_t _i=0;_i<_rn;_i++){ uint32_t _rb = _rv & 1u; _rv = ((_rv >> 1) | (_cf << 31)) & 0xFFFFFFFFu; _cf = _rb; } if (_rn) { _flag_a = recomp_eflags_setcf(_flag_k, _flag_a, _flag_b, _cf, _df); _flag_b = 0; _flag_k = FK_EFLAGS; } eax = _rv; } /* 0x007800BD: rcr eax, 1 */
    _flag_a = (uint32_t)((ebx | ebx)); _flag_b = (uint32_t)((ebx | ebx));
    ebx = ebx | ebx; /* 0x007800BF: or ebx, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_007800B7; /* 0x007800C1: jne 0x7800b7 */
L_007800C3:
    { uint64_t _dividend = ((uint64_t)edx << 32) | eax; uint32_t _dv = (uint32_t)ecx; /* 0x007800C3: div ecx */
      if (_dv) { eax = (uint32_t)(_dividend / _dv); edx = (uint32_t)(_dividend % _dv); }
      else { eax = 0; edx = 0; } }
    esi = eax; /* 0x007800C5: mov esi, eax */
    { uint64_t _r = (uint64_t)eax * (uint32_t)(MEM32(esp + 0x1C)); /* 0x007800C7: mul dword ptr [esp + 0x1c] */
      eax = (uint32_t)_r; edx = (uint32_t)(_r >> 32); uint32_t _ov = edx != 0;
      _flag_k = FK_EFLAGS; _flag_a = _ov ? 0x801u : 0u; _flag_b = 0; _cf = _ov; }
    ecx = eax; /* 0x007800CB: mov ecx, eax */
    eax = MEM32(esp + 0x18); /* 0x007800CD: mov eax, dword ptr [esp + 0x18] */
    { uint64_t _r = (uint64_t)eax * (uint32_t)(esi); /* 0x007800D1: mul esi */
      eax = (uint32_t)_r; edx = (uint32_t)(_r >> 32); uint32_t _ov = edx != 0;
      _flag_k = FK_EFLAGS; _flag_a = _ov ? 0x801u : 0u; _flag_b = 0; _cf = _ov; }
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edx = edx + ecx; /* 0x007800D3: add edx, ecx */
    _flag_k = FK_ADD;
    if (/* add result */ recomp_cond(_flag_k, _flag_a, _flag_b, CC_B)) goto L_007800E5; /* 0x007800D5: jb 0x7800e5 */
L_007800D7:
    /* cmp edx, MEM32(esp + 0x14) */ /* 0x007800D7: cmp edx, dword ptr [esp + 0x14] */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(MEM32(esp + 0x14));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_A(_flag_a, _flag_b)) goto L_007800E5; /* 0x007800DB: ja 0x7800e5 */
L_007800DD:
    if (CMP_B(_flag_a, _flag_b)) goto L_007800E6; /* 0x007800DD: jb 0x7800e6 */
L_007800DF:
    /* cmp eax, MEM32(esp + 0x10) */ /* 0x007800DF: cmp eax, dword ptr [esp + 0x10] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(esp + 0x10));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_007800E6; /* 0x007800E3: jbe 0x7800e6 */
L_007800E5:
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi - 1; /* 0x007800E5: dec esi */
    _flag_k = FK_DEC;
L_007800E6:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edx = 0; /* 0x007800E6: xor edx, edx */
    _cf = 0;
    _flag_k = FK_TEST;
    eax = esi; /* 0x007800E8: mov eax, esi */
L_007800EA:
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(1);
    edi = edi - 1; /* 0x007800EA: dec edi */
    _flag_k = FK_DEC;
    if (/* dec result */ CMP_NE(_flag_a, _flag_b)) goto L_007800F4; /* 0x007800EB: jne 0x7800f4 */
L_007800ED:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(edx);
    _cf = (edx) != 0;
    edx = (uint32_t)(-(int32_t)edx); /* 0x007800ED: neg edx */
    _flag_k = FK_CMP;
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(eax);
    _cf = (eax) != 0;
    eax = (uint32_t)(-(int32_t)eax); /* 0x007800EF: neg eax */
    _flag_k = FK_CMP;
    { uint32_t _sa = edx, _sb = 0, _sc = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x007800F1: sbb edx, 0 */
      edx = _sa - _sb - _sc;
      _flag_a = recomp_flags_sbb(_sa, _sb, _sc); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
L_007800F4:
    ebx = POP32_VAL(esp); /* 0x007800F4: pop ebx */
    esi = POP32_VAL(esp); /* 0x007800F5: pop esi */
    edi = POP32_VAL(esp); /* 0x007800F6: pop edi */
    RECOMP_FLAGS_OUT(); esp += 20; { RECOMP_REGS_OUT(); return; } /* 0x007800F7: ret 0x10 */
    RECOMP_REGS_OUT();
}

void sub_00780100(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00780100u);

L_00780100:
    eax = MEM32(esp + 0x8); /* 0x00780100: mov eax, dword ptr [esp + 8] */
    ecx = MEM32(esp + 0x10); /* 0x00780104: mov ecx, dword ptr [esp + 0x10] */
    _flag_a = (uint32_t)((ecx | eax)); _flag_b = (uint32_t)((ecx | eax));
    ecx = ecx | eax; /* 0x00780108: or ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = MEM32(esp + 0xC); /* 0x0078010A: mov ecx, dword ptr [esp + 0xc] */
    if (TEST_NZ(_flag_a, _flag_b)) goto L_00780119; /* 0x0078010E: jne 0x780119 */
L_00780110:
    eax = MEM32(esp + 0x4); /* 0x00780110: mov eax, dword ptr [esp + 4] */
    { uint64_t _r = (uint64_t)eax * (uint32_t)(ecx); /* 0x00780114: mul ecx */
      eax = (uint32_t)_r; edx = (uint32_t)(_r >> 32); uint32_t _ov = edx != 0;
      _flag_k = FK_EFLAGS; _flag_a = _ov ? 0x801u : 0u; _flag_b = 0; _cf = _ov; }
    RECOMP_FLAGS_OUT(); esp += 20; { RECOMP_REGS_OUT(); return; } /* 0x00780116: ret 0x10 */
L_00780119:
    PUSH32(esp, ebx); /* 0x00780119: push ebx */
    { uint64_t _r = (uint64_t)eax * (uint32_t)(ecx); /* 0x0078011A: mul ecx */
      eax = (uint32_t)_r; edx = (uint32_t)(_r >> 32); uint32_t _ov = edx != 0;
      _flag_k = FK_EFLAGS; _flag_a = _ov ? 0x801u : 0u; _flag_b = 0; _cf = _ov; }
    ebx = eax; /* 0x0078011C: mov ebx, eax */
    eax = MEM32(esp + 0x8); /* 0x0078011E: mov eax, dword ptr [esp + 8] */
    { uint64_t _r = (uint64_t)eax * (uint32_t)(MEM32(esp + 0x14)); /* 0x00780122: mul dword ptr [esp + 0x14] */
      eax = (uint32_t)_r; edx = (uint32_t)(_r >> 32); uint32_t _ov = edx != 0;
      _flag_k = FK_EFLAGS; _flag_a = _ov ? 0x801u : 0u; _flag_b = 0; _cf = _ov; }
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ebx = ebx + eax; /* 0x00780126: add ebx, eax */
    _flag_k = FK_ADD;
    eax = MEM32(esp + 0x8); /* 0x00780128: mov eax, dword ptr [esp + 8] */
    { uint64_t _r = (uint64_t)eax * (uint32_t)(ecx); /* 0x0078012C: mul ecx */
      eax = (uint32_t)_r; edx = (uint32_t)(_r >> 32); uint32_t _ov = edx != 0;
      _flag_k = FK_EFLAGS; _flag_a = _ov ? 0x801u : 0u; _flag_b = 0; _cf = _ov; }
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edx = edx + ebx; /* 0x0078012E: add edx, ebx */
    _flag_k = FK_ADD;
    ebx = POP32_VAL(esp); /* 0x00780130: pop ebx */
    RECOMP_FLAGS_OUT(); esp += 20; { RECOMP_REGS_OUT(); return; } /* 0x00780131: ret 0x10 */
    RECOMP_REGS_OUT();
}

void sub_00780140(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00780140u);

L_00780140:
    PUSH32(esp, ecx); /* 0x00780140: push ecx */
    ecx = esp + 0x8; /* 0x00780141: lea ecx, [esp + 8] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ecx = ecx - eax; /* 0x00780145: sub ecx, eax */
    _flag_k = FK_CMP;
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0xFu);
    ecx = ecx & 0xFu; /* 0x00780147: and ecx, 0xf */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + ecx; /* 0x0078014A: add eax, ecx */
    _flag_k = FK_ADD;
    { uint32_t _sa = ecx, _sb = ecx, _sc = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x0078014C: sbb ecx, ecx */
      ecx = _sc ? 0xFFFFFFFFu : 0;
      _flag_a = recomp_flags_sbb(_sa, _sb, _sc); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    _flag_a = (uint32_t)((eax | ecx)); _flag_b = (uint32_t)((eax | ecx));
    eax = eax | ecx; /* 0x0078014E: or eax, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = POP32_VAL(esp); /* 0x00780150: pop ecx */
    goto L_00780380; /* 0x00780151: jmp 0x780380 */
L_00780380:
    PUSH32(esp, ecx); /* 0x00780380: push ecx */
    ecx = esp + 0x4; /* 0x00780381: lea ecx, [esp + 4] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ecx = ecx - eax; /* 0x00780385: sub ecx, eax */
    _flag_k = FK_CMP;
    { uint32_t _sa = eax, _sb = eax, _sc = (uint32_t)CMP_B(_flag_a, _flag_b); /* 0x00780387: sbb eax, eax */
      eax = _sc ? 0xFFFFFFFFu : 0;
      _flag_a = recomp_flags_sbb(_sa, _sb, _sc); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    eax = ~eax; /* 0x00780389: not eax */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(eax);
    ecx = ecx & eax; /* 0x0078038B: and ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    eax = esp; /* 0x0078038D: mov eax, esp */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xFFFFF000u);
    eax = eax & 0xFFFFF000u; /* 0x0078038F: and eax, 0xfffff000 */
    _cf = 0;
    _flag_k = FK_TEST;
L_00780394:
    /* cmp ecx, eax */ /* 0x00780394: cmp ecx, eax */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_B(_flag_a, _flag_b)) goto L_007803A2; /* 0x00780396: jb 0x7803a2 */
L_00780398:
    eax = ecx; /* 0x00780398: mov eax, ecx */
    ecx = POP32_VAL(esp); /* 0x0078039A: pop ecx */
    { uint32_t _tmp = esp; /* 0x0078039B: xchg esp, eax */
      esp = eax;
      eax = _tmp; }
    eax = MEM32(eax); /* 0x0078039C: mov eax, dword ptr [eax] */
    MEM32(esp) = eax; /* 0x0078039E: mov dword ptr [esp], eax */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x007803A1: ret  */
L_007803A2:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x1000u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - 0x1000u; /* 0x007803A2: sub eax, 0x1000 */
    _flag_k = FK_CMP;
    /* test MEM32(eax), eax */ /* 0x007803A7: test dword ptr [eax], eax */
    _flag_a = (uint32_t)(MEM32(eax)); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    goto L_00780394; /* 0x007803A9: jmp 0x780394 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    RECOMP_REGS_OUT();
}

void sub_00780170(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00780170u);

L_00780170:
    PUSH32(esp, ebx); /* 0x00780170: push ebx */
    PUSH32(esp, edi); /* 0x00780171: push edi */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edi = 0; /* 0x00780172: xor edi, edi */
    _cf = 0;
    _flag_k = FK_TEST;
    eax = MEM32(esp + 0x10); /* 0x00780174: mov eax, dword ptr [esp + 0x10] */
    _flag_a = (uint32_t)((eax | eax)); _flag_b = (uint32_t)((eax | eax));
    eax = eax | eax; /* 0x00780178: or eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) == 0u)) goto L_00780190; /* 0x0078017A: jge 0x780190 */
L_0078017C:
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(1);
    edi = edi + 1; /* 0x0078017C: inc edi */
    _flag_k = FK_INC;
    edx = MEM32(esp + 0xC); /* 0x0078017D: mov edx, dword ptr [esp + 0xc] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(eax);
    _cf = (eax) != 0;
    eax = (uint32_t)(-(int32_t)eax); /* 0x00780181: neg eax */
    _flag_k = FK_CMP;
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(edx);
    _cf = (edx) != 0;
    edx = (uint32_t)(-(int32_t)edx); /* 0x00780183: neg edx */
    _flag_k = FK_CMP;
    { uint32_t _sa = eax, _sb = 0, _sc = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x00780185: sbb eax, 0 */
      eax = _sa - _sb - _sc;
      _flag_a = recomp_flags_sbb(_sa, _sb, _sc); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    MEM32(esp + 0x10) = eax; /* 0x00780188: mov dword ptr [esp + 0x10], eax */
    MEM32(esp + 0xC) = edx; /* 0x0078018C: mov dword ptr [esp + 0xc], edx */
L_00780190:
    eax = MEM32(esp + 0x18); /* 0x00780190: mov eax, dword ptr [esp + 0x18] */
    _flag_a = (uint32_t)((eax | eax)); _flag_b = (uint32_t)((eax | eax));
    eax = eax | eax; /* 0x00780194: or eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) == 0u)) goto L_007801AB; /* 0x00780196: jge 0x7801ab */
L_00780198:
    edx = MEM32(esp + 0x14); /* 0x00780198: mov edx, dword ptr [esp + 0x14] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(eax);
    _cf = (eax) != 0;
    eax = (uint32_t)(-(int32_t)eax); /* 0x0078019C: neg eax */
    _flag_k = FK_CMP;
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(edx);
    _cf = (edx) != 0;
    edx = (uint32_t)(-(int32_t)edx); /* 0x0078019E: neg edx */
    _flag_k = FK_CMP;
    { uint32_t _sa = eax, _sb = 0, _sc = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x007801A0: sbb eax, 0 */
      eax = _sa - _sb - _sc;
      _flag_a = recomp_flags_sbb(_sa, _sb, _sc); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    MEM32(esp + 0x18) = eax; /* 0x007801A3: mov dword ptr [esp + 0x18], eax */
    MEM32(esp + 0x14) = edx; /* 0x007801A7: mov dword ptr [esp + 0x14], edx */
L_007801AB:
    _flag_a = (uint32_t)((eax | eax)); _flag_b = (uint32_t)((eax | eax));
    eax = eax | eax; /* 0x007801AB: or eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_007801CA; /* 0x007801AD: jne 0x7801ca */
L_007801AF:
    ecx = MEM32(esp + 0x14); /* 0x007801AF: mov ecx, dword ptr [esp + 0x14] */
    eax = MEM32(esp + 0x10); /* 0x007801B3: mov eax, dword ptr [esp + 0x10] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edx = 0; /* 0x007801B7: xor edx, edx */
    _cf = 0;
    _flag_k = FK_TEST;
    { uint64_t _dividend = ((uint64_t)edx << 32) | eax; uint32_t _dv = (uint32_t)ecx; /* 0x007801B9: div ecx */
      if (_dv) { eax = (uint32_t)(_dividend / _dv); edx = (uint32_t)(_dividend % _dv); }
      else { eax = 0; edx = 0; } }
    eax = MEM32(esp + 0xC); /* 0x007801BB: mov eax, dword ptr [esp + 0xc] */
    { uint64_t _dividend = ((uint64_t)edx << 32) | eax; uint32_t _dv = (uint32_t)ecx; /* 0x007801BF: div ecx */
      if (_dv) { eax = (uint32_t)(_dividend / _dv); edx = (uint32_t)(_dividend % _dv); }
      else { eax = 0; edx = 0; } }
    eax = edx; /* 0x007801C1: mov eax, edx */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edx = 0; /* 0x007801C3: xor edx, edx */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(1);
    edi = edi - 1; /* 0x007801C5: dec edi */
    _flag_k = FK_DEC;
    if (/* dec result */ CMP_NS(_flag_a, _flag_b)) goto L_00780216; /* 0x007801C6: jns 0x780216 */
L_007801C8:
    goto L_0078021D; /* 0x007801C8: jmp 0x78021d */
L_007801CA:
    ebx = eax; /* 0x007801CA: mov ebx, eax */
    ecx = MEM32(esp + 0x14); /* 0x007801CC: mov ecx, dword ptr [esp + 0x14] */
    edx = MEM32(esp + 0x10); /* 0x007801D0: mov edx, dword ptr [esp + 0x10] */
    eax = MEM32(esp + 0xC); /* 0x007801D4: mov eax, dword ptr [esp + 0xc] */
L_007801D8:
    if (1u) _cf = (((ebx) >> 0) & 1u); /* 0x007801D8: shr ebx, 1 */
    if (1u) { _flag_a = recomp_flags_pack((ebx >> 1u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ebx = ebx >> 1u; /* 0x007801D8: shr ebx, 1 */
    { uint32_t _rv = (ecx) & 0xFFFFFFFFu, _rn = ((1) & 31) % 33u; for (uint32_t _i=0;_i<_rn;_i++){ uint32_t _rb = _rv & 1u; _rv = ((_rv >> 1) | (_cf << 31)) & 0xFFFFFFFFu; _cf = _rb; } if (_rn) { _flag_a = recomp_eflags_setcf(_flag_k, _flag_a, _flag_b, _cf, _df); _flag_b = 0; _flag_k = FK_EFLAGS; } ecx = _rv; } /* 0x007801DA: rcr ecx, 1 */
    if (1u) _cf = (((edx) >> 0) & 1u); /* 0x007801DC: shr edx, 1 */
    if (1u) { _flag_a = recomp_flags_pack((edx >> 1u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    edx = edx >> 1u; /* 0x007801DC: shr edx, 1 */
    { uint32_t _rv = (eax) & 0xFFFFFFFFu, _rn = ((1) & 31) % 33u; for (uint32_t _i=0;_i<_rn;_i++){ uint32_t _rb = _rv & 1u; _rv = ((_rv >> 1) | (_cf << 31)) & 0xFFFFFFFFu; _cf = _rb; } if (_rn) { _flag_a = recomp_eflags_setcf(_flag_k, _flag_a, _flag_b, _cf, _df); _flag_b = 0; _flag_k = FK_EFLAGS; } eax = _rv; } /* 0x007801DE: rcr eax, 1 */
    _flag_a = (uint32_t)((ebx | ebx)); _flag_b = (uint32_t)((ebx | ebx));
    ebx = ebx | ebx; /* 0x007801E0: or ebx, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_007801D8; /* 0x007801E2: jne 0x7801d8 */
L_007801E4:
    { uint64_t _dividend = ((uint64_t)edx << 32) | eax; uint32_t _dv = (uint32_t)ecx; /* 0x007801E4: div ecx */
      if (_dv) { eax = (uint32_t)(_dividend / _dv); edx = (uint32_t)(_dividend % _dv); }
      else { eax = 0; edx = 0; } }
    ecx = eax; /* 0x007801E6: mov ecx, eax */
    { uint64_t _r = (uint64_t)eax * (uint32_t)(MEM32(esp + 0x18)); /* 0x007801E8: mul dword ptr [esp + 0x18] */
      eax = (uint32_t)_r; edx = (uint32_t)(_r >> 32); uint32_t _ov = edx != 0;
      _flag_k = FK_EFLAGS; _flag_a = _ov ? 0x801u : 0u; _flag_b = 0; _cf = _ov; }
    { uint32_t _tmp = ecx; /* 0x007801EC: xchg ecx, eax */
      ecx = eax;
      eax = _tmp; }
    { uint64_t _r = (uint64_t)eax * (uint32_t)(MEM32(esp + 0x14)); /* 0x007801ED: mul dword ptr [esp + 0x14] */
      eax = (uint32_t)_r; edx = (uint32_t)(_r >> 32); uint32_t _ov = edx != 0;
      _flag_k = FK_EFLAGS; _flag_a = _ov ? 0x801u : 0u; _flag_b = 0; _cf = _ov; }
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edx = edx + ecx; /* 0x007801F1: add edx, ecx */
    _flag_k = FK_ADD;
    if (/* add result */ recomp_cond(_flag_k, _flag_a, _flag_b, CC_B)) goto L_00780203; /* 0x007801F3: jb 0x780203 */
L_007801F5:
    /* cmp edx, MEM32(esp + 0x10) */ /* 0x007801F5: cmp edx, dword ptr [esp + 0x10] */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(MEM32(esp + 0x10));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_A(_flag_a, _flag_b)) goto L_00780203; /* 0x007801F9: ja 0x780203 */
L_007801FB:
    if (CMP_B(_flag_a, _flag_b)) goto L_0078020B; /* 0x007801FB: jb 0x78020b */
L_007801FD:
    /* cmp eax, MEM32(esp + 0xC) */ /* 0x007801FD: cmp eax, dword ptr [esp + 0xc] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(esp + 0xC));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_0078020B; /* 0x00780201: jbe 0x78020b */
L_00780203:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(esp + 0x14));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - MEM32(esp + 0x14); /* 0x00780203: sub eax, dword ptr [esp + 0x14] */
    _flag_k = FK_CMP;
    { uint32_t _sa = edx, _sb = MEM32(esp + 0x18), _sc = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x00780207: sbb edx, dword ptr [esp + 0x18] */
      edx = _sa - _sb - _sc;
      _flag_a = recomp_flags_sbb(_sa, _sb, _sc); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
L_0078020B:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(esp + 0xC));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - MEM32(esp + 0xC); /* 0x0078020B: sub eax, dword ptr [esp + 0xc] */
    _flag_k = FK_CMP;
    { uint32_t _sa = edx, _sb = MEM32(esp + 0x10), _sc = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x0078020F: sbb edx, dword ptr [esp + 0x10] */
      edx = _sa - _sb - _sc;
      _flag_a = recomp_flags_sbb(_sa, _sb, _sc); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(1);
    edi = edi - 1; /* 0x00780213: dec edi */
    _flag_k = FK_DEC;
    if (/* dec result */ CMP_NS(_flag_a, _flag_b)) goto L_0078021D; /* 0x00780214: jns 0x78021d */
L_00780216:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(edx);
    _cf = (edx) != 0;
    edx = (uint32_t)(-(int32_t)edx); /* 0x00780216: neg edx */
    _flag_k = FK_CMP;
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(eax);
    _cf = (eax) != 0;
    eax = (uint32_t)(-(int32_t)eax); /* 0x00780218: neg eax */
    _flag_k = FK_CMP;
    { uint32_t _sa = edx, _sb = 0, _sc = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x0078021A: sbb edx, 0 */
      edx = _sa - _sb - _sc;
      _flag_a = recomp_flags_sbb(_sa, _sb, _sc); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
L_0078021D:
    edi = POP32_VAL(esp); /* 0x0078021D: pop edi */
    ebx = POP32_VAL(esp); /* 0x0078021E: pop ebx */
    RECOMP_FLAGS_OUT(); esp += 20; { RECOMP_REGS_OUT(); return; } /* 0x0078021F: ret 0x10 */
    RECOMP_REGS_OUT();
}

void sub_00780230(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00780230u);

L_00780230:
    /* cmp LO8(ecx), 0x40u */ /* 0x00780230: cmp cl, 0x40 */
    _flag_a = (uint32_t)(LO8(ecx)) << 24; _flag_b = (uint32_t)(0x40u) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_AE(_flag_a, _flag_b)) goto L_0078024A; /* 0x00780233: jae 0x78024a */
L_00780235:
    /* cmp LO8(ecx), 0x20u */ /* 0x00780235: cmp cl, 0x20 */
    _flag_a = (uint32_t)(LO8(ecx)) << 24; _flag_b = (uint32_t)(0x20u) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_AE(_flag_a, _flag_b)) goto L_00780240; /* 0x00780238: jae 0x780240 */
L_0078023A:
    if ((((LO8(ecx)) & 31)) && (((LO8(ecx)) & 31)) < 32) _cf = ((((LO8(ecx)) & 31)) <= 32 ? (((edx) >> (32 - (((LO8(ecx)) & 31)))) & 1u) : 0u); /* 0x0078023A: shld edx, eax, cl */
    if ((((LO8(ecx)) & 31)) && (((LO8(ecx)) & 31)) < 32) { _flag_a = recomp_flags_pack((((((LO8(ecx)) & 31)) && (((LO8(ecx)) & 31)) < 32) ? (((edx) << (((LO8(ecx)) & 31))) | ((uint32_t)(eax) >> (32 - (((LO8(ecx)) & 31))))) : (edx)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    edx = (((((LO8(ecx)) & 31)) && (((LO8(ecx)) & 31)) < 32) ? (((edx) << (((LO8(ecx)) & 31))) | ((uint32_t)(eax) >> (32 - (((LO8(ecx)) & 31))))) : (edx));
    if (((LO8(ecx)) & 31)) _cf = ((((LO8(ecx)) & 31)) <= 32 ? (((eax) >> (32 - (((LO8(ecx)) & 31)))) & 1u) : 0u); /* 0x0078023D: shl eax, cl */
    if (((LO8(ecx)) & 31)) { _flag_a = recomp_flags_pack((eax << ((LO8(ecx)) & 31)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax << ((LO8(ecx)) & 31); /* 0x0078023D: shl eax, cl */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x0078023F: ret  */
L_00780240:
    edx = eax; /* 0x00780240: mov edx, eax */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x00780242: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(LO8(ecx)) << 24; _flag_b = (uint32_t)(0x1Fu) << 24;
    SET_LO8(ecx, LO8(ecx) & 0x1Fu); /* 0x00780244: and cl, 0x1f */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (((LO8(ecx)) & 31)) _cf = ((((LO8(ecx)) & 31)) <= 32 ? (((edx) >> (32 - (((LO8(ecx)) & 31)))) & 1u) : 0u); /* 0x00780247: shl edx, cl */
    if (((LO8(ecx)) & 31)) { _flag_a = recomp_flags_pack((edx << ((LO8(ecx)) & 31)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    edx = edx << ((LO8(ecx)) & 31); /* 0x00780247: shl edx, cl */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x00780249: ret  */
L_0078024A:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x0078024A: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edx = 0; /* 0x0078024C: xor edx, edx */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x0078024E: ret  */
    RECOMP_REGS_OUT();
}

void sub_00780250(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00780250u);

L_00780250:
    PUSH32(esp, ebx); /* 0x00780250: push ebx */
    PUSH32(esp, esi); /* 0x00780251: push esi */
    eax = MEM32(esp + 0x18); /* 0x00780252: mov eax, dword ptr [esp + 0x18] */
    _flag_a = (uint32_t)((eax | eax)); _flag_b = (uint32_t)((eax | eax));
    eax = eax | eax; /* 0x00780256: or eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_00780272; /* 0x00780258: jne 0x780272 */
L_0078025A:
    ecx = MEM32(esp + 0x14); /* 0x0078025A: mov ecx, dword ptr [esp + 0x14] */
    eax = MEM32(esp + 0x10); /* 0x0078025E: mov eax, dword ptr [esp + 0x10] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edx = 0; /* 0x00780262: xor edx, edx */
    _cf = 0;
    _flag_k = FK_TEST;
    { uint64_t _dividend = ((uint64_t)edx << 32) | eax; uint32_t _dv = (uint32_t)ecx; /* 0x00780264: div ecx */
      if (_dv) { eax = (uint32_t)(_dividend / _dv); edx = (uint32_t)(_dividend % _dv); }
      else { eax = 0; edx = 0; } }
    ebx = eax; /* 0x00780266: mov ebx, eax */
    eax = MEM32(esp + 0xC); /* 0x00780268: mov eax, dword ptr [esp + 0xc] */
    { uint64_t _dividend = ((uint64_t)edx << 32) | eax; uint32_t _dv = (uint32_t)ecx; /* 0x0078026C: div ecx */
      if (_dv) { eax = (uint32_t)(_dividend / _dv); edx = (uint32_t)(_dividend % _dv); }
      else { eax = 0; edx = 0; } }
    edx = ebx; /* 0x0078026E: mov edx, ebx */
    goto L_007802B3; /* 0x00780270: jmp 0x7802b3 */
L_00780272:
    ecx = eax; /* 0x00780272: mov ecx, eax */
    ebx = MEM32(esp + 0x14); /* 0x00780274: mov ebx, dword ptr [esp + 0x14] */
    edx = MEM32(esp + 0x10); /* 0x00780278: mov edx, dword ptr [esp + 0x10] */
    eax = MEM32(esp + 0xC); /* 0x0078027C: mov eax, dword ptr [esp + 0xc] */
L_00780280:
    if (1u) _cf = (((ecx) >> 0) & 1u); /* 0x00780280: shr ecx, 1 */
    if (1u) { _flag_a = recomp_flags_pack((ecx >> 1u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ecx = ecx >> 1u; /* 0x00780280: shr ecx, 1 */
    { uint32_t _rv = (ebx) & 0xFFFFFFFFu, _rn = ((1) & 31) % 33u; for (uint32_t _i=0;_i<_rn;_i++){ uint32_t _rb = _rv & 1u; _rv = ((_rv >> 1) | (_cf << 31)) & 0xFFFFFFFFu; _cf = _rb; } if (_rn) { _flag_a = recomp_eflags_setcf(_flag_k, _flag_a, _flag_b, _cf, _df); _flag_b = 0; _flag_k = FK_EFLAGS; } ebx = _rv; } /* 0x00780282: rcr ebx, 1 */
    if (1u) _cf = (((edx) >> 0) & 1u); /* 0x00780284: shr edx, 1 */
    if (1u) { _flag_a = recomp_flags_pack((edx >> 1u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    edx = edx >> 1u; /* 0x00780284: shr edx, 1 */
    { uint32_t _rv = (eax) & 0xFFFFFFFFu, _rn = ((1) & 31) % 33u; for (uint32_t _i=0;_i<_rn;_i++){ uint32_t _rb = _rv & 1u; _rv = ((_rv >> 1) | (_cf << 31)) & 0xFFFFFFFFu; _cf = _rb; } if (_rn) { _flag_a = recomp_eflags_setcf(_flag_k, _flag_a, _flag_b, _cf, _df); _flag_b = 0; _flag_k = FK_EFLAGS; } eax = _rv; } /* 0x00780286: rcr eax, 1 */
    _flag_a = (uint32_t)((ecx | ecx)); _flag_b = (uint32_t)((ecx | ecx));
    ecx = ecx | ecx; /* 0x00780288: or ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_00780280; /* 0x0078028A: jne 0x780280 */
L_0078028C:
    { uint64_t _dividend = ((uint64_t)edx << 32) | eax; uint32_t _dv = (uint32_t)ebx; /* 0x0078028C: div ebx */
      if (_dv) { eax = (uint32_t)(_dividend / _dv); edx = (uint32_t)(_dividend % _dv); }
      else { eax = 0; edx = 0; } }
    esi = eax; /* 0x0078028E: mov esi, eax */
    { uint64_t _r = (uint64_t)eax * (uint32_t)(MEM32(esp + 0x18)); /* 0x00780290: mul dword ptr [esp + 0x18] */
      eax = (uint32_t)_r; edx = (uint32_t)(_r >> 32); uint32_t _ov = edx != 0;
      _flag_k = FK_EFLAGS; _flag_a = _ov ? 0x801u : 0u; _flag_b = 0; _cf = _ov; }
    ecx = eax; /* 0x00780294: mov ecx, eax */
    eax = MEM32(esp + 0x14); /* 0x00780296: mov eax, dword ptr [esp + 0x14] */
    { uint64_t _r = (uint64_t)eax * (uint32_t)(esi); /* 0x0078029A: mul esi */
      eax = (uint32_t)_r; edx = (uint32_t)(_r >> 32); uint32_t _ov = edx != 0;
      _flag_k = FK_EFLAGS; _flag_a = _ov ? 0x801u : 0u; _flag_b = 0; _cf = _ov; }
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edx = edx + ecx; /* 0x0078029C: add edx, ecx */
    _flag_k = FK_ADD;
    if (/* add result */ recomp_cond(_flag_k, _flag_a, _flag_b, CC_B)) goto L_007802AE; /* 0x0078029E: jb 0x7802ae */
L_007802A0:
    /* cmp edx, MEM32(esp + 0x10) */ /* 0x007802A0: cmp edx, dword ptr [esp + 0x10] */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(MEM32(esp + 0x10));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_A(_flag_a, _flag_b)) goto L_007802AE; /* 0x007802A4: ja 0x7802ae */
L_007802A6:
    if (CMP_B(_flag_a, _flag_b)) goto L_007802AF; /* 0x007802A6: jb 0x7802af */
L_007802A8:
    /* cmp eax, MEM32(esp + 0xC) */ /* 0x007802A8: cmp eax, dword ptr [esp + 0xc] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(esp + 0xC));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_007802AF; /* 0x007802AC: jbe 0x7802af */
L_007802AE:
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi - 1; /* 0x007802AE: dec esi */
    _flag_k = FK_DEC;
L_007802AF:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edx = 0; /* 0x007802AF: xor edx, edx */
    _cf = 0;
    _flag_k = FK_TEST;
    eax = esi; /* 0x007802B1: mov eax, esi */
L_007802B3:
    esi = POP32_VAL(esp); /* 0x007802B3: pop esi */
    ebx = POP32_VAL(esp); /* 0x007802B4: pop ebx */
    RECOMP_FLAGS_OUT(); esp += 20; { RECOMP_REGS_OUT(); return; } /* 0x007802B5: ret 0x10 */
    RECOMP_REGS_OUT();
}

void sub_007802C0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007802C0u);

L_007802C0:
    PUSH32(esp, esi); /* 0x007802C0: push esi */
    eax = MEM32(esp + 0x14); /* 0x007802C1: mov eax, dword ptr [esp + 0x14] */
    _flag_a = (uint32_t)((eax | eax)); _flag_b = (uint32_t)((eax | eax));
    eax = eax | eax; /* 0x007802C5: or eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_007802F1; /* 0x007802C7: jne 0x7802f1 */
L_007802C9:
    ecx = MEM32(esp + 0x10); /* 0x007802C9: mov ecx, dword ptr [esp + 0x10] */
    eax = MEM32(esp + 0xC); /* 0x007802CD: mov eax, dword ptr [esp + 0xc] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edx = 0; /* 0x007802D1: xor edx, edx */
    _cf = 0;
    _flag_k = FK_TEST;
    { uint64_t _dividend = ((uint64_t)edx << 32) | eax; uint32_t _dv = (uint32_t)ecx; /* 0x007802D3: div ecx */
      if (_dv) { eax = (uint32_t)(_dividend / _dv); edx = (uint32_t)(_dividend % _dv); }
      else { eax = 0; edx = 0; } }
    ebx = eax; /* 0x007802D5: mov ebx, eax */
    eax = MEM32(esp + 0x8); /* 0x007802D7: mov eax, dword ptr [esp + 8] */
    { uint64_t _dividend = ((uint64_t)edx << 32) | eax; uint32_t _dv = (uint32_t)ecx; /* 0x007802DB: div ecx */
      if (_dv) { eax = (uint32_t)(_dividend / _dv); edx = (uint32_t)(_dividend % _dv); }
      else { eax = 0; edx = 0; } }
    esi = eax; /* 0x007802DD: mov esi, eax */
    eax = ebx; /* 0x007802DF: mov eax, ebx */
    { uint64_t _r = (uint64_t)eax * (uint32_t)(MEM32(esp + 0x10)); /* 0x007802E1: mul dword ptr [esp + 0x10] */
      eax = (uint32_t)_r; edx = (uint32_t)(_r >> 32); uint32_t _ov = edx != 0;
      _flag_k = FK_EFLAGS; _flag_a = _ov ? 0x801u : 0u; _flag_b = 0; _cf = _ov; }
    ecx = eax; /* 0x007802E5: mov ecx, eax */
    eax = esi; /* 0x007802E7: mov eax, esi */
    { uint64_t _r = (uint64_t)eax * (uint32_t)(MEM32(esp + 0x10)); /* 0x007802E9: mul dword ptr [esp + 0x10] */
      eax = (uint32_t)_r; edx = (uint32_t)(_r >> 32); uint32_t _ov = edx != 0;
      _flag_k = FK_EFLAGS; _flag_a = _ov ? 0x801u : 0u; _flag_b = 0; _cf = _ov; }
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edx = edx + ecx; /* 0x007802ED: add edx, ecx */
    _flag_k = FK_ADD;
    goto L_00780338; /* 0x007802EF: jmp 0x780338 */
L_007802F1:
    ecx = eax; /* 0x007802F1: mov ecx, eax */
    ebx = MEM32(esp + 0x10); /* 0x007802F3: mov ebx, dword ptr [esp + 0x10] */
    edx = MEM32(esp + 0xC); /* 0x007802F7: mov edx, dword ptr [esp + 0xc] */
    eax = MEM32(esp + 0x8); /* 0x007802FB: mov eax, dword ptr [esp + 8] */
L_007802FF:
    if (1u) _cf = (((ecx) >> 0) & 1u); /* 0x007802FF: shr ecx, 1 */
    if (1u) { _flag_a = recomp_flags_pack((ecx >> 1u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ecx = ecx >> 1u; /* 0x007802FF: shr ecx, 1 */
    { uint32_t _rv = (ebx) & 0xFFFFFFFFu, _rn = ((1) & 31) % 33u; for (uint32_t _i=0;_i<_rn;_i++){ uint32_t _rb = _rv & 1u; _rv = ((_rv >> 1) | (_cf << 31)) & 0xFFFFFFFFu; _cf = _rb; } if (_rn) { _flag_a = recomp_eflags_setcf(_flag_k, _flag_a, _flag_b, _cf, _df); _flag_b = 0; _flag_k = FK_EFLAGS; } ebx = _rv; } /* 0x00780301: rcr ebx, 1 */
    if (1u) _cf = (((edx) >> 0) & 1u); /* 0x00780303: shr edx, 1 */
    if (1u) { _flag_a = recomp_flags_pack((edx >> 1u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    edx = edx >> 1u; /* 0x00780303: shr edx, 1 */
    { uint32_t _rv = (eax) & 0xFFFFFFFFu, _rn = ((1) & 31) % 33u; for (uint32_t _i=0;_i<_rn;_i++){ uint32_t _rb = _rv & 1u; _rv = ((_rv >> 1) | (_cf << 31)) & 0xFFFFFFFFu; _cf = _rb; } if (_rn) { _flag_a = recomp_eflags_setcf(_flag_k, _flag_a, _flag_b, _cf, _df); _flag_b = 0; _flag_k = FK_EFLAGS; } eax = _rv; } /* 0x00780305: rcr eax, 1 */
    _flag_a = (uint32_t)((ecx | ecx)); _flag_b = (uint32_t)((ecx | ecx));
    ecx = ecx | ecx; /* 0x00780307: or ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_007802FF; /* 0x00780309: jne 0x7802ff */
L_0078030B:
    { uint64_t _dividend = ((uint64_t)edx << 32) | eax; uint32_t _dv = (uint32_t)ebx; /* 0x0078030B: div ebx */
      if (_dv) { eax = (uint32_t)(_dividend / _dv); edx = (uint32_t)(_dividend % _dv); }
      else { eax = 0; edx = 0; } }
    esi = eax; /* 0x0078030D: mov esi, eax */
    { uint64_t _r = (uint64_t)eax * (uint32_t)(MEM32(esp + 0x14)); /* 0x0078030F: mul dword ptr [esp + 0x14] */
      eax = (uint32_t)_r; edx = (uint32_t)(_r >> 32); uint32_t _ov = edx != 0;
      _flag_k = FK_EFLAGS; _flag_a = _ov ? 0x801u : 0u; _flag_b = 0; _cf = _ov; }
    ecx = eax; /* 0x00780313: mov ecx, eax */
    eax = MEM32(esp + 0x10); /* 0x00780315: mov eax, dword ptr [esp + 0x10] */
    { uint64_t _r = (uint64_t)eax * (uint32_t)(esi); /* 0x00780319: mul esi */
      eax = (uint32_t)_r; edx = (uint32_t)(_r >> 32); uint32_t _ov = edx != 0;
      _flag_k = FK_EFLAGS; _flag_a = _ov ? 0x801u : 0u; _flag_b = 0; _cf = _ov; }
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edx = edx + ecx; /* 0x0078031B: add edx, ecx */
    _flag_k = FK_ADD;
    if (/* add result */ recomp_cond(_flag_k, _flag_a, _flag_b, CC_B)) goto L_0078032D; /* 0x0078031D: jb 0x78032d */
L_0078031F:
    /* cmp edx, MEM32(esp + 0xC) */ /* 0x0078031F: cmp edx, dword ptr [esp + 0xc] */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(MEM32(esp + 0xC));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_A(_flag_a, _flag_b)) goto L_0078032D; /* 0x00780323: ja 0x78032d */
L_00780325:
    if (CMP_B(_flag_a, _flag_b)) goto L_00780336; /* 0x00780325: jb 0x780336 */
L_00780327:
    /* cmp eax, MEM32(esp + 0x8) */ /* 0x00780327: cmp eax, dword ptr [esp + 8] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(esp + 0x8));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_00780336; /* 0x0078032B: jbe 0x780336 */
L_0078032D:
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi - 1; /* 0x0078032D: dec esi */
    _flag_k = FK_DEC;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(esp + 0x10));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - MEM32(esp + 0x10); /* 0x0078032E: sub eax, dword ptr [esp + 0x10] */
    _flag_k = FK_CMP;
    { uint32_t _sa = edx, _sb = MEM32(esp + 0x14), _sc = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x00780332: sbb edx, dword ptr [esp + 0x14] */
      edx = _sa - _sb - _sc;
      _flag_a = recomp_flags_sbb(_sa, _sb, _sc); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
L_00780336:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ebx = 0; /* 0x00780336: xor ebx, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
L_00780338:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(esp + 0x8));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - MEM32(esp + 0x8); /* 0x00780338: sub eax, dword ptr [esp + 8] */
    _flag_k = FK_CMP;
    { uint32_t _sa = edx, _sb = MEM32(esp + 0xC), _sc = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x0078033C: sbb edx, dword ptr [esp + 0xc] */
      edx = _sa - _sb - _sc;
      _flag_a = recomp_flags_sbb(_sa, _sb, _sc); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(edx);
    _cf = (edx) != 0;
    edx = (uint32_t)(-(int32_t)edx); /* 0x00780340: neg edx */
    _flag_k = FK_CMP;
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(eax);
    _cf = (eax) != 0;
    eax = (uint32_t)(-(int32_t)eax); /* 0x00780342: neg eax */
    _flag_k = FK_CMP;
    { uint32_t _sa = edx, _sb = 0, _sc = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x00780344: sbb edx, 0 */
      edx = _sa - _sb - _sc;
      _flag_a = recomp_flags_sbb(_sa, _sb, _sc); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    ecx = edx; /* 0x00780347: mov ecx, edx */
    edx = ebx; /* 0x00780349: mov edx, ebx */
    ebx = ecx; /* 0x0078034B: mov ebx, ecx */
    ecx = eax; /* 0x0078034D: mov ecx, eax */
    eax = esi; /* 0x0078034F: mov eax, esi */
    esi = POP32_VAL(esp); /* 0x00780351: pop esi */
    RECOMP_FLAGS_OUT(); esp += 20; { RECOMP_REGS_OUT(); return; } /* 0x00780352: ret 0x10 */
    RECOMP_REGS_OUT();
}

void sub_00780360(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00780360u);

L_00780360:
    /* cmp LO8(ecx), 0x40u */ /* 0x00780360: cmp cl, 0x40 */
    _flag_a = (uint32_t)(LO8(ecx)) << 24; _flag_b = (uint32_t)(0x40u) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_AE(_flag_a, _flag_b)) goto L_0078037A; /* 0x00780363: jae 0x78037a */
L_00780365:
    /* cmp LO8(ecx), 0x20u */ /* 0x00780365: cmp cl, 0x20 */
    _flag_a = (uint32_t)(LO8(ecx)) << 24; _flag_b = (uint32_t)(0x20u) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_AE(_flag_a, _flag_b)) goto L_00780370; /* 0x00780368: jae 0x780370 */
L_0078036A:
    if ((((LO8(ecx)) & 31)) && (((LO8(ecx)) & 31)) < 32) _cf = ((((LO8(ecx)) & 31)) <= 32 ? (((eax) >> ((((LO8(ecx)) & 31)) - 1)) & 1u) : 0u); /* 0x0078036A: shrd eax, edx, cl */
    if ((((LO8(ecx)) & 31)) && (((LO8(ecx)) & 31)) < 32) { _flag_a = recomp_flags_pack((((((LO8(ecx)) & 31)) && (((LO8(ecx)) & 31)) < 32) ? (((eax) >> (((LO8(ecx)) & 31))) | ((uint32_t)(edx) << (32 - (((LO8(ecx)) & 31))))) : (eax)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = (((((LO8(ecx)) & 31)) && (((LO8(ecx)) & 31)) < 32) ? (((eax) >> (((LO8(ecx)) & 31))) | ((uint32_t)(edx) << (32 - (((LO8(ecx)) & 31))))) : (eax));
    if (((LO8(ecx)) & 31)) _cf = ((((LO8(ecx)) & 31)) <= 32 ? (((edx) >> ((((LO8(ecx)) & 31)) - 1)) & 1u) : 0u); /* 0x0078036D: shr edx, cl */
    if (((LO8(ecx)) & 31)) { _flag_a = recomp_flags_pack((edx >> ((LO8(ecx)) & 31)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    edx = edx >> ((LO8(ecx)) & 31); /* 0x0078036D: shr edx, cl */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x0078036F: ret  */
L_00780370:
    eax = edx; /* 0x00780370: mov eax, edx */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edx = 0; /* 0x00780372: xor edx, edx */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(LO8(ecx)) << 24; _flag_b = (uint32_t)(0x1Fu) << 24;
    SET_LO8(ecx, LO8(ecx) & 0x1Fu); /* 0x00780374: and cl, 0x1f */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (((LO8(ecx)) & 31)) _cf = ((((LO8(ecx)) & 31)) <= 32 ? (((eax) >> ((((LO8(ecx)) & 31)) - 1)) & 1u) : 0u); /* 0x00780377: shr eax, cl */
    if (((LO8(ecx)) & 31)) { _flag_a = recomp_flags_pack((eax >> ((LO8(ecx)) & 31)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax >> ((LO8(ecx)) & 31); /* 0x00780377: shr eax, cl */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x00780379: ret  */
L_0078037A:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x0078037A: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edx = 0; /* 0x0078037C: xor edx, edx */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x0078037E: ret  */
    RECOMP_REGS_OUT();
}

void sub_00780380(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00780380u);

L_00780380:
    PUSH32(esp, ecx); /* 0x00780380: push ecx */
    ecx = esp + 0x4; /* 0x00780381: lea ecx, [esp + 4] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ecx = ecx - eax; /* 0x00780385: sub ecx, eax */
    _flag_k = FK_CMP;
    { uint32_t _sa = eax, _sb = eax, _sc = (uint32_t)CMP_B(_flag_a, _flag_b); /* 0x00780387: sbb eax, eax */
      eax = _sc ? 0xFFFFFFFFu : 0;
      _flag_a = recomp_flags_sbb(_sa, _sb, _sc); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    eax = ~eax; /* 0x00780389: not eax */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(eax);
    ecx = ecx & eax; /* 0x0078038B: and ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    eax = esp; /* 0x0078038D: mov eax, esp */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xFFFFF000u);
    eax = eax & 0xFFFFF000u; /* 0x0078038F: and eax, 0xfffff000 */
    _cf = 0;
    _flag_k = FK_TEST;
L_00780394:
    /* cmp ecx, eax */ /* 0x00780394: cmp ecx, eax */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_B(_flag_a, _flag_b)) goto L_007803A2; /* 0x00780396: jb 0x7803a2 */
L_00780398:
    eax = ecx; /* 0x00780398: mov eax, ecx */
    ecx = POP32_VAL(esp); /* 0x0078039A: pop ecx */
    { uint32_t _tmp = esp; /* 0x0078039B: xchg esp, eax */
      esp = eax;
      eax = _tmp; }
    eax = MEM32(eax); /* 0x0078039C: mov eax, dword ptr [eax] */
    MEM32(esp) = eax; /* 0x0078039E: mov dword ptr [esp], eax */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x007803A1: ret  */
L_007803A2:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x1000u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - 0x1000u; /* 0x007803A2: sub eax, 0x1000 */
    _flag_k = FK_CMP;
    /* test MEM32(eax), eax */ /* 0x007803A7: test dword ptr [eax], eax */
    _flag_a = (uint32_t)(MEM32(eax)); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    goto L_00780394; /* 0x007803A9: jmp 0x780394 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    RECOMP_REGS_OUT();
}

void sub_007803B0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007803B0u);

L_007803B0:
    ecx = 1; /* 0x007803B0: mov ecx, 1 */
    _xmm[5].u64[0] = MEM64(0x809D98); _xmm[5].u64[1] = 0; /* 0x007803B5: movsd xmm5, qword ptr [0x809d98] */
    goto L_007803DB; /* 0x007803BD: jmp 0x7803db */
L_007803DB:
    eax = _xmm[0].u32[0]; /* 0x007803DB: movd eax, xmm0 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x7FFFFFFFu);
    eax = eax & 0x7FFFFFFFu; /* 0x007803DF: and eax, 0x7fffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp eax, 0x7F800000u */ /* 0x007803E4: cmp eax, 0x7f800000 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x7F800000u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_AE(_flag_a, _flag_b)) goto L_0078053B; /* 0x007803E9: jae 0x78053b */
L_007803EF:
    _xmm[0].f64[0] = (double)_xmm[0].f32[0]; /* 0x007803EF: cvtss2sd xmm0, xmm0 */
    /* cmp ecx, 2 */ /* 0x007803F3: cmp ecx, 2 */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_00780410; /* 0x007803F6: jne 0x780410 */
L_007803F8:
    _xmm[2].u64[0] = MEM64(0x809DB8); _xmm[2].u64[1] = 0; /* 0x007803F8: movsd xmm2, qword ptr [0x809db8] */
    _flag_a = SSE_COMI(_xmm[0].f64[0], _xmm[2].f64[0]); _flag_b = 0; _cf = _flag_a & 1u; /* 0x00780400: comisd xmm0, xmm2 */
    _flag_k = FK_EFLAGS;
    if (recomp_cond(FK_EFLAGS, _flag_a, 0, CC_BE)) goto L_00780410; /* 0x00780404: jbe 0x780410 */
L_00780406:
    edx = 0x10u; /* 0x00780406: mov edx, 0x10 */
    RECOMP_CALL(sub_0078054D); /* 0x0078040B: call 0x78054d */
    RECOMP_FLAGS_IN();
L_00780410:
    _flag_a = SSE_COMI(_xmm[0].f64[0], _xmm[5].f64[0]); _flag_b = 0; _cf = _flag_a & 1u; /* 0x00780410: comisd xmm0, xmm5 */
    _flag_k = FK_EFLAGS;
    if (recomp_cond(FK_EFLAGS, _flag_a, 0, CC_AE)) goto L_0078053B; /* 0x00780414: jae 0x78053b */
L_0078041A:
    _xmm[6].u64[0] = MEM64(0x809D90); _xmm[6].u64[1] = 0; /* 0x0078041A: movsd xmm6, qword ptr [0x809d90] */
    _flag_a = SSE_COMI(_xmm[0].f64[0], _xmm[6].f64[0]); _flag_b = 0; _cf = _flag_a & 1u; /* 0x00780422: comisd xmm0, xmm6 */
    _flag_k = FK_EFLAGS;
    if (recomp_cond(FK_EFLAGS, _flag_a, 0, CC_B)) goto L_0078053B; /* 0x00780426: jb 0x78053b */
L_0078042C:
    _xmm[1] = _xmm[0]; /* 0x0078042C: movdqa xmm1, xmm0 */
    { uint64_t _c = 1u; for (int _k = 0; _k < 2; _k++) _xmm[1].u64[_k] = _c > 63 ? 0 : (uint64_t)(_xmm[1].u64[_k] << _c); } /* 0x00780430: psllq xmm1, 1 */
    { uint64_t _c = 1u; for (int _k = 0; _k < 2; _k++) _xmm[1].u64[_k] = _c > 63 ? 0 : (uint64_t)(_xmm[1].u64[_k] >> _c); } /* 0x00780435: psrlq xmm1, 1 */
    /* cmp ecx, 1 */ /* 0x0078043A: cmp ecx, 1 */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_00780479; /* 0x0078043D: je 0x780479 */
L_0078043F:
    _xmm[2].u64[0] = MEM64(0x809DB0); _xmm[2].u64[1] = 0; /* 0x0078043F: movsd xmm2, qword ptr [0x809db0] */
    _flag_a = SSE_COMI(_xmm[1].f64[0], _xmm[2].f64[0]); _flag_b = 0; _cf = _flag_a & 1u; /* 0x00780447: comisd xmm1, xmm2 */
    _flag_k = FK_EFLAGS;
    if (recomp_cond(FK_EFLAGS, _flag_a, 0, CC_A)) goto L_00780479; /* 0x0078044B: ja 0x780479 */
L_0078044D:
    { xmm_t _s = _xmm[2]; for (int _k = 0; _k < 4; _k++) _xmm[2].u32[_k] = _xmm[2].u32[_k] ^ _s.u32[_k]; } /* 0x0078044D: xorpd xmm2, xmm2 */
    _flag_a = SSE_COMI(_xmm[1].f64[0], _xmm[2].f64[0]); _flag_b = 0; _cf = _flag_a & 1u; /* 0x00780451: comisd xmm1, xmm2 */
    _flag_k = FK_EFLAGS;
    if (recomp_cond(FK_EFLAGS, _flag_a, 0, CC_E)) goto L_00780479; /* 0x00780455: je 0x780479 */
L_00780457:
    PUSH32(esp, eax); /* 0x00780457: push eax */
    /* fwait */ /* 0x00780458: wait  */
    MEM16(esp) = _fpu_cw; /* 0x00780459: fnstcw word ptr [esp] */
    SET_LO16(eax, MEM16(esp)); /* 0x0078045C: mov ax, word ptr [esp] */
    /* test LO16(eax), 0x10u */ /* 0x00780460: test ax, 0x10 */
    _flag_a = (uint32_t)(LO16(eax)) << 16; _flag_b = (uint32_t)(0x10u) << 16;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 16);
    eax = POP32_VAL(esp); /* 0x00780464: pop eax */
    if (TEST_NZ(_flag_a, _flag_b)) goto L_00780479; /* 0x00780465: jne 0x780479 */
L_00780467:
    edx = 2; /* 0x00780467: mov edx, 2 */
    RECOMP_CALL(sub_0078054D); /* 0x0078046C: call 0x78054d */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x00780471: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    edx = 0x80000000u; /* 0x00780473: mov edx, 0x80000000 */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x00780478: ret  */
L_00780479:
    { xmm_t _s = _xmm[6]; for (int _k = 0; _k < 4; _k++) _xmm[6].u32[_k] = _xmm[6].u32[_k] ^ _s.u32[_k]; } /* 0x00780479: xorpd xmm6, xmm6 */
    _flag_a = SSE_COMI(_xmm[1].f64[0], _xmm[6].f64[0]); _flag_b = 0; _cf = _flag_a & 1u; /* 0x0078047D: comisd xmm1, xmm6 */
    _flag_k = FK_EFLAGS;
    if (recomp_cond(FK_EFLAGS, _flag_a, 0, CC_E)) goto L_0078052D; /* 0x00780481: je 0x78052d */
L_00780487:
    _xmm[3].u64[0] = MEM64(0x809D70); _xmm[3].u64[1] = 0; /* 0x00780487: movsd xmm3, qword ptr [0x809d70] */
    _xmm[4].u64[0] = MEM64(0x809D78); _xmm[4].u64[1] = 0; /* 0x0078048F: movsd xmm4, qword ptr [0x809d78] */
    _xmm[5].u64[0] = (uint32_t)(MEM32(0x809DD0)); _xmm[5].u64[1] = 0; /* 0x00780497: movd xmm5, dword ptr [0x809dd0] */
    _xmm[6] = _xmm[0]; /* 0x0078049F: movdqa xmm6, xmm0 */
    { double _s0 = _xmm[1].f64[0]; _xmm[6].u64[0] = (uint64_t)(int64_t)(int32_t)sse_cmp_pred(_xmm[6].f64[0], _s0, 0); } /* 0x007804A3: cmpeqsd xmm6, xmm1 */
    _xmm[2] = _xmm[1]; /* 0x007804A8: movdqa xmm2, xmm1 */
    { xmm_t _s = _xmm[3]; for (int _k = 0; _k < 4; _k++) _xmm[2].u32[_k] = _xmm[2].u32[_k] & _s.u32[_k]; } /* 0x007804AC: pand xmm2, xmm3 */
    { xmm_t _s = _xmm[4]; for (int _k = 0; _k < 4; _k++) _xmm[2].u32[_k] = _xmm[2].u32[_k] | _s.u32[_k]; } /* 0x007804B0: por xmm2, xmm4 */
    { uint64_t _c = 52u; for (int _k = 0; _k < 2; _k++) _xmm[1].u64[_k] = _c > 63 ? 0 : (uint64_t)(_xmm[1].u64[_k] >> _c); } /* 0x007804B4: psrlq xmm1, 0x34 */
    _xmm[4] = _xmm[1]; /* 0x007804B9: movdqa xmm4, xmm1 */
    { xmm_t _s = _xmm[5]; for (int _k = 0; _k < 2; _k++) _xmm[4].u64[_k] -= _s.u64[_k]; } /* 0x007804BD: psubq xmm4, xmm5 */
    _xmm[3] = _xmm[2]; /* 0x007804C1: movdqa xmm3, xmm2 */
    { uint64_t _c = _xmm[4].u64[0]; for (int _k = 0; _k < 2; _k++) _xmm[3].u64[_k] = _c > 63 ? 0 : (uint64_t)(_xmm[3].u64[_k] << _c); } /* 0x007804C5: psllq xmm3, xmm4 */
    _xmm[4] = _xmm[5]; /* 0x007804C9: movdqa xmm4, xmm5 */
    { xmm_t _s = _xmm[1]; for (int _k = 0; _k < 2; _k++) _xmm[4].u64[_k] -= _s.u64[_k]; } /* 0x007804CD: psubq xmm4, xmm1 */
    _xmm[7] = _xmm[2]; /* 0x007804D1: movdqa xmm7, xmm2 */
    { uint64_t _c = _xmm[4].u64[0]; for (int _k = 0; _k < 2; _k++) _xmm[7].u64[_k] = _c > 63 ? 0 : (uint64_t)(_xmm[7].u64[_k] >> _c); } /* 0x007804D5: psrlq xmm7, xmm4 */
    { xmm_t _s = _xmm[5]; for (int _k = 0; _k < 4; _k++) _xmm[1].u32[_k] = (_xmm[1].i32[_k] > _s.i32[_k]) ? (uint32_t)~0u : 0; } /* 0x007804D9: pcmpgtd xmm1, xmm5 */
    _xmm[1] = recomp_punpckldq(_xmm[1], _xmm[1]); /* 0x007804DD: punpckldq xmm1, xmm1 */
    { xmm_t _s = _xmm[1]; for (int _k = 0; _k < 4; _k++) _xmm[3].u32[_k] = _xmm[3].u32[_k] & _s.u32[_k]; } /* 0x007804E1: pand xmm3, xmm1 */
    { xmm_t _s = _xmm[7]; for (int _k = 0; _k < 4; _k++) _xmm[1].u32[_k] = ~_xmm[1].u32[_k] & _s.u32[_k]; } /* 0x007804E5: pandn xmm1, xmm7 */
    { xmm_t _s = _xmm[3]; for (int _k = 0; _k < 4; _k++) _xmm[1].u32[_k] = _xmm[1].u32[_k] | _s.u32[_k]; } /* 0x007804E9: por xmm1, xmm3 */
    { xmm_t _s = _xmm[5]; for (int _k = 0; _k < 4; _k++) _xmm[5].u32[_k] = _xmm[5].u32[_k] ^ _s.u32[_k]; } /* 0x007804ED: pxor xmm5, xmm5 */
    { xmm_t _s = _xmm[1]; for (int _k = 0; _k < 2; _k++) _xmm[5].u64[_k] -= _s.u64[_k]; } /* 0x007804F1: psubq xmm5, xmm1 */
    { xmm_t _s = _xmm[6]; for (int _k = 0; _k < 4; _k++) _xmm[1].u32[_k] = _xmm[1].u32[_k] & _s.u32[_k]; } /* 0x007804F5: pand xmm1, xmm6 */
    { xmm_t _s = _xmm[5]; for (int _k = 0; _k < 4; _k++) _xmm[6].u32[_k] = ~_xmm[6].u32[_k] & _s.u32[_k]; } /* 0x007804F9: pandn xmm6, xmm5 */
    { xmm_t _s = _xmm[1]; for (int _k = 0; _k < 4; _k++) _xmm[6].u32[_k] = _xmm[6].u32[_k] | _s.u32[_k]; } /* 0x007804FD: por xmm6, xmm1 */
    eax = _xmm[4].u32[0]; /* 0x00780501: movd eax, xmm4 */
    /* cmp eax, 0 */ /* 0x00780505: cmp eax, 0 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_LE(_flag_a, _flag_b)) goto L_0078052D; /* 0x00780508: jle 0x78052d */
L_0078050A:
    { uint64_t _c = _xmm[4].u64[0]; for (int _k = 0; _k < 2; _k++) _xmm[7].u64[_k] = _c > 63 ? 0 : (uint64_t)(_xmm[7].u64[_k] << _c); } /* 0x0078050A: psllq xmm7, xmm4 */
    { xmm_t _s = _xmm[7]; for (int _k = 0; _k < 4; _k++) _xmm[2].u32[_k] = _xmm[2].u32[_k] ^ _s.u32[_k]; } /* 0x0078050E: pxor xmm2, xmm7 */
    eax = _xmm[2].u32[0]; /* 0x00780512: movd eax, xmm2 */
    { xmm_t _s = _xmm[2]; for (int _k = 0; _k < 16; _k++) _xmm[2].u8[_k] = (_k + 4 >= 0 && _k + 4 < 16) ? _s.u8[_k + 4] : 0; } /* 0x00780516: psrldq xmm2, 4 */
    edx = _xmm[2].u32[0]; /* 0x0078051B: movd edx, xmm2 */
    _flag_a = (uint32_t)((eax | edx)); _flag_b = (uint32_t)((eax | edx));
    eax = eax | edx; /* 0x0078051F: or eax, edx */
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_0078052D; /* 0x00780521: je 0x78052d */
L_00780523:
    edx = 0x10u; /* 0x00780523: mov edx, 0x10 */
    RECOMP_CALL(sub_0078054D); /* 0x00780528: call 0x78054d */
    RECOMP_FLAGS_IN();
L_0078052D:
    eax = _xmm[6].u32[0]; /* 0x0078052D: movd eax, xmm6 */
    { xmm_t _s = _xmm[6]; for (int _k = 0; _k < 16; _k++) _xmm[6].u8[_k] = (_k + 4 >= 0 && _k + 4 < 16) ? _s.u8[_k + 4] : 0; } /* 0x00780531: psrldq xmm6, 4 */
    edx = _xmm[6].u32[0]; /* 0x00780536: movd edx, xmm6 */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x0078053A: ret  */
L_0078053B:
    edx = 8; /* 0x0078053B: mov edx, 8 */
    RECOMP_CALL(sub_0078054D); /* 0x00780540: call 0x78054d */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x00780545: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    edx = 0x80000000u; /* 0x00780547: mov edx, 0x80000000 */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x0078054C: ret  */
    RECOMP_REGS_OUT();
}

void sub_0078054D(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0078054Du);

L_0078054D:
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x20u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x20u; /* 0x0078054D: sub esp, 0x20 */
    _flag_k = FK_CMP;
    /* fwait */ /* 0x00780550: wait  */
    MEM16(esp) = _fpu_cw; /* 0x00780551: fnstcw word ptr [esp] */
    eax = (uint32_t)MEM16(esp); /* 0x00780554: movzx eax, word ptr [esp] */
    /* cmp edx, 8 */ /* 0x00780558: cmp edx, 8 */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_00780565; /* 0x0078055B: je 0x780565 */
L_0078055D:
    /* test MEM8(edx + 0x809DBF), LO8(eax) */ /* 0x0078055D: test byte ptr [edx + 0x809dbf], al */
    _flag_a = (uint32_t)(MEM8(edx + 0x809DBF)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_0078058D; /* 0x00780563: jne 0x78058d */
L_00780565:
    _fpu_cw = MEM16(0x809DE0); /* 0x00780565: fldcw word ptr [0x809de0] */
    MEM32(esp) = edx; /* 0x0078056B: mov dword ptr [esp], edx */
    MEM32(esp + 0x4) = 0; /* 0x0078056E: mov dword ptr [esp + 4], 0 */
    MEM64(esp + 0x8) = _xmm[0].u64[0]; /* 0x00780576: movsd qword ptr [esp + 8], xmm0 */
    MEM64(esp + 0x10) = _xmm[0].u64[0]; /* 0x0078057C: movsd qword ptr [esp + 0x10], xmm0 */
    MEM32(esp + 0x18) = eax; /* 0x00780582: mov dword ptr [esp + 0x18], eax */
    RECOMP_CALL(sub_00780D20); /* 0x00780586: call 0x780d20 */
    RECOMP_FLAGS_IN();
    { _st[0] = _st[0]; g_st_i64[0] = g_st_i64[0]; fp_pop(); } /* 0x0078058B: fstp st(0) */
L_0078058D:
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x20u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x20u; /* 0x0078058D: add esp, 0x20 */
    _flag_k = FK_ADD;
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x00780590: ret  */
    RECOMP_REGS_OUT();
}

void sub_00780591(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00780591u);

    goto L_00780591;
L_007803F3:
    /* cmp ecx, 2 */ /* 0x007803F3: cmp ecx, 2 */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_00780410; /* 0x007803F6: jne 0x780410 */
L_007803F8:
    _xmm[2].u64[0] = MEM64(0x809DB8); _xmm[2].u64[1] = 0; /* 0x007803F8: movsd xmm2, qword ptr [0x809db8] */
    _flag_a = SSE_COMI(_xmm[0].f64[0], _xmm[2].f64[0]); _flag_b = 0; _cf = _flag_a & 1u; /* 0x00780400: comisd xmm0, xmm2 */
    _flag_k = FK_EFLAGS;
    if (recomp_cond(FK_EFLAGS, _flag_a, 0, CC_BE)) goto L_00780410; /* 0x00780404: jbe 0x780410 */
L_00780406:
    edx = 0x10u; /* 0x00780406: mov edx, 0x10 */
    RECOMP_CALL(sub_0078054D); /* 0x0078040B: call 0x78054d */
    RECOMP_FLAGS_IN();
L_00780410:
    _flag_a = SSE_COMI(_xmm[0].f64[0], _xmm[5].f64[0]); _flag_b = 0; _cf = _flag_a & 1u; /* 0x00780410: comisd xmm0, xmm5 */
    _flag_k = FK_EFLAGS;
    if (recomp_cond(FK_EFLAGS, _flag_a, 0, CC_AE)) goto L_0078053B; /* 0x00780414: jae 0x78053b */
L_0078041A:
    _xmm[6].u64[0] = MEM64(0x809D90); _xmm[6].u64[1] = 0; /* 0x0078041A: movsd xmm6, qword ptr [0x809d90] */
    _flag_a = SSE_COMI(_xmm[0].f64[0], _xmm[6].f64[0]); _flag_b = 0; _cf = _flag_a & 1u; /* 0x00780422: comisd xmm0, xmm6 */
    _flag_k = FK_EFLAGS;
    if (recomp_cond(FK_EFLAGS, _flag_a, 0, CC_B)) goto L_0078053B; /* 0x00780426: jb 0x78053b */
L_0078042C:
    _xmm[1] = _xmm[0]; /* 0x0078042C: movdqa xmm1, xmm0 */
    { uint64_t _c = 1u; for (int _k = 0; _k < 2; _k++) _xmm[1].u64[_k] = _c > 63 ? 0 : (uint64_t)(_xmm[1].u64[_k] << _c); } /* 0x00780430: psllq xmm1, 1 */
    { uint64_t _c = 1u; for (int _k = 0; _k < 2; _k++) _xmm[1].u64[_k] = _c > 63 ? 0 : (uint64_t)(_xmm[1].u64[_k] >> _c); } /* 0x00780435: psrlq xmm1, 1 */
    /* cmp ecx, 1 */ /* 0x0078043A: cmp ecx, 1 */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_00780479; /* 0x0078043D: je 0x780479 */
L_0078043F:
    _xmm[2].u64[0] = MEM64(0x809DB0); _xmm[2].u64[1] = 0; /* 0x0078043F: movsd xmm2, qword ptr [0x809db0] */
    _flag_a = SSE_COMI(_xmm[1].f64[0], _xmm[2].f64[0]); _flag_b = 0; _cf = _flag_a & 1u; /* 0x00780447: comisd xmm1, xmm2 */
    _flag_k = FK_EFLAGS;
    if (recomp_cond(FK_EFLAGS, _flag_a, 0, CC_A)) goto L_00780479; /* 0x0078044B: ja 0x780479 */
L_0078044D:
    { xmm_t _s = _xmm[2]; for (int _k = 0; _k < 4; _k++) _xmm[2].u32[_k] = _xmm[2].u32[_k] ^ _s.u32[_k]; } /* 0x0078044D: xorpd xmm2, xmm2 */
    _flag_a = SSE_COMI(_xmm[1].f64[0], _xmm[2].f64[0]); _flag_b = 0; _cf = _flag_a & 1u; /* 0x00780451: comisd xmm1, xmm2 */
    _flag_k = FK_EFLAGS;
    if (recomp_cond(FK_EFLAGS, _flag_a, 0, CC_E)) goto L_00780479; /* 0x00780455: je 0x780479 */
L_00780457:
    PUSH32(esp, eax); /* 0x00780457: push eax */
    /* fwait */ /* 0x00780458: wait  */
    MEM16(esp) = _fpu_cw; /* 0x00780459: fnstcw word ptr [esp] */
    SET_LO16(eax, MEM16(esp)); /* 0x0078045C: mov ax, word ptr [esp] */
    /* test LO16(eax), 0x10u */ /* 0x00780460: test ax, 0x10 */
    _flag_a = (uint32_t)(LO16(eax)) << 16; _flag_b = (uint32_t)(0x10u) << 16;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 16);
    eax = POP32_VAL(esp); /* 0x00780464: pop eax */
    if (TEST_NZ(_flag_a, _flag_b)) goto L_00780479; /* 0x00780465: jne 0x780479 */
L_00780467:
    edx = 2; /* 0x00780467: mov edx, 2 */
    RECOMP_CALL(sub_0078054D); /* 0x0078046C: call 0x78054d */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x00780471: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    edx = 0x80000000u; /* 0x00780473: mov edx, 0x80000000 */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x00780478: ret  */
L_00780479:
    { xmm_t _s = _xmm[6]; for (int _k = 0; _k < 4; _k++) _xmm[6].u32[_k] = _xmm[6].u32[_k] ^ _s.u32[_k]; } /* 0x00780479: xorpd xmm6, xmm6 */
    _flag_a = SSE_COMI(_xmm[1].f64[0], _xmm[6].f64[0]); _flag_b = 0; _cf = _flag_a & 1u; /* 0x0078047D: comisd xmm1, xmm6 */
    _flag_k = FK_EFLAGS;
    if (recomp_cond(FK_EFLAGS, _flag_a, 0, CC_E)) goto L_0078052D; /* 0x00780481: je 0x78052d */
L_00780487:
    _xmm[3].u64[0] = MEM64(0x809D70); _xmm[3].u64[1] = 0; /* 0x00780487: movsd xmm3, qword ptr [0x809d70] */
    _xmm[4].u64[0] = MEM64(0x809D78); _xmm[4].u64[1] = 0; /* 0x0078048F: movsd xmm4, qword ptr [0x809d78] */
    _xmm[5].u64[0] = (uint32_t)(MEM32(0x809DD0)); _xmm[5].u64[1] = 0; /* 0x00780497: movd xmm5, dword ptr [0x809dd0] */
    _xmm[6] = _xmm[0]; /* 0x0078049F: movdqa xmm6, xmm0 */
    { double _s0 = _xmm[1].f64[0]; _xmm[6].u64[0] = (uint64_t)(int64_t)(int32_t)sse_cmp_pred(_xmm[6].f64[0], _s0, 0); } /* 0x007804A3: cmpeqsd xmm6, xmm1 */
    _xmm[2] = _xmm[1]; /* 0x007804A8: movdqa xmm2, xmm1 */
    { xmm_t _s = _xmm[3]; for (int _k = 0; _k < 4; _k++) _xmm[2].u32[_k] = _xmm[2].u32[_k] & _s.u32[_k]; } /* 0x007804AC: pand xmm2, xmm3 */
    { xmm_t _s = _xmm[4]; for (int _k = 0; _k < 4; _k++) _xmm[2].u32[_k] = _xmm[2].u32[_k] | _s.u32[_k]; } /* 0x007804B0: por xmm2, xmm4 */
    { uint64_t _c = 52u; for (int _k = 0; _k < 2; _k++) _xmm[1].u64[_k] = _c > 63 ? 0 : (uint64_t)(_xmm[1].u64[_k] >> _c); } /* 0x007804B4: psrlq xmm1, 0x34 */
    _xmm[4] = _xmm[1]; /* 0x007804B9: movdqa xmm4, xmm1 */
    { xmm_t _s = _xmm[5]; for (int _k = 0; _k < 2; _k++) _xmm[4].u64[_k] -= _s.u64[_k]; } /* 0x007804BD: psubq xmm4, xmm5 */
    _xmm[3] = _xmm[2]; /* 0x007804C1: movdqa xmm3, xmm2 */
    { uint64_t _c = _xmm[4].u64[0]; for (int _k = 0; _k < 2; _k++) _xmm[3].u64[_k] = _c > 63 ? 0 : (uint64_t)(_xmm[3].u64[_k] << _c); } /* 0x007804C5: psllq xmm3, xmm4 */
    _xmm[4] = _xmm[5]; /* 0x007804C9: movdqa xmm4, xmm5 */
    { xmm_t _s = _xmm[1]; for (int _k = 0; _k < 2; _k++) _xmm[4].u64[_k] -= _s.u64[_k]; } /* 0x007804CD: psubq xmm4, xmm1 */
    _xmm[7] = _xmm[2]; /* 0x007804D1: movdqa xmm7, xmm2 */
    { uint64_t _c = _xmm[4].u64[0]; for (int _k = 0; _k < 2; _k++) _xmm[7].u64[_k] = _c > 63 ? 0 : (uint64_t)(_xmm[7].u64[_k] >> _c); } /* 0x007804D5: psrlq xmm7, xmm4 */
    { xmm_t _s = _xmm[5]; for (int _k = 0; _k < 4; _k++) _xmm[1].u32[_k] = (_xmm[1].i32[_k] > _s.i32[_k]) ? (uint32_t)~0u : 0; } /* 0x007804D9: pcmpgtd xmm1, xmm5 */
    _xmm[1] = recomp_punpckldq(_xmm[1], _xmm[1]); /* 0x007804DD: punpckldq xmm1, xmm1 */
    { xmm_t _s = _xmm[1]; for (int _k = 0; _k < 4; _k++) _xmm[3].u32[_k] = _xmm[3].u32[_k] & _s.u32[_k]; } /* 0x007804E1: pand xmm3, xmm1 */
    { xmm_t _s = _xmm[7]; for (int _k = 0; _k < 4; _k++) _xmm[1].u32[_k] = ~_xmm[1].u32[_k] & _s.u32[_k]; } /* 0x007804E5: pandn xmm1, xmm7 */
    { xmm_t _s = _xmm[3]; for (int _k = 0; _k < 4; _k++) _xmm[1].u32[_k] = _xmm[1].u32[_k] | _s.u32[_k]; } /* 0x007804E9: por xmm1, xmm3 */
    { xmm_t _s = _xmm[5]; for (int _k = 0; _k < 4; _k++) _xmm[5].u32[_k] = _xmm[5].u32[_k] ^ _s.u32[_k]; } /* 0x007804ED: pxor xmm5, xmm5 */
    { xmm_t _s = _xmm[1]; for (int _k = 0; _k < 2; _k++) _xmm[5].u64[_k] -= _s.u64[_k]; } /* 0x007804F1: psubq xmm5, xmm1 */
    { xmm_t _s = _xmm[6]; for (int _k = 0; _k < 4; _k++) _xmm[1].u32[_k] = _xmm[1].u32[_k] & _s.u32[_k]; } /* 0x007804F5: pand xmm1, xmm6 */
    { xmm_t _s = _xmm[5]; for (int _k = 0; _k < 4; _k++) _xmm[6].u32[_k] = ~_xmm[6].u32[_k] & _s.u32[_k]; } /* 0x007804F9: pandn xmm6, xmm5 */
    { xmm_t _s = _xmm[1]; for (int _k = 0; _k < 4; _k++) _xmm[6].u32[_k] = _xmm[6].u32[_k] | _s.u32[_k]; } /* 0x007804FD: por xmm6, xmm1 */
    eax = _xmm[4].u32[0]; /* 0x00780501: movd eax, xmm4 */
    /* cmp eax, 0 */ /* 0x00780505: cmp eax, 0 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_LE(_flag_a, _flag_b)) goto L_0078052D; /* 0x00780508: jle 0x78052d */
L_0078050A:
    { uint64_t _c = _xmm[4].u64[0]; for (int _k = 0; _k < 2; _k++) _xmm[7].u64[_k] = _c > 63 ? 0 : (uint64_t)(_xmm[7].u64[_k] << _c); } /* 0x0078050A: psllq xmm7, xmm4 */
    { xmm_t _s = _xmm[7]; for (int _k = 0; _k < 4; _k++) _xmm[2].u32[_k] = _xmm[2].u32[_k] ^ _s.u32[_k]; } /* 0x0078050E: pxor xmm2, xmm7 */
    eax = _xmm[2].u32[0]; /* 0x00780512: movd eax, xmm2 */
    { xmm_t _s = _xmm[2]; for (int _k = 0; _k < 16; _k++) _xmm[2].u8[_k] = (_k + 4 >= 0 && _k + 4 < 16) ? _s.u8[_k + 4] : 0; } /* 0x00780516: psrldq xmm2, 4 */
    edx = _xmm[2].u32[0]; /* 0x0078051B: movd edx, xmm2 */
    _flag_a = (uint32_t)((eax | edx)); _flag_b = (uint32_t)((eax | edx));
    eax = eax | edx; /* 0x0078051F: or eax, edx */
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_0078052D; /* 0x00780521: je 0x78052d */
L_00780523:
    edx = 0x10u; /* 0x00780523: mov edx, 0x10 */
    RECOMP_CALL(sub_0078054D); /* 0x00780528: call 0x78054d */
    RECOMP_FLAGS_IN();
L_0078052D:
    eax = _xmm[6].u32[0]; /* 0x0078052D: movd eax, xmm6 */
    { xmm_t _s = _xmm[6]; for (int _k = 0; _k < 16; _k++) _xmm[6].u8[_k] = (_k + 4 >= 0 && _k + 4 < 16) ? _s.u8[_k + 4] : 0; } /* 0x00780531: psrldq xmm6, 4 */
    edx = _xmm[6].u32[0]; /* 0x00780536: movd edx, xmm6 */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x0078053A: ret  */
L_0078053B:
    edx = 8; /* 0x0078053B: mov edx, 8 */
    RECOMP_CALL(sub_0078054D); /* 0x00780540: call 0x78054d */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x00780545: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    edx = 0x80000000u; /* 0x00780547: mov edx, 0x80000000 */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x0078054C: ret  */
L_00780591:
    ecx = 1; /* 0x00780591: mov ecx, 1 */
    _xmm[5].u64[0] = MEM64(0x809D98); _xmm[5].u64[1] = 0; /* 0x00780596: movsd xmm5, qword ptr [0x809d98] */
    goto L_007805BC; /* 0x0078059E: jmp 0x7805bc */
L_007805BC:
    _xmm[1] = _xmm[0]; /* 0x007805BC: movdqa xmm1, xmm0 */
    { xmm_t _s = _xmm[1]; for (int _k = 0; _k < 16; _k++) _xmm[1].u8[_k] = (_k + 4 >= 0 && _k + 4 < 16) ? _s.u8[_k + 4] : 0; } /* 0x007805C0: psrldq xmm1, 4 */
    eax = _xmm[1].u32[0]; /* 0x007805C5: movd eax, xmm1 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x7FFFFFFFu);
    eax = eax & 0x7FFFFFFFu; /* 0x007805C9: and eax, 0x7fffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp eax, 0x7FF00000u */ /* 0x007805CE: cmp eax, 0x7ff00000 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x7FF00000u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_AE(_flag_a, _flag_b)) goto L_0078053B; /* 0x007805D3: jae 0x78053b */
L_007805D9:
    /* cmp ecx, 1 */ /* 0x007805D9: cmp ecx, 1 */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_EQ(_flag_a, _flag_b)) goto L_007803F3; /* 0x007805DC: je 0x7803f3 */
L_007805E2:
    _xmm[1] = _xmm[0]; /* 0x007805E2: movdqa xmm1, xmm0 */
    { uint64_t _c = 1u; for (int _k = 0; _k < 2; _k++) _xmm[1].u64[_k] = _c > 63 ? 0 : (uint64_t)(_xmm[1].u64[_k] << _c); } /* 0x007805E6: psllq xmm1, 1 */
    { uint64_t _c = 1u; for (int _k = 0; _k < 2; _k++) _xmm[1].u64[_k] = _c > 63 ? 0 : (uint64_t)(_xmm[1].u64[_k] >> _c); } /* 0x007805EB: psrlq xmm1, 1 */
    _xmm[2].u64[0] = MEM64(0x809DA8); _xmm[2].u64[1] = 0; /* 0x007805F0: movsd xmm2, qword ptr [0x809da8] */
    _flag_a = SSE_COMI(_xmm[1].f64[0], _xmm[2].f64[0]); _flag_b = 0; _cf = _flag_a & 1u; /* 0x007805F8: comisd xmm1, xmm2 */
    _flag_k = FK_EFLAGS;
    if (recomp_cond(FK_EFLAGS, _flag_a, 0, CC_BE)) goto L_0078062D; /* 0x007805FC: jbe 0x78062d */
L_007805FE:
    /* cmp ecx, 4 */ /* 0x007805FE: cmp ecx, 4 */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_00780619; /* 0x00780601: je 0x780619 */
L_00780603:
    edx = 1; /* 0x00780603: mov edx, 1 */
    RECOMP_CALL(sub_0078054D); /* 0x00780608: call 0x78054d */
    RECOMP_FLAGS_IN();
    edx = 0x10u; /* 0x0078060D: mov edx, 0x10 */
    RECOMP_CALL(sub_0078054D); /* 0x00780612: call 0x78054d */
    RECOMP_FLAGS_IN();
    goto L_0078062D; /* 0x00780617: jmp 0x78062d */
L_00780619:
    edx = 0x10u; /* 0x00780619: mov edx, 0x10 */
    RECOMP_CALL(sub_0078054D); /* 0x0078061E: call 0x78054d */
    RECOMP_FLAGS_IN();
    edx = 1; /* 0x00780623: mov edx, 1 */
    RECOMP_CALL(sub_0078054D); /* 0x00780628: call 0x78054d */
    RECOMP_FLAGS_IN();
L_0078062D:
    _xmm[2].u64[0] = MEM64(0x809DB0); _xmm[2].u64[1] = 0; /* 0x0078062D: movsd xmm2, qword ptr [0x809db0] */
    _flag_a = SSE_COMI(_xmm[1].f64[0], _xmm[2].f64[0]); _flag_b = 0; _cf = _flag_a & 1u; /* 0x00780635: comisd xmm1, xmm2 */
    _flag_k = FK_EFLAGS;
    if (recomp_cond(FK_EFLAGS, _flag_a, 0, CC_AE)) goto L_00780662; /* 0x00780639: jae 0x780662 */
L_0078063B:
    { xmm_t _s = _xmm[2]; for (int _k = 0; _k < 4; _k++) _xmm[2].u32[_k] = _xmm[2].u32[_k] ^ _s.u32[_k]; } /* 0x0078063B: xorpd xmm2, xmm2 */
    _flag_a = SSE_COMI(_xmm[1].f64[0], _xmm[2].f64[0]); _flag_b = 0; _cf = _flag_a & 1u; /* 0x0078063F: comisd xmm1, xmm2 */
    _flag_k = FK_EFLAGS;
    RECOMP_BACKEDGE();
    if (recomp_cond(FK_EFLAGS, _flag_a, 0, CC_E)) goto L_00780479; /* 0x00780643: je 0x780479 */
L_00780649:
    edx = 2; /* 0x00780649: mov edx, 2 */
    RECOMP_CALL(sub_0078054D); /* 0x0078064E: call 0x78054d */
    RECOMP_FLAGS_IN();
    edx = 0x10u; /* 0x00780653: mov edx, 0x10 */
    RECOMP_CALL(sub_0078054D); /* 0x00780658: call 0x78054d */
    RECOMP_FLAGS_IN();
    RECOMP_BACKEDGE();
    goto L_00780479; /* 0x0078065D: jmp 0x780479 */
L_00780662:
    _xmm[3] = _xmm[0]; /* 0x00780662: movdqa xmm3, xmm0 */
    /* cmp ecx, 4 */ /* 0x00780666: cmp ecx, 4 */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_0078067D; /* 0x00780669: jne 0x78067d */
L_0078066B:
    _xmm[2].u64[0] = MEM64(0x809D98); _xmm[2].u64[1] = 0; /* 0x0078066B: movsd xmm2, qword ptr [0x809d98] */
    _flag_a = SSE_COMI(_xmm[3].f64[0], _xmm[2].f64[0]); _flag_b = 0; _cf = _flag_a & 1u; /* 0x00780673: comisd xmm3, xmm2 */
    _flag_k = FK_EFLAGS;
    if (recomp_cond(FK_EFLAGS, _flag_a, 0, CC_B)) goto L_0078067D; /* 0x00780677: jb 0x78067d */
L_00780679:
    { double _s0 = _xmm[2].f64[0]; double _s1 = _xmm[2].f64[1]; xmm_t _d = _xmm[3]; _d.f64[0] = (double)(_d.f64[0] - _s0); _d.f64[1] = (double)(_d.f64[1] - _s1); _xmm[3] = _d; } /* 0x00780679: subpd xmm3, xmm2 */
L_0078067D:
    _xmm[4] = _xmm[3]; /* 0x0078067D: movdqa xmm4, xmm3 */
    { uint64_t _c = 35u; for (int _k = 0; _k < 2; _k++) _xmm[4].u64[_k] = _c > 63 ? 0 : (uint64_t)(_xmm[4].u64[_k] << _c); } /* 0x00780681: psllq xmm4, 0x23 */
    { uint64_t _c = 35u; for (int _k = 0; _k < 2; _k++) _xmm[4].u64[_k] = _c > 63 ? 0 : (uint64_t)(_xmm[4].u64[_k] >> _c); } /* 0x00780686: psrlq xmm4, 0x23 */
    eax = _xmm[4].u32[0]; /* 0x0078068B: movd eax, xmm4 */
    _flag_a = (uint32_t)((eax | eax)); _flag_b = (uint32_t)((eax | eax));
    eax = eax | eax; /* 0x0078068F: or eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_0078069D; /* 0x00780691: je 0x78069d */
L_00780693:
    edx = 0x10u; /* 0x00780693: mov edx, 0x10 */
    RECOMP_CALL(sub_0078054D); /* 0x00780698: call 0x78054d */
    RECOMP_FLAGS_IN();
L_0078069D:
    _flag_a = SSE_COMI(_xmm[0].f64[0], _xmm[5].f64[0]); _flag_b = 0; _cf = _flag_a & 1u; /* 0x0078069D: comisd xmm0, xmm5 */
    _flag_k = FK_EFLAGS;
    RECOMP_BACKEDGE();
    if (recomp_cond(FK_EFLAGS, _flag_a, 0, CC_AE)) goto L_0078053B; /* 0x007806A1: jae 0x78053b */
L_007806A7:
    _xmm[2].u64[0] = MEM64(0x809D90); _xmm[2].u64[1] = 0; /* 0x007806A7: movsd xmm2, qword ptr [0x809d90] */
    _flag_a = SSE_COMI(_xmm[0].f64[0], _xmm[2].f64[0]); _flag_b = 0; _cf = _flag_a & 1u; /* 0x007806AF: comisd xmm0, xmm2 */
    _flag_k = FK_EFLAGS;
    RECOMP_BACKEDGE();
    if (recomp_cond(FK_EFLAGS, _flag_a, 0, CC_B)) goto L_0078053B; /* 0x007806B3: jb 0x78053b */
L_007806B9:
    RECOMP_BACKEDGE();
    goto L_00780479; /* 0x007806B9: jmp 0x780479 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    RECOMP_REGS_OUT();
}

void sub_007805A0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007805A0u);

    goto L_007805A0;
L_007803F3:
    /* cmp ecx, 2 */ /* 0x007803F3: cmp ecx, 2 */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_00780410; /* 0x007803F6: jne 0x780410 */
L_007803F8:
    _xmm[2].u64[0] = MEM64(0x809DB8); _xmm[2].u64[1] = 0; /* 0x007803F8: movsd xmm2, qword ptr [0x809db8] */
    _flag_a = SSE_COMI(_xmm[0].f64[0], _xmm[2].f64[0]); _flag_b = 0; _cf = _flag_a & 1u; /* 0x00780400: comisd xmm0, xmm2 */
    _flag_k = FK_EFLAGS;
    if (recomp_cond(FK_EFLAGS, _flag_a, 0, CC_BE)) goto L_00780410; /* 0x00780404: jbe 0x780410 */
L_00780406:
    edx = 0x10u; /* 0x00780406: mov edx, 0x10 */
    RECOMP_CALL(sub_0078054D); /* 0x0078040B: call 0x78054d */
    RECOMP_FLAGS_IN();
L_00780410:
    _flag_a = SSE_COMI(_xmm[0].f64[0], _xmm[5].f64[0]); _flag_b = 0; _cf = _flag_a & 1u; /* 0x00780410: comisd xmm0, xmm5 */
    _flag_k = FK_EFLAGS;
    if (recomp_cond(FK_EFLAGS, _flag_a, 0, CC_AE)) goto L_0078053B; /* 0x00780414: jae 0x78053b */
L_0078041A:
    _xmm[6].u64[0] = MEM64(0x809D90); _xmm[6].u64[1] = 0; /* 0x0078041A: movsd xmm6, qword ptr [0x809d90] */
    _flag_a = SSE_COMI(_xmm[0].f64[0], _xmm[6].f64[0]); _flag_b = 0; _cf = _flag_a & 1u; /* 0x00780422: comisd xmm0, xmm6 */
    _flag_k = FK_EFLAGS;
    if (recomp_cond(FK_EFLAGS, _flag_a, 0, CC_B)) goto L_0078053B; /* 0x00780426: jb 0x78053b */
L_0078042C:
    _xmm[1] = _xmm[0]; /* 0x0078042C: movdqa xmm1, xmm0 */
    { uint64_t _c = 1u; for (int _k = 0; _k < 2; _k++) _xmm[1].u64[_k] = _c > 63 ? 0 : (uint64_t)(_xmm[1].u64[_k] << _c); } /* 0x00780430: psllq xmm1, 1 */
    { uint64_t _c = 1u; for (int _k = 0; _k < 2; _k++) _xmm[1].u64[_k] = _c > 63 ? 0 : (uint64_t)(_xmm[1].u64[_k] >> _c); } /* 0x00780435: psrlq xmm1, 1 */
    /* cmp ecx, 1 */ /* 0x0078043A: cmp ecx, 1 */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_00780479; /* 0x0078043D: je 0x780479 */
L_0078043F:
    _xmm[2].u64[0] = MEM64(0x809DB0); _xmm[2].u64[1] = 0; /* 0x0078043F: movsd xmm2, qword ptr [0x809db0] */
    _flag_a = SSE_COMI(_xmm[1].f64[0], _xmm[2].f64[0]); _flag_b = 0; _cf = _flag_a & 1u; /* 0x00780447: comisd xmm1, xmm2 */
    _flag_k = FK_EFLAGS;
    if (recomp_cond(FK_EFLAGS, _flag_a, 0, CC_A)) goto L_00780479; /* 0x0078044B: ja 0x780479 */
L_0078044D:
    { xmm_t _s = _xmm[2]; for (int _k = 0; _k < 4; _k++) _xmm[2].u32[_k] = _xmm[2].u32[_k] ^ _s.u32[_k]; } /* 0x0078044D: xorpd xmm2, xmm2 */
    _flag_a = SSE_COMI(_xmm[1].f64[0], _xmm[2].f64[0]); _flag_b = 0; _cf = _flag_a & 1u; /* 0x00780451: comisd xmm1, xmm2 */
    _flag_k = FK_EFLAGS;
    if (recomp_cond(FK_EFLAGS, _flag_a, 0, CC_E)) goto L_00780479; /* 0x00780455: je 0x780479 */
L_00780457:
    PUSH32(esp, eax); /* 0x00780457: push eax */
    /* fwait */ /* 0x00780458: wait  */
    MEM16(esp) = _fpu_cw; /* 0x00780459: fnstcw word ptr [esp] */
    SET_LO16(eax, MEM16(esp)); /* 0x0078045C: mov ax, word ptr [esp] */
    /* test LO16(eax), 0x10u */ /* 0x00780460: test ax, 0x10 */
    _flag_a = (uint32_t)(LO16(eax)) << 16; _flag_b = (uint32_t)(0x10u) << 16;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 16);
    eax = POP32_VAL(esp); /* 0x00780464: pop eax */
    if (TEST_NZ(_flag_a, _flag_b)) goto L_00780479; /* 0x00780465: jne 0x780479 */
L_00780467:
    edx = 2; /* 0x00780467: mov edx, 2 */
    RECOMP_CALL(sub_0078054D); /* 0x0078046C: call 0x78054d */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x00780471: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    edx = 0x80000000u; /* 0x00780473: mov edx, 0x80000000 */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x00780478: ret  */
L_00780479:
    { xmm_t _s = _xmm[6]; for (int _k = 0; _k < 4; _k++) _xmm[6].u32[_k] = _xmm[6].u32[_k] ^ _s.u32[_k]; } /* 0x00780479: xorpd xmm6, xmm6 */
    _flag_a = SSE_COMI(_xmm[1].f64[0], _xmm[6].f64[0]); _flag_b = 0; _cf = _flag_a & 1u; /* 0x0078047D: comisd xmm1, xmm6 */
    _flag_k = FK_EFLAGS;
    if (recomp_cond(FK_EFLAGS, _flag_a, 0, CC_E)) goto L_0078052D; /* 0x00780481: je 0x78052d */
L_00780487:
    _xmm[3].u64[0] = MEM64(0x809D70); _xmm[3].u64[1] = 0; /* 0x00780487: movsd xmm3, qword ptr [0x809d70] */
    _xmm[4].u64[0] = MEM64(0x809D78); _xmm[4].u64[1] = 0; /* 0x0078048F: movsd xmm4, qword ptr [0x809d78] */
    _xmm[5].u64[0] = (uint32_t)(MEM32(0x809DD0)); _xmm[5].u64[1] = 0; /* 0x00780497: movd xmm5, dword ptr [0x809dd0] */
    _xmm[6] = _xmm[0]; /* 0x0078049F: movdqa xmm6, xmm0 */
    { double _s0 = _xmm[1].f64[0]; _xmm[6].u64[0] = (uint64_t)(int64_t)(int32_t)sse_cmp_pred(_xmm[6].f64[0], _s0, 0); } /* 0x007804A3: cmpeqsd xmm6, xmm1 */
    _xmm[2] = _xmm[1]; /* 0x007804A8: movdqa xmm2, xmm1 */
    { xmm_t _s = _xmm[3]; for (int _k = 0; _k < 4; _k++) _xmm[2].u32[_k] = _xmm[2].u32[_k] & _s.u32[_k]; } /* 0x007804AC: pand xmm2, xmm3 */
    { xmm_t _s = _xmm[4]; for (int _k = 0; _k < 4; _k++) _xmm[2].u32[_k] = _xmm[2].u32[_k] | _s.u32[_k]; } /* 0x007804B0: por xmm2, xmm4 */
    { uint64_t _c = 52u; for (int _k = 0; _k < 2; _k++) _xmm[1].u64[_k] = _c > 63 ? 0 : (uint64_t)(_xmm[1].u64[_k] >> _c); } /* 0x007804B4: psrlq xmm1, 0x34 */
    _xmm[4] = _xmm[1]; /* 0x007804B9: movdqa xmm4, xmm1 */
    { xmm_t _s = _xmm[5]; for (int _k = 0; _k < 2; _k++) _xmm[4].u64[_k] -= _s.u64[_k]; } /* 0x007804BD: psubq xmm4, xmm5 */
    _xmm[3] = _xmm[2]; /* 0x007804C1: movdqa xmm3, xmm2 */
    { uint64_t _c = _xmm[4].u64[0]; for (int _k = 0; _k < 2; _k++) _xmm[3].u64[_k] = _c > 63 ? 0 : (uint64_t)(_xmm[3].u64[_k] << _c); } /* 0x007804C5: psllq xmm3, xmm4 */
    _xmm[4] = _xmm[5]; /* 0x007804C9: movdqa xmm4, xmm5 */
    { xmm_t _s = _xmm[1]; for (int _k = 0; _k < 2; _k++) _xmm[4].u64[_k] -= _s.u64[_k]; } /* 0x007804CD: psubq xmm4, xmm1 */
    _xmm[7] = _xmm[2]; /* 0x007804D1: movdqa xmm7, xmm2 */
    { uint64_t _c = _xmm[4].u64[0]; for (int _k = 0; _k < 2; _k++) _xmm[7].u64[_k] = _c > 63 ? 0 : (uint64_t)(_xmm[7].u64[_k] >> _c); } /* 0x007804D5: psrlq xmm7, xmm4 */
    { xmm_t _s = _xmm[5]; for (int _k = 0; _k < 4; _k++) _xmm[1].u32[_k] = (_xmm[1].i32[_k] > _s.i32[_k]) ? (uint32_t)~0u : 0; } /* 0x007804D9: pcmpgtd xmm1, xmm5 */
    _xmm[1] = recomp_punpckldq(_xmm[1], _xmm[1]); /* 0x007804DD: punpckldq xmm1, xmm1 */
    { xmm_t _s = _xmm[1]; for (int _k = 0; _k < 4; _k++) _xmm[3].u32[_k] = _xmm[3].u32[_k] & _s.u32[_k]; } /* 0x007804E1: pand xmm3, xmm1 */
    { xmm_t _s = _xmm[7]; for (int _k = 0; _k < 4; _k++) _xmm[1].u32[_k] = ~_xmm[1].u32[_k] & _s.u32[_k]; } /* 0x007804E5: pandn xmm1, xmm7 */
    { xmm_t _s = _xmm[3]; for (int _k = 0; _k < 4; _k++) _xmm[1].u32[_k] = _xmm[1].u32[_k] | _s.u32[_k]; } /* 0x007804E9: por xmm1, xmm3 */
    { xmm_t _s = _xmm[5]; for (int _k = 0; _k < 4; _k++) _xmm[5].u32[_k] = _xmm[5].u32[_k] ^ _s.u32[_k]; } /* 0x007804ED: pxor xmm5, xmm5 */
    { xmm_t _s = _xmm[1]; for (int _k = 0; _k < 2; _k++) _xmm[5].u64[_k] -= _s.u64[_k]; } /* 0x007804F1: psubq xmm5, xmm1 */
    { xmm_t _s = _xmm[6]; for (int _k = 0; _k < 4; _k++) _xmm[1].u32[_k] = _xmm[1].u32[_k] & _s.u32[_k]; } /* 0x007804F5: pand xmm1, xmm6 */
    { xmm_t _s = _xmm[5]; for (int _k = 0; _k < 4; _k++) _xmm[6].u32[_k] = ~_xmm[6].u32[_k] & _s.u32[_k]; } /* 0x007804F9: pandn xmm6, xmm5 */
    { xmm_t _s = _xmm[1]; for (int _k = 0; _k < 4; _k++) _xmm[6].u32[_k] = _xmm[6].u32[_k] | _s.u32[_k]; } /* 0x007804FD: por xmm6, xmm1 */
    eax = _xmm[4].u32[0]; /* 0x00780501: movd eax, xmm4 */
    /* cmp eax, 0 */ /* 0x00780505: cmp eax, 0 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_LE(_flag_a, _flag_b)) goto L_0078052D; /* 0x00780508: jle 0x78052d */
L_0078050A:
    { uint64_t _c = _xmm[4].u64[0]; for (int _k = 0; _k < 2; _k++) _xmm[7].u64[_k] = _c > 63 ? 0 : (uint64_t)(_xmm[7].u64[_k] << _c); } /* 0x0078050A: psllq xmm7, xmm4 */
    { xmm_t _s = _xmm[7]; for (int _k = 0; _k < 4; _k++) _xmm[2].u32[_k] = _xmm[2].u32[_k] ^ _s.u32[_k]; } /* 0x0078050E: pxor xmm2, xmm7 */
    eax = _xmm[2].u32[0]; /* 0x00780512: movd eax, xmm2 */
    { xmm_t _s = _xmm[2]; for (int _k = 0; _k < 16; _k++) _xmm[2].u8[_k] = (_k + 4 >= 0 && _k + 4 < 16) ? _s.u8[_k + 4] : 0; } /* 0x00780516: psrldq xmm2, 4 */
    edx = _xmm[2].u32[0]; /* 0x0078051B: movd edx, xmm2 */
    _flag_a = (uint32_t)((eax | edx)); _flag_b = (uint32_t)((eax | edx));
    eax = eax | edx; /* 0x0078051F: or eax, edx */
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_0078052D; /* 0x00780521: je 0x78052d */
L_00780523:
    edx = 0x10u; /* 0x00780523: mov edx, 0x10 */
    RECOMP_CALL(sub_0078054D); /* 0x00780528: call 0x78054d */
    RECOMP_FLAGS_IN();
L_0078052D:
    eax = _xmm[6].u32[0]; /* 0x0078052D: movd eax, xmm6 */
    { xmm_t _s = _xmm[6]; for (int _k = 0; _k < 16; _k++) _xmm[6].u8[_k] = (_k + 4 >= 0 && _k + 4 < 16) ? _s.u8[_k + 4] : 0; } /* 0x00780531: psrldq xmm6, 4 */
    edx = _xmm[6].u32[0]; /* 0x00780536: movd edx, xmm6 */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x0078053A: ret  */
L_0078053B:
    edx = 8; /* 0x0078053B: mov edx, 8 */
    RECOMP_CALL(sub_0078054D); /* 0x00780540: call 0x78054d */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x00780545: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    edx = 0x80000000u; /* 0x00780547: mov edx, 0x80000000 */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x0078054C: ret  */
L_007805A0:
    ecx = 4; /* 0x007805A0: mov ecx, 4 */
    _xmm[5].u64[0] = MEM64(0x809DA0); _xmm[5].u64[1] = 0; /* 0x007805A5: movsd xmm5, qword ptr [0x809da0] */
    goto L_007805BC; /* 0x007805AD: jmp 0x7805bc */
L_007805BC:
    _xmm[1] = _xmm[0]; /* 0x007805BC: movdqa xmm1, xmm0 */
    { xmm_t _s = _xmm[1]; for (int _k = 0; _k < 16; _k++) _xmm[1].u8[_k] = (_k + 4 >= 0 && _k + 4 < 16) ? _s.u8[_k + 4] : 0; } /* 0x007805C0: psrldq xmm1, 4 */
    eax = _xmm[1].u32[0]; /* 0x007805C5: movd eax, xmm1 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x7FFFFFFFu);
    eax = eax & 0x7FFFFFFFu; /* 0x007805C9: and eax, 0x7fffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp eax, 0x7FF00000u */ /* 0x007805CE: cmp eax, 0x7ff00000 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x7FF00000u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_AE(_flag_a, _flag_b)) goto L_0078053B; /* 0x007805D3: jae 0x78053b */
L_007805D9:
    /* cmp ecx, 1 */ /* 0x007805D9: cmp ecx, 1 */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_EQ(_flag_a, _flag_b)) goto L_007803F3; /* 0x007805DC: je 0x7803f3 */
L_007805E2:
    _xmm[1] = _xmm[0]; /* 0x007805E2: movdqa xmm1, xmm0 */
    { uint64_t _c = 1u; for (int _k = 0; _k < 2; _k++) _xmm[1].u64[_k] = _c > 63 ? 0 : (uint64_t)(_xmm[1].u64[_k] << _c); } /* 0x007805E6: psllq xmm1, 1 */
    { uint64_t _c = 1u; for (int _k = 0; _k < 2; _k++) _xmm[1].u64[_k] = _c > 63 ? 0 : (uint64_t)(_xmm[1].u64[_k] >> _c); } /* 0x007805EB: psrlq xmm1, 1 */
    _xmm[2].u64[0] = MEM64(0x809DA8); _xmm[2].u64[1] = 0; /* 0x007805F0: movsd xmm2, qword ptr [0x809da8] */
    _flag_a = SSE_COMI(_xmm[1].f64[0], _xmm[2].f64[0]); _flag_b = 0; _cf = _flag_a & 1u; /* 0x007805F8: comisd xmm1, xmm2 */
    _flag_k = FK_EFLAGS;
    if (recomp_cond(FK_EFLAGS, _flag_a, 0, CC_BE)) goto L_0078062D; /* 0x007805FC: jbe 0x78062d */
L_007805FE:
    /* cmp ecx, 4 */ /* 0x007805FE: cmp ecx, 4 */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_00780619; /* 0x00780601: je 0x780619 */
L_00780603:
    edx = 1; /* 0x00780603: mov edx, 1 */
    RECOMP_CALL(sub_0078054D); /* 0x00780608: call 0x78054d */
    RECOMP_FLAGS_IN();
    edx = 0x10u; /* 0x0078060D: mov edx, 0x10 */
    RECOMP_CALL(sub_0078054D); /* 0x00780612: call 0x78054d */
    RECOMP_FLAGS_IN();
    goto L_0078062D; /* 0x00780617: jmp 0x78062d */
L_00780619:
    edx = 0x10u; /* 0x00780619: mov edx, 0x10 */
    RECOMP_CALL(sub_0078054D); /* 0x0078061E: call 0x78054d */
    RECOMP_FLAGS_IN();
    edx = 1; /* 0x00780623: mov edx, 1 */
    RECOMP_CALL(sub_0078054D); /* 0x00780628: call 0x78054d */
    RECOMP_FLAGS_IN();
L_0078062D:
    _xmm[2].u64[0] = MEM64(0x809DB0); _xmm[2].u64[1] = 0; /* 0x0078062D: movsd xmm2, qword ptr [0x809db0] */
    _flag_a = SSE_COMI(_xmm[1].f64[0], _xmm[2].f64[0]); _flag_b = 0; _cf = _flag_a & 1u; /* 0x00780635: comisd xmm1, xmm2 */
    _flag_k = FK_EFLAGS;
    if (recomp_cond(FK_EFLAGS, _flag_a, 0, CC_AE)) goto L_00780662; /* 0x00780639: jae 0x780662 */
L_0078063B:
    { xmm_t _s = _xmm[2]; for (int _k = 0; _k < 4; _k++) _xmm[2].u32[_k] = _xmm[2].u32[_k] ^ _s.u32[_k]; } /* 0x0078063B: xorpd xmm2, xmm2 */
    _flag_a = SSE_COMI(_xmm[1].f64[0], _xmm[2].f64[0]); _flag_b = 0; _cf = _flag_a & 1u; /* 0x0078063F: comisd xmm1, xmm2 */
    _flag_k = FK_EFLAGS;
    RECOMP_BACKEDGE();
    if (recomp_cond(FK_EFLAGS, _flag_a, 0, CC_E)) goto L_00780479; /* 0x00780643: je 0x780479 */
L_00780649:
    edx = 2; /* 0x00780649: mov edx, 2 */
    RECOMP_CALL(sub_0078054D); /* 0x0078064E: call 0x78054d */
    RECOMP_FLAGS_IN();
    edx = 0x10u; /* 0x00780653: mov edx, 0x10 */
    RECOMP_CALL(sub_0078054D); /* 0x00780658: call 0x78054d */
    RECOMP_FLAGS_IN();
    RECOMP_BACKEDGE();
    goto L_00780479; /* 0x0078065D: jmp 0x780479 */
L_00780662:
    _xmm[3] = _xmm[0]; /* 0x00780662: movdqa xmm3, xmm0 */
    /* cmp ecx, 4 */ /* 0x00780666: cmp ecx, 4 */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_0078067D; /* 0x00780669: jne 0x78067d */
L_0078066B:
    _xmm[2].u64[0] = MEM64(0x809D98); _xmm[2].u64[1] = 0; /* 0x0078066B: movsd xmm2, qword ptr [0x809d98] */
    _flag_a = SSE_COMI(_xmm[3].f64[0], _xmm[2].f64[0]); _flag_b = 0; _cf = _flag_a & 1u; /* 0x00780673: comisd xmm3, xmm2 */
    _flag_k = FK_EFLAGS;
    if (recomp_cond(FK_EFLAGS, _flag_a, 0, CC_B)) goto L_0078067D; /* 0x00780677: jb 0x78067d */
L_00780679:
    { double _s0 = _xmm[2].f64[0]; double _s1 = _xmm[2].f64[1]; xmm_t _d = _xmm[3]; _d.f64[0] = (double)(_d.f64[0] - _s0); _d.f64[1] = (double)(_d.f64[1] - _s1); _xmm[3] = _d; } /* 0x00780679: subpd xmm3, xmm2 */
L_0078067D:
    _xmm[4] = _xmm[3]; /* 0x0078067D: movdqa xmm4, xmm3 */
    { uint64_t _c = 35u; for (int _k = 0; _k < 2; _k++) _xmm[4].u64[_k] = _c > 63 ? 0 : (uint64_t)(_xmm[4].u64[_k] << _c); } /* 0x00780681: psllq xmm4, 0x23 */
    { uint64_t _c = 35u; for (int _k = 0; _k < 2; _k++) _xmm[4].u64[_k] = _c > 63 ? 0 : (uint64_t)(_xmm[4].u64[_k] >> _c); } /* 0x00780686: psrlq xmm4, 0x23 */
    eax = _xmm[4].u32[0]; /* 0x0078068B: movd eax, xmm4 */
    _flag_a = (uint32_t)((eax | eax)); _flag_b = (uint32_t)((eax | eax));
    eax = eax | eax; /* 0x0078068F: or eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_0078069D; /* 0x00780691: je 0x78069d */
L_00780693:
    edx = 0x10u; /* 0x00780693: mov edx, 0x10 */
    RECOMP_CALL(sub_0078054D); /* 0x00780698: call 0x78054d */
    RECOMP_FLAGS_IN();
L_0078069D:
    _flag_a = SSE_COMI(_xmm[0].f64[0], _xmm[5].f64[0]); _flag_b = 0; _cf = _flag_a & 1u; /* 0x0078069D: comisd xmm0, xmm5 */
    _flag_k = FK_EFLAGS;
    RECOMP_BACKEDGE();
    if (recomp_cond(FK_EFLAGS, _flag_a, 0, CC_AE)) goto L_0078053B; /* 0x007806A1: jae 0x78053b */
L_007806A7:
    _xmm[2].u64[0] = MEM64(0x809D90); _xmm[2].u64[1] = 0; /* 0x007806A7: movsd xmm2, qword ptr [0x809d90] */
    _flag_a = SSE_COMI(_xmm[0].f64[0], _xmm[2].f64[0]); _flag_b = 0; _cf = _flag_a & 1u; /* 0x007806AF: comisd xmm0, xmm2 */
    _flag_k = FK_EFLAGS;
    RECOMP_BACKEDGE();
    if (recomp_cond(FK_EFLAGS, _flag_a, 0, CC_B)) goto L_0078053B; /* 0x007806B3: jb 0x78053b */
L_007806B9:
    RECOMP_BACKEDGE();
    goto L_00780479; /* 0x007806B9: jmp 0x780479 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    RECOMP_REGS_OUT();
}

void sub_007805AF(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007805AFu);

    goto L_007805AF;
L_007803F3:
    /* cmp ecx, 2 */ /* 0x007803F3: cmp ecx, 2 */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_00780410; /* 0x007803F6: jne 0x780410 */
L_007803F8:
    _xmm[2].u64[0] = MEM64(0x809DB8); _xmm[2].u64[1] = 0; /* 0x007803F8: movsd xmm2, qword ptr [0x809db8] */
    _flag_a = SSE_COMI(_xmm[0].f64[0], _xmm[2].f64[0]); _flag_b = 0; _cf = _flag_a & 1u; /* 0x00780400: comisd xmm0, xmm2 */
    _flag_k = FK_EFLAGS;
    if (recomp_cond(FK_EFLAGS, _flag_a, 0, CC_BE)) goto L_00780410; /* 0x00780404: jbe 0x780410 */
L_00780406:
    edx = 0x10u; /* 0x00780406: mov edx, 0x10 */
    RECOMP_CALL(sub_0078054D); /* 0x0078040B: call 0x78054d */
    RECOMP_FLAGS_IN();
L_00780410:
    _flag_a = SSE_COMI(_xmm[0].f64[0], _xmm[5].f64[0]); _flag_b = 0; _cf = _flag_a & 1u; /* 0x00780410: comisd xmm0, xmm5 */
    _flag_k = FK_EFLAGS;
    if (recomp_cond(FK_EFLAGS, _flag_a, 0, CC_AE)) goto L_0078053B; /* 0x00780414: jae 0x78053b */
L_0078041A:
    _xmm[6].u64[0] = MEM64(0x809D90); _xmm[6].u64[1] = 0; /* 0x0078041A: movsd xmm6, qword ptr [0x809d90] */
    _flag_a = SSE_COMI(_xmm[0].f64[0], _xmm[6].f64[0]); _flag_b = 0; _cf = _flag_a & 1u; /* 0x00780422: comisd xmm0, xmm6 */
    _flag_k = FK_EFLAGS;
    if (recomp_cond(FK_EFLAGS, _flag_a, 0, CC_B)) goto L_0078053B; /* 0x00780426: jb 0x78053b */
L_0078042C:
    _xmm[1] = _xmm[0]; /* 0x0078042C: movdqa xmm1, xmm0 */
    { uint64_t _c = 1u; for (int _k = 0; _k < 2; _k++) _xmm[1].u64[_k] = _c > 63 ? 0 : (uint64_t)(_xmm[1].u64[_k] << _c); } /* 0x00780430: psllq xmm1, 1 */
    { uint64_t _c = 1u; for (int _k = 0; _k < 2; _k++) _xmm[1].u64[_k] = _c > 63 ? 0 : (uint64_t)(_xmm[1].u64[_k] >> _c); } /* 0x00780435: psrlq xmm1, 1 */
    /* cmp ecx, 1 */ /* 0x0078043A: cmp ecx, 1 */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_00780479; /* 0x0078043D: je 0x780479 */
L_0078043F:
    _xmm[2].u64[0] = MEM64(0x809DB0); _xmm[2].u64[1] = 0; /* 0x0078043F: movsd xmm2, qword ptr [0x809db0] */
    _flag_a = SSE_COMI(_xmm[1].f64[0], _xmm[2].f64[0]); _flag_b = 0; _cf = _flag_a & 1u; /* 0x00780447: comisd xmm1, xmm2 */
    _flag_k = FK_EFLAGS;
    if (recomp_cond(FK_EFLAGS, _flag_a, 0, CC_A)) goto L_00780479; /* 0x0078044B: ja 0x780479 */
L_0078044D:
    { xmm_t _s = _xmm[2]; for (int _k = 0; _k < 4; _k++) _xmm[2].u32[_k] = _xmm[2].u32[_k] ^ _s.u32[_k]; } /* 0x0078044D: xorpd xmm2, xmm2 */
    _flag_a = SSE_COMI(_xmm[1].f64[0], _xmm[2].f64[0]); _flag_b = 0; _cf = _flag_a & 1u; /* 0x00780451: comisd xmm1, xmm2 */
    _flag_k = FK_EFLAGS;
    if (recomp_cond(FK_EFLAGS, _flag_a, 0, CC_E)) goto L_00780479; /* 0x00780455: je 0x780479 */
L_00780457:
    PUSH32(esp, eax); /* 0x00780457: push eax */
    /* fwait */ /* 0x00780458: wait  */
    MEM16(esp) = _fpu_cw; /* 0x00780459: fnstcw word ptr [esp] */
    SET_LO16(eax, MEM16(esp)); /* 0x0078045C: mov ax, word ptr [esp] */
    /* test LO16(eax), 0x10u */ /* 0x00780460: test ax, 0x10 */
    _flag_a = (uint32_t)(LO16(eax)) << 16; _flag_b = (uint32_t)(0x10u) << 16;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 16);
    eax = POP32_VAL(esp); /* 0x00780464: pop eax */
    if (TEST_NZ(_flag_a, _flag_b)) goto L_00780479; /* 0x00780465: jne 0x780479 */
L_00780467:
    edx = 2; /* 0x00780467: mov edx, 2 */
    RECOMP_CALL(sub_0078054D); /* 0x0078046C: call 0x78054d */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x00780471: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    edx = 0x80000000u; /* 0x00780473: mov edx, 0x80000000 */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x00780478: ret  */
L_00780479:
    { xmm_t _s = _xmm[6]; for (int _k = 0; _k < 4; _k++) _xmm[6].u32[_k] = _xmm[6].u32[_k] ^ _s.u32[_k]; } /* 0x00780479: xorpd xmm6, xmm6 */
    _flag_a = SSE_COMI(_xmm[1].f64[0], _xmm[6].f64[0]); _flag_b = 0; _cf = _flag_a & 1u; /* 0x0078047D: comisd xmm1, xmm6 */
    _flag_k = FK_EFLAGS;
    if (recomp_cond(FK_EFLAGS, _flag_a, 0, CC_E)) goto L_0078052D; /* 0x00780481: je 0x78052d */
L_00780487:
    _xmm[3].u64[0] = MEM64(0x809D70); _xmm[3].u64[1] = 0; /* 0x00780487: movsd xmm3, qword ptr [0x809d70] */
    _xmm[4].u64[0] = MEM64(0x809D78); _xmm[4].u64[1] = 0; /* 0x0078048F: movsd xmm4, qword ptr [0x809d78] */
    _xmm[5].u64[0] = (uint32_t)(MEM32(0x809DD0)); _xmm[5].u64[1] = 0; /* 0x00780497: movd xmm5, dword ptr [0x809dd0] */
    _xmm[6] = _xmm[0]; /* 0x0078049F: movdqa xmm6, xmm0 */
    { double _s0 = _xmm[1].f64[0]; _xmm[6].u64[0] = (uint64_t)(int64_t)(int32_t)sse_cmp_pred(_xmm[6].f64[0], _s0, 0); } /* 0x007804A3: cmpeqsd xmm6, xmm1 */
    _xmm[2] = _xmm[1]; /* 0x007804A8: movdqa xmm2, xmm1 */
    { xmm_t _s = _xmm[3]; for (int _k = 0; _k < 4; _k++) _xmm[2].u32[_k] = _xmm[2].u32[_k] & _s.u32[_k]; } /* 0x007804AC: pand xmm2, xmm3 */
    { xmm_t _s = _xmm[4]; for (int _k = 0; _k < 4; _k++) _xmm[2].u32[_k] = _xmm[2].u32[_k] | _s.u32[_k]; } /* 0x007804B0: por xmm2, xmm4 */
    { uint64_t _c = 52u; for (int _k = 0; _k < 2; _k++) _xmm[1].u64[_k] = _c > 63 ? 0 : (uint64_t)(_xmm[1].u64[_k] >> _c); } /* 0x007804B4: psrlq xmm1, 0x34 */
    _xmm[4] = _xmm[1]; /* 0x007804B9: movdqa xmm4, xmm1 */
    { xmm_t _s = _xmm[5]; for (int _k = 0; _k < 2; _k++) _xmm[4].u64[_k] -= _s.u64[_k]; } /* 0x007804BD: psubq xmm4, xmm5 */
    _xmm[3] = _xmm[2]; /* 0x007804C1: movdqa xmm3, xmm2 */
    { uint64_t _c = _xmm[4].u64[0]; for (int _k = 0; _k < 2; _k++) _xmm[3].u64[_k] = _c > 63 ? 0 : (uint64_t)(_xmm[3].u64[_k] << _c); } /* 0x007804C5: psllq xmm3, xmm4 */
    _xmm[4] = _xmm[5]; /* 0x007804C9: movdqa xmm4, xmm5 */
    { xmm_t _s = _xmm[1]; for (int _k = 0; _k < 2; _k++) _xmm[4].u64[_k] -= _s.u64[_k]; } /* 0x007804CD: psubq xmm4, xmm1 */
    _xmm[7] = _xmm[2]; /* 0x007804D1: movdqa xmm7, xmm2 */
    { uint64_t _c = _xmm[4].u64[0]; for (int _k = 0; _k < 2; _k++) _xmm[7].u64[_k] = _c > 63 ? 0 : (uint64_t)(_xmm[7].u64[_k] >> _c); } /* 0x007804D5: psrlq xmm7, xmm4 */
    { xmm_t _s = _xmm[5]; for (int _k = 0; _k < 4; _k++) _xmm[1].u32[_k] = (_xmm[1].i32[_k] > _s.i32[_k]) ? (uint32_t)~0u : 0; } /* 0x007804D9: pcmpgtd xmm1, xmm5 */
    _xmm[1] = recomp_punpckldq(_xmm[1], _xmm[1]); /* 0x007804DD: punpckldq xmm1, xmm1 */
    { xmm_t _s = _xmm[1]; for (int _k = 0; _k < 4; _k++) _xmm[3].u32[_k] = _xmm[3].u32[_k] & _s.u32[_k]; } /* 0x007804E1: pand xmm3, xmm1 */
    { xmm_t _s = _xmm[7]; for (int _k = 0; _k < 4; _k++) _xmm[1].u32[_k] = ~_xmm[1].u32[_k] & _s.u32[_k]; } /* 0x007804E5: pandn xmm1, xmm7 */
    { xmm_t _s = _xmm[3]; for (int _k = 0; _k < 4; _k++) _xmm[1].u32[_k] = _xmm[1].u32[_k] | _s.u32[_k]; } /* 0x007804E9: por xmm1, xmm3 */
    { xmm_t _s = _xmm[5]; for (int _k = 0; _k < 4; _k++) _xmm[5].u32[_k] = _xmm[5].u32[_k] ^ _s.u32[_k]; } /* 0x007804ED: pxor xmm5, xmm5 */
    { xmm_t _s = _xmm[1]; for (int _k = 0; _k < 2; _k++) _xmm[5].u64[_k] -= _s.u64[_k]; } /* 0x007804F1: psubq xmm5, xmm1 */
    { xmm_t _s = _xmm[6]; for (int _k = 0; _k < 4; _k++) _xmm[1].u32[_k] = _xmm[1].u32[_k] & _s.u32[_k]; } /* 0x007804F5: pand xmm1, xmm6 */
    { xmm_t _s = _xmm[5]; for (int _k = 0; _k < 4; _k++) _xmm[6].u32[_k] = ~_xmm[6].u32[_k] & _s.u32[_k]; } /* 0x007804F9: pandn xmm6, xmm5 */
    { xmm_t _s = _xmm[1]; for (int _k = 0; _k < 4; _k++) _xmm[6].u32[_k] = _xmm[6].u32[_k] | _s.u32[_k]; } /* 0x007804FD: por xmm6, xmm1 */
    eax = _xmm[4].u32[0]; /* 0x00780501: movd eax, xmm4 */
    /* cmp eax, 0 */ /* 0x00780505: cmp eax, 0 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_LE(_flag_a, _flag_b)) goto L_0078052D; /* 0x00780508: jle 0x78052d */
L_0078050A:
    { uint64_t _c = _xmm[4].u64[0]; for (int _k = 0; _k < 2; _k++) _xmm[7].u64[_k] = _c > 63 ? 0 : (uint64_t)(_xmm[7].u64[_k] << _c); } /* 0x0078050A: psllq xmm7, xmm4 */
    { xmm_t _s = _xmm[7]; for (int _k = 0; _k < 4; _k++) _xmm[2].u32[_k] = _xmm[2].u32[_k] ^ _s.u32[_k]; } /* 0x0078050E: pxor xmm2, xmm7 */
    eax = _xmm[2].u32[0]; /* 0x00780512: movd eax, xmm2 */
    { xmm_t _s = _xmm[2]; for (int _k = 0; _k < 16; _k++) _xmm[2].u8[_k] = (_k + 4 >= 0 && _k + 4 < 16) ? _s.u8[_k + 4] : 0; } /* 0x00780516: psrldq xmm2, 4 */
    edx = _xmm[2].u32[0]; /* 0x0078051B: movd edx, xmm2 */
    _flag_a = (uint32_t)((eax | edx)); _flag_b = (uint32_t)((eax | edx));
    eax = eax | edx; /* 0x0078051F: or eax, edx */
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_0078052D; /* 0x00780521: je 0x78052d */
L_00780523:
    edx = 0x10u; /* 0x00780523: mov edx, 0x10 */
    RECOMP_CALL(sub_0078054D); /* 0x00780528: call 0x78054d */
    RECOMP_FLAGS_IN();
L_0078052D:
    eax = _xmm[6].u32[0]; /* 0x0078052D: movd eax, xmm6 */
    { xmm_t _s = _xmm[6]; for (int _k = 0; _k < 16; _k++) _xmm[6].u8[_k] = (_k + 4 >= 0 && _k + 4 < 16) ? _s.u8[_k + 4] : 0; } /* 0x00780531: psrldq xmm6, 4 */
    edx = _xmm[6].u32[0]; /* 0x00780536: movd edx, xmm6 */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x0078053A: ret  */
L_0078053B:
    edx = 8; /* 0x0078053B: mov edx, 8 */
    RECOMP_CALL(sub_0078054D); /* 0x00780540: call 0x78054d */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x00780545: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    edx = 0x80000000u; /* 0x00780547: mov edx, 0x80000000 */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x0078054C: ret  */
L_007805AF:
    ecx = 5; /* 0x007805AF: mov ecx, 5 */
    _xmm[5].u64[0] = MEM64(0x809D98); _xmm[5].u64[1] = 0; /* 0x007805B4: movsd xmm5, qword ptr [0x809d98] */
    _xmm[1] = _xmm[0]; /* 0x007805BC: movdqa xmm1, xmm0 */
    { xmm_t _s = _xmm[1]; for (int _k = 0; _k < 16; _k++) _xmm[1].u8[_k] = (_k + 4 >= 0 && _k + 4 < 16) ? _s.u8[_k + 4] : 0; } /* 0x007805C0: psrldq xmm1, 4 */
    eax = _xmm[1].u32[0]; /* 0x007805C5: movd eax, xmm1 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x7FFFFFFFu);
    eax = eax & 0x7FFFFFFFu; /* 0x007805C9: and eax, 0x7fffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp eax, 0x7FF00000u */ /* 0x007805CE: cmp eax, 0x7ff00000 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x7FF00000u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_AE(_flag_a, _flag_b)) goto L_0078053B; /* 0x007805D3: jae 0x78053b */
L_007805D9:
    /* cmp ecx, 1 */ /* 0x007805D9: cmp ecx, 1 */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_EQ(_flag_a, _flag_b)) goto L_007803F3; /* 0x007805DC: je 0x7803f3 */
L_007805E2:
    _xmm[1] = _xmm[0]; /* 0x007805E2: movdqa xmm1, xmm0 */
    { uint64_t _c = 1u; for (int _k = 0; _k < 2; _k++) _xmm[1].u64[_k] = _c > 63 ? 0 : (uint64_t)(_xmm[1].u64[_k] << _c); } /* 0x007805E6: psllq xmm1, 1 */
    { uint64_t _c = 1u; for (int _k = 0; _k < 2; _k++) _xmm[1].u64[_k] = _c > 63 ? 0 : (uint64_t)(_xmm[1].u64[_k] >> _c); } /* 0x007805EB: psrlq xmm1, 1 */
    _xmm[2].u64[0] = MEM64(0x809DA8); _xmm[2].u64[1] = 0; /* 0x007805F0: movsd xmm2, qword ptr [0x809da8] */
    _flag_a = SSE_COMI(_xmm[1].f64[0], _xmm[2].f64[0]); _flag_b = 0; _cf = _flag_a & 1u; /* 0x007805F8: comisd xmm1, xmm2 */
    _flag_k = FK_EFLAGS;
    if (recomp_cond(FK_EFLAGS, _flag_a, 0, CC_BE)) goto L_0078062D; /* 0x007805FC: jbe 0x78062d */
L_007805FE:
    /* cmp ecx, 4 */ /* 0x007805FE: cmp ecx, 4 */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_00780619; /* 0x00780601: je 0x780619 */
L_00780603:
    edx = 1; /* 0x00780603: mov edx, 1 */
    RECOMP_CALL(sub_0078054D); /* 0x00780608: call 0x78054d */
    RECOMP_FLAGS_IN();
    edx = 0x10u; /* 0x0078060D: mov edx, 0x10 */
    RECOMP_CALL(sub_0078054D); /* 0x00780612: call 0x78054d */
    RECOMP_FLAGS_IN();
    goto L_0078062D; /* 0x00780617: jmp 0x78062d */
L_00780619:
    edx = 0x10u; /* 0x00780619: mov edx, 0x10 */
    RECOMP_CALL(sub_0078054D); /* 0x0078061E: call 0x78054d */
    RECOMP_FLAGS_IN();
    edx = 1; /* 0x00780623: mov edx, 1 */
    RECOMP_CALL(sub_0078054D); /* 0x00780628: call 0x78054d */
    RECOMP_FLAGS_IN();
L_0078062D:
    _xmm[2].u64[0] = MEM64(0x809DB0); _xmm[2].u64[1] = 0; /* 0x0078062D: movsd xmm2, qword ptr [0x809db0] */
    _flag_a = SSE_COMI(_xmm[1].f64[0], _xmm[2].f64[0]); _flag_b = 0; _cf = _flag_a & 1u; /* 0x00780635: comisd xmm1, xmm2 */
    _flag_k = FK_EFLAGS;
    if (recomp_cond(FK_EFLAGS, _flag_a, 0, CC_AE)) goto L_00780662; /* 0x00780639: jae 0x780662 */
L_0078063B:
    { xmm_t _s = _xmm[2]; for (int _k = 0; _k < 4; _k++) _xmm[2].u32[_k] = _xmm[2].u32[_k] ^ _s.u32[_k]; } /* 0x0078063B: xorpd xmm2, xmm2 */
    _flag_a = SSE_COMI(_xmm[1].f64[0], _xmm[2].f64[0]); _flag_b = 0; _cf = _flag_a & 1u; /* 0x0078063F: comisd xmm1, xmm2 */
    _flag_k = FK_EFLAGS;
    RECOMP_BACKEDGE();
    if (recomp_cond(FK_EFLAGS, _flag_a, 0, CC_E)) goto L_00780479; /* 0x00780643: je 0x780479 */
L_00780649:
    edx = 2; /* 0x00780649: mov edx, 2 */
    RECOMP_CALL(sub_0078054D); /* 0x0078064E: call 0x78054d */
    RECOMP_FLAGS_IN();
    edx = 0x10u; /* 0x00780653: mov edx, 0x10 */
    RECOMP_CALL(sub_0078054D); /* 0x00780658: call 0x78054d */
    RECOMP_FLAGS_IN();
    RECOMP_BACKEDGE();
    goto L_00780479; /* 0x0078065D: jmp 0x780479 */
L_00780662:
    _xmm[3] = _xmm[0]; /* 0x00780662: movdqa xmm3, xmm0 */
    /* cmp ecx, 4 */ /* 0x00780666: cmp ecx, 4 */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_0078067D; /* 0x00780669: jne 0x78067d */
L_0078066B:
    _xmm[2].u64[0] = MEM64(0x809D98); _xmm[2].u64[1] = 0; /* 0x0078066B: movsd xmm2, qword ptr [0x809d98] */
    _flag_a = SSE_COMI(_xmm[3].f64[0], _xmm[2].f64[0]); _flag_b = 0; _cf = _flag_a & 1u; /* 0x00780673: comisd xmm3, xmm2 */
    _flag_k = FK_EFLAGS;
    if (recomp_cond(FK_EFLAGS, _flag_a, 0, CC_B)) goto L_0078067D; /* 0x00780677: jb 0x78067d */
L_00780679:
    { double _s0 = _xmm[2].f64[0]; double _s1 = _xmm[2].f64[1]; xmm_t _d = _xmm[3]; _d.f64[0] = (double)(_d.f64[0] - _s0); _d.f64[1] = (double)(_d.f64[1] - _s1); _xmm[3] = _d; } /* 0x00780679: subpd xmm3, xmm2 */
L_0078067D:
    _xmm[4] = _xmm[3]; /* 0x0078067D: movdqa xmm4, xmm3 */
    { uint64_t _c = 35u; for (int _k = 0; _k < 2; _k++) _xmm[4].u64[_k] = _c > 63 ? 0 : (uint64_t)(_xmm[4].u64[_k] << _c); } /* 0x00780681: psllq xmm4, 0x23 */
    { uint64_t _c = 35u; for (int _k = 0; _k < 2; _k++) _xmm[4].u64[_k] = _c > 63 ? 0 : (uint64_t)(_xmm[4].u64[_k] >> _c); } /* 0x00780686: psrlq xmm4, 0x23 */
    eax = _xmm[4].u32[0]; /* 0x0078068B: movd eax, xmm4 */
    _flag_a = (uint32_t)((eax | eax)); _flag_b = (uint32_t)((eax | eax));
    eax = eax | eax; /* 0x0078068F: or eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_0078069D; /* 0x00780691: je 0x78069d */
L_00780693:
    edx = 0x10u; /* 0x00780693: mov edx, 0x10 */
    RECOMP_CALL(sub_0078054D); /* 0x00780698: call 0x78054d */
    RECOMP_FLAGS_IN();
L_0078069D:
    _flag_a = SSE_COMI(_xmm[0].f64[0], _xmm[5].f64[0]); _flag_b = 0; _cf = _flag_a & 1u; /* 0x0078069D: comisd xmm0, xmm5 */
    _flag_k = FK_EFLAGS;
    RECOMP_BACKEDGE();
    if (recomp_cond(FK_EFLAGS, _flag_a, 0, CC_AE)) goto L_0078053B; /* 0x007806A1: jae 0x78053b */
L_007806A7:
    _xmm[2].u64[0] = MEM64(0x809D90); _xmm[2].u64[1] = 0; /* 0x007806A7: movsd xmm2, qword ptr [0x809d90] */
    _flag_a = SSE_COMI(_xmm[0].f64[0], _xmm[2].f64[0]); _flag_b = 0; _cf = _flag_a & 1u; /* 0x007806AF: comisd xmm0, xmm2 */
    _flag_k = FK_EFLAGS;
    RECOMP_BACKEDGE();
    if (recomp_cond(FK_EFLAGS, _flag_a, 0, CC_B)) goto L_0078053B; /* 0x007806B3: jb 0x78053b */
L_007806B9:
    RECOMP_BACKEDGE();
    goto L_00780479; /* 0x007806B9: jmp 0x780479 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    RECOMP_REGS_OUT();
}

void sub_007806BE(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007806BEu);

L_007806BE:
    /* test edx, edx */ /* 0x007806BE: test edx, edx */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(edx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_007806D7; /* 0x007806C0: jne 0x7806d7 */
L_007806C2:
    _xmm[0].f64[0] = (double)(int32_t)(ecx); /* 0x007806C2: cvtsi2sd xmm0, ecx */
    if (31u) _cf = (((ecx) >> 30) & 1u); /* 0x007806C6: shr ecx, 0x1f */
    if (31u) { _flag_a = recomp_flags_pack((ecx >> 31u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ecx = ecx >> 31u; /* 0x007806C6: shr ecx, 0x1f */
    _xmm[1].u64[0] = MEM64(ecx * 8 + 0x809D60); _xmm[1].u64[1] = 0; /* 0x007806C9: movsd xmm1, qword ptr [ecx*8 + 0x809d60] */
    { double _s = _xmm[1].f64[0]; _xmm[0].f64[0] = (double)(_xmm[0].f64[0] + _s); } /* 0x007806D2: addsd xmm0, xmm1 */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x007806D6: ret  */
L_007806D7:
    _xmm[4].u64[0] = (uint32_t)(MEM32(0x809DD8)); _xmm[4].u64[1] = 0; /* 0x007806D7: movd xmm4, dword ptr [0x809dd8] */
    _xmm[5].u64[0] = (uint32_t)(MEM32(0x809DDC)); _xmm[5].u64[1] = 0; /* 0x007806DF: movd xmm5, dword ptr [0x809ddc] */
    _xmm[6].u64[0] = (uint32_t)(MEM32(0x809DD4)); _xmm[6].u64[1] = 0; /* 0x007806E7: movd xmm6, dword ptr [0x809dd4] */
    _xmm[0].u64[0] = (uint32_t)(ecx); _xmm[0].u64[1] = 0; /* 0x007806EF: movd xmm0, ecx */
    _xmm[1].u64[0] = (uint32_t)(edx); _xmm[1].u64[1] = 0; /* 0x007806F3: movd xmm1, edx */
    _xmm[0] = recomp_punpckldq(_xmm[0], _xmm[1]); /* 0x007806F7: punpckldq xmm0, xmm1 */
    eax = 0x20u; /* 0x007806FB: mov eax, 0x20 */
    { uint32_t _v = edx, _i; if (_v) { for (_i = 31; !((_v >> _i) & 1u); _i--) ; ecx = _i; } _flag_a = _flag_b = _v; } _cf = 0; /* 0x00780700: bsr ecx, edx */
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - ecx; /* 0x00780703: sub eax, ecx */
    _flag_k = FK_CMP;
    _xmm[2].u64[0] = (uint32_t)(eax); _xmm[2].u64[1] = 0; /* 0x00780705: movd xmm2, eax */
    { uint64_t _c = _xmm[2].u64[0]; for (int _k = 0; _k < 2; _k++) _xmm[0].u64[_k] = _c > 63 ? 0 : (uint64_t)(_xmm[0].u64[_k] << _c); } /* 0x00780709: psllq xmm0, xmm2 */
    _xmm[3] = _xmm[0]; /* 0x0078070D: movdqa xmm3, xmm0 */
    { uint64_t _c = 51u; for (int _k = 0; _k < 2; _k++) _xmm[3].u64[_k] = _c > 63 ? 0 : (uint64_t)(_xmm[3].u64[_k] << _c); } /* 0x00780711: psllq xmm3, 0x33 */
    { uint64_t _c = 51u; for (int _k = 0; _k < 2; _k++) _xmm[3].u64[_k] = _c > 63 ? 0 : (uint64_t)(_xmm[3].u64[_k] >> _c); } /* 0x00780716: psrlq xmm3, 0x33 */
    _xmm[1] = _xmm[3]; /* 0x0078071B: movdqa xmm1, xmm3 */
    { uint64_t _c = 13u; for (int _k = 0; _k < 2; _k++) _xmm[0].u64[_k] = _c > 63 ? 0 : (uint64_t)(_xmm[0].u64[_k] >> _c); } /* 0x0078071F: psrlq xmm0, 0xd */
    { uint64_t _c = 1u; for (int _k = 0; _k < 2; _k++) _xmm[0].u64[_k] = _c > 63 ? 0 : (uint64_t)(_xmm[0].u64[_k] << _c); } /* 0x00780724: psllq xmm0, 1 */
    { xmm_t _s = _xmm[4]; for (int _k = 0; _k < 4; _k++) _xmm[3].u32[_k] = (_xmm[3].i32[_k] > _s.i32[_k]) ? (uint32_t)~0u : 0; } /* 0x00780729: pcmpgtd xmm3, xmm4 */
    _xmm[3] = recomp_punpckldq(_xmm[3], _xmm[3]); /* 0x0078072D: punpckldq xmm3, xmm3 */
    { xmm_t _s = _xmm[3]; for (int _k = 0; _k < 2; _k++) _xmm[0].u64[_k] -= _s.u64[_k]; } /* 0x00780731: psubq xmm0, xmm3 */
    { xmm_t _s = _xmm[5]; for (int _k = 0; _k < 4; _k++) _xmm[1].u32[_k] = (_xmm[1].i32[_k] > _s.i32[_k]) ? (uint32_t)~0u : 0; } /* 0x00780735: pcmpgtd xmm1, xmm5 */
    _xmm[1] = recomp_punpckldq(_xmm[1], _xmm[1]); /* 0x00780739: punpckldq xmm1, xmm1 */
    { xmm_t _s = _xmm[1]; for (int _k = 0; _k < 2; _k++) _xmm[0].u64[_k] -= _s.u64[_k]; } /* 0x0078073D: psubq xmm0, xmm1 */
    { xmm_t _s = _xmm[2]; for (int _k = 0; _k < 2; _k++) _xmm[6].u64[_k] -= _s.u64[_k]; } /* 0x00780741: psubq xmm6, xmm2 */
    { uint64_t _c = 52u; for (int _k = 0; _k < 2; _k++) _xmm[6].u64[_k] = _c > 63 ? 0 : (uint64_t)(_xmm[6].u64[_k] << _c); } /* 0x00780745: psllq xmm6, 0x34 */
    { xmm_t _s = _xmm[6]; for (int _k = 0; _k < 2; _k++) _xmm[0].u64[_k] += _s.u64[_k]; } /* 0x0078074A: paddq xmm0, xmm6 */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x0078074E: ret  */
    RECOMP_REGS_OUT();
}

void sub_0078074F(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0078074Fu);

    goto L_0078074F;
L_007806BE:
    /* test edx, edx */ /* 0x007806BE: test edx, edx */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(edx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_007806D7; /* 0x007806C0: jne 0x7806d7 */
L_007806C2:
    _xmm[0].f64[0] = (double)(int32_t)(ecx); /* 0x007806C2: cvtsi2sd xmm0, ecx */
    if (31u) _cf = (((ecx) >> 30) & 1u); /* 0x007806C6: shr ecx, 0x1f */
    if (31u) { _flag_a = recomp_flags_pack((ecx >> 31u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ecx = ecx >> 31u; /* 0x007806C6: shr ecx, 0x1f */
    _xmm[1].u64[0] = MEM64(ecx * 8 + 0x809D60); _xmm[1].u64[1] = 0; /* 0x007806C9: movsd xmm1, qword ptr [ecx*8 + 0x809d60] */
    { double _s = _xmm[1].f64[0]; _xmm[0].f64[0] = (double)(_xmm[0].f64[0] + _s); } /* 0x007806D2: addsd xmm0, xmm1 */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x007806D6: ret  */
L_007806D7:
    _xmm[4].u64[0] = (uint32_t)(MEM32(0x809DD8)); _xmm[4].u64[1] = 0; /* 0x007806D7: movd xmm4, dword ptr [0x809dd8] */
    _xmm[5].u64[0] = (uint32_t)(MEM32(0x809DDC)); _xmm[5].u64[1] = 0; /* 0x007806DF: movd xmm5, dword ptr [0x809ddc] */
    _xmm[6].u64[0] = (uint32_t)(MEM32(0x809DD4)); _xmm[6].u64[1] = 0; /* 0x007806E7: movd xmm6, dword ptr [0x809dd4] */
    _xmm[0].u64[0] = (uint32_t)(ecx); _xmm[0].u64[1] = 0; /* 0x007806EF: movd xmm0, ecx */
    _xmm[1].u64[0] = (uint32_t)(edx); _xmm[1].u64[1] = 0; /* 0x007806F3: movd xmm1, edx */
    _xmm[0] = recomp_punpckldq(_xmm[0], _xmm[1]); /* 0x007806F7: punpckldq xmm0, xmm1 */
    eax = 0x20u; /* 0x007806FB: mov eax, 0x20 */
    { uint32_t _v = edx, _i; if (_v) { for (_i = 31; !((_v >> _i) & 1u); _i--) ; ecx = _i; } _flag_a = _flag_b = _v; } _cf = 0; /* 0x00780700: bsr ecx, edx */
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - ecx; /* 0x00780703: sub eax, ecx */
    _flag_k = FK_CMP;
    _xmm[2].u64[0] = (uint32_t)(eax); _xmm[2].u64[1] = 0; /* 0x00780705: movd xmm2, eax */
    { uint64_t _c = _xmm[2].u64[0]; for (int _k = 0; _k < 2; _k++) _xmm[0].u64[_k] = _c > 63 ? 0 : (uint64_t)(_xmm[0].u64[_k] << _c); } /* 0x00780709: psllq xmm0, xmm2 */
    _xmm[3] = _xmm[0]; /* 0x0078070D: movdqa xmm3, xmm0 */
    { uint64_t _c = 51u; for (int _k = 0; _k < 2; _k++) _xmm[3].u64[_k] = _c > 63 ? 0 : (uint64_t)(_xmm[3].u64[_k] << _c); } /* 0x00780711: psllq xmm3, 0x33 */
    { uint64_t _c = 51u; for (int _k = 0; _k < 2; _k++) _xmm[3].u64[_k] = _c > 63 ? 0 : (uint64_t)(_xmm[3].u64[_k] >> _c); } /* 0x00780716: psrlq xmm3, 0x33 */
    _xmm[1] = _xmm[3]; /* 0x0078071B: movdqa xmm1, xmm3 */
    { uint64_t _c = 13u; for (int _k = 0; _k < 2; _k++) _xmm[0].u64[_k] = _c > 63 ? 0 : (uint64_t)(_xmm[0].u64[_k] >> _c); } /* 0x0078071F: psrlq xmm0, 0xd */
    { uint64_t _c = 1u; for (int _k = 0; _k < 2; _k++) _xmm[0].u64[_k] = _c > 63 ? 0 : (uint64_t)(_xmm[0].u64[_k] << _c); } /* 0x00780724: psllq xmm0, 1 */
    { xmm_t _s = _xmm[4]; for (int _k = 0; _k < 4; _k++) _xmm[3].u32[_k] = (_xmm[3].i32[_k] > _s.i32[_k]) ? (uint32_t)~0u : 0; } /* 0x00780729: pcmpgtd xmm3, xmm4 */
    _xmm[3] = recomp_punpckldq(_xmm[3], _xmm[3]); /* 0x0078072D: punpckldq xmm3, xmm3 */
    { xmm_t _s = _xmm[3]; for (int _k = 0; _k < 2; _k++) _xmm[0].u64[_k] -= _s.u64[_k]; } /* 0x00780731: psubq xmm0, xmm3 */
    { xmm_t _s = _xmm[5]; for (int _k = 0; _k < 4; _k++) _xmm[1].u32[_k] = (_xmm[1].i32[_k] > _s.i32[_k]) ? (uint32_t)~0u : 0; } /* 0x00780735: pcmpgtd xmm1, xmm5 */
    _xmm[1] = recomp_punpckldq(_xmm[1], _xmm[1]); /* 0x00780739: punpckldq xmm1, xmm1 */
    { xmm_t _s = _xmm[1]; for (int _k = 0; _k < 2; _k++) _xmm[0].u64[_k] -= _s.u64[_k]; } /* 0x0078073D: psubq xmm0, xmm1 */
    { xmm_t _s = _xmm[2]; for (int _k = 0; _k < 2; _k++) _xmm[6].u64[_k] -= _s.u64[_k]; } /* 0x00780741: psubq xmm6, xmm2 */
    { uint64_t _c = 52u; for (int _k = 0; _k < 2; _k++) _xmm[6].u64[_k] = _c > 63 ? 0 : (uint64_t)(_xmm[6].u64[_k] << _c); } /* 0x00780745: psllq xmm6, 0x34 */
    { xmm_t _s = _xmm[6]; for (int _k = 0; _k < 2; _k++) _xmm[0].u64[_k] += _s.u64[_k]; } /* 0x0078074A: paddq xmm0, xmm6 */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x0078074E: ret  */
L_0078074F:
    eax = ecx; /* 0x0078074F: mov eax, ecx */
    if (31u) _cf = (((eax) >> 30) & 1u); /* 0x00780751: sar eax, 0x1f */
    if (31u) { _flag_a = recomp_flags_pack(((uint32_t)((int32_t)eax >> 31u)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = (uint32_t)((int32_t)eax >> 31u);
    /* cmp eax, edx */ /* 0x00780754: cmp eax, edx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_0078075D; /* 0x00780756: jne 0x78075d */
L_00780758:
    _xmm[0].f64[0] = (double)(int32_t)(ecx); /* 0x00780758: cvtsi2sd xmm0, ecx */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x0078075C: ret  */
L_0078075D:
    /* test edx, edx */ /* 0x0078075D: test edx, edx */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(edx);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) == 0u)) goto L_007806BE; /* 0x0078075F: jge 0x7806be */
L_00780765:
    _xmm[7].u64[0] = MEM64(0x809D80); _xmm[7].u64[1] = 0; /* 0x00780765: movsd xmm7, qword ptr [0x809d80] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(ecx);
    _cf = (ecx) != 0;
    ecx = (uint32_t)(-(int32_t)ecx); /* 0x0078076D: neg ecx */
    _flag_k = FK_CMP;
    { uint32_t _aa = edx, _ab = 0, _ac = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x0078076F: adc edx, 0 */
      edx = _aa + _ab + _ac;
      _flag_a = recomp_flags_adc(_aa, _ab, _ac); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(edx);
    _cf = (edx) != 0;
    edx = (uint32_t)(-(int32_t)edx); /* 0x00780772: neg edx */
    _flag_k = FK_CMP;
    RECOMP_CALL(sub_007806BE); /* 0x00780774: call 0x7806be */
    RECOMP_FLAGS_IN();
    { xmm_t _s = _xmm[7]; for (int _k = 0; _k < 4; _k++) _xmm[0].u32[_k] = _xmm[0].u32[_k] | _s.u32[_k]; } /* 0x00780779: orps xmm0, xmm7 */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x0078077C: ret  */
    RECOMP_REGS_OUT();
}

void sub_00780780(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00780780u);

L_00780780:
    /* cmp MEM32(0x92C550), 0 */ /* 0x00780780: cmp dword ptr [0x92c550], 0 */
    _flag_a = (uint32_t)(MEM32(0x92C550)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_007807B6; /* 0x00780787: je 0x7807b6 */
L_00780789:
    PUSH32(esp, ebp); /* 0x00780789: push ebp */
    ebp = esp; /* 0x0078078A: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 8; /* 0x0078078C: sub esp, 8 */
    _flag_k = FK_CMP;
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xFFFFFFF8u);
    esp = esp & 0xFFFFFFF8u; /* 0x0078078F: and esp, 0xfffffff8 */
    _cf = 0;
    _flag_k = FK_TEST;
    { double _v = fp_pop(); *(double*)ADDR(esp) = _v; } /* 0x00780792: fstp qword ptr [esp] */
    eax = (uint32_t)sse_cvt_i32((double)sse_f64(MEM64(esp)), 1); /* 0x00780795: cvttsd2si eax, qword ptr [esp] */
    esp = ebp; ebp = POP32_VAL(esp); /* 0x0078079A: leave  */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x0078079B: ret  */
L_007807B6:
    PUSH32(esp, ebp); /* 0x007807B6: push ebp */
    ebp = esp; /* 0x007807B7: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x20u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x20u; /* 0x007807B9: sub esp, 0x20 */
    _flag_k = FK_CMP;
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xFFFFFFF0u);
    esp = esp & 0xFFFFFFF0u; /* 0x007807BC: and esp, 0xfffffff0 */
    _cf = 0;
    _flag_k = FK_TEST;
    fp_push(_st[0]); /* 0x007807BF: fld st(0) */
    { float _v = (float)_st[0]; *(float*)ADDR(esp + 0x18) = _v; } /* 0x007807C1: fst dword ptr [esp + 0x18] */
    { int64_t _q = fp_st0_to_i64(_st[0], g_st_i64[0], _fpu_cw); (void)fp_pop(); MEM64(esp + 0x10) = (uint64_t)_q; } /* 0x007807C5: fistp qword ptr [esp + 0x10] */
    fp_push_i64((int64_t)MEM64(esp + 0x10)); /* 0x007807C9: fild qword ptr [esp + 0x10] */
    edx = MEM32(esp + 0x18); /* 0x007807CD: mov edx, dword ptr [esp + 0x18] */
    eax = MEM32(esp + 0x10); /* 0x007807D1: mov eax, dword ptr [esp + 0x10] */
    /* test eax, eax */ /* 0x007807D5: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_00780815; /* 0x007807D7: je 0x780815 */
L_007807D9:
    { double _v = fp_pop(); _st[0] -= _v; } /* 0x007807D9: fsubp st(1) */
    /* test edx, edx */ /* 0x007807DB: test edx, edx */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(edx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) == 0u)) goto L_007807FD; /* 0x007807DD: jns 0x7807fd */
L_007807DF:
    { float _v = (float)fp_pop(); *(float*)ADDR(esp) = _v; } /* 0x007807DF: fstp dword ptr [esp] */
    ecx = MEM32(esp); /* 0x007807E2: mov ecx, dword ptr [esp] */
    _flag_a = (uint32_t)((ecx ^ 0x80000000u)); _flag_b = (uint32_t)((ecx ^ 0x80000000u));
    ecx = ecx ^ 0x80000000u; /* 0x007807E5: xor ecx, 0x80000000 */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x7FFFFFFFu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 0x7FFFFFFFu; /* 0x007807EB: add ecx, 0x7fffffff */
    _flag_k = FK_ADD;
    { uint32_t _aa = eax, _ab = 0, _ac = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x007807F1: adc eax, 0 */
      eax = _aa + _ab + _ac;
      _flag_a = recomp_flags_adc(_aa, _ab, _ac); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    edx = MEM32(esp + 0x14); /* 0x007807F4: mov edx, dword ptr [esp + 0x14] */
    { uint32_t _aa = edx, _ab = 0, _ac = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x007807F8: adc edx, 0 */
      edx = _aa + _ab + _ac;
      _flag_a = recomp_flags_adc(_aa, _ab, _ac); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    goto L_00780829; /* 0x007807FB: jmp 0x780829 */
L_007807FD:
    { float _v = (float)fp_pop(); *(float*)ADDR(esp) = _v; } /* 0x007807FD: fstp dword ptr [esp] */
    ecx = MEM32(esp); /* 0x00780800: mov ecx, dword ptr [esp] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x7FFFFFFFu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 0x7FFFFFFFu; /* 0x00780803: add ecx, 0x7fffffff */
    _flag_k = FK_ADD;
    { uint32_t _sa = eax, _sb = 0, _sc = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x00780809: sbb eax, 0 */
      eax = _sa - _sb - _sc;
      _flag_a = recomp_flags_sbb(_sa, _sb, _sc); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    edx = MEM32(esp + 0x14); /* 0x0078080C: mov edx, dword ptr [esp + 0x14] */
    { uint32_t _sa = edx, _sb = 0, _sc = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x00780810: sbb edx, 0 */
      edx = _sa - _sb - _sc;
      _flag_a = recomp_flags_sbb(_sa, _sb, _sc); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    goto L_00780829; /* 0x00780813: jmp 0x780829 */
L_00780815:
    edx = MEM32(esp + 0x14); /* 0x00780815: mov edx, dword ptr [esp + 0x14] */
    /* test edx, 0x7FFFFFFFu */ /* 0x00780819: test edx, 0x7fffffff */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(0x7FFFFFFFu);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_007807D9; /* 0x0078081F: jne 0x7807d9 */
L_00780821:
    { float _v = (float)fp_pop(); *(float*)ADDR(esp + 0x18) = _v; } /* 0x00780821: fstp dword ptr [esp + 0x18] */
    { float _v = (float)fp_pop(); *(float*)ADDR(esp + 0x18) = _v; } /* 0x00780825: fstp dword ptr [esp + 0x18] */
L_00780829:
    esp = ebp; ebp = POP32_VAL(esp); /* 0x00780829: leave  */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x0078082A: ret  */
    RECOMP_REGS_OUT();
}

void sub_0078082C(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0078082Cu);

L_0078082C:
    { _itail_tgt = (uint32_t)(MEM32(0x7CC678)); goto _ljump; }
    { RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_00780832(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00780832u);

L_00780832:
    { _itail_tgt = (uint32_t)(MEM32(0x7CC67C)); goto _ljump; }
    { RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_00780838(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00780838u);

L_00780838:
    { _itail_tgt = (uint32_t)(MEM32(0x7CC680)); goto _ljump; }
    { RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_0078083E(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0078083Eu);

L_0078083E:
    { _itail_tgt = (uint32_t)(MEM32(0x7CC684)); goto _ljump; }
    { RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_00780844(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00780844u);

L_00780844:
    PUSH32(esp, ebp); /* 0x00780844: push ebp */
    ebp = esp; /* 0x00780845: mov ebp, esp */
    _flag_a = (uint32_t)(MEM32(0x92C550)); _flag_b = (uint32_t)(0);
    MEM32(0x92C550) = MEM32(0x92C550) & 0; /* 0x00780847: and dword ptr [0x92c550], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x1Cu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x1Cu; /* 0x0078084E: sub esp, 0x1c */
    _flag_k = FK_CMP;
    PUSH32(esp, ebx); /* 0x00780851: push ebx */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ebx = 0; /* 0x00780852: xor ebx, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(1);
    ebx = ebx + 1; /* 0x00780854: inc ebx */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)((MEM32(0x8660A0) | ebx)); _flag_b = (uint32_t)((MEM32(0x8660A0) | ebx));
    MEM32(0x8660A0) = MEM32(0x8660A0) | ebx; /* 0x00780855: or dword ptr [0x8660a0], ebx */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, 0xAu); /* 0x0078085B: push 0xa */
    RECOMP_CALL(sub_0078000A); /* 0x0078085D: call 0x78000a */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x00780862: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_007809B6; /* 0x00780864: je 0x7809b6 */
L_0078086A:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x0078086A: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(0x92C550) = ebx; /* 0x0078086C: mov dword ptr [0x92c550], ebx */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x00780872: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    CPUID(eax, ebx, ecx, edx); /* 0x00780874: cpuid  */
    PUSH32(esp, esi); /* 0x00780876: push esi */
    esi = MEM32(0x8660A0); /* 0x00780877: mov esi, dword ptr [0x8660a0] */
    PUSH32(esp, edi); /* 0x0078087D: push edi */
    edi = ebp + (-0x1C); /* 0x0078087E: lea edi, [ebp - 0x1c] */
    _flag_a = (uint32_t)((esi | 2)); _flag_b = (uint32_t)((esi | 2));
    esi = esi | 2; /* 0x00780881: or esi, 2 */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(edi) = eax; /* 0x00780884: mov dword ptr [edi], eax */
    MEM32(edi + 0x4) = ebx; /* 0x00780886: mov dword ptr [edi + 4], ebx */
    MEM32(edi + 0x8) = ecx; /* 0x00780889: mov dword ptr [edi + 8], ecx */
    MEM32(edi + 0xC) = edx; /* 0x0078088C: mov dword ptr [edi + 0xc], edx */
    eax = MEM32(ebp + (-0x1C)); /* 0x0078088F: mov eax, dword ptr [ebp - 0x1c] */
    ecx = MEM32(ebp + (-0x10)); /* 0x00780892: mov ecx, dword ptr [ebp - 0x10] */
    MEM32(ebp + (-0xC)) = eax; /* 0x00780895: mov dword ptr [ebp - 0xc], eax */
    _flag_a = (uint32_t)((ecx ^ 0x49656E69u)); _flag_b = (uint32_t)((ecx ^ 0x49656E69u));
    ecx = ecx ^ 0x49656E69u; /* 0x00780898: xor ecx, 0x49656e69 */
    _cf = 0;
    _flag_k = FK_TEST;
    eax = MEM32(ebp + (-0x14)); /* 0x0078089E: mov eax, dword ptr [ebp - 0x14] */
    _flag_a = (uint32_t)((eax ^ 0x6C65746Eu)); _flag_b = (uint32_t)((eax ^ 0x6C65746Eu));
    eax = eax ^ 0x6C65746Eu; /* 0x007808A1: xor eax, 0x6c65746e */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(0x8660A0) = esi; /* 0x007808A6: mov dword ptr [0x8660a0], esi */
    _flag_a = (uint32_t)((ecx | eax)); _flag_b = (uint32_t)((ecx | eax));
    ecx = ecx | eax; /* 0x007808AC: or ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    eax = MEM32(ebp + (-0x18)); /* 0x007808AE: mov eax, dword ptr [ebp - 0x18] */
    _flag_a = (uint32_t)((eax ^ 0x756E6547u)); _flag_b = (uint32_t)((eax ^ 0x756E6547u));
    eax = eax ^ 0x756E6547u; /* 0x007808B1: xor eax, 0x756e6547 */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)((ecx | eax)); _flag_b = (uint32_t)((ecx | eax));
    ecx = ecx | eax; /* 0x007808B6: or ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(ecx);
    _cf = (ecx) != 0;
    ecx = (uint32_t)(-(int32_t)ecx); /* 0x007808B8: neg ecx */
    _flag_k = FK_CMP;
    PUSH32(esp, 1); /* 0x007808BA: push 1 */
    { uint32_t _sa = LO8(ecx), _sb = LO8(ecx), _sc = (uint32_t)CMP_B(_flag_a, _flag_b); /* 0x007808BC: sbb cl, cl */
      SET_LO8(ecx, _sc ? 0xFFFFFFFFu : 0);
      _flag_a = recomp_flags_sbb(_sa, _sb, _sc); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    eax = POP32_VAL(esp); /* 0x007808BE: pop eax */
    _flag_a = (uint32_t)(LO8(ecx)) << 24; _flag_b = (uint32_t)(1) << 24;
    SET_LO8(ecx, LO8(ecx) + 1); /* 0x007808BF: inc cl */
    _flag_k = FK_NARROW(FK_INC, 24);
    PUSH32(esp, 0); /* 0x007808C1: push 0 */
    ecx = POP32_VAL(esp); /* 0x007808C3: pop ecx */
    CPUID(eax, ebx, ecx, edx); /* 0x007808C4: cpuid  */
    MEM32(edi) = eax; /* 0x007808C6: mov dword ptr [edi], eax */
    MEM32(edi + 0x4) = ebx; /* 0x007808C8: mov dword ptr [edi + 4], ebx */
    MEM32(edi + 0x8) = ecx; /* 0x007808CB: mov dword ptr [edi + 8], ecx */
    MEM32(edi + 0xC) = edx; /* 0x007808CE: mov dword ptr [edi + 0xc], edx */
    ecx = MEM32(ebp + (-0x14)); /* 0x007808D1: mov ecx, dword ptr [ebp - 0x14] */
    MEM32(ebp + (-0x8)) = ecx; /* 0x007808D4: mov dword ptr [ebp - 8], ecx */
    if (/* inc result */ recomp_cond(_flag_k, _flag_a, _flag_b, CC_E)) goto L_0078091C; /* 0x007808D7: je 0x78091c */
L_007808D9:
    eax = MEM32(ebp + (-0x1C)); /* 0x007808D9: mov eax, dword ptr [ebp - 0x1c] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x0FFF3FF0u);
    eax = eax & 0x0FFF3FF0u; /* 0x007808DC: and eax, 0xfff3ff0 */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp eax, 0x000106C0u */ /* 0x007808E1: cmp eax, 0x106c0 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x000106C0u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_0078090B; /* 0x007808E6: je 0x78090b */
L_007808E8:
    /* cmp eax, 0x00020660u */ /* 0x007808E8: cmp eax, 0x20660 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x00020660u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_0078090B; /* 0x007808ED: je 0x78090b */
L_007808EF:
    /* cmp eax, 0x00020670u */ /* 0x007808EF: cmp eax, 0x20670 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x00020670u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_0078090B; /* 0x007808F4: je 0x78090b */
L_007808F6:
    /* cmp eax, 0x00030650u */ /* 0x007808F6: cmp eax, 0x30650 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x00030650u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_0078090B; /* 0x007808FB: je 0x78090b */
L_007808FD:
    /* cmp eax, 0x00030660u */ /* 0x007808FD: cmp eax, 0x30660 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x00030660u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_0078090B; /* 0x00780902: je 0x78090b */
L_00780904:
    /* cmp eax, 0x00030670u */ /* 0x00780904: cmp eax, 0x30670 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x00030670u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_0078091C; /* 0x00780909: jne 0x78091c */
L_0078090B:
    edi = MEM32(0x92C554); /* 0x0078090B: mov edi, dword ptr [0x92c554] */
    _flag_a = (uint32_t)((edi | 1)); _flag_b = (uint32_t)((edi | 1));
    edi = edi | 1; /* 0x00780911: or edi, 1 */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(0x92C554) = edi; /* 0x00780914: mov dword ptr [0x92c554], edi */
    goto L_00780922; /* 0x0078091A: jmp 0x780922 */
L_0078091C:
    edi = MEM32(0x92C554); /* 0x0078091C: mov edi, dword ptr [0x92c554] */
L_00780922:
    /* cmp MEM32(ebp + (-0xC)), 7 */ /* 0x00780922: cmp dword ptr [ebp - 0xc], 7 */
    _flag_a = (uint32_t)(MEM32(ebp + (-0xC))); _flag_b = (uint32_t)(7);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_L(_flag_a, _flag_b)) goto L_0078095D; /* 0x00780926: jl 0x78095d */
L_00780928:
    PUSH32(esp, 7); /* 0x00780928: push 7 */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x0078092A: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    esi = ebp + (-0x1C); /* 0x0078092C: lea esi, [ebp - 0x1c] */
    eax = POP32_VAL(esp); /* 0x0078092F: pop eax */
    CPUID(eax, ebx, ecx, edx); /* 0x00780930: cpuid  */
    MEM32(esi) = eax; /* 0x00780932: mov dword ptr [esi], eax */
    eax = esi; /* 0x00780934: mov eax, esi */
    esi = MEM32(0x8660A0); /* 0x00780936: mov esi, dword ptr [0x8660a0] */
    MEM32(eax + 0x4) = ebx; /* 0x0078093C: mov dword ptr [eax + 4], ebx */
    MEM32(eax + 0x8) = ecx; /* 0x0078093F: mov dword ptr [eax + 8], ecx */
    ecx = MEM32(ebp + (-0x8)); /* 0x00780942: mov ecx, dword ptr [ebp - 8] */
    MEM32(eax + 0xC) = edx; /* 0x00780945: mov dword ptr [eax + 0xc], edx */
    eax = MEM32(ebp + (-0x18)); /* 0x00780948: mov eax, dword ptr [ebp - 0x18] */
    /* test eax, 0x200u */ /* 0x0078094B: test eax, 0x200 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x200u);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_0078095F; /* 0x00780950: je 0x78095f */
L_00780952:
    _flag_a = (uint32_t)((edi | 2)); _flag_b = (uint32_t)((edi | 2));
    edi = edi | 2; /* 0x00780952: or edi, 2 */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(0x92C554) = edi; /* 0x00780955: mov dword ptr [0x92c554], edi */
    goto L_0078095F; /* 0x0078095B: jmp 0x78095f */
L_0078095D:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x0078095D: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
L_0078095F:
    /* test ecx, 0x00100000u */ /* 0x0078095F: test ecx, 0x100000 */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x00100000u);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_007809B4; /* 0x00780965: je 0x7809b4 */
L_00780967:
    _flag_a = (uint32_t)((esi | 4)); _flag_b = (uint32_t)((esi | 4));
    esi = esi | 4; /* 0x00780967: or esi, 4 */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(0x92C550) = 2; /* 0x0078096A: mov dword ptr [0x92c550], 2 */
    MEM32(0x8660A0) = esi; /* 0x00780974: mov dword ptr [0x8660a0], esi */
    /* test ecx, 0x08000000u */ /* 0x0078097A: test ecx, 0x8000000 */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x08000000u);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_007809B4; /* 0x00780980: je 0x7809b4 */
L_00780982:
    /* test ecx, 0x10000000u */ /* 0x00780982: test ecx, 0x10000000 */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x10000000u);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_007809B4; /* 0x00780988: je 0x7809b4 */
L_0078098A:
    _flag_a = (uint32_t)((esi | 8)); _flag_b = (uint32_t)((esi | 8));
    esi = esi | 8; /* 0x0078098A: or esi, 8 */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(0x92C550) = 3; /* 0x0078098D: mov dword ptr [0x92c550], 3 */
    MEM32(0x8660A0) = esi; /* 0x00780997: mov dword ptr [0x8660a0], esi */
    /* test LO8(eax), 0x20u */ /* 0x0078099D: test al, 0x20 */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(0x20u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_007809B4; /* 0x0078099F: je 0x7809b4 */
L_007809A1:
    _flag_a = (uint32_t)((esi | 0x20u)); _flag_b = (uint32_t)((esi | 0x20u));
    esi = esi | 0x20u; /* 0x007809A1: or esi, 0x20 */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(0x92C550) = 5; /* 0x007809A4: mov dword ptr [0x92c550], 5 */
    MEM32(0x8660A0) = esi; /* 0x007809AE: mov dword ptr [0x8660a0], esi */
L_007809B4:
    edi = POP32_VAL(esp); /* 0x007809B4: pop edi */
    esi = POP32_VAL(esp); /* 0x007809B5: pop esi */
L_007809B6:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x007809B6: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    ebx = POP32_VAL(esp); /* 0x007809B8: pop ebx */
    esp = ebp; /* 0x007809B9: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x007809BB: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x007809BC: ret  */
    RECOMP_REGS_OUT();
}

void sub_00780D20(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00780D20u);

L_00780D20:
    { _itail_tgt = (uint32_t)(MEM32(0x7CC468)); goto _ljump; }
    { RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_00780D30(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00780D30u);

L_00780D30:
    PUSH32(esp, ebp); /* 0x00780D30: push ebp */
    ebp = esp; /* 0x00780D31: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xFFFFFFF0u);
    esp = esp & 0xFFFFFFF0u; /* 0x00780D33: and esp, 0xfffffff0 */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, esi); /* 0x00780D36: push esi */
    PUSH32(esp, edi); /* 0x00780D37: push edi */
    PUSH32(esp, ebx); /* 0x00780D38: push ebx */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x54u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x54u; /* 0x00780D39: sub esp, 0x54 */
    _flag_k = FK_CMP;
    eax = 0x7FF00000u; /* 0x00780D3C: mov eax, 0x7ff00000 */
    edx = MEM32(ebp + 0xC); /* 0x00780D41: mov edx, dword ptr [ebp + 0xc] */
    ebx = MEM32(ebp + 0x10); /* 0x00780D44: mov ebx, dword ptr [ebp + 0x10] */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    edx = edx - eax; /* 0x00780D47: sub edx, eax */
    _flag_k = FK_CMP;
    if (/* sub result */ CMP_GE(_flag_a, _flag_b)) goto L_00781006; /* 0x00780D49: jge 0x781006 */
L_00780D4F:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x00780D4F: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM16(esp + 0x3C) = (uint16_t)(LO16(eax)); /* 0x00780D51: mov word ptr [esp + 0x3c], ax */
    MEM16(esp + 0x3E) = _fpu_cw; /* 0x00780D56: fnstcw word ptr [esp + 0x3e] */
    edx = (uint32_t)MEM16(esp + 0x3E); /* 0x00780D5A: movzx edx, word ptr [esp + 0x3e] */
    eax = edx; /* 0x00780D5F: mov eax, edx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xF00u);
    eax = eax & 0xF00u; /* 0x00780D61: and eax, 0xf00 */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp eax, 0x300u */ /* 0x00780D66: cmp eax, 0x300 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x300u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_00780D82; /* 0x00780D6B: je 0x780d82 */
L_00780D6D:
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(0xFFFFF0FFu);
    edx = edx & 0xFFFFF0FFu; /* 0x00780D6D: and edx, 0xfffff0ff */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)((edx | 0xFFFF0300u)); _flag_b = (uint32_t)((edx | 0xFFFF0300u));
    edx = edx | 0xFFFF0300u; /* 0x00780D73: or edx, 0xffff0300 */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM16(esp + 0x3C) = (uint16_t)(LO16(edx)); /* 0x00780D79: mov word ptr [esp + 0x3c], dx */
    _fpu_cw = MEM16(esp + 0x3C); /* 0x00780D7E: fldcw word ptr [esp + 0x3c] */
L_00780D82:
    fp_push(*(double*)ADDR(ebp + 0x8)); /* 0x00780D82: fld qword ptr [ebp + 8] */
    _xmm[0].u64[0] = MEM64(ebp + 0x8); _xmm[0].u64[1] = 0; /* 0x00780D85: movsd xmm0, qword ptr [ebp + 8] */
    eax = MEM32(ebp + 0xC); /* 0x00780D8A: mov eax, dword ptr [ebp + 0xc] */
    fp_st80((uint8_t*)ADDR(esp + 0x48), fp_pop()); /* 0x00780D8D: fstp xword ptr [esp + 0x48] */
    /* cmp MEM32(ebp + 0xC), 0x40FF4000u */ /* 0x00780D91: cmp dword ptr [ebp + 0xc], 0x40ff4000 */
    _flag_a = (uint32_t)(MEM32(ebp + 0xC)); _flag_b = (uint32_t)(0x40FF4000u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_AE(_flag_a, _flag_b)) goto L_00780E08; /* 0x00780D98: jae 0x780e08 */
L_00780D9A:
    fp_push(fp_ld80((const uint8_t*)ADDR(0x92D770))); /* 0x00780D9A: fld xword ptr [0x92d770] */
    fp_push(fp_ld80((const uint8_t*)ADDR(esp + 0x48))); /* 0x00780DA0: fld xword ptr [esp + 0x48] */
    _st[1] *= _st[0]; /* 0x00780DA4: fmul st(1), st(0) */
    fp_xch(1); /* 0x00780DA6: fxch st(1) */
    MEM16(esp) = _fpu_cw; /* 0x00780DA8: fnstcw word ptr [esp] */
    eax = (uint32_t)MEM16(esp); /* 0x00780DAB: movzx eax, word ptr [esp] */
    _flag_a = (uint32_t)((eax | 0xC00u)); _flag_b = (uint32_t)((eax | 0xC00u));
    eax = eax | 0xC00u; /* 0x00780DAF: or eax, 0xc00 */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(esp + 0x8) = eax; /* 0x00780DB4: mov dword ptr [esp + 8], eax */
    _fpu_cw = MEM16(esp + 0x8); /* 0x00780DB8: fldcw word ptr [esp + 8] */
    MEM32(esp + 0x10) = (uint32_t)(int32_t)fp_to_int(fp_pop()); /* 0x00780DBC: fistp dword ptr [esp + 0x10] */
    _fpu_cw = MEM16(esp); /* 0x00780DC0: fldcw word ptr [esp] */
    fp_push(*(double*)ADDR(0x92D780)); /* 0x00780DC3: fld qword ptr [0x92d780] */
    fp_push(*(double*)ADDR(0x92D788)); /* 0x00780DC9: fld qword ptr [0x92d788] */
    fp_push(*(double*)ADDR(0x92D790)); /* 0x00780DCF: fld qword ptr [0x92d790] */
    fp_push(*(double*)ADDR(0x92D798)); /* 0x00780DD5: fld qword ptr [0x92d798] */
    edi = MEM32(esp + 0x10); /* 0x00780DDB: mov edi, dword ptr [esp + 0x10] */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(1);
    edi = edi + 1; /* 0x00780DDF: inc edi */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(0xFFFFFFFEu);
    edi = edi & 0xFFFFFFFEu; /* 0x00780DE0: and edi, 0xfffffffe */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(esp + 0x18) = edi; /* 0x00780DE3: mov dword ptr [esp + 0x18], edi */
    fp_push((double)(int32_t)MEM32(esp + 0x18)); /* 0x00780DE7: fild dword ptr [esp + 0x18] */
    _st[4] *= _st[0]; /* 0x00780DEB: fmul st(4), st(0) */
    fp_xch(4); /* 0x00780DED: fxch st(4) */
    { double _v = fp_pop(); _st[4] -= _v; } /* 0x00780DEF: fsubp st(5) */
    fp_xch(2); /* 0x00780DF1: fxch st(2) */
    _st[0] *= _st[3]; /* 0x00780DF3: fmul st(3) */
    { double _v = fp_pop(); _st[3] -= _v; } /* 0x00780DF5: fsubp st(4) */
    _st[0] *= _st[2]; /* 0x00780DF7: fmul st(2) */
    { double _v = fp_pop(); _st[2] -= _v; } /* 0x00780DF9: fsubp st(3) */
    { double _v = fp_pop(); _st[0] *= _v; } /* 0x00780DFB: fmulp st(1) */
    { double _v = fp_pop(); _st[0] -= _v; } /* 0x00780DFD: fsubp st(1) */
    fp_st80((uint8_t*)ADDR(esp + 0x48), fp_pop()); /* 0x00780DFF: fstp xword ptr [esp + 0x48] */
    goto L_00780FE4; /* 0x00780E03: jmp 0x780fe4 */
L_00780E08:
    ecx = eax; /* 0x00780E08: mov ecx, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xF3800000u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 0xF3800000u; /* 0x00780E0A: add eax, 0xf3800000 */
    _flag_k = FK_ADD;
    if (20u) _cf = (((ecx) >> 19) & 1u); /* 0x00780E0F: shr ecx, 0x14 */
    if (20u) { _flag_a = recomp_flags_pack((ecx >> 20u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ecx = ecx >> 20u; /* 0x00780E0F: shr ecx, 0x14 */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x7FFu);
    ecx = ecx & 0x7FFu; /* 0x00780E12: and ecx, 0x7ff */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM64(esp + 0x10) = _xmm[0].u64[0]; /* 0x00780E18: movsd qword ptr [esp + 0x10], xmm0 */
    MEM32(esp + 0x14) = eax; /* 0x00780E1E: mov dword ptr [esp + 0x14], eax */
    eax = 0x51EB851Fu; /* 0x00780E22: mov eax, 0x51eb851f */
    fp_push(*(double*)ADDR(esp + 0x10)); /* 0x00780E27: fld qword ptr [esp + 0x10] */
    fp_st80((uint8_t*)ADDR(esp), fp_pop()); /* 0x00780E2B: fstp xword ptr [esp] */
    fp_push(fp_ld80((const uint8_t*)ADDR(esp))); /* 0x00780E2E: fld xword ptr [esp] */
    edi = ecx + (-0x41C); /* 0x00780E31: lea edi, [ecx - 0x41c] */
    { int64_t _r = (int64_t)(int32_t)eax * (int32_t)(edi); /* 0x00780E37: imul edi */
      eax = (uint32_t)_r; edx = (uint32_t)(_r >> 32); uint32_t _ov = _r != (int32_t)_r;
      _flag_k = FK_EFLAGS; _flag_a = _ov ? 0x801u : 0u; _flag_b = 0; _cf = _ov; }
    esi = edx; /* 0x00780E39: mov esi, edx */
    if (3u) _cf = (((esi) >> 2) & 1u); /* 0x00780E3B: sar esi, 3 */
    if (3u) { _flag_a = recomp_flags_pack(((uint32_t)((int32_t)esi >> 3u)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    esi = (uint32_t)((int32_t)esi >> 3u);
    if (31u) _cf = (((edi) >> 30) & 1u); /* 0x00780E3E: sar edi, 0x1f */
    if (31u) { _flag_a = recomp_flags_pack(((uint32_t)((int32_t)edi >> 31u)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    edi = (uint32_t)((int32_t)edi >> 31u);
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esi = esi - edi; /* 0x00780E41: sub esi, edi */
    _flag_k = FK_CMP;
    _flag_a = (uint32_t)(MEM32(esp + 0x4)); _flag_b = (uint32_t)(0xFFFFFFC0u);
    MEM32(esp + 0x4) = MEM32(esp + 0x4) & 0xFFFFFFC0u; /* 0x00780E43: and dword ptr [esp + 4], 0xffffffc0 */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(esp) = 0; /* 0x00780E48: mov dword ptr [esp], 0 */
    fp_push(fp_ld80((const uint8_t*)ADDR(esp))); /* 0x00780E4F: fld xword ptr [esp] */
    eax = (uint32_t)((int32_t)esi * (int32_t)0xFFFFFFE7u); /* 0x00780E52: imul eax, esi, -0x19 */
    _st[1] -= _st[0]; /* 0x00780E55: fsub st(1), st(0) */
    fp_xch(1); /* 0x00780E57: fxch st(1) */
    fp_st80((uint8_t*)ADDR(esp + 0x20), fp_pop()); /* 0x00780E59: fstp xword ptr [esp + 0x20] */
    edx = eax + ecx + (-0x41C); /* 0x00780E5D: lea edx, [eax + ecx - 0x41c] */
    /* cmp edx, 0x11u */ /* 0x00780E64: cmp edx, 0x11 */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(0x11u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_L(_flag_a, _flag_b)) goto L_00780EA3; /* 0x00780E67: jl 0x780ea3 */
L_00780E69:
    fp_push(*(double*)ADDR(esi * 8 + 0x92D400)); /* 0x00780E69: fld qword ptr [esi*8 + 0x92d400] */
    fp_push(*(double*)ADDR(esi * 8 + 0x92D408)); /* 0x00780E70: fld qword ptr [esi*8 + 0x92d408] */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi + 1; /* 0x00780E77: inc esi */
    _flag_k = FK_INC;
    _st[0] *= _st[2]; /* 0x00780E78: fmul st(2) */
    fp_push(fp_ld80((const uint8_t*)ADDR(esp + 0x20))); /* 0x00780E7A: fld xword ptr [esp + 0x20] */
    { double _v = fp_pop(); _st[1] *= _v; } /* 0x00780E7E: fmulp st(2) */
    { double _v = fp_pop(); _st[0] += _v; } /* 0x00780E80: faddp st(1) */
    fp_st80((uint8_t*)ADDR(esp + 0x10), fp_pop()); /* 0x00780E82: fstp xword ptr [esp + 0x10] */
    fp_push(fp_ld80((const uint8_t*)ADDR(esp + 0x10))); /* 0x00780E86: fld xword ptr [esp + 0x10] */
    _flag_a = (uint32_t)(MEM32(esp + 0x14)); _flag_b = (uint32_t)(0xFFFFFFC0u);
    MEM32(esp + 0x14) = MEM32(esp + 0x14) & 0xFFFFFFC0u; /* 0x00780E8A: and dword ptr [esp + 0x14], 0xffffffc0 */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(esp + 0x10) = 0; /* 0x00780E8F: mov dword ptr [esp + 0x10], 0 */
    fp_push(fp_ld80((const uint8_t*)ADDR(esp + 0x10))); /* 0x00780E97: fld xword ptr [esp + 0x10] */
    { double _v = fp_pop(); _st[0] -= _v; } /* 0x00780E9B: fsubp st(1) */
    fp_st80((uint8_t*)ADDR(esp + 0x48), fp_pop()); /* 0x00780E9D: fstp xword ptr [esp + 0x48] */
    goto L_00780EAD; /* 0x00780EA1: jmp 0x780ead */
L_00780EA3:
    fp_push(fp_ld80((const uint8_t*)ADDR(0x92D730))); /* 0x00780EA3: fld xword ptr [0x92d730] */
    fp_st80((uint8_t*)ADDR(esp + 0x48), fp_pop()); /* 0x00780EA9: fstp xword ptr [esp + 0x48] */
L_00780EAD:
    fp_push(*(double*)ADDR(esi * 8 + 0x92D400)); /* 0x00780EAD: fld qword ptr [esi*8 + 0x92d400] */
    fp_push(_st[1]); /* 0x00780EB4: fld st(1) */
    fp_push(*(double*)ADDR(esi * 8 + 0x92D408)); /* 0x00780EB6: fld qword ptr [esi*8 + 0x92d408] */
    _st[1] *= _st[0]; /* 0x00780EBD: fmul st(1), st(0) */
    fp_push(*(double*)ADDR(esi * 8 + 0x92D410)); /* 0x00780EBF: fld qword ptr [esi*8 + 0x92d410] */
    { double _v = fp_pop(); _st[3] *= _v; } /* 0x00780EC6: fmulp st(4) */
    fp_push(fp_ld80((const uint8_t*)ADDR(esp + 0x20))); /* 0x00780EC8: fld xword ptr [esp + 0x20] */
    _st[3] *= _st[0]; /* 0x00780ECC: fmul st(3), st(0) */
    fp_xch(2); /* 0x00780ECE: fxch st(2) */
    { double _v = fp_pop(); _st[2] += _v; } /* 0x00780ED0: faddp st(3) */
    { double _v = fp_pop(); _st[0] *= _v; } /* 0x00780ED2: fmulp st(1) */
    { double _v = fp_pop(); _st[1] += _v; } /* 0x00780ED4: faddp st(2) */
    fp_xch(1); /* 0x00780ED6: fxch st(1) */
    fp_st80((uint8_t*)ADDR(esp + 0x10), fp_pop()); /* 0x00780ED8: fstp xword ptr [esp + 0x10] */
    fp_push(fp_ld80((const uint8_t*)ADDR(esp + 0x10))); /* 0x00780EDC: fld xword ptr [esp + 0x10] */
    fp_push(fp_ld80((const uint8_t*)ADDR(esp + 0x48))); /* 0x00780EE0: fld xword ptr [esp + 0x48] */
    { double _v = fp_pop(); _st[1] += _v; } /* 0x00780EE4: faddp st(2) */
    fp_xch(1); /* 0x00780EE6: fxch st(1) */
    fp_st80((uint8_t*)ADDR(esp + 0x48), fp_pop()); /* 0x00780EE8: fstp xword ptr [esp + 0x48] */
    fp_push(fp_ld80((const uint8_t*)ADDR(esp + 0x48))); /* 0x00780EEC: fld xword ptr [esp + 0x48] */
    { double _v = fp_pop(); _st[0] += _v; } /* 0x00780EF0: faddp st(1) */
    { double _v = fp_pop(); *(double*)ADDR(esp + 0x30) = _v; } /* 0x00780EF2: fstp qword ptr [esp + 0x30] */
    _xmm[0].u64[0] = MEM64(esp + 0x30); _xmm[0].u64[1] = 0; /* 0x00780EF6: movsd xmm0, qword ptr [esp + 0x30] */
    MEM64(esp + 0x40) = _xmm[0].u64[0]; /* 0x00780EFC: movsd qword ptr [esp + 0x40], xmm0 */
    eax = MEM32(esp + 0x44); /* 0x00780F02: mov eax, dword ptr [esp + 0x44] */
    if (20u) _cf = (((eax) >> 19) & 1u); /* 0x00780F06: shr eax, 0x14 */
    if (20u) { _flag_a = recomp_flags_pack((eax >> 20u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax >> 20u; /* 0x00780F06: shr eax, 0x14 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x7FFu);
    eax = eax & 0x7FFu; /* 0x00780F09: and eax, 0x7ff */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(eax);
    _cf = (eax) != 0;
    eax = (uint32_t)(-(int32_t)eax); /* 0x00780F0E: neg eax */
    _flag_k = FK_CMP;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x433u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 0x433u; /* 0x00780F10: add eax, 0x433 */
    _flag_k = FK_ADD;
    MEM32(esp + 0x2C) = eax; /* 0x00780F15: mov dword ptr [esp + 0x2c], eax */
    PUSH32(esp, eax); /* 0x00780F19: push eax */
    PUSH32(esp, MEM32(esp + 0x48)); /* 0x00780F1A: push dword ptr [esp + 0x48] */
    PUSH32(esp, MEM32(esp + 0x48)); /* 0x00780F1E: push dword ptr [esp + 0x48] */
    RECOMP_CALL(sub_00781020); /* 0x00780F22: call 0x781020 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x00780F27: add esp, 0xc */
    _flag_k = FK_ADD;
    edi = eax; /* 0x00780F2A: mov edi, eax */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(1);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edi = edi + 1; /* 0x00780F2C: add edi, 1 */
    _flag_k = FK_ADD;
    { uint32_t _aa = edx, _ab = 0, _ac = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x00780F2F: adc edx, 0 */
      edx = _aa + _ab + _ac;
      _flag_a = recomp_flags_adc(_aa, _ab, _ac); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(0xFFFFFFFEu);
    edi = edi & 0xFFFFFFFEu; /* 0x00780F32: and edi, 0xfffffffe */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(esp + 0x44) = edx; /* 0x00780F35: mov dword ptr [esp + 0x44], edx */
    MEM32(esp + 0x40) = edi; /* 0x00780F39: mov dword ptr [esp + 0x40], edi */
    PUSH32(esp, MEM32(esp + 0x2C)); /* 0x00780F3D: push dword ptr [esp + 0x2c] */
    PUSH32(esp, edx); /* 0x00780F41: push edx */
    PUSH32(esp, edi); /* 0x00780F42: push edi */
    RECOMP_CALL(sub_00781050); /* 0x00780F43: call 0x781050 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x00780F48: add esp, 0xc */
    _flag_k = FK_ADD;
    fp_push(fp_ld80((const uint8_t*)ADDR(esp + 0x48))); /* 0x00780F4B: fld xword ptr [esp + 0x48] */
    fp_push(fp_ld80((const uint8_t*)ADDR(esp + 0x10))); /* 0x00780F4F: fld xword ptr [esp + 0x10] */
    fp_push(fp_ld80((const uint8_t*)ADDR(esp + 0x20))); /* 0x00780F53: fld xword ptr [esp + 0x20] */
    fp_push(*(double*)ADDR(esi * 8 + 0x92D418)); /* 0x00780F57: fld qword ptr [esi*8 + 0x92d418] */
    fp_push(*(double*)ADDR(esi * 8 + 0x92D420)); /* 0x00780F5E: fld qword ptr [esi*8 + 0x92d420] */
    fp_push(*(double*)ADDR(esi * 8 + 0x92D428)); /* 0x00780F65: fld qword ptr [esi*8 + 0x92d428] */
    fp_push(*(double*)ADDR(esi * 8 + 0x92D430)); /* 0x00780F6C: fld qword ptr [esi*8 + 0x92d430] */
    MEM32(esp + 0x40) = eax; /* 0x00780F73: mov dword ptr [esp + 0x40], eax */
    MEM32(esp + 0x44) = edx; /* 0x00780F77: mov dword ptr [esp + 0x44], edx */
    fp_st80((uint8_t*)ADDR(esp + 0x30), fp_pop()); /* 0x00780F7B: fstp xword ptr [esp + 0x30] */
    fp_push(*(double*)ADDR(esp + 0x40)); /* 0x00780F7F: fld qword ptr [esp + 0x40] */
    { double _v = fp_pop(); _st[5] -= _v; } /* 0x00780F83: fsubp st(6) */
    fp_xch(4); /* 0x00780F85: fxch st(4) */
    { double _v = fp_pop(); _st[4] += _v; } /* 0x00780F87: faddp st(5) */
    fp_push(_st[1]); /* 0x00780F89: fld st(1) */
    fp_xch(2); /* 0x00780F8B: fxch st(2) */
    _st[0] *= _st[3]; /* 0x00780F8D: fmul st(3) */
    fp_push(fp_ld80((const uint8_t*)ADDR(esp))); /* 0x00780F8F: fld xword ptr [esp] */
    _st[3] *= _st[0]; /* 0x00780F92: fmul st(3), st(0) */
    fp_push(*(double*)ADDR(esi * 8 + 0x92D410)); /* 0x00780F94: fld qword ptr [esi*8 + 0x92d410] */
    _st[0] *= _st[5]; /* 0x00780F9B: fmul st(5) */
    { double _v = fp_pop(); _st[3] += _v; } /* 0x00780F9D: faddp st(4) */
    fp_xch(3); /* 0x00780F9F: fxch st(3) */
    { double _v = fp_pop(); _st[5] += _v; } /* 0x00780FA1: faddp st(6) */
    fp_push(_st[1]); /* 0x00780FA3: fld st(1) */
    _st[0] *= _st[3]; /* 0x00780FA5: fmul st(3) */
    { double _v = fp_pop(); _st[0] += _v; } /* 0x00780FA7: faddp st(1) */
    { double _v = fp_pop(); _st[4] += _v; } /* 0x00780FA9: faddp st(5) */
    fp_push(_st[3]); /* 0x00780FAB: fld st(3) */
    _st[0] *= _st[2]; /* 0x00780FAD: fmul st(2) */
    fp_xch(1); /* 0x00780FAF: fxch st(1) */
    _st[0] *= _st[3]; /* 0x00780FB1: fmul st(3) */
    { double _v = fp_pop(); _st[0] += _v; } /* 0x00780FB3: faddp st(1) */
    { double _v = fp_pop(); _st[3] += _v; } /* 0x00780FB5: faddp st(4) */
    fp_xch(1); /* 0x00780FB7: fxch st(1) */
    _st[2] *= _st[0]; /* 0x00780FB9: fmul st(2), st(0) */
    fp_push(fp_ld80((const uint8_t*)ADDR(esp + 0x30))); /* 0x00780FBB: fld xword ptr [esp + 0x30] */
    fp_push(_st[0]); /* 0x00780FBF: fld st(0) */
    _st[0] *= _st[3]; /* 0x00780FC1: fmul st(3) */
    { double _v = fp_pop(); _st[3] += _v; } /* 0x00780FC3: faddp st(4) */
    fp_xch(3); /* 0x00780FC5: fxch st(3) */
    { double _v = fp_pop(); _st[3] += _v; } /* 0x00780FC7: faddp st(4) */
    { double _v = fp_pop(); _st[1] *= _v; } /* 0x00780FC9: fmulp st(2) */
    fp_push(*(double*)ADDR(esi * 8 + 0x92D438)); /* 0x00780FCB: fld qword ptr [esi*8 + 0x92d438] */
    { double _v = fp_pop(); _st[0] *= _v; } /* 0x00780FD2: fmulp st(1) */
    { double _v = fp_pop(); _st[0] += _v; } /* 0x00780FD4: faddp st(1) */
    { double _v = fp_pop(); _st[0] += _v; } /* 0x00780FD6: faddp st(1) */
    fp_push(fp_ld80((const uint8_t*)ADDR(0x92D760))); /* 0x00780FD8: fld xword ptr [0x92d760] */
    { double _v = fp_pop(); _st[0] *= _v; } /* 0x00780FDE: fmulp st(1) */
    fp_st80((uint8_t*)ADDR(esp + 0x48), fp_pop()); /* 0x00780FE0: fstp xword ptr [esp + 0x48] */
L_00780FE4:
    fp_push(fp_ld80((const uint8_t*)ADDR(esp + 0x48))); /* 0x00780FE4: fld xword ptr [esp + 0x48] */
    eax = (uint32_t)MEM16(esp + 0x3C); /* 0x00780FE8: movzx eax, word ptr [esp + 0x3c] */
    /* test eax, eax */ /* 0x00780FED: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    { double _v = fp_pop(); *(double*)ADDR(ebx) = _v; } /* 0x00780FEF: fstp qword ptr [ebx] */
    if (TEST_Z(_flag_a, _flag_b)) goto L_00780FF7; /* 0x00780FF1: je 0x780ff7 */
L_00780FF3:
    _fpu_cw = MEM16(esp + 0x3E); /* 0x00780FF3: fldcw word ptr [esp + 0x3e] */
L_00780FF7:
    if (30u) _cf = (((edi) >> 2) & 1u); /* 0x00780FF7: shl edi, 0x1e */
    if (30u) { _flag_a = recomp_flags_pack((edi << 30u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    edi = edi << 30u; /* 0x00780FF7: shl edi, 0x1e */
    eax = edi; /* 0x00780FFA: mov eax, edi */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x54u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x54u; /* 0x00780FFC: add esp, 0x54 */
    _flag_k = FK_ADD;
    ebx = POP32_VAL(esp); /* 0x00780FFF: pop ebx */
    edi = POP32_VAL(esp); /* 0x00781000: pop edi */
    esi = POP32_VAL(esp); /* 0x00781001: pop esi */
    esp = ebp; /* 0x00781002: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x00781004: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x00781005: ret  */
L_00781006:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x00781006: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebx) = 0xFFFFFFFFu; /* 0x00781008: mov dword ptr [ebx], 0xffffffff */
    MEM32(ebx + 0x4) = 0x7FFFFFFFu; /* 0x0078100E: mov dword ptr [ebx + 4], 0x7fffffff */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x54u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x54u; /* 0x00781015: add esp, 0x54 */
    _flag_k = FK_ADD;
    ebx = POP32_VAL(esp); /* 0x00781018: pop ebx */
    edi = POP32_VAL(esp); /* 0x00781019: pop edi */
    esi = POP32_VAL(esp); /* 0x0078101A: pop esi */
    esp = ebp; /* 0x0078101B: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x0078101D: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x0078101E: ret  */
    RECOMP_REGS_OUT();
}

void sub_00781020(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00781020u);

L_00781020:
    eax = MEM32(esp + 0x4); /* 0x00781020: mov eax, dword ptr [esp + 4] */
    edx = MEM32(esp + 0x8); /* 0x00781024: mov edx, dword ptr [esp + 8] */
    ecx = MEM32(esp + 0xC); /* 0x00781028: mov ecx, dword ptr [esp + 0xc] */
    /* cmp LO8(ecx), 0x40u */ /* 0x0078102C: cmp cl, 0x40 */
    _flag_a = (uint32_t)(LO8(ecx)) << 24; _flag_b = (uint32_t)(0x40u) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_AE(_flag_a, _flag_b)) goto L_00781047; /* 0x0078102F: jae 0x781047 */
L_00781031:
    /* cmp LO8(ecx), 0x20u */ /* 0x00781031: cmp cl, 0x20 */
    _flag_a = (uint32_t)(LO8(ecx)) << 24; _flag_b = (uint32_t)(0x20u) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_AE(_flag_a, _flag_b)) goto L_0078103C; /* 0x00781034: jae 0x78103c */
L_00781036:
    if ((((LO8(ecx)) & 31)) && (((LO8(ecx)) & 31)) < 32) _cf = ((((LO8(ecx)) & 31)) <= 32 ? (((eax) >> ((((LO8(ecx)) & 31)) - 1)) & 1u) : 0u); /* 0x00781036: shrd eax, edx, cl */
    if ((((LO8(ecx)) & 31)) && (((LO8(ecx)) & 31)) < 32) { _flag_a = recomp_flags_pack((((((LO8(ecx)) & 31)) && (((LO8(ecx)) & 31)) < 32) ? (((eax) >> (((LO8(ecx)) & 31))) | ((uint32_t)(edx) << (32 - (((LO8(ecx)) & 31))))) : (eax)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = (((((LO8(ecx)) & 31)) && (((LO8(ecx)) & 31)) < 32) ? (((eax) >> (((LO8(ecx)) & 31))) | ((uint32_t)(edx) << (32 - (((LO8(ecx)) & 31))))) : (eax));
    if (((LO8(ecx)) & 31)) _cf = ((((LO8(ecx)) & 31)) <= 32 ? (((edx) >> ((((LO8(ecx)) & 31)) - 1)) & 1u) : (((edx) >> 31) & 1u)); /* 0x00781039: sar edx, cl */
    if (((LO8(ecx)) & 31)) { _flag_a = recomp_flags_pack(((uint32_t)((int32_t)edx >> ((LO8(ecx)) & 31))), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    edx = (uint32_t)((int32_t)edx >> ((LO8(ecx)) & 31));
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x0078103B: ret  */
L_0078103C:
    eax = edx; /* 0x0078103C: mov eax, edx */
    if (31u) _cf = (((edx) >> 30) & 1u); /* 0x0078103E: sar edx, 0x1f */
    if (31u) { _flag_a = recomp_flags_pack(((uint32_t)((int32_t)edx >> 31u)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    edx = (uint32_t)((int32_t)edx >> 31u);
    _flag_a = (uint32_t)(LO8(ecx)) << 24; _flag_b = (uint32_t)(0x1Fu) << 24;
    SET_LO8(ecx, LO8(ecx) & 0x1Fu); /* 0x00781041: and cl, 0x1f */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (((LO8(ecx)) & 31)) _cf = ((((LO8(ecx)) & 31)) <= 32 ? (((eax) >> ((((LO8(ecx)) & 31)) - 1)) & 1u) : (((eax) >> 31) & 1u)); /* 0x00781044: sar eax, cl */
    if (((LO8(ecx)) & 31)) { _flag_a = recomp_flags_pack(((uint32_t)((int32_t)eax >> ((LO8(ecx)) & 31))), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = (uint32_t)((int32_t)eax >> ((LO8(ecx)) & 31));
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x00781046: ret  */
L_00781047:
    if (31u) _cf = (((edx) >> 30) & 1u); /* 0x00781047: sar edx, 0x1f */
    if (31u) { _flag_a = recomp_flags_pack(((uint32_t)((int32_t)edx >> 31u)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    edx = (uint32_t)((int32_t)edx >> 31u);
    eax = edx; /* 0x0078104A: mov eax, edx */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x0078104C: ret  */
    RECOMP_REGS_OUT();
}

void sub_00781050(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00781050u);

L_00781050:
    eax = MEM32(esp + 0x4); /* 0x00781050: mov eax, dword ptr [esp + 4] */
    edx = MEM32(esp + 0x8); /* 0x00781054: mov edx, dword ptr [esp + 8] */
    ecx = MEM32(esp + 0xC); /* 0x00781058: mov ecx, dword ptr [esp + 0xc] */
    /* cmp LO8(ecx), 0x40u */ /* 0x0078105C: cmp cl, 0x40 */
    _flag_a = (uint32_t)(LO8(ecx)) << 24; _flag_b = (uint32_t)(0x40u) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_AE(_flag_a, _flag_b)) goto L_00781076; /* 0x0078105F: jae 0x781076 */
L_00781061:
    /* cmp LO8(ecx), 0x20u */ /* 0x00781061: cmp cl, 0x20 */
    _flag_a = (uint32_t)(LO8(ecx)) << 24; _flag_b = (uint32_t)(0x20u) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_AE(_flag_a, _flag_b)) goto L_0078106C; /* 0x00781064: jae 0x78106c */
L_00781066:
    if ((((LO8(ecx)) & 31)) && (((LO8(ecx)) & 31)) < 32) _cf = ((((LO8(ecx)) & 31)) <= 32 ? (((edx) >> (32 - (((LO8(ecx)) & 31)))) & 1u) : 0u); /* 0x00781066: shld edx, eax, cl */
    if ((((LO8(ecx)) & 31)) && (((LO8(ecx)) & 31)) < 32) { _flag_a = recomp_flags_pack((((((LO8(ecx)) & 31)) && (((LO8(ecx)) & 31)) < 32) ? (((edx) << (((LO8(ecx)) & 31))) | ((uint32_t)(eax) >> (32 - (((LO8(ecx)) & 31))))) : (edx)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    edx = (((((LO8(ecx)) & 31)) && (((LO8(ecx)) & 31)) < 32) ? (((edx) << (((LO8(ecx)) & 31))) | ((uint32_t)(eax) >> (32 - (((LO8(ecx)) & 31))))) : (edx));
    if (((LO8(ecx)) & 31)) _cf = ((((LO8(ecx)) & 31)) <= 32 ? (((eax) >> (32 - (((LO8(ecx)) & 31)))) & 1u) : 0u); /* 0x00781069: shl eax, cl */
    if (((LO8(ecx)) & 31)) { _flag_a = recomp_flags_pack((eax << ((LO8(ecx)) & 31)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax << ((LO8(ecx)) & 31); /* 0x00781069: shl eax, cl */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x0078106B: ret  */
L_0078106C:
    edx = eax; /* 0x0078106C: mov edx, eax */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x0078106E: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(LO8(ecx)) << 24; _flag_b = (uint32_t)(0x1Fu) << 24;
    SET_LO8(ecx, LO8(ecx) & 0x1Fu); /* 0x00781070: and cl, 0x1f */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (((LO8(ecx)) & 31)) _cf = ((((LO8(ecx)) & 31)) <= 32 ? (((edx) >> (32 - (((LO8(ecx)) & 31)))) & 1u) : 0u); /* 0x00781073: shl edx, cl */
    if (((LO8(ecx)) & 31)) { _flag_a = recomp_flags_pack((edx << ((LO8(ecx)) & 31)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    edx = edx << ((LO8(ecx)) & 31); /* 0x00781073: shl edx, cl */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x00781075: ret  */
L_00781076:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x00781076: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edx = 0; /* 0x00781078: xor edx, edx */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x0078107A: ret  */
    RECOMP_REGS_OUT();
}

void sub_00781080(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00781080u);

L_00781080:
    PUSH32(esp, ebp); /* 0x00781080: push ebp */
    ebp = esp; /* 0x00781081: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xFFFFFFF0u);
    esp = esp & 0xFFFFFFF0u; /* 0x00781083: and esp, 0xfffffff0 */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, esi); /* 0x00781086: push esi */
    PUSH32(esp, edi); /* 0x00781087: push edi */
    PUSH32(esp, ebx); /* 0x00781088: push ebx */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x54u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x54u; /* 0x00781089: sub esp, 0x54 */
    _flag_k = FK_CMP;
    eax = 0x7FF00000u; /* 0x0078108C: mov eax, 0x7ff00000 */
    edx = MEM32(ebp + 0xC); /* 0x00781091: mov edx, dword ptr [ebp + 0xc] */
    ebx = MEM32(ebp + 0x10); /* 0x00781094: mov ebx, dword ptr [ebp + 0x10] */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    edx = edx - eax; /* 0x00781097: sub edx, eax */
    _flag_k = FK_CMP;
    if (/* sub result */ CMP_GE(_flag_a, _flag_b)) goto L_00781357; /* 0x00781099: jge 0x781357 */
L_0078109F:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x0078109F: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM16(esp + 0x3C) = (uint16_t)(LO16(eax)); /* 0x007810A1: mov word ptr [esp + 0x3c], ax */
    MEM16(esp + 0x3E) = _fpu_cw; /* 0x007810A6: fnstcw word ptr [esp + 0x3e] */
    edx = (uint32_t)MEM16(esp + 0x3E); /* 0x007810AA: movzx edx, word ptr [esp + 0x3e] */
    eax = edx; /* 0x007810AF: mov eax, edx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xF00u);
    eax = eax & 0xF00u; /* 0x007810B1: and eax, 0xf00 */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp eax, 0x300u */ /* 0x007810B6: cmp eax, 0x300 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x300u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_007810D2; /* 0x007810BB: je 0x7810d2 */
L_007810BD:
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(0xFFFFF0FFu);
    edx = edx & 0xFFFFF0FFu; /* 0x007810BD: and edx, 0xfffff0ff */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)((edx | 0xFFFF0300u)); _flag_b = (uint32_t)((edx | 0xFFFF0300u));
    edx = edx | 0xFFFF0300u; /* 0x007810C3: or edx, 0xffff0300 */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM16(esp + 0x3C) = (uint16_t)(LO16(edx)); /* 0x007810C9: mov word ptr [esp + 0x3c], dx */
    _fpu_cw = MEM16(esp + 0x3C); /* 0x007810CE: fldcw word ptr [esp + 0x3c] */
L_007810D2:
    fp_push(*(double*)ADDR(ebp + 0x8)); /* 0x007810D2: fld qword ptr [ebp + 8] */
    _xmm[0].u64[0] = MEM64(ebp + 0x8); _xmm[0].u64[1] = 0; /* 0x007810D5: movsd xmm0, qword ptr [ebp + 8] */
    eax = MEM32(ebp + 0xC); /* 0x007810DA: mov eax, dword ptr [ebp + 0xc] */
    fp_st80((uint8_t*)ADDR(esp + 0x48), fp_pop()); /* 0x007810DD: fstp xword ptr [esp + 0x48] */
    /* cmp MEM32(ebp + 0xC), 0x40FF4000u */ /* 0x007810E1: cmp dword ptr [ebp + 0xc], 0x40ff4000 */
    _flag_a = (uint32_t)(MEM32(ebp + 0xC)); _flag_b = (uint32_t)(0x40FF4000u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_AE(_flag_a, _flag_b)) goto L_00781157; /* 0x007810E8: jae 0x781157 */
L_007810EA:
    fp_push(fp_ld80((const uint8_t*)ADDR(0x92D770))); /* 0x007810EA: fld xword ptr [0x92d770] */
    fp_push(fp_ld80((const uint8_t*)ADDR(esp + 0x48))); /* 0x007810F0: fld xword ptr [esp + 0x48] */
    _st[1] *= _st[0]; /* 0x007810F4: fmul st(1), st(0) */
    fp_xch(1); /* 0x007810F6: fxch st(1) */
    MEM16(esp) = _fpu_cw; /* 0x007810F8: fnstcw word ptr [esp] */
    eax = (uint32_t)MEM16(esp); /* 0x007810FB: movzx eax, word ptr [esp] */
    _flag_a = (uint32_t)((eax | 0xC00u)); _flag_b = (uint32_t)((eax | 0xC00u));
    eax = eax | 0xC00u; /* 0x007810FF: or eax, 0xc00 */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(esp + 0x8) = eax; /* 0x00781104: mov dword ptr [esp + 8], eax */
    _fpu_cw = MEM16(esp + 0x8); /* 0x00781108: fldcw word ptr [esp + 8] */
    MEM32(esp + 0x10) = (uint32_t)(int32_t)fp_to_int(fp_pop()); /* 0x0078110C: fistp dword ptr [esp + 0x10] */
    _fpu_cw = MEM16(esp); /* 0x00781110: fldcw word ptr [esp] */
    fp_push(*(double*)ADDR(0x92D780)); /* 0x00781113: fld qword ptr [0x92d780] */
    fp_push(*(double*)ADDR(0x92D788)); /* 0x00781119: fld qword ptr [0x92d788] */
    fp_push(*(double*)ADDR(0x92D790)); /* 0x0078111F: fld qword ptr [0x92d790] */
    fp_push(*(double*)ADDR(0x92D798)); /* 0x00781125: fld qword ptr [0x92d798] */
    edi = MEM32(esp + 0x10); /* 0x0078112B: mov edi, dword ptr [esp + 0x10] */
    _flag_a = (uint32_t)((edi | 1)); _flag_b = (uint32_t)((edi | 1));
    edi = edi | 1; /* 0x0078112F: or edi, 1 */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(esp + 0x18) = edi; /* 0x00781132: mov dword ptr [esp + 0x18], edi */
    fp_push((double)(int32_t)MEM32(esp + 0x18)); /* 0x00781136: fild dword ptr [esp + 0x18] */
    _st[4] *= _st[0]; /* 0x0078113A: fmul st(4), st(0) */
    fp_xch(4); /* 0x0078113C: fxch st(4) */
    { double _v = fp_pop(); _st[4] -= _v; } /* 0x0078113E: fsubp st(5) */
    fp_xch(2); /* 0x00781140: fxch st(2) */
    _st[0] *= _st[3]; /* 0x00781142: fmul st(3) */
    { double _v = fp_pop(); _st[3] -= _v; } /* 0x00781144: fsubp st(4) */
    _st[0] *= _st[2]; /* 0x00781146: fmul st(2) */
    { double _v = fp_pop(); _st[2] -= _v; } /* 0x00781148: fsubp st(3) */
    { double _v = fp_pop(); _st[0] *= _v; } /* 0x0078114A: fmulp st(1) */
    { double _v = fp_pop(); _st[0] -= _v; } /* 0x0078114C: fsubp st(1) */
    fp_st80((uint8_t*)ADDR(esp + 0x48), fp_pop()); /* 0x0078114E: fstp xword ptr [esp + 0x48] */
    goto L_0078132D; /* 0x00781152: jmp 0x78132d */
L_00781157:
    ecx = eax; /* 0x00781157: mov ecx, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xF3800000u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 0xF3800000u; /* 0x00781159: add eax, 0xf3800000 */
    _flag_k = FK_ADD;
    if (20u) _cf = (((ecx) >> 19) & 1u); /* 0x0078115E: shr ecx, 0x14 */
    if (20u) { _flag_a = recomp_flags_pack((ecx >> 20u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ecx = ecx >> 20u; /* 0x0078115E: shr ecx, 0x14 */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x7FFu);
    ecx = ecx & 0x7FFu; /* 0x00781161: and ecx, 0x7ff */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM64(esp + 0x10) = _xmm[0].u64[0]; /* 0x00781167: movsd qword ptr [esp + 0x10], xmm0 */
    MEM32(esp + 0x14) = eax; /* 0x0078116D: mov dword ptr [esp + 0x14], eax */
    eax = 0x51EB851Fu; /* 0x00781171: mov eax, 0x51eb851f */
    fp_push(*(double*)ADDR(esp + 0x10)); /* 0x00781176: fld qword ptr [esp + 0x10] */
    fp_st80((uint8_t*)ADDR(esp), fp_pop()); /* 0x0078117A: fstp xword ptr [esp] */
    fp_push(fp_ld80((const uint8_t*)ADDR(esp))); /* 0x0078117D: fld xword ptr [esp] */
    edi = ecx + (-0x41C); /* 0x00781180: lea edi, [ecx - 0x41c] */
    { int64_t _r = (int64_t)(int32_t)eax * (int32_t)(edi); /* 0x00781186: imul edi */
      eax = (uint32_t)_r; edx = (uint32_t)(_r >> 32); uint32_t _ov = _r != (int32_t)_r;
      _flag_k = FK_EFLAGS; _flag_a = _ov ? 0x801u : 0u; _flag_b = 0; _cf = _ov; }
    esi = edx; /* 0x00781188: mov esi, edx */
    if (3u) _cf = (((esi) >> 2) & 1u); /* 0x0078118A: sar esi, 3 */
    if (3u) { _flag_a = recomp_flags_pack(((uint32_t)((int32_t)esi >> 3u)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    esi = (uint32_t)((int32_t)esi >> 3u);
    if (31u) _cf = (((edi) >> 30) & 1u); /* 0x0078118D: sar edi, 0x1f */
    if (31u) { _flag_a = recomp_flags_pack(((uint32_t)((int32_t)edi >> 31u)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    edi = (uint32_t)((int32_t)edi >> 31u);
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esi = esi - edi; /* 0x00781190: sub esi, edi */
    _flag_k = FK_CMP;
    _flag_a = (uint32_t)(MEM32(esp + 0x4)); _flag_b = (uint32_t)(0xFFFFFFC0u);
    MEM32(esp + 0x4) = MEM32(esp + 0x4) & 0xFFFFFFC0u; /* 0x00781192: and dword ptr [esp + 4], 0xffffffc0 */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(esp) = 0; /* 0x00781197: mov dword ptr [esp], 0 */
    fp_push(fp_ld80((const uint8_t*)ADDR(esp))); /* 0x0078119E: fld xword ptr [esp] */
    eax = (uint32_t)((int32_t)esi * (int32_t)0xFFFFFFE7u); /* 0x007811A1: imul eax, esi, -0x19 */
    _st[1] -= _st[0]; /* 0x007811A4: fsub st(1), st(0) */
    fp_xch(1); /* 0x007811A6: fxch st(1) */
    fp_st80((uint8_t*)ADDR(esp + 0x20), fp_pop()); /* 0x007811A8: fstp xword ptr [esp + 0x20] */
    edx = eax + ecx + (-0x41C); /* 0x007811AC: lea edx, [eax + ecx - 0x41c] */
    /* cmp edx, 0x11u */ /* 0x007811B3: cmp edx, 0x11 */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(0x11u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_L(_flag_a, _flag_b)) goto L_007811F2; /* 0x007811B6: jl 0x7811f2 */
L_007811B8:
    fp_push(*(double*)ADDR(esi * 8 + 0x92D400)); /* 0x007811B8: fld qword ptr [esi*8 + 0x92d400] */
    fp_push(*(double*)ADDR(esi * 8 + 0x92D408)); /* 0x007811BF: fld qword ptr [esi*8 + 0x92d408] */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi + 1; /* 0x007811C6: inc esi */
    _flag_k = FK_INC;
    _st[0] *= _st[2]; /* 0x007811C7: fmul st(2) */
    fp_push(fp_ld80((const uint8_t*)ADDR(esp + 0x20))); /* 0x007811C9: fld xword ptr [esp + 0x20] */
    { double _v = fp_pop(); _st[1] *= _v; } /* 0x007811CD: fmulp st(2) */
    { double _v = fp_pop(); _st[0] += _v; } /* 0x007811CF: faddp st(1) */
    fp_st80((uint8_t*)ADDR(esp + 0x10), fp_pop()); /* 0x007811D1: fstp xword ptr [esp + 0x10] */
    fp_push(fp_ld80((const uint8_t*)ADDR(esp + 0x10))); /* 0x007811D5: fld xword ptr [esp + 0x10] */
    _flag_a = (uint32_t)(MEM32(esp + 0x14)); _flag_b = (uint32_t)(0xFFFFFFC0u);
    MEM32(esp + 0x14) = MEM32(esp + 0x14) & 0xFFFFFFC0u; /* 0x007811D9: and dword ptr [esp + 0x14], 0xffffffc0 */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(esp + 0x10) = 0; /* 0x007811DE: mov dword ptr [esp + 0x10], 0 */
    fp_push(fp_ld80((const uint8_t*)ADDR(esp + 0x10))); /* 0x007811E6: fld xword ptr [esp + 0x10] */
    { double _v = fp_pop(); _st[0] -= _v; } /* 0x007811EA: fsubp st(1) */
    fp_st80((uint8_t*)ADDR(esp + 0x48), fp_pop()); /* 0x007811EC: fstp xword ptr [esp + 0x48] */
    goto L_007811FC; /* 0x007811F0: jmp 0x7811fc */
L_007811F2:
    fp_push(fp_ld80((const uint8_t*)ADDR(0x92D740))); /* 0x007811F2: fld xword ptr [0x92d740] */
    fp_st80((uint8_t*)ADDR(esp + 0x48), fp_pop()); /* 0x007811F8: fstp xword ptr [esp + 0x48] */
L_007811FC:
    fp_push(*(double*)ADDR(esi * 8 + 0x92D400)); /* 0x007811FC: fld qword ptr [esi*8 + 0x92d400] */
    fp_push(_st[1]); /* 0x00781203: fld st(1) */
    fp_push(*(double*)ADDR(esi * 8 + 0x92D408)); /* 0x00781205: fld qword ptr [esi*8 + 0x92d408] */
    _st[1] *= _st[0]; /* 0x0078120C: fmul st(1), st(0) */
    fp_push(*(double*)ADDR(esi * 8 + 0x92D410)); /* 0x0078120E: fld qword ptr [esi*8 + 0x92d410] */
    { double _v = fp_pop(); _st[3] *= _v; } /* 0x00781215: fmulp st(4) */
    fp_push(fp_ld80((const uint8_t*)ADDR(esp + 0x20))); /* 0x00781217: fld xword ptr [esp + 0x20] */
    _st[3] *= _st[0]; /* 0x0078121B: fmul st(3), st(0) */
    fp_xch(2); /* 0x0078121D: fxch st(2) */
    { double _v = fp_pop(); _st[2] += _v; } /* 0x0078121F: faddp st(3) */
    { double _v = fp_pop(); _st[0] *= _v; } /* 0x00781221: fmulp st(1) */
    { double _v = fp_pop(); _st[1] += _v; } /* 0x00781223: faddp st(2) */
    fp_xch(1); /* 0x00781225: fxch st(1) */
    fp_st80((uint8_t*)ADDR(esp + 0x10), fp_pop()); /* 0x00781227: fstp xword ptr [esp + 0x10] */
    fp_push(fp_ld80((const uint8_t*)ADDR(esp + 0x10))); /* 0x0078122B: fld xword ptr [esp + 0x10] */
    fp_push(fp_ld80((const uint8_t*)ADDR(esp + 0x48))); /* 0x0078122F: fld xword ptr [esp + 0x48] */
    { double _v = fp_pop(); _st[1] += _v; } /* 0x00781233: faddp st(2) */
    fp_xch(1); /* 0x00781235: fxch st(1) */
    fp_st80((uint8_t*)ADDR(esp + 0x48), fp_pop()); /* 0x00781237: fstp xword ptr [esp + 0x48] */
    fp_push(fp_ld80((const uint8_t*)ADDR(esp + 0x48))); /* 0x0078123B: fld xword ptr [esp + 0x48] */
    { double _v = fp_pop(); _st[0] += _v; } /* 0x0078123F: faddp st(1) */
    { double _v = fp_pop(); *(double*)ADDR(esp + 0x30) = _v; } /* 0x00781241: fstp qword ptr [esp + 0x30] */
    _xmm[0].u64[0] = MEM64(esp + 0x30); _xmm[0].u64[1] = 0; /* 0x00781245: movsd xmm0, qword ptr [esp + 0x30] */
    MEM64(esp + 0x40) = _xmm[0].u64[0]; /* 0x0078124B: movsd qword ptr [esp + 0x40], xmm0 */
    eax = MEM32(esp + 0x44); /* 0x00781251: mov eax, dword ptr [esp + 0x44] */
    if (20u) _cf = (((eax) >> 19) & 1u); /* 0x00781255: shr eax, 0x14 */
    if (20u) { _flag_a = recomp_flags_pack((eax >> 20u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax >> 20u; /* 0x00781255: shr eax, 0x14 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x7FFu);
    eax = eax & 0x7FFu; /* 0x00781258: and eax, 0x7ff */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(eax);
    _cf = (eax) != 0;
    eax = (uint32_t)(-(int32_t)eax); /* 0x0078125D: neg eax */
    _flag_k = FK_CMP;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x433u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 0x433u; /* 0x0078125F: add eax, 0x433 */
    _flag_k = FK_ADD;
    MEM32(esp + 0x2C) = eax; /* 0x00781264: mov dword ptr [esp + 0x2c], eax */
    PUSH32(esp, eax); /* 0x00781268: push eax */
    PUSH32(esp, MEM32(esp + 0x48)); /* 0x00781269: push dword ptr [esp + 0x48] */
    PUSH32(esp, MEM32(esp + 0x48)); /* 0x0078126D: push dword ptr [esp + 0x48] */
    RECOMP_CALL(sub_00781020); /* 0x00781271: call 0x781020 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x00781276: add esp, 0xc */
    _flag_k = FK_ADD;
    edi = eax; /* 0x00781279: mov edi, eax */
    _flag_a = (uint32_t)((edi | 1)); _flag_b = (uint32_t)((edi | 1));
    edi = edi | 1; /* 0x0078127B: or edi, 1 */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(esp + 0x44) = edx; /* 0x0078127E: mov dword ptr [esp + 0x44], edx */
    MEM32(esp + 0x40) = edi; /* 0x00781282: mov dword ptr [esp + 0x40], edi */
    PUSH32(esp, MEM32(esp + 0x2C)); /* 0x00781286: push dword ptr [esp + 0x2c] */
    PUSH32(esp, edx); /* 0x0078128A: push edx */
    PUSH32(esp, edi); /* 0x0078128B: push edi */
    RECOMP_CALL(sub_00781050); /* 0x0078128C: call 0x781050 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x00781291: add esp, 0xc */
    _flag_k = FK_ADD;
    fp_push(fp_ld80((const uint8_t*)ADDR(esp + 0x48))); /* 0x00781294: fld xword ptr [esp + 0x48] */
    fp_push(fp_ld80((const uint8_t*)ADDR(esp + 0x10))); /* 0x00781298: fld xword ptr [esp + 0x10] */
    fp_push(fp_ld80((const uint8_t*)ADDR(esp + 0x20))); /* 0x0078129C: fld xword ptr [esp + 0x20] */
    fp_push(*(double*)ADDR(esi * 8 + 0x92D418)); /* 0x007812A0: fld qword ptr [esi*8 + 0x92d418] */
    fp_push(*(double*)ADDR(esi * 8 + 0x92D420)); /* 0x007812A7: fld qword ptr [esi*8 + 0x92d420] */
    fp_push(*(double*)ADDR(esi * 8 + 0x92D428)); /* 0x007812AE: fld qword ptr [esi*8 + 0x92d428] */
    fp_push(*(double*)ADDR(esi * 8 + 0x92D430)); /* 0x007812B5: fld qword ptr [esi*8 + 0x92d430] */
    MEM32(esp + 0x40) = eax; /* 0x007812BC: mov dword ptr [esp + 0x40], eax */
    MEM32(esp + 0x44) = edx; /* 0x007812C0: mov dword ptr [esp + 0x44], edx */
    fp_st80((uint8_t*)ADDR(esp + 0x30), fp_pop()); /* 0x007812C4: fstp xword ptr [esp + 0x30] */
    fp_push(*(double*)ADDR(esp + 0x40)); /* 0x007812C8: fld qword ptr [esp + 0x40] */
    { double _v = fp_pop(); _st[5] -= _v; } /* 0x007812CC: fsubp st(6) */
    fp_xch(4); /* 0x007812CE: fxch st(4) */
    { double _v = fp_pop(); _st[4] += _v; } /* 0x007812D0: faddp st(5) */
    fp_push(_st[1]); /* 0x007812D2: fld st(1) */
    fp_xch(2); /* 0x007812D4: fxch st(2) */
    _st[0] *= _st[3]; /* 0x007812D6: fmul st(3) */
    fp_push(fp_ld80((const uint8_t*)ADDR(esp))); /* 0x007812D8: fld xword ptr [esp] */
    _st[3] *= _st[0]; /* 0x007812DB: fmul st(3), st(0) */
    fp_push(*(double*)ADDR(esi * 8 + 0x92D410)); /* 0x007812DD: fld qword ptr [esi*8 + 0x92d410] */
    _st[0] *= _st[5]; /* 0x007812E4: fmul st(5) */
    { double _v = fp_pop(); _st[3] += _v; } /* 0x007812E6: faddp st(4) */
    fp_xch(3); /* 0x007812E8: fxch st(3) */
    { double _v = fp_pop(); _st[5] += _v; } /* 0x007812EA: faddp st(6) */
    fp_push(_st[1]); /* 0x007812EC: fld st(1) */
    _st[0] *= _st[3]; /* 0x007812EE: fmul st(3) */
    { double _v = fp_pop(); _st[0] += _v; } /* 0x007812F0: faddp st(1) */
    { double _v = fp_pop(); _st[4] += _v; } /* 0x007812F2: faddp st(5) */
    fp_push(_st[3]); /* 0x007812F4: fld st(3) */
    _st[0] *= _st[2]; /* 0x007812F6: fmul st(2) */
    fp_xch(1); /* 0x007812F8: fxch st(1) */
    _st[0] *= _st[3]; /* 0x007812FA: fmul st(3) */
    { double _v = fp_pop(); _st[0] += _v; } /* 0x007812FC: faddp st(1) */
    { double _v = fp_pop(); _st[3] += _v; } /* 0x007812FE: faddp st(4) */
    fp_xch(1); /* 0x00781300: fxch st(1) */
    _st[2] *= _st[0]; /* 0x00781302: fmul st(2), st(0) */
    fp_push(fp_ld80((const uint8_t*)ADDR(esp + 0x30))); /* 0x00781304: fld xword ptr [esp + 0x30] */
    fp_push(_st[0]); /* 0x00781308: fld st(0) */
    _st[0] *= _st[3]; /* 0x0078130A: fmul st(3) */
    { double _v = fp_pop(); _st[3] += _v; } /* 0x0078130C: faddp st(4) */
    fp_xch(3); /* 0x0078130E: fxch st(3) */
    { double _v = fp_pop(); _st[3] += _v; } /* 0x00781310: faddp st(4) */
    { double _v = fp_pop(); _st[1] *= _v; } /* 0x00781312: fmulp st(2) */
    fp_push(*(double*)ADDR(esi * 8 + 0x92D438)); /* 0x00781314: fld qword ptr [esi*8 + 0x92d438] */
    { double _v = fp_pop(); _st[0] *= _v; } /* 0x0078131B: fmulp st(1) */
    { double _v = fp_pop(); _st[0] += _v; } /* 0x0078131D: faddp st(1) */
    { double _v = fp_pop(); _st[0] += _v; } /* 0x0078131F: faddp st(1) */
    fp_push(fp_ld80((const uint8_t*)ADDR(0x92D760))); /* 0x00781321: fld xword ptr [0x92d760] */
    { double _v = fp_pop(); _st[0] *= _v; } /* 0x00781327: fmulp st(1) */
    fp_st80((uint8_t*)ADDR(esp + 0x48), fp_pop()); /* 0x00781329: fstp xword ptr [esp + 0x48] */
L_0078132D:
    fp_push(fp_ld80((const uint8_t*)ADDR(esp + 0x48))); /* 0x0078132D: fld xword ptr [esp + 0x48] */
    eax = (uint32_t)MEM16(esp + 0x3C); /* 0x00781331: movzx eax, word ptr [esp + 0x3c] */
    /* test eax, eax */ /* 0x00781336: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    { double _v = fp_pop(); *(double*)ADDR(ebx) = _v; } /* 0x00781338: fstp qword ptr [ebx] */
    if (TEST_Z(_flag_a, _flag_b)) goto L_00781340; /* 0x0078133A: je 0x781340 */
L_0078133C:
    _fpu_cw = MEM16(esp + 0x3E); /* 0x0078133C: fldcw word ptr [esp + 0x3e] */
L_00781340:
    if (30u) _cf = (((edi) >> 2) & 1u); /* 0x00781340: shl edi, 0x1e */
    if (30u) { _flag_a = recomp_flags_pack((edi << 30u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    edi = edi << 30u; /* 0x00781340: shl edi, 0x1e */
    edi = ~edi; /* 0x00781343: not edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(0x80000000u);
    edi = edi & 0x80000000u; /* 0x00781345: and edi, 0x80000000 */
    _cf = 0;
    _flag_k = FK_TEST;
    eax = edi; /* 0x0078134B: mov eax, edi */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x54u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x54u; /* 0x0078134D: add esp, 0x54 */
    _flag_k = FK_ADD;
    ebx = POP32_VAL(esp); /* 0x00781350: pop ebx */
    edi = POP32_VAL(esp); /* 0x00781351: pop edi */
    esi = POP32_VAL(esp); /* 0x00781352: pop esi */
    esp = ebp; /* 0x00781353: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x00781355: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x00781356: ret  */
L_00781357:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x00781357: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebx) = 0xFFFFFFFFu; /* 0x00781359: mov dword ptr [ebx], 0xffffffff */
    MEM32(ebx + 0x4) = 0x7FFFFFFFu; /* 0x0078135F: mov dword ptr [ebx + 4], 0x7fffffff */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x54u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x54u; /* 0x00781366: add esp, 0x54 */
    _flag_k = FK_ADD;
    ebx = POP32_VAL(esp); /* 0x00781369: pop ebx */
    edi = POP32_VAL(esp); /* 0x0078136A: pop edi */
    esi = POP32_VAL(esp); /* 0x0078136B: pop esi */
    esp = ebp; /* 0x0078136C: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x0078136E: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x0078136F: ret  */
    RECOMP_REGS_OUT();
}

void sub_00781680(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00781680u);

L_00781680:
    eax = MEM32(ebp + (-0x10)); /* 0x00781680: mov eax, dword ptr [ebp - 0x10] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax & 1; /* 0x00781683: and eax, 1 */
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_00781698; /* 0x00781686: je 0x781698 */
L_0078168C:
    _flag_a = (uint32_t)(MEM32(ebp + (-0x10))); _flag_b = (uint32_t)(0xFFFFFFFEu);
    MEM32(ebp + (-0x10)) = MEM32(ebp + (-0x10)) & 0xFFFFFFFEu; /* 0x0078168C: and dword ptr [ebp - 0x10], 0xfffffffe */
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = MEM32(ebp + 0x8); /* 0x00781690: mov ecx, dword ptr [ebp + 8] */
    goto L_0040A000; /* 0x00781693: jmp 0x40a000 */
L_00781698:
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x00781698: ret  */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_00781699(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00781699u);

    goto L_00781699;
L_0078001C:
    { _itail_tgt = (uint32_t)(MEM32(0x7CC670)); goto _ljump; }
L_00781699:
    edx = MEM32(esp + 0x8); /* 0x00781699: mov edx, dword ptr [esp + 8] */
    eax = edx + 0xC; /* 0x0078169D: lea eax, [edx + 0xc] */
    ecx = MEM32(edx + (-0x10)); /* 0x007816A0: mov ecx, dword ptr [edx - 0x10] */
    _flag_a = (uint32_t)((ecx ^ eax)); _flag_b = (uint32_t)((ecx ^ eax));
    ecx = ecx ^ eax; /* 0x007816A3: xor ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_0077F4C2); /* 0x007816A5: call 0x77f4c2 */
    RECOMP_FLAGS_IN();
    eax = 0x0080E958u; /* 0x007816AA: mov eax, 0x80e958 */
    RECOMP_BACKEDGE();
    goto L_0078001C; /* 0x007816AF: jmp 0x78001c */
    { RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_007816C0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007816C0u);

L_007816C0:
    ecx = MEM32(ebp + (-0x10)); /* 0x007816C0: mov ecx, dword ptr [ebp - 0x10] */
    goto L_004099E0; /* 0x007816C3: jmp 0x4099e0 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_004099E0: RECOMP_ITAIL(0x004099E0u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}
