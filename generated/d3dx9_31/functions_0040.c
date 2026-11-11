#define RECOMP_GENERATED_CODE

#include "functions.h"

void sub_171AAA1A(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x171AAA1Au);

L_171AAA1A:
    edi = edi; /* 0x171AAA1A: mov edi, edi */
    PUSH32(esp, ebp); /* 0x171AAA1C: push ebp */
    ebp = esp; /* 0x171AAA1D: mov ebp, esp */
    eax = MEM32(ebp + 0x8); /* 0x171AAA1F: mov eax, dword ptr [ebp + 8] */
    eax = MEM32(eax + 0x4); /* 0x171AAA22: mov eax, dword ptr [eax + 4] */
    ecx = MEM32(eax); /* 0x171AAA25: mov ecx, dword ptr [eax] */
    PUSH32(esp, eax); /* 0x171AAA27: push eax */
    RECOMP_ICALL(MEM32(ecx + 0x1C)); /* 0x171AAA28: call dword ptr [ecx + 0x1c] */
    RECOMP_FLAGS_IN();
    ebp = POP32_VAL(esp); /* 0x171AAA2B: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x171AAA2C: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_171AAA34(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x171AAA34u);

L_171AAA34:
    edi = edi; /* 0x171AAA34: mov edi, edi */
    PUSH32(esp, ebp); /* 0x171AAA36: push ebp */
    ebp = esp; /* 0x171AAA37: mov ebp, esp */
    eax = MEM32(ebp + 0x8); /* 0x171AAA39: mov eax, dword ptr [ebp + 8] */
    eax = MEM32(eax + 0x4); /* 0x171AAA3C: mov eax, dword ptr [eax + 4] */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x171AAA3F: push dword ptr [ebp + 0xc] */
    ecx = MEM32(eax); /* 0x171AAA42: mov ecx, dword ptr [eax] */
    PUSH32(esp, eax); /* 0x171AAA44: push eax */
    RECOMP_ICALL(MEM32(ecx + 0x20)); /* 0x171AAA45: call dword ptr [ecx + 0x20] */
    RECOMP_FLAGS_IN();
    ebp = POP32_VAL(esp); /* 0x171AAA48: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 12; { RECOMP_REGS_OUT(); return; } /* 0x171AAA49: ret 8 */
    RECOMP_REGS_OUT();
}

void sub_171AAA51(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x171AAA51u);

L_171AAA51:
    edi = edi; /* 0x171AAA51: mov edi, edi */
    PUSH32(esp, ebp); /* 0x171AAA53: push ebp */
    ebp = esp; /* 0x171AAA54: mov ebp, esp */
    eax = MEM32(ebp + 0x8); /* 0x171AAA56: mov eax, dword ptr [ebp + 8] */
    eax = MEM32(eax + 0x4); /* 0x171AAA59: mov eax, dword ptr [eax + 4] */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x171AAA5C: push dword ptr [ebp + 0xc] */
    ecx = MEM32(eax); /* 0x171AAA5F: mov ecx, dword ptr [eax] */
    PUSH32(esp, eax); /* 0x171AAA61: push eax */
    RECOMP_ICALL(MEM32(ecx + 0x28)); /* 0x171AAA62: call dword ptr [ecx + 0x28] */
    RECOMP_FLAGS_IN();
    ebp = POP32_VAL(esp); /* 0x171AAA65: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 12; { RECOMP_REGS_OUT(); return; } /* 0x171AAA66: ret 8 */
    RECOMP_REGS_OUT();
}

void sub_171AAA6E(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x171AAA6Eu);

L_171AAA6E:
    edi = edi; /* 0x171AAA6E: mov edi, edi */
    PUSH32(esp, ebp); /* 0x171AAA70: push ebp */
    ebp = esp; /* 0x171AAA71: mov ebp, esp */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x171AAA73: push dword ptr [ebp + 0x10] */
    eax = MEM32(ebp + 0x8); /* 0x171AAA76: mov eax, dword ptr [ebp + 8] */
    eax = MEM32(eax + 0x4); /* 0x171AAA79: mov eax, dword ptr [eax + 4] */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x171AAA7C: push dword ptr [ebp + 0xc] */
    ecx = MEM32(eax); /* 0x171AAA7F: mov ecx, dword ptr [eax] */
    PUSH32(esp, eax); /* 0x171AAA81: push eax */
    RECOMP_ICALL(MEM32(ecx + 0x2C)); /* 0x171AAA82: call dword ptr [ecx + 0x2c] */
    RECOMP_FLAGS_IN();
    ebp = POP32_VAL(esp); /* 0x171AAA85: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 16; { RECOMP_REGS_OUT(); return; } /* 0x171AAA86: ret 0xc */
    RECOMP_REGS_OUT();
}

void sub_171AAA8E(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x171AAA8Eu);

L_171AAA8E:
    edi = edi; /* 0x171AAA8E: mov edi, edi */
    PUSH32(esp, ebp); /* 0x171AAA90: push ebp */
    ebp = esp; /* 0x171AAA91: mov ebp, esp */
    eax = MEM32(ebp + 0x10); /* 0x171AAA93: mov eax, dword ptr [ebp + 0x10] */
    /* test eax, eax */ /* 0x171AAA96: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_171AAAEA; /* 0x171AAA98: je 0x171aaaea */
L_171AAA9A:
    _flag_a = (uint32_t)(MEM32(eax)); _flag_b = (uint32_t)(0);
    MEM32(eax) = MEM32(eax) & 0; /* 0x171AAA9A: and dword ptr [eax], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, esi); /* 0x171AAA9D: push esi */
    esi = MEM32(ebp + 0xC); /* 0x171AAA9E: mov esi, dword ptr [ebp + 0xc] */
    PUSH32(esp, edi); /* 0x171AAAA1: push edi */
    PUSH32(esp, 4); /* 0x171AAAA2: push 4 */
    ecx = POP32_VAL(esp); /* 0x171AAAA4: pop ecx */
    edi = 0x1702AA2Cu; /* 0x171AAAA5: mov edi, 0x1702aa2c */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edx = 0; /* 0x171AAAAA: xor edx, edx */
    _cf = 0;
    _flag_k = FK_TEST;
    if (ecx) { uint32_t _a = 0, _b = 0; while (ecx) { _a = MEM32(esi); _b = MEM32(edi); esi += (_df * 4); edi += (_df * 4); ecx--; if (_a != _b) break; } _flag_a = _a; _flag_b = _b; _cf = (uint32_t)CMP_B(_a, _b); _flag_k = FK_CMP; } /* 0x171AAAAC: repe cmpsd dword ptr [esi], dword ptr es:[edi] */
    if (recomp_cond_cf(_flag_k, _flag_a, _flag_b, CC_E, _cf)) goto L_171AAAD9; /* 0x171AAAAE: je 0x171aaad9 */
L_171AAAB0:
    esi = MEM32(ebp + 0xC); /* 0x171AAAB0: mov esi, dword ptr [ebp + 0xc] */
    PUSH32(esp, 4); /* 0x171AAAB3: push 4 */
    ecx = POP32_VAL(esp); /* 0x171AAAB5: pop ecx */
    edi = 0x17001C10u; /* 0x171AAAB6: mov edi, 0x17001c10 */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edx = 0; /* 0x171AAABB: xor edx, edx */
    _cf = 0;
    _flag_k = FK_TEST;
    if (ecx) { uint32_t _a = 0, _b = 0; while (ecx) { _a = MEM32(esi); _b = MEM32(edi); esi += (_df * 4); edi += (_df * 4); ecx--; if (_a != _b) break; } _flag_a = _a; _flag_b = _b; _cf = (uint32_t)CMP_B(_a, _b); _flag_k = FK_CMP; } /* 0x171AAABD: repe cmpsd dword ptr [esi], dword ptr es:[edi] */
    if (recomp_cond_cf(_flag_k, _flag_a, _flag_b, CC_E, _cf)) goto L_171AAAD9; /* 0x171AAABF: je 0x171aaad9 */
L_171AAAC1:
    esi = MEM32(ebp + 0xC); /* 0x171AAAC1: mov esi, dword ptr [ebp + 0xc] */
    PUSH32(esp, 4); /* 0x171AAAC4: push 4 */
    ecx = POP32_VAL(esp); /* 0x171AAAC6: pop ecx */
    edi = 0x17001BE0u; /* 0x171AAAC7: mov edi, 0x17001be0 */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edx = 0; /* 0x171AAACC: xor edx, edx */
    _cf = 0;
    _flag_k = FK_TEST;
    if (ecx) { uint32_t _a = 0, _b = 0; while (ecx) { _a = MEM32(esi); _b = MEM32(edi); esi += (_df * 4); edi += (_df * 4); ecx--; if (_a != _b) break; } _flag_a = _a; _flag_b = _b; _cf = (uint32_t)CMP_B(_a, _b); _flag_k = FK_CMP; } /* 0x171AAACE: repe cmpsd dword ptr [esi], dword ptr es:[edi] */
    if (recomp_cond_cf(_flag_k, _flag_a, _flag_b, CC_E, _cf)) goto L_171AAAD9; /* 0x171AAAD0: je 0x171aaad9 */
L_171AAAD2:
    eax = 0x80004002u; /* 0x171AAAD2: mov eax, 0x80004002 */
    goto L_171AAAE6; /* 0x171AAAD7: jmp 0x171aaae6 */
L_171AAAD9:
    ecx = MEM32(ebp + 0x8); /* 0x171AAAD9: mov ecx, dword ptr [ebp + 8] */
    MEM32(eax) = ecx; /* 0x171AAADC: mov dword ptr [eax], ecx */
    eax = MEM32(ecx); /* 0x171AAADE: mov eax, dword ptr [ecx] */
    PUSH32(esp, ecx); /* 0x171AAAE0: push ecx */
    RECOMP_ICALL(MEM32(eax + 0x4)); /* 0x171AAAE1: call dword ptr [eax + 4] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x171AAAE4: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
L_171AAAE6:
    edi = POP32_VAL(esp); /* 0x171AAAE6: pop edi */
    esi = POP32_VAL(esp); /* 0x171AAAE7: pop esi */
    goto L_171AAAEF; /* 0x171AAAE8: jmp 0x171aaaef */
L_171AAAEA:
    eax = 0x80004003u; /* 0x171AAAEA: mov eax, 0x80004003 */
L_171AAAEF:
    ebp = POP32_VAL(esp); /* 0x171AAAEF: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 16; { RECOMP_REGS_OUT(); return; } /* 0x171AAAF0: ret 0xc */
    RECOMP_REGS_OUT();
}

void sub_171AAAF8(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x171AAAF8u);

L_171AAAF8:
    edi = edi; /* 0x171AAAF8: mov edi, edi */
    PUSH32(esp, ebp); /* 0x171AAAFA: push ebp */
    ebp = esp; /* 0x171AAAFB: mov ebp, esp */
    PUSH32(esp, esi); /* 0x171AAAFD: push esi */
    esi = ecx; /* 0x171AAAFE: mov esi, ecx */
    eax = MEM32(esi + 0x8); /* 0x171AAB00: mov eax, dword ptr [esi + 8] */
    PUSH32(esp, edi); /* 0x171AAB03: push edi */
    edi = MEM32(ebp + 0x8); /* 0x171AAB04: mov edi, dword ptr [ebp + 8] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x38u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 0x38u; /* 0x171AAB07: add eax, 0x38 */
    _flag_k = FK_ADD;
L_171AAB0A:
    SET_LO8(edx, MEM8(eax)); /* 0x171AAB0A: mov dl, byte ptr [eax] */
    SET_LO8(ecx, LO8(edx)); /* 0x171AAB0C: mov cl, dl */
    /* cmp LO8(edx), MEM8(edi) */ /* 0x171AAB0E: cmp dl, byte ptr [edi] */
    _flag_a = (uint32_t)(LO8(edx)) << 24; _flag_b = (uint32_t)(MEM8(edi)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_171AAB2C; /* 0x171AAB10: jne 0x171aab2c */
L_171AAB12:
    /* test LO8(ecx), LO8(ecx) */ /* 0x171AAB12: test cl, cl */
    _flag_a = (uint32_t)(LO8(ecx)) << 24; _flag_b = (uint32_t)(LO8(ecx)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_171AAB28; /* 0x171AAB14: je 0x171aab28 */
L_171AAB16:
    SET_LO8(edx, MEM8(eax + 0x1)); /* 0x171AAB16: mov dl, byte ptr [eax + 1] */
    SET_LO8(ecx, LO8(edx)); /* 0x171AAB19: mov cl, dl */
    /* cmp LO8(edx), MEM8(edi + 0x1) */ /* 0x171AAB1B: cmp dl, byte ptr [edi + 1] */
    _flag_a = (uint32_t)(LO8(edx)) << 24; _flag_b = (uint32_t)(MEM8(edi + 0x1)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_171AAB2C; /* 0x171AAB1E: jne 0x171aab2c */
L_171AAB20:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x171AAB20: inc eax */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x171AAB21: inc eax */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(1);
    edi = edi + 1; /* 0x171AAB22: inc edi */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(1);
    edi = edi + 1; /* 0x171AAB23: inc edi */
    _flag_k = FK_INC;
    /* test LO8(ecx), LO8(ecx) */ /* 0x171AAB24: test cl, cl */
    _flag_a = (uint32_t)(LO8(ecx)) << 24; _flag_b = (uint32_t)(LO8(ecx)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_171AAB0A; /* 0x171AAB26: jne 0x171aab0a */
L_171AAB28:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x171AAB28: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_171AAB31; /* 0x171AAB2A: jmp 0x171aab31 */
L_171AAB2C:
    { uint32_t _sa = eax, _sb = eax, _sc = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x171AAB2C: sbb eax, eax */
      eax = _sc ? 0xFFFFFFFFu : 0;
      _flag_a = recomp_flags_sbb(_sa, _sb, _sc); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    { uint32_t _sa = eax, _sb = 0xFFFFFFFFu, _sc = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x171AAB2E: sbb eax, -1 */
      eax = _sa - _sb - _sc;
      _flag_a = recomp_flags_sbb(_sa, _sb, _sc); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
L_171AAB31:
    /* test eax, eax */ /* 0x171AAB31: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_171AAB3E; /* 0x171AAB33: jne 0x171aab3e */
L_171AAB35:
    eax = MEM32(ebp + 0xC); /* 0x171AAB35: mov eax, dword ptr [ebp + 0xc] */
    MEM32(eax) = esi; /* 0x171AAB38: mov dword ptr [eax], esi */
L_171AAB3A:
    SET_LO8(eax, 1); /* 0x171AAB3A: mov al, 1 */
    goto L_171AAB62; /* 0x171AAB3C: jmp 0x171aab62 */
L_171AAB3E:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edi = 0; /* 0x171AAB3E: xor edi, edi */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp MEM32(esi + 0x14), edi */ /* 0x171AAB40: cmp dword ptr [esi + 0x14], edi */
    _flag_a = (uint32_t)(MEM32(esi + 0x14)); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_171AAB60; /* 0x171AAB43: jbe 0x171aab60 */
L_171AAB45:
    eax = MEM32(esi + 0x20); /* 0x171AAB45: mov eax, dword ptr [esi + 0x20] */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x171AAB48: push dword ptr [ebp + 0xc] */
    ecx = MEM32(eax + edi * 4); /* 0x171AAB4B: mov ecx, dword ptr [eax + edi*4] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x171AAB4E: push dword ptr [ebp + 8] */
    eax = MEM32(ecx); /* 0x171AAB51: mov eax, dword ptr [ecx] */
    RECOMP_ICALL(MEM32(eax + 0x3C)); /* 0x171AAB53: call dword ptr [eax + 0x3c] */
    RECOMP_FLAGS_IN();
    /* test LO8(eax), LO8(eax) */ /* 0x171AAB56: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_171AAB3A; /* 0x171AAB58: jne 0x171aab3a */
L_171AAB5A:
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(1);
    edi = edi + 1; /* 0x171AAB5A: inc edi */
    _flag_k = FK_INC;
    /* cmp edi, MEM32(esi + 0x14) */ /* 0x171AAB5B: cmp edi, dword ptr [esi + 0x14] */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(MEM32(esi + 0x14));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_171AAB45; /* 0x171AAB5E: jb 0x171aab45 */
L_171AAB60:
    _flag_a = (uint32_t)(0) << 24; _flag_b = (uint32_t)(0) << 24;
    SET_LO8(eax, 0); /* 0x171AAB60: xor al, al */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
L_171AAB62:
    edi = POP32_VAL(esp); /* 0x171AAB62: pop edi */
    esi = POP32_VAL(esp); /* 0x171AAB63: pop esi */
    ebp = POP32_VAL(esp); /* 0x171AAB64: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 12; { RECOMP_REGS_OUT(); return; } /* 0x171AAB65: ret 8 */
    RECOMP_REGS_OUT();
}

void sub_171AAB6D(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x171AAB6Du);

L_171AAB6D:
    edi = edi; /* 0x171AAB6D: mov edi, edi */
    PUSH32(esp, ebp); /* 0x171AAB6F: push ebp */
    ebp = esp; /* 0x171AAB70: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x1Cu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x1Cu; /* 0x171AAB72: sub esp, 0x1c */
    _flag_k = FK_CMP;
    edx = MEM32(ebp + 0x8); /* 0x171AAB75: mov edx, dword ptr [ebp + 8] */
    eax = MEM32(0x1723C894); /* 0x171AAB78: mov eax, dword ptr [0x1723c894] */
    PUSH32(esp, ebx); /* 0x171AAB7D: push ebx */
    PUSH32(esp, esi); /* 0x171AAB7E: push esi */
    PUSH32(esp, edi); /* 0x171AAB7F: push edi */
    ebx = ecx; /* 0x171AAB80: mov ebx, ecx */
    esi = MEM32(ebx + 0x8); /* 0x171AAB82: mov esi, dword ptr [ebx + 8] */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(0x20u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esi = esi + 0x20u; /* 0x171AAB85: add esi, 0x20 */
    _flag_k = FK_ADD;
    edi = ebp + (-0x14); /* 0x171AAB88: lea edi, [ebp - 0x14] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x171AAB8B: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x171AAB8C: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x171AAB8D: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x171AAB8E: movsd dword ptr es:[edi], dword ptr [esi] */
    PUSH32(esp, 4); /* 0x171AAB8F: push 4 */
    edi = edx; /* 0x171AAB91: mov edi, edx */
    MEM32(ebp + (-0x18)) = edx; /* 0x171AAB93: mov dword ptr [ebp - 0x18], edx */
    MEM32(ebp + (-0x4)) = eax; /* 0x171AAB96: mov dword ptr [ebp - 4], eax */
    eax = MEM32(ebp + 0xC); /* 0x171AAB99: mov eax, dword ptr [ebp + 0xc] */
    ecx = POP32_VAL(esp); /* 0x171AAB9C: pop ecx */
    esi = ebp + (-0x14); /* 0x171AAB9D: lea esi, [ebp - 0x14] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edx = 0; /* 0x171AABA0: xor edx, edx */
    _cf = 0;
    _flag_k = FK_TEST;
    if (ecx) { uint32_t _a = 0, _b = 0; while (ecx) { _a = MEM32(esi); _b = MEM32(edi); esi += (_df * 4); edi += (_df * 4); ecx--; if (_a != _b) break; } _flag_a = _a; _flag_b = _b; _cf = (uint32_t)CMP_B(_a, _b); _flag_k = FK_CMP; } /* 0x171AABA2: repe cmpsd dword ptr [esi], dword ptr es:[edi] */
    MEM32(ebp + (-0x1C)) = eax; /* 0x171AABA4: mov dword ptr [ebp - 0x1c], eax */
    if (recomp_cond_cf(_flag_k, _flag_a, _flag_b, CC_NE, _cf)) goto L_171AABAF; /* 0x171AABA7: jne 0x171aabaf */
L_171AABA9:
    MEM32(eax) = ebx; /* 0x171AABA9: mov dword ptr [eax], ebx */
L_171AABAB:
    SET_LO8(eax, 1); /* 0x171AABAB: mov al, 1 */
    goto L_171AABB8; /* 0x171AABAD: jmp 0x171aabb8 */
L_171AABAF:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    esi = 0; /* 0x171AABAF: xor esi, esi */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp MEM32(ebx + 0x14), esi */ /* 0x171AABB1: cmp dword ptr [ebx + 0x14], esi */
    _flag_a = (uint32_t)(MEM32(ebx + 0x14)); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_A(_flag_a, _flag_b)) goto L_171AABCA; /* 0x171AABB4: ja 0x171aabca */
L_171AABB6:
    _flag_a = (uint32_t)(0) << 24; _flag_b = (uint32_t)(0) << 24;
    SET_LO8(eax, 0); /* 0x171AABB6: xor al, al */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
L_171AABB8:
    ecx = MEM32(ebp + (-0x4)); /* 0x171AABB8: mov ecx, dword ptr [ebp - 4] */
    edi = POP32_VAL(esp); /* 0x171AABBB: pop edi */
    esi = POP32_VAL(esp); /* 0x171AABBC: pop esi */
    ebx = POP32_VAL(esp); /* 0x171AABBD: pop ebx */
    RECOMP_CALL(sub_1721B76C); /* 0x171AABBE: call 0x1721b76c */
    RECOMP_FLAGS_IN();
    esp = ebp; ebp = POP32_VAL(esp); /* 0x171AABC3: leave  */
    RECOMP_FLAGS_OUT(); esp += 12; { RECOMP_REGS_OUT(); return; } /* 0x171AABC4: ret 8 */
L_171AABC7:
    eax = MEM32(ebp + (-0x1C)); /* 0x171AABC7: mov eax, dword ptr [ebp - 0x1c] */
L_171AABCA:
    ecx = MEM32(ebx + 0x20); /* 0x171AABCA: mov ecx, dword ptr [ebx + 0x20] */
    ecx = MEM32(ecx + esi * 4); /* 0x171AABCD: mov ecx, dword ptr [ecx + esi*4] */
    edx = MEM32(ecx); /* 0x171AABD0: mov edx, dword ptr [ecx] */
    PUSH32(esp, eax); /* 0x171AABD2: push eax */
    PUSH32(esp, MEM32(ebp + (-0x18))); /* 0x171AABD3: push dword ptr [ebp - 0x18] */
    RECOMP_ICALL(MEM32(edx + 0x38)); /* 0x171AABD6: call dword ptr [edx + 0x38] */
    RECOMP_FLAGS_IN();
    /* test LO8(eax), LO8(eax) */ /* 0x171AABD9: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_171AABAB; /* 0x171AABDB: jne 0x171aabab */
L_171AABDD:
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi + 1; /* 0x171AABDD: inc esi */
    _flag_k = FK_INC;
    /* cmp esi, MEM32(ebx + 0x14) */ /* 0x171AABDE: cmp esi, dword ptr [ebx + 0x14] */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(MEM32(ebx + 0x14));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_171AABC7; /* 0x171AABE1: jb 0x171aabc7 */
L_171AABE3:
    RECOMP_BACKEDGE();
    goto L_171AABB6; /* 0x171AABE3: jmp 0x171aabb6 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    RECOMP_REGS_OUT();
}

void sub_171AABEA(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x171AABEAu);

L_171AABEA:
    edi = edi; /* 0x171AABEA: mov edi, edi */
    PUSH32(esp, ebp); /* 0x171AABEC: push ebp */
    ebp = esp; /* 0x171AABED: mov ebp, esp */
    PUSH32(esp, ebx); /* 0x171AABEF: push ebx */
    ebx = MEM32(ebp + 0x8); /* 0x171AABF0: mov ebx, dword ptr [ebp + 8] */
    PUSH32(esp, esi); /* 0x171AABF3: push esi */
    esi = ecx; /* 0x171AABF4: mov esi, ecx */
    /* cmp MEM32(esi + 0x8), ebx */ /* 0x171AABF6: cmp dword ptr [esi + 8], ebx */
    _flag_a = (uint32_t)(MEM32(esi + 0x8)); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_171AAC04; /* 0x171AABF9: jne 0x171aac04 */
L_171AABFB:
    eax = MEM32(ebp + 0xC); /* 0x171AABFB: mov eax, dword ptr [ebp + 0xc] */
    MEM32(eax) = esi; /* 0x171AABFE: mov dword ptr [eax], esi */
    SET_LO8(eax, 1); /* 0x171AAC00: mov al, 1 */
    goto L_171AAC28; /* 0x171AAC02: jmp 0x171aac28 */
L_171AAC04:
    PUSH32(esp, edi); /* 0x171AAC04: push edi */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edi = 0; /* 0x171AAC05: xor edi, edi */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp MEM32(esi + 0x14), edi */ /* 0x171AAC07: cmp dword ptr [esi + 0x14], edi */
    _flag_a = (uint32_t)(MEM32(esi + 0x14)); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_171AAC25; /* 0x171AAC0A: jbe 0x171aac25 */
L_171AAC0C:
    eax = MEM32(esi + 0x20); /* 0x171AAC0C: mov eax, dword ptr [esi + 0x20] */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x171AAC0F: push dword ptr [ebp + 0xc] */
    ecx = MEM32(eax + edi * 4); /* 0x171AAC12: mov ecx, dword ptr [eax + edi*4] */
    eax = MEM32(ecx); /* 0x171AAC15: mov eax, dword ptr [ecx] */
    PUSH32(esp, ebx); /* 0x171AAC17: push ebx */
    RECOMP_ICALL(MEM32(eax + 0x34)); /* 0x171AAC18: call dword ptr [eax + 0x34] */
    RECOMP_FLAGS_IN();
    /* test LO8(eax), LO8(eax) */ /* 0x171AAC1B: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_171AAC2E; /* 0x171AAC1D: jne 0x171aac2e */
L_171AAC1F:
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(1);
    edi = edi + 1; /* 0x171AAC1F: inc edi */
    _flag_k = FK_INC;
    /* cmp edi, MEM32(esi + 0x14) */ /* 0x171AAC20: cmp edi, dword ptr [esi + 0x14] */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(MEM32(esi + 0x14));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_171AAC0C; /* 0x171AAC23: jb 0x171aac0c */
L_171AAC25:
    _flag_a = (uint32_t)(0) << 24; _flag_b = (uint32_t)(0) << 24;
    SET_LO8(eax, 0); /* 0x171AAC25: xor al, al */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
L_171AAC27:
    edi = POP32_VAL(esp); /* 0x171AAC27: pop edi */
L_171AAC28:
    esi = POP32_VAL(esp); /* 0x171AAC28: pop esi */
    ebx = POP32_VAL(esp); /* 0x171AAC29: pop ebx */
    ebp = POP32_VAL(esp); /* 0x171AAC2A: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 12; { RECOMP_REGS_OUT(); return; } /* 0x171AAC2B: ret 8 */
L_171AAC2E:
    SET_LO8(eax, 1); /* 0x171AAC2E: mov al, 1 */
    RECOMP_BACKEDGE();
    goto L_171AAC27; /* 0x171AAC30: jmp 0x171aac27 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    RECOMP_REGS_OUT();
}

void sub_171AAC37(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x171AAC37u);

L_171AAC37:
    edi = edi; /* 0x171AAC37: mov edi, edi */
    PUSH32(esp, ebp); /* 0x171AAC39: push ebp */
    ebp = esp; /* 0x171AAC3A: mov ebp, esp */
    PUSH32(esp, ecx); /* 0x171AAC3C: push ecx */
    PUSH32(esp, ecx); /* 0x171AAC3D: push ecx */
    PUSH32(esp, esi); /* 0x171AAC3E: push esi */
    PUSH32(esp, edi); /* 0x171AAC3F: push edi */
    edi = MEM32(ebp + 0xC); /* 0x171AAC40: mov edi, dword ptr [ebp + 0xc] */
    /* test edi, edi */ /* 0x171AAC43: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_171AAC71; /* 0x171AAC45: je 0x171aac71 */
L_171AAC47:
    esi = MEM32(ebp + 0x10); /* 0x171AAC47: mov esi, dword ptr [ebp + 0x10] */
    /* test esi, esi */ /* 0x171AAC4A: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_171AAC71; /* 0x171AAC4C: je 0x171aac71 */
L_171AAC4E:
    ecx = MEM32(ebp + 0x8); /* 0x171AAC4E: mov ecx, dword ptr [ebp + 8] */
    eax = MEM32(ecx + 0x8); /* 0x171AAC51: mov eax, dword ptr [ecx + 8] */
    edx = MEM32(eax); /* 0x171AAC54: mov edx, dword ptr [eax] */
    PUSH32(esp, ebx); /* 0x171AAC56: push ebx */
    ebx = MEM32(eax + 0x4); /* 0x171AAC57: mov ebx, dword ptr [eax + 4] */
    eax = MEM32(eax + 0x8); /* 0x171AAC5A: mov eax, dword ptr [eax + 8] */
    MEM32(edi) = eax; /* 0x171AAC5D: mov dword ptr [edi], eax */
    eax = MEM32(ecx + 0x4); /* 0x171AAC5F: mov eax, dword ptr [ecx + 4] */
    eax = MEM32(eax + 0x20); /* 0x171AAC62: mov eax, dword ptr [eax + 0x20] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + edx; /* 0x171AAC65: add eax, edx */
    _flag_k = FK_ADD;
    MEM32(ebp + (-0x4)) = ebx; /* 0x171AAC67: mov dword ptr [ebp - 4], ebx */
    MEM32(esi) = eax; /* 0x171AAC6A: mov dword ptr [esi], eax */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x171AAC6C: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    ebx = POP32_VAL(esp); /* 0x171AAC6E: pop ebx */
    goto L_171AAC76; /* 0x171AAC6F: jmp 0x171aac76 */
L_171AAC71:
    eax = 0x88760385u; /* 0x171AAC71: mov eax, 0x88760385 */
L_171AAC76:
    edi = POP32_VAL(esp); /* 0x171AAC76: pop edi */
    esi = POP32_VAL(esp); /* 0x171AAC77: pop esi */
    esp = ebp; ebp = POP32_VAL(esp); /* 0x171AAC78: leave  */
    RECOMP_FLAGS_OUT(); esp += 16; { RECOMP_REGS_OUT(); return; } /* 0x171AAC79: ret 0xc */
    RECOMP_REGS_OUT();
}

void sub_171AAC81(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x171AAC81u);

L_171AAC81:
    edi = edi; /* 0x171AAC81: mov edi, edi */
    PUSH32(esp, ebp); /* 0x171AAC83: push ebp */
    ebp = esp; /* 0x171AAC84: mov ebp, esp */
    PUSH32(esp, edi); /* 0x171AAC86: push edi */
    edi = MEM32(ebp + 0xC); /* 0x171AAC87: mov edi, dword ptr [ebp + 0xc] */
    /* test edi, edi */ /* 0x171AAC8A: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_171AACA1; /* 0x171AAC8C: je 0x171aaca1 */
L_171AAC8E:
    eax = MEM32(ebp + 0x8); /* 0x171AAC8E: mov eax, dword ptr [ebp + 8] */
    PUSH32(esp, esi); /* 0x171AAC91: push esi */
    esi = MEM32(eax + 0x10); /* 0x171AAC92: mov esi, dword ptr [eax + 0x10] */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esi = esi + 8; /* 0x171AAC95: add esi, 8 */
    _flag_k = FK_ADD;
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x171AAC98: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x171AAC99: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x171AAC9A: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x171AAC9B: movsd dword ptr es:[edi], dword ptr [esi] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x171AAC9C: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    esi = POP32_VAL(esp); /* 0x171AAC9E: pop esi */
    goto L_171AACA6; /* 0x171AAC9F: jmp 0x171aaca6 */
L_171AACA1:
    eax = 0x88760385u; /* 0x171AACA1: mov eax, 0x88760385 */
L_171AACA6:
    edi = POP32_VAL(esp); /* 0x171AACA6: pop edi */
    ebp = POP32_VAL(esp); /* 0x171AACA7: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 12; { RECOMP_REGS_OUT(); return; } /* 0x171AACA8: ret 8 */
    RECOMP_REGS_OUT();
}

void sub_171AACB0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x171AACB0u);

L_171AACB0:
    edi = edi; /* 0x171AACB0: mov edi, edi */
    PUSH32(esp, ebp); /* 0x171AACB2: push ebp */
    ebp = esp; /* 0x171AACB3: mov ebp, esp */
    eax = MEM32(ebp + 0xC); /* 0x171AACB5: mov eax, dword ptr [ebp + 0xc] */
    /* test eax, eax */ /* 0x171AACB8: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_171AACC8; /* 0x171AACBA: je 0x171aacc8 */
L_171AACBC:
    ecx = MEM32(ebp + 0x8); /* 0x171AACBC: mov ecx, dword ptr [ebp + 8] */
    ecx = MEM32(ecx + 0x14); /* 0x171AACBF: mov ecx, dword ptr [ecx + 0x14] */
    MEM32(eax) = ecx; /* 0x171AACC2: mov dword ptr [eax], ecx */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x171AACC4: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_171AACCD; /* 0x171AACC6: jmp 0x171aaccd */
L_171AACC8:
    eax = 0x88760385u; /* 0x171AACC8: mov eax, 0x88760385 */
L_171AACCD:
    ebp = POP32_VAL(esp); /* 0x171AACCD: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 12; { RECOMP_REGS_OUT(); return; } /* 0x171AACCE: ret 8 */
    RECOMP_REGS_OUT();
}

void sub_171AACD6(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x171AACD6u);

L_171AACD6:
    edi = edi; /* 0x171AACD6: mov edi, edi */
    PUSH32(esp, ebp); /* 0x171AACD8: push ebp */
    ebp = esp; /* 0x171AACD9: mov ebp, esp */
    /* cmp MEM32(ebp + 0x10), 0 */ /* 0x171AACDB: cmp dword ptr [ebp + 0x10], 0 */
    _flag_a = (uint32_t)(MEM32(ebp + 0x10)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_171AAD0A; /* 0x171AACDF: je 0x171aad0a */
L_171AACE1:
    eax = MEM32(ebp + 0xC); /* 0x171AACE1: mov eax, dword ptr [ebp + 0xc] */
    ecx = MEM32(ebp + 0x8); /* 0x171AACE4: mov ecx, dword ptr [ebp + 8] */
    /* cmp eax, MEM32(ecx + 0x14) */ /* 0x171AACE7: cmp eax, dword ptr [ecx + 0x14] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(ecx + 0x14));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_AE(_flag_a, _flag_b)) goto L_171AAD03; /* 0x171AACEA: jae 0x171aad03 */
L_171AACEC:
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x171AACEC: push dword ptr [ebp + 0x10] */
    ecx = MEM32(ecx + 0x20); /* 0x171AACEF: mov ecx, dword ptr [ecx + 0x20] */
    eax = MEM32(ecx + eax * 4); /* 0x171AACF2: mov eax, dword ptr [ecx + eax*4] */
    ecx = MEM32(eax); /* 0x171AACF5: mov ecx, dword ptr [eax] */
    PUSH32(esp, 0x17001C00u); /* 0x171AACF7: push 0x17001c00 */
    PUSH32(esp, eax); /* 0x171AACFC: push eax */
    RECOMP_ICALL(MEM32(ecx)); /* 0x171AACFD: call dword ptr [ecx] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x171AACFF: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_171AAD0F; /* 0x171AAD01: jmp 0x171aad0f */
L_171AAD03:
    eax = 0x88760393u; /* 0x171AAD03: mov eax, 0x88760393 */
    goto L_171AAD0F; /* 0x171AAD08: jmp 0x171aad0f */
L_171AAD0A:
    eax = 0x88760385u; /* 0x171AAD0A: mov eax, 0x88760385 */
L_171AAD0F:
    ebp = POP32_VAL(esp); /* 0x171AAD0F: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 16; { RECOMP_REGS_OUT(); return; } /* 0x171AAD10: ret 0xc */
    RECOMP_REGS_OUT();
}

void sub_171AAD18(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x171AAD18u);

L_171AAD18:
    edi = edi; /* 0x171AAD18: mov edi, edi */
    PUSH32(esp, ebp); /* 0x171AAD1A: push ebp */
    ebp = esp; /* 0x171AAD1B: mov ebp, esp */
    eax = MEM32(ebp + 0xC); /* 0x171AAD1D: mov eax, dword ptr [ebp + 0xc] */
    /* test eax, eax */ /* 0x171AAD20: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_171AAD30; /* 0x171AAD22: je 0x171aad30 */
L_171AAD24:
    ecx = MEM32(ebp + 0x8); /* 0x171AAD24: mov ecx, dword ptr [ebp + 8] */
    ecx = MEM32(ecx + 0x44); /* 0x171AAD27: mov ecx, dword ptr [ecx + 0x44] */
    MEM32(eax) = ecx; /* 0x171AAD2A: mov dword ptr [eax], ecx */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x171AAD2C: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_171AAD35; /* 0x171AAD2E: jmp 0x171aad35 */
L_171AAD30:
    eax = 0x88760385u; /* 0x171AAD30: mov eax, 0x88760385 */
L_171AAD35:
    ebp = POP32_VAL(esp); /* 0x171AAD35: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 12; { RECOMP_REGS_OUT(); return; } /* 0x171AAD36: ret 8 */
    RECOMP_REGS_OUT();
}

void sub_171AAD3E(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x171AAD3Eu);

L_171AAD3E:
    edi = edi; /* 0x171AAD3E: mov edi, edi */
    PUSH32(esp, ebp); /* 0x171AAD40: push ebp */
    ebp = esp; /* 0x171AAD41: mov ebp, esp */
    /* cmp MEM32(ebp + 0x10), 0 */ /* 0x171AAD43: cmp dword ptr [ebp + 0x10], 0 */
    _flag_a = (uint32_t)(MEM32(ebp + 0x10)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_171AAD72; /* 0x171AAD47: je 0x171aad72 */
L_171AAD49:
    eax = MEM32(ebp + 0xC); /* 0x171AAD49: mov eax, dword ptr [ebp + 0xc] */
    ecx = MEM32(ebp + 0x8); /* 0x171AAD4C: mov ecx, dword ptr [ebp + 8] */
    /* cmp eax, MEM32(ecx + 0x44) */ /* 0x171AAD4F: cmp eax, dword ptr [ecx + 0x44] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(ecx + 0x44));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_AE(_flag_a, _flag_b)) goto L_171AAD6B; /* 0x171AAD52: jae 0x171aad6b */
L_171AAD54:
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x171AAD54: push dword ptr [ebp + 0x10] */
    ecx = MEM32(ecx + 0x50); /* 0x171AAD57: mov ecx, dword ptr [ecx + 0x50] */
    eax = MEM32(ecx + eax * 4); /* 0x171AAD5A: mov eax, dword ptr [ecx + eax*4] */
    ecx = MEM32(eax); /* 0x171AAD5D: mov ecx, dword ptr [eax] */
    PUSH32(esp, 0x17001C00u); /* 0x171AAD5F: push 0x17001c00 */
    PUSH32(esp, eax); /* 0x171AAD64: push eax */
    RECOMP_ICALL(MEM32(ecx)); /* 0x171AAD65: call dword ptr [ecx] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x171AAD67: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_171AAD77; /* 0x171AAD69: jmp 0x171aad77 */
L_171AAD6B:
    eax = 0x88760393u; /* 0x171AAD6B: mov eax, 0x88760393 */
    goto L_171AAD77; /* 0x171AAD70: jmp 0x171aad77 */
L_171AAD72:
    eax = 0x88760385u; /* 0x171AAD72: mov eax, 0x88760385 */
L_171AAD77:
    ebp = POP32_VAL(esp); /* 0x171AAD77: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 16; { RECOMP_REGS_OUT(); return; } /* 0x171AAD78: ret 0xc */
    RECOMP_REGS_OUT();
}

void sub_171AAD80(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x171AAD80u);

L_171AAD80:
    edi = edi; /* 0x171AAD80: mov edi, edi */
    PUSH32(esp, ebp); /* 0x171AAD82: push ebp */
    ebp = esp; /* 0x171AAD83: mov ebp, esp */
    PUSH32(esp, esi); /* 0x171AAD85: push esi */
    PUSH32(esp, edi); /* 0x171AAD86: push edi */
    esi = ecx; /* 0x171AAD87: mov esi, ecx */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edi = 0; /* 0x171AAD89: xor edi, edi */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp MEM32(esi + 0x44), edi */ /* 0x171AAD8B: cmp dword ptr [esi + 0x44], edi */
    _flag_a = (uint32_t)(MEM32(esi + 0x44)); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_171AADAB; /* 0x171AAD8E: jbe 0x171aadab */
L_171AAD90:
    eax = MEM32(esi + 0x50); /* 0x171AAD90: mov eax, dword ptr [esi + 0x50] */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x171AAD93: push dword ptr [ebp + 0xc] */
    ecx = MEM32(eax + edi * 4); /* 0x171AAD96: mov ecx, dword ptr [eax + edi*4] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x171AAD99: push dword ptr [ebp + 8] */
    eax = MEM32(ecx); /* 0x171AAD9C: mov eax, dword ptr [ecx] */
    RECOMP_ICALL(MEM32(eax + 0x3C)); /* 0x171AAD9E: call dword ptr [eax + 0x3c] */
    RECOMP_FLAGS_IN();
    /* test LO8(eax), LO8(eax) */ /* 0x171AADA1: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_171AADB3; /* 0x171AADA3: jne 0x171aadb3 */
L_171AADA5:
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(1);
    edi = edi + 1; /* 0x171AADA5: inc edi */
    _flag_k = FK_INC;
    /* cmp edi, MEM32(esi + 0x44) */ /* 0x171AADA6: cmp edi, dword ptr [esi + 0x44] */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(MEM32(esi + 0x44));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_171AAD90; /* 0x171AADA9: jb 0x171aad90 */
L_171AADAB:
    _flag_a = (uint32_t)(0) << 24; _flag_b = (uint32_t)(0) << 24;
    SET_LO8(eax, 0); /* 0x171AADAB: xor al, al */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
L_171AADAD:
    edi = POP32_VAL(esp); /* 0x171AADAD: pop edi */
    esi = POP32_VAL(esp); /* 0x171AADAE: pop esi */
    ebp = POP32_VAL(esp); /* 0x171AADAF: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 12; { RECOMP_REGS_OUT(); return; } /* 0x171AADB0: ret 8 */
L_171AADB3:
    SET_LO8(eax, 1); /* 0x171AADB3: mov al, 1 */
    RECOMP_BACKEDGE();
    goto L_171AADAD; /* 0x171AADB5: jmp 0x171aadad */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    RECOMP_REGS_OUT();
}

void sub_171AADBC(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x171AADBCu);

L_171AADBC:
    edi = edi; /* 0x171AADBC: mov edi, edi */
    PUSH32(esp, ebp); /* 0x171AADBE: push ebp */
    ebp = esp; /* 0x171AADBF: mov ebp, esp */
    PUSH32(esp, esi); /* 0x171AADC1: push esi */
    PUSH32(esp, edi); /* 0x171AADC2: push edi */
    esi = ecx; /* 0x171AADC3: mov esi, ecx */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edi = 0; /* 0x171AADC5: xor edi, edi */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp MEM32(esi + 0x44), edi */ /* 0x171AADC7: cmp dword ptr [esi + 0x44], edi */
    _flag_a = (uint32_t)(MEM32(esi + 0x44)); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_171AADE7; /* 0x171AADCA: jbe 0x171aade7 */
L_171AADCC:
    eax = MEM32(esi + 0x50); /* 0x171AADCC: mov eax, dword ptr [esi + 0x50] */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x171AADCF: push dword ptr [ebp + 0xc] */
    ecx = MEM32(eax + edi * 4); /* 0x171AADD2: mov ecx, dword ptr [eax + edi*4] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x171AADD5: push dword ptr [ebp + 8] */
    eax = MEM32(ecx); /* 0x171AADD8: mov eax, dword ptr [ecx] */
    RECOMP_ICALL(MEM32(eax + 0x38)); /* 0x171AADDA: call dword ptr [eax + 0x38] */
    RECOMP_FLAGS_IN();
    /* test LO8(eax), LO8(eax) */ /* 0x171AADDD: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_171AADEF; /* 0x171AADDF: jne 0x171aadef */
L_171AADE1:
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(1);
    edi = edi + 1; /* 0x171AADE1: inc edi */
    _flag_k = FK_INC;
    /* cmp edi, MEM32(esi + 0x44) */ /* 0x171AADE2: cmp edi, dword ptr [esi + 0x44] */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(MEM32(esi + 0x44));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_171AADCC; /* 0x171AADE5: jb 0x171aadcc */
L_171AADE7:
    _flag_a = (uint32_t)(0) << 24; _flag_b = (uint32_t)(0) << 24;
    SET_LO8(eax, 0); /* 0x171AADE7: xor al, al */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
L_171AADE9:
    edi = POP32_VAL(esp); /* 0x171AADE9: pop edi */
    esi = POP32_VAL(esp); /* 0x171AADEA: pop esi */
    ebp = POP32_VAL(esp); /* 0x171AADEB: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 12; { RECOMP_REGS_OUT(); return; } /* 0x171AADEC: ret 8 */
L_171AADEF:
    SET_LO8(eax, 1); /* 0x171AADEF: mov al, 1 */
    RECOMP_BACKEDGE();
    goto L_171AADE9; /* 0x171AADF1: jmp 0x171aade9 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    RECOMP_REGS_OUT();
}

void sub_171AADF8(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x171AADF8u);

L_171AADF8:
    edi = edi; /* 0x171AADF8: mov edi, edi */
    PUSH32(esp, ebp); /* 0x171AADFA: push ebp */
    ebp = esp; /* 0x171AADFB: mov ebp, esp */
    PUSH32(esp, esi); /* 0x171AADFD: push esi */
    esi = MEM32(ebp + 0x10); /* 0x171AADFE: mov esi, dword ptr [ebp + 0x10] */
    /* test esi, esi */ /* 0x171AAE01: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_171AAE34; /* 0x171AAE03: je 0x171aae34 */
L_171AAE05:
    ecx = MEM32(ebp + 0x8); /* 0x171AAE05: mov ecx, dword ptr [ebp + 8] */
    _flag_a = (uint32_t)(MEM32(esi)); _flag_b = (uint32_t)(0);
    MEM32(esi) = MEM32(esi) & 0; /* 0x171AAE08: and dword ptr [esi], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    eax = ebp + 0x10; /* 0x171AAE0B: lea eax, [ebp + 0x10] */
    PUSH32(esp, eax); /* 0x171AAE0E: push eax */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x171AAE0F: push dword ptr [ebp + 0xc] */
    RECOMP_CALL(sub_171AADBC); /* 0x171AAE12: call 0x171aadbc */
    RECOMP_FLAGS_IN();
    /* test LO8(eax), LO8(eax) */ /* 0x171AAE17: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_171AAE22; /* 0x171AAE19: jne 0x171aae22 */
L_171AAE1B:
    eax = 0x88760387u; /* 0x171AAE1B: mov eax, 0x88760387 */
    goto L_171AAE39; /* 0x171AAE20: jmp 0x171aae39 */
L_171AAE22:
    eax = MEM32(ebp + 0x10); /* 0x171AAE22: mov eax, dword ptr [ebp + 0x10] */
    ecx = MEM32(eax); /* 0x171AAE25: mov ecx, dword ptr [eax] */
    PUSH32(esp, eax); /* 0x171AAE27: push eax */
    RECOMP_ICALL(MEM32(ecx + 0x4)); /* 0x171AAE28: call dword ptr [ecx + 4] */
    RECOMP_FLAGS_IN();
    eax = MEM32(ebp + 0x10); /* 0x171AAE2B: mov eax, dword ptr [ebp + 0x10] */
    MEM32(esi) = eax; /* 0x171AAE2E: mov dword ptr [esi], eax */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x171AAE30: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_171AAE39; /* 0x171AAE32: jmp 0x171aae39 */
L_171AAE34:
    eax = 0x88760385u; /* 0x171AAE34: mov eax, 0x88760385 */
L_171AAE39:
    esi = POP32_VAL(esp); /* 0x171AAE39: pop esi */
    ebp = POP32_VAL(esp); /* 0x171AAE3A: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 16; { RECOMP_REGS_OUT(); return; } /* 0x171AAE3B: ret 0xc */
    RECOMP_REGS_OUT();
}

void sub_171AAE43(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x171AAE43u);

L_171AAE43:
    edi = edi; /* 0x171AAE43: mov edi, edi */
    PUSH32(esp, ebp); /* 0x171AAE45: push ebp */
    ebp = esp; /* 0x171AAE46: mov ebp, esp */
    PUSH32(esp, esi); /* 0x171AAE48: push esi */
    esi = MEM32(ebp + 0x10); /* 0x171AAE49: mov esi, dword ptr [ebp + 0x10] */
    /* test esi, esi */ /* 0x171AAE4C: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_171AAE7F; /* 0x171AAE4E: je 0x171aae7f */
L_171AAE50:
    ecx = MEM32(ebp + 0x8); /* 0x171AAE50: mov ecx, dword ptr [ebp + 8] */
    _flag_a = (uint32_t)(MEM32(esi)); _flag_b = (uint32_t)(0);
    MEM32(esi) = MEM32(esi) & 0; /* 0x171AAE53: and dword ptr [esi], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    eax = ebp + 0x10; /* 0x171AAE56: lea eax, [ebp + 0x10] */
    PUSH32(esp, eax); /* 0x171AAE59: push eax */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x171AAE5A: push dword ptr [ebp + 0xc] */
    RECOMP_CALL(sub_171AAD80); /* 0x171AAE5D: call 0x171aad80 */
    RECOMP_FLAGS_IN();
    /* test LO8(eax), LO8(eax) */ /* 0x171AAE62: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_171AAE6D; /* 0x171AAE64: jne 0x171aae6d */
L_171AAE66:
    eax = 0x88760387u; /* 0x171AAE66: mov eax, 0x88760387 */
    goto L_171AAE84; /* 0x171AAE6B: jmp 0x171aae84 */
L_171AAE6D:
    eax = MEM32(ebp + 0x10); /* 0x171AAE6D: mov eax, dword ptr [ebp + 0x10] */
    ecx = MEM32(eax); /* 0x171AAE70: mov ecx, dword ptr [eax] */
    PUSH32(esp, eax); /* 0x171AAE72: push eax */
    RECOMP_ICALL(MEM32(ecx + 0x4)); /* 0x171AAE73: call dword ptr [ecx + 4] */
    RECOMP_FLAGS_IN();
    eax = MEM32(ebp + 0x10); /* 0x171AAE76: mov eax, dword ptr [ebp + 0x10] */
    MEM32(esi) = eax; /* 0x171AAE79: mov dword ptr [esi], eax */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x171AAE7B: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_171AAE84; /* 0x171AAE7D: jmp 0x171aae84 */
L_171AAE7F:
    eax = 0x88760385u; /* 0x171AAE7F: mov eax, 0x88760385 */
L_171AAE84:
    esi = POP32_VAL(esp); /* 0x171AAE84: pop esi */
    ebp = POP32_VAL(esp); /* 0x171AAE85: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 16; { RECOMP_REGS_OUT(); return; } /* 0x171AAE86: ret 0xc */
    RECOMP_REGS_OUT();
}

void sub_171AAE8E(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x171AAE8Eu);

L_171AAE8E:
    edi = edi; /* 0x171AAE8E: mov edi, edi */
    PUSH32(esp, ebp); /* 0x171AAE90: push ebp */
    ebp = esp; /* 0x171AAE91: mov ebp, esp */
    PUSH32(esp, ecx); /* 0x171AAE93: push ecx */
    PUSH32(esp, ecx); /* 0x171AAE94: push ecx */
    eax = MEM32(ecx + 0x8); /* 0x171AAE95: mov eax, dword ptr [ecx + 8] */
    edx = MEM32(eax + 0x34); /* 0x171AAE98: mov edx, dword ptr [eax + 0x34] */
    PUSH32(esp, esi); /* 0x171AAE9B: push esi */
    esi = MEM32(eax + 0x30); /* 0x171AAE9C: mov esi, dword ptr [eax + 0x30] */
    /* test esi, esi */ /* 0x171AAE9F: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x4)) = edx; /* 0x171AAEA1: mov dword ptr [ebp - 4], edx */
    if (TEST_NZ(_flag_a, _flag_b)) goto L_171AAEAE; /* 0x171AAEA4: jne 0x171aaeae */
L_171AAEA6:
    /* test edx, edx */ /* 0x171AAEA6: test edx, edx */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(edx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_171AAEAE; /* 0x171AAEA8: jne 0x171aaeae */
L_171AAEAA:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x171AAEAA: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_171AAEE3; /* 0x171AAEAC: jmp 0x171aaee3 */
L_171AAEAE:
    edx = MEM32(ecx + 0x4); /* 0x171AAEAE: mov edx, dword ptr [ecx + 4] */
    PUSH32(esp, ebx); /* 0x171AAEB1: push ebx */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ebx = 0; /* 0x171AAEB2: xor ebx, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp MEM32(ebp + (-0x4)), ebx */ /* 0x171AAEB4: cmp dword ptr [ebp - 4], ebx */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x4))); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    PUSH32(esp, edi); /* 0x171AAEB7: push edi */
    edi = MEM32(edx + 0x28); /* 0x171AAEB8: mov edi, dword ptr [edx + 0x28] */
    if (CMP_B(_flag_a, _flag_b)) goto L_171AAECA; /* 0x171AAEBB: jb 0x171aaeca */
L_171AAEBD:
    if (CMP_A(_flag_a, _flag_b)) goto L_171AAEC3; /* 0x171AAEBD: ja 0x171aaec3 */
L_171AAEBF:
    /* cmp esi, edi */ /* 0x171AAEBF: cmp esi, edi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_171AAECA; /* 0x171AAEC1: jbe 0x171aaeca */
L_171AAEC3:
    eax = 0x8876038Fu; /* 0x171AAEC3: mov eax, 0x8876038f */
    goto L_171AAEE1; /* 0x171AAEC8: jmp 0x171aaee1 */
L_171AAECA:
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x14u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 0x14u; /* 0x171AAECA: add ecx, 0x14 */
    _flag_k = FK_ADD;
    PUSH32(esp, ecx); /* 0x171AAECD: push ecx */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x171AAECE: push dword ptr [ebp + 8] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + esi; /* 0x171AAED1: add eax, esi */
    _flag_k = FK_ADD;
    MEM32(ebp + (-0x4)) = eax; /* 0x171AAED3: mov dword ptr [ebp - 4], eax */
    eax = ebp + (-0x4); /* 0x171AAED6: lea eax, [ebp - 4] */
    PUSH32(esp, eax); /* 0x171AAED9: push eax */
    ecx = edx; /* 0x171AAEDA: mov ecx, edx */
    RECOMP_CALL(sub_171A7626); /* 0x171AAEDC: call 0x171a7626 */
    RECOMP_FLAGS_IN();
L_171AAEE1:
    edi = POP32_VAL(esp); /* 0x171AAEE1: pop edi */
    ebx = POP32_VAL(esp); /* 0x171AAEE2: pop ebx */
L_171AAEE3:
    esi = POP32_VAL(esp); /* 0x171AAEE3: pop esi */
    esp = ebp; ebp = POP32_VAL(esp); /* 0x171AAEE4: leave  */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x171AAEE5: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_171AAEED(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x171AAEEDu);

L_171AAEED:
    edi = edi; /* 0x171AAEED: mov edi, edi */
    PUSH32(esp, ebp); /* 0x171AAEEF: push ebp */
    ebp = esp; /* 0x171AAEF0: mov ebp, esp */
    edx = MEM32(ebp + 0x10); /* 0x171AAEF2: mov edx, dword ptr [ebp + 0x10] */
    /* test edx, edx */ /* 0x171AAEF5: test edx, edx */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(edx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_171AAF38; /* 0x171AAEF7: je 0x171aaf38 */
L_171AAEF9:
    _flag_a = (uint32_t)(MEM32(edx)); _flag_b = (uint32_t)(0);
    MEM32(edx) = MEM32(edx) & 0; /* 0x171AAEF9: and dword ptr [edx], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, esi); /* 0x171AAEFC: push esi */
    esi = MEM32(ebp + 0xC); /* 0x171AAEFD: mov esi, dword ptr [ebp + 0xc] */
    PUSH32(esp, edi); /* 0x171AAF00: push edi */
    PUSH32(esp, 4); /* 0x171AAF01: push 4 */
    ecx = POP32_VAL(esp); /* 0x171AAF03: pop ecx */
    edi = 0x1702AA2Cu; /* 0x171AAF04: mov edi, 0x1702aa2c */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x171AAF09: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    if (ecx) { uint32_t _a = 0, _b = 0; while (ecx) { _a = MEM32(esi); _b = MEM32(edi); esi += (_df * 4); edi += (_df * 4); ecx--; if (_a != _b) break; } _flag_a = _a; _flag_b = _b; _cf = (uint32_t)CMP_B(_a, _b); _flag_k = FK_CMP; } /* 0x171AAF0B: repe cmpsd dword ptr [esi], dword ptr es:[edi] */
    if (recomp_cond_cf(_flag_k, _flag_a, _flag_b, CC_E, _cf)) goto L_171AAF27; /* 0x171AAF0D: je 0x171aaf27 */
L_171AAF0F:
    esi = MEM32(ebp + 0xC); /* 0x171AAF0F: mov esi, dword ptr [ebp + 0xc] */
    PUSH32(esp, 4); /* 0x171AAF12: push 4 */
    ecx = POP32_VAL(esp); /* 0x171AAF14: pop ecx */
    edi = 0x17001C20u; /* 0x171AAF15: mov edi, 0x17001c20 */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x171AAF1A: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    if (ecx) { uint32_t _a = 0, _b = 0; while (ecx) { _a = MEM32(esi); _b = MEM32(edi); esi += (_df * 4); edi += (_df * 4); ecx--; if (_a != _b) break; } _flag_a = _a; _flag_b = _b; _cf = (uint32_t)CMP_B(_a, _b); _flag_k = FK_CMP; } /* 0x171AAF1C: repe cmpsd dword ptr [esi], dword ptr es:[edi] */
    if (recomp_cond_cf(_flag_k, _flag_a, _flag_b, CC_E, _cf)) goto L_171AAF27; /* 0x171AAF1E: je 0x171aaf27 */
L_171AAF20:
    eax = 0x80004002u; /* 0x171AAF20: mov eax, 0x80004002 */
    goto L_171AAF34; /* 0x171AAF25: jmp 0x171aaf34 */
L_171AAF27:
    eax = MEM32(ebp + 0x8); /* 0x171AAF27: mov eax, dword ptr [ebp + 8] */
    MEM32(edx) = eax; /* 0x171AAF2A: mov dword ptr [edx], eax */
    ecx = MEM32(eax); /* 0x171AAF2C: mov ecx, dword ptr [eax] */
    PUSH32(esp, eax); /* 0x171AAF2E: push eax */
    RECOMP_ICALL(MEM32(ecx + 0x4)); /* 0x171AAF2F: call dword ptr [ecx + 4] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x171AAF32: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
L_171AAF34:
    edi = POP32_VAL(esp); /* 0x171AAF34: pop edi */
    esi = POP32_VAL(esp); /* 0x171AAF35: pop esi */
    goto L_171AAF3D; /* 0x171AAF36: jmp 0x171aaf3d */
L_171AAF38:
    eax = 0x80070057u; /* 0x171AAF38: mov eax, 0x80070057 */
L_171AAF3D:
    ebp = POP32_VAL(esp); /* 0x171AAF3D: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 16; { RECOMP_REGS_OUT(); return; } /* 0x171AAF3E: ret 0xc */
    RECOMP_REGS_OUT();
}

void sub_171AAF46(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x171AAF46u);

L_171AAF46:
    edi = edi; /* 0x171AAF46: mov edi, edi */
    PUSH32(esp, ebp); /* 0x171AAF48: push ebp */
    ebp = esp; /* 0x171AAF49: mov ebp, esp */
    /* cmp MEM32(ebp + 0xC), 0 */ /* 0x171AAF4B: cmp dword ptr [ebp + 0xc], 0 */
    _flag_a = (uint32_t)(MEM32(ebp + 0xC)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_171AAF66; /* 0x171AAF4F: je 0x171aaf66 */
L_171AAF51:
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x171AAF51: push dword ptr [ebp + 0xc] */
    eax = MEM32(ebp + 0x8); /* 0x171AAF54: mov eax, dword ptr [ebp + 8] */
    eax = MEM32(eax + 0x24); /* 0x171AAF57: mov eax, dword ptr [eax + 0x24] */
    ecx = MEM32(eax); /* 0x171AAF5A: mov ecx, dword ptr [eax] */
    PUSH32(esp, 0x17001C30u); /* 0x171AAF5C: push 0x17001c30 */
    PUSH32(esp, eax); /* 0x171AAF61: push eax */
    RECOMP_ICALL(MEM32(ecx)); /* 0x171AAF62: call dword ptr [ecx] */
    RECOMP_FLAGS_IN();
    goto L_171AAF6B; /* 0x171AAF64: jmp 0x171aaf6b */
L_171AAF66:
    eax = 0x88760385u; /* 0x171AAF66: mov eax, 0x88760385 */
L_171AAF6B:
    ebp = POP32_VAL(esp); /* 0x171AAF6B: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 12; { RECOMP_REGS_OUT(); return; } /* 0x171AAF6C: ret 8 */
    RECOMP_REGS_OUT();
}

void sub_171AAF74(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x171AAF74u);

L_171AAF74:
    edi = edi; /* 0x171AAF74: mov edi, edi */
    PUSH32(esp, ebp); /* 0x171AAF76: push ebp */
    ebp = esp; /* 0x171AAF77: mov ebp, esp */
    PUSH32(esp, ebx); /* 0x171AAF79: push ebx */
    ebx = ecx; /* 0x171AAF7A: mov ebx, ecx */
    eax = MEM32(ebx + 0x3C); /* 0x171AAF7C: mov eax, dword ptr [ebx + 0x3c] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(ebp + 0xC));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + MEM32(ebp + 0xC); /* 0x171AAF7F: add eax, dword ptr [ebp + 0xc] */
    _flag_k = FK_ADD;
    PUSH32(esp, eax); /* 0x171AAF82: push eax */
    PUSH32(esp, MEM32(ebx + 0x40)); /* 0x171AAF83: push dword ptr [ebx + 0x40] */
    RECOMP_CALL(sub_1721B260); /* 0x171AAF86: call 0x1721b260 */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x171AAF8B: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = POP32_VAL(esp); /* 0x171AAF8D: pop ecx */
    ecx = POP32_VAL(esp); /* 0x171AAF8E: pop ecx */
    if (TEST_NZ(_flag_a, _flag_b)) goto L_171AAF98; /* 0x171AAF8F: jne 0x171aaf98 */
L_171AAF91:
    eax = 0x8007000Eu; /* 0x171AAF91: mov eax, 0x8007000e */
    goto L_171AAFBD; /* 0x171AAF96: jmp 0x171aafbd */
L_171AAF98:
    ecx = MEM32(ebp + 0xC); /* 0x171AAF98: mov ecx, dword ptr [ebp + 0xc] */
    PUSH32(esp, esi); /* 0x171AAF9B: push esi */
    esi = MEM32(ebp + 0x8); /* 0x171AAF9C: mov esi, dword ptr [ebp + 8] */
    PUSH32(esp, edi); /* 0x171AAF9F: push edi */
    edi = MEM32(ebx + 0x3C); /* 0x171AAFA0: mov edi, dword ptr [ebx + 0x3c] */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edi = edi + eax; /* 0x171AAFA3: add edi, eax */
    _flag_k = FK_ADD;
    MEM32(ebx + 0x40) = eax; /* 0x171AAFA5: mov dword ptr [ebx + 0x40], eax */
    eax = ecx; /* 0x171AAFA8: mov eax, ecx */
    if (2u) _cf = (((ecx) >> 1) & 1u); /* 0x171AAFAA: shr ecx, 2 */
    if (2u) { _flag_a = recomp_flags_pack((ecx >> 2u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ecx = ecx >> 2u; /* 0x171AAFAA: shr ecx, 2 */
    while (ecx) { MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; --ecx; } /* 0x171AAFAD: rep movsd dword ptr es:[edi], dword ptr [esi] */
    ecx = eax; /* 0x171AAFAF: mov ecx, eax */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(3);
    ecx = ecx & 3; /* 0x171AAFB1: and ecx, 3 */
    _cf = 0;
    _flag_k = FK_TEST;
    while (ecx) { MEM8(edi) = MEM8(esi); esi += _df * 1; edi += _df * 1; --ecx; } /* 0x171AAFB4: rep movsb byte ptr es:[edi], byte ptr [esi] */
    _flag_a = (uint32_t)(MEM32(ebx + 0x3C)); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM32(ebx + 0x3C) = MEM32(ebx + 0x3C) + eax; /* 0x171AAFB6: add dword ptr [ebx + 0x3c], eax */
    _flag_k = FK_ADD;
    edi = POP32_VAL(esp); /* 0x171AAFB9: pop edi */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x171AAFBA: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    esi = POP32_VAL(esp); /* 0x171AAFBC: pop esi */
L_171AAFBD:
    ebx = POP32_VAL(esp); /* 0x171AAFBD: pop ebx */
    ebp = POP32_VAL(esp); /* 0x171AAFBE: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 12; { RECOMP_REGS_OUT(); return; } /* 0x171AAFBF: ret 8 */
    RECOMP_REGS_OUT();
}

void sub_171AAFC7(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x171AAFC7u);

L_171AAFC7:
    edi = edi; /* 0x171AAFC7: mov edi, edi */
    PUSH32(esp, ebp); /* 0x171AAFC9: push ebp */
    ebp = esp; /* 0x171AAFCA: mov ebp, esp */
    edx = MEM32(ebp + 0x10); /* 0x171AAFCC: mov edx, dword ptr [ebp + 0x10] */
    /* test edx, edx */ /* 0x171AAFCF: test edx, edx */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(edx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_171AB012; /* 0x171AAFD1: je 0x171ab012 */
L_171AAFD3:
    _flag_a = (uint32_t)(MEM32(edx)); _flag_b = (uint32_t)(0);
    MEM32(edx) = MEM32(edx) & 0; /* 0x171AAFD3: and dword ptr [edx], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, esi); /* 0x171AAFD6: push esi */
    esi = MEM32(ebp + 0xC); /* 0x171AAFD7: mov esi, dword ptr [ebp + 0xc] */
    PUSH32(esp, edi); /* 0x171AAFDA: push edi */
    PUSH32(esp, 4); /* 0x171AAFDB: push 4 */
    ecx = POP32_VAL(esp); /* 0x171AAFDD: pop ecx */
    edi = 0x1702AA2Cu; /* 0x171AAFDE: mov edi, 0x1702aa2c */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x171AAFE3: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    if (ecx) { uint32_t _a = 0, _b = 0; while (ecx) { _a = MEM32(esi); _b = MEM32(edi); esi += (_df * 4); edi += (_df * 4); ecx--; if (_a != _b) break; } _flag_a = _a; _flag_b = _b; _cf = (uint32_t)CMP_B(_a, _b); _flag_k = FK_CMP; } /* 0x171AAFE5: repe cmpsd dword ptr [esi], dword ptr es:[edi] */
    if (recomp_cond_cf(_flag_k, _flag_a, _flag_b, CC_E, _cf)) goto L_171AB001; /* 0x171AAFE7: je 0x171ab001 */
L_171AAFE9:
    esi = MEM32(ebp + 0xC); /* 0x171AAFE9: mov esi, dword ptr [ebp + 0xc] */
    PUSH32(esp, 4); /* 0x171AAFEC: push 4 */
    ecx = POP32_VAL(esp); /* 0x171AAFEE: pop ecx */
    edi = 0x17001C00u; /* 0x171AAFEF: mov edi, 0x17001c00 */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x171AAFF4: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    if (ecx) { uint32_t _a = 0, _b = 0; while (ecx) { _a = MEM32(esi); _b = MEM32(edi); esi += (_df * 4); edi += (_df * 4); ecx--; if (_a != _b) break; } _flag_a = _a; _flag_b = _b; _cf = (uint32_t)CMP_B(_a, _b); _flag_k = FK_CMP; } /* 0x171AAFF6: repe cmpsd dword ptr [esi], dword ptr es:[edi] */
    if (recomp_cond_cf(_flag_k, _flag_a, _flag_b, CC_E, _cf)) goto L_171AB001; /* 0x171AAFF8: je 0x171ab001 */
L_171AAFFA:
    eax = 0x80004002u; /* 0x171AAFFA: mov eax, 0x80004002 */
    goto L_171AB00E; /* 0x171AAFFF: jmp 0x171ab00e */
L_171AB001:
    eax = MEM32(ebp + 0x8); /* 0x171AB001: mov eax, dword ptr [ebp + 8] */
    MEM32(edx) = eax; /* 0x171AB004: mov dword ptr [edx], eax */
    ecx = MEM32(eax); /* 0x171AB006: mov ecx, dword ptr [eax] */
    PUSH32(esp, eax); /* 0x171AB008: push eax */
    RECOMP_ICALL(MEM32(ecx + 0x4)); /* 0x171AB009: call dword ptr [ecx + 4] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x171AB00C: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
L_171AB00E:
    edi = POP32_VAL(esp); /* 0x171AB00E: pop edi */
    esi = POP32_VAL(esp); /* 0x171AB00F: pop esi */
    goto L_171AB017; /* 0x171AB010: jmp 0x171ab017 */
L_171AB012:
    eax = 0x80070057u; /* 0x171AB012: mov eax, 0x80070057 */
L_171AB017:
    ebp = POP32_VAL(esp); /* 0x171AB017: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 16; { RECOMP_REGS_OUT(); return; } /* 0x171AB018: ret 0xc */
    RECOMP_REGS_OUT();
}

void sub_171AB020(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x171AB020u);

L_171AB020:
    edi = edi; /* 0x171AB020: mov edi, edi */
    PUSH32(esp, ebp); /* 0x171AB022: push ebp */
    ebp = esp; /* 0x171AB023: mov ebp, esp */
    edx = MEM32(ebp + 0xC); /* 0x171AB025: mov edx, dword ptr [ebp + 0xc] */
    /* test edx, edx */ /* 0x171AB028: test edx, edx */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(edx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_171AB046; /* 0x171AB02A: je 0x171ab046 */
L_171AB02C:
    ecx = MEM32(ebp + 0x10); /* 0x171AB02C: mov ecx, dword ptr [ebp + 0x10] */
    /* test ecx, ecx */ /* 0x171AB02F: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_171AB046; /* 0x171AB031: je 0x171ab046 */
L_171AB033:
    eax = MEM32(ebp + 0x8); /* 0x171AB033: mov eax, dword ptr [ebp + 8] */
    PUSH32(esp, esi); /* 0x171AB036: push esi */
    esi = MEM32(eax + 0x3C); /* 0x171AB037: mov esi, dword ptr [eax + 0x3c] */
    MEM32(edx) = esi; /* 0x171AB03A: mov dword ptr [edx], esi */
    eax = MEM32(eax + 0x40); /* 0x171AB03C: mov eax, dword ptr [eax + 0x40] */
    MEM32(ecx) = eax; /* 0x171AB03F: mov dword ptr [ecx], eax */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x171AB041: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    esi = POP32_VAL(esp); /* 0x171AB043: pop esi */
    goto L_171AB04B; /* 0x171AB044: jmp 0x171ab04b */
L_171AB046:
    eax = 0x88760385u; /* 0x171AB046: mov eax, 0x88760385 */
L_171AB04B:
    ebp = POP32_VAL(esp); /* 0x171AB04B: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 16; { RECOMP_REGS_OUT(); return; } /* 0x171AB04C: ret 0xc */
    RECOMP_REGS_OUT();
}

void sub_171AB054(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x171AB054u);

L_171AB054:
    edi = edi; /* 0x171AB054: mov edi, edi */
    PUSH32(esp, ebp); /* 0x171AB056: push ebp */
    ebp = esp; /* 0x171AB057: mov ebp, esp */
    /* cmp MEM32(ebp + 0xC), 0 */ /* 0x171AB059: cmp dword ptr [ebp + 0xc], 0 */
    _flag_a = (uint32_t)(MEM32(ebp + 0xC)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_171AB074; /* 0x171AB05D: je 0x171ab074 */
L_171AB05F:
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x171AB05F: push dword ptr [ebp + 0xc] */
    eax = MEM32(ebp + 0x8); /* 0x171AB062: mov eax, dword ptr [ebp + 8] */
    eax = MEM32(eax + 0x20); /* 0x171AB065: mov eax, dword ptr [eax + 0x20] */
    ecx = MEM32(eax); /* 0x171AB068: mov ecx, dword ptr [eax] */
    PUSH32(esp, 0x17001C10u); /* 0x171AB06A: push 0x17001c10 */
    PUSH32(esp, eax); /* 0x171AB06F: push eax */
    RECOMP_ICALL(MEM32(ecx)); /* 0x171AB070: call dword ptr [ecx] */
    RECOMP_FLAGS_IN();
    goto L_171AB079; /* 0x171AB072: jmp 0x171ab079 */
L_171AB074:
    eax = 0x88760385u; /* 0x171AB074: mov eax, 0x88760385 */
L_171AB079:
    ebp = POP32_VAL(esp); /* 0x171AB079: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 12; { RECOMP_REGS_OUT(); return; } /* 0x171AB07A: ret 8 */
    RECOMP_REGS_OUT();
}

void sub_171AB082(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x171AB082u);

L_171AB082:
    MEM32(ecx) = 0x17023AB4u; /* 0x171AB082: mov dword ptr [ecx], 0x17023ab4 */
    ecx = MEM32(ecx + 0x4); /* 0x171AB088: mov ecx, dword ptr [ecx + 4] */
    /* test ecx, ecx */ /* 0x171AB08B: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_171AB096; /* 0x171AB08D: je 0x171ab096 */
L_171AB08F:
    PUSH32(esp, ecx); /* 0x171AB08F: push ecx */
    RECOMP_CALL(sub_1721B224); /* 0x171AB090: call 0x1721b224 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x171AB095: pop ecx */
L_171AB096:
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x171AB096: ret  */
    RECOMP_REGS_OUT();
}

void sub_171AB09C(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x171AB09Cu);

L_171AB09C:
    edi = edi; /* 0x171AB09C: mov edi, edi */
    PUSH32(esp, ebp); /* 0x171AB09E: push ebp */
    ebp = esp; /* 0x171AB09F: mov ebp, esp */
    PUSH32(esp, esi); /* 0x171AB0A1: push esi */
    esi = ecx; /* 0x171AB0A2: mov esi, ecx */
    RECOMP_CALL(sub_171AB082); /* 0x171AB0A4: call 0x171ab082 */
    RECOMP_FLAGS_IN();
    /* test MEM8(ebp + 0x8), 1 */ /* 0x171AB0A9: test byte ptr [ebp + 8], 1 */
    _flag_a = (uint32_t)(MEM8(ebp + 0x8)) << 24; _flag_b = (uint32_t)(1) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_171AB0B6; /* 0x171AB0AD: je 0x171ab0b6 */
L_171AB0AF:
    PUSH32(esp, esi); /* 0x171AB0AF: push esi */
    RECOMP_CALL(sub_1721B010); /* 0x171AB0B0: call 0x1721b010 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x171AB0B5: pop ecx */
L_171AB0B6:
    eax = esi; /* 0x171AB0B6: mov eax, esi */
    esi = POP32_VAL(esp); /* 0x171AB0B8: pop esi */
    ebp = POP32_VAL(esp); /* 0x171AB0B9: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x171AB0BA: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_171AB0C2(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x171AB0C2u);

L_171AB0C2:
    edi = edi; /* 0x171AB0C2: mov edi, edi */
    PUSH32(esp, ebp); /* 0x171AB0C4: push ebp */
    ebp = esp; /* 0x171AB0C5: mov ebp, esp */
    PUSH32(esp, edi); /* 0x171AB0C7: push edi */
    edi = MEM32(ebp + 0xC); /* 0x171AB0C8: mov edi, dword ptr [ebp + 0xc] */
    /* test edi, edi */ /* 0x171AB0CB: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_171AB0ED; /* 0x171AB0CD: je 0x171ab0ed */
L_171AB0CF:
    eax = MEM32(ebp + 0x8); /* 0x171AB0CF: mov eax, dword ptr [ebp + 8] */
    eax = MEM32(eax + 0x20); /* 0x171AB0D2: mov eax, dword ptr [eax + 0x20] */
    /* test eax, eax */ /* 0x171AB0D5: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_171AB0E6; /* 0x171AB0D7: je 0x171ab0e6 */
L_171AB0D9:
    PUSH32(esp, esi); /* 0x171AB0D9: push esi */
    esi = eax + 0x8; /* 0x171AB0DA: lea esi, [eax + 8] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x171AB0DD: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x171AB0DE: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x171AB0DF: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x171AB0E0: movsd dword ptr es:[edi], dword ptr [esi] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x171AB0E1: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    esi = POP32_VAL(esp); /* 0x171AB0E3: pop esi */
    goto L_171AB0F2; /* 0x171AB0E4: jmp 0x171ab0f2 */
L_171AB0E6:
    eax = 0x88760384u; /* 0x171AB0E6: mov eax, 0x88760384 */
    goto L_171AB0F2; /* 0x171AB0EB: jmp 0x171ab0f2 */
L_171AB0ED:
    eax = 0x88760385u; /* 0x171AB0ED: mov eax, 0x88760385 */
L_171AB0F2:
    edi = POP32_VAL(esp); /* 0x171AB0F2: pop edi */
    ebp = POP32_VAL(esp); /* 0x171AB0F3: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 12; { RECOMP_REGS_OUT(); return; } /* 0x171AB0F4: ret 8 */
    RECOMP_REGS_OUT();
}

void sub_171AB0FC(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x171AB0FCu);

L_171AB0FC:
    edi = edi; /* 0x171AB0FC: mov edi, edi */
    PUSH32(esp, ebp); /* 0x171AB0FE: push ebp */
    ebp = esp; /* 0x171AB0FF: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x10u; /* 0x171AB101: sub esp, 0x10 */
    _flag_k = FK_CMP;
    PUSH32(esp, ebx); /* 0x171AB104: push ebx */
    PUSH32(esp, esi); /* 0x171AB105: push esi */
    esi = ecx; /* 0x171AB106: mov esi, ecx */
    eax = MEM32(esi + 0x38); /* 0x171AB108: mov eax, dword ptr [esi + 0x38] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ebx = 0; /* 0x171AB10B: xor ebx, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp eax, ebx */ /* 0x171AB10D: cmp eax, ebx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    MEM32(esi + 0x3C) = ebx; /* 0x171AB10F: mov dword ptr [esi + 0x3c], ebx */
    MEM32(esi + 0x40) = ebx; /* 0x171AB112: mov dword ptr [esi + 0x40], ebx */
    if (CMP_NE(_flag_a, _flag_b)) goto L_171AB11B; /* 0x171AB115: jne 0x171ab11b */
L_171AB117:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x171AB117: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_171AB186; /* 0x171AB119: jmp 0x171ab186 */
L_171AB11B:
    PUSH32(esp, edi); /* 0x171AB11B: push edi */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edi = 0; /* 0x171AB11C: xor edi, edi */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp MEM32(eax), ebx */ /* 0x171AB11E: cmp dword ptr [eax], ebx */
    _flag_a = (uint32_t)(MEM32(eax)); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_171AB139; /* 0x171AB120: jbe 0x171ab139 */
L_171AB122:
    eax = MEM32(esi + 0x38); /* 0x171AB122: mov eax, dword ptr [esi + 0x38] */
    eax = MEM32(eax + 0xC); /* 0x171AB125: mov eax, dword ptr [eax + 0xc] */
    ecx = MEM32(eax + edi * 4); /* 0x171AB128: mov ecx, dword ptr [eax + edi*4] */
    eax = MEM32(ecx); /* 0x171AB12B: mov eax, dword ptr [ecx] */
    PUSH32(esp, esi); /* 0x171AB12D: push esi */
    RECOMP_ICALL(MEM32(eax + 0x4)); /* 0x171AB12E: call dword ptr [eax + 4] */
    RECOMP_FLAGS_IN();
    eax = MEM32(esi + 0x38); /* 0x171AB131: mov eax, dword ptr [esi + 0x38] */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(1);
    edi = edi + 1; /* 0x171AB134: inc edi */
    _flag_k = FK_INC;
    /* cmp edi, MEM32(eax) */ /* 0x171AB135: cmp edi, dword ptr [eax] */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(MEM32(eax));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_171AB122; /* 0x171AB137: jb 0x171ab122 */
L_171AB139:
    eax = MEM32(esi + 0x40); /* 0x171AB139: mov eax, dword ptr [esi + 0x40] */
    ecx = MEM32(esi + 0x24); /* 0x171AB13C: mov ecx, dword ptr [esi + 0x24] */
    MEM32(ebp + (-0xC)) = eax; /* 0x171AB13F: mov dword ptr [ebp - 0xc], eax */
    eax = MEM32(esi + 0x3C); /* 0x171AB142: mov eax, dword ptr [esi + 0x3c] */
    MEM32(ebp + (-0x8)) = ebx; /* 0x171AB145: mov dword ptr [ebp - 8], ebx */
    MEM32(ebp + (-0x10)) = eax; /* 0x171AB148: mov dword ptr [ebp - 0x10], eax */
    MEM32(ebp + (-0x4)) = ebx; /* 0x171AB14B: mov dword ptr [ebp - 4], ebx */
    /* cmp MEM32(ecx + 0x28), ebx */ /* 0x171AB14E: cmp dword ptr [ecx + 0x28], ebx */
    _flag_a = (uint32_t)(MEM32(ecx + 0x28)); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_171AB18A; /* 0x171AB151: je 0x171ab18a */
L_171AB153:
    eax = ebp + (-0x8); /* 0x171AB153: lea eax, [ebp - 8] */
    PUSH32(esp, eax); /* 0x171AB156: push eax */
    eax = ebp + (-0x10); /* 0x171AB157: lea eax, [ebp - 0x10] */
    PUSH32(esp, eax); /* 0x171AB15A: push eax */
    eax = ebp + (-0x4); /* 0x171AB15B: lea eax, [ebp - 4] */
    PUSH32(esp, eax); /* 0x171AB15E: push eax */
    eax = ebp + (-0xC); /* 0x171AB15F: lea eax, [ebp - 0xc] */
    PUSH32(esp, eax); /* 0x171AB162: push eax */
    RECOMP_CALL(sub_171A98A2); /* 0x171AB163: call 0x171a98a2 */
    RECOMP_FLAGS_IN();
    edi = eax; /* 0x171AB168: mov edi, eax */
    /* cmp edi, ebx */ /* 0x171AB16A: cmp edi, ebx */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_L(_flag_a, _flag_b)) goto L_171AB183; /* 0x171AB16C: jl 0x171ab183 */
L_171AB16E:
    PUSH32(esp, MEM32(esi + 0x40)); /* 0x171AB16E: push dword ptr [esi + 0x40] */
    RECOMP_CALL(sub_1721B224); /* 0x171AB171: call 0x1721b224 */
    RECOMP_FLAGS_IN();
    eax = MEM32(ebp + (-0x4)); /* 0x171AB176: mov eax, dword ptr [ebp - 4] */
    MEM32(esi + 0x3C) = eax; /* 0x171AB179: mov dword ptr [esi + 0x3c], eax */
    eax = MEM32(ebp + (-0x8)); /* 0x171AB17C: mov eax, dword ptr [ebp - 8] */
    ecx = POP32_VAL(esp); /* 0x171AB17F: pop ecx */
    MEM32(esi + 0x40) = eax; /* 0x171AB180: mov dword ptr [esi + 0x40], eax */
L_171AB183:
    eax = edi; /* 0x171AB183: mov eax, edi */
L_171AB185:
    edi = POP32_VAL(esp); /* 0x171AB185: pop edi */
L_171AB186:
    esi = POP32_VAL(esp); /* 0x171AB186: pop esi */
    ebx = POP32_VAL(esp); /* 0x171AB187: pop ebx */
    esp = ebp; ebp = POP32_VAL(esp); /* 0x171AB188: leave  */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x171AB189: ret  */
L_171AB18A:
    PUSH32(esp, eax); /* 0x171AB18A: push eax */
    eax = ebp + (-0x4); /* 0x171AB18B: lea eax, [ebp - 4] */
    PUSH32(esp, eax); /* 0x171AB18E: push eax */
    eax = ebp + (-0xC); /* 0x171AB18F: lea eax, [ebp - 0xc] */
    PUSH32(esp, eax); /* 0x171AB192: push eax */
    RECOMP_CALL(sub_171A984C); /* 0x171AB193: call 0x171a984c */
    RECOMP_FLAGS_IN();
    edi = eax; /* 0x171AB198: mov edi, eax */
    /* cmp edi, ebx */ /* 0x171AB19A: cmp edi, ebx */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_L(_flag_a, _flag_b)) goto L_171AB183; /* 0x171AB19C: jl 0x171ab183 */
L_171AB19E:
    eax = MEM32(ebp + (-0x4)); /* 0x171AB19E: mov eax, dword ptr [ebp - 4] */
    /* cmp eax, MEM32(esi + 0x3C) */ /* 0x171AB1A1: cmp eax, dword ptr [esi + 0x3c] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(esi + 0x3C));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_EQ(_flag_a, _flag_b)) goto L_171AB183; /* 0x171AB1A4: je 0x171ab183 */
L_171AB1A6:
    PUSH32(esp, MEM32(esi + 0x40)); /* 0x171AB1A6: push dword ptr [esi + 0x40] */
    RECOMP_CALL(sub_1721B224); /* 0x171AB1A9: call 0x1721b224 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x171AB1AE: pop ecx */
    MEM32(esi + 0x40) = ebx; /* 0x171AB1AF: mov dword ptr [esi + 0x40], ebx */
    eax = 0x88760394u; /* 0x171AB1B2: mov eax, 0x88760394 */
    RECOMP_BACKEDGE();
    goto L_171AB185; /* 0x171AB1B7: jmp 0x171ab185 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    RECOMP_REGS_OUT();
}

void sub_171AB1BE(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x171AB1BEu);

L_171AB1BE:
    edi = edi; /* 0x171AB1BE: mov edi, edi */
    PUSH32(esp, ebp); /* 0x171AB1C0: push ebp */
    ebp = esp; /* 0x171AB1C1: mov ebp, esp */
    PUSH32(esp, ecx); /* 0x171AB1C3: push ecx */
    eax = MEM32(ecx + 0x24); /* 0x171AB1C4: mov eax, dword ptr [ecx + 0x24] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x171AB1C7: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp MEM32(eax + 0x24), ecx */ /* 0x171AB1C9: cmp dword ptr [eax + 0x24], ecx */
    _flag_a = (uint32_t)(MEM32(eax + 0x24)); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_171AB1D3; /* 0x171AB1CC: jne 0x171ab1d3 */
L_171AB1CE:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x171AB1CE: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x171AB1D0: inc eax */
    _flag_k = FK_INC;
    goto L_171AB235; /* 0x171AB1D1: jmp 0x171ab235 */
L_171AB1D3:
    PUSH32(esp, ebx); /* 0x171AB1D3: push ebx */
    ebx = MEM32(eax + 0x20); /* 0x171AB1D4: mov ebx, dword ptr [eax + 0x20] */
    /* cmp ebx, ecx */ /* 0x171AB1D7: cmp ebx, ecx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    PUSH32(esp, esi); /* 0x171AB1D9: push esi */
    PUSH32(esp, edi); /* 0x171AB1DA: push edi */
    if (CMP_EQ(_flag_a, _flag_b)) goto L_171AB230; /* 0x171AB1DB: je 0x171ab230 */
L_171AB1DD:
    /* cmp MEM32(ebx), ecx */ /* 0x171AB1DD: cmp dword ptr [ebx], ecx */
    _flag_a = (uint32_t)(MEM32(ebx)); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    MEM32(ebp + (-0x4)) = ecx; /* 0x171AB1DF: mov dword ptr [ebp - 4], ecx */
    if (CMP_BE(_flag_a, _flag_b)) goto L_171AB230; /* 0x171AB1E2: jbe 0x171ab230 */
L_171AB1E4:
    esi = MEM32(ebp + 0x8); /* 0x171AB1E4: mov esi, dword ptr [ebp + 8] */
    edi = MEM32(ebp + (-0x4)); /* 0x171AB1E7: mov edi, dword ptr [ebp - 4] */
    eax = MEM32(esi + 0x4); /* 0x171AB1EA: mov eax, dword ptr [esi + 4] */
    ecx = MEM32(ebx + 0xC); /* 0x171AB1ED: mov ecx, dword ptr [ebx + 0xc] */
    PUSH32(esp, 0xFFFFFFFFu); /* 0x171AB1F0: push -1 */
    PUSH32(esp, eax); /* 0x171AB1F2: push eax */
    if (2u) _cf = (((edi) >> 30) & 1u); /* 0x171AB1F3: shl edi, 2 */
    if (2u) { _flag_a = recomp_flags_pack((edi << 2u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    edi = edi << 2u; /* 0x171AB1F3: shl edi, 2 */
    ecx = MEM32(edi + ecx); /* 0x171AB1F6: mov ecx, dword ptr [edi + ecx] */
    ecx = MEM32(ecx); /* 0x171AB1F9: mov ecx, dword ptr [ecx] */
    PUSH32(esp, 0xFFFFFFFFu); /* 0x171AB1FB: push -1 */
    PUSH32(esp, ecx); /* 0x171AB1FD: push ecx */
    PUSH32(esp, 1); /* 0x171AB1FE: push 1 */
    PUSH32(esp, 0x409u); /* 0x171AB200: push 0x409 */
    RECOMP_ICALL(MEM32(0x170010A8)); /* 0x171AB205: call dword ptr [0x170010a8] */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 2); /* 0x171AB20B: push 2 */
    ecx = POP32_VAL(esp); /* 0x171AB20D: pop ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ecx = ecx - eax; /* 0x171AB20E: sub ecx, eax */
    _flag_k = FK_CMP;
    if (/* sub result */ CMP_NE(_flag_a, _flag_b)) goto L_171AB226; /* 0x171AB210: jne 0x171ab226 */
L_171AB212:
    eax = MEM32(ebx + 0xC); /* 0x171AB212: mov eax, dword ptr [ebx + 0xc] */
    edi = MEM32(eax + edi); /* 0x171AB215: mov edi, dword ptr [eax + edi] */
    PUSH32(esp, 4); /* 0x171AB218: push 4 */
    ecx = POP32_VAL(esp); /* 0x171AB21A: pop ecx */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edi = edi + ecx; /* 0x171AB21B: add edi, ecx */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esi = esi + 8; /* 0x171AB21D: add esi, 8 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x171AB220: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    if (ecx) { uint32_t _a = 0, _b = 0; while (ecx) { _a = MEM32(esi); _b = MEM32(edi); esi += (_df * 4); edi += (_df * 4); ecx--; if (_a != _b) break; } _flag_a = _a; _flag_b = _b; _cf = (uint32_t)CMP_B(_a, _b); _flag_k = FK_CMP; } /* 0x171AB222: repe cmpsd dword ptr [esi], dword ptr es:[edi] */
    if (recomp_cond_cf(_flag_k, _flag_a, _flag_b, CC_E, _cf)) goto L_171AB239; /* 0x171AB224: je 0x171ab239 */
L_171AB226:
    _flag_a = (uint32_t)(MEM32(ebp + (-0x4))); _flag_b = (uint32_t)(1);
    MEM32(ebp + (-0x4)) = MEM32(ebp + (-0x4)) + 1; /* 0x171AB226: inc dword ptr [ebp - 4] */
    _flag_k = FK_INC;
    eax = MEM32(ebp + (-0x4)); /* 0x171AB229: mov eax, dword ptr [ebp - 4] */
    /* cmp eax, MEM32(ebx) */ /* 0x171AB22C: cmp eax, dword ptr [ebx] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(ebx));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_171AB1E4; /* 0x171AB22E: jb 0x171ab1e4 */
L_171AB230:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x171AB230: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
L_171AB232:
    edi = POP32_VAL(esp); /* 0x171AB232: pop edi */
    esi = POP32_VAL(esp); /* 0x171AB233: pop esi */
    ebx = POP32_VAL(esp); /* 0x171AB234: pop ebx */
L_171AB235:
    esp = ebp; ebp = POP32_VAL(esp); /* 0x171AB235: leave  */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x171AB236: ret 4 */
L_171AB239:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x171AB239: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x171AB23B: inc eax */
    _flag_k = FK_INC;
    RECOMP_BACKEDGE();
    goto L_171AB232; /* 0x171AB23C: jmp 0x171ab232 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    RECOMP_REGS_OUT();
}

void sub_171AB243(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x171AB243u);

L_171AB243:
    edi = edi; /* 0x171AB243: mov edi, edi */
    PUSH32(esp, ebp); /* 0x171AB245: push ebp */
    ebp = esp; /* 0x171AB246: mov ebp, esp */
    eax = ebp + 0x8; /* 0x171AB248: lea eax, [ebp + 8] */
    PUSH32(esp, eax); /* 0x171AB24B: push eax */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x28u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 0x28u; /* 0x171AB24C: add ecx, 0x28 */
    _flag_k = FK_ADD;
    RECOMP_CALL(sub_171A902A); /* 0x171AB24F: call 0x171a902a */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x171AB254: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) == 0u)) goto L_171AB25F; /* 0x171AB256: jge 0x171ab25f */
L_171AB258:
    eax = 0x8007000Eu; /* 0x171AB258: mov eax, 0x8007000e */
    goto L_171AB26A; /* 0x171AB25D: jmp 0x171ab26a */
L_171AB25F:
    eax = MEM32(ebp + 0x8); /* 0x171AB25F: mov eax, dword ptr [ebp + 8] */
    ecx = MEM32(eax); /* 0x171AB262: mov ecx, dword ptr [eax] */
    PUSH32(esp, eax); /* 0x171AB264: push eax */
    RECOMP_ICALL(MEM32(ecx + 0x10)); /* 0x171AB265: call dword ptr [ecx + 0x10] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x171AB268: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
L_171AB26A:
    ebp = POP32_VAL(esp); /* 0x171AB26A: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x171AB26B: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_171AB273(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x171AB273u);

L_171AB273:
    edi = edi; /* 0x171AB273: mov edi, edi */
    PUSH32(esp, ebp); /* 0x171AB275: push ebp */
    ebp = esp; /* 0x171AB276: mov ebp, esp */
    PUSH32(esp, esi); /* 0x171AB278: push esi */
    PUSH32(esp, edi); /* 0x171AB279: push edi */
    edi = ecx; /* 0x171AB27A: mov edi, ecx */
    eax = MEM32(edi + 0x4); /* 0x171AB27C: mov eax, dword ptr [edi + 4] */
    /* test eax, eax */ /* 0x171AB27F: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_171AB2B6; /* 0x171AB281: je 0x171ab2b6 */
L_171AB283:
    esi = MEM32(ebp + 0x8); /* 0x171AB283: mov esi, dword ptr [ebp + 8] */
L_171AB286:
    SET_LO8(edx, MEM8(eax)); /* 0x171AB286: mov dl, byte ptr [eax] */
    SET_LO8(ecx, LO8(edx)); /* 0x171AB288: mov cl, dl */
    /* cmp LO8(edx), MEM8(esi) */ /* 0x171AB28A: cmp dl, byte ptr [esi] */
    _flag_a = (uint32_t)(LO8(edx)) << 24; _flag_b = (uint32_t)(MEM8(esi)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_171AB2A8; /* 0x171AB28C: jne 0x171ab2a8 */
L_171AB28E:
    /* test LO8(ecx), LO8(ecx) */ /* 0x171AB28E: test cl, cl */
    _flag_a = (uint32_t)(LO8(ecx)) << 24; _flag_b = (uint32_t)(LO8(ecx)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_171AB2A4; /* 0x171AB290: je 0x171ab2a4 */
L_171AB292:
    SET_LO8(edx, MEM8(eax + 0x1)); /* 0x171AB292: mov dl, byte ptr [eax + 1] */
    SET_LO8(ecx, LO8(edx)); /* 0x171AB295: mov cl, dl */
    /* cmp LO8(edx), MEM8(esi + 0x1) */ /* 0x171AB297: cmp dl, byte ptr [esi + 1] */
    _flag_a = (uint32_t)(LO8(edx)) << 24; _flag_b = (uint32_t)(MEM8(esi + 0x1)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_171AB2A8; /* 0x171AB29A: jne 0x171ab2a8 */
L_171AB29C:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x171AB29C: inc eax */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x171AB29D: inc eax */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi + 1; /* 0x171AB29E: inc esi */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi + 1; /* 0x171AB29F: inc esi */
    _flag_k = FK_INC;
    /* test LO8(ecx), LO8(ecx) */ /* 0x171AB2A0: test cl, cl */
    _flag_a = (uint32_t)(LO8(ecx)) << 24; _flag_b = (uint32_t)(LO8(ecx)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_171AB286; /* 0x171AB2A2: jne 0x171ab286 */
L_171AB2A4:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x171AB2A4: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_171AB2AD; /* 0x171AB2A6: jmp 0x171ab2ad */
L_171AB2A8:
    { uint32_t _sa = eax, _sb = eax, _sc = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x171AB2A8: sbb eax, eax */
      eax = _sc ? 0xFFFFFFFFu : 0;
      _flag_a = recomp_flags_sbb(_sa, _sb, _sc); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    { uint32_t _sa = eax, _sb = 0xFFFFFFFFu, _sc = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x171AB2AA: sbb eax, -1 */
      eax = _sa - _sb - _sc;
      _flag_a = recomp_flags_sbb(_sa, _sb, _sc); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
L_171AB2AD:
    /* test eax, eax */ /* 0x171AB2AD: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_171AB2B6; /* 0x171AB2AF: jne 0x171ab2b6 */
L_171AB2B1:
    eax = edi + (-0x4); /* 0x171AB2B1: lea eax, [edi - 4] */
    goto L_171AB2D7; /* 0x171AB2B4: jmp 0x171ab2d7 */
L_171AB2B6:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    esi = 0; /* 0x171AB2B6: xor esi, esi */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp MEM32(edi + 0x24), esi */ /* 0x171AB2B8: cmp dword ptr [edi + 0x24], esi */
    _flag_a = (uint32_t)(MEM32(edi + 0x24)); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_171AB2D5; /* 0x171AB2BB: jbe 0x171ab2d5 */
L_171AB2BD:
    eax = MEM32(edi + 0x30); /* 0x171AB2BD: mov eax, dword ptr [edi + 0x30] */
    ecx = MEM32(eax + esi * 4); /* 0x171AB2C0: mov ecx, dword ptr [eax + esi*4] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x171AB2C3: push dword ptr [ebp + 8] */
    eax = MEM32(ecx); /* 0x171AB2C6: mov eax, dword ptr [ecx] */
    RECOMP_ICALL(MEM32(eax + 0x20)); /* 0x171AB2C8: call dword ptr [eax + 0x20] */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x171AB2CB: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_171AB2D7; /* 0x171AB2CD: jne 0x171ab2d7 */
L_171AB2CF:
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi + 1; /* 0x171AB2CF: inc esi */
    _flag_k = FK_INC;
    /* cmp esi, MEM32(edi + 0x24) */ /* 0x171AB2D0: cmp esi, dword ptr [edi + 0x24] */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(MEM32(edi + 0x24));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_171AB2BD; /* 0x171AB2D3: jb 0x171ab2bd */
L_171AB2D5:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x171AB2D5: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
L_171AB2D7:
    edi = POP32_VAL(esp); /* 0x171AB2D7: pop edi */
    esi = POP32_VAL(esp); /* 0x171AB2D8: pop esi */
    ebp = POP32_VAL(esp); /* 0x171AB2D9: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x171AB2DA: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_171AB2E2(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x171AB2E2u);

L_171AB2E2:
    edi = edi; /* 0x171AB2E2: mov edi, edi */
    PUSH32(esp, ebp); /* 0x171AB2E4: push ebp */
    ebp = esp; /* 0x171AB2E5: mov ebp, esp */
    PUSH32(esp, ebx); /* 0x171AB2E7: push ebx */
    PUSH32(esp, esi); /* 0x171AB2E8: push esi */
    PUSH32(esp, edi); /* 0x171AB2E9: push edi */
    edi = MEM32(ebp + 0x8); /* 0x171AB2EA: mov edi, dword ptr [ebp + 8] */
    ebx = ecx; /* 0x171AB2ED: mov ebx, ecx */
    PUSH32(esp, 4); /* 0x171AB2EF: push 4 */
    ecx = POP32_VAL(esp); /* 0x171AB2F1: pop ecx */
    esi = ebx + 0x8; /* 0x171AB2F2: lea esi, [ebx + 8] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x171AB2F5: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    if (ecx) { uint32_t _a = 0, _b = 0; while (ecx) { _a = MEM32(esi); _b = MEM32(edi); esi += (_df * 4); edi += (_df * 4); ecx--; if (_a != _b) break; } _flag_a = _a; _flag_b = _b; _cf = (uint32_t)CMP_B(_a, _b); _flag_k = FK_CMP; } /* 0x171AB2F7: repe cmpsd dword ptr [esi], dword ptr es:[edi] */
    if (recomp_cond_cf(_flag_k, _flag_a, _flag_b, CC_NE, _cf)) goto L_171AB300; /* 0x171AB2F9: jne 0x171ab300 */
L_171AB2FB:
    eax = ebx + (-0x4); /* 0x171AB2FB: lea eax, [ebx - 4] */
    goto L_171AB321; /* 0x171AB2FE: jmp 0x171ab321 */
L_171AB300:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    esi = 0; /* 0x171AB300: xor esi, esi */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp MEM32(ebx + 0x24), esi */ /* 0x171AB302: cmp dword ptr [ebx + 0x24], esi */
    _flag_a = (uint32_t)(MEM32(ebx + 0x24)); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_171AB31F; /* 0x171AB305: jbe 0x171ab31f */
L_171AB307:
    eax = MEM32(ebx + 0x30); /* 0x171AB307: mov eax, dword ptr [ebx + 0x30] */
    ecx = MEM32(eax + esi * 4); /* 0x171AB30A: mov ecx, dword ptr [eax + esi*4] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x171AB30D: push dword ptr [ebp + 8] */
    eax = MEM32(ecx); /* 0x171AB310: mov eax, dword ptr [ecx] */
    RECOMP_ICALL(MEM32(eax + 0x1C)); /* 0x171AB312: call dword ptr [eax + 0x1c] */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x171AB315: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_171AB321; /* 0x171AB317: jne 0x171ab321 */
L_171AB319:
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi + 1; /* 0x171AB319: inc esi */
    _flag_k = FK_INC;
    /* cmp esi, MEM32(ebx + 0x24) */ /* 0x171AB31A: cmp esi, dword ptr [ebx + 0x24] */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(MEM32(ebx + 0x24));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_171AB307; /* 0x171AB31D: jb 0x171ab307 */
L_171AB31F:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x171AB31F: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
L_171AB321:
    edi = POP32_VAL(esp); /* 0x171AB321: pop edi */
    esi = POP32_VAL(esp); /* 0x171AB322: pop esi */
    ebx = POP32_VAL(esp); /* 0x171AB323: pop ebx */
    ebp = POP32_VAL(esp); /* 0x171AB324: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x171AB325: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_171AB32D(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x171AB32Du);

L_171AB32D:
    edi = edi; /* 0x171AB32D: mov edi, edi */
    PUSH32(esp, ebp); /* 0x171AB32F: push ebp */
    ebp = esp; /* 0x171AB330: mov ebp, esp */
    PUSH32(esp, edi); /* 0x171AB332: push edi */
    edi = MEM32(ebp + 0xC); /* 0x171AB333: mov edi, dword ptr [ebp + 0xc] */
    /* test edi, edi */ /* 0x171AB336: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_171AB358; /* 0x171AB338: je 0x171ab358 */
L_171AB33A:
    eax = MEM32(ebp + 0x8); /* 0x171AB33A: mov eax, dword ptr [ebp + 8] */
    eax = MEM32(eax + 0x24); /* 0x171AB33D: mov eax, dword ptr [eax + 0x24] */
    /* test eax, eax */ /* 0x171AB340: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_171AB351; /* 0x171AB342: je 0x171ab351 */
L_171AB344:
    PUSH32(esp, esi); /* 0x171AB344: push esi */
    esi = eax + 0x8; /* 0x171AB345: lea esi, [eax + 8] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x171AB348: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x171AB349: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x171AB34A: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x171AB34B: movsd dword ptr es:[edi], dword ptr [esi] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x171AB34C: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    esi = POP32_VAL(esp); /* 0x171AB34E: pop esi */
    goto L_171AB35D; /* 0x171AB34F: jmp 0x171ab35d */
L_171AB351:
    eax = 0x88760384u; /* 0x171AB351: mov eax, 0x88760384 */
    goto L_171AB35D; /* 0x171AB356: jmp 0x171ab35d */
L_171AB358:
    eax = 0x88760385u; /* 0x171AB358: mov eax, 0x88760385 */
L_171AB35D:
    edi = POP32_VAL(esp); /* 0x171AB35D: pop edi */
    ebp = POP32_VAL(esp); /* 0x171AB35E: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 12; { RECOMP_REGS_OUT(); return; } /* 0x171AB35F: ret 8 */
    RECOMP_REGS_OUT();
}

void sub_171AB367(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x171AB367u);

L_171AB367:
    edi = edi; /* 0x171AB367: mov edi, edi */
    PUSH32(esp, ebp); /* 0x171AB369: push ebp */
    ebp = esp; /* 0x171AB36A: mov ebp, esp */
    eax = MEM32(ebp + 0xC); /* 0x171AB36C: mov eax, dword ptr [ebp + 0xc] */
    /* test eax, eax */ /* 0x171AB36F: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_171AB37F; /* 0x171AB371: je 0x171ab37f */
L_171AB373:
    ecx = MEM32(ebp + 0x8); /* 0x171AB373: mov ecx, dword ptr [ebp + 8] */
    ecx = MEM32(ecx + 0x28); /* 0x171AB376: mov ecx, dword ptr [ecx + 0x28] */
    MEM32(eax) = ecx; /* 0x171AB379: mov dword ptr [eax], ecx */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x171AB37B: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_171AB384; /* 0x171AB37D: jmp 0x171ab384 */
L_171AB37F:
    eax = 0x88760385u; /* 0x171AB37F: mov eax, 0x88760385 */
L_171AB384:
    ebp = POP32_VAL(esp); /* 0x171AB384: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 12; { RECOMP_REGS_OUT(); return; } /* 0x171AB385: ret 8 */
    RECOMP_REGS_OUT();
}

void sub_171AB38D(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x171AB38Du);

L_171AB38D:
    edi = edi; /* 0x171AB38D: mov edi, edi */
    PUSH32(esp, ebp); /* 0x171AB38F: push ebp */
    ebp = esp; /* 0x171AB390: mov ebp, esp */
    /* cmp MEM32(ebp + 0x10), 0 */ /* 0x171AB392: cmp dword ptr [ebp + 0x10], 0 */
    _flag_a = (uint32_t)(MEM32(ebp + 0x10)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_171AB3C0; /* 0x171AB396: je 0x171ab3c0 */
L_171AB398:
    eax = MEM32(ebp + 0xC); /* 0x171AB398: mov eax, dword ptr [ebp + 0xc] */
    ecx = MEM32(ebp + 0x8); /* 0x171AB39B: mov ecx, dword ptr [ebp + 8] */
    /* cmp eax, MEM32(ecx + 0x28) */ /* 0x171AB39E: cmp eax, dword ptr [ecx + 0x28] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(ecx + 0x28));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_AE(_flag_a, _flag_b)) goto L_171AB3B9; /* 0x171AB3A1: jae 0x171ab3b9 */
L_171AB3A3:
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x171AB3A3: push dword ptr [ebp + 0x10] */
    ecx = MEM32(ecx + 0x34); /* 0x171AB3A6: mov ecx, dword ptr [ecx + 0x34] */
    eax = MEM32(ecx + eax * 4); /* 0x171AB3A9: mov eax, dword ptr [ecx + eax*4] */
    ecx = MEM32(eax); /* 0x171AB3AC: mov ecx, dword ptr [eax] */
    PUSH32(esp, 0x17001C00u); /* 0x171AB3AE: push 0x17001c00 */
    PUSH32(esp, eax); /* 0x171AB3B3: push eax */
    RECOMP_ICALL(MEM32(ecx + 0xC)); /* 0x171AB3B4: call dword ptr [ecx + 0xc] */
    RECOMP_FLAGS_IN();
    goto L_171AB3C5; /* 0x171AB3B7: jmp 0x171ab3c5 */
L_171AB3B9:
    eax = 0x88760393u; /* 0x171AB3B9: mov eax, 0x88760393 */
    goto L_171AB3C5; /* 0x171AB3BE: jmp 0x171ab3c5 */
L_171AB3C0:
    eax = 0x88760385u; /* 0x171AB3C0: mov eax, 0x88760385 */
L_171AB3C5:
    ebp = POP32_VAL(esp); /* 0x171AB3C5: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 16; { RECOMP_REGS_OUT(); return; } /* 0x171AB3C6: ret 0xc */
    RECOMP_REGS_OUT();
}

void sub_171AB3CE(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x171AB3CEu);

    goto L_171AB3CE;
L_171AB082:
    MEM32(ecx) = 0x17023AB4u; /* 0x171AB082: mov dword ptr [ecx], 0x17023ab4 */
    ecx = MEM32(ecx + 0x4); /* 0x171AB088: mov ecx, dword ptr [ecx + 4] */
    /* test ecx, ecx */ /* 0x171AB08B: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_171AB096; /* 0x171AB08D: je 0x171ab096 */
L_171AB08F:
    PUSH32(esp, ecx); /* 0x171AB08F: push ecx */
    RECOMP_CALL(sub_1721B224); /* 0x171AB090: call 0x1721b224 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x171AB095: pop ecx */
L_171AB096:
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x171AB096: ret  */
L_171AB3CE:
    edi = edi; /* 0x171AB3CE: mov edi, edi */
    PUSH32(esp, esi); /* 0x171AB3D0: push esi */
    esi = ecx; /* 0x171AB3D1: mov esi, ecx */
    eax = MEM32(esi + 0x20); /* 0x171AB3D3: mov eax, dword ptr [esi + 0x20] */
    /* test eax, eax */ /* 0x171AB3D6: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, edi); /* 0x171AB3D8: push edi */
    edi = esi + 0x4; /* 0x171AB3D9: lea edi, [esi + 4] */
    MEM32(esi) = 0x17023B0Cu; /* 0x171AB3DC: mov dword ptr [esi], 0x17023b0c */
    MEM32(edi) = 0x17023AE0u; /* 0x171AB3E2: mov dword ptr [edi], 0x17023ae0 */
    if (TEST_Z(_flag_a, _flag_b)) goto L_171AB3F1; /* 0x171AB3E8: je 0x171ab3f1 */
L_171AB3EA:
    PUSH32(esp, eax); /* 0x171AB3EA: push eax */
    RECOMP_CALL(sub_1721B224); /* 0x171AB3EB: call 0x1721b224 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x171AB3F0: pop ecx */
L_171AB3F1:
    esi = MEM32(esi + 0x34); /* 0x171AB3F1: mov esi, dword ptr [esi + 0x34] */
    /* test esi, esi */ /* 0x171AB3F4: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_171AB3FE; /* 0x171AB3F6: je 0x171ab3fe */
L_171AB3F8:
    eax = MEM32(esi); /* 0x171AB3F8: mov eax, dword ptr [esi] */
    PUSH32(esp, esi); /* 0x171AB3FA: push esi */
    RECOMP_ICALL(MEM32(eax + 0x8)); /* 0x171AB3FB: call dword ptr [eax + 8] */
    RECOMP_FLAGS_IN();
L_171AB3FE:
    ecx = edi; /* 0x171AB3FE: mov ecx, edi */
    edi = POP32_VAL(esp); /* 0x171AB400: pop edi */
    esi = POP32_VAL(esp); /* 0x171AB401: pop esi */
    RECOMP_BACKEDGE();
    goto L_171AB082; /* 0x171AB402: jmp 0x171ab082 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    RECOMP_REGS_OUT();
}

void sub_171AB40C(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x171AB40Cu);

L_171AB40C:
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ecx = ecx - 4; /* 0x171AB40C: sub ecx, 4 */
    _flag_k = FK_CMP;
    goto L_171ABAD4; /* 0x171AB40F: jmp 0x171abad4 */
L_171ABAD4:
    edi = edi; /* 0x171ABAD4: mov edi, edi */
    PUSH32(esp, ebp); /* 0x171ABAD6: push ebp */
    ebp = esp; /* 0x171ABAD7: mov ebp, esp */
    PUSH32(esp, esi); /* 0x171ABAD9: push esi */
    esi = ecx; /* 0x171ABADA: mov esi, ecx */
    RECOMP_CALL(sub_171AB3CE); /* 0x171ABADC: call 0x171ab3ce */
    RECOMP_FLAGS_IN();
    /* test MEM8(ebp + 0x8), 1 */ /* 0x171ABAE1: test byte ptr [ebp + 8], 1 */
    _flag_a = (uint32_t)(MEM8(ebp + 0x8)) << 24; _flag_b = (uint32_t)(1) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_171ABAEE; /* 0x171ABAE5: je 0x171abaee */
L_171ABAE7:
    PUSH32(esp, esi); /* 0x171ABAE7: push esi */
    RECOMP_CALL(sub_1721B010); /* 0x171ABAE8: call 0x1721b010 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x171ABAED: pop ecx */
L_171ABAEE:
    eax = esi; /* 0x171ABAEE: mov eax, esi */
    esi = POP32_VAL(esp); /* 0x171ABAF0: pop esi */
    ebp = POP32_VAL(esp); /* 0x171ABAF1: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x171ABAF2: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_171AB419(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x171AB419u);

L_171AB419:
    edi = edi; /* 0x171AB419: mov edi, edi */
    PUSH32(esp, ebp); /* 0x171AB41B: push ebp */
    ebp = esp; /* 0x171AB41C: mov ebp, esp */
    eax = MEM32(ebp + 0x8); /* 0x171AB41E: mov eax, dword ptr [ebp + 8] */
    eax = MEM32(eax + 0x24); /* 0x171AB421: mov eax, dword ptr [eax + 0x24] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x171AB424: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp MEM32(eax + 0x24), 1 */ /* 0x171AB426: cmp dword ptr [eax + 0x24], 1 */
    _flag_a = (uint32_t)(MEM32(eax + 0x24)); _flag_b = (uint32_t)(1);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    SET_LO8(ecx, (CMP_NE(_flag_a, _flag_b)) ? 1 : 0); /* 0x171AB42A: setne cl */
    eax = ecx; /* 0x171AB42D: mov eax, ecx */
    ebp = POP32_VAL(esp); /* 0x171AB42F: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x171AB430: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_171AB438(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x171AB438u);

L_171AB438:
    edi = edi; /* 0x171AB438: mov edi, edi */
    PUSH32(esp, ebp); /* 0x171AB43A: push ebp */
    ebp = esp; /* 0x171AB43B: mov ebp, esp */
    eax = MEM32(ebp + 0x8); /* 0x171AB43D: mov eax, dword ptr [ebp + 8] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 4; /* 0x171AB440: add eax, 4 */
    _flag_k = FK_ADD;
    PUSH32(esp, eax); /* 0x171AB443: push eax */
    RECOMP_CALL(sub_171B1588); /* 0x171AB444: call 0x171b1588 */
    RECOMP_FLAGS_IN();
    ebp = POP32_VAL(esp); /* 0x171AB449: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x171AB44A: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_171AB452(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x171AB452u);

L_171AB452:
    edi = edi; /* 0x171AB452: mov edi, edi */
    PUSH32(esp, ebp); /* 0x171AB454: push ebp */
    ebp = esp; /* 0x171AB455: mov ebp, esp */
    eax = MEM32(ebp + 0x8); /* 0x171AB457: mov eax, dword ptr [ebp + 8] */
    eax = MEM32(eax + 0x34); /* 0x171AB45A: mov eax, dword ptr [eax + 0x34] */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x171AB45D: push dword ptr [ebp + 0xc] */
    ecx = MEM32(eax); /* 0x171AB460: mov ecx, dword ptr [eax] */
    PUSH32(esp, eax); /* 0x171AB462: push eax */
    RECOMP_ICALL(MEM32(ecx + 0xC)); /* 0x171AB463: call dword ptr [ecx + 0xc] */
    RECOMP_FLAGS_IN();
    ebp = POP32_VAL(esp); /* 0x171AB466: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 12; { RECOMP_REGS_OUT(); return; } /* 0x171AB467: ret 8 */
    RECOMP_REGS_OUT();
}

void sub_171AB46F(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x171AB46Fu);

L_171AB46F:
    edi = edi; /* 0x171AB46F: mov edi, edi */
    PUSH32(esp, ebp); /* 0x171AB471: push ebp */
    ebp = esp; /* 0x171AB472: mov ebp, esp */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x171AB474: push dword ptr [ebp + 0x10] */
    eax = MEM32(ebp + 0x8); /* 0x171AB477: mov eax, dword ptr [ebp + 8] */
    eax = MEM32(eax + 0x34); /* 0x171AB47A: mov eax, dword ptr [eax + 0x34] */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x171AB47D: push dword ptr [ebp + 0xc] */
    ecx = MEM32(eax); /* 0x171AB480: mov ecx, dword ptr [eax] */
    PUSH32(esp, eax); /* 0x171AB482: push eax */
    RECOMP_ICALL(MEM32(ecx + 0x10)); /* 0x171AB483: call dword ptr [ecx + 0x10] */
    RECOMP_FLAGS_IN();
    ebp = POP32_VAL(esp); /* 0x171AB486: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 16; { RECOMP_REGS_OUT(); return; } /* 0x171AB487: ret 0xc */
    RECOMP_REGS_OUT();
}

void sub_171AB48F(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x171AB48Fu);

L_171AB48F:
    edi = edi; /* 0x171AB48F: mov edi, edi */
    PUSH32(esp, ebp); /* 0x171AB491: push ebp */
    ebp = esp; /* 0x171AB492: mov ebp, esp */
    eax = MEM32(ebp + 0x8); /* 0x171AB494: mov eax, dword ptr [ebp + 8] */
    eax = MEM32(eax + 0x34); /* 0x171AB497: mov eax, dword ptr [eax + 0x34] */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x171AB49A: push dword ptr [ebp + 0xc] */
    ecx = MEM32(eax); /* 0x171AB49D: mov ecx, dword ptr [eax] */
    PUSH32(esp, eax); /* 0x171AB49F: push eax */
    RECOMP_ICALL(MEM32(ecx + 0x14)); /* 0x171AB4A0: call dword ptr [ecx + 0x14] */
    RECOMP_FLAGS_IN();
    ebp = POP32_VAL(esp); /* 0x171AB4A3: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 12; { RECOMP_REGS_OUT(); return; } /* 0x171AB4A4: ret 8 */
    RECOMP_REGS_OUT();
}

void sub_171AB4AC(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x171AB4ACu);

L_171AB4AC:
    edi = edi; /* 0x171AB4AC: mov edi, edi */
    PUSH32(esp, ebp); /* 0x171AB4AE: push ebp */
    ebp = esp; /* 0x171AB4AF: mov ebp, esp */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x171AB4B1: push dword ptr [ebp + 0x10] */
    eax = MEM32(ebp + 0x8); /* 0x171AB4B4: mov eax, dword ptr [ebp + 8] */
    eax = MEM32(eax + 0x34); /* 0x171AB4B7: mov eax, dword ptr [eax + 0x34] */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x171AB4BA: push dword ptr [ebp + 0xc] */
    ecx = MEM32(eax); /* 0x171AB4BD: mov ecx, dword ptr [eax] */
    PUSH32(esp, eax); /* 0x171AB4BF: push eax */
    RECOMP_ICALL(MEM32(ecx + 0x18)); /* 0x171AB4C0: call dword ptr [ecx + 0x18] */
    RECOMP_FLAGS_IN();
    ebp = POP32_VAL(esp); /* 0x171AB4C3: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 16; { RECOMP_REGS_OUT(); return; } /* 0x171AB4C4: ret 0xc */
    RECOMP_REGS_OUT();
}

void sub_171AB4CC(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x171AB4CCu);

L_171AB4CC:
    edi = edi; /* 0x171AB4CC: mov edi, edi */
    PUSH32(esp, ebp); /* 0x171AB4CE: push ebp */
    ebp = esp; /* 0x171AB4CF: mov ebp, esp */
    eax = MEM32(ebp + 0x8); /* 0x171AB4D1: mov eax, dword ptr [ebp + 8] */
    eax = MEM32(eax + 0x34); /* 0x171AB4D4: mov eax, dword ptr [eax + 0x34] */
    ecx = MEM32(eax); /* 0x171AB4D7: mov ecx, dword ptr [eax] */
    PUSH32(esp, eax); /* 0x171AB4D9: push eax */
    RECOMP_ICALL(MEM32(ecx + 0x1C)); /* 0x171AB4DA: call dword ptr [ecx + 0x1c] */
    RECOMP_FLAGS_IN();
    ebp = POP32_VAL(esp); /* 0x171AB4DD: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x171AB4DE: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_171AB4E6(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x171AB4E6u);

L_171AB4E6:
    edi = edi; /* 0x171AB4E6: mov edi, edi */
    PUSH32(esp, ebp); /* 0x171AB4E8: push ebp */
    ebp = esp; /* 0x171AB4E9: mov ebp, esp */
    eax = MEM32(ebp + 0x8); /* 0x171AB4EB: mov eax, dword ptr [ebp + 8] */
    eax = MEM32(eax + 0x34); /* 0x171AB4EE: mov eax, dword ptr [eax + 0x34] */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x171AB4F1: push dword ptr [ebp + 0xc] */
    ecx = MEM32(eax); /* 0x171AB4F4: mov ecx, dword ptr [eax] */
    PUSH32(esp, eax); /* 0x171AB4F6: push eax */
    RECOMP_ICALL(MEM32(ecx + 0x20)); /* 0x171AB4F7: call dword ptr [ecx + 0x20] */
    RECOMP_FLAGS_IN();
    ebp = POP32_VAL(esp); /* 0x171AB4FA: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 12; { RECOMP_REGS_OUT(); return; } /* 0x171AB4FB: ret 8 */
    RECOMP_REGS_OUT();
}

void sub_171AB503(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x171AB503u);

L_171AB503:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x171AB503: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x171AB505: inc eax */
    _flag_k = FK_INC;
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x171AB506: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_171AB50E(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x171AB50Eu);

L_171AB50E:
    edi = edi; /* 0x171AB50E: mov edi, edi */
    PUSH32(esp, ebp); /* 0x171AB510: push ebp */
    ebp = esp; /* 0x171AB511: mov ebp, esp */
    eax = MEM32(ebp + 0x8); /* 0x171AB513: mov eax, dword ptr [ebp + 8] */
    eax = MEM32(eax + 0x34); /* 0x171AB516: mov eax, dword ptr [eax + 0x34] */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x171AB519: push dword ptr [ebp + 0xc] */
    ecx = MEM32(eax); /* 0x171AB51C: mov ecx, dword ptr [eax] */
    PUSH32(esp, eax); /* 0x171AB51E: push eax */
    RECOMP_ICALL(MEM32(ecx + 0x28)); /* 0x171AB51F: call dword ptr [ecx + 0x28] */
    RECOMP_FLAGS_IN();
    ebp = POP32_VAL(esp); /* 0x171AB522: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 12; { RECOMP_REGS_OUT(); return; } /* 0x171AB523: ret 8 */
    RECOMP_REGS_OUT();
}

void sub_171AB52B(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x171AB52Bu);

L_171AB52B:
    edi = edi; /* 0x171AB52B: mov edi, edi */
    PUSH32(esp, ebp); /* 0x171AB52D: push ebp */
    ebp = esp; /* 0x171AB52E: mov ebp, esp */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x171AB530: push dword ptr [ebp + 0x10] */
    eax = MEM32(ebp + 0x8); /* 0x171AB533: mov eax, dword ptr [ebp + 8] */
    eax = MEM32(eax + 0x34); /* 0x171AB536: mov eax, dword ptr [eax + 0x34] */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x171AB539: push dword ptr [ebp + 0xc] */
    ecx = MEM32(eax); /* 0x171AB53C: mov ecx, dword ptr [eax] */
    PUSH32(esp, eax); /* 0x171AB53E: push eax */
    RECOMP_ICALL(MEM32(ecx + 0x2C)); /* 0x171AB53F: call dword ptr [ecx + 0x2c] */
    RECOMP_FLAGS_IN();
    ebp = POP32_VAL(esp); /* 0x171AB542: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 16; { RECOMP_REGS_OUT(); return; } /* 0x171AB543: ret 0xc */
    RECOMP_REGS_OUT();
}

void sub_171AB54B(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x171AB54Bu);

L_171AB54B:
    edi = edi; /* 0x171AB54B: mov edi, edi */
    PUSH32(esp, ebp); /* 0x171AB54D: push ebp */
    ebp = esp; /* 0x171AB54E: mov ebp, esp */
    PUSH32(esp, esi); /* 0x171AB550: push esi */
    esi = MEM32(ebp + 0x8); /* 0x171AB551: mov esi, dword ptr [ebp + 8] */
    PUSH32(esp, edi); /* 0x171AB554: push edi */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edi = 0; /* 0x171AB555: xor edi, edi */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp MEM32(esi + 0x4), edi */ /* 0x171AB557: cmp dword ptr [esi + 4], edi */
    _flag_a = (uint32_t)(MEM32(esi + 0x4)); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_171AB56E; /* 0x171AB55A: jbe 0x171ab56e */
L_171AB55C:
    eax = MEM32(esi + 0x10); /* 0x171AB55C: mov eax, dword ptr [esi + 0x10] */
    PUSH32(esp, MEM32(eax + edi * 4)); /* 0x171AB55F: push dword ptr [eax + edi*4] */
    RECOMP_CALL(sub_1721B224); /* 0x171AB562: call 0x1721b224 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(1);
    edi = edi + 1; /* 0x171AB567: inc edi */
    _flag_k = FK_INC;
    /* cmp edi, MEM32(esi + 0x4) */ /* 0x171AB568: cmp edi, dword ptr [esi + 4] */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(MEM32(esi + 0x4));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    ecx = POP32_VAL(esp); /* 0x171AB56B: pop ecx */
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_171AB55C; /* 0x171AB56C: jb 0x171ab55c */
L_171AB56E:
    eax = MEM32(esi); /* 0x171AB56E: mov eax, dword ptr [esi] */
    PUSH32(esp, 1); /* 0x171AB570: push 1 */
    ecx = esi; /* 0x171AB572: mov ecx, esi */
    RECOMP_ICALL(MEM32(eax + 0x8)); /* 0x171AB574: call dword ptr [eax + 8] */
    RECOMP_FLAGS_IN();
    edi = POP32_VAL(esp); /* 0x171AB577: pop edi */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x171AB578: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    esi = POP32_VAL(esp); /* 0x171AB57A: pop esi */
    ebp = POP32_VAL(esp); /* 0x171AB57B: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x171AB57C: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_171AB584(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x171AB584u);

    goto L_171AB584;
L_171AB46F:
    edi = edi; /* 0x171AB46F: mov edi, edi */
    PUSH32(esp, ebp); /* 0x171AB471: push ebp */
    ebp = esp; /* 0x171AB472: mov ebp, esp */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x171AB474: push dword ptr [ebp + 0x10] */
    eax = MEM32(ebp + 0x8); /* 0x171AB477: mov eax, dword ptr [ebp + 8] */
    eax = MEM32(eax + 0x34); /* 0x171AB47A: mov eax, dword ptr [eax + 0x34] */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x171AB47D: push dword ptr [ebp + 0xc] */
    ecx = MEM32(eax); /* 0x171AB480: mov ecx, dword ptr [eax] */
    PUSH32(esp, eax); /* 0x171AB482: push eax */
    RECOMP_ICALL(MEM32(ecx + 0x10)); /* 0x171AB483: call dword ptr [ecx + 0x10] */
    RECOMP_FLAGS_IN();
    ebp = POP32_VAL(esp); /* 0x171AB486: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 16; { RECOMP_REGS_OUT(); return; } /* 0x171AB487: ret 0xc */
L_171AB584:
    _flag_a = (uint32_t)(MEM32(esp + 0x4)); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    MEM32(esp + 0x4) = MEM32(esp + 0x4) - 4; /* 0x171AB584: sub dword ptr [esp + 4], 4 */
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    goto L_171AB46F; /* 0x171AB589: jmp 0x171ab46f */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    RECOMP_REGS_OUT();
}

void sub_171AB593(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x171AB593u);

    goto L_171AB593;
L_171AB48F:
    edi = edi; /* 0x171AB48F: mov edi, edi */
    PUSH32(esp, ebp); /* 0x171AB491: push ebp */
    ebp = esp; /* 0x171AB492: mov ebp, esp */
    eax = MEM32(ebp + 0x8); /* 0x171AB494: mov eax, dword ptr [ebp + 8] */
    eax = MEM32(eax + 0x34); /* 0x171AB497: mov eax, dword ptr [eax + 0x34] */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x171AB49A: push dword ptr [ebp + 0xc] */
    ecx = MEM32(eax); /* 0x171AB49D: mov ecx, dword ptr [eax] */
    PUSH32(esp, eax); /* 0x171AB49F: push eax */
    RECOMP_ICALL(MEM32(ecx + 0x14)); /* 0x171AB4A0: call dword ptr [ecx + 0x14] */
    RECOMP_FLAGS_IN();
    ebp = POP32_VAL(esp); /* 0x171AB4A3: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 12; { RECOMP_REGS_OUT(); return; } /* 0x171AB4A4: ret 8 */
L_171AB593:
    _flag_a = (uint32_t)(MEM32(esp + 0x4)); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    MEM32(esp + 0x4) = MEM32(esp + 0x4) - 4; /* 0x171AB593: sub dword ptr [esp + 4], 4 */
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    goto L_171AB48F; /* 0x171AB598: jmp 0x171ab48f */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    RECOMP_REGS_OUT();
}

void sub_171AB5A2(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x171AB5A2u);

L_171AB5A2:
    edi = edi; /* 0x171AB5A2: mov edi, edi */
    PUSH32(esp, ebp); /* 0x171AB5A4: push ebp */
    ebp = esp; /* 0x171AB5A5: mov ebp, esp */
    PUSH32(esp, esi); /* 0x171AB5A7: push esi */
    esi = MEM32(ebp + 0xC); /* 0x171AB5A8: mov esi, dword ptr [ebp + 0xc] */
    PUSH32(esp, edi); /* 0x171AB5AB: push edi */
    eax = ecx; /* 0x171AB5AC: mov eax, ecx */
    ecx = MEM32(ebp + 0x8); /* 0x171AB5AE: mov ecx, dword ptr [ebp + 8] */
    MEM32(eax) = 0x17023AB4u; /* 0x171AB5B1: mov dword ptr [eax], 0x17023ab4 */
    MEM32(eax + 0x4) = ecx; /* 0x171AB5B7: mov dword ptr [eax + 4], ecx */
    edi = eax + 0x8; /* 0x171AB5BA: lea edi, [eax + 8] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x171AB5BD: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x171AB5BE: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x171AB5BF: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x171AB5C0: movsd dword ptr es:[edi], dword ptr [esi] */
    edi = POP32_VAL(esp); /* 0x171AB5C1: pop edi */
    MEM32(eax + 0x18) = 1; /* 0x171AB5C2: mov dword ptr [eax + 0x18], 1 */
    esi = POP32_VAL(esp); /* 0x171AB5C9: pop esi */
    ebp = POP32_VAL(esp); /* 0x171AB5CA: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 12; { RECOMP_REGS_OUT(); return; } /* 0x171AB5CB: ret 8 */
    RECOMP_REGS_OUT();
}

void sub_171AB5D3(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x171AB5D3u);

L_171AB5D3:
    edi = edi; /* 0x171AB5D3: mov edi, edi */
    PUSH32(esp, ebp); /* 0x171AB5D5: push ebp */
    ebp = esp; /* 0x171AB5D6: mov ebp, esp */
    PUSH32(esp, ecx); /* 0x171AB5D8: push ecx */
    eax = MEM32(ebp + 0x10); /* 0x171AB5D9: mov eax, dword ptr [ebp + 0x10] */
    PUSH32(esp, ebx); /* 0x171AB5DC: push ebx */
    PUSH32(esp, esi); /* 0x171AB5DD: push esi */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ebx = 0; /* 0x171AB5DE: xor ebx, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
    esi = ecx; /* 0x171AB5E0: mov esi, ecx */
    MEM32(eax) = ebx; /* 0x171AB5E2: mov dword ptr [eax], ebx */
    eax = MEM32(esi + 0x2C); /* 0x171AB5E4: mov eax, dword ptr [esi + 0x2c] */
    /* cmp eax, ebx */ /* 0x171AB5E7: cmp eax, ebx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    PUSH32(esp, edi); /* 0x171AB5E9: push edi */
    MEM32(ebp + (-0x4)) = esi; /* 0x171AB5EA: mov dword ptr [ebp - 4], esi */
    if (CMP_EQ(_flag_a, _flag_b)) goto L_171AB64A; /* 0x171AB5ED: je 0x171ab64a */
L_171AB5EF:
    /* cmp MEM32(eax), ebx */ /* 0x171AB5EF: cmp dword ptr [eax], ebx */
    _flag_a = (uint32_t)(MEM32(eax)); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_171AB64A; /* 0x171AB5F1: jbe 0x171ab64a */
L_171AB5F3:
    eax = MEM32(eax + 0xC); /* 0x171AB5F3: mov eax, dword ptr [eax + 0xc] */
    eax = MEM32(eax + ebx * 4); /* 0x171AB5F6: mov eax, dword ptr [eax + ebx*4] */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x171AB5F9: push dword ptr [ebp + 0xc] */
    ecx = eax + 0x4; /* 0x171AB5FC: lea ecx, [eax + 4] */
    eax = MEM32(ecx); /* 0x171AB5FF: mov eax, dword ptr [ecx] */
    RECOMP_ICALL(MEM32(eax + 0x1C)); /* 0x171AB601: call dword ptr [eax + 0x1c] */
    RECOMP_FLAGS_IN();
    edi = eax; /* 0x171AB604: mov edi, eax */
    /* test edi, edi */ /* 0x171AB606: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_171AB642; /* 0x171AB608: je 0x171ab642 */
L_171AB60A:
    esi = MEM32(edi + 0x8); /* 0x171AB60A: mov esi, dword ptr [edi + 8] */
    /* test esi, esi */ /* 0x171AB60D: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_171AB63F; /* 0x171AB60F: je 0x171ab63f */
L_171AB611:
    ecx = MEM32(ebp + 0x8); /* 0x171AB611: mov ecx, dword ptr [ebp + 8] */
L_171AB614:
    SET_LO8(edx, MEM8(ecx)); /* 0x171AB614: mov dl, byte ptr [ecx] */
    SET_LO8(eax, LO8(edx)); /* 0x171AB616: mov al, dl */
    /* cmp LO8(edx), MEM8(esi) */ /* 0x171AB618: cmp dl, byte ptr [esi] */
    _flag_a = (uint32_t)(LO8(edx)) << 24; _flag_b = (uint32_t)(MEM8(esi)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_171AB636; /* 0x171AB61A: jne 0x171ab636 */
L_171AB61C:
    /* test LO8(eax), LO8(eax) */ /* 0x171AB61C: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_171AB632; /* 0x171AB61E: je 0x171ab632 */
L_171AB620:
    SET_LO8(edx, MEM8(ecx + 0x1)); /* 0x171AB620: mov dl, byte ptr [ecx + 1] */
    SET_LO8(eax, LO8(edx)); /* 0x171AB623: mov al, dl */
    /* cmp LO8(edx), MEM8(esi + 0x1) */ /* 0x171AB625: cmp dl, byte ptr [esi + 1] */
    _flag_a = (uint32_t)(LO8(edx)) << 24; _flag_b = (uint32_t)(MEM8(esi + 0x1)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_171AB636; /* 0x171AB628: jne 0x171ab636 */
L_171AB62A:
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx + 1; /* 0x171AB62A: inc ecx */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx + 1; /* 0x171AB62B: inc ecx */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi + 1; /* 0x171AB62C: inc esi */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi + 1; /* 0x171AB62D: inc esi */
    _flag_k = FK_INC;
    /* test LO8(eax), LO8(eax) */ /* 0x171AB62E: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_171AB614; /* 0x171AB630: jne 0x171ab614 */
L_171AB632:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x171AB632: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_171AB63B; /* 0x171AB634: jmp 0x171ab63b */
L_171AB636:
    { uint32_t _sa = eax, _sb = eax, _sc = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x171AB636: sbb eax, eax */
      eax = _sc ? 0xFFFFFFFFu : 0;
      _flag_a = recomp_flags_sbb(_sa, _sb, _sc); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    { uint32_t _sa = eax, _sb = 0xFFFFFFFFu, _sc = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x171AB638: sbb eax, -1 */
      eax = _sa - _sb - _sc;
      _flag_a = recomp_flags_sbb(_sa, _sb, _sc); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
L_171AB63B:
    /* test eax, eax */ /* 0x171AB63B: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_171AB656; /* 0x171AB63D: je 0x171ab656 */
L_171AB63F:
    esi = MEM32(ebp + (-0x4)); /* 0x171AB63F: mov esi, dword ptr [ebp - 4] */
L_171AB642:
    eax = MEM32(esi + 0x2C); /* 0x171AB642: mov eax, dword ptr [esi + 0x2c] */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(1);
    ebx = ebx + 1; /* 0x171AB645: inc ebx */
    _flag_k = FK_INC;
    /* cmp ebx, MEM32(eax) */ /* 0x171AB646: cmp ebx, dword ptr [eax] */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(MEM32(eax));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_171AB5F3; /* 0x171AB648: jb 0x171ab5f3 */
L_171AB64A:
    eax = 0x88760387u; /* 0x171AB64A: mov eax, 0x88760387 */
L_171AB64F:
    edi = POP32_VAL(esp); /* 0x171AB64F: pop edi */
    esi = POP32_VAL(esp); /* 0x171AB650: pop esi */
    ebx = POP32_VAL(esp); /* 0x171AB651: pop ebx */
    esp = ebp; ebp = POP32_VAL(esp); /* 0x171AB652: leave  */
    RECOMP_FLAGS_OUT(); esp += 16; { RECOMP_REGS_OUT(); return; } /* 0x171AB653: ret 0xc */
L_171AB656:
    eax = MEM32(ebp + 0x10); /* 0x171AB656: mov eax, dword ptr [ebp + 0x10] */
    MEM32(eax) = edi; /* 0x171AB659: mov dword ptr [eax], edi */
    eax = MEM32(edi); /* 0x171AB65B: mov eax, dword ptr [edi] */
    PUSH32(esp, edi); /* 0x171AB65D: push edi */
    RECOMP_ICALL(MEM32(eax + 0x4)); /* 0x171AB65E: call dword ptr [eax + 4] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x171AB661: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    goto L_171AB64F; /* 0x171AB663: jmp 0x171ab64f */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    RECOMP_REGS_OUT();
}

void sub_171AB66A(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x171AB66Au);

L_171AB66A:
    edi = edi; /* 0x171AB66A: mov edi, edi */
    PUSH32(esp, ebp); /* 0x171AB66C: push ebp */
    ebp = esp; /* 0x171AB66D: mov ebp, esp */
    PUSH32(esp, esi); /* 0x171AB66F: push esi */
    PUSH32(esp, edi); /* 0x171AB670: push edi */
    PUSH32(esp, MEM32(ebp + 0x14)); /* 0x171AB671: push dword ptr [ebp + 0x14] */
    esi = ecx; /* 0x171AB674: mov esi, ecx */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x171AB676: push dword ptr [ebp + 0x10] */
    edi = esi + 0x4; /* 0x171AB679: lea edi, [esi + 4] */
    ecx = edi; /* 0x171AB67C: mov ecx, edi */
    RECOMP_CALL(sub_171AB5A2); /* 0x171AB67E: call 0x171ab5a2 */
    RECOMP_FLAGS_IN();
    eax = MEM32(ebp + 0x8); /* 0x171AB683: mov eax, dword ptr [ebp + 8] */
    MEM32(esi + 0x20) = eax; /* 0x171AB686: mov dword ptr [esi + 0x20], eax */
    eax = MEM32(ebp + 0xC); /* 0x171AB689: mov eax, dword ptr [ebp + 0xc] */
    MEM32(esi + 0x24) = eax; /* 0x171AB68C: mov dword ptr [esi + 0x24], eax */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x171AB68F: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(esi) = 0x17023B68u; /* 0x171AB691: mov dword ptr [esi], 0x17023b68 */
    MEM32(edi) = 0x17023B3Cu; /* 0x171AB697: mov dword ptr [edi], 0x17023b3c */
    MEM32(esi + 0x28) = eax; /* 0x171AB69D: mov dword ptr [esi + 0x28], eax */
    MEM32(esi + 0x2C) = eax; /* 0x171AB6A0: mov dword ptr [esi + 0x2c], eax */
    MEM32(esi + 0x34) = eax; /* 0x171AB6A3: mov dword ptr [esi + 0x34], eax */
    eax = MEM32(ebp + 0x18); /* 0x171AB6A6: mov eax, dword ptr [ebp + 0x18] */
    MEM32(esi + 0x30) = 0xAu; /* 0x171AB6A9: mov dword ptr [esi + 0x30], 0xa */
    MEM32(esi + 0x38) = eax; /* 0x171AB6B0: mov dword ptr [esi + 0x38], eax */
    eax = MEM32(ebp + 0x1C); /* 0x171AB6B3: mov eax, dword ptr [ebp + 0x1c] */
    MEM32(esi + 0x3C) = eax; /* 0x171AB6B6: mov dword ptr [esi + 0x3c], eax */
    edi = POP32_VAL(esp); /* 0x171AB6B9: pop edi */
    eax = esi; /* 0x171AB6BA: mov eax, esi */
    esi = POP32_VAL(esp); /* 0x171AB6BC: pop esi */
    ebp = POP32_VAL(esp); /* 0x171AB6BD: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 28; { RECOMP_REGS_OUT(); return; } /* 0x171AB6BE: ret 0x18 */
    RECOMP_REGS_OUT();
}

void sub_171AB6C6(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x171AB6C6u);

L_171AB6C6:
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ecx = ecx - 4; /* 0x171AB6C6: sub ecx, 4 */
    _flag_k = FK_CMP;
    goto L_171ABC11; /* 0x171AB6C9: jmp 0x171abc11 */
L_171ABC11:
    edi = edi; /* 0x171ABC11: mov edi, edi */
    PUSH32(esp, ebp); /* 0x171ABC13: push ebp */
    ebp = esp; /* 0x171ABC14: mov ebp, esp */
    PUSH32(esp, esi); /* 0x171ABC16: push esi */
    esi = ecx; /* 0x171ABC17: mov esi, ecx */
    RECOMP_CALL(sub_171AB846); /* 0x171ABC19: call 0x171ab846 */
    RECOMP_FLAGS_IN();
    /* test MEM8(ebp + 0x8), 1 */ /* 0x171ABC1E: test byte ptr [ebp + 8], 1 */
    _flag_a = (uint32_t)(MEM8(ebp + 0x8)) << 24; _flag_b = (uint32_t)(1) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_171ABC2B; /* 0x171ABC22: je 0x171abc2b */
L_171ABC24:
    PUSH32(esp, esi); /* 0x171ABC24: push esi */
    RECOMP_CALL(sub_1721B010); /* 0x171ABC25: call 0x1721b010 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x171ABC2A: pop ecx */
L_171ABC2B:
    eax = esi; /* 0x171ABC2B: mov eax, esi */
    esi = POP32_VAL(esp); /* 0x171ABC2D: pop esi */
    ebp = POP32_VAL(esp); /* 0x171ABC2E: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x171ABC2F: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_171AB6D3(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x171AB6D3u);

    goto L_171AB6D3;
L_171AAEED:
    edi = edi; /* 0x171AAEED: mov edi, edi */
    PUSH32(esp, ebp); /* 0x171AAEEF: push ebp */
    ebp = esp; /* 0x171AAEF0: mov ebp, esp */
    edx = MEM32(ebp + 0x10); /* 0x171AAEF2: mov edx, dword ptr [ebp + 0x10] */
    /* test edx, edx */ /* 0x171AAEF5: test edx, edx */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(edx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_171AAF38; /* 0x171AAEF7: je 0x171aaf38 */
L_171AAEF9:
    _flag_a = (uint32_t)(MEM32(edx)); _flag_b = (uint32_t)(0);
    MEM32(edx) = MEM32(edx) & 0; /* 0x171AAEF9: and dword ptr [edx], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, esi); /* 0x171AAEFC: push esi */
    esi = MEM32(ebp + 0xC); /* 0x171AAEFD: mov esi, dword ptr [ebp + 0xc] */
    PUSH32(esp, edi); /* 0x171AAF00: push edi */
    PUSH32(esp, 4); /* 0x171AAF01: push 4 */
    ecx = POP32_VAL(esp); /* 0x171AAF03: pop ecx */
    edi = 0x1702AA2Cu; /* 0x171AAF04: mov edi, 0x1702aa2c */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x171AAF09: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    if (ecx) { uint32_t _a = 0, _b = 0; while (ecx) { _a = MEM32(esi); _b = MEM32(edi); esi += (_df * 4); edi += (_df * 4); ecx--; if (_a != _b) break; } _flag_a = _a; _flag_b = _b; _cf = (uint32_t)CMP_B(_a, _b); _flag_k = FK_CMP; } /* 0x171AAF0B: repe cmpsd dword ptr [esi], dword ptr es:[edi] */
    if (recomp_cond_cf(_flag_k, _flag_a, _flag_b, CC_E, _cf)) goto L_171AAF27; /* 0x171AAF0D: je 0x171aaf27 */
L_171AAF0F:
    esi = MEM32(ebp + 0xC); /* 0x171AAF0F: mov esi, dword ptr [ebp + 0xc] */
    PUSH32(esp, 4); /* 0x171AAF12: push 4 */
    ecx = POP32_VAL(esp); /* 0x171AAF14: pop ecx */
    edi = 0x17001C20u; /* 0x171AAF15: mov edi, 0x17001c20 */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x171AAF1A: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    if (ecx) { uint32_t _a = 0, _b = 0; while (ecx) { _a = MEM32(esi); _b = MEM32(edi); esi += (_df * 4); edi += (_df * 4); ecx--; if (_a != _b) break; } _flag_a = _a; _flag_b = _b; _cf = (uint32_t)CMP_B(_a, _b); _flag_k = FK_CMP; } /* 0x171AAF1C: repe cmpsd dword ptr [esi], dword ptr es:[edi] */
    if (recomp_cond_cf(_flag_k, _flag_a, _flag_b, CC_E, _cf)) goto L_171AAF27; /* 0x171AAF1E: je 0x171aaf27 */
L_171AAF20:
    eax = 0x80004002u; /* 0x171AAF20: mov eax, 0x80004002 */
    goto L_171AAF34; /* 0x171AAF25: jmp 0x171aaf34 */
L_171AAF27:
    eax = MEM32(ebp + 0x8); /* 0x171AAF27: mov eax, dword ptr [ebp + 8] */
    MEM32(edx) = eax; /* 0x171AAF2A: mov dword ptr [edx], eax */
    ecx = MEM32(eax); /* 0x171AAF2C: mov ecx, dword ptr [eax] */
    PUSH32(esp, eax); /* 0x171AAF2E: push eax */
    RECOMP_ICALL(MEM32(ecx + 0x4)); /* 0x171AAF2F: call dword ptr [ecx + 4] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x171AAF32: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
L_171AAF34:
    edi = POP32_VAL(esp); /* 0x171AAF34: pop edi */
    esi = POP32_VAL(esp); /* 0x171AAF35: pop esi */
    goto L_171AAF3D; /* 0x171AAF36: jmp 0x171aaf3d */
L_171AAF38:
    eax = 0x80070057u; /* 0x171AAF38: mov eax, 0x80070057 */
L_171AAF3D:
    ebp = POP32_VAL(esp); /* 0x171AAF3D: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 16; { RECOMP_REGS_OUT(); return; } /* 0x171AAF3E: ret 0xc */
L_171AB6D3:
    _flag_a = (uint32_t)(MEM32(esp + 0x4)); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    MEM32(esp + 0x4) = MEM32(esp + 0x4) - 4; /* 0x171AB6D3: sub dword ptr [esp + 4], 4 */
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    goto L_171AAEED; /* 0x171AB6D8: jmp 0x171aaeed */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    RECOMP_REGS_OUT();
}

void sub_171AB6E2(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x171AB6E2u);

L_171AB6E2:
    edi = edi; /* 0x171AB6E2: mov edi, edi */
    PUSH32(esp, ebp); /* 0x171AB6E4: push ebp */
    ebp = esp; /* 0x171AB6E5: mov ebp, esp */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x171AB6E7: push dword ptr [ebp + 0x10] */
    eax = MEM32(ebp + 0x8); /* 0x171AB6EA: mov eax, dword ptr [ebp + 8] */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x171AB6ED: push dword ptr [ebp + 0xc] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 4; /* 0x171AB6F0: add eax, 4 */
    _flag_k = FK_ADD;
    PUSH32(esp, eax); /* 0x171AB6F3: push eax */
    RECOMP_CALL(sub_171B15AC); /* 0x171AB6F4: call 0x171b15ac */
    RECOMP_FLAGS_IN();
    ebp = POP32_VAL(esp); /* 0x171AB6F9: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 16; { RECOMP_REGS_OUT(); return; } /* 0x171AB6FA: ret 0xc */
    RECOMP_REGS_OUT();
}

void sub_171AB702(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x171AB702u);

    goto L_171AB702;
L_171AB438:
    edi = edi; /* 0x171AB438: mov edi, edi */
    PUSH32(esp, ebp); /* 0x171AB43A: push ebp */
    ebp = esp; /* 0x171AB43B: mov ebp, esp */
    eax = MEM32(ebp + 0x8); /* 0x171AB43D: mov eax, dword ptr [ebp + 8] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 4; /* 0x171AB440: add eax, 4 */
    _flag_k = FK_ADD;
    PUSH32(esp, eax); /* 0x171AB443: push eax */
    RECOMP_CALL(sub_171B1588); /* 0x171AB444: call 0x171b1588 */
    RECOMP_FLAGS_IN();
    ebp = POP32_VAL(esp); /* 0x171AB449: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x171AB44A: ret 4 */
L_171AB702:
    _flag_a = (uint32_t)(MEM32(esp + 0x4)); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    MEM32(esp + 0x4) = MEM32(esp + 0x4) - 4; /* 0x171AB702: sub dword ptr [esp + 4], 4 */
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    goto L_171AB438; /* 0x171AB707: jmp 0x171ab438 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    RECOMP_REGS_OUT();
}

void sub_171AB711(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x171AB711u);

L_171AB711:
    _flag_a = (uint32_t)(MEM32(esp + 0x4)); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    MEM32(esp + 0x4) = MEM32(esp + 0x4) - 4; /* 0x171AB711: sub dword ptr [esp + 4], 4 */
    _flag_k = FK_CMP;
    goto L_171AB9AB; /* 0x171AB716: jmp 0x171ab9ab */
L_171AB9AB:
    edi = edi; /* 0x171AB9AB: mov edi, edi */
    PUSH32(esp, ebp); /* 0x171AB9AD: push ebp */
    ebp = esp; /* 0x171AB9AE: mov ebp, esp */
    eax = MEM32(ebp + 0x8); /* 0x171AB9B0: mov eax, dword ptr [ebp + 8] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 4; /* 0x171AB9B3: add eax, 4 */
    _flag_k = FK_ADD;
    PUSH32(esp, eax); /* 0x171AB9B6: push eax */
    RECOMP_CALL(sub_171B1571); /* 0x171AB9B7: call 0x171b1571 */
    RECOMP_FLAGS_IN();
    ebp = POP32_VAL(esp); /* 0x171AB9BC: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x171AB9BD: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_171AB720(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x171AB720u);

    goto L_171AB720;
L_171AB6E2:
    edi = edi; /* 0x171AB6E2: mov edi, edi */
    PUSH32(esp, ebp); /* 0x171AB6E4: push ebp */
    ebp = esp; /* 0x171AB6E5: mov ebp, esp */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x171AB6E7: push dword ptr [ebp + 0x10] */
    eax = MEM32(ebp + 0x8); /* 0x171AB6EA: mov eax, dword ptr [ebp + 8] */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x171AB6ED: push dword ptr [ebp + 0xc] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 4; /* 0x171AB6F0: add eax, 4 */
    _flag_k = FK_ADD;
    PUSH32(esp, eax); /* 0x171AB6F3: push eax */
    RECOMP_CALL(sub_171B15AC); /* 0x171AB6F4: call 0x171b15ac */
    RECOMP_FLAGS_IN();
    ebp = POP32_VAL(esp); /* 0x171AB6F9: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 16; { RECOMP_REGS_OUT(); return; } /* 0x171AB6FA: ret 0xc */
L_171AB720:
    _flag_a = (uint32_t)(MEM32(esp + 0x4)); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    MEM32(esp + 0x4) = MEM32(esp + 0x4) - 4; /* 0x171AB720: sub dword ptr [esp + 4], 4 */
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    goto L_171AB6E2; /* 0x171AB725: jmp 0x171ab6e2 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    RECOMP_REGS_OUT();
}

void sub_171AB72F(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x171AB72Fu);

L_171AB72F:
    edi = edi; /* 0x171AB72F: mov edi, edi */
    PUSH32(esp, ebp); /* 0x171AB731: push ebp */
    ebp = esp; /* 0x171AB732: mov ebp, esp */
    PUSH32(esp, ecx); /* 0x171AB734: push ecx */
    PUSH32(esp, ebx); /* 0x171AB735: push ebx */
    PUSH32(esp, esi); /* 0x171AB736: push esi */
    esi = MEM32(ebp + 0x18); /* 0x171AB737: mov esi, dword ptr [ebp + 0x18] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ebx = 0; /* 0x171AB73A: xor ebx, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp esi, ebx */ /* 0x171AB73C: cmp esi, ebx */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_171AB767; /* 0x171AB73E: jne 0x171ab767 */
L_171AB740:
    /* cmp MEM32(ebp + 0x1C), ebx */ /* 0x171AB740: cmp dword ptr [ebp + 0x1c], ebx */
    _flag_a = (uint32_t)(MEM32(ebp + 0x1C)); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_171AB76C; /* 0x171AB743: jne 0x171ab76c */
L_171AB745:
    /* cmp esi, ebx */ /* 0x171AB745: cmp esi, ebx */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    PUSH32(esp, edi); /* 0x171AB747: push edi */
    MEM32(ebp + (-0x4)) = ebx; /* 0x171AB748: mov dword ptr [ebp - 4], ebx */
    if (CMP_EQ(_flag_a, _flag_b)) goto L_171AB789; /* 0x171AB74B: je 0x171ab789 */
L_171AB74D:
    PUSH32(esp, esi); /* 0x171AB74D: push esi */
    RECOMP_CALL(sub_1721B254); /* 0x171AB74E: call 0x1721b254 */
    RECOMP_FLAGS_IN();
    edi = eax; /* 0x171AB753: mov edi, eax */
    /* cmp edi, ebx */ /* 0x171AB755: cmp edi, ebx */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    ecx = POP32_VAL(esp); /* 0x171AB757: pop ecx */
    MEM32(ebp + (-0x4)) = edi; /* 0x171AB758: mov dword ptr [ebp - 4], edi */
    if (CMP_NE(_flag_a, _flag_b)) goto L_171AB776; /* 0x171AB75B: jne 0x171ab776 */
L_171AB75D:
    eax = 0x8007000Eu; /* 0x171AB75D: mov eax, 0x8007000e */
    goto L_171AB83A; /* 0x171AB762: jmp 0x171ab83a */
L_171AB767:
    /* cmp MEM32(ebp + 0x1C), ebx */ /* 0x171AB767: cmp dword ptr [ebp + 0x1c], ebx */
    _flag_a = (uint32_t)(MEM32(ebp + 0x1C)); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_NE(_flag_a, _flag_b)) goto L_171AB745; /* 0x171AB76A: jne 0x171ab745 */
L_171AB76C:
    eax = 0x88760385u; /* 0x171AB76C: mov eax, 0x88760385 */
    goto L_171AB83B; /* 0x171AB771: jmp 0x171ab83b */
L_171AB776:
    ecx = esi; /* 0x171AB776: mov ecx, esi */
    esi = MEM32(ebp + 0x1C); /* 0x171AB778: mov esi, dword ptr [ebp + 0x1c] */
    eax = ecx; /* 0x171AB77B: mov eax, ecx */
    if (2u) _cf = (((ecx) >> 1) & 1u); /* 0x171AB77D: shr ecx, 2 */
    if (2u) { _flag_a = recomp_flags_pack((ecx >> 2u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ecx = ecx >> 2u; /* 0x171AB77D: shr ecx, 2 */
    while (ecx) { MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; --ecx; } /* 0x171AB780: rep movsd dword ptr es:[edi], dword ptr [esi] */
    ecx = eax; /* 0x171AB782: mov ecx, eax */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(3);
    ecx = ecx & 3; /* 0x171AB784: and ecx, 3 */
    _cf = 0;
    _flag_k = FK_TEST;
    while (ecx) { MEM8(edi) = MEM8(esi); esi += _df * 1; edi += _df * 1; --ecx; } /* 0x171AB787: rep movsb byte ptr es:[edi], byte ptr [esi] */
L_171AB789:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ebx = 0; /* 0x171AB789: xor ebx, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp MEM32(ebp + 0x10), ebx */ /* 0x171AB78B: cmp dword ptr [ebp + 0x10], ebx */
    _flag_a = (uint32_t)(MEM32(ebp + 0x10)); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_171AB7C9; /* 0x171AB78E: je 0x171ab7c9 */
L_171AB790:
    eax = MEM32(ebp + 0x10); /* 0x171AB790: mov eax, dword ptr [ebp + 0x10] */
    edx = eax + 0x1; /* 0x171AB793: lea edx, [eax + 1] */
L_171AB796:
    SET_LO8(ecx, MEM8(eax)); /* 0x171AB796: mov cl, byte ptr [eax] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x171AB798: inc eax */
    _flag_k = FK_INC;
    /* test LO8(ecx), LO8(ecx) */ /* 0x171AB799: test cl, cl */
    _flag_a = (uint32_t)(LO8(ecx)) << 24; _flag_b = (uint32_t)(LO8(ecx)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_171AB796; /* 0x171AB79B: jne 0x171ab796 */
L_171AB79D:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - edx; /* 0x171AB79D: sub eax, edx */
    _flag_k = FK_CMP;
    esi = eax + 0x1; /* 0x171AB79F: lea esi, [eax + 1] */
    PUSH32(esp, esi); /* 0x171AB7A2: push esi */
    RECOMP_CALL(sub_1721B254); /* 0x171AB7A3: call 0x1721b254 */
    RECOMP_FLAGS_IN();
    ebx = eax; /* 0x171AB7A8: mov ebx, eax */
    /* test ebx, ebx */ /* 0x171AB7AA: test ebx, ebx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ebx);
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = POP32_VAL(esp); /* 0x171AB7AC: pop ecx */
    if (TEST_NZ(_flag_a, _flag_b)) goto L_171AB7B4; /* 0x171AB7AD: jne 0x171ab7b4 */
L_171AB7AF:
    PUSH32(esp, MEM32(ebp + (-0x4))); /* 0x171AB7AF: push dword ptr [ebp - 4] */
    goto L_171AB812; /* 0x171AB7B2: jmp 0x171ab812 */
L_171AB7B4:
    ecx = esi; /* 0x171AB7B4: mov ecx, esi */
    esi = MEM32(ebp + 0x10); /* 0x171AB7B6: mov esi, dword ptr [ebp + 0x10] */
    eax = ecx; /* 0x171AB7B9: mov eax, ecx */
    if (2u) _cf = (((ecx) >> 1) & 1u); /* 0x171AB7BB: shr ecx, 2 */
    if (2u) { _flag_a = recomp_flags_pack((ecx >> 2u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ecx = ecx >> 2u; /* 0x171AB7BB: shr ecx, 2 */
    edi = ebx; /* 0x171AB7BE: mov edi, ebx */
    while (ecx) { MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; --ecx; } /* 0x171AB7C0: rep movsd dword ptr es:[edi], dword ptr [esi] */
    ecx = eax; /* 0x171AB7C2: mov ecx, eax */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(3);
    ecx = ecx & 3; /* 0x171AB7C4: and ecx, 3 */
    _cf = 0;
    _flag_k = FK_TEST;
    while (ecx) { MEM8(edi) = MEM8(esi); esi += _df * 1; edi += _df * 1; --ecx; } /* 0x171AB7C7: rep movsb byte ptr es:[edi], byte ptr [esi] */
L_171AB7C9:
    PUSH32(esp, 0x40u); /* 0x171AB7C9: push 0x40 */
    RECOMP_CALL(sub_1721B01C); /* 0x171AB7CB: call 0x1721b01c */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x171AB7D0: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = POP32_VAL(esp); /* 0x171AB7D2: pop ecx */
    if (TEST_Z(_flag_a, _flag_b)) goto L_171AB7EE; /* 0x171AB7D3: je 0x171ab7ee */
L_171AB7D5:
    PUSH32(esp, MEM32(ebp + (-0x4))); /* 0x171AB7D5: push dword ptr [ebp - 4] */
    ecx = eax; /* 0x171AB7D8: mov ecx, eax */
    PUSH32(esp, MEM32(ebp + 0x18)); /* 0x171AB7DA: push dword ptr [ebp + 0x18] */
    PUSH32(esp, MEM32(ebp + 0x14)); /* 0x171AB7DD: push dword ptr [ebp + 0x14] */
    PUSH32(esp, ebx); /* 0x171AB7E0: push ebx */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x171AB7E1: push dword ptr [ebp + 0xc] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x171AB7E4: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_171AB66A); /* 0x171AB7E7: call 0x171ab66a */
    RECOMP_FLAGS_IN();
    goto L_171AB7F0; /* 0x171AB7EC: jmp 0x171ab7f0 */
L_171AB7EE:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x171AB7EE: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
L_171AB7F0:
    esi = MEM32(ebp + 0x20); /* 0x171AB7F0: mov esi, dword ptr [ebp + 0x20] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edi = 0; /* 0x171AB7F3: xor edi, edi */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp eax, edi */ /* 0x171AB7F5: cmp eax, edi */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    MEM32(esi) = eax; /* 0x171AB7F7: mov dword ptr [esi], eax */
    if (CMP_NE(_flag_a, _flag_b)) goto L_171AB81D; /* 0x171AB7F9: jne 0x171ab81d */
L_171AB7FB:
    /* cmp MEM32(ebp + 0x18), edi */ /* 0x171AB7FB: cmp dword ptr [ebp + 0x18], edi */
    _flag_a = (uint32_t)(MEM32(ebp + 0x18)); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_171AB809; /* 0x171AB7FE: je 0x171ab809 */
L_171AB800:
    PUSH32(esp, MEM32(ebp + (-0x4))); /* 0x171AB800: push dword ptr [ebp - 4] */
    RECOMP_CALL(sub_1721B224); /* 0x171AB803: call 0x1721b224 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x171AB808: pop ecx */
L_171AB809:
    /* cmp ebx, edi */ /* 0x171AB809: cmp ebx, edi */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_EQ(_flag_a, _flag_b)) goto L_171AB75D; /* 0x171AB80B: je 0x171ab75d */
L_171AB811:
    PUSH32(esp, ebx); /* 0x171AB811: push ebx */
L_171AB812:
    RECOMP_CALL(sub_1721B224); /* 0x171AB812: call 0x1721b224 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x171AB817: pop ecx */
    RECOMP_BACKEDGE();
    goto L_171AB75D; /* 0x171AB818: jmp 0x171ab75d */
L_171AB81D:
    /* cmp MEM32(eax + 0x38), edi */ /* 0x171AB81D: cmp dword ptr [eax + 0x38], edi */
    _flag_a = (uint32_t)(MEM32(eax + 0x38)); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_171AB838; /* 0x171AB820: je 0x171ab838 */
L_171AB822:
    /* cmp MEM32(eax + 0x3C), edi */ /* 0x171AB822: cmp dword ptr [eax + 0x3c], edi */
    _flag_a = (uint32_t)(MEM32(eax + 0x3C)); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_171AB838; /* 0x171AB825: jne 0x171ab838 */
L_171AB827:
    ecx = eax + 0x4; /* 0x171AB827: lea ecx, [eax + 4] */
    eax = MEM32(ecx); /* 0x171AB82A: mov eax, dword ptr [ecx] */
    PUSH32(esp, 1); /* 0x171AB82C: push 1 */
    RECOMP_ICALL(MEM32(eax + 0x8)); /* 0x171AB82E: call dword ptr [eax + 8] */
    RECOMP_FLAGS_IN();
    MEM32(esi) = edi; /* 0x171AB831: mov dword ptr [esi], edi */
    RECOMP_BACKEDGE();
    goto L_171AB75D; /* 0x171AB833: jmp 0x171ab75d */
L_171AB838:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x171AB838: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
L_171AB83A:
    edi = POP32_VAL(esp); /* 0x171AB83A: pop edi */
L_171AB83B:
    esi = POP32_VAL(esp); /* 0x171AB83B: pop esi */
    ebx = POP32_VAL(esp); /* 0x171AB83C: pop ebx */
    esp = ebp; ebp = POP32_VAL(esp); /* 0x171AB83D: leave  */
    RECOMP_FLAGS_OUT(); esp += 32; { RECOMP_REGS_OUT(); return; } /* 0x171AB83E: ret 0x1c */
    RECOMP_REGS_OUT();
}

void sub_171AB846(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x171AB846u);

    goto L_171AB846;
L_171AB082:
    MEM32(ecx) = 0x17023AB4u; /* 0x171AB082: mov dword ptr [ecx], 0x17023ab4 */
    ecx = MEM32(ecx + 0x4); /* 0x171AB088: mov ecx, dword ptr [ecx + 4] */
    /* test ecx, ecx */ /* 0x171AB08B: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_171AB096; /* 0x171AB08D: je 0x171ab096 */
L_171AB08F:
    PUSH32(esp, ecx); /* 0x171AB08F: push ecx */
    RECOMP_CALL(sub_1721B224); /* 0x171AB090: call 0x1721b224 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x171AB095: pop ecx */
L_171AB096:
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x171AB096: ret  */
L_171AB846:
    edi = edi; /* 0x171AB846: mov edi, edi */
    PUSH32(esp, esi); /* 0x171AB848: push esi */
    esi = ecx; /* 0x171AB849: mov esi, ecx */
    /* cmp MEM32(esi + 0x38), 0 */ /* 0x171AB84B: cmp dword ptr [esi + 0x38], 0 */
    _flag_a = (uint32_t)(MEM32(esi + 0x38)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    PUSH32(esp, edi); /* 0x171AB84F: push edi */
    edi = esi + 0x4; /* 0x171AB850: lea edi, [esi + 4] */
    MEM32(esi) = 0x17023B68u; /* 0x171AB853: mov dword ptr [esi], 0x17023b68 */
    MEM32(edi) = 0x17023B3Cu; /* 0x171AB859: mov dword ptr [edi], 0x17023b3c */
    if (CMP_EQ(_flag_a, _flag_b)) goto L_171AB86A; /* 0x171AB85F: je 0x171ab86a */
L_171AB861:
    PUSH32(esp, MEM32(esi + 0x3C)); /* 0x171AB861: push dword ptr [esi + 0x3c] */
    RECOMP_CALL(sub_1721B224); /* 0x171AB864: call 0x1721b224 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x171AB869: pop ecx */
L_171AB86A:
    ecx = esi + 0x28; /* 0x171AB86A: lea ecx, [esi + 0x28] */
    RECOMP_CALL(sub_171A607D); /* 0x171AB86D: call 0x171a607d */
    RECOMP_FLAGS_IN();
    ecx = edi; /* 0x171AB872: mov ecx, edi */
    edi = POP32_VAL(esp); /* 0x171AB874: pop edi */
    esi = POP32_VAL(esp); /* 0x171AB875: pop esi */
    RECOMP_BACKEDGE();
    goto L_171AB082; /* 0x171AB876: jmp 0x171ab082 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    RECOMP_REGS_OUT();
}

void sub_171AB880(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x171AB880u);

L_171AB880:
    edi = edi; /* 0x171AB880: mov edi, edi */
    PUSH32(esp, ebp); /* 0x171AB882: push ebp */
    ebp = esp; /* 0x171AB883: mov ebp, esp */
    PUSH32(esp, edi); /* 0x171AB885: push edi */
    edi = MEM32(ebp + 0x8); /* 0x171AB886: mov edi, dword ptr [ebp + 8] */
    ecx = MEM32(edi + 0x24); /* 0x171AB889: mov ecx, dword ptr [edi + 0x24] */
    /* cmp MEM8(ecx + 0x5D), 0 */ /* 0x171AB88C: cmp byte ptr [ecx + 0x5d], 0 */
    _flag_a = (uint32_t)(MEM8(ecx + 0x5D)) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_171AB89C; /* 0x171AB890: je 0x171ab89c */
L_171AB892:
    eax = 0x88760384u; /* 0x171AB892: mov eax, 0x88760384 */
    goto L_171AB91C; /* 0x171AB897: jmp 0x171ab91c */
L_171AB89C:
    PUSH32(esp, ebx); /* 0x171AB89C: push ebx */
    ebx = MEM32(ebp + 0x20); /* 0x171AB89D: mov ebx, dword ptr [ebp + 0x20] */
    /* test ebx, ebx */ /* 0x171AB8A0: test ebx, ebx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ebx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_171AB916; /* 0x171AB8A2: je 0x171ab916 */
L_171AB8A4:
    eax = ebp + 0x8; /* 0x171AB8A4: lea eax, [ebp + 8] */
    PUSH32(esp, eax); /* 0x171AB8A7: push eax */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x171AB8A8: push dword ptr [ebp + 0xc] */
    RECOMP_CALL(sub_171A5E51); /* 0x171AB8AB: call 0x171a5e51 */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x171AB8B0: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_171AB91B; /* 0x171AB8B2: jl 0x171ab91b */
L_171AB8B4:
    eax = MEM32(ebp + 0x14); /* 0x171AB8B4: mov eax, dword ptr [ebp + 0x14] */
    /* test eax, eax */ /* 0x171AB8B7: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_171AB8C0; /* 0x171AB8B9: jne 0x171ab8c0 */
L_171AB8BB:
    eax = 0x1700B4A4u; /* 0x171AB8BB: mov eax, 0x1700b4a4 */
L_171AB8C0:
    ecx = ebp + 0x8; /* 0x171AB8C0: lea ecx, [ebp + 8] */
    PUSH32(esp, ecx); /* 0x171AB8C3: push ecx */
    PUSH32(esp, MEM32(ebp + 0x1C)); /* 0x171AB8C4: push dword ptr [ebp + 0x1c] */
    PUSH32(esp, MEM32(ebp + 0x18)); /* 0x171AB8C7: push dword ptr [ebp + 0x18] */
    PUSH32(esp, eax); /* 0x171AB8CA: push eax */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x171AB8CB: push dword ptr [ebp + 0x10] */
    PUSH32(esp, MEM32(edi + 0x24)); /* 0x171AB8CE: push dword ptr [edi + 0x24] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x171AB8D1: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_171AB72F); /* 0x171AB8D4: call 0x171ab72f */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x171AB8D9: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_171AB91B; /* 0x171AB8DB: jl 0x171ab91b */
L_171AB8DD:
    PUSH32(esp, esi); /* 0x171AB8DD: push esi */
    esi = MEM32(ebp + 0x8); /* 0x171AB8DE: mov esi, dword ptr [ebp + 8] */
    eax = esi; /* 0x171AB8E1: mov eax, esi */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(eax);
    _cf = (eax) != 0;
    eax = (uint32_t)(-(int32_t)eax); /* 0x171AB8E3: neg eax */
    _flag_k = FK_CMP;
    { uint32_t _sa = eax, _sb = eax, _sc = (uint32_t)CMP_B(_flag_a, _flag_b); /* 0x171AB8E5: sbb eax, eax */
      eax = _sc ? 0xFFFFFFFFu : 0;
      _flag_a = recomp_flags_sbb(_sa, _sb, _sc); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    ecx = esi + 0x4; /* 0x171AB8E7: lea ecx, [esi + 4] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ecx);
    eax = eax & ecx; /* 0x171AB8EA: and eax, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + 0x8) = eax; /* 0x171AB8EC: mov dword ptr [ebp + 8], eax */
    eax = ebp + 0x8; /* 0x171AB8EF: lea eax, [ebp + 8] */
    PUSH32(esp, eax); /* 0x171AB8F2: push eax */
    ecx = edi + 0x28; /* 0x171AB8F3: lea ecx, [edi + 0x28] */
    RECOMP_CALL(sub_171A902A); /* 0x171AB8F6: call 0x171a902a */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x171AB8FB: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    eax = MEM32(esi); /* 0x171AB8FD: mov eax, dword ptr [esi] */
    PUSH32(esp, esi); /* 0x171AB8FF: push esi */
    if (TEST_Z(_flag_a, _flag_b)) goto L_171AB90B; /* 0x171AB900: je 0x171ab90b */
L_171AB902:
    RECOMP_ICALL(MEM32(eax + 0x4)); /* 0x171AB902: call dword ptr [eax + 4] */
    RECOMP_FLAGS_IN();
    MEM32(ebx) = esi; /* 0x171AB905: mov dword ptr [ebx], esi */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x171AB907: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_171AB913; /* 0x171AB909: jmp 0x171ab913 */
L_171AB90B:
    RECOMP_ICALL(MEM32(eax + 0x8)); /* 0x171AB90B: call dword ptr [eax + 8] */
    RECOMP_FLAGS_IN();
    eax = 0x8007000Eu; /* 0x171AB90E: mov eax, 0x8007000e */
L_171AB913:
    esi = POP32_VAL(esp); /* 0x171AB913: pop esi */
    goto L_171AB91B; /* 0x171AB914: jmp 0x171ab91b */
L_171AB916:
    eax = 0x88760385u; /* 0x171AB916: mov eax, 0x88760385 */
L_171AB91B:
    ebx = POP32_VAL(esp); /* 0x171AB91B: pop ebx */
L_171AB91C:
    edi = POP32_VAL(esp); /* 0x171AB91C: pop edi */
    ebp = POP32_VAL(esp); /* 0x171AB91D: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 32; { RECOMP_REGS_OUT(); return; } /* 0x171AB91E: ret 0x1c */
    RECOMP_REGS_OUT();
}

void sub_171AB926(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x171AB926u);

L_171AB926:
    edi = edi; /* 0x171AB926: mov edi, edi */
    PUSH32(esp, ebp); /* 0x171AB928: push ebp */
    ebp = esp; /* 0x171AB929: mov ebp, esp */
    PUSH32(esp, esi); /* 0x171AB92B: push esi */
    PUSH32(esp, edi); /* 0x171AB92C: push edi */
    PUSH32(esp, MEM32(ebp + 0x14)); /* 0x171AB92D: push dword ptr [ebp + 0x14] */
    esi = ecx; /* 0x171AB930: mov esi, ecx */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x171AB932: push dword ptr [ebp + 0x10] */
    edi = esi + 0x4; /* 0x171AB935: lea edi, [esi + 4] */
    ecx = edi; /* 0x171AB938: mov ecx, edi */
    RECOMP_CALL(sub_171AB5A2); /* 0x171AB93A: call 0x171ab5a2 */
    RECOMP_FLAGS_IN();
    eax = MEM32(ebp + 0x8); /* 0x171AB93F: mov eax, dword ptr [ebp + 8] */
    ecx = MEM32(ebp + 0x18); /* 0x171AB942: mov ecx, dword ptr [ebp + 0x18] */
    MEM32(esi + 0x20) = eax; /* 0x171AB945: mov dword ptr [esi + 0x20], eax */
    eax = MEM32(ebp + 0xC); /* 0x171AB948: mov eax, dword ptr [ebp + 0xc] */
    MEM32(esi + 0x24) = eax; /* 0x171AB94B: mov dword ptr [esi + 0x24], eax */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x171AB94E: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(esi) = 0x17023BB8u; /* 0x171AB950: mov dword ptr [esi], 0x17023bb8 */
    MEM32(edi) = 0x17023B8Cu; /* 0x171AB956: mov dword ptr [edi], 0x17023b8c */
    MEM32(esi + 0x28) = eax; /* 0x171AB95C: mov dword ptr [esi + 0x28], eax */
    MEM32(esi + 0x2C) = eax; /* 0x171AB95F: mov dword ptr [esi + 0x2c], eax */
    MEM32(esi + 0x34) = eax; /* 0x171AB962: mov dword ptr [esi + 0x34], eax */
    MEM32(esi + 0x30) = 0xAu; /* 0x171AB965: mov dword ptr [esi + 0x30], 0xa */
    MEM32(esi + 0x3C) = eax; /* 0x171AB96C: mov dword ptr [esi + 0x3c], eax */
    MEM32(esi + 0x40) = eax; /* 0x171AB96F: mov dword ptr [esi + 0x40], eax */
    edi = POP32_VAL(esp); /* 0x171AB972: pop edi */
    MEM32(esi + 0x38) = ecx; /* 0x171AB973: mov dword ptr [esi + 0x38], ecx */
    eax = esi; /* 0x171AB976: mov eax, esi */
    esi = POP32_VAL(esp); /* 0x171AB978: pop esi */
    ebp = POP32_VAL(esp); /* 0x171AB979: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 24; { RECOMP_REGS_OUT(); return; } /* 0x171AB97A: ret 0x14 */
    RECOMP_REGS_OUT();
}

void sub_171AB982(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x171AB982u);

L_171AB982:
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ecx = ecx - 4; /* 0x171AB982: sub ecx, 4 */
    _flag_k = FK_CMP;
    goto L_171ABD2A; /* 0x171AB985: jmp 0x171abd2a */
L_171ABD2A:
    edi = edi; /* 0x171ABD2A: mov edi, edi */
    PUSH32(esp, ebp); /* 0x171ABD2C: push ebp */
    ebp = esp; /* 0x171ABD2D: mov ebp, esp */
    PUSH32(esp, esi); /* 0x171ABD2F: push esi */
    esi = ecx; /* 0x171ABD30: mov esi, ecx */
    RECOMP_CALL(sub_171ABA30); /* 0x171ABD32: call 0x171aba30 */
    RECOMP_FLAGS_IN();
    /* test MEM8(ebp + 0x8), 1 */ /* 0x171ABD37: test byte ptr [ebp + 8], 1 */
    _flag_a = (uint32_t)(MEM8(ebp + 0x8)) << 24; _flag_b = (uint32_t)(1) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_171ABD44; /* 0x171ABD3B: je 0x171abd44 */
L_171ABD3D:
    PUSH32(esp, esi); /* 0x171ABD3D: push esi */
    RECOMP_CALL(sub_1721B010); /* 0x171ABD3E: call 0x1721b010 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x171ABD43: pop ecx */
L_171ABD44:
    eax = esi; /* 0x171ABD44: mov eax, esi */
    esi = POP32_VAL(esp); /* 0x171ABD46: pop esi */
    ebp = POP32_VAL(esp); /* 0x171ABD47: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x171ABD48: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_171AB98F(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x171AB98Fu);

    goto L_171AB98F;
L_171AAFC7:
    edi = edi; /* 0x171AAFC7: mov edi, edi */
    PUSH32(esp, ebp); /* 0x171AAFC9: push ebp */
    ebp = esp; /* 0x171AAFCA: mov ebp, esp */
    edx = MEM32(ebp + 0x10); /* 0x171AAFCC: mov edx, dword ptr [ebp + 0x10] */
    /* test edx, edx */ /* 0x171AAFCF: test edx, edx */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(edx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_171AB012; /* 0x171AAFD1: je 0x171ab012 */
L_171AAFD3:
    _flag_a = (uint32_t)(MEM32(edx)); _flag_b = (uint32_t)(0);
    MEM32(edx) = MEM32(edx) & 0; /* 0x171AAFD3: and dword ptr [edx], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, esi); /* 0x171AAFD6: push esi */
    esi = MEM32(ebp + 0xC); /* 0x171AAFD7: mov esi, dword ptr [ebp + 0xc] */
    PUSH32(esp, edi); /* 0x171AAFDA: push edi */
    PUSH32(esp, 4); /* 0x171AAFDB: push 4 */
    ecx = POP32_VAL(esp); /* 0x171AAFDD: pop ecx */
    edi = 0x1702AA2Cu; /* 0x171AAFDE: mov edi, 0x1702aa2c */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x171AAFE3: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    if (ecx) { uint32_t _a = 0, _b = 0; while (ecx) { _a = MEM32(esi); _b = MEM32(edi); esi += (_df * 4); edi += (_df * 4); ecx--; if (_a != _b) break; } _flag_a = _a; _flag_b = _b; _cf = (uint32_t)CMP_B(_a, _b); _flag_k = FK_CMP; } /* 0x171AAFE5: repe cmpsd dword ptr [esi], dword ptr es:[edi] */
    if (recomp_cond_cf(_flag_k, _flag_a, _flag_b, CC_E, _cf)) goto L_171AB001; /* 0x171AAFE7: je 0x171ab001 */
L_171AAFE9:
    esi = MEM32(ebp + 0xC); /* 0x171AAFE9: mov esi, dword ptr [ebp + 0xc] */
    PUSH32(esp, 4); /* 0x171AAFEC: push 4 */
    ecx = POP32_VAL(esp); /* 0x171AAFEE: pop ecx */
    edi = 0x17001C00u; /* 0x171AAFEF: mov edi, 0x17001c00 */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x171AAFF4: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    if (ecx) { uint32_t _a = 0, _b = 0; while (ecx) { _a = MEM32(esi); _b = MEM32(edi); esi += (_df * 4); edi += (_df * 4); ecx--; if (_a != _b) break; } _flag_a = _a; _flag_b = _b; _cf = (uint32_t)CMP_B(_a, _b); _flag_k = FK_CMP; } /* 0x171AAFF6: repe cmpsd dword ptr [esi], dword ptr es:[edi] */
    if (recomp_cond_cf(_flag_k, _flag_a, _flag_b, CC_E, _cf)) goto L_171AB001; /* 0x171AAFF8: je 0x171ab001 */
L_171AAFFA:
    eax = 0x80004002u; /* 0x171AAFFA: mov eax, 0x80004002 */
    goto L_171AB00E; /* 0x171AAFFF: jmp 0x171ab00e */
L_171AB001:
    eax = MEM32(ebp + 0x8); /* 0x171AB001: mov eax, dword ptr [ebp + 8] */
    MEM32(edx) = eax; /* 0x171AB004: mov dword ptr [edx], eax */
    ecx = MEM32(eax); /* 0x171AB006: mov ecx, dword ptr [eax] */
    PUSH32(esp, eax); /* 0x171AB008: push eax */
    RECOMP_ICALL(MEM32(ecx + 0x4)); /* 0x171AB009: call dword ptr [ecx + 4] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x171AB00C: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
L_171AB00E:
    edi = POP32_VAL(esp); /* 0x171AB00E: pop edi */
    esi = POP32_VAL(esp); /* 0x171AB00F: pop esi */
    goto L_171AB017; /* 0x171AB010: jmp 0x171ab017 */
L_171AB012:
    eax = 0x80070057u; /* 0x171AB012: mov eax, 0x80070057 */
L_171AB017:
    ebp = POP32_VAL(esp); /* 0x171AB017: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 16; { RECOMP_REGS_OUT(); return; } /* 0x171AB018: ret 0xc */
L_171AB98F:
    _flag_a = (uint32_t)(MEM32(esp + 0x4)); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    MEM32(esp + 0x4) = MEM32(esp + 0x4) - 4; /* 0x171AB98F: sub dword ptr [esp + 4], 4 */
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    goto L_171AAFC7; /* 0x171AB994: jmp 0x171aafc7 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    RECOMP_REGS_OUT();
}

void sub_171AB99E(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x171AB99Eu);

L_171AB99E:
    eax = 0x80004005u; /* 0x171AB99E: mov eax, 0x80004005 */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x171AB9A3: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_171AB9AB(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x171AB9ABu);

L_171AB9AB:
    edi = edi; /* 0x171AB9AB: mov edi, edi */
    PUSH32(esp, ebp); /* 0x171AB9AD: push ebp */
    ebp = esp; /* 0x171AB9AE: mov ebp, esp */
    eax = MEM32(ebp + 0x8); /* 0x171AB9B0: mov eax, dword ptr [ebp + 8] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 4; /* 0x171AB9B3: add eax, 4 */
    _flag_k = FK_ADD;
    PUSH32(esp, eax); /* 0x171AB9B6: push eax */
    RECOMP_CALL(sub_171B1571); /* 0x171AB9B7: call 0x171b1571 */
    RECOMP_FLAGS_IN();
    ebp = POP32_VAL(esp); /* 0x171AB9BC: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x171AB9BD: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_171AB9C5(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x171AB9C5u);

L_171AB9C5:
    edi = edi; /* 0x171AB9C5: mov edi, edi */
    PUSH32(esp, ebp); /* 0x171AB9C7: push ebp */
    ebp = esp; /* 0x171AB9C8: mov ebp, esp */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x171AB9CA: push dword ptr [ebp + 0xc] */
    eax = MEM32(ebp + 0x8); /* 0x171AB9CD: mov eax, dword ptr [ebp + 8] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 4; /* 0x171AB9D0: add eax, 4 */
    _flag_k = FK_ADD;
    PUSH32(esp, eax); /* 0x171AB9D3: push eax */
    RECOMP_CALL(sub_171B161C); /* 0x171AB9D4: call 0x171b161c */
    RECOMP_FLAGS_IN();
    ebp = POP32_VAL(esp); /* 0x171AB9D9: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 12; { RECOMP_REGS_OUT(); return; } /* 0x171AB9DA: ret 8 */
    RECOMP_REGS_OUT();
}

void sub_171AB9E2(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x171AB9E2u);

    goto L_171AB9E2;
L_171AB9C5:
    edi = edi; /* 0x171AB9C5: mov edi, edi */
    PUSH32(esp, ebp); /* 0x171AB9C7: push ebp */
    ebp = esp; /* 0x171AB9C8: mov ebp, esp */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x171AB9CA: push dword ptr [ebp + 0xc] */
    eax = MEM32(ebp + 0x8); /* 0x171AB9CD: mov eax, dword ptr [ebp + 8] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 4; /* 0x171AB9D0: add eax, 4 */
    _flag_k = FK_ADD;
    PUSH32(esp, eax); /* 0x171AB9D3: push eax */
    RECOMP_CALL(sub_171B161C); /* 0x171AB9D4: call 0x171b161c */
    RECOMP_FLAGS_IN();
    ebp = POP32_VAL(esp); /* 0x171AB9D9: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 12; { RECOMP_REGS_OUT(); return; } /* 0x171AB9DA: ret 8 */
L_171AB9E2:
    _flag_a = (uint32_t)(MEM32(esp + 0x4)); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    MEM32(esp + 0x4) = MEM32(esp + 0x4) - 4; /* 0x171AB9E2: sub dword ptr [esp + 4], 4 */
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    goto L_171AB9C5; /* 0x171AB9E7: jmp 0x171ab9c5 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    RECOMP_REGS_OUT();
}

void sub_171AB9F1(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x171AB9F1u);

L_171AB9F1:
    edi = edi; /* 0x171AB9F1: mov edi, edi */
    PUSH32(esp, ebp); /* 0x171AB9F3: push ebp */
    ebp = esp; /* 0x171AB9F4: mov ebp, esp */
    PUSH32(esp, MEM32(ecx + 0x20)); /* 0x171AB9F6: push dword ptr [ecx + 0x20] */
    ecx = MEM32(ebp + 0x8); /* 0x171AB9F9: mov ecx, dword ptr [ebp + 8] */
    RECOMP_CALL(sub_171AB1BE); /* 0x171AB9FC: call 0x171ab1be */
    RECOMP_FLAGS_IN();
    ebp = POP32_VAL(esp); /* 0x171ABA01: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x171ABA02: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_171ABA0A(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x171ABA0Au);

L_171ABA0A:
    edi = edi; /* 0x171ABA0A: mov edi, edi */
    PUSH32(esp, ebp); /* 0x171ABA0C: push ebp */
    ebp = esp; /* 0x171ABA0D: mov ebp, esp */
    PUSH32(esp, esi); /* 0x171ABA0F: push esi */
    esi = ecx; /* 0x171ABA10: mov esi, ecx */
    RECOMP_CALL(sub_171A607D); /* 0x171ABA12: call 0x171a607d */
    RECOMP_FLAGS_IN();
    /* test MEM8(ebp + 0x8), 1 */ /* 0x171ABA17: test byte ptr [ebp + 8], 1 */
    _flag_a = (uint32_t)(MEM8(ebp + 0x8)) << 24; _flag_b = (uint32_t)(1) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_171ABA24; /* 0x171ABA1B: je 0x171aba24 */
L_171ABA1D:
    PUSH32(esp, esi); /* 0x171ABA1D: push esi */
    RECOMP_CALL(sub_1721B010); /* 0x171ABA1E: call 0x1721b010 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x171ABA23: pop ecx */
L_171ABA24:
    eax = esi; /* 0x171ABA24: mov eax, esi */
    esi = POP32_VAL(esp); /* 0x171ABA26: pop esi */
    ebp = POP32_VAL(esp); /* 0x171ABA27: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x171ABA28: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_171ABA30(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x171ABA30u);

    goto L_171ABA30;
L_171AB082:
    MEM32(ecx) = 0x17023AB4u; /* 0x171AB082: mov dword ptr [ecx], 0x17023ab4 */
    ecx = MEM32(ecx + 0x4); /* 0x171AB088: mov ecx, dword ptr [ecx + 4] */
    /* test ecx, ecx */ /* 0x171AB08B: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_171AB096; /* 0x171AB08D: je 0x171ab096 */
L_171AB08F:
    PUSH32(esp, ecx); /* 0x171AB08F: push ecx */
    RECOMP_CALL(sub_1721B224); /* 0x171AB090: call 0x1721b224 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x171AB095: pop ecx */
L_171AB096:
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x171AB096: ret  */
L_171ABA30:
    edi = edi; /* 0x171ABA30: mov edi, edi */
    PUSH32(esp, esi); /* 0x171ABA32: push esi */
    esi = ecx; /* 0x171ABA33: mov esi, ecx */
    ecx = MEM32(esi + 0x38); /* 0x171ABA35: mov ecx, dword ptr [esi + 0x38] */
    /* test ecx, ecx */ /* 0x171ABA38: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, edi); /* 0x171ABA3A: push edi */
    edi = esi + 0x4; /* 0x171ABA3B: lea edi, [esi + 4] */
    MEM32(esi) = 0x17023BB8u; /* 0x171ABA3E: mov dword ptr [esi], 0x17023bb8 */
    MEM32(edi) = 0x17023B8Cu; /* 0x171ABA44: mov dword ptr [edi], 0x17023b8c */
    if (TEST_Z(_flag_a, _flag_b)) goto L_171ABA53; /* 0x171ABA4A: je 0x171aba53 */
L_171ABA4C:
    PUSH32(esp, 1); /* 0x171ABA4C: push 1 */
    RECOMP_CALL(sub_171ABA0A); /* 0x171ABA4E: call 0x171aba0a */
    RECOMP_FLAGS_IN();
L_171ABA53:
    eax = MEM32(esi + 0x40); /* 0x171ABA53: mov eax, dword ptr [esi + 0x40] */
    _flag_a = (uint32_t)(MEM32(esi + 0x38)); _flag_b = (uint32_t)(0);
    MEM32(esi + 0x38) = MEM32(esi + 0x38) & 0; /* 0x171ABA56: and dword ptr [esi + 0x38], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    /* test eax, eax */ /* 0x171ABA5A: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_171ABA69; /* 0x171ABA5C: je 0x171aba69 */
L_171ABA5E:
    PUSH32(esp, eax); /* 0x171ABA5E: push eax */
    RECOMP_CALL(sub_1721B224); /* 0x171ABA5F: call 0x1721b224 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(MEM32(esi + 0x40)); _flag_b = (uint32_t)(0);
    MEM32(esi + 0x40) = MEM32(esi + 0x40) & 0; /* 0x171ABA64: and dword ptr [esi + 0x40], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = POP32_VAL(esp); /* 0x171ABA68: pop ecx */
L_171ABA69:
    ecx = esi + 0x28; /* 0x171ABA69: lea ecx, [esi + 0x28] */
    RECOMP_CALL(sub_171A607D); /* 0x171ABA6C: call 0x171a607d */
    RECOMP_FLAGS_IN();
    ecx = edi; /* 0x171ABA71: mov ecx, edi */
    edi = POP32_VAL(esp); /* 0x171ABA73: pop edi */
    esi = POP32_VAL(esp); /* 0x171ABA74: pop esi */
    RECOMP_BACKEDGE();
    goto L_171AB082; /* 0x171ABA75: jmp 0x171ab082 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    RECOMP_REGS_OUT();
}

void sub_171ABA7F(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x171ABA7Fu);

L_171ABA7F:
    edi = edi; /* 0x171ABA7F: mov edi, edi */
    PUSH32(esp, ebp); /* 0x171ABA81: push ebp */
    ebp = esp; /* 0x171ABA82: mov ebp, esp */
    PUSH32(esp, ebx); /* 0x171ABA84: push ebx */
    PUSH32(esp, esi); /* 0x171ABA85: push esi */
    PUSH32(esp, edi); /* 0x171ABA86: push edi */
    ebx = ecx; /* 0x171ABA87: mov ebx, ecx */
    PUSH32(esp, 0x1700B4A4u); /* 0x171ABA89: push 0x1700b4a4 */
    esi = ebx + 0x4; /* 0x171ABA8E: lea esi, [ebx + 4] */
    PUSH32(esp, 0); /* 0x171ABA91: push 0 */
    ecx = esi; /* 0x171ABA93: mov ecx, esi */
    RECOMP_CALL(sub_171AB5A2); /* 0x171ABA95: call 0x171ab5a2 */
    RECOMP_FLAGS_IN();
    eax = MEM32(ebp + 0x8); /* 0x171ABA9A: mov eax, dword ptr [ebp + 8] */
    MEM32(esi) = 0x17023AE0u; /* 0x171ABA9D: mov dword ptr [esi], 0x17023ae0 */
    esi = MEM32(ebp + 0xC); /* 0x171ABAA3: mov esi, dword ptr [ebp + 0xc] */
    MEM32(ebx + 0x20) = eax; /* 0x171ABAA6: mov dword ptr [ebx + 0x20], eax */
    eax = MEM32(ebp + 0x10); /* 0x171ABAA9: mov eax, dword ptr [ebp + 0x10] */
    /* test eax, eax */ /* 0x171ABAAC: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebx) = 0x17023B0Cu; /* 0x171ABAAE: mov dword ptr [ebx], 0x17023b0c */
    edi = ebx + 0x24; /* 0x171ABAB4: lea edi, [ebx + 0x24] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x171ABAB7: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x171ABAB8: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x171ABAB9: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x171ABABA: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(ebx + 0x34) = eax; /* 0x171ABABB: mov dword ptr [ebx + 0x34], eax */
    if (TEST_Z(_flag_a, _flag_b)) goto L_171ABAC6; /* 0x171ABABE: je 0x171abac6 */
L_171ABAC0:
    ecx = MEM32(eax); /* 0x171ABAC0: mov ecx, dword ptr [eax] */
    PUSH32(esp, eax); /* 0x171ABAC2: push eax */
    RECOMP_ICALL(MEM32(ecx + 0x4)); /* 0x171ABAC3: call dword ptr [ecx + 4] */
    RECOMP_FLAGS_IN();
L_171ABAC6:
    edi = POP32_VAL(esp); /* 0x171ABAC6: pop edi */
    esi = POP32_VAL(esp); /* 0x171ABAC7: pop esi */
    eax = ebx; /* 0x171ABAC8: mov eax, ebx */
    ebx = POP32_VAL(esp); /* 0x171ABACA: pop ebx */
    ebp = POP32_VAL(esp); /* 0x171ABACB: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 16; { RECOMP_REGS_OUT(); return; } /* 0x171ABACC: ret 0xc */
    RECOMP_REGS_OUT();
}

void sub_171ABAFA(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x171ABAFAu);

L_171ABAFA:
    edi = edi; /* 0x171ABAFA: mov edi, edi */
    PUSH32(esp, ebp); /* 0x171ABAFC: push ebp */
    ebp = esp; /* 0x171ABAFD: mov ebp, esp */
    PUSH32(esp, ecx); /* 0x171ABAFF: push ecx */
    PUSH32(esp, ebx); /* 0x171ABB00: push ebx */
    PUSH32(esp, esi); /* 0x171ABB01: push esi */
    esi = MEM32(ebp + 0xC); /* 0x171ABB02: mov esi, dword ptr [ebp + 0xc] */
    PUSH32(esp, edi); /* 0x171ABB05: push edi */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ebx = 0; /* 0x171ABB06: xor ebx, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(1);
    ebx = ebx + 1; /* 0x171ABB08: inc ebx */
    _flag_k = FK_INC;
    /* cmp MEM32(ebp + 0x8), 0 */ /* 0x171ABB09: cmp dword ptr [ebp + 8], 0 */
    _flag_a = (uint32_t)(MEM32(ebp + 0x8)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    PUSH32(esp, 4); /* 0x171ABB0D: push 4 */
    edi = 0x1700B4A4u; /* 0x171ABB0F: mov edi, 0x1700b4a4 */
    ecx = POP32_VAL(esp); /* 0x171ABB14: pop ecx */
    if (CMP_EQ(_flag_a, _flag_b)) goto L_171ABB40; /* 0x171ABB15: je 0x171abb40 */
L_171ABB17:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x171ABB17: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    eax = ebp + (-0x4); /* 0x171ABB19: lea eax, [ebp - 4] */
    if (ecx) { uint32_t _a = 0, _b = 0; while (ecx) { _a = MEM32(esi); _b = MEM32(edi); esi += (_df * 4); edi += (_df * 4); ecx--; if (_a != _b) break; } _flag_a = _a; _flag_b = _b; _cf = (uint32_t)CMP_B(_a, _b); _flag_k = FK_CMP; } /* 0x171ABB1C: repe cmpsd dword ptr [esi], dword ptr es:[edi] */
    ecx = MEM32(ebp + 0x10); /* 0x171ABB1E: mov ecx, dword ptr [ebp + 0x10] */
    PUSH32(esp, eax); /* 0x171ABB21: push eax */
    if (recomp_cond_cf(_flag_k, _flag_a, _flag_b, CC_NE, _cf)) goto L_171ABB2E; /* 0x171ABB22: jne 0x171abb2e */
L_171ABB24:
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x171ABB24: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_171A5CC6); /* 0x171ABB27: call 0x171a5cc6 */
    RECOMP_FLAGS_IN();
    goto L_171ABB39; /* 0x171ABB2C: jmp 0x171abb39 */
L_171ABB2E:
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x171ABB2E: push dword ptr [ebp + 0xc] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x171ABB31: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_171AB5D3); /* 0x171ABB34: call 0x171ab5d3 */
    RECOMP_FLAGS_IN();
L_171ABB39:
    MEM32(ebp + 0x10) = eax; /* 0x171ABB39: mov dword ptr [ebp + 0x10], eax */
    /* test eax, eax */ /* 0x171ABB3C: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_171ABB5E; /* 0x171ABB3E: jmp 0x171abb5e */
L_171ABB40:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x171ABB40: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    if (ecx) { uint32_t _a = 0, _b = 0; while (ecx) { _a = MEM32(esi); _b = MEM32(edi); esi += (_df * 4); edi += (_df * 4); ecx--; if (_a != _b) break; } _flag_a = _a; _flag_b = _b; _cf = (uint32_t)CMP_B(_a, _b); _flag_k = FK_CMP; } /* 0x171ABB42: repe cmpsd dword ptr [esi], dword ptr es:[edi] */
    if (recomp_cond_cf(_flag_k, _flag_a, _flag_b, CC_E, _cf)) goto L_171ABC00; /* 0x171ABB44: je 0x171abc00 */
L_171ABB4A:
    ecx = MEM32(ebp + 0x10); /* 0x171ABB4A: mov ecx, dword ptr [ebp + 0x10] */
    eax = ebp + (-0x4); /* 0x171ABB4D: lea eax, [ebp - 4] */
    PUSH32(esp, eax); /* 0x171ABB50: push eax */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x171ABB51: push dword ptr [ebp + 0xc] */
    RECOMP_CALL(sub_171A5C70); /* 0x171ABB54: call 0x171a5c70 */
    RECOMP_FLAGS_IN();
    MEM32(ebp + 0x10) = eax; /* 0x171ABB59: mov dword ptr [ebp + 0x10], eax */
    /* test eax, eax */ /* 0x171ABB5C: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
L_171ABB5E:
    if (recomp_cond_cf(_flag_k, _flag_a, _flag_b, CC_GE, _cf)) goto L_171ABB63; /* 0x171ABB5E: jge 0x171abb63 */
L_171ABB60:
    MEM32(ebp + 0x10) = ebx; /* 0x171ABB60: mov dword ptr [ebp + 0x10], ebx */
L_171ABB63:
    /* cmp MEM32(ebp + 0x10), ebx */ /* 0x171ABB63: cmp dword ptr [ebp + 0x10], ebx */
    _flag_a = (uint32_t)(MEM32(ebp + 0x10)); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_171ABB75; /* 0x171ABB66: jne 0x171abb75 */
L_171ABB68:
    eax = MEM32(ebp + 0x14); /* 0x171ABB68: mov eax, dword ptr [ebp + 0x14] */
    _flag_a = (uint32_t)(MEM32(eax)); _flag_b = (uint32_t)(0);
    MEM32(eax) = MEM32(eax) & 0; /* 0x171ABB6B: and dword ptr [eax], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    eax = ebx; /* 0x171ABB6E: mov eax, ebx */
    goto L_171ABC05; /* 0x171ABB70: jmp 0x171abc05 */
L_171ABB75:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ebx = 0; /* 0x171ABB75: xor ebx, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp MEM32(ebp + 0x8), ebx */ /* 0x171ABB77: cmp dword ptr [ebp + 8], ebx */
    _flag_a = (uint32_t)(MEM32(ebp + 0x8)); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_171ABBB7; /* 0x171ABB7A: je 0x171abbb7 */
L_171ABB7C:
    eax = MEM32(ebp + 0x8); /* 0x171ABB7C: mov eax, dword ptr [ebp + 8] */
    edx = eax + 0x1; /* 0x171ABB7F: lea edx, [eax + 1] */
L_171ABB82:
    SET_LO8(ecx, MEM8(eax)); /* 0x171ABB82: mov cl, byte ptr [eax] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x171ABB84: inc eax */
    _flag_k = FK_INC;
    /* test LO8(ecx), LO8(ecx) */ /* 0x171ABB85: test cl, cl */
    _flag_a = (uint32_t)(LO8(ecx)) << 24; _flag_b = (uint32_t)(LO8(ecx)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_171ABB82; /* 0x171ABB87: jne 0x171abb82 */
L_171ABB89:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - edx; /* 0x171ABB89: sub eax, edx */
    _flag_k = FK_CMP;
    esi = eax + 0x1; /* 0x171ABB8B: lea esi, [eax + 1] */
    PUSH32(esp, esi); /* 0x171ABB8E: push esi */
    RECOMP_CALL(sub_1721B254); /* 0x171ABB8F: call 0x1721b254 */
    RECOMP_FLAGS_IN();
    ebx = eax; /* 0x171ABB94: mov ebx, eax */
    /* test ebx, ebx */ /* 0x171ABB96: test ebx, ebx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ebx);
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = POP32_VAL(esp); /* 0x171ABB98: pop ecx */
    if (TEST_NZ(_flag_a, _flag_b)) goto L_171ABBA2; /* 0x171ABB99: jne 0x171abba2 */
L_171ABB9B:
    eax = 0x8007000Eu; /* 0x171ABB9B: mov eax, 0x8007000e */
    goto L_171ABC05; /* 0x171ABBA0: jmp 0x171abc05 */
L_171ABBA2:
    ecx = esi; /* 0x171ABBA2: mov ecx, esi */
    esi = MEM32(ebp + 0x8); /* 0x171ABBA4: mov esi, dword ptr [ebp + 8] */
    eax = ecx; /* 0x171ABBA7: mov eax, ecx */
    if (2u) _cf = (((ecx) >> 1) & 1u); /* 0x171ABBA9: shr ecx, 2 */
    if (2u) { _flag_a = recomp_flags_pack((ecx >> 2u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ecx = ecx >> 2u; /* 0x171ABBA9: shr ecx, 2 */
    edi = ebx; /* 0x171ABBAC: mov edi, ebx */
    while (ecx) { MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; --ecx; } /* 0x171ABBAE: rep movsd dword ptr es:[edi], dword ptr [esi] */
    ecx = eax; /* 0x171ABBB0: mov ecx, eax */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(3);
    ecx = ecx & 3; /* 0x171ABBB2: and ecx, 3 */
    _cf = 0;
    _flag_k = FK_TEST;
    while (ecx) { MEM8(edi) = MEM8(esi); esi += _df * 1; edi += _df * 1; --ecx; } /* 0x171ABBB5: rep movsb byte ptr es:[edi], byte ptr [esi] */
L_171ABBB7:
    PUSH32(esp, 0x38u); /* 0x171ABBB7: push 0x38 */
    RECOMP_CALL(sub_1721B01C); /* 0x171ABBB9: call 0x1721b01c */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x171ABBBE: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    esi = MEM32(ebp + (-0x4)); /* 0x171ABBC0: mov esi, dword ptr [ebp - 4] */
    ecx = POP32_VAL(esp); /* 0x171ABBC3: pop ecx */
    if (TEST_Z(_flag_a, _flag_b)) goto L_171ABBD4; /* 0x171ABBC4: je 0x171abbd4 */
L_171ABBC6:
    PUSH32(esp, esi); /* 0x171ABBC6: push esi */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x171ABBC7: push dword ptr [ebp + 0xc] */
    ecx = eax; /* 0x171ABBCA: mov ecx, eax */
    PUSH32(esp, ebx); /* 0x171ABBCC: push ebx */
    RECOMP_CALL(sub_171ABA7F); /* 0x171ABBCD: call 0x171aba7f */
    RECOMP_FLAGS_IN();
    goto L_171ABBD6; /* 0x171ABBD2: jmp 0x171abbd6 */
L_171ABBD4:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x171ABBD4: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
L_171ABBD6:
    /* test eax, eax */ /* 0x171ABBD6: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = MEM32(ebp + 0x14); /* 0x171ABBD8: mov ecx, dword ptr [ebp + 0x14] */
    MEM32(ecx) = eax; /* 0x171ABBDB: mov dword ptr [ecx], eax */
    if (TEST_NZ(_flag_a, _flag_b)) goto L_171ABBF1; /* 0x171ABBDD: jne 0x171abbf1 */
L_171ABBDF:
    /* test ebx, ebx */ /* 0x171ABBDF: test ebx, ebx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ebx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_171ABBEA; /* 0x171ABBE1: je 0x171abbea */
L_171ABBE3:
    PUSH32(esp, ebx); /* 0x171ABBE3: push ebx */
    RECOMP_CALL(sub_1721B224); /* 0x171ABBE4: call 0x1721b224 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x171ABBE9: pop ecx */
L_171ABBEA:
    MEM32(ebp + 0x10) = 0x8007000Eu; /* 0x171ABBEA: mov dword ptr [ebp + 0x10], 0x8007000e */
L_171ABBF1:
    /* test esi, esi */ /* 0x171ABBF1: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_171ABBFB; /* 0x171ABBF3: je 0x171abbfb */
L_171ABBF5:
    eax = MEM32(esi); /* 0x171ABBF5: mov eax, dword ptr [esi] */
    PUSH32(esp, esi); /* 0x171ABBF7: push esi */
    RECOMP_ICALL(MEM32(eax + 0x8)); /* 0x171ABBF8: call dword ptr [eax + 8] */
    RECOMP_FLAGS_IN();
L_171ABBFB:
    eax = MEM32(ebp + 0x10); /* 0x171ABBFB: mov eax, dword ptr [ebp + 0x10] */
    goto L_171ABC05; /* 0x171ABBFE: jmp 0x171abc05 */
L_171ABC00:
    eax = 0x88760384u; /* 0x171ABC00: mov eax, 0x88760384 */
L_171ABC05:
    edi = POP32_VAL(esp); /* 0x171ABC05: pop edi */
    esi = POP32_VAL(esp); /* 0x171ABC06: pop esi */
    ebx = POP32_VAL(esp); /* 0x171ABC07: pop ebx */
    esp = ebp; ebp = POP32_VAL(esp); /* 0x171ABC08: leave  */
    RECOMP_FLAGS_OUT(); esp += 20; { RECOMP_REGS_OUT(); return; } /* 0x171ABC09: ret 0x10 */
    RECOMP_REGS_OUT();
}

void sub_171ABC37(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x171ABC37u);

L_171ABC37:
    edi = edi; /* 0x171ABC37: mov edi, edi */
    PUSH32(esp, ebp); /* 0x171ABC39: push ebp */
    ebp = esp; /* 0x171ABC3A: mov ebp, esp */
    eax = MEM32(ebp + 0x8); /* 0x171ABC3C: mov eax, dword ptr [ebp + 8] */
    eax = MEM32(eax + 0x24); /* 0x171ABC3F: mov eax, dword ptr [eax + 0x24] */
    /* cmp MEM8(eax + 0x5D), 0 */ /* 0x171ABC42: cmp byte ptr [eax + 0x5d], 0 */
    _flag_a = (uint32_t)(MEM8(eax + 0x5D)) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    PUSH32(esp, ebx); /* 0x171ABC46: push ebx */
    if (CMP_EQ(_flag_a, _flag_b)) goto L_171ABC53; /* 0x171ABC47: je 0x171abc53 */
L_171ABC49:
    eax = 0x88760384u; /* 0x171ABC49: mov eax, 0x88760384 */
    goto L_171ABD20; /* 0x171ABC4E: jmp 0x171abd20 */
L_171ABC53:
    eax = MEM32(ebp + 0xC); /* 0x171ABC53: mov eax, dword ptr [ebp + 0xc] */
    /* test eax, eax */ /* 0x171ABC56: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, esi); /* 0x171ABC58: push esi */
    PUSH32(esp, edi); /* 0x171ABC59: push edi */
    if (TEST_Z(_flag_a, _flag_b)) goto L_171ABC61; /* 0x171ABC5A: je 0x171abc61 */
L_171ABC5C:
    /* cmp MEM8(eax), 0 */ /* 0x171ABC5C: cmp byte ptr [eax], 0 */
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_171ABC7E; /* 0x171ABC5F: jne 0x171abc7e */
L_171ABC61:
    esi = MEM32(ebp + 0x10); /* 0x171ABC61: mov esi, dword ptr [ebp + 0x10] */
    /* test esi, esi */ /* 0x171ABC64: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_171ABD19; /* 0x171ABC66: je 0x171abd19 */
L_171ABC6C:
    PUSH32(esp, 4); /* 0x171ABC6C: push 4 */
    ecx = POP32_VAL(esp); /* 0x171ABC6E: pop ecx */
    edi = 0x1700B4A4u; /* 0x171ABC6F: mov edi, 0x1700b4a4 */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edx = 0; /* 0x171ABC74: xor edx, edx */
    _cf = 0;
    _flag_k = FK_TEST;
    if (ecx) { uint32_t _a = 0, _b = 0; while (ecx) { _a = MEM32(esi); _b = MEM32(edi); esi += (_df * 4); edi += (_df * 4); ecx--; if (_a != _b) break; } _flag_a = _a; _flag_b = _b; _cf = (uint32_t)CMP_B(_a, _b); _flag_k = FK_CMP; } /* 0x171ABC76: repe cmpsd dword ptr [esi], dword ptr es:[edi] */
    if (recomp_cond_cf(_flag_k, _flag_a, _flag_b, CC_E, _cf)) goto L_171ABD19; /* 0x171ABC78: je 0x171abd19 */
L_171ABC7E:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ebx = 0; /* 0x171ABC7E: xor ebx, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
    /* test eax, eax */ /* 0x171ABC80: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_171ABCB5; /* 0x171ABC82: je 0x171abcb5 */
L_171ABC84:
    edx = eax + 0x1; /* 0x171ABC84: lea edx, [eax + 1] */
L_171ABC87:
    SET_LO8(ecx, MEM8(eax)); /* 0x171ABC87: mov cl, byte ptr [eax] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x171ABC89: inc eax */
    _flag_k = FK_INC;
    /* test LO8(ecx), LO8(ecx) */ /* 0x171ABC8A: test cl, cl */
    _flag_a = (uint32_t)(LO8(ecx)) << 24; _flag_b = (uint32_t)(LO8(ecx)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_171ABC87; /* 0x171ABC8C: jne 0x171abc87 */
L_171ABC8E:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - edx; /* 0x171ABC8E: sub eax, edx */
    _flag_k = FK_CMP;
    esi = eax + 0x1; /* 0x171ABC90: lea esi, [eax + 1] */
    PUSH32(esp, esi); /* 0x171ABC93: push esi */
    RECOMP_CALL(sub_1721B254); /* 0x171ABC94: call 0x1721b254 */
    RECOMP_FLAGS_IN();
    ebx = eax; /* 0x171ABC99: mov ebx, eax */
    /* test ebx, ebx */ /* 0x171ABC9B: test ebx, ebx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ebx);
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = POP32_VAL(esp); /* 0x171ABC9D: pop ecx */
    if (TEST_Z(_flag_a, _flag_b)) goto L_171ABD12; /* 0x171ABC9E: je 0x171abd12 */
L_171ABCA0:
    ecx = esi; /* 0x171ABCA0: mov ecx, esi */
    esi = MEM32(ebp + 0xC); /* 0x171ABCA2: mov esi, dword ptr [ebp + 0xc] */
    eax = ecx; /* 0x171ABCA5: mov eax, ecx */
    if (2u) _cf = (((ecx) >> 1) & 1u); /* 0x171ABCA7: shr ecx, 2 */
    if (2u) { _flag_a = recomp_flags_pack((ecx >> 2u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ecx = ecx >> 2u; /* 0x171ABCA7: shr ecx, 2 */
    edi = ebx; /* 0x171ABCAA: mov edi, ebx */
    while (ecx) { MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; --ecx; } /* 0x171ABCAC: rep movsd dword ptr es:[edi], dword ptr [esi] */
    ecx = eax; /* 0x171ABCAE: mov ecx, eax */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(3);
    ecx = ecx & 3; /* 0x171ABCB0: and ecx, 3 */
    _cf = 0;
    _flag_k = FK_TEST;
    while (ecx) { MEM8(edi) = MEM8(esi); esi += _df * 1; edi += _df * 1; --ecx; } /* 0x171ABCB3: rep movsb byte ptr es:[edi], byte ptr [esi] */
L_171ABCB5:
    PUSH32(esp, 0x38u); /* 0x171ABCB5: push 0x38 */
    RECOMP_CALL(sub_1721B01C); /* 0x171ABCB7: call 0x1721b01c */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x171ABCBC: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = POP32_VAL(esp); /* 0x171ABCBE: pop ecx */
    if (TEST_Z(_flag_a, _flag_b)) goto L_171ABCDC; /* 0x171ABCBF: je 0x171abcdc */
L_171ABCC1:
    edx = MEM32(ebp + 0x10); /* 0x171ABCC1: mov edx, dword ptr [ebp + 0x10] */
    /* test edx, edx */ /* 0x171ABCC4: test edx, edx */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(edx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_171ABCCD; /* 0x171ABCC6: jne 0x171abccd */
L_171ABCC8:
    edx = 0x1700B4A4u; /* 0x171ABCC8: mov edx, 0x1700b4a4 */
L_171ABCCD:
    PUSH32(esp, 0); /* 0x171ABCCD: push 0 */
    PUSH32(esp, edx); /* 0x171ABCCF: push edx */
    PUSH32(esp, ebx); /* 0x171ABCD0: push ebx */
    ecx = eax; /* 0x171ABCD1: mov ecx, eax */
    RECOMP_CALL(sub_171ABA7F); /* 0x171ABCD3: call 0x171aba7f */
    RECOMP_FLAGS_IN();
    esi = eax; /* 0x171ABCD8: mov esi, eax */
    goto L_171ABCDE; /* 0x171ABCDA: jmp 0x171abcde */
L_171ABCDC:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    esi = 0; /* 0x171ABCDC: xor esi, esi */
    _cf = 0;
    _flag_k = FK_TEST;
L_171ABCDE:
    /* test esi, esi */ /* 0x171ABCDE: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_171ABCEF; /* 0x171ABCE0: jne 0x171abcef */
L_171ABCE2:
    /* test ebx, ebx */ /* 0x171ABCE2: test ebx, ebx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ebx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_171ABD12; /* 0x171ABCE4: je 0x171abd12 */
L_171ABCE6:
    PUSH32(esp, ebx); /* 0x171ABCE6: push ebx */
    RECOMP_CALL(sub_1721B224); /* 0x171ABCE7: call 0x1721b224 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x171ABCEC: pop ecx */
    goto L_171ABD12; /* 0x171ABCED: jmp 0x171abd12 */
L_171ABCEF:
    ecx = MEM32(ebp + 0x8); /* 0x171ABCEF: mov ecx, dword ptr [ebp + 8] */
    eax = esi + 0x4; /* 0x171ABCF2: lea eax, [esi + 4] */
    MEM32(ebp + 0xC) = eax; /* 0x171ABCF5: mov dword ptr [ebp + 0xc], eax */
    eax = ebp + 0xC; /* 0x171ABCF8: lea eax, [ebp + 0xc] */
    PUSH32(esp, eax); /* 0x171ABCFB: push eax */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x28u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 0x28u; /* 0x171ABCFC: add ecx, 0x28 */
    _flag_k = FK_ADD;
    RECOMP_CALL(sub_171A902A); /* 0x171ABCFF: call 0x171a902a */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x171ABD04: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_171ABD0C; /* 0x171ABD06: je 0x171abd0c */
L_171ABD08:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x171ABD08: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_171ABD1E; /* 0x171ABD0A: jmp 0x171abd1e */
L_171ABD0C:
    eax = MEM32(esi); /* 0x171ABD0C: mov eax, dword ptr [esi] */
    PUSH32(esp, esi); /* 0x171ABD0E: push esi */
    RECOMP_ICALL(MEM32(eax + 0x8)); /* 0x171ABD0F: call dword ptr [eax + 8] */
    RECOMP_FLAGS_IN();
L_171ABD12:
    eax = 0x8007000Eu; /* 0x171ABD12: mov eax, 0x8007000e */
    goto L_171ABD1E; /* 0x171ABD17: jmp 0x171abd1e */
L_171ABD19:
    eax = 0x88760385u; /* 0x171ABD19: mov eax, 0x88760385 */
L_171ABD1E:
    edi = POP32_VAL(esp); /* 0x171ABD1E: pop edi */
    esi = POP32_VAL(esp); /* 0x171ABD1F: pop esi */
L_171ABD20:
    ebx = POP32_VAL(esp); /* 0x171ABD20: pop ebx */
    ebp = POP32_VAL(esp); /* 0x171ABD21: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 16; { RECOMP_REGS_OUT(); return; } /* 0x171ABD22: ret 0xc */
    RECOMP_REGS_OUT();
}

void sub_171ABD50(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x171ABD50u);

L_171ABD50:
    edi = edi; /* 0x171ABD50: mov edi, edi */
    PUSH32(esp, ebp); /* 0x171ABD52: push ebp */
    ebp = esp; /* 0x171ABD53: mov ebp, esp */
    PUSH32(esp, edi); /* 0x171ABD55: push edi */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edi = 0; /* 0x171ABD56: xor edi, edi */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp MEM32(ebp + 0x18), edi */ /* 0x171ABD58: cmp dword ptr [ebp + 0x18], edi */
    _flag_a = (uint32_t)(MEM32(ebp + 0x18)); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_171ABD6C; /* 0x171ABD5B: jne 0x171abd6c */
L_171ABD5D:
    eax = MEM32(ebp + 0xC); /* 0x171ABD5D: mov eax, dword ptr [ebp + 0xc] */
    /* cmp MEM32(eax + 0x1C), edi */ /* 0x171ABD60: cmp dword ptr [eax + 0x1c], edi */
    _flag_a = (uint32_t)(MEM32(eax + 0x1C)); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_171ABD6C; /* 0x171ABD63: je 0x171abd6c */
L_171ABD65:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x171ABD65: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_171ABE18; /* 0x171ABD67: jmp 0x171abe18 */
L_171ABD6C:
    PUSH32(esp, ebx); /* 0x171ABD6C: push ebx */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ebx = 0; /* 0x171ABD6D: xor ebx, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp MEM32(ebp + 0x10), edi */ /* 0x171ABD6F: cmp dword ptr [ebp + 0x10], edi */
    _flag_a = (uint32_t)(MEM32(ebp + 0x10)); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    PUSH32(esp, esi); /* 0x171ABD72: push esi */
    if (CMP_EQ(_flag_a, _flag_b)) goto L_171ABDBA; /* 0x171ABD73: je 0x171abdba */
L_171ABD75:
    eax = MEM32(ebp + 0x10); /* 0x171ABD75: mov eax, dword ptr [ebp + 0x10] */
    edx = eax + 0x1; /* 0x171ABD78: lea edx, [eax + 1] */
L_171ABD7B:
    SET_LO8(ecx, MEM8(eax)); /* 0x171ABD7B: mov cl, byte ptr [eax] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x171ABD7D: inc eax */
    _flag_k = FK_INC;
    /* test LO8(ecx), LO8(ecx) */ /* 0x171ABD7E: test cl, cl */
    _flag_a = (uint32_t)(LO8(ecx)) << 24; _flag_b = (uint32_t)(LO8(ecx)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_171ABD7B; /* 0x171ABD80: jne 0x171abd7b */
L_171ABD82:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - edx; /* 0x171ABD82: sub eax, edx */
    _flag_k = FK_CMP;
    esi = eax + 0x1; /* 0x171ABD84: lea esi, [eax + 1] */
    PUSH32(esp, esi); /* 0x171ABD87: push esi */
    RECOMP_CALL(sub_1721B254); /* 0x171ABD88: call 0x1721b254 */
    RECOMP_FLAGS_IN();
    ebx = eax; /* 0x171ABD8D: mov ebx, eax */
    /* cmp ebx, edi */ /* 0x171ABD8F: cmp ebx, edi */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    ecx = POP32_VAL(esp); /* 0x171ABD91: pop ecx */
    if (CMP_NE(_flag_a, _flag_b)) goto L_171ABDA5; /* 0x171ABD92: jne 0x171abda5 */
L_171ABD94:
    /* cmp MEM32(ebp + 0x18), edi */ /* 0x171ABD94: cmp dword ptr [ebp + 0x18], edi */
    _flag_a = (uint32_t)(MEM32(ebp + 0x18)); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_171ABE10; /* 0x171ABD97: je 0x171abe10 */
L_171ABD99:
    ecx = MEM32(ebp + 0x18); /* 0x171ABD99: mov ecx, dword ptr [ebp + 0x18] */
    PUSH32(esp, 1); /* 0x171ABD9C: push 1 */
    RECOMP_CALL(sub_171ABA0A); /* 0x171ABD9E: call 0x171aba0a */
    RECOMP_FLAGS_IN();
    goto L_171ABE10; /* 0x171ABDA3: jmp 0x171abe10 */
L_171ABDA5:
    ecx = esi; /* 0x171ABDA5: mov ecx, esi */
    esi = MEM32(ebp + 0x10); /* 0x171ABDA7: mov esi, dword ptr [ebp + 0x10] */
    eax = ecx; /* 0x171ABDAA: mov eax, ecx */
    if (2u) _cf = (((ecx) >> 1) & 1u); /* 0x171ABDAC: shr ecx, 2 */
    if (2u) { _flag_a = recomp_flags_pack((ecx >> 2u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ecx = ecx >> 2u; /* 0x171ABDAC: shr ecx, 2 */
    edi = ebx; /* 0x171ABDAF: mov edi, ebx */
    while (ecx) { MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; --ecx; } /* 0x171ABDB1: rep movsd dword ptr es:[edi], dword ptr [esi] */
    ecx = eax; /* 0x171ABDB3: mov ecx, eax */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(3);
    ecx = ecx & 3; /* 0x171ABDB5: and ecx, 3 */
    _cf = 0;
    _flag_k = FK_TEST;
    while (ecx) { MEM8(edi) = MEM8(esi); esi += _df * 1; edi += _df * 1; --ecx; } /* 0x171ABDB8: rep movsb byte ptr es:[edi], byte ptr [esi] */
L_171ABDBA:
    PUSH32(esp, 0x44u); /* 0x171ABDBA: push 0x44 */
    RECOMP_CALL(sub_1721B01C); /* 0x171ABDBC: call 0x1721b01c */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x171ABDC1: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = POP32_VAL(esp); /* 0x171ABDC3: pop ecx */
    if (TEST_Z(_flag_a, _flag_b)) goto L_171ABDDE; /* 0x171ABDC4: je 0x171abdde */
L_171ABDC6:
    PUSH32(esp, MEM32(ebp + 0x18)); /* 0x171ABDC6: push dword ptr [ebp + 0x18] */
    ecx = eax; /* 0x171ABDC9: mov ecx, eax */
    PUSH32(esp, MEM32(ebp + 0x14)); /* 0x171ABDCB: push dword ptr [ebp + 0x14] */
    PUSH32(esp, ebx); /* 0x171ABDCE: push ebx */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x171ABDCF: push dword ptr [ebp + 0xc] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x171ABDD2: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_171AB926); /* 0x171ABDD5: call 0x171ab926 */
    RECOMP_FLAGS_IN();
    esi = eax; /* 0x171ABDDA: mov esi, eax */
    goto L_171ABDE0; /* 0x171ABDDC: jmp 0x171abde0 */
L_171ABDDE:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    esi = 0; /* 0x171ABDDE: xor esi, esi */
    _cf = 0;
    _flag_k = FK_TEST;
L_171ABDE0:
    /* test esi, esi */ /* 0x171ABDE0: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_171ABDFF; /* 0x171ABDE2: jne 0x171abdff */
L_171ABDE4:
    ecx = MEM32(ebp + 0x18); /* 0x171ABDE4: mov ecx, dword ptr [ebp + 0x18] */
    /* test ecx, ecx */ /* 0x171ABDE7: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_171ABDF2; /* 0x171ABDE9: je 0x171abdf2 */
L_171ABDEB:
    PUSH32(esp, 1); /* 0x171ABDEB: push 1 */
    RECOMP_CALL(sub_171ABA0A); /* 0x171ABDED: call 0x171aba0a */
    RECOMP_FLAGS_IN();
L_171ABDF2:
    /* test ebx, ebx */ /* 0x171ABDF2: test ebx, ebx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ebx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_171ABE10; /* 0x171ABDF4: je 0x171abe10 */
L_171ABDF6:
    PUSH32(esp, ebx); /* 0x171ABDF6: push ebx */
    RECOMP_CALL(sub_1721B224); /* 0x171ABDF7: call 0x1721b224 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x171ABDFC: pop ecx */
    goto L_171ABE10; /* 0x171ABDFD: jmp 0x171abe10 */
L_171ABDFF:
    ecx = esi; /* 0x171ABDFF: mov ecx, esi */
    RECOMP_CALL(sub_171AB0FC); /* 0x171ABE01: call 0x171ab0fc */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x171ABE06: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_171ABE14; /* 0x171ABE08: je 0x171abe14 */
L_171ABE0A:
    eax = MEM32(esi); /* 0x171ABE0A: mov eax, dword ptr [esi] */
    PUSH32(esp, esi); /* 0x171ABE0C: push esi */
    RECOMP_ICALL(MEM32(eax + 0x8)); /* 0x171ABE0D: call dword ptr [eax + 8] */
    RECOMP_FLAGS_IN();
L_171ABE10:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x171ABE10: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_171ABE16; /* 0x171ABE12: jmp 0x171abe16 */
L_171ABE14:
    eax = esi; /* 0x171ABE14: mov eax, esi */
L_171ABE16:
    esi = POP32_VAL(esp); /* 0x171ABE16: pop esi */
    ebx = POP32_VAL(esp); /* 0x171ABE17: pop ebx */
L_171ABE18:
    edi = POP32_VAL(esp); /* 0x171ABE18: pop edi */
    ebp = POP32_VAL(esp); /* 0x171ABE19: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 24; { RECOMP_REGS_OUT(); return; } /* 0x171ABE1A: ret 0x14 */
    RECOMP_REGS_OUT();
}

void sub_171ABE22(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x171ABE22u);

L_171ABE22:
    edi = edi; /* 0x171ABE22: mov edi, edi */
    PUSH32(esp, ebp); /* 0x171ABE24: push ebp */
    ebp = esp; /* 0x171ABE25: mov ebp, esp */
    /* cmp MEM32(ebp + 0x10), 0 */ /* 0x171ABE27: cmp dword ptr [ebp + 0x10], 0 */
    _flag_a = (uint32_t)(MEM32(ebp + 0x10)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    PUSH32(esp, ebx); /* 0x171ABE2B: push ebx */
    PUSH32(esp, esi); /* 0x171ABE2C: push esi */
    ebx = ecx; /* 0x171ABE2D: mov ebx, ecx */
    if (CMP_EQ(_flag_a, _flag_b)) goto L_171ABE49; /* 0x171ABE2F: je 0x171abe49 */
L_171ABE31:
    esi = MEM32(ebp + 0x10); /* 0x171ABE31: mov esi, dword ptr [ebp + 0x10] */
    PUSH32(esp, edi); /* 0x171ABE34: push edi */
    PUSH32(esp, 4); /* 0x171ABE35: push 4 */
    ecx = POP32_VAL(esp); /* 0x171ABE37: pop ecx */
    edi = 0x1700B4A4u; /* 0x171ABE38: mov edi, 0x1700b4a4 */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x171ABE3D: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    if (ecx) { uint32_t _a = 0, _b = 0; while (ecx) { _a = MEM32(esi); _b = MEM32(edi); esi += (_df * 4); edi += (_df * 4); ecx--; if (_a != _b) break; } _flag_a = _a; _flag_b = _b; _cf = (uint32_t)CMP_B(_a, _b); _flag_k = FK_CMP; } /* 0x171ABE3F: repe cmpsd dword ptr [esi], dword ptr es:[edi] */
    edi = POP32_VAL(esp); /* 0x171ABE41: pop edi */
    if (recomp_cond_cf(_flag_k, _flag_a, _flag_b, CC_E, _cf)) goto L_171ABE49; /* 0x171ABE42: je 0x171abe49 */
L_171ABE44:
    esi = MEM32(ebp + 0x10); /* 0x171ABE44: mov esi, dword ptr [ebp + 0x10] */
    goto L_171ABE4B; /* 0x171ABE47: jmp 0x171abe4b */
L_171ABE49:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    esi = 0; /* 0x171ABE49: xor esi, esi */
    _cf = 0;
    _flag_k = FK_TEST;
L_171ABE4B:
    eax = MEM32(ebx + 0x40); /* 0x171ABE4B: mov eax, dword ptr [ebx + 0x40] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - 0; /* 0x171ABE4E: sub eax, 0 */
    _flag_k = FK_CMP;
    if (/* sub result */ CMP_EQ(_flag_a, _flag_b)) goto L_171ABEC9; /* 0x171ABE51: je 0x171abec9 */
L_171ABE53:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax - 1; /* 0x171ABE53: dec eax */
    _flag_k = FK_DEC;
    if (/* dec result */ CMP_NE(_flag_a, _flag_b)) goto L_171ABF08; /* 0x171ABE54: jne 0x171abf08 */
L_171ABE5A:
    PUSH32(esp, 0x170238E0u); /* 0x171ABE5A: push 0x170238e0 */
    PUSH32(esp, ebx); /* 0x171ABE5F: push ebx */
    RECOMP_CALL(sub_171A5DE5); /* 0x171ABE60: call 0x171a5de5 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x171ABE65: pop ecx */
    ecx = POP32_VAL(esp); /* 0x171ABE66: pop ecx */
    PUSH32(esp, MEM32(ebx + 0x58)); /* 0x171ABE67: push dword ptr [ebx + 0x58] */
    ecx = ebx; /* 0x171ABE6A: mov ecx, ebx */
    RECOMP_CALL(sub_171A64F6); /* 0x171ABE6C: call 0x171a64f6 */
    RECOMP_FLAGS_IN();
    /* cmp MEM32(ebp + 0xC), 0 */ /* 0x171ABE71: cmp dword ptr [ebp + 0xc], 0 */
    _flag_a = (uint32_t)(MEM32(ebp + 0xC)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_171ABE8D; /* 0x171ABE75: je 0x171abe8d */
L_171ABE77:
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x171ABE77: push dword ptr [ebp + 0xc] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x171ABE7A: push dword ptr [ebp + 8] */
    PUSH32(esp, 0x17023BF0u); /* 0x171ABE7D: push 0x17023bf0 */
    PUSH32(esp, ebx); /* 0x171ABE82: push ebx */
    RECOMP_CALL(sub_171A5DE5); /* 0x171ABE83: call 0x171a5de5 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x10u; /* 0x171ABE88: add esp, 0x10 */
    _flag_k = FK_ADD;
    goto L_171ABE9E; /* 0x171ABE8B: jmp 0x171abe9e */
L_171ABE8D:
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x171ABE8D: push dword ptr [ebp + 8] */
    PUSH32(esp, 0x17023BE8u); /* 0x171ABE90: push 0x17023be8 */
    PUSH32(esp, ebx); /* 0x171ABE95: push ebx */
    RECOMP_CALL(sub_171A5DE5); /* 0x171ABE96: call 0x171a5de5 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x171ABE9B: add esp, 0xc */
    _flag_k = FK_ADD;
L_171ABE9E:
    /* test esi, esi */ /* 0x171ABE9E: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_171ABEB8; /* 0x171ABEA0: je 0x171abeb8 */
L_171ABEA2:
    eax = MEM32(ebx + 0x58); /* 0x171ABEA2: mov eax, dword ptr [ebx + 0x58] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x171ABEA5: inc eax */
    _flag_k = FK_INC;
    PUSH32(esp, eax); /* 0x171ABEA6: push eax */
    ecx = ebx; /* 0x171ABEA7: mov ecx, ebx */
    RECOMP_CALL(sub_171A64F6); /* 0x171ABEA9: call 0x171a64f6 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x171ABEAE: push dword ptr [ebp + 0x10] */
    ecx = ebx; /* 0x171ABEB1: mov ecx, ebx */
    RECOMP_CALL(sub_171A6555); /* 0x171ABEB3: call 0x171a6555 */
    RECOMP_FLAGS_IN();
L_171ABEB8:
    eax = MEM32(ebx + 0x58); /* 0x171ABEB8: mov eax, dword ptr [ebx + 0x58] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x171ABEBB: inc eax */
    _flag_k = FK_INC;
    PUSH32(esp, eax); /* 0x171ABEBC: push eax */
    ecx = ebx; /* 0x171ABEBD: mov ecx, ebx */
    RECOMP_CALL(sub_171A64F6); /* 0x171ABEBF: call 0x171a64f6 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(MEM32(ebx + 0x58)); _flag_b = (uint32_t)(1);
    MEM32(ebx + 0x58) = MEM32(ebx + 0x58) + 1; /* 0x171ABEC4: inc dword ptr [ebx + 0x58] */
    _flag_k = FK_INC;
    goto L_171ABF08; /* 0x171ABEC7: jmp 0x171abf08 */
L_171ABEC9:
    ecx = ebx; /* 0x171ABEC9: mov ecx, ebx */
    RECOMP_CALL(sub_171A96B3); /* 0x171ABECB: call 0x171a96b3 */
    RECOMP_FLAGS_IN();
    ecx = ebx; /* 0x171ABED0: mov ecx, ebx */
    RECOMP_CALL(sub_171A967D); /* 0x171ABED2: call 0x171a967d */
    RECOMP_FLAGS_IN();
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x171ABED7: push dword ptr [ebp + 8] */
    ecx = ebx; /* 0x171ABEDA: mov ecx, ebx */
    RECOMP_CALL(sub_171A5D52); /* 0x171ABEDC: call 0x171a5d52 */
    RECOMP_FLAGS_IN();
    /* cmp MEM32(ebp + 0xC), 0 */ /* 0x171ABEE1: cmp dword ptr [ebp + 0xc], 0 */
    _flag_a = (uint32_t)(MEM32(ebp + 0xC)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_171ABEF1; /* 0x171ABEE5: je 0x171abef1 */
L_171ABEE7:
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x171ABEE7: push dword ptr [ebp + 0xc] */
    ecx = ebx; /* 0x171ABEEA: mov ecx, ebx */
    RECOMP_CALL(sub_171A5D52); /* 0x171ABEEC: call 0x171a5d52 */
    RECOMP_FLAGS_IN();
L_171ABEF1:
    PUSH32(esp, 0xAu); /* 0x171ABEF1: push 0xa */
    ecx = ebx; /* 0x171ABEF3: mov ecx, ebx */
    RECOMP_CALL(sub_171A53AD); /* 0x171ABEF5: call 0x171a53ad */
    RECOMP_FLAGS_IN();
    /* test esi, esi */ /* 0x171ABEFA: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_171ABF08; /* 0x171ABEFC: je 0x171abf08 */
L_171ABEFE:
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x171ABEFE: push dword ptr [ebp + 0x10] */
    ecx = ebx; /* 0x171ABF01: mov ecx, ebx */
    RECOMP_CALL(sub_171A5D99); /* 0x171ABF03: call 0x171a5d99 */
    RECOMP_FLAGS_IN();
L_171ABF08:
    esi = POP32_VAL(esp); /* 0x171ABF08: pop esi */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x171ABF09: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    ebx = POP32_VAL(esp); /* 0x171ABF0B: pop ebx */
    ebp = POP32_VAL(esp); /* 0x171ABF0C: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 16; { RECOMP_REGS_OUT(); return; } /* 0x171ABF0D: ret 0xc */
    RECOMP_REGS_OUT();
}

void sub_171ABF15(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x171ABF15u);

L_171ABF15:
    edi = edi; /* 0x171ABF15: mov edi, edi */
    PUSH32(esp, esi); /* 0x171ABF17: push esi */
    esi = ecx; /* 0x171ABF18: mov esi, ecx */
    eax = MEM32(esi + 0x40); /* 0x171ABF1A: mov eax, dword ptr [esi + 0x40] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - 0; /* 0x171ABF1D: sub eax, 0 */
    _flag_k = FK_CMP;
    if (/* sub result */ CMP_EQ(_flag_a, _flag_b)) goto L_171ABF4D; /* 0x171ABF20: je 0x171abf4d */
L_171ABF22:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax - 1; /* 0x171ABF22: dec eax */
    _flag_k = FK_DEC;
    if (/* dec result */ CMP_NE(_flag_a, _flag_b)) goto L_171ABF64; /* 0x171ABF23: jne 0x171abf64 */
L_171ABF25:
    eax = MEM32(esi + 0x58); /* 0x171ABF25: mov eax, dword ptr [esi + 0x58] */
    /* test eax, eax */ /* 0x171ABF28: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_171ABF33; /* 0x171ABF2A: jne 0x171abf33 */
L_171ABF2C:
    eax = 0x8876038Fu; /* 0x171ABF2C: mov eax, 0x8876038f */
    esi = POP32_VAL(esp); /* 0x171ABF31: pop esi */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x171ABF32: ret  */
L_171ABF33:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax - 1; /* 0x171ABF33: dec eax */
    _flag_k = FK_DEC;
    PUSH32(esp, eax); /* 0x171ABF34: push eax */
    ecx = esi; /* 0x171ABF35: mov ecx, esi */
    MEM32(esi + 0x58) = eax; /* 0x171ABF37: mov dword ptr [esi + 0x58], eax */
    RECOMP_CALL(sub_171A64F6); /* 0x171ABF3A: call 0x171a64f6 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0x17008030u); /* 0x171ABF3F: push 0x17008030 */
    ecx = esi; /* 0x171ABF44: mov ecx, esi */
    RECOMP_CALL(sub_171A5334); /* 0x171ABF46: call 0x171a5334 */
    RECOMP_FLAGS_IN();
    goto L_171ABF64; /* 0x171ABF4B: jmp 0x171abf64 */
L_171ABF4D:
    ecx = esi; /* 0x171ABF4D: mov ecx, esi */
    RECOMP_CALL(sub_171A96B3); /* 0x171ABF4F: call 0x171a96b3 */
    RECOMP_FLAGS_IN();
    ecx = esi; /* 0x171ABF54: mov ecx, esi */
    RECOMP_CALL(sub_171A967D); /* 0x171ABF56: call 0x171a967d */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0xBu); /* 0x171ABF5B: push 0xb */
    ecx = esi; /* 0x171ABF5D: mov ecx, esi */
    RECOMP_CALL(sub_171A53AD); /* 0x171ABF5F: call 0x171a53ad */
    RECOMP_FLAGS_IN();
L_171ABF64:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x171ABF64: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    esi = POP32_VAL(esp); /* 0x171ABF66: pop esi */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x171ABF67: ret  */
    RECOMP_REGS_OUT();
}

void sub_171ABF6D(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x171ABF6Du);

L_171ABF6D:
    edi = edi; /* 0x171ABF6D: mov edi, edi */
    PUSH32(esp, ebp); /* 0x171ABF6F: push ebp */
    ebp = esp; /* 0x171ABF70: mov ebp, esp */
    /* cmp MEM32(ebp + 0xC), 0 */ /* 0x171ABF72: cmp dword ptr [ebp + 0xc], 0 */
    _flag_a = (uint32_t)(MEM32(ebp + 0xC)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    PUSH32(esp, ebx); /* 0x171ABF76: push ebx */
    PUSH32(esp, esi); /* 0x171ABF77: push esi */
    ebx = ecx; /* 0x171ABF78: mov ebx, ecx */
    if (CMP_EQ(_flag_a, _flag_b)) goto L_171ABF94; /* 0x171ABF7A: je 0x171abf94 */
L_171ABF7C:
    esi = MEM32(ebp + 0xC); /* 0x171ABF7C: mov esi, dword ptr [ebp + 0xc] */
    PUSH32(esp, edi); /* 0x171ABF7F: push edi */
    PUSH32(esp, 4); /* 0x171ABF80: push 4 */
    ecx = POP32_VAL(esp); /* 0x171ABF82: pop ecx */
    edi = 0x1700B4A4u; /* 0x171ABF83: mov edi, 0x1700b4a4 */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x171ABF88: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    if (ecx) { uint32_t _a = 0, _b = 0; while (ecx) { _a = MEM32(esi); _b = MEM32(edi); esi += (_df * 4); edi += (_df * 4); ecx--; if (_a != _b) break; } _flag_a = _a; _flag_b = _b; _cf = (uint32_t)CMP_B(_a, _b); _flag_k = FK_CMP; } /* 0x171ABF8A: repe cmpsd dword ptr [esi], dword ptr es:[edi] */
    edi = POP32_VAL(esp); /* 0x171ABF8C: pop edi */
    if (recomp_cond_cf(_flag_k, _flag_a, _flag_b, CC_E, _cf)) goto L_171ABF94; /* 0x171ABF8D: je 0x171abf94 */
L_171ABF8F:
    esi = MEM32(ebp + 0xC); /* 0x171ABF8F: mov esi, dword ptr [ebp + 0xc] */
    goto L_171ABF96; /* 0x171ABF92: jmp 0x171abf96 */
L_171ABF94:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    esi = 0; /* 0x171ABF94: xor esi, esi */
    _cf = 0;
    _flag_k = FK_TEST;
L_171ABF96:
    eax = MEM32(ebx + 0x40); /* 0x171ABF96: mov eax, dword ptr [ebx + 0x40] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - 0; /* 0x171ABF99: sub eax, 0 */
    _flag_k = FK_CMP;
    if (/* sub result */ CMP_EQ(_flag_a, _flag_b)) goto L_171AC003; /* 0x171ABF9C: je 0x171ac003 */
L_171ABF9E:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax - 1; /* 0x171ABF9E: dec eax */
    _flag_k = FK_DEC;
    if (/* dec result */ CMP_NE(_flag_a, _flag_b)) goto L_171AC03B; /* 0x171ABF9F: jne 0x171ac03b */
L_171ABFA5:
    PUSH32(esp, MEM32(ebx + 0x58)); /* 0x171ABFA5: push dword ptr [ebx + 0x58] */
    ecx = ebx; /* 0x171ABFA8: mov ecx, ebx */
    RECOMP_CALL(sub_171A64F6); /* 0x171ABFAA: call 0x171a64f6 */
    RECOMP_FLAGS_IN();
    /* test esi, esi */ /* 0x171ABFAF: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_171ABFF0; /* 0x171ABFB1: je 0x171abff0 */
L_171ABFB3:
    /* cmp MEM32(ebp + 0x8), 0 */ /* 0x171ABFB3: cmp dword ptr [ebp + 8], 0 */
    _flag_a = (uint32_t)(MEM32(ebp + 0x8)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_171ABFCC; /* 0x171ABFB7: je 0x171abfcc */
L_171ABFB9:
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x171ABFB9: push dword ptr [ebp + 8] */
    PUSH32(esp, 0x17023C08u); /* 0x171ABFBC: push 0x17023c08 */
    PUSH32(esp, ebx); /* 0x171ABFC1: push ebx */
    RECOMP_CALL(sub_171A5DE5); /* 0x171ABFC2: call 0x171a5de5 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x171ABFC7: add esp, 0xc */
    _flag_k = FK_ADD;
    goto L_171ABFD8; /* 0x171ABFCA: jmp 0x171abfd8 */
L_171ABFCC:
    PUSH32(esp, 0x17023C04u); /* 0x171ABFCC: push 0x17023c04 */
    ecx = ebx; /* 0x171ABFD1: mov ecx, ebx */
    RECOMP_CALL(sub_171A5334); /* 0x171ABFD3: call 0x171a5334 */
    RECOMP_FLAGS_IN();
L_171ABFD8:
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x171ABFD8: push dword ptr [ebp + 0xc] */
    ecx = ebx; /* 0x171ABFDB: mov ecx, ebx */
    RECOMP_CALL(sub_171A6555); /* 0x171ABFDD: call 0x171a6555 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0x17023C00u); /* 0x171ABFE2: push 0x17023c00 */
    ecx = ebx; /* 0x171ABFE7: mov ecx, ebx */
    RECOMP_CALL(sub_171A5334); /* 0x171ABFE9: call 0x171a5334 */
    RECOMP_FLAGS_IN();
    goto L_171AC03B; /* 0x171ABFEE: jmp 0x171ac03b */
L_171ABFF0:
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x171ABFF0: push dword ptr [ebp + 8] */
    PUSH32(esp, 0x17023BF8u); /* 0x171ABFF3: push 0x17023bf8 */
    PUSH32(esp, ebx); /* 0x171ABFF8: push ebx */
    RECOMP_CALL(sub_171A5DE5); /* 0x171ABFF9: call 0x171a5de5 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x171ABFFE: add esp, 0xc */
    _flag_k = FK_ADD;
    goto L_171AC03B; /* 0x171AC001: jmp 0x171ac03b */
L_171AC003:
    ecx = ebx; /* 0x171AC003: mov ecx, ebx */
    RECOMP_CALL(sub_171A96B3); /* 0x171AC005: call 0x171a96b3 */
    RECOMP_FLAGS_IN();
    ecx = ebx; /* 0x171AC00A: mov ecx, ebx */
    RECOMP_CALL(sub_171A967D); /* 0x171AC00C: call 0x171a967d */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0xAu); /* 0x171AC011: push 0xa */
    ecx = ebx; /* 0x171AC013: mov ecx, ebx */
    RECOMP_CALL(sub_171A53AD); /* 0x171AC015: call 0x171a53ad */
    RECOMP_FLAGS_IN();
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x171AC01A: push dword ptr [ebp + 8] */
    ecx = ebx; /* 0x171AC01D: mov ecx, ebx */
    RECOMP_CALL(sub_171A5D52); /* 0x171AC01F: call 0x171a5d52 */
    RECOMP_FLAGS_IN();
    /* test esi, esi */ /* 0x171AC024: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_171AC032; /* 0x171AC026: je 0x171ac032 */
L_171AC028:
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x171AC028: push dword ptr [ebp + 0xc] */
    ecx = ebx; /* 0x171AC02B: mov ecx, ebx */
    RECOMP_CALL(sub_171A5D99); /* 0x171AC02D: call 0x171a5d99 */
    RECOMP_FLAGS_IN();
L_171AC032:
    PUSH32(esp, 0xBu); /* 0x171AC032: push 0xb */
    ecx = ebx; /* 0x171AC034: mov ecx, ebx */
    RECOMP_CALL(sub_171A53AD); /* 0x171AC036: call 0x171a53ad */
    RECOMP_FLAGS_IN();
L_171AC03B:
    esi = POP32_VAL(esp); /* 0x171AC03B: pop esi */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x171AC03C: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    ebx = POP32_VAL(esp); /* 0x171AC03E: pop ebx */
    ebp = POP32_VAL(esp); /* 0x171AC03F: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 12; { RECOMP_REGS_OUT(); return; } /* 0x171AC040: ret 8 */
    RECOMP_REGS_OUT();
}

void sub_171AC048(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x171AC048u);

L_171AC048:
    edi = edi; /* 0x171AC048: mov edi, edi */
    PUSH32(esp, ebp); /* 0x171AC04A: push ebp */
    ebp = esp; /* 0x171AC04B: mov ebp, esp */
    PUSH32(esp, ebx); /* 0x171AC04D: push ebx */
    ebx = MEM32(ebp + 0x8); /* 0x171AC04E: mov ebx, dword ptr [ebp + 8] */
    PUSH32(esp, esi); /* 0x171AC051: push esi */
    esi = ecx; /* 0x171AC052: mov esi, ecx */
    eax = MEM32(esi + 0x4); /* 0x171AC054: mov eax, dword ptr [esi + 4] */
    ecx = MEM32(esi + 0x1C); /* 0x171AC057: mov ecx, dword ptr [esi + 0x1c] */
    ecx = MEM32(ecx + 0x4); /* 0x171AC05A: mov ecx, dword ptr [ecx + 4] */
    edx = esi + 0x8; /* 0x171AC05D: lea edx, [esi + 8] */
    PUSH32(esp, edx); /* 0x171AC060: push edx */
    PUSH32(esp, eax); /* 0x171AC061: push eax */
    PUSH32(esp, ecx); /* 0x171AC062: push ecx */
    ecx = ebx; /* 0x171AC063: mov ecx, ebx */
    RECOMP_CALL(sub_171ABE22); /* 0x171AC065: call 0x171abe22 */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x171AC06A: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_171AC0AD; /* 0x171AC06C: jne 0x171ac0ad */
L_171AC06E:
    eax = MEM32(esi + 0x38); /* 0x171AC06E: mov eax, dword ptr [esi + 0x38] */
    ecx = MEM32(esi + 0x1C); /* 0x171AC071: mov ecx, dword ptr [esi + 0x1c] */
    MEM32(ebp + 0x8) = eax; /* 0x171AC074: mov dword ptr [ebp + 8], eax */
    PUSH32(esp, 1); /* 0x171AC077: push 1 */
    eax = ebp + 0x8; /* 0x171AC079: lea eax, [ebp + 8] */
    PUSH32(esp, eax); /* 0x171AC07C: push eax */
    PUSH32(esp, ebx); /* 0x171AC07D: push ebx */
    RECOMP_CALL(sub_171A9C99); /* 0x171AC07E: call 0x171a9c99 */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x171AC083: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_171AC0AD; /* 0x171AC085: jne 0x171ac0ad */
L_171AC087:
    PUSH32(esp, edi); /* 0x171AC087: push edi */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edi = 0; /* 0x171AC088: xor edi, edi */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp MEM32(esi + 0x24), edi */ /* 0x171AC08A: cmp dword ptr [esi + 0x24], edi */
    _flag_a = (uint32_t)(MEM32(esi + 0x24)); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_171AC0A5; /* 0x171AC08D: jbe 0x171ac0a5 */
L_171AC08F:
    eax = MEM32(esi + 0x30); /* 0x171AC08F: mov eax, dword ptr [esi + 0x30] */
    ecx = MEM32(eax + edi * 4); /* 0x171AC092: mov ecx, dword ptr [eax + edi*4] */
    eax = MEM32(ecx); /* 0x171AC095: mov eax, dword ptr [ecx] */
    PUSH32(esp, ebx); /* 0x171AC097: push ebx */
    RECOMP_ICALL(MEM32(eax + 0x28)); /* 0x171AC098: call dword ptr [eax + 0x28] */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x171AC09B: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_171AC0AC; /* 0x171AC09D: jne 0x171ac0ac */
L_171AC09F:
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(1);
    edi = edi + 1; /* 0x171AC09F: inc edi */
    _flag_k = FK_INC;
    /* cmp edi, MEM32(esi + 0x24) */ /* 0x171AC0A0: cmp edi, dword ptr [esi + 0x24] */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(MEM32(esi + 0x24));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_171AC08F; /* 0x171AC0A3: jb 0x171ac08f */
L_171AC0A5:
    ecx = ebx; /* 0x171AC0A5: mov ecx, ebx */
    RECOMP_CALL(sub_171ABF15); /* 0x171AC0A7: call 0x171abf15 */
    RECOMP_FLAGS_IN();
L_171AC0AC:
    edi = POP32_VAL(esp); /* 0x171AC0AC: pop edi */
L_171AC0AD:
    esi = POP32_VAL(esp); /* 0x171AC0AD: pop esi */
    ebx = POP32_VAL(esp); /* 0x171AC0AE: pop ebx */
    ebp = POP32_VAL(esp); /* 0x171AC0AF: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x171AC0B0: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_171AC0B8(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x171AC0B8u);

L_171AC0B8:
    edi = edi; /* 0x171AC0B8: mov edi, edi */
    PUSH32(esp, ebp); /* 0x171AC0BA: push ebp */
    ebp = esp; /* 0x171AC0BB: mov ebp, esp */
    eax = ecx + 0x20; /* 0x171AC0BD: lea eax, [ecx + 0x20] */
    PUSH32(esp, eax); /* 0x171AC0C0: push eax */
    PUSH32(esp, MEM32(ecx + 0x1C)); /* 0x171AC0C1: push dword ptr [ecx + 0x1c] */
    ecx = MEM32(ebp + 0x8); /* 0x171AC0C4: mov ecx, dword ptr [ebp + 8] */
    RECOMP_CALL(sub_171ABF6D); /* 0x171AC0C7: call 0x171abf6d */
    RECOMP_FLAGS_IN();
    ebp = POP32_VAL(esp); /* 0x171AC0CC: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x171AC0CD: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_171AC0D5(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x171AC0D5u);

L_171AC0D5:
    eax = MEM32(ecx + 0x10); /* 0x171AC0D5: mov eax, dword ptr [ecx + 0x10] */
    edx = MEM32(ecx + 0x14); /* 0x171AC0D8: mov edx, dword ptr [ecx + 0x14] */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x171AC0DB: ret  */
    RECOMP_REGS_OUT();
}

void sub_171AC0E1(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x171AC0E1u);

L_171AC0E1:
    eax = MEM32(ecx + 0x44); /* 0x171AC0E1: mov eax, dword ptr [ecx + 0x44] */
    edx = MEM32(ecx + 0x48); /* 0x171AC0E4: mov edx, dword ptr [ecx + 0x48] */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x171AC0E7: ret  */
    RECOMP_REGS_OUT();
}

void sub_171AC0ED(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x171AC0EDu);

L_171AC0ED:
    edi = edi; /* 0x171AC0ED: mov edi, edi */
    PUSH32(esp, ebp); /* 0x171AC0EF: push ebp */
    ebp = esp; /* 0x171AC0F0: mov ebp, esp */
    edx = MEM32(ebp + 0x10); /* 0x171AC0F2: mov edx, dword ptr [ebp + 0x10] */
    /* test edx, edx */ /* 0x171AC0F5: test edx, edx */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(edx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_171AC138; /* 0x171AC0F7: je 0x171ac138 */
L_171AC0F9:
    _flag_a = (uint32_t)(MEM32(edx)); _flag_b = (uint32_t)(0);
    MEM32(edx) = MEM32(edx) & 0; /* 0x171AC0F9: and dword ptr [edx], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, esi); /* 0x171AC0FC: push esi */
    esi = MEM32(ebp + 0xC); /* 0x171AC0FD: mov esi, dword ptr [ebp + 0xc] */
    PUSH32(esp, edi); /* 0x171AC100: push edi */
    PUSH32(esp, 4); /* 0x171AC101: push 4 */
    ecx = POP32_VAL(esp); /* 0x171AC103: pop ecx */
    edi = 0x1702AA2Cu; /* 0x171AC104: mov edi, 0x1702aa2c */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x171AC109: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    if (ecx) { uint32_t _a = 0, _b = 0; while (ecx) { _a = MEM32(esi); _b = MEM32(edi); esi += (_df * 4); edi += (_df * 4); ecx--; if (_a != _b) break; } _flag_a = _a; _flag_b = _b; _cf = (uint32_t)CMP_B(_a, _b); _flag_k = FK_CMP; } /* 0x171AC10B: repe cmpsd dword ptr [esi], dword ptr es:[edi] */
    if (recomp_cond_cf(_flag_k, _flag_a, _flag_b, CC_E, _cf)) goto L_171AC127; /* 0x171AC10D: je 0x171ac127 */
L_171AC10F:
    esi = MEM32(ebp + 0xC); /* 0x171AC10F: mov esi, dword ptr [ebp + 0xc] */
    PUSH32(esp, 4); /* 0x171AC112: push 4 */
    ecx = POP32_VAL(esp); /* 0x171AC114: pop ecx */
    edi = 0x17001C20u; /* 0x171AC115: mov edi, 0x17001c20 */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x171AC11A: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    if (ecx) { uint32_t _a = 0, _b = 0; while (ecx) { _a = MEM32(esi); _b = MEM32(edi); esi += (_df * 4); edi += (_df * 4); ecx--; if (_a != _b) break; } _flag_a = _a; _flag_b = _b; _cf = (uint32_t)CMP_B(_a, _b); _flag_k = FK_CMP; } /* 0x171AC11C: repe cmpsd dword ptr [esi], dword ptr es:[edi] */
    if (recomp_cond_cf(_flag_k, _flag_a, _flag_b, CC_E, _cf)) goto L_171AC127; /* 0x171AC11E: je 0x171ac127 */
L_171AC120:
    eax = 0x80004002u; /* 0x171AC120: mov eax, 0x80004002 */
    goto L_171AC134; /* 0x171AC125: jmp 0x171ac134 */
L_171AC127:
    eax = MEM32(ebp + 0x8); /* 0x171AC127: mov eax, dword ptr [ebp + 8] */
    MEM32(edx) = eax; /* 0x171AC12A: mov dword ptr [edx], eax */
    ecx = MEM32(eax); /* 0x171AC12C: mov ecx, dword ptr [eax] */
    PUSH32(esp, eax); /* 0x171AC12E: push eax */
    RECOMP_ICALL(MEM32(ecx + 0x4)); /* 0x171AC12F: call dword ptr [ecx + 4] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x171AC132: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
L_171AC134:
    edi = POP32_VAL(esp); /* 0x171AC134: pop edi */
    esi = POP32_VAL(esp); /* 0x171AC135: pop esi */
    goto L_171AC13D; /* 0x171AC136: jmp 0x171ac13d */
L_171AC138:
    eax = 0x80004003u; /* 0x171AC138: mov eax, 0x80004003 */
L_171AC13D:
    ebp = POP32_VAL(esp); /* 0x171AC13D: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 16; { RECOMP_REGS_OUT(); return; } /* 0x171AC13E: ret 0xc */
    RECOMP_REGS_OUT();
}

void sub_171AC146(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x171AC146u);

L_171AC146:
    edi = edi; /* 0x171AC146: mov edi, edi */
    PUSH32(esp, ebp); /* 0x171AC148: push ebp */
    ebp = esp; /* 0x171AC149: mov ebp, esp */
    eax = MEM32(ebp + 0x8); /* 0x171AC14B: mov eax, dword ptr [ebp + 8] */
    eax = MEM32(eax + 0xC); /* 0x171AC14E: mov eax, dword ptr [eax + 0xc] */
    ecx = MEM32(eax); /* 0x171AC151: mov ecx, dword ptr [eax] */
    PUSH32(esp, eax); /* 0x171AC153: push eax */
    RECOMP_ICALL(MEM32(ecx + 0x4)); /* 0x171AC154: call dword ptr [ecx + 4] */
    RECOMP_FLAGS_IN();
    ebp = POP32_VAL(esp); /* 0x171AC157: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x171AC158: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_171AC160(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x171AC160u);

L_171AC160:
    edi = edi; /* 0x171AC160: mov edi, edi */
    PUSH32(esp, ebp); /* 0x171AC162: push ebp */
    ebp = esp; /* 0x171AC163: mov ebp, esp */
    eax = MEM32(ebp + 0x8); /* 0x171AC165: mov eax, dword ptr [ebp + 8] */
    eax = MEM32(eax + 0xC); /* 0x171AC168: mov eax, dword ptr [eax + 0xc] */
    ecx = MEM32(eax); /* 0x171AC16B: mov ecx, dword ptr [eax] */
    PUSH32(esp, eax); /* 0x171AC16D: push eax */
    RECOMP_ICALL(MEM32(ecx + 0x8)); /* 0x171AC16E: call dword ptr [ecx + 8] */
    RECOMP_FLAGS_IN();
    ebp = POP32_VAL(esp); /* 0x171AC171: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x171AC172: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_171AC17A(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x171AC17Au);

L_171AC17A:
    edi = edi; /* 0x171AC17A: mov edi, edi */
    PUSH32(esp, ebp); /* 0x171AC17C: push ebp */
    ebp = esp; /* 0x171AC17D: mov ebp, esp */
    /* cmp MEM32(ebp + 0xC), 0 */ /* 0x171AC17F: cmp dword ptr [ebp + 0xc], 0 */
    _flag_a = (uint32_t)(MEM32(ebp + 0xC)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_171AC19A; /* 0x171AC183: je 0x171ac19a */
L_171AC185:
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x171AC185: push dword ptr [ebp + 0xc] */
    eax = MEM32(ebp + 0x8); /* 0x171AC188: mov eax, dword ptr [ebp + 8] */
    eax = MEM32(eax + 0xC); /* 0x171AC18B: mov eax, dword ptr [eax + 0xc] */
    ecx = MEM32(eax); /* 0x171AC18E: mov ecx, dword ptr [eax] */
    PUSH32(esp, 0x17001C30u); /* 0x171AC190: push 0x17001c30 */
    PUSH32(esp, eax); /* 0x171AC195: push eax */
    RECOMP_ICALL(MEM32(ecx)); /* 0x171AC196: call dword ptr [ecx] */
    RECOMP_FLAGS_IN();
    goto L_171AC19F; /* 0x171AC198: jmp 0x171ac19f */
L_171AC19A:
    eax = 0x88760385u; /* 0x171AC19A: mov eax, 0x88760385 */
L_171AC19F:
    ebp = POP32_VAL(esp); /* 0x171AC19F: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 12; { RECOMP_REGS_OUT(); return; } /* 0x171AC1A0: ret 8 */
    RECOMP_REGS_OUT();
}

void sub_171AC1A8(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x171AC1A8u);

L_171AC1A8:
    edi = edi; /* 0x171AC1A8: mov edi, edi */
    PUSH32(esp, ebp); /* 0x171AC1AA: push ebp */
    ebp = esp; /* 0x171AC1AB: mov ebp, esp */
    PUSH32(esp, ebx); /* 0x171AC1AD: push ebx */
    ebx = MEM32(ebp + 0x10); /* 0x171AC1AE: mov ebx, dword ptr [ebp + 0x10] */
    /* test ebx, ebx */ /* 0x171AC1B1: test ebx, ebx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ebx);
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, esi); /* 0x171AC1B3: push esi */
    PUSH32(esp, edi); /* 0x171AC1B4: push edi */
    if (TEST_Z(_flag_a, _flag_b)) goto L_171AC204; /* 0x171AC1B5: je 0x171ac204 */
L_171AC1B7:
    eax = MEM32(ebp + 0x8); /* 0x171AC1B7: mov eax, dword ptr [ebp + 8] */
    esi = MEM32(eax + 0x34); /* 0x171AC1BA: mov esi, dword ptr [eax + 0x34] */
    /* test esi, esi */ /* 0x171AC1BD: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_171AC1D4; /* 0x171AC1BF: jne 0x171ac1d4 */
L_171AC1C1:
    /* cmp MEM32(ebx), esi */ /* 0x171AC1C1: cmp dword ptr [ebx], esi */
    _flag_a = (uint32_t)(MEM32(ebx)); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_171AC1CF; /* 0x171AC1C3: jbe 0x171ac1cf */
L_171AC1C5:
    eax = MEM32(ebp + 0xC); /* 0x171AC1C5: mov eax, dword ptr [ebp + 0xc] */
    /* test eax, eax */ /* 0x171AC1C8: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_171AC1CF; /* 0x171AC1CA: je 0x171ac1cf */
L_171AC1CC:
    MEM8(eax) = (uint8_t)(0); /* 0x171AC1CC: mov byte ptr [eax], 0 */
L_171AC1CF:
    _flag_a = (uint32_t)(MEM32(ebx)); _flag_b = (uint32_t)(0);
    MEM32(ebx) = MEM32(ebx) & 0; /* 0x171AC1CF: and dword ptr [ebx], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_171AC200; /* 0x171AC1D2: jmp 0x171ac200 */
L_171AC1D4:
    eax = esi; /* 0x171AC1D4: mov eax, esi */
    edx = eax + 0x1; /* 0x171AC1D6: lea edx, [eax + 1] */
L_171AC1D9:
    SET_LO8(ecx, MEM8(eax)); /* 0x171AC1D9: mov cl, byte ptr [eax] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x171AC1DB: inc eax */
    _flag_k = FK_INC;
    /* test LO8(ecx), LO8(ecx) */ /* 0x171AC1DC: test cl, cl */
    _flag_a = (uint32_t)(LO8(ecx)) << 24; _flag_b = (uint32_t)(LO8(ecx)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_171AC1D9; /* 0x171AC1DE: jne 0x171ac1d9 */
L_171AC1E0:
    edi = MEM32(ebp + 0xC); /* 0x171AC1E0: mov edi, dword ptr [ebp + 0xc] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - edx; /* 0x171AC1E3: sub eax, edx */
    _flag_k = FK_CMP;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x171AC1E5: inc eax */
    _flag_k = FK_INC;
    /* test edi, edi */ /* 0x171AC1E6: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_171AC1FE; /* 0x171AC1E8: je 0x171ac1fe */
L_171AC1EA:
    /* cmp eax, MEM32(ebx) */ /* 0x171AC1EA: cmp eax, dword ptr [ebx] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(ebx));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_A(_flag_a, _flag_b)) goto L_171AC204; /* 0x171AC1EC: ja 0x171ac204 */
L_171AC1EE:
    ecx = eax; /* 0x171AC1EE: mov ecx, eax */
    edx = ecx; /* 0x171AC1F0: mov edx, ecx */
    if (2u) _cf = (((ecx) >> 1) & 1u); /* 0x171AC1F2: shr ecx, 2 */
    if (2u) { _flag_a = recomp_flags_pack((ecx >> 2u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ecx = ecx >> 2u; /* 0x171AC1F2: shr ecx, 2 */
    while (ecx) { MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; --ecx; } /* 0x171AC1F5: rep movsd dword ptr es:[edi], dword ptr [esi] */
    ecx = edx; /* 0x171AC1F7: mov ecx, edx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(3);
    ecx = ecx & 3; /* 0x171AC1F9: and ecx, 3 */
    _cf = 0;
    _flag_k = FK_TEST;
    while (ecx) { MEM8(edi) = MEM8(esi); esi += _df * 1; edi += _df * 1; --ecx; } /* 0x171AC1FC: rep movsb byte ptr es:[edi], byte ptr [esi] */
L_171AC1FE:
    MEM32(ebx) = eax; /* 0x171AC1FE: mov dword ptr [ebx], eax */
L_171AC200:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x171AC200: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_171AC209; /* 0x171AC202: jmp 0x171ac209 */
L_171AC204:
    eax = 0x88760385u; /* 0x171AC204: mov eax, 0x88760385 */
L_171AC209:
    edi = POP32_VAL(esp); /* 0x171AC209: pop edi */
    esi = POP32_VAL(esp); /* 0x171AC20A: pop esi */
    ebx = POP32_VAL(esp); /* 0x171AC20B: pop ebx */
    ebp = POP32_VAL(esp); /* 0x171AC20C: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 16; { RECOMP_REGS_OUT(); return; } /* 0x171AC20D: ret 0xc */
    RECOMP_REGS_OUT();
}

void sub_171AC215(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x171AC215u);

L_171AC215:
    edi = edi; /* 0x171AC215: mov edi, edi */
    PUSH32(esp, ebp); /* 0x171AC217: push ebp */
    ebp = esp; /* 0x171AC218: mov ebp, esp */
    PUSH32(esp, edi); /* 0x171AC21A: push edi */
    edi = MEM32(ebp + 0xC); /* 0x171AC21B: mov edi, dword ptr [ebp + 0xc] */
    /* test edi, edi */ /* 0x171AC21E: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_171AC232; /* 0x171AC220: je 0x171ac232 */
L_171AC222:
    PUSH32(esp, esi); /* 0x171AC222: push esi */
    esi = MEM32(ebp + 0x8); /* 0x171AC223: mov esi, dword ptr [ebp + 8] */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(0x14u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esi = esi + 0x14u; /* 0x171AC226: add esi, 0x14 */
    _flag_k = FK_ADD;
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x171AC229: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x171AC22A: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x171AC22B: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x171AC22C: movsd dword ptr es:[edi], dword ptr [esi] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x171AC22D: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    esi = POP32_VAL(esp); /* 0x171AC22F: pop esi */
    goto L_171AC237; /* 0x171AC230: jmp 0x171ac237 */
L_171AC232:
    eax = 0x88760385u; /* 0x171AC232: mov eax, 0x88760385 */
L_171AC237:
    edi = POP32_VAL(esp); /* 0x171AC237: pop edi */
    ebp = POP32_VAL(esp); /* 0x171AC238: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 12; { RECOMP_REGS_OUT(); return; } /* 0x171AC239: ret 8 */
    RECOMP_REGS_OUT();
}

void sub_171AC241(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x171AC241u);

L_171AC241:
    edi = edi; /* 0x171AC241: mov edi, edi */
    PUSH32(esp, ebp); /* 0x171AC243: push ebp */
    ebp = esp; /* 0x171AC244: mov ebp, esp */
    edx = MEM32(ebp + 0x10); /* 0x171AC246: mov edx, dword ptr [ebp + 0x10] */
    /* test edx, edx */ /* 0x171AC249: test edx, edx */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(edx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_171AC28C; /* 0x171AC24B: je 0x171ac28c */
L_171AC24D:
    _flag_a = (uint32_t)(MEM32(edx)); _flag_b = (uint32_t)(0);
    MEM32(edx) = MEM32(edx) & 0; /* 0x171AC24D: and dword ptr [edx], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, esi); /* 0x171AC250: push esi */
    esi = MEM32(ebp + 0xC); /* 0x171AC251: mov esi, dword ptr [ebp + 0xc] */
    PUSH32(esp, edi); /* 0x171AC254: push edi */
    PUSH32(esp, 4); /* 0x171AC255: push 4 */
    ecx = POP32_VAL(esp); /* 0x171AC257: pop ecx */
    edi = 0x1702AA2Cu; /* 0x171AC258: mov edi, 0x1702aa2c */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x171AC25D: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    if (ecx) { uint32_t _a = 0, _b = 0; while (ecx) { _a = MEM32(esi); _b = MEM32(edi); esi += (_df * 4); edi += (_df * 4); ecx--; if (_a != _b) break; } _flag_a = _a; _flag_b = _b; _cf = (uint32_t)CMP_B(_a, _b); _flag_k = FK_CMP; } /* 0x171AC25F: repe cmpsd dword ptr [esi], dword ptr es:[edi] */
    if (recomp_cond_cf(_flag_k, _flag_a, _flag_b, CC_E, _cf)) goto L_171AC27B; /* 0x171AC261: je 0x171ac27b */
L_171AC263:
    esi = MEM32(ebp + 0xC); /* 0x171AC263: mov esi, dword ptr [ebp + 0xc] */
    PUSH32(esp, 4); /* 0x171AC266: push 4 */
    ecx = POP32_VAL(esp); /* 0x171AC268: pop ecx */
    edi = 0x17001C30u; /* 0x171AC269: mov edi, 0x17001c30 */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x171AC26E: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    if (ecx) { uint32_t _a = 0, _b = 0; while (ecx) { _a = MEM32(esi); _b = MEM32(edi); esi += (_df * 4); edi += (_df * 4); ecx--; if (_a != _b) break; } _flag_a = _a; _flag_b = _b; _cf = (uint32_t)CMP_B(_a, _b); _flag_k = FK_CMP; } /* 0x171AC270: repe cmpsd dword ptr [esi], dword ptr es:[edi] */
    if (recomp_cond_cf(_flag_k, _flag_a, _flag_b, CC_E, _cf)) goto L_171AC27B; /* 0x171AC272: je 0x171ac27b */
L_171AC274:
    eax = 0x80004002u; /* 0x171AC274: mov eax, 0x80004002 */
    goto L_171AC288; /* 0x171AC279: jmp 0x171ac288 */
L_171AC27B:
    eax = MEM32(ebp + 0x8); /* 0x171AC27B: mov eax, dword ptr [ebp + 8] */
    MEM32(edx) = eax; /* 0x171AC27E: mov dword ptr [edx], eax */
    ecx = MEM32(eax); /* 0x171AC280: mov ecx, dword ptr [eax] */
    PUSH32(esp, eax); /* 0x171AC282: push eax */
    RECOMP_ICALL(MEM32(ecx + 0x4)); /* 0x171AC283: call dword ptr [ecx + 4] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x171AC286: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
L_171AC288:
    edi = POP32_VAL(esp); /* 0x171AC288: pop edi */
    esi = POP32_VAL(esp); /* 0x171AC289: pop esi */
    goto L_171AC291; /* 0x171AC28A: jmp 0x171ac291 */
L_171AC28C:
    eax = 0x80004003u; /* 0x171AC28C: mov eax, 0x80004003 */
L_171AC291:
    ebp = POP32_VAL(esp); /* 0x171AC291: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 16; { RECOMP_REGS_OUT(); return; } /* 0x171AC292: ret 0xc */
    RECOMP_REGS_OUT();
}

void sub_171AC29A(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x171AC29Au);

L_171AC29A:
    edi = edi; /* 0x171AC29A: mov edi, edi */
    PUSH32(esp, ebp); /* 0x171AC29C: push ebp */
    ebp = esp; /* 0x171AC29D: mov ebp, esp */
    ecx = MEM32(ebp + 0x8); /* 0x171AC29F: mov ecx, dword ptr [ebp + 8] */
    _flag_a = (uint32_t)(MEM32(ecx + 0x4)); _flag_b = (uint32_t)(1);
    MEM32(ecx + 0x4) = MEM32(ecx + 0x4) - 1; /* 0x171AC2A2: dec dword ptr [ecx + 4] */
    _flag_k = FK_DEC;
    PUSH32(esp, esi); /* 0x171AC2A5: push esi */
    esi = MEM32(ecx + 0x4); /* 0x171AC2A6: mov esi, dword ptr [ecx + 4] */
    if (/* dec result */ CMP_NE(_flag_a, _flag_b)) goto L_171AC2B2; /* 0x171AC2A9: jne 0x171ac2b2 */
L_171AC2AB:
    eax = MEM32(ecx); /* 0x171AC2AB: mov eax, dword ptr [ecx] */
    PUSH32(esp, 1); /* 0x171AC2AD: push 1 */
    RECOMP_ICALL(MEM32(eax + 0x18)); /* 0x171AC2AF: call dword ptr [eax + 0x18] */
    RECOMP_FLAGS_IN();
L_171AC2B2:
    eax = esi; /* 0x171AC2B2: mov eax, esi */
    esi = POP32_VAL(esp); /* 0x171AC2B4: pop esi */
    ebp = POP32_VAL(esp); /* 0x171AC2B5: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x171AC2B6: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_171AC2BE(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x171AC2BEu);

L_171AC2BE:
    edi = edi; /* 0x171AC2BE: mov edi, edi */
    PUSH32(esp, ebp); /* 0x171AC2C0: push ebp */
    ebp = esp; /* 0x171AC2C1: mov ebp, esp */
    /* cmp MEM32(ebp + 0xC), 0 */ /* 0x171AC2C3: cmp dword ptr [ebp + 0xc], 0 */
    _flag_a = (uint32_t)(MEM32(ebp + 0xC)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_171AC2DE; /* 0x171AC2C7: je 0x171ac2de */
L_171AC2C9:
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x171AC2C9: push dword ptr [ebp + 0xc] */
    eax = MEM32(ebp + 0x8); /* 0x171AC2CC: mov eax, dword ptr [ebp + 8] */
    eax = MEM32(eax + 0x8); /* 0x171AC2CF: mov eax, dword ptr [eax + 8] */
    ecx = MEM32(eax); /* 0x171AC2D2: mov ecx, dword ptr [eax] */
    PUSH32(esp, 0x17001C40u); /* 0x171AC2D4: push 0x17001c40 */
    PUSH32(esp, eax); /* 0x171AC2D9: push eax */
    RECOMP_ICALL(MEM32(ecx)); /* 0x171AC2DA: call dword ptr [ecx] */
    RECOMP_FLAGS_IN();
    goto L_171AC2E3; /* 0x171AC2DC: jmp 0x171ac2e3 */
L_171AC2DE:
    eax = 0x88760385u; /* 0x171AC2DE: mov eax, 0x88760385 */
L_171AC2E3:
    ebp = POP32_VAL(esp); /* 0x171AC2E3: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 12; { RECOMP_REGS_OUT(); return; } /* 0x171AC2E4: ret 8 */
    RECOMP_REGS_OUT();
}

void sub_171AC2EC(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x171AC2ECu);

L_171AC2EC:
    edi = edi; /* 0x171AC2EC: mov edi, edi */
    PUSH32(esp, ebp); /* 0x171AC2EE: push ebp */
    ebp = esp; /* 0x171AC2EF: mov ebp, esp */
    PUSH32(esp, ecx); /* 0x171AC2F1: push ecx */
    eax = MEM32(ebp + 0x10); /* 0x171AC2F2: mov eax, dword ptr [ebp + 0x10] */
    PUSH32(esp, MEM32(ebp + 0x14)); /* 0x171AC2F5: push dword ptr [ebp + 0x14] */
    MEM32(ebp + (-0x4)) = eax; /* 0x171AC2F8: mov dword ptr [ebp - 4], eax */
    eax = ebp + (-0x4); /* 0x171AC2FB: lea eax, [ebp - 4] */
    PUSH32(esp, eax); /* 0x171AC2FE: push eax */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x171AC2FF: push dword ptr [ebp + 0xc] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x171AC302: push dword ptr [ebp + 8] */
    RECOMP_ICALL(MEM32(0x170010CC)); /* 0x171AC305: call dword ptr [0x170010cc] */
    RECOMP_FLAGS_IN();
    esp = ebp; ebp = POP32_VAL(esp); /* 0x171AC30B: leave  */
    RECOMP_FLAGS_OUT(); esp += 20; { RECOMP_REGS_OUT(); return; } /* 0x171AC30C: ret 0x10 */
    RECOMP_REGS_OUT();
}

void sub_171AC314(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x171AC314u);

L_171AC314:
    edi = edi; /* 0x171AC314: mov edi, edi */
    PUSH32(esp, ebp); /* 0x171AC316: push ebp */
    ebp = esp; /* 0x171AC317: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x28u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x28u; /* 0x171AC319: sub esp, 0x28 */
    _flag_k = FK_CMP;
    PUSH32(esp, esi); /* 0x171AC31C: push esi */
    PUSH32(esp, edi); /* 0x171AC31D: push edi */
    PUSH32(esp, 0x17023C28u); /* 0x171AC31E: push 0x17023c28 */
    MEM32(ebp + (-0x4)) = 1; /* 0x171AC323: mov dword ptr [ebp - 4], 1 */
    RECOMP_ICALL(MEM32(0x170011A0)); /* 0x171AC32A: call dword ptr [0x170011a0] */
    RECOMP_FLAGS_IN();
    esi = MEM32(ebp + 0x8); /* 0x171AC330: mov esi, dword ptr [ebp + 8] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edi = 0; /* 0x171AC333: xor edi, edi */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp eax, edi */ /* 0x171AC335: cmp eax, edi */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    MEM32(ebp + (-0x8)) = eax; /* 0x171AC337: mov dword ptr [ebp - 8], eax */
    if (CMP_EQ(_flag_a, _flag_b)) goto L_171AC363; /* 0x171AC33A: je 0x171ac363 */
L_171AC33C:
    PUSH32(esp, ebx); /* 0x171AC33C: push ebx */
    PUSH32(esp, 0x17023C10u); /* 0x171AC33D: push 0x17023c10 */
    PUSH32(esp, eax); /* 0x171AC342: push eax */
    RECOMP_ICALL(MEM32(0x170011A4)); /* 0x171AC343: call dword ptr [0x170011a4] */
    RECOMP_FLAGS_IN();
    ebx = eax; /* 0x171AC349: mov ebx, eax */
    /* cmp ebx, edi */ /* 0x171AC34B: cmp ebx, edi */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_171AC355; /* 0x171AC34D: je 0x171ac355 */
L_171AC34F:
    PUSH32(esp, esi); /* 0x171AC34F: push esi */
    RECOMP_ICALL(ebx); /* 0x171AC350: call ebx */
    RECOMP_FLAGS_IN();
    MEM32(ebp + (-0x4)) = eax; /* 0x171AC352: mov dword ptr [ebp - 4], eax */
L_171AC355:
    PUSH32(esp, MEM32(ebp + (-0x8))); /* 0x171AC355: push dword ptr [ebp - 8] */
    RECOMP_ICALL(MEM32(0x1700113C)); /* 0x171AC358: call dword ptr [0x1700113c] */
    RECOMP_FLAGS_IN();
    /* cmp ebx, edi */ /* 0x171AC35E: cmp ebx, edi */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    ebx = POP32_VAL(esp); /* 0x171AC360: pop ebx */
    if (CMP_NE(_flag_a, _flag_b)) goto L_171AC3B6; /* 0x171AC361: jne 0x171ac3b6 */
L_171AC363:
    eax = ebp + (-0x28); /* 0x171AC363: lea eax, [ebp - 0x28] */
    PUSH32(esp, eax); /* 0x171AC366: push eax */
    MEM32(ebp + (-0x28)) = 0x20u; /* 0x171AC367: mov dword ptr [ebp - 0x28], 0x20 */
    RECOMP_ICALL(MEM32(0x17001138)); /* 0x171AC36E: call dword ptr [0x17001138] */
    RECOMP_FLAGS_IN();
    eax = MEM32(ebp + (-0x24)); /* 0x171AC374: mov eax, dword ptr [ebp - 0x24] */
    MEM32(esi + 0x4) = eax; /* 0x171AC377: mov dword ptr [esi + 4], eax */
    eax = MEM32(ebp + (-0x14)); /* 0x171AC37A: mov eax, dword ptr [ebp - 0x14] */
    MEM32(esi + 0x20) = eax; /* 0x171AC37D: mov dword ptr [esi + 0x20], eax */
    eax = MEM32(ebp + (-0x1C)); /* 0x171AC380: mov eax, dword ptr [ebp - 0x1c] */
    MEM32(esi + 0x10) = eax; /* 0x171AC383: mov dword ptr [esi + 0x10], eax */
    eax = MEM32(ebp + (-0xC)); /* 0x171AC386: mov eax, dword ptr [ebp - 0xc] */
    MEM32(esi + 0x30) = eax; /* 0x171AC389: mov dword ptr [esi + 0x30], eax */
    eax = MEM32(ebp + (-0x18)); /* 0x171AC38C: mov eax, dword ptr [ebp - 0x18] */
    MEM32(esi + 0x18) = eax; /* 0x171AC38F: mov dword ptr [esi + 0x18], eax */
    eax = MEM32(ebp + (-0x20)); /* 0x171AC392: mov eax, dword ptr [ebp - 0x20] */
    MEM32(esi + 0x8) = eax; /* 0x171AC395: mov dword ptr [esi + 8], eax */
    eax = MEM32(ebp + (-0x10)); /* 0x171AC398: mov eax, dword ptr [ebp - 0x10] */
    MEM32(esi + 0x24) = edi; /* 0x171AC39B: mov dword ptr [esi + 0x24], edi */
    MEM32(esi + 0x14) = edi; /* 0x171AC39E: mov dword ptr [esi + 0x14], edi */
    MEM32(esi + 0x34) = edi; /* 0x171AC3A1: mov dword ptr [esi + 0x34], edi */
    MEM32(esi + 0x1C) = edi; /* 0x171AC3A4: mov dword ptr [esi + 0x1c], edi */
    MEM32(esi + 0xC) = edi; /* 0x171AC3A7: mov dword ptr [esi + 0xc], edi */
    MEM32(esi + 0x28) = eax; /* 0x171AC3AA: mov dword ptr [esi + 0x28], eax */
    MEM32(esi + 0x2C) = edi; /* 0x171AC3AD: mov dword ptr [esi + 0x2c], edi */
    MEM32(esi + 0x38) = edi; /* 0x171AC3B0: mov dword ptr [esi + 0x38], edi */
    MEM32(esi + 0x3C) = edi; /* 0x171AC3B3: mov dword ptr [esi + 0x3c], edi */
L_171AC3B6:
    eax = MEM32(ebp + (-0x4)); /* 0x171AC3B6: mov eax, dword ptr [ebp - 4] */
    edi = POP32_VAL(esp); /* 0x171AC3B9: pop edi */
    esi = POP32_VAL(esp); /* 0x171AC3BA: pop esi */
    esp = ebp; ebp = POP32_VAL(esp); /* 0x171AC3BB: leave  */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x171AC3BC: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_171AC3C4(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x171AC3C4u);

L_171AC3C4:
    edi = edi; /* 0x171AC3C4: mov edi, edi */
    PUSH32(esp, ebp); /* 0x171AC3C6: push ebp */
    ebp = esp; /* 0x171AC3C7: mov ebp, esp */
    /* test MEM8(ebp + 0x8), 1 */ /* 0x171AC3C9: test byte ptr [ebp + 8], 1 */
    _flag_a = (uint32_t)(MEM8(ebp + 0x8)) << 24; _flag_b = (uint32_t)(1) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    PUSH32(esp, esi); /* 0x171AC3CD: push esi */
    esi = ecx; /* 0x171AC3CE: mov esi, ecx */
    MEM32(esi) = 0x17023C38u; /* 0x171AC3D0: mov dword ptr [esi], 0x17023c38 */
    if (TEST_Z(_flag_a, _flag_b)) goto L_171AC3DF; /* 0x171AC3D6: je 0x171ac3df */
L_171AC3D8:
    PUSH32(esp, esi); /* 0x171AC3D8: push esi */
    RECOMP_CALL(sub_1721B010); /* 0x171AC3D9: call 0x1721b010 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x171AC3DE: pop ecx */
L_171AC3DF:
    eax = esi; /* 0x171AC3DF: mov eax, esi */
    esi = POP32_VAL(esp); /* 0x171AC3E1: pop esi */
    ebp = POP32_VAL(esp); /* 0x171AC3E2: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x171AC3E3: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_171AC3EB(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x171AC3EBu);

L_171AC3EB:
    edi = edi; /* 0x171AC3EB: mov edi, edi */
    PUSH32(esp, ebp); /* 0x171AC3ED: push ebp */
    ebp = esp; /* 0x171AC3EE: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x10u; /* 0x171AC3F0: sub esp, 0x10 */
    _flag_k = FK_CMP;
    /* cmp MEM8(ebp + 0x8), 0 */ /* 0x171AC3F3: cmp byte ptr [ebp + 8], 0 */
    _flag_a = (uint32_t)(MEM8(ebp + 0x8)) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    PUSH32(esp, esi); /* 0x171AC3F7: push esi */
    PUSH32(esp, edi); /* 0x171AC3F8: push edi */
    esi = ecx; /* 0x171AC3F9: mov esi, ecx */
    if (CMP_NE(_flag_a, _flag_b)) goto L_171AC469; /* 0x171AC3FB: jne 0x171ac469 */
L_171AC3FD:
    eax = MEM32(esi + 0x4); /* 0x171AC3FD: mov eax, dword ptr [esi + 4] */
    edi = MEM32(eax + 0x30); /* 0x171AC400: mov edi, dword ptr [eax + 0x30] */
    eax = ebp + (-0x4); /* 0x171AC403: lea eax, [ebp - 4] */
    PUSH32(esp, eax); /* 0x171AC406: push eax */
    PUSH32(esp, edi); /* 0x171AC407: push edi */
    RECOMP_ICALL(MEM32(0x17001084)); /* 0x171AC408: call dword ptr [0x17001084] */
    RECOMP_FLAGS_IN();
    ecx = MEM32(esi + 0x4); /* 0x171AC40E: mov ecx, dword ptr [esi + 4] */
    edx = MEM32(ebp + (-0x4)); /* 0x171AC411: mov edx, dword ptr [ebp - 4] */
    MEM32(ebp + (-0x8)) = eax; /* 0x171AC414: mov dword ptr [ebp - 8], eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(ecx + 0x40));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - MEM32(ecx + 0x40); /* 0x171AC417: sub eax, dword ptr [ecx + 0x40] */
    _flag_k = FK_CMP;
    { uint32_t _sa = edx, _sb = MEM32(ecx + 0x44), _sc = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x171AC41A: sbb edx, dword ptr [ecx + 0x44] */
      edx = _sa - _sb - _sc;
      _flag_a = recomp_flags_sbb(_sa, _sb, _sc); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    ecx = MEM32(esi + 0x8); /* 0x171AC41D: mov ecx, dword ptr [esi + 8] */
    MEM32(esi + 0x10) = eax; /* 0x171AC420: mov dword ptr [esi + 0x10], eax */
    MEM32(esi + 0x14) = edx; /* 0x171AC423: mov dword ptr [esi + 0x14], edx */
    eax = MEM32(ecx); /* 0x171AC426: mov eax, dword ptr [ecx] */
    RECOMP_ICALL(MEM32(eax + 0x8)); /* 0x171AC428: call dword ptr [eax + 8] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(esi + 0x10));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - MEM32(esi + 0x10); /* 0x171AC42B: sub eax, dword ptr [esi + 0x10] */
    _flag_k = FK_CMP;
    PUSH32(esp, 0); /* 0x171AC42E: push 0 */
    { uint32_t _sa = edx, _sb = MEM32(esi + 0x14), _sc = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x171AC430: sbb edx, dword ptr [esi + 0x14] */
      edx = _sa - _sb - _sc;
      _flag_a = recomp_flags_sbb(_sa, _sb, _sc); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    MEM32(ebp + (-0x10)) = eax; /* 0x171AC433: mov dword ptr [ebp - 0x10], eax */
    eax = ebp + 0x8; /* 0x171AC436: lea eax, [ebp + 8] */
    PUSH32(esp, eax); /* 0x171AC439: push eax */
    PUSH32(esp, 8); /* 0x171AC43A: push 8 */
    eax = ebp + (-0x10); /* 0x171AC43C: lea eax, [ebp - 0x10] */
    PUSH32(esp, eax); /* 0x171AC43F: push eax */
    PUSH32(esp, edi); /* 0x171AC440: push edi */
    MEM32(ebp + (-0xC)) = edx; /* 0x171AC441: mov dword ptr [ebp - 0xc], edx */
    RECOMP_ICALL(MEM32(0x170010E4)); /* 0x171AC444: call dword ptr [0x170010e4] */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x171AC44A: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_171AC469; /* 0x171AC44C: jne 0x171ac469 */
L_171AC44E:
    PUSH32(esp, eax); /* 0x171AC44E: push eax */
    PUSH32(esp, MEM32(ebp + (-0x4))); /* 0x171AC44F: push dword ptr [ebp - 4] */
    PUSH32(esp, MEM32(ebp + (-0x8))); /* 0x171AC452: push dword ptr [ebp - 8] */
    PUSH32(esp, edi); /* 0x171AC455: push edi */
    RECOMP_CALL(sub_171AC2EC); /* 0x171AC456: call 0x171ac2ec */
    RECOMP_FLAGS_IN();
    PUSH32(esp, edi); /* 0x171AC45B: push edi */
    RECOMP_ICALL(MEM32(0x17001140)); /* 0x171AC45C: call dword ptr [0x17001140] */
    RECOMP_FLAGS_IN();
    eax = 0x8007000Eu; /* 0x171AC462: mov eax, 0x8007000e */
    goto L_171AC46B; /* 0x171AC467: jmp 0x171ac46b */
L_171AC469:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x171AC469: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
L_171AC46B:
    edi = POP32_VAL(esp); /* 0x171AC46B: pop edi */
    esi = POP32_VAL(esp); /* 0x171AC46C: pop esi */
    esp = ebp; ebp = POP32_VAL(esp); /* 0x171AC46D: leave  */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x171AC46E: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_171AC476(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x171AC476u);

L_171AC476:
    edi = edi; /* 0x171AC476: mov edi, edi */
    PUSH32(esp, ebp); /* 0x171AC478: push ebp */
    ebp = esp; /* 0x171AC479: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x34u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x34u; /* 0x171AC47B: sub esp, 0x34 */
    _flag_k = FK_CMP;
    PUSH32(esp, ebx); /* 0x171AC47E: push ebx */
    PUSH32(esp, esi); /* 0x171AC47F: push esi */
    esi = ecx; /* 0x171AC480: mov esi, ecx */
    eax = MEM32(esi + 0x8); /* 0x171AC482: mov eax, dword ptr [esi + 8] */
    PUSH32(esp, edi); /* 0x171AC485: push edi */
    edi = MEM32(eax + 0x30); /* 0x171AC486: mov edi, dword ptr [eax + 0x30] */
    eax = ebp + (-0x10); /* 0x171AC489: lea eax, [ebp - 0x10] */
    PUSH32(esp, eax); /* 0x171AC48C: push eax */
    PUSH32(esp, edi); /* 0x171AC48D: push edi */
    MEM32(ebp + (-0x4)) = edi; /* 0x171AC48E: mov dword ptr [ebp - 4], edi */
    RECOMP_ICALL(MEM32(0x17001084)); /* 0x171AC491: call dword ptr [0x17001084] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ebx = 0; /* 0x171AC497: xor ebx, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp MEM8(ebp + 0x8), LO8(ebx) */ /* 0x171AC499: cmp byte ptr [ebp + 8], bl */
    _flag_a = (uint32_t)(MEM8(ebp + 0x8)) << 24; _flag_b = (uint32_t)(LO8(ebx)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    MEM32(ebp + (-0x14)) = eax; /* 0x171AC49C: mov dword ptr [ebp - 0x14], eax */
    if (CMP_EQ(_flag_a, _flag_b)) goto L_171AC58E; /* 0x171AC49F: je 0x171ac58e */
L_171AC4A5:
    /* cmp MEM32(esi + 0x34), ebx */ /* 0x171AC4A5: cmp dword ptr [esi + 0x34], ebx */
    _flag_a = (uint32_t)(MEM32(esi + 0x34)); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_171AC684; /* 0x171AC4A8: je 0x171ac684 */
L_171AC4AE:
    ecx = MEM32(esi + 0x8); /* 0x171AC4AE: mov ecx, dword ptr [esi + 8] */
    eax = MEM32(ecx + 0x40); /* 0x171AC4B1: mov eax, dword ptr [ecx + 0x40] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(esi + 0x44));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + MEM32(esi + 0x44); /* 0x171AC4B4: add eax, dword ptr [esi + 0x44] */
    _flag_k = FK_ADD;
    ecx = MEM32(ecx + 0x44); /* 0x171AC4B7: mov ecx, dword ptr [ecx + 0x44] */
    { uint32_t _aa = ecx, _ab = MEM32(esi + 0x48), _ac = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x171AC4BA: adc ecx, dword ptr [esi + 0x48] */
      ecx = _aa + _ab + _ac;
      _flag_a = recomp_flags_adc(_aa, _ab, _ac); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x30u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 0x30u; /* 0x171AC4BD: add eax, 0x30 */
    _flag_k = FK_ADD;
    PUSH32(esp, ebx); /* 0x171AC4C0: push ebx */
    { uint32_t _aa = ecx, _ab = ebx, _ac = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x171AC4C1: adc ecx, ebx */
      ecx = _aa + _ab + _ac;
      _flag_a = recomp_flags_adc(_aa, _ab, _ac); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    PUSH32(esp, ecx); /* 0x171AC4C3: push ecx */
    PUSH32(esp, eax); /* 0x171AC4C4: push eax */
    PUSH32(esp, edi); /* 0x171AC4C5: push edi */
    RECOMP_CALL(sub_171AC2EC); /* 0x171AC4C6: call 0x171ac2ec */
    RECOMP_FLAGS_IN();
    eax = MEM32(esi + 0x8); /* 0x171AC4CB: mov eax, dword ptr [esi + 8] */
    ecx = MEM32(ebp + (-0x14)); /* 0x171AC4CE: mov ecx, dword ptr [ebp - 0x14] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(MEM32(eax + 0x40));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ecx = ecx - MEM32(eax + 0x40); /* 0x171AC4D1: sub ecx, dword ptr [eax + 0x40] */
    _flag_k = FK_CMP;
    edx = MEM32(ebp + (-0x10)); /* 0x171AC4D4: mov edx, dword ptr [ebp - 0x10] */
    { uint32_t _sa = edx, _sb = MEM32(eax + 0x44), _sc = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x171AC4D7: sbb edx, dword ptr [eax + 0x44] */
      edx = _sa - _sb - _sc;
      _flag_a = recomp_flags_sbb(_sa, _sb, _sc); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(MEM32(esi + 0x44));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ecx = ecx - MEM32(esi + 0x44); /* 0x171AC4DA: sub ecx, dword ptr [esi + 0x44] */
    _flag_k = FK_CMP;
    PUSH32(esp, ebx); /* 0x171AC4DD: push ebx */
    { uint32_t _sa = edx, _sb = MEM32(esi + 0x48), _sc = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x171AC4DE: sbb edx, dword ptr [esi + 0x48] */
      edx = _sa - _sb - _sc;
      _flag_a = recomp_flags_sbb(_sa, _sb, _sc); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    eax = ebp + (-0xC); /* 0x171AC4E1: lea eax, [ebp - 0xc] */
    PUSH32(esp, eax); /* 0x171AC4E4: push eax */
    PUSH32(esp, 8); /* 0x171AC4E5: push 8 */
    eax = ebp + (-0x1C); /* 0x171AC4E7: lea eax, [ebp - 0x1c] */
    PUSH32(esp, eax); /* 0x171AC4EA: push eax */
    PUSH32(esp, edi); /* 0x171AC4EB: push edi */
    edi = MEM32(0x170010E4); /* 0x171AC4EC: mov edi, dword ptr [0x170010e4] */
    MEM32(ebp + (-0x1C)) = ecx; /* 0x171AC4F2: mov dword ptr [ebp - 0x1c], ecx */
    MEM32(ebp + (-0x18)) = edx; /* 0x171AC4F5: mov dword ptr [ebp - 0x18], edx */
    RECOMP_ICALL(edi); /* 0x171AC4F8: call edi */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x171AC4FA: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, 2); /* 0x171AC4FC: push 2 */
    PUSH32(esp, ebx); /* 0x171AC4FE: push ebx */
    if (TEST_NZ(_flag_a, _flag_b)) goto L_171AC50F; /* 0x171AC4FF: jne 0x171ac50f */
L_171AC501:
    PUSH32(esp, eax); /* 0x171AC501: push eax */
    PUSH32(esp, MEM32(ebp + (-0x4))); /* 0x171AC502: push dword ptr [ebp - 4] */
    RECOMP_CALL(sub_171AC2EC); /* 0x171AC505: call 0x171ac2ec */
    RECOMP_FLAGS_IN();
    goto L_171AC6A0; /* 0x171AC50A: jmp 0x171ac6a0 */
L_171AC50F:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x171AC50F: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, eax); /* 0x171AC511: push eax */
    PUSH32(esp, MEM32(ebp + (-0x4))); /* 0x171AC512: push dword ptr [ebp - 4] */
    RECOMP_CALL(sub_171AC2EC); /* 0x171AC515: call 0x171ac2ec */
    RECOMP_FLAGS_IN();
    /* cmp MEM32(esi + 0x34), ebx */ /* 0x171AC51A: cmp dword ptr [esi + 0x34], ebx */
    _flag_a = (uint32_t)(MEM32(esi + 0x34)); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    MEM32(ebp + 0x8) = ebx; /* 0x171AC51D: mov dword ptr [ebp + 8], ebx */
    if (CMP_BE(_flag_a, _flag_b)) goto L_171AC540; /* 0x171AC520: jbe 0x171ac540 */
L_171AC522:
    eax = MEM32(esi + 0x40); /* 0x171AC522: mov eax, dword ptr [esi + 0x40] */
    ecx = MEM32(ebp + 0x8); /* 0x171AC525: mov ecx, dword ptr [ebp + 8] */
    ecx = MEM32(eax + ecx * 4); /* 0x171AC528: mov ecx, dword ptr [eax + ecx*4] */
    eax = MEM32(ecx); /* 0x171AC52B: mov eax, dword ptr [ecx] */
    PUSH32(esp, ebx); /* 0x171AC52D: push ebx */
    RECOMP_ICALL(MEM32(eax + 0x4)); /* 0x171AC52E: call dword ptr [eax + 4] */
    RECOMP_FLAGS_IN();
    /* cmp eax, ebx */ /* 0x171AC531: cmp eax, ebx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_L(_flag_a, _flag_b)) goto L_171AC587; /* 0x171AC533: jl 0x171ac587 */
L_171AC535:
    _flag_a = (uint32_t)(MEM32(ebp + 0x8)); _flag_b = (uint32_t)(1);
    MEM32(ebp + 0x8) = MEM32(ebp + 0x8) + 1; /* 0x171AC535: inc dword ptr [ebp + 8] */
    _flag_k = FK_INC;
    eax = MEM32(ebp + 0x8); /* 0x171AC538: mov eax, dword ptr [ebp + 8] */
    /* cmp eax, MEM32(esi + 0x34) */ /* 0x171AC53B: cmp eax, dword ptr [esi + 0x34] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(esi + 0x34));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_171AC522; /* 0x171AC53E: jb 0x171ac522 */
L_171AC540:
    _flag_a = (uint32_t)((MEM32(ebp + (-0x24)) | 0xFFFFFFFFu)); _flag_b = (uint32_t)((MEM32(ebp + (-0x24)) | 0xFFFFFFFFu));
    MEM32(ebp + (-0x24)) = MEM32(ebp + (-0x24)) | 0xFFFFFFFFu; /* 0x171AC540: or dword ptr [ebp - 0x24], 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)((MEM32(ebp + (-0x20)) | 0xFFFFFFFFu)); _flag_b = (uint32_t)((MEM32(ebp + (-0x20)) | 0xFFFFFFFFu));
    MEM32(ebp + (-0x20)) = MEM32(ebp + (-0x20)) | 0xFFFFFFFFu; /* 0x171AC544: or dword ptr [ebp - 0x20], 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, ebx); /* 0x171AC548: push ebx */
    eax = ebp + (-0xC); /* 0x171AC549: lea eax, [ebp - 0xc] */
    PUSH32(esp, eax); /* 0x171AC54C: push eax */
    PUSH32(esp, 8); /* 0x171AC54D: push 8 */
    eax = ebp + (-0x24); /* 0x171AC54F: lea eax, [ebp - 0x24] */
    PUSH32(esp, eax); /* 0x171AC552: push eax */
    PUSH32(esp, MEM32(ebp + (-0x4))); /* 0x171AC553: push dword ptr [ebp - 4] */
    RECOMP_ICALL(edi); /* 0x171AC556: call edi */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x171AC558: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_171AC644; /* 0x171AC55A: je 0x171ac644 */
L_171AC560:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edi = 0; /* 0x171AC560: xor edi, edi */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp MEM32(esi + 0x34), ebx */ /* 0x171AC562: cmp dword ptr [esi + 0x34], ebx */
    _flag_a = (uint32_t)(MEM32(esi + 0x34)); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_171AC684; /* 0x171AC565: jbe 0x171ac684 */
L_171AC56B:
    eax = MEM32(esi + 0x40); /* 0x171AC56B: mov eax, dword ptr [esi + 0x40] */
    ecx = MEM32(eax + edi * 4); /* 0x171AC56E: mov ecx, dword ptr [eax + edi*4] */
    eax = MEM32(ecx); /* 0x171AC571: mov eax, dword ptr [ecx] */
    PUSH32(esp, 1); /* 0x171AC573: push 1 */
    RECOMP_ICALL(MEM32(eax + 0x4)); /* 0x171AC575: call dword ptr [eax + 4] */
    RECOMP_FLAGS_IN();
    /* cmp eax, ebx */ /* 0x171AC578: cmp eax, ebx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_L(_flag_a, _flag_b)) goto L_171AC587; /* 0x171AC57A: jl 0x171ac587 */
L_171AC57C:
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(1);
    edi = edi + 1; /* 0x171AC57C: inc edi */
    _flag_k = FK_INC;
    /* cmp edi, MEM32(esi + 0x34) */ /* 0x171AC57D: cmp edi, dword ptr [esi + 0x34] */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(MEM32(esi + 0x34));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_171AC56B; /* 0x171AC580: jb 0x171ac56b */
L_171AC582:
    goto L_171AC684; /* 0x171AC582: jmp 0x171ac684 */
L_171AC587:
    esi = eax; /* 0x171AC587: mov esi, eax */
    goto L_171AC649; /* 0x171AC589: jmp 0x171ac649 */
L_171AC58E:
    ecx = MEM32(esi + 0x8); /* 0x171AC58E: mov ecx, dword ptr [esi + 8] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(ecx + 0x40));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - MEM32(ecx + 0x40); /* 0x171AC591: sub eax, dword ptr [ecx + 0x40] */
    _flag_k = FK_CMP;
    edx = MEM32(ebp + (-0x10)); /* 0x171AC594: mov edx, dword ptr [ebp - 0x10] */
    { uint32_t _sa = edx, _sb = MEM32(ecx + 0x44), _sc = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x171AC597: sbb edx, dword ptr [ecx + 0x44] */
      edx = _sa - _sb - _sc;
      _flag_a = recomp_flags_sbb(_sa, _sb, _sc); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    MEM32(esi + 0x44) = eax; /* 0x171AC59A: mov dword ptr [esi + 0x44], eax */
    eax = MEM32(esi + 0x2C); /* 0x171AC59D: mov eax, dword ptr [esi + 0x2c] */
    PUSH32(esp, ebx); /* 0x171AC5A0: push ebx */
    MEM32(ebp + (-0x2C)) = eax; /* 0x171AC5A1: mov dword ptr [ebp - 0x2c], eax */
    eax = ebp + (-0x8); /* 0x171AC5A4: lea eax, [ebp - 8] */
    PUSH32(esp, eax); /* 0x171AC5A7: push eax */
    PUSH32(esp, 8); /* 0x171AC5A8: push 8 */
    eax = esi + 0x24; /* 0x171AC5AA: lea eax, [esi + 0x24] */
    PUSH32(esp, eax); /* 0x171AC5AD: push eax */
    PUSH32(esp, edi); /* 0x171AC5AE: push edi */
    edi = MEM32(0x170010E4); /* 0x171AC5AF: mov edi, dword ptr [0x170010e4] */
    MEM32(esi + 0x48) = edx; /* 0x171AC5B5: mov dword ptr [esi + 0x48], edx */
    MEM32(ebp + (-0x34)) = ebx; /* 0x171AC5B8: mov dword ptr [ebp - 0x34], ebx */
    MEM32(ebp + (-0x30)) = ebx; /* 0x171AC5BB: mov dword ptr [ebp - 0x30], ebx */
    MEM32(ebp + (-0x28)) = ebx; /* 0x171AC5BE: mov dword ptr [ebp - 0x28], ebx */
    RECOMP_ICALL(edi); /* 0x171AC5C1: call edi */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x171AC5C3: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_171AC688; /* 0x171AC5C5: je 0x171ac688 */
L_171AC5CB:
    PUSH32(esp, ebx); /* 0x171AC5CB: push ebx */
    eax = ebp + (-0x8); /* 0x171AC5CC: lea eax, [ebp - 8] */
    PUSH32(esp, eax); /* 0x171AC5CF: push eax */
    PUSH32(esp, 8); /* 0x171AC5D0: push 8 */
    eax = ebp + (-0x2C); /* 0x171AC5D2: lea eax, [ebp - 0x2c] */
    PUSH32(esp, eax); /* 0x171AC5D5: push eax */
    PUSH32(esp, MEM32(ebp + (-0x4))); /* 0x171AC5D6: push dword ptr [ebp - 4] */
    RECOMP_ICALL(edi); /* 0x171AC5D9: call edi */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x171AC5DB: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_171AC688; /* 0x171AC5DD: je 0x171ac688 */
L_171AC5E3:
    PUSH32(esp, ebx); /* 0x171AC5E3: push ebx */
    eax = ebp + (-0x8); /* 0x171AC5E4: lea eax, [ebp - 8] */
    PUSH32(esp, eax); /* 0x171AC5E7: push eax */
    eax = MEM32(esi + 0xC); /* 0x171AC5E8: mov eax, dword ptr [esi + 0xc] */
    PUSH32(esp, 0x10u); /* 0x171AC5EB: push 0x10 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 8; /* 0x171AC5ED: add eax, 8 */
    _flag_k = FK_ADD;
    PUSH32(esp, eax); /* 0x171AC5F0: push eax */
    PUSH32(esp, MEM32(ebp + (-0x4))); /* 0x171AC5F1: push dword ptr [ebp - 4] */
    RECOMP_ICALL(edi); /* 0x171AC5F4: call edi */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x171AC5F6: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_171AC688; /* 0x171AC5F8: je 0x171ac688 */
L_171AC5FE:
    PUSH32(esp, ebx); /* 0x171AC5FE: push ebx */
    eax = ebp + (-0x8); /* 0x171AC5FF: lea eax, [ebp - 8] */
    PUSH32(esp, eax); /* 0x171AC602: push eax */
    PUSH32(esp, 0x10u); /* 0x171AC603: push 0x10 */
    eax = esi + 0x10; /* 0x171AC605: lea eax, [esi + 0x10] */
    PUSH32(esp, eax); /* 0x171AC608: push eax */
    PUSH32(esp, MEM32(ebp + (-0x4))); /* 0x171AC609: push dword ptr [ebp - 4] */
    RECOMP_ICALL(edi); /* 0x171AC60C: call edi */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x171AC60E: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_171AC688; /* 0x171AC610: je 0x171ac688 */
L_171AC612:
    PUSH32(esp, ebx); /* 0x171AC612: push ebx */
    eax = ebp + (-0x8); /* 0x171AC613: lea eax, [ebp - 8] */
    PUSH32(esp, eax); /* 0x171AC616: push eax */
    PUSH32(esp, 8); /* 0x171AC617: push 8 */
    eax = ebp + (-0x34); /* 0x171AC619: lea eax, [ebp - 0x34] */
    PUSH32(esp, eax); /* 0x171AC61C: push eax */
    PUSH32(esp, MEM32(ebp + (-0x4))); /* 0x171AC61D: push dword ptr [ebp - 4] */
    RECOMP_ICALL(edi); /* 0x171AC620: call edi */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x171AC622: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_171AC688; /* 0x171AC624: je 0x171ac688 */
L_171AC626:
    esi = MEM32(esi + 0x30); /* 0x171AC626: mov esi, dword ptr [esi + 0x30] */
    /* cmp esi, ebx */ /* 0x171AC629: cmp esi, ebx */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_171AC665; /* 0x171AC62B: jne 0x171ac665 */
L_171AC62D:
    PUSH32(esp, ebx); /* 0x171AC62D: push ebx */
    eax = ebp + (-0x8); /* 0x171AC62E: lea eax, [ebp - 8] */
    PUSH32(esp, eax); /* 0x171AC631: push eax */
    PUSH32(esp, 1); /* 0x171AC632: push 1 */
    eax = ebp + 0xB; /* 0x171AC634: lea eax, [ebp + 0xb] */
    PUSH32(esp, eax); /* 0x171AC637: push eax */
    PUSH32(esp, MEM32(ebp + (-0x4))); /* 0x171AC638: push dword ptr [ebp - 4] */
    MEM8(ebp + 0xB) = (uint8_t)(LO8(ebx)); /* 0x171AC63B: mov byte ptr [ebp + 0xb], bl */
    RECOMP_ICALL(edi); /* 0x171AC63E: call edi */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x171AC640: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_171AC684; /* 0x171AC642: jne 0x171ac684 */
L_171AC644:
    esi = 0x8007000Eu; /* 0x171AC644: mov esi, 0x8007000e */
L_171AC649:
    PUSH32(esp, ebx); /* 0x171AC649: push ebx */
    PUSH32(esp, MEM32(ebp + (-0x10))); /* 0x171AC64A: push dword ptr [ebp - 0x10] */
    PUSH32(esp, MEM32(ebp + (-0x14))); /* 0x171AC64D: push dword ptr [ebp - 0x14] */
    PUSH32(esp, MEM32(ebp + (-0x4))); /* 0x171AC650: push dword ptr [ebp - 4] */
    RECOMP_CALL(sub_171AC2EC); /* 0x171AC653: call 0x171ac2ec */
    RECOMP_FLAGS_IN();
    PUSH32(esp, MEM32(ebp + (-0x4))); /* 0x171AC658: push dword ptr [ebp - 4] */
    RECOMP_ICALL(MEM32(0x17001140)); /* 0x171AC65B: call dword ptr [0x17001140] */
    RECOMP_FLAGS_IN();
    eax = esi; /* 0x171AC661: mov eax, esi */
    goto L_171AC6A5; /* 0x171AC663: jmp 0x171ac6a5 */
L_171AC665:
    eax = esi; /* 0x171AC665: mov eax, esi */
    ecx = eax + 0x1; /* 0x171AC667: lea ecx, [eax + 1] */
L_171AC66A:
    SET_LO8(edx, MEM8(eax)); /* 0x171AC66A: mov dl, byte ptr [eax] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x171AC66C: inc eax */
    _flag_k = FK_INC;
    /* cmp LO8(edx), LO8(ebx) */ /* 0x171AC66D: cmp dl, bl */
    _flag_a = (uint32_t)(LO8(edx)) << 24; _flag_b = (uint32_t)(LO8(ebx)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    RECOMP_BACKEDGE();
    if (CMP_NE(_flag_a, _flag_b)) goto L_171AC66A; /* 0x171AC66F: jne 0x171ac66a */
L_171AC671:
    PUSH32(esp, ebx); /* 0x171AC671: push ebx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - ecx; /* 0x171AC672: sub eax, ecx */
    _flag_k = FK_CMP;
    ecx = ebp + (-0x8); /* 0x171AC674: lea ecx, [ebp - 8] */
    PUSH32(esp, ecx); /* 0x171AC677: push ecx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x171AC678: inc eax */
    _flag_k = FK_INC;
    PUSH32(esp, eax); /* 0x171AC679: push eax */
    PUSH32(esp, esi); /* 0x171AC67A: push esi */
    PUSH32(esp, MEM32(ebp + (-0x4))); /* 0x171AC67B: push dword ptr [ebp - 4] */
    RECOMP_ICALL(edi); /* 0x171AC67E: call edi */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x171AC680: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_171AC688; /* 0x171AC682: je 0x171ac688 */
L_171AC684:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x171AC684: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_171AC6A5; /* 0x171AC686: jmp 0x171ac6a5 */
L_171AC688:
    PUSH32(esp, ebx); /* 0x171AC688: push ebx */
    PUSH32(esp, MEM32(ebp + (-0x10))); /* 0x171AC689: push dword ptr [ebp - 0x10] */
    PUSH32(esp, MEM32(ebp + (-0x14))); /* 0x171AC68C: push dword ptr [ebp - 0x14] */
    PUSH32(esp, MEM32(ebp + (-0x4))); /* 0x171AC68F: push dword ptr [ebp - 4] */
    RECOMP_CALL(sub_171AC2EC); /* 0x171AC692: call 0x171ac2ec */
    RECOMP_FLAGS_IN();
    PUSH32(esp, MEM32(ebp + (-0x4))); /* 0x171AC697: push dword ptr [ebp - 4] */
    RECOMP_ICALL(MEM32(0x17001140)); /* 0x171AC69A: call dword ptr [0x17001140] */
    RECOMP_FLAGS_IN();
L_171AC6A0:
    eax = 0x8007000Eu; /* 0x171AC6A0: mov eax, 0x8007000e */
L_171AC6A5:
    edi = POP32_VAL(esp); /* 0x171AC6A5: pop edi */
    esi = POP32_VAL(esp); /* 0x171AC6A6: pop esi */
    ebx = POP32_VAL(esp); /* 0x171AC6A7: pop ebx */
    esp = ebp; ebp = POP32_VAL(esp); /* 0x171AC6A8: leave  */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x171AC6A9: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_171AC6B1(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x171AC6B1u);

L_171AC6B1:
    edi = edi; /* 0x171AC6B1: mov edi, edi */
    PUSH32(esp, ebp); /* 0x171AC6B3: push ebp */
    ebp = esp; /* 0x171AC6B4: mov ebp, esp */
    PUSH32(esp, esi); /* 0x171AC6B6: push esi */
    esi = ecx; /* 0x171AC6B7: mov esi, ecx */
    eax = MEM32(esi + 0x30); /* 0x171AC6B9: mov eax, dword ptr [esi + 0x30] */
    /* test eax, eax */ /* 0x171AC6BC: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, edi); /* 0x171AC6BE: push edi */
    if (TEST_Z(_flag_a, _flag_b)) goto L_171AC701; /* 0x171AC6BF: je 0x171ac701 */
L_171AC6C1:
    edi = MEM32(ebp + 0x8); /* 0x171AC6C1: mov edi, dword ptr [ebp + 8] */
L_171AC6C4:
    SET_LO8(edx, MEM8(eax)); /* 0x171AC6C4: mov dl, byte ptr [eax] */
    SET_LO8(ecx, LO8(edx)); /* 0x171AC6C6: mov cl, dl */
    /* cmp LO8(edx), MEM8(edi) */ /* 0x171AC6C8: cmp dl, byte ptr [edi] */
    _flag_a = (uint32_t)(LO8(edx)) << 24; _flag_b = (uint32_t)(MEM8(edi)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_171AC6E6; /* 0x171AC6CA: jne 0x171ac6e6 */
L_171AC6CC:
    /* test LO8(ecx), LO8(ecx) */ /* 0x171AC6CC: test cl, cl */
    _flag_a = (uint32_t)(LO8(ecx)) << 24; _flag_b = (uint32_t)(LO8(ecx)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_171AC6E2; /* 0x171AC6CE: je 0x171ac6e2 */
L_171AC6D0:
    SET_LO8(edx, MEM8(eax + 0x1)); /* 0x171AC6D0: mov dl, byte ptr [eax + 1] */
    SET_LO8(ecx, LO8(edx)); /* 0x171AC6D3: mov cl, dl */
    /* cmp LO8(edx), MEM8(edi + 0x1) */ /* 0x171AC6D5: cmp dl, byte ptr [edi + 1] */
    _flag_a = (uint32_t)(LO8(edx)) << 24; _flag_b = (uint32_t)(MEM8(edi + 0x1)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_171AC6E6; /* 0x171AC6D8: jne 0x171ac6e6 */
L_171AC6DA:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x171AC6DA: inc eax */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x171AC6DB: inc eax */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(1);
    edi = edi + 1; /* 0x171AC6DC: inc edi */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(1);
    edi = edi + 1; /* 0x171AC6DD: inc edi */
    _flag_k = FK_INC;
    /* test LO8(ecx), LO8(ecx) */ /* 0x171AC6DE: test cl, cl */
    _flag_a = (uint32_t)(LO8(ecx)) << 24; _flag_b = (uint32_t)(LO8(ecx)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_171AC6C4; /* 0x171AC6E0: jne 0x171ac6c4 */
L_171AC6E2:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x171AC6E2: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_171AC6EB; /* 0x171AC6E4: jmp 0x171ac6eb */
L_171AC6E6:
    { uint32_t _sa = eax, _sb = eax, _sc = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x171AC6E6: sbb eax, eax */
      eax = _sc ? 0xFFFFFFFFu : 0;
      _flag_a = recomp_flags_sbb(_sa, _sb, _sc); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    { uint32_t _sa = eax, _sb = 0xFFFFFFFFu, _sc = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x171AC6E8: sbb eax, -1 */
      eax = _sa - _sb - _sc;
      _flag_a = recomp_flags_sbb(_sa, _sb, _sc); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
L_171AC6EB:
    /* test eax, eax */ /* 0x171AC6EB: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_171AC701; /* 0x171AC6ED: jne 0x171ac701 */
L_171AC6EF:
    ecx = MEM32(ebp + 0xC); /* 0x171AC6EF: mov ecx, dword ptr [ebp + 0xc] */
    eax = esi + (-0x4); /* 0x171AC6F2: lea eax, [esi - 4] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(eax);
    _cf = (eax) != 0;
    eax = (uint32_t)(-(int32_t)eax); /* 0x171AC6F5: neg eax */
    _flag_k = FK_CMP;
    { uint32_t _sa = eax, _sb = eax, _sc = (uint32_t)CMP_B(_flag_a, _flag_b); /* 0x171AC6F7: sbb eax, eax */
      eax = _sc ? 0xFFFFFFFFu : 0;
      _flag_a = recomp_flags_sbb(_sa, _sb, _sc); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(esi);
    eax = eax & esi; /* 0x171AC6F9: and eax, esi */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ecx) = eax; /* 0x171AC6FB: mov dword ptr [ecx], eax */
L_171AC6FD:
    SET_LO8(eax, 1); /* 0x171AC6FD: mov al, 1 */
    goto L_171AC725; /* 0x171AC6FF: jmp 0x171ac725 */
L_171AC701:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edi = 0; /* 0x171AC701: xor edi, edi */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp MEM32(esi + 0x34), edi */ /* 0x171AC703: cmp dword ptr [esi + 0x34], edi */
    _flag_a = (uint32_t)(MEM32(esi + 0x34)); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_171AC723; /* 0x171AC706: jbe 0x171ac723 */
L_171AC708:
    eax = MEM32(esi + 0x40); /* 0x171AC708: mov eax, dword ptr [esi + 0x40] */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x171AC70B: push dword ptr [ebp + 0xc] */
    ecx = MEM32(eax + edi * 4); /* 0x171AC70E: mov ecx, dword ptr [eax + edi*4] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x171AC711: push dword ptr [ebp + 8] */
    eax = MEM32(ecx); /* 0x171AC714: mov eax, dword ptr [ecx] */
    RECOMP_ICALL(MEM32(eax + 0x10)); /* 0x171AC716: call dword ptr [eax + 0x10] */
    RECOMP_FLAGS_IN();
    /* test LO8(eax), LO8(eax) */ /* 0x171AC719: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_171AC6FD; /* 0x171AC71B: jne 0x171ac6fd */
L_171AC71D:
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(1);
    edi = edi + 1; /* 0x171AC71D: inc edi */
    _flag_k = FK_INC;
    /* cmp edi, MEM32(esi + 0x34) */ /* 0x171AC71E: cmp edi, dword ptr [esi + 0x34] */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(MEM32(esi + 0x34));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_171AC708; /* 0x171AC721: jb 0x171ac708 */
L_171AC723:
    _flag_a = (uint32_t)(0) << 24; _flag_b = (uint32_t)(0) << 24;
    SET_LO8(eax, 0); /* 0x171AC723: xor al, al */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
L_171AC725:
    edi = POP32_VAL(esp); /* 0x171AC725: pop edi */
    esi = POP32_VAL(esp); /* 0x171AC726: pop esi */
    ebp = POP32_VAL(esp); /* 0x171AC727: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 12; { RECOMP_REGS_OUT(); return; } /* 0x171AC728: ret 8 */
    RECOMP_REGS_OUT();
}
