#define RECOMP_GENERATED_CODE

#include "functions.h"

extern void void_input_mouse_observed(uint32_t buttons);

void sub_0061C8B0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0061C8B0u);

L_0061C8B0:
    RECOMP_ICALL(MEM32(0x7CC9AC)); /* 0x0061C8B0: call dword ptr [0x7cc9ac] */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x0061C8B6: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_0061C8C8; /* 0x0061C8B8: jne 0x61c8c8 */
L_0061C8BA:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x0061C8BA: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    eax = MEM32(ecx); /* 0x0061C8BC: mov eax, dword ptr [ecx] */
    RECOMP_ICALL(MEM32(eax + 0x8)); /* 0x0061C8BE: call dword ptr [eax + 8] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax - 1; /* 0x0061C8C1: dec eax */
    _flag_k = FK_DEC;
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(eax);
    _cf = (eax) != 0;
    eax = (uint32_t)(-(int32_t)eax); /* 0x0061C8C2: neg eax */
    _flag_k = FK_CMP;
    { uint32_t _sa = eax, _sb = eax, _sc = (uint32_t)CMP_B(_flag_a, _flag_b); /* 0x0061C8C4: sbb eax, eax */
      eax = _sc ? 0xFFFFFFFFu : 0;
      _flag_a = recomp_flags_sbb(_sa, _sb, _sc); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x0061C8C6: inc eax */
    _flag_k = FK_INC;
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x0061C8C7: ret  */
L_0061C8C8:
    ecx = MEM32(0x927B28); /* 0x0061C8C8: mov ecx, dword ptr [0x927b28] */
    /* test ecx, ecx */ /* 0x0061C8CE: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_0061C8E2; /* 0x0061C8D0: jne 0x61c8e2 */
L_0061C8D2:
    ecx = 0x00927AE8u; /* 0x0061C8D2: mov ecx, 0x927ae8 */
    RECOMP_CALL(sub_00431ED0); /* 0x0061C8D7: call 0x431ed0 */
    RECOMP_FLAGS_IN();
    ecx = MEM32(0x927B28); /* 0x0061C8DC: mov ecx, dword ptr [0x927b28] */
L_0061C8E2:
    eax = MEM32(ecx); /* 0x0061C8E2: mov eax, dword ptr [ecx] */
    RECOMP_ICALL(MEM32(eax + 0x8)); /* 0x0061C8E4: call dword ptr [eax + 8] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax - 1; /* 0x0061C8E7: dec eax */
    _flag_k = FK_DEC;
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(eax);
    _cf = (eax) != 0;
    eax = (uint32_t)(-(int32_t)eax); /* 0x0061C8E8: neg eax */
    _flag_k = FK_CMP;
    { uint32_t _sa = eax, _sb = eax, _sc = (uint32_t)CMP_B(_flag_a, _flag_b); /* 0x0061C8EA: sbb eax, eax */
      eax = _sc ? 0xFFFFFFFFu : 0;
      _flag_a = recomp_flags_sbb(_sa, _sb, _sc); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x0061C8EC: inc eax */
    _flag_k = FK_INC;
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x0061C8ED: ret  */
    RECOMP_REGS_OUT();
}

void sub_0061C8F0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0061C8F0u);

L_0061C8F0:
    PUSH32(esp, esi); /* 0x0061C8F0: push esi */
    esi = MEM32(0x7CC9AC); /* 0x0061C8F1: mov esi, dword ptr [0x7cc9ac] */
    RECOMP_ICALL(esi); /* 0x0061C8F7: call esi */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x0061C8F9: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_0061C901; /* 0x0061C8FB: jne 0x61c901 */
L_0061C8FD:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x0061C8FD: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_0061C91B; /* 0x0061C8FF: jmp 0x61c91b */
L_0061C901:
    ecx = MEM32(0x927B28); /* 0x0061C901: mov ecx, dword ptr [0x927b28] */
    /* test ecx, ecx */ /* 0x0061C907: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_0061C91B; /* 0x0061C909: jne 0x61c91b */
L_0061C90B:
    ecx = 0x00927AE8u; /* 0x0061C90B: mov ecx, 0x927ae8 */
    RECOMP_CALL(sub_00431ED0); /* 0x0061C910: call 0x431ed0 */
    RECOMP_FLAGS_IN();
    ecx = MEM32(0x927B28); /* 0x0061C915: mov ecx, dword ptr [0x927b28] */
L_0061C91B:
    eax = MEM32(ecx); /* 0x0061C91B: mov eax, dword ptr [ecx] */
    RECOMP_ICALL(MEM32(eax + 0x8)); /* 0x0061C91D: call dword ptr [eax + 8] */
    RECOMP_FLAGS_IN();
    /* cmp eax, 3 */ /* 0x0061C920: cmp eax, 3 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(3);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_0061C9D5; /* 0x0061C923: je 0x61c9d5 */
L_0061C929:
    RECOMP_ICALL(esi); /* 0x0061C929: call esi */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x0061C92B: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_0061C933; /* 0x0061C92D: jne 0x61c933 */
L_0061C92F:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x0061C92F: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_0061C94D; /* 0x0061C931: jmp 0x61c94d */
L_0061C933:
    ecx = MEM32(0x927B28); /* 0x0061C933: mov ecx, dword ptr [0x927b28] */
    /* test ecx, ecx */ /* 0x0061C939: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_0061C94D; /* 0x0061C93B: jne 0x61c94d */
L_0061C93D:
    ecx = 0x00927AE8u; /* 0x0061C93D: mov ecx, 0x927ae8 */
    RECOMP_CALL(sub_00431ED0); /* 0x0061C942: call 0x431ed0 */
    RECOMP_FLAGS_IN();
    ecx = MEM32(0x927B28); /* 0x0061C947: mov ecx, dword ptr [0x927b28] */
L_0061C94D:
    eax = MEM32(ecx); /* 0x0061C94D: mov eax, dword ptr [ecx] */
    RECOMP_ICALL(MEM32(eax + 0x18)); /* 0x0061C94F: call dword ptr [eax + 0x18] */
    RECOMP_FLAGS_IN();
    RECOMP_ICALL(esi); /* 0x0061C952: call esi */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x0061C954: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_0061C95C; /* 0x0061C956: jne 0x61c95c */
L_0061C958:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x0061C958: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_0061C976; /* 0x0061C95A: jmp 0x61c976 */
L_0061C95C:
    ecx = MEM32(0x927B28); /* 0x0061C95C: mov ecx, dword ptr [0x927b28] */
    /* test ecx, ecx */ /* 0x0061C962: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_0061C976; /* 0x0061C964: jne 0x61c976 */
L_0061C966:
    ecx = 0x00927AE8u; /* 0x0061C966: mov ecx, 0x927ae8 */
    RECOMP_CALL(sub_00431ED0); /* 0x0061C96B: call 0x431ed0 */
    RECOMP_FLAGS_IN();
    ecx = MEM32(0x927B28); /* 0x0061C970: mov ecx, dword ptr [0x927b28] */
L_0061C976:
    eax = MEM32(ecx); /* 0x0061C976: mov eax, dword ptr [ecx] */
    RECOMP_ICALL(MEM32(eax + 0x8)); /* 0x0061C978: call dword ptr [eax + 8] */
    RECOMP_FLAGS_IN();
    /* cmp eax, 1 */ /* 0x0061C97B: cmp eax, 1 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_0061C9D5; /* 0x0061C97E: je 0x61c9d5 */
L_0061C980:
    RECOMP_ICALL(esi); /* 0x0061C980: call esi */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x0061C982: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_0061C98A; /* 0x0061C984: jne 0x61c98a */
L_0061C986:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x0061C986: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_0061C9A4; /* 0x0061C988: jmp 0x61c9a4 */
L_0061C98A:
    ecx = MEM32(0x927B2C); /* 0x0061C98A: mov ecx, dword ptr [0x927b2c] */
    /* test ecx, ecx */ /* 0x0061C990: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_0061C9A4; /* 0x0061C992: jne 0x61c9a4 */
L_0061C994:
    ecx = 0x00927AE8u; /* 0x0061C994: mov ecx, 0x927ae8 */
    RECOMP_CALL(sub_00431ED0); /* 0x0061C999: call 0x431ed0 */
    RECOMP_FLAGS_IN();
    ecx = MEM32(0x927B2C); /* 0x0061C99E: mov ecx, dword ptr [0x927b2c] */
L_0061C9A4:
    eax = MEM32(ecx); /* 0x0061C9A4: mov eax, dword ptr [ecx] */
    PUSH32(esp, 0); /* 0x0061C9A6: push 0 */
    RECOMP_ICALL(MEM32(eax + 0x78)); /* 0x0061C9A8: call dword ptr [eax + 0x78] */
    RECOMP_FLAGS_IN();
    RECOMP_ICALL(esi); /* 0x0061C9AB: call esi */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x0061C9AD: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_0061C9B5; /* 0x0061C9AF: jne 0x61c9b5 */
L_0061C9B1:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x0061C9B1: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_0061C9CF; /* 0x0061C9B3: jmp 0x61c9cf */
L_0061C9B5:
    ecx = MEM32(0x927B28); /* 0x0061C9B5: mov ecx, dword ptr [0x927b28] */
    /* test ecx, ecx */ /* 0x0061C9BB: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_0061C9CF; /* 0x0061C9BD: jne 0x61c9cf */
L_0061C9BF:
    ecx = 0x00927AE8u; /* 0x0061C9BF: mov ecx, 0x927ae8 */
    RECOMP_CALL(sub_00431ED0); /* 0x0061C9C4: call 0x431ed0 */
    RECOMP_FLAGS_IN();
    ecx = MEM32(0x927B28); /* 0x0061C9C9: mov ecx, dword ptr [0x927b28] */
L_0061C9CF:
    eax = MEM32(ecx); /* 0x0061C9CF: mov eax, dword ptr [ecx] */
    esi = POP32_VAL(esp); /* 0x0061C9D1: pop esi */
    { _itail_tgt = (uint32_t)(MEM32(eax + 0x18)); goto _ljump; }
L_0061C9D5:
    esi = POP32_VAL(esp); /* 0x0061C9D5: pop esi */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x0061C9D6: ret  */
  _ljump:
    switch (_itail_tgt) {
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_0061C9E0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0061C9E0u);

L_0061C9E0:
    PUSH32(esp, ebp); /* 0x0061C9E0: push ebp */
    ebp = esp; /* 0x0061C9E1: mov ebp, esp */
    PUSH32(esp, esi); /* 0x0061C9E3: push esi */
    esi = ecx; /* 0x0061C9E4: mov esi, ecx */
    /* cmp MEM8(esi + 0x2), 0 */ /* 0x0061C9E6: cmp byte ptr [esi + 2], 0 */
    _flag_a = (uint32_t)(MEM8(esi + 0x2)) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_0061C9F3; /* 0x0061C9EA: jne 0x61c9f3 */
L_0061C9EC:
    _flag_a = (uint32_t)(0) << 24; _flag_b = (uint32_t)(0) << 24;
    SET_LO8(eax, 0); /* 0x0061C9EC: xor al, al */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    esi = POP32_VAL(esp); /* 0x0061C9EE: pop esi */
    ebp = POP32_VAL(esp); /* 0x0061C9EF: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x0061C9F0: ret 4 */
L_0061C9F3:
    /* cmp MEM8(esi + 0x1), 0 */ /* 0x0061C9F3: cmp byte ptr [esi + 1], 0 */
    _flag_a = (uint32_t)(MEM8(esi + 0x1)) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_0061CA05; /* 0x0061C9F7: je 0x61ca05 */
L_0061C9F9:
    RECOMP_CALL(sub_0061C8F0); /* 0x0061C9F9: call 0x61c8f0 */
    RECOMP_FLAGS_IN();
    SET_LO8(eax, 1); /* 0x0061C9FE: mov al, 1 */
    esi = POP32_VAL(esp); /* 0x0061CA00: pop esi */
    ebp = POP32_VAL(esp); /* 0x0061CA01: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x0061CA02: ret 4 */
L_0061CA05:
    RECOMP_CALL(sub_0061CA20); /* 0x0061CA05: call 0x61ca20 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x0061CA0A: push dword ptr [ebp + 8] */
    ecx = esi + 0x48; /* 0x0061CA0D: lea ecx, [esi + 0x48] */
    RECOMP_CALL(sub_0061BD50); /* 0x0061CA10: call 0x61bd50 */
    RECOMP_FLAGS_IN();
    esi = POP32_VAL(esp); /* 0x0061CA15: pop esi */
    ebp = POP32_VAL(esp); /* 0x0061CA16: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x0061CA17: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_0061CA20(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0061CA20u);

L_0061CA20:
    PUSH32(esp, ebx); /* 0x0061CA20: push ebx */
    PUSH32(esp, esi); /* 0x0061CA21: push esi */
    esi = ecx; /* 0x0061CA22: mov esi, ecx */
    PUSH32(esp, edi); /* 0x0061CA24: push edi */
    /* cmp MEM8(esi + 0x1), 0 */ /* 0x0061CA25: cmp byte ptr [esi + 1], 0 */
    _flag_a = (uint32_t)(MEM8(esi + 0x1)) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_0061CA58; /* 0x0061CA29: je 0x61ca58 */
L_0061CA2B:
    RECOMP_ICALL(MEM32(0x7CC9AC)); /* 0x0061CA2B: call dword ptr [0x7cc9ac] */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x0061CA31: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_0061CA39; /* 0x0061CA33: jne 0x61ca39 */
L_0061CA35:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x0061CA35: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_0061CA53; /* 0x0061CA37: jmp 0x61ca53 */
L_0061CA39:
    ecx = MEM32(0x927B28); /* 0x0061CA39: mov ecx, dword ptr [0x927b28] */
    /* test ecx, ecx */ /* 0x0061CA3F: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_0061CA53; /* 0x0061CA41: jne 0x61ca53 */
L_0061CA43:
    ecx = 0x00927AE8u; /* 0x0061CA43: mov ecx, 0x927ae8 */
    RECOMP_CALL(sub_00431ED0); /* 0x0061CA48: call 0x431ed0 */
    RECOMP_FLAGS_IN();
    ecx = MEM32(0x927B28); /* 0x0061CA4D: mov ecx, dword ptr [0x927b28] */
L_0061CA53:
    eax = MEM32(ecx); /* 0x0061CA53: mov eax, dword ptr [ecx] */
    RECOMP_ICALL(MEM32(eax + 0x10)); /* 0x0061CA55: call dword ptr [eax + 0x10] */
    RECOMP_FLAGS_IN();
L_0061CA58:
    ebx = MEM32(esi + 0x1C8); /* 0x0061CA58: mov ebx, dword ptr [esi + 0x1c8] */
    eax = ebx; /* 0x0061CA5E: mov eax, ebx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xFFFFF000u);
    eax = eax & 0xFFFFF000u; /* 0x0061CA60: and eax, 0xfffff000 */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp eax, 0xFFFFF000u */ /* 0x0061CA65: cmp eax, 0xfffff000 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xFFFFF000u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_0061CADE; /* 0x0061CA6A: je 0x61cade */
L_0061CA6C:
    eax = MEM32(esi + 0x1D4); /* 0x0061CA6C: mov eax, dword ptr [esi + 0x1d4] */
    /* test eax, eax */ /* 0x0061CA72: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_0061CA7D; /* 0x0061CA74: je 0x61ca7d */
L_0061CA76:
    PUSH32(esp, eax); /* 0x0061CA76: push eax */
    RECOMP_ICALL(MEM32(0x7CC158)); /* 0x0061CA77: call dword ptr [0x7cc158] */
    RECOMP_FLAGS_IN();
L_0061CA7D:
    PUSH32(esp, ebx); /* 0x0061CA7D: push ebx */
    ecx = esi + 0x1D0; /* 0x0061CA7E: lea ecx, [esi + 0x1d0] */
    RECOMP_CALL(sub_006DFD50); /* 0x0061CA84: call 0x6dfd50 */
    RECOMP_FLAGS_IN();
    /* cmp eax, 0xFFFFFFFFu */ /* 0x0061CA89: cmp eax, -1 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xFFFFFFFFu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    eax = MEM32(esi + 0x1D4); /* 0x0061CA8C: mov eax, dword ptr [esi + 0x1d4] */
    if (CMP_EQ(_flag_a, _flag_b)) goto L_0061CAD3; /* 0x0061CA92: je 0x61cad3 */
L_0061CA94:
    /* test eax, eax */ /* 0x0061CA94: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_0061CA9F; /* 0x0061CA96: je 0x61ca9f */
L_0061CA98:
    PUSH32(esp, eax); /* 0x0061CA98: push eax */
    RECOMP_ICALL(MEM32(0x7CC154)); /* 0x0061CA99: call dword ptr [0x7cc154] */
    RECOMP_FLAGS_IN();
L_0061CA9F:
    ebx = esi + 0x48; /* 0x0061CA9F: lea ebx, [esi + 0x48] */
    ecx = ebx; /* 0x0061CAA2: mov ecx, ebx */
    RECOMP_CALL(sub_0061BBE0); /* 0x0061CAA4: call 0x61bbe0 */
    RECOMP_FLAGS_IN();
    ecx = MEM32(ebx + 0x4C); /* 0x0061CAA9: mov ecx, dword ptr [ebx + 0x4c] */
    /* test ecx, ecx */ /* 0x0061CAAC: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_0061CAB6; /* 0x0061CAAE: je 0x61cab6 */
L_0061CAB0:
    PUSH32(esp, ebx); /* 0x0061CAB0: push ebx */
    RECOMP_CALL(sub_006E0330); /* 0x0061CAB1: call 0x6e0330 */
    RECOMP_FLAGS_IN();
L_0061CAB6:
    PUSH32(esp, MEM32(esi + 0x1C8)); /* 0x0061CAB6: push dword ptr [esi + 0x1c8] */
    ecx = esi + 0x1D0; /* 0x0061CABC: lea ecx, [esi + 0x1d0] */
    RECOMP_CALL(sub_006E0210); /* 0x0061CAC2: call 0x6e0210 */
    RECOMP_FLAGS_IN();
    MEM32(esi + 0x1C8) = 0; /* 0x0061CAC7: mov dword ptr [esi + 0x1c8], 0 */
    goto L_0061CADE; /* 0x0061CAD1: jmp 0x61cade */
L_0061CAD3:
    /* test eax, eax */ /* 0x0061CAD3: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_0061CADE; /* 0x0061CAD5: je 0x61cade */
L_0061CAD7:
    PUSH32(esp, eax); /* 0x0061CAD7: push eax */
    RECOMP_ICALL(MEM32(0x7CC154)); /* 0x0061CAD8: call dword ptr [0x7cc154] */
    RECOMP_FLAGS_IN();
L_0061CADE:
    edi = esi + 0x8; /* 0x0061CADE: lea edi, [esi + 8] */
    ecx = esi + 0x20; /* 0x0061CAE1: lea ecx, [esi + 0x20] */
    /* cmp ecx, edi */ /* 0x0061CAE4: cmp ecx, edi */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_0061CAF2; /* 0x0061CAE6: je 0x61caf2 */
L_0061CAE8:
    PUSH32(esp, 0xFFFFFFFFu); /* 0x0061CAE8: push -1 */
    PUSH32(esp, 0); /* 0x0061CAEA: push 0 */
    PUSH32(esp, edi); /* 0x0061CAEC: push edi */
    RECOMP_CALL(sub_0040A030); /* 0x0061CAED: call 0x40a030 */
    RECOMP_FLAGS_IN();
L_0061CAF2:
    PUSH32(esp, 0); /* 0x0061CAF2: push 0 */
    PUSH32(esp, 0x007CD0C4u); /* 0x0061CAF4: push 0x7cd0c4 */
    ecx = edi; /* 0x0061CAF9: mov ecx, edi */
    RECOMP_CALL(sub_0040A2F0); /* 0x0061CAFB: call 0x40a2f0 */
    RECOMP_FLAGS_IN();
    edi = POP32_VAL(esp); /* 0x0061CB00: pop edi */
    esi = POP32_VAL(esp); /* 0x0061CB01: pop esi */
    ebx = POP32_VAL(esp); /* 0x0061CB02: pop ebx */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x0061CB03: ret  */
    RECOMP_REGS_OUT();
}

void sub_0061CB10(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0061CB10u);

L_0061CB10:
    PUSH32(esp, ecx); /* 0x0061CB10: push ecx */
    PUSH32(esp, esi); /* 0x0061CB11: push esi */
    PUSH32(esp, edi); /* 0x0061CB12: push edi */
    edi = MEM32(0x7CC9AC); /* 0x0061CB13: mov edi, dword ptr [0x7cc9ac] */
    esi = ecx; /* 0x0061CB19: mov esi, ecx */
    RECOMP_ICALL(edi); /* 0x0061CB1B: call edi */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x0061CB1D: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_0061CB25; /* 0x0061CB1F: jne 0x61cb25 */
L_0061CB21:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x0061CB21: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_0061CB3F; /* 0x0061CB23: jmp 0x61cb3f */
L_0061CB25:
    ecx = MEM32(0x927B28); /* 0x0061CB25: mov ecx, dword ptr [0x927b28] */
    /* test ecx, ecx */ /* 0x0061CB2B: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_0061CB3F; /* 0x0061CB2D: jne 0x61cb3f */
L_0061CB2F:
    ecx = 0x00927AE8u; /* 0x0061CB2F: mov ecx, 0x927ae8 */
    RECOMP_CALL(sub_00431ED0); /* 0x0061CB34: call 0x431ed0 */
    RECOMP_FLAGS_IN();
    ecx = MEM32(0x927B28); /* 0x0061CB39: mov ecx, dword ptr [0x927b28] */
L_0061CB3F:
    eax = MEM32(ecx); /* 0x0061CB3F: mov eax, dword ptr [ecx] */
    RECOMP_ICALL(MEM32(eax + 0x8)); /* 0x0061CB41: call dword ptr [eax + 8] */
    RECOMP_FLAGS_IN();
    /* cmp eax, 1 */ /* 0x0061CB44: cmp eax, 1 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_0061CB78; /* 0x0061CB47: jne 0x61cb78 */
L_0061CB49:
    /* cmp MEM8(esi + 0x1), 0 */ /* 0x0061CB49: cmp byte ptr [esi + 1], 0 */
    _flag_a = (uint32_t)(MEM8(esi + 0x1)) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_0061CB78; /* 0x0061CB4D: jne 0x61cb78 */
L_0061CB4F:
    RECOMP_ICALL(edi); /* 0x0061CB4F: call edi */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x0061CB51: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_0061CB59; /* 0x0061CB53: jne 0x61cb59 */
L_0061CB55:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x0061CB55: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_0061CB73; /* 0x0061CB57: jmp 0x61cb73 */
L_0061CB59:
    ecx = MEM32(0x927B28); /* 0x0061CB59: mov ecx, dword ptr [0x927b28] */
    /* test ecx, ecx */ /* 0x0061CB5F: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_0061CB73; /* 0x0061CB61: jne 0x61cb73 */
L_0061CB63:
    ecx = 0x00927AE8u; /* 0x0061CB63: mov ecx, 0x927ae8 */
    RECOMP_CALL(sub_00431ED0); /* 0x0061CB68: call 0x431ed0 */
    RECOMP_FLAGS_IN();
    ecx = MEM32(0x927B28); /* 0x0061CB6D: mov ecx, dword ptr [0x927b28] */
L_0061CB73:
    eax = MEM32(ecx); /* 0x0061CB73: mov eax, dword ptr [ecx] */
    RECOMP_ICALL(MEM32(eax + 0x10)); /* 0x0061CB75: call dword ptr [eax + 0x10] */
    RECOMP_FLAGS_IN();
L_0061CB78:
    edi = esi + 0x48; /* 0x0061CB78: lea edi, [esi + 0x48] */
    ecx = edi; /* 0x0061CB7B: mov ecx, edi */
    RECOMP_CALL(sub_0061BDE0); /* 0x0061CB7D: call 0x61bde0 */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x0061CB82: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_0061CBBA; /* 0x0061CB84: jne 0x61cbba */
L_0061CB86:
    _xmm[2].u64[0] = MEM32(esi + 0x3C); _xmm[2].u64[1] = 0; /* 0x0061CB86: movss xmm2, dword ptr [esi + 0x3c] */
    ecx = esi + 0x1D0; /* 0x0061CB8B: lea ecx, [esi + 0x1d0] */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 8; /* 0x0061CB91: sub esp, 8 */
    _flag_k = FK_CMP;
    { xmm_t _s = _xmm[3]; for (int _k = 0; _k < 4; _k++) _xmm[3].u32[_k] = _xmm[3].u32[_k] ^ _s.u32[_k]; } /* 0x0061CB94: xorps xmm3, xmm3 */
    PUSH32(esp, edi); /* 0x0061CB97: push edi */
    RECOMP_CALL(sub_006DFEA0); /* 0x0061CB98: call 0x6dfea0 */
    RECOMP_FLAGS_IN();
    MEM32(esi + 0x1C8) = eax; /* 0x0061CB9D: mov dword ptr [esi + 0x1c8], eax */
    ecx = esi + 0x8; /* 0x0061CBA3: lea ecx, [esi + 8] */
    eax = esi + 0xC4; /* 0x0061CBA6: lea eax, [esi + 0xc4] */
    /* cmp ecx, eax */ /* 0x0061CBAC: cmp ecx, eax */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_0061CBBA; /* 0x0061CBAE: je 0x61cbba */
L_0061CBB0:
    PUSH32(esp, 0xFFFFFFFFu); /* 0x0061CBB0: push -1 */
    PUSH32(esp, 0); /* 0x0061CBB2: push 0 */
    PUSH32(esp, eax); /* 0x0061CBB4: push eax */
    RECOMP_CALL(sub_0040A030); /* 0x0061CBB5: call 0x40a030 */
    RECOMP_FLAGS_IN();
L_0061CBBA:
    edi = esi + 0x108; /* 0x0061CBBA: lea edi, [esi + 0x108] */
    ecx = edi; /* 0x0061CBC0: mov ecx, edi */
    RECOMP_CALL(sub_0061BDE0); /* 0x0061CBC2: call 0x61bde0 */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x0061CBC7: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_0061CBE8; /* 0x0061CBC9: jne 0x61cbe8 */
L_0061CBCB:
    _xmm[2].u64[0] = MEM32(esi + 0x40); _xmm[2].u64[1] = 0; /* 0x0061CBCB: movss xmm2, dword ptr [esi + 0x40] */
    ecx = esi + 0x1D0; /* 0x0061CBD0: lea ecx, [esi + 0x1d0] */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 8; /* 0x0061CBD6: sub esp, 8 */
    _flag_k = FK_CMP;
    { xmm_t _s = _xmm[3]; for (int _k = 0; _k < 4; _k++) _xmm[3].u32[_k] = _xmm[3].u32[_k] ^ _s.u32[_k]; } /* 0x0061CBD9: xorps xmm3, xmm3 */
    PUSH32(esp, edi); /* 0x0061CBDC: push edi */
    RECOMP_CALL(sub_006DFEA0); /* 0x0061CBDD: call 0x6dfea0 */
    RECOMP_FLAGS_IN();
    MEM32(esi + 0x1CC) = eax; /* 0x0061CBE2: mov dword ptr [esi + 0x1cc], eax */
L_0061CBE8:
    /* cmp MEM32(esi + 0x17C), 0 */ /* 0x0061CBE8: cmp dword ptr [esi + 0x17c], 0 */
    _flag_a = (uint32_t)(MEM32(esi + 0x17C)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_0061CC12; /* 0x0061CBEF: je 0x61cc12 */
L_0061CBF1:
    eax = MEM32(esi + 0x1CC); /* 0x0061CBF1: mov eax, dword ptr [esi + 0x1cc] */
    /* test eax, eax */ /* 0x0061CBF7: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_0061CC12; /* 0x0061CBF9: je 0x61cc12 */
L_0061CBFB:
    PUSH32(esp, eax); /* 0x0061CBFB: push eax */
    ecx = esi + 0x1D0; /* 0x0061CBFC: lea ecx, [esi + 0x1d0] */
    RECOMP_CALL(sub_006DFDC0); /* 0x0061CC02: call 0x6dfdc0 */
    RECOMP_FLAGS_IN();
    /* test LO8(eax), LO8(eax) */ /* 0x0061CC07: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_0061CC12; /* 0x0061CC09: jne 0x61cc12 */
L_0061CC0B:
    ecx = esi; /* 0x0061CC0B: mov ecx, esi */
    RECOMP_CALL(sub_0061CE10); /* 0x0061CC0D: call 0x61ce10 */
    RECOMP_FLAGS_IN();
L_0061CC12:
    edi = POP32_VAL(esp); /* 0x0061CC12: pop edi */
    esi = POP32_VAL(esp); /* 0x0061CC13: pop esi */
    ecx = POP32_VAL(esp); /* 0x0061CC14: pop ecx */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x0061CC15: ret  */
    RECOMP_REGS_OUT();
}

void sub_0061CC20(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0061CC20u);

L_0061CC20:
    PUSH32(esp, esi); /* 0x0061CC20: push esi */
    esi = ecx; /* 0x0061CC21: mov esi, ecx */
    /* cmp MEM8(esi + 0x1), 0 */ /* 0x0061CC23: cmp byte ptr [esi + 1], 0 */
    _flag_a = (uint32_t)(MEM8(esi + 0x1)) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_0061CC5E; /* 0x0061CC27: jne 0x61cc5e */
L_0061CC29:
    eax = MEM32(esi + 0xDC); /* 0x0061CC29: mov eax, dword ptr [esi + 0xdc] */
    /* test eax, eax */ /* 0x0061CC2F: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_0061CC5E; /* 0x0061CC31: je 0x61cc5e */
L_0061CC33:
    /* cmp eax, 2 */ /* 0x0061CC33: cmp eax, 2 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_0061CC5A; /* 0x0061CC36: je 0x61cc5a */
L_0061CC38:
    PUSH32(esp, MEM32(esi + 0x1C8)); /* 0x0061CC38: push dword ptr [esi + 0x1c8] */
    ecx = esi + 0x1D0; /* 0x0061CC3E: lea ecx, [esi + 0x1d0] */
    RECOMP_CALL(sub_006DFDC0); /* 0x0061CC44: call 0x6dfdc0 */
    RECOMP_FLAGS_IN();
    /* test LO8(eax), LO8(eax) */ /* 0x0061CC49: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_0061CC5E; /* 0x0061CC4B: jne 0x61cc5e */
L_0061CC4D:
    /* cmp MEM32(esi + 0x18), 0 */ /* 0x0061CC4D: cmp dword ptr [esi + 0x18], 0 */
    _flag_a = (uint32_t)(MEM32(esi + 0x18)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_0061CC5E; /* 0x0061CC51: je 0x61cc5e */
L_0061CC53:
    ecx = esi; /* 0x0061CC53: mov ecx, esi */
    RECOMP_CALL(sub_0061CA20); /* 0x0061CC55: call 0x61ca20 */
    RECOMP_FLAGS_IN();
L_0061CC5A:
    SET_LO8(eax, 1); /* 0x0061CC5A: mov al, 1 */
    esi = POP32_VAL(esp); /* 0x0061CC5C: pop esi */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x0061CC5D: ret  */
L_0061CC5E:
    _flag_a = (uint32_t)(0) << 24; _flag_b = (uint32_t)(0) << 24;
    SET_LO8(eax, 0); /* 0x0061CC5E: xor al, al */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    esi = POP32_VAL(esp); /* 0x0061CC60: pop esi */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x0061CC61: ret  */
    RECOMP_REGS_OUT();
}

void sub_0061CC70(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0061CC70u);

L_0061CC70:
    PUSH32(esp, ebp); /* 0x0061CC70: push ebp */
    ebp = esp; /* 0x0061CC71: mov ebp, esp */
    PUSH32(esp, ecx); /* 0x0061CC73: push ecx */
    PUSH32(esp, ebx); /* 0x0061CC74: push ebx */
    PUSH32(esp, esi); /* 0x0061CC75: push esi */
    PUSH32(esp, edi); /* 0x0061CC76: push edi */
    edi = ecx; /* 0x0061CC77: mov edi, ecx */
    MEM32(ebp + (-0x4)) = _xmm[1].u32[0]; /* 0x0061CC79: movss dword ptr [ebp - 4], xmm1 */
    ebx = MEM32(edi + 0x1C8); /* 0x0061CC7E: mov ebx, dword ptr [edi + 0x1c8] */
    eax = ebx; /* 0x0061CC84: mov eax, ebx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xFFFFF000u);
    eax = eax & 0xFFFFF000u; /* 0x0061CC86: and eax, 0xfffff000 */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp eax, 0xFFFFF000u */ /* 0x0061CC8B: cmp eax, 0xfffff000 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xFFFFF000u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_0061CCE8; /* 0x0061CC90: je 0x61cce8 */
L_0061CC92:
    eax = MEM32(edi + 0x1D4); /* 0x0061CC92: mov eax, dword ptr [edi + 0x1d4] */
    /* test eax, eax */ /* 0x0061CC98: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_0061CCA3; /* 0x0061CC9A: je 0x61cca3 */
L_0061CC9C:
    PUSH32(esp, eax); /* 0x0061CC9C: push eax */
    RECOMP_ICALL(MEM32(0x7CC158)); /* 0x0061CC9D: call dword ptr [0x7cc158] */
    RECOMP_FLAGS_IN();
L_0061CCA3:
    PUSH32(esp, ebx); /* 0x0061CCA3: push ebx */
    ecx = edi + 0x1D0; /* 0x0061CCA4: lea ecx, [edi + 0x1d0] */
    RECOMP_CALL(sub_006DFD50); /* 0x0061CCAA: call 0x6dfd50 */
    RECOMP_FLAGS_IN();
    /* cmp eax, 0xFFFFFFFFu */ /* 0x0061CCAF: cmp eax, -1 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xFFFFFFFFu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    eax = MEM32(edi + 0x1D4); /* 0x0061CCB2: mov eax, dword ptr [edi + 0x1d4] */
    if (CMP_EQ(_flag_a, _flag_b)) goto L_0061CCDD; /* 0x0061CCB8: je 0x61ccdd */
L_0061CCBA:
    /* test eax, eax */ /* 0x0061CCBA: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_0061CCC5; /* 0x0061CCBC: je 0x61ccc5 */
L_0061CCBE:
    PUSH32(esp, eax); /* 0x0061CCBE: push eax */
    RECOMP_ICALL(MEM32(0x7CC154)); /* 0x0061CCBF: call dword ptr [0x7cc154] */
    RECOMP_FLAGS_IN();
L_0061CCC5:
    PUSH32(esp, MEM32(edi + 0x1C8)); /* 0x0061CCC5: push dword ptr [edi + 0x1c8] */
    _xmm[2].u64[0] = MEM32(ebp + (-0x4)); _xmm[2].u64[1] = 0; /* 0x0061CCCB: movss xmm2, dword ptr [ebp - 4] */
    ecx = edi + 0x1D0; /* 0x0061CCD0: lea ecx, [edi + 0x1d0] */
    RECOMP_CALL(sub_006DFC00); /* 0x0061CCD6: call 0x6dfc00 */
    RECOMP_FLAGS_IN();
    goto L_0061CCE8; /* 0x0061CCDB: jmp 0x61cce8 */
L_0061CCDD:
    /* test eax, eax */ /* 0x0061CCDD: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_0061CCE8; /* 0x0061CCDF: je 0x61cce8 */
L_0061CCE1:
    PUSH32(esp, eax); /* 0x0061CCE1: push eax */
    RECOMP_ICALL(MEM32(0x7CC154)); /* 0x0061CCE2: call dword ptr [0x7cc154] */
    RECOMP_FLAGS_IN();
L_0061CCE8:
    _xmm[0].u64[0] = MEM32(ebp + (-0x4)); _xmm[0].u64[1] = 0; /* 0x0061CCE8: movss xmm0, dword ptr [ebp - 4] */
    MEM32(edi + 0x3C) = _xmm[0].u32[0]; /* 0x0061CCED: movss dword ptr [edi + 0x3c], xmm0 */
    RECOMP_ICALL(MEM32(0x7CC9AC)); /* 0x0061CCF2: call dword ptr [0x7cc9ac] */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x0061CCF8: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_0061CD00; /* 0x0061CCFA: jne 0x61cd00 */
L_0061CCFC:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x0061CCFC: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_0061CD1A; /* 0x0061CCFE: jmp 0x61cd1a */
L_0061CD00:
    ecx = MEM32(0x927B28); /* 0x0061CD00: mov ecx, dword ptr [0x927b28] */
    /* test ecx, ecx */ /* 0x0061CD06: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_0061CD1A; /* 0x0061CD08: jne 0x61cd1a */
L_0061CD0A:
    ecx = 0x00927AE8u; /* 0x0061CD0A: mov ecx, 0x927ae8 */
    RECOMP_CALL(sub_00431ED0); /* 0x0061CD0F: call 0x431ed0 */
    RECOMP_FLAGS_IN();
    ecx = MEM32(0x927B28); /* 0x0061CD14: mov ecx, dword ptr [0x927b28] */
L_0061CD1A:
    _xmm[0].u64[0] = MEM32(edi + 0x1214); _xmm[0].u64[1] = 0; /* 0x0061CD1A: movss xmm0, dword ptr [edi + 0x1214] */
    { float _s = sse_f32(MEM32(ebp + (-0x4))); _xmm[0].f32[0] = (float)(_xmm[0].f32[0] * _s); } /* 0x0061CD22: mulss xmm0, dword ptr [ebp - 4] */
    eax = MEM32(ecx); /* 0x0061CD27: mov eax, dword ptr [ecx] */
    PUSH32(esp, ecx); /* 0x0061CD29: push ecx */
    MEM32(esp) = _xmm[0].u32[0]; /* 0x0061CD2A: movss dword ptr [esp], xmm0 */
    RECOMP_ICALL(MEM32(eax + 0x1C)); /* 0x0061CD2F: call dword ptr [eax + 0x1c] */
    RECOMP_FLAGS_IN();
    edi = POP32_VAL(esp); /* 0x0061CD32: pop edi */
    esi = POP32_VAL(esp); /* 0x0061CD33: pop esi */
    ebx = POP32_VAL(esp); /* 0x0061CD34: pop ebx */
    esp = ebp; /* 0x0061CD35: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x0061CD37: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x0061CD38: ret  */
    RECOMP_REGS_OUT();
}

void sub_0061CD40(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0061CD40u);

L_0061CD40:
    PUSH32(esp, ebp); /* 0x0061CD40: push ebp */
    ebp = esp; /* 0x0061CD41: mov ebp, esp */
    PUSH32(esp, 0xFFFFFFFFu); /* 0x0061CD43: push -1 */
    PUSH32(esp, 0x0079F898u); /* 0x0061CD45: push 0x79f898 */
    eax = MEM32(FS_BASE + (0)); /* 0x0061CD4A: mov eax, dword ptr fs:[0] */
    PUSH32(esp, eax); /* 0x0061CD50: push eax */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x20u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x20u; /* 0x0061CD51: sub esp, 0x20 */
    _flag_k = FK_CMP;
    eax = MEM32(0x855000); /* 0x0061CD54: mov eax, dword ptr [0x855000] */
    _flag_a = (uint32_t)((eax ^ ebp)); _flag_b = (uint32_t)((eax ^ ebp));
    eax = eax ^ ebp; /* 0x0061CD59: xor eax, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x14)) = eax; /* 0x0061CD5B: mov dword ptr [ebp - 0x14], eax */
    PUSH32(esp, ebx); /* 0x0061CD5E: push ebx */
    PUSH32(esp, esi); /* 0x0061CD5F: push esi */
    PUSH32(esp, edi); /* 0x0061CD60: push edi */
    PUSH32(esp, eax); /* 0x0061CD61: push eax */
    eax = ebp + (-0xC); /* 0x0061CD62: lea eax, [ebp - 0xc] */
    MEM32(FS_BASE + (0)) = eax; /* 0x0061CD65: mov dword ptr fs:[0], eax */
    esi = ecx; /* 0x0061CD6B: mov esi, ecx */
    edi = MEM32(ebp + 0x8); /* 0x0061CD6D: mov edi, dword ptr [ebp + 8] */
    RECOMP_CALL(sub_0061CE10); /* 0x0061CD70: call 0x61ce10 */
    RECOMP_FLAGS_IN();
    _xmm[1].u64[0] = MEM32(esi + 0x40); _xmm[1].u64[1] = 0; /* 0x0061CD75: movss xmm1, dword ptr [esi + 0x40] */
    _flag_a = SSE_COMI(_xmm[1].f32[0], sse_f32(MEM32(0x808B1C))); _flag_b = 0; _cf = _flag_a & 1u; /* 0x0061CD7A: comiss xmm1, dword ptr [0x808b1c] */
    _flag_k = FK_EFLAGS;
    eax = MEM32(esi + 0x3C); /* 0x0061CD81: mov eax, dword ptr [esi + 0x3c] */
    MEM32(esi + 0x44) = eax; /* 0x0061CD84: mov dword ptr [esi + 0x44], eax */
    if (recomp_cond(FK_EFLAGS, _flag_a, 0, CC_BE)) goto L_0061CD98; /* 0x0061CD87: jbe 0x61cd98 */
L_0061CD89:
    { float _s = sse_f32(MEM32(0x808BD4)); _xmm[1].f32[0] = (float)(_xmm[1].f32[0] * _s); } /* 0x0061CD89: mulss xmm1, dword ptr [0x808bd4] */
    ecx = esi; /* 0x0061CD91: mov ecx, esi */
    RECOMP_CALL(sub_0061CC70); /* 0x0061CD93: call 0x61cc70 */
    RECOMP_FLAGS_IN();
L_0061CD98:
    PUSH32(esp, edi); /* 0x0061CD98: push edi */
    edx = 0x007F8D74u; /* 0x0061CD99: mov edx, 0x7f8d74 */
    ecx = ebp + (-0x2C); /* 0x0061CD9E: lea ecx, [ebp - 0x2c] */
    RECOMP_CALL(sub_0042A130); /* 0x0061CDA1: call 0x42a130 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x0061CDA6: add esp, 4 */
    _flag_k = FK_ADD;
    MEM32(ebp + (-0x4)) = 0; /* 0x0061CDA9: mov dword ptr [ebp - 4], 0 */
    ecx = esi + 0x108; /* 0x0061CDB0: lea ecx, [esi + 0x108] */
    PUSH32(esp, eax); /* 0x0061CDB6: push eax */
    RECOMP_CALL(sub_0061BD50); /* 0x0061CDB7: call 0x61bd50 */
    RECOMP_FLAGS_IN();
    SET_LO8(ebx, LO8(eax)); /* 0x0061CDBC: mov bl, al */
    MEM32(ebp + (-0x4)) = 0xFFFFFFFFu; /* 0x0061CDBE: mov dword ptr [ebp - 4], 0xffffffff */
    /* cmp MEM32(ebp + (-0x18)), 0x10u */ /* 0x0061CDC5: cmp dword ptr [ebp - 0x18], 0x10 */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x18))); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_B(_flag_a, _flag_b)) goto L_0061CDD7; /* 0x0061CDC9: jb 0x61cdd7 */
L_0061CDCB:
    PUSH32(esp, MEM32(ebp + (-0x2C))); /* 0x0061CDCB: push dword ptr [ebp - 0x2c] */
    RECOMP_ICALL(MEM32(0x7CC694)); /* 0x0061CDCE: call dword ptr [0x7cc694] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x0061CDD4: add esp, 4 */
    _flag_k = FK_ADD;
L_0061CDD7:
    MEM32(ebp + (-0x18)) = 0xFu; /* 0x0061CDD7: mov dword ptr [ebp - 0x18], 0xf */
    SET_LO8(eax, LO8(ebx)); /* 0x0061CDDE: mov al, bl */
    MEM32(ebp + (-0x1C)) = 0; /* 0x0061CDE0: mov dword ptr [ebp - 0x1c], 0 */
    MEM8(ebp + (-0x2C)) = (uint8_t)(0); /* 0x0061CDE7: mov byte ptr [ebp - 0x2c], 0 */
    ecx = MEM32(ebp + (-0xC)); /* 0x0061CDEB: mov ecx, dword ptr [ebp - 0xc] */
    MEM32(FS_BASE + (0)) = ecx; /* 0x0061CDEE: mov dword ptr fs:[0], ecx */
    ecx = POP32_VAL(esp); /* 0x0061CDF5: pop ecx */
    edi = POP32_VAL(esp); /* 0x0061CDF6: pop edi */
    esi = POP32_VAL(esp); /* 0x0061CDF7: pop esi */
    ebx = POP32_VAL(esp); /* 0x0061CDF8: pop ebx */
    ecx = MEM32(ebp + (-0x14)); /* 0x0061CDF9: mov ecx, dword ptr [ebp - 0x14] */
    _flag_a = (uint32_t)((ecx ^ ebp)); _flag_b = (uint32_t)((ecx ^ ebp));
    ecx = ecx ^ ebp; /* 0x0061CDFC: xor ecx, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_0077F4C2); /* 0x0061CDFE: call 0x77f4c2 */
    RECOMP_FLAGS_IN();
    esp = ebp; /* 0x0061CE03: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x0061CE05: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x0061CE06: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_0061CE10(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0061CE10u);

L_0061CE10:
    PUSH32(esp, ebx); /* 0x0061CE10: push ebx */
    PUSH32(esp, esi); /* 0x0061CE11: push esi */
    esi = ecx; /* 0x0061CE12: mov esi, ecx */
    PUSH32(esp, edi); /* 0x0061CE14: push edi */
    ebx = MEM32(esi + 0x1CC); /* 0x0061CE15: mov ebx, dword ptr [esi + 0x1cc] */
    eax = ebx; /* 0x0061CE1B: mov eax, ebx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xFFFFF000u);
    eax = eax & 0xFFFFF000u; /* 0x0061CE1D: and eax, 0xfffff000 */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp eax, 0xFFFFF000u */ /* 0x0061CE22: cmp eax, 0xfffff000 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xFFFFF000u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_0061CE94; /* 0x0061CE27: je 0x61ce94 */
L_0061CE29:
    eax = MEM32(esi + 0x1D4); /* 0x0061CE29: mov eax, dword ptr [esi + 0x1d4] */
    /* test eax, eax */ /* 0x0061CE2F: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_0061CE3A; /* 0x0061CE31: je 0x61ce3a */
L_0061CE33:
    PUSH32(esp, eax); /* 0x0061CE33: push eax */
    RECOMP_ICALL(MEM32(0x7CC158)); /* 0x0061CE34: call dword ptr [0x7cc158] */
    RECOMP_FLAGS_IN();
L_0061CE3A:
    PUSH32(esp, ebx); /* 0x0061CE3A: push ebx */
    ecx = esi + 0x1D0; /* 0x0061CE3B: lea ecx, [esi + 0x1d0] */
    RECOMP_CALL(sub_006DFD50); /* 0x0061CE41: call 0x6dfd50 */
    RECOMP_FLAGS_IN();
    /* cmp eax, 0xFFFFFFFFu */ /* 0x0061CE46: cmp eax, -1 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xFFFFFFFFu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    eax = MEM32(esi + 0x1D4); /* 0x0061CE49: mov eax, dword ptr [esi + 0x1d4] */
    if (CMP_EQ(_flag_a, _flag_b)) goto L_0061CE89; /* 0x0061CE4F: je 0x61ce89 */
L_0061CE51:
    /* test eax, eax */ /* 0x0061CE51: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_0061CE5C; /* 0x0061CE53: je 0x61ce5c */
L_0061CE55:
    PUSH32(esp, eax); /* 0x0061CE55: push eax */
    RECOMP_ICALL(MEM32(0x7CC154)); /* 0x0061CE56: call dword ptr [0x7cc154] */
    RECOMP_FLAGS_IN();
L_0061CE5C:
    ebx = esi + 0x108; /* 0x0061CE5C: lea ebx, [esi + 0x108] */
    ecx = ebx; /* 0x0061CE62: mov ecx, ebx */
    RECOMP_CALL(sub_0061BBE0); /* 0x0061CE64: call 0x61bbe0 */
    RECOMP_FLAGS_IN();
    ecx = MEM32(ebx + 0x4C); /* 0x0061CE69: mov ecx, dword ptr [ebx + 0x4c] */
    /* test ecx, ecx */ /* 0x0061CE6C: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_0061CE76; /* 0x0061CE6E: je 0x61ce76 */
L_0061CE70:
    PUSH32(esp, ebx); /* 0x0061CE70: push ebx */
    RECOMP_CALL(sub_006E0330); /* 0x0061CE71: call 0x6e0330 */
    RECOMP_FLAGS_IN();
L_0061CE76:
    PUSH32(esp, MEM32(esi + 0x1CC)); /* 0x0061CE76: push dword ptr [esi + 0x1cc] */
    ecx = esi + 0x1D0; /* 0x0061CE7C: lea ecx, [esi + 0x1d0] */
    RECOMP_CALL(sub_006E0210); /* 0x0061CE82: call 0x6e0210 */
    RECOMP_FLAGS_IN();
    goto L_0061CE94; /* 0x0061CE87: jmp 0x61ce94 */
L_0061CE89:
    /* test eax, eax */ /* 0x0061CE89: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_0061CE94; /* 0x0061CE8B: je 0x61ce94 */
L_0061CE8D:
    PUSH32(esp, eax); /* 0x0061CE8D: push eax */
    RECOMP_ICALL(MEM32(0x7CC154)); /* 0x0061CE8E: call dword ptr [0x7cc154] */
    RECOMP_FLAGS_IN();
L_0061CE94:
    _xmm[1].u64[0] = MEM32(esi + 0x44); _xmm[1].u64[1] = 0; /* 0x0061CE94: movss xmm1, dword ptr [esi + 0x44] */
    ecx = esi; /* 0x0061CE99: mov ecx, esi */
    RECOMP_CALL(sub_0061CC70); /* 0x0061CE9B: call 0x61cc70 */
    RECOMP_FLAGS_IN();
    edi = POP32_VAL(esp); /* 0x0061CEA0: pop edi */
    MEM32(esi + 0x1CC) = 0; /* 0x0061CEA1: mov dword ptr [esi + 0x1cc], 0 */
    esi = POP32_VAL(esp); /* 0x0061CEAB: pop esi */
    ebx = POP32_VAL(esp); /* 0x0061CEAC: pop ebx */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x0061CEAD: ret  */
    RECOMP_REGS_OUT();
}

void sub_0061CEB0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0061CEB0u);

L_0061CEB0:
    PUSH32(esp, ebp); /* 0x0061CEB0: push ebp */
    ebp = esp; /* 0x0061CEB1: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0xCu; /* 0x0061CEB3: sub esp, 0xc */
    _flag_k = FK_CMP;
    PUSH32(esp, ebx); /* 0x0061CEB6: push ebx */
    ebx = ecx; /* 0x0061CEB7: mov ebx, ecx */
    MEM32(ebp + (-0x8)) = _xmm[1].u32[0]; /* 0x0061CEB9: movss dword ptr [ebp - 8], xmm1 */
    PUSH32(esp, esi); /* 0x0061CEBE: push esi */
    PUSH32(esp, edi); /* 0x0061CEBF: push edi */
    edi = MEM32(0x7CC154); /* 0x0061CEC0: mov edi, dword ptr [0x7cc154] */
    eax = MEM32(ebx + 0x1CC); /* 0x0061CEC6: mov eax, dword ptr [ebx + 0x1cc] */
    esi = ebx + 0x1D0; /* 0x0061CECC: lea esi, [ebx + 0x1d0] */
    MEM32(ebp + (-0xC)) = eax; /* 0x0061CED2: mov dword ptr [ebp - 0xc], eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xFFFFF000u);
    eax = eax & 0xFFFFF000u; /* 0x0061CED5: and eax, 0xfffff000 */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp eax, 0xFFFFF000u */ /* 0x0061CEDA: cmp eax, 0xfffff000 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xFFFFF000u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_0061CF23; /* 0x0061CEDF: je 0x61cf23 */
L_0061CEE1:
    eax = MEM32(esi + 0x4); /* 0x0061CEE1: mov eax, dword ptr [esi + 4] */
    /* test eax, eax */ /* 0x0061CEE4: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_0061CEEF; /* 0x0061CEE6: je 0x61ceef */
L_0061CEE8:
    PUSH32(esp, eax); /* 0x0061CEE8: push eax */
    RECOMP_ICALL(MEM32(0x7CC158)); /* 0x0061CEE9: call dword ptr [0x7cc158] */
    RECOMP_FLAGS_IN();
L_0061CEEF:
    PUSH32(esp, MEM32(ebp + (-0xC))); /* 0x0061CEEF: push dword ptr [ebp - 0xc] */
    ecx = esi; /* 0x0061CEF2: mov ecx, esi */
    RECOMP_CALL(sub_006DFD50); /* 0x0061CEF4: call 0x6dfd50 */
    RECOMP_FLAGS_IN();
    /* cmp eax, 0xFFFFFFFFu */ /* 0x0061CEF9: cmp eax, -1 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xFFFFFFFFu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    eax = MEM32(esi + 0x4); /* 0x0061CEFC: mov eax, dword ptr [esi + 4] */
    if (CMP_EQ(_flag_a, _flag_b)) goto L_0061CF1C; /* 0x0061CEFF: je 0x61cf1c */
L_0061CF01:
    /* test eax, eax */ /* 0x0061CF01: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_0061CF08; /* 0x0061CF03: je 0x61cf08 */
L_0061CF05:
    PUSH32(esp, eax); /* 0x0061CF05: push eax */
    RECOMP_ICALL(edi); /* 0x0061CF06: call edi */
    RECOMP_FLAGS_IN();
L_0061CF08:
    PUSH32(esp, MEM32(ebx + 0x1CC)); /* 0x0061CF08: push dword ptr [ebx + 0x1cc] */
    _xmm[2].u64[0] = MEM32(ebp + (-0x8)); _xmm[2].u64[1] = 0; /* 0x0061CF0E: movss xmm2, dword ptr [ebp - 8] */
    ecx = esi; /* 0x0061CF13: mov ecx, esi */
    RECOMP_CALL(sub_006DFC00); /* 0x0061CF15: call 0x6dfc00 */
    RECOMP_FLAGS_IN();
    goto L_0061CF23; /* 0x0061CF1A: jmp 0x61cf23 */
L_0061CF1C:
    /* test eax, eax */ /* 0x0061CF1C: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_0061CF23; /* 0x0061CF1E: je 0x61cf23 */
L_0061CF20:
    PUSH32(esp, eax); /* 0x0061CF20: push eax */
    RECOMP_ICALL(edi); /* 0x0061CF21: call edi */
    RECOMP_FLAGS_IN();
L_0061CF23:
    ecx = MEM32(ebx + 0x1AF3C); /* 0x0061CF23: mov ecx, dword ptr [ebx + 0x1af3c] */
    eax = 0x51EB851Fu; /* 0x0061CF29: mov eax, 0x51eb851f */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(MEM32(ebx + 0x1AF38));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ecx = ecx - MEM32(ebx + 0x1AF38); /* 0x0061CF2E: sub ecx, dword ptr [ebx + 0x1af38] */
    _flag_k = FK_CMP;
    { int64_t _r = (int64_t)(int32_t)eax * (int32_t)(ecx); /* 0x0061CF34: imul ecx */
      eax = (uint32_t)_r; edx = (uint32_t)(_r >> 32); uint32_t _ov = _r != (int32_t)_r;
      _flag_k = FK_EFLAGS; _flag_a = _ov ? 0x801u : 0u; _flag_b = 0; _cf = _ov; }
    MEM8(ebp + (-0x1)) = (uint8_t)(0); /* 0x0061CF36: mov byte ptr [ebp - 1], 0 */
    if (5u) _cf = (((edx) >> 4) & 1u); /* 0x0061CF3A: sar edx, 5 */
    if (5u) { _flag_a = recomp_flags_pack(((uint32_t)((int32_t)edx >> 5u)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    edx = (uint32_t)((int32_t)edx >> 5u);
    eax = edx; /* 0x0061CF3D: mov eax, edx */
    if (31u) _cf = (((eax) >> 30) & 1u); /* 0x0061CF3F: shr eax, 0x1f */
    if (31u) { _flag_a = recomp_flags_pack((eax >> 31u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax >> 31u; /* 0x0061CF3F: shr eax, 0x1f */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + edx; /* 0x0061CF42: add eax, edx */
    _flag_k = FK_ADD;
    if (/* add result */ recomp_cond(_flag_k, _flag_a, _flag_b, CC_E)) goto L_0061D00C; /* 0x0061CF44: je 0x61d00c */
L_0061CF4A:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edi = 0; /* 0x0061CF4A: xor edi, edi */
    _cf = 0;
    _flag_k = FK_TEST;
    esp = esp; /* 0x0061CF4C: lea esp, [esp] */
L_0061CF50:
    eax = MEM32(ebx + 0x1AF38); /* 0x0061CF50: mov eax, dword ptr [ebx + 0x1af38] */
    ecx = (uint32_t)((int32_t)edi * (int32_t)0x64u); /* 0x0061CF56: imul ecx, edi, 0x64 */
    MEM32(ebp + (-0xC)) = ecx; /* 0x0061CF59: mov dword ptr [ebp - 0xc], ecx */
    edi = MEM32(eax + ecx + 0x5C); /* 0x0061CF5C: mov edi, dword ptr [eax + ecx + 0x5c] */
    eax = edi; /* 0x0061CF60: mov eax, edi */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xFFFFF000u);
    eax = eax & 0xFFFFF000u; /* 0x0061CF62: and eax, 0xfffff000 */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp eax, 0xFFFFF000u */ /* 0x0061CF67: cmp eax, 0xfffff000 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xFFFFF000u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_0061CFDC; /* 0x0061CF6C: je 0x61cfdc */
L_0061CF6E:
    eax = MEM32(esi + 0x4); /* 0x0061CF6E: mov eax, dword ptr [esi + 4] */
    /* test eax, eax */ /* 0x0061CF71: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_0061CF7C; /* 0x0061CF73: je 0x61cf7c */
L_0061CF75:
    PUSH32(esp, eax); /* 0x0061CF75: push eax */
    RECOMP_ICALL(MEM32(0x7CC158)); /* 0x0061CF76: call dword ptr [0x7cc158] */
    RECOMP_FLAGS_IN();
L_0061CF7C:
    /* test edi, edi */ /* 0x0061CF7C: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_0061CFCE; /* 0x0061CF7E: je 0x61cfce */
L_0061CF80:
    ecx = edi; /* 0x0061CF80: mov ecx, edi */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0xFFFu);
    ecx = ecx & 0xFFFu; /* 0x0061CF82: and ecx, 0xfff */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx - 1; /* 0x0061CF88: dec ecx */
    _flag_k = FK_DEC;
    eax = MEM32(esi + ecx * 4 + 0x2C); /* 0x0061CF89: mov eax, dword ptr [esi + ecx*4 + 0x2c] */
    /* test eax, eax */ /* 0x0061CF8D: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_0061CFCE; /* 0x0061CF8F: je 0x61cfce */
L_0061CF91:
    eax = MEM32(eax + 0x8); /* 0x0061CF91: mov eax, dword ptr [eax + 8] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x000FFFFFu);
    eax = eax & 0x000FFFFFu; /* 0x0061CF94: and eax, 0xfffff */
    _cf = 0;
    _flag_k = FK_TEST;
    if (12u) _cf = (((edi) >> 11) & 1u); /* 0x0061CF99: shr edi, 0xc */
    if (12u) { _flag_a = recomp_flags_pack((edi >> 12u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    edi = edi >> 12u; /* 0x0061CF99: shr edi, 0xc */
    /* cmp eax, edi */ /* 0x0061CF9C: cmp eax, edi */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_0061CFCE; /* 0x0061CF9E: jne 0x61cfce */
L_0061CFA0:
    /* cmp ecx, 0xFFFFFFFFu */ /* 0x0061CFA0: cmp ecx, -1 */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0xFFFFFFFFu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_0061CFCE; /* 0x0061CFA3: je 0x61cfce */
L_0061CFA5:
    eax = MEM32(esi + 0x4); /* 0x0061CFA5: mov eax, dword ptr [esi + 4] */
    /* test eax, eax */ /* 0x0061CFA8: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_0061CFB3; /* 0x0061CFAA: je 0x61cfb3 */
L_0061CFAC:
    PUSH32(esp, eax); /* 0x0061CFAC: push eax */
    RECOMP_ICALL(MEM32(0x7CC154)); /* 0x0061CFAD: call dword ptr [0x7cc154] */
    RECOMP_FLAGS_IN();
L_0061CFB3:
    eax = MEM32(ebx + 0x1AF38); /* 0x0061CFB3: mov eax, dword ptr [ebx + 0x1af38] */
    ecx = MEM32(ebp + (-0xC)); /* 0x0061CFB9: mov ecx, dword ptr [ebp - 0xc] */
    _xmm[2].u64[0] = MEM32(ebp + (-0x8)); _xmm[2].u64[1] = 0; /* 0x0061CFBC: movss xmm2, dword ptr [ebp - 8] */
    PUSH32(esp, MEM32(eax + ecx + 0x5C)); /* 0x0061CFC1: push dword ptr [eax + ecx + 0x5c] */
    ecx = esi; /* 0x0061CFC5: mov ecx, esi */
    RECOMP_CALL(sub_006DFC00); /* 0x0061CFC7: call 0x6dfc00 */
    RECOMP_FLAGS_IN();
    goto L_0061CFDC; /* 0x0061CFCC: jmp 0x61cfdc */
L_0061CFCE:
    eax = MEM32(esi + 0x4); /* 0x0061CFCE: mov eax, dword ptr [esi + 4] */
    /* test eax, eax */ /* 0x0061CFD1: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_0061CFDC; /* 0x0061CFD3: je 0x61cfdc */
L_0061CFD5:
    PUSH32(esp, eax); /* 0x0061CFD5: push eax */
    RECOMP_ICALL(MEM32(0x7CC154)); /* 0x0061CFD6: call dword ptr [0x7cc154] */
    RECOMP_FLAGS_IN();
L_0061CFDC:
    SET_LO8(eax, MEM8(ebp + (-0x1))); /* 0x0061CFDC: mov al, byte ptr [ebp - 1] */
    ecx = MEM32(ebx + 0x1AF3C); /* 0x0061CFDF: mov ecx, dword ptr [ebx + 0x1af3c] */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(1) << 24;
    SET_LO8(eax, LO8(eax) + 1); /* 0x0061CFE5: inc al */
    _flag_k = FK_NARROW(FK_INC, 24);
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(MEM32(ebx + 0x1AF38));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ecx = ecx - MEM32(ebx + 0x1AF38); /* 0x0061CFE7: sub ecx, dword ptr [ebx + 0x1af38] */
    _flag_k = FK_CMP;
    edi = (uint32_t)LO8(eax); /* 0x0061CFED: movzx edi, al */
    MEM8(ebp + (-0x1)) = (uint8_t)(LO8(eax)); /* 0x0061CFF0: mov byte ptr [ebp - 1], al */
    eax = 0x51EB851Fu; /* 0x0061CFF3: mov eax, 0x51eb851f */
    { int64_t _r = (int64_t)(int32_t)eax * (int32_t)(ecx); /* 0x0061CFF8: imul ecx */
      eax = (uint32_t)_r; edx = (uint32_t)(_r >> 32); uint32_t _ov = _r != (int32_t)_r;
      _flag_k = FK_EFLAGS; _flag_a = _ov ? 0x801u : 0u; _flag_b = 0; _cf = _ov; }
    if (5u) _cf = (((edx) >> 4) & 1u); /* 0x0061CFFA: sar edx, 5 */
    if (5u) { _flag_a = recomp_flags_pack(((uint32_t)((int32_t)edx >> 5u)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    edx = (uint32_t)((int32_t)edx >> 5u);
    eax = edx; /* 0x0061CFFD: mov eax, edx */
    if (31u) _cf = (((eax) >> 30) & 1u); /* 0x0061CFFF: shr eax, 0x1f */
    if (31u) { _flag_a = recomp_flags_pack((eax >> 31u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax >> 31u; /* 0x0061CFFF: shr eax, 0x1f */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + edx; /* 0x0061D002: add eax, edx */
    _flag_k = FK_ADD;
    /* cmp edi, eax */ /* 0x0061D004: cmp edi, eax */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_0061CF50; /* 0x0061D006: jb 0x61cf50 */
L_0061D00C:
    _xmm[0].u64[0] = MEM32(ebp + (-0x8)); _xmm[0].u64[1] = 0; /* 0x0061D00C: movss xmm0, dword ptr [ebp - 8] */
    edi = POP32_VAL(esp); /* 0x0061D011: pop edi */
    esi = POP32_VAL(esp); /* 0x0061D012: pop esi */
    MEM32(ebx + 0x40) = _xmm[0].u32[0]; /* 0x0061D013: movss dword ptr [ebx + 0x40], xmm0 */
    ebx = POP32_VAL(esp); /* 0x0061D018: pop ebx */
    esp = ebp; /* 0x0061D019: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x0061D01B: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x0061D01C: ret  */
    RECOMP_REGS_OUT();
}

void sub_0061D020(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0061D020u);

L_0061D020:
    PUSH32(esp, ebp); /* 0x0061D020: push ebp */
    ebp = esp; /* 0x0061D021: mov ebp, esp */
    PUSH32(esp, 0xFFFFFFFFu); /* 0x0061D023: push -1 */
    PUSH32(esp, 0x007B6978u); /* 0x0061D025: push 0x7b6978 */
    eax = MEM32(FS_BASE + (0)); /* 0x0061D02A: mov eax, dword ptr fs:[0] */
    PUSH32(esp, eax); /* 0x0061D030: push eax */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x74u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x74u; /* 0x0061D031: sub esp, 0x74 */
    _flag_k = FK_CMP;
    PUSH32(esp, ebx); /* 0x0061D034: push ebx */
    PUSH32(esp, esi); /* 0x0061D035: push esi */
    PUSH32(esp, edi); /* 0x0061D036: push edi */
    eax = MEM32(0x855000); /* 0x0061D037: mov eax, dword ptr [0x855000] */
    _flag_a = (uint32_t)((eax ^ ebp)); _flag_b = (uint32_t)((eax ^ ebp));
    eax = eax ^ ebp; /* 0x0061D03C: xor eax, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, eax); /* 0x0061D03E: push eax */
    eax = ebp + (-0xC); /* 0x0061D03F: lea eax, [ebp - 0xc] */
    MEM32(FS_BASE + (0)) = eax; /* 0x0061D042: mov dword ptr fs:[0], eax */
    eax = ecx; /* 0x0061D048: mov eax, ecx */
    MEM32(ebp + (-0x14)) = eax; /* 0x0061D04A: mov dword ptr [ebp - 0x14], eax */
    edx = MEM32(eax + 0x1AF3C); /* 0x0061D04D: mov edx, dword ptr [eax + 0x1af3c] */
    ebx = eax + 0x1AF38; /* 0x0061D053: lea ebx, [eax + 0x1af38] */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(MEM32(ebx));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    edx = edx - MEM32(ebx); /* 0x0061D059: sub edx, dword ptr [ebx] */
    _flag_k = FK_CMP;
    eax = 0x51EB851Fu; /* 0x0061D05B: mov eax, 0x51eb851f */
    { int64_t _r = (int64_t)(int32_t)eax * (int32_t)(edx); /* 0x0061D060: imul edx */
      eax = (uint32_t)_r; edx = (uint32_t)(_r >> 32); uint32_t _ov = _r != (int32_t)_r;
      _flag_k = FK_EFLAGS; _flag_a = _ov ? 0x801u : 0u; _flag_b = 0; _cf = _ov; }
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edi = 0; /* 0x0061D062: xor edi, edi */
    _cf = 0;
    _flag_k = FK_TEST;
    if (5u) _cf = (((edx) >> 4) & 1u); /* 0x0061D064: sar edx, 5 */
    if (5u) { _flag_a = recomp_flags_pack(((uint32_t)((int32_t)edx >> 5u)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    edx = (uint32_t)((int32_t)edx >> 5u);
    eax = edx; /* 0x0061D067: mov eax, edx */
    if (31u) _cf = (((eax) >> 30) & 1u); /* 0x0061D069: shr eax, 0x1f */
    if (31u) { _flag_a = recomp_flags_pack((eax >> 31u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax >> 31u; /* 0x0061D069: shr eax, 0x1f */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + edx; /* 0x0061D06C: add eax, edx */
    _flag_k = FK_ADD;
    if (/* add result */ recomp_cond(_flag_k, _flag_a, _flag_b, CC_E)) goto L_0061D0A8; /* 0x0061D06E: je 0x61d0a8 */
L_0061D070:
    esi = MEM32(ebx); /* 0x0061D070: mov esi, dword ptr [ebx] */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(0x60u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esi = esi + 0x60u; /* 0x0061D072: add esi, 0x60 */
    _flag_k = FK_ADD;
L_0061D075:
    /* cmp MEM32(esi), 0 */ /* 0x0061D075: cmp dword ptr [esi], 0 */
    _flag_a = (uint32_t)(MEM32(esi)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_0061D09A; /* 0x0061D078: je 0x61d09a */
L_0061D07A:
    ecx = MEM32(ebx + 0x4); /* 0x0061D07A: mov ecx, dword ptr [ebx + 4] */
    eax = 0x51EB851Fu; /* 0x0061D07D: mov eax, 0x51eb851f */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(MEM32(ebx));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ecx = ecx - MEM32(ebx); /* 0x0061D082: sub ecx, dword ptr [ebx] */
    _flag_k = FK_CMP;
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(1);
    edi = edi + 1; /* 0x0061D084: inc edi */
    _flag_k = FK_INC;
    { int64_t _r = (int64_t)(int32_t)eax * (int32_t)(ecx); /* 0x0061D085: imul ecx */
      eax = (uint32_t)_r; edx = (uint32_t)(_r >> 32); uint32_t _ov = _r != (int32_t)_r;
      _flag_k = FK_EFLAGS; _flag_a = _ov ? 0x801u : 0u; _flag_b = 0; _cf = _ov; }
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(0x64u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esi = esi + 0x64u; /* 0x0061D087: add esi, 0x64 */
    _flag_k = FK_ADD;
    if (5u) _cf = (((edx) >> 4) & 1u); /* 0x0061D08A: sar edx, 5 */
    if (5u) { _flag_a = recomp_flags_pack(((uint32_t)((int32_t)edx >> 5u)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    edx = (uint32_t)((int32_t)edx >> 5u);
    eax = edx; /* 0x0061D08D: mov eax, edx */
    if (31u) _cf = (((eax) >> 30) & 1u); /* 0x0061D08F: shr eax, 0x1f */
    if (31u) { _flag_a = recomp_flags_pack((eax >> 31u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax >> 31u; /* 0x0061D08F: shr eax, 0x1f */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + edx; /* 0x0061D092: add eax, edx */
    _flag_k = FK_ADD;
    /* cmp edi, eax */ /* 0x0061D094: cmp edi, eax */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_0061D075; /* 0x0061D096: jb 0x61d075 */
L_0061D098:
    goto L_0061D0A8; /* 0x0061D098: jmp 0x61d0a8 */
L_0061D09A:
    eax = edi + 0x1; /* 0x0061D09A: lea eax, [edi + 1] */
    MEM32(ebp + (-0x10)) = eax; /* 0x0061D09D: mov dword ptr [ebp - 0x10], eax */
    /* test eax, eax */ /* 0x0061D0A0: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_0061D17A; /* 0x0061D0A2: jne 0x61d17a */
L_0061D0A8:
    ecx = ebp + (-0x80); /* 0x0061D0A8: lea ecx, [ebp - 0x80] */
    RECOMP_CALL(sub_006DEC40); /* 0x0061D0AB: call 0x6dec40 */
    RECOMP_FLAGS_IN();
    MEM32(ebp + (-0x4)) = 0; /* 0x0061D0B0: mov dword ptr [ebp - 4], 0 */
    eax = MEM32(ebp + (-0x7C)); /* 0x0061D0B7: mov eax, dword ptr [ebp - 0x7c] */
    _flag_a = (uint32_t)((eax | 2)); _flag_b = (uint32_t)((eax | 2));
    eax = eax | 2; /* 0x0061D0BA: or eax, 2 */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x80)) = 0x007F8D80u; /* 0x0061D0BD: mov dword ptr [ebp - 0x80], 0x7f8d80 */
    MEM32(ebp + (-0x7C)) = eax; /* 0x0061D0C4: mov dword ptr [ebp - 0x7c], eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xFFFFFF3Fu);
    eax = eax & 0xFFFFFF3Fu; /* 0x0061D0C7: and eax, 0xffffff3f */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x7C)) = eax; /* 0x0061D0CC: mov dword ptr [ebp - 0x7c], eax */
    MEM32(ebp + (-0x20)) = 0; /* 0x0061D0CF: mov dword ptr [ebp - 0x20], 0 */
    MEM32(ebp + (-0x24)) = 0; /* 0x0061D0D6: mov dword ptr [ebp - 0x24], 0 */
    MEM32(ebp + (-0x4)) = 1; /* 0x0061D0DD: mov dword ptr [ebp - 4], 1 */
    MEM32(ebp + (-0x70)) = 2; /* 0x0061D0E4: mov dword ptr [ebp - 0x70], 2 */
    RECOMP_ICALL(MEM32(0x7CC9AC)); /* 0x0061D0EB: call dword ptr [0x7cc9ac] */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x0061D0F1: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_0061D0F9; /* 0x0061D0F3: jne 0x61d0f9 */
L_0061D0F5:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x0061D0F5: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_0061D113; /* 0x0061D0F7: jmp 0x61d113 */
L_0061D0F9:
    ecx = MEM32(0x927AEC); /* 0x0061D0F9: mov ecx, dword ptr [0x927aec] */
    /* test ecx, ecx */ /* 0x0061D0FF: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_0061D113; /* 0x0061D101: jne 0x61d113 */
L_0061D103:
    ecx = 0x00927AE8u; /* 0x0061D103: mov ecx, 0x927ae8 */
    RECOMP_CALL(sub_00431ED0); /* 0x0061D108: call 0x431ed0 */
    RECOMP_FLAGS_IN();
    ecx = MEM32(0x927AEC); /* 0x0061D10D: mov ecx, dword ptr [0x927aec] */
L_0061D113:
    eax = MEM32(ecx); /* 0x0061D113: mov eax, dword ptr [ecx] */
    RECOMP_ICALL(MEM32(eax + 0x30)); /* 0x0061D115: call dword ptr [eax + 0x30] */
    RECOMP_FLAGS_IN();
    ecx = ebp + (-0x80); /* 0x0061D118: lea ecx, [ebp - 0x80] */
    PUSH32(esp, ecx); /* 0x0061D11B: push ecx */
    ecx = ebx; /* 0x0061D11C: mov ecx, ebx */
    _xmm[0].u64[0] = (uint32_t)(eax); _xmm[0].u64[1] = 0; /* 0x0061D11E: movd xmm0, eax */
    { int32_t _a = (int32_t)_xmm[0].u32[0], _b = (int32_t)_xmm[0].u32[1]; _xmm[0].f64[0] = _a; _xmm[0].f64[1] = _b; } /* 0x0061D122: cvtdq2pd xmm0, xmm0 */
    if (31u) _cf = (((eax) >> 30) & 1u); /* 0x0061D126: shr eax, 0x1f */
    if (31u) { _flag_a = recomp_flags_pack((eax >> 31u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax >> 31u; /* 0x0061D126: shr eax, 0x1f */
    { double _s = sse_f64(MEM64(eax * 8 + 0x809C60)); _xmm[0].f64[0] = (double)(_xmm[0].f64[0] + _s); } /* 0x0061D129: addsd xmm0, qword ptr [eax*8 + 0x809c60] */
    { xmm_t _s = _xmm[0]; _xmm[0].f32[0] = (float)_s.f64[0]; _xmm[0].f32[1] = (float)_s.f64[1]; _xmm[0].u64[1] = 0; } /* 0x0061D132: cvtpd2ps xmm0, xmm0 */
    MEM32(ebp + (-0x78)) = _xmm[0].u32[0]; /* 0x0061D136: movss dword ptr [ebp - 0x78], xmm0 */
    RECOMP_CALL(sub_0061D510); /* 0x0061D13B: call 0x61d510 */
    RECOMP_FLAGS_IN();
    ecx = MEM32(ebx + 0x4); /* 0x0061D140: mov ecx, dword ptr [ebx + 4] */
    eax = 0x51EB851Fu; /* 0x0061D143: mov eax, 0x51eb851f */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(MEM32(ebx));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ecx = ecx - MEM32(ebx); /* 0x0061D148: sub ecx, dword ptr [ebx] */
    _flag_k = FK_CMP;
    { int64_t _r = (int64_t)(int32_t)eax * (int32_t)(ecx); /* 0x0061D14A: imul ecx */
      eax = (uint32_t)_r; edx = (uint32_t)(_r >> 32); uint32_t _ov = _r != (int32_t)_r;
      _flag_k = FK_EFLAGS; _flag_a = _ov ? 0x801u : 0u; _flag_b = 0; _cf = _ov; }
    if (5u) _cf = (((edx) >> 4) & 1u); /* 0x0061D14C: sar edx, 5 */
    if (5u) { _flag_a = recomp_flags_pack(((uint32_t)((int32_t)edx >> 5u)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    edx = (uint32_t)((int32_t)edx >> 5u);
    eax = edx; /* 0x0061D14F: mov eax, edx */
    if (31u) _cf = (((eax) >> 30) & 1u); /* 0x0061D151: shr eax, 0x1f */
    if (31u) { _flag_a = recomp_flags_pack((eax >> 31u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax >> 31u; /* 0x0061D151: shr eax, 0x1f */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + edx; /* 0x0061D154: add eax, edx */
    _flag_k = FK_ADD;
    MEM32(ebp + (-0x10)) = eax; /* 0x0061D156: mov dword ptr [ebp - 0x10], eax */
    MEM32(ebp + (-0x4)) = 0xFFFFFFFFu; /* 0x0061D159: mov dword ptr [ebp - 4], 0xffffffff */
    ecx = MEM32(ebp + (-0x34)); /* 0x0061D160: mov ecx, dword ptr [ebp - 0x34] */
    MEM32(ebp + (-0x80)) = 0x007F8DACu; /* 0x0061D163: mov dword ptr [ebp - 0x80], 0x7f8dac */
    /* test ecx, ecx */ /* 0x0061D16A: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_0061D17A; /* 0x0061D16C: je 0x61d17a */
L_0061D16E:
    eax = ebp + (-0x80); /* 0x0061D16E: lea eax, [ebp - 0x80] */
    PUSH32(esp, eax); /* 0x0061D171: push eax */
    RECOMP_CALL(sub_006E0330); /* 0x0061D172: call 0x6e0330 */
    RECOMP_FLAGS_IN();
    eax = MEM32(ebp + (-0x10)); /* 0x0061D177: mov eax, dword ptr [ebp - 0x10] */
L_0061D17A:
    edi = MEM32(ebp + (-0x14)); /* 0x0061D17A: mov edi, dword ptr [ebp - 0x14] */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 8; /* 0x0061D17D: sub esp, 8 */
    _flag_k = FK_CMP;
    _xmm[2].u64[0] = MEM32(0x809824); _xmm[2].u64[1] = 0; /* 0x0061D180: movss xmm2, dword ptr [0x809824] */
    { xmm_t _s = _xmm[3]; for (int _k = 0; _k < 4; _k++) _xmm[3].u32[_k] = _xmm[3].u32[_k] ^ _s.u32[_k]; } /* 0x0061D188: xorps xmm3, xmm3 */
    ebx = (uint32_t)((int32_t)eax * (int32_t)0x64u); /* 0x0061D18B: imul ebx, eax, 0x64 */
    esi = MEM32(edi + 0x1AF38); /* 0x0061D18E: mov esi, dword ptr [edi + 0x1af38] */
    ecx = edi + 0x1D0; /* 0x0061D194: lea ecx, [edi + 0x1d0] */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(0xFFFFFF9Cu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esi = esi + 0xFFFFFF9Cu; /* 0x0061D19A: add esi, -0x64 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esi = esi + ebx; /* 0x0061D19D: add esi, ebx */
    _flag_k = FK_ADD;
    PUSH32(esp, esi); /* 0x0061D19F: push esi */
    RECOMP_CALL(sub_006DFEA0); /* 0x0061D1A0: call 0x6dfea0 */
    RECOMP_FLAGS_IN();
    MEM32(esi + 0x5C) = eax; /* 0x0061D1A5: mov dword ptr [esi + 0x5c], eax */
    ecx = edi + 0x1D0; /* 0x0061D1A8: lea ecx, [edi + 0x1d0] */
    eax = edi; /* 0x0061D1AE: mov eax, edi */
    edx = MEM32(eax + 0x1AF38); /* 0x0061D1B0: mov edx, dword ptr [eax + 0x1af38] */
    _xmm[2].u64[0] = MEM32(eax + 0x40); _xmm[2].u64[1] = 0; /* 0x0061D1B6: movss xmm2, dword ptr [eax + 0x40] */
    PUSH32(esp, MEM32(ebx + edx + (-0x8))); /* 0x0061D1BB: push dword ptr [ebx + edx - 8] */
    RECOMP_CALL(sub_006DFC00); /* 0x0061D1BF: call 0x6dfc00 */
    RECOMP_FLAGS_IN();
    eax = MEM32(ebp + (-0x10)); /* 0x0061D1C4: mov eax, dword ptr [ebp - 0x10] */
    ecx = MEM32(ebp + (-0xC)); /* 0x0061D1C7: mov ecx, dword ptr [ebp - 0xc] */
    MEM32(FS_BASE + (0)) = ecx; /* 0x0061D1CA: mov dword ptr fs:[0], ecx */
    ecx = POP32_VAL(esp); /* 0x0061D1D1: pop ecx */
    edi = POP32_VAL(esp); /* 0x0061D1D2: pop edi */
    esi = POP32_VAL(esp); /* 0x0061D1D3: pop esi */
    ebx = POP32_VAL(esp); /* 0x0061D1D4: pop ebx */
    esp = ebp; /* 0x0061D1D5: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x0061D1D7: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x0061D1D8: ret  */
    RECOMP_REGS_OUT();
}

void sub_0061D1E0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0061D1E0u);

L_0061D1E0:
    PUSH32(esp, ebp); /* 0x0061D1E0: push ebp */
    ebp = esp; /* 0x0061D1E1: mov ebp, esp */
    PUSH32(esp, esi); /* 0x0061D1E3: push esi */
    esi = ecx; /* 0x0061D1E4: mov esi, ecx */
    eax = 0x51EB851Fu; /* 0x0061D1E6: mov eax, 0x51eb851f */
    ecx = MEM32(ebp + 0x8); /* 0x0061D1EB: mov ecx, dword ptr [ebp + 8] */
    edx = MEM32(esi + 0x1AF3C); /* 0x0061D1EE: mov edx, dword ptr [esi + 0x1af3c] */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(MEM32(esi + 0x1AF38));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    edx = edx - MEM32(esi + 0x1AF38); /* 0x0061D1F4: sub edx, dword ptr [esi + 0x1af38] */
    _flag_k = FK_CMP;
    { int64_t _r = (int64_t)(int32_t)eax * (int32_t)(edx); /* 0x0061D1FA: imul edx */
      eax = (uint32_t)_r; edx = (uint32_t)(_r >> 32); uint32_t _ov = _r != (int32_t)_r;
      _flag_k = FK_EFLAGS; _flag_a = _ov ? 0x801u : 0u; _flag_b = 0; _cf = _ov; }
    if (5u) _cf = (((edx) >> 4) & 1u); /* 0x0061D1FC: sar edx, 5 */
    if (5u) { _flag_a = recomp_flags_pack(((uint32_t)((int32_t)edx >> 5u)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    edx = (uint32_t)((int32_t)edx >> 5u);
    eax = edx; /* 0x0061D1FF: mov eax, edx */
    if (31u) _cf = (((eax) >> 30) & 1u); /* 0x0061D201: shr eax, 0x1f */
    if (31u) { _flag_a = recomp_flags_pack((eax >> 31u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax >> 31u; /* 0x0061D201: shr eax, 0x1f */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + edx; /* 0x0061D204: add eax, edx */
    _flag_k = FK_ADD;
    /* cmp ecx, eax */ /* 0x0061D206: cmp ecx, eax */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_A(_flag_a, _flag_b)) goto L_0061D226; /* 0x0061D208: ja 0x61d226 */
L_0061D20A:
    eax = MEM32(esi + 0x1AF38); /* 0x0061D20A: mov eax, dword ptr [esi + 0x1af38] */
    ecx = (uint32_t)((int32_t)ecx * (int32_t)0x64u); /* 0x0061D210: imul ecx, ecx, 0x64 */
    ecx = MEM32(ecx + eax + (-0x4)); /* 0x0061D213: mov ecx, dword ptr [ecx + eax - 4] */
    /* test ecx, ecx */ /* 0x0061D217: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_0061D226; /* 0x0061D219: je 0x61d226 */
L_0061D21B:
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x0061D21B: push dword ptr [ebp + 0x10] */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x0061D21E: push dword ptr [ebp + 0xc] */
    RECOMP_CALL(sub_0061C270); /* 0x0061D221: call 0x61c270 */
    RECOMP_FLAGS_IN();
L_0061D226:
    esi = POP32_VAL(esp); /* 0x0061D226: pop esi */
    ebp = POP32_VAL(esp); /* 0x0061D227: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 16; { RECOMP_REGS_OUT(); return; } /* 0x0061D228: ret 0xc */
    RECOMP_REGS_OUT();
}

void sub_0061D230(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0061D230u);

L_0061D230:
    edx = MEM32(ecx + 0x1AF3C); /* 0x0061D230: mov edx, dword ptr [ecx + 0x1af3c] */
    eax = 0x51EB851Fu; /* 0x0061D236: mov eax, 0x51eb851f */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(MEM32(ecx + 0x1AF38));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    edx = edx - MEM32(ecx + 0x1AF38); /* 0x0061D23B: sub edx, dword ptr [ecx + 0x1af38] */
    _flag_k = FK_CMP;
    { int64_t _r = (int64_t)(int32_t)eax * (int32_t)(edx); /* 0x0061D241: imul edx */
      eax = (uint32_t)_r; edx = (uint32_t)(_r >> 32); uint32_t _ov = _r != (int32_t)_r;
      _flag_k = FK_EFLAGS; _flag_a = _ov ? 0x801u : 0u; _flag_b = 0; _cf = _ov; }
    if (5u) _cf = (((edx) >> 4) & 1u); /* 0x0061D243: sar edx, 5 */
    if (5u) { _flag_a = recomp_flags_pack(((uint32_t)((int32_t)edx >> 5u)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    edx = (uint32_t)((int32_t)edx >> 5u);
    eax = edx; /* 0x0061D246: mov eax, edx */
    if (31u) _cf = (((eax) >> 30) & 1u); /* 0x0061D248: shr eax, 0x1f */
    if (31u) { _flag_a = recomp_flags_pack((eax >> 31u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax >> 31u; /* 0x0061D248: shr eax, 0x1f */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + edx; /* 0x0061D24B: add eax, edx */
    _flag_k = FK_ADD;
    /* cmp eax, 1 */ /* 0x0061D24D: cmp eax, 1 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_B(_flag_a, _flag_b)) goto L_0061D26A; /* 0x0061D250: jb 0x61d26a */
L_0061D252:
    eax = MEM32(ecx + 0x1AF38); /* 0x0061D252: mov eax, dword ptr [ecx + 0x1af38] */
    eax = MEM32(eax + 0x60); /* 0x0061D258: mov eax, dword ptr [eax + 0x60] */
    /* test eax, eax */ /* 0x0061D25B: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_0061D26A; /* 0x0061D25D: je 0x61d26a */
L_0061D25F:
    _xmm[0].u64[0] = MEM32(eax + 0x1A0); _xmm[0].u64[1] = 0; /* 0x0061D25F: movss xmm0, dword ptr [eax + 0x1a0] */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x0061D267: ret 4 */
L_0061D26A:
    { xmm_t _s = _xmm[0]; for (int _k = 0; _k < 4; _k++) _xmm[0].u32[_k] = _xmm[0].u32[_k] ^ _s.u32[_k]; } /* 0x0061D26A: xorps xmm0, xmm0 */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x0061D26D: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_0061D270(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0061D270u);

L_0061D270:
    PUSH32(esp, ebp); /* 0x0061D270: push ebp */
    ebp = esp; /* 0x0061D271: mov ebp, esp */
    PUSH32(esp, esi); /* 0x0061D273: push esi */
    esi = ecx + 0x1AF38; /* 0x0061D274: lea esi, [ecx + 0x1af38] */
    eax = 0x51EB851Fu; /* 0x0061D27A: mov eax, 0x51eb851f */
    ecx = MEM32(esi + 0x4); /* 0x0061D27F: mov ecx, dword ptr [esi + 4] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(MEM32(esi));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ecx = ecx - MEM32(esi); /* 0x0061D282: sub ecx, dword ptr [esi] */
    _flag_k = FK_CMP;
    { int64_t _r = (int64_t)(int32_t)eax * (int32_t)(ecx); /* 0x0061D284: imul ecx */
      eax = (uint32_t)_r; edx = (uint32_t)(_r >> 32); uint32_t _ov = _r != (int32_t)_r;
      _flag_k = FK_EFLAGS; _flag_a = _ov ? 0x801u : 0u; _flag_b = 0; _cf = _ov; }
    PUSH32(esp, edi); /* 0x0061D286: push edi */
    edi = MEM32(ebp + 0x8); /* 0x0061D287: mov edi, dword ptr [ebp + 8] */
    if (5u) _cf = (((edx) >> 4) & 1u); /* 0x0061D28A: sar edx, 5 */
    if (5u) { _flag_a = recomp_flags_pack(((uint32_t)((int32_t)edx >> 5u)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    edx = (uint32_t)((int32_t)edx >> 5u);
    eax = edx; /* 0x0061D28D: mov eax, edx */
    if (31u) _cf = (((eax) >> 30) & 1u); /* 0x0061D28F: shr eax, 0x1f */
    if (31u) { _flag_a = recomp_flags_pack((eax >> 31u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax >> 31u; /* 0x0061D28F: shr eax, 0x1f */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + edx; /* 0x0061D292: add eax, edx */
    _flag_k = FK_ADD;
    /* cmp edi, eax */ /* 0x0061D294: cmp edi, eax */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_A(_flag_a, _flag_b)) goto L_0061D33A; /* 0x0061D296: ja 0x61d33a */
L_0061D29C:
    /* test edi, edi */ /* 0x0061D29C: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_0061D33A; /* 0x0061D29E: je 0x61d33a */
L_0061D2A4:
    eax = MEM32(esi); /* 0x0061D2A4: mov eax, dword ptr [esi] */
    ecx = (uint32_t)((int32_t)edi * (int32_t)0x64u); /* 0x0061D2A6: imul ecx, edi, 0x64 */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0xFFFFFF9Cu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 0xFFFFFF9Cu; /* 0x0061D2A9: add ecx, -0x64 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + ecx; /* 0x0061D2AC: add eax, ecx */
    _flag_k = FK_ADD;
    ecx = MEM32(eax + 0x4C); /* 0x0061D2AE: mov ecx, dword ptr [eax + 0x4c] */
    MEM32(eax + 0x5C) = 0; /* 0x0061D2B1: mov dword ptr [eax + 0x5c], 0 */
    /* test ecx, ecx */ /* 0x0061D2B8: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_0061D2C2; /* 0x0061D2BA: je 0x61d2c2 */
L_0061D2BC:
    PUSH32(esp, eax); /* 0x0061D2BC: push eax */
    RECOMP_CALL(sub_006E0330); /* 0x0061D2BD: call 0x6e0330 */
    RECOMP_FLAGS_IN();
L_0061D2C2:
    ecx = MEM32(esi + 0x4); /* 0x0061D2C2: mov ecx, dword ptr [esi + 4] */
    eax = 0x51EB851Fu; /* 0x0061D2C5: mov eax, 0x51eb851f */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(MEM32(esi));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ecx = ecx - MEM32(esi); /* 0x0061D2CA: sub ecx, dword ptr [esi] */
    _flag_k = FK_CMP;
    { int64_t _r = (int64_t)(int32_t)eax * (int32_t)(ecx); /* 0x0061D2CC: imul ecx */
      eax = (uint32_t)_r; edx = (uint32_t)(_r >> 32); uint32_t _ov = _r != (int32_t)_r;
      _flag_k = FK_EFLAGS; _flag_a = _ov ? 0x801u : 0u; _flag_b = 0; _cf = _ov; }
    if (5u) _cf = (((edx) >> 4) & 1u); /* 0x0061D2CE: sar edx, 5 */
    if (5u) { _flag_a = recomp_flags_pack(((uint32_t)((int32_t)edx >> 5u)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    edx = (uint32_t)((int32_t)edx >> 5u);
    eax = edx; /* 0x0061D2D1: mov eax, edx */
    if (31u) _cf = (((eax) >> 30) & 1u); /* 0x0061D2D3: shr eax, 0x1f */
    if (31u) { _flag_a = recomp_flags_pack((eax >> 31u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax >> 31u; /* 0x0061D2D3: shr eax, 0x1f */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + edx; /* 0x0061D2D6: add eax, edx */
    _flag_k = FK_ADD;
    /* cmp edi, eax */ /* 0x0061D2D8: cmp edi, eax */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_0061D33A; /* 0x0061D2DA: jne 0x61d33a */
L_0061D2DC:
    ecx = MEM32(esi + 0x4); /* 0x0061D2DC: mov ecx, dword ptr [esi + 4] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x64u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ecx = ecx - 0x64u; /* 0x0061D2DF: sub ecx, 0x64 */
    _flag_k = FK_CMP;
    PUSH32(esp, 0); /* 0x0061D2E2: push 0 */
    eax = MEM32(ecx); /* 0x0061D2E4: mov eax, dword ptr [ecx] */
    RECOMP_ICALL(MEM32(eax + 0x4)); /* 0x0061D2E6: call dword ptr [eax + 4] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(MEM32(esi + 0x4)); _flag_b = (uint32_t)(0xFFFFFF9Cu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM32(esi + 0x4) = MEM32(esi + 0x4) + 0xFFFFFF9Cu; /* 0x0061D2E9: add dword ptr [esi + 4], -0x64 */
    _flag_k = FK_ADD;
    eax = 0x51EB851Fu; /* 0x0061D2ED: mov eax, 0x51eb851f */
    ecx = MEM32(esi + 0x4); /* 0x0061D2F2: mov ecx, dword ptr [esi + 4] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(MEM32(esi));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ecx = ecx - MEM32(esi); /* 0x0061D2F5: sub ecx, dword ptr [esi] */
    _flag_k = FK_CMP;
    { int64_t _r = (int64_t)(int32_t)eax * (int32_t)(ecx); /* 0x0061D2F7: imul ecx */
      eax = (uint32_t)_r; edx = (uint32_t)(_r >> 32); uint32_t _ov = _r != (int32_t)_r;
      _flag_k = FK_EFLAGS; _flag_a = _ov ? 0x801u : 0u; _flag_b = 0; _cf = _ov; }
    if (5u) _cf = (((edx) >> 4) & 1u); /* 0x0061D2F9: sar edx, 5 */
    if (5u) { _flag_a = recomp_flags_pack(((uint32_t)((int32_t)edx >> 5u)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    edx = (uint32_t)((int32_t)edx >> 5u);
    eax = edx; /* 0x0061D2FC: mov eax, edx */
    if (31u) _cf = (((eax) >> 30) & 1u); /* 0x0061D2FE: shr eax, 0x1f */
    if (31u) { _flag_a = recomp_flags_pack((eax >> 31u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax >> 31u; /* 0x0061D2FE: shr eax, 0x1f */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + edx; /* 0x0061D301: add eax, edx */
    _flag_k = FK_ADD;
    if (/* add result */ recomp_cond(_flag_k, _flag_a, _flag_b, CC_E)) goto L_0061D33A; /* 0x0061D303: je 0x61d33a */
L_0061D305:
    ecx = (uint32_t)((int32_t)eax * (int32_t)0x64u); /* 0x0061D305: imul ecx, eax, 0x64 */
    eax = MEM32(esi); /* 0x0061D308: mov eax, dword ptr [esi] */
    /* cmp MEM32(ecx + eax + (-0x4)), 0 */ /* 0x0061D30A: cmp dword ptr [ecx + eax - 4], 0 */
    _flag_a = (uint32_t)(MEM32(ecx + eax + (-0x4))); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_0061D33A; /* 0x0061D30F: jne 0x61d33a */
L_0061D311:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xFFFFFF9Cu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 0xFFFFFF9Cu; /* 0x0061D311: add eax, -0x64 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + ecx; /* 0x0061D314: add eax, ecx */
    _flag_k = FK_ADD;
    ecx = esi; /* 0x0061D316: mov ecx, esi */
    PUSH32(esp, eax); /* 0x0061D318: push eax */
    eax = ebp + 0x8; /* 0x0061D319: lea eax, [ebp + 8] */
    PUSH32(esp, eax); /* 0x0061D31C: push eax */
    RECOMP_CALL(sub_0061D600); /* 0x0061D31D: call 0x61d600 */
    RECOMP_FLAGS_IN();
    ecx = MEM32(esi + 0x4); /* 0x0061D322: mov ecx, dword ptr [esi + 4] */
    eax = 0x51EB851Fu; /* 0x0061D325: mov eax, 0x51eb851f */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(MEM32(esi));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ecx = ecx - MEM32(esi); /* 0x0061D32A: sub ecx, dword ptr [esi] */
    _flag_k = FK_CMP;
    { int64_t _r = (int64_t)(int32_t)eax * (int32_t)(ecx); /* 0x0061D32C: imul ecx */
      eax = (uint32_t)_r; edx = (uint32_t)(_r >> 32); uint32_t _ov = _r != (int32_t)_r;
      _flag_k = FK_EFLAGS; _flag_a = _ov ? 0x801u : 0u; _flag_b = 0; _cf = _ov; }
    if (5u) _cf = (((edx) >> 4) & 1u); /* 0x0061D32E: sar edx, 5 */
    if (5u) { _flag_a = recomp_flags_pack(((uint32_t)((int32_t)edx >> 5u)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    edx = (uint32_t)((int32_t)edx >> 5u);
    eax = edx; /* 0x0061D331: mov eax, edx */
    if (31u) _cf = (((eax) >> 30) & 1u); /* 0x0061D333: shr eax, 0x1f */
    if (31u) { _flag_a = recomp_flags_pack((eax >> 31u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax >> 31u; /* 0x0061D333: shr eax, 0x1f */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + edx; /* 0x0061D336: add eax, edx */
    _flag_k = FK_ADD;
    RECOMP_BACKEDGE();
    if (/* add result */ recomp_cond(_flag_k, _flag_a, _flag_b, CC_NE)) goto L_0061D305; /* 0x0061D338: jne 0x61d305 */
L_0061D33A:
    edi = POP32_VAL(esp); /* 0x0061D33A: pop edi */
    esi = POP32_VAL(esp); /* 0x0061D33B: pop esi */
    ebp = POP32_VAL(esp); /* 0x0061D33C: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x0061D33D: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_0061D340(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0061D340u);

L_0061D340:
    PUSH32(esp, ebp); /* 0x0061D340: push ebp */
    ebp = esp; /* 0x0061D341: mov ebp, esp */
    SET_LO8(eax, MEM8(ebp + 0x8)); /* 0x0061D343: mov al, byte ptr [ebp + 8] */
    MEM8(ecx) = (uint8_t)(LO8(eax)); /* 0x0061D346: mov byte ptr [ecx], al */
    /* cmp LO8(eax), 1 */ /* 0x0061D348: cmp al, 1 */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(1) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_0061D384; /* 0x0061D34A: jne 0x61d384 */
L_0061D34C:
    RECOMP_ICALL(MEM32(0x7CC9AC)); /* 0x0061D34C: call dword ptr [0x7cc9ac] */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x0061D352: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_0061D361; /* 0x0061D354: jne 0x61d361 */
L_0061D356:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x0061D356: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    eax = MEM32(ecx); /* 0x0061D358: mov eax, dword ptr [ecx] */
    RECOMP_ICALL(MEM32(eax + 0x1C)); /* 0x0061D35A: call dword ptr [eax + 0x1c] */
    RECOMP_FLAGS_IN();
    ebp = POP32_VAL(esp); /* 0x0061D35D: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x0061D35E: ret 4 */
L_0061D361:
    ecx = MEM32(0x927AEC); /* 0x0061D361: mov ecx, dword ptr [0x927aec] */
    /* test ecx, ecx */ /* 0x0061D367: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_0061D37B; /* 0x0061D369: jne 0x61d37b */
L_0061D36B:
    ecx = 0x00927AE8u; /* 0x0061D36B: mov ecx, 0x927ae8 */
    RECOMP_CALL(sub_00431ED0); /* 0x0061D370: call 0x431ed0 */
    RECOMP_FLAGS_IN();
    ecx = MEM32(0x927AEC); /* 0x0061D375: mov ecx, dword ptr [0x927aec] */
L_0061D37B:
    eax = MEM32(ecx); /* 0x0061D37B: mov eax, dword ptr [ecx] */
    RECOMP_ICALL(MEM32(eax + 0x1C)); /* 0x0061D37D: call dword ptr [eax + 0x1c] */
    RECOMP_FLAGS_IN();
    ebp = POP32_VAL(esp); /* 0x0061D380: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x0061D381: ret 4 */
L_0061D384:
    RECOMP_ICALL(MEM32(0x7CC9AC)); /* 0x0061D384: call dword ptr [0x7cc9ac] */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x0061D38A: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_0061D399; /* 0x0061D38C: jne 0x61d399 */
L_0061D38E:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x0061D38E: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    eax = MEM32(ecx); /* 0x0061D390: mov eax, dword ptr [ecx] */
    RECOMP_ICALL(MEM32(eax + 0x20)); /* 0x0061D392: call dword ptr [eax + 0x20] */
    RECOMP_FLAGS_IN();
    ebp = POP32_VAL(esp); /* 0x0061D395: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x0061D396: ret 4 */
L_0061D399:
    ecx = MEM32(0x927AEC); /* 0x0061D399: mov ecx, dword ptr [0x927aec] */
    /* test ecx, ecx */ /* 0x0061D39F: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_0061D3B3; /* 0x0061D3A1: jne 0x61d3b3 */
L_0061D3A3:
    ecx = 0x00927AE8u; /* 0x0061D3A3: mov ecx, 0x927ae8 */
    RECOMP_CALL(sub_00431ED0); /* 0x0061D3A8: call 0x431ed0 */
    RECOMP_FLAGS_IN();
    ecx = MEM32(0x927AEC); /* 0x0061D3AD: mov ecx, dword ptr [0x927aec] */
L_0061D3B3:
    eax = MEM32(ecx); /* 0x0061D3B3: mov eax, dword ptr [ecx] */
    RECOMP_ICALL(MEM32(eax + 0x20)); /* 0x0061D3B5: call dword ptr [eax + 0x20] */
    RECOMP_FLAGS_IN();
    ebp = POP32_VAL(esp); /* 0x0061D3B8: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x0061D3B9: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_0061D3C0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0061D3C0u);

L_0061D3C0:
    PUSH32(esp, esi); /* 0x0061D3C0: push esi */
    esi = ecx; /* 0x0061D3C1: mov esi, ecx */
    /* cmp MEM8(esi), 1 */ /* 0x0061D3C3: cmp byte ptr [esi], 1 */
    _flag_a = (uint32_t)(MEM8(esi)) << 24; _flag_b = (uint32_t)(1) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_0061D40E; /* 0x0061D3C6: je 0x61d40e */
L_0061D3C8:
    /* cmp MEM8(esi + 0x4), 0 */ /* 0x0061D3C8: cmp byte ptr [esi + 4], 0 */
    _flag_a = (uint32_t)(MEM8(esi + 0x4)) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_0061D40E; /* 0x0061D3CC: je 0x61d40e */
L_0061D3CE:
    /* cmp MEM8(esi + 0x3), 0 */ /* 0x0061D3CE: cmp byte ptr [esi + 3], 0 */
    _flag_a = (uint32_t)(MEM8(esi + 0x3)) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_0061D40E; /* 0x0061D3D2: jne 0x61d40e */
L_0061D3D4:
    RECOMP_ICALL(MEM32(0x7CC9AC)); /* 0x0061D3D4: call dword ptr [0x7cc9ac] */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x0061D3DA: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_0061D3EB; /* 0x0061D3DC: jne 0x61d3eb */
L_0061D3DE:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x0061D3DE: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    eax = MEM32(ecx); /* 0x0061D3E0: mov eax, dword ptr [ecx] */
    RECOMP_ICALL(MEM32(eax + 0x1C)); /* 0x0061D3E2: call dword ptr [eax + 0x1c] */
    RECOMP_FLAGS_IN();
    MEM8(esi + 0x3) = (uint8_t)(1); /* 0x0061D3E5: mov byte ptr [esi + 3], 1 */
    esi = POP32_VAL(esp); /* 0x0061D3E9: pop esi */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x0061D3EA: ret  */
L_0061D3EB:
    ecx = MEM32(0x927AEC); /* 0x0061D3EB: mov ecx, dword ptr [0x927aec] */
    /* test ecx, ecx */ /* 0x0061D3F1: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_0061D405; /* 0x0061D3F3: jne 0x61d405 */
L_0061D3F5:
    ecx = 0x00927AE8u; /* 0x0061D3F5: mov ecx, 0x927ae8 */
    RECOMP_CALL(sub_00431ED0); /* 0x0061D3FA: call 0x431ed0 */
    RECOMP_FLAGS_IN();
    ecx = MEM32(0x927AEC); /* 0x0061D3FF: mov ecx, dword ptr [0x927aec] */
L_0061D405:
    eax = MEM32(ecx); /* 0x0061D405: mov eax, dword ptr [ecx] */
    RECOMP_ICALL(MEM32(eax + 0x1C)); /* 0x0061D407: call dword ptr [eax + 0x1c] */
    RECOMP_FLAGS_IN();
    MEM8(esi + 0x3) = (uint8_t)(1); /* 0x0061D40A: mov byte ptr [esi + 3], 1 */
L_0061D40E:
    esi = POP32_VAL(esp); /* 0x0061D40E: pop esi */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x0061D40F: ret  */
    RECOMP_REGS_OUT();
}

void sub_0061D410(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0061D410u);

L_0061D410:
    PUSH32(esp, esi); /* 0x0061D410: push esi */
    esi = ecx; /* 0x0061D411: mov esi, ecx */
    /* cmp MEM8(esi), 1 */ /* 0x0061D413: cmp byte ptr [esi], 1 */
    _flag_a = (uint32_t)(MEM8(esi)) << 24; _flag_b = (uint32_t)(1) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_0061D45E; /* 0x0061D416: je 0x61d45e */
L_0061D418:
    /* cmp MEM8(esi + 0x4), 0 */ /* 0x0061D418: cmp byte ptr [esi + 4], 0 */
    _flag_a = (uint32_t)(MEM8(esi + 0x4)) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_0061D45E; /* 0x0061D41C: je 0x61d45e */
L_0061D41E:
    /* cmp MEM8(esi + 0x3), 0 */ /* 0x0061D41E: cmp byte ptr [esi + 3], 0 */
    _flag_a = (uint32_t)(MEM8(esi + 0x3)) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_0061D45E; /* 0x0061D422: je 0x61d45e */
L_0061D424:
    RECOMP_ICALL(MEM32(0x7CC9AC)); /* 0x0061D424: call dword ptr [0x7cc9ac] */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x0061D42A: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_0061D43B; /* 0x0061D42C: jne 0x61d43b */
L_0061D42E:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x0061D42E: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    eax = MEM32(ecx); /* 0x0061D430: mov eax, dword ptr [ecx] */
    RECOMP_ICALL(MEM32(eax + 0x20)); /* 0x0061D432: call dword ptr [eax + 0x20] */
    RECOMP_FLAGS_IN();
    MEM8(esi + 0x3) = (uint8_t)(0); /* 0x0061D435: mov byte ptr [esi + 3], 0 */
    esi = POP32_VAL(esp); /* 0x0061D439: pop esi */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x0061D43A: ret  */
L_0061D43B:
    ecx = MEM32(0x927AEC); /* 0x0061D43B: mov ecx, dword ptr [0x927aec] */
    /* test ecx, ecx */ /* 0x0061D441: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_0061D455; /* 0x0061D443: jne 0x61d455 */
L_0061D445:
    ecx = 0x00927AE8u; /* 0x0061D445: mov ecx, 0x927ae8 */
    RECOMP_CALL(sub_00431ED0); /* 0x0061D44A: call 0x431ed0 */
    RECOMP_FLAGS_IN();
    ecx = MEM32(0x927AEC); /* 0x0061D44F: mov ecx, dword ptr [0x927aec] */
L_0061D455:
    eax = MEM32(ecx); /* 0x0061D455: mov eax, dword ptr [ecx] */
    RECOMP_ICALL(MEM32(eax + 0x20)); /* 0x0061D457: call dword ptr [eax + 0x20] */
    RECOMP_FLAGS_IN();
    MEM8(esi + 0x3) = (uint8_t)(0); /* 0x0061D45A: mov byte ptr [esi + 3], 0 */
L_0061D45E:
    esi = POP32_VAL(esp); /* 0x0061D45E: pop esi */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x0061D45F: ret  */
    RECOMP_REGS_OUT();
}

void sub_0061D460(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0061D460u);

L_0061D460:
    PUSH32(esp, ebp); /* 0x0061D460: push ebp */
    ebp = esp; /* 0x0061D461: mov ebp, esp */
    PUSH32(esp, ebx); /* 0x0061D463: push ebx */
    ebx = MEM32(ebp + 0xC); /* 0x0061D464: mov ebx, dword ptr [ebp + 0xc] */
    PUSH32(esp, esi); /* 0x0061D467: push esi */
    PUSH32(esp, edi); /* 0x0061D468: push edi */
    edi = ecx; /* 0x0061D469: mov edi, ecx */
    /* cmp MEM8(edi), 1 */ /* 0x0061D46B: cmp byte ptr [edi], 1 */
    _flag_a = (uint32_t)(MEM8(edi)) << 24; _flag_b = (uint32_t)(1) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    SET_LO8(ecx, (CMP_NE(_flag_a, _flag_b)) ? 1 : 0); /* 0x0061D46E: setne cl */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    esi = 0; /* 0x0061D471: xor esi, esi */
    _cf = 0;
    _flag_k = FK_TEST;
    /* test ebx, ebx */ /* 0x0061D473: test ebx, ebx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ebx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_0061D4DD; /* 0x0061D475: je 0x61d4dd */
L_0061D477:
    _xmm[2].u64[0] = MEM32(0x809990); _xmm[2].u64[1] = 0; /* 0x0061D477: movss xmm2, dword ptr [0x809990] */
    _xmm[1].u64[0] = MEM32(0x809780); _xmm[1].u64[1] = 0; /* 0x0061D47F: movss xmm1, dword ptr [0x809780] */
    goto L_0061D490; /* 0x0061D487: jmp 0x61d490 */
L_0061D490:
    edx = MEM32(ebp + 0x8); /* 0x0061D490: mov edx, dword ptr [ebp + 8] */
    eax = (int32_t)(int16_t)MEM16(edx + esi * 2); /* 0x0061D493: movsx eax, word ptr [edx + esi*2] */
    _xmm[0].u64[0] = (uint32_t)(eax); _xmm[0].u64[1] = 0; /* 0x0061D497: movd xmm0, eax */
    { xmm_t _s = _xmm[0]; for (int _k = 0; _k < 4; _k++) _xmm[0].f32[_k] = (float)_s.i32[_k]; } /* 0x0061D49B: cvtdq2ps xmm0, xmm0 */
    { float _s = sse_f32(MEM32(edi + 0x38)); _xmm[0].f32[0] = (float)(_xmm[0].f32[0] * _s); } /* 0x0061D49E: mulss xmm0, dword ptr [edi + 0x38] */
    _flag_a = SSE_COMI(_xmm[2].f32[0], _xmm[0].f32[0]); _flag_b = 0; _cf = _flag_a & 1u; /* 0x0061D4A3: comiss xmm2, xmm0 */
    _flag_k = FK_EFLAGS;
    if (recomp_cond(FK_EFLAGS, _flag_a, 0, CC_BE)) goto L_0061D4AD; /* 0x0061D4A6: jbe 0x61d4ad */
L_0061D4A8:
    _xmm[0] = _xmm[2]; /* 0x0061D4A8: movaps xmm0, xmm2 */
    goto L_0061D4B5; /* 0x0061D4AB: jmp 0x61d4b5 */
L_0061D4AD:
    _flag_a = SSE_COMI(_xmm[0].f32[0], _xmm[1].f32[0]); _flag_b = 0; _cf = _flag_a & 1u; /* 0x0061D4AD: comiss xmm0, xmm1 */
    _flag_k = FK_EFLAGS;
    if (recomp_cond(FK_EFLAGS, _flag_a, 0, CC_BE)) goto L_0061D4B5; /* 0x0061D4B0: jbe 0x61d4b5 */
L_0061D4B2:
    _xmm[0] = _xmm[1]; /* 0x0061D4B2: movaps xmm0, xmm1 */
L_0061D4B5:
    eax = (uint32_t)sse_cvt_i32((double)_xmm[0].f32[0], 1); /* 0x0061D4B5: cvttss2si eax, xmm0 */
    MEM16(edx + esi * 2) = (uint16_t)(LO16(eax)); /* 0x0061D4B9: mov word ptr [edx + esi*2], ax */
    eax = (uint32_t)(int32_t)(int16_t)LO16(eax); /* 0x0061D4BD: cwde  */
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFFu : 0; /* 0x0061D4BE: cdq  */
    _flag_a = (uint32_t)((eax ^ edx)); _flag_b = (uint32_t)((eax ^ edx));
    eax = eax ^ edx; /* 0x0061D4BF: xor eax, edx */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - edx; /* 0x0061D4C1: sub eax, edx */
    _flag_k = FK_CMP;
    /* cmp eax, 0x9D8u */ /* 0x0061D4C3: cmp eax, 0x9d8 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x9D8u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_L(_flag_a, _flag_b)) goto L_0061D4D8; /* 0x0061D4C8: jl 0x61d4d8 */
L_0061D4CA:
    /* cmp MEM8(edi), 1 */ /* 0x0061D4CA: cmp byte ptr [edi], 1 */
    _flag_a = (uint32_t)(MEM8(edi)) << 24; _flag_b = (uint32_t)(1) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    eax = 1; /* 0x0061D4CD: mov eax, 1 */
    ecx = (uint32_t)LO8(ecx); /* 0x0061D4D2: movzx ecx, cl */
    if (CMP_EQ(_flag_a, _flag_b)) { ecx = eax; } /* 0x0061D4D5: cmove ecx, eax */
L_0061D4D8:
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi + 1; /* 0x0061D4D8: inc esi */
    _flag_k = FK_INC;
    /* cmp esi, ebx */ /* 0x0061D4D9: cmp esi, ebx */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_0061D490; /* 0x0061D4DB: jb 0x61d490 */
L_0061D4DD:
    edi = POP32_VAL(esp); /* 0x0061D4DD: pop edi */
    esi = POP32_VAL(esp); /* 0x0061D4DE: pop esi */
    SET_LO8(eax, LO8(ecx)); /* 0x0061D4DF: mov al, cl */
    ebx = POP32_VAL(esp); /* 0x0061D4E1: pop ebx */
    ebp = POP32_VAL(esp); /* 0x0061D4E2: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 12; { RECOMP_REGS_OUT(); return; } /* 0x0061D4E3: ret 8 */
    RECOMP_REGS_OUT();
}

void sub_0061D4F0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0061D4F0u);

L_0061D4F0:
    MEM32(0x927BA0) = 0; /* 0x0061D4F0: mov dword ptr [0x927ba0], 0 */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x0061D4FA: ret  */
    RECOMP_REGS_OUT();
}

void sub_0061D500(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0061D500u);

L_0061D500:
    goto L_0061D7B0; /* 0x0061D500: jmp 0x61d7b0 */
L_0061D7B0:
    PUSH32(esp, esi); /* 0x0061D7B0: push esi */
    PUSH32(esp, edi); /* 0x0061D7B1: push edi */
    edi = ecx; /* 0x0061D7B2: mov edi, ecx */
    esi = MEM32(edi); /* 0x0061D7B4: mov esi, dword ptr [edi] */
    /* test esi, esi */ /* 0x0061D7B6: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_0061D7F2; /* 0x0061D7B8: je 0x61d7f2 */
L_0061D7BA:
    PUSH32(esp, ebx); /* 0x0061D7BA: push ebx */
    ebx = MEM32(edi + 0x4); /* 0x0061D7BB: mov ebx, dword ptr [edi + 4] */
    /* cmp esi, ebx */ /* 0x0061D7BE: cmp esi, ebx */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_0061D7D2; /* 0x0061D7C0: je 0x61d7d2 */
L_0061D7C2:
    eax = MEM32(esi); /* 0x0061D7C2: mov eax, dword ptr [esi] */
    ecx = esi; /* 0x0061D7C4: mov ecx, esi */
    PUSH32(esp, 0); /* 0x0061D7C6: push 0 */
    RECOMP_ICALL(MEM32(eax + 0x4)); /* 0x0061D7C8: call dword ptr [eax + 4] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(0x64u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esi = esi + 0x64u; /* 0x0061D7CB: add esi, 0x64 */
    _flag_k = FK_ADD;
    /* cmp esi, ebx */ /* 0x0061D7CE: cmp esi, ebx */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_NE(_flag_a, _flag_b)) goto L_0061D7C2; /* 0x0061D7D0: jne 0x61d7c2 */
L_0061D7D2:
    PUSH32(esp, MEM32(edi)); /* 0x0061D7D2: push dword ptr [edi] */
    RECOMP_ICALL(MEM32(0x7CC694)); /* 0x0061D7D4: call dword ptr [0x7cc694] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x0061D7DA: add esp, 4 */
    _flag_k = FK_ADD;
    MEM32(edi) = 0; /* 0x0061D7DD: mov dword ptr [edi], 0 */
    MEM32(edi + 0x4) = 0; /* 0x0061D7E3: mov dword ptr [edi + 4], 0 */
    MEM32(edi + 0x8) = 0; /* 0x0061D7EA: mov dword ptr [edi + 8], 0 */
    ebx = POP32_VAL(esp); /* 0x0061D7F1: pop ebx */
L_0061D7F2:
    edi = POP32_VAL(esp); /* 0x0061D7F2: pop edi */
    esi = POP32_VAL(esp); /* 0x0061D7F3: pop esi */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x0061D7F4: ret  */
    RECOMP_REGS_OUT();
}

void sub_0061D510(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0061D510u);

L_0061D510:
    PUSH32(esp, ebp); /* 0x0061D510: push ebp */
    ebp = esp; /* 0x0061D511: mov ebp, esp */
    PUSH32(esp, 0xFFFFFFFFu); /* 0x0061D513: push -1 */
    PUSH32(esp, 0x007B69B5u); /* 0x0061D515: push 0x7b69b5 */
    eax = MEM32(FS_BASE + (0)); /* 0x0061D51A: mov eax, dword ptr fs:[0] */
    PUSH32(esp, eax); /* 0x0061D520: push eax */
    PUSH32(esp, ebx); /* 0x0061D521: push ebx */
    PUSH32(esp, esi); /* 0x0061D522: push esi */
    PUSH32(esp, edi); /* 0x0061D523: push edi */
    eax = MEM32(0x855000); /* 0x0061D524: mov eax, dword ptr [0x855000] */
    _flag_a = (uint32_t)((eax ^ ebp)); _flag_b = (uint32_t)((eax ^ ebp));
    eax = eax ^ ebp; /* 0x0061D529: xor eax, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, eax); /* 0x0061D52B: push eax */
    eax = ebp + (-0xC); /* 0x0061D52C: lea eax, [ebp - 0xc] */
    MEM32(FS_BASE + (0)) = eax; /* 0x0061D52F: mov dword ptr fs:[0], eax */
    esi = ecx; /* 0x0061D535: mov esi, ecx */
    ecx = MEM32(esi + 0x4); /* 0x0061D537: mov ecx, dword ptr [esi + 4] */
    ebx = MEM32(ebp + 0x8); /* 0x0061D53A: mov ebx, dword ptr [ebp + 8] */
    /* cmp ebx, ecx */ /* 0x0061D53D: cmp ebx, ecx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_AE(_flag_a, _flag_b)) goto L_0061D5A1; /* 0x0061D53F: jae 0x61d5a1 */
L_0061D541:
    eax = MEM32(esi); /* 0x0061D541: mov eax, dword ptr [esi] */
    /* cmp eax, ebx */ /* 0x0061D543: cmp eax, ebx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_A(_flag_a, _flag_b)) goto L_0061D5A1; /* 0x0061D545: ja 0x61d5a1 */
L_0061D547:
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ebx = ebx - eax; /* 0x0061D547: sub ebx, eax */
    _flag_k = FK_CMP;
    eax = 0x51EB851Fu; /* 0x0061D549: mov eax, 0x51eb851f */
    { int64_t _r = (int64_t)(int32_t)eax * (int32_t)(ebx); /* 0x0061D54E: imul ebx */
      eax = (uint32_t)_r; edx = (uint32_t)(_r >> 32); uint32_t _ov = _r != (int32_t)_r;
      _flag_k = FK_EFLAGS; _flag_a = _ov ? 0x801u : 0u; _flag_b = 0; _cf = _ov; }
    if (5u) _cf = (((edx) >> 4) & 1u); /* 0x0061D550: sar edx, 5 */
    if (5u) { _flag_a = recomp_flags_pack(((uint32_t)((int32_t)edx >> 5u)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    edx = (uint32_t)((int32_t)edx >> 5u);
    edi = edx; /* 0x0061D553: mov edi, edx */
    if (31u) _cf = (((edi) >> 30) & 1u); /* 0x0061D555: shr edi, 0x1f */
    if (31u) { _flag_a = recomp_flags_pack((edi >> 31u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    edi = edi >> 31u; /* 0x0061D555: shr edi, 0x1f */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edi = edi + edx; /* 0x0061D558: add edi, edx */
    _flag_k = FK_ADD;
    /* cmp ecx, MEM32(esi + 0x8) */ /* 0x0061D55A: cmp ecx, dword ptr [esi + 8] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(MEM32(esi + 0x8));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_0061D567; /* 0x0061D55D: jne 0x61d567 */
L_0061D55F:
    PUSH32(esp, ecx); /* 0x0061D55F: push ecx */
    ecx = esi; /* 0x0061D560: mov ecx, esi */
    RECOMP_CALL(sub_0061D710); /* 0x0061D562: call 0x61d710 */
    RECOMP_FLAGS_IN();
L_0061D567:
    ebx = (uint32_t)((int32_t)edi * (int32_t)0x64u); /* 0x0061D567: imul ebx, edi, 0x64 */
    edi = MEM32(esi + 0x4); /* 0x0061D56A: mov edi, dword ptr [esi + 4] */
    MEM32(ebp + 0x8) = edi; /* 0x0061D56D: mov dword ptr [ebp + 8], edi */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(MEM32(esi));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ebx = ebx + MEM32(esi); /* 0x0061D570: add ebx, dword ptr [esi] */
    _flag_k = FK_ADD;
    MEM32(ebp + (-0x4)) = 0; /* 0x0061D572: mov dword ptr [ebp - 4], 0 */
    /* test edi, edi */ /* 0x0061D579: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_0061D5D9; /* 0x0061D57B: je 0x61d5d9 */
L_0061D57D:
    PUSH32(esp, ebx); /* 0x0061D57D: push ebx */
    ecx = edi; /* 0x0061D57E: mov ecx, edi */
    RECOMP_CALL(sub_0061DA70); /* 0x0061D580: call 0x61da70 */
    RECOMP_FLAGS_IN();
    MEM8(ebp + (-0x4)) = (uint8_t)(1); /* 0x0061D585: mov byte ptr [ebp - 4], 1 */
    MEM32(edi) = 0x007F8D80u; /* 0x0061D589: mov dword ptr [edi], 0x7f8d80 */
    eax = MEM32(ebx + 0x5C); /* 0x0061D58F: mov eax, dword ptr [ebx + 0x5c] */
    MEM32(edi + 0x5C) = eax; /* 0x0061D592: mov dword ptr [edi + 0x5c], eax */
    eax = MEM32(ebx + 0x60); /* 0x0061D595: mov eax, dword ptr [ebx + 0x60] */
    MEM32(edi + 0x60) = eax; /* 0x0061D598: mov dword ptr [edi + 0x60], eax */
    MEM8(ebp + (-0x4)) = (uint8_t)(0); /* 0x0061D59B: mov byte ptr [ebp - 4], 0 */
    goto L_0061D5D9; /* 0x0061D59F: jmp 0x61d5d9 */
L_0061D5A1:
    /* cmp ecx, MEM32(esi + 0x8) */ /* 0x0061D5A1: cmp ecx, dword ptr [esi + 8] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(MEM32(esi + 0x8));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_0061D5AE; /* 0x0061D5A4: jne 0x61d5ae */
L_0061D5A6:
    PUSH32(esp, ecx); /* 0x0061D5A6: push ecx */
    ecx = esi; /* 0x0061D5A7: mov ecx, esi */
    RECOMP_CALL(sub_0061D710); /* 0x0061D5A9: call 0x61d710 */
    RECOMP_FLAGS_IN();
L_0061D5AE:
    edi = MEM32(esi + 0x4); /* 0x0061D5AE: mov edi, dword ptr [esi + 4] */
    MEM32(ebp + 0x8) = edi; /* 0x0061D5B1: mov dword ptr [ebp + 8], edi */
    /* test edi, edi */ /* 0x0061D5B4: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_0061D5E0; /* 0x0061D5B6: je 0x61d5e0 */
L_0061D5B8:
    PUSH32(esp, ebx); /* 0x0061D5B8: push ebx */
    ecx = edi; /* 0x0061D5B9: mov ecx, edi */
    RECOMP_CALL(sub_0061DA70); /* 0x0061D5BB: call 0x61da70 */
    RECOMP_FLAGS_IN();
    MEM32(ebp + (-0x4)) = 2; /* 0x0061D5C0: mov dword ptr [ebp - 4], 2 */
    MEM32(edi) = 0x007F8D80u; /* 0x0061D5C7: mov dword ptr [edi], 0x7f8d80 */
    eax = MEM32(ebx + 0x5C); /* 0x0061D5CD: mov eax, dword ptr [ebx + 0x5c] */
    MEM32(edi + 0x5C) = eax; /* 0x0061D5D0: mov dword ptr [edi + 0x5c], eax */
    eax = MEM32(ebx + 0x60); /* 0x0061D5D3: mov eax, dword ptr [ebx + 0x60] */
    MEM32(edi + 0x60) = eax; /* 0x0061D5D6: mov dword ptr [edi + 0x60], eax */
L_0061D5D9:
    MEM32(ebp + (-0x4)) = 0xFFFFFFFFu; /* 0x0061D5D9: mov dword ptr [ebp - 4], 0xffffffff */
L_0061D5E0:
    _flag_a = (uint32_t)(MEM32(esi + 0x4)); _flag_b = (uint32_t)(0x64u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM32(esi + 0x4) = MEM32(esi + 0x4) + 0x64u; /* 0x0061D5E0: add dword ptr [esi + 4], 0x64 */
    _flag_k = FK_ADD;
    ecx = MEM32(ebp + (-0xC)); /* 0x0061D5E4: mov ecx, dword ptr [ebp - 0xc] */
    MEM32(FS_BASE + (0)) = ecx; /* 0x0061D5E7: mov dword ptr fs:[0], ecx */
    ecx = POP32_VAL(esp); /* 0x0061D5EE: pop ecx */
    edi = POP32_VAL(esp); /* 0x0061D5EF: pop edi */
    esi = POP32_VAL(esp); /* 0x0061D5F0: pop esi */
    ebx = POP32_VAL(esp); /* 0x0061D5F1: pop ebx */
    esp = ebp; /* 0x0061D5F2: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x0061D5F4: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x0061D5F5: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_0061D600(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0061D600u);

L_0061D600:
    PUSH32(esp, ebp); /* 0x0061D600: push ebp */
    ebp = esp; /* 0x0061D601: mov ebp, esp */
    eax = MEM32(ebp + 0xC); /* 0x0061D603: mov eax, dword ptr [ebp + 0xc] */
    PUSH32(esp, ebx); /* 0x0061D606: push ebx */
    ebx = ecx; /* 0x0061D607: mov ebx, ecx */
    PUSH32(esp, esi); /* 0x0061D609: push esi */
    PUSH32(esp, edi); /* 0x0061D60A: push edi */
    PUSH32(esp, eax); /* 0x0061D60B: push eax */
    edx = MEM32(ebx + 0x4); /* 0x0061D60C: mov edx, dword ptr [ebx + 4] */
    ecx = eax + 0x64; /* 0x0061D60F: lea ecx, [eax + 0x64] */
    RECOMP_CALL(sub_0061D990); /* 0x0061D612: call 0x61d990 */
    RECOMP_FLAGS_IN();
    edi = MEM32(ebx + 0x4); /* 0x0061D617: mov edi, dword ptr [ebx + 4] */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x0061D61A: add esp, 4 */
    _flag_k = FK_ADD;
    esi = edi + (-0x64); /* 0x0061D61D: lea esi, [edi - 0x64] */
    /* cmp esi, edi */ /* 0x0061D620: cmp esi, edi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_0061D634; /* 0x0061D622: je 0x61d634 */
L_0061D624:
    eax = MEM32(esi); /* 0x0061D624: mov eax, dword ptr [esi] */
    ecx = esi; /* 0x0061D626: mov ecx, esi */
    PUSH32(esp, 0); /* 0x0061D628: push 0 */
    RECOMP_ICALL(MEM32(eax + 0x4)); /* 0x0061D62A: call dword ptr [eax + 4] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(0x64u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esi = esi + 0x64u; /* 0x0061D62D: add esi, 0x64 */
    _flag_k = FK_ADD;
    /* cmp esi, edi */ /* 0x0061D630: cmp esi, edi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_NE(_flag_a, _flag_b)) goto L_0061D624; /* 0x0061D632: jne 0x61d624 */
L_0061D634:
    eax = MEM32(ebp + 0x8); /* 0x0061D634: mov eax, dword ptr [ebp + 8] */
    _flag_a = (uint32_t)(MEM32(ebx + 0x4)); _flag_b = (uint32_t)(0xFFFFFF9Cu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM32(ebx + 0x4) = MEM32(ebx + 0x4) + 0xFFFFFF9Cu; /* 0x0061D637: add dword ptr [ebx + 4], -0x64 */
    _flag_k = FK_ADD;
    ecx = MEM32(ebp + 0xC); /* 0x0061D63B: mov ecx, dword ptr [ebp + 0xc] */
    edi = POP32_VAL(esp); /* 0x0061D63E: pop edi */
    esi = POP32_VAL(esp); /* 0x0061D63F: pop esi */
    MEM32(eax) = ecx; /* 0x0061D640: mov dword ptr [eax], ecx */
    ebx = POP32_VAL(esp); /* 0x0061D642: pop ebx */
    ebp = POP32_VAL(esp); /* 0x0061D643: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 12; { RECOMP_REGS_OUT(); return; } /* 0x0061D644: ret 8 */
    RECOMP_REGS_OUT();
}

void sub_0061D650(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0061D650u);

L_0061D650:
    PUSH32(esp, ebp); /* 0x0061D650: push ebp */
    ebp = esp; /* 0x0061D651: mov ebp, esp */
    PUSH32(esp, 0xFFFFFFFFu); /* 0x0061D653: push -1 */
    PUSH32(esp, 0x007B69D0u); /* 0x0061D655: push 0x7b69d0 */
    eax = MEM32(FS_BASE + (0)); /* 0x0061D65A: mov eax, dword ptr fs:[0] */
    PUSH32(esp, eax); /* 0x0061D660: push eax */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x10u; /* 0x0061D661: sub esp, 0x10 */
    _flag_k = FK_CMP;
    PUSH32(esp, ebx); /* 0x0061D664: push ebx */
    PUSH32(esp, esi); /* 0x0061D665: push esi */
    PUSH32(esp, edi); /* 0x0061D666: push edi */
    eax = MEM32(0x855000); /* 0x0061D667: mov eax, dword ptr [0x855000] */
    _flag_a = (uint32_t)((eax ^ ebp)); _flag_b = (uint32_t)((eax ^ ebp));
    eax = eax ^ ebp; /* 0x0061D66C: xor eax, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, eax); /* 0x0061D66E: push eax */
    eax = ebp + (-0xC); /* 0x0061D66F: lea eax, [ebp - 0xc] */
    MEM32(FS_BASE + (0)) = eax; /* 0x0061D672: mov dword ptr fs:[0], eax */
    MEM32(ebp + (-0x10)) = esp; /* 0x0061D678: mov dword ptr [ebp - 0x10], esp */
    edi = ecx; /* 0x0061D67B: mov edi, ecx */
    MEM32(ebp + (-0x1C)) = edi; /* 0x0061D67D: mov dword ptr [ebp - 0x1c], edi */
    eax = MEM32(edi + 0x4); /* 0x0061D680: mov eax, dword ptr [edi + 4] */
    edx = eax; /* 0x0061D683: mov edx, eax */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(MEM32(edi));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    edx = edx - MEM32(edi); /* 0x0061D685: sub edx, dword ptr [edi] */
    _flag_k = FK_CMP;
    if (2u) _cf = (((edx) >> 1) & 1u); /* 0x0061D687: sar edx, 2 */
    if (2u) { _flag_a = recomp_flags_pack(((uint32_t)((int32_t)edx >> 2u)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    edx = (uint32_t)((int32_t)edx >> 2u);
    esi = MEM32(ebp + 0x8); /* 0x0061D68A: mov esi, dword ptr [ebp + 8] */
    /* cmp edx, esi */ /* 0x0061D68D: cmp edx, esi */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_0061D6AD; /* 0x0061D68F: jbe 0x61d6ad */
L_0061D691:
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esi = esi - edx; /* 0x0061D691: sub esi, edx */
    _flag_k = FK_CMP;
    eax = eax + esi * 4; /* 0x0061D693: lea eax, [eax + esi*4] */
L_0061D696:
    MEM32(edi + 0x4) = eax; /* 0x0061D696: mov dword ptr [edi + 4], eax */
L_0061D699:
    ecx = MEM32(ebp + (-0xC)); /* 0x0061D699: mov ecx, dword ptr [ebp - 0xc] */
    MEM32(FS_BASE + (0)) = ecx; /* 0x0061D69C: mov dword ptr fs:[0], ecx */
    ecx = POP32_VAL(esp); /* 0x0061D6A3: pop ecx */
    edi = POP32_VAL(esp); /* 0x0061D6A4: pop edi */
    esi = POP32_VAL(esp); /* 0x0061D6A5: pop esi */
    ebx = POP32_VAL(esp); /* 0x0061D6A6: pop ebx */
    esp = ebp; /* 0x0061D6A7: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x0061D6A9: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x0061D6AA: ret 4 */
L_0061D6AD:
    RECOMP_BACKEDGE();
    if (recomp_cond_cf(_flag_k, _flag_a, _flag_b, CC_AE, _cf)) goto L_0061D699; /* 0x0061D6AD: jae 0x61d699 */
L_0061D6AF:
    eax = esi; /* 0x0061D6AF: mov eax, esi */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - edx; /* 0x0061D6B1: sub eax, edx */
    _flag_k = FK_CMP;
    PUSH32(esp, eax); /* 0x0061D6B3: push eax */
    RECOMP_CALL(sub_0061D800); /* 0x0061D6B4: call 0x61d800 */
    RECOMP_FLAGS_IN();
    MEM32(ebp + (-0x4)) = 0; /* 0x0061D6B9: mov dword ptr [ebp - 4], 0 */
    edx = MEM32(edi + 0x4); /* 0x0061D6C0: mov edx, dword ptr [edi + 4] */
    eax = edx; /* 0x0061D6C3: mov eax, edx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(edi));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - MEM32(edi); /* 0x0061D6C5: sub eax, dword ptr [edi] */
    _flag_k = FK_CMP;
    if (2u) _cf = (((eax) >> 1) & 1u); /* 0x0061D6C7: sar eax, 2 */
    if (2u) { _flag_a = recomp_flags_pack(((uint32_t)((int32_t)eax >> 2u)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = (uint32_t)((int32_t)eax >> 2u);
    ecx = esi; /* 0x0061D6CA: mov ecx, esi */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ecx = ecx - eax; /* 0x0061D6CC: sub ecx, eax */
    _flag_k = FK_CMP;
    { xmm_t _s = _xmm[0]; for (int _k = 0; _k < 4; _k++) _xmm[0].u32[_k] = _xmm[0].u32[_k] ^ _s.u32[_k]; } /* 0x0061D6CE: xorps xmm0, xmm0 */
L_0061D6D1:
    MEM32(ebp + (-0x14)) = ecx; /* 0x0061D6D1: mov dword ptr [ebp - 0x14], ecx */
    MEM32(ebp + (-0x18)) = edx; /* 0x0061D6D4: mov dword ptr [ebp - 0x18], edx */
    /* test ecx, ecx */ /* 0x0061D6D7: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_0061D6E5; /* 0x0061D6D9: je 0x61d6e5 */
L_0061D6DB:
    MEM32(edx) = _xmm[0].u32[0]; /* 0x0061D6DB: movss dword ptr [edx], xmm0 */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx - 1; /* 0x0061D6DF: dec ecx */
    _flag_k = FK_DEC;
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edx = edx + 4; /* 0x0061D6E0: add edx, 4 */
    _flag_k = FK_ADD;
    RECOMP_BACKEDGE();
    goto L_0061D6D1; /* 0x0061D6E3: jmp 0x61d6d1 */
L_0061D6E5:
    MEM32(ebp + (-0x4)) = 0xFFFFFFFFu; /* 0x0061D6E5: mov dword ptr [ebp - 4], 0xffffffff */
    ecx = MEM32(edi + 0x4); /* 0x0061D6EC: mov ecx, dword ptr [edi + 4] */
    eax = ecx; /* 0x0061D6EF: mov eax, ecx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(edi));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - MEM32(edi); /* 0x0061D6F1: sub eax, dword ptr [edi] */
    _flag_k = FK_CMP;
    if (2u) _cf = (((eax) >> 1) & 1u); /* 0x0061D6F3: sar eax, 2 */
    if (2u) { _flag_a = recomp_flags_pack(((uint32_t)((int32_t)eax >> 2u)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = (uint32_t)((int32_t)eax >> 2u);
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esi = esi - eax; /* 0x0061D6F6: sub esi, eax */
    _flag_k = FK_CMP;
    eax = ecx + esi * 4; /* 0x0061D6F8: lea eax, [ecx + esi*4] */
    RECOMP_BACKEDGE();
    goto L_0061D696; /* 0x0061D6FB: jmp 0x61d696 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    RECOMP_REGS_OUT();
}

void sub_0061D6FD(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0061D6FDu);

L_0061D6FD:
    ecx = MEM32(ebp + (-0x1C)); /* 0x0061D6FD: mov ecx, dword ptr [ebp - 0x1c] */
    RECOMP_CALL(sub_00419790); /* 0x0061D700: call 0x419790 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0); /* 0x0061D705: push 0 */
    PUSH32(esp, 0); /* 0x0061D707: push 0 */
    RECOMP_CALL(sub_00780016); /* 0x0061D709: call 0x780016 */
    RECOMP_FLAGS_IN();
    void_lift_trap(0x0061D70Eu, "int3 ");
    { RECOMP_REGS_OUT(); return; } /* end of function */
    RECOMP_REGS_OUT();
}

void sub_0061D710(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0061D710u);

L_0061D710:
    PUSH32(esp, esi); /* 0x0061D710: push esi */
    esi = MEM32(ecx + 0x4); /* 0x0061D711: mov esi, dword ptr [ecx + 4] */
    eax = 0x51EB851Fu; /* 0x0061D714: mov eax, 0x51eb851f */
    PUSH32(esp, edi); /* 0x0061D719: push edi */
    edi = MEM32(ecx + 0x8); /* 0x0061D71A: mov edi, dword ptr [ecx + 8] */
    edx = edi; /* 0x0061D71D: mov edx, edi */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    edx = edx - esi; /* 0x0061D71F: sub edx, esi */
    _flag_k = FK_CMP;
    { int64_t _r = (int64_t)(int32_t)eax * (int32_t)(edx); /* 0x0061D721: imul edx */
      eax = (uint32_t)_r; edx = (uint32_t)(_r >> 32); uint32_t _ov = _r != (int32_t)_r;
      _flag_k = FK_EFLAGS; _flag_a = _ov ? 0x801u : 0u; _flag_b = 0; _cf = _ov; }
    if (5u) _cf = (((edx) >> 4) & 1u); /* 0x0061D723: sar edx, 5 */
    if (5u) { _flag_a = recomp_flags_pack(((uint32_t)((int32_t)edx >> 5u)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    edx = (uint32_t)((int32_t)edx >> 5u);
    eax = edx; /* 0x0061D726: mov eax, edx */
    if (31u) _cf = (((eax) >> 30) & 1u); /* 0x0061D728: shr eax, 0x1f */
    if (31u) { _flag_a = recomp_flags_pack((eax >> 31u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax >> 31u; /* 0x0061D728: shr eax, 0x1f */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + edx; /* 0x0061D72B: add eax, edx */
    _flag_k = FK_ADD;
    /* cmp eax, 1 */ /* 0x0061D72D: cmp eax, 1 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_AE(_flag_a, _flag_b)) goto L_0061D79D; /* 0x0061D730: jae 0x61d79d */
L_0061D732:
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(MEM32(ecx));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esi = esi - MEM32(ecx); /* 0x0061D732: sub esi, dword ptr [ecx] */
    _flag_k = FK_CMP;
    eax = 0x51EB851Fu; /* 0x0061D734: mov eax, 0x51eb851f */
    { int64_t _r = (int64_t)(int32_t)eax * (int32_t)(esi); /* 0x0061D739: imul esi */
      eax = (uint32_t)_r; edx = (uint32_t)(_r >> 32); uint32_t _ov = _r != (int32_t)_r;
      _flag_k = FK_EFLAGS; _flag_a = _ov ? 0x801u : 0u; _flag_b = 0; _cf = _ov; }
    PUSH32(esp, ebx); /* 0x0061D73B: push ebx */
    if (5u) _cf = (((edx) >> 4) & 1u); /* 0x0061D73C: sar edx, 5 */
    if (5u) { _flag_a = recomp_flags_pack(((uint32_t)((int32_t)edx >> 5u)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    edx = (uint32_t)((int32_t)edx >> 5u);
    ebx = 0x028F5C28u; /* 0x0061D73F: mov ebx, 0x28f5c28 */
    esi = edx; /* 0x0061D744: mov esi, edx */
    eax = ebx; /* 0x0061D746: mov eax, ebx */
    if (31u) _cf = (((esi) >> 30) & 1u); /* 0x0061D748: shr esi, 0x1f */
    if (31u) { _flag_a = recomp_flags_pack((esi >> 31u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    esi = esi >> 31u; /* 0x0061D748: shr esi, 0x1f */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esi = esi + edx; /* 0x0061D74B: add esi, edx */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - esi; /* 0x0061D74D: sub eax, esi */
    _flag_k = FK_CMP;
    /* cmp eax, 1 */ /* 0x0061D74F: cmp eax, 1 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_AE(_flag_a, _flag_b)) goto L_0061D75F; /* 0x0061D752: jae 0x61d75f */
L_0061D754:
    PUSH32(esp, 0x007DFAB0u); /* 0x0061D754: push 0x7dfab0 */
    RECOMP_ICALL(MEM32(0x7CC414)); /* 0x0061D759: call dword ptr [0x7cc414] */
    RECOMP_FLAGS_IN();
L_0061D75F:
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(MEM32(ecx));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    edi = edi - MEM32(ecx); /* 0x0061D75F: sub edi, dword ptr [ecx] */
    _flag_k = FK_CMP;
    eax = 0x51EB851Fu; /* 0x0061D761: mov eax, 0x51eb851f */
    { int64_t _r = (int64_t)(int32_t)eax * (int32_t)(edi); /* 0x0061D766: imul edi */
      eax = (uint32_t)_r; edx = (uint32_t)(_r >> 32); uint32_t _ov = _r != (int32_t)_r;
      _flag_k = FK_EFLAGS; _flag_a = _ov ? 0x801u : 0u; _flag_b = 0; _cf = _ov; }
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi + 1; /* 0x0061D768: inc esi */
    _flag_k = FK_INC;
    if (5u) _cf = (((edx) >> 4) & 1u); /* 0x0061D769: sar edx, 5 */
    if (5u) { _flag_a = recomp_flags_pack(((uint32_t)((int32_t)edx >> 5u)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    edx = (uint32_t)((int32_t)edx >> 5u);
    eax = edx; /* 0x0061D76C: mov eax, edx */
    if (31u) _cf = (((eax) >> 30) & 1u); /* 0x0061D76E: shr eax, 0x1f */
    if (31u) { _flag_a = recomp_flags_pack((eax >> 31u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax >> 31u; /* 0x0061D76E: shr eax, 0x1f */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + edx; /* 0x0061D771: add eax, edx */
    _flag_k = FK_ADD;
    edx = eax; /* 0x0061D773: mov edx, eax */
    if (1u) _cf = (((edx) >> 0) & 1u); /* 0x0061D775: shr edx, 1 */
    if (1u) { _flag_a = recomp_flags_pack((edx >> 1u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    edx = edx >> 1u; /* 0x0061D775: shr edx, 1 */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ebx = ebx - edx; /* 0x0061D777: sub ebx, edx */
    _flag_k = FK_CMP;
    /* cmp ebx, eax */ /* 0x0061D779: cmp ebx, eax */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    ebx = POP32_VAL(esp); /* 0x0061D77B: pop ebx */
    if (CMP_AE(_flag_a, _flag_b)) goto L_0061D790; /* 0x0061D77C: jae 0x61d790 */
L_0061D77E:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x0061D77E: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp eax, esi */ /* 0x0061D780: cmp eax, esi */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_B(_flag_a, _flag_b)) { eax = esi; } /* 0x0061D782: cmovb eax, esi */
    PUSH32(esp, eax); /* 0x0061D785: push eax */
    RECOMP_CALL(sub_0061D880); /* 0x0061D786: call 0x61d880 */
    RECOMP_FLAGS_IN();
    edi = POP32_VAL(esp); /* 0x0061D78B: pop edi */
    esi = POP32_VAL(esp); /* 0x0061D78C: pop esi */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x0061D78D: ret 4 */
L_0061D790:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + edx; /* 0x0061D790: add eax, edx */
    _flag_k = FK_ADD;
    /* cmp eax, esi */ /* 0x0061D792: cmp eax, esi */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_B(_flag_a, _flag_b)) { eax = esi; } /* 0x0061D794: cmovb eax, esi */
    PUSH32(esp, eax); /* 0x0061D797: push eax */
    RECOMP_CALL(sub_0061D880); /* 0x0061D798: call 0x61d880 */
    RECOMP_FLAGS_IN();
L_0061D79D:
    edi = POP32_VAL(esp); /* 0x0061D79D: pop edi */
    esi = POP32_VAL(esp); /* 0x0061D79E: pop esi */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x0061D79F: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_0061D7B0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0061D7B0u);

L_0061D7B0:
    PUSH32(esp, esi); /* 0x0061D7B0: push esi */
    PUSH32(esp, edi); /* 0x0061D7B1: push edi */
    edi = ecx; /* 0x0061D7B2: mov edi, ecx */
    esi = MEM32(edi); /* 0x0061D7B4: mov esi, dword ptr [edi] */
    /* test esi, esi */ /* 0x0061D7B6: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_0061D7F2; /* 0x0061D7B8: je 0x61d7f2 */
L_0061D7BA:
    PUSH32(esp, ebx); /* 0x0061D7BA: push ebx */
    ebx = MEM32(edi + 0x4); /* 0x0061D7BB: mov ebx, dword ptr [edi + 4] */
    /* cmp esi, ebx */ /* 0x0061D7BE: cmp esi, ebx */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_0061D7D2; /* 0x0061D7C0: je 0x61d7d2 */
L_0061D7C2:
    eax = MEM32(esi); /* 0x0061D7C2: mov eax, dword ptr [esi] */
    ecx = esi; /* 0x0061D7C4: mov ecx, esi */
    PUSH32(esp, 0); /* 0x0061D7C6: push 0 */
    RECOMP_ICALL(MEM32(eax + 0x4)); /* 0x0061D7C8: call dword ptr [eax + 4] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(0x64u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esi = esi + 0x64u; /* 0x0061D7CB: add esi, 0x64 */
    _flag_k = FK_ADD;
    /* cmp esi, ebx */ /* 0x0061D7CE: cmp esi, ebx */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_NE(_flag_a, _flag_b)) goto L_0061D7C2; /* 0x0061D7D0: jne 0x61d7c2 */
L_0061D7D2:
    PUSH32(esp, MEM32(edi)); /* 0x0061D7D2: push dword ptr [edi] */
    RECOMP_ICALL(MEM32(0x7CC694)); /* 0x0061D7D4: call dword ptr [0x7cc694] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x0061D7DA: add esp, 4 */
    _flag_k = FK_ADD;
    MEM32(edi) = 0; /* 0x0061D7DD: mov dword ptr [edi], 0 */
    MEM32(edi + 0x4) = 0; /* 0x0061D7E3: mov dword ptr [edi + 4], 0 */
    MEM32(edi + 0x8) = 0; /* 0x0061D7EA: mov dword ptr [edi + 8], 0 */
    ebx = POP32_VAL(esp); /* 0x0061D7F1: pop ebx */
L_0061D7F2:
    edi = POP32_VAL(esp); /* 0x0061D7F2: pop edi */
    esi = POP32_VAL(esp); /* 0x0061D7F3: pop esi */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x0061D7F4: ret  */
    RECOMP_REGS_OUT();
}

void sub_0061D800(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0061D800u);

L_0061D800:
    PUSH32(esp, ebp); /* 0x0061D800: push ebp */
    ebp = esp; /* 0x0061D801: mov ebp, esp */
    edx = MEM32(ecx + 0x8); /* 0x0061D803: mov edx, dword ptr [ecx + 8] */
    eax = edx; /* 0x0061D806: mov eax, edx */
    PUSH32(esp, esi); /* 0x0061D808: push esi */
    esi = MEM32(ecx + 0x4); /* 0x0061D809: mov esi, dword ptr [ecx + 4] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - esi; /* 0x0061D80C: sub eax, esi */
    _flag_k = FK_CMP;
    PUSH32(esp, edi); /* 0x0061D80E: push edi */
    edi = MEM32(ebp + 0x8); /* 0x0061D80F: mov edi, dword ptr [ebp + 8] */
    if (2u) _cf = (((eax) >> 1) & 1u); /* 0x0061D812: sar eax, 2 */
    if (2u) { _flag_a = recomp_flags_pack(((uint32_t)((int32_t)eax >> 2u)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = (uint32_t)((int32_t)eax >> 2u);
    /* cmp eax, edi */ /* 0x0061D815: cmp eax, edi */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_AE(_flag_a, _flag_b)) goto L_0061D86D; /* 0x0061D817: jae 0x61d86d */
L_0061D819:
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(MEM32(ecx));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esi = esi - MEM32(ecx); /* 0x0061D819: sub esi, dword ptr [ecx] */
    _flag_k = FK_CMP;
    PUSH32(esp, ebx); /* 0x0061D81B: push ebx */
    ebx = 0x3FFFFFFFu; /* 0x0061D81C: mov ebx, 0x3fffffff */
    if (2u) _cf = (((esi) >> 1) & 1u); /* 0x0061D821: sar esi, 2 */
    if (2u) { _flag_a = recomp_flags_pack(((uint32_t)((int32_t)esi >> 2u)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    esi = (uint32_t)((int32_t)esi >> 2u);
    eax = ebx; /* 0x0061D824: mov eax, ebx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - esi; /* 0x0061D826: sub eax, esi */
    _flag_k = FK_CMP;
    /* cmp eax, edi */ /* 0x0061D828: cmp eax, edi */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_AE(_flag_a, _flag_b)) goto L_0061D837; /* 0x0061D82A: jae 0x61d837 */
L_0061D82C:
    PUSH32(esp, 0x007DFAB0u); /* 0x0061D82C: push 0x7dfab0 */
    RECOMP_ICALL(MEM32(0x7CC414)); /* 0x0061D831: call dword ptr [0x7cc414] */
    RECOMP_FLAGS_IN();
L_0061D837:
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(MEM32(ecx));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    edx = edx - MEM32(ecx); /* 0x0061D837: sub edx, dword ptr [ecx] */
    _flag_k = FK_CMP;
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esi = esi + edi; /* 0x0061D839: add esi, edi */
    _flag_k = FK_ADD;
    if (2u) _cf = (((edx) >> 1) & 1u); /* 0x0061D83B: sar edx, 2 */
    if (2u) { _flag_a = recomp_flags_pack(((uint32_t)((int32_t)edx >> 2u)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    edx = (uint32_t)((int32_t)edx >> 2u);
    eax = edx; /* 0x0061D83E: mov eax, edx */
    if (1u) _cf = (((eax) >> 0) & 1u); /* 0x0061D840: shr eax, 1 */
    if (1u) { _flag_a = recomp_flags_pack((eax >> 1u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax >> 1u; /* 0x0061D840: shr eax, 1 */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ebx = ebx - eax; /* 0x0061D842: sub ebx, eax */
    _flag_k = FK_CMP;
    /* cmp ebx, edx */ /* 0x0061D844: cmp ebx, edx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    ebx = POP32_VAL(esp); /* 0x0061D846: pop ebx */
    if (CMP_AE(_flag_a, _flag_b)) goto L_0061D85B; /* 0x0061D847: jae 0x61d85b */
L_0061D849:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edx = 0; /* 0x0061D849: xor edx, edx */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp edx, esi */ /* 0x0061D84B: cmp edx, esi */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    edi = POP32_VAL(esp); /* 0x0061D84D: pop edi */
    if (CMP_B(_flag_a, _flag_b)) { edx = esi; } /* 0x0061D84E: cmovb edx, esi */
    esi = POP32_VAL(esp); /* 0x0061D851: pop esi */
    MEM32(ebp + 0x8) = edx; /* 0x0061D852: mov dword ptr [ebp + 8], edx */
    ebp = POP32_VAL(esp); /* 0x0061D855: pop ebp */
    goto L_0047ACE0; /* 0x0061D856: jmp 0x47ace0 */
L_0061D85B:
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edx = edx + eax; /* 0x0061D85B: add edx, eax */
    _flag_k = FK_ADD;
    /* cmp edx, esi */ /* 0x0061D85D: cmp edx, esi */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    edi = POP32_VAL(esp); /* 0x0061D85F: pop edi */
    if (CMP_B(_flag_a, _flag_b)) { edx = esi; } /* 0x0061D860: cmovb edx, esi */
    esi = POP32_VAL(esp); /* 0x0061D863: pop esi */
    MEM32(ebp + 0x8) = edx; /* 0x0061D864: mov dword ptr [ebp + 8], edx */
    ebp = POP32_VAL(esp); /* 0x0061D867: pop ebp */
    goto L_0047ACE0; /* 0x0061D868: jmp 0x47ace0 */
L_0061D86D:
    edi = POP32_VAL(esp); /* 0x0061D86D: pop edi */
    esi = POP32_VAL(esp); /* 0x0061D86E: pop esi */
    ebp = POP32_VAL(esp); /* 0x0061D86F: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x0061D870: ret 4 */
    L_0047ACE0: RECOMP_ITAIL(0x0047ACE0u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_0061D880(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0061D880u);

L_0061D880:
    PUSH32(esp, ebp); /* 0x0061D880: push ebp */
    ebp = esp; /* 0x0061D881: mov ebp, esp */
    PUSH32(esp, 0xFFFFFFFFu); /* 0x0061D883: push -1 */
    PUSH32(esp, 0x007B69F0u); /* 0x0061D885: push 0x7b69f0 */
    eax = MEM32(FS_BASE + (0)); /* 0x0061D88A: mov eax, dword ptr fs:[0] */
    PUSH32(esp, eax); /* 0x0061D890: push eax */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0xCu; /* 0x0061D891: sub esp, 0xc */
    _flag_k = FK_CMP;
    PUSH32(esp, ebx); /* 0x0061D894: push ebx */
    PUSH32(esp, esi); /* 0x0061D895: push esi */
    PUSH32(esp, edi); /* 0x0061D896: push edi */
    eax = MEM32(0x855000); /* 0x0061D897: mov eax, dword ptr [0x855000] */
    _flag_a = (uint32_t)((eax ^ ebp)); _flag_b = (uint32_t)((eax ^ ebp));
    eax = eax ^ ebp; /* 0x0061D89C: xor eax, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, eax); /* 0x0061D89E: push eax */
    eax = ebp + (-0xC); /* 0x0061D89F: lea eax, [ebp - 0xc] */
    MEM32(FS_BASE + (0)) = eax; /* 0x0061D8A2: mov dword ptr fs:[0], eax */
    MEM32(ebp + (-0x10)) = esp; /* 0x0061D8A8: mov dword ptr [ebp - 0x10], esp */
    ebx = ecx; /* 0x0061D8AB: mov ebx, ecx */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edi = 0; /* 0x0061D8AD: xor edi, edi */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x14)) = edi; /* 0x0061D8AF: mov dword ptr [ebp - 0x14], edi */
    eax = MEM32(ebp + 0x8); /* 0x0061D8B2: mov eax, dword ptr [ebp + 8] */
    /* test eax, eax */ /* 0x0061D8B5: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_0061D8DC; /* 0x0061D8B7: je 0x61d8dc */
L_0061D8B9:
    /* cmp eax, 0x028F5C28u */ /* 0x0061D8B9: cmp eax, 0x28f5c28 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x028F5C28u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_A(_flag_a, _flag_b)) goto L_0061D8D6; /* 0x0061D8BE: ja 0x61d8d6 */
L_0061D8C0:
    eax = (uint32_t)((int32_t)eax * (int32_t)0x64u); /* 0x0061D8C0: imul eax, eax, 0x64 */
    PUSH32(esp, eax); /* 0x0061D8C3: push eax */
    RECOMP_ICALL(MEM32(0x7CC698)); /* 0x0061D8C4: call dword ptr [0x7cc698] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x0061D8CA: add esp, 4 */
    _flag_k = FK_ADD;
    edi = eax; /* 0x0061D8CD: mov edi, eax */
    MEM32(ebp + (-0x14)) = edi; /* 0x0061D8CF: mov dword ptr [ebp - 0x14], edi */
    /* test edi, edi */ /* 0x0061D8D2: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_0061D8DC; /* 0x0061D8D4: jne 0x61d8dc */
L_0061D8D6:
    RECOMP_ICALL(MEM32(0x7CC40C)); /* 0x0061D8D6: call dword ptr [0x7cc40c] */
    RECOMP_FLAGS_IN();
L_0061D8DC:
    MEM32(ebp + (-0x4)) = 0; /* 0x0061D8DC: mov dword ptr [ebp - 4], 0 */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x0061D8E3: push dword ptr [ebp + 8] */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 8; /* 0x0061D8E6: sub esp, 8 */
    _flag_k = FK_CMP;
    PUSH32(esp, edi); /* 0x0061D8E9: push edi */
    edx = MEM32(ebx + 0x4); /* 0x0061D8EA: mov edx, dword ptr [ebx + 4] */
    ecx = MEM32(ebx); /* 0x0061D8ED: mov ecx, dword ptr [ebx] */
    RECOMP_CALL(sub_0061DB20); /* 0x0061D8EF: call 0x61db20 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x10u; /* 0x0061D8F4: add esp, 0x10 */
    _flag_k = FK_ADD;
    MEM32(ebp + (-0x4)) = 0xFFFFFFFFu; /* 0x0061D8F7: mov dword ptr [ebp - 4], 0xffffffff */
    eax = MEM32(ebx + 0x4); /* 0x0061D8FE: mov eax, dword ptr [ebx + 4] */
    MEM32(ebp + (-0x14)) = eax; /* 0x0061D901: mov dword ptr [ebp - 0x14], eax */
    esi = MEM32(ebx); /* 0x0061D904: mov esi, dword ptr [ebx] */
    ecx = eax; /* 0x0061D906: mov ecx, eax */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ecx = ecx - esi; /* 0x0061D908: sub ecx, esi */
    _flag_k = FK_CMP;
    eax = 0x51EB851Fu; /* 0x0061D90A: mov eax, 0x51eb851f */
    { int64_t _r = (int64_t)(int32_t)eax * (int32_t)(ecx); /* 0x0061D90F: imul ecx */
      eax = (uint32_t)_r; edx = (uint32_t)(_r >> 32); uint32_t _ov = _r != (int32_t)_r;
      _flag_k = FK_EFLAGS; _flag_a = _ov ? 0x801u : 0u; _flag_b = 0; _cf = _ov; }
    if (5u) _cf = (((edx) >> 4) & 1u); /* 0x0061D911: sar edx, 5 */
    if (5u) { _flag_a = recomp_flags_pack(((uint32_t)((int32_t)edx >> 5u)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    edx = (uint32_t)((int32_t)edx >> 5u);
    eax = edx; /* 0x0061D914: mov eax, edx */
    if (31u) _cf = (((eax) >> 30) & 1u); /* 0x0061D916: shr eax, 0x1f */
    if (31u) { _flag_a = recomp_flags_pack((eax >> 31u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax >> 31u; /* 0x0061D916: shr eax, 0x1f */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + edx; /* 0x0061D919: add eax, edx */
    _flag_k = FK_ADD;
    MEM32(ebp + (-0x18)) = eax; /* 0x0061D91B: mov dword ptr [ebp - 0x18], eax */
    /* test esi, esi */ /* 0x0061D91E: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_0061D943; /* 0x0061D920: je 0x61d943 */
L_0061D922:
    /* cmp esi, MEM32(ebp + (-0x14)) */ /* 0x0061D922: cmp esi, dword ptr [ebp - 0x14] */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(MEM32(ebp + (-0x14)));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_0061D938; /* 0x0061D925: je 0x61d938 */
L_0061D927:
    eax = MEM32(esi); /* 0x0061D927: mov eax, dword ptr [esi] */
    PUSH32(esp, 0); /* 0x0061D929: push 0 */
    ecx = esi; /* 0x0061D92B: mov ecx, esi */
    RECOMP_ICALL(MEM32(eax + 0x4)); /* 0x0061D92D: call dword ptr [eax + 4] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(0x64u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esi = esi + 0x64u; /* 0x0061D930: add esi, 0x64 */
    _flag_k = FK_ADD;
    /* cmp esi, MEM32(ebp + (-0x14)) */ /* 0x0061D933: cmp esi, dword ptr [ebp - 0x14] */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(MEM32(ebp + (-0x14)));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_NE(_flag_a, _flag_b)) goto L_0061D927; /* 0x0061D936: jne 0x61d927 */
L_0061D938:
    PUSH32(esp, MEM32(ebx)); /* 0x0061D938: push dword ptr [ebx] */
    RECOMP_ICALL(MEM32(0x7CC694)); /* 0x0061D93A: call dword ptr [0x7cc694] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x0061D940: add esp, 4 */
    _flag_k = FK_ADD;
L_0061D943:
    eax = (uint32_t)((int32_t)MEM32(ebp + 0x8) * (int32_t)0x64u); /* 0x0061D943: imul eax, dword ptr [ebp + 8], 0x64 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + edi; /* 0x0061D947: add eax, edi */
    _flag_k = FK_ADD;
    MEM32(ebx + 0x8) = eax; /* 0x0061D949: mov dword ptr [ebx + 8], eax */
    eax = (uint32_t)((int32_t)MEM32(ebp + (-0x18)) * (int32_t)0x64u); /* 0x0061D94C: imul eax, dword ptr [ebp - 0x18], 0x64 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + edi; /* 0x0061D950: add eax, edi */
    _flag_k = FK_ADD;
    MEM32(ebx + 0x4) = eax; /* 0x0061D952: mov dword ptr [ebx + 4], eax */
    MEM32(ebx) = edi; /* 0x0061D955: mov dword ptr [ebx], edi */
    ecx = MEM32(ebp + (-0xC)); /* 0x0061D957: mov ecx, dword ptr [ebp - 0xc] */
    MEM32(FS_BASE + (0)) = ecx; /* 0x0061D95A: mov dword ptr fs:[0], ecx */
    ecx = POP32_VAL(esp); /* 0x0061D961: pop ecx */
    edi = POP32_VAL(esp); /* 0x0061D962: pop edi */
    esi = POP32_VAL(esp); /* 0x0061D963: pop esi */
    ebx = POP32_VAL(esp); /* 0x0061D964: pop ebx */
    esp = ebp; /* 0x0061D965: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x0061D967: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x0061D968: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_0061D96B(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0061D96Bu);

L_0061D96B:
    PUSH32(esp, MEM32(ebp + (-0x14))); /* 0x0061D96B: push dword ptr [ebp - 0x14] */
    RECOMP_ICALL(MEM32(0x7CC694)); /* 0x0061D96E: call dword ptr [0x7cc694] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x0061D974: add esp, 4 */
    _flag_k = FK_ADD;
    PUSH32(esp, 0); /* 0x0061D977: push 0 */
    PUSH32(esp, 0); /* 0x0061D979: push 0 */
    RECOMP_CALL(sub_00780016); /* 0x0061D97B: call 0x780016 */
    RECOMP_FLAGS_IN();
    void_lift_trap(0x0061D980u, "int3 ");
    { RECOMP_REGS_OUT(); return; } /* end of function */
    RECOMP_REGS_OUT();
}

void sub_0061D990(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0061D990u);

L_0061D990:
    PUSH32(esp, ebp); /* 0x0061D990: push ebp */
    ebp = esp; /* 0x0061D991: mov ebp, esp */
    PUSH32(esp, ecx); /* 0x0061D993: push ecx */
    PUSH32(esp, esi); /* 0x0061D994: push esi */
    esi = MEM32(ebp + 0x8); /* 0x0061D995: mov esi, dword ptr [ebp + 8] */
    eax = edx; /* 0x0061D998: mov eax, edx */
    PUSH32(esp, edi); /* 0x0061D99A: push edi */
    edi = ecx; /* 0x0061D99B: mov edi, ecx */
    MEM32(ebp + (-0x4)) = eax; /* 0x0061D99D: mov dword ptr [ebp - 4], eax */
    /* cmp edi, eax */ /* 0x0061D9A0: cmp edi, eax */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_0061D9D1; /* 0x0061D9A2: je 0x61d9d1 */
L_0061D9A4:
    PUSH32(esp, ebx); /* 0x0061D9A4: push ebx */
    ebx = edi; /* 0x0061D9A5: mov ebx, edi */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ebx = ebx - esi; /* 0x0061D9A7: sub ebx, esi */
    _flag_k = FK_CMP;
    esp = esp; /* 0x0061D9A9: lea esp, [esp] */
L_0061D9B0:
    PUSH32(esp, edi); /* 0x0061D9B0: push edi */
    ecx = esi; /* 0x0061D9B1: mov ecx, esi */
    RECOMP_CALL(sub_0061D9E0); /* 0x0061D9B3: call 0x61d9e0 */
    RECOMP_FLAGS_IN();
    eax = MEM32(ebx + esi + 0x5C); /* 0x0061D9B8: mov eax, dword ptr [ebx + esi + 0x5c] */
    MEM32(esi + 0x5C) = eax; /* 0x0061D9BC: mov dword ptr [esi + 0x5c], eax */
    eax = MEM32(edi + 0x60); /* 0x0061D9BF: mov eax, dword ptr [edi + 0x60] */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(0x64u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edi = edi + 0x64u; /* 0x0061D9C2: add edi, 0x64 */
    _flag_k = FK_ADD;
    MEM32(esi + 0x60) = eax; /* 0x0061D9C5: mov dword ptr [esi + 0x60], eax */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(0x64u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esi = esi + 0x64u; /* 0x0061D9C8: add esi, 0x64 */
    _flag_k = FK_ADD;
    /* cmp edi, MEM32(ebp + (-0x4)) */ /* 0x0061D9CB: cmp edi, dword ptr [ebp - 4] */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(MEM32(ebp + (-0x4)));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_NE(_flag_a, _flag_b)) goto L_0061D9B0; /* 0x0061D9CE: jne 0x61d9b0 */
L_0061D9D0:
    ebx = POP32_VAL(esp); /* 0x0061D9D0: pop ebx */
L_0061D9D1:
    edi = POP32_VAL(esp); /* 0x0061D9D1: pop edi */
    eax = esi; /* 0x0061D9D2: mov eax, esi */
    esi = POP32_VAL(esp); /* 0x0061D9D4: pop esi */
    esp = ebp; /* 0x0061D9D5: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x0061D9D7: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x0061D9D8: ret  */
    RECOMP_REGS_OUT();
}

void sub_0061D9E0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0061D9E0u);

L_0061D9E0:
    PUSH32(esp, ebp); /* 0x0061D9E0: push ebp */
    ebp = esp; /* 0x0061D9E1: mov ebp, esp */
    edx = MEM32(ebp + 0x8); /* 0x0061D9E3: mov edx, dword ptr [ebp + 8] */
    eax = MEM32(edx + 0x4); /* 0x0061D9E6: mov eax, dword ptr [edx + 4] */
    MEM32(ecx + 0x4) = eax; /* 0x0061D9E9: mov dword ptr [ecx + 4], eax */
    eax = MEM32(edx + 0x8); /* 0x0061D9EC: mov eax, dword ptr [edx + 8] */
    MEM32(ecx + 0x8) = eax; /* 0x0061D9EF: mov dword ptr [ecx + 8], eax */
    eax = MEM32(edx + 0xC); /* 0x0061D9F2: mov eax, dword ptr [edx + 0xc] */
    MEM32(ecx + 0xC) = eax; /* 0x0061D9F5: mov dword ptr [ecx + 0xc], eax */
    eax = MEM32(edx + 0x10); /* 0x0061D9F8: mov eax, dword ptr [edx + 0x10] */
    MEM32(ecx + 0x10) = eax; /* 0x0061D9FB: mov dword ptr [ecx + 0x10], eax */
    eax = MEM32(edx + 0x14); /* 0x0061D9FE: mov eax, dword ptr [edx + 0x14] */
    MEM32(ecx + 0x14) = eax; /* 0x0061DA01: mov dword ptr [ecx + 0x14], eax */
    eax = MEM32(edx + 0x18); /* 0x0061DA04: mov eax, dword ptr [edx + 0x18] */
    MEM32(ecx + 0x18) = eax; /* 0x0061DA07: mov dword ptr [ecx + 0x18], eax */
    eax = MEM32(edx + 0x1C); /* 0x0061DA0A: mov eax, dword ptr [edx + 0x1c] */
    MEM32(ecx + 0x1C) = eax; /* 0x0061DA0D: mov dword ptr [ecx + 0x1c], eax */
    eax = MEM32(edx + 0x20); /* 0x0061DA10: mov eax, dword ptr [edx + 0x20] */
    MEM32(ecx + 0x20) = eax; /* 0x0061DA13: mov dword ptr [ecx + 0x20], eax */
    eax = MEM32(edx + 0x24); /* 0x0061DA16: mov eax, dword ptr [edx + 0x24] */
    MEM32(ecx + 0x24) = eax; /* 0x0061DA19: mov dword ptr [ecx + 0x24], eax */
    eax = MEM32(edx + 0x28); /* 0x0061DA1C: mov eax, dword ptr [edx + 0x28] */
    MEM32(ecx + 0x28) = eax; /* 0x0061DA1F: mov dword ptr [ecx + 0x28], eax */
    eax = MEM32(edx + 0x2C); /* 0x0061DA22: mov eax, dword ptr [edx + 0x2c] */
    MEM32(ecx + 0x2C) = eax; /* 0x0061DA25: mov dword ptr [ecx + 0x2c], eax */
    eax = MEM32(edx + 0x30); /* 0x0061DA28: mov eax, dword ptr [edx + 0x30] */
    MEM32(ecx + 0x30) = eax; /* 0x0061DA2B: mov dword ptr [ecx + 0x30], eax */
    eax = MEM32(edx + 0x34); /* 0x0061DA2E: mov eax, dword ptr [edx + 0x34] */
    MEM32(ecx + 0x34) = eax; /* 0x0061DA31: mov dword ptr [ecx + 0x34], eax */
    eax = MEM32(edx + 0x38); /* 0x0061DA34: mov eax, dword ptr [edx + 0x38] */
    MEM32(ecx + 0x38) = eax; /* 0x0061DA37: mov dword ptr [ecx + 0x38], eax */
    eax = MEM32(edx + 0x3C); /* 0x0061DA3A: mov eax, dword ptr [edx + 0x3c] */
    MEM32(ecx + 0x3C) = eax; /* 0x0061DA3D: mov dword ptr [ecx + 0x3c], eax */
    eax = MEM32(edx + 0x40); /* 0x0061DA40: mov eax, dword ptr [edx + 0x40] */
    MEM32(ecx + 0x40) = eax; /* 0x0061DA43: mov dword ptr [ecx + 0x40], eax */
    eax = MEM32(edx + 0x44); /* 0x0061DA46: mov eax, dword ptr [edx + 0x44] */
    MEM32(ecx + 0x44) = eax; /* 0x0061DA49: mov dword ptr [ecx + 0x44], eax */
    eax = MEM32(edx + 0x48); /* 0x0061DA4C: mov eax, dword ptr [edx + 0x48] */
    MEM32(ecx + 0x48) = eax; /* 0x0061DA4F: mov dword ptr [ecx + 0x48], eax */
    eax = MEM32(edx + 0x4C); /* 0x0061DA52: mov eax, dword ptr [edx + 0x4c] */
    MEM32(ecx + 0x4C) = eax; /* 0x0061DA55: mov dword ptr [ecx + 0x4c], eax */
    eax = MEM32(edx + 0x50); /* 0x0061DA58: mov eax, dword ptr [edx + 0x50] */
    MEM32(ecx + 0x50) = eax; /* 0x0061DA5B: mov dword ptr [ecx + 0x50], eax */
    eax = MEM32(edx + 0x54); /* 0x0061DA5E: mov eax, dword ptr [edx + 0x54] */
    MEM32(ecx + 0x54) = eax; /* 0x0061DA61: mov dword ptr [ecx + 0x54], eax */
    eax = MEM32(edx + 0x58); /* 0x0061DA64: mov eax, dword ptr [edx + 0x58] */
    MEM32(ecx + 0x58) = eax; /* 0x0061DA67: mov dword ptr [ecx + 0x58], eax */
    eax = ecx; /* 0x0061DA6A: mov eax, ecx */
    ebp = POP32_VAL(esp); /* 0x0061DA6C: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x0061DA6D: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_0061DA70(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0061DA70u);

L_0061DA70:
    PUSH32(esp, ebp); /* 0x0061DA70: push ebp */
    ebp = esp; /* 0x0061DA71: mov ebp, esp */
    edx = MEM32(ebp + 0x8); /* 0x0061DA73: mov edx, dword ptr [ebp + 8] */
    MEM32(ecx) = 0x007F8DACu; /* 0x0061DA76: mov dword ptr [ecx], 0x7f8dac */
    eax = MEM32(edx + 0x4); /* 0x0061DA7C: mov eax, dword ptr [edx + 4] */
    MEM32(ecx + 0x4) = eax; /* 0x0061DA7F: mov dword ptr [ecx + 4], eax */
    eax = MEM32(edx + 0x8); /* 0x0061DA82: mov eax, dword ptr [edx + 8] */
    MEM32(ecx + 0x8) = eax; /* 0x0061DA85: mov dword ptr [ecx + 8], eax */
    eax = MEM32(edx + 0xC); /* 0x0061DA88: mov eax, dword ptr [edx + 0xc] */
    MEM32(ecx + 0xC) = eax; /* 0x0061DA8B: mov dword ptr [ecx + 0xc], eax */
    eax = MEM32(edx + 0x10); /* 0x0061DA8E: mov eax, dword ptr [edx + 0x10] */
    MEM32(ecx + 0x10) = eax; /* 0x0061DA91: mov dword ptr [ecx + 0x10], eax */
    eax = MEM32(edx + 0x14); /* 0x0061DA94: mov eax, dword ptr [edx + 0x14] */
    MEM32(ecx + 0x14) = eax; /* 0x0061DA97: mov dword ptr [ecx + 0x14], eax */
    eax = MEM32(edx + 0x18); /* 0x0061DA9A: mov eax, dword ptr [edx + 0x18] */
    MEM32(ecx + 0x18) = eax; /* 0x0061DA9D: mov dword ptr [ecx + 0x18], eax */
    eax = MEM32(edx + 0x1C); /* 0x0061DAA0: mov eax, dword ptr [edx + 0x1c] */
    MEM32(ecx + 0x1C) = eax; /* 0x0061DAA3: mov dword ptr [ecx + 0x1c], eax */
    eax = MEM32(edx + 0x20); /* 0x0061DAA6: mov eax, dword ptr [edx + 0x20] */
    MEM32(ecx + 0x20) = eax; /* 0x0061DAA9: mov dword ptr [ecx + 0x20], eax */
    eax = MEM32(edx + 0x24); /* 0x0061DAAC: mov eax, dword ptr [edx + 0x24] */
    MEM32(ecx + 0x24) = eax; /* 0x0061DAAF: mov dword ptr [ecx + 0x24], eax */
    eax = MEM32(edx + 0x28); /* 0x0061DAB2: mov eax, dword ptr [edx + 0x28] */
    MEM32(ecx + 0x28) = eax; /* 0x0061DAB5: mov dword ptr [ecx + 0x28], eax */
    _xmm[0] = xmm_ld(edx + 0x2C); /* 0x0061DAB8: movdqu xmm0, xmmword ptr [edx + 0x2c] */
    xmm_st(ecx + 0x2C, _xmm[0]); /* 0x0061DABD: movdqu xmmword ptr [ecx + 0x2c], xmm0 */
    _xmm[0] = xmm_ld(edx + 0x3C); /* 0x0061DAC2: movdqu xmm0, xmmword ptr [edx + 0x3c] */
    xmm_st(ecx + 0x3C, _xmm[0]); /* 0x0061DAC7: movdqu xmmword ptr [ecx + 0x3c], xmm0 */
    eax = MEM32(edx + 0x4C); /* 0x0061DACC: mov eax, dword ptr [edx + 0x4c] */
    MEM32(ecx + 0x4C) = eax; /* 0x0061DACF: mov dword ptr [ecx + 0x4c], eax */
    eax = MEM32(edx + 0x50); /* 0x0061DAD2: mov eax, dword ptr [edx + 0x50] */
    MEM32(ecx + 0x50) = eax; /* 0x0061DAD5: mov dword ptr [ecx + 0x50], eax */
    eax = MEM32(edx + 0x54); /* 0x0061DAD8: mov eax, dword ptr [edx + 0x54] */
    MEM32(ecx + 0x54) = eax; /* 0x0061DADB: mov dword ptr [ecx + 0x54], eax */
    eax = MEM32(edx + 0x58); /* 0x0061DADE: mov eax, dword ptr [edx + 0x58] */
    MEM32(ecx + 0x58) = eax; /* 0x0061DAE1: mov dword ptr [ecx + 0x58], eax */
    eax = ecx; /* 0x0061DAE4: mov eax, ecx */
    ebp = POP32_VAL(esp); /* 0x0061DAE6: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x0061DAE7: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_0061DAF0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0061DAF0u);

L_0061DAF0:
    PUSH32(esp, ebp); /* 0x0061DAF0: push ebp */
    ebp = esp; /* 0x0061DAF1: mov ebp, esp */
    PUSH32(esp, esi); /* 0x0061DAF3: push esi */
    esi = ecx; /* 0x0061DAF4: mov esi, ecx */
    ecx = MEM32(esi + 0x4C); /* 0x0061DAF6: mov ecx, dword ptr [esi + 0x4c] */
    MEM32(esi) = 0x007F8DACu; /* 0x0061DAF9: mov dword ptr [esi], 0x7f8dac */
    /* test ecx, ecx */ /* 0x0061DAFF: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_0061DB09; /* 0x0061DB01: je 0x61db09 */
L_0061DB03:
    PUSH32(esp, esi); /* 0x0061DB03: push esi */
    RECOMP_CALL(sub_006E0330); /* 0x0061DB04: call 0x6e0330 */
    RECOMP_FLAGS_IN();
L_0061DB09:
    /* test MEM8(ebp + 0x8), 1 */ /* 0x0061DB09: test byte ptr [ebp + 8], 1 */
    _flag_a = (uint32_t)(MEM8(ebp + 0x8)) << 24; _flag_b = (uint32_t)(1) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_0061DB19; /* 0x0061DB0D: je 0x61db19 */
L_0061DB0F:
    PUSH32(esp, esi); /* 0x0061DB0F: push esi */
    RECOMP_ICALL(MEM32(0x7CC694)); /* 0x0061DB10: call dword ptr [0x7cc694] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x0061DB16: add esp, 4 */
    _flag_k = FK_ADD;
L_0061DB19:
    eax = esi; /* 0x0061DB19: mov eax, esi */
    esi = POP32_VAL(esp); /* 0x0061DB1B: pop esi */
    ebp = POP32_VAL(esp); /* 0x0061DB1C: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x0061DB1D: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_0061DB20(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0061DB20u);

L_0061DB20:
    PUSH32(esp, ebp); /* 0x0061DB20: push ebp */
    ebp = esp; /* 0x0061DB21: mov ebp, esp */
    PUSH32(esp, 0xFFFFFFFFu); /* 0x0061DB23: push -1 */
    PUSH32(esp, 0x007B6A1Du); /* 0x0061DB25: push 0x7b6a1d */
    eax = MEM32(FS_BASE + (0)); /* 0x0061DB2A: mov eax, dword ptr fs:[0] */
    PUSH32(esp, eax); /* 0x0061DB30: push eax */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x10u; /* 0x0061DB31: sub esp, 0x10 */
    _flag_k = FK_CMP;
    PUSH32(esp, ebx); /* 0x0061DB34: push ebx */
    PUSH32(esp, esi); /* 0x0061DB35: push esi */
    PUSH32(esp, edi); /* 0x0061DB36: push edi */
    eax = MEM32(0x855000); /* 0x0061DB37: mov eax, dword ptr [0x855000] */
    _flag_a = (uint32_t)((eax ^ ebp)); _flag_b = (uint32_t)((eax ^ ebp));
    eax = eax ^ ebp; /* 0x0061DB3C: xor eax, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, eax); /* 0x0061DB3E: push eax */
    eax = ebp + (-0xC); /* 0x0061DB3F: lea eax, [ebp - 0xc] */
    MEM32(FS_BASE + (0)) = eax; /* 0x0061DB42: mov dword ptr fs:[0], eax */
    MEM32(ebp + (-0x10)) = esp; /* 0x0061DB48: mov dword ptr [ebp - 0x10], esp */
    ebx = edx; /* 0x0061DB4B: mov ebx, edx */
    edi = ecx; /* 0x0061DB4D: mov edi, ecx */
    esi = MEM32(ebp + 0x8); /* 0x0061DB4F: mov esi, dword ptr [ebp + 8] */
    MEM32(ebp + (-0x14)) = esi; /* 0x0061DB52: mov dword ptr [ebp - 0x14], esi */
    MEM32(ebp + (-0x4)) = 0; /* 0x0061DB55: mov dword ptr [ebp - 4], 0 */
    esp = esp; /* 0x0061DB5C: lea esp, [esp] */
L_0061DB60:
    /* cmp edi, ebx */ /* 0x0061DB60: cmp edi, ebx */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_0061DBA3; /* 0x0061DB62: je 0x61dba3 */
L_0061DB64:
    MEM32(ebp + (-0x18)) = esi; /* 0x0061DB64: mov dword ptr [ebp - 0x18], esi */
    MEM8(ebp + (-0x4)) = (uint8_t)(1); /* 0x0061DB67: mov byte ptr [ebp - 4], 1 */
    /* test esi, esi */ /* 0x0061DB6B: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_0061DB91; /* 0x0061DB6D: je 0x61db91 */
L_0061DB6F:
    PUSH32(esp, edi); /* 0x0061DB6F: push edi */
    ecx = esi; /* 0x0061DB70: mov ecx, esi */
    RECOMP_CALL(sub_0061DA70); /* 0x0061DB72: call 0x61da70 */
    RECOMP_FLAGS_IN();
    MEM8(ebp + (-0x4)) = (uint8_t)(2); /* 0x0061DB77: mov byte ptr [ebp - 4], 2 */
    MEM32(esi) = 0x007F8D80u; /* 0x0061DB7B: mov dword ptr [esi], 0x7f8d80 */
    eax = MEM32(edi + 0x5C); /* 0x0061DB81: mov eax, dword ptr [edi + 0x5c] */
    MEM32(esi + 0x5C) = eax; /* 0x0061DB84: mov dword ptr [esi + 0x5c], eax */
    eax = MEM32(edi + 0x60); /* 0x0061DB87: mov eax, dword ptr [edi + 0x60] */
    MEM32(esi + 0x60) = eax; /* 0x0061DB8A: mov dword ptr [esi + 0x60], eax */
    MEM8(ebp + (-0x4)) = (uint8_t)(1); /* 0x0061DB8D: mov byte ptr [ebp - 4], 1 */
L_0061DB91:
    MEM8(ebp + (-0x4)) = (uint8_t)(0); /* 0x0061DB91: mov byte ptr [ebp - 4], 0 */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(0x64u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esi = esi + 0x64u; /* 0x0061DB95: add esi, 0x64 */
    _flag_k = FK_ADD;
    MEM32(ebp + 0x8) = esi; /* 0x0061DB98: mov dword ptr [ebp + 8], esi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(0x64u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edi = edi + 0x64u; /* 0x0061DB9B: add edi, 0x64 */
    _flag_k = FK_ADD;
    MEM32(ebp + (-0x1C)) = edi; /* 0x0061DB9E: mov dword ptr [ebp - 0x1c], edi */
    RECOMP_BACKEDGE();
    goto L_0061DB60; /* 0x0061DBA1: jmp 0x61db60 */
L_0061DBA3:
    MEM32(ebp + (-0x4)) = 0xFFFFFFFFu; /* 0x0061DBA3: mov dword ptr [ebp - 4], 0xffffffff */
    eax = esi; /* 0x0061DBAA: mov eax, esi */
    ecx = MEM32(ebp + (-0xC)); /* 0x0061DBAC: mov ecx, dword ptr [ebp - 0xc] */
    MEM32(FS_BASE + (0)) = ecx; /* 0x0061DBAF: mov dword ptr fs:[0], ecx */
    ecx = POP32_VAL(esp); /* 0x0061DBB6: pop ecx */
    edi = POP32_VAL(esp); /* 0x0061DBB7: pop edi */
    esi = POP32_VAL(esp); /* 0x0061DBB8: pop esi */
    ebx = POP32_VAL(esp); /* 0x0061DBB9: pop ebx */
    esp = ebp; /* 0x0061DBBA: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x0061DBBC: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x0061DBBD: ret  */
    RECOMP_REGS_OUT();
}

void sub_0061DBBE(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0061DBBEu);

L_0061DBBE:
    esi = MEM32(ebp + (-0x14)); /* 0x0061DBBE: mov esi, dword ptr [ebp - 0x14] */
    edi = MEM32(ebp + 0x8); /* 0x0061DBC1: mov edi, dword ptr [ebp + 8] */
    /* cmp esi, edi */ /* 0x0061DBC4: cmp esi, edi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_0061DBD8; /* 0x0061DBC6: je 0x61dbd8 */
L_0061DBC8:
    eax = MEM32(esi); /* 0x0061DBC8: mov eax, dword ptr [esi] */
    PUSH32(esp, 0); /* 0x0061DBCA: push 0 */
    ecx = esi; /* 0x0061DBCC: mov ecx, esi */
    RECOMP_ICALL(MEM32(eax + 0x4)); /* 0x0061DBCE: call dword ptr [eax + 4] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(0x64u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esi = esi + 0x64u; /* 0x0061DBD1: add esi, 0x64 */
    _flag_k = FK_ADD;
    /* cmp esi, edi */ /* 0x0061DBD4: cmp esi, edi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_NE(_flag_a, _flag_b)) goto L_0061DBC8; /* 0x0061DBD6: jne 0x61dbc8 */
L_0061DBD8:
    PUSH32(esp, 0); /* 0x0061DBD8: push 0 */
    PUSH32(esp, 0); /* 0x0061DBDA: push 0 */
    RECOMP_CALL(sub_00780016); /* 0x0061DBDC: call 0x780016 */
    RECOMP_FLAGS_IN();
    void_lift_trap(0x0061DBE1u, "int3 ");
    { RECOMP_REGS_OUT(); return; } /* end of function */
    RECOMP_REGS_OUT();
}

void sub_0061DBF0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0061DBF0u);

L_0061DBF0:
    PUSH32(esp, ebp); /* 0x0061DBF0: push ebp */
    ebp = esp; /* 0x0061DBF1: mov ebp, esp */
    PUSH32(esp, 0xFFFFFFFFu); /* 0x0061DBF3: push -1 */
    PUSH32(esp, 0x007B6A8Bu); /* 0x0061DBF5: push 0x7b6a8b */
    eax = MEM32(FS_BASE + (0)); /* 0x0061DBFA: mov eax, dword ptr fs:[0] */
    PUSH32(esp, eax); /* 0x0061DC00: push eax */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x44u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x44u; /* 0x0061DC01: sub esp, 0x44 */
    _flag_k = FK_CMP;
    eax = MEM32(0x855000); /* 0x0061DC04: mov eax, dword ptr [0x855000] */
    _flag_a = (uint32_t)((eax ^ ebp)); _flag_b = (uint32_t)((eax ^ ebp));
    eax = eax ^ ebp; /* 0x0061DC09: xor eax, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x14)) = eax; /* 0x0061DC0B: mov dword ptr [ebp - 0x14], eax */
    PUSH32(esp, ebx); /* 0x0061DC0E: push ebx */
    PUSH32(esp, esi); /* 0x0061DC0F: push esi */
    PUSH32(esp, eax); /* 0x0061DC10: push eax */
    eax = ebp + (-0xC); /* 0x0061DC11: lea eax, [ebp - 0xc] */
    MEM32(FS_BASE + (0)) = eax; /* 0x0061DC14: mov dword ptr fs:[0], eax */
    esi = MEM32(ebp + 0x8); /* 0x0061DC1A: mov esi, dword ptr [ebp + 8] */
    MEM32(ebp + (-0x48)) = 0; /* 0x0061DC1D: mov dword ptr [ebp - 0x48], 0 */
    /* cmp MEM32(ecx), 3 */ /* 0x0061DC24: cmp dword ptr [ecx], 3 */
    _flag_a = (uint32_t)(MEM32(ecx)); _flag_b = (uint32_t)(3);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    MEM32(ebp + (-0x4C)) = esi; /* 0x0061DC27: mov dword ptr [ebp - 0x4c], esi */
    if (CMP_NE(_flag_a, _flag_b)) goto L_0061DC6C; /* 0x0061DC2A: jne 0x61dc6c */
L_0061DC2C:
    PUSH32(esp, 0xFFFFFFFFu); /* 0x0061DC2C: push -1 */
    PUSH32(esp, 0); /* 0x0061DC2E: push 0 */
    PUSH32(esp, MEM32(ecx + 0x8)); /* 0x0061DC30: push dword ptr [ecx + 8] */
    MEM32(ebp + (-0x1C)) = 0; /* 0x0061DC33: mov dword ptr [ebp - 0x1c], 0 */
    ecx = ebp + (-0x2C); /* 0x0061DC3A: lea ecx, [ebp - 0x2c] */
    MEM32(ebp + (-0x18)) = 0; /* 0x0061DC3D: mov dword ptr [ebp - 0x18], 0 */
    MEM32(ebp + (-0x18)) = 0xFu; /* 0x0061DC44: mov dword ptr [ebp - 0x18], 0xf */
    MEM32(ebp + (-0x1C)) = 0; /* 0x0061DC4B: mov dword ptr [ebp - 0x1c], 0 */
    MEM8(ebp + (-0x2C)) = (uint8_t)(0); /* 0x0061DC52: mov byte ptr [ebp - 0x2c], 0 */
    RECOMP_CALL(sub_0040A030); /* 0x0061DC56: call 0x40a030 */
    RECOMP_FLAGS_IN();
    eax = ebp + (-0x2C); /* 0x0061DC5B: lea eax, [ebp - 0x2c] */
    MEM32(ebp + (-0x4)) = 1; /* 0x0061DC5E: mov dword ptr [ebp - 4], 1 */
    ebx = 1; /* 0x0061DC65: mov ebx, 1 */
    goto L_0061DC9B; /* 0x0061DC6A: jmp 0x61dc9b */
L_0061DC6C:
    MEM32(ebp + (-0x34)) = 0; /* 0x0061DC6C: mov dword ptr [ebp - 0x34], 0 */
    MEM32(ebp + (-0x30)) = 0; /* 0x0061DC73: mov dword ptr [ebp - 0x30], 0 */
    MEM32(ebp + (-0x30)) = 0xFu; /* 0x0061DC7A: mov dword ptr [ebp - 0x30], 0xf */
    MEM32(ebp + (-0x34)) = 0; /* 0x0061DC81: mov dword ptr [ebp - 0x34], 0 */
    MEM8(ebp + (-0x44)) = (uint8_t)(0); /* 0x0061DC88: mov byte ptr [ebp - 0x44], 0 */
    eax = ebp + (-0x44); /* 0x0061DC8C: lea eax, [ebp - 0x44] */
    MEM32(ebp + (-0x4)) = 2; /* 0x0061DC8F: mov dword ptr [ebp - 4], 2 */
    ebx = 2; /* 0x0061DC96: mov ebx, 2 */
L_0061DC9B:
    MEM32(ebp + (-0x48)) = ebx; /* 0x0061DC9B: mov dword ptr [ebp - 0x48], ebx */
    ecx = esi; /* 0x0061DC9E: mov ecx, esi */
    MEM32(esi + 0x14) = 0xFu; /* 0x0061DCA0: mov dword ptr [esi + 0x14], 0xf */
    MEM32(esi + 0x10) = 0; /* 0x0061DCA7: mov dword ptr [esi + 0x10], 0 */
    PUSH32(esp, eax); /* 0x0061DCAE: push eax */
    MEM8(esi) = (uint8_t)(0); /* 0x0061DCAF: mov byte ptr [esi], 0 */
    RECOMP_CALL(sub_00419890); /* 0x0061DCB2: call 0x419890 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)((ebx | 4)); _flag_b = (uint32_t)((ebx | 4));
    ebx = ebx | 4; /* 0x0061DCB7: or ebx, 4 */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x48)) = ebx; /* 0x0061DCBA: mov dword ptr [ebp - 0x48], ebx */
    MEM32(ebp + (-0x4)) = 1; /* 0x0061DCBD: mov dword ptr [ebp - 4], 1 */
    /* test LO8(ebx), 2 */ /* 0x0061DCC4: test bl, 2 */
    _flag_a = (uint32_t)(LO8(ebx)) << 24; _flag_b = (uint32_t)(2) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_0061DCF3; /* 0x0061DCC7: je 0x61dcf3 */
L_0061DCC9:
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(0xFFFFFFFDu);
    ebx = ebx & 0xFFFFFFFDu; /* 0x0061DCC9: and ebx, 0xfffffffd */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x48)) = ebx; /* 0x0061DCCC: mov dword ptr [ebp - 0x48], ebx */
    /* cmp MEM32(ebp + (-0x30)), 0x10u */ /* 0x0061DCCF: cmp dword ptr [ebp - 0x30], 0x10 */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x30))); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_B(_flag_a, _flag_b)) goto L_0061DCE1; /* 0x0061DCD3: jb 0x61dce1 */
L_0061DCD5:
    PUSH32(esp, MEM32(ebp + (-0x44))); /* 0x0061DCD5: push dword ptr [ebp - 0x44] */
    RECOMP_ICALL(MEM32(0x7CC694)); /* 0x0061DCD8: call dword ptr [0x7cc694] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x0061DCDE: add esp, 4 */
    _flag_k = FK_ADD;
L_0061DCE1:
    MEM32(ebp + (-0x30)) = 0xFu; /* 0x0061DCE1: mov dword ptr [ebp - 0x30], 0xf */
    MEM32(ebp + (-0x34)) = 0; /* 0x0061DCE8: mov dword ptr [ebp - 0x34], 0 */
    MEM8(ebp + (-0x44)) = (uint8_t)(0); /* 0x0061DCEF: mov byte ptr [ebp - 0x44], 0 */
L_0061DCF3:
    MEM32(ebp + (-0x4)) = 0; /* 0x0061DCF3: mov dword ptr [ebp - 4], 0 */
    /* test LO8(ebx), 1 */ /* 0x0061DCFA: test bl, 1 */
    _flag_a = (uint32_t)(LO8(ebx)) << 24; _flag_b = (uint32_t)(1) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_0061DD29; /* 0x0061DCFD: je 0x61dd29 */
L_0061DCFF:
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(0xFFFFFFFEu);
    ebx = ebx & 0xFFFFFFFEu; /* 0x0061DCFF: and ebx, 0xfffffffe */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x48)) = ebx; /* 0x0061DD02: mov dword ptr [ebp - 0x48], ebx */
    /* cmp MEM32(ebp + (-0x18)), 0x10u */ /* 0x0061DD05: cmp dword ptr [ebp - 0x18], 0x10 */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x18))); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_B(_flag_a, _flag_b)) goto L_0061DD17; /* 0x0061DD09: jb 0x61dd17 */
L_0061DD0B:
    PUSH32(esp, MEM32(ebp + (-0x2C))); /* 0x0061DD0B: push dword ptr [ebp - 0x2c] */
    RECOMP_ICALL(MEM32(0x7CC694)); /* 0x0061DD0E: call dword ptr [0x7cc694] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x0061DD14: add esp, 4 */
    _flag_k = FK_ADD;
L_0061DD17:
    MEM32(ebp + (-0x18)) = 0xFu; /* 0x0061DD17: mov dword ptr [ebp - 0x18], 0xf */
    MEM32(ebp + (-0x1C)) = 0; /* 0x0061DD1E: mov dword ptr [ebp - 0x1c], 0 */
    MEM8(ebp + (-0x2C)) = (uint8_t)(0); /* 0x0061DD25: mov byte ptr [ebp - 0x2c], 0 */
L_0061DD29:
    eax = esi; /* 0x0061DD29: mov eax, esi */
    ecx = MEM32(ebp + (-0xC)); /* 0x0061DD2B: mov ecx, dword ptr [ebp - 0xc] */
    MEM32(FS_BASE + (0)) = ecx; /* 0x0061DD2E: mov dword ptr fs:[0], ecx */
    ecx = POP32_VAL(esp); /* 0x0061DD35: pop ecx */
    esi = POP32_VAL(esp); /* 0x0061DD36: pop esi */
    ebx = POP32_VAL(esp); /* 0x0061DD37: pop ebx */
    ecx = MEM32(ebp + (-0x14)); /* 0x0061DD38: mov ecx, dword ptr [ebp - 0x14] */
    _flag_a = (uint32_t)((ecx ^ ebp)); _flag_b = (uint32_t)((ecx ^ ebp));
    ecx = ecx ^ ebp; /* 0x0061DD3B: xor ecx, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_0077F4C2); /* 0x0061DD3D: call 0x77f4c2 */
    RECOMP_FLAGS_IN();
    esp = ebp; /* 0x0061DD42: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x0061DD44: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x0061DD45: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_0061DD50(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0061DD50u);

L_0061DD50:
    PUSH32(esp, ebp); /* 0x0061DD50: push ebp */
    ebp = esp; /* 0x0061DD51: mov ebp, esp */
    PUSH32(esp, 0xFFFFFFFFu); /* 0x0061DD53: push -1 */
    PUSH32(esp, 0x007B6AFBu); /* 0x0061DD55: push 0x7b6afb */
    eax = MEM32(FS_BASE + (0)); /* 0x0061DD5A: mov eax, dword ptr fs:[0] */
    PUSH32(esp, eax); /* 0x0061DD60: push eax */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x28u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x28u; /* 0x0061DD61: sub esp, 0x28 */
    _flag_k = FK_CMP;
    PUSH32(esp, ebx); /* 0x0061DD64: push ebx */
    PUSH32(esp, esi); /* 0x0061DD65: push esi */
    eax = MEM32(0x855000); /* 0x0061DD66: mov eax, dword ptr [0x855000] */
    _flag_a = (uint32_t)((eax ^ ebp)); _flag_b = (uint32_t)((eax ^ ebp));
    eax = eax ^ ebp; /* 0x0061DD6B: xor eax, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, eax); /* 0x0061DD6D: push eax */
    eax = ebp + (-0xC); /* 0x0061DD6E: lea eax, [ebp - 0xc] */
    MEM32(FS_BASE + (0)) = eax; /* 0x0061DD71: mov dword ptr fs:[0], eax */
    MEM32(ebp + (-0x10)) = 0; /* 0x0061DD77: mov dword ptr [ebp - 0x10], 0 */
    /* cmp MEM32(ecx), 5 */ /* 0x0061DD7E: cmp dword ptr [ecx], 5 */
    _flag_a = (uint32_t)(MEM32(ecx)); _flag_b = (uint32_t)(5);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_0061DDB4; /* 0x0061DD81: je 0x61ddb4 */
L_0061DD83:
    eax = MEM32(ebp + 0x8); /* 0x0061DD83: mov eax, dword ptr [ebp + 8] */
    MEM32(eax) = 0; /* 0x0061DD86: mov dword ptr [eax], 0 */
    MEM32(eax + 0x4) = 0; /* 0x0061DD8C: mov dword ptr [eax + 4], 0 */
    MEM32(ebp + (-0x4)) = 0; /* 0x0061DD93: mov dword ptr [ebp - 4], 0 */
    MEM32(ebp + (-0x10)) = 1; /* 0x0061DD9A: mov dword ptr [ebp - 0x10], 1 */
    ecx = MEM32(ebp + (-0xC)); /* 0x0061DDA1: mov ecx, dword ptr [ebp - 0xc] */
    MEM32(FS_BASE + (0)) = ecx; /* 0x0061DDA4: mov dword ptr fs:[0], ecx */
    ecx = POP32_VAL(esp); /* 0x0061DDAB: pop ecx */
    esi = POP32_VAL(esp); /* 0x0061DDAC: pop esi */
    ebx = POP32_VAL(esp); /* 0x0061DDAD: pop ebx */
    esp = ebp; /* 0x0061DDAE: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x0061DDB0: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 12; { RECOMP_REGS_OUT(); return; } /* 0x0061DDB1: ret 8 */
L_0061DDB4:
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x0061DDB4: push dword ptr [ebp + 0xc] */
    esi = MEM32(ecx + 0x8); /* 0x0061DDB7: mov esi, dword ptr [ecx + 8] */
    eax = ebp + 0xC; /* 0x0061DDBA: lea eax, [ebp + 0xc] */
    PUSH32(esp, eax); /* 0x0061DDBD: push eax */
    ecx = esi; /* 0x0061DDBE: mov ecx, esi */
    RECOMP_CALL(sub_0060D0F0); /* 0x0061DDC0: call 0x60d0f0 */
    RECOMP_FLAGS_IN();
    eax = MEM32(ebp + 0xC); /* 0x0061DDC5: mov eax, dword ptr [ebp + 0xc] */
    /* cmp eax, MEM32(esi) */ /* 0x0061DDC8: cmp eax, dword ptr [esi] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(esi));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_0061DDE6; /* 0x0061DDCA: je 0x61dde6 */
L_0061DDCC:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x20u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 0x20u; /* 0x0061DDCC: add eax, 0x20 */
    _flag_k = FK_ADD;
    ecx = ebp + (-0x30); /* 0x0061DDCF: lea ecx, [ebp - 0x30] */
    PUSH32(esp, eax); /* 0x0061DDD2: push eax */
    RECOMP_CALL(sub_005C5F20); /* 0x0061DDD3: call 0x5c5f20 */
    RECOMP_FLAGS_IN();
    MEM32(ebp + (-0x4)) = 1; /* 0x0061DDD8: mov dword ptr [ebp - 4], 1 */
    ebx = 2; /* 0x0061DDDF: mov ebx, 2 */
    goto L_0061DE03; /* 0x0061DDE4: jmp 0x61de03 */
L_0061DDE6:
    MEM32(ebp + (-0x20)) = 0; /* 0x0061DDE6: mov dword ptr [ebp - 0x20], 0 */
    MEM32(ebp + (-0x1C)) = 0; /* 0x0061DDED: mov dword ptr [ebp - 0x1c], 0 */
    eax = ebp + (-0x20); /* 0x0061DDF4: lea eax, [ebp - 0x20] */
    MEM32(ebp + (-0x4)) = 2; /* 0x0061DDF7: mov dword ptr [ebp - 4], 2 */
    ebx = 4; /* 0x0061DDFE: mov ebx, 4 */
L_0061DE03:
    MEM32(ebp + (-0x10)) = ebx; /* 0x0061DE03: mov dword ptr [ebp - 0x10], ebx */
    esi = MEM32(ebp + 0x8); /* 0x0061DE06: mov esi, dword ptr [ebp + 8] */
    ecx = esi; /* 0x0061DE09: mov ecx, esi */
    PUSH32(esp, eax); /* 0x0061DE0B: push eax */
    RECOMP_CALL(sub_005C5F20); /* 0x0061DE0C: call 0x5c5f20 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)((ebx | 1)); _flag_b = (uint32_t)((ebx | 1));
    ebx = ebx | 1; /* 0x0061DE11: or ebx, 1 */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x10)) = ebx; /* 0x0061DE14: mov dword ptr [ebp - 0x10], ebx */
    MEM32(ebp + (-0x4)) = 1; /* 0x0061DE17: mov dword ptr [ebp - 4], 1 */
    /* test LO8(ebx), 4 */ /* 0x0061DE1E: test bl, 4 */
    _flag_a = (uint32_t)(LO8(ebx)) << 24; _flag_b = (uint32_t)(4) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_0061DE31; /* 0x0061DE21: je 0x61de31 */
L_0061DE23:
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(0xFFFFFFFBu);
    ebx = ebx & 0xFFFFFFFBu; /* 0x0061DE23: and ebx, 0xfffffffb */
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = ebp + (-0x20); /* 0x0061DE26: lea ecx, [ebp - 0x20] */
    MEM32(ebp + (-0x10)) = ebx; /* 0x0061DE29: mov dword ptr [ebp - 0x10], ebx */
    RECOMP_CALL(sub_005C6270); /* 0x0061DE2C: call 0x5c6270 */
    RECOMP_FLAGS_IN();
L_0061DE31:
    MEM32(ebp + (-0x4)) = 0; /* 0x0061DE31: mov dword ptr [ebp - 4], 0 */
    /* test LO8(ebx), 2 */ /* 0x0061DE38: test bl, 2 */
    _flag_a = (uint32_t)(LO8(ebx)) << 24; _flag_b = (uint32_t)(2) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_0061DE4B; /* 0x0061DE3B: je 0x61de4b */
L_0061DE3D:
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(0xFFFFFFFDu);
    ebx = ebx & 0xFFFFFFFDu; /* 0x0061DE3D: and ebx, 0xfffffffd */
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = ebp + (-0x30); /* 0x0061DE40: lea ecx, [ebp - 0x30] */
    MEM32(ebp + (-0x10)) = ebx; /* 0x0061DE43: mov dword ptr [ebp - 0x10], ebx */
    RECOMP_CALL(sub_005C6270); /* 0x0061DE46: call 0x5c6270 */
    RECOMP_FLAGS_IN();
L_0061DE4B:
    eax = esi; /* 0x0061DE4B: mov eax, esi */
    ecx = MEM32(ebp + (-0xC)); /* 0x0061DE4D: mov ecx, dword ptr [ebp - 0xc] */
    MEM32(FS_BASE + (0)) = ecx; /* 0x0061DE50: mov dword ptr fs:[0], ecx */
    ecx = POP32_VAL(esp); /* 0x0061DE57: pop ecx */
    esi = POP32_VAL(esp); /* 0x0061DE58: pop esi */
    ebx = POP32_VAL(esp); /* 0x0061DE59: pop ebx */
    esp = ebp; /* 0x0061DE5A: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x0061DE5C: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 12; { RECOMP_REGS_OUT(); return; } /* 0x0061DE5D: ret 8 */
    RECOMP_REGS_OUT();
}

void sub_0061DE60(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0061DE60u);

L_0061DE60:
    PUSH32(esp, ebp); /* 0x0061DE60: push ebp */
    ebp = esp; /* 0x0061DE61: mov ebp, esp */
    PUSH32(esp, ebx); /* 0x0061DE63: push ebx */
    PUSH32(esp, esi); /* 0x0061DE64: push esi */
    PUSH32(esp, edi); /* 0x0061DE65: push edi */
    ebx = ecx + 0x50; /* 0x0061DE66: lea ebx, [ecx + 0x50] */
    PUSH32(esp, ecx); /* 0x0061DE69: push ecx */
    ecx = ebx; /* 0x0061DE6A: mov ecx, ebx */
    RECOMP_CALL(sub_0053D290); /* 0x0061DE6C: call 0x53d290 */
    RECOMP_FLAGS_IN();
    esi = MEM32(ebx); /* 0x0061DE71: mov esi, dword ptr [ebx] */
    eax = MEM32(esi + 0xC); /* 0x0061DE73: mov eax, dword ptr [esi + 0xc] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xBu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 0xBu; /* 0x0061DE76: add eax, 0xb */
    _flag_k = FK_ADD;
    /* cmp eax, MEM32(esi + 0x10) */ /* 0x0061DE79: cmp eax, dword ptr [esi + 0x10] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(esi + 0x10));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_0061DE87; /* 0x0061DE7C: jbe 0x61de87 */
L_0061DE7E:
    PUSH32(esp, 0xBu); /* 0x0061DE7E: push 0xb */
    ecx = esi; /* 0x0061DE80: mov ecx, esi */
    RECOMP_CALL(sub_0053EDC0); /* 0x0061DE82: call 0x53edc0 */
    RECOMP_FLAGS_IN();
L_0061DE87:
    edi = MEM32(esi + 0xC); /* 0x0061DE87: mov edi, dword ptr [esi + 0xc] */
    edx = edi; /* 0x0061DE8A: mov edx, edi */
    ecx = MEM32(ebp + 0x8); /* 0x0061DE8C: mov ecx, dword ptr [ebp + 8] */
    eax = edi + 0xB; /* 0x0061DE8F: lea eax, [edi + 0xb] */
    MEM32(esi + 0xC) = eax; /* 0x0061DE92: mov dword ptr [esi + 0xc], eax */
    /* test ecx, ecx */ /* 0x0061DE95: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) == 0u)) goto L_0061DEA2; /* 0x0061DE97: jns 0x61dea2 */
L_0061DE99:
    ecx = ~ecx; /* 0x0061DE99: not ecx */
    MEM8(edi) = (uint8_t)(0x2Du); /* 0x0061DE9B: mov byte ptr [edi], 0x2d */
    edx = edi + 0x1; /* 0x0061DE9E: lea edx, [edi + 1] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx + 1; /* 0x0061DEA1: inc ecx */
    _flag_k = FK_INC;
L_0061DEA2:
    RECOMP_CALL(sub_0052C800); /* 0x0061DEA2: call 0x52c800 */
    RECOMP_FLAGS_IN();
    ecx = MEM32(ebx); /* 0x0061DEA7: mov ecx, dword ptr [ebx] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - edi; /* 0x0061DEA9: sub eax, edi */
    _flag_k = FK_CMP;
    edi = POP32_VAL(esp); /* 0x0061DEAB: pop edi */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xBu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - 0xBu; /* 0x0061DEAC: sub eax, 0xb */
    _flag_k = FK_CMP;
    esi = POP32_VAL(esp); /* 0x0061DEAF: pop esi */
    _flag_a = (uint32_t)(MEM32(ecx + 0xC)); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM32(ecx + 0xC) = MEM32(ecx + 0xC) + eax; /* 0x0061DEB0: add dword ptr [ecx + 0xc], eax */
    _flag_k = FK_ADD;
    ebx = POP32_VAL(esp); /* 0x0061DEB3: pop ebx */
    ebp = POP32_VAL(esp); /* 0x0061DEB4: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x0061DEB5: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_0061DEC0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0061DEC0u);

L_0061DEC0:
    PUSH32(esp, ebp); /* 0x0061DEC0: push ebp */
    ebp = esp; /* 0x0061DEC1: mov ebp, esp */
    PUSH32(esp, 0xFFFFFFFFu); /* 0x0061DEC3: push -1 */
    PUSH32(esp, 0x007B6B3Eu); /* 0x0061DEC5: push 0x7b6b3e */
    eax = MEM32(FS_BASE + (0)); /* 0x0061DECA: mov eax, dword ptr fs:[0] */
    PUSH32(esp, eax); /* 0x0061DED0: push eax */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x28u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x28u; /* 0x0061DED1: sub esp, 0x28 */
    _flag_k = FK_CMP;
    eax = MEM32(0x855000); /* 0x0061DED4: mov eax, dword ptr [0x855000] */
    _flag_a = (uint32_t)((eax ^ ebp)); _flag_b = (uint32_t)((eax ^ ebp));
    eax = eax ^ ebp; /* 0x0061DED9: xor eax, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x14)) = eax; /* 0x0061DEDB: mov dword ptr [ebp - 0x14], eax */
    PUSH32(esp, esi); /* 0x0061DEDE: push esi */
    PUSH32(esp, eax); /* 0x0061DEDF: push eax */
    eax = ebp + (-0xC); /* 0x0061DEE0: lea eax, [ebp - 0xc] */
    MEM32(FS_BASE + (0)) = eax; /* 0x0061DEE3: mov dword ptr fs:[0], eax */
    esi = MEM32(ebp + 0x8); /* 0x0061DEE9: mov esi, dword ptr [ebp + 8] */
    eax = ebp + (-0x28); /* 0x0061DEEC: lea eax, [ebp - 0x28] */
    PUSH32(esp, eax); /* 0x0061DEEF: push eax */
    MEM32(ebp + (-0x30)) = esi; /* 0x0061DEF0: mov dword ptr [ebp - 0x30], esi */
    MEM32(ebp + (-0x2C)) = 0; /* 0x0061DEF3: mov dword ptr [ebp - 0x2c], 0 */
    RECOMP_CALL(sub_006253F0); /* 0x0061DEFA: call 0x6253f0 */
    RECOMP_FLAGS_IN();
    eax = MEM32(ebp + (-0x28)); /* 0x0061DEFF: mov eax, dword ptr [ebp - 0x28] */
    ecx = 3; /* 0x0061DF02: mov ecx, 3 */
    _xmm[0] = xmm_ld(eax); /* 0x0061DF07: movdqu xmm0, xmmword ptr [eax] */
    xmm_st(ebp + (-0x24), _xmm[0]); /* 0x0061DF0B: movdqu xmmword ptr [ebp - 0x24], xmm0 */
    { xmm_t _s = _xmm[0]; for (int _k = 0; _k < 4; _k++) _xmm[0].u32[_k] = _xmm[0].u32[_k] ^ _s.u32[_k]; } /* 0x0061DF10: xorps xmm0, xmm0 */
    xmm_st(eax, _xmm[0]); /* 0x0061DF13: movdqu xmmword ptr [eax], xmm0 */
    eax = MEM32(ebp + (-0x28)); /* 0x0061DF17: mov eax, dword ptr [ebp - 0x28] */
    MEM16(eax + 0xE) = (uint16_t)(LO16(ecx)); /* 0x0061DF1A: mov word ptr [eax + 0xe], cx */
    MEM32(ebp + (-0x4)) = 1; /* 0x0061DF1E: mov dword ptr [ebp - 4], 1 */
    eax = ebp + (-0x24); /* 0x0061DF25: lea eax, [ebp - 0x24] */
    PUSH32(esp, eax); /* 0x0061DF28: push eax */
    ecx = esi; /* 0x0061DF29: mov ecx, esi */
    RECOMP_CALL(sub_005C5FE0); /* 0x0061DF2B: call 0x5c5fe0 */
    RECOMP_FLAGS_IN();
    MEM32(ebp + (-0x2C)) = 1; /* 0x0061DF30: mov dword ptr [ebp - 0x2c], 1 */
    MEM8(ebp + (-0x4)) = (uint8_t)(0); /* 0x0061DF37: mov byte ptr [ebp - 4], 0 */
    eax = esi; /* 0x0061DF3B: mov eax, esi */
    ecx = MEM32(ebp + (-0xC)); /* 0x0061DF3D: mov ecx, dword ptr [ebp - 0xc] */
    MEM32(FS_BASE + (0)) = ecx; /* 0x0061DF40: mov dword ptr fs:[0], ecx */
    ecx = POP32_VAL(esp); /* 0x0061DF47: pop ecx */
    esi = POP32_VAL(esp); /* 0x0061DF48: pop esi */
    ecx = MEM32(ebp + (-0x14)); /* 0x0061DF49: mov ecx, dword ptr [ebp - 0x14] */
    _flag_a = (uint32_t)((ecx ^ ebp)); _flag_b = (uint32_t)((ecx ^ ebp));
    ecx = ecx ^ ebp; /* 0x0061DF4C: xor ecx, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_0077F4C2); /* 0x0061DF4E: call 0x77f4c2 */
    RECOMP_FLAGS_IN();
    esp = ebp; /* 0x0061DF53: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x0061DF55: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x0061DF56: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_0061DF60(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0061DF60u);

L_0061DF60:
    MEM32(ecx) = 0x007F8E20u; /* 0x0061DF60: mov dword ptr [ecx], 0x7f8e20 */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x0061DF66: ret  */
    RECOMP_REGS_OUT();
}

void sub_0061DF70(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0061DF70u);

L_0061DF70:
    PUSH32(esp, ebp); /* 0x0061DF70: push ebp */
    ebp = esp; /* 0x0061DF71: mov ebp, esp */
    PUSH32(esp, 0xFFFFFFFFu); /* 0x0061DF73: push -1 */
    PUSH32(esp, 0x00781699u); /* 0x0061DF75: push 0x781699 */
    eax = MEM32(FS_BASE + (0)); /* 0x0061DF7A: mov eax, dword ptr fs:[0] */
    PUSH32(esp, eax); /* 0x0061DF80: push eax */
    PUSH32(esp, ecx); /* 0x0061DF81: push ecx */
    PUSH32(esp, esi); /* 0x0061DF82: push esi */
    PUSH32(esp, edi); /* 0x0061DF83: push edi */
    eax = MEM32(0x855000); /* 0x0061DF84: mov eax, dword ptr [0x855000] */
    _flag_a = (uint32_t)((eax ^ ebp)); _flag_b = (uint32_t)((eax ^ ebp));
    eax = eax ^ ebp; /* 0x0061DF89: xor eax, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, eax); /* 0x0061DF8B: push eax */
    eax = ebp + (-0xC); /* 0x0061DF8C: lea eax, [ebp - 0xc] */
    MEM32(FS_BASE + (0)) = eax; /* 0x0061DF8F: mov dword ptr fs:[0], eax */
    MEM32(ebp + (-0x10)) = 0; /* 0x0061DF95: mov dword ptr [ebp - 0x10], 0 */
    esi = MEM32(ebp + 0x8); /* 0x0061DF9C: mov esi, dword ptr [ebp + 8] */
    edx = MEM32(ecx + 0x4); /* 0x0061DF9F: mov edx, dword ptr [ecx + 4] */
    MEM32(esi + 0x14) = 0xFu; /* 0x0061DFA2: mov dword ptr [esi + 0x14], 0xf */
    MEM32(esi + 0x10) = 0; /* 0x0061DFA9: mov dword ptr [esi + 0x10], 0 */
    MEM8(esi) = (uint8_t)(0); /* 0x0061DFB0: mov byte ptr [esi], 0 */
    /* cmp MEM8(edx), 0 */ /* 0x0061DFB3: cmp byte ptr [edx], 0 */
    _flag_a = (uint32_t)(MEM8(edx)) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_0061DFBC; /* 0x0061DFB6: jne 0x61dfbc */
L_0061DFB8:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x0061DFB8: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_0061DFCA; /* 0x0061DFBA: jmp 0x61dfca */
L_0061DFBC:
    ecx = edx; /* 0x0061DFBC: mov ecx, edx */
    edi = ecx + 0x1; /* 0x0061DFBE: lea edi, [ecx + 1] */
L_0061DFC1:
    SET_LO8(eax, MEM8(ecx)); /* 0x0061DFC1: mov al, byte ptr [ecx] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx + 1; /* 0x0061DFC3: inc ecx */
    _flag_k = FK_INC;
    /* test LO8(eax), LO8(eax) */ /* 0x0061DFC4: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_0061DFC1; /* 0x0061DFC6: jne 0x61dfc1 */
L_0061DFC8:
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ecx = ecx - edi; /* 0x0061DFC8: sub ecx, edi */
    _flag_k = FK_CMP;
L_0061DFCA:
    PUSH32(esp, ecx); /* 0x0061DFCA: push ecx */
    PUSH32(esp, edx); /* 0x0061DFCB: push edx */
    ecx = esi; /* 0x0061DFCC: mov ecx, esi */
    RECOMP_CALL(sub_0040A2F0); /* 0x0061DFCE: call 0x40a2f0 */
    RECOMP_FLAGS_IN();
    MEM32(ebp + (-0x4)) = 0; /* 0x0061DFD3: mov dword ptr [ebp - 4], 0 */
    MEM32(ebp + (-0x10)) = 1; /* 0x0061DFDA: mov dword ptr [ebp - 0x10], 1 */
    eax = esi; /* 0x0061DFE1: mov eax, esi */
    ecx = MEM32(ebp + (-0xC)); /* 0x0061DFE3: mov ecx, dword ptr [ebp - 0xc] */
    MEM32(FS_BASE + (0)) = ecx; /* 0x0061DFE6: mov dword ptr fs:[0], ecx */
    ecx = POP32_VAL(esp); /* 0x0061DFED: pop ecx */
    edi = POP32_VAL(esp); /* 0x0061DFEE: pop edi */
    esi = POP32_VAL(esp); /* 0x0061DFEF: pop esi */
    esp = ebp; /* 0x0061DFF0: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x0061DFF2: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x0061DFF3: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_0061E000(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0061E000u);

L_0061E000:
    PUSH32(esp, ebp); /* 0x0061E000: push ebp */
    ebp = esp; /* 0x0061E001: mov ebp, esp */
    /* test MEM8(ebp + 0x8), 1 */ /* 0x0061E003: test byte ptr [ebp + 8], 1 */
    _flag_a = (uint32_t)(MEM8(ebp + 0x8)) << 24; _flag_b = (uint32_t)(1) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    PUSH32(esp, esi); /* 0x0061E007: push esi */
    esi = ecx; /* 0x0061E008: mov esi, ecx */
    MEM32(esi) = 0x007F8E20u; /* 0x0061E00A: mov dword ptr [esi], 0x7f8e20 */
    if (TEST_Z(_flag_a, _flag_b)) goto L_0061E01C; /* 0x0061E010: je 0x61e01c */
L_0061E012:
    PUSH32(esp, esi); /* 0x0061E012: push esi */
    RECOMP_ICALL(MEM32(0x7CC694)); /* 0x0061E013: call dword ptr [0x7cc694] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x0061E019: add esp, 4 */
    _flag_k = FK_ADD;
L_0061E01C:
    eax = esi; /* 0x0061E01C: mov eax, esi */
    esi = POP32_VAL(esp); /* 0x0061E01E: pop esi */
    ebp = POP32_VAL(esp); /* 0x0061E01F: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x0061E020: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_0061E030(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0061E030u);

L_0061E030:
    PUSH32(esp, ebp); /* 0x0061E030: push ebp */
    ebp = esp; /* 0x0061E031: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xFFFFFFF8u);
    esp = esp & 0xFFFFFFF8u; /* 0x0061E033: and esp, 0xfffffff8 */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, 0xFFFFFFFFu); /* 0x0061E036: push -1 */
    PUSH32(esp, 0x0078E318u); /* 0x0061E038: push 0x78e318 */
    eax = MEM32(FS_BASE + (0)); /* 0x0061E03D: mov eax, dword ptr fs:[0] */
    PUSH32(esp, eax); /* 0x0061E043: push eax */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x30u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x30u; /* 0x0061E044: sub esp, 0x30 */
    _flag_k = FK_CMP;
    eax = MEM32(0x855000); /* 0x0061E047: mov eax, dword ptr [0x855000] */
    _flag_a = (uint32_t)((eax ^ esp)); _flag_b = (uint32_t)((eax ^ esp));
    eax = eax ^ esp; /* 0x0061E04C: xor eax, esp */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(esp + 0x28) = eax; /* 0x0061E04E: mov dword ptr [esp + 0x28], eax */
    PUSH32(esp, ebx); /* 0x0061E052: push ebx */
    PUSH32(esp, esi); /* 0x0061E053: push esi */
    PUSH32(esp, edi); /* 0x0061E054: push edi */
    eax = MEM32(0x855000); /* 0x0061E055: mov eax, dword ptr [0x855000] */
    _flag_a = (uint32_t)((eax ^ esp)); _flag_b = (uint32_t)((eax ^ esp));
    eax = eax ^ esp; /* 0x0061E05A: xor eax, esp */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, eax); /* 0x0061E05C: push eax */
    eax = esp + 0x40; /* 0x0061E05D: lea eax, [esp + 0x40] */
    MEM32(FS_BASE + (0)) = eax; /* 0x0061E061: mov dword ptr fs:[0], eax */
    edi = ecx; /* 0x0061E067: mov edi, ecx */
    eax = MEM32(ebp + 0x8); /* 0x0061E069: mov eax, dword ptr [ebp + 8] */
    MEM32(esp + 0x1C) = eax; /* 0x0061E06C: mov dword ptr [esp + 0x1c], eax */
    eax = MEM32(ebp + 0xC); /* 0x0061E070: mov eax, dword ptr [ebp + 0xc] */
    MEM32(esp + 0x14) = eax; /* 0x0061E073: mov dword ptr [esp + 0x14], eax */
    ebx = eax + 0x50; /* 0x0061E077: lea ebx, [eax + 0x50] */
    ecx = ebx; /* 0x0061E07A: mov ecx, ebx */
    RECOMP_CALL(sub_0053C6C0); /* 0x0061E07C: call 0x53c6c0 */
    RECOMP_FLAGS_IN();
    esi = MEM32(edi + 0xC); /* 0x0061E081: mov esi, dword ptr [edi + 0xc] */
    edi = MEM32(edi + 0x10); /* 0x0061E084: mov edi, dword ptr [edi + 0x10] */
    /* cmp esi, edi */ /* 0x0061E087: cmp esi, edi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_0061E179; /* 0x0061E089: je 0x61e179 */
L_0061E08F:
    /* nop */ /* 0x0061E08F: nop  */
L_0061E090:
    edx = MEM32(esi); /* 0x0061E090: mov edx, dword ptr [esi] */
    MEM32(esp + 0x30) = 0; /* 0x0061E092: mov dword ptr [esp + 0x30], 0 */
    MEM32(esp + 0x34) = 0; /* 0x0061E09A: mov dword ptr [esp + 0x34], 0 */
    MEM32(esp + 0x34) = 0xFu; /* 0x0061E0A2: mov dword ptr [esp + 0x34], 0xf */
    MEM32(esp + 0x30) = 0; /* 0x0061E0AA: mov dword ptr [esp + 0x30], 0 */
    MEM8(esp + 0x20) = (uint8_t)(0); /* 0x0061E0B2: mov byte ptr [esp + 0x20], 0 */
    /* cmp MEM8(edx), 0 */ /* 0x0061E0B7: cmp byte ptr [edx], 0 */
    _flag_a = (uint32_t)(MEM8(edx)) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_0061E0C0; /* 0x0061E0BA: jne 0x61e0c0 */
L_0061E0BC:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x0061E0BC: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_0061E0CE; /* 0x0061E0BE: jmp 0x61e0ce */
L_0061E0C0:
    ecx = edx; /* 0x0061E0C0: mov ecx, edx */
    ebx = ecx + 0x1; /* 0x0061E0C2: lea ebx, [ecx + 1] */
L_0061E0C5:
    SET_LO8(eax, MEM8(ecx)); /* 0x0061E0C5: mov al, byte ptr [ecx] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx + 1; /* 0x0061E0C7: inc ecx */
    _flag_k = FK_INC;
    /* test LO8(eax), LO8(eax) */ /* 0x0061E0C8: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_0061E0C5; /* 0x0061E0CA: jne 0x61e0c5 */
L_0061E0CC:
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ecx = ecx - ebx; /* 0x0061E0CC: sub ecx, ebx */
    _flag_k = FK_CMP;
L_0061E0CE:
    PUSH32(esp, ecx); /* 0x0061E0CE: push ecx */
    PUSH32(esp, edx); /* 0x0061E0CF: push edx */
    ecx = esp + 0x28; /* 0x0061E0D0: lea ecx, [esp + 0x28] */
    RECOMP_CALL(sub_0040A2F0); /* 0x0061E0D4: call 0x40a2f0 */
    RECOMP_FLAGS_IN();
    MEM32(esp + 0x48) = 0; /* 0x0061E0D9: mov dword ptr [esp + 0x48], 0 */
    eax = esp + 0x20; /* 0x0061E0E1: lea eax, [esp + 0x20] */
    /* cmp MEM32(esp + 0x34), 0x10u */ /* 0x0061E0E5: cmp dword ptr [esp + 0x34], 0x10 */
    _flag_a = (uint32_t)(MEM32(esp + 0x34)); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_AE(_flag_a, _flag_b)) { eax = MEM32(esp + 0x20); } /* 0x0061E0EA: cmovae eax, dword ptr [esp + 0x20] */
    MEM32(esp + 0x18) = eax; /* 0x0061E0EF: mov dword ptr [esp + 0x18], eax */
    ebx = eax; /* 0x0061E0F3: mov ebx, eax */
    /* cmp MEM8(eax), 0 */ /* 0x0061E0F5: cmp byte ptr [eax], 0 */
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_0061E106; /* 0x0061E0F8: je 0x61e106 */
L_0061E0FA:
    ebx = ebx; /* 0x0061E0FA: lea ebx, [ebx] */
L_0061E100:
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(1);
    ebx = ebx + 1; /* 0x0061E100: inc ebx */
    _flag_k = FK_INC;
    /* cmp MEM8(ebx), 0 */ /* 0x0061E101: cmp byte ptr [ebx], 0 */
    _flag_a = (uint32_t)(MEM8(ebx)) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    RECOMP_BACKEDGE();
    if (CMP_NE(_flag_a, _flag_b)) goto L_0061E100; /* 0x0061E104: jne 0x61e100 */
L_0061E106:
    PUSH32(esp, ecx); /* 0x0061E106: push ecx */
    ecx = MEM32(esp + 0x18); /* 0x0061E107: mov ecx, dword ptr [esp + 0x18] */
    ecx = ecx + 0x50; /* 0x0061E10B: lea ecx, [ecx + 0x50] */
    RECOMP_CALL(sub_0053D290); /* 0x0061E10E: call 0x53d290 */
    RECOMP_FLAGS_IN();
    eax = MEM32(esp + 0x18); /* 0x0061E113: mov eax, dword ptr [esp + 0x18] */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ebx = ebx - eax; /* 0x0061E117: sub ebx, eax */
    _flag_k = FK_CMP;
    PUSH32(esp, ebx); /* 0x0061E119: push ebx */
    ebx = MEM32(esp + 0x18); /* 0x0061E11A: mov ebx, dword ptr [esp + 0x18] */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(0x50u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ebx = ebx + 0x50u; /* 0x0061E11E: add ebx, 0x50 */
    _flag_k = FK_ADD;
    PUSH32(esp, eax); /* 0x0061E121: push eax */
    ecx = ebx; /* 0x0061E122: mov ecx, ebx */
    RECOMP_CALL(sub_0053D3C0); /* 0x0061E124: call 0x53d3c0 */
    RECOMP_FLAGS_IN();
    MEM32(esp + 0x48) = 0xFFFFFFFFu; /* 0x0061E129: mov dword ptr [esp + 0x48], 0xffffffff */
    /* cmp MEM32(esp + 0x34), 0x10u */ /* 0x0061E131: cmp dword ptr [esp + 0x34], 0x10 */
    _flag_a = (uint32_t)(MEM32(esp + 0x34)); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_B(_flag_a, _flag_b)) goto L_0061E145; /* 0x0061E136: jb 0x61e145 */
L_0061E138:
    PUSH32(esp, MEM32(esp + 0x20)); /* 0x0061E138: push dword ptr [esp + 0x20] */
    RECOMP_ICALL(MEM32(0x7CC694)); /* 0x0061E13C: call dword ptr [0x7cc694] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x0061E142: add esp, 4 */
    _flag_k = FK_ADD;
L_0061E145:
    ecx = MEM32(esi + 0x8); /* 0x0061E145: mov ecx, dword ptr [esi + 8] */
    eax = MEM32(esi + 0x4); /* 0x0061E148: mov eax, dword ptr [esi + 4] */
    PUSH32(esp, MEM32(esp + 0x14)); /* 0x0061E14B: push dword ptr [esp + 0x14] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(esp + 0x20));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + MEM32(esp + 0x20); /* 0x0061E14F: add eax, dword ptr [esp + 0x20] */
    _flag_k = FK_ADD;
    edx = MEM32(ecx); /* 0x0061E153: mov edx, dword ptr [ecx] */
    PUSH32(esp, eax); /* 0x0061E155: push eax */
    MEM32(esp + 0x3C) = 0xFu; /* 0x0061E156: mov dword ptr [esp + 0x3c], 0xf */
    MEM32(esp + 0x38) = 0; /* 0x0061E15E: mov dword ptr [esp + 0x38], 0 */
    MEM8(esp + 0x28) = (uint8_t)(0); /* 0x0061E166: mov byte ptr [esp + 0x28], 0 */
    RECOMP_ICALL(MEM32(edx + 0x8)); /* 0x0061E16B: call dword ptr [edx + 8] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esi = esi + 0xCu; /* 0x0061E16E: add esi, 0xc */
    _flag_k = FK_ADD;
    /* cmp esi, edi */ /* 0x0061E171: cmp esi, edi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_NE(_flag_a, _flag_b)) goto L_0061E090; /* 0x0061E173: jne 0x61e090 */
L_0061E179:
    _flag_a = (uint32_t)(MEM32(ebx + 0x10)); _flag_b = (uint32_t)(0xFFFFFFF8u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM32(ebx + 0x10) = MEM32(ebx + 0x10) + 0xFFFFFFF8u; /* 0x0061E179: add dword ptr [ebx + 0x10], -8 */
    _flag_k = FK_ADD;
    esi = MEM32(ebx); /* 0x0061E17D: mov esi, dword ptr [ebx] */
    eax = MEM32(esi + 0xC); /* 0x0061E17F: mov eax, dword ptr [esi + 0xc] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x0061E182: inc eax */
    _flag_k = FK_INC;
    /* cmp eax, MEM32(esi + 0x10) */ /* 0x0061E183: cmp eax, dword ptr [esi + 0x10] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(esi + 0x10));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_0061E191; /* 0x0061E186: jbe 0x61e191 */
L_0061E188:
    PUSH32(esp, 1); /* 0x0061E188: push 1 */
    ecx = esi; /* 0x0061E18A: mov ecx, esi */
    RECOMP_CALL(sub_0053EDC0); /* 0x0061E18C: call 0x53edc0 */
    RECOMP_FLAGS_IN();
L_0061E191:
    ecx = MEM32(esi + 0xC); /* 0x0061E191: mov ecx, dword ptr [esi + 0xc] */
    eax = ecx + 0x1; /* 0x0061E194: lea eax, [ecx + 1] */
    MEM32(esi + 0xC) = eax; /* 0x0061E197: mov dword ptr [esi + 0xc], eax */
    MEM8(ecx) = (uint8_t)(0x7Du); /* 0x0061E19A: mov byte ptr [ecx], 0x7d */
    ecx = MEM32(esp + 0x40); /* 0x0061E19D: mov ecx, dword ptr [esp + 0x40] */
    MEM32(FS_BASE + (0)) = ecx; /* 0x0061E1A1: mov dword ptr fs:[0], ecx */
    ecx = POP32_VAL(esp); /* 0x0061E1A8: pop ecx */
    edi = POP32_VAL(esp); /* 0x0061E1A9: pop edi */
    esi = POP32_VAL(esp); /* 0x0061E1AA: pop esi */
    ebx = POP32_VAL(esp); /* 0x0061E1AB: pop ebx */
    ecx = MEM32(esp + 0x28); /* 0x0061E1AC: mov ecx, dword ptr [esp + 0x28] */
    _flag_a = (uint32_t)((ecx ^ esp)); _flag_b = (uint32_t)((ecx ^ esp));
    ecx = ecx ^ esp; /* 0x0061E1B0: xor ecx, esp */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_0077F4C2); /* 0x0061E1B2: call 0x77f4c2 */
    RECOMP_FLAGS_IN();
    esp = ebp; /* 0x0061E1B7: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x0061E1B9: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 12; { RECOMP_REGS_OUT(); return; } /* 0x0061E1BA: ret 8 */
    RECOMP_REGS_OUT();
}

void sub_0061E1C0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0061E1C0u);

L_0061E1C0:
    PUSH32(esp, ebp); /* 0x0061E1C0: push ebp */
    ebp = esp; /* 0x0061E1C1: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xFFFFFFF8u);
    esp = esp & 0xFFFFFFF8u; /* 0x0061E1C3: and esp, 0xfffffff8 */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, 0xFFFFFFFFu); /* 0x0061E1C6: push -1 */
    PUSH32(esp, 0x007B6B80u); /* 0x0061E1C8: push 0x7b6b80 */
    eax = MEM32(FS_BASE + (0)); /* 0x0061E1CD: mov eax, dword ptr fs:[0] */
    PUSH32(esp, eax); /* 0x0061E1D3: push eax */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x40u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x40u; /* 0x0061E1D4: sub esp, 0x40 */
    _flag_k = FK_CMP;
    eax = MEM32(0x855000); /* 0x0061E1D7: mov eax, dword ptr [0x855000] */
    _flag_a = (uint32_t)((eax ^ esp)); _flag_b = (uint32_t)((eax ^ esp));
    eax = eax ^ esp; /* 0x0061E1DC: xor eax, esp */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(esp + 0x38) = eax; /* 0x0061E1DE: mov dword ptr [esp + 0x38], eax */
    PUSH32(esp, ebx); /* 0x0061E1E2: push ebx */
    PUSH32(esp, esi); /* 0x0061E1E3: push esi */
    PUSH32(esp, edi); /* 0x0061E1E4: push edi */
    eax = MEM32(0x855000); /* 0x0061E1E5: mov eax, dword ptr [0x855000] */
    _flag_a = (uint32_t)((eax ^ esp)); _flag_b = (uint32_t)((eax ^ esp));
    eax = eax ^ esp; /* 0x0061E1EA: xor eax, esp */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, eax); /* 0x0061E1EC: push eax */
    eax = esp + 0x50; /* 0x0061E1ED: lea eax, [esp + 0x50] */
    MEM32(FS_BASE + (0)) = eax; /* 0x0061E1F1: mov dword ptr fs:[0], eax */
    eax = MEM32(ebp + 0xC); /* 0x0061E1F7: mov eax, dword ptr [ebp + 0xc] */
    ebx = MEM32(ebp + 0x8); /* 0x0061E1FA: mov ebx, dword ptr [ebp + 8] */
    MEM32(esp + 0x18) = ebx; /* 0x0061E1FD: mov dword ptr [esp + 0x18], ebx */
    MEM32(esp + 0x14) = eax; /* 0x0061E201: mov dword ptr [esp + 0x14], eax */
    /* cmp MEM32(eax), 5 */ /* 0x0061E205: cmp dword ptr [eax], 5 */
    _flag_a = (uint32_t)(MEM32(eax)); _flag_b = (uint32_t)(5);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_0061E2EC; /* 0x0061E208: jne 0x61e2ec */
L_0061E20E:
    esi = MEM32(ecx + 0xC); /* 0x0061E20E: mov esi, dword ptr [ecx + 0xc] */
    edi = MEM32(ecx + 0x10); /* 0x0061E211: mov edi, dword ptr [ecx + 0x10] */
    /* cmp esi, edi */ /* 0x0061E214: cmp esi, edi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_0061E2EC; /* 0x0061E216: je 0x61e2ec */
L_0061E21C:
    esp = esp; /* 0x0061E21C: lea esp, [esp] */
L_0061E220:
    edx = MEM32(esi); /* 0x0061E220: mov edx, dword ptr [esi] */
    MEM32(esp + 0x40) = 0; /* 0x0061E222: mov dword ptr [esp + 0x40], 0 */
    MEM32(esp + 0x44) = 0; /* 0x0061E22A: mov dword ptr [esp + 0x44], 0 */
    MEM32(esp + 0x44) = 0xFu; /* 0x0061E232: mov dword ptr [esp + 0x44], 0xf */
    MEM32(esp + 0x40) = 0; /* 0x0061E23A: mov dword ptr [esp + 0x40], 0 */
    MEM8(esp + 0x30) = (uint8_t)(0); /* 0x0061E242: mov byte ptr [esp + 0x30], 0 */
    /* cmp MEM8(edx), 0 */ /* 0x0061E247: cmp byte ptr [edx], 0 */
    _flag_a = (uint32_t)(MEM8(edx)) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_0061E250; /* 0x0061E24A: jne 0x61e250 */
L_0061E24C:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x0061E24C: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_0061E262; /* 0x0061E24E: jmp 0x61e262 */
L_0061E250:
    eax = edx; /* 0x0061E250: mov eax, edx */
    ebx = eax + 0x1; /* 0x0061E252: lea ebx, [eax + 1] */
L_0061E255:
    SET_LO8(ecx, MEM8(eax)); /* 0x0061E255: mov cl, byte ptr [eax] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x0061E257: inc eax */
    _flag_k = FK_INC;
    /* test LO8(ecx), LO8(ecx) */ /* 0x0061E258: test cl, cl */
    _flag_a = (uint32_t)(LO8(ecx)) << 24; _flag_b = (uint32_t)(LO8(ecx)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_0061E255; /* 0x0061E25A: jne 0x61e255 */
L_0061E25C:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - ebx; /* 0x0061E25C: sub eax, ebx */
    _flag_k = FK_CMP;
    ebx = MEM32(esp + 0x18); /* 0x0061E25E: mov ebx, dword ptr [esp + 0x18] */
L_0061E262:
    PUSH32(esp, eax); /* 0x0061E262: push eax */
    PUSH32(esp, edx); /* 0x0061E263: push edx */
    ecx = esp + 0x38; /* 0x0061E264: lea ecx, [esp + 0x38] */
    RECOMP_CALL(sub_0040A2F0); /* 0x0061E268: call 0x40a2f0 */
    RECOMP_FLAGS_IN();
    MEM32(esp + 0x58) = 0; /* 0x0061E26D: mov dword ptr [esp + 0x58], 0 */
    eax = esp + 0x30; /* 0x0061E275: lea eax, [esp + 0x30] */
    ecx = MEM32(esp + 0x14); /* 0x0061E279: mov ecx, dword ptr [esp + 0x14] */
    PUSH32(esp, eax); /* 0x0061E27D: push eax */
    eax = esp + 0x20; /* 0x0061E27E: lea eax, [esp + 0x20] */
    PUSH32(esp, eax); /* 0x0061E282: push eax */
    RECOMP_CALL(sub_0061DD50); /* 0x0061E283: call 0x61dd50 */
    RECOMP_FLAGS_IN();
    MEM8(esp + 0x58) = (uint8_t)(2); /* 0x0061E288: mov byte ptr [esp + 0x58], 2 */
    /* cmp MEM32(esp + 0x44), 0x10u */ /* 0x0061E28D: cmp dword ptr [esp + 0x44], 0x10 */
    _flag_a = (uint32_t)(MEM32(esp + 0x44)); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_B(_flag_a, _flag_b)) goto L_0061E2A1; /* 0x0061E292: jb 0x61e2a1 */
L_0061E294:
    PUSH32(esp, MEM32(esp + 0x30)); /* 0x0061E294: push dword ptr [esp + 0x30] */
    RECOMP_ICALL(MEM32(0x7CC694)); /* 0x0061E298: call dword ptr [0x7cc694] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x0061E29E: add esp, 4 */
    _flag_k = FK_ADD;
L_0061E2A1:
    /* cmp MEM32(esp + 0x1C), 0 */ /* 0x0061E2A1: cmp dword ptr [esp + 0x1c], 0 */
    _flag_a = (uint32_t)(MEM32(esp + 0x1C)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    MEM32(esp + 0x44) = 0xFu; /* 0x0061E2A6: mov dword ptr [esp + 0x44], 0xf */
    MEM32(esp + 0x40) = 0; /* 0x0061E2AE: mov dword ptr [esp + 0x40], 0 */
    MEM8(esp + 0x30) = (uint8_t)(0); /* 0x0061E2B6: mov byte ptr [esp + 0x30], 0 */
    if (CMP_EQ(_flag_a, _flag_b)) goto L_0061E2D0; /* 0x0061E2BB: je 0x61e2d0 */
L_0061E2BD:
    ecx = MEM32(esi + 0x8); /* 0x0061E2BD: mov ecx, dword ptr [esi + 8] */
    eax = esp + 0x1C; /* 0x0061E2C0: lea eax, [esp + 0x1c] */
    PUSH32(esp, eax); /* 0x0061E2C4: push eax */
    eax = MEM32(esi + 0x4); /* 0x0061E2C5: mov eax, dword ptr [esi + 4] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + ebx; /* 0x0061E2C8: add eax, ebx */
    _flag_k = FK_ADD;
    edx = MEM32(ecx); /* 0x0061E2CA: mov edx, dword ptr [ecx] */
    PUSH32(esp, eax); /* 0x0061E2CC: push eax */
    RECOMP_ICALL(MEM32(edx + 0xC)); /* 0x0061E2CD: call dword ptr [edx + 0xc] */
    RECOMP_FLAGS_IN();
L_0061E2D0:
    MEM32(esp + 0x58) = 0xFFFFFFFFu; /* 0x0061E2D0: mov dword ptr [esp + 0x58], 0xffffffff */
    ecx = esp + 0x1C; /* 0x0061E2D8: lea ecx, [esp + 0x1c] */
    RECOMP_CALL(sub_005C6270); /* 0x0061E2DC: call 0x5c6270 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esi = esi + 0xCu; /* 0x0061E2E1: add esi, 0xc */
    _flag_k = FK_ADD;
    /* cmp esi, edi */ /* 0x0061E2E4: cmp esi, edi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_NE(_flag_a, _flag_b)) goto L_0061E220; /* 0x0061E2E6: jne 0x61e220 */
L_0061E2EC:
    ecx = MEM32(esp + 0x50); /* 0x0061E2EC: mov ecx, dword ptr [esp + 0x50] */
    MEM32(FS_BASE + (0)) = ecx; /* 0x0061E2F0: mov dword ptr fs:[0], ecx */
    ecx = POP32_VAL(esp); /* 0x0061E2F7: pop ecx */
    edi = POP32_VAL(esp); /* 0x0061E2F8: pop edi */
    esi = POP32_VAL(esp); /* 0x0061E2F9: pop esi */
    ebx = POP32_VAL(esp); /* 0x0061E2FA: pop ebx */
    ecx = MEM32(esp + 0x38); /* 0x0061E2FB: mov ecx, dword ptr [esp + 0x38] */
    _flag_a = (uint32_t)((ecx ^ esp)); _flag_b = (uint32_t)((ecx ^ esp));
    ecx = ecx ^ esp; /* 0x0061E2FF: xor ecx, esp */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_0077F4C2); /* 0x0061E301: call 0x77f4c2 */
    RECOMP_FLAGS_IN();
    esp = ebp; /* 0x0061E306: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x0061E308: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 12; { RECOMP_REGS_OUT(); return; } /* 0x0061E309: ret 8 */
    RECOMP_REGS_OUT();
}

void sub_0061E310(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0061E310u);

L_0061E310:
    PUSH32(esp, ebp); /* 0x0061E310: push ebp */
    ebp = esp; /* 0x0061E311: mov ebp, esp */
    PUSH32(esp, 0xFFFFFFFFu); /* 0x0061E313: push -1 */
    PUSH32(esp, 0x007B6BC3u); /* 0x0061E315: push 0x7b6bc3 */
    eax = MEM32(FS_BASE + (0)); /* 0x0061E31A: mov eax, dword ptr fs:[0] */
    PUSH32(esp, eax); /* 0x0061E320: push eax */
    PUSH32(esp, ecx); /* 0x0061E321: push ecx */
    PUSH32(esp, esi); /* 0x0061E322: push esi */
    eax = MEM32(0x855000); /* 0x0061E323: mov eax, dword ptr [0x855000] */
    _flag_a = (uint32_t)((eax ^ ebp)); _flag_b = (uint32_t)((eax ^ ebp));
    eax = eax ^ ebp; /* 0x0061E328: xor eax, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, eax); /* 0x0061E32A: push eax */
    eax = ebp + (-0xC); /* 0x0061E32B: lea eax, [ebp - 0xc] */
    MEM32(FS_BASE + (0)) = eax; /* 0x0061E32E: mov dword ptr fs:[0], eax */
    esi = ecx; /* 0x0061E334: mov esi, ecx */
    MEM32(ebp + (-0x10)) = esi; /* 0x0061E336: mov dword ptr [ebp - 0x10], esi */
    MEM32(ebp + (-0x4)) = 0; /* 0x0061E339: mov dword ptr [ebp - 4], 0 */
    eax = MEM32(esi + 0xC); /* 0x0061E340: mov eax, dword ptr [esi + 0xc] */
    /* test eax, eax */ /* 0x0061E343: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_0061E366; /* 0x0061E345: je 0x61e366 */
L_0061E347:
    PUSH32(esp, eax); /* 0x0061E347: push eax */
    RECOMP_ICALL(MEM32(0x7CC694)); /* 0x0061E348: call dword ptr [0x7cc694] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x0061E34E: add esp, 4 */
    _flag_k = FK_ADD;
    MEM32(esi + 0xC) = 0; /* 0x0061E351: mov dword ptr [esi + 0xc], 0 */
    MEM32(esi + 0x10) = 0; /* 0x0061E358: mov dword ptr [esi + 0x10], 0 */
    MEM32(esi + 0x14) = 0; /* 0x0061E35F: mov dword ptr [esi + 0x14], 0 */
L_0061E366:
    MEM32(ebp + (-0x4)) = 0xFFFFFFFFu; /* 0x0061E366: mov dword ptr [ebp - 4], 0xffffffff */
    /* test MEM8(ebp + 0x8), 1 */ /* 0x0061E36D: test byte ptr [ebp + 8], 1 */
    _flag_a = (uint32_t)(MEM8(ebp + 0x8)) << 24; _flag_b = (uint32_t)(1) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    MEM32(esi) = 0x007F8E20u; /* 0x0061E371: mov dword ptr [esi], 0x7f8e20 */
    if (TEST_Z(_flag_a, _flag_b)) goto L_0061E383; /* 0x0061E377: je 0x61e383 */
L_0061E379:
    PUSH32(esp, esi); /* 0x0061E379: push esi */
    RECOMP_ICALL(MEM32(0x7CC694)); /* 0x0061E37A: call dword ptr [0x7cc694] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x0061E380: add esp, 4 */
    _flag_k = FK_ADD;
L_0061E383:
    eax = esi; /* 0x0061E383: mov eax, esi */
    ecx = MEM32(ebp + (-0xC)); /* 0x0061E385: mov ecx, dword ptr [ebp - 0xc] */
    MEM32(FS_BASE + (0)) = ecx; /* 0x0061E388: mov dword ptr fs:[0], ecx */
    ecx = POP32_VAL(esp); /* 0x0061E38F: pop ecx */
    esi = POP32_VAL(esp); /* 0x0061E390: pop esi */
    esp = ebp; /* 0x0061E391: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x0061E393: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x0061E394: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_0061E3A0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0061E3A0u);

L_0061E3A0:
    PUSH32(esp, ebp); /* 0x0061E3A0: push ebp */
    ebp = esp; /* 0x0061E3A1: mov ebp, esp */
    PUSH32(esp, 0xFFFFFFFFu); /* 0x0061E3A3: push -1 */
    PUSH32(esp, 0x007B6C11u); /* 0x0061E3A5: push 0x7b6c11 */
    eax = MEM32(FS_BASE + (0)); /* 0x0061E3AA: mov eax, dword ptr fs:[0] */
    PUSH32(esp, eax); /* 0x0061E3B0: push eax */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x54u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x54u; /* 0x0061E3B1: sub esp, 0x54 */
    _flag_k = FK_CMP;
    eax = MEM32(0x855000); /* 0x0061E3B4: mov eax, dword ptr [0x855000] */
    _flag_a = (uint32_t)((eax ^ ebp)); _flag_b = (uint32_t)((eax ^ ebp));
    eax = eax ^ ebp; /* 0x0061E3B9: xor eax, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x10)) = eax; /* 0x0061E3BB: mov dword ptr [ebp - 0x10], eax */
    PUSH32(esp, esi); /* 0x0061E3BE: push esi */
    PUSH32(esp, edi); /* 0x0061E3BF: push edi */
    PUSH32(esp, eax); /* 0x0061E3C0: push eax */
    eax = ebp + (-0xC); /* 0x0061E3C1: lea eax, [ebp - 0xc] */
    MEM32(FS_BASE + (0)) = eax; /* 0x0061E3C4: mov dword ptr fs:[0], eax */
    edi = MEM32(ebp + 0x8); /* 0x0061E3CA: mov edi, dword ptr [ebp + 8] */
    edx = ebp + (-0x40); /* 0x0061E3CD: lea edx, [ebp - 0x40] */
    MEM32(ebp + (-0x5C)) = 0; /* 0x0061E3D0: mov dword ptr [ebp - 0x5c], 0 */
    ecx = MEM32(ecx + 0xC); /* 0x0061E3D7: mov ecx, dword ptr [ecx + 0xc] */
    PUSH32(esp, edx); /* 0x0061E3DA: push edx */
    MEM32(ebp + (-0x60)) = edi; /* 0x0061E3DB: mov dword ptr [ebp - 0x60], edi */
    eax = MEM32(ecx); /* 0x0061E3DE: mov eax, dword ptr [ecx] */
    RECOMP_ICALL(MEM32(eax + 0x4)); /* 0x0061E3E0: call dword ptr [eax + 4] */
    RECOMP_FLAGS_IN();
    esi = eax; /* 0x0061E3E3: mov esi, eax */
    MEM32(ebp + (-0x4)) = 1; /* 0x0061E3E5: mov dword ptr [ebp - 4], 1 */
    ecx = ebp + (-0x28); /* 0x0061E3EC: lea ecx, [ebp - 0x28] */
    PUSH32(esp, 0xCu); /* 0x0061E3EF: push 0xc */
    MEM32(ebp + (-0x18)) = 0; /* 0x0061E3F1: mov dword ptr [ebp - 0x18], 0 */
    MEM32(ebp + (-0x14)) = 0; /* 0x0061E3F8: mov dword ptr [ebp - 0x14], 0 */
    PUSH32(esp, 0x007F8EB0u); /* 0x0061E3FF: push 0x7f8eb0 */
    MEM32(ebp + (-0x14)) = 0xFu; /* 0x0061E404: mov dword ptr [ebp - 0x14], 0xf */
    MEM32(ebp + (-0x18)) = 0; /* 0x0061E40B: mov dword ptr [ebp - 0x18], 0 */
    MEM8(ebp + (-0x28)) = (uint8_t)(0); /* 0x0061E412: mov byte ptr [ebp - 0x28], 0 */
    RECOMP_CALL(sub_0040A2F0); /* 0x0061E416: call 0x40a2f0 */
    RECOMP_FLAGS_IN();
    MEM8(ebp + (-0x4)) = (uint8_t)(2); /* 0x0061E41B: mov byte ptr [ebp - 4], 2 */
    edx = ebp + (-0x28); /* 0x0061E41F: lea edx, [ebp - 0x28] */
    PUSH32(esp, esi); /* 0x0061E422: push esi */
    ecx = ebp + (-0x58); /* 0x0061E423: lea ecx, [ebp - 0x58] */
    RECOMP_CALL(sub_00419B80); /* 0x0061E426: call 0x419b80 */
    RECOMP_FLAGS_IN();
    MEM8(ebp + (-0x4)) = (uint8_t)(3); /* 0x0061E42B: mov byte ptr [ebp - 4], 3 */
    edx = eax; /* 0x0061E42F: mov edx, eax */
    PUSH32(esp, 0x007F8EACu); /* 0x0061E431: push 0x7f8eac */
    ecx = edi; /* 0x0061E436: mov ecx, edi */
    RECOMP_CALL(sub_00419C40); /* 0x0061E438: call 0x419c40 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 8; /* 0x0061E43D: add esp, 8 */
    _flag_k = FK_ADD;
    MEM32(ebp + (-0x5C)) = 1; /* 0x0061E440: mov dword ptr [ebp - 0x5c], 1 */
    MEM8(ebp + (-0x4)) = (uint8_t)(2); /* 0x0061E447: mov byte ptr [ebp - 4], 2 */
    /* cmp MEM32(ebp + (-0x44)), 0x10u */ /* 0x0061E44B: cmp dword ptr [ebp - 0x44], 0x10 */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x44))); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    esi = MEM32(0x7CC694); /* 0x0061E44F: mov esi, dword ptr [0x7cc694] */
    if (CMP_B(_flag_a, _flag_b)) goto L_0061E45F; /* 0x0061E455: jb 0x61e45f */
L_0061E457:
    PUSH32(esp, MEM32(ebp + (-0x58))); /* 0x0061E457: push dword ptr [ebp - 0x58] */
    RECOMP_ICALL(esi); /* 0x0061E45A: call esi */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x0061E45C: add esp, 4 */
    _flag_k = FK_ADD;
L_0061E45F:
    MEM32(ebp + (-0x44)) = 0xFu; /* 0x0061E45F: mov dword ptr [ebp - 0x44], 0xf */
    MEM32(ebp + (-0x48)) = 0; /* 0x0061E466: mov dword ptr [ebp - 0x48], 0 */
    MEM8(ebp + (-0x58)) = (uint8_t)(0); /* 0x0061E46D: mov byte ptr [ebp - 0x58], 0 */
    MEM8(ebp + (-0x4)) = (uint8_t)(1); /* 0x0061E471: mov byte ptr [ebp - 4], 1 */
    /* cmp MEM32(ebp + (-0x14)), 0x10u */ /* 0x0061E475: cmp dword ptr [ebp - 0x14], 0x10 */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x14))); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_B(_flag_a, _flag_b)) goto L_0061E483; /* 0x0061E479: jb 0x61e483 */
L_0061E47B:
    PUSH32(esp, MEM32(ebp + (-0x28))); /* 0x0061E47B: push dword ptr [ebp - 0x28] */
    RECOMP_ICALL(esi); /* 0x0061E47E: call esi */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x0061E480: add esp, 4 */
    _flag_k = FK_ADD;
L_0061E483:
    MEM32(ebp + (-0x14)) = 0xFu; /* 0x0061E483: mov dword ptr [ebp - 0x14], 0xf */
    MEM32(ebp + (-0x18)) = 0; /* 0x0061E48A: mov dword ptr [ebp - 0x18], 0 */
    MEM8(ebp + (-0x28)) = (uint8_t)(0); /* 0x0061E491: mov byte ptr [ebp - 0x28], 0 */
    MEM8(ebp + (-0x4)) = (uint8_t)(0); /* 0x0061E495: mov byte ptr [ebp - 4], 0 */
    /* cmp MEM32(ebp + (-0x2C)), 0x10u */ /* 0x0061E499: cmp dword ptr [ebp - 0x2c], 0x10 */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x2C))); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_B(_flag_a, _flag_b)) goto L_0061E4A7; /* 0x0061E49D: jb 0x61e4a7 */
L_0061E49F:
    PUSH32(esp, MEM32(ebp + (-0x40))); /* 0x0061E49F: push dword ptr [ebp - 0x40] */
    RECOMP_ICALL(esi); /* 0x0061E4A2: call esi */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x0061E4A4: add esp, 4 */
    _flag_k = FK_ADD;
L_0061E4A7:
    MEM32(ebp + (-0x2C)) = 0xFu; /* 0x0061E4A7: mov dword ptr [ebp - 0x2c], 0xf */
    eax = edi; /* 0x0061E4AE: mov eax, edi */
    MEM32(ebp + (-0x30)) = 0; /* 0x0061E4B0: mov dword ptr [ebp - 0x30], 0 */
    MEM8(ebp + (-0x40)) = (uint8_t)(0); /* 0x0061E4B7: mov byte ptr [ebp - 0x40], 0 */
    ecx = MEM32(ebp + (-0xC)); /* 0x0061E4BB: mov ecx, dword ptr [ebp - 0xc] */
    MEM32(FS_BASE + (0)) = ecx; /* 0x0061E4BE: mov dword ptr fs:[0], ecx */
    ecx = POP32_VAL(esp); /* 0x0061E4C5: pop ecx */
    edi = POP32_VAL(esp); /* 0x0061E4C6: pop edi */
    esi = POP32_VAL(esp); /* 0x0061E4C7: pop esi */
    ecx = MEM32(ebp + (-0x10)); /* 0x0061E4C8: mov ecx, dword ptr [ebp - 0x10] */
    _flag_a = (uint32_t)((ecx ^ ebp)); _flag_b = (uint32_t)((ecx ^ ebp));
    ecx = ecx ^ ebp; /* 0x0061E4CB: xor ecx, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_0077F4C2); /* 0x0061E4CD: call 0x77f4c2 */
    RECOMP_FLAGS_IN();
    esp = ebp; /* 0x0061E4D2: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x0061E4D4: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x0061E4D5: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_0061E4E0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0061E4E0u);

L_0061E4E0:
    PUSH32(esp, ebp); /* 0x0061E4E0: push ebp */
    ebp = esp; /* 0x0061E4E1: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 8; /* 0x0061E4E3: sub esp, 8 */
    _flag_k = FK_CMP;
    PUSH32(esp, ebx); /* 0x0061E4E6: push ebx */
    PUSH32(esp, esi); /* 0x0061E4E7: push esi */
    esi = MEM32(ebp + 0xC); /* 0x0061E4E8: mov esi, dword ptr [ebp + 0xc] */
    ebx = ecx; /* 0x0061E4EB: mov ebx, ecx */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(0x50u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esi = esi + 0x50u; /* 0x0061E4ED: add esi, 0x50 */
    _flag_k = FK_ADD;
    PUSH32(esp, edi); /* 0x0061E4F0: push edi */
    ecx = esi; /* 0x0061E4F1: mov ecx, esi */
    MEM32(ebp + (-0x8)) = esi; /* 0x0061E4F3: mov dword ptr [ebp - 8], esi */
    RECOMP_CALL(sub_0053C760); /* 0x0061E4F6: call 0x53c760 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x0061E4FB: push dword ptr [ebp + 8] */
    eax = MEM32(ebx + 0x10); /* 0x0061E4FE: mov eax, dword ptr [ebx + 0x10] */
    RECOMP_ICALL(eax); /* 0x0061E501: call eax */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x0061E503: add esp, 4 */
    _flag_k = FK_ADD;
    MEM32(ebp + (-0x4)) = eax; /* 0x0061E506: mov dword ptr [ebp - 4], eax */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edi = 0; /* 0x0061E509: xor edi, edi */
    _cf = 0;
    _flag_k = FK_TEST;
    /* test eax, eax */ /* 0x0061E50B: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_0061E534; /* 0x0061E50D: je 0x61e534 */
L_0061E50F:
    /* nop */ /* 0x0061E50F: nop  */
L_0061E510:
    eax = MEM32(ebx + 0xC); /* 0x0061E510: mov eax, dword ptr [ebx + 0xc] */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x0061E513: push dword ptr [ebp + 0xc] */
    PUSH32(esp, edi); /* 0x0061E516: push edi */
    esi = MEM32(eax); /* 0x0061E517: mov esi, dword ptr [eax] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x0061E519: push dword ptr [ebp + 8] */
    eax = MEM32(ebx + 0x14); /* 0x0061E51C: mov eax, dword ptr [ebx + 0x14] */
    RECOMP_ICALL(eax); /* 0x0061E51F: call eax */
    RECOMP_FLAGS_IN();
    ecx = MEM32(ebx + 0xC); /* 0x0061E521: mov ecx, dword ptr [ebx + 0xc] */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 8; /* 0x0061E524: add esp, 8 */
    _flag_k = FK_ADD;
    PUSH32(esp, eax); /* 0x0061E527: push eax */
    RECOMP_ICALL(MEM32(esi + 0x8)); /* 0x0061E528: call dword ptr [esi + 8] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(1);
    edi = edi + 1; /* 0x0061E52B: inc edi */
    _flag_k = FK_INC;
    /* cmp edi, MEM32(ebp + (-0x4)) */ /* 0x0061E52C: cmp edi, dword ptr [ebp - 4] */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(MEM32(ebp + (-0x4)));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_0061E510; /* 0x0061E52F: jb 0x61e510 */
L_0061E531:
    esi = MEM32(ebp + (-0x8)); /* 0x0061E531: mov esi, dword ptr [ebp - 8] */
L_0061E534:
    _flag_a = (uint32_t)(MEM32(esi + 0x10)); _flag_b = (uint32_t)(0xFFFFFFF8u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM32(esi + 0x10) = MEM32(esi + 0x10) + 0xFFFFFFF8u; /* 0x0061E534: add dword ptr [esi + 0x10], -8 */
    _flag_k = FK_ADD;
    esi = MEM32(esi); /* 0x0061E538: mov esi, dword ptr [esi] */
    eax = MEM32(esi + 0xC); /* 0x0061E53A: mov eax, dword ptr [esi + 0xc] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x0061E53D: inc eax */
    _flag_k = FK_INC;
    /* cmp eax, MEM32(esi + 0x10) */ /* 0x0061E53E: cmp eax, dword ptr [esi + 0x10] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(esi + 0x10));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_0061E54C; /* 0x0061E541: jbe 0x61e54c */
L_0061E543:
    PUSH32(esp, 1); /* 0x0061E543: push 1 */
    ecx = esi; /* 0x0061E545: mov ecx, esi */
    RECOMP_CALL(sub_0053EDC0); /* 0x0061E547: call 0x53edc0 */
    RECOMP_FLAGS_IN();
L_0061E54C:
    ecx = MEM32(esi + 0xC); /* 0x0061E54C: mov ecx, dword ptr [esi + 0xc] */
    edi = POP32_VAL(esp); /* 0x0061E54F: pop edi */
    eax = ecx + 0x1; /* 0x0061E550: lea eax, [ecx + 1] */
    MEM32(esi + 0xC) = eax; /* 0x0061E553: mov dword ptr [esi + 0xc], eax */
    esi = POP32_VAL(esp); /* 0x0061E556: pop esi */
    MEM8(ecx) = (uint8_t)(0x5Du); /* 0x0061E557: mov byte ptr [ecx], 0x5d */
    ebx = POP32_VAL(esp); /* 0x0061E55A: pop ebx */
    esp = ebp; /* 0x0061E55B: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x0061E55D: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 12; { RECOMP_REGS_OUT(); return; } /* 0x0061E55E: ret 8 */
    RECOMP_REGS_OUT();
}

void sub_0061E570(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0061E570u);

L_0061E570:
    PUSH32(esp, ebp); /* 0x0061E570: push ebp */
    ebp = esp; /* 0x0061E571: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xFFFFFFF8u);
    esp = esp & 0xFFFFFFF8u; /* 0x0061E573: and esp, 0xfffffff8 */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, 0xFFFFFFFFu); /* 0x0061E576: push -1 */
    PUSH32(esp, 0x007B6C48u); /* 0x0061E578: push 0x7b6c48 */
    eax = MEM32(FS_BASE + (0)); /* 0x0061E57D: mov eax, dword ptr fs:[0] */
    PUSH32(esp, eax); /* 0x0061E583: push eax */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x18u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x18u; /* 0x0061E584: sub esp, 0x18 */
    _flag_k = FK_CMP;
    PUSH32(esp, ebx); /* 0x0061E587: push ebx */
    PUSH32(esp, esi); /* 0x0061E588: push esi */
    PUSH32(esp, edi); /* 0x0061E589: push edi */
    eax = MEM32(0x855000); /* 0x0061E58A: mov eax, dword ptr [0x855000] */
    _flag_a = (uint32_t)((eax ^ esp)); _flag_b = (uint32_t)((eax ^ esp));
    eax = eax ^ esp; /* 0x0061E58F: xor eax, esp */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, eax); /* 0x0061E591: push eax */
    eax = esp + 0x28; /* 0x0061E592: lea eax, [esp + 0x28] */
    MEM32(FS_BASE + (0)) = eax; /* 0x0061E596: mov dword ptr fs:[0], eax */
    esi = ecx; /* 0x0061E59C: mov esi, ecx */
    MEM32(esp + 0x10) = esi; /* 0x0061E59E: mov dword ptr [esp + 0x10], esi */
    edi = MEM32(ebp + 0xC); /* 0x0061E5A2: mov edi, dword ptr [ebp + 0xc] */
    /* cmp MEM32(edi), 4 */ /* 0x0061E5A5: cmp dword ptr [edi], 4 */
    _flag_a = (uint32_t)(MEM32(edi)); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_0061E637; /* 0x0061E5A8: jne 0x61e637 */
L_0061E5AE:
    edx = MEM32(edi + 0x8); /* 0x0061E5AE: mov edx, dword ptr [edi + 8] */
    eax = MEM32(edx + 0x4); /* 0x0061E5B1: mov eax, dword ptr [edx + 4] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(edx));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - MEM32(edx); /* 0x0061E5B4: sub eax, dword ptr [edx] */
    _flag_k = FK_CMP;
    if (4u) _cf = (((eax) >> 3) & 1u); /* 0x0061E5B6: sar eax, 4 */
    if (4u) { _flag_a = recomp_flags_pack(((uint32_t)((int32_t)eax >> 4u)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = (uint32_t)((int32_t)eax >> 4u);
    /* test eax, eax */ /* 0x0061E5B9: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_0061E637; /* 0x0061E5BB: je 0x61e637 */
L_0061E5BD:
    eax = MEM32(edx + 0x4); /* 0x0061E5BD: mov eax, dword ptr [edx + 4] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(edx));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - MEM32(edx); /* 0x0061E5C0: sub eax, dword ptr [edx] */
    _flag_k = FK_CMP;
    if (4u) _cf = (((eax) >> 3) & 1u); /* 0x0061E5C2: sar eax, 4 */
    if (4u) { _flag_a = recomp_flags_pack(((uint32_t)((int32_t)eax >> 4u)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = (uint32_t)((int32_t)eax >> 4u);
    PUSH32(esp, eax); /* 0x0061E5C5: push eax */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x0061E5C6: push dword ptr [ebp + 8] */
    eax = MEM32(esi + 0x18); /* 0x0061E5C9: mov eax, dword ptr [esi + 0x18] */
    RECOMP_ICALL(eax); /* 0x0061E5CC: call eax */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 8; /* 0x0061E5CE: add esp, 8 */
    _flag_k = FK_ADD;
    ecx = edi; /* 0x0061E5D1: mov ecx, edi */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ebx = 0; /* 0x0061E5D3: xor ebx, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_005C6320); /* 0x0061E5D5: call 0x5c6320 */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x0061E5DA: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_0061E637; /* 0x0061E5DC: je 0x61e637 */
L_0061E5DE:
    edi = edi; /* 0x0061E5DE: mov edi, edi */
L_0061E5E0:
    PUSH32(esp, ebx); /* 0x0061E5E0: push ebx */
    eax = esp + 0x18; /* 0x0061E5E1: lea eax, [esp + 0x18] */
    ecx = edi; /* 0x0061E5E5: mov ecx, edi */
    PUSH32(esp, eax); /* 0x0061E5E7: push eax */
    RECOMP_CALL(sub_005C63F0); /* 0x0061E5E8: call 0x5c63f0 */
    RECOMP_FLAGS_IN();
    MEM32(esp + 0x30) = 0; /* 0x0061E5ED: mov dword ptr [esp + 0x30], 0 */
    ecx = MEM32(esi + 0xC); /* 0x0061E5F5: mov ecx, dword ptr [esi + 0xc] */
    PUSH32(esp, eax); /* 0x0061E5F8: push eax */
    eax = MEM32(esp + 0x14); /* 0x0061E5F9: mov eax, dword ptr [esp + 0x14] */
    PUSH32(esp, ebx); /* 0x0061E5FD: push ebx */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x0061E5FE: push dword ptr [ebp + 8] */
    esi = MEM32(ecx); /* 0x0061E601: mov esi, dword ptr [ecx] */
    eax = MEM32(eax + 0x14); /* 0x0061E603: mov eax, dword ptr [eax + 0x14] */
    RECOMP_ICALL(eax); /* 0x0061E606: call eax */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 8; /* 0x0061E608: add esp, 8 */
    _flag_k = FK_ADD;
    PUSH32(esp, eax); /* 0x0061E60B: push eax */
    eax = MEM32(esp + 0x18); /* 0x0061E60C: mov eax, dword ptr [esp + 0x18] */
    ecx = MEM32(eax + 0xC); /* 0x0061E610: mov ecx, dword ptr [eax + 0xc] */
    RECOMP_ICALL(MEM32(esi + 0xC)); /* 0x0061E613: call dword ptr [esi + 0xc] */
    RECOMP_FLAGS_IN();
    MEM32(esp + 0x30) = 0xFFFFFFFFu; /* 0x0061E616: mov dword ptr [esp + 0x30], 0xffffffff */
    ecx = esp + 0x14; /* 0x0061E61E: lea ecx, [esp + 0x14] */
    RECOMP_CALL(sub_005C6270); /* 0x0061E622: call 0x5c6270 */
    RECOMP_FLAGS_IN();
    ecx = edi; /* 0x0061E627: mov ecx, edi */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(1);
    ebx = ebx + 1; /* 0x0061E629: inc ebx */
    _flag_k = FK_INC;
    RECOMP_CALL(sub_005C6320); /* 0x0061E62A: call 0x5c6320 */
    RECOMP_FLAGS_IN();
    esi = MEM32(esp + 0x10); /* 0x0061E62F: mov esi, dword ptr [esp + 0x10] */
    /* cmp ebx, eax */ /* 0x0061E633: cmp ebx, eax */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_0061E5E0; /* 0x0061E635: jb 0x61e5e0 */
L_0061E637:
    ecx = MEM32(esp + 0x28); /* 0x0061E637: mov ecx, dword ptr [esp + 0x28] */
    MEM32(FS_BASE + (0)) = ecx; /* 0x0061E63B: mov dword ptr fs:[0], ecx */
    ecx = POP32_VAL(esp); /* 0x0061E642: pop ecx */
    edi = POP32_VAL(esp); /* 0x0061E643: pop edi */
    esi = POP32_VAL(esp); /* 0x0061E644: pop esi */
    ebx = POP32_VAL(esp); /* 0x0061E645: pop ebx */
    esp = ebp; /* 0x0061E646: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x0061E648: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 12; { RECOMP_REGS_OUT(); return; } /* 0x0061E649: ret 8 */
    RECOMP_REGS_OUT();
}

void sub_0061E650(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0061E650u);

L_0061E650:
    PUSH32(esp, ebp); /* 0x0061E650: push ebp */
    ebp = esp; /* 0x0061E651: mov ebp, esp */
    eax = MEM32(ebp + 0x8); /* 0x0061E653: mov eax, dword ptr [ebp + 8] */
    PUSH32(esp, esi); /* 0x0061E656: push esi */
    esi = MEM32(ebp + 0xC); /* 0x0061E657: mov esi, dword ptr [ebp + 0xc] */
    PUSH32(esp, ecx); /* 0x0061E65A: push ecx */
    SET_LO8(eax, MEM8(eax)); /* 0x0061E65B: mov al, byte ptr [eax] */
    MEM8(ebp + 0x8) = (uint8_t)(LO8(eax)); /* 0x0061E65D: mov byte ptr [ebp + 8], al */
    ecx = esi + 0x50; /* 0x0061E660: lea ecx, [esi + 0x50] */
    RECOMP_CALL(sub_0053D290); /* 0x0061E663: call 0x53d290 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x0061E668: push dword ptr [ebp + 8] */
    ecx = esi + 0x50; /* 0x0061E66B: lea ecx, [esi + 0x50] */
    RECOMP_CALL(sub_005449C0); /* 0x0061E66E: call 0x5449c0 */
    RECOMP_FLAGS_IN();
    esi = POP32_VAL(esp); /* 0x0061E673: pop esi */
    ebp = POP32_VAL(esp); /* 0x0061E674: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 12; { RECOMP_REGS_OUT(); return; } /* 0x0061E675: ret 8 */
    RECOMP_REGS_OUT();
}

void sub_0061E680(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0061E680u);

L_0061E680:
    PUSH32(esp, ebp); /* 0x0061E680: push ebp */
    ebp = esp; /* 0x0061E681: mov ebp, esp */
    eax = MEM32(ebp + 0xC); /* 0x0061E683: mov eax, dword ptr [ebp + 0xc] */
    /* cmp MEM32(eax), 1 */ /* 0x0061E686: cmp dword ptr [eax], 1 */
    _flag_a = (uint32_t)(MEM32(eax)); _flag_b = (uint32_t)(1);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_0061E697; /* 0x0061E689: jne 0x61e697 */
L_0061E68B:
    SET_LO8(ecx, MEM8(eax + 0x8)); /* 0x0061E68B: mov cl, byte ptr [eax + 8] */
    eax = MEM32(ebp + 0x8); /* 0x0061E68E: mov eax, dword ptr [ebp + 8] */
    MEM8(eax) = (uint8_t)(LO8(ecx)); /* 0x0061E691: mov byte ptr [eax], cl */
    ebp = POP32_VAL(esp); /* 0x0061E693: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 12; { RECOMP_REGS_OUT(); return; } /* 0x0061E694: ret 8 */
L_0061E697:
    eax = MEM32(ebp + 0x8); /* 0x0061E697: mov eax, dword ptr [ebp + 8] */
    _flag_a = (uint32_t)(0) << 24; _flag_b = (uint32_t)(0) << 24;
    SET_LO8(ecx, 0); /* 0x0061E69A: xor cl, cl */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    MEM8(eax) = (uint8_t)(LO8(ecx)); /* 0x0061E69C: mov byte ptr [eax], cl */
    ebp = POP32_VAL(esp); /* 0x0061E69E: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 12; { RECOMP_REGS_OUT(); return; } /* 0x0061E69F: ret 8 */
    RECOMP_REGS_OUT();
}

void sub_0061E6B0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0061E6B0u);

L_0061E6B0:
    PUSH32(esp, ebp); /* 0x0061E6B0: push ebp */
    ebp = esp; /* 0x0061E6B1: mov ebp, esp */
    PUSH32(esp, 0xFFFFFFFFu); /* 0x0061E6B3: push -1 */
    PUSH32(esp, 0x007B6C78u); /* 0x0061E6B5: push 0x7b6c78 */
    eax = MEM32(FS_BASE + (0)); /* 0x0061E6BA: mov eax, dword ptr fs:[0] */
    PUSH32(esp, eax); /* 0x0061E6C0: push eax */
    PUSH32(esp, ecx); /* 0x0061E6C1: push ecx */
    PUSH32(esp, esi); /* 0x0061E6C2: push esi */
    eax = MEM32(0x855000); /* 0x0061E6C3: mov eax, dword ptr [0x855000] */
    _flag_a = (uint32_t)((eax ^ ebp)); _flag_b = (uint32_t)((eax ^ ebp));
    eax = eax ^ ebp; /* 0x0061E6C8: xor eax, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, eax); /* 0x0061E6CA: push eax */
    eax = ebp + (-0xC); /* 0x0061E6CB: lea eax, [ebp - 0xc] */
    MEM32(FS_BASE + (0)) = eax; /* 0x0061E6CE: mov dword ptr fs:[0], eax */
    esi = ecx; /* 0x0061E6D4: mov esi, ecx */
    MEM32(ebp + (-0x10)) = esi; /* 0x0061E6D6: mov dword ptr [ebp - 0x10], esi */
    MEM32(ebp + (-0x4)) = 0xFFFFFFFFu; /* 0x0061E6D9: mov dword ptr [ebp - 4], 0xffffffff */
    /* test MEM8(ebp + 0x8), 1 */ /* 0x0061E6E0: test byte ptr [ebp + 8], 1 */
    _flag_a = (uint32_t)(MEM8(ebp + 0x8)) << 24; _flag_b = (uint32_t)(1) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    MEM32(esi) = 0x007F8E20u; /* 0x0061E6E4: mov dword ptr [esi], 0x7f8e20 */
    if (TEST_Z(_flag_a, _flag_b)) goto L_0061E6F6; /* 0x0061E6EA: je 0x61e6f6 */
L_0061E6EC:
    PUSH32(esp, esi); /* 0x0061E6EC: push esi */
    RECOMP_ICALL(MEM32(0x7CC694)); /* 0x0061E6ED: call dword ptr [0x7cc694] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x0061E6F3: add esp, 4 */
    _flag_k = FK_ADD;
L_0061E6F6:
    eax = esi; /* 0x0061E6F6: mov eax, esi */
    ecx = MEM32(ebp + (-0xC)); /* 0x0061E6F8: mov ecx, dword ptr [ebp - 0xc] */
    MEM32(FS_BASE + (0)) = ecx; /* 0x0061E6FB: mov dword ptr fs:[0], ecx */
    ecx = POP32_VAL(esp); /* 0x0061E702: pop ecx */
    esi = POP32_VAL(esp); /* 0x0061E703: pop esi */
    esp = ebp; /* 0x0061E704: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x0061E706: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x0061E707: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_0061E710(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0061E710u);

L_0061E710:
    PUSH32(esp, ebp); /* 0x0061E710: push ebp */
    ebp = esp; /* 0x0061E711: mov ebp, esp */
    PUSH32(esp, 0xFFFFFFFFu); /* 0x0061E713: push -1 */
    PUSH32(esp, 0x007B6CB8u); /* 0x0061E715: push 0x7b6cb8 */
    eax = MEM32(FS_BASE + (0)); /* 0x0061E71A: mov eax, dword ptr fs:[0] */
    PUSH32(esp, eax); /* 0x0061E720: push eax */
    eax = MEM32(0x855000); /* 0x0061E721: mov eax, dword ptr [0x855000] */
    _flag_a = (uint32_t)((eax ^ ebp)); _flag_b = (uint32_t)((eax ^ ebp));
    eax = eax ^ ebp; /* 0x0061E726: xor eax, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, eax); /* 0x0061E728: push eax */
    eax = ebp + (-0xC); /* 0x0061E729: lea eax, [ebp - 0xc] */
    MEM32(FS_BASE + (0)) = eax; /* 0x0061E72C: mov dword ptr fs:[0], eax */
    eax = MEM32(0x927C28); /* 0x0061E732: mov eax, dword ptr [0x927c28] */
    /* test LO8(eax), 1 */ /* 0x0061E737: test al, 1 */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(1) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_0061E78E; /* 0x0061E739: jne 0x61e78e */
L_0061E73B:
    _flag_a = (uint32_t)((eax | 1)); _flag_b = (uint32_t)((eax | 1));
    eax = eax | 1; /* 0x0061E73B: or eax, 1 */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(0x927C28) = eax; /* 0x0061E73E: mov dword ptr [0x927c28], eax */
    MEM32(ebp + (-0x4)) = 0; /* 0x0061E743: mov dword ptr [ebp - 4], 0 */
    MEM32(0x927BEC) = 0x007F8E20u; /* 0x0061E74A: mov dword ptr [0x927bec], 0x7f8e20 */
    MEM32(0x927BF0) = 0x007F8ECCu; /* 0x0061E754: mov dword ptr [0x927bf0], 0x7f8ecc */
    MEM32(0x927BF4) = 1; /* 0x0061E75E: mov dword ptr [0x927bf4], 1 */
    MEM8(ebp + (-0x4)) = (uint8_t)(1); /* 0x0061E768: mov byte ptr [ebp - 4], 1 */
    MEM32(0x927BEC) = 0x007F8DD0u; /* 0x0061E76C: mov dword ptr [0x927bec], 0x7f8dd0 */
    MEM8(ebp + (-0x4)) = (uint8_t)(0); /* 0x0061E776: mov byte ptr [ebp - 4], 0 */
    PUSH32(esp, 0x007CAA60u); /* 0x0061E77A: push 0x7caa60 */
    RECOMP_CALL(sub_0077F5B6); /* 0x0061E77F: call 0x77f5b6 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x0061E784: add esp, 4 */
    _flag_k = FK_ADD;
    MEM32(ebp + (-0x4)) = 0xFFFFFFFFu; /* 0x0061E787: mov dword ptr [ebp - 4], 0xffffffff */
L_0061E78E:
    eax = 0x00927BECu; /* 0x0061E78E: mov eax, 0x927bec */
    ecx = MEM32(ebp + (-0xC)); /* 0x0061E793: mov ecx, dword ptr [ebp - 0xc] */
    MEM32(FS_BASE + (0)) = ecx; /* 0x0061E796: mov dword ptr fs:[0], ecx */
    ecx = POP32_VAL(esp); /* 0x0061E79D: pop ecx */
    esp = ebp; /* 0x0061E79E: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x0061E7A0: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x0061E7A1: ret  */
    RECOMP_REGS_OUT();
}

void sub_0061E7B0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0061E7B0u);

L_0061E7B0:
    PUSH32(esp, ebp); /* 0x0061E7B0: push ebp */
    ebp = esp; /* 0x0061E7B1: mov ebp, esp */
    eax = MEM32(ebp + 0x8); /* 0x0061E7B3: mov eax, dword ptr [ebp + 8] */
    ecx = MEM32(ebp + 0xC); /* 0x0061E7B6: mov ecx, dword ptr [ebp + 0xc] */
    PUSH32(esp, MEM32(eax)); /* 0x0061E7B9: push dword ptr [eax] */
    RECOMP_CALL(sub_0061DE60); /* 0x0061E7BB: call 0x61de60 */
    RECOMP_FLAGS_IN();
    ebp = POP32_VAL(esp); /* 0x0061E7C0: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 12; { RECOMP_REGS_OUT(); return; } /* 0x0061E7C1: ret 8 */
    RECOMP_REGS_OUT();
}

void sub_0061E7D0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0061E7D0u);

L_0061E7D0:
    PUSH32(esp, ebp); /* 0x0061E7D0: push ebp */
    ebp = esp; /* 0x0061E7D1: mov ebp, esp */
    ecx = MEM32(ebp + 0xC); /* 0x0061E7D3: mov ecx, dword ptr [ebp + 0xc] */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 8; /* 0x0061E7D6: sub esp, 8 */
    _flag_k = FK_CMP;
    /* cmp MEM32(ecx), 2 */ /* 0x0061E7D9: cmp dword ptr [ecx], 2 */
    _flag_a = (uint32_t)(MEM32(ecx)); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_0061E800; /* 0x0061E7DC: jne 0x61e800 */
L_0061E7DE:
    eax = MEM32(ecx + 0x4); /* 0x0061E7DE: mov eax, dword ptr [ecx + 4] */
    if (3u) _cf = (((eax) >> 2) & 1u); /* 0x0061E7E1: sar eax, 3 */
    if (3u) { _flag_a = recomp_flags_pack(((uint32_t)((int32_t)eax >> 3u)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = (uint32_t)((int32_t)eax >> 3u);
    /* test LO8(eax), 1 */ /* 0x0061E7E4: test al, 1 */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(1) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_0061E800; /* 0x0061E7E6: je 0x61e800 */
L_0061E7E8:
    _xmm[0].u64[0] = MEM64(ecx + 0x8); _xmm[0].u64[1] = 0; /* 0x0061E7E8: movsd xmm0, qword ptr [ecx + 8] */
    RECOMP_CALL(sub_007805AF); /* 0x0061E7ED: call 0x7805af */
    RECOMP_FLAGS_IN();
    ecx = MEM32(ebp + 0x8); /* 0x0061E7F2: mov ecx, dword ptr [ebp + 8] */
    MEM32(ebp + (-0x4)) = edx; /* 0x0061E7F5: mov dword ptr [ebp - 4], edx */
    MEM32(ecx) = eax; /* 0x0061E7F8: mov dword ptr [ecx], eax */
    esp = ebp; /* 0x0061E7FA: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x0061E7FC: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 12; { RECOMP_REGS_OUT(); return; } /* 0x0061E7FD: ret 8 */
L_0061E800:
    ecx = MEM32(ebp + 0x8); /* 0x0061E800: mov ecx, dword ptr [ebp + 8] */
    { xmm_t _s = _xmm[0]; for (int _k = 0; _k < 4; _k++) _xmm[0].u32[_k] = _xmm[0].u32[_k] ^ _s.u32[_k]; } /* 0x0061E803: xorps xmm0, xmm0 */
    MEM64(ebp + (-0x8)) = _xmm[0].u64[0]; /* 0x0061E806: movlpd qword ptr [ebp - 8], xmm0 */
    eax = MEM32(ebp + (-0x8)); /* 0x0061E80B: mov eax, dword ptr [ebp - 8] */
    MEM32(ecx) = eax; /* 0x0061E80E: mov dword ptr [ecx], eax */
    esp = ebp; /* 0x0061E810: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x0061E812: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 12; { RECOMP_REGS_OUT(); return; } /* 0x0061E813: ret 8 */
    RECOMP_REGS_OUT();
}

void sub_0061E820(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0061E820u);

L_0061E820:
    PUSH32(esp, ebp); /* 0x0061E820: push ebp */
    ebp = esp; /* 0x0061E821: mov ebp, esp */
    PUSH32(esp, 0xFFFFFFFFu); /* 0x0061E823: push -1 */
    PUSH32(esp, 0x007B6D28u); /* 0x0061E825: push 0x7b6d28 */
    eax = MEM32(FS_BASE + (0)); /* 0x0061E82A: mov eax, dword ptr fs:[0] */
    PUSH32(esp, eax); /* 0x0061E830: push eax */
    eax = MEM32(0x855000); /* 0x0061E831: mov eax, dword ptr [0x855000] */
    _flag_a = (uint32_t)((eax ^ ebp)); _flag_b = (uint32_t)((eax ^ ebp));
    eax = eax ^ ebp; /* 0x0061E836: xor eax, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, eax); /* 0x0061E838: push eax */
    eax = ebp + (-0xC); /* 0x0061E839: lea eax, [ebp - 0xc] */
    MEM32(FS_BASE + (0)) = eax; /* 0x0061E83C: mov dword ptr fs:[0], eax */
    eax = MEM32(0x927C18); /* 0x0061E842: mov eax, dword ptr [0x927c18] */
    /* test LO8(eax), 1 */ /* 0x0061E847: test al, 1 */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(1) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_0061E89E; /* 0x0061E849: jne 0x61e89e */
L_0061E84B:
    _flag_a = (uint32_t)((eax | 1)); _flag_b = (uint32_t)((eax | 1));
    eax = eax | 1; /* 0x0061E84B: or eax, 1 */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(0x927C18) = eax; /* 0x0061E84E: mov dword ptr [0x927c18], eax */
    MEM32(ebp + (-0x4)) = 0; /* 0x0061E853: mov dword ptr [ebp - 4], 0 */
    MEM32(0x927C04) = 0x007F8E20u; /* 0x0061E85A: mov dword ptr [0x927c04], 0x7f8e20 */
    MEM32(0x927C08) = 0x007F8ED4u; /* 0x0061E864: mov dword ptr [0x927c08], 0x7f8ed4 */
    MEM32(0x927C0C) = 4; /* 0x0061E86E: mov dword ptr [0x927c0c], 4 */
    MEM8(ebp + (-0x4)) = (uint8_t)(1); /* 0x0061E878: mov byte ptr [ebp - 4], 1 */
    MEM32(0x927C04) = 0x007F8DE4u; /* 0x0061E87C: mov dword ptr [0x927c04], 0x7f8de4 */
    MEM8(ebp + (-0x4)) = (uint8_t)(0); /* 0x0061E886: mov byte ptr [ebp - 4], 0 */
    PUSH32(esp, 0x007CAAB0u); /* 0x0061E88A: push 0x7caab0 */
    RECOMP_CALL(sub_0077F5B6); /* 0x0061E88F: call 0x77f5b6 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x0061E894: add esp, 4 */
    _flag_k = FK_ADD;
    MEM32(ebp + (-0x4)) = 0xFFFFFFFFu; /* 0x0061E897: mov dword ptr [ebp - 4], 0xffffffff */
L_0061E89E:
    eax = 0x00927C04u; /* 0x0061E89E: mov eax, 0x927c04 */
    ecx = MEM32(ebp + (-0xC)); /* 0x0061E8A3: mov ecx, dword ptr [ebp - 0xc] */
    MEM32(FS_BASE + (0)) = ecx; /* 0x0061E8A6: mov dword ptr fs:[0], ecx */
    ecx = POP32_VAL(esp); /* 0x0061E8AD: pop ecx */
    esp = ebp; /* 0x0061E8AE: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x0061E8B0: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x0061E8B1: ret  */
    RECOMP_REGS_OUT();
}

void sub_0061E8C0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0061E8C0u);

L_0061E8C0:
    PUSH32(esp, ebp); /* 0x0061E8C0: push ebp */
    ebp = esp; /* 0x0061E8C1: mov ebp, esp */
    eax = MEM32(ebp + 0x8); /* 0x0061E8C3: mov eax, dword ptr [ebp + 8] */
    ecx = MEM32(ebp + 0xC); /* 0x0061E8C6: mov ecx, dword ptr [ebp + 0xc] */
    eax = (uint32_t)MEM8(eax); /* 0x0061E8C9: movzx eax, byte ptr [eax] */
    PUSH32(esp, eax); /* 0x0061E8CC: push eax */
    RECOMP_CALL(sub_0061DE60); /* 0x0061E8CD: call 0x61de60 */
    RECOMP_FLAGS_IN();
    ebp = POP32_VAL(esp); /* 0x0061E8D2: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 12; { RECOMP_REGS_OUT(); return; } /* 0x0061E8D3: ret 8 */
    RECOMP_REGS_OUT();
}

void sub_0061E8E0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0061E8E0u);

L_0061E8E0:
    PUSH32(esp, ebp); /* 0x0061E8E0: push ebp */
    ebp = esp; /* 0x0061E8E1: mov ebp, esp */
    ecx = MEM32(ebp + 0xC); /* 0x0061E8E3: mov ecx, dword ptr [ebp + 0xc] */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 8; /* 0x0061E8E6: sub esp, 8 */
    _flag_k = FK_CMP;
    /* cmp MEM32(ecx), 2 */ /* 0x0061E8E9: cmp dword ptr [ecx], 2 */
    _flag_a = (uint32_t)(MEM32(ecx)); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_0061E910; /* 0x0061E8EC: jne 0x61e910 */
L_0061E8EE:
    eax = MEM32(ecx + 0x4); /* 0x0061E8EE: mov eax, dword ptr [ecx + 4] */
    if (4u) _cf = (((eax) >> 3) & 1u); /* 0x0061E8F1: sar eax, 4 */
    if (4u) { _flag_a = recomp_flags_pack(((uint32_t)((int32_t)eax >> 4u)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = (uint32_t)((int32_t)eax >> 4u);
    /* test LO8(eax), 1 */ /* 0x0061E8F4: test al, 1 */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(1) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_0061E910; /* 0x0061E8F6: je 0x61e910 */
L_0061E8F8:
    _xmm[0].u64[0] = MEM64(ecx + 0x8); _xmm[0].u64[1] = 0; /* 0x0061E8F8: movsd xmm0, qword ptr [ecx + 8] */
    RECOMP_CALL(sub_007805A0); /* 0x0061E8FD: call 0x7805a0 */
    RECOMP_FLAGS_IN();
    ecx = MEM32(ebp + 0x8); /* 0x0061E902: mov ecx, dword ptr [ebp + 8] */
    MEM32(ebp + (-0x4)) = edx; /* 0x0061E905: mov dword ptr [ebp - 4], edx */
    MEM8(ecx) = (uint8_t)(LO8(eax)); /* 0x0061E908: mov byte ptr [ecx], al */
    esp = ebp; /* 0x0061E90A: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x0061E90C: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 12; { RECOMP_REGS_OUT(); return; } /* 0x0061E90D: ret 8 */
L_0061E910:
    ecx = MEM32(ebp + 0x8); /* 0x0061E910: mov ecx, dword ptr [ebp + 8] */
    { xmm_t _s = _xmm[0]; for (int _k = 0; _k < 4; _k++) _xmm[0].u32[_k] = _xmm[0].u32[_k] ^ _s.u32[_k]; } /* 0x0061E913: xorps xmm0, xmm0 */
    MEM64(ebp + (-0x8)) = _xmm[0].u64[0]; /* 0x0061E916: movlpd qword ptr [ebp - 8], xmm0 */
    SET_LO8(eax, MEM8(ebp + (-0x8))); /* 0x0061E91B: mov al, byte ptr [ebp - 8] */
    MEM8(ecx) = (uint8_t)(LO8(eax)); /* 0x0061E91E: mov byte ptr [ecx], al */
    esp = ebp; /* 0x0061E920: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x0061E922: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 12; { RECOMP_REGS_OUT(); return; } /* 0x0061E923: ret 8 */
    RECOMP_REGS_OUT();
}

void sub_0061E930(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0061E930u);

L_0061E930:
    PUSH32(esp, ebp); /* 0x0061E930: push ebp */
    ebp = esp; /* 0x0061E931: mov ebp, esp */
    PUSH32(esp, 0xFFFFFFFFu); /* 0x0061E933: push -1 */
    PUSH32(esp, 0x007B6D98u); /* 0x0061E935: push 0x7b6d98 */
    eax = MEM32(FS_BASE + (0)); /* 0x0061E93A: mov eax, dword ptr fs:[0] */
    PUSH32(esp, eax); /* 0x0061E940: push eax */
    eax = MEM32(0x855000); /* 0x0061E941: mov eax, dword ptr [0x855000] */
    _flag_a = (uint32_t)((eax ^ ebp)); _flag_b = (uint32_t)((eax ^ ebp));
    eax = eax ^ ebp; /* 0x0061E946: xor eax, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, eax); /* 0x0061E948: push eax */
    eax = ebp + (-0xC); /* 0x0061E949: lea eax, [ebp - 0xc] */
    MEM32(FS_BASE + (0)) = eax; /* 0x0061E94C: mov dword ptr fs:[0], eax */
    eax = MEM32(0x927C10); /* 0x0061E952: mov eax, dword ptr [0x927c10] */
    /* test LO8(eax), 1 */ /* 0x0061E957: test al, 1 */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(1) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_0061E9AE; /* 0x0061E959: jne 0x61e9ae */
L_0061E95B:
    _flag_a = (uint32_t)((eax | 1)); _flag_b = (uint32_t)((eax | 1));
    eax = eax | 1; /* 0x0061E95B: or eax, 1 */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(0x927C10) = eax; /* 0x0061E95E: mov dword ptr [0x927c10], eax */
    MEM32(ebp + (-0x4)) = 0; /* 0x0061E963: mov dword ptr [ebp - 4], 0 */
    MEM32(0x927BDC) = 0x007F8E20u; /* 0x0061E96A: mov dword ptr [0x927bdc], 0x7f8e20 */
    MEM32(0x927BE0) = 0x007F8ED8u; /* 0x0061E974: mov dword ptr [0x927be0], 0x7f8ed8 */
    MEM32(0x927BE4) = 1; /* 0x0061E97E: mov dword ptr [0x927be4], 1 */
    MEM8(ebp + (-0x4)) = (uint8_t)(1); /* 0x0061E988: mov byte ptr [ebp - 4], 1 */
    MEM32(0x927BDC) = 0x007F8DBCu; /* 0x0061E98C: mov dword ptr [0x927bdc], 0x7f8dbc */
    MEM8(ebp + (-0x4)) = (uint8_t)(0); /* 0x0061E996: mov byte ptr [ebp - 4], 0 */
    PUSH32(esp, 0x007CAB00u); /* 0x0061E99A: push 0x7cab00 */
    RECOMP_CALL(sub_0077F5B6); /* 0x0061E99F: call 0x77f5b6 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x0061E9A4: add esp, 4 */
    _flag_k = FK_ADD;
    MEM32(ebp + (-0x4)) = 0xFFFFFFFFu; /* 0x0061E9A7: mov dword ptr [ebp - 4], 0xffffffff */
L_0061E9AE:
    eax = 0x00927BDCu; /* 0x0061E9AE: mov eax, 0x927bdc */
    ecx = MEM32(ebp + (-0xC)); /* 0x0061E9B3: mov ecx, dword ptr [ebp - 0xc] */
    MEM32(FS_BASE + (0)) = ecx; /* 0x0061E9B6: mov dword ptr fs:[0], ecx */
    ecx = POP32_VAL(esp); /* 0x0061E9BD: pop ecx */
    esp = ebp; /* 0x0061E9BE: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x0061E9C0: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x0061E9C1: ret  */
    RECOMP_REGS_OUT();
}

void sub_0061E9D0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0061E9D0u);

L_0061E9D0:
    PUSH32(esp, ebp); /* 0x0061E9D0: push ebp */
    ebp = esp; /* 0x0061E9D1: mov ebp, esp */
    ecx = MEM32(ebp + 0xC); /* 0x0061E9D3: mov ecx, dword ptr [ebp + 0xc] */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 8; /* 0x0061E9D6: sub esp, 8 */
    _flag_k = FK_CMP;
    /* cmp MEM32(ecx), 2 */ /* 0x0061E9D9: cmp dword ptr [ecx], 2 */
    _flag_a = (uint32_t)(MEM32(ecx)); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_0061EA00; /* 0x0061E9DC: jne 0x61ea00 */
L_0061E9DE:
    eax = MEM32(ecx + 0x4); /* 0x0061E9DE: mov eax, dword ptr [ecx + 4] */
    if (4u) _cf = (((eax) >> 3) & 1u); /* 0x0061E9E1: sar eax, 4 */
    if (4u) { _flag_a = recomp_flags_pack(((uint32_t)((int32_t)eax >> 4u)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = (uint32_t)((int32_t)eax >> 4u);
    /* test LO8(eax), 1 */ /* 0x0061E9E4: test al, 1 */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(1) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_0061EA00; /* 0x0061E9E6: je 0x61ea00 */
L_0061E9E8:
    _xmm[0].u64[0] = MEM64(ecx + 0x8); _xmm[0].u64[1] = 0; /* 0x0061E9E8: movsd xmm0, qword ptr [ecx + 8] */
    RECOMP_CALL(sub_007805A0); /* 0x0061E9ED: call 0x7805a0 */
    RECOMP_FLAGS_IN();
    ecx = MEM32(ebp + 0x8); /* 0x0061E9F2: mov ecx, dword ptr [ebp + 8] */
    MEM32(ebp + (-0x4)) = edx; /* 0x0061E9F5: mov dword ptr [ebp - 4], edx */
    MEM32(ecx) = eax; /* 0x0061E9F8: mov dword ptr [ecx], eax */
    esp = ebp; /* 0x0061E9FA: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x0061E9FC: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 12; { RECOMP_REGS_OUT(); return; } /* 0x0061E9FD: ret 8 */
L_0061EA00:
    ecx = MEM32(ebp + 0x8); /* 0x0061EA00: mov ecx, dword ptr [ebp + 8] */
    { xmm_t _s = _xmm[0]; for (int _k = 0; _k < 4; _k++) _xmm[0].u32[_k] = _xmm[0].u32[_k] ^ _s.u32[_k]; } /* 0x0061EA03: xorps xmm0, xmm0 */
    MEM64(ebp + (-0x8)) = _xmm[0].u64[0]; /* 0x0061EA06: movlpd qword ptr [ebp - 8], xmm0 */
    eax = MEM32(ebp + (-0x8)); /* 0x0061EA0B: mov eax, dword ptr [ebp - 8] */
    MEM32(ecx) = eax; /* 0x0061EA0E: mov dword ptr [ecx], eax */
    esp = ebp; /* 0x0061EA10: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x0061EA12: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 12; { RECOMP_REGS_OUT(); return; } /* 0x0061EA13: ret 8 */
    RECOMP_REGS_OUT();
}

void sub_0061EA20(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0061EA20u);

L_0061EA20:
    PUSH32(esp, ebp); /* 0x0061EA20: push ebp */
    ebp = esp; /* 0x0061EA21: mov ebp, esp */
    PUSH32(esp, 0xFFFFFFFFu); /* 0x0061EA23: push -1 */
    PUSH32(esp, 0x007B6E08u); /* 0x0061EA25: push 0x7b6e08 */
    eax = MEM32(FS_BASE + (0)); /* 0x0061EA2A: mov eax, dword ptr fs:[0] */
    PUSH32(esp, eax); /* 0x0061EA30: push eax */
    eax = MEM32(0x855000); /* 0x0061EA31: mov eax, dword ptr [0x855000] */
    _flag_a = (uint32_t)((eax ^ ebp)); _flag_b = (uint32_t)((eax ^ ebp));
    eax = eax ^ ebp; /* 0x0061EA36: xor eax, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, eax); /* 0x0061EA38: push eax */
    eax = ebp + (-0xC); /* 0x0061EA39: lea eax, [ebp - 0xc] */
    MEM32(FS_BASE + (0)) = eax; /* 0x0061EA3C: mov dword ptr fs:[0], eax */
    eax = MEM32(0x927C14); /* 0x0061EA42: mov eax, dword ptr [0x927c14] */
    /* test LO8(eax), 1 */ /* 0x0061EA47: test al, 1 */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(1) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_0061EA9E; /* 0x0061EA49: jne 0x61ea9e */
L_0061EA4B:
    _flag_a = (uint32_t)((eax | 1)); _flag_b = (uint32_t)((eax | 1));
    eax = eax | 1; /* 0x0061EA4B: or eax, 1 */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(0x927C14) = eax; /* 0x0061EA4E: mov dword ptr [0x927c14], eax */
    MEM32(ebp + (-0x4)) = 0; /* 0x0061EA53: mov dword ptr [ebp - 4], 0 */
    MEM32(0x927BF8) = 0x007F8E20u; /* 0x0061EA5A: mov dword ptr [0x927bf8], 0x7f8e20 */
    MEM32(0x927BFC) = 0x007F8EE0u; /* 0x0061EA64: mov dword ptr [0x927bfc], 0x7f8ee0 */
    MEM32(0x927C00) = 4; /* 0x0061EA6E: mov dword ptr [0x927c00], 4 */
    MEM8(ebp + (-0x4)) = (uint8_t)(1); /* 0x0061EA78: mov byte ptr [ebp - 4], 1 */
    MEM32(0x927BF8) = 0x007F8E0Cu; /* 0x0061EA7C: mov dword ptr [0x927bf8], 0x7f8e0c */
    MEM8(ebp + (-0x4)) = (uint8_t)(0); /* 0x0061EA86: mov byte ptr [ebp - 4], 0 */
    PUSH32(esp, 0x007CAB50u); /* 0x0061EA8A: push 0x7cab50 */
    RECOMP_CALL(sub_0077F5B6); /* 0x0061EA8F: call 0x77f5b6 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x0061EA94: add esp, 4 */
    _flag_k = FK_ADD;
    MEM32(ebp + (-0x4)) = 0xFFFFFFFFu; /* 0x0061EA97: mov dword ptr [ebp - 4], 0xffffffff */
L_0061EA9E:
    eax = 0x00927BF8u; /* 0x0061EA9E: mov eax, 0x927bf8 */
    ecx = MEM32(ebp + (-0xC)); /* 0x0061EAA3: mov ecx, dword ptr [ebp - 0xc] */
    MEM32(FS_BASE + (0)) = ecx; /* 0x0061EAA6: mov dword ptr fs:[0], ecx */
    ecx = POP32_VAL(esp); /* 0x0061EAAD: pop ecx */
    esp = ebp; /* 0x0061EAAE: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x0061EAB0: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x0061EAB1: ret  */
    RECOMP_REGS_OUT();
}

void sub_0061EAC0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0061EAC0u);

L_0061EAC0:
    PUSH32(esp, ebp); /* 0x0061EAC0: push ebp */
    ebp = esp; /* 0x0061EAC1: mov ebp, esp */
    PUSH32(esp, ebx); /* 0x0061EAC3: push ebx */
    PUSH32(esp, esi); /* 0x0061EAC4: push esi */
    PUSH32(esp, edi); /* 0x0061EAC5: push edi */
    edi = MEM32(ebp + 0x8); /* 0x0061EAC6: mov edi, dword ptr [ebp + 8] */
    /* cmp MEM32(edi + 0x14), 0x10u */ /* 0x0061EAC9: cmp dword ptr [edi + 0x14], 0x10 */
    _flag_a = (uint32_t)(MEM32(edi + 0x14)); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_B(_flag_a, _flag_b)) goto L_0061EAD1; /* 0x0061EACD: jb 0x61ead1 */
L_0061EACF:
    edi = MEM32(edi); /* 0x0061EACF: mov edi, dword ptr [edi] */
L_0061EAD1:
    /* cmp MEM8(edi), 0 */ /* 0x0061EAD1: cmp byte ptr [edi], 0 */
    _flag_a = (uint32_t)(MEM8(edi)) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    esi = edi; /* 0x0061EAD4: mov esi, edi */
    ebx = MEM32(ebp + 0xC); /* 0x0061EAD6: mov ebx, dword ptr [ebp + 0xc] */
    if (CMP_EQ(_flag_a, _flag_b)) goto L_0061EAE6; /* 0x0061EAD9: je 0x61eae6 */
L_0061EADB:
    goto L_0061EAE0; /* 0x0061EADB: jmp 0x61eae0 */
L_0061EAE0:
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi + 1; /* 0x0061EAE0: inc esi */
    _flag_k = FK_INC;
    /* cmp MEM8(esi), 0 */ /* 0x0061EAE1: cmp byte ptr [esi], 0 */
    _flag_a = (uint32_t)(MEM8(esi)) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    RECOMP_BACKEDGE();
    if (CMP_NE(_flag_a, _flag_b)) goto L_0061EAE0; /* 0x0061EAE4: jne 0x61eae0 */
L_0061EAE6:
    PUSH32(esp, ecx); /* 0x0061EAE6: push ecx */
    ecx = ebx + 0x50; /* 0x0061EAE7: lea ecx, [ebx + 0x50] */
    RECOMP_CALL(sub_0053D290); /* 0x0061EAEA: call 0x53d290 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esi = esi - edi; /* 0x0061EAEF: sub esi, edi */
    _flag_k = FK_CMP;
    ecx = ebx + 0x50; /* 0x0061EAF1: lea ecx, [ebx + 0x50] */
    PUSH32(esp, esi); /* 0x0061EAF4: push esi */
    PUSH32(esp, edi); /* 0x0061EAF5: push edi */
    RECOMP_CALL(sub_0053D3C0); /* 0x0061EAF6: call 0x53d3c0 */
    RECOMP_FLAGS_IN();
    edi = POP32_VAL(esp); /* 0x0061EAFB: pop edi */
    esi = POP32_VAL(esp); /* 0x0061EAFC: pop esi */
    ebx = POP32_VAL(esp); /* 0x0061EAFD: pop ebx */
    ebp = POP32_VAL(esp); /* 0x0061EAFE: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 12; { RECOMP_REGS_OUT(); return; } /* 0x0061EAFF: ret 8 */
    RECOMP_REGS_OUT();
}

void sub_0061EB10(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0061EB10u);

L_0061EB10:
    PUSH32(esp, ebp); /* 0x0061EB10: push ebp */
    ebp = esp; /* 0x0061EB11: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xFFFFFFF8u);
    esp = esp & 0xFFFFFFF8u; /* 0x0061EB13: and esp, 0xfffffff8 */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, 0xFFFFFFFFu); /* 0x0061EB16: push -1 */
    PUSH32(esp, 0x00794668u); /* 0x0061EB18: push 0x794668 */
    eax = MEM32(FS_BASE + (0)); /* 0x0061EB1D: mov eax, dword ptr fs:[0] */
    PUSH32(esp, eax); /* 0x0061EB23: push eax */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x24u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x24u; /* 0x0061EB24: sub esp, 0x24 */
    _flag_k = FK_CMP;
    eax = MEM32(0x855000); /* 0x0061EB27: mov eax, dword ptr [0x855000] */
    _flag_a = (uint32_t)((eax ^ esp)); _flag_b = (uint32_t)((eax ^ esp));
    eax = eax ^ esp; /* 0x0061EB2C: xor eax, esp */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(esp + 0x1C) = eax; /* 0x0061EB2E: mov dword ptr [esp + 0x1c], eax */
    PUSH32(esp, ebx); /* 0x0061EB32: push ebx */
    PUSH32(esp, esi); /* 0x0061EB33: push esi */
    eax = MEM32(0x855000); /* 0x0061EB34: mov eax, dword ptr [0x855000] */
    _flag_a = (uint32_t)((eax ^ esp)); _flag_b = (uint32_t)((eax ^ esp));
    eax = eax ^ esp; /* 0x0061EB39: xor eax, esp */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, eax); /* 0x0061EB3B: push eax */
    eax = esp + 0x30; /* 0x0061EB3C: lea eax, [esp + 0x30] */
    MEM32(FS_BASE + (0)) = eax; /* 0x0061EB40: mov dword ptr fs:[0], eax */
    ecx = MEM32(ebp + 0xC); /* 0x0061EB46: mov ecx, dword ptr [ebp + 0xc] */
    eax = esp + 0x10; /* 0x0061EB49: lea eax, [esp + 0x10] */
    esi = MEM32(ebp + 0x8); /* 0x0061EB4D: mov esi, dword ptr [ebp + 8] */
    PUSH32(esp, eax); /* 0x0061EB50: push eax */
    RECOMP_CALL(sub_0061DBF0); /* 0x0061EB51: call 0x61dbf0 */
    RECOMP_FLAGS_IN();
    ebx = eax; /* 0x0061EB56: mov ebx, eax */
    MEM32(esp + 0x38) = 0; /* 0x0061EB58: mov dword ptr [esp + 0x38], 0 */
    /* cmp esi, ebx */ /* 0x0061EB60: cmp esi, ebx */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_0061EB8E; /* 0x0061EB62: je 0x61eb8e */
L_0061EB64:
    /* cmp MEM32(esi + 0x14), 0x10u */ /* 0x0061EB64: cmp dword ptr [esi + 0x14], 0x10 */
    _flag_a = (uint32_t)(MEM32(esi + 0x14)); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_B(_flag_a, _flag_b)) goto L_0061EB75; /* 0x0061EB68: jb 0x61eb75 */
L_0061EB6A:
    PUSH32(esp, MEM32(esi)); /* 0x0061EB6A: push dword ptr [esi] */
    RECOMP_ICALL(MEM32(0x7CC694)); /* 0x0061EB6C: call dword ptr [0x7cc694] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x0061EB72: add esp, 4 */
    _flag_k = FK_ADD;
L_0061EB75:
    MEM32(esi + 0x14) = 0xFu; /* 0x0061EB75: mov dword ptr [esi + 0x14], 0xf */
    ecx = esi; /* 0x0061EB7C: mov ecx, esi */
    MEM32(esi + 0x10) = 0; /* 0x0061EB7E: mov dword ptr [esi + 0x10], 0 */
    PUSH32(esp, ebx); /* 0x0061EB85: push ebx */
    MEM8(esi) = (uint8_t)(0); /* 0x0061EB86: mov byte ptr [esi], 0 */
    RECOMP_CALL(sub_00419890); /* 0x0061EB89: call 0x419890 */
    RECOMP_FLAGS_IN();
L_0061EB8E:
    MEM32(esp + 0x38) = 0xFFFFFFFFu; /* 0x0061EB8E: mov dword ptr [esp + 0x38], 0xffffffff */
    /* cmp MEM32(esp + 0x24), 0x10u */ /* 0x0061EB96: cmp dword ptr [esp + 0x24], 0x10 */
    _flag_a = (uint32_t)(MEM32(esp + 0x24)); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_B(_flag_a, _flag_b)) goto L_0061EBAA; /* 0x0061EB9B: jb 0x61ebaa */
L_0061EB9D:
    PUSH32(esp, MEM32(esp + 0x10)); /* 0x0061EB9D: push dword ptr [esp + 0x10] */
    RECOMP_ICALL(MEM32(0x7CC694)); /* 0x0061EBA1: call dword ptr [0x7cc694] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x0061EBA7: add esp, 4 */
    _flag_k = FK_ADD;
L_0061EBAA:
    MEM32(esp + 0x24) = 0xFu; /* 0x0061EBAA: mov dword ptr [esp + 0x24], 0xf */
    MEM32(esp + 0x20) = 0; /* 0x0061EBB2: mov dword ptr [esp + 0x20], 0 */
    MEM8(esp + 0x10) = (uint8_t)(0); /* 0x0061EBBA: mov byte ptr [esp + 0x10], 0 */
    ecx = MEM32(esp + 0x30); /* 0x0061EBBF: mov ecx, dword ptr [esp + 0x30] */
    MEM32(FS_BASE + (0)) = ecx; /* 0x0061EBC3: mov dword ptr fs:[0], ecx */
    ecx = POP32_VAL(esp); /* 0x0061EBCA: pop ecx */
    esi = POP32_VAL(esp); /* 0x0061EBCB: pop esi */
    ebx = POP32_VAL(esp); /* 0x0061EBCC: pop ebx */
    ecx = MEM32(esp + 0x1C); /* 0x0061EBCD: mov ecx, dword ptr [esp + 0x1c] */
    _flag_a = (uint32_t)((ecx ^ esp)); _flag_b = (uint32_t)((ecx ^ esp));
    ecx = ecx ^ esp; /* 0x0061EBD1: xor ecx, esp */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_0077F4C2); /* 0x0061EBD3: call 0x77f4c2 */
    RECOMP_FLAGS_IN();
    esp = ebp; /* 0x0061EBD8: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x0061EBDA: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 12; { RECOMP_REGS_OUT(); return; } /* 0x0061EBDB: ret 8 */
    RECOMP_REGS_OUT();
}

void sub_0061EBE0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0061EBE0u);

L_0061EBE0:
    PUSH32(esp, ebp); /* 0x0061EBE0: push ebp */
    ebp = esp; /* 0x0061EBE1: mov ebp, esp */
    PUSH32(esp, 0xFFFFFFFFu); /* 0x0061EBE3: push -1 */
    PUSH32(esp, 0x007B6E78u); /* 0x0061EBE5: push 0x7b6e78 */
    eax = MEM32(FS_BASE + (0)); /* 0x0061EBEA: mov eax, dword ptr fs:[0] */
    PUSH32(esp, eax); /* 0x0061EBF0: push eax */
    eax = MEM32(0x855000); /* 0x0061EBF1: mov eax, dword ptr [0x855000] */
    _flag_a = (uint32_t)((eax ^ ebp)); _flag_b = (uint32_t)((eax ^ ebp));
    eax = eax ^ ebp; /* 0x0061EBF6: xor eax, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, eax); /* 0x0061EBF8: push eax */
    eax = ebp + (-0xC); /* 0x0061EBF9: lea eax, [ebp - 0xc] */
    MEM32(FS_BASE + (0)) = eax; /* 0x0061EBFC: mov dword ptr fs:[0], eax */
    eax = MEM32(0x927C2C); /* 0x0061EC02: mov eax, dword ptr [0x927c2c] */
    /* test LO8(eax), 1 */ /* 0x0061EC07: test al, 1 */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(1) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_0061EC5E; /* 0x0061EC09: jne 0x61ec5e */
L_0061EC0B:
    _flag_a = (uint32_t)((eax | 1)); _flag_b = (uint32_t)((eax | 1));
    eax = eax | 1; /* 0x0061EC0B: or eax, 1 */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(0x927C2C) = eax; /* 0x0061EC0E: mov dword ptr [0x927c2c], eax */
    MEM32(ebp + (-0x4)) = 0; /* 0x0061EC13: mov dword ptr [ebp - 4], 0 */
    MEM32(0x927C1C) = 0x007F8E20u; /* 0x0061EC1A: mov dword ptr [0x927c1c], 0x7f8e20 */
    MEM32(0x927C20) = 0x007F8EECu; /* 0x0061EC24: mov dword ptr [0x927c20], 0x7f8eec */
    MEM32(0x927C24) = 0x18u; /* 0x0061EC2E: mov dword ptr [0x927c24], 0x18 */
    MEM8(ebp + (-0x4)) = (uint8_t)(1); /* 0x0061EC38: mov byte ptr [ebp - 4], 1 */
    MEM32(0x927C1C) = 0x007F8DF8u; /* 0x0061EC3C: mov dword ptr [0x927c1c], 0x7f8df8 */
    MEM8(ebp + (-0x4)) = (uint8_t)(0); /* 0x0061EC46: mov byte ptr [ebp - 4], 0 */
    PUSH32(esp, 0x007CABA0u); /* 0x0061EC4A: push 0x7caba0 */
    RECOMP_CALL(sub_0077F5B6); /* 0x0061EC4F: call 0x77f5b6 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x0061EC54: add esp, 4 */
    _flag_k = FK_ADD;
    MEM32(ebp + (-0x4)) = 0xFFFFFFFFu; /* 0x0061EC57: mov dword ptr [ebp - 4], 0xffffffff */
L_0061EC5E:
    eax = 0x00927C1Cu; /* 0x0061EC5E: mov eax, 0x927c1c */
    ecx = MEM32(ebp + (-0xC)); /* 0x0061EC63: mov ecx, dword ptr [ebp - 0xc] */
    MEM32(FS_BASE + (0)) = ecx; /* 0x0061EC66: mov dword ptr fs:[0], ecx */
    ecx = POP32_VAL(esp); /* 0x0061EC6D: pop ecx */
    esp = ebp; /* 0x0061EC6E: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x0061EC70: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x0061EC71: ret  */
    RECOMP_REGS_OUT();
}

void sub_0061EC80(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0061EC80u);

L_0061EC80:
    PUSH32(esp, ebp); /* 0x0061EC80: push ebp */
    ebp = esp; /* 0x0061EC81: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xFFFFFFF8u);
    esp = esp & 0xFFFFFFF8u; /* 0x0061EC83: and esp, 0xfffffff8 */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, ecx); /* 0x0061EC86: push ecx */
    eax = MEM32(ebp + 0x8); /* 0x0061EC87: mov eax, dword ptr [ebp + 8] */
    PUSH32(esp, esi); /* 0x0061EC8A: push esi */
    esi = MEM32(ebp + 0xC); /* 0x0061EC8B: mov esi, dword ptr [ebp + 0xc] */
    PUSH32(esp, ecx); /* 0x0061EC8E: push ecx */
    _xmm[0].u64[0] = MEM32(eax); _xmm[0].u64[1] = 0; /* 0x0061EC8F: movss xmm0, dword ptr [eax] */
    MEM32(esp + 0x8) = _xmm[0].u32[0]; /* 0x0061EC93: movss dword ptr [esp + 8], xmm0 */
    ecx = esi + 0x50; /* 0x0061EC99: lea ecx, [esi + 0x50] */
    RECOMP_CALL(sub_0053D290); /* 0x0061EC9C: call 0x53d290 */
    RECOMP_FLAGS_IN();
    _xmm[0].u64[0] = MEM32(esp + 0x4); _xmm[0].u64[1] = 0; /* 0x0061ECA1: movss xmm0, dword ptr [esp + 4] */
    ecx = esi + 0x50; /* 0x0061ECA7: lea ecx, [esi + 0x50] */
    { float _a = _xmm[0].f32[0], _b = _xmm[0].f32[1]; _xmm[1].f64[0] = _a; _xmm[1].f64[1] = _b; } /* 0x0061ECAA: cvtps2pd xmm1, xmm0 */
    RECOMP_CALL(sub_0060EC20); /* 0x0061ECAD: call 0x60ec20 */
    RECOMP_FLAGS_IN();
    esi = POP32_VAL(esp); /* 0x0061ECB2: pop esi */
    esp = ebp; /* 0x0061ECB3: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x0061ECB5: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 12; { RECOMP_REGS_OUT(); return; } /* 0x0061ECB6: ret 8 */
    RECOMP_REGS_OUT();
}

void sub_0061ECC0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0061ECC0u);

L_0061ECC0:
    PUSH32(esp, ebp); /* 0x0061ECC0: push ebp */
    ebp = esp; /* 0x0061ECC1: mov ebp, esp */
    ecx = MEM32(ebp + 0xC); /* 0x0061ECC3: mov ecx, dword ptr [ebp + 0xc] */
    /* cmp MEM32(ecx), 2 */ /* 0x0061ECC6: cmp dword ptr [ecx], 2 */
    _flag_a = (uint32_t)(MEM32(ecx)); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_0061ECE9; /* 0x0061ECC9: jne 0x61ece9 */
L_0061ECCB:
    eax = MEM32(ecx + 0x4); /* 0x0061ECCB: mov eax, dword ptr [ecx + 4] */
    if (6u) _cf = (((eax) >> 5) & 1u); /* 0x0061ECCE: sar eax, 6 */
    if (6u) { _flag_a = recomp_flags_pack(((uint32_t)((int32_t)eax >> 6u)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = (uint32_t)((int32_t)eax >> 6u);
    /* test LO8(eax), 1 */ /* 0x0061ECD1: test al, 1 */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(1) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_0061ECE9; /* 0x0061ECD3: je 0x61ece9 */
L_0061ECD5:
    _xmm[0].u64[0] = MEM64(ecx + 0x8); _xmm[0].u64[1] = 0; /* 0x0061ECD5: movsd xmm0, qword ptr [ecx + 8] */
    eax = MEM32(ebp + 0x8); /* 0x0061ECDA: mov eax, dword ptr [ebp + 8] */
    { xmm_t _s = _xmm[0]; _xmm[0].f32[0] = (float)_s.f64[0]; _xmm[0].f32[1] = (float)_s.f64[1]; _xmm[0].u64[1] = 0; } /* 0x0061ECDD: cvtpd2ps xmm0, xmm0 */
    MEM32(eax) = _xmm[0].u32[0]; /* 0x0061ECE1: movss dword ptr [eax], xmm0 */
    ebp = POP32_VAL(esp); /* 0x0061ECE5: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 12; { RECOMP_REGS_OUT(); return; } /* 0x0061ECE6: ret 8 */
L_0061ECE9:
    eax = MEM32(ebp + 0x8); /* 0x0061ECE9: mov eax, dword ptr [ebp + 8] */
    { xmm_t _s = _xmm[0]; for (int _k = 0; _k < 4; _k++) _xmm[0].u32[_k] = _xmm[0].u32[_k] ^ _s.u32[_k]; } /* 0x0061ECEC: xorps xmm0, xmm0 */
    { xmm_t _s = _xmm[0]; _xmm[0].f32[0] = (float)_s.f64[0]; _xmm[0].f32[1] = (float)_s.f64[1]; _xmm[0].u64[1] = 0; } /* 0x0061ECEF: cvtpd2ps xmm0, xmm0 */
    MEM32(eax) = _xmm[0].u32[0]; /* 0x0061ECF3: movss dword ptr [eax], xmm0 */
    ebp = POP32_VAL(esp); /* 0x0061ECF7: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 12; { RECOMP_REGS_OUT(); return; } /* 0x0061ECF8: ret 8 */
    RECOMP_REGS_OUT();
}

void sub_0061ED00(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0061ED00u);

L_0061ED00:
    PUSH32(esp, ebp); /* 0x0061ED00: push ebp */
    ebp = esp; /* 0x0061ED01: mov ebp, esp */
    PUSH32(esp, 0xFFFFFFFFu); /* 0x0061ED03: push -1 */
    PUSH32(esp, 0x007B6EE8u); /* 0x0061ED05: push 0x7b6ee8 */
    eax = MEM32(FS_BASE + (0)); /* 0x0061ED0A: mov eax, dword ptr fs:[0] */
    PUSH32(esp, eax); /* 0x0061ED10: push eax */
    eax = MEM32(0x855000); /* 0x0061ED11: mov eax, dword ptr [0x855000] */
    _flag_a = (uint32_t)((eax ^ ebp)); _flag_b = (uint32_t)((eax ^ ebp));
    eax = eax ^ ebp; /* 0x0061ED16: xor eax, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, eax); /* 0x0061ED18: push eax */
    eax = ebp + (-0xC); /* 0x0061ED19: lea eax, [ebp - 0xc] */
    MEM32(FS_BASE + (0)) = eax; /* 0x0061ED1C: mov dword ptr fs:[0], eax */
    eax = MEM32(0x927BE8); /* 0x0061ED22: mov eax, dword ptr [0x927be8] */
    /* test LO8(eax), 1 */ /* 0x0061ED27: test al, 1 */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(1) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_0061ED7E; /* 0x0061ED29: jne 0x61ed7e */
L_0061ED2B:
    _flag_a = (uint32_t)((eax | 1)); _flag_b = (uint32_t)((eax | 1));
    eax = eax | 1; /* 0x0061ED2B: or eax, 1 */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(0x927BE8) = eax; /* 0x0061ED2E: mov dword ptr [0x927be8], eax */
    MEM32(ebp + (-0x4)) = 0; /* 0x0061ED33: mov dword ptr [ebp - 4], 0 */
    MEM32(0x927C30) = 0x007F8E20u; /* 0x0061ED3A: mov dword ptr [0x927c30], 0x7f8e20 */
    MEM32(0x927C34) = 0x007F8EF8u; /* 0x0061ED44: mov dword ptr [0x927c34], 0x7f8ef8 */
    MEM32(0x927C38) = 4; /* 0x0061ED4E: mov dword ptr [0x927c38], 4 */
    MEM8(ebp + (-0x4)) = (uint8_t)(1); /* 0x0061ED58: mov byte ptr [ebp - 4], 1 */
    MEM32(0x927C30) = 0x007F8E5Cu; /* 0x0061ED5C: mov dword ptr [0x927c30], 0x7f8e5c */
    MEM8(ebp + (-0x4)) = (uint8_t)(0); /* 0x0061ED66: mov byte ptr [ebp - 4], 0 */
    PUSH32(esp, 0x007CABF0u); /* 0x0061ED6A: push 0x7cabf0 */
    RECOMP_CALL(sub_0077F5B6); /* 0x0061ED6F: call 0x77f5b6 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x0061ED74: add esp, 4 */
    _flag_k = FK_ADD;
    MEM32(ebp + (-0x4)) = 0xFFFFFFFFu; /* 0x0061ED77: mov dword ptr [ebp - 4], 0xffffffff */
L_0061ED7E:
    eax = 0x00927C30u; /* 0x0061ED7E: mov eax, 0x927c30 */
    ecx = MEM32(ebp + (-0xC)); /* 0x0061ED83: mov ecx, dword ptr [ebp - 0xc] */
    MEM32(FS_BASE + (0)) = ecx; /* 0x0061ED86: mov dword ptr fs:[0], ecx */
    ecx = POP32_VAL(esp); /* 0x0061ED8D: pop ecx */
    esp = ebp; /* 0x0061ED8E: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x0061ED90: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x0061ED91: ret  */
    RECOMP_REGS_OUT();
}

void sub_0061EDA0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0061EDA0u);

L_0061EDA0:
    MEM32(ecx) = edx; /* 0x0061EDA0: mov dword ptr [ecx], edx */
    eax = ecx; /* 0x0061EDA2: mov eax, ecx */
    MEM16(ecx + 0x4) = (uint16_t)(0); /* 0x0061EDA4: mov word ptr [ecx + 4], 0 */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x0061EDAA: ret  */
    RECOMP_REGS_OUT();
}

void sub_0061EDB0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0061EDB0u);

L_0061EDB0:
    PUSH32(esp, ebp); /* 0x0061EDB0: push ebp */
    ebp = esp; /* 0x0061EDB1: mov ebp, esp */
    PUSH32(esp, 0xFFFFFFFFu); /* 0x0061EDB3: push -1 */
    PUSH32(esp, 0x007B6FA8u); /* 0x0061EDB5: push 0x7b6fa8 */
    eax = MEM32(FS_BASE + (0)); /* 0x0061EDBA: mov eax, dword ptr fs:[0] */
    PUSH32(esp, eax); /* 0x0061EDC0: push eax */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x38u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x38u; /* 0x0061EDC1: sub esp, 0x38 */
    _flag_k = FK_CMP;
    eax = MEM32(0x855000); /* 0x0061EDC4: mov eax, dword ptr [0x855000] */
    _flag_a = (uint32_t)((eax ^ ebp)); _flag_b = (uint32_t)((eax ^ ebp));
    eax = eax ^ ebp; /* 0x0061EDC9: xor eax, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x10)) = eax; /* 0x0061EDCB: mov dword ptr [ebp - 0x10], eax */
    PUSH32(esp, esi); /* 0x0061EDCE: push esi */
    PUSH32(esp, eax); /* 0x0061EDCF: push eax */
    eax = ebp + (-0xC); /* 0x0061EDD0: lea eax, [ebp - 0xc] */
    MEM32(FS_BASE + (0)) = eax; /* 0x0061EDD3: mov dword ptr fs:[0], eax */
    esi = MEM32(ebp + 0x8); /* 0x0061EDD9: mov esi, dword ptr [ebp + 8] */
    MEM32(ebp + (-0x34)) = 0x007F8EC8u; /* 0x0061EDDC: mov dword ptr [ebp - 0x34], 0x7f8ec8 */
    MEM32(ebp + (-0x30)) = 0; /* 0x0061EDE3: mov dword ptr [ebp - 0x30], 0 */
    MEM32(esi + 0x4) = 0x007F8EC0u; /* 0x0061EDEA: mov dword ptr [esi + 4], 0x7f8ec0 */
    MEM32(esi + 0x8) = 8; /* 0x0061EDF1: mov dword ptr [esi + 8], 8 */
    RECOMP_CALL(sub_0061E820); /* 0x0061EDF8: call 0x61e820 */
    RECOMP_FLAGS_IN();
    MEM32(ebp + (-0x2C)) = eax; /* 0x0061EDFD: mov dword ptr [ebp - 0x2c], eax */
    MEM32(ebp + (-0x28)) = 0x007E88ECu; /* 0x0061EE00: mov dword ptr [ebp - 0x28], 0x7e88ec */
    MEM32(ebp + (-0x24)) = 4; /* 0x0061EE07: mov dword ptr [ebp - 0x24], 4 */
    RECOMP_CALL(sub_0061E930); /* 0x0061EE0E: call 0x61e930 */
    RECOMP_FLAGS_IN();
    MEM32(ebp + (-0x20)) = eax; /* 0x0061EE13: mov dword ptr [ebp - 0x20], eax */
    MEM32(ebp + (-0x1C)) = 0x007F8F84u; /* 0x0061EE16: mov dword ptr [ebp - 0x1c], 0x7f8f84 */
    MEM32(ebp + (-0x18)) = 5; /* 0x0061EE1D: mov dword ptr [ebp - 0x18], 5 */
    RECOMP_CALL(sub_0061E930); /* 0x0061EE24: call 0x61e930 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, MEM32(ebp + (-0x44))); /* 0x0061EE29: push dword ptr [ebp - 0x44] */
    MEM32(ebp + (-0x14)) = eax; /* 0x0061EE2C: mov dword ptr [ebp - 0x14], eax */
    ecx = ebp + (-0x40); /* 0x0061EE2F: lea ecx, [ebp - 0x40] */
    eax = ebp + (-0x10); /* 0x0061EE32: lea eax, [ebp - 0x10] */
    MEM32(ebp + (-0x40)) = 0; /* 0x0061EE35: mov dword ptr [ebp - 0x40], 0 */
    PUSH32(esp, eax); /* 0x0061EE3C: push eax */
    eax = ebp + (-0x34); /* 0x0061EE3D: lea eax, [ebp - 0x34] */
    MEM32(ebp + (-0x3C)) = 0; /* 0x0061EE40: mov dword ptr [ebp - 0x3c], 0 */
    PUSH32(esp, eax); /* 0x0061EE47: push eax */
    PUSH32(esp, 0); /* 0x0061EE48: push 0 */
    MEM32(ebp + (-0x38)) = 0; /* 0x0061EE4A: mov dword ptr [ebp - 0x38], 0 */
    RECOMP_CALL(sub_006271D0); /* 0x0061EE51: call 0x6271d0 */
    RECOMP_FLAGS_IN();
    MEM32(ebp + (-0x4)) = 0; /* 0x0061EE56: mov dword ptr [ebp - 4], 0 */
    eax = ebp + (-0x40); /* 0x0061EE5D: lea eax, [ebp - 0x40] */
    PUSH32(esp, eax); /* 0x0061EE60: push eax */
    ecx = esi + 0xC; /* 0x0061EE61: lea ecx, [esi + 0xc] */
    RECOMP_CALL(sub_00625400); /* 0x0061EE64: call 0x625400 */
    RECOMP_FLAGS_IN();
    MEM32(ebp + (-0x4)) = 0xFFFFFFFFu; /* 0x0061EE69: mov dword ptr [ebp - 4], 0xffffffff */
    eax = MEM32(ebp + (-0x40)); /* 0x0061EE70: mov eax, dword ptr [ebp - 0x40] */
    /* test eax, eax */ /* 0x0061EE73: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_0061EE96; /* 0x0061EE75: je 0x61ee96 */
L_0061EE77:
    PUSH32(esp, eax); /* 0x0061EE77: push eax */
    RECOMP_ICALL(MEM32(0x7CC694)); /* 0x0061EE78: call dword ptr [0x7cc694] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x0061EE7E: add esp, 4 */
    _flag_k = FK_ADD;
    MEM32(ebp + (-0x40)) = 0; /* 0x0061EE81: mov dword ptr [ebp - 0x40], 0 */
    MEM32(ebp + (-0x3C)) = 0; /* 0x0061EE88: mov dword ptr [ebp - 0x3c], 0 */
    MEM32(ebp + (-0x38)) = 0; /* 0x0061EE8F: mov dword ptr [ebp - 0x38], 0 */
L_0061EE96:
    ecx = MEM32(ebp + (-0xC)); /* 0x0061EE96: mov ecx, dword ptr [ebp - 0xc] */
    MEM32(FS_BASE + (0)) = ecx; /* 0x0061EE99: mov dword ptr fs:[0], ecx */
    ecx = POP32_VAL(esp); /* 0x0061EEA0: pop ecx */
    esi = POP32_VAL(esp); /* 0x0061EEA1: pop esi */
    ecx = MEM32(ebp + (-0x10)); /* 0x0061EEA2: mov ecx, dword ptr [ebp - 0x10] */
    _flag_a = (uint32_t)((ecx ^ ebp)); _flag_b = (uint32_t)((ecx ^ ebp));
    ecx = ecx ^ ebp; /* 0x0061EEA5: xor ecx, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_0077F4C2); /* 0x0061EEA7: call 0x77f4c2 */
    RECOMP_FLAGS_IN();
    esp = ebp; /* 0x0061EEAC: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x0061EEAE: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x0061EEAF: ret  */
    RECOMP_REGS_OUT();
}

void sub_0061EEB0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0061EEB0u);

L_0061EEB0:
    PUSH32(esp, ebp); /* 0x0061EEB0: push ebp */
    ebp = esp; /* 0x0061EEB1: mov ebp, esp */
    PUSH32(esp, 0xFFFFFFFFu); /* 0x0061EEB3: push -1 */
    PUSH32(esp, 0x007B70C1u); /* 0x0061EEB5: push 0x7b70c1 */
    eax = MEM32(FS_BASE + (0)); /* 0x0061EEBA: mov eax, dword ptr fs:[0] */
    PUSH32(esp, eax); /* 0x0061EEC0: push eax */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x1E8u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x1E8u; /* 0x0061EEC1: sub esp, 0x1e8 */
    _flag_k = FK_CMP;
    eax = MEM32(0x855000); /* 0x0061EEC7: mov eax, dword ptr [0x855000] */
    _flag_a = (uint32_t)((eax ^ ebp)); _flag_b = (uint32_t)((eax ^ ebp));
    eax = eax ^ ebp; /* 0x0061EECC: xor eax, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x10)) = eax; /* 0x0061EECE: mov dword ptr [ebp - 0x10], eax */
    PUSH32(esp, esi); /* 0x0061EED1: push esi */
    PUSH32(esp, edi); /* 0x0061EED2: push edi */
    PUSH32(esp, eax); /* 0x0061EED3: push eax */
    eax = ebp + (-0xC); /* 0x0061EED4: lea eax, [ebp - 0xc] */
    MEM32(FS_BASE + (0)) = eax; /* 0x0061EED7: mov dword ptr fs:[0], eax */
    edi = ecx; /* 0x0061EEDD: mov edi, ecx */
    PUSH32(esp, 0x0040A000u); /* 0x0061EEDF: push 0x40a000 */
    PUSH32(esp, 0x00419660u); /* 0x0061EEE4: push 0x419660 */
    eax = edi + 0x34; /* 0x0061EEE9: lea eax, [edi + 0x34] */
    MEM32(edi) = 0x007F8F8Cu; /* 0x0061EEEC: mov dword ptr [edi], 0x7f8f8c */
    PUSH32(esp, 0x25u); /* 0x0061EEF2: push 0x25 */
    MEM32(edi + 0x4) = 0x007F8F98u; /* 0x0061EEF4: mov dword ptr [edi + 4], 0x7f8f98 */
    MEM32(edi + 0x8) = 0x007F8FA4u; /* 0x0061EEFB: mov dword ptr [edi + 8], 0x7f8fa4 */
    MEM32(edi + 0xC) = 1; /* 0x0061EF02: mov dword ptr [edi + 0xc], 1 */
    MEM32(ebp + (-0x1EC)) = eax; /* 0x0061EF09: mov dword ptr [ebp - 0x1ec], eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x28u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 0x28u; /* 0x0061EF0F: add eax, 0x28 */
    _flag_k = FK_ADD;
    PUSH32(esp, 0x18u); /* 0x0061EF12: push 0x18 */
    PUSH32(esp, eax); /* 0x0061EF14: push eax */
    MEM32(ebp + (-0x1F0)) = edi; /* 0x0061EF15: mov dword ptr [ebp - 0x1f0], edi */
    MEM32(edi + 0x18) = 0; /* 0x0061EF1B: mov dword ptr [edi + 0x18], 0 */
    MEM32(edi + 0x1C) = 0; /* 0x0061EF22: mov dword ptr [edi + 0x1c], 0 */
    MEM32(edi + 0x20) = 0; /* 0x0061EF29: mov dword ptr [edi + 0x20], 0 */
    MEM32(edi + 0x24) = 0; /* 0x0061EF30: mov dword ptr [edi + 0x24], 0 */
    RECOMP_CALL(sub_0077F6F5); /* 0x0061EF37: call 0x77f6f5 */
    RECOMP_FLAGS_IN();
    MEM32(ebp + (-0x4)) = 1; /* 0x0061EF3C: mov dword ptr [ebp - 4], 1 */
    eax = edi + 0x3DC; /* 0x0061EF43: lea eax, [edi + 0x3dc] */
    edx = 0x24u; /* 0x0061EF49: mov edx, 0x24 */
    edi = edi; /* 0x0061EF4E: mov edi, edi */
L_0061EF50:
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(1);
    edx = edx - 1; /* 0x0061EF50: dec edx */
    _flag_k = FK_DEC;
    ecx = MEM32(0x7DEA6C); /* 0x0061EF51: mov ecx, dword ptr [0x7dea6c] */
    MEM32(eax) = ecx; /* 0x0061EF57: mov dword ptr [eax], ecx */
    eax = eax + 0x8; /* 0x0061EF59: lea eax, [eax + 8] */
    ecx = MEM32(0x7DEA70); /* 0x0061EF5C: mov ecx, dword ptr [0x7dea70] */
    MEM32(eax + (-0x4)) = ecx; /* 0x0061EF62: mov dword ptr [eax - 4], ecx */
    RECOMP_BACKEDGE();
    if (/* dec result */ CMP_NS(_flag_a, _flag_b)) goto L_0061EF50; /* 0x0061EF65: jns 0x61ef50 */
L_0061EF67:
    MEM32(edi + 0x504) = 0; /* 0x0061EF67: mov dword ptr [edi + 0x504], 0 */
    MEM32(edi + 0x508) = 0; /* 0x0061EF71: mov dword ptr [edi + 0x508], 0 */
    MEM32(edi + 0x50C) = 0; /* 0x0061EF7B: mov dword ptr [edi + 0x50c], 0 */
    MEM8(ebp + (-0x4)) = (uint8_t)(2); /* 0x0061EF85: mov byte ptr [ebp - 4], 2 */
    MEM32(edi + 0x524) = 0xFu; /* 0x0061EF89: mov dword ptr [edi + 0x524], 0xf */
    MEM32(edi + 0x520) = 0; /* 0x0061EF93: mov dword ptr [edi + 0x520], 0 */
    MEM8(edi + 0x510) = (uint8_t)(0); /* 0x0061EF9D: mov byte ptr [edi + 0x510], 0 */
    MEM8(ebp + (-0x4)) = (uint8_t)(3); /* 0x0061EFA4: mov byte ptr [ebp - 4], 3 */
    MEM32(edi + 0x528) = 0; /* 0x0061EFA8: mov dword ptr [edi + 0x528], 0 */
    MEM32(edi + 0x52C) = 0; /* 0x0061EFB2: mov dword ptr [edi + 0x52c], 0 */
    MEM32(edi + 0x530) = 0; /* 0x0061EFBC: mov dword ptr [edi + 0x530], 0 */
    MEM8(ebp + (-0x4)) = (uint8_t)(4); /* 0x0061EFC6: mov byte ptr [ebp - 4], 4 */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 8; /* 0x0061EFCA: sub esp, 8 */
    _flag_k = FK_CMP;
    ecx = edi + 0x534; /* 0x0061EFCD: lea ecx, [edi + 0x534] */
    MEM32(ebp + (-0x1EC)) = ecx; /* 0x0061EFD3: mov dword ptr [ebp - 0x1ec], ecx */
    RECOMP_CALL(sub_00625CA0); /* 0x0061EFD9: call 0x625ca0 */
    RECOMP_FLAGS_IN();
    MEM8(ebp + (-0x4)) = (uint8_t)(6); /* 0x0061EFDE: mov byte ptr [ebp - 4], 6 */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 8; /* 0x0061EFE2: sub esp, 8 */
    _flag_k = FK_CMP;
    ecx = edi + 0x554; /* 0x0061EFE5: lea ecx, [edi + 0x554] */
    MEM32(ebp + (-0x1EC)) = ecx; /* 0x0061EFEB: mov dword ptr [ebp - 0x1ec], ecx */
    RECOMP_CALL(sub_006161B0); /* 0x0061EFF1: call 0x6161b0 */
    RECOMP_FLAGS_IN();
    MEM8(ebp + (-0x4)) = (uint8_t)(8); /* 0x0061EFF6: mov byte ptr [ebp - 4], 8 */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 8; /* 0x0061EFFA: sub esp, 8 */
    _flag_k = FK_CMP;
    ecx = edi + 0x574; /* 0x0061EFFD: lea ecx, [edi + 0x574] */
    MEM32(ebp + (-0x1EC)) = ecx; /* 0x0061F003: mov dword ptr [ebp - 0x1ec], ecx */
    RECOMP_CALL(sub_006161B0); /* 0x0061F009: call 0x6161b0 */
    RECOMP_FLAGS_IN();
    MEM8(ebp + (-0x4)) = (uint8_t)(0xAu); /* 0x0061F00E: mov byte ptr [ebp - 4], 0xa */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 8; /* 0x0061F012: sub esp, 8 */
    _flag_k = FK_CMP;
    ecx = edi + 0x594; /* 0x0061F015: lea ecx, [edi + 0x594] */
    MEM32(ebp + (-0x1EC)) = ecx; /* 0x0061F01B: mov dword ptr [ebp - 0x1ec], ecx */
    RECOMP_CALL(sub_00625E40); /* 0x0061F021: call 0x625e40 */
    RECOMP_FLAGS_IN();
    MEM8(ebp + (-0x4)) = (uint8_t)(0xCu); /* 0x0061F026: mov byte ptr [ebp - 4], 0xc */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 8; /* 0x0061F02A: sub esp, 8 */
    _flag_k = FK_CMP;
    ecx = edi + 0x5B4; /* 0x0061F02D: lea ecx, [edi + 0x5b4] */
    MEM32(ebp + (-0x1EC)) = ecx; /* 0x0061F033: mov dword ptr [ebp - 0x1ec], ecx */
    RECOMP_CALL(sub_00625E40); /* 0x0061F039: call 0x625e40 */
    RECOMP_FLAGS_IN();
    MEM8(ebp + (-0x4)) = (uint8_t)(0xEu); /* 0x0061F03E: mov byte ptr [ebp - 4], 0xe */
    MEM32(0x870268) = edi; /* 0x0061F042: mov dword ptr [0x870268], edi */
    MEM8(0x86DE47) = (uint8_t)(1); /* 0x0061F048: mov byte ptr [0x86de47], 1 */
    MEM16(edi + 0x15) = (uint16_t)(0); /* 0x0061F04F: mov word ptr [edi + 0x15], 0 */
    MEM8(edi + 0x30) = (uint8_t)(0xFFu); /* 0x0061F055: mov byte ptr [edi + 0x30], 0xff */
    MEM32(edi + 0x2C) = 0xFFu; /* 0x0061F059: mov dword ptr [edi + 0x2c], 0xff */
    MEM32(edi + 0x28) = 0; /* 0x0061F060: mov dword ptr [edi + 0x28], 0 */
    MEM8(edi + 0x14) = (uint8_t)(0); /* 0x0061F067: mov byte ptr [edi + 0x14], 0 */
    RECOMP_CALL(sub_006F2A10); /* 0x0061F06B: call 0x6f2a10 */
    RECOMP_FLAGS_IN();
    ecx = 1; /* 0x0061F070: mov ecx, 1 */
    RECOMP_CALL(sub_006EF060); /* 0x0061F075: call 0x6ef060 */
    RECOMP_FLAGS_IN();
    ecx = ebp + (-0x1E8); /* 0x0061F07A: lea ecx, [ebp - 0x1e8] */
    RECOMP_CALL(sub_00622D60); /* 0x0061F080: call 0x622d60 */
    RECOMP_FLAGS_IN();
    MEM8(ebp + (-0x4)) = (uint8_t)(0xFu); /* 0x0061F085: mov byte ptr [ebp - 4], 0xf */
    ecx = edi + 0x504; /* 0x0061F089: lea ecx, [edi + 0x504] */
    PUSH32(esp, eax); /* 0x0061F08F: push eax */
    RECOMP_CALL(sub_00625760); /* 0x0061F090: call 0x625760 */
    RECOMP_FLAGS_IN();
    MEM8(ebp + (-0x4)) = (uint8_t)(0xEu); /* 0x0061F095: mov byte ptr [ebp - 4], 0xe */
    ecx = ebp + (-0x1E8); /* 0x0061F099: lea ecx, [ebp - 0x1e8] */
    RECOMP_CALL(sub_0061F180); /* 0x0061F09F: call 0x61f180 */
    RECOMP_FLAGS_IN();
    RECOMP_CALL(sub_006220B0); /* 0x0061F0A4: call 0x6220b0 */
    RECOMP_FLAGS_IN();
    ecx = edi; /* 0x0061F0A9: mov ecx, edi */
    RECOMP_CALL(sub_006222C0); /* 0x0061F0AB: call 0x6222c0 */
    RECOMP_FLAGS_IN();
    MEM32(edi + 0x18) = 0; /* 0x0061F0B0: mov dword ptr [edi + 0x18], 0 */
    ecx = edi; /* 0x0061F0B7: mov ecx, edi */
    MEM32(edi + 0x1C) = 0; /* 0x0061F0B9: mov dword ptr [edi + 0x1c], 0 */
    MEM32(edi + 0x20) = 0; /* 0x0061F0C0: mov dword ptr [edi + 0x20], 0 */
    MEM32(edi + 0x24) = 0; /* 0x0061F0C7: mov dword ptr [edi + 0x24], 0 */
    MEM32(edi + 0x3D8) = 0; /* 0x0061F0CE: mov dword ptr [edi + 0x3d8], 0 */
    RECOMP_CALL(sub_00620620); /* 0x0061F0D8: call 0x620620 */
    RECOMP_FLAGS_IN();
    eax = MEM32(0x926A48); /* 0x0061F0DD: mov eax, dword ptr [0x926a48] */
    MEM32(0x926A48) = 0; /* 0x0061F0E2: mov dword ptr [0x926a48], 0 */
    /* test eax, eax */ /* 0x0061F0EC: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_0061F0F7; /* 0x0061F0EE: je 0x61f0f7 */
L_0061F0F0:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x0061F0F0: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_006F1470); /* 0x0061F0F2: call 0x6f1470 */
    RECOMP_FLAGS_IN();
L_0061F0F7:
    ecx = edi; /* 0x0061F0F7: mov ecx, edi */
    RECOMP_CALL(sub_00621E80); /* 0x0061F0F9: call 0x621e80 */
    RECOMP_FLAGS_IN();
    MEM32(ebp + (-0x4)) = 0xFFFFFFFFu; /* 0x0061F0FE: mov dword ptr [ebp - 4], 0xffffffff */
    eax = edi; /* 0x0061F105: mov eax, edi */
    ecx = MEM32(ebp + (-0xC)); /* 0x0061F107: mov ecx, dword ptr [ebp - 0xc] */
    MEM32(FS_BASE + (0)) = ecx; /* 0x0061F10A: mov dword ptr fs:[0], ecx */
    ecx = POP32_VAL(esp); /* 0x0061F111: pop ecx */
    edi = POP32_VAL(esp); /* 0x0061F112: pop edi */
    esi = POP32_VAL(esp); /* 0x0061F113: pop esi */
    ecx = MEM32(ebp + (-0x10)); /* 0x0061F114: mov ecx, dword ptr [ebp - 0x10] */
    _flag_a = (uint32_t)((ecx ^ ebp)); _flag_b = (uint32_t)((ecx ^ ebp));
    ecx = ecx ^ ebp; /* 0x0061F117: xor ecx, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_0077F4C2); /* 0x0061F119: call 0x77f4c2 */
    RECOMP_FLAGS_IN();
    esp = ebp; /* 0x0061F11E: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x0061F120: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x0061F121: ret  */
    RECOMP_REGS_OUT();
}

void sub_0061F130(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0061F130u);

L_0061F130:
    PUSH32(esp, ebp); /* 0x0061F130: push ebp */
    ebp = esp; /* 0x0061F131: mov ebp, esp */
    PUSH32(esp, 0xFFFFFFFFu); /* 0x0061F133: push -1 */
    PUSH32(esp, 0x007B7106u); /* 0x0061F135: push 0x7b7106 */
    eax = MEM32(FS_BASE + (0)); /* 0x0061F13A: mov eax, dword ptr fs:[0] */
    PUSH32(esp, eax); /* 0x0061F140: push eax */
    PUSH32(esp, ecx); /* 0x0061F141: push ecx */
    eax = MEM32(0x855000); /* 0x0061F142: mov eax, dword ptr [0x855000] */
    _flag_a = (uint32_t)((eax ^ ebp)); _flag_b = (uint32_t)((eax ^ ebp));
    eax = eax ^ ebp; /* 0x0061F147: xor eax, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, eax); /* 0x0061F149: push eax */
    eax = ebp + (-0xC); /* 0x0061F14A: lea eax, [ebp - 0xc] */
    MEM32(FS_BASE + (0)) = eax; /* 0x0061F14D: mov dword ptr fs:[0], eax */
    MEM32(ebp + (-0x10)) = ecx; /* 0x0061F153: mov dword ptr [ebp - 0x10], ecx */
    MEM32(ebp + (-0x4)) = 0xFFFFFFFFu; /* 0x0061F156: mov dword ptr [ebp - 4], 0xffffffff */
    eax = ecx + 0x28; /* 0x0061F15D: lea eax, [ecx + 0x28] */
    PUSH32(esp, 0x0040A000u); /* 0x0061F160: push 0x40a000 */
    PUSH32(esp, 0x25u); /* 0x0061F165: push 0x25 */
    PUSH32(esp, 0x18u); /* 0x0061F167: push 0x18 */
    PUSH32(esp, eax); /* 0x0061F169: push eax */
    RECOMP_CALL(sub_0077F628); /* 0x0061F16A: call 0x77f628 */
    RECOMP_FLAGS_IN();
    ecx = MEM32(ebp + (-0xC)); /* 0x0061F16F: mov ecx, dword ptr [ebp - 0xc] */
    MEM32(FS_BASE + (0)) = ecx; /* 0x0061F172: mov dword ptr fs:[0], ecx */
    ecx = POP32_VAL(esp); /* 0x0061F179: pop ecx */
    esp = ebp; /* 0x0061F17A: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x0061F17C: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x0061F17D: ret  */
    RECOMP_REGS_OUT();
}

void sub_0061F180(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0061F180u);

L_0061F180:
    PUSH32(esp, ebp); /* 0x0061F180: push ebp */
    ebp = esp; /* 0x0061F181: mov ebp, esp */
    PUSH32(esp, 0xFFFFFFFFu); /* 0x0061F183: push -1 */
    PUSH32(esp, 0x007B717Fu); /* 0x0061F185: push 0x7b717f */
    eax = MEM32(FS_BASE + (0)); /* 0x0061F18A: mov eax, dword ptr fs:[0] */
    PUSH32(esp, eax); /* 0x0061F190: push eax */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0xCu; /* 0x0061F191: sub esp, 0xc */
    _flag_k = FK_CMP;
    PUSH32(esp, esi); /* 0x0061F194: push esi */
    PUSH32(esp, edi); /* 0x0061F195: push edi */
    eax = MEM32(0x855000); /* 0x0061F196: mov eax, dword ptr [0x855000] */
    _flag_a = (uint32_t)((eax ^ ebp)); _flag_b = (uint32_t)((eax ^ ebp));
    eax = eax ^ ebp; /* 0x0061F19B: xor eax, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, eax); /* 0x0061F19D: push eax */
    eax = ebp + (-0xC); /* 0x0061F19E: lea eax, [ebp - 0xc] */
    MEM32(FS_BASE + (0)) = eax; /* 0x0061F1A1: mov dword ptr fs:[0], eax */
    edi = ecx; /* 0x0061F1A7: mov edi, ecx */
    MEM32(ebp + (-0x10)) = edi; /* 0x0061F1A9: mov dword ptr [ebp - 0x10], edi */
    MEM32(ebp + (-0x4)) = 2; /* 0x0061F1AC: mov dword ptr [ebp - 4], 2 */
    esi = edi + 0x1CC; /* 0x0061F1B3: lea esi, [edi + 0x1cc] */
    MEM32(ebp + (-0x14)) = esi; /* 0x0061F1B9: mov dword ptr [ebp - 0x14], esi */
    MEM8(ebp + (-0x4)) = (uint8_t)(5); /* 0x0061F1BC: mov byte ptr [ebp - 4], 5 */
    ecx = esi; /* 0x0061F1C0: mov ecx, esi */
    eax = MEM32(esi); /* 0x0061F1C2: mov eax, dword ptr [esi] */
    PUSH32(esp, eax); /* 0x0061F1C4: push eax */
    PUSH32(esp, MEM32(eax)); /* 0x0061F1C5: push dword ptr [eax] */
    eax = ebp + (-0x18); /* 0x0061F1C7: lea eax, [ebp - 0x18] */
    PUSH32(esp, eax); /* 0x0061F1CA: push eax */
    RECOMP_CALL(sub_00626180); /* 0x0061F1CB: call 0x626180 */
    RECOMP_FLAGS_IN();
    MEM8(ebp + (-0x4)) = (uint8_t)(2); /* 0x0061F1D0: mov byte ptr [ebp - 4], 2 */
    PUSH32(esp, MEM32(esi)); /* 0x0061F1D4: push dword ptr [esi] */
    esi = MEM32(0x7CC694); /* 0x0061F1D6: mov esi, dword ptr [0x7cc694] */
    RECOMP_ICALL(esi); /* 0x0061F1DC: call esi */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x0061F1DE: add esp, 4 */
    _flag_k = FK_ADD;
    MEM8(ebp + (-0x4)) = (uint8_t)(1); /* 0x0061F1E1: mov byte ptr [ebp - 4], 1 */
    ecx = edi + 0x30; /* 0x0061F1E5: lea ecx, [edi + 0x30] */
    RECOMP_CALL(sub_0061F250); /* 0x0061F1E8: call 0x61f250 */
    RECOMP_FLAGS_IN();
    MEM8(ebp + (-0x4)) = (uint8_t)(0); /* 0x0061F1ED: mov byte ptr [ebp - 4], 0 */
    eax = MEM32(edi + 0x14); /* 0x0061F1F1: mov eax, dword ptr [edi + 0x14] */
    /* test eax, eax */ /* 0x0061F1F4: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_0061F213; /* 0x0061F1F6: je 0x61f213 */
L_0061F1F8:
    PUSH32(esp, eax); /* 0x0061F1F8: push eax */
    RECOMP_ICALL(esi); /* 0x0061F1F9: call esi */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x0061F1FB: add esp, 4 */
    _flag_k = FK_ADD;
    MEM32(edi + 0x14) = 0; /* 0x0061F1FE: mov dword ptr [edi + 0x14], 0 */
    MEM32(edi + 0x18) = 0; /* 0x0061F205: mov dword ptr [edi + 0x18], 0 */
    MEM32(edi + 0x1C) = 0; /* 0x0061F20C: mov dword ptr [edi + 0x1c], 0 */
L_0061F213:
    MEM32(ebp + (-0x4)) = 0xFFFFFFFFu; /* 0x0061F213: mov dword ptr [ebp - 4], 0xffffffff */
    eax = MEM32(edi + 0x8); /* 0x0061F21A: mov eax, dword ptr [edi + 8] */
    /* test eax, eax */ /* 0x0061F21D: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_0061F23C; /* 0x0061F21F: je 0x61f23c */
L_0061F221:
    PUSH32(esp, eax); /* 0x0061F221: push eax */
    RECOMP_ICALL(esi); /* 0x0061F222: call esi */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x0061F224: add esp, 4 */
    _flag_k = FK_ADD;
    MEM32(edi + 0x8) = 0; /* 0x0061F227: mov dword ptr [edi + 8], 0 */
    MEM32(edi + 0xC) = 0; /* 0x0061F22E: mov dword ptr [edi + 0xc], 0 */
    MEM32(edi + 0x10) = 0; /* 0x0061F235: mov dword ptr [edi + 0x10], 0 */
L_0061F23C:
    ecx = MEM32(ebp + (-0xC)); /* 0x0061F23C: mov ecx, dword ptr [ebp - 0xc] */
    MEM32(FS_BASE + (0)) = ecx; /* 0x0061F23F: mov dword ptr fs:[0], ecx */
    ecx = POP32_VAL(esp); /* 0x0061F246: pop ecx */
    edi = POP32_VAL(esp); /* 0x0061F247: pop edi */
    esi = POP32_VAL(esp); /* 0x0061F248: pop esi */
    esp = ebp; /* 0x0061F249: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x0061F24B: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x0061F24C: ret  */
    RECOMP_REGS_OUT();
}

void sub_0061F250(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0061F250u);

L_0061F250:
    PUSH32(esp, ebp); /* 0x0061F250: push ebp */
    ebp = esp; /* 0x0061F251: mov ebp, esp */
    PUSH32(esp, 0xFFFFFFFFu); /* 0x0061F253: push -1 */
    PUSH32(esp, 0x007B71B6u); /* 0x0061F255: push 0x7b71b6 */
    eax = MEM32(FS_BASE + (0)); /* 0x0061F25A: mov eax, dword ptr fs:[0] */
    PUSH32(esp, eax); /* 0x0061F260: push eax */
    PUSH32(esp, ecx); /* 0x0061F261: push ecx */
    PUSH32(esp, esi); /* 0x0061F262: push esi */
    eax = MEM32(0x855000); /* 0x0061F263: mov eax, dword ptr [0x855000] */
    _flag_a = (uint32_t)((eax ^ ebp)); _flag_b = (uint32_t)((eax ^ ebp));
    eax = eax ^ ebp; /* 0x0061F268: xor eax, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, eax); /* 0x0061F26A: push eax */
    eax = ebp + (-0xC); /* 0x0061F26B: lea eax, [ebp - 0xc] */
    MEM32(FS_BASE + (0)) = eax; /* 0x0061F26E: mov dword ptr fs:[0], eax */
    esi = ecx; /* 0x0061F274: mov esi, ecx */
    MEM32(ebp + (-0x10)) = esi; /* 0x0061F276: mov dword ptr [ebp - 0x10], esi */
    MEM32(ebp + (-0x4)) = 0; /* 0x0061F279: mov dword ptr [ebp - 4], 0 */
    /* cmp MEM32(esi + 0x40), 0x10u */ /* 0x0061F280: cmp dword ptr [esi + 0x40], 0x10 */
    _flag_a = (uint32_t)(MEM32(esi + 0x40)); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_B(_flag_a, _flag_b)) goto L_0061F292; /* 0x0061F284: jb 0x61f292 */
L_0061F286:
    PUSH32(esp, MEM32(esi + 0x2C)); /* 0x0061F286: push dword ptr [esi + 0x2c] */
    RECOMP_ICALL(MEM32(0x7CC694)); /* 0x0061F289: call dword ptr [0x7cc694] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x0061F28F: add esp, 4 */
    _flag_k = FK_ADD;
L_0061F292:
    MEM32(esi + 0x40) = 0xFu; /* 0x0061F292: mov dword ptr [esi + 0x40], 0xf */
    MEM32(esi + 0x3C) = 0; /* 0x0061F299: mov dword ptr [esi + 0x3c], 0 */
    MEM8(esi + 0x2C) = (uint8_t)(0); /* 0x0061F2A0: mov byte ptr [esi + 0x2c], 0 */
    MEM32(ebp + (-0x4)) = 0xFFFFFFFFu; /* 0x0061F2A4: mov dword ptr [ebp - 4], 0xffffffff */
    /* cmp MEM32(esi + 0x28), 0x10u */ /* 0x0061F2AB: cmp dword ptr [esi + 0x28], 0x10 */
    _flag_a = (uint32_t)(MEM32(esi + 0x28)); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_B(_flag_a, _flag_b)) goto L_0061F2BD; /* 0x0061F2AF: jb 0x61f2bd */
L_0061F2B1:
    PUSH32(esp, MEM32(esi + 0x14)); /* 0x0061F2B1: push dword ptr [esi + 0x14] */
    RECOMP_ICALL(MEM32(0x7CC694)); /* 0x0061F2B4: call dword ptr [0x7cc694] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x0061F2BA: add esp, 4 */
    _flag_k = FK_ADD;
L_0061F2BD:
    MEM32(esi + 0x28) = 0xFu; /* 0x0061F2BD: mov dword ptr [esi + 0x28], 0xf */
    MEM32(esi + 0x24) = 0; /* 0x0061F2C4: mov dword ptr [esi + 0x24], 0 */
    MEM8(esi + 0x14) = (uint8_t)(0); /* 0x0061F2CB: mov byte ptr [esi + 0x14], 0 */
    ecx = MEM32(ebp + (-0xC)); /* 0x0061F2CF: mov ecx, dword ptr [ebp - 0xc] */
    MEM32(FS_BASE + (0)) = ecx; /* 0x0061F2D2: mov dword ptr fs:[0], ecx */
    ecx = POP32_VAL(esp); /* 0x0061F2D9: pop ecx */
    esi = POP32_VAL(esp); /* 0x0061F2DA: pop esi */
    esp = ebp; /* 0x0061F2DB: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x0061F2DD: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x0061F2DE: ret  */
    RECOMP_REGS_OUT();
}

void sub_0061F2E0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0061F2E0u);

L_0061F2E0:
    PUSH32(esp, ebp); /* 0x0061F2E0: push ebp */
    ebp = esp; /* 0x0061F2E1: mov ebp, esp */
    PUSH32(esp, 0xFFFFFFFFu); /* 0x0061F2E3: push -1 */
    PUSH32(esp, 0x007B7200u); /* 0x0061F2E5: push 0x7b7200 */
    eax = MEM32(FS_BASE + (0)); /* 0x0061F2EA: mov eax, dword ptr fs:[0] */
    PUSH32(esp, eax); /* 0x0061F2F0: push eax */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 8; /* 0x0061F2F1: sub esp, 8 */
    _flag_k = FK_CMP;
    PUSH32(esp, esi); /* 0x0061F2F4: push esi */
    eax = MEM32(0x855000); /* 0x0061F2F5: mov eax, dword ptr [0x855000] */
    _flag_a = (uint32_t)((eax ^ ebp)); _flag_b = (uint32_t)((eax ^ ebp));
    eax = eax ^ ebp; /* 0x0061F2FA: xor eax, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, eax); /* 0x0061F2FC: push eax */
    eax = ebp + (-0xC); /* 0x0061F2FD: lea eax, [ebp - 0xc] */
    MEM32(FS_BASE + (0)) = eax; /* 0x0061F300: mov dword ptr fs:[0], eax */
    esi = ecx; /* 0x0061F306: mov esi, ecx */
    MEM32(ebp + (-0x10)) = esi; /* 0x0061F308: mov dword ptr [ebp - 0x10], esi */
    MEM32(ebp + (-0x4)) = 1; /* 0x0061F30B: mov dword ptr [ebp - 4], 1 */
    eax = MEM32(esi); /* 0x0061F312: mov eax, dword ptr [esi] */
    PUSH32(esp, eax); /* 0x0061F314: push eax */
    PUSH32(esp, MEM32(eax)); /* 0x0061F315: push dword ptr [eax] */
    eax = ebp + (-0x14); /* 0x0061F317: lea eax, [ebp - 0x14] */
    PUSH32(esp, eax); /* 0x0061F31A: push eax */
    RECOMP_CALL(sub_00626180); /* 0x0061F31B: call 0x626180 */
    RECOMP_FLAGS_IN();
    MEM32(ebp + (-0x4)) = 0xFFFFFFFFu; /* 0x0061F320: mov dword ptr [ebp - 4], 0xffffffff */
    PUSH32(esp, MEM32(esi)); /* 0x0061F327: push dword ptr [esi] */
    RECOMP_ICALL(MEM32(0x7CC694)); /* 0x0061F329: call dword ptr [0x7cc694] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x0061F32F: add esp, 4 */
    _flag_k = FK_ADD;
    ecx = MEM32(ebp + (-0xC)); /* 0x0061F332: mov ecx, dword ptr [ebp - 0xc] */
    MEM32(FS_BASE + (0)) = ecx; /* 0x0061F335: mov dword ptr fs:[0], ecx */
    ecx = POP32_VAL(esp); /* 0x0061F33C: pop ecx */
    esi = POP32_VAL(esp); /* 0x0061F33D: pop esi */
    esp = ebp; /* 0x0061F33E: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x0061F340: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x0061F341: ret  */
    RECOMP_REGS_OUT();
}

void sub_0061F350(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0061F350u);

L_0061F350:
    PUSH32(esp, ebp); /* 0x0061F350: push ebp */
    ebp = esp; /* 0x0061F351: mov ebp, esp */
    PUSH32(esp, 0xFFFFFFFFu); /* 0x0061F353: push -1 */
    PUSH32(esp, 0x007B7388u); /* 0x0061F355: push 0x7b7388 */
    eax = MEM32(FS_BASE + (0)); /* 0x0061F35A: mov eax, dword ptr fs:[0] */
    PUSH32(esp, eax); /* 0x0061F360: push eax */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0xCu; /* 0x0061F361: sub esp, 0xc */
    _flag_k = FK_CMP;
    PUSH32(esp, ebx); /* 0x0061F364: push ebx */
    PUSH32(esp, esi); /* 0x0061F365: push esi */
    PUSH32(esp, edi); /* 0x0061F366: push edi */
    eax = MEM32(0x855000); /* 0x0061F367: mov eax, dword ptr [0x855000] */
    _flag_a = (uint32_t)((eax ^ ebp)); _flag_b = (uint32_t)((eax ^ ebp));
    eax = eax ^ ebp; /* 0x0061F36C: xor eax, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, eax); /* 0x0061F36E: push eax */
    eax = ebp + (-0xC); /* 0x0061F36F: lea eax, [ebp - 0xc] */
    MEM32(FS_BASE + (0)) = eax; /* 0x0061F372: mov dword ptr fs:[0], eax */
    ebx = ecx; /* 0x0061F378: mov ebx, ecx */
    MEM32(ebp + (-0x14)) = ebx; /* 0x0061F37A: mov dword ptr [ebp - 0x14], ebx */
    MEM32(ebp + (-0x4)) = 8; /* 0x0061F37D: mov dword ptr [ebp - 4], 8 */
    eax = 0x8C08C08Du; /* 0x0061F384: mov eax, 0x8c08c08d */
    ecx = MEM32(ebx + 0x508); /* 0x0061F389: mov ecx, dword ptr [ebx + 0x508] */
    edi = 1; /* 0x0061F38F: mov edi, 1 */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(MEM32(ebx + 0x504));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ecx = ecx - MEM32(ebx + 0x504); /* 0x0061F394: sub ecx, dword ptr [ebx + 0x504] */
    _flag_k = FK_CMP;
    { int64_t _r = (int64_t)(int32_t)eax * (int32_t)(ecx); /* 0x0061F39A: imul ecx */
      eax = (uint32_t)_r; edx = (uint32_t)(_r >> 32); uint32_t _ov = _r != (int32_t)_r;
      _flag_k = FK_EFLAGS; _flag_a = _ov ? 0x801u : 0u; _flag_b = 0; _cf = _ov; }
    MEM32(0x870268) = 0; /* 0x0061F39C: mov dword ptr [0x870268], 0 */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edx = edx + ecx; /* 0x0061F3A6: add edx, ecx */
    _flag_k = FK_ADD;
    MEM8(0x86DE47) = (uint8_t)(0); /* 0x0061F3A8: mov byte ptr [0x86de47], 0 */
    if (8u) _cf = (((edx) >> 7) & 1u); /* 0x0061F3AF: sar edx, 8 */
    if (8u) { _flag_a = recomp_flags_pack(((uint32_t)((int32_t)edx >> 8u)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    edx = (uint32_t)((int32_t)edx >> 8u);
    eax = edx; /* 0x0061F3B2: mov eax, edx */
    if (31u) _cf = (((eax) >> 30) & 1u); /* 0x0061F3B4: shr eax, 0x1f */
    if (31u) { _flag_a = recomp_flags_pack((eax >> 31u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax >> 31u; /* 0x0061F3B4: shr eax, 0x1f */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + edx; /* 0x0061F3B7: add eax, edx */
    _flag_k = FK_ADD;
    /* cmp eax, edi */ /* 0x0061F3B9: cmp eax, edi */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_0061F3F9; /* 0x0061F3BB: jbe 0x61f3f9 */
L_0061F3BD:
    esi = 0x1D4u; /* 0x0061F3BD: mov esi, 0x1d4 */
L_0061F3C2:
    ecx = MEM32(ebx + 0x504); /* 0x0061F3C2: mov ecx, dword ptr [ebx + 0x504] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + esi; /* 0x0061F3C8: add ecx, esi */
    _flag_k = FK_ADD;
    RECOMP_CALL(sub_00623090); /* 0x0061F3CA: call 0x623090 */
    RECOMP_FLAGS_IN();
    ecx = MEM32(ebx + 0x508); /* 0x0061F3CF: mov ecx, dword ptr [ebx + 0x508] */
    eax = 0x8C08C08Du; /* 0x0061F3D5: mov eax, 0x8c08c08d */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(MEM32(ebx + 0x504));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ecx = ecx - MEM32(ebx + 0x504); /* 0x0061F3DA: sub ecx, dword ptr [ebx + 0x504] */
    _flag_k = FK_CMP;
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(1);
    edi = edi + 1; /* 0x0061F3E0: inc edi */
    _flag_k = FK_INC;
    { int64_t _r = (int64_t)(int32_t)eax * (int32_t)(ecx); /* 0x0061F3E1: imul ecx */
      eax = (uint32_t)_r; edx = (uint32_t)(_r >> 32); uint32_t _ov = _r != (int32_t)_r;
      _flag_k = FK_EFLAGS; _flag_a = _ov ? 0x801u : 0u; _flag_b = 0; _cf = _ov; }
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(0x1D4u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esi = esi + 0x1D4u; /* 0x0061F3E3: add esi, 0x1d4 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edx = edx + ecx; /* 0x0061F3E9: add edx, ecx */
    _flag_k = FK_ADD;
    if (8u) _cf = (((edx) >> 7) & 1u); /* 0x0061F3EB: sar edx, 8 */
    if (8u) { _flag_a = recomp_flags_pack(((uint32_t)((int32_t)edx >> 8u)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    edx = (uint32_t)((int32_t)edx >> 8u);
    eax = edx; /* 0x0061F3EE: mov eax, edx */
    if (31u) _cf = (((eax) >> 30) & 1u); /* 0x0061F3F0: shr eax, 0x1f */
    if (31u) { _flag_a = recomp_flags_pack((eax >> 31u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax >> 31u; /* 0x0061F3F0: shr eax, 0x1f */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + edx; /* 0x0061F3F3: add eax, edx */
    _flag_k = FK_ADD;
    /* cmp edi, eax */ /* 0x0061F3F5: cmp edi, eax */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_0061F3C2; /* 0x0061F3F7: jb 0x61f3c2 */
L_0061F3F9:
    edi = MEM32(ebx + 0x508); /* 0x0061F3F9: mov edi, dword ptr [ebx + 0x508] */
    esi = MEM32(ebx + 0x504); /* 0x0061F3FF: mov esi, dword ptr [ebx + 0x504] */
    /* cmp esi, edi */ /* 0x0061F405: cmp esi, edi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_0061F421; /* 0x0061F407: je 0x61f421 */
L_0061F409:
    esp = esp; /* 0x0061F409: lea esp, [esp] */
L_0061F410:
    ecx = esi; /* 0x0061F410: mov ecx, esi */
    RECOMP_CALL(sub_0061F180); /* 0x0061F412: call 0x61f180 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(0x1D4u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esi = esi + 0x1D4u; /* 0x0061F417: add esi, 0x1d4 */
    _flag_k = FK_ADD;
    /* cmp esi, edi */ /* 0x0061F41D: cmp esi, edi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_NE(_flag_a, _flag_b)) goto L_0061F410; /* 0x0061F41F: jne 0x61f410 */
L_0061F421:
    eax = MEM32(ebx + 0x504); /* 0x0061F421: mov eax, dword ptr [ebx + 0x504] */
    edi = MEM32(0x7CC694); /* 0x0061F427: mov edi, dword ptr [0x7cc694] */
    MEM32(ebx + 0x508) = eax; /* 0x0061F42D: mov dword ptr [ebx + 0x508], eax */
    esi = MEM32(ebx + 0x10); /* 0x0061F433: mov esi, dword ptr [ebx + 0x10] */
    /* test esi, esi */ /* 0x0061F436: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_0061F463; /* 0x0061F438: je 0x61f463 */
L_0061F43A:
    /* cmp MEM8(esi + 0x2), 0 */ /* 0x0061F43A: cmp byte ptr [esi + 2], 0 */
    _flag_a = (uint32_t)(MEM8(esi + 0x2)) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_0061F456; /* 0x0061F43E: je 0x61f456 */
L_0061F440:
    eax = MEM32(0x87028C); /* 0x0061F440: mov eax, dword ptr [0x87028c] */
    /* test eax, eax */ /* 0x0061F445: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_0061F44B; /* 0x0061F447: je 0x61f44b */
L_0061F449:
    RECOMP_ICALL(eax); /* 0x0061F449: call eax */
    RECOMP_FLAGS_IN();
L_0061F44B:
    eax = MEM32(0x8702AC); /* 0x0061F44B: mov eax, dword ptr [0x8702ac] */
    /* test eax, eax */ /* 0x0061F450: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_0061F456; /* 0x0061F452: je 0x61f456 */
L_0061F454:
    RECOMP_ICALL(eax); /* 0x0061F454: call eax */
    RECOMP_FLAGS_IN();
L_0061F456:
    PUSH32(esp, esi); /* 0x0061F456: push esi */
    RECOMP_ICALL(edi); /* 0x0061F457: call edi */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x0061F459: add esp, 4 */
    _flag_k = FK_ADD;
    MEM32(ebx + 0x10) = 0; /* 0x0061F45C: mov dword ptr [ebx + 0x10], 0 */
L_0061F463:
    MEM8(ebp + (-0x4)) = (uint8_t)(7); /* 0x0061F463: mov byte ptr [ebp - 4], 7 */
    esi = ebx + 0x5B4; /* 0x0061F467: lea esi, [ebx + 0x5b4] */
    MEM32(ebp + (-0x10)) = esi; /* 0x0061F46D: mov dword ptr [ebp - 0x10], esi */
    MEM8(ebp + (-0x4)) = (uint8_t)(0xAu); /* 0x0061F470: mov byte ptr [ebp - 4], 0xa */
    eax = MEM32(esi + 0x8); /* 0x0061F474: mov eax, dword ptr [esi + 8] */
    /* test eax, eax */ /* 0x0061F477: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_0061F496; /* 0x0061F479: je 0x61f496 */
L_0061F47B:
    PUSH32(esp, eax); /* 0x0061F47B: push eax */
    RECOMP_ICALL(edi); /* 0x0061F47C: call edi */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x0061F47E: add esp, 4 */
    _flag_k = FK_ADD;
    MEM32(esi + 0x8) = 0; /* 0x0061F481: mov dword ptr [esi + 8], 0 */
    MEM32(esi + 0xC) = 0; /* 0x0061F488: mov dword ptr [esi + 0xc], 0 */
    MEM32(esi + 0x10) = 0; /* 0x0061F48F: mov dword ptr [esi + 0x10], 0 */
L_0061F496:
    MEM8(ebp + (-0x4)) = (uint8_t)(7); /* 0x0061F496: mov byte ptr [ebp - 4], 7 */
    MEM32(ebp + (-0x10)) = esi; /* 0x0061F49A: mov dword ptr [ebp - 0x10], esi */
    MEM8(ebp + (-0x4)) = (uint8_t)(0xCu); /* 0x0061F49D: mov byte ptr [ebp - 4], 0xc */
    eax = MEM32(esi); /* 0x0061F4A1: mov eax, dword ptr [esi] */
    ecx = MEM32(eax); /* 0x0061F4A3: mov ecx, dword ptr [eax] */
    MEM32(eax) = eax; /* 0x0061F4A5: mov dword ptr [eax], eax */
    eax = MEM32(esi); /* 0x0061F4A7: mov eax, dword ptr [esi] */
    MEM32(eax + 0x4) = eax; /* 0x0061F4A9: mov dword ptr [eax + 4], eax */
    MEM32(esi + 0x4) = 0; /* 0x0061F4AC: mov dword ptr [esi + 4], 0 */
    /* cmp ecx, MEM32(esi) */ /* 0x0061F4B3: cmp ecx, dword ptr [esi] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(MEM32(esi));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_0061F4CF; /* 0x0061F4B5: je 0x61f4cf */
L_0061F4B7:
    esi = MEM32(ecx); /* 0x0061F4B7: mov esi, dword ptr [ecx] */
    PUSH32(esp, ecx); /* 0x0061F4B9: push ecx */
    RECOMP_ICALL(edi); /* 0x0061F4BA: call edi */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x0061F4BC: add esp, 4 */
    _flag_k = FK_ADD;
    ecx = esi; /* 0x0061F4BF: mov ecx, esi */
    /* cmp esi, MEM32(ebx + 0x5B4) */ /* 0x0061F4C1: cmp esi, dword ptr [ebx + 0x5b4] */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(MEM32(ebx + 0x5B4));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_NE(_flag_a, _flag_b)) goto L_0061F4B7; /* 0x0061F4C7: jne 0x61f4b7 */
L_0061F4C9:
    esi = ebx + 0x5B4; /* 0x0061F4C9: lea esi, [ebx + 0x5b4] */
L_0061F4CF:
    MEM8(ebp + (-0x4)) = (uint8_t)(7); /* 0x0061F4CF: mov byte ptr [ebp - 4], 7 */
    PUSH32(esp, MEM32(esi)); /* 0x0061F4D3: push dword ptr [esi] */
    RECOMP_ICALL(edi); /* 0x0061F4D5: call edi */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x0061F4D7: add esp, 4 */
    _flag_k = FK_ADD;
    MEM8(ebp + (-0x4)) = (uint8_t)(6); /* 0x0061F4DA: mov byte ptr [ebp - 4], 6 */
    esi = ebx + 0x594; /* 0x0061F4DE: lea esi, [ebx + 0x594] */
    MEM32(ebp + (-0x10)) = esi; /* 0x0061F4E4: mov dword ptr [ebp - 0x10], esi */
    MEM8(ebp + (-0x4)) = (uint8_t)(0xFu); /* 0x0061F4E7: mov byte ptr [ebp - 4], 0xf */
    eax = MEM32(esi + 0x8); /* 0x0061F4EB: mov eax, dword ptr [esi + 8] */
    /* test eax, eax */ /* 0x0061F4EE: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_0061F50D; /* 0x0061F4F0: je 0x61f50d */
L_0061F4F2:
    PUSH32(esp, eax); /* 0x0061F4F2: push eax */
    RECOMP_ICALL(edi); /* 0x0061F4F3: call edi */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x0061F4F5: add esp, 4 */
    _flag_k = FK_ADD;
    MEM32(esi + 0x8) = 0; /* 0x0061F4F8: mov dword ptr [esi + 8], 0 */
    MEM32(esi + 0xC) = 0; /* 0x0061F4FF: mov dword ptr [esi + 0xc], 0 */
    MEM32(esi + 0x10) = 0; /* 0x0061F506: mov dword ptr [esi + 0x10], 0 */
L_0061F50D:
    MEM8(ebp + (-0x4)) = (uint8_t)(6); /* 0x0061F50D: mov byte ptr [ebp - 4], 6 */
    MEM32(ebp + (-0x10)) = esi; /* 0x0061F511: mov dword ptr [ebp - 0x10], esi */
    MEM8(ebp + (-0x4)) = (uint8_t)(0x11u); /* 0x0061F514: mov byte ptr [ebp - 4], 0x11 */
    eax = MEM32(esi); /* 0x0061F518: mov eax, dword ptr [esi] */
    ecx = MEM32(eax); /* 0x0061F51A: mov ecx, dword ptr [eax] */
    MEM32(eax) = eax; /* 0x0061F51C: mov dword ptr [eax], eax */
    eax = MEM32(esi); /* 0x0061F51E: mov eax, dword ptr [esi] */
    MEM32(eax + 0x4) = eax; /* 0x0061F520: mov dword ptr [eax + 4], eax */
    MEM32(esi + 0x4) = 0; /* 0x0061F523: mov dword ptr [esi + 4], 0 */
    /* cmp ecx, MEM32(esi) */ /* 0x0061F52A: cmp ecx, dword ptr [esi] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(MEM32(esi));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_0061F548; /* 0x0061F52C: je 0x61f548 */
L_0061F52E:
    edi = edi; /* 0x0061F52E: mov edi, edi */
L_0061F530:
    esi = MEM32(ecx); /* 0x0061F530: mov esi, dword ptr [ecx] */
    PUSH32(esp, ecx); /* 0x0061F532: push ecx */
    RECOMP_ICALL(edi); /* 0x0061F533: call edi */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x0061F535: add esp, 4 */
    _flag_k = FK_ADD;
    ecx = esi; /* 0x0061F538: mov ecx, esi */
    /* cmp esi, MEM32(ebx + 0x594) */ /* 0x0061F53A: cmp esi, dword ptr [ebx + 0x594] */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(MEM32(ebx + 0x594));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_NE(_flag_a, _flag_b)) goto L_0061F530; /* 0x0061F540: jne 0x61f530 */
L_0061F542:
    esi = ebx + 0x594; /* 0x0061F542: lea esi, [ebx + 0x594] */
L_0061F548:
    MEM8(ebp + (-0x4)) = (uint8_t)(6); /* 0x0061F548: mov byte ptr [ebp - 4], 6 */
    PUSH32(esp, MEM32(esi)); /* 0x0061F54C: push dword ptr [esi] */
    RECOMP_ICALL(edi); /* 0x0061F54E: call edi */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x0061F550: add esp, 4 */
    _flag_k = FK_ADD;
    MEM8(ebp + (-0x4)) = (uint8_t)(5); /* 0x0061F553: mov byte ptr [ebp - 4], 5 */
    esi = ebx + 0x574; /* 0x0061F557: lea esi, [ebx + 0x574] */
    MEM32(ebp + (-0x10)) = esi; /* 0x0061F55D: mov dword ptr [ebp - 0x10], esi */
    MEM8(ebp + (-0x4)) = (uint8_t)(0x14u); /* 0x0061F560: mov byte ptr [ebp - 4], 0x14 */
    eax = MEM32(esi + 0x8); /* 0x0061F564: mov eax, dword ptr [esi + 8] */
    /* test eax, eax */ /* 0x0061F567: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_0061F586; /* 0x0061F569: je 0x61f586 */
L_0061F56B:
    PUSH32(esp, eax); /* 0x0061F56B: push eax */
    RECOMP_ICALL(edi); /* 0x0061F56C: call edi */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x0061F56E: add esp, 4 */
    _flag_k = FK_ADD;
    MEM32(esi + 0x8) = 0; /* 0x0061F571: mov dword ptr [esi + 8], 0 */
    MEM32(esi + 0xC) = 0; /* 0x0061F578: mov dword ptr [esi + 0xc], 0 */
    MEM32(esi + 0x10) = 0; /* 0x0061F57F: mov dword ptr [esi + 0x10], 0 */
L_0061F586:
    MEM8(ebp + (-0x4)) = (uint8_t)(5); /* 0x0061F586: mov byte ptr [ebp - 4], 5 */
    MEM32(ebp + (-0x10)) = esi; /* 0x0061F58A: mov dword ptr [ebp - 0x10], esi */
    MEM8(ebp + (-0x4)) = (uint8_t)(0x16u); /* 0x0061F58D: mov byte ptr [ebp - 4], 0x16 */
    eax = MEM32(esi); /* 0x0061F591: mov eax, dword ptr [esi] */
    ecx = MEM32(eax); /* 0x0061F593: mov ecx, dword ptr [eax] */
    MEM32(eax) = eax; /* 0x0061F595: mov dword ptr [eax], eax */
    eax = MEM32(esi); /* 0x0061F597: mov eax, dword ptr [esi] */
    MEM32(eax + 0x4) = eax; /* 0x0061F599: mov dword ptr [eax + 4], eax */
    MEM32(esi + 0x4) = 0; /* 0x0061F59C: mov dword ptr [esi + 4], 0 */
    /* cmp ecx, MEM32(esi) */ /* 0x0061F5A3: cmp ecx, dword ptr [esi] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(MEM32(esi));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_0061F5BF; /* 0x0061F5A5: je 0x61f5bf */
L_0061F5A7:
    esi = MEM32(ecx); /* 0x0061F5A7: mov esi, dword ptr [ecx] */
    PUSH32(esp, ecx); /* 0x0061F5A9: push ecx */
    RECOMP_ICALL(edi); /* 0x0061F5AA: call edi */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x0061F5AC: add esp, 4 */
    _flag_k = FK_ADD;
    ecx = esi; /* 0x0061F5AF: mov ecx, esi */
    /* cmp esi, MEM32(ebx + 0x574) */ /* 0x0061F5B1: cmp esi, dword ptr [ebx + 0x574] */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(MEM32(ebx + 0x574));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_NE(_flag_a, _flag_b)) goto L_0061F5A7; /* 0x0061F5B7: jne 0x61f5a7 */
L_0061F5B9:
    esi = ebx + 0x574; /* 0x0061F5B9: lea esi, [ebx + 0x574] */
L_0061F5BF:
    MEM8(ebp + (-0x4)) = (uint8_t)(5); /* 0x0061F5BF: mov byte ptr [ebp - 4], 5 */
    PUSH32(esp, MEM32(esi)); /* 0x0061F5C3: push dword ptr [esi] */
    RECOMP_ICALL(edi); /* 0x0061F5C5: call edi */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x0061F5C7: add esp, 4 */
    _flag_k = FK_ADD;
    MEM8(ebp + (-0x4)) = (uint8_t)(4); /* 0x0061F5CA: mov byte ptr [ebp - 4], 4 */
    esi = ebx + 0x554; /* 0x0061F5CE: lea esi, [ebx + 0x554] */
    MEM32(ebp + (-0x10)) = esi; /* 0x0061F5D4: mov dword ptr [ebp - 0x10], esi */
    MEM8(ebp + (-0x4)) = (uint8_t)(0x19u); /* 0x0061F5D7: mov byte ptr [ebp - 4], 0x19 */
    eax = MEM32(esi + 0x8); /* 0x0061F5DB: mov eax, dword ptr [esi + 8] */
    /* test eax, eax */ /* 0x0061F5DE: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_0061F5FD; /* 0x0061F5E0: je 0x61f5fd */
L_0061F5E2:
    PUSH32(esp, eax); /* 0x0061F5E2: push eax */
    RECOMP_ICALL(edi); /* 0x0061F5E3: call edi */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x0061F5E5: add esp, 4 */
    _flag_k = FK_ADD;
    MEM32(esi + 0x8) = 0; /* 0x0061F5E8: mov dword ptr [esi + 8], 0 */
    MEM32(esi + 0xC) = 0; /* 0x0061F5EF: mov dword ptr [esi + 0xc], 0 */
    MEM32(esi + 0x10) = 0; /* 0x0061F5F6: mov dword ptr [esi + 0x10], 0 */
L_0061F5FD:
    MEM8(ebp + (-0x4)) = (uint8_t)(4); /* 0x0061F5FD: mov byte ptr [ebp - 4], 4 */
    MEM32(ebp + (-0x10)) = esi; /* 0x0061F601: mov dword ptr [ebp - 0x10], esi */
    MEM8(ebp + (-0x4)) = (uint8_t)(0x1Bu); /* 0x0061F604: mov byte ptr [ebp - 4], 0x1b */
    eax = MEM32(esi); /* 0x0061F608: mov eax, dword ptr [esi] */
    ecx = MEM32(eax); /* 0x0061F60A: mov ecx, dword ptr [eax] */
    MEM32(eax) = eax; /* 0x0061F60C: mov dword ptr [eax], eax */
    eax = MEM32(esi); /* 0x0061F60E: mov eax, dword ptr [esi] */
    MEM32(eax + 0x4) = eax; /* 0x0061F610: mov dword ptr [eax + 4], eax */
    MEM32(esi + 0x4) = 0; /* 0x0061F613: mov dword ptr [esi + 4], 0 */
    /* cmp ecx, MEM32(esi) */ /* 0x0061F61A: cmp ecx, dword ptr [esi] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(MEM32(esi));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_0061F638; /* 0x0061F61C: je 0x61f638 */
L_0061F61E:
    edi = edi; /* 0x0061F61E: mov edi, edi */
L_0061F620:
    esi = MEM32(ecx); /* 0x0061F620: mov esi, dword ptr [ecx] */
    PUSH32(esp, ecx); /* 0x0061F622: push ecx */
    RECOMP_ICALL(edi); /* 0x0061F623: call edi */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x0061F625: add esp, 4 */
    _flag_k = FK_ADD;
    ecx = esi; /* 0x0061F628: mov ecx, esi */
    /* cmp esi, MEM32(ebx + 0x554) */ /* 0x0061F62A: cmp esi, dword ptr [ebx + 0x554] */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(MEM32(ebx + 0x554));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_NE(_flag_a, _flag_b)) goto L_0061F620; /* 0x0061F630: jne 0x61f620 */
L_0061F632:
    esi = ebx + 0x554; /* 0x0061F632: lea esi, [ebx + 0x554] */
L_0061F638:
    MEM8(ebp + (-0x4)) = (uint8_t)(4); /* 0x0061F638: mov byte ptr [ebp - 4], 4 */
    PUSH32(esp, MEM32(esi)); /* 0x0061F63C: push dword ptr [esi] */
    RECOMP_ICALL(edi); /* 0x0061F63E: call edi */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x0061F640: add esp, 4 */
    _flag_k = FK_ADD;
    MEM8(ebp + (-0x4)) = (uint8_t)(3); /* 0x0061F643: mov byte ptr [ebp - 4], 3 */
    esi = ebx + 0x534; /* 0x0061F647: lea esi, [ebx + 0x534] */
    MEM32(ebp + (-0x10)) = esi; /* 0x0061F64D: mov dword ptr [ebp - 0x10], esi */
    MEM8(ebp + (-0x4)) = (uint8_t)(0x1Eu); /* 0x0061F650: mov byte ptr [ebp - 4], 0x1e */
    eax = MEM32(esi + 0x8); /* 0x0061F654: mov eax, dword ptr [esi + 8] */
    /* test eax, eax */ /* 0x0061F657: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_0061F676; /* 0x0061F659: je 0x61f676 */
L_0061F65B:
    PUSH32(esp, eax); /* 0x0061F65B: push eax */
    RECOMP_ICALL(edi); /* 0x0061F65C: call edi */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x0061F65E: add esp, 4 */
    _flag_k = FK_ADD;
    MEM32(esi + 0x8) = 0; /* 0x0061F661: mov dword ptr [esi + 8], 0 */
    MEM32(esi + 0xC) = 0; /* 0x0061F668: mov dword ptr [esi + 0xc], 0 */
    MEM32(esi + 0x10) = 0; /* 0x0061F66F: mov dword ptr [esi + 0x10], 0 */
L_0061F676:
    MEM8(ebp + (-0x4)) = (uint8_t)(3); /* 0x0061F676: mov byte ptr [ebp - 4], 3 */
    MEM32(ebp + (-0x10)) = esi; /* 0x0061F67A: mov dword ptr [ebp - 0x10], esi */
    MEM8(ebp + (-0x4)) = (uint8_t)(0x20u); /* 0x0061F67D: mov byte ptr [ebp - 4], 0x20 */
    eax = MEM32(esi); /* 0x0061F681: mov eax, dword ptr [esi] */
    ecx = MEM32(eax); /* 0x0061F683: mov ecx, dword ptr [eax] */
    MEM32(eax) = eax; /* 0x0061F685: mov dword ptr [eax], eax */
    eax = MEM32(esi); /* 0x0061F687: mov eax, dword ptr [esi] */
    MEM32(eax + 0x4) = eax; /* 0x0061F689: mov dword ptr [eax + 4], eax */
    MEM32(esi + 0x4) = 0; /* 0x0061F68C: mov dword ptr [esi + 4], 0 */
    /* cmp ecx, MEM32(esi) */ /* 0x0061F693: cmp ecx, dword ptr [esi] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(MEM32(esi));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_0061F6AF; /* 0x0061F695: je 0x61f6af */
L_0061F697:
    esi = MEM32(ecx); /* 0x0061F697: mov esi, dword ptr [ecx] */
    PUSH32(esp, ecx); /* 0x0061F699: push ecx */
    RECOMP_ICALL(edi); /* 0x0061F69A: call edi */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x0061F69C: add esp, 4 */
    _flag_k = FK_ADD;
    ecx = esi; /* 0x0061F69F: mov ecx, esi */
    /* cmp esi, MEM32(ebx + 0x534) */ /* 0x0061F6A1: cmp esi, dword ptr [ebx + 0x534] */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(MEM32(ebx + 0x534));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_NE(_flag_a, _flag_b)) goto L_0061F697; /* 0x0061F6A7: jne 0x61f697 */
L_0061F6A9:
    esi = ebx + 0x534; /* 0x0061F6A9: lea esi, [ebx + 0x534] */
L_0061F6AF:
    MEM8(ebp + (-0x4)) = (uint8_t)(3); /* 0x0061F6AF: mov byte ptr [ebp - 4], 3 */
    PUSH32(esp, MEM32(esi)); /* 0x0061F6B3: push dword ptr [esi] */
    RECOMP_ICALL(edi); /* 0x0061F6B5: call edi */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x0061F6B7: add esp, 4 */
    _flag_k = FK_ADD;
    MEM8(ebp + (-0x4)) = (uint8_t)(2); /* 0x0061F6BA: mov byte ptr [ebp - 4], 2 */
    eax = MEM32(ebx + 0x528); /* 0x0061F6BE: mov eax, dword ptr [ebx + 0x528] */
    /* test eax, eax */ /* 0x0061F6C4: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_0061F6EC; /* 0x0061F6C6: je 0x61f6ec */
L_0061F6C8:
    PUSH32(esp, eax); /* 0x0061F6C8: push eax */
    RECOMP_ICALL(edi); /* 0x0061F6C9: call edi */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x0061F6CB: add esp, 4 */
    _flag_k = FK_ADD;
    MEM32(ebx + 0x528) = 0; /* 0x0061F6CE: mov dword ptr [ebx + 0x528], 0 */
    MEM32(ebx + 0x52C) = 0; /* 0x0061F6D8: mov dword ptr [ebx + 0x52c], 0 */
    MEM32(ebx + 0x530) = 0; /* 0x0061F6E2: mov dword ptr [ebx + 0x530], 0 */
L_0061F6EC:
    MEM8(ebp + (-0x4)) = (uint8_t)(1); /* 0x0061F6EC: mov byte ptr [ebp - 4], 1 */
    /* cmp MEM32(ebx + 0x524), 0x10u */ /* 0x0061F6F0: cmp dword ptr [ebx + 0x524], 0x10 */
    _flag_a = (uint32_t)(MEM32(ebx + 0x524)); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_B(_flag_a, _flag_b)) goto L_0061F704; /* 0x0061F6F7: jb 0x61f704 */
L_0061F6F9:
    PUSH32(esp, MEM32(ebx + 0x510)); /* 0x0061F6F9: push dword ptr [ebx + 0x510] */
    RECOMP_ICALL(edi); /* 0x0061F6FF: call edi */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x0061F701: add esp, 4 */
    _flag_k = FK_ADD;
L_0061F704:
    MEM32(ebx + 0x524) = 0xFu; /* 0x0061F704: mov dword ptr [ebx + 0x524], 0xf */
    MEM32(ebx + 0x520) = 0; /* 0x0061F70E: mov dword ptr [ebx + 0x520], 0 */
    MEM8(ebx + 0x510) = (uint8_t)(0); /* 0x0061F718: mov byte ptr [ebx + 0x510], 0 */
    MEM8(ebp + (-0x4)) = (uint8_t)(0); /* 0x0061F71F: mov byte ptr [ebp - 4], 0 */
    esi = MEM32(ebx + 0x504); /* 0x0061F723: mov esi, dword ptr [ebx + 0x504] */
    /* test esi, esi */ /* 0x0061F729: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_0061F780; /* 0x0061F72B: je 0x61f780 */
L_0061F72D:
    eax = MEM32(ebx + 0x508); /* 0x0061F72D: mov eax, dword ptr [ebx + 0x508] */
    /* cmp esi, eax */ /* 0x0061F733: cmp esi, eax */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_0061F757; /* 0x0061F735: je 0x61f757 */
L_0061F737:
    edi = eax; /* 0x0061F737: mov edi, eax */
    esp = esp; /* 0x0061F739: lea esp, [esp] */
L_0061F740:
    ecx = esi; /* 0x0061F740: mov ecx, esi */
    RECOMP_CALL(sub_0061F180); /* 0x0061F742: call 0x61f180 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(0x1D4u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esi = esi + 0x1D4u; /* 0x0061F747: add esi, 0x1d4 */
    _flag_k = FK_ADD;
    /* cmp esi, edi */ /* 0x0061F74D: cmp esi, edi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_NE(_flag_a, _flag_b)) goto L_0061F740; /* 0x0061F74F: jne 0x61f740 */
L_0061F751:
    edi = MEM32(0x7CC694); /* 0x0061F751: mov edi, dword ptr [0x7cc694] */
L_0061F757:
    PUSH32(esp, MEM32(ebx + 0x504)); /* 0x0061F757: push dword ptr [ebx + 0x504] */
    RECOMP_ICALL(edi); /* 0x0061F75D: call edi */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x0061F75F: add esp, 4 */
    _flag_k = FK_ADD;
    MEM32(ebx + 0x504) = 0; /* 0x0061F762: mov dword ptr [ebx + 0x504], 0 */
    MEM32(ebx + 0x508) = 0; /* 0x0061F76C: mov dword ptr [ebx + 0x508], 0 */
    MEM32(ebx + 0x50C) = 0; /* 0x0061F776: mov dword ptr [ebx + 0x50c], 0 */
L_0061F780:
    MEM32(ebp + (-0x4)) = 0xFFFFFFFFu; /* 0x0061F780: mov dword ptr [ebp - 4], 0xffffffff */
    eax = ebx + 0x34; /* 0x0061F787: lea eax, [ebx + 0x34] */
    MEM32(ebp + (-0x14)) = eax; /* 0x0061F78A: mov dword ptr [ebp - 0x14], eax */
    MEM32(ebp + (-0x4)) = 0xFFFFFFFFu; /* 0x0061F78D: mov dword ptr [ebp - 4], 0xffffffff */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x28u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 0x28u; /* 0x0061F794: add eax, 0x28 */
    _flag_k = FK_ADD;
    PUSH32(esp, 0x0040A000u); /* 0x0061F797: push 0x40a000 */
    PUSH32(esp, 0x25u); /* 0x0061F79C: push 0x25 */
    PUSH32(esp, 0x18u); /* 0x0061F79E: push 0x18 */
    PUSH32(esp, eax); /* 0x0061F7A0: push eax */
    RECOMP_CALL(sub_0077F628); /* 0x0061F7A1: call 0x77f628 */
    RECOMP_FLAGS_IN();
    ecx = MEM32(ebp + (-0xC)); /* 0x0061F7A6: mov ecx, dword ptr [ebp - 0xc] */
    MEM32(FS_BASE + (0)) = ecx; /* 0x0061F7A9: mov dword ptr fs:[0], ecx */
    ecx = POP32_VAL(esp); /* 0x0061F7B0: pop ecx */
    edi = POP32_VAL(esp); /* 0x0061F7B1: pop edi */
    esi = POP32_VAL(esp); /* 0x0061F7B2: pop esi */
    ebx = POP32_VAL(esp); /* 0x0061F7B3: pop ebx */
    esp = ebp; /* 0x0061F7B4: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x0061F7B6: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x0061F7B7: ret  */
    RECOMP_REGS_OUT();
}

void sub_0061F7C0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0061F7C0u);

L_0061F7C0:
    PUSH32(esp, ebp); /* 0x0061F7C0: push ebp */
    ebp = esp; /* 0x0061F7C1: mov ebp, esp */
    PUSH32(esp, 0xFFFFFFFFu); /* 0x0061F7C3: push -1 */
    PUSH32(esp, 0x007B73CBu); /* 0x0061F7C5: push 0x7b73cb */
    eax = MEM32(FS_BASE + (0)); /* 0x0061F7CA: mov eax, dword ptr fs:[0] */
    PUSH32(esp, eax); /* 0x0061F7D0: push eax */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x90u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x90u; /* 0x0061F7D1: sub esp, 0x90 */
    _flag_k = FK_CMP;
    eax = MEM32(0x855000); /* 0x0061F7D7: mov eax, dword ptr [0x855000] */
    _flag_a = (uint32_t)((eax ^ ebp)); _flag_b = (uint32_t)((eax ^ ebp));
    eax = eax ^ ebp; /* 0x0061F7DC: xor eax, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x10)) = eax; /* 0x0061F7DE: mov dword ptr [ebp - 0x10], eax */
    PUSH32(esp, esi); /* 0x0061F7E1: push esi */
    PUSH32(esp, edi); /* 0x0061F7E2: push edi */
    PUSH32(esp, eax); /* 0x0061F7E3: push eax */
    eax = ebp + (-0xC); /* 0x0061F7E4: lea eax, [ebp - 0xc] */
    MEM32(FS_BASE + (0)) = eax; /* 0x0061F7E7: mov dword ptr fs:[0], eax */
    _xmm[0] = xmm_ld(ebp + 0x8); /* 0x0061F7ED: movdqu xmm0, xmmword ptr [ebp + 8] */
    esi = MEM32(0x870268); /* 0x0061F7F2: mov esi, dword ptr [0x870268] */
    xmm_st(ebp + (-0x48), _xmm[0]); /* 0x0061F7F8: movdqu xmmword ptr [ebp - 0x48], xmm0 */
    _xmm[0] = xmm_ld(ebp + 0x18); /* 0x0061F7FD: movdqu xmm0, xmmword ptr [ebp + 0x18] */
    ecx = MEM32(esi + 0x10); /* 0x0061F802: mov ecx, dword ptr [esi + 0x10] */
    xmm_st(ebp + (-0x38), _xmm[0]); /* 0x0061F805: movdqu xmmword ptr [ebp - 0x38], xmm0 */
    _xmm[0] = xmm_ld(ebp + 0x28); /* 0x0061F80A: movdqu xmm0, xmmword ptr [ebp + 0x28] */
    xmm_st(ebp + (-0x28), _xmm[0]); /* 0x0061F80F: movdqu xmmword ptr [ebp - 0x28], xmm0 */
    _xmm[0].u64[0] = MEM64(ebp + 0x38); _xmm[0].u64[1] = 0; /* 0x0061F814: movq xmm0, qword ptr [ebp + 0x38] */
    MEM64(ebp + (-0x18)) = _xmm[0].u64[0]; /* 0x0061F819: movq qword ptr [ebp - 0x18], xmm0 */
    /* test ecx, ecx */ /* 0x0061F81E: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_0061F827; /* 0x0061F820: je 0x61f827 */
L_0061F822:
    RECOMP_CALL(sub_00631310); /* 0x0061F822: call 0x631310 */
    RECOMP_FLAGS_IN();
L_0061F827:
    { xmm_t _s = _xmm[0]; for (int _k = 0; _k < 4; _k++) _xmm[0].u32[_k] = _xmm[0].u32[_k] ^ _s.u32[_k]; } /* 0x0061F827: xorps xmm0, xmm0 */
    MEM32(ebp + (-0x5C)) = 0; /* 0x0061F82A: mov dword ptr [ebp - 0x5c], 0 */
    MEM32(ebp + (-0x58)) = 0; /* 0x0061F831: mov dword ptr [ebp - 0x58], 0 */
    MEM8(esi + 0x14) = (uint8_t)(0); /* 0x0061F838: mov byte ptr [esi + 0x14], 0 */
    xmm_st(ebp + (-0x7C), _xmm[0]); /* 0x0061F83C: movdqu xmmword ptr [ebp - 0x7c], xmm0 */
    MEM32(ebp + (-0x58)) = 0xFu; /* 0x0061F841: mov dword ptr [ebp - 0x58], 0xf */
    MEM32(ebp + (-0x5C)) = 0; /* 0x0061F848: mov dword ptr [ebp - 0x5c], 0 */
    MEM8(ebp + (-0x6C)) = (uint8_t)(0); /* 0x0061F84F: mov byte ptr [ebp - 0x6c], 0 */
    MEM32(ebp + (-0x4)) = 1; /* 0x0061F853: mov dword ptr [ebp - 4], 1 */
    eax = MEM32(ebp + (-0x48)); /* 0x0061F85A: mov eax, dword ptr [ebp - 0x48] */
    MEM32(ebp + (-0x90)) = eax; /* 0x0061F85D: mov dword ptr [ebp - 0x90], eax */
    /* cmp eax, 0x600u */ /* 0x0061F863: cmp eax, 0x600 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x600u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_A(_flag_a, _flag_b)) goto L_0061FB45; /* 0x0061F868: ja 0x61fb45 */
L_0061F86E:
    if (CMP_EQ(_flag_a, _flag_b)) goto L_0061FAB5; /* 0x0061F86E: je 0x61fab5 */
L_0061F874:
    /* cmp eax, 0x300u */ /* 0x0061F874: cmp eax, 0x300 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x300u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_A(_flag_a, _flag_b)) goto L_0061F939; /* 0x0061F879: ja 0x61f939 */
L_0061F87F:
    if (CMP_EQ(_flag_a, _flag_b)) goto L_0061F8DE; /* 0x0061F87F: je 0x61f8de */
L_0061F881:
    /* cmp eax, 0x100u */ /* 0x0061F881: cmp eax, 0x100 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x100u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_0061FF7E; /* 0x0061F886: je 0x61ff7e */
L_0061F88C:
    MEM32(ebp + (-0x90)) = 0; /* 0x0061F88C: mov dword ptr [ebp - 0x90], 0 */
L_0061F896:
    MEM32(ebp + (-0x4)) = 0xFFFFFFFFu; /* 0x0061F896: mov dword ptr [ebp - 4], 0xffffffff */
    /* cmp MEM32(ebp + (-0x58)), 0x10u */ /* 0x0061F89D: cmp dword ptr [ebp - 0x58], 0x10 */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x58))); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_B(_flag_a, _flag_b)) goto L_0061F8AF; /* 0x0061F8A1: jb 0x61f8af */
L_0061F8A3:
    PUSH32(esp, MEM32(ebp + (-0x6C))); /* 0x0061F8A3: push dword ptr [ebp - 0x6c] */
    RECOMP_ICALL(MEM32(0x7CC694)); /* 0x0061F8A6: call dword ptr [0x7cc694] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x0061F8AC: add esp, 4 */
    _flag_k = FK_ADD;
L_0061F8AF:
    MEM32(ebp + (-0x58)) = 0xFu; /* 0x0061F8AF: mov dword ptr [ebp - 0x58], 0xf */
    MEM32(ebp + (-0x5C)) = 0; /* 0x0061F8B6: mov dword ptr [ebp - 0x5c], 0 */
    MEM8(ebp + (-0x6C)) = (uint8_t)(0); /* 0x0061F8BD: mov byte ptr [ebp - 0x6c], 0 */
    ecx = MEM32(ebp + (-0xC)); /* 0x0061F8C1: mov ecx, dword ptr [ebp - 0xc] */
    MEM32(FS_BASE + (0)) = ecx; /* 0x0061F8C4: mov dword ptr fs:[0], ecx */
    ecx = POP32_VAL(esp); /* 0x0061F8CB: pop ecx */
    edi = POP32_VAL(esp); /* 0x0061F8CC: pop edi */
    esi = POP32_VAL(esp); /* 0x0061F8CD: pop esi */
    ecx = MEM32(ebp + (-0x10)); /* 0x0061F8CE: mov ecx, dword ptr [ebp - 0x10] */
    _flag_a = (uint32_t)((ecx ^ ebp)); _flag_b = (uint32_t)((ecx ^ ebp));
    ecx = ecx ^ ebp; /* 0x0061F8D1: xor ecx, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_0077F4C2); /* 0x0061F8D3: call 0x77f4c2 */
    RECOMP_FLAGS_IN();
    esp = ebp; /* 0x0061F8D8: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x0061F8DA: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 60; { RECOMP_REGS_OUT(); return; } /* 0x0061F8DB: ret 0x38 */
L_0061F8DE:
    /* cmp MEM8(esi + 0x16), 0 */ /* 0x0061F8DE: cmp byte ptr [esi + 0x16], 0 */
    _flag_a = (uint32_t)(MEM8(esi + 0x16)) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_0061FF7E; /* 0x0061F8E2: jne 0x61ff7e */
L_0061F8E8:
    eax = ebp + (-0x34); /* 0x0061F8E8: lea eax, [ebp - 0x34] */
    PUSH32(esp, eax); /* 0x0061F8EB: push eax */
    ecx = esi + 0x554; /* 0x0061F8EC: lea ecx, [esi + 0x554] */
    RECOMP_CALL(sub_00625900); /* 0x0061F8F2: call 0x625900 */
    RECOMP_FLAGS_IN();
    ecx = ebp + (-0x34); /* 0x0061F8F7: lea ecx, [ebp - 0x34] */
    PUSH32(esp, ecx); /* 0x0061F8FA: push ecx */
    ecx = esi + 0x594; /* 0x0061F8FB: lea ecx, [esi + 0x594] */
    MEM8(eax) = (uint8_t)(1); /* 0x0061F901: mov byte ptr [eax], 1 */
    RECOMP_CALL(sub_00625940); /* 0x0061F904: call 0x625940 */
    RECOMP_FLAGS_IN();
    edi = eax; /* 0x0061F909: mov edi, eax */
    RECOMP_CALL(sub_006EE000); /* 0x0061F90B: call 0x6ee000 */
    RECOMP_FLAGS_IN();
    MEM32(edi) = eax; /* 0x0061F910: mov dword ptr [edi], eax */
    ecx = esi + 0x594; /* 0x0061F912: lea ecx, [esi + 0x594] */
    eax = ebp + (-0x34); /* 0x0061F918: lea eax, [ebp - 0x34] */
    PUSH32(esp, eax); /* 0x0061F91B: push eax */
    RECOMP_CALL(sub_00625940); /* 0x0061F91C: call 0x625940 */
    RECOMP_FLAGS_IN();
    MEM32(eax + 0x4) = 0; /* 0x0061F921: mov dword ptr [eax + 4], 0 */
    eax = MEM32(ebp + (-0x34)); /* 0x0061F928: mov eax, dword ptr [ebp - 0x34] */
    MEM32(ebp + (-0x8C)) = eax; /* 0x0061F92B: mov dword ptr [ebp - 0x8c], eax */
    MEM32(esi + 0x2C) = eax; /* 0x0061F931: mov dword ptr [esi + 0x2c], eax */
    goto L_0061FF7E; /* 0x0061F934: jmp 0x61ff7e */
L_0061F939:
    /* cmp eax, 0x400u */ /* 0x0061F939: cmp eax, 0x400 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x400u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_A(_flag_a, _flag_b)) goto L_0061FA1B; /* 0x0061F93E: ja 0x61fa1b */
L_0061F944:
    if (CMP_EQ(_flag_a, _flag_b)) goto L_0061F9D8; /* 0x0061F944: je 0x61f9d8 */
L_0061F94A:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x301u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - 0x301u; /* 0x0061F94A: sub eax, 0x301 */
    _flag_k = FK_CMP;
    if (/* sub result */ CMP_EQ(_flag_a, _flag_b)) goto L_0061F986; /* 0x0061F94F: je 0x61f986 */
L_0061F951:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax - 1; /* 0x0061F951: dec eax */
    _flag_k = FK_DEC;
    if (/* dec result */ CMP_EQ(_flag_a, _flag_b)) goto L_0061F96C; /* 0x0061F952: je 0x61f96c */
L_0061F954:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax - 1; /* 0x0061F954: dec eax */
    _flag_k = FK_DEC;
    RECOMP_BACKEDGE();
    if (/* dec result */ CMP_NE(_flag_a, _flag_b)) goto L_0061F88C; /* 0x0061F955: jne 0x61f88c */
L_0061F95B:
    eax = ebp + (-0x3C); /* 0x0061F95B: lea eax, [ebp - 0x3c] */
    PUSH32(esp, eax); /* 0x0061F95E: push eax */
    ecx = ebp + (-0x6C); /* 0x0061F95F: lea ecx, [ebp - 0x6c] */
    RECOMP_CALL(sub_004196F0); /* 0x0061F962: call 0x4196f0 */
    RECOMP_FLAGS_IN();
    goto L_0061FF7E; /* 0x0061F967: jmp 0x61ff7e */
L_0061F96C:
    eax = ebp + (-0x3C); /* 0x0061F96C: lea eax, [ebp - 0x3c] */
    PUSH32(esp, eax); /* 0x0061F96F: push eax */
    ecx = ebp + (-0x6C); /* 0x0061F970: lea ecx, [ebp - 0x6c] */
    RECOMP_CALL(sub_004196F0); /* 0x0061F973: call 0x4196f0 */
    RECOMP_FLAGS_IN();
    eax = MEM32(ebp + (-0x1C)); /* 0x0061F978: mov eax, dword ptr [ebp - 0x1c] */
    MEM32(ebp + (-0x88)) = eax; /* 0x0061F97B: mov dword ptr [ebp - 0x88], eax */
    goto L_0061FF7E; /* 0x0061F981: jmp 0x61ff7e */
L_0061F986:
    /* cmp MEM8(esi + 0x16), 0 */ /* 0x0061F986: cmp byte ptr [esi + 0x16], 0 */
    _flag_a = (uint32_t)(MEM8(esi + 0x16)) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_0061FF7E; /* 0x0061F98A: jne 0x61ff7e */
L_0061F990:
    eax = MEM32(esi + 0x2C); /* 0x0061F990: mov eax, dword ptr [esi + 0x2c] */
    /* cmp eax, MEM32(ebp + (-0x34)) */ /* 0x0061F993: cmp eax, dword ptr [ebp - 0x34] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(ebp + (-0x34)));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_0061F99F; /* 0x0061F996: jne 0x61f99f */
L_0061F998:
    MEM32(esi + 0x2C) = 0xFFFFFFFFu; /* 0x0061F998: mov dword ptr [esi + 0x2c], 0xffffffff */
L_0061F99F:
    eax = ebp + (-0x34); /* 0x0061F99F: lea eax, [ebp - 0x34] */
    PUSH32(esp, eax); /* 0x0061F9A2: push eax */
    ecx = esi + 0x554; /* 0x0061F9A3: lea ecx, [esi + 0x554] */
    RECOMP_CALL(sub_00625900); /* 0x0061F9A9: call 0x625900 */
    RECOMP_FLAGS_IN();
    MEM8(eax) = (uint8_t)(0); /* 0x0061F9AE: mov byte ptr [eax], 0 */
    RECOMP_CALL(sub_006EE000); /* 0x0061F9B1: call 0x6ee000 */
    RECOMP_FLAGS_IN();
    edi = eax; /* 0x0061F9B6: mov edi, eax */
    ecx = esi + 0x594; /* 0x0061F9B8: lea ecx, [esi + 0x594] */
    eax = ebp + (-0x34); /* 0x0061F9BE: lea eax, [ebp - 0x34] */
    PUSH32(esp, eax); /* 0x0061F9C1: push eax */
    RECOMP_CALL(sub_00625940); /* 0x0061F9C2: call 0x625940 */
    RECOMP_FLAGS_IN();
    MEM32(eax + 0x4) = edi; /* 0x0061F9C7: mov dword ptr [eax + 4], edi */
    eax = MEM32(ebp + (-0x34)); /* 0x0061F9CA: mov eax, dword ptr [ebp - 0x34] */
    MEM32(ebp + (-0x8C)) = eax; /* 0x0061F9CD: mov dword ptr [ebp - 0x8c], eax */
    goto L_0061FF7E; /* 0x0061F9D3: jmp 0x61ff7e */
L_0061F9D8:
    /* cmp MEM8(esi + 0x16), 0 */ /* 0x0061F9D8: cmp byte ptr [esi + 0x16], 0 */
    _flag_a = (uint32_t)(MEM8(esi + 0x16)) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_0061FF7E; /* 0x0061F9DC: jne 0x61ff7e */
L_0061F9E2:
    eax = MEM32(esi + 0x18); /* 0x0061F9E2: mov eax, dword ptr [esi + 0x18] */
    MEM32(esi + 0x20) = eax; /* 0x0061F9E5: mov dword ptr [esi + 0x20], eax */
    eax = MEM32(esi + 0x1C); /* 0x0061F9E8: mov eax, dword ptr [esi + 0x1c] */
    MEM32(esi + 0x24) = eax; /* 0x0061F9EB: mov dword ptr [esi + 0x24], eax */
    eax = MEM32(ebp + (-0x34)); /* 0x0061F9EE: mov eax, dword ptr [ebp - 0x34] */
    MEM32(esi + 0x18) = eax; /* 0x0061F9F1: mov dword ptr [esi + 0x18], eax */
    eax = MEM32(ebp + (-0x30)); /* 0x0061F9F4: mov eax, dword ptr [ebp - 0x30] */
    MEM32(esi + 0x1C) = eax; /* 0x0061F9F7: mov dword ptr [esi + 0x1c], eax */
    MEM8(esi + 0x14) = (uint8_t)(1); /* 0x0061F9FA: mov byte ptr [esi + 0x14], 1 */
L_0061F9FE:
    eax = MEM32(esi + 0x18); /* 0x0061F9FE: mov eax, dword ptr [esi + 0x18] */
    MEM32(ebp + (-0x7C)) = eax; /* 0x0061FA01: mov dword ptr [ebp - 0x7c], eax */
    eax = MEM32(esi + 0x1C); /* 0x0061FA04: mov eax, dword ptr [esi + 0x1c] */
    MEM32(ebp + (-0x78)) = eax; /* 0x0061FA07: mov dword ptr [ebp - 0x78], eax */
    eax = MEM32(esi + 0x20); /* 0x0061FA0A: mov eax, dword ptr [esi + 0x20] */
    MEM32(ebp + (-0x74)) = eax; /* 0x0061FA0D: mov dword ptr [ebp - 0x74], eax */
    eax = MEM32(esi + 0x24); /* 0x0061FA10: mov eax, dword ptr [esi + 0x24] */
    MEM32(ebp + (-0x70)) = eax; /* 0x0061FA13: mov dword ptr [ebp - 0x70], eax */
    goto L_0061FF7E; /* 0x0061FA16: jmp 0x61ff7e */
L_0061FA1B:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x401u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - 0x401u; /* 0x0061FA1B: sub eax, 0x401 */
    _flag_k = FK_CMP;
    if (/* sub result */ CMP_EQ(_flag_a, _flag_b)) goto L_0061FA7B; /* 0x0061FA20: je 0x61fa7b */
L_0061FA22:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax - 1; /* 0x0061FA22: dec eax */
    _flag_k = FK_DEC;
    if (/* dec result */ CMP_EQ(_flag_a, _flag_b)) goto L_0061FA46; /* 0x0061FA23: je 0x61fa46 */
L_0061FA25:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax - 1; /* 0x0061FA25: dec eax */
    _flag_k = FK_DEC;
    RECOMP_BACKEDGE();
    if (/* dec result */ CMP_NE(_flag_a, _flag_b)) goto L_0061F88C; /* 0x0061FA26: jne 0x61f88c */
L_0061FA2C:
    /* cmp MEM8(esi + 0x16), LO8(eax) */ /* 0x0061FA2C: cmp byte ptr [esi + 0x16], al */
    _flag_a = (uint32_t)(MEM8(esi + 0x16)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_0061FF7E; /* 0x0061FA2F: jne 0x61ff7e */
L_0061FA35:
    eax = MEM32(ebp + (-0x34)); /* 0x0061FA35: mov eax, dword ptr [ebp - 0x34] */
    MEM32(ebp + (-0x8C)) = eax; /* 0x0061FA38: mov dword ptr [ebp - 0x8c], eax */
    MEM32(esi + 0x28) = eax; /* 0x0061FA3E: mov dword ptr [esi + 0x28], eax */
    goto L_0061FF7E; /* 0x0061FA41: jmp 0x61ff7e */
L_0061FA46:
    /* cmp MEM8(esi + 0x16), 0 */ /* 0x0061FA46: cmp byte ptr [esi + 0x16], 0 */
    _flag_a = (uint32_t)(MEM8(esi + 0x16)) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_0061FF7E; /* 0x0061FA4A: jne 0x61ff7e */
L_0061FA50:
    eax = (uint32_t)MEM8(ebp + (-0x38)); /* 0x0061FA50: movzx eax, byte ptr [ebp - 0x38] */
    ecx = esi + 0x574; /* 0x0061FA54: lea ecx, [esi + 0x574] */
    MEM32(ebp + (-0x9C)) = eax; /* 0x0061FA5A: mov dword ptr [ebp - 0x9c], eax */
    eax = ebp + (-0x9C); /* 0x0061FA60: lea eax, [ebp - 0x9c] */
    PUSH32(esp, eax); /* 0x0061FA66: push eax */
    RECOMP_CALL(sub_00625900); /* 0x0061FA67: call 0x625900 */
    RECOMP_FLAGS_IN();
    MEM8(eax) = (uint8_t)(0); /* 0x0061FA6C: mov byte ptr [eax], 0 */
    eax = (uint32_t)MEM8(ebp + (-0x38)); /* 0x0061FA6F: movzx eax, byte ptr [ebp - 0x38] */
    MEM32(ebp + (-0x8C)) = eax; /* 0x0061FA73: mov dword ptr [ebp - 0x8c], eax */
    RECOMP_BACKEDGE();
    goto L_0061F9FE; /* 0x0061FA79: jmp 0x61f9fe */
L_0061FA7B:
    /* cmp MEM8(esi + 0x16), 0 */ /* 0x0061FA7B: cmp byte ptr [esi + 0x16], 0 */
    _flag_a = (uint32_t)(MEM8(esi + 0x16)) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_0061FF7E; /* 0x0061FA7F: jne 0x61ff7e */
L_0061FA85:
    eax = (uint32_t)MEM8(ebp + (-0x38)); /* 0x0061FA85: movzx eax, byte ptr [ebp - 0x38] */
    ecx = esi + 0x574; /* 0x0061FA89: lea ecx, [esi + 0x574] */
    MEM32(ebp + (-0x98)) = eax; /* 0x0061FA8F: mov dword ptr [ebp - 0x98], eax */
    eax = ebp + (-0x98); /* 0x0061FA95: lea eax, [ebp - 0x98] */
    PUSH32(esp, eax); /* 0x0061FA9B: push eax */
    RECOMP_CALL(sub_00625900); /* 0x0061FA9C: call 0x625900 */
    RECOMP_FLAGS_IN();
    SET_LO8(ecx, MEM8(ebp + (-0x36))); /* 0x0061FAA1: mov cl, byte ptr [ebp - 0x36] */
    MEM8(eax) = (uint8_t)(LO8(ecx)); /* 0x0061FAA4: mov byte ptr [eax], cl */
    eax = (uint32_t)MEM8(ebp + (-0x38)); /* 0x0061FAA6: movzx eax, byte ptr [ebp - 0x38] */
    MEM32(ebp + (-0x8C)) = eax; /* 0x0061FAAA: mov dword ptr [ebp - 0x8c], eax */
    RECOMP_BACKEDGE();
    goto L_0061F9FE; /* 0x0061FAB0: jmp 0x61f9fe */
L_0061FAB5:
    /* cmp MEM8(esi + 0x16), 0 */ /* 0x0061FAB5: cmp byte ptr [esi + 0x16], 0 */
    _flag_a = (uint32_t)(MEM8(esi + 0x16)) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_0061FF7E; /* 0x0061FAB9: jne 0x61ff7e */
L_0061FABF:
    eax = ebp + (-0x94); /* 0x0061FABF: lea eax, [ebp - 0x94] */
    ecx = esi; /* 0x0061FAC5: mov ecx, esi */
    PUSH32(esp, eax); /* 0x0061FAC7: push eax */
    PUSH32(esp, MEM32(ebp + (-0x40))); /* 0x0061FAC8: push dword ptr [ebp - 0x40] */
    RECOMP_CALL(sub_00622880); /* 0x0061FACB: call 0x622880 */
    RECOMP_FLAGS_IN();
    /* test LO8(eax), LO8(eax) */ /* 0x0061FAD0: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_0061FF1E; /* 0x0061FAD2: je 0x61ff1e */
L_0061FAD8:
    edx = MEM32(ebp + (-0x94)); /* 0x0061FAD8: mov edx, dword ptr [ebp - 0x94] */
    eax = MEM32(esi + 0x504); /* 0x0061FADE: mov eax, dword ptr [esi + 0x504] */
    ecx = (uint32_t)((int32_t)edx * (int32_t)0x1D4u); /* 0x0061FAE4: imul ecx, edx, 0x1d4 */
    /* cmp MEM8(eax + ecx + 0x1C8), 2 */ /* 0x0061FAEA: cmp byte ptr [eax + ecx + 0x1c8], 2 */
    _flag_a = (uint32_t)(MEM8(eax + ecx + 0x1C8)) << 24; _flag_b = (uint32_t)(2) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_0061FF7E; /* 0x0061FAF2: je 0x61ff7e */
L_0061FAF8:
    eax = MEM32(esi + 0x52C); /* 0x0061FAF8: mov eax, dword ptr [esi + 0x52c] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edi = 0; /* 0x0061FAFE: xor edi, edi */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(esi + 0x528));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - MEM32(esi + 0x528); /* 0x0061FB00: sub eax, dword ptr [esi + 0x528] */
    _flag_k = FK_CMP;
    if (2u) _cf = (((eax) >> 1) & 1u); /* 0x0061FB06: sar eax, 2 */
    if (2u) { _flag_a = recomp_flags_pack(((uint32_t)((int32_t)eax >> 2u)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = (uint32_t)((int32_t)eax >> 2u);
    /* test eax, eax */ /* 0x0061FB09: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_0061FF1E; /* 0x0061FB0B: je 0x61ff1e */
L_0061FB11:
    eax = MEM32(esi + 0x528); /* 0x0061FB11: mov eax, dword ptr [esi + 0x528] */
    PUSH32(esp, MEM32(ebp + (-0x38))); /* 0x0061FB17: push dword ptr [ebp - 0x38] */
    PUSH32(esp, MEM32(ebp + (-0x3C))); /* 0x0061FB1A: push dword ptr [ebp - 0x3c] */
    ecx = MEM32(eax + edi * 4); /* 0x0061FB1D: mov ecx, dword ptr [eax + edi*4] */
    PUSH32(esp, edx); /* 0x0061FB20: push edx */
    eax = MEM32(ecx); /* 0x0061FB21: mov eax, dword ptr [ecx] */
    RECOMP_ICALL(MEM32(eax + 0x28)); /* 0x0061FB23: call dword ptr [eax + 0x28] */
    RECOMP_FLAGS_IN();
    eax = MEM32(esi + 0x52C); /* 0x0061FB26: mov eax, dword ptr [esi + 0x52c] */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(1);
    edi = edi + 1; /* 0x0061FB2C: inc edi */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(esi + 0x528));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - MEM32(esi + 0x528); /* 0x0061FB2D: sub eax, dword ptr [esi + 0x528] */
    _flag_k = FK_CMP;
    edx = MEM32(ebp + (-0x94)); /* 0x0061FB33: mov edx, dword ptr [ebp - 0x94] */
    if (2u) _cf = (((eax) >> 1) & 1u); /* 0x0061FB39: sar eax, 2 */
    if (2u) { _flag_a = recomp_flags_pack(((uint32_t)((int32_t)eax >> 2u)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = (uint32_t)((int32_t)eax >> 2u);
    /* cmp edi, eax */ /* 0x0061FB3C: cmp edi, eax */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_0061FB11; /* 0x0061FB3E: jb 0x61fb11 */
L_0061FB40:
    goto L_0061FF1E; /* 0x0061FB40: jmp 0x61ff1e */
L_0061FB45:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xFFFFF9FEu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 0xFFFFF9FEu; /* 0x0061FB45: add eax, 0xfffff9fe */
    _flag_k = FK_ADD;
    /* cmp eax, 0x50u */ /* 0x0061FB4A: cmp eax, 0x50 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x50u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_A(_flag_a, _flag_b)) goto L_0061F88C; /* 0x0061FB4D: ja 0x61f88c */
L_0061FB53:
    eax = (uint32_t)MEM8(eax + 0x6204A4); /* 0x0061FB53: movzx eax, byte ptr [eax + 0x6204a4] */
    { _itail_tgt = (uint32_t)(MEM32(eax * 4 + 0x620480)); goto _ljump; }
L_0061FB61:
    /* cmp MEM8(esi + 0x16), 0 */ /* 0x0061FB61: cmp byte ptr [esi + 0x16], 0 */
    _flag_a = (uint32_t)(MEM8(esi + 0x16)) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_0061FF7E; /* 0x0061FB65: jne 0x61ff7e */
L_0061FB6B:
    eax = ebp + (-0x94); /* 0x0061FB6B: lea eax, [ebp - 0x94] */
    ecx = esi; /* 0x0061FB71: mov ecx, esi */
    PUSH32(esp, eax); /* 0x0061FB73: push eax */
    PUSH32(esp, MEM32(ebp + (-0x40))); /* 0x0061FB74: push dword ptr [ebp - 0x40] */
    RECOMP_CALL(sub_00622880); /* 0x0061FB77: call 0x622880 */
    RECOMP_FLAGS_IN();
    /* test LO8(eax), LO8(eax) */ /* 0x0061FB7C: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_0061FBCB; /* 0x0061FB7E: je 0x61fbcb */
L_0061FB80:
    eax = MEM32(esi + 0x52C); /* 0x0061FB80: mov eax, dword ptr [esi + 0x52c] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edi = 0; /* 0x0061FB86: xor edi, edi */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(esi + 0x528));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - MEM32(esi + 0x528); /* 0x0061FB88: sub eax, dword ptr [esi + 0x528] */
    _flag_k = FK_CMP;
    if (2u) _cf = (((eax) >> 1) & 1u); /* 0x0061FB8E: sar eax, 2 */
    if (2u) { _flag_a = recomp_flags_pack(((uint32_t)((int32_t)eax >> 2u)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = (uint32_t)((int32_t)eax >> 2u);
    /* test eax, eax */ /* 0x0061FB91: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_0061FBCB; /* 0x0061FB93: je 0x61fbcb */
L_0061FB95:
    goto L_0061FBA0; /* 0x0061FB95: jmp 0x61fba0 */
L_0061FBA0:
    eax = MEM32(esi + 0x528); /* 0x0061FBA0: mov eax, dword ptr [esi + 0x528] */
    PUSH32(esp, MEM32(ebp + (-0x3C))); /* 0x0061FBA6: push dword ptr [ebp - 0x3c] */
    PUSH32(esp, MEM32(ebp + (-0x94))); /* 0x0061FBA9: push dword ptr [ebp - 0x94] */
    ecx = MEM32(eax + edi * 4); /* 0x0061FBAF: mov ecx, dword ptr [eax + edi*4] */
    eax = MEM32(ecx); /* 0x0061FBB2: mov eax, dword ptr [ecx] */
    RECOMP_ICALL(MEM32(eax + 0x18)); /* 0x0061FBB4: call dword ptr [eax + 0x18] */
    RECOMP_FLAGS_IN();
    eax = MEM32(esi + 0x52C); /* 0x0061FBB7: mov eax, dword ptr [esi + 0x52c] */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(1);
    edi = edi + 1; /* 0x0061FBBD: inc edi */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(esi + 0x528));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - MEM32(esi + 0x528); /* 0x0061FBBE: sub eax, dword ptr [esi + 0x528] */
    _flag_k = FK_CMP;
    if (2u) _cf = (((eax) >> 1) & 1u); /* 0x0061FBC4: sar eax, 2 */
    if (2u) { _flag_a = recomp_flags_pack(((uint32_t)((int32_t)eax >> 2u)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = (uint32_t)((int32_t)eax >> 2u);
    /* cmp edi, eax */ /* 0x0061FBC7: cmp edi, eax */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_0061FBA0; /* 0x0061FBC9: jb 0x61fba0 */
L_0061FBCB:
    ecx = (uint32_t)((int32_t)MEM32(esi + 0x3D8) * (int32_t)0x1D4u); /* 0x0061FBCB: imul ecx, dword ptr [esi + 0x3d8], 0x1d4 */
    eax = MEM32(esi + 0x504); /* 0x0061FBD5: mov eax, dword ptr [esi + 0x504] */
    edx = MEM32(ebp + (-0x40)); /* 0x0061FBDB: mov edx, dword ptr [ebp - 0x40] */
    /* cmp MEM32(ecx + eax + 0x30), edx */ /* 0x0061FBDE: cmp dword ptr [ecx + eax + 0x30], edx */
    _flag_a = (uint32_t)(MEM32(ecx + eax + 0x30)); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_0061FF7E; /* 0x0061FBE2: jne 0x61ff7e */
L_0061FBE8:
    SET_LO8(eax, MEM8(ebp + (-0x3C))); /* 0x0061FBE8: mov al, byte ptr [ebp - 0x3c] */
    ecx = esi + 0x534; /* 0x0061FBEB: lea ecx, [esi + 0x534] */
    MEM8(esi + 0x30) = (uint8_t)(LO8(eax)); /* 0x0061FBF1: mov byte ptr [esi + 0x30], al */
    MEM8(ebp + (-0x84)) = (uint8_t)(LO8(eax)); /* 0x0061FBF4: mov byte ptr [ebp - 0x84], al */
    eax = ebp + (-0x3C); /* 0x0061FBFA: lea eax, [ebp - 0x3c] */
    PUSH32(esp, eax); /* 0x0061FBFD: push eax */
    RECOMP_CALL(sub_00625850); /* 0x0061FBFE: call 0x625850 */
    RECOMP_FLAGS_IN();
    ecx = ebp + (-0x3C); /* 0x0061FC03: lea ecx, [ebp - 0x3c] */
    PUSH32(esp, ecx); /* 0x0061FC06: push ecx */
    ecx = esi + 0x5B4; /* 0x0061FC07: lea ecx, [esi + 0x5b4] */
    MEM8(eax) = (uint8_t)(1); /* 0x0061FC0D: mov byte ptr [eax], 1 */
    RECOMP_CALL(sub_00625980); /* 0x0061FC10: call 0x625980 */
    RECOMP_FLAGS_IN();
    edi = eax; /* 0x0061FC15: mov edi, eax */
    RECOMP_CALL(sub_006EE000); /* 0x0061FC17: call 0x6ee000 */
    RECOMP_FLAGS_IN();
    MEM32(edi) = eax; /* 0x0061FC1C: mov dword ptr [edi], eax */
    ecx = esi + 0x5B4; /* 0x0061FC1E: lea ecx, [esi + 0x5b4] */
    eax = ebp + (-0x3C); /* 0x0061FC24: lea eax, [ebp - 0x3c] */
    PUSH32(esp, eax); /* 0x0061FC27: push eax */
    RECOMP_CALL(sub_00625980); /* 0x0061FC28: call 0x625980 */
    RECOMP_FLAGS_IN();
    MEM32(eax + 0x4) = 0; /* 0x0061FC2D: mov dword ptr [eax + 4], 0 */
    goto L_0061FF7E; /* 0x0061FC34: jmp 0x61ff7e */
L_0061FC39:
    /* cmp MEM8(esi + 0x16), 0 */ /* 0x0061FC39: cmp byte ptr [esi + 0x16], 0 */
    _flag_a = (uint32_t)(MEM8(esi + 0x16)) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_0061FF7E; /* 0x0061FC3D: jne 0x61ff7e */
L_0061FC43:
    eax = ebp + (-0x94); /* 0x0061FC43: lea eax, [ebp - 0x94] */
    ecx = esi; /* 0x0061FC49: mov ecx, esi */
    PUSH32(esp, eax); /* 0x0061FC4B: push eax */
    PUSH32(esp, MEM32(ebp + (-0x40))); /* 0x0061FC4C: push dword ptr [ebp - 0x40] */
    RECOMP_CALL(sub_00622880); /* 0x0061FC4F: call 0x622880 */
    RECOMP_FLAGS_IN();
    /* test LO8(eax), LO8(eax) */ /* 0x0061FC54: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_0061FCBC; /* 0x0061FC56: je 0x61fcbc */
L_0061FC58:
    edx = MEM32(ebp + (-0x94)); /* 0x0061FC58: mov edx, dword ptr [ebp - 0x94] */
    eax = MEM32(esi + 0x504); /* 0x0061FC5E: mov eax, dword ptr [esi + 0x504] */
    ecx = (uint32_t)((int32_t)edx * (int32_t)0x1D4u); /* 0x0061FC64: imul ecx, edx, 0x1d4 */
    /* cmp MEM8(eax + ecx + 0x1C8), 2 */ /* 0x0061FC6A: cmp byte ptr [eax + ecx + 0x1c8], 2 */
    _flag_a = (uint32_t)(MEM8(eax + ecx + 0x1C8)) << 24; _flag_b = (uint32_t)(2) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_0061FF7E; /* 0x0061FC72: je 0x61ff7e */
L_0061FC78:
    eax = MEM32(esi + 0x52C); /* 0x0061FC78: mov eax, dword ptr [esi + 0x52c] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edi = 0; /* 0x0061FC7E: xor edi, edi */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(esi + 0x528));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - MEM32(esi + 0x528); /* 0x0061FC80: sub eax, dword ptr [esi + 0x528] */
    _flag_k = FK_CMP;
    if (2u) _cf = (((eax) >> 1) & 1u); /* 0x0061FC86: sar eax, 2 */
    if (2u) { _flag_a = recomp_flags_pack(((uint32_t)((int32_t)eax >> 2u)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = (uint32_t)((int32_t)eax >> 2u);
    /* test eax, eax */ /* 0x0061FC89: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_0061FCBC; /* 0x0061FC8B: je 0x61fcbc */
L_0061FC8D:
    ecx = ecx; /* 0x0061FC8D: lea ecx, [ecx] */
L_0061FC90:
    eax = MEM32(esi + 0x528); /* 0x0061FC90: mov eax, dword ptr [esi + 0x528] */
    PUSH32(esp, MEM32(ebp + (-0x3B))); /* 0x0061FC96: push dword ptr [ebp - 0x3b] */
    PUSH32(esp, edx); /* 0x0061FC99: push edx */
    ecx = MEM32(eax + edi * 4); /* 0x0061FC9A: mov ecx, dword ptr [eax + edi*4] */
    eax = MEM32(ecx); /* 0x0061FC9D: mov eax, dword ptr [ecx] */
    RECOMP_ICALL(MEM32(eax + 0x30)); /* 0x0061FC9F: call dword ptr [eax + 0x30] */
    RECOMP_FLAGS_IN();
    eax = MEM32(esi + 0x52C); /* 0x0061FCA2: mov eax, dword ptr [esi + 0x52c] */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(1);
    edi = edi + 1; /* 0x0061FCA8: inc edi */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(esi + 0x528));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - MEM32(esi + 0x528); /* 0x0061FCA9: sub eax, dword ptr [esi + 0x528] */
    _flag_k = FK_CMP;
    edx = MEM32(ebp + (-0x94)); /* 0x0061FCAF: mov edx, dword ptr [ebp - 0x94] */
    if (2u) _cf = (((eax) >> 1) & 1u); /* 0x0061FCB5: sar eax, 2 */
    if (2u) { _flag_a = recomp_flags_pack(((uint32_t)((int32_t)eax >> 2u)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = (uint32_t)((int32_t)eax >> 2u);
    /* cmp edi, eax */ /* 0x0061FCB8: cmp edi, eax */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_0061FC90; /* 0x0061FCBA: jb 0x61fc90 */
L_0061FCBC:
    SET_LO8(eax, MEM8(ebp + (-0x3B))); /* 0x0061FCBC: mov al, byte ptr [ebp - 0x3b] */
    MEM8(ebp + (-0x50)) = (uint8_t)(LO8(eax)); /* 0x0061FCBF: mov byte ptr [ebp - 0x50], al */
    MEM8(esi + 0x3D4) = (uint8_t)(LO8(eax)); /* 0x0061FCC2: mov byte ptr [esi + 0x3d4], al */
    goto L_0061FF7E; /* 0x0061FCC8: jmp 0x61ff7e */
L_0061FCCD:
    /* cmp MEM8(esi + 0x16), 0 */ /* 0x0061FCCD: cmp byte ptr [esi + 0x16], 0 */
    _flag_a = (uint32_t)(MEM8(esi + 0x16)) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_0061FF7E; /* 0x0061FCD1: jne 0x61ff7e */
L_0061FCD7:
    eax = ebp + (-0x94); /* 0x0061FCD7: lea eax, [ebp - 0x94] */
    ecx = esi; /* 0x0061FCDD: mov ecx, esi */
    PUSH32(esp, eax); /* 0x0061FCDF: push eax */
    PUSH32(esp, MEM32(ebp + (-0x40))); /* 0x0061FCE0: push dword ptr [ebp - 0x40] */
    RECOMP_CALL(sub_00622880); /* 0x0061FCE3: call 0x622880 */
    RECOMP_FLAGS_IN();
    /* test LO8(eax), LO8(eax) */ /* 0x0061FCE8: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    RECOMP_BACKEDGE();
    if (TEST_Z(_flag_a, _flag_b)) goto L_0061FBCB; /* 0x0061FCEA: je 0x61fbcb */
L_0061FCF0:
    edx = MEM32(ebp + (-0x94)); /* 0x0061FCF0: mov edx, dword ptr [ebp - 0x94] */
    eax = MEM32(esi + 0x504); /* 0x0061FCF6: mov eax, dword ptr [esi + 0x504] */
    ecx = (uint32_t)((int32_t)edx * (int32_t)0x1D4u); /* 0x0061FCFC: imul ecx, edx, 0x1d4 */
    /* cmp MEM8(eax + ecx + 0x1C8), 2 */ /* 0x0061FD02: cmp byte ptr [eax + ecx + 0x1c8], 2 */
    _flag_a = (uint32_t)(MEM8(eax + ecx + 0x1C8)) << 24; _flag_b = (uint32_t)(2) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_0061FF7E; /* 0x0061FD0A: je 0x61ff7e */
L_0061FD10:
    eax = MEM32(esi + 0x52C); /* 0x0061FD10: mov eax, dword ptr [esi + 0x52c] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edi = 0; /* 0x0061FD16: xor edi, edi */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(esi + 0x528));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - MEM32(esi + 0x528); /* 0x0061FD18: sub eax, dword ptr [esi + 0x528] */
    _flag_k = FK_CMP;
    if (2u) _cf = (((eax) >> 1) & 1u); /* 0x0061FD1E: sar eax, 2 */
    if (2u) { _flag_a = recomp_flags_pack(((uint32_t)((int32_t)eax >> 2u)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = (uint32_t)((int32_t)eax >> 2u);
    /* test eax, eax */ /* 0x0061FD21: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_Z(_flag_a, _flag_b)) goto L_0061FBCB; /* 0x0061FD23: je 0x61fbcb */
L_0061FD29:
    esp = esp; /* 0x0061FD29: lea esp, [esp] */
L_0061FD30:
    eax = MEM32(esi + 0x528); /* 0x0061FD30: mov eax, dword ptr [esi + 0x528] */
    PUSH32(esp, MEM32(ebp + (-0x3C))); /* 0x0061FD36: push dword ptr [ebp - 0x3c] */
    PUSH32(esp, edx); /* 0x0061FD39: push edx */
    ecx = MEM32(eax + edi * 4); /* 0x0061FD3A: mov ecx, dword ptr [eax + edi*4] */
    eax = MEM32(ecx); /* 0x0061FD3D: mov eax, dword ptr [ecx] */
    RECOMP_ICALL(MEM32(eax + 0x18)); /* 0x0061FD3F: call dword ptr [eax + 0x18] */
    RECOMP_FLAGS_IN();
    eax = MEM32(esi + 0x52C); /* 0x0061FD42: mov eax, dword ptr [esi + 0x52c] */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(1);
    edi = edi + 1; /* 0x0061FD48: inc edi */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(esi + 0x528));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - MEM32(esi + 0x528); /* 0x0061FD49: sub eax, dword ptr [esi + 0x528] */
    _flag_k = FK_CMP;
    edx = MEM32(ebp + (-0x94)); /* 0x0061FD4F: mov edx, dword ptr [ebp - 0x94] */
    if (2u) _cf = (((eax) >> 1) & 1u); /* 0x0061FD55: sar eax, 2 */
    if (2u) { _flag_a = recomp_flags_pack(((uint32_t)((int32_t)eax >> 2u)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = (uint32_t)((int32_t)eax >> 2u);
    /* cmp edi, eax */ /* 0x0061FD58: cmp edi, eax */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_0061FD30; /* 0x0061FD5A: jb 0x61fd30 */
L_0061FD5C:
    RECOMP_BACKEDGE();
    goto L_0061FBCB; /* 0x0061FD5C: jmp 0x61fbcb */
L_0061FD61:
    /* cmp MEM8(esi + 0x16), 0 */ /* 0x0061FD61: cmp byte ptr [esi + 0x16], 0 */
    _flag_a = (uint32_t)(MEM8(esi + 0x16)) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_0061FF7E; /* 0x0061FD65: jne 0x61ff7e */
L_0061FD6B:
    eax = ebp + (-0x94); /* 0x0061FD6B: lea eax, [ebp - 0x94] */
    ecx = esi; /* 0x0061FD71: mov ecx, esi */
    PUSH32(esp, eax); /* 0x0061FD73: push eax */
    PUSH32(esp, MEM32(ebp + (-0x40))); /* 0x0061FD74: push dword ptr [ebp - 0x40] */
    RECOMP_CALL(sub_00622880); /* 0x0061FD77: call 0x622880 */
    RECOMP_FLAGS_IN();
    /* test LO8(eax), LO8(eax) */ /* 0x0061FD7C: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_0061FDCB; /* 0x0061FD7E: je 0x61fdcb */
L_0061FD80:
    eax = MEM32(esi + 0x52C); /* 0x0061FD80: mov eax, dword ptr [esi + 0x52c] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edi = 0; /* 0x0061FD86: xor edi, edi */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(esi + 0x528));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - MEM32(esi + 0x528); /* 0x0061FD88: sub eax, dword ptr [esi + 0x528] */
    _flag_k = FK_CMP;
    if (2u) _cf = (((eax) >> 1) & 1u); /* 0x0061FD8E: sar eax, 2 */
    if (2u) { _flag_a = recomp_flags_pack(((uint32_t)((int32_t)eax >> 2u)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = (uint32_t)((int32_t)eax >> 2u);
    /* test eax, eax */ /* 0x0061FD91: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_0061FDCB; /* 0x0061FD93: je 0x61fdcb */
L_0061FD95:
    goto L_0061FDA0; /* 0x0061FD95: jmp 0x61fda0 */
L_0061FDA0:
    eax = MEM32(esi + 0x528); /* 0x0061FDA0: mov eax, dword ptr [esi + 0x528] */
    PUSH32(esp, MEM32(ebp + (-0x3C))); /* 0x0061FDA6: push dword ptr [ebp - 0x3c] */
    PUSH32(esp, MEM32(ebp + (-0x94))); /* 0x0061FDA9: push dword ptr [ebp - 0x94] */
    ecx = MEM32(eax + edi * 4); /* 0x0061FDAF: mov ecx, dword ptr [eax + edi*4] */
    eax = MEM32(ecx); /* 0x0061FDB2: mov eax, dword ptr [ecx] */
    RECOMP_ICALL(MEM32(eax + 0x20)); /* 0x0061FDB4: call dword ptr [eax + 0x20] */
    RECOMP_FLAGS_IN();
    eax = MEM32(esi + 0x52C); /* 0x0061FDB7: mov eax, dword ptr [esi + 0x52c] */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(1);
    edi = edi + 1; /* 0x0061FDBD: inc edi */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(esi + 0x528));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - MEM32(esi + 0x528); /* 0x0061FDBE: sub eax, dword ptr [esi + 0x528] */
    _flag_k = FK_CMP;
    if (2u) _cf = (((eax) >> 1) & 1u); /* 0x0061FDC4: sar eax, 2 */
    if (2u) { _flag_a = recomp_flags_pack(((uint32_t)((int32_t)eax >> 2u)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = (uint32_t)((int32_t)eax >> 2u);
    /* cmp edi, eax */ /* 0x0061FDC7: cmp edi, eax */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_0061FDA0; /* 0x0061FDC9: jb 0x61fda0 */
L_0061FDCB:
    ecx = (uint32_t)((int32_t)MEM32(esi + 0x3D8) * (int32_t)0x1D4u); /* 0x0061FDCB: imul ecx, dword ptr [esi + 0x3d8], 0x1d4 */
    eax = MEM32(esi + 0x504); /* 0x0061FDD5: mov eax, dword ptr [esi + 0x504] */
    edx = MEM32(ebp + (-0x40)); /* 0x0061FDDB: mov edx, dword ptr [ebp - 0x40] */
    /* cmp MEM32(ecx + eax + 0x30), edx */ /* 0x0061FDDE: cmp dword ptr [ecx + eax + 0x30], edx */
    _flag_a = (uint32_t)(MEM32(ecx + eax + 0x30)); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_0061FF7E; /* 0x0061FDE2: jne 0x61ff7e */
L_0061FDE8:
    SET_LO8(eax, MEM8(ebp + (-0x3C))); /* 0x0061FDE8: mov al, byte ptr [ebp - 0x3c] */
    /* cmp MEM8(esi + 0x30), LO8(eax) */ /* 0x0061FDEB: cmp byte ptr [esi + 0x30], al */
    _flag_a = (uint32_t)(MEM8(esi + 0x30)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_0061FDF4; /* 0x0061FDEE: jne 0x61fdf4 */
L_0061FDF0:
    MEM8(esi + 0x30) = (uint8_t)(0xFFu); /* 0x0061FDF0: mov byte ptr [esi + 0x30], 0xff */
L_0061FDF4:
    MEM8(ebp + (-0x84)) = (uint8_t)(LO8(eax)); /* 0x0061FDF4: mov byte ptr [ebp - 0x84], al */
    ecx = esi + 0x534; /* 0x0061FDFA: lea ecx, [esi + 0x534] */
    eax = ebp + (-0x3C); /* 0x0061FE00: lea eax, [ebp - 0x3c] */
    PUSH32(esp, eax); /* 0x0061FE03: push eax */
    RECOMP_CALL(sub_00625850); /* 0x0061FE04: call 0x625850 */
    RECOMP_FLAGS_IN();
    MEM8(eax) = (uint8_t)(0); /* 0x0061FE09: mov byte ptr [eax], 0 */
    RECOMP_CALL(sub_006EE000); /* 0x0061FE0C: call 0x6ee000 */
    RECOMP_FLAGS_IN();
    edi = eax; /* 0x0061FE11: mov edi, eax */
    ecx = esi + 0x5B4; /* 0x0061FE13: lea ecx, [esi + 0x5b4] */
    eax = ebp + (-0x3C); /* 0x0061FE19: lea eax, [ebp - 0x3c] */
    PUSH32(esp, eax); /* 0x0061FE1C: push eax */
    RECOMP_CALL(sub_00625980); /* 0x0061FE1D: call 0x625980 */
    RECOMP_FLAGS_IN();
    MEM32(eax + 0x4) = edi; /* 0x0061FE22: mov dword ptr [eax + 4], edi */
    goto L_0061FF7E; /* 0x0061FE25: jmp 0x61ff7e */
L_0061FE2A:
    /* cmp MEM8(esi + 0x16), 0 */ /* 0x0061FE2A: cmp byte ptr [esi + 0x16], 0 */
    _flag_a = (uint32_t)(MEM8(esi + 0x16)) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_0061FF7E; /* 0x0061FE2E: jne 0x61ff7e */
L_0061FE34:
    eax = ebp + (-0x94); /* 0x0061FE34: lea eax, [ebp - 0x94] */
    ecx = esi; /* 0x0061FE3A: mov ecx, esi */
    PUSH32(esp, eax); /* 0x0061FE3C: push eax */
    PUSH32(esp, MEM32(ebp + (-0x40))); /* 0x0061FE3D: push dword ptr [ebp - 0x40] */
    RECOMP_CALL(sub_00622880); /* 0x0061FE40: call 0x622880 */
    RECOMP_FLAGS_IN();
    /* test LO8(eax), LO8(eax) */ /* 0x0061FE45: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    RECOMP_BACKEDGE();
    if (TEST_Z(_flag_a, _flag_b)) goto L_0061FDCB; /* 0x0061FE47: je 0x61fdcb */
L_0061FE49:
    edx = MEM32(ebp + (-0x94)); /* 0x0061FE49: mov edx, dword ptr [ebp - 0x94] */
    eax = MEM32(esi + 0x504); /* 0x0061FE4F: mov eax, dword ptr [esi + 0x504] */
    ecx = (uint32_t)((int32_t)edx * (int32_t)0x1D4u); /* 0x0061FE55: imul ecx, edx, 0x1d4 */
    /* cmp MEM8(eax + ecx + 0x1C8), 2 */ /* 0x0061FE5B: cmp byte ptr [eax + ecx + 0x1c8], 2 */
    _flag_a = (uint32_t)(MEM8(eax + ecx + 0x1C8)) << 24; _flag_b = (uint32_t)(2) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_0061FF7E; /* 0x0061FE63: je 0x61ff7e */
L_0061FE69:
    eax = MEM32(esi + 0x52C); /* 0x0061FE69: mov eax, dword ptr [esi + 0x52c] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edi = 0; /* 0x0061FE6F: xor edi, edi */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(esi + 0x528));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - MEM32(esi + 0x528); /* 0x0061FE71: sub eax, dword ptr [esi + 0x528] */
    _flag_k = FK_CMP;
    if (2u) _cf = (((eax) >> 1) & 1u); /* 0x0061FE77: sar eax, 2 */
    if (2u) { _flag_a = recomp_flags_pack(((uint32_t)((int32_t)eax >> 2u)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = (uint32_t)((int32_t)eax >> 2u);
    /* test eax, eax */ /* 0x0061FE7A: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_Z(_flag_a, _flag_b)) goto L_0061FDCB; /* 0x0061FE7C: je 0x61fdcb */
L_0061FE82:
    eax = MEM32(esi + 0x528); /* 0x0061FE82: mov eax, dword ptr [esi + 0x528] */
    PUSH32(esp, MEM32(ebp + (-0x3C))); /* 0x0061FE88: push dword ptr [ebp - 0x3c] */
    PUSH32(esp, edx); /* 0x0061FE8B: push edx */
    ecx = MEM32(eax + edi * 4); /* 0x0061FE8C: mov ecx, dword ptr [eax + edi*4] */
    eax = MEM32(ecx); /* 0x0061FE8F: mov eax, dword ptr [ecx] */
    RECOMP_ICALL(MEM32(eax + 0x20)); /* 0x0061FE91: call dword ptr [eax + 0x20] */
    RECOMP_FLAGS_IN();
    eax = MEM32(esi + 0x52C); /* 0x0061FE94: mov eax, dword ptr [esi + 0x52c] */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(1);
    edi = edi + 1; /* 0x0061FE9A: inc edi */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(esi + 0x528));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - MEM32(esi + 0x528); /* 0x0061FE9B: sub eax, dword ptr [esi + 0x528] */
    _flag_k = FK_CMP;
    edx = MEM32(ebp + (-0x94)); /* 0x0061FEA1: mov edx, dword ptr [ebp - 0x94] */
    if (2u) _cf = (((eax) >> 1) & 1u); /* 0x0061FEA7: sar eax, 2 */
    if (2u) { _flag_a = recomp_flags_pack(((uint32_t)((int32_t)eax >> 2u)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = (uint32_t)((int32_t)eax >> 2u);
    /* cmp edi, eax */ /* 0x0061FEAA: cmp edi, eax */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_0061FE82; /* 0x0061FEAC: jb 0x61fe82 */
L_0061FEAE:
    RECOMP_BACKEDGE();
    goto L_0061FDCB; /* 0x0061FEAE: jmp 0x61fdcb */
L_0061FEB3:
    /* cmp MEM8(esi + 0x16), 0 */ /* 0x0061FEB3: cmp byte ptr [esi + 0x16], 0 */
    _flag_a = (uint32_t)(MEM8(esi + 0x16)) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_0061FF7E; /* 0x0061FEB7: jne 0x61ff7e */
L_0061FEBD:
    eax = ebp + (-0x94); /* 0x0061FEBD: lea eax, [ebp - 0x94] */
    ecx = esi; /* 0x0061FEC3: mov ecx, esi */
    PUSH32(esp, eax); /* 0x0061FEC5: push eax */
    PUSH32(esp, MEM32(ebp + (-0x40))); /* 0x0061FEC6: push dword ptr [ebp - 0x40] */
    RECOMP_CALL(sub_00622880); /* 0x0061FEC9: call 0x622880 */
    RECOMP_FLAGS_IN();
    /* test LO8(eax), LO8(eax) */ /* 0x0061FECE: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_0061FF1E; /* 0x0061FED0: je 0x61ff1e */
L_0061FED2:
    eax = MEM32(esi + 0x52C); /* 0x0061FED2: mov eax, dword ptr [esi + 0x52c] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edi = 0; /* 0x0061FED8: xor edi, edi */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(esi + 0x528));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - MEM32(esi + 0x528); /* 0x0061FEDA: sub eax, dword ptr [esi + 0x528] */
    _flag_k = FK_CMP;
    if (2u) _cf = (((eax) >> 1) & 1u); /* 0x0061FEE0: sar eax, 2 */
    if (2u) { _flag_a = recomp_flags_pack(((uint32_t)((int32_t)eax >> 2u)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = (uint32_t)((int32_t)eax >> 2u);
    /* test eax, eax */ /* 0x0061FEE3: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_0061FF1E; /* 0x0061FEE5: je 0x61ff1e */
L_0061FEE7:
    goto L_0061FEF0; /* 0x0061FEE7: jmp 0x61fef0 */
L_0061FEF0:
    eax = MEM32(esi + 0x528); /* 0x0061FEF0: mov eax, dword ptr [esi + 0x528] */
    PUSH32(esp, MEM32(ebp + (-0x38))); /* 0x0061FEF6: push dword ptr [ebp - 0x38] */
    PUSH32(esp, MEM32(ebp + (-0x3C))); /* 0x0061FEF9: push dword ptr [ebp - 0x3c] */
    ecx = MEM32(eax + edi * 4); /* 0x0061FEFC: mov ecx, dword ptr [eax + edi*4] */
    PUSH32(esp, MEM32(ebp + (-0x94))); /* 0x0061FEFF: push dword ptr [ebp - 0x94] */
    eax = MEM32(ecx); /* 0x0061FF05: mov eax, dword ptr [ecx] */
    RECOMP_ICALL(MEM32(eax + 0x28)); /* 0x0061FF07: call dword ptr [eax + 0x28] */
    RECOMP_FLAGS_IN();
    eax = MEM32(esi + 0x52C); /* 0x0061FF0A: mov eax, dword ptr [esi + 0x52c] */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(1);
    edi = edi + 1; /* 0x0061FF10: inc edi */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(esi + 0x528));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - MEM32(esi + 0x528); /* 0x0061FF11: sub eax, dword ptr [esi + 0x528] */
    _flag_k = FK_CMP;
    if (2u) _cf = (((eax) >> 1) & 1u); /* 0x0061FF17: sar eax, 2 */
    if (2u) { _flag_a = recomp_flags_pack(((uint32_t)((int32_t)eax >> 2u)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = (uint32_t)((int32_t)eax >> 2u);
    /* cmp edi, eax */ /* 0x0061FF1A: cmp edi, eax */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_0061FEF0; /* 0x0061FF1C: jb 0x61fef0 */
L_0061FF1E:
    ecx = (uint32_t)((int32_t)MEM32(esi + 0x3D8) * (int32_t)0x1D4u); /* 0x0061FF1E: imul ecx, dword ptr [esi + 0x3d8], 0x1d4 */
    eax = MEM32(ebp + (-0x40)); /* 0x0061FF28: mov eax, dword ptr [ebp - 0x40] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(MEM32(esi + 0x504));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + MEM32(esi + 0x504); /* 0x0061FF2B: add ecx, dword ptr [esi + 0x504] */
    _flag_k = FK_ADD;
    /* cmp MEM32(ecx + 0x30), eax */ /* 0x0061FF31: cmp dword ptr [ecx + 0x30], eax */
    _flag_a = (uint32_t)(MEM32(ecx + 0x30)); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_0061FF7E; /* 0x0061FF34: jne 0x61ff7e */
L_0061FF36:
    eax = (uint32_t)MEM8(ebp + (-0x3C)); /* 0x0061FF36: movzx eax, byte ptr [ebp - 0x3c] */
    ecx = MEM32(ecx + 0x14); /* 0x0061FF3A: mov ecx, dword ptr [ecx + 0x14] */
    edx = eax + eax * 4; /* 0x0061FF3D: lea edx, [eax + eax*4] */
    SET_LO16(eax, MEM16(ebp + (-0x38))); /* 0x0061FF40: mov ax, word ptr [ebp - 0x38] */
    MEM16(ecx + edx * 4 + 0x12) = (uint16_t)(LO16(eax)); /* 0x0061FF44: mov word ptr [ecx + edx*4 + 0x12], ax */
    SET_LO8(eax, MEM8(ebp + (-0x3C))); /* 0x0061FF49: mov al, byte ptr [ebp - 0x3c] */
    MEM8(ebp + (-0x80)) = (uint8_t)(LO8(eax)); /* 0x0061FF4C: mov byte ptr [ebp - 0x80], al */
    goto L_0061FF7E; /* 0x0061FF4F: jmp 0x61ff7e */
L_0061FF51:
    PUSH32(esp, MEM32(ebp + (-0x40))); /* 0x0061FF51: push dword ptr [ebp - 0x40] */
    ecx = esi; /* 0x0061FF54: mov ecx, esi */
    RECOMP_CALL(sub_00622430); /* 0x0061FF56: call 0x622430 */
    RECOMP_FLAGS_IN();
    MEM32(ebp + (-0x54)) = eax; /* 0x0061FF5B: mov dword ptr [ebp - 0x54], eax */
    goto L_0061FF7E; /* 0x0061FF5E: jmp 0x61ff7e */
L_0061FF60:
    PUSH32(esp, MEM32(ebp + (-0x40))); /* 0x0061FF60: push dword ptr [ebp - 0x40] */
    ecx = esi; /* 0x0061FF63: mov ecx, esi */
    RECOMP_CALL(sub_00622670); /* 0x0061FF65: call 0x622670 */
    RECOMP_FLAGS_IN();
    MEM32(ebp + (-0x54)) = eax; /* 0x0061FF6A: mov dword ptr [ebp - 0x54], eax */
    /* cmp MEM32(esi + 0x3D8), eax */ /* 0x0061FF6D: cmp dword ptr [esi + 0x3d8], eax */
    _flag_a = (uint32_t)(MEM32(esi + 0x3D8)); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_0061FF7E; /* 0x0061FF73: jne 0x61ff7e */
L_0061FF75:
    PUSH32(esp, 0); /* 0x0061FF75: push 0 */
    ecx = esi; /* 0x0061FF77: mov ecx, esi */
    RECOMP_CALL(sub_00620AA0); /* 0x0061FF79: call 0x620aa0 */
    RECOMP_FLAGS_IN();
L_0061FF7E:
    /* cmp MEM32(ebp + (-0x90)), 0x300u */ /* 0x0061FF7E: cmp dword ptr [ebp - 0x90], 0x300 */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x90))); _flag_b = (uint32_t)(0x300u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_0061FFDC; /* 0x0061FF88: jne 0x61ffdc */
L_0061FF8A:
    eax = MEM32(esi + 0x52C); /* 0x0061FF8A: mov eax, dword ptr [esi + 0x52c] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edi = 0; /* 0x0061FF90: xor edi, edi */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(esi + 0x528));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - MEM32(esi + 0x528); /* 0x0061FF92: sub eax, dword ptr [esi + 0x528] */
    _flag_k = FK_CMP;
    if (2u) _cf = (((eax) >> 1) & 1u); /* 0x0061FF98: sar eax, 2 */
    if (2u) { _flag_a = recomp_flags_pack(((uint32_t)((int32_t)eax >> 2u)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = (uint32_t)((int32_t)eax >> 2u);
    /* test eax, eax */ /* 0x0061FF9B: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_Z(_flag_a, _flag_b)) goto L_0061F896; /* 0x0061FF9D: je 0x61f896 */
L_0061FFA3:
    goto L_0061FFB0; /* 0x0061FFA3: jmp 0x61ffb0 */
L_0061FFB0:
    eax = MEM32(esi + 0x528); /* 0x0061FFB0: mov eax, dword ptr [esi + 0x528] */
    PUSH32(esp, MEM32(ebp + (-0x8C))); /* 0x0061FFB6: push dword ptr [ebp - 0x8c] */
    ecx = MEM32(eax + edi * 4); /* 0x0061FFBC: mov ecx, dword ptr [eax + edi*4] */
    eax = MEM32(ecx); /* 0x0061FFBF: mov eax, dword ptr [ecx] */
    RECOMP_ICALL(MEM32(eax)); /* 0x0061FFC1: call dword ptr [eax] */
    RECOMP_FLAGS_IN();
    eax = MEM32(esi + 0x52C); /* 0x0061FFC3: mov eax, dword ptr [esi + 0x52c] */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(1);
    edi = edi + 1; /* 0x0061FFC9: inc edi */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(esi + 0x528));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - MEM32(esi + 0x528); /* 0x0061FFCA: sub eax, dword ptr [esi + 0x528] */
    _flag_k = FK_CMP;
    if (2u) _cf = (((eax) >> 1) & 1u); /* 0x0061FFD0: sar eax, 2 */
    if (2u) { _flag_a = recomp_flags_pack(((uint32_t)((int32_t)eax >> 2u)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = (uint32_t)((int32_t)eax >> 2u);
    /* cmp edi, eax */ /* 0x0061FFD3: cmp edi, eax */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_0061FFB0; /* 0x0061FFD5: jb 0x61ffb0 */
L_0061FFD7:
    RECOMP_BACKEDGE();
    goto L_0061F896; /* 0x0061FFD7: jmp 0x61f896 */
L_0061FFDC:
    /* cmp MEM32(ebp + (-0x90)), 0x301u */ /* 0x0061FFDC: cmp dword ptr [ebp - 0x90], 0x301 */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x90))); _flag_b = (uint32_t)(0x301u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_0062002E; /* 0x0061FFE6: jne 0x62002e */
L_0061FFE8:
    eax = MEM32(esi + 0x52C); /* 0x0061FFE8: mov eax, dword ptr [esi + 0x52c] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edi = 0; /* 0x0061FFEE: xor edi, edi */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(esi + 0x528));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - MEM32(esi + 0x528); /* 0x0061FFF0: sub eax, dword ptr [esi + 0x528] */
    _flag_k = FK_CMP;
    if (2u) _cf = (((eax) >> 1) & 1u); /* 0x0061FFF6: sar eax, 2 */
    if (2u) { _flag_a = recomp_flags_pack(((uint32_t)((int32_t)eax >> 2u)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = (uint32_t)((int32_t)eax >> 2u);
    /* test eax, eax */ /* 0x0061FFF9: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_Z(_flag_a, _flag_b)) goto L_0061F896; /* 0x0061FFFB: je 0x61f896 */
L_00620001:
    eax = MEM32(esi + 0x528); /* 0x00620001: mov eax, dword ptr [esi + 0x528] */
    PUSH32(esp, MEM32(ebp + (-0x8C))); /* 0x00620007: push dword ptr [ebp - 0x8c] */
    ecx = MEM32(eax + edi * 4); /* 0x0062000D: mov ecx, dword ptr [eax + edi*4] */
    eax = MEM32(ecx); /* 0x00620010: mov eax, dword ptr [ecx] */
    RECOMP_ICALL(MEM32(eax + 0x4)); /* 0x00620012: call dword ptr [eax + 4] */
    RECOMP_FLAGS_IN();
    eax = MEM32(esi + 0x52C); /* 0x00620015: mov eax, dword ptr [esi + 0x52c] */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(1);
    edi = edi + 1; /* 0x0062001B: inc edi */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(esi + 0x528));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - MEM32(esi + 0x528); /* 0x0062001C: sub eax, dword ptr [esi + 0x528] */
    _flag_k = FK_CMP;
    if (2u) _cf = (((eax) >> 1) & 1u); /* 0x00620022: sar eax, 2 */
    if (2u) { _flag_a = recomp_flags_pack(((uint32_t)((int32_t)eax >> 2u)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = (uint32_t)((int32_t)eax >> 2u);
    /* cmp edi, eax */ /* 0x00620025: cmp edi, eax */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_00620001; /* 0x00620027: jb 0x620001 */
L_00620029:
    RECOMP_BACKEDGE();
    goto L_0061F896; /* 0x00620029: jmp 0x61f896 */
L_0062002E:
    /* cmp MEM32(ebp + (-0x90)), 0x400u */ /* 0x0062002E: cmp dword ptr [ebp - 0x90], 0x400 */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x90))); _flag_b = (uint32_t)(0x400u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_00620082; /* 0x00620038: jne 0x620082 */
L_0062003A:
    eax = MEM32(esi + 0x52C); /* 0x0062003A: mov eax, dword ptr [esi + 0x52c] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edi = 0; /* 0x00620040: xor edi, edi */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(esi + 0x528));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - MEM32(esi + 0x528); /* 0x00620042: sub eax, dword ptr [esi + 0x528] */
    _flag_k = FK_CMP;
    if (2u) _cf = (((eax) >> 1) & 1u); /* 0x00620048: sar eax, 2 */
    if (2u) { _flag_a = recomp_flags_pack(((uint32_t)((int32_t)eax >> 2u)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = (uint32_t)((int32_t)eax >> 2u);
    /* test eax, eax */ /* 0x0062004B: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_Z(_flag_a, _flag_b)) goto L_0061F896; /* 0x0062004D: je 0x61f896 */
L_00620053:
    eax = MEM32(esi + 0x528); /* 0x00620053: mov eax, dword ptr [esi + 0x528] */
    edx = ebp + (-0x74); /* 0x00620059: lea edx, [ebp - 0x74] */
    PUSH32(esp, edx); /* 0x0062005C: push edx */
    edx = ebp + (-0x7C); /* 0x0062005D: lea edx, [ebp - 0x7c] */
    PUSH32(esp, edx); /* 0x00620060: push edx */
    ecx = MEM32(eax + edi * 4); /* 0x00620061: mov ecx, dword ptr [eax + edi*4] */
    eax = MEM32(ecx); /* 0x00620064: mov eax, dword ptr [ecx] */
    RECOMP_ICALL(MEM32(eax + 0x10)); /* 0x00620066: call dword ptr [eax + 0x10] */
    RECOMP_FLAGS_IN();
    eax = MEM32(esi + 0x52C); /* 0x00620069: mov eax, dword ptr [esi + 0x52c] */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(1);
    edi = edi + 1; /* 0x0062006F: inc edi */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(esi + 0x528));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - MEM32(esi + 0x528); /* 0x00620070: sub eax, dword ptr [esi + 0x528] */
    _flag_k = FK_CMP;
    if (2u) _cf = (((eax) >> 1) & 1u); /* 0x00620076: sar eax, 2 */
    if (2u) { _flag_a = recomp_flags_pack(((uint32_t)((int32_t)eax >> 2u)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = (uint32_t)((int32_t)eax >> 2u);
    /* cmp edi, eax */ /* 0x00620079: cmp edi, eax */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_00620053; /* 0x0062007B: jb 0x620053 */
L_0062007D:
    RECOMP_BACKEDGE();
    goto L_0061F896; /* 0x0062007D: jmp 0x61f896 */
L_00620082:
    eax = MEM32(ebp + (-0x90)); /* 0x00620082: mov eax, dword ptr [ebp - 0x90] */
    /* cmp eax, 0x651u */ /* 0x00620088: cmp eax, 0x651 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x651u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_0062042D; /* 0x0062008D: je 0x62042d */
L_00620093:
    /* cmp eax, 0x603u */ /* 0x00620093: cmp eax, 0x603 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x603u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_0062042D; /* 0x00620098: je 0x62042d */
L_0062009E:
    /* cmp eax, 0x652u */ /* 0x0062009E: cmp eax, 0x652 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x652u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_006203E0; /* 0x006200A3: je 0x6203e0 */
L_006200A9:
    /* cmp eax, 0x604u */ /* 0x006200A9: cmp eax, 0x604 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x604u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_006203E0; /* 0x006200AE: je 0x6203e0 */
L_006200B4:
    /* cmp eax, 0x650u */ /* 0x006200B4: cmp eax, 0x650 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x650u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_0062038B; /* 0x006200B9: je 0x62038b */
L_006200BF:
    /* cmp eax, 0x600u */ /* 0x006200BF: cmp eax, 0x600 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x600u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_0062038B; /* 0x006200C4: je 0x62038b */
L_006200CA:
    /* cmp eax, 0x401u */ /* 0x006200CA: cmp eax, 0x401 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x401u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_00620121; /* 0x006200CF: jne 0x620121 */
L_006200D1:
    eax = MEM32(esi + 0x52C); /* 0x006200D1: mov eax, dword ptr [esi + 0x52c] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edi = 0; /* 0x006200D7: xor edi, edi */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(esi + 0x528));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - MEM32(esi + 0x528); /* 0x006200D9: sub eax, dword ptr [esi + 0x528] */
    _flag_k = FK_CMP;
    if (2u) _cf = (((eax) >> 1) & 1u); /* 0x006200DF: sar eax, 2 */
    if (2u) { _flag_a = recomp_flags_pack(((uint32_t)((int32_t)eax >> 2u)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = (uint32_t)((int32_t)eax >> 2u);
    /* test eax, eax */ /* 0x006200E2: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_Z(_flag_a, _flag_b)) goto L_0061F896; /* 0x006200E4: je 0x61f896 */
L_006200EA:
    ebx = ebx; /* 0x006200EA: lea ebx, [ebx] */
L_006200F0:
    eax = MEM32(esi + 0x528); /* 0x006200F0: mov eax, dword ptr [esi + 0x528] */
    edx = ebp + (-0x7C); /* 0x006200F6: lea edx, [ebp - 0x7c] */
    PUSH32(esp, edx); /* 0x006200F9: push edx */
    PUSH32(esp, MEM32(ebp + (-0x8C))); /* 0x006200FA: push dword ptr [ebp - 0x8c] */
    ecx = MEM32(eax + edi * 4); /* 0x00620100: mov ecx, dword ptr [eax + edi*4] */
    eax = MEM32(ecx); /* 0x00620103: mov eax, dword ptr [ecx] */
    RECOMP_ICALL(MEM32(eax + 0x8)); /* 0x00620105: call dword ptr [eax + 8] */
    RECOMP_FLAGS_IN();
    eax = MEM32(esi + 0x52C); /* 0x00620108: mov eax, dword ptr [esi + 0x52c] */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(1);
    edi = edi + 1; /* 0x0062010E: inc edi */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(esi + 0x528));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - MEM32(esi + 0x528); /* 0x0062010F: sub eax, dword ptr [esi + 0x528] */
    _flag_k = FK_CMP;
    if (2u) _cf = (((eax) >> 1) & 1u); /* 0x00620115: sar eax, 2 */
    if (2u) { _flag_a = recomp_flags_pack(((uint32_t)((int32_t)eax >> 2u)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = (uint32_t)((int32_t)eax >> 2u);
    /* cmp edi, eax */ /* 0x00620118: cmp edi, eax */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_006200F0; /* 0x0062011A: jb 0x6200f0 */
L_0062011C:
    RECOMP_BACKEDGE();
    goto L_0061F896; /* 0x0062011C: jmp 0x61f896 */
L_00620121:
    /* cmp MEM32(ebp + (-0x90)), 0x402u */ /* 0x00620121: cmp dword ptr [ebp - 0x90], 0x402 */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x90))); _flag_b = (uint32_t)(0x402u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_00620177; /* 0x0062012B: jne 0x620177 */
L_0062012D:
    eax = MEM32(esi + 0x52C); /* 0x0062012D: mov eax, dword ptr [esi + 0x52c] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edi = 0; /* 0x00620133: xor edi, edi */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(esi + 0x528));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - MEM32(esi + 0x528); /* 0x00620135: sub eax, dword ptr [esi + 0x528] */
    _flag_k = FK_CMP;
    if (2u) _cf = (((eax) >> 1) & 1u); /* 0x0062013B: sar eax, 2 */
    if (2u) { _flag_a = recomp_flags_pack(((uint32_t)((int32_t)eax >> 2u)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = (uint32_t)((int32_t)eax >> 2u);
    /* test eax, eax */ /* 0x0062013E: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_Z(_flag_a, _flag_b)) goto L_0061F896; /* 0x00620140: je 0x61f896 */
L_00620146:
    eax = MEM32(esi + 0x528); /* 0x00620146: mov eax, dword ptr [esi + 0x528] */
    edx = ebp + (-0x7C); /* 0x0062014C: lea edx, [ebp - 0x7c] */
    PUSH32(esp, edx); /* 0x0062014F: push edx */
    PUSH32(esp, MEM32(ebp + (-0x8C))); /* 0x00620150: push dword ptr [ebp - 0x8c] */
    ecx = MEM32(eax + edi * 4); /* 0x00620156: mov ecx, dword ptr [eax + edi*4] */
    eax = MEM32(ecx); /* 0x00620159: mov eax, dword ptr [ecx] */
    RECOMP_ICALL(MEM32(eax + 0xC)); /* 0x0062015B: call dword ptr [eax + 0xc] */
    RECOMP_FLAGS_IN();
    eax = MEM32(esi + 0x52C); /* 0x0062015E: mov eax, dword ptr [esi + 0x52c] */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(1);
    edi = edi + 1; /* 0x00620164: inc edi */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(esi + 0x528));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - MEM32(esi + 0x528); /* 0x00620165: sub eax, dword ptr [esi + 0x528] */
    _flag_k = FK_CMP;
    if (2u) _cf = (((eax) >> 1) & 1u); /* 0x0062016B: sar eax, 2 */
    if (2u) { _flag_a = recomp_flags_pack(((uint32_t)((int32_t)eax >> 2u)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = (uint32_t)((int32_t)eax >> 2u);
    /* cmp edi, eax */ /* 0x0062016E: cmp edi, eax */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_00620146; /* 0x00620170: jb 0x620146 */
L_00620172:
    RECOMP_BACKEDGE();
    goto L_0061F896; /* 0x00620172: jmp 0x61f896 */
L_00620177:
    /* cmp MEM32(ebp + (-0x90)), 0x403u */ /* 0x00620177: cmp dword ptr [ebp - 0x90], 0x403 */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x90))); _flag_b = (uint32_t)(0x403u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_006201CD; /* 0x00620181: jne 0x6201cd */
L_00620183:
    eax = MEM32(esi + 0x52C); /* 0x00620183: mov eax, dword ptr [esi + 0x52c] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edi = 0; /* 0x00620189: xor edi, edi */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(esi + 0x528));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - MEM32(esi + 0x528); /* 0x0062018B: sub eax, dword ptr [esi + 0x528] */
    _flag_k = FK_CMP;
    if (2u) _cf = (((eax) >> 1) & 1u); /* 0x00620191: sar eax, 2 */
    if (2u) { _flag_a = recomp_flags_pack(((uint32_t)((int32_t)eax >> 2u)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = (uint32_t)((int32_t)eax >> 2u);
    /* test eax, eax */ /* 0x00620194: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_Z(_flag_a, _flag_b)) goto L_0061F896; /* 0x00620196: je 0x61f896 */
L_0062019C:
    esp = esp; /* 0x0062019C: lea esp, [esp] */
L_006201A0:
    eax = MEM32(esi + 0x528); /* 0x006201A0: mov eax, dword ptr [esi + 0x528] */
    PUSH32(esp, MEM32(ebp + (-0x8C))); /* 0x006201A6: push dword ptr [ebp - 0x8c] */
    ecx = MEM32(eax + edi * 4); /* 0x006201AC: mov ecx, dword ptr [eax + edi*4] */
    eax = MEM32(ecx); /* 0x006201AF: mov eax, dword ptr [ecx] */
    RECOMP_ICALL(MEM32(eax + 0x14)); /* 0x006201B1: call dword ptr [eax + 0x14] */
    RECOMP_FLAGS_IN();
    eax = MEM32(esi + 0x52C); /* 0x006201B4: mov eax, dword ptr [esi + 0x52c] */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(1);
    edi = edi + 1; /* 0x006201BA: inc edi */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(esi + 0x528));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - MEM32(esi + 0x528); /* 0x006201BB: sub eax, dword ptr [esi + 0x528] */
    _flag_k = FK_CMP;
    if (2u) _cf = (((eax) >> 1) & 1u); /* 0x006201C1: sar eax, 2 */
    if (2u) { _flag_a = recomp_flags_pack(((uint32_t)((int32_t)eax >> 2u)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = (uint32_t)((int32_t)eax >> 2u);
    /* cmp edi, eax */ /* 0x006201C4: cmp edi, eax */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_006201A0; /* 0x006201C6: jb 0x6201a0 */
L_006201C8:
    RECOMP_BACKEDGE();
    goto L_0061F896; /* 0x006201C8: jmp 0x61f896 */
L_006201CD:
    /* cmp MEM32(ebp + (-0x90)), 0x303u */ /* 0x006201CD: cmp dword ptr [ebp - 0x90], 0x303 */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x90))); _flag_b = (uint32_t)(0x303u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_0062021D; /* 0x006201D7: jne 0x62021d */
L_006201D9:
    eax = MEM32(esi + 0x52C); /* 0x006201D9: mov eax, dword ptr [esi + 0x52c] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edi = 0; /* 0x006201DF: xor edi, edi */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(esi + 0x528));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - MEM32(esi + 0x528); /* 0x006201E1: sub eax, dword ptr [esi + 0x528] */
    _flag_k = FK_CMP;
    if (2u) _cf = (((eax) >> 1) & 1u); /* 0x006201E7: sar eax, 2 */
    if (2u) { _flag_a = recomp_flags_pack(((uint32_t)((int32_t)eax >> 2u)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = (uint32_t)((int32_t)eax >> 2u);
    /* test eax, eax */ /* 0x006201EA: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_Z(_flag_a, _flag_b)) goto L_0061F896; /* 0x006201EC: je 0x61f896 */
L_006201F2:
    eax = MEM32(esi + 0x528); /* 0x006201F2: mov eax, dword ptr [esi + 0x528] */
    edx = ebp + (-0x6C); /* 0x006201F8: lea edx, [ebp - 0x6c] */
    PUSH32(esp, edx); /* 0x006201FB: push edx */
    ecx = MEM32(eax + edi * 4); /* 0x006201FC: mov ecx, dword ptr [eax + edi*4] */
    eax = MEM32(ecx); /* 0x006201FF: mov eax, dword ptr [ecx] */
    RECOMP_ICALL(MEM32(eax + 0x40)); /* 0x00620201: call dword ptr [eax + 0x40] */
    RECOMP_FLAGS_IN();
    eax = MEM32(esi + 0x52C); /* 0x00620204: mov eax, dword ptr [esi + 0x52c] */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(1);
    edi = edi + 1; /* 0x0062020A: inc edi */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(esi + 0x528));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - MEM32(esi + 0x528); /* 0x0062020B: sub eax, dword ptr [esi + 0x528] */
    _flag_k = FK_CMP;
    if (2u) _cf = (((eax) >> 1) & 1u); /* 0x00620211: sar eax, 2 */
    if (2u) { _flag_a = recomp_flags_pack(((uint32_t)((int32_t)eax >> 2u)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = (uint32_t)((int32_t)eax >> 2u);
    /* cmp edi, eax */ /* 0x00620214: cmp edi, eax */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_006201F2; /* 0x00620216: jb 0x6201f2 */
L_00620218:
    RECOMP_BACKEDGE();
    goto L_0061F896; /* 0x00620218: jmp 0x61f896 */
L_0062021D:
    /* cmp MEM32(ebp + (-0x90)), 0x302u */ /* 0x0062021D: cmp dword ptr [ebp - 0x90], 0x302 */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x90))); _flag_b = (uint32_t)(0x302u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_00620281; /* 0x00620227: jne 0x620281 */
L_00620229:
    eax = MEM32(esi + 0x52C); /* 0x00620229: mov eax, dword ptr [esi + 0x52c] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edi = 0; /* 0x0062022F: xor edi, edi */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(esi + 0x528));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - MEM32(esi + 0x528); /* 0x00620231: sub eax, dword ptr [esi + 0x528] */
    _flag_k = FK_CMP;
    if (2u) _cf = (((eax) >> 1) & 1u); /* 0x00620237: sar eax, 2 */
    if (2u) { _flag_a = recomp_flags_pack(((uint32_t)((int32_t)eax >> 2u)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = (uint32_t)((int32_t)eax >> 2u);
    /* test eax, eax */ /* 0x0062023A: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_Z(_flag_a, _flag_b)) goto L_0061F896; /* 0x0062023C: je 0x61f896 */
L_00620242:
    goto L_00620250; /* 0x00620242: jmp 0x620250 */
L_00620250:
    eax = MEM32(esi + 0x528); /* 0x00620250: mov eax, dword ptr [esi + 0x528] */
    edx = ebp + (-0x6C); /* 0x00620256: lea edx, [ebp - 0x6c] */
    PUSH32(esp, MEM32(ebp + (-0x88))); /* 0x00620259: push dword ptr [ebp - 0x88] */
    PUSH32(esp, edx); /* 0x0062025F: push edx */
    ecx = MEM32(eax + edi * 4); /* 0x00620260: mov ecx, dword ptr [eax + edi*4] */
    eax = MEM32(ecx); /* 0x00620263: mov eax, dword ptr [ecx] */
    RECOMP_ICALL(MEM32(eax + 0x44)); /* 0x00620265: call dword ptr [eax + 0x44] */
    RECOMP_FLAGS_IN();
    eax = MEM32(esi + 0x52C); /* 0x00620268: mov eax, dword ptr [esi + 0x52c] */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(1);
    edi = edi + 1; /* 0x0062026E: inc edi */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(esi + 0x528));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - MEM32(esi + 0x528); /* 0x0062026F: sub eax, dword ptr [esi + 0x528] */
    _flag_k = FK_CMP;
    if (2u) _cf = (((eax) >> 1) & 1u); /* 0x00620275: sar eax, 2 */
    if (2u) { _flag_a = recomp_flags_pack(((uint32_t)((int32_t)eax >> 2u)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = (uint32_t)((int32_t)eax >> 2u);
    /* cmp edi, eax */ /* 0x00620278: cmp edi, eax */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_00620250; /* 0x0062027A: jb 0x620250 */
L_0062027C:
    RECOMP_BACKEDGE();
    goto L_0061F896; /* 0x0062027C: jmp 0x61f896 */
L_00620281:
    /* cmp MEM32(ebp + (-0x90)), 0x605u */ /* 0x00620281: cmp dword ptr [ebp - 0x90], 0x605 */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x90))); _flag_b = (uint32_t)(0x605u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_00620309; /* 0x0062028B: jne 0x620309 */
L_00620291:
    /* cmp MEM32(ebp + (-0x54)), 0 */ /* 0x00620291: cmp dword ptr [ebp - 0x54], 0 */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x54))); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_LE(_flag_a, _flag_b)) goto L_0061F896; /* 0x00620295: jle 0x61f896 */
L_0062029B:
    eax = MEM32(esi + 0x52C); /* 0x0062029B: mov eax, dword ptr [esi + 0x52c] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x006202A1: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(esi + 0x528));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - MEM32(esi + 0x528); /* 0x006202A3: sub eax, dword ptr [esi + 0x528] */
    _flag_k = FK_CMP;
    if (2u) _cf = (((eax) >> 1) & 1u); /* 0x006202A9: sar eax, 2 */
    if (2u) { _flag_a = recomp_flags_pack(((uint32_t)((int32_t)eax >> 2u)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = (uint32_t)((int32_t)eax >> 2u);
    MEM32(ebp + (-0x94)) = ecx; /* 0x006202AC: mov dword ptr [ebp - 0x94], ecx */
    /* test eax, eax */ /* 0x006202B2: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_Z(_flag_a, _flag_b)) goto L_0061F896; /* 0x006202B4: je 0x61f896 */
L_006202BA:
    ebx = ebx; /* 0x006202BA: lea ebx, [ebx] */
L_006202C0:
    eax = MEM32(esi + 0x528); /* 0x006202C0: mov eax, dword ptr [esi + 0x528] */
    ecx = MEM32(eax + ecx * 4); /* 0x006202C6: mov ecx, dword ptr [eax + ecx*4] */
    eax = MEM32(ebp + (-0x54)); /* 0x006202C9: mov eax, dword ptr [ebp - 0x54] */
    PUSH32(esp, eax); /* 0x006202CC: push eax */
    edx = (uint32_t)((int32_t)eax * (int32_t)0x1D4u); /* 0x006202CD: imul edx, eax, 0x1d4 */
    eax = MEM32(esi + 0x504); /* 0x006202D3: mov eax, dword ptr [esi + 0x504] */
    edi = MEM32(ecx); /* 0x006202D9: mov edi, dword ptr [ecx] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x44u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 0x44u; /* 0x006202DB: add eax, 0x44 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + edx; /* 0x006202DE: add eax, edx */
    _flag_k = FK_ADD;
    PUSH32(esp, eax); /* 0x006202E0: push eax */
    RECOMP_ICALL(MEM32(edi + 0x34)); /* 0x006202E1: call dword ptr [edi + 0x34] */
    RECOMP_FLAGS_IN();
    eax = MEM32(esi + 0x52C); /* 0x006202E4: mov eax, dword ptr [esi + 0x52c] */
    ecx = MEM32(ebp + (-0x94)); /* 0x006202EA: mov ecx, dword ptr [ebp - 0x94] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(esi + 0x528));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - MEM32(esi + 0x528); /* 0x006202F0: sub eax, dword ptr [esi + 0x528] */
    _flag_k = FK_CMP;
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx + 1; /* 0x006202F6: inc ecx */
    _flag_k = FK_INC;
    if (2u) _cf = (((eax) >> 1) & 1u); /* 0x006202F7: sar eax, 2 */
    if (2u) { _flag_a = recomp_flags_pack(((uint32_t)((int32_t)eax >> 2u)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = (uint32_t)((int32_t)eax >> 2u);
    MEM32(ebp + (-0x94)) = ecx; /* 0x006202FA: mov dword ptr [ebp - 0x94], ecx */
    /* cmp ecx, eax */ /* 0x00620300: cmp ecx, eax */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_006202C0; /* 0x00620302: jb 0x6202c0 */
L_00620304:
    RECOMP_BACKEDGE();
    goto L_0061F896; /* 0x00620304: jmp 0x61f896 */
L_00620309:
    /* cmp MEM32(ebp + (-0x90)), 0x606u */ /* 0x00620309: cmp dword ptr [ebp - 0x90], 0x606 */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x90))); _flag_b = (uint32_t)(0x606u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_NE(_flag_a, _flag_b)) goto L_0061F896; /* 0x00620313: jne 0x61f896 */
L_00620319:
    /* cmp MEM32(ebp + (-0x54)), 0 */ /* 0x00620319: cmp dword ptr [ebp - 0x54], 0 */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x54))); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_LE(_flag_a, _flag_b)) goto L_0061F896; /* 0x0062031D: jle 0x61f896 */
L_00620323:
    eax = MEM32(esi + 0x52C); /* 0x00620323: mov eax, dword ptr [esi + 0x52c] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x00620329: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(esi + 0x528));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - MEM32(esi + 0x528); /* 0x0062032B: sub eax, dword ptr [esi + 0x528] */
    _flag_k = FK_CMP;
    if (2u) _cf = (((eax) >> 1) & 1u); /* 0x00620331: sar eax, 2 */
    if (2u) { _flag_a = recomp_flags_pack(((uint32_t)((int32_t)eax >> 2u)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = (uint32_t)((int32_t)eax >> 2u);
    MEM32(ebp + (-0x94)) = ecx; /* 0x00620334: mov dword ptr [ebp - 0x94], ecx */
    /* test eax, eax */ /* 0x0062033A: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_Z(_flag_a, _flag_b)) goto L_0061F896; /* 0x0062033C: je 0x61f896 */
L_00620342:
    eax = MEM32(esi + 0x528); /* 0x00620342: mov eax, dword ptr [esi + 0x528] */
    ecx = MEM32(eax + ecx * 4); /* 0x00620348: mov ecx, dword ptr [eax + ecx*4] */
    eax = MEM32(ebp + (-0x54)); /* 0x0062034B: mov eax, dword ptr [ebp - 0x54] */
    PUSH32(esp, eax); /* 0x0062034E: push eax */
    edx = (uint32_t)((int32_t)eax * (int32_t)0x1D4u); /* 0x0062034F: imul edx, eax, 0x1d4 */
    eax = MEM32(esi + 0x504); /* 0x00620355: mov eax, dword ptr [esi + 0x504] */
    edi = MEM32(ecx); /* 0x0062035B: mov edi, dword ptr [ecx] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x44u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 0x44u; /* 0x0062035D: add eax, 0x44 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + edx; /* 0x00620360: add eax, edx */
    _flag_k = FK_ADD;
    PUSH32(esp, eax); /* 0x00620362: push eax */
    RECOMP_ICALL(MEM32(edi + 0x38)); /* 0x00620363: call dword ptr [edi + 0x38] */
    RECOMP_FLAGS_IN();
    eax = MEM32(esi + 0x52C); /* 0x00620366: mov eax, dword ptr [esi + 0x52c] */
    ecx = MEM32(ebp + (-0x94)); /* 0x0062036C: mov ecx, dword ptr [ebp - 0x94] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(esi + 0x528));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - MEM32(esi + 0x528); /* 0x00620372: sub eax, dword ptr [esi + 0x528] */
    _flag_k = FK_CMP;
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx + 1; /* 0x00620378: inc ecx */
    _flag_k = FK_INC;
    if (2u) _cf = (((eax) >> 1) & 1u); /* 0x00620379: sar eax, 2 */
    if (2u) { _flag_a = recomp_flags_pack(((uint32_t)((int32_t)eax >> 2u)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = (uint32_t)((int32_t)eax >> 2u);
    MEM32(ebp + (-0x94)) = ecx; /* 0x0062037C: mov dword ptr [ebp - 0x94], ecx */
    /* cmp ecx, eax */ /* 0x00620382: cmp ecx, eax */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_00620342; /* 0x00620384: jb 0x620342 */
L_00620386:
    RECOMP_BACKEDGE();
    goto L_0061F896; /* 0x00620386: jmp 0x61f896 */
L_0062038B:
    eax = MEM32(esi + 0x52C); /* 0x0062038B: mov eax, dword ptr [esi + 0x52c] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edi = 0; /* 0x00620391: xor edi, edi */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(esi + 0x528));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - MEM32(esi + 0x528); /* 0x00620393: sub eax, dword ptr [esi + 0x528] */
    _flag_k = FK_CMP;
    if (2u) _cf = (((eax) >> 1) & 1u); /* 0x00620399: sar eax, 2 */
    if (2u) { _flag_a = recomp_flags_pack(((uint32_t)((int32_t)eax >> 2u)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = (uint32_t)((int32_t)eax >> 2u);
    /* test eax, eax */ /* 0x0062039C: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_Z(_flag_a, _flag_b)) goto L_0061F896; /* 0x0062039E: je 0x61f896 */
L_006203A4:
    goto L_006203B0; /* 0x006203A4: jmp 0x6203b0 */
L_006203B0:
    eax = MEM32(esi + 0x528); /* 0x006203B0: mov eax, dword ptr [esi + 0x528] */
    PUSH32(esp, MEM32(ebp + (-0x82))); /* 0x006203B6: push dword ptr [ebp - 0x82] */
    PUSH32(esp, MEM32(ebp + (-0x80))); /* 0x006203BC: push dword ptr [ebp - 0x80] */
    ecx = MEM32(eax + edi * 4); /* 0x006203BF: mov ecx, dword ptr [eax + edi*4] */
    eax = MEM32(ecx); /* 0x006203C2: mov eax, dword ptr [ecx] */
    RECOMP_ICALL(MEM32(eax + 0x2C)); /* 0x006203C4: call dword ptr [eax + 0x2c] */
    RECOMP_FLAGS_IN();
    eax = MEM32(esi + 0x52C); /* 0x006203C7: mov eax, dword ptr [esi + 0x52c] */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(1);
    edi = edi + 1; /* 0x006203CD: inc edi */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(esi + 0x528));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - MEM32(esi + 0x528); /* 0x006203CE: sub eax, dword ptr [esi + 0x528] */
    _flag_k = FK_CMP;
    if (2u) _cf = (((eax) >> 1) & 1u); /* 0x006203D4: sar eax, 2 */
    if (2u) { _flag_a = recomp_flags_pack(((uint32_t)((int32_t)eax >> 2u)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = (uint32_t)((int32_t)eax >> 2u);
    /* cmp edi, eax */ /* 0x006203D7: cmp edi, eax */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_006203B0; /* 0x006203D9: jb 0x6203b0 */
L_006203DB:
    RECOMP_BACKEDGE();
    goto L_0061F896; /* 0x006203DB: jmp 0x61f896 */
L_006203E0:
    eax = MEM32(esi + 0x52C); /* 0x006203E0: mov eax, dword ptr [esi + 0x52c] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edi = 0; /* 0x006203E6: xor edi, edi */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(esi + 0x528));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - MEM32(esi + 0x528); /* 0x006203E8: sub eax, dword ptr [esi + 0x528] */
    _flag_k = FK_CMP;
    if (2u) _cf = (((eax) >> 1) & 1u); /* 0x006203EE: sar eax, 2 */
    if (2u) { _flag_a = recomp_flags_pack(((uint32_t)((int32_t)eax >> 2u)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = (uint32_t)((int32_t)eax >> 2u);
    /* test eax, eax */ /* 0x006203F1: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_Z(_flag_a, _flag_b)) goto L_0061F896; /* 0x006203F3: je 0x61f896 */
L_006203F9:
    esp = esp; /* 0x006203F9: lea esp, [esp] */
L_00620400:
    eax = MEM32(esi + 0x528); /* 0x00620400: mov eax, dword ptr [esi + 0x528] */
    PUSH32(esp, MEM32(ebp + (-0x84))); /* 0x00620406: push dword ptr [ebp - 0x84] */
    ecx = MEM32(eax + edi * 4); /* 0x0062040C: mov ecx, dword ptr [eax + edi*4] */
    eax = MEM32(ecx); /* 0x0062040F: mov eax, dword ptr [ecx] */
    RECOMP_ICALL(MEM32(eax + 0x24)); /* 0x00620411: call dword ptr [eax + 0x24] */
    RECOMP_FLAGS_IN();
    eax = MEM32(esi + 0x52C); /* 0x00620414: mov eax, dword ptr [esi + 0x52c] */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(1);
    edi = edi + 1; /* 0x0062041A: inc edi */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(esi + 0x528));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - MEM32(esi + 0x528); /* 0x0062041B: sub eax, dword ptr [esi + 0x528] */
    _flag_k = FK_CMP;
    if (2u) _cf = (((eax) >> 1) & 1u); /* 0x00620421: sar eax, 2 */
    if (2u) { _flag_a = recomp_flags_pack(((uint32_t)((int32_t)eax >> 2u)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = (uint32_t)((int32_t)eax >> 2u);
    /* cmp edi, eax */ /* 0x00620424: cmp edi, eax */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_00620400; /* 0x00620426: jb 0x620400 */
L_00620428:
    RECOMP_BACKEDGE();
    goto L_0061F896; /* 0x00620428: jmp 0x61f896 */
L_0062042D:
    eax = MEM32(esi + 0x52C); /* 0x0062042D: mov eax, dword ptr [esi + 0x52c] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edi = 0; /* 0x00620433: xor edi, edi */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(esi + 0x528));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - MEM32(esi + 0x528); /* 0x00620435: sub eax, dword ptr [esi + 0x528] */
    _flag_k = FK_CMP;
    if (2u) _cf = (((eax) >> 1) & 1u); /* 0x0062043B: sar eax, 2 */
    if (2u) { _flag_a = recomp_flags_pack(((uint32_t)((int32_t)eax >> 2u)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = (uint32_t)((int32_t)eax >> 2u);
    /* test eax, eax */ /* 0x0062043E: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_Z(_flag_a, _flag_b)) goto L_0061F896; /* 0x00620440: je 0x61f896 */
L_00620446:
    goto L_00620450; /* 0x00620446: jmp 0x620450 */
L_00620450:
    eax = MEM32(esi + 0x528); /* 0x00620450: mov eax, dword ptr [esi + 0x528] */
    PUSH32(esp, MEM32(ebp + (-0x84))); /* 0x00620456: push dword ptr [ebp - 0x84] */
    ecx = MEM32(eax + edi * 4); /* 0x0062045C: mov ecx, dword ptr [eax + edi*4] */
    eax = MEM32(ecx); /* 0x0062045F: mov eax, dword ptr [ecx] */
    RECOMP_ICALL(MEM32(eax + 0x1C)); /* 0x00620461: call dword ptr [eax + 0x1c] */
    RECOMP_FLAGS_IN();
    eax = MEM32(esi + 0x52C); /* 0x00620464: mov eax, dword ptr [esi + 0x52c] */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(1);
    edi = edi + 1; /* 0x0062046A: inc edi */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(esi + 0x528));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - MEM32(esi + 0x528); /* 0x0062046B: sub eax, dword ptr [esi + 0x528] */
    _flag_k = FK_CMP;
    if (2u) _cf = (((eax) >> 1) & 1u); /* 0x00620471: sar eax, 2 */
    if (2u) { _flag_a = recomp_flags_pack(((uint32_t)((int32_t)eax >> 2u)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = (uint32_t)((int32_t)eax >> 2u);
    /* cmp edi, eax */ /* 0x00620474: cmp edi, eax */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_00620450; /* 0x00620476: jb 0x620450 */
L_00620478:
    RECOMP_BACKEDGE();
    goto L_0061F896; /* 0x00620478: jmp 0x61f896 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      case 0x0061F88Cu: goto L_0061F88C;
      case 0x0061FB61u: goto L_0061FB61;
      case 0x0061FC39u: goto L_0061FC39;
      case 0x0061FCCDu: goto L_0061FCCD;
      case 0x0061FD61u: goto L_0061FD61;
      case 0x0061FE2Au: goto L_0061FE2A;
      case 0x0061FEB3u: goto L_0061FEB3;
      case 0x0061FF51u: goto L_0061FF51;
      case 0x0061FF60u: goto L_0061FF60;
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_00620000(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00620000u);

L_00620000:
    _flag_a = (uint32_t)(MEM32(ebx + 0x52886)); _flag_b = (uint32_t)(1);
    MEM32(ebx + 0x52886) = MEM32(ebx + 0x52886) - 1; /* 0x00620000: dec dword ptr [ebx + 0x52886] */
    _flag_k = FK_DEC;
    _flag_a = (uint32_t)(HI8(ebx)) << 24; _flag_b = (uint32_t)(HI8(ebx)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    SET_HI8(ebx, HI8(ebx) + HI8(ebx)); /* 0x00620006: add bh, bh */
    _flag_k = FK_NARROW(FK_ADD, 24);
    SET_HI8(ecx, 0x74u); /* 0x00620008: mov ch, 0x74 */
    RECOMP_ITAIL(0x0062000Au); { RECOMP_REGS_OUT(); return; } /* falls through */
    RECOMP_REGS_OUT();
}

void sub_00620500(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00620500u);

L_00620500:
    PUSH32(esp, ebp); /* 0x00620500: push ebp */
    ebp = esp; /* 0x00620501: mov ebp, esp */
    PUSH32(esp, 0xFFFFFFFFu); /* 0x00620503: push -1 */
    PUSH32(esp, 0x007B740Bu); /* 0x00620505: push 0x7b740b */
    eax = MEM32(FS_BASE + (0)); /* 0x0062050A: mov eax, dword ptr fs:[0] */
    PUSH32(esp, eax); /* 0x00620510: push eax */
    PUSH32(esp, ecx); /* 0x00620511: push ecx */
    PUSH32(esp, esi); /* 0x00620512: push esi */
    eax = MEM32(0x855000); /* 0x00620513: mov eax, dword ptr [0x855000] */
    _flag_a = (uint32_t)((eax ^ ebp)); _flag_b = (uint32_t)((eax ^ ebp));
    eax = eax ^ ebp; /* 0x00620518: xor eax, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, eax); /* 0x0062051A: push eax */
    eax = ebp + (-0xC); /* 0x0062051B: lea eax, [ebp - 0xc] */
    MEM32(FS_BASE + (0)) = eax; /* 0x0062051E: mov dword ptr fs:[0], eax */
    esi = ecx; /* 0x00620524: mov esi, ecx */
    MEM32(ebp + (-0x10)) = esi; /* 0x00620526: mov dword ptr [ebp - 0x10], esi */
    MEM32(ebp + (-0x4)) = 0xFFFFFFFFu; /* 0x00620529: mov dword ptr [ebp - 4], 0xffffffff */
    /* cmp MEM32(esi + 0x38), 0x10u */ /* 0x00620530: cmp dword ptr [esi + 0x38], 0x10 */
    _flag_a = (uint32_t)(MEM32(esi + 0x38)); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_B(_flag_a, _flag_b)) goto L_00620542; /* 0x00620534: jb 0x620542 */
L_00620536:
    PUSH32(esp, MEM32(esi + 0x24)); /* 0x00620536: push dword ptr [esi + 0x24] */
    RECOMP_ICALL(MEM32(0x7CC694)); /* 0x00620539: call dword ptr [0x7cc694] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x0062053F: add esp, 4 */
    _flag_k = FK_ADD;
L_00620542:
    MEM32(esi + 0x38) = 0xFu; /* 0x00620542: mov dword ptr [esi + 0x38], 0xf */
    MEM32(esi + 0x34) = 0; /* 0x00620549: mov dword ptr [esi + 0x34], 0 */
    MEM8(esi + 0x24) = (uint8_t)(0); /* 0x00620550: mov byte ptr [esi + 0x24], 0 */
    ecx = MEM32(ebp + (-0xC)); /* 0x00620554: mov ecx, dword ptr [ebp - 0xc] */
    MEM32(FS_BASE + (0)) = ecx; /* 0x00620557: mov dword ptr fs:[0], ecx */
    ecx = POP32_VAL(esp); /* 0x0062055E: pop ecx */
    esi = POP32_VAL(esp); /* 0x0062055F: pop esi */
    esp = ebp; /* 0x00620560: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x00620562: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x00620563: ret  */
    RECOMP_REGS_OUT();
}

void sub_00620570(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00620570u);

L_00620570:
    PUSH32(esp, esi); /* 0x00620570: push esi */
    esi = ecx; /* 0x00620571: mov esi, ecx */
    ecx = esi + 0x534; /* 0x00620573: lea ecx, [esi + 0x534] */
    MEM8(esi + 0x14) = (uint8_t)(0); /* 0x00620579: mov byte ptr [esi + 0x14], 0 */
    MEM32(esi + 0x2C) = 0xFFFFFFFFu; /* 0x0062057D: mov dword ptr [esi + 0x2c], 0xffffffff */
    RECOMP_CALL(sub_00625890); /* 0x00620584: call 0x625890 */
    RECOMP_FLAGS_IN();
    ecx = esi + 0x554; /* 0x00620589: lea ecx, [esi + 0x554] */
    RECOMP_CALL(sub_00625890); /* 0x0062058F: call 0x625890 */
    RECOMP_FLAGS_IN();
    ecx = esi + 0x574; /* 0x00620594: lea ecx, [esi + 0x574] */
    RECOMP_CALL(sub_00625890); /* 0x0062059A: call 0x625890 */
    RECOMP_FLAGS_IN();
    ecx = esi + 0x594; /* 0x0062059F: lea ecx, [esi + 0x594] */
    RECOMP_CALL(sub_00625890); /* 0x006205A5: call 0x625890 */
    RECOMP_FLAGS_IN();
    ecx = esi + 0x5B4; /* 0x006205AA: lea ecx, [esi + 0x5b4] */
    esi = POP32_VAL(esp); /* 0x006205B0: pop esi */
    goto L_00625890; /* 0x006205B1: jmp 0x625890 */
L_00625890:
    PUSH32(esp, ebp); /* 0x00625890: push ebp */
    ebp = esp; /* 0x00625891: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 8; /* 0x00625893: sub esp, 8 */
    _flag_k = FK_CMP;
    PUSH32(esp, edi); /* 0x00625896: push edi */
    edi = ecx; /* 0x00625897: mov edi, ecx */
    edx = MEM32(edi); /* 0x00625899: mov edx, dword ptr [edi] */
    eax = MEM32(edx); /* 0x0062589B: mov eax, dword ptr [edx] */
    MEM32(edx) = edx; /* 0x0062589D: mov dword ptr [edx], edx */
    edx = MEM32(edi); /* 0x0062589F: mov edx, dword ptr [edi] */
    MEM32(edx + 0x4) = edx; /* 0x006258A1: mov dword ptr [edx + 4], edx */
    MEM32(edi + 0x4) = 0; /* 0x006258A4: mov dword ptr [edi + 4], 0 */
    /* cmp eax, MEM32(edi) */ /* 0x006258AB: cmp eax, dword ptr [edi] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(edi));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_006258C7; /* 0x006258AD: je 0x6258c7 */
L_006258AF:
    PUSH32(esp, ebx); /* 0x006258AF: push ebx */
    ebx = MEM32(0x7CC694); /* 0x006258B0: mov ebx, dword ptr [0x7cc694] */
    PUSH32(esp, esi); /* 0x006258B6: push esi */
L_006258B7:
    esi = MEM32(eax); /* 0x006258B7: mov esi, dword ptr [eax] */
    PUSH32(esp, eax); /* 0x006258B9: push eax */
    RECOMP_ICALL(ebx); /* 0x006258BA: call ebx */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x006258BC: add esp, 4 */
    _flag_k = FK_ADD;
    eax = esi; /* 0x006258BF: mov eax, esi */
    /* cmp esi, MEM32(edi) */ /* 0x006258C1: cmp esi, dword ptr [edi] */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(MEM32(edi));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_NE(_flag_a, _flag_b)) goto L_006258B7; /* 0x006258C3: jne 0x6258b7 */
L_006258C5:
    esi = POP32_VAL(esp); /* 0x006258C5: pop esi */
    ebx = POP32_VAL(esp); /* 0x006258C6: pop ebx */
L_006258C7:
    eax = MEM32(edi); /* 0x006258C7: mov eax, dword ptr [edi] */
    edx = ebp + (-0x4); /* 0x006258C9: lea edx, [ebp - 4] */
    PUSH32(esp, edx); /* 0x006258CC: push edx */
    ecx = edi + 0x8; /* 0x006258CD: lea ecx, [edi + 8] */
    MEM32(ebp + (-0x4)) = eax; /* 0x006258D0: mov dword ptr [ebp - 4], eax */
    eax = MEM32(ecx); /* 0x006258D3: mov eax, dword ptr [ecx] */
    PUSH32(esp, 0x10u); /* 0x006258D5: push 0x10 */
    PUSH32(esp, eax); /* 0x006258D7: push eax */
    MEM32(ecx + 0x4) = eax; /* 0x006258D8: mov dword ptr [ecx + 4], eax */
    eax = ebp + (-0x8); /* 0x006258DB: lea eax, [ebp - 8] */
    PUSH32(esp, eax); /* 0x006258DE: push eax */
    RECOMP_CALL(sub_005C9F70); /* 0x006258DF: call 0x5c9f70 */
    RECOMP_FLAGS_IN();
    MEM32(edi + 0x14) = 7; /* 0x006258E4: mov dword ptr [edi + 0x14], 7 */
    MEM32(edi + 0x18) = 8; /* 0x006258EB: mov dword ptr [edi + 0x18], 8 */
    edi = POP32_VAL(esp); /* 0x006258F2: pop edi */
    esp = ebp; /* 0x006258F3: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x006258F5: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x006258F6: ret  */
    RECOMP_REGS_OUT();
}

void sub_006205C0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x006205C0u);

L_006205C0:
    PUSH32(esp, ebp); /* 0x006205C0: push ebp */
    ebp = esp; /* 0x006205C1: mov ebp, esp */
    PUSH32(esp, ecx); /* 0x006205C3: push ecx */
    PUSH32(esp, esi); /* 0x006205C4: push esi */
    esi = MEM32(0x870268); /* 0x006205C5: mov esi, dword ptr [0x870268] */
    ecx = esi + 0x534; /* 0x006205CB: lea ecx, [esi + 0x534] */
    MEM8(esi + 0x14) = (uint8_t)(0); /* 0x006205D1: mov byte ptr [esi + 0x14], 0 */
    MEM32(esi + 0x2C) = 0xFFFFFFFFu; /* 0x006205D5: mov dword ptr [esi + 0x2c], 0xffffffff */
    RECOMP_CALL(sub_00625890); /* 0x006205DC: call 0x625890 */
    RECOMP_FLAGS_IN();
    ecx = esi + 0x554; /* 0x006205E1: lea ecx, [esi + 0x554] */
    RECOMP_CALL(sub_00625890); /* 0x006205E7: call 0x625890 */
    RECOMP_FLAGS_IN();
    ecx = esi + 0x574; /* 0x006205EC: lea ecx, [esi + 0x574] */
    RECOMP_CALL(sub_00625890); /* 0x006205F2: call 0x625890 */
    RECOMP_FLAGS_IN();
    ecx = esi + 0x594; /* 0x006205F7: lea ecx, [esi + 0x594] */
    RECOMP_CALL(sub_00625890); /* 0x006205FD: call 0x625890 */
    RECOMP_FLAGS_IN();
    ecx = esi + 0x5B4; /* 0x00620602: lea ecx, [esi + 0x5b4] */
    RECOMP_CALL(sub_00625890); /* 0x00620608: call 0x625890 */
    RECOMP_FLAGS_IN();
    SET_LO8(eax, MEM8(ebp + 0x8)); /* 0x0062060D: mov al, byte ptr [ebp + 8] */
    MEM8(esi + 0x16) = (uint8_t)(LO8(eax)); /* 0x00620610: mov byte ptr [esi + 0x16], al */
    esi = POP32_VAL(esp); /* 0x00620613: pop esi */
    esp = ebp; /* 0x00620614: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x00620616: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x00620617: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_00620620(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00620620u);

L_00620620:
    PUSH32(esp, ebp); /* 0x00620620: push ebp */
    ebp = esp; /* 0x00620621: mov ebp, esp */
    PUSH32(esp, 0xFFFFFFFFu); /* 0x00620623: push -1 */
    PUSH32(esp, 0x007B7470u); /* 0x00620625: push 0x7b7470 */
    eax = MEM32(FS_BASE + (0)); /* 0x0062062A: mov eax, dword ptr fs:[0] */
    PUSH32(esp, eax); /* 0x00620630: push eax */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x74u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x74u; /* 0x00620631: sub esp, 0x74 */
    _flag_k = FK_CMP;
    eax = MEM32(0x855000); /* 0x00620634: mov eax, dword ptr [0x855000] */
    _flag_a = (uint32_t)((eax ^ ebp)); _flag_b = (uint32_t)((eax ^ ebp));
    eax = eax ^ ebp; /* 0x00620639: xor eax, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x10)) = eax; /* 0x0062063B: mov dword ptr [ebp - 0x10], eax */
    PUSH32(esp, ebx); /* 0x0062063E: push ebx */
    PUSH32(esp, esi); /* 0x0062063F: push esi */
    PUSH32(esp, edi); /* 0x00620640: push edi */
    PUSH32(esp, eax); /* 0x00620641: push eax */
    eax = ebp + (-0xC); /* 0x00620642: lea eax, [ebp - 0xc] */
    MEM32(FS_BASE + (0)) = eax; /* 0x00620645: mov dword ptr fs:[0], eax */
    esi = ecx; /* 0x0062064B: mov esi, ecx */
    PUSH32(esp, 6); /* 0x0062064D: push 6 */
    MEM32(ebp + (-0x18)) = 0; /* 0x0062064F: mov dword ptr [ebp - 0x18], 0 */
    ecx = ebp + (-0x28); /* 0x00620656: lea ecx, [ebp - 0x28] */
    MEM32(ebp + (-0x14)) = 0; /* 0x00620659: mov dword ptr [ebp - 0x14], 0 */
    PUSH32(esp, 0x007ED4C4u); /* 0x00620660: push 0x7ed4c4 */
    MEM32(ebp + (-0x14)) = 0xFu; /* 0x00620665: mov dword ptr [ebp - 0x14], 0xf */
    MEM32(ebp + (-0x18)) = 0; /* 0x0062066C: mov dword ptr [ebp - 0x18], 0 */
    MEM8(ebp + (-0x28)) = (uint8_t)(0); /* 0x00620673: mov byte ptr [ebp - 0x28], 0 */
    RECOMP_CALL(sub_0040A2F0); /* 0x00620677: call 0x40a2f0 */
    RECOMP_FLAGS_IN();
    MEM32(ebp + (-0x4)) = 0; /* 0x0062067C: mov dword ptr [ebp - 4], 0 */
    ecx = MEM32(0x8780CC); /* 0x00620683: mov ecx, dword ptr [0x8780cc] */
    /* test ecx, ecx */ /* 0x00620689: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_0062069C; /* 0x0062068B: je 0x62069c */
L_0062068D:
    ecx = MEM32(ecx + 0xC0); /* 0x0062068D: mov ecx, dword ptr [ecx + 0xc0] */
    eax = ebp + (-0x28); /* 0x00620693: lea eax, [ebp - 0x28] */
    PUSH32(esp, eax); /* 0x00620696: push eax */
    RECOMP_CALL(sub_00671CA0); /* 0x00620697: call 0x671ca0 */
    RECOMP_FLAGS_IN();
L_0062069C:
    MEM32(ebp + (-0x4)) = 0xFFFFFFFFu; /* 0x0062069C: mov dword ptr [ebp - 4], 0xffffffff */
    /* cmp MEM32(ebp + (-0x14)), 0x10u */ /* 0x006206A3: cmp dword ptr [ebp - 0x14], 0x10 */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x14))); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    edi = MEM32(0x7CC694); /* 0x006206A7: mov edi, dword ptr [0x7cc694] */
    if (CMP_B(_flag_a, _flag_b)) goto L_006206B7; /* 0x006206AD: jb 0x6206b7 */
L_006206AF:
    PUSH32(esp, MEM32(ebp + (-0x28))); /* 0x006206AF: push dword ptr [ebp - 0x28] */
    RECOMP_ICALL(edi); /* 0x006206B2: call edi */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x006206B4: add esp, 4 */
    _flag_k = FK_ADD;
L_006206B7:
    edx = MEM32(esi + 0x8); /* 0x006206B7: mov edx, dword ptr [esi + 8] */
    MEM32(ebp + (-0x30)) = 0; /* 0x006206BA: mov dword ptr [ebp - 0x30], 0 */
    MEM32(ebp + (-0x2C)) = 0; /* 0x006206C1: mov dword ptr [ebp - 0x2c], 0 */
    MEM32(ebp + (-0x2C)) = 0xFu; /* 0x006206C8: mov dword ptr [ebp - 0x2c], 0xf */
    MEM32(ebp + (-0x30)) = 0; /* 0x006206CF: mov dword ptr [ebp - 0x30], 0 */
    MEM8(ebp + (-0x40)) = (uint8_t)(0); /* 0x006206D6: mov byte ptr [ebp - 0x40], 0 */
    /* cmp MEM8(edx), 0 */ /* 0x006206DA: cmp byte ptr [edx], 0 */
    _flag_a = (uint32_t)(MEM8(edx)) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    MEM32(ebp + (-0x14)) = 0xFu; /* 0x006206DD: mov dword ptr [ebp - 0x14], 0xf */
    MEM32(ebp + (-0x18)) = 0; /* 0x006206E4: mov dword ptr [ebp - 0x18], 0 */
    MEM8(ebp + (-0x28)) = (uint8_t)(0); /* 0x006206EB: mov byte ptr [ebp - 0x28], 0 */
    if (CMP_NE(_flag_a, _flag_b)) goto L_006206F5; /* 0x006206EF: jne 0x6206f5 */
L_006206F1:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x006206F1: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_00620709; /* 0x006206F3: jmp 0x620709 */
L_006206F5:
    ecx = edx; /* 0x006206F5: mov ecx, edx */
    ebx = ecx + 0x1; /* 0x006206F7: lea ebx, [ecx + 1] */
    ebx = ebx; /* 0x006206FA: lea ebx, [ebx] */
L_00620700:
    SET_LO8(eax, MEM8(ecx)); /* 0x00620700: mov al, byte ptr [ecx] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx + 1; /* 0x00620702: inc ecx */
    _flag_k = FK_INC;
    /* test LO8(eax), LO8(eax) */ /* 0x00620703: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_00620700; /* 0x00620705: jne 0x620700 */
L_00620707:
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ecx = ecx - ebx; /* 0x00620707: sub ecx, ebx */
    _flag_k = FK_CMP;
L_00620709:
    PUSH32(esp, ecx); /* 0x00620709: push ecx */
    PUSH32(esp, edx); /* 0x0062070A: push edx */
    ecx = ebp + (-0x40); /* 0x0062070B: lea ecx, [ebp - 0x40] */
    RECOMP_CALL(sub_0040A2F0); /* 0x0062070E: call 0x40a2f0 */
    RECOMP_FLAGS_IN();
    MEM32(ebp + (-0x4)) = 1; /* 0x00620713: mov dword ptr [ebp - 4], 1 */
    eax = ebp + (-0x40); /* 0x0062071A: lea eax, [ebp - 0x40] */
    /* cmp MEM32(ebp + (-0x2C)), 0x10u */ /* 0x0062071D: cmp dword ptr [ebp - 0x2c], 0x10 */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x2C))); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    PUSH32(esp, 4); /* 0x00620721: push 4 */
    if (CMP_AE(_flag_a, _flag_b)) { eax = MEM32(ebp + (-0x40)); } /* 0x00620723: cmovae eax, dword ptr [ebp - 0x40] */
    PUSH32(esp, eax); /* 0x00620727: push eax */
    RECOMP_ICALL(MEM32(0x7CC49C)); /* 0x00620728: call dword ptr [0x7cc49c] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 8; /* 0x0062072E: add esp, 8 */
    _flag_k = FK_ADD;
    /* test eax, eax */ /* 0x00620731: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    SET_LO8(ebx, (TEST_NZ(_flag_a, _flag_b)) ? 1 : 0); /* 0x00620733: setne bl */
    MEM32(ebp + (-0x4)) = 0xFFFFFFFFu; /* 0x00620736: mov dword ptr [ebp - 4], 0xffffffff */
    /* cmp MEM32(ebp + (-0x2C)), 0x10u */ /* 0x0062073D: cmp dword ptr [ebp - 0x2c], 0x10 */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x2C))); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_B(_flag_a, _flag_b)) goto L_0062074B; /* 0x00620741: jb 0x62074b */
L_00620743:
    PUSH32(esp, MEM32(ebp + (-0x40))); /* 0x00620743: push dword ptr [ebp - 0x40] */
    RECOMP_ICALL(edi); /* 0x00620746: call edi */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x00620748: add esp, 4 */
    _flag_k = FK_ADD;
L_0062074B:
    MEM32(ebp + (-0x2C)) = 0xFu; /* 0x0062074B: mov dword ptr [ebp - 0x2c], 0xf */
    MEM32(ebp + (-0x30)) = 0; /* 0x00620752: mov dword ptr [ebp - 0x30], 0 */
    MEM8(ebp + (-0x40)) = (uint8_t)(0); /* 0x00620759: mov byte ptr [ebp - 0x40], 0 */
    /* test LO8(ebx), LO8(ebx) */ /* 0x0062075D: test bl, bl */
    _flag_a = (uint32_t)(LO8(ebx)) << 24; _flag_b = (uint32_t)(LO8(ebx)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_00620768; /* 0x0062075F: je 0x620768 */
L_00620761:
    ecx = esi; /* 0x00620761: mov ecx, esi */
    RECOMP_CALL(sub_006208D0); /* 0x00620763: call 0x6208d0 */
    RECOMP_FLAGS_IN();
L_00620768:
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0xCu; /* 0x00620768: sub esp, 0xc */
    _flag_k = FK_CMP;
    ecx = ebp + (-0x78); /* 0x0062076B: lea ecx, [ebp - 0x78] */
    RECOMP_CALL(sub_0053C800); /* 0x0062076E: call 0x53c800 */
    RECOMP_FLAGS_IN();
    MEM32(ebp + (-0x4)) = 3; /* 0x00620773: mov dword ptr [ebp - 4], 3 */
    edx = MEM32(esi + 0x8); /* 0x0062077A: mov edx, dword ptr [esi + 8] */
    MEM32(ebp + (-0x18)) = 0; /* 0x0062077D: mov dword ptr [ebp - 0x18], 0 */
    MEM32(ebp + (-0x14)) = 0; /* 0x00620784: mov dword ptr [ebp - 0x14], 0 */
    MEM32(ebp + (-0x14)) = 0xFu; /* 0x0062078B: mov dword ptr [ebp - 0x14], 0xf */
    MEM32(ebp + (-0x18)) = 0; /* 0x00620792: mov dword ptr [ebp - 0x18], 0 */
    MEM8(ebp + (-0x28)) = (uint8_t)(0); /* 0x00620799: mov byte ptr [ebp - 0x28], 0 */
    /* cmp MEM8(edx), 0 */ /* 0x0062079D: cmp byte ptr [edx], 0 */
    _flag_a = (uint32_t)(MEM8(edx)) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_006207A6; /* 0x006207A0: jne 0x6207a6 */
L_006207A2:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x006207A2: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_006207B9; /* 0x006207A4: jmp 0x6207b9 */
L_006207A6:
    ecx = edx; /* 0x006207A6: mov ecx, edx */
    ebx = ecx + 0x1; /* 0x006207A8: lea ebx, [ecx + 1] */
    goto L_006207B0; /* 0x006207AB: jmp 0x6207b0 */
L_006207B0:
    SET_LO8(eax, MEM8(ecx)); /* 0x006207B0: mov al, byte ptr [ecx] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx + 1; /* 0x006207B2: inc ecx */
    _flag_k = FK_INC;
    /* test LO8(eax), LO8(eax) */ /* 0x006207B3: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_006207B0; /* 0x006207B5: jne 0x6207b0 */
L_006207B7:
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ecx = ecx - ebx; /* 0x006207B7: sub ecx, ebx */
    _flag_k = FK_CMP;
L_006207B9:
    PUSH32(esp, ecx); /* 0x006207B9: push ecx */
    PUSH32(esp, edx); /* 0x006207BA: push edx */
    ecx = ebp + (-0x28); /* 0x006207BB: lea ecx, [ebp - 0x28] */
    RECOMP_CALL(sub_0040A2F0); /* 0x006207BE: call 0x40a2f0 */
    RECOMP_FLAGS_IN();
    MEM8(ebp + (-0x4)) = (uint8_t)(4); /* 0x006207C3: mov byte ptr [ebp - 4], 4 */
    eax = ebp + (-0x28); /* 0x006207C7: lea eax, [ebp - 0x28] */
    PUSH32(esp, eax); /* 0x006207CA: push eax */
    ecx = ebp + (-0x78); /* 0x006207CB: lea ecx, [ebp - 0x78] */
    RECOMP_CALL(sub_005410B0); /* 0x006207CE: call 0x5410b0 */
    RECOMP_FLAGS_IN();
    MEM8(ebp + (-0x4)) = (uint8_t)(3); /* 0x006207D3: mov byte ptr [ebp - 4], 3 */
    /* cmp MEM32(ebp + (-0x14)), 0x10u */ /* 0x006207D7: cmp dword ptr [ebp - 0x14], 0x10 */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x14))); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_B(_flag_a, _flag_b)) goto L_006207E5; /* 0x006207DB: jb 0x6207e5 */
L_006207DD:
    PUSH32(esp, MEM32(ebp + (-0x28))); /* 0x006207DD: push dword ptr [ebp - 0x28] */
    RECOMP_ICALL(edi); /* 0x006207E0: call edi */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x006207E2: add esp, 4 */
    _flag_k = FK_ADD;
L_006207E5:
    PUSH32(esp, MEM32(esi + 0xC)); /* 0x006207E5: push dword ptr [esi + 0xc] */
    edx = ebp + (-0x78); /* 0x006207E8: lea edx, [ebp - 0x78] */
    MEM32(ebp + (-0x14)) = 0xFu; /* 0x006207EB: mov dword ptr [ebp - 0x14], 0xf */
    ecx = esi; /* 0x006207F2: mov ecx, esi */
    MEM32(ebp + (-0x18)) = 0; /* 0x006207F4: mov dword ptr [ebp - 0x18], 0 */
    MEM8(ebp + (-0x28)) = (uint8_t)(0); /* 0x006207FB: mov byte ptr [ebp - 0x28], 0 */
    RECOMP_CALL(sub_00626950); /* 0x006207FF: call 0x626950 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x00620804: add esp, 4 */
    _flag_k = FK_ADD;
    /* test LO8(eax), LO8(eax) */ /* 0x00620807: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_00620812; /* 0x00620809: jne 0x620812 */
L_0062080B:
    ecx = esi; /* 0x0062080B: mov ecx, esi */
    RECOMP_CALL(sub_006208D0); /* 0x0062080D: call 0x6208d0 */
    RECOMP_FLAGS_IN();
L_00620812:
    eax = esi + 0x510; /* 0x00620812: lea eax, [esi + 0x510] */
    ecx = esi; /* 0x00620818: mov ecx, esi */
    PUSH32(esp, eax); /* 0x0062081A: push eax */
    RECOMP_CALL(sub_00621F50); /* 0x0062081B: call 0x621f50 */
    RECOMP_FLAGS_IN();
    /* test LO8(eax), LO8(eax) */ /* 0x00620820: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_0062082E; /* 0x00620822: jne 0x62082e */
L_00620824:
    MEM32(esi + 0x3D8) = 0; /* 0x00620824: mov dword ptr [esi + 0x3d8], 0 */
L_0062082E:
    /* cmp MEM32(esi + 0x3D8), 0 */ /* 0x0062082E: cmp dword ptr [esi + 0x3d8], 0 */
    _flag_a = (uint32_t)(MEM32(esi + 0x3D8)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_00620865; /* 0x00620835: je 0x620865 */
L_00620837:
    ecx = MEM32(esi + 0x508); /* 0x00620837: mov ecx, dword ptr [esi + 0x508] */
    eax = 0x8C08C08Du; /* 0x0062083D: mov eax, 0x8c08c08d */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(MEM32(esi + 0x504));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ecx = ecx - MEM32(esi + 0x504); /* 0x00620842: sub ecx, dword ptr [esi + 0x504] */
    _flag_k = FK_CMP;
    { int64_t _r = (int64_t)(int32_t)eax * (int32_t)(ecx); /* 0x00620848: imul ecx */
      eax = (uint32_t)_r; edx = (uint32_t)(_r >> 32); uint32_t _ov = _r != (int32_t)_r;
      _flag_k = FK_EFLAGS; _flag_a = _ov ? 0x801u : 0u; _flag_b = 0; _cf = _ov; }
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edx = edx + ecx; /* 0x0062084A: add edx, ecx */
    _flag_k = FK_ADD;
    if (8u) _cf = (((edx) >> 7) & 1u); /* 0x0062084C: sar edx, 8 */
    if (8u) { _flag_a = recomp_flags_pack(((uint32_t)((int32_t)edx >> 8u)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    edx = (uint32_t)((int32_t)edx >> 8u);
    eax = edx; /* 0x0062084F: mov eax, edx */
    if (31u) _cf = (((eax) >> 30) & 1u); /* 0x00620851: shr eax, 0x1f */
    if (31u) { _flag_a = recomp_flags_pack((eax >> 31u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax >> 31u; /* 0x00620851: shr eax, 0x1f */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + edx; /* 0x00620854: add eax, edx */
    _flag_k = FK_ADD;
    /* cmp eax, 1 */ /* 0x00620856: cmp eax, 1 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_A(_flag_a, _flag_b)) goto L_00620865; /* 0x00620859: ja 0x620865 */
L_0062085B:
    MEM32(esi + 0x3D8) = 0; /* 0x0062085B: mov dword ptr [esi + 0x3d8], 0 */
L_00620865:
    MEM32(ebp + (-0x4)) = 0xFFFFFFFFu; /* 0x00620865: mov dword ptr [ebp - 4], 0xffffffff */
    eax = ebp + (-0x78); /* 0x0062086C: lea eax, [ebp - 0x78] */
    MEM32(ebp + (-0x7C)) = eax; /* 0x0062086F: mov dword ptr [ebp - 0x7c], eax */
    MEM32(ebp + (-0x4)) = 7; /* 0x00620872: mov dword ptr [ebp - 4], 7 */
    esi = MEM32(ebp + (-0x64)); /* 0x00620879: mov esi, dword ptr [ebp - 0x64] */
    /* test esi, esi */ /* 0x0062087C: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_00620895; /* 0x0062087E: je 0x620895 */
L_00620880:
    ecx = esi; /* 0x00620880: mov ecx, esi */
    RECOMP_CALL(sub_0053D5C0); /* 0x00620882: call 0x53d5c0 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, MEM32(esi + 0x10)); /* 0x00620887: push dword ptr [esi + 0x10] */
    RECOMP_ICALL(edi); /* 0x0062088A: call edi */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x0062088C: add esp, 4 */
    _flag_k = FK_ADD;
    PUSH32(esp, esi); /* 0x0062088F: push esi */
    RECOMP_ICALL(edi); /* 0x00620890: call edi */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x00620892: add esp, 4 */
    _flag_k = FK_ADD;
L_00620895:
    MEM8(ebp + (-0x4)) = (uint8_t)(6); /* 0x00620895: mov byte ptr [ebp - 4], 6 */
    PUSH32(esp, MEM32(ebp + (-0x58))); /* 0x00620899: push dword ptr [ebp - 0x58] */
    RECOMP_ICALL(MEM32(0x7CC44C)); /* 0x0062089C: call dword ptr [0x7cc44c] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x006208A2: add esp, 4 */
    _flag_k = FK_ADD;
    PUSH32(esp, MEM32(ebp + (-0x5C))); /* 0x006208A5: push dword ptr [ebp - 0x5c] */
    RECOMP_ICALL(edi); /* 0x006208A8: call edi */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x006208AA: add esp, 4 */
    _flag_k = FK_ADD;
    MEM32(ebp + (-0x4)) = 0xFFFFFFFFu; /* 0x006208AD: mov dword ptr [ebp - 4], 0xffffffff */
    ecx = MEM32(ebp + (-0xC)); /* 0x006208B4: mov ecx, dword ptr [ebp - 0xc] */
    MEM32(FS_BASE + (0)) = ecx; /* 0x006208B7: mov dword ptr fs:[0], ecx */
    ecx = POP32_VAL(esp); /* 0x006208BE: pop ecx */
    edi = POP32_VAL(esp); /* 0x006208BF: pop edi */
    esi = POP32_VAL(esp); /* 0x006208C0: pop esi */
    ebx = POP32_VAL(esp); /* 0x006208C1: pop ebx */
    ecx = MEM32(ebp + (-0x10)); /* 0x006208C2: mov ecx, dword ptr [ebp - 0x10] */
    _flag_a = (uint32_t)((ecx ^ ebp)); _flag_b = (uint32_t)((ecx ^ ebp));
    ecx = ecx ^ ebp; /* 0x006208C5: xor ecx, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_0077F4C2); /* 0x006208C7: call 0x77f4c2 */
    RECOMP_FLAGS_IN();
    esp = ebp; /* 0x006208CC: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x006208CE: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x006208CF: ret  */
    RECOMP_REGS_OUT();
}

void sub_006208D0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x006208D0u);

L_006208D0:
    PUSH32(esp, ebp); /* 0x006208D0: push ebp */
    ebp = esp; /* 0x006208D1: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xFFFFFFF8u);
    esp = esp & 0xFFFFFFF8u; /* 0x006208D3: and esp, 0xfffffff8 */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, 0xFFFFFFFFu); /* 0x006208D6: push -1 */
    PUSH32(esp, 0x007B74C1u); /* 0x006208D8: push 0x7b74c1 */
    eax = MEM32(FS_BASE + (0)); /* 0x006208DD: mov eax, dword ptr fs:[0] */
    PUSH32(esp, eax); /* 0x006208E3: push eax */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xB8u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0xB8u; /* 0x006208E4: sub esp, 0xb8 */
    _flag_k = FK_CMP;
    eax = MEM32(0x855000); /* 0x006208EA: mov eax, dword ptr [0x855000] */
    _flag_a = (uint32_t)((eax ^ esp)); _flag_b = (uint32_t)((eax ^ esp));
    eax = eax ^ esp; /* 0x006208EF: xor eax, esp */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(esp + 0xB0) = eax; /* 0x006208F1: mov dword ptr [esp + 0xb0], eax */
    PUSH32(esp, edi); /* 0x006208F8: push edi */
    eax = MEM32(0x855000); /* 0x006208F9: mov eax, dword ptr [0x855000] */
    _flag_a = (uint32_t)((eax ^ esp)); _flag_b = (uint32_t)((eax ^ esp));
    eax = eax ^ esp; /* 0x006208FE: xor eax, esp */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, eax); /* 0x00620900: push eax */
    eax = esp + 0xC0; /* 0x00620901: lea eax, [esp + 0xc0] */
    MEM32(FS_BASE + (0)) = eax; /* 0x00620908: mov dword ptr fs:[0], eax */
    edi = ecx; /* 0x0062090E: mov edi, ecx */
    PUSH32(esp, 6); /* 0x00620910: push 6 */
    MEM32(esp + 0x38) = 0; /* 0x00620912: mov dword ptr [esp + 0x38], 0 */
    ecx = esp + 0x28; /* 0x0062091A: lea ecx, [esp + 0x28] */
    MEM32(esp + 0x3C) = 0; /* 0x0062091E: mov dword ptr [esp + 0x3c], 0 */
    PUSH32(esp, 0x007ED4C4u); /* 0x00620926: push 0x7ed4c4 */
    MEM32(esp + 0x40) = 0xFu; /* 0x0062092B: mov dword ptr [esp + 0x40], 0xf */
    MEM32(esp + 0x3C) = 0; /* 0x00620933: mov dword ptr [esp + 0x3c], 0 */
    MEM8(esp + 0x2C) = (uint8_t)(0); /* 0x0062093B: mov byte ptr [esp + 0x2c], 0 */
    RECOMP_CALL(sub_0040A2F0); /* 0x00620940: call 0x40a2f0 */
    RECOMP_FLAGS_IN();
    MEM32(esp + 0xC8) = 0; /* 0x00620945: mov dword ptr [esp + 0xc8], 0 */
    ecx = MEM32(0x8780CC); /* 0x00620950: mov ecx, dword ptr [0x8780cc] */
    /* test ecx, ecx */ /* 0x00620956: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_0062096A; /* 0x00620958: je 0x62096a */
L_0062095A:
    ecx = MEM32(ecx + 0xC0); /* 0x0062095A: mov ecx, dword ptr [ecx + 0xc0] */
    eax = esp + 0x24; /* 0x00620960: lea eax, [esp + 0x24] */
    PUSH32(esp, eax); /* 0x00620964: push eax */
    RECOMP_CALL(sub_00671CA0); /* 0x00620965: call 0x671ca0 */
    RECOMP_FLAGS_IN();
L_0062096A:
    MEM32(esp + 0xC8) = 0xFFFFFFFFu; /* 0x0062096A: mov dword ptr [esp + 0xc8], 0xffffffff */
    /* cmp MEM32(esp + 0x38), 0x10u */ /* 0x00620975: cmp dword ptr [esp + 0x38], 0x10 */
    _flag_a = (uint32_t)(MEM32(esp + 0x38)); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_B(_flag_a, _flag_b)) goto L_00620989; /* 0x0062097A: jb 0x620989 */
L_0062097C:
    PUSH32(esp, MEM32(esp + 0x24)); /* 0x0062097C: push dword ptr [esp + 0x24] */
    RECOMP_ICALL(MEM32(0x7CC694)); /* 0x00620980: call dword ptr [0x7cc694] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x00620986: add esp, 4 */
    _flag_k = FK_ADD;
L_00620989:
    ecx = esp + 0x3C; /* 0x00620989: lea ecx, [esp + 0x3c] */
    MEM32(esp + 0x38) = 0xFu; /* 0x0062098D: mov dword ptr [esp + 0x38], 0xf */
    MEM32(esp + 0x34) = 0; /* 0x00620995: mov dword ptr [esp + 0x34], 0 */
    MEM8(esp + 0x24) = (uint8_t)(0); /* 0x0062099D: mov byte ptr [esp + 0x24], 0 */
    RECOMP_CALL(sub_0052D7C0); /* 0x006209A2: call 0x52d7c0 */
    RECOMP_FLAGS_IN();
    MEM32(esp + 0xC8) = 1; /* 0x006209A7: mov dword ptr [esp + 0xc8], 1 */
    edx = esp + 0x3C; /* 0x006209B2: lea edx, [esp + 0x3c] */
    PUSH32(esp, MEM32(edi + 0xC)); /* 0x006209B6: push dword ptr [edi + 0xc] */
    ecx = edi; /* 0x006209B9: mov ecx, edi */
    RECOMP_CALL(sub_00626AE0); /* 0x006209BB: call 0x626ae0 */
    RECOMP_FLAGS_IN();
    edx = MEM32(edi + 0x8); /* 0x006209C0: mov edx, dword ptr [edi + 8] */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x006209C3: add esp, 4 */
    _flag_k = FK_ADD;
    MEM32(esp + 0x1C) = 0; /* 0x006209C6: mov dword ptr [esp + 0x1c], 0 */
    MEM32(esp + 0x20) = 0; /* 0x006209CE: mov dword ptr [esp + 0x20], 0 */
    MEM32(esp + 0x20) = 0xFu; /* 0x006209D6: mov dword ptr [esp + 0x20], 0xf */
    MEM32(esp + 0x1C) = 0; /* 0x006209DE: mov dword ptr [esp + 0x1c], 0 */
    MEM8(esp + 0xC) = (uint8_t)(0); /* 0x006209E6: mov byte ptr [esp + 0xc], 0 */
    /* cmp MEM8(edx), 0 */ /* 0x006209EB: cmp byte ptr [edx], 0 */
    _flag_a = (uint32_t)(MEM8(edx)) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_006209F4; /* 0x006209EE: jne 0x6209f4 */
L_006209F0:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x006209F0: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_00620A09; /* 0x006209F2: jmp 0x620a09 */
L_006209F4:
    ecx = edx; /* 0x006209F4: mov ecx, edx */
    edi = ecx + 0x1; /* 0x006209F6: lea edi, [ecx + 1] */
    esp = esp; /* 0x006209F9: lea esp, [esp] */
L_00620A00:
    SET_LO8(eax, MEM8(ecx)); /* 0x00620A00: mov al, byte ptr [ecx] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx + 1; /* 0x00620A02: inc ecx */
    _flag_k = FK_INC;
    /* test LO8(eax), LO8(eax) */ /* 0x00620A03: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_00620A00; /* 0x00620A05: jne 0x620a00 */
L_00620A07:
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ecx = ecx - edi; /* 0x00620A07: sub ecx, edi */
    _flag_k = FK_CMP;
L_00620A09:
    PUSH32(esp, ecx); /* 0x00620A09: push ecx */
    PUSH32(esp, edx); /* 0x00620A0A: push edx */
    ecx = esp + 0x14; /* 0x00620A0B: lea ecx, [esp + 0x14] */
    RECOMP_CALL(sub_0040A2F0); /* 0x00620A0F: call 0x40a2f0 */
    RECOMP_FLAGS_IN();
    MEM8(esp + 0xC8) = (uint8_t)(2); /* 0x00620A14: mov byte ptr [esp + 0xc8], 2 */
    eax = esp + 0xC; /* 0x00620A1C: lea eax, [esp + 0xc] */
    PUSH32(esp, eax); /* 0x00620A20: push eax */
    ecx = esp + 0x40; /* 0x00620A21: lea ecx, [esp + 0x40] */
    RECOMP_CALL(sub_0052D960); /* 0x00620A25: call 0x52d960 */
    RECOMP_FLAGS_IN();
    MEM8(esp + 0xC8) = (uint8_t)(1); /* 0x00620A2A: mov byte ptr [esp + 0xc8], 1 */
    /* cmp MEM32(esp + 0x20), 0x10u */ /* 0x00620A32: cmp dword ptr [esp + 0x20], 0x10 */
    _flag_a = (uint32_t)(MEM32(esp + 0x20)); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_B(_flag_a, _flag_b)) goto L_00620A46; /* 0x00620A37: jb 0x620a46 */
L_00620A39:
    PUSH32(esp, MEM32(esp + 0xC)); /* 0x00620A39: push dword ptr [esp + 0xc] */
    RECOMP_ICALL(MEM32(0x7CC694)); /* 0x00620A3D: call dword ptr [0x7cc694] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x00620A43: add esp, 4 */
    _flag_k = FK_ADD;
L_00620A46:
    MEM32(esp + 0x20) = 0xFu; /* 0x00620A46: mov dword ptr [esp + 0x20], 0xf */
    MEM32(esp + 0x1C) = 0; /* 0x00620A4E: mov dword ptr [esp + 0x1c], 0 */
    MEM8(esp + 0xC) = (uint8_t)(0); /* 0x00620A56: mov byte ptr [esp + 0xc], 0 */
    MEM32(esp + 0xC8) = 0xFFFFFFFFu; /* 0x00620A5B: mov dword ptr [esp + 0xc8], 0xffffffff */
    ecx = esp + 0x3C; /* 0x00620A66: lea ecx, [esp + 0x3c] */
    RECOMP_CALL(sub_0052D890); /* 0x00620A6A: call 0x52d890 */
    RECOMP_FLAGS_IN();
    SET_LO8(eax, 1); /* 0x00620A6F: mov al, 1 */
    ecx = MEM32(esp + 0xC0); /* 0x00620A71: mov ecx, dword ptr [esp + 0xc0] */
    MEM32(FS_BASE + (0)) = ecx; /* 0x00620A78: mov dword ptr fs:[0], ecx */
    ecx = POP32_VAL(esp); /* 0x00620A7F: pop ecx */
    edi = POP32_VAL(esp); /* 0x00620A80: pop edi */
    ecx = MEM32(esp + 0xB0); /* 0x00620A81: mov ecx, dword ptr [esp + 0xb0] */
    _flag_a = (uint32_t)((ecx ^ esp)); _flag_b = (uint32_t)((ecx ^ esp));
    ecx = ecx ^ esp; /* 0x00620A88: xor ecx, esp */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_0077F4C2); /* 0x00620A8A: call 0x77f4c2 */
    RECOMP_FLAGS_IN();
    esp = ebp; /* 0x00620A8F: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x00620A91: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x00620A92: ret  */
    RECOMP_REGS_OUT();
}

void sub_00620AA0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00620AA0u);

L_00620AA0:
    PUSH32(esp, ebp); /* 0x00620AA0: push ebp */
    ebp = esp; /* 0x00620AA1: mov ebp, esp */
    PUSH32(esp, ebx); /* 0x00620AA3: push ebx */
    ebx = MEM32(ebp + 0x8); /* 0x00620AA4: mov ebx, dword ptr [ebp + 8] */
    eax = 0x8C08C08Du; /* 0x00620AA7: mov eax, 0x8c08c08d */
    PUSH32(esp, esi); /* 0x00620AAC: push esi */
    PUSH32(esp, edi); /* 0x00620AAD: push edi */
    edi = ecx; /* 0x00620AAE: mov edi, ecx */
    esi = MEM32(edi + 0x508); /* 0x00620AB0: mov esi, dword ptr [edi + 0x508] */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(MEM32(edi + 0x504));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esi = esi - MEM32(edi + 0x504); /* 0x00620AB6: sub esi, dword ptr [edi + 0x504] */
    _flag_k = FK_CMP;
    { int64_t _r = (int64_t)(int32_t)eax * (int32_t)(esi); /* 0x00620ABC: imul esi */
      eax = (uint32_t)_r; edx = (uint32_t)(_r >> 32); uint32_t _ov = _r != (int32_t)_r;
      _flag_k = FK_EFLAGS; _flag_a = _ov ? 0x801u : 0u; _flag_b = 0; _cf = _ov; }
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edx = edx + esi; /* 0x00620ABE: add edx, esi */
    _flag_k = FK_ADD;
    if (8u) _cf = (((edx) >> 7) & 1u); /* 0x00620AC0: sar edx, 8 */
    if (8u) { _flag_a = recomp_flags_pack(((uint32_t)((int32_t)edx >> 8u)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    edx = (uint32_t)((int32_t)edx >> 8u);
    eax = edx; /* 0x00620AC3: mov eax, edx */
    if (31u) _cf = (((eax) >> 30) & 1u); /* 0x00620AC5: shr eax, 0x1f */
    if (31u) { _flag_a = recomp_flags_pack((eax >> 31u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax >> 31u; /* 0x00620AC5: shr eax, 0x1f */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + edx; /* 0x00620AC8: add eax, edx */
    _flag_k = FK_ADD;
    /* cmp ebx, eax */ /* 0x00620ACA: cmp ebx, eax */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_AE(_flag_a, _flag_b)) goto L_00620B55; /* 0x00620ACC: jae 0x620b55 */
L_00620AD2:
    MEM32(edi + 0x3D8) = ebx; /* 0x00620AD2: mov dword ptr [edi + 0x3d8], ebx */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    esi = 0; /* 0x00620AD8: xor esi, esi */
    _cf = 0;
    _flag_k = FK_TEST;
    eax = MEM32(edi + 0x52C); /* 0x00620ADA: mov eax, dword ptr [edi + 0x52c] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(edi + 0x528));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - MEM32(edi + 0x528); /* 0x00620AE0: sub eax, dword ptr [edi + 0x528] */
    _flag_k = FK_CMP;
    if (2u) _cf = (((eax) >> 1) & 1u); /* 0x00620AE6: sar eax, 2 */
    if (2u) { _flag_a = recomp_flags_pack(((uint32_t)((int32_t)eax >> 2u)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = (uint32_t)((int32_t)eax >> 2u);
    /* test eax, eax */ /* 0x00620AE9: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_00620B13; /* 0x00620AEB: je 0x620b13 */
L_00620AED:
    ecx = ecx; /* 0x00620AED: lea ecx, [ecx] */
L_00620AF0:
    eax = MEM32(edi + 0x528); /* 0x00620AF0: mov eax, dword ptr [edi + 0x528] */
    PUSH32(esp, ebx); /* 0x00620AF6: push ebx */
    ecx = MEM32(eax + esi * 4); /* 0x00620AF7: mov ecx, dword ptr [eax + esi*4] */
    eax = MEM32(ecx); /* 0x00620AFA: mov eax, dword ptr [ecx] */
    RECOMP_ICALL(MEM32(eax + 0x3C)); /* 0x00620AFC: call dword ptr [eax + 0x3c] */
    RECOMP_FLAGS_IN();
    eax = MEM32(edi + 0x52C); /* 0x00620AFF: mov eax, dword ptr [edi + 0x52c] */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi + 1; /* 0x00620B05: inc esi */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(edi + 0x528));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - MEM32(edi + 0x528); /* 0x00620B06: sub eax, dword ptr [edi + 0x528] */
    _flag_k = FK_CMP;
    if (2u) _cf = (((eax) >> 1) & 1u); /* 0x00620B0C: sar eax, 2 */
    if (2u) { _flag_a = recomp_flags_pack(((uint32_t)((int32_t)eax >> 2u)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = (uint32_t)((int32_t)eax >> 2u);
    /* cmp esi, eax */ /* 0x00620B0F: cmp esi, eax */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_00620AF0; /* 0x00620B11: jb 0x620af0 */
L_00620B13:
    ecx = edi + 0x534; /* 0x00620B13: lea ecx, [edi + 0x534] */
    MEM8(edi + 0x14) = (uint8_t)(0); /* 0x00620B19: mov byte ptr [edi + 0x14], 0 */
    MEM32(edi + 0x2C) = 0xFFFFFFFFu; /* 0x00620B1D: mov dword ptr [edi + 0x2c], 0xffffffff */
    RECOMP_CALL(sub_00625890); /* 0x00620B24: call 0x625890 */
    RECOMP_FLAGS_IN();
    ecx = edi + 0x554; /* 0x00620B29: lea ecx, [edi + 0x554] */
    RECOMP_CALL(sub_00625890); /* 0x00620B2F: call 0x625890 */
    RECOMP_FLAGS_IN();
    ecx = edi + 0x574; /* 0x00620B34: lea ecx, [edi + 0x574] */
    RECOMP_CALL(sub_00625890); /* 0x00620B3A: call 0x625890 */
    RECOMP_FLAGS_IN();
    ecx = edi + 0x594; /* 0x00620B3F: lea ecx, [edi + 0x594] */
    RECOMP_CALL(sub_00625890); /* 0x00620B45: call 0x625890 */
    RECOMP_FLAGS_IN();
    ecx = edi + 0x5B4; /* 0x00620B4A: lea ecx, [edi + 0x5b4] */
    RECOMP_CALL(sub_00625890); /* 0x00620B50: call 0x625890 */
    RECOMP_FLAGS_IN();
L_00620B55:
    edi = POP32_VAL(esp); /* 0x00620B55: pop edi */
    esi = POP32_VAL(esp); /* 0x00620B56: pop esi */
    ebx = POP32_VAL(esp); /* 0x00620B57: pop ebx */
    ebp = POP32_VAL(esp); /* 0x00620B58: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x00620B59: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_00620B60(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00620B60u);

L_00620B60:
    PUSH32(esp, ebp); /* 0x00620B60: push ebp */
    ebp = esp; /* 0x00620B61: mov ebp, esp */
    PUSH32(esp, 0xFFFFFFFFu); /* 0x00620B63: push -1 */
    PUSH32(esp, 0x007B7518u); /* 0x00620B65: push 0x7b7518 */
    eax = MEM32(FS_BASE + (0)); /* 0x00620B6A: mov eax, dword ptr fs:[0] */
    PUSH32(esp, eax); /* 0x00620B70: push eax */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x40u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x40u; /* 0x00620B71: sub esp, 0x40 */
    _flag_k = FK_CMP;
    eax = MEM32(0x855000); /* 0x00620B74: mov eax, dword ptr [0x855000] */
    _flag_a = (uint32_t)((eax ^ ebp)); _flag_b = (uint32_t)((eax ^ ebp));
    eax = eax ^ ebp; /* 0x00620B79: xor eax, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x10)) = eax; /* 0x00620B7B: mov dword ptr [ebp - 0x10], eax */
    PUSH32(esp, ebx); /* 0x00620B7E: push ebx */
    PUSH32(esp, esi); /* 0x00620B7F: push esi */
    PUSH32(esp, edi); /* 0x00620B80: push edi */
    PUSH32(esp, eax); /* 0x00620B81: push eax */
    eax = ebp + (-0xC); /* 0x00620B82: lea eax, [ebp - 0xc] */
    MEM32(FS_BASE + (0)) = eax; /* 0x00620B85: mov dword ptr fs:[0], eax */
    esi = MEM32(0x870268); /* 0x00620B8B: mov esi, dword ptr [0x870268] */
    eax = MEM32(ebp + 0x8); /* 0x00620B91: mov eax, dword ptr [ebp + 8] */
    MEM32(ebp + (-0x4C)) = eax; /* 0x00620B94: mov dword ptr [ebp - 0x4c], eax */
    eax = 0x8C08C08Du; /* 0x00620B97: mov eax, 0x8c08c08d */
    MEM32(ebp + (-0x48)) = 0; /* 0x00620B9C: mov dword ptr [ebp - 0x48], 0 */
    ecx = MEM32(esi + 0x508); /* 0x00620BA3: mov ecx, dword ptr [esi + 0x508] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(MEM32(esi + 0x504));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ecx = ecx - MEM32(esi + 0x504); /* 0x00620BA9: sub ecx, dword ptr [esi + 0x504] */
    _flag_k = FK_CMP;
    { int64_t _r = (int64_t)(int32_t)eax * (int32_t)(ecx); /* 0x00620BAF: imul ecx */
      eax = (uint32_t)_r; edx = (uint32_t)(_r >> 32); uint32_t _ov = _r != (int32_t)_r;
      _flag_k = FK_EFLAGS; _flag_a = _ov ? 0x801u : 0u; _flag_b = 0; _cf = _ov; }
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edx = edx + ecx; /* 0x00620BB1: add edx, ecx */
    _flag_k = FK_ADD;
    if (8u) _cf = (((edx) >> 7) & 1u); /* 0x00620BB3: sar edx, 8 */
    if (8u) { _flag_a = recomp_flags_pack(((uint32_t)((int32_t)edx >> 8u)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    edx = (uint32_t)((int32_t)edx >> 8u);
    eax = edx; /* 0x00620BB6: mov eax, edx */
    if (31u) _cf = (((eax) >> 30) & 1u); /* 0x00620BB8: shr eax, 0x1f */
    if (31u) { _flag_a = recomp_flags_pack((eax >> 31u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax >> 31u; /* 0x00620BB8: shr eax, 0x1f */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + edx; /* 0x00620BBB: add eax, edx */
    _flag_k = FK_ADD;
    if (/* add result */ recomp_cond(_flag_k, _flag_a, _flag_b, CC_E)) goto L_00620CF8; /* 0x00620BBD: je 0x620cf8 */
L_00620BC3:
    ebx = MEM32(0x7CC694); /* 0x00620BC3: mov ebx, dword ptr [0x7cc694] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edi = 0; /* 0x00620BC9: xor edi, edi */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_00620BD0; /* 0x00620BCB: jmp 0x620bd0 */
L_00620BD0:
    eax = MEM32(esi + 0x504); /* 0x00620BD0: mov eax, dword ptr [esi + 0x504] */
    /* cmp MEM32(edi + eax + 0x34), 0 */ /* 0x00620BD6: cmp dword ptr [edi + eax + 0x34], 0 */
    _flag_a = (uint32_t)(MEM32(edi + eax + 0x34)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_00620CC7; /* 0x00620BDB: je 0x620cc7 */
L_00620BE1:
    MEM32(ebp + (-0x34)) = 0; /* 0x00620BE1: mov dword ptr [ebp - 0x34], 0 */
    MEM32(ebp + (-0x30)) = 0; /* 0x00620BE8: mov dword ptr [ebp - 0x30], 0 */
    MEM32(ebp + (-0x30)) = 0xFu; /* 0x00620BEF: mov dword ptr [ebp - 0x30], 0xf */
    MEM32(ebp + (-0x34)) = 0; /* 0x00620BF6: mov dword ptr [ebp - 0x34], 0 */
    MEM8(ebp + (-0x44)) = (uint8_t)(0); /* 0x00620BFD: mov byte ptr [ebp - 0x44], 0 */
    MEM32(ebp + (-0x4)) = 0; /* 0x00620C01: mov dword ptr [ebp - 4], 0 */
    MEM32(ebp + (-0x1C)) = 0; /* 0x00620C08: mov dword ptr [ebp - 0x1c], 0 */
    MEM32(ebp + (-0x18)) = 0; /* 0x00620C0F: mov dword ptr [ebp - 0x18], 0 */
    MEM32(ebp + (-0x18)) = 0xFu; /* 0x00620C16: mov dword ptr [ebp - 0x18], 0xf */
    MEM32(ebp + (-0x1C)) = 0; /* 0x00620C1D: mov dword ptr [ebp - 0x1c], 0 */
    MEM8(ebp + (-0x2C)) = (uint8_t)(0); /* 0x00620C24: mov byte ptr [ebp - 0x2c], 0 */
    MEM32(ebp + (-0x4)) = 2; /* 0x00620C28: mov dword ptr [ebp - 4], 2 */
    ecx = ebp + (-0x2C); /* 0x00620C2F: lea ecx, [ebp - 0x2c] */
    eax = MEM32(esi + 0x504); /* 0x00620C32: mov eax, dword ptr [esi + 0x504] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x44u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 0x44u; /* 0x00620C38: add eax, 0x44 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + edi; /* 0x00620C3B: add eax, edi */
    _flag_k = FK_ADD;
    /* cmp ecx, eax */ /* 0x00620C3D: cmp ecx, eax */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_00620C4B; /* 0x00620C3F: je 0x620c4b */
L_00620C41:
    PUSH32(esp, 0xFFFFFFFFu); /* 0x00620C41: push -1 */
    PUSH32(esp, 0); /* 0x00620C43: push 0 */
    PUSH32(esp, eax); /* 0x00620C45: push eax */
    RECOMP_CALL(sub_0040A030); /* 0x00620C46: call 0x40a030 */
    RECOMP_FLAGS_IN();
L_00620C4B:
    eax = MEM32(ebp + (-0x48)); /* 0x00620C4B: mov eax, dword ptr [ebp - 0x48] */
    ecx = ebp + (-0x44); /* 0x00620C4E: lea ecx, [ebp - 0x44] */
    MEM32(ebp + (-0x14)) = eax; /* 0x00620C51: mov dword ptr [ebp - 0x14], eax */
    eax = MEM32(esi + 0x504); /* 0x00620C54: mov eax, dword ptr [esi + 0x504] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x5Cu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 0x5Cu; /* 0x00620C5A: add eax, 0x5c */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + edi; /* 0x00620C5D: add eax, edi */
    _flag_k = FK_ADD;
    /* cmp ecx, eax */ /* 0x00620C5F: cmp ecx, eax */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_00620C6D; /* 0x00620C61: je 0x620c6d */
L_00620C63:
    PUSH32(esp, 0xFFFFFFFFu); /* 0x00620C63: push -1 */
    PUSH32(esp, 0); /* 0x00620C65: push 0 */
    PUSH32(esp, eax); /* 0x00620C67: push eax */
    RECOMP_CALL(sub_0040A030); /* 0x00620C68: call 0x40a030 */
    RECOMP_FLAGS_IN();
L_00620C6D:
    ecx = MEM32(ebp + (-0x4C)); /* 0x00620C6D: mov ecx, dword ptr [ebp - 0x4c] */
    eax = ebp + (-0x44); /* 0x00620C70: lea eax, [ebp - 0x44] */
    PUSH32(esp, eax); /* 0x00620C73: push eax */
    RECOMP_CALL(sub_006259C0); /* 0x00620C74: call 0x6259c0 */
    RECOMP_FLAGS_IN();
    MEM32(ebp + (-0x4)) = 3; /* 0x00620C79: mov dword ptr [ebp - 4], 3 */
    /* cmp MEM32(ebp + (-0x18)), 0x10u */ /* 0x00620C80: cmp dword ptr [ebp - 0x18], 0x10 */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x18))); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_B(_flag_a, _flag_b)) goto L_00620C8E; /* 0x00620C84: jb 0x620c8e */
L_00620C86:
    PUSH32(esp, MEM32(ebp + (-0x2C))); /* 0x00620C86: push dword ptr [ebp - 0x2c] */
    RECOMP_ICALL(ebx); /* 0x00620C89: call ebx */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x00620C8B: add esp, 4 */
    _flag_k = FK_ADD;
L_00620C8E:
    MEM32(ebp + (-0x18)) = 0xFu; /* 0x00620C8E: mov dword ptr [ebp - 0x18], 0xf */
    MEM32(ebp + (-0x1C)) = 0; /* 0x00620C95: mov dword ptr [ebp - 0x1c], 0 */
    MEM8(ebp + (-0x2C)) = (uint8_t)(0); /* 0x00620C9C: mov byte ptr [ebp - 0x2c], 0 */
    MEM32(ebp + (-0x4)) = 0xFFFFFFFFu; /* 0x00620CA0: mov dword ptr [ebp - 4], 0xffffffff */
    /* cmp MEM32(ebp + (-0x30)), 0x10u */ /* 0x00620CA7: cmp dword ptr [ebp - 0x30], 0x10 */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x30))); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_B(_flag_a, _flag_b)) goto L_00620CB5; /* 0x00620CAB: jb 0x620cb5 */
L_00620CAD:
    PUSH32(esp, MEM32(ebp + (-0x44))); /* 0x00620CAD: push dword ptr [ebp - 0x44] */
    RECOMP_ICALL(ebx); /* 0x00620CB0: call ebx */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x00620CB2: add esp, 4 */
    _flag_k = FK_ADD;
L_00620CB5:
    MEM32(ebp + (-0x30)) = 0xFu; /* 0x00620CB5: mov dword ptr [ebp - 0x30], 0xf */
    MEM32(ebp + (-0x34)) = 0; /* 0x00620CBC: mov dword ptr [ebp - 0x34], 0 */
    MEM8(ebp + (-0x44)) = (uint8_t)(0); /* 0x00620CC3: mov byte ptr [ebp - 0x44], 0 */
L_00620CC7:
    ecx = MEM32(esi + 0x508); /* 0x00620CC7: mov ecx, dword ptr [esi + 0x508] */
    eax = 0x8C08C08Du; /* 0x00620CCD: mov eax, 0x8c08c08d */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(MEM32(esi + 0x504));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ecx = ecx - MEM32(esi + 0x504); /* 0x00620CD2: sub ecx, dword ptr [esi + 0x504] */
    _flag_k = FK_CMP;
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(0x1D4u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edi = edi + 0x1D4u; /* 0x00620CD8: add edi, 0x1d4 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(MEM32(ebp + (-0x48))); _flag_b = (uint32_t)(1);
    MEM32(ebp + (-0x48)) = MEM32(ebp + (-0x48)) + 1; /* 0x00620CDE: inc dword ptr [ebp - 0x48] */
    _flag_k = FK_INC;
    { int64_t _r = (int64_t)(int32_t)eax * (int32_t)(ecx); /* 0x00620CE1: imul ecx */
      eax = (uint32_t)_r; edx = (uint32_t)(_r >> 32); uint32_t _ov = _r != (int32_t)_r;
      _flag_k = FK_EFLAGS; _flag_a = _ov ? 0x801u : 0u; _flag_b = 0; _cf = _ov; }
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edx = edx + ecx; /* 0x00620CE3: add edx, ecx */
    _flag_k = FK_ADD;
    if (8u) _cf = (((edx) >> 7) & 1u); /* 0x00620CE5: sar edx, 8 */
    if (8u) { _flag_a = recomp_flags_pack(((uint32_t)((int32_t)edx >> 8u)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    edx = (uint32_t)((int32_t)edx >> 8u);
    eax = edx; /* 0x00620CE8: mov eax, edx */
    if (31u) _cf = (((eax) >> 30) & 1u); /* 0x00620CEA: shr eax, 0x1f */
    if (31u) { _flag_a = recomp_flags_pack((eax >> 31u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax >> 31u; /* 0x00620CEA: shr eax, 0x1f */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + edx; /* 0x00620CED: add eax, edx */
    _flag_k = FK_ADD;
    /* cmp MEM32(ebp + (-0x48)), eax */ /* 0x00620CEF: cmp dword ptr [ebp - 0x48], eax */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x48))); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_00620BD0; /* 0x00620CF2: jb 0x620bd0 */
L_00620CF8:
    ecx = MEM32(ebp + (-0xC)); /* 0x00620CF8: mov ecx, dword ptr [ebp - 0xc] */
    MEM32(FS_BASE + (0)) = ecx; /* 0x00620CFB: mov dword ptr fs:[0], ecx */
    ecx = POP32_VAL(esp); /* 0x00620D02: pop ecx */
    edi = POP32_VAL(esp); /* 0x00620D03: pop edi */
    esi = POP32_VAL(esp); /* 0x00620D04: pop esi */
    ebx = POP32_VAL(esp); /* 0x00620D05: pop ebx */
    ecx = MEM32(ebp + (-0x10)); /* 0x00620D06: mov ecx, dword ptr [ebp - 0x10] */
    _flag_a = (uint32_t)((ecx ^ ebp)); _flag_b = (uint32_t)((ecx ^ ebp));
    ecx = ecx ^ ebp; /* 0x00620D09: xor ecx, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_0077F4C2); /* 0x00620D0B: call 0x77f4c2 */
    RECOMP_FLAGS_IN();
    esp = ebp; /* 0x00620D10: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x00620D12: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x00620D13: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_00620D20(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00620D20u);

L_00620D20:
    PUSH32(esp, ebp); /* 0x00620D20: push ebp */
    ebp = esp; /* 0x00620D21: mov ebp, esp */
    PUSH32(esp, 0xFFFFFFFFu); /* 0x00620D23: push -1 */
    PUSH32(esp, 0x00792EC5u); /* 0x00620D25: push 0x792ec5 */
    eax = MEM32(FS_BASE + (0)); /* 0x00620D2A: mov eax, dword ptr fs:[0] */
    PUSH32(esp, eax); /* 0x00620D30: push eax */
    PUSH32(esp, ecx); /* 0x00620D31: push ecx */
    PUSH32(esp, esi); /* 0x00620D32: push esi */
    PUSH32(esp, edi); /* 0x00620D33: push edi */
    eax = MEM32(0x855000); /* 0x00620D34: mov eax, dword ptr [0x855000] */
    _flag_a = (uint32_t)((eax ^ ebp)); _flag_b = (uint32_t)((eax ^ ebp));
    eax = eax ^ ebp; /* 0x00620D39: xor eax, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, eax); /* 0x00620D3B: push eax */
    eax = ebp + (-0xC); /* 0x00620D3C: lea eax, [ebp - 0xc] */
    MEM32(FS_BASE + (0)) = eax; /* 0x00620D3F: mov dword ptr fs:[0], eax */
    esi = MEM32(0x870268); /* 0x00620D45: mov esi, dword ptr [0x870268] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edx = 0; /* 0x00620D4B: xor edx, edx */
    _cf = 0;
    _flag_k = FK_TEST;
    edi = MEM32(ebp + 0x8); /* 0x00620D4D: mov edi, dword ptr [ebp + 8] */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(0x528u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esi = esi + 0x528u; /* 0x00620D50: add esi, 0x528 */
    _flag_k = FK_ADD;
    eax = MEM32(esi + 0x4); /* 0x00620D56: mov eax, dword ptr [esi + 4] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(esi));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - MEM32(esi); /* 0x00620D59: sub eax, dword ptr [esi] */
    _flag_k = FK_CMP;
    if (2u) _cf = (((eax) >> 1) & 1u); /* 0x00620D5B: sar eax, 2 */
    if (2u) { _flag_a = recomp_flags_pack(((uint32_t)((int32_t)eax >> 2u)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = (uint32_t)((int32_t)eax >> 2u);
    /* test eax, eax */ /* 0x00620D5E: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_00620D78; /* 0x00620D60: je 0x620d78 */
L_00620D62:
    ecx = MEM32(esi); /* 0x00620D62: mov ecx, dword ptr [esi] */
L_00620D64:
    /* cmp MEM32(ecx), edi */ /* 0x00620D64: cmp dword ptr [ecx], edi */
    _flag_a = (uint32_t)(MEM32(ecx)); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_00620DD7; /* 0x00620D66: je 0x620dd7 */
L_00620D68:
    eax = MEM32(esi + 0x4); /* 0x00620D68: mov eax, dword ptr [esi + 4] */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(1);
    edx = edx + 1; /* 0x00620D6B: inc edx */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(esi));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - MEM32(esi); /* 0x00620D6C: sub eax, dword ptr [esi] */
    _flag_k = FK_CMP;
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 4; /* 0x00620D6E: add ecx, 4 */
    _flag_k = FK_ADD;
    if (2u) _cf = (((eax) >> 1) & 1u); /* 0x00620D71: sar eax, 2 */
    if (2u) { _flag_a = recomp_flags_pack(((uint32_t)((int32_t)eax >> 2u)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = (uint32_t)((int32_t)eax >> 2u);
    /* cmp edx, eax */ /* 0x00620D74: cmp edx, eax */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_00620D64; /* 0x00620D76: jb 0x620d64 */
L_00620D78:
    eax = MEM32(esi + 0x4); /* 0x00620D78: mov eax, dword ptr [esi + 4] */
    ecx = ebp + 0x8; /* 0x00620D7B: lea ecx, [ebp + 8] */
    /* cmp ecx, eax */ /* 0x00620D7E: cmp ecx, eax */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_AE(_flag_a, _flag_b)) goto L_00620DBD; /* 0x00620D80: jae 0x620dbd */
L_00620D82:
    ecx = MEM32(esi); /* 0x00620D82: mov ecx, dword ptr [esi] */
    edx = ebp + 0x8; /* 0x00620D84: lea edx, [ebp + 8] */
    /* cmp ecx, edx */ /* 0x00620D87: cmp ecx, edx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_A(_flag_a, _flag_b)) goto L_00620DBD; /* 0x00620D89: ja 0x620dbd */
L_00620D8B:
    edi = edx; /* 0x00620D8B: mov edi, edx */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    edi = edi - ecx; /* 0x00620D8D: sub edi, ecx */
    _flag_k = FK_CMP;
    if (2u) _cf = (((edi) >> 1) & 1u); /* 0x00620D8F: sar edi, 2 */
    if (2u) { _flag_a = recomp_flags_pack(((uint32_t)((int32_t)edi >> 2u)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    edi = (uint32_t)((int32_t)edi >> 2u);
    /* cmp eax, MEM32(esi + 0x8) */ /* 0x00620D92: cmp eax, dword ptr [esi + 8] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(esi + 0x8));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_00620D9F; /* 0x00620D95: jne 0x620d9f */
L_00620D97:
    PUSH32(esp, ecx); /* 0x00620D97: push ecx */
    ecx = esi; /* 0x00620D98: mov ecx, esi */
    RECOMP_CALL(sub_0047AC70); /* 0x00620D9A: call 0x47ac70 */
    RECOMP_FLAGS_IN();
L_00620D9F:
    eax = MEM32(esi); /* 0x00620D9F: mov eax, dword ptr [esi] */
    ecx = MEM32(esi + 0x4); /* 0x00620DA1: mov ecx, dword ptr [esi + 4] */
    MEM32(ebp + (-0x4)) = 0; /* 0x00620DA4: mov dword ptr [ebp - 4], 0 */
    /* test ecx, ecx */ /* 0x00620DAB: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_00620DB4; /* 0x00620DAD: je 0x620db4 */
L_00620DAF:
    eax = MEM32(eax + edi * 4); /* 0x00620DAF: mov eax, dword ptr [eax + edi*4] */
    MEM32(ecx) = eax; /* 0x00620DB2: mov dword ptr [ecx], eax */
L_00620DB4:
    MEM32(ebp + (-0x4)) = 0xFFFFFFFFu; /* 0x00620DB4: mov dword ptr [ebp - 4], 0xffffffff */
    goto L_00620DD3; /* 0x00620DBB: jmp 0x620dd3 */
L_00620DBD:
    /* cmp eax, MEM32(esi + 0x8) */ /* 0x00620DBD: cmp eax, dword ptr [esi + 8] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(esi + 0x8));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_00620DCA; /* 0x00620DC0: jne 0x620dca */
L_00620DC2:
    PUSH32(esp, ecx); /* 0x00620DC2: push ecx */
    ecx = esi; /* 0x00620DC3: mov ecx, esi */
    RECOMP_CALL(sub_0047AC70); /* 0x00620DC5: call 0x47ac70 */
    RECOMP_FLAGS_IN();
L_00620DCA:
    eax = MEM32(esi + 0x4); /* 0x00620DCA: mov eax, dword ptr [esi + 4] */
    /* test eax, eax */ /* 0x00620DCD: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_00620DD3; /* 0x00620DCF: je 0x620dd3 */
L_00620DD1:
    MEM32(eax) = edi; /* 0x00620DD1: mov dword ptr [eax], edi */
L_00620DD3:
    _flag_a = (uint32_t)(MEM32(esi + 0x4)); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM32(esi + 0x4) = MEM32(esi + 0x4) + 4; /* 0x00620DD3: add dword ptr [esi + 4], 4 */
    _flag_k = FK_ADD;
L_00620DD7:
    ecx = MEM32(ebp + (-0xC)); /* 0x00620DD7: mov ecx, dword ptr [ebp - 0xc] */
    MEM32(FS_BASE + (0)) = ecx; /* 0x00620DDA: mov dword ptr fs:[0], ecx */
    ecx = POP32_VAL(esp); /* 0x00620DE1: pop ecx */
    edi = POP32_VAL(esp); /* 0x00620DE2: pop edi */
    esi = POP32_VAL(esp); /* 0x00620DE3: pop esi */
    esp = ebp; /* 0x00620DE4: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x00620DE6: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x00620DE7: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_00620DF0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00620DF0u);

L_00620DF0:
    PUSH32(esp, ebp); /* 0x00620DF0: push ebp */
    ebp = esp; /* 0x00620DF1: mov ebp, esp */
    PUSH32(esp, ecx); /* 0x00620DF3: push ecx */
    PUSH32(esp, esi); /* 0x00620DF4: push esi */
    esi = MEM32(0x870268); /* 0x00620DF5: mov esi, dword ptr [0x870268] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edx = 0; /* 0x00620DFB: xor edx, edx */
    _cf = 0;
    _flag_k = FK_TEST;
    eax = MEM32(esi + 0x52C); /* 0x00620DFD: mov eax, dword ptr [esi + 0x52c] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(esi + 0x528));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - MEM32(esi + 0x528); /* 0x00620E03: sub eax, dword ptr [esi + 0x528] */
    _flag_k = FK_CMP;
    if (2u) _cf = (((eax) >> 1) & 1u); /* 0x00620E09: sar eax, 2 */
    if (2u) { _flag_a = recomp_flags_pack(((uint32_t)((int32_t)eax >> 2u)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = (uint32_t)((int32_t)eax >> 2u);
    /* test eax, eax */ /* 0x00620E0C: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_00620E66; /* 0x00620E0E: je 0x620e66 */
L_00620E10:
    PUSH32(esp, ebx); /* 0x00620E10: push ebx */
    ebx = MEM32(esi + 0x528); /* 0x00620E11: mov ebx, dword ptr [esi + 0x528] */
    ecx = ebx; /* 0x00620E17: mov ecx, ebx */
    PUSH32(esp, edi); /* 0x00620E19: push edi */
    edi = MEM32(ebp + 0x8); /* 0x00620E1A: mov edi, dword ptr [ebp + 8] */
    ecx = ecx; /* 0x00620E1D: lea ecx, [ecx] */
L_00620E20:
    /* cmp MEM32(ecx), edi */ /* 0x00620E20: cmp dword ptr [ecx], edi */
    _flag_a = (uint32_t)(MEM32(ecx)); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_00620E40; /* 0x00620E22: je 0x620e40 */
L_00620E24:
    eax = MEM32(esi + 0x52C); /* 0x00620E24: mov eax, dword ptr [esi + 0x52c] */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(1);
    edx = edx + 1; /* 0x00620E2A: inc edx */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - ebx; /* 0x00620E2B: sub eax, ebx */
    _flag_k = FK_CMP;
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 4; /* 0x00620E2D: add ecx, 4 */
    _flag_k = FK_ADD;
    if (2u) _cf = (((eax) >> 1) & 1u); /* 0x00620E30: sar eax, 2 */
    if (2u) { _flag_a = recomp_flags_pack(((uint32_t)((int32_t)eax >> 2u)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = (uint32_t)((int32_t)eax >> 2u);
    /* cmp edx, eax */ /* 0x00620E33: cmp edx, eax */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_00620E20; /* 0x00620E35: jb 0x620e20 */
L_00620E37:
    edi = POP32_VAL(esp); /* 0x00620E37: pop edi */
    ebx = POP32_VAL(esp); /* 0x00620E38: pop ebx */
    esi = POP32_VAL(esp); /* 0x00620E39: pop esi */
    esp = ebp; /* 0x00620E3A: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x00620E3C: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x00620E3D: ret 4 */
L_00620E40:
    ecx = MEM32(esi + 0x52C); /* 0x00620E40: mov ecx, dword ptr [esi + 0x52c] */
    eax = ebx + edx * 4; /* 0x00620E46: lea eax, [ebx + edx*4] */
    edx = eax + 0x4; /* 0x00620E49: lea edx, [eax + 4] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ecx = ecx - edx; /* 0x00620E4C: sub ecx, edx */
    _flag_k = FK_CMP;
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0xFFFFFFFCu);
    ecx = ecx & 0xFFFFFFFCu; /* 0x00620E4E: and ecx, 0xfffffffc */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, ecx); /* 0x00620E51: push ecx */
    PUSH32(esp, edx); /* 0x00620E52: push edx */
    PUSH32(esp, eax); /* 0x00620E53: push eax */
    RECOMP_ICALL(MEM32(0x7CC68C)); /* 0x00620E54: call dword ptr [0x7cc68c] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x00620E5A: add esp, 0xc */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(MEM32(esi + 0x52C)); _flag_b = (uint32_t)(0xFFFFFFFCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM32(esi + 0x52C) = MEM32(esi + 0x52C) + 0xFFFFFFFCu; /* 0x00620E5D: add dword ptr [esi + 0x52c], -4 */
    _flag_k = FK_ADD;
    edi = POP32_VAL(esp); /* 0x00620E64: pop edi */
    ebx = POP32_VAL(esp); /* 0x00620E65: pop ebx */
L_00620E66:
    esi = POP32_VAL(esp); /* 0x00620E66: pop esi */
    esp = ebp; /* 0x00620E67: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x00620E69: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x00620E6A: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_00620E70(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00620E70u);

L_00620E70:
    PUSH32(esp, ebp); /* 0x00620E70: push ebp */
    ebp = esp; /* 0x00620E71: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x14u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x14u; /* 0x00620E73: sub esp, 0x14 */
    _flag_k = FK_CMP;
    PUSH32(esp, esi); /* 0x00620E76: push esi */
    esi = MEM32(0x870268); /* 0x00620E77: mov esi, dword ptr [0x870268] */
    eax = ebp + 0x8; /* 0x00620E7D: lea eax, [ebp + 8] */
    PUSH32(esp, edi); /* 0x00620E80: push edi */
    PUSH32(esp, eax); /* 0x00620E81: push eax */
    eax = ebp + (-0x8); /* 0x00620E82: lea eax, [ebp - 8] */
    PUSH32(esp, eax); /* 0x00620E85: push eax */
    ecx = esi + 0x554; /* 0x00620E86: lea ecx, [esi + 0x554] */
    RECOMP_CALL(sub_00625DE0); /* 0x00620E8C: call 0x625de0 */
    RECOMP_FLAGS_IN();
    eax = MEM32(ebp + (-0x8)); /* 0x00620E91: mov eax, dword ptr [ebp - 8] */
    /* cmp eax, MEM32(esi + 0x554) */ /* 0x00620E94: cmp eax, dword ptr [esi + 0x554] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(esi + 0x554));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_00620EB9; /* 0x00620E9A: jne 0x620eb9 */
L_00620E9C:
    eax = ebp + 0x8; /* 0x00620E9C: lea eax, [ebp + 8] */
    PUSH32(esp, ecx); /* 0x00620E9F: push ecx */
    MEM32(ebp + (-0x8)) = eax; /* 0x00620EA0: mov dword ptr [ebp - 8], eax */
    eax = ebp + (-0x8); /* 0x00620EA3: lea eax, [ebp - 8] */
    PUSH32(esp, eax); /* 0x00620EA6: push eax */
    PUSH32(esp, ecx); /* 0x00620EA7: push ecx */
    eax = ebp + (-0x10); /* 0x00620EA8: lea eax, [ebp - 0x10] */
    PUSH32(esp, eax); /* 0x00620EAB: push eax */
    ecx = esi + 0x554; /* 0x00620EAC: lea ecx, [esi + 0x554] */
    RECOMP_CALL(sub_00626CF0); /* 0x00620EB2: call 0x626cf0 */
    RECOMP_FLAGS_IN();
    eax = MEM32(eax); /* 0x00620EB7: mov eax, dword ptr [eax] */
L_00620EB9:
    MEM8(eax + 0xC) = (uint8_t)(1); /* 0x00620EB9: mov byte ptr [eax + 0xc], 1 */
    eax = MEM32(ebp + 0x8); /* 0x00620EBD: mov eax, dword ptr [ebp + 8] */
    edi = POP32_VAL(esp); /* 0x00620EC0: pop edi */
    MEM32(esi + 0x2C) = eax; /* 0x00620EC1: mov dword ptr [esi + 0x2c], eax */
    esi = POP32_VAL(esp); /* 0x00620EC4: pop esi */
    esp = ebp; /* 0x00620EC5: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x00620EC7: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x00620EC8: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_00620ED0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00620ED0u);

L_00620ED0:
    PUSH32(esp, ebp); /* 0x00620ED0: push ebp */
    ebp = esp; /* 0x00620ED1: mov ebp, esp */
    PUSH32(esp, ecx); /* 0x00620ED3: push ecx */
    PUSH32(esp, esi); /* 0x00620ED4: push esi */
    eax = ebp + 0x8; /* 0x00620ED5: lea eax, [ebp + 8] */
    PUSH32(esp, eax); /* 0x00620ED8: push eax */
    esi = ecx + 0x554; /* 0x00620ED9: lea esi, [ecx + 0x554] */
    eax = ebp + (-0x4); /* 0x00620EDF: lea eax, [ebp - 4] */
    ecx = esi; /* 0x00620EE2: mov ecx, esi */
    PUSH32(esp, eax); /* 0x00620EE4: push eax */
    RECOMP_CALL(sub_00625DE0); /* 0x00620EE5: call 0x625de0 */
    RECOMP_FLAGS_IN();
    eax = MEM32(ebp + (-0x4)); /* 0x00620EEA: mov eax, dword ptr [ebp - 4] */
    /* cmp eax, MEM32(esi) */ /* 0x00620EED: cmp eax, dword ptr [esi] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(esi));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    esi = POP32_VAL(esp); /* 0x00620EEF: pop esi */
    if (CMP_EQ(_flag_a, _flag_b)) goto L_00620EFB; /* 0x00620EF0: je 0x620efb */
L_00620EF2:
    SET_LO8(eax, MEM8(eax + 0xC)); /* 0x00620EF2: mov al, byte ptr [eax + 0xc] */
    esp = ebp; /* 0x00620EF5: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x00620EF7: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x00620EF8: ret 4 */
L_00620EFB:
    _flag_a = (uint32_t)(0) << 24; _flag_b = (uint32_t)(0) << 24;
    SET_LO8(eax, 0); /* 0x00620EFB: xor al, al */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    esp = ebp; /* 0x00620EFD: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x00620EFF: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x00620F00: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_00620F10(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00620F10u);

L_00620F10:
    PUSH32(esp, ebp); /* 0x00620F10: push ebp */
    ebp = esp; /* 0x00620F11: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xFFFFFFF8u);
    esp = esp & 0xFFFFFFF8u; /* 0x00620F13: and esp, 0xfffffff8 */
    _cf = 0;
    _flag_k = FK_TEST;
    eax = MEM32(ebp + 0x8); /* 0x00620F16: mov eax, dword ptr [ebp + 8] */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x10u; /* 0x00620F19: sub esp, 0x10 */
    _flag_k = FK_CMP;
    PUSH32(esp, esi); /* 0x00620F1C: push esi */
    esi = ecx; /* 0x00620F1D: mov esi, ecx */
    PUSH32(esp, edi); /* 0x00620F1F: push edi */
    /* cmp eax, 0xFFFFFFFFu */ /* 0x00620F20: cmp eax, -1 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xFFFFFFFFu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_00620FFD; /* 0x00620F23: je 0x620ffd */
L_00620F29:
    /* test eax, eax */ /* 0x00620F29: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_00620FFD; /* 0x00620F2B: je 0x620ffd */
L_00620F31:
    /* cmp eax, MEM32(esi + 0x2C) */ /* 0x00620F31: cmp eax, dword ptr [esi + 0x2c] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(esi + 0x2C));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_00620F3D; /* 0x00620F34: jne 0x620f3d */
L_00620F36:
    MEM32(esi + 0x2C) = 0xFFFFFFFFu; /* 0x00620F36: mov dword ptr [esi + 0x2c], 0xffffffff */
L_00620F3D:
    eax = ebp + 0x8; /* 0x00620F3D: lea eax, [ebp + 8] */
    PUSH32(esp, eax); /* 0x00620F40: push eax */
    eax = esp + 0x10; /* 0x00620F41: lea eax, [esp + 0x10] */
    PUSH32(esp, eax); /* 0x00620F45: push eax */
    ecx = esi + 0x554; /* 0x00620F46: lea ecx, [esi + 0x554] */
    RECOMP_CALL(sub_00625DE0); /* 0x00620F4C: call 0x625de0 */
    RECOMP_FLAGS_IN();
    eax = MEM32(esp + 0xC); /* 0x00620F51: mov eax, dword ptr [esp + 0xc] */
    /* cmp eax, MEM32(esi + 0x554) */ /* 0x00620F55: cmp eax, dword ptr [esi + 0x554] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(esi + 0x554));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_00620F7D; /* 0x00620F5B: jne 0x620f7d */
L_00620F5D:
    eax = ebp + 0x8; /* 0x00620F5D: lea eax, [ebp + 8] */
    PUSH32(esp, ecx); /* 0x00620F60: push ecx */
    MEM32(esp + 0x10) = eax; /* 0x00620F61: mov dword ptr [esp + 0x10], eax */
    eax = esp + 0x10; /* 0x00620F65: lea eax, [esp + 0x10] */
    PUSH32(esp, eax); /* 0x00620F69: push eax */
    PUSH32(esp, ecx); /* 0x00620F6A: push ecx */
    eax = esp + 0x1C; /* 0x00620F6B: lea eax, [esp + 0x1c] */
    PUSH32(esp, eax); /* 0x00620F6F: push eax */
    ecx = esi + 0x554; /* 0x00620F70: lea ecx, [esi + 0x554] */
    RECOMP_CALL(sub_00626CF0); /* 0x00620F76: call 0x626cf0 */
    RECOMP_FLAGS_IN();
    eax = MEM32(eax); /* 0x00620F7B: mov eax, dword ptr [eax] */
L_00620F7D:
    MEM8(eax + 0xC) = (uint8_t)(0); /* 0x00620F7D: mov byte ptr [eax + 0xc], 0 */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(0x594u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esi = esi + 0x594u; /* 0x00620F81: add esi, 0x594 */
    _flag_k = FK_ADD;
    eax = ebp + 0x8; /* 0x00620F87: lea eax, [ebp + 8] */
    ecx = esi; /* 0x00620F8A: mov ecx, esi */
    PUSH32(esp, eax); /* 0x00620F8C: push eax */
    eax = esp + 0x10; /* 0x00620F8D: lea eax, [esp + 0x10] */
    PUSH32(esp, eax); /* 0x00620F91: push eax */
    RECOMP_CALL(sub_00625DE0); /* 0x00620F92: call 0x625de0 */
    RECOMP_FLAGS_IN();
    eax = MEM32(esp + 0xC); /* 0x00620F97: mov eax, dword ptr [esp + 0xc] */
    /* cmp eax, MEM32(esi) */ /* 0x00620F9B: cmp eax, dword ptr [esi] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(esi));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_00620FBB; /* 0x00620F9D: jne 0x620fbb */
L_00620F9F:
    eax = ebp + 0x8; /* 0x00620F9F: lea eax, [ebp + 8] */
    PUSH32(esp, ecx); /* 0x00620FA2: push ecx */
    MEM32(esp + 0x10) = eax; /* 0x00620FA3: mov dword ptr [esp + 0x10], eax */
    eax = esp + 0x10; /* 0x00620FA7: lea eax, [esp + 0x10] */
    PUSH32(esp, eax); /* 0x00620FAB: push eax */
    PUSH32(esp, ecx); /* 0x00620FAC: push ecx */
    eax = esp + 0x1C; /* 0x00620FAD: lea eax, [esp + 0x1c] */
    ecx = esi; /* 0x00620FB1: mov ecx, esi */
    PUSH32(esp, eax); /* 0x00620FB3: push eax */
    RECOMP_CALL(sub_00626D50); /* 0x00620FB4: call 0x626d50 */
    RECOMP_FLAGS_IN();
    eax = MEM32(eax); /* 0x00620FB9: mov eax, dword ptr [eax] */
L_00620FBB:
    MEM32(eax + 0x10) = 0; /* 0x00620FBB: mov dword ptr [eax + 0x10], 0 */
    ecx = esi; /* 0x00620FC2: mov ecx, esi */
    eax = ebp + 0x8; /* 0x00620FC4: lea eax, [ebp + 8] */
    PUSH32(esp, eax); /* 0x00620FC7: push eax */
    eax = esp + 0x10; /* 0x00620FC8: lea eax, [esp + 0x10] */
    PUSH32(esp, eax); /* 0x00620FCC: push eax */
    RECOMP_CALL(sub_00625DE0); /* 0x00620FCD: call 0x625de0 */
    RECOMP_FLAGS_IN();
    eax = MEM32(esp + 0xC); /* 0x00620FD2: mov eax, dword ptr [esp + 0xc] */
    /* cmp eax, MEM32(esi) */ /* 0x00620FD6: cmp eax, dword ptr [esi] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(esi));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_00620FF6; /* 0x00620FD8: jne 0x620ff6 */
L_00620FDA:
    eax = ebp + 0x8; /* 0x00620FDA: lea eax, [ebp + 8] */
    PUSH32(esp, ecx); /* 0x00620FDD: push ecx */
    MEM32(esp + 0x10) = eax; /* 0x00620FDE: mov dword ptr [esp + 0x10], eax */
    eax = esp + 0x10; /* 0x00620FE2: lea eax, [esp + 0x10] */
    PUSH32(esp, eax); /* 0x00620FE6: push eax */
    PUSH32(esp, ecx); /* 0x00620FE7: push ecx */
    eax = esp + 0x1C; /* 0x00620FE8: lea eax, [esp + 0x1c] */
    ecx = esi; /* 0x00620FEC: mov ecx, esi */
    PUSH32(esp, eax); /* 0x00620FEE: push eax */
    RECOMP_CALL(sub_00626D50); /* 0x00620FEF: call 0x626d50 */
    RECOMP_FLAGS_IN();
    eax = MEM32(eax); /* 0x00620FF4: mov eax, dword ptr [eax] */
L_00620FF6:
    MEM32(eax + 0xC) = 0; /* 0x00620FF6: mov dword ptr [eax + 0xc], 0 */
L_00620FFD:
    edi = POP32_VAL(esp); /* 0x00620FFD: pop edi */
    esi = POP32_VAL(esp); /* 0x00620FFE: pop esi */
    esp = ebp; /* 0x00620FFF: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x00621001: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x00621002: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_00621010(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00621010u);

L_00621010:
    PUSH32(esp, ebp); /* 0x00621010: push ebp */
    ebp = esp; /* 0x00621011: mov ebp, esp */
    PUSH32(esp, ecx); /* 0x00621013: push ecx */
    PUSH32(esp, esi); /* 0x00621014: push esi */
    eax = ebp + 0x8; /* 0x00621015: lea eax, [ebp + 8] */
    PUSH32(esp, eax); /* 0x00621018: push eax */
    esi = ecx + 0x574; /* 0x00621019: lea esi, [ecx + 0x574] */
    eax = ebp + (-0x4); /* 0x0062101F: lea eax, [ebp - 4] */
    ecx = esi; /* 0x00621022: mov ecx, esi */
    PUSH32(esp, eax); /* 0x00621024: push eax */
    RECOMP_CALL(sub_00625DE0); /* 0x00621025: call 0x625de0 */
    RECOMP_FLAGS_IN();
    eax = MEM32(ebp + (-0x4)); /* 0x0062102A: mov eax, dword ptr [ebp - 4] */
    /* cmp eax, MEM32(esi) */ /* 0x0062102D: cmp eax, dword ptr [esi] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(esi));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    esi = POP32_VAL(esp); /* 0x0062102F: pop esi */
    if (CMP_EQ(_flag_a, _flag_b)) goto L_0062103B; /* 0x00621030: je 0x62103b */
L_00621032:
    SET_LO8(eax, MEM8(eax + 0xC)); /* 0x00621032: mov al, byte ptr [eax + 0xc] */
    esp = ebp; /* 0x00621035: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x00621037: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x00621038: ret 4 */
L_0062103B:
    _flag_a = (uint32_t)(0) << 24; _flag_b = (uint32_t)(0) << 24;
    SET_LO8(eax, 0); /* 0x0062103B: xor al, al */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    esp = ebp; /* 0x0062103D: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x0062103F: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x00621040: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_00621050(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00621050u);

L_00621050:
    PUSH32(esp, ebp); /* 0x00621050: push ebp */
    ebp = esp; /* 0x00621051: mov ebp, esp */
    eax = MEM32(ebp + 0x8); /* 0x00621053: mov eax, dword ptr [ebp + 8] */
    PUSH32(esp, ebx); /* 0x00621056: push ebx */
    PUSH32(esp, esi); /* 0x00621057: push esi */
    PUSH32(esp, edi); /* 0x00621058: push edi */
    edi = MEM32(eax + 0x4); /* 0x00621059: mov edi, dword ptr [eax + 4] */
    ebx = MEM32(eax); /* 0x0062105C: mov ebx, dword ptr [eax] */
    eax = MEM32(0x870260); /* 0x0062105E: mov eax, dword ptr [0x870260] */
    esi = MEM32(eax + 0x18); /* 0x00621063: mov esi, dword ptr [eax + 0x18] */
    /* test esi, esi */ /* 0x00621066: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_006210AB; /* 0x00621068: je 0x6210ab */
L_0062106A:
    eax = MEM32(0x87CBCC); /* 0x0062106A: mov eax, dword ptr [0x87cbcc] */
    /* test eax, eax */ /* 0x0062106F: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_0062107A; /* 0x00621071: jne 0x62107a */
L_00621073:
    PUSH32(esp, 0x00803F6Cu); /* 0x00621073: push 0x803f6c */
    goto L_0062108D; /* 0x00621078: jmp 0x62108d */
L_0062107A:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x118u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 0x118u; /* 0x0062107A: add eax, 0x118 */
    _flag_k = FK_ADD;
    /* cmp MEM32(esi), eax */ /* 0x0062107F: cmp dword ptr [esi], eax */
    _flag_a = (uint32_t)(MEM32(esi)); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_00621088; /* 0x00621081: jne 0x621088 */
L_00621083:
    eax = MEM32(esi + 0x30); /* 0x00621083: mov eax, dword ptr [esi + 0x30] */
    goto L_00621097; /* 0x00621086: jmp 0x621097 */
L_00621088:
    PUSH32(esp, 0x00804020u); /* 0x00621088: push 0x804020 */
L_0062108D:
    RECOMP_CALL(sub_006EDB70); /* 0x0062108D: call 0x6edb70 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x00621092: add esp, 4 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x00621095: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
L_00621097:
    /* test eax, 0x200u */ /* 0x00621097: test eax, 0x200 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x200u);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_006210AB; /* 0x0062109C: je 0x6210ab */
L_0062109E:
    PUSH32(esp, edi); /* 0x0062109E: push edi */
    edx = ebx; /* 0x0062109F: mov edx, ebx */
    ecx = esi; /* 0x006210A1: mov ecx, esi */
    RECOMP_CALL(sub_006F1220); /* 0x006210A3: call 0x6f1220 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x006210A8: add esp, 4 */
    _flag_k = FK_ADD;
L_006210AB:
    edi = POP32_VAL(esp); /* 0x006210AB: pop edi */
    esi = POP32_VAL(esp); /* 0x006210AC: pop esi */
    ebx = POP32_VAL(esp); /* 0x006210AD: pop ebx */
    ebp = POP32_VAL(esp); /* 0x006210AE: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x006210AF: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_006210C0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x006210C0u);

L_006210C0:
    PUSH32(esp, ebp); /* 0x006210C0: push ebp */
    ebp = esp; /* 0x006210C1: mov ebp, esp */
    PUSH32(esp, ecx); /* 0x006210C3: push ecx */
    eax = MEM32(0x870260); /* 0x006210C4: mov eax, dword ptr [0x870260] */
    PUSH32(esp, esi); /* 0x006210C9: push esi */
    esi = MEM32(eax + 0x18); /* 0x006210CA: mov esi, dword ptr [eax + 0x18] */
    /* test esi, esi */ /* 0x006210CD: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_00621115; /* 0x006210CF: je 0x621115 */
L_006210D1:
    eax = MEM32(0x87CBCC); /* 0x006210D1: mov eax, dword ptr [0x87cbcc] */
    /* test eax, eax */ /* 0x006210D6: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_006210E1; /* 0x006210D8: jne 0x6210e1 */
L_006210DA:
    PUSH32(esp, 0x00803F6Cu); /* 0x006210DA: push 0x803f6c */
    goto L_006210F4; /* 0x006210DF: jmp 0x6210f4 */
L_006210E1:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x118u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 0x118u; /* 0x006210E1: add eax, 0x118 */
    _flag_k = FK_ADD;
    /* cmp MEM32(esi), eax */ /* 0x006210E6: cmp dword ptr [esi], eax */
    _flag_a = (uint32_t)(MEM32(esi)); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_006210EF; /* 0x006210E8: jne 0x6210ef */
L_006210EA:
    eax = MEM32(esi + 0x30); /* 0x006210EA: mov eax, dword ptr [esi + 0x30] */
    goto L_006210FE; /* 0x006210ED: jmp 0x6210fe */
L_006210EF:
    PUSH32(esp, 0x00804020u); /* 0x006210EF: push 0x804020 */
L_006210F4:
    RECOMP_CALL(sub_006EDB70); /* 0x006210F4: call 0x6edb70 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x006210F9: add esp, 4 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x006210FC: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
L_006210FE:
    /* test eax, 0x200u */ /* 0x006210FE: test eax, 0x200 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x200u);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_00621115; /* 0x00621103: je 0x621115 */
L_00621105:
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x00621105: push dword ptr [ebp + 0xc] */
    edx = MEM32(ebp + 0x8); /* 0x00621108: mov edx, dword ptr [ebp + 8] */
    ecx = esi; /* 0x0062110B: mov ecx, esi */
    RECOMP_CALL(sub_006F1220); /* 0x0062110D: call 0x6f1220 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x00621112: add esp, 4 */
    _flag_k = FK_ADD;
L_00621115:
    esi = POP32_VAL(esp); /* 0x00621115: pop esi */
    ecx = POP32_VAL(esp); /* 0x00621116: pop ecx */
    ebp = POP32_VAL(esp); /* 0x00621117: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 12; { RECOMP_REGS_OUT(); return; } /* 0x00621118: ret 8 */
    RECOMP_REGS_OUT();
}

void sub_00621120(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00621120u);

L_00621120:
    PUSH32(esp, ebp); /* 0x00621120: push ebp */
    ebp = esp; /* 0x00621121: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 8; /* 0x00621123: sub esp, 8 */
    _flag_k = FK_CMP;
    PUSH32(esp, esi); /* 0x00621126: push esi */
    esi = MEM32(0x870268); /* 0x00621127: mov esi, dword ptr [0x870268] */
    eax = ebp + (-0x4); /* 0x0062112D: lea eax, [ebp - 4] */
    PUSH32(esp, eax); /* 0x00621130: push eax */
    eax = ebp + (-0x8); /* 0x00621131: lea eax, [ebp - 8] */
    MEM32(ebp + (-0x4)) = 1; /* 0x00621134: mov dword ptr [ebp - 4], 1 */
    PUSH32(esp, eax); /* 0x0062113B: push eax */
    ecx = esi + 0x574; /* 0x0062113C: lea ecx, [esi + 0x574] */
    RECOMP_CALL(sub_00625DE0); /* 0x00621142: call 0x625de0 */
    RECOMP_FLAGS_IN();
    eax = MEM32(ebp + (-0x8)); /* 0x00621147: mov eax, dword ptr [ebp - 8] */
    /* cmp eax, MEM32(esi + 0x574) */ /* 0x0062114A: cmp eax, dword ptr [esi + 0x574] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(esi + 0x574));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    esi = POP32_VAL(esp); /* 0x00621150: pop esi */
    if (eax && _flag_a != _flag_b && MEM8(eax + 0xC)) { extern void void_input_mouse_observed(uint32_t); void_input_mouse_observed(1u); }
    if (CMP_EQ(_flag_a, _flag_b)) goto L_0062115F; /* 0x00621151: je 0x62115f */
L_00621153:
    SET_LO8(eax, MEM8(eax + 0xC)); /* 0x00621153: mov al, byte ptr [eax + 0xc] */
    /* test LO8(eax), LO8(eax) */ /* 0x00621156: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    SET_LO8(eax, (TEST_NZ(_flag_a, _flag_b)) ? 1 : 0); /* 0x00621158: setne al */
    esp = ebp; /* 0x0062115B: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x0062115D: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x0062115E: ret  */
L_0062115F:
    _flag_a = (uint32_t)(0) << 24; _flag_b = (uint32_t)(0) << 24;
    SET_LO8(eax, 0); /* 0x0062115F: xor al, al */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    /* test LO8(eax), LO8(eax) */ /* 0x00621161: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    SET_LO8(eax, (TEST_NZ(_flag_a, _flag_b)) ? 1 : 0); /* 0x00621163: setne al */
    esp = ebp; /* 0x00621166: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x00621168: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x00621169: ret  */
    RECOMP_REGS_OUT();
}

void sub_00621170(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00621170u);

L_00621170:
    PUSH32(esp, ebp); /* 0x00621170: push ebp */
    ebp = esp; /* 0x00621171: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 8; /* 0x00621173: sub esp, 8 */
    _flag_k = FK_CMP;
    PUSH32(esp, esi); /* 0x00621176: push esi */
    esi = MEM32(0x870268); /* 0x00621177: mov esi, dword ptr [0x870268] */
    eax = ebp + (-0x4); /* 0x0062117D: lea eax, [ebp - 4] */
    PUSH32(esp, eax); /* 0x00621180: push eax */
    eax = ebp + (-0x8); /* 0x00621181: lea eax, [ebp - 8] */
    MEM32(ebp + (-0x4)) = 3; /* 0x00621184: mov dword ptr [ebp - 4], 3 */
    PUSH32(esp, eax); /* 0x0062118B: push eax */
    ecx = esi + 0x574; /* 0x0062118C: lea ecx, [esi + 0x574] */
    RECOMP_CALL(sub_00625DE0); /* 0x00621192: call 0x625de0 */
    RECOMP_FLAGS_IN();
    eax = MEM32(ebp + (-0x8)); /* 0x00621197: mov eax, dword ptr [ebp - 8] */
    /* cmp eax, MEM32(esi + 0x574) */ /* 0x0062119A: cmp eax, dword ptr [esi + 0x574] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(esi + 0x574));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    esi = POP32_VAL(esp); /* 0x006211A0: pop esi */
    if (eax && _flag_a != _flag_b && MEM8(eax + 0xC)) { extern void void_input_mouse_observed(uint32_t); void_input_mouse_observed(2u); }
    if (CMP_EQ(_flag_a, _flag_b)) goto L_006211AF; /* 0x006211A1: je 0x6211af */
L_006211A3:
    SET_LO8(eax, MEM8(eax + 0xC)); /* 0x006211A3: mov al, byte ptr [eax + 0xc] */
    /* test LO8(eax), LO8(eax) */ /* 0x006211A6: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    SET_LO8(eax, (TEST_NZ(_flag_a, _flag_b)) ? 1 : 0); /* 0x006211A8: setne al */
    esp = ebp; /* 0x006211AB: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x006211AD: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x006211AE: ret  */
L_006211AF:
    _flag_a = (uint32_t)(0) << 24; _flag_b = (uint32_t)(0) << 24;
    SET_LO8(eax, 0); /* 0x006211AF: xor al, al */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    /* test LO8(eax), LO8(eax) */ /* 0x006211B1: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    SET_LO8(eax, (TEST_NZ(_flag_a, _flag_b)) ? 1 : 0); /* 0x006211B3: setne al */
    esp = ebp; /* 0x006211B6: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x006211B8: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x006211B9: ret  */
    RECOMP_REGS_OUT();
}

void sub_006211C0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x006211C0u);

L_006211C0:
    PUSH32(esp, ebp); /* 0x006211C0: push ebp */
    ebp = esp; /* 0x006211C1: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x14u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x14u; /* 0x006211C3: sub esp, 0x14 */
    _flag_k = FK_CMP;
    PUSH32(esp, esi); /* 0x006211C6: push esi */
    esi = MEM32(0x870268); /* 0x006211C7: mov esi, dword ptr [0x870268] */
    eax = ebp + (-0x4); /* 0x006211CD: lea eax, [ebp - 4] */
    PUSH32(esp, eax); /* 0x006211D0: push eax */
    eax = ebp + (-0x8); /* 0x006211D1: lea eax, [ebp - 8] */
    MEM32(ebp + (-0x4)) = 1; /* 0x006211D4: mov dword ptr [ebp - 4], 1 */
    PUSH32(esp, eax); /* 0x006211DB: push eax */
    ecx = esi + 0x574; /* 0x006211DC: lea ecx, [esi + 0x574] */
    RECOMP_CALL(sub_00625DE0); /* 0x006211E2: call 0x625de0 */
    RECOMP_FLAGS_IN();
    eax = MEM32(ebp + (-0x8)); /* 0x006211E7: mov eax, dword ptr [ebp - 8] */
    /* cmp eax, MEM32(esi + 0x574) */ /* 0x006211EA: cmp eax, dword ptr [esi + 0x574] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(esi + 0x574));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_0062120F; /* 0x006211F0: jne 0x62120f */
L_006211F2:
    eax = ebp + (-0x4); /* 0x006211F2: lea eax, [ebp - 4] */
    PUSH32(esp, ecx); /* 0x006211F5: push ecx */
    MEM32(ebp + (-0x8)) = eax; /* 0x006211F6: mov dword ptr [ebp - 8], eax */
    eax = ebp + (-0x8); /* 0x006211F9: lea eax, [ebp - 8] */
    PUSH32(esp, eax); /* 0x006211FC: push eax */
    PUSH32(esp, ecx); /* 0x006211FD: push ecx */
    eax = ebp + (-0x10); /* 0x006211FE: lea eax, [ebp - 0x10] */
    PUSH32(esp, eax); /* 0x00621201: push eax */
    ecx = esi + 0x574; /* 0x00621202: lea ecx, [esi + 0x574] */
    RECOMP_CALL(sub_00626CF0); /* 0x00621208: call 0x626cf0 */
    RECOMP_FLAGS_IN();
    eax = MEM32(eax); /* 0x0062120D: mov eax, dword ptr [eax] */
L_0062120F:
    MEM8(eax + 0xC) = (uint8_t)(0); /* 0x0062120F: mov byte ptr [eax + 0xc], 0 */
    esi = POP32_VAL(esp); /* 0x00621213: pop esi */
    esp = ebp; /* 0x00621214: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x00621216: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x00621217: ret  */
    RECOMP_REGS_OUT();
}

void sub_00621220(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00621220u);

L_00621220:
    PUSH32(esp, ebp); /* 0x00621220: push ebp */
    ebp = esp; /* 0x00621221: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x14u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x14u; /* 0x00621223: sub esp, 0x14 */
    _flag_k = FK_CMP;
    PUSH32(esp, esi); /* 0x00621226: push esi */
    esi = MEM32(0x870268); /* 0x00621227: mov esi, dword ptr [0x870268] */
    eax = ebp + (-0x4); /* 0x0062122D: lea eax, [ebp - 4] */
    PUSH32(esp, eax); /* 0x00621230: push eax */
    eax = ebp + (-0x8); /* 0x00621231: lea eax, [ebp - 8] */
    MEM32(ebp + (-0x4)) = 3; /* 0x00621234: mov dword ptr [ebp - 4], 3 */
    PUSH32(esp, eax); /* 0x0062123B: push eax */
    ecx = esi + 0x574; /* 0x0062123C: lea ecx, [esi + 0x574] */
    RECOMP_CALL(sub_00625DE0); /* 0x00621242: call 0x625de0 */
    RECOMP_FLAGS_IN();
    eax = MEM32(ebp + (-0x8)); /* 0x00621247: mov eax, dword ptr [ebp - 8] */
    /* cmp eax, MEM32(esi + 0x574) */ /* 0x0062124A: cmp eax, dword ptr [esi + 0x574] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(esi + 0x574));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_0062126F; /* 0x00621250: jne 0x62126f */
L_00621252:
    eax = ebp + (-0x4); /* 0x00621252: lea eax, [ebp - 4] */
    PUSH32(esp, ecx); /* 0x00621255: push ecx */
    MEM32(ebp + (-0x8)) = eax; /* 0x00621256: mov dword ptr [ebp - 8], eax */
    eax = ebp + (-0x8); /* 0x00621259: lea eax, [ebp - 8] */
    PUSH32(esp, eax); /* 0x0062125C: push eax */
    PUSH32(esp, ecx); /* 0x0062125D: push ecx */
    eax = ebp + (-0x10); /* 0x0062125E: lea eax, [ebp - 0x10] */
    PUSH32(esp, eax); /* 0x00621261: push eax */
    ecx = esi + 0x574; /* 0x00621262: lea ecx, [esi + 0x574] */
    RECOMP_CALL(sub_00626CF0); /* 0x00621268: call 0x626cf0 */
    RECOMP_FLAGS_IN();
    eax = MEM32(eax); /* 0x0062126D: mov eax, dword ptr [eax] */
L_0062126F:
    MEM8(eax + 0xC) = (uint8_t)(0); /* 0x0062126F: mov byte ptr [eax + 0xc], 0 */
    esi = POP32_VAL(esp); /* 0x00621273: pop esi */
    esp = ebp; /* 0x00621274: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x00621276: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x00621277: ret  */
    RECOMP_REGS_OUT();
}

void sub_00621280(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00621280u);

L_00621280:
    PUSH32(esp, ebp); /* 0x00621280: push ebp */
    ebp = esp; /* 0x00621281: mov ebp, esp */
    eax = MEM32(ecx + 0x504); /* 0x00621283: mov eax, dword ptr [ecx + 0x504] */
    PUSH32(esp, esi); /* 0x00621289: push esi */
    esi = (uint32_t)((int32_t)MEM32(ecx + 0x3D8) * (int32_t)0x1D4u); /* 0x0062128A: imul esi, dword ptr [ecx + 0x3d8], 0x1d4 */
    edx = MEM32(esi + eax + 0x18); /* 0x00621294: mov edx, dword ptr [esi + eax + 0x18] */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(MEM32(esi + eax + 0x14));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    edx = edx - MEM32(esi + eax + 0x14); /* 0x00621298: sub edx, dword ptr [esi + eax + 0x14] */
    _flag_k = FK_CMP;
    eax = 0x66666667u; /* 0x0062129C: mov eax, 0x66666667 */
    { int64_t _r = (int64_t)(int32_t)eax * (int32_t)(edx); /* 0x006212A1: imul edx */
      eax = (uint32_t)_r; edx = (uint32_t)(_r >> 32); uint32_t _ov = _r != (int32_t)_r;
      _flag_k = FK_EFLAGS; _flag_a = _ov ? 0x801u : 0u; _flag_b = 0; _cf = _ov; }
    if (3u) _cf = (((edx) >> 2) & 1u); /* 0x006212A3: sar edx, 3 */
    if (3u) { _flag_a = recomp_flags_pack(((uint32_t)((int32_t)edx >> 3u)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    edx = (uint32_t)((int32_t)edx >> 3u);
    eax = edx; /* 0x006212A6: mov eax, edx */
    if (31u) _cf = (((eax) >> 30) & 1u); /* 0x006212A8: shr eax, 0x1f */
    if (31u) { _flag_a = recomp_flags_pack((eax >> 31u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax >> 31u; /* 0x006212A8: shr eax, 0x1f */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + edx; /* 0x006212AB: add eax, edx */
    _flag_k = FK_ADD;
    edx = MEM32(ebp + 0x8); /* 0x006212AD: mov edx, dword ptr [ebp + 8] */
    /* cmp edx, eax */ /* 0x006212B0: cmp edx, eax */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_AE(_flag_a, _flag_b)) goto L_006212C4; /* 0x006212B2: jae 0x6212c4 */
L_006212B4:
    /* cmp MEM8(ecx + 0x16), 0 */ /* 0x006212B4: cmp byte ptr [ecx + 0x16], 0 */
    _flag_a = (uint32_t)(MEM8(ecx + 0x16)) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_006212C4; /* 0x006212B8: jne 0x6212c4 */
L_006212BA:
    esi = POP32_VAL(esp); /* 0x006212BA: pop esi */
    MEM32(ebp + 0x8) = edx; /* 0x006212BB: mov dword ptr [ebp + 8], edx */
    ebp = POP32_VAL(esp); /* 0x006212BE: pop ebp */
    goto L_00622760; /* 0x006212BF: jmp 0x622760 */
L_006212C4:
    { xmm_t _s = _xmm[0]; for (int _k = 0; _k < 4; _k++) _xmm[0].u32[_k] = _xmm[0].u32[_k] ^ _s.u32[_k]; } /* 0x006212C4: xorps xmm0, xmm0 */
    esi = POP32_VAL(esp); /* 0x006212C7: pop esi */
    ebp = POP32_VAL(esp); /* 0x006212C8: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x006212C9: ret 4 */
L_00622760:
    PUSH32(esp, ebp); /* 0x00622760: push ebp */
    ebp = esp; /* 0x00622761: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xFFFFFFF8u);
    esp = esp & 0xFFFFFFF8u; /* 0x00622763: and esp, 0xfffffff8 */
    _cf = 0;
    _flag_k = FK_TEST;
    edx = (uint32_t)((int32_t)MEM32(ecx + 0x3D8) * (int32_t)0x1D4u); /* 0x00622766: imul edx, dword ptr [ecx + 0x3d8], 0x1d4 */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 8; /* 0x00622770: sub esp, 8 */
    _flag_k = FK_CMP;
    ecx = MEM32(ecx + 0x504); /* 0x00622773: mov ecx, dword ptr [ecx + 0x504] */
    eax = MEM32(ebp + 0x8); /* 0x00622779: mov eax, dword ptr [ebp + 8] */
    eax = (uint32_t)LO8(eax); /* 0x0062277C: movzx eax, al */
    PUSH32(esp, esi); /* 0x0062277F: push esi */
    PUSH32(esp, edi); /* 0x00622780: push edi */
    esi = eax + eax * 4; /* 0x00622781: lea esi, [eax + eax*4] */
    edi = MEM32(edx + ecx + 0x14); /* 0x00622784: mov edi, dword ptr [edx + ecx + 0x14] */
    /* cmp MEM8(edi + esi * 4 + 0x10), 0 */ /* 0x00622788: cmp byte ptr [edi + esi*4 + 0x10], 0 */
    _flag_a = (uint32_t)(MEM8(edi + esi * 4 + 0x10)) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_00622799; /* 0x0062278D: je 0x622799 */
L_0062278F:
    _xmm[1].u64[0] = MEM32(0x809824); _xmm[1].u64[1] = 0; /* 0x0062278F: movss xmm1, dword ptr [0x809824] */
    goto L_006227A1; /* 0x00622797: jmp 0x6227a1 */
L_00622799:
    _xmm[1].u64[0] = MEM32(0x808CB0); _xmm[1].u64[1] = 0; /* 0x00622799: movss xmm1, dword ptr [0x808cb0] */
L_006227A1:
    eax = (int32_t)(int16_t)MEM16(edi + esi * 4 + 0x12); /* 0x006227A1: movsx eax, word ptr [edi + esi*4 + 0x12] */
    _xmm[0].u64[0] = (uint32_t)(eax); _xmm[0].u64[1] = 0; /* 0x006227A6: movd xmm0, eax */
    { xmm_t _s = _xmm[0]; for (int _k = 0; _k < 4; _k++) _xmm[0].f32[_k] = (float)_s.i32[_k]; } /* 0x006227AA: cvtdq2ps xmm0, xmm0 */
    { float _s = sse_f32(MEM32(edi + esi * 4 + 0xC)); _xmm[0].f32[0] = (float)(_xmm[0].f32[0] * _s); } /* 0x006227AD: mulss xmm0, dword ptr [edi + esi*4 + 0xc] */
    { float _s = sse_f32(MEM32(0x809780)); _xmm[0].f32[0] = (float)(_xmm[0].f32[0] / _s); } /* 0x006227B3: divss xmm0, dword ptr [0x809780] */
    { float _s = _xmm[1].f32[0]; _xmm[0].f32[0] = (float)(_xmm[0].f32[0] * _s); } /* 0x006227BB: mulss xmm0, xmm1 */
    _xmm[1].u64[0] = MEM32(0x809398); _xmm[1].u64[1] = 0; /* 0x006227BF: movss xmm1, dword ptr [0x809398] */
    MEM32(esp + 0xC) = _xmm[0].u32[0]; /* 0x006227C7: movss dword ptr [esp + 0xc], xmm0 */
    RECOMP_CALL(sub_0040BD80); /* 0x006227CD: call 0x40bd80 */
    RECOMP_FLAGS_IN();
    _xmm[3].u64[0] = MEM32(0x808CB0); _xmm[3].u64[1] = 0; /* 0x006227D2: movss xmm3, dword ptr [0x808cb0] */
    _xmm[2] = _xmm[0]; /* 0x006227DA: movaps xmm2, xmm0 */
    _xmm[1].u64[0] = MEM32(edi + esi * 4); _xmm[1].u64[1] = 0; /* 0x006227DD: movss xmm1, dword ptr [edi + esi*4] */
    _xmm[0] = _xmm[3]; /* 0x006227E2: movaps xmm0, xmm3 */
    { float _s = _xmm[1].f32[0]; _xmm[0].f32[0] = (float)(_xmm[0].f32[0] - _s); } /* 0x006227E5: subss xmm0, xmm1 */
    { float _s = sse_f32(MEM32(esp + 0xC)); _xmm[1].f32[0] = (float)(_xmm[1].f32[0] * _s); } /* 0x006227E9: mulss xmm1, dword ptr [esp + 0xc] */
    { float _s = _xmm[0].f32[0]; _xmm[2].f32[0] = (float)(_xmm[2].f32[0] * _s); } /* 0x006227EF: mulss xmm2, xmm0 */
    { xmm_t _s = _xmm[0]; for (int _k = 0; _k < 4; _k++) _xmm[0].u32[_k] = _xmm[0].u32[_k] ^ _s.u32[_k]; } /* 0x006227F3: xorps xmm0, xmm0 */
    { float _s = _xmm[1].f32[0]; _xmm[2].f32[0] = (float)(_xmm[2].f32[0] + _s); } /* 0x006227F6: addss xmm2, xmm1 */
    _xmm[0].f64[0] = (double)_xmm[2].f32[0]; /* 0x006227FA: cvtss2sd xmm0, xmm2 */
    { xmm_t _s = xmm_ld(0x809C90); for (int _k = 0; _k < 4; _k++) _xmm[0].u32[_k] = _xmm[0].u32[_k] & _s.u32[_k]; } /* 0x006227FE: andpd xmm0, xmmword ptr [0x809c90] */
    { xmm_t _s = _xmm[0]; _xmm[1].f32[0] = (float)_s.f64[0]; _xmm[1].f32[1] = (float)_s.f64[1]; _xmm[1].u64[1] = 0; } /* 0x00622806: cvtpd2ps xmm1, xmm0 */
    _xmm[0].u64[0] = MEM32(edi + esi * 4 + 0x4); _xmm[0].u64[1] = 0; /* 0x0062280A: movss xmm0, dword ptr [edi + esi*4 + 4] */
    _flag_a = SSE_COMI(_xmm[0].f32[0], _xmm[1].f32[0]); _flag_b = 0; _cf = _flag_a & 1u; /* 0x00622810: comiss xmm0, xmm1 */
    _flag_k = FK_EFLAGS;
    if (recomp_cond(FK_EFLAGS, _flag_a, 0, CC_BE)) goto L_00622820; /* 0x00622813: jbe 0x622820 */
L_00622815:
    { xmm_t _s = _xmm[0]; for (int _k = 0; _k < 4; _k++) _xmm[0].u32[_k] = _xmm[0].u32[_k] ^ _s.u32[_k]; } /* 0x00622815: xorps xmm0, xmm0 */
    edi = POP32_VAL(esp); /* 0x00622818: pop edi */
    esi = POP32_VAL(esp); /* 0x00622819: pop esi */
    esp = ebp; /* 0x0062281A: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x0062281C: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x0062281D: ret 4 */
L_00622820:
    _xmm[1].u64[0] = MEM32(edi + esi * 4 + 0x8); _xmm[1].u64[1] = 0; /* 0x00622820: movss xmm1, dword ptr [edi + esi*4 + 8] */
    _xmm[0] = _xmm[1]; /* 0x00622826: movaps xmm0, xmm1 */
    { xmm_t _s = xmm_ld(0x809CB0); for (int _k = 0; _k < 4; _k++) _xmm[0].u32[_k] = _xmm[0].u32[_k] ^ _s.u32[_k]; } /* 0x00622829: xorps xmm0, xmmword ptr [0x809cb0] */
    _flag_a = SSE_COMI(_xmm[0].f32[0], _xmm[2].f32[0]); _flag_b = 0; _cf = _flag_a & 1u; /* 0x00622830: comiss xmm0, xmm2 */
    _flag_k = FK_EFLAGS;
    if (recomp_cond(FK_EFLAGS, _flag_a, 0, CC_BE)) goto L_00622845; /* 0x00622833: jbe 0x622845 */
L_00622835:
    _xmm[0].u64[0] = MEM32(0x809824); _xmm[0].u64[1] = 0; /* 0x00622835: movss xmm0, dword ptr [0x809824] */
    edi = POP32_VAL(esp); /* 0x0062283D: pop edi */
    esi = POP32_VAL(esp); /* 0x0062283E: pop esi */
    esp = ebp; /* 0x0062283F: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x00622841: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x00622842: ret 4 */
L_00622845:
    _flag_a = SSE_COMI(_xmm[2].f32[0], _xmm[1].f32[0]); _flag_b = 0; _cf = _flag_a & 1u; /* 0x00622845: comiss xmm2, xmm1 */
    _flag_k = FK_EFLAGS;
    if (recomp_cond(FK_EFLAGS, _flag_a, 0, CC_BE)) goto L_00622855; /* 0x00622848: jbe 0x622855 */
L_0062284A:
    _xmm[0] = _xmm[3]; /* 0x0062284A: movaps xmm0, xmm3 */
    edi = POP32_VAL(esp); /* 0x0062284D: pop edi */
    esi = POP32_VAL(esp); /* 0x0062284E: pop esi */
    esp = ebp; /* 0x0062284F: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x00622851: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x00622852: ret 4 */
L_00622855:
    _xmm[0].u64[0] = MEM32(0x809824); _xmm[0].u64[1] = 0; /* 0x00622855: movss xmm0, dword ptr [0x809824] */
    _flag_a = SSE_COMI(_xmm[0].f32[0], _xmm[2].f32[0]); _flag_b = 0; _cf = _flag_a & 1u; /* 0x0062285D: comiss xmm0, xmm2 */
    _flag_k = FK_EFLAGS;
    if (recomp_cond(FK_EFLAGS, _flag_a, 0, CC_A)) goto L_00622875; /* 0x00622860: ja 0x622875 */
L_00622862:
    _flag_a = SSE_COMI(_xmm[2].f32[0], _xmm[3].f32[0]); _flag_b = 0; _cf = _flag_a & 1u; /* 0x00622862: comiss xmm2, xmm3 */
    _flag_k = FK_EFLAGS;
    if (recomp_cond(FK_EFLAGS, _flag_a, 0, CC_BE)) goto L_00622872; /* 0x00622865: jbe 0x622872 */
L_00622867:
    _xmm[0] = _xmm[3]; /* 0x00622867: movaps xmm0, xmm3 */
    edi = POP32_VAL(esp); /* 0x0062286A: pop edi */
    esi = POP32_VAL(esp); /* 0x0062286B: pop esi */
    esp = ebp; /* 0x0062286C: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x0062286E: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x0062286F: ret 4 */
L_00622872:
    _xmm[0] = _xmm[2]; /* 0x00622872: movaps xmm0, xmm2 */
L_00622875:
    edi = POP32_VAL(esp); /* 0x00622875: pop edi */
    esi = POP32_VAL(esp); /* 0x00622876: pop esi */
    esp = ebp; /* 0x00622877: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x00622879: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x0062287A: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_006212D0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x006212D0u);

L_006212D0:
    PUSH32(esp, ebp); /* 0x006212D0: push ebp */
    ebp = esp; /* 0x006212D1: mov ebp, esp */
    PUSH32(esp, ecx); /* 0x006212D3: push ecx */
    eax = MEM32(0x870268); /* 0x006212D4: mov eax, dword ptr [0x870268] */
    PUSH32(esp, esi); /* 0x006212D9: push esi */
    esi = (uint32_t)((int32_t)MEM32(eax + 0x3D8) * (int32_t)0x1D4u); /* 0x006212DA: imul esi, dword ptr [eax + 0x3d8], 0x1d4 */
    eax = MEM32(eax + 0x504); /* 0x006212E4: mov eax, dword ptr [eax + 0x504] */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esi = esi + eax; /* 0x006212EA: add esi, eax */
    _flag_k = FK_ADD;
    eax = 0x66666667u; /* 0x006212EC: mov eax, 0x66666667 */
    ecx = MEM32(esi + 0x18); /* 0x006212F1: mov ecx, dword ptr [esi + 0x18] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(MEM32(esi + 0x14));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ecx = ecx - MEM32(esi + 0x14); /* 0x006212F4: sub ecx, dword ptr [esi + 0x14] */
    _flag_k = FK_CMP;
    { int64_t _r = (int64_t)(int32_t)eax * (int32_t)(ecx); /* 0x006212F7: imul ecx */
      eax = (uint32_t)_r; edx = (uint32_t)(_r >> 32); uint32_t _ov = _r != (int32_t)_r;
      _flag_k = FK_EFLAGS; _flag_a = _ov ? 0x801u : 0u; _flag_b = 0; _cf = _ov; }
    ecx = MEM32(ebp + 0x8); /* 0x006212F9: mov ecx, dword ptr [ebp + 8] */
    if (3u) _cf = (((edx) >> 2) & 1u); /* 0x006212FC: sar edx, 3 */
    if (3u) { _flag_a = recomp_flags_pack(((uint32_t)((int32_t)edx >> 3u)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    edx = (uint32_t)((int32_t)edx >> 3u);
    eax = edx; /* 0x006212FF: mov eax, edx */
    if (31u) _cf = (((eax) >> 30) & 1u); /* 0x00621301: shr eax, 0x1f */
    if (31u) { _flag_a = recomp_flags_pack((eax >> 31u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax >> 31u; /* 0x00621301: shr eax, 0x1f */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + edx; /* 0x00621304: add eax, edx */
    _flag_k = FK_ADD;
    /* cmp ecx, eax */ /* 0x00621306: cmp ecx, eax */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_B(_flag_a, _flag_b)) goto L_00621313; /* 0x00621308: jb 0x621313 */
L_0062130A:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x0062130A: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    esi = POP32_VAL(esp); /* 0x0062130C: pop esi */
    esp = ebp; /* 0x0062130D: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x0062130F: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x00621310: ret 4 */
L_00621313:
    eax = MEM32(esi + 0x14); /* 0x00621313: mov eax, dword ptr [esi + 0x14] */
    ecx = ecx + ecx * 4; /* 0x00621316: lea ecx, [ecx + ecx*4] */
    esi = POP32_VAL(esp); /* 0x00621319: pop esi */
    eax = (int32_t)(int16_t)MEM16(eax + ecx * 4 + 0x12); /* 0x0062131A: movsx eax, word ptr [eax + ecx*4 + 0x12] */
    esp = ebp; /* 0x0062131F: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x00621321: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x00621322: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_00621330(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00621330u);

L_00621330:
    PUSH32(esp, ebp); /* 0x00621330: push ebp */
    ebp = esp; /* 0x00621331: mov ebp, esp */
    PUSH32(esp, ecx); /* 0x00621333: push ecx */
    PUSH32(esp, ebx); /* 0x00621334: push ebx */
    PUSH32(esp, esi); /* 0x00621335: push esi */
    esi = MEM32(0x870268); /* 0x00621336: mov esi, dword ptr [0x870268] */
    PUSH32(esp, edi); /* 0x0062133C: push edi */
    edx = (uint32_t)((int32_t)MEM32(esi + 0x3D8) * (int32_t)0x1D4u); /* 0x0062133D: imul edx, dword ptr [esi + 0x3d8], 0x1d4 */
    edi = MEM32(esi + 0x504); /* 0x00621347: mov edi, dword ptr [esi + 0x504] */
    eax = MEM32(edx + edi + 0x8); /* 0x0062134D: mov eax, dword ptr [edx + edi + 8] */
    /* cmp MEM8(eax + 0xC), 2 */ /* 0x00621351: cmp byte ptr [eax + 0xc], 2 */
    _flag_a = (uint32_t)(MEM8(eax + 0xC)) << 24; _flag_b = (uint32_t)(2) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    ebx = MEM32(eax + 0x8); /* 0x00621355: mov ebx, dword ptr [eax + 8] */
    if (CMP_NE(_flag_a, _flag_b)) goto L_0062138C; /* 0x00621358: jne 0x62138c */
L_0062135A:
    ecx = MEM32(edx + edi + 0x18); /* 0x0062135A: mov ecx, dword ptr [edx + edi + 0x18] */
    eax = 0x66666667u; /* 0x0062135E: mov eax, 0x66666667 */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(MEM32(edx + edi + 0x14));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ecx = ecx - MEM32(edx + edi + 0x14); /* 0x00621363: sub ecx, dword ptr [edx + edi + 0x14] */
    _flag_k = FK_CMP;
    { int64_t _r = (int64_t)(int32_t)eax * (int32_t)(ecx); /* 0x00621367: imul ecx */
      eax = (uint32_t)_r; edx = (uint32_t)(_r >> 32); uint32_t _ov = _r != (int32_t)_r;
      _flag_k = FK_EFLAGS; _flag_a = _ov ? 0x801u : 0u; _flag_b = 0; _cf = _ov; }
    if (3u) _cf = (((edx) >> 2) & 1u); /* 0x00621369: sar edx, 3 */
    if (3u) { _flag_a = recomp_flags_pack(((uint32_t)((int32_t)edx >> 3u)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    edx = (uint32_t)((int32_t)edx >> 3u);
    eax = edx; /* 0x0062136C: mov eax, edx */
    if (31u) _cf = (((eax) >> 30) & 1u); /* 0x0062136E: shr eax, 0x1f */
    if (31u) { _flag_a = recomp_flags_pack((eax >> 31u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax >> 31u; /* 0x0062136E: shr eax, 0x1f */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + edx; /* 0x00621371: add eax, edx */
    _flag_k = FK_ADD;
    /* cmp ebx, eax */ /* 0x00621373: cmp ebx, eax */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_AE(_flag_a, _flag_b)) goto L_0062138C; /* 0x00621375: jae 0x62138c */
L_00621377:
    /* cmp MEM8(esi + 0x16), 0 */ /* 0x00621377: cmp byte ptr [esi + 0x16], 0 */
    _flag_a = (uint32_t)(MEM8(esi + 0x16)) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_0062138C; /* 0x0062137B: jne 0x62138c */
L_0062137D:
    PUSH32(esp, ebx); /* 0x0062137D: push ebx */
    ecx = esi; /* 0x0062137E: mov ecx, esi */
    RECOMP_CALL(sub_00622760); /* 0x00621380: call 0x622760 */
    RECOMP_FLAGS_IN();
    edi = POP32_VAL(esp); /* 0x00621385: pop edi */
    esi = POP32_VAL(esp); /* 0x00621386: pop esi */
    ebx = POP32_VAL(esp); /* 0x00621387: pop ebx */
    esp = ebp; /* 0x00621388: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x0062138A: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x0062138B: ret  */
L_0062138C:
    edi = POP32_VAL(esp); /* 0x0062138C: pop edi */
    esi = POP32_VAL(esp); /* 0x0062138D: pop esi */
    { xmm_t _s = _xmm[0]; for (int _k = 0; _k < 4; _k++) _xmm[0].u32[_k] = _xmm[0].u32[_k] ^ _s.u32[_k]; } /* 0x0062138E: xorps xmm0, xmm0 */
    ebx = POP32_VAL(esp); /* 0x00621391: pop ebx */
    esp = ebp; /* 0x00621392: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x00621394: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x00621395: ret  */
    RECOMP_REGS_OUT();
}

void sub_006213A0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x006213A0u);

L_006213A0:
    PUSH32(esp, ebp); /* 0x006213A0: push ebp */
    ebp = esp; /* 0x006213A1: mov ebp, esp */
    PUSH32(esp, ecx); /* 0x006213A3: push ecx */
    PUSH32(esp, esi); /* 0x006213A4: push esi */
    esi = MEM32(0x870268); /* 0x006213A5: mov esi, dword ptr [0x870268] */
    edx = (uint32_t)((int32_t)MEM32(esi + 0x3D8) * (int32_t)0x1D4u); /* 0x006213AB: imul edx, dword ptr [esi + 0x3d8], 0x1d4 */
    eax = MEM32(esi + 0x504); /* 0x006213B5: mov eax, dword ptr [esi + 0x504] */
    ecx = MEM32(edx + eax + 0x18); /* 0x006213BB: mov ecx, dword ptr [edx + eax + 0x18] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(MEM32(edx + eax + 0x14));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ecx = ecx - MEM32(edx + eax + 0x14); /* 0x006213BF: sub ecx, dword ptr [edx + eax + 0x14] */
    _flag_k = FK_CMP;
    eax = 0x66666667u; /* 0x006213C3: mov eax, 0x66666667 */
    { int64_t _r = (int64_t)(int32_t)eax * (int32_t)(ecx); /* 0x006213C8: imul ecx */
      eax = (uint32_t)_r; edx = (uint32_t)(_r >> 32); uint32_t _ov = _r != (int32_t)_r;
      _flag_k = FK_EFLAGS; _flag_a = _ov ? 0x801u : 0u; _flag_b = 0; _cf = _ov; }
    if (3u) _cf = (((edx) >> 2) & 1u); /* 0x006213CA: sar edx, 3 */
    if (3u) { _flag_a = recomp_flags_pack(((uint32_t)((int32_t)edx >> 3u)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    edx = (uint32_t)((int32_t)edx >> 3u);
    eax = edx; /* 0x006213CD: mov eax, edx */
    if (31u) _cf = (((eax) >> 30) & 1u); /* 0x006213CF: shr eax, 0x1f */
    if (31u) { _flag_a = recomp_flags_pack((eax >> 31u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax >> 31u; /* 0x006213CF: shr eax, 0x1f */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + edx; /* 0x006213D2: add eax, edx */
    _flag_k = FK_ADD;
    /* cmp eax, 1 */ /* 0x006213D4: cmp eax, 1 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_006213ED; /* 0x006213D7: jbe 0x6213ed */
L_006213D9:
    /* cmp MEM8(esi + 0x16), 0 */ /* 0x006213D9: cmp byte ptr [esi + 0x16], 0 */
    _flag_a = (uint32_t)(MEM8(esi + 0x16)) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_006213ED; /* 0x006213DD: jne 0x6213ed */
L_006213DF:
    PUSH32(esp, 1); /* 0x006213DF: push 1 */
    ecx = esi; /* 0x006213E1: mov ecx, esi */
    RECOMP_CALL(sub_00622760); /* 0x006213E3: call 0x622760 */
    RECOMP_FLAGS_IN();
    esi = POP32_VAL(esp); /* 0x006213E8: pop esi */
    esp = ebp; /* 0x006213E9: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x006213EB: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x006213EC: ret  */
L_006213ED:
    { xmm_t _s = _xmm[0]; for (int _k = 0; _k < 4; _k++) _xmm[0].u32[_k] = _xmm[0].u32[_k] ^ _s.u32[_k]; } /* 0x006213ED: xorps xmm0, xmm0 */
    esi = POP32_VAL(esp); /* 0x006213F0: pop esi */
    esp = ebp; /* 0x006213F1: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x006213F3: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x006213F4: ret  */
    RECOMP_REGS_OUT();
}

void sub_00621400(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00621400u);

L_00621400:
    PUSH32(esp, ebp); /* 0x00621400: push ebp */
    ebp = esp; /* 0x00621401: mov ebp, esp */
    PUSH32(esp, ecx); /* 0x00621403: push ecx */
    PUSH32(esp, esi); /* 0x00621404: push esi */
    eax = ebp + 0x8; /* 0x00621405: lea eax, [ebp + 8] */
    PUSH32(esp, eax); /* 0x00621408: push eax */
    esi = ecx + 0x534; /* 0x00621409: lea esi, [ecx + 0x534] */
    eax = ebp + (-0x4); /* 0x0062140F: lea eax, [ebp - 4] */
    ecx = esi; /* 0x00621412: mov ecx, esi */
    PUSH32(esp, eax); /* 0x00621414: push eax */
    RECOMP_CALL(sub_00625D60); /* 0x00621415: call 0x625d60 */
    RECOMP_FLAGS_IN();
    eax = MEM32(ebp + (-0x4)); /* 0x0062141A: mov eax, dword ptr [ebp - 4] */
    /* cmp eax, MEM32(esi) */ /* 0x0062141D: cmp eax, dword ptr [esi] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(esi));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    esi = POP32_VAL(esp); /* 0x0062141F: pop esi */
    if (CMP_EQ(_flag_a, _flag_b)) goto L_0062142B; /* 0x00621420: je 0x62142b */
L_00621422:
    SET_LO8(eax, MEM8(eax + 0x9)); /* 0x00621422: mov al, byte ptr [eax + 9] */
    esp = ebp; /* 0x00621425: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x00621427: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x00621428: ret 4 */
L_0062142B:
    _flag_a = (uint32_t)(0) << 24; _flag_b = (uint32_t)(0) << 24;
    SET_LO8(eax, 0); /* 0x0062142B: xor al, al */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    esp = ebp; /* 0x0062142D: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x0062142F: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x00621430: ret 4 */
    RECOMP_REGS_OUT();
}
