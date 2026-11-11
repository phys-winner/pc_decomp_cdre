#define RECOMP_GENERATED_CODE

#include "functions.h"

void sub_15041F10(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x15041F10u);

L_15041F10:
    MEM32(ecx) = 0x150011F8u; /* 0x15041F10: mov dword ptr [ecx], 0x150011f8 */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x15041F16: ret  */
    RECOMP_REGS_OUT();
}

void sub_15041F20(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x15041F20u);

L_15041F20:
    edi = edi; /* 0x15041F20: mov edi, edi */
    PUSH32(esp, ebp); /* 0x15041F22: push ebp */
    ebp = esp; /* 0x15041F23: mov ebp, esp */
    eax = MEM32(ebp + 0x8); /* 0x15041F25: mov eax, dword ptr [ebp + 8] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(9);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 9; /* 0x15041F28: add ecx, 9 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(9);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 9; /* 0x15041F2B: add eax, 9 */
    _flag_k = FK_ADD;
L_15041F2E:
    SET_LO8(edx, MEM8(eax)); /* 0x15041F2E: mov dl, byte ptr [eax] */
    /* cmp LO8(edx), MEM8(ecx) */ /* 0x15041F30: cmp dl, byte ptr [ecx] */
    _flag_a = (uint32_t)(LO8(edx)) << 24; _flag_b = (uint32_t)(MEM8(ecx)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_15041F4E; /* 0x15041F32: jne 0x15041f4e */
L_15041F34:
    /* test LO8(edx), LO8(edx) */ /* 0x15041F34: test dl, dl */
    _flag_a = (uint32_t)(LO8(edx)) << 24; _flag_b = (uint32_t)(LO8(edx)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_15041F4A; /* 0x15041F36: je 0x15041f4a */
L_15041F38:
    SET_LO8(edx, MEM8(eax + 0x1)); /* 0x15041F38: mov dl, byte ptr [eax + 1] */
    /* cmp LO8(edx), MEM8(ecx + 0x1) */ /* 0x15041F3B: cmp dl, byte ptr [ecx + 1] */
    _flag_a = (uint32_t)(LO8(edx)) << 24; _flag_b = (uint32_t)(MEM8(ecx + 0x1)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_15041F4E; /* 0x15041F3E: jne 0x15041f4e */
L_15041F40:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 2; /* 0x15041F40: add eax, 2 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 2; /* 0x15041F43: add ecx, 2 */
    _flag_k = FK_ADD;
    /* test LO8(edx), LO8(edx) */ /* 0x15041F46: test dl, dl */
    _flag_a = (uint32_t)(LO8(edx)) << 24; _flag_b = (uint32_t)(LO8(edx)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_15041F2E; /* 0x15041F48: jne 0x15041f2e */
L_15041F4A:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x15041F4A: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_15041F53; /* 0x15041F4C: jmp 0x15041f53 */
L_15041F4E:
    { uint32_t _sa = ecx, _sb = ecx, _sc = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x15041F4E: sbb ecx, ecx */
      ecx = _sc ? 0xFFFFFFFFu : 0;
      _flag_a = recomp_flags_sbb(_sa, _sb, _sc); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    _flag_a = (uint32_t)((ecx | 1)); _flag_b = (uint32_t)((ecx | 1));
    ecx = ecx | 1; /* 0x15041F50: or ecx, 1 */
    _cf = 0;
    _flag_k = FK_TEST;
L_15041F53:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x15041F53: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    /* test ecx, ecx */ /* 0x15041F55: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    SET_LO8(eax, (TEST_Z(_flag_a, _flag_b)) ? 1 : 0); /* 0x15041F57: sete al */
    ebp = POP32_VAL(esp); /* 0x15041F5A: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x15041F5B: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_15041F70(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x15041F70u);

L_15041F70:
    edi = edi; /* 0x15041F70: mov edi, edi */
    PUSH32(esp, ebp); /* 0x15041F72: push ebp */
    ebp = esp; /* 0x15041F73: mov ebp, esp */
    eax = MEM32(ebp + 0x8); /* 0x15041F75: mov eax, dword ptr [ebp + 8] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(9);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 9; /* 0x15041F78: add ecx, 9 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(9);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 9; /* 0x15041F7B: add eax, 9 */
    _flag_k = FK_ADD;
L_15041F7E:
    SET_LO8(edx, MEM8(eax)); /* 0x15041F7E: mov dl, byte ptr [eax] */
    /* cmp LO8(edx), MEM8(ecx) */ /* 0x15041F80: cmp dl, byte ptr [ecx] */
    _flag_a = (uint32_t)(LO8(edx)) << 24; _flag_b = (uint32_t)(MEM8(ecx)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_15041F9E; /* 0x15041F82: jne 0x15041f9e */
L_15041F84:
    /* test LO8(edx), LO8(edx) */ /* 0x15041F84: test dl, dl */
    _flag_a = (uint32_t)(LO8(edx)) << 24; _flag_b = (uint32_t)(LO8(edx)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_15041F9A; /* 0x15041F86: je 0x15041f9a */
L_15041F88:
    SET_LO8(edx, MEM8(eax + 0x1)); /* 0x15041F88: mov dl, byte ptr [eax + 1] */
    /* cmp LO8(edx), MEM8(ecx + 0x1) */ /* 0x15041F8B: cmp dl, byte ptr [ecx + 1] */
    _flag_a = (uint32_t)(LO8(edx)) << 24; _flag_b = (uint32_t)(MEM8(ecx + 0x1)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_15041F9E; /* 0x15041F8E: jne 0x15041f9e */
L_15041F90:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 2; /* 0x15041F90: add eax, 2 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 2; /* 0x15041F93: add ecx, 2 */
    _flag_k = FK_ADD;
    /* test LO8(edx), LO8(edx) */ /* 0x15041F96: test dl, dl */
    _flag_a = (uint32_t)(LO8(edx)) << 24; _flag_b = (uint32_t)(LO8(edx)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_15041F7E; /* 0x15041F98: jne 0x15041f7e */
L_15041F9A:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x15041F9A: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_15041FA3; /* 0x15041F9C: jmp 0x15041fa3 */
L_15041F9E:
    { uint32_t _sa = ecx, _sb = ecx, _sc = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x15041F9E: sbb ecx, ecx */
      ecx = _sc ? 0xFFFFFFFFu : 0;
      _flag_a = recomp_flags_sbb(_sa, _sb, _sc); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    _flag_a = (uint32_t)((ecx | 1)); _flag_b = (uint32_t)((ecx | 1));
    ecx = ecx | 1; /* 0x15041FA0: or ecx, 1 */
    _cf = 0;
    _flag_k = FK_TEST;
L_15041FA3:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x15041FA3: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    /* test ecx, ecx */ /* 0x15041FA5: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    SET_LO8(eax, (TEST_NZ(_flag_a, _flag_b)) ? 1 : 0); /* 0x15041FA7: setne al */
    ebp = POP32_VAL(esp); /* 0x15041FAA: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x15041FAB: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_15041FC0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x15041FC0u);

L_15041FC0:
    edi = edi; /* 0x15041FC0: mov edi, edi */
    PUSH32(esp, ebp); /* 0x15041FC2: push ebp */
    ebp = esp; /* 0x15041FC3: mov ebp, esp */
    PUSH32(esp, 0xFFFFFFFFu); /* 0x15041FC5: push -1 */
    PUSH32(esp, 0x150AF7BFu); /* 0x15041FC7: push 0x150af7bf */
    eax = MEM32(FS_BASE + (0)); /* 0x15041FCC: mov eax, dword ptr fs:[0] */
    PUSH32(esp, eax); /* 0x15041FD2: push eax */
    PUSH32(esp, ebx); /* 0x15041FD3: push ebx */
    PUSH32(esp, esi); /* 0x15041FD4: push esi */
    PUSH32(esp, edi); /* 0x15041FD5: push edi */
    eax = MEM32(0x150BD340); /* 0x15041FD6: mov eax, dword ptr [0x150bd340] */
    _flag_a = (uint32_t)((eax ^ ebp)); _flag_b = (uint32_t)((eax ^ ebp));
    eax = eax ^ ebp; /* 0x15041FDB: xor eax, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, eax); /* 0x15041FDD: push eax */
    eax = ebp + (-0xC); /* 0x15041FDE: lea eax, [ebp - 0xc] */
    MEM32(FS_BASE + (0)) = eax; /* 0x15041FE1: mov dword ptr fs:[0], eax */
    esi = ecx; /* 0x15041FE7: mov esi, ecx */
    edi = MEM32(ebp + 0x8); /* 0x15041FE9: mov edi, dword ptr [ebp + 8] */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(1);
    edi = edi & 1; /* 0x15041FEC: and edi, 1 */
    _cf = 0;
    _flag_k = FK_TEST;
    /* test MEM8(ebp + 0x8), 2 */ /* 0x15041FEF: test byte ptr [ebp + 8], 2 */
    _flag_a = (uint32_t)(MEM8(ebp + 0x8)) << 24; _flag_b = (uint32_t)(2) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_15042016; /* 0x15041FF3: je 0x15042016 */
L_15041FF5:
    PUSH32(esp, 0x15041F10u); /* 0x15041FF5: push 0x15041f10 */
    ebx = esi + (-0x4); /* 0x15041FFA: lea ebx, [esi - 4] */
    PUSH32(esp, MEM32(ebx)); /* 0x15041FFD: push dword ptr [ebx] */
    PUSH32(esp, 0xCu); /* 0x15041FFF: push 0xc */
    PUSH32(esp, esi); /* 0x15042001: push esi */
    RECOMP_CALL(sub_15041D78); /* 0x15042002: call 0x15041d78 */
    RECOMP_FLAGS_IN();
    /* test edi, edi */ /* 0x15042007: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_15042012; /* 0x15042009: je 0x15042012 */
L_1504200B:
    PUSH32(esp, ebx); /* 0x1504200B: push ebx */
    RECOMP_CALL(sub_150460C0); /* 0x1504200C: call 0x150460c0 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x15042011: pop ecx */
L_15042012:
    eax = ebx; /* 0x15042012: mov eax, ebx */
    goto L_15042029; /* 0x15042014: jmp 0x15042029 */
L_15042016:
    MEM32(esi) = 0x150011F8u; /* 0x15042016: mov dword ptr [esi], 0x150011f8 */
    /* test edi, edi */ /* 0x1504201C: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_15042027; /* 0x1504201E: je 0x15042027 */
L_15042020:
    PUSH32(esp, esi); /* 0x15042020: push esi */
    RECOMP_CALL(sub_150460C0); /* 0x15042021: call 0x150460c0 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x15042026: pop ecx */
L_15042027:
    eax = esi; /* 0x15042027: mov eax, esi */
L_15042029:
    ecx = MEM32(ebp + (-0xC)); /* 0x15042029: mov ecx, dword ptr [ebp - 0xc] */
    MEM32(FS_BASE + (0)) = ecx; /* 0x1504202C: mov dword ptr fs:[0], ecx */
    ecx = POP32_VAL(esp); /* 0x15042033: pop ecx */
    edi = POP32_VAL(esp); /* 0x15042034: pop edi */
    esi = POP32_VAL(esp); /* 0x15042035: pop esi */
    ebx = POP32_VAL(esp); /* 0x15042036: pop ebx */
    esp = ebp; ebp = POP32_VAL(esp); /* 0x15042037: leave  */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x15042038: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_15042050(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x15042050u);

L_15042050:
    edi = edi; /* 0x15042050: mov edi, edi */
    PUSH32(esp, ebp); /* 0x15042052: push ebp */
    ebp = esp; /* 0x15042053: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0xCu; /* 0x15042055: sub esp, 0xc */
    _flag_k = FK_CMP;
    PUSH32(esp, ecx); /* 0x15042058: push ecx */
    ecx = ebp + (-0xC); /* 0x15042059: lea ecx, [ebp - 0xc] */
    RECOMP_CALL(sub_15039900); /* 0x1504205C: call 0x15039900 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0x150AFF00u); /* 0x15042061: push 0x150aff00 */
    eax = ebp + (-0xC); /* 0x15042066: lea eax, [ebp - 0xc] */
    PUSH32(esp, eax); /* 0x15042069: push eax */
    RECOMP_CALL(sub_1503B2E0); /* 0x1504206A: call 0x1503b2e0 */
    RECOMP_FLAGS_IN();
    void_lift_trap(0x1504206Fu, "int3 ");
    { RECOMP_REGS_OUT(); return; } /* end of function */
    RECOMP_REGS_OUT();
}

void sub_15042080(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x15042080u);

L_15042080:
    edi = edi; /* 0x15042080: mov edi, edi */
    PUSH32(esp, ebp); /* 0x15042082: push ebp */
    ebp = esp; /* 0x15042083: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0xCu; /* 0x15042085: sub esp, 0xc */
    _flag_k = FK_CMP;
    PUSH32(esp, ecx); /* 0x15042088: push ecx */
    ecx = ebp + (-0xC); /* 0x15042089: lea ecx, [ebp - 0xc] */
    RECOMP_CALL(sub_15039960); /* 0x1504208C: call 0x15039960 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0x150AFEE4u); /* 0x15042091: push 0x150afee4 */
    eax = ebp + (-0xC); /* 0x15042096: lea eax, [ebp - 0xc] */
    PUSH32(esp, eax); /* 0x15042099: push eax */
    RECOMP_CALL(sub_1503B2E0); /* 0x1504209A: call 0x1503b2e0 */
    RECOMP_FLAGS_IN();
    void_lift_trap(0x1504209Fu, "int3 ");
    { RECOMP_REGS_OUT(); return; } /* end of function */
    RECOMP_REGS_OUT();
}

void sub_150420B0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x150420B0u);

L_150420B0:
    edi = edi; /* 0x150420B0: mov edi, edi */
    PUSH32(esp, ebp); /* 0x150420B2: push ebp */
    ebp = esp; /* 0x150420B3: mov ebp, esp */
    eax = MEM32(ebp + 0x8); /* 0x150420B5: mov eax, dword ptr [ebp + 8] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(9);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 9; /* 0x150420B8: add ecx, 9 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(9);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 9; /* 0x150420BB: add eax, 9 */
    _flag_k = FK_ADD;
L_150420BE:
    SET_LO8(edx, MEM8(eax)); /* 0x150420BE: mov dl, byte ptr [eax] */
    /* cmp LO8(edx), MEM8(ecx) */ /* 0x150420C0: cmp dl, byte ptr [ecx] */
    _flag_a = (uint32_t)(LO8(edx)) << 24; _flag_b = (uint32_t)(MEM8(ecx)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_150420DE; /* 0x150420C2: jne 0x150420de */
L_150420C4:
    /* test LO8(edx), LO8(edx) */ /* 0x150420C4: test dl, dl */
    _flag_a = (uint32_t)(LO8(edx)) << 24; _flag_b = (uint32_t)(LO8(edx)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_150420DA; /* 0x150420C6: je 0x150420da */
L_150420C8:
    SET_LO8(edx, MEM8(eax + 0x1)); /* 0x150420C8: mov dl, byte ptr [eax + 1] */
    /* cmp LO8(edx), MEM8(ecx + 0x1) */ /* 0x150420CB: cmp dl, byte ptr [ecx + 1] */
    _flag_a = (uint32_t)(LO8(edx)) << 24; _flag_b = (uint32_t)(MEM8(ecx + 0x1)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_150420DE; /* 0x150420CE: jne 0x150420de */
L_150420D0:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 2; /* 0x150420D0: add eax, 2 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 2; /* 0x150420D3: add ecx, 2 */
    _flag_k = FK_ADD;
    /* test LO8(edx), LO8(edx) */ /* 0x150420D6: test dl, dl */
    _flag_a = (uint32_t)(LO8(edx)) << 24; _flag_b = (uint32_t)(LO8(edx)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_150420BE; /* 0x150420D8: jne 0x150420be */
L_150420DA:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x150420DA: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_150420E3; /* 0x150420DC: jmp 0x150420e3 */
L_150420DE:
    { uint32_t _sa = ecx, _sb = ecx, _sc = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x150420DE: sbb ecx, ecx */
      ecx = _sc ? 0xFFFFFFFFu : 0;
      _flag_a = recomp_flags_sbb(_sa, _sb, _sc); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    _flag_a = (uint32_t)((ecx | 1)); _flag_b = (uint32_t)((ecx | 1));
    ecx = ecx | 1; /* 0x150420E0: or ecx, 1 */
    _cf = 0;
    _flag_k = FK_TEST;
L_150420E3:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x150420E3: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    /* test ecx, ecx */ /* 0x150420E5: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    SET_LO8(eax, ((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) != 0u && (((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) == 0u)) ? 1 : 0); /* 0x150420E7: setg al */
    ebp = POP32_VAL(esp); /* 0x150420EA: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x150420EB: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_15042100(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x15042100u);

L_15042100:
    RECOMP_CALL(sub_1503B210); /* 0x15042100: call 0x1503b210 */
    RECOMP_FLAGS_IN();
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x15042105: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_15042110(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x15042110u);

L_15042110:
    eax = ecx + 0x8; /* 0x15042110: lea eax, [ecx + 8] */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x15042113: ret  */
    RECOMP_REGS_OUT();
}

void sub_15042120(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x15042120u);

L_15042120:
    edi = edi; /* 0x15042120: mov edi, edi */
    PUSH32(esp, ebp); /* 0x15042122: push ebp */
    ebp = esp; /* 0x15042123: mov ebp, esp */
    eax = MEM32(ebp + 0x8); /* 0x15042125: mov eax, dword ptr [ebp + 8] */
    _flag_a = (uint32_t)(MEM32(eax)); _flag_b = (uint32_t)(0);
    MEM32(eax) = MEM32(eax) & 0; /* 0x15042128: and dword ptr [eax], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(MEM32(eax + 0x4)); _flag_b = (uint32_t)(0);
    MEM32(eax + 0x4) = MEM32(eax + 0x4) & 0; /* 0x1504212B: and dword ptr [eax + 4], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    ebp = POP32_VAL(esp); /* 0x1504212F: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x15042130: ret  */
    RECOMP_REGS_OUT();
}

void sub_15042140(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x15042140u);

L_15042140:
    edi = edi; /* 0x15042140: mov edi, edi */
    PUSH32(esp, ebp); /* 0x15042142: push ebp */
    ebp = esp; /* 0x15042143: mov ebp, esp */
    ecx = MEM32(ebp + 0x8); /* 0x15042145: mov ecx, dword ptr [ebp + 8] */
    PUSH32(esp, 0); /* 0x15042148: push 0 */
    RECOMP_CALL(sub_150428E8); /* 0x1504214A: call 0x150428e8 */
    RECOMP_FLAGS_IN();
    ebp = POP32_VAL(esp); /* 0x1504214F: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x15042150: ret  */
    RECOMP_REGS_OUT();
}

void sub_15042160(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x15042160u);

L_15042160:
    PUSH32(esp, 0); /* 0x15042160: push 0 */
    eax = 0x150AF963u; /* 0x15042162: mov eax, 0x150af963 */
    RECOMP_CALL(sub_15041E96); /* 0x15042167: call 0x15041e96 */
    RECOMP_FLAGS_IN();
    ecx = MEM32(ebp + 0x8); /* 0x1504216C: mov ecx, dword ptr [ebp + 8] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1504216F: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x15042171: push dword ptr [ebp + 0xc] */
    MEM32(ebp + (-0x4)) = eax; /* 0x15042174: mov dword ptr [ebp - 4], eax */
    MEM32(ecx) = eax; /* 0x15042177: mov dword ptr [ecx], eax */
    MEM32(ecx + 0x4) = eax; /* 0x15042179: mov dword ptr [ecx + 4], eax */
    RECOMP_CALL(sub_150422EA); /* 0x1504217C: call 0x150422ea */
    RECOMP_FLAGS_IN();
    RECOMP_CALL(sub_15041E7C); /* 0x15042181: call 0x15041e7c */
    RECOMP_FLAGS_IN();
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x15042186: ret  */
    RECOMP_REGS_OUT();
}

void sub_150421A0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x150421A0u);

L_150421A0:
    edi = edi; /* 0x150421A0: mov edi, edi */
    PUSH32(esp, ebp); /* 0x150421A2: push ebp */
    ebp = esp; /* 0x150421A3: mov ebp, esp */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x150421A5: push dword ptr [ebp + 0xc] */
    ecx = MEM32(ebp + 0x8); /* 0x150421A8: mov ecx, dword ptr [ebp + 8] */
    RECOMP_CALL(sub_1504284F); /* 0x150421AB: call 0x1504284f */
    RECOMP_FLAGS_IN();
    ebp = POP32_VAL(esp); /* 0x150421B0: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x150421B1: ret  */
    RECOMP_REGS_OUT();
}

void sub_150421C0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x150421C0u);

L_150421C0:
    edi = edi; /* 0x150421C0: mov edi, edi */
    PUSH32(esp, ebp); /* 0x150421C2: push ebp */
    ebp = esp; /* 0x150421C3: mov ebp, esp */
    eax = MEM32(ebp + 0x8); /* 0x150421C5: mov eax, dword ptr [ebp + 8] */
    ecx = MEM32(eax); /* 0x150421C8: mov ecx, dword ptr [eax] */
    eax = MEM32(ebp + 0xC); /* 0x150421CA: mov eax, dword ptr [ebp + 0xc] */
    /* cmp ecx, MEM32(eax) */ /* 0x150421CD: cmp ecx, dword ptr [eax] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(MEM32(eax));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    SET_LO8(eax, (CMP_EQ(_flag_a, _flag_b)) ? 1 : 0); /* 0x150421CF: sete al */
    ebp = POP32_VAL(esp); /* 0x150421D2: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x150421D3: ret  */
    RECOMP_REGS_OUT();
}

void sub_150421E0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x150421E0u);

L_150421E0:
    edi = edi; /* 0x150421E0: mov edi, edi */
    PUSH32(esp, ebp); /* 0x150421E2: push ebp */
    ebp = esp; /* 0x150421E3: mov ebp, esp */
    eax = MEM32(ebp + 0x8); /* 0x150421E5: mov eax, dword ptr [ebp + 8] */
    /* cmp MEM32(eax), 0 */ /* 0x150421E8: cmp dword ptr [eax], 0 */
    _flag_a = (uint32_t)(MEM32(eax)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    SET_LO8(eax, (CMP_NE(_flag_a, _flag_b)) ? 1 : 0); /* 0x150421EB: setne al */
    ebp = POP32_VAL(esp); /* 0x150421EE: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x150421EF: ret  */
    RECOMP_REGS_OUT();
}

void sub_15042200(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x15042200u);

L_15042200:
    edi = edi; /* 0x15042200: mov edi, edi */
    PUSH32(esp, ebp); /* 0x15042202: push ebp */
    ebp = esp; /* 0x15042203: mov ebp, esp */
    edx = MEM32(ebp + 0x8); /* 0x15042205: mov edx, dword ptr [ebp + 8] */
    PUSH32(esp, esi); /* 0x15042208: push esi */
    esi = MEM32(ebp + 0xC); /* 0x15042209: mov esi, dword ptr [ebp + 0xc] */
    ecx = MEM32(edx + 0x4); /* 0x1504220C: mov ecx, dword ptr [edx + 4] */
    eax = MEM32(esi + 0x4); /* 0x1504220F: mov eax, dword ptr [esi + 4] */
    MEM32(edx + 0x4) = eax; /* 0x15042212: mov dword ptr [edx + 4], eax */
    eax = MEM32(esi); /* 0x15042215: mov eax, dword ptr [esi] */
    MEM32(esi + 0x4) = ecx; /* 0x15042217: mov dword ptr [esi + 4], ecx */
    ecx = MEM32(edx); /* 0x1504221A: mov ecx, dword ptr [edx] */
    MEM32(edx) = eax; /* 0x1504221C: mov dword ptr [edx], eax */
    MEM32(esi) = ecx; /* 0x1504221E: mov dword ptr [esi], ecx */
    esi = POP32_VAL(esp); /* 0x15042220: pop esi */
    ebp = POP32_VAL(esp); /* 0x15042221: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x15042222: ret  */
    RECOMP_REGS_OUT();
}

void sub_15042230(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x15042230u);

L_15042230:
    PUSH32(esp, 8); /* 0x15042230: push 8 */
    eax = 0x150AFAB7u; /* 0x15042232: mov eax, 0x150afab7 */
    RECOMP_CALL(sub_15041E96); /* 0x15042237: call 0x15041e96 */
    RECOMP_FLAGS_IN();
    eax = ebp + (-0x14); /* 0x1504223C: lea eax, [ebp - 0x14] */
    PUSH32(esp, eax); /* 0x1504223F: push eax */
    RECOMP_CALL(sub_15042BD6); /* 0x15042240: call 0x15042bd6 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(MEM32(ebp + (-0x4))); _flag_b = (uint32_t)(0);
    MEM32(ebp + (-0x4)) = MEM32(ebp + (-0x4)) & 0; /* 0x15042245: and dword ptr [ebp - 4], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    eax = ebp + (-0x14); /* 0x15042249: lea eax, [ebp - 0x14] */
    PUSH32(esp, eax); /* 0x1504224C: push eax */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x1504224D: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_15042160); /* 0x15042250: call 0x15042160 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x15042255: add esp, 0xc */
    _flag_k = FK_ADD;
    ecx = MEM32(ebp + (-0x10)); /* 0x15042258: mov ecx, dword ptr [ebp - 0x10] */
    MEM32(ebp + (-0x4)) = 1; /* 0x1504225B: mov dword ptr [ebp - 4], 1 */
    /* test ecx, ecx */ /* 0x15042262: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1504226B; /* 0x15042264: je 0x1504226b */
L_15042266:
    RECOMP_CALL(sub_15042CE7); /* 0x15042266: call 0x15042ce7 */
    RECOMP_FLAGS_IN();
L_1504226B:
    RECOMP_CALL(sub_15041E7C); /* 0x1504226B: call 0x15041e7c */
    RECOMP_FLAGS_IN();
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x15042270: ret  */
    RECOMP_REGS_OUT();
}

void sub_15042280(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x15042280u);

L_15042280:
    edi = edi; /* 0x15042280: mov edi, edi */
    PUSH32(esp, ebp); /* 0x15042282: push ebp */
    ebp = esp; /* 0x15042283: mov ebp, esp */
    ecx = MEM32(ebp + 0x8); /* 0x15042285: mov ecx, dword ptr [ebp + 8] */
    ecx = MEM32(ecx); /* 0x15042288: mov ecx, dword ptr [ecx] */
    ebp = POP32_VAL(esp); /* 0x1504228A: pop ebp */
    goto L_15042EC1; /* 0x1504228B: jmp 0x15042ec1 */
L_15042EC1:
    edi = edi; /* 0x15042EC1: mov edi, edi */
    PUSH32(esp, ebp); /* 0x15042EC3: push ebp */
    ebp = esp; /* 0x15042EC4: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x60u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x60u; /* 0x15042EC6: sub esp, 0x60 */
    _flag_k = FK_CMP;
    eax = MEM32(0x150BD340); /* 0x15042EC9: mov eax, dword ptr [0x150bd340] */
    _flag_a = (uint32_t)((eax ^ ebp)); _flag_b = (uint32_t)((eax ^ ebp));
    eax = eax ^ ebp; /* 0x15042ECE: xor eax, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x4)) = eax; /* 0x15042ED0: mov dword ptr [ebp - 4], eax */
    PUSH32(esp, ebx); /* 0x15042ED3: push ebx */
    ebx = ecx; /* 0x15042ED4: mov ebx, ecx */
    PUSH32(esp, esi); /* 0x15042ED6: push esi */
    PUSH32(esp, edi); /* 0x15042ED7: push edi */
    /* test ebx, ebx */ /* 0x15042ED8: test ebx, ebx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ebx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_15042F9B; /* 0x15042EDA: je 0x15042f9b */
L_15042EE0:
    PUSH32(esp, 0x14u); /* 0x15042EE0: push 0x14 */
    ecx = POP32_VAL(esp); /* 0x15042EE2: pop ecx */
    esi = ebx; /* 0x15042EE3: mov esi, ebx */
    edi = ebp + (-0x54); /* 0x15042EE5: lea edi, [ebp - 0x54] */
    while (ecx) { MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; --ecx; } /* 0x15042EE8: rep movsd dword ptr es:[edi], dword ptr [esi] */
    edx = MEM32(ebp + (-0x54)); /* 0x15042EEA: mov edx, dword ptr [ebp - 0x54] */
    eax = MEM32(ebp + (-0x44)); /* 0x15042EED: mov eax, dword ptr [ebp - 0x44] */
    /* cmp edx, 0xE06D7363u */ /* 0x15042EF0: cmp edx, 0xe06d7363 */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(0xE06D7363u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_15042F6A; /* 0x15042EF6: jne 0x15042f6a */
L_15042EF8:
    /* cmp eax, 3 */ /* 0x15042EF8: cmp eax, 3 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(3);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_15042F6A; /* 0x15042EFB: jne 0x15042f6a */
L_15042EFD:
    ecx = MEM32(ebp + (-0x40)); /* 0x15042EFD: mov ecx, dword ptr [ebp - 0x40] */
    /* cmp ecx, 0x19930520u */ /* 0x15042F00: cmp ecx, 0x19930520 */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x19930520u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_15042F20; /* 0x15042F06: je 0x15042f20 */
L_15042F08:
    /* cmp ecx, 0x19930521u */ /* 0x15042F08: cmp ecx, 0x19930521 */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x19930521u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_15042F20; /* 0x15042F0E: je 0x15042f20 */
L_15042F10:
    /* cmp ecx, 0x19930522u */ /* 0x15042F10: cmp ecx, 0x19930522 */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x19930522u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_15042F20; /* 0x15042F16: je 0x15042f20 */
L_15042F18:
    /* cmp ecx, 0x01994000u */ /* 0x15042F18: cmp ecx, 0x1994000 */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x01994000u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_15042F6A; /* 0x15042F1E: jne 0x15042f6a */
L_15042F20:
    PUSH32(esp, MEM32(ebp + (-0x38))); /* 0x15042F20: push dword ptr [ebp - 0x38] */
    RECOMP_ICALL(MEM32(0x150C02A0)); /* 0x15042F23: call dword ptr [0x150c02a0] */
    RECOMP_FLAGS_IN();
    /* cmp MEM32(ebp + (-0x3C)), 0 */ /* 0x15042F29: cmp dword ptr [ebp - 0x3c], 0 */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x3C))); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_15042F96; /* 0x15042F2D: je 0x15042f96 */
L_15042F2F:
    /* test eax, eax */ /* 0x15042F2F: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_15042F96; /* 0x15042F31: je 0x15042f96 */
L_15042F33:
    ecx = MEM32(eax + 0xC); /* 0x15042F33: mov ecx, dword ptr [eax + 0xc] */
    /* test ecx, ecx */ /* 0x15042F36: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_15042F96; /* 0x15042F38: je 0x15042f96 */
L_15042F3A:
    /* cmp MEM32(ecx), 0 */ /* 0x15042F3A: cmp dword ptr [ecx], 0 */
    _flag_a = (uint32_t)(MEM32(ecx)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_LE(_flag_a, _flag_b)) goto L_15042F96; /* 0x15042F3D: jle 0x15042f96 */
L_15042F3F:
    MEM32(ebp + (-0x38)) = eax; /* 0x15042F3F: mov dword ptr [ebp - 0x38], eax */
    eax = MEM32(eax + 0xC); /* 0x15042F42: mov eax, dword ptr [eax + 0xc] */
    esi = MEM32(eax + 0x4); /* 0x15042F45: mov esi, dword ptr [eax + 4] */
    eax = MEM32(esi + 0x14); /* 0x15042F48: mov eax, dword ptr [esi + 0x14] */
    RECOMP_CALL(sub_15069EB0); /* 0x15042F4B: call 0x15069eb0 */
    RECOMP_FLAGS_IN();
    edi = esp; /* 0x15042F50: mov edi, esp */
    ecx = ebx; /* 0x15042F52: mov ecx, ebx */
    PUSH32(esp, esi); /* 0x15042F54: push esi */
    PUSH32(esp, MEM32(esi + 0x14)); /* 0x15042F55: push dword ptr [esi + 0x14] */
    PUSH32(esp, MEM32(ebp + (-0x3C))); /* 0x15042F58: push dword ptr [ebp - 0x3c] */
    PUSH32(esp, edi); /* 0x15042F5B: push edi */
    RECOMP_CALL(sub_15042A13); /* 0x15042F5C: call 0x15042a13 */
    RECOMP_FLAGS_IN();
    eax = MEM32(ebp + (-0x44)); /* 0x15042F61: mov eax, dword ptr [ebp - 0x44] */
    edx = MEM32(ebp + (-0x54)); /* 0x15042F64: mov edx, dword ptr [ebp - 0x54] */
    MEM32(ebp + (-0x3C)) = edi; /* 0x15042F67: mov dword ptr [ebp - 0x3c], edi */
L_15042F6A:
    PUSH32(esp, 0xFu); /* 0x15042F6A: push 0xf */
    ecx = POP32_VAL(esp); /* 0x15042F6C: pop ecx */
    /* cmp eax, ecx */ /* 0x15042F6D: cmp eax, ecx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_A(_flag_a, _flag_b)) { eax = ecx; } /* 0x15042F6F: cmova eax, ecx */
    ecx = ebp + (-0x40); /* 0x15042F72: lea ecx, [ebp - 0x40] */
    PUSH32(esp, ecx); /* 0x15042F75: push ecx */
    PUSH32(esp, eax); /* 0x15042F76: push eax */
    PUSH32(esp, MEM32(ebp + (-0x50))); /* 0x15042F77: push dword ptr [ebp - 0x50] */
    MEM32(ebp + (-0x44)) = eax; /* 0x15042F7A: mov dword ptr [ebp - 0x44], eax */
    PUSH32(esp, edx); /* 0x15042F7D: push edx */
    RECOMP_ICALL(MEM32(0x150C005C)); /* 0x15042F7E: call dword ptr [0x150c005c] */
    RECOMP_FLAGS_IN();
    esp = ebp + (-0x6C); /* 0x15042F84: lea esp, [ebp - 0x6c] */
    edi = POP32_VAL(esp); /* 0x15042F87: pop edi */
    esi = POP32_VAL(esp); /* 0x15042F88: pop esi */
    ebx = POP32_VAL(esp); /* 0x15042F89: pop ebx */
    ecx = MEM32(ebp + (-0x4)); /* 0x15042F8A: mov ecx, dword ptr [ebp - 4] */
    _flag_a = (uint32_t)((ecx ^ ebp)); _flag_b = (uint32_t)((ecx ^ ebp));
    ecx = ecx ^ ebp; /* 0x15042F8D: xor ecx, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_1505E540); /* 0x15042F8F: call 0x1505e540 */
    RECOMP_FLAGS_IN();
    esp = ebp; ebp = POP32_VAL(esp); /* 0x15042F94: leave  */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x15042F95: ret  */
L_15042F96:
    RECOMP_CALL(sub_1503B0D0); /* 0x15042F96: call 0x1503b0d0 */
    RECOMP_FLAGS_IN();
L_15042F9B:
    PUSH32(esp, 0x15003F04u); /* 0x15042F9B: push 0x15003f04 */
    ecx = ebp + (-0x60); /* 0x15042FA0: lea ecx, [ebp - 0x60] */
    RECOMP_CALL(sub_1503A127); /* 0x15042FA3: call 0x1503a127 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0x150AFD1Cu); /* 0x15042FA8: push 0x150afd1c */
    eax = ebp + (-0x60); /* 0x15042FAD: lea eax, [ebp - 0x60] */
    PUSH32(esp, eax); /* 0x15042FB0: push eax */
    RECOMP_CALL(sub_1503B2E0); /* 0x15042FB1: call 0x1503b2e0 */
    RECOMP_FLAGS_IN();
    void_lift_trap(0x15042FB6u, "int3 ");
    { RECOMP_REGS_OUT(); return; } /* end of function */
    RECOMP_REGS_OUT();
}

void sub_150422A0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x150422A0u);

L_150422A0:
    PUSH32(esp, 8); /* 0x150422A0: push 8 */
    eax = 0x150AF86Eu; /* 0x150422A2: mov eax, 0x150af86e */
    RECOMP_CALL(sub_15041E96); /* 0x150422A7: call 0x15041e96 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 1); /* 0x150422AC: push 1 */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x150422AE: push dword ptr [ebp + 0x10] */
    eax = ebp + (-0x14); /* 0x150422B1: lea eax, [ebp - 0x14] */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x150422B4: push dword ptr [ebp + 0xc] */
    PUSH32(esp, eax); /* 0x150422B7: push eax */
    RECOMP_CALL(sub_15042AAF); /* 0x150422B8: call 0x15042aaf */
    RECOMP_FLAGS_IN();
    ecx = MEM32(ebp + 0x8); /* 0x150422BD: mov ecx, dword ptr [ebp + 8] */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x10u; /* 0x150422C0: add esp, 0x10 */
    _flag_k = FK_ADD;
    PUSH32(esp, eax); /* 0x150422C3: push eax */
    RECOMP_CALL(sub_150427DB); /* 0x150422C4: call 0x150427db */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(MEM32(ebp + (-0x4))); _flag_b = (uint32_t)(0);
    MEM32(ebp + (-0x4)) = MEM32(ebp + (-0x4)) & 0; /* 0x150422C9: and dword ptr [ebp - 4], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = MEM32(ebp + (-0x10)); /* 0x150422CD: mov ecx, dword ptr [ebp - 0x10] */
    /* test ecx, ecx */ /* 0x150422D0: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_150422D9; /* 0x150422D2: je 0x150422d9 */
L_150422D4:
    RECOMP_CALL(sub_15042CE7); /* 0x150422D4: call 0x15042ce7 */
    RECOMP_FLAGS_IN();
L_150422D9:
    RECOMP_CALL(sub_15041E7C); /* 0x150422D9: call 0x15041e7c */
    RECOMP_FLAGS_IN();
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x150422DE: ret  */
    RECOMP_REGS_OUT();
}

void sub_150422EA(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x150422EAu);

L_150422EA:
    edi = edi; /* 0x150422EA: mov edi, edi */
    PUSH32(esp, ebp); /* 0x150422EC: push ebp */
    ebp = esp; /* 0x150422ED: mov ebp, esp */
    eax = MEM32(ebp + 0x8); /* 0x150422EF: mov eax, dword ptr [ebp + 8] */
    edx = MEM32(eax + 0x4); /* 0x150422F2: mov edx, dword ptr [eax + 4] */
    eax = MEM32(eax); /* 0x150422F5: mov eax, dword ptr [eax] */
    /* test edx, edx */ /* 0x150422F7: test edx, edx */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(edx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_150422FF; /* 0x150422F9: je 0x150422ff */
L_150422FB:
    _flag_a = (uint32_t)(MEM32(edx + 0x4)); _flag_b = (uint32_t)(1);
    MEM32(edx + 0x4) = MEM32(edx + 0x4) + 1; /* 0x150422FB: lock inc dword ptr [edx + 4] */
    _flag_k = FK_INC;
L_150422FF:
    PUSH32(esp, edx); /* 0x150422FF: push edx */
    PUSH32(esp, eax); /* 0x15042300: push eax */
    RECOMP_CALL(sub_15042E97); /* 0x15042301: call 0x15042e97 */
    RECOMP_FLAGS_IN();
    ebp = POP32_VAL(esp); /* 0x15042306: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x15042307: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_15042310(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x15042310u);

L_15042310:
    PUSH32(esp, 8); /* 0x15042310: push 8 */
    eax = 0x150AF828u; /* 0x15042312: mov eax, 0x150af828 */
    RECOMP_CALL(sub_15041ECF); /* 0x15042317: call 0x15041ecf */
    RECOMP_FLAGS_IN();
    esi = ecx; /* 0x1504231C: mov esi, ecx */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x4))); _flag_b = (uint32_t)(0);
    MEM32(ebp + (-0x4)) = MEM32(ebp + (-0x4)) & 0; /* 0x1504231E: and dword ptr [ebp - 4], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, 0x10u); /* 0x15042322: push 0x10 */
    RECOMP_CALL(sub_15046090); /* 0x15042324: call 0x15046090 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x15042329: pop ecx */
    /* test eax, eax */ /* 0x1504232A: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_15042345; /* 0x1504232C: je 0x15042345 */
L_1504232E:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x1504232E: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(eax) = 0x1500122Cu; /* 0x15042330: mov dword ptr [eax], 0x1500122c */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx + 1; /* 0x15042336: inc ecx */
    _flag_k = FK_INC;
    MEM32(eax + 0x4) = ecx; /* 0x15042337: mov dword ptr [eax + 4], ecx */
    MEM32(eax + 0x8) = ecx; /* 0x1504233A: mov dword ptr [eax + 8], ecx */
    ecx = MEM32(ebp + 0x8); /* 0x1504233D: mov ecx, dword ptr [ebp + 8] */
    MEM32(eax + 0xC) = ecx; /* 0x15042340: mov dword ptr [eax + 0xc], ecx */
    goto L_1504234A; /* 0x15042343: jmp 0x1504234a */
L_15042345:
    ecx = MEM32(ebp + 0x8); /* 0x15042345: mov ecx, dword ptr [ebp + 8] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x15042348: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
L_1504234A:
    PUSH32(esp, eax); /* 0x1504234A: push eax */
    PUSH32(esp, ecx); /* 0x1504234B: push ecx */
    ecx = esi; /* 0x1504234C: mov ecx, esi */
    RECOMP_CALL(sub_15042E97); /* 0x1504234E: call 0x15042e97 */
    RECOMP_FLAGS_IN();
    RECOMP_CALL(sub_15041E7C); /* 0x15042353: call 0x15041e7c */
    RECOMP_FLAGS_IN();
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x15042358: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_1504237E(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1504237Eu);

L_1504237E:
    PUSH32(esp, 8); /* 0x1504237E: push 8 */
    eax = 0x150AF84Bu; /* 0x15042380: mov eax, 0x150af84b */
    RECOMP_CALL(sub_15041ECF); /* 0x15042385: call 0x15041ecf */
    RECOMP_FLAGS_IN();
    esi = ecx; /* 0x1504238A: mov esi, ecx */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x4))); _flag_b = (uint32_t)(0);
    MEM32(ebp + (-0x4)) = MEM32(ebp + (-0x4)) & 0; /* 0x1504238C: and dword ptr [ebp - 4], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = ebp + (-0x11); /* 0x15042390: lea ecx, [ebp - 0x11] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edi = 0; /* 0x15042393: xor edi, edi */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(1);
    edi = edi + 1; /* 0x15042395: inc edi */
    _flag_k = FK_INC;
    PUSH32(esp, edi); /* 0x15042396: push edi */
    RECOMP_CALL(sub_15042FBD); /* 0x15042397: call 0x15042fbd */
    RECOMP_FLAGS_IN();
    edx = MEM32(ebp + 0x8); /* 0x1504239C: mov edx, dword ptr [ebp + 8] */
    ecx = MEM32(ebp + 0xC); /* 0x1504239F: mov ecx, dword ptr [ebp + 0xc] */
    PUSH32(esp, eax); /* 0x150423A2: push eax */
    MEM32(eax + 0x10) = ecx; /* 0x150423A3: mov dword ptr [eax + 0x10], ecx */
    ecx = esi; /* 0x150423A6: mov ecx, esi */
    PUSH32(esp, edx); /* 0x150423A8: push edx */
    MEM32(eax + 0x4) = edi; /* 0x150423A9: mov dword ptr [eax + 4], edi */
    MEM32(eax + 0x8) = edi; /* 0x150423AC: mov dword ptr [eax + 8], edi */
    MEM32(eax) = 0x1500123Cu; /* 0x150423AF: mov dword ptr [eax], 0x1500123c */
    MEM32(eax + 0xC) = edx; /* 0x150423B5: mov dword ptr [eax + 0xc], edx */
    RECOMP_CALL(sub_15042E97); /* 0x150423B8: call 0x15042e97 */
    RECOMP_FLAGS_IN();
    RECOMP_CALL(sub_15041E7C); /* 0x150423BD: call 0x15041e7c */
    RECOMP_FLAGS_IN();
    RECOMP_FLAGS_OUT(); esp += 16; { RECOMP_REGS_OUT(); return; } /* 0x150423C2: ret 0xc */
    RECOMP_REGS_OUT();
}

void sub_150423EA(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x150423EAu);

L_150423EA:
    PUSH32(esp, 8); /* 0x150423EA: push 8 */
    eax = 0x150AF86Eu; /* 0x150423EC: mov eax, 0x150af86e */
    RECOMP_CALL(sub_15041E96); /* 0x150423F1: call 0x15041e96 */
    RECOMP_FLAGS_IN();
    esi = ecx; /* 0x150423F6: mov esi, ecx */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x150423F8: push dword ptr [ebp + 8] */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x14))); _flag_b = (uint32_t)(0);
    MEM32(ebp + (-0x14)) = MEM32(ebp + (-0x14)) & 0; /* 0x150423FB: and dword ptr [ebp - 0x14], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = ebp + (-0x14); /* 0x150423FF: lea ecx, [ebp - 0x14] */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x10))); _flag_b = (uint32_t)(0);
    MEM32(ebp + (-0x10)) = MEM32(ebp + (-0x10)) & 0; /* 0x15042402: and dword ptr [ebp - 0x10], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_15042310); /* 0x15042406: call 0x15042310 */
    RECOMP_FLAGS_IN();
    eax = MEM32(ebp + (-0x10)); /* 0x1504240B: mov eax, dword ptr [ebp - 0x10] */
    ecx = MEM32(esi + 0x4); /* 0x1504240E: mov ecx, dword ptr [esi + 4] */
    MEM32(esi + 0x4) = eax; /* 0x15042411: mov dword ptr [esi + 4], eax */
    eax = MEM32(ebp + (-0x14)); /* 0x15042414: mov eax, dword ptr [ebp - 0x14] */
    MEM32(esi) = eax; /* 0x15042417: mov dword ptr [esi], eax */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x4))); _flag_b = (uint32_t)(0);
    MEM32(ebp + (-0x4)) = MEM32(ebp + (-0x4)) & 0; /* 0x15042419: and dword ptr [ebp - 4], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    /* test ecx, ecx */ /* 0x1504241D: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_15042426; /* 0x1504241F: je 0x15042426 */
L_15042421:
    RECOMP_CALL(sub_15042CE7); /* 0x15042421: call 0x15042ce7 */
    RECOMP_FLAGS_IN();
L_15042426:
    RECOMP_CALL(sub_15041E7C); /* 0x15042426: call 0x15041e7c */
    RECOMP_FLAGS_IN();
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x1504242B: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_15042439(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x15042439u);

L_15042439:
    PUSH32(esp, 0xCu); /* 0x15042439: push 0xc */
    eax = 0x150AF891u; /* 0x1504243B: mov eax, 0x150af891 */
    RECOMP_CALL(sub_15041E96); /* 0x15042440: call 0x15041e96 */
    RECOMP_FLAGS_IN();
    esi = ecx; /* 0x15042445: mov esi, ecx */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x18))); _flag_b = (uint32_t)(0);
    MEM32(ebp + (-0x18)) = MEM32(ebp + (-0x18)) & 0; /* 0x15042447: and dword ptr [ebp - 0x18], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(MEM32(ebp + (-0x14))); _flag_b = (uint32_t)(0);
    MEM32(ebp + (-0x14)) = MEM32(ebp + (-0x14)) & 0; /* 0x1504244B: and dword ptr [ebp - 0x14], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, ecx); /* 0x1504244F: push ecx */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x15042450: push dword ptr [ebp + 0xc] */
    ecx = ebp + (-0x18); /* 0x15042453: lea ecx, [ebp - 0x18] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x15042456: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_1504237E); /* 0x15042459: call 0x1504237e */
    RECOMP_FLAGS_IN();
    eax = MEM32(ebp + (-0x14)); /* 0x1504245E: mov eax, dword ptr [ebp - 0x14] */
    ecx = MEM32(esi + 0x4); /* 0x15042461: mov ecx, dword ptr [esi + 4] */
    MEM32(esi + 0x4) = eax; /* 0x15042464: mov dword ptr [esi + 4], eax */
    eax = MEM32(ebp + (-0x18)); /* 0x15042467: mov eax, dword ptr [ebp - 0x18] */
    MEM32(esi) = eax; /* 0x1504246A: mov dword ptr [esi], eax */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x4))); _flag_b = (uint32_t)(0);
    MEM32(ebp + (-0x4)) = MEM32(ebp + (-0x4)) & 0; /* 0x1504246C: and dword ptr [ebp - 4], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    /* test ecx, ecx */ /* 0x15042470: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_15042479; /* 0x15042472: je 0x15042479 */
L_15042474:
    RECOMP_CALL(sub_15042CE7); /* 0x15042474: call 0x15042ce7 */
    RECOMP_FLAGS_IN();
L_15042479:
    RECOMP_CALL(sub_15041E7C); /* 0x15042479: call 0x15041e7c */
    RECOMP_FLAGS_IN();
    RECOMP_FLAGS_OUT(); esp += 16; { RECOMP_REGS_OUT(); return; } /* 0x1504247E: ret 0xc */
    RECOMP_REGS_OUT();
}

void sub_1504248C(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1504248Cu);

L_1504248C:
    edi = edi; /* 0x1504248C: mov edi, edi */
    PUSH32(esp, ebp); /* 0x1504248E: push ebp */
    ebp = esp; /* 0x1504248F: mov ebp, esp */
    SET_LO8(eax, MEM8(ebp + 0xC)); /* 0x15042491: mov al, byte ptr [ebp + 0xc] */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x10u; /* 0x15042494: sub esp, 0x10 */
    _flag_k = FK_CMP;
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edx = 0; /* 0x15042497: xor edx, edx */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, ebx); /* 0x15042499: push ebx */
    ebx = MEM32(ebp + 0x8); /* 0x1504249A: mov ebx, dword ptr [ebp + 8] */
    PUSH32(esp, esi); /* 0x1504249D: push esi */
    esi = ecx; /* 0x1504249E: mov esi, ecx */
    PUSH32(esp, edi); /* 0x150424A0: push edi */
    PUSH32(esp, 0xFu); /* 0x150424A1: push 0xf */
    edi = edx; /* 0x150424A3: mov edi, edx */
    MEM8(esi + 0x50) = (uint8_t)(LO8(eax)); /* 0x150424A5: mov byte ptr [esi + 0x50], al */
    eax = MEM32(ebx); /* 0x150424A8: mov eax, dword ptr [ebx] */
    MEM32(esi) = eax; /* 0x150424AA: mov dword ptr [esi], eax */
    eax = MEM32(ebx + 0x4); /* 0x150424AC: mov eax, dword ptr [ebx + 4] */
    MEM32(esi + 0x4) = eax; /* 0x150424AF: mov dword ptr [esi + 4], eax */
    MEM32(esi + 0x8) = edx; /* 0x150424B2: mov dword ptr [esi + 8], edx */
    MEM32(esi + 0xC) = edx; /* 0x150424B5: mov dword ptr [esi + 0xc], edx */
    eax = MEM32(ebx + 0x10); /* 0x150424B8: mov eax, dword ptr [ebx + 0x10] */
    MEM32(esi + 0x10) = eax; /* 0x150424BB: mov dword ptr [esi + 0x10], eax */
    ecx = POP32_VAL(esp); /* 0x150424BE: pop ecx */
    /* test eax, eax */ /* 0x150424BF: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_150424E1; /* 0x150424C1: je 0x150424e1 */
L_150424C3:
    edx = esi + 0x14; /* 0x150424C3: lea edx, [esi + 0x14] */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ebx = ebx - esi; /* 0x150424C6: sub ebx, esi */
    _flag_k = FK_CMP;
L_150424C8:
    /* cmp edi, ecx */ /* 0x150424C8: cmp edi, ecx */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_AE(_flag_a, _flag_b)) goto L_150424DC; /* 0x150424CA: jae 0x150424dc */
L_150424CC:
    eax = MEM32(ebx + edx); /* 0x150424CC: mov eax, dword ptr [ebx + edx] */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(1);
    edi = edi + 1; /* 0x150424CF: inc edi */
    _flag_k = FK_INC;
    MEM32(edx) = eax; /* 0x150424D0: mov dword ptr [edx], eax */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edx = edx + 4; /* 0x150424D2: add edx, 4 */
    _flag_k = FK_ADD;
    eax = MEM32(esi + 0x10); /* 0x150424D5: mov eax, dword ptr [esi + 0x10] */
    /* cmp edi, eax */ /* 0x150424D8: cmp edi, eax */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_150424C8; /* 0x150424DA: jb 0x150424c8 */
L_150424DC:
    ebx = MEM32(ebp + 0x8); /* 0x150424DC: mov ebx, dword ptr [ebp + 8] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edx = 0; /* 0x150424DF: xor edx, edx */
    _cf = 0;
    _flag_k = FK_TEST;
L_150424E1:
    /* cmp eax, ecx */ /* 0x150424E1: cmp eax, ecx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_AE(_flag_a, _flag_b)) goto L_150424F1; /* 0x150424E3: jae 0x150424f1 */
L_150424E5:
    edi = esi + 0x14; /* 0x150424E5: lea edi, [esi + 0x14] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ecx = ecx - eax; /* 0x150424E8: sub ecx, eax */
    _flag_k = FK_CMP;
    edi = edi + eax * 4; /* 0x150424EA: lea edi, [edi + eax*4] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x150424ED: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    { uint32_t _n = ecx, _b = _n * 4u; /* 0x150424EF: rep stosd dword ptr es:[edi], eax */ if (_df > 0) { MEMSET32((void*)ADDR(edi), eax, _n); edi += _b; } else { MEMSET32((void*)ADDR(edi - _b + 4u), eax, _n); edi -= _b; } ecx = 0; }
L_150424F1:
    /* cmp MEM32(ebx), 0xE06D7363u */ /* 0x150424F1: cmp dword ptr [ebx], 0xe06d7363 */
    _flag_a = (uint32_t)(MEM32(ebx)); _flag_b = (uint32_t)(0xE06D7363u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_15042581; /* 0x150424F7: jne 0x15042581 */
L_150424FD:
    /* cmp MEM32(ebx + 0x10), 3 */ /* 0x150424FD: cmp dword ptr [ebx + 0x10], 3 */
    _flag_a = (uint32_t)(MEM32(ebx + 0x10)); _flag_b = (uint32_t)(3);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_15042581; /* 0x15042501: jne 0x15042581 */
L_15042503:
    eax = MEM32(ebx + 0x14); /* 0x15042503: mov eax, dword ptr [ebx + 0x14] */
    /* cmp eax, 0x19930520u */ /* 0x15042506: cmp eax, 0x19930520 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x19930520u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_15042522; /* 0x1504250B: je 0x15042522 */
L_1504250D:
    /* cmp eax, 0x19930521u */ /* 0x1504250D: cmp eax, 0x19930521 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x19930521u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_15042522; /* 0x15042512: je 0x15042522 */
L_15042514:
    /* cmp eax, 0x19930522u */ /* 0x15042514: cmp eax, 0x19930522 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x19930522u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_15042522; /* 0x15042519: je 0x15042522 */
L_1504251B:
    /* cmp eax, 0x01994000u */ /* 0x1504251B: cmp eax, 0x1994000 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x01994000u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_15042581; /* 0x15042520: jne 0x15042581 */
L_15042522:
    MEM32(esi + 0x18) = edx; /* 0x15042522: mov dword ptr [esi + 0x18], edx */
    /* cmp MEM32(ebx + 0x18), edx */ /* 0x15042525: cmp dword ptr [ebx + 0x18], edx */
    _flag_a = (uint32_t)(MEM32(ebx + 0x18)); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1504258A; /* 0x15042528: je 0x1504258a */
L_1504252A:
    edi = MEM32(ebx + 0x1C); /* 0x1504252A: mov edi, dword ptr [ebx + 0x1c] */
    /* test edi, edi */ /* 0x1504252D: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1504258A; /* 0x1504252F: je 0x1504258a */
L_15042531:
    eax = MEM32(edi + 0xC); /* 0x15042531: mov eax, dword ptr [edi + 0xc] */
    /* test eax, eax */ /* 0x15042534: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1504258A; /* 0x15042536: je 0x1504258a */
L_15042538:
    /* cmp MEM32(eax), edx */ /* 0x15042538: cmp dword ptr [eax], edx */
    _flag_a = (uint32_t)(MEM32(eax)); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_LE(_flag_a, _flag_b)) goto L_1504258A; /* 0x1504253A: jle 0x1504258a */
L_1504253C:
    PUSH32(esp, edi); /* 0x1504253C: push edi */
    RECOMP_ICALL(MEM32(0x150C0298)); /* 0x1504253D: call dword ptr [0x150c0298] */
    RECOMP_FLAGS_IN();
    /* cmp MEM8(ebp + 0xC), 0 */ /* 0x15042543: cmp byte ptr [ebp + 0xc], 0 */
    _flag_a = (uint32_t)(MEM8(ebp + 0xC)) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    MEM32(esi + 0x1C) = eax; /* 0x15042547: mov dword ptr [esi + 0x1c], eax */
    eax = MEM32(edi + 0xC); /* 0x1504254A: mov eax, dword ptr [edi + 0xc] */
    eax = MEM32(eax + 0x4); /* 0x1504254D: mov eax, dword ptr [eax + 4] */
    MEM32(ebp + (-0x4)) = eax; /* 0x15042550: mov dword ptr [ebp - 4], eax */
    eax = MEM32(eax + 0x14); /* 0x15042553: mov eax, dword ptr [eax + 0x14] */
    PUSH32(esp, eax); /* 0x15042556: push eax */
    if (CMP_EQ(_flag_a, _flag_b)) goto L_15042560; /* 0x15042557: je 0x15042560 */
L_15042559:
    RECOMP_CALL(sub_15048A30); /* 0x15042559: call 0x15048a30 */
    RECOMP_FLAGS_IN();
    goto L_15042565; /* 0x1504255E: jmp 0x15042565 */
L_15042560:
    RECOMP_CALL(sub_15048F2F); /* 0x15042560: call 0x15048f2f */
    RECOMP_FLAGS_IN();
L_15042565:
    edi = eax; /* 0x15042565: mov edi, eax */
    ecx = POP32_VAL(esp); /* 0x15042567: pop ecx */
    /* test edi, edi */ /* 0x15042568: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1504258F; /* 0x1504256A: je 0x1504258f */
L_1504256C:
    eax = MEM32(ebp + (-0x4)); /* 0x1504256C: mov eax, dword ptr [ebp - 4] */
    ecx = esi; /* 0x1504256F: mov ecx, esi */
    PUSH32(esp, eax); /* 0x15042571: push eax */
    PUSH32(esp, MEM32(eax + 0x14)); /* 0x15042572: push dword ptr [eax + 0x14] */
    PUSH32(esp, MEM32(ebx + 0x18)); /* 0x15042575: push dword ptr [ebx + 0x18] */
    PUSH32(esp, edi); /* 0x15042578: push edi */
    RECOMP_CALL(sub_15042A13); /* 0x15042579: call 0x15042a13 */
    RECOMP_FLAGS_IN();
    MEM32(esi + 0x18) = edi; /* 0x1504257E: mov dword ptr [esi + 0x18], edi */
L_15042581:
    edi = POP32_VAL(esp); /* 0x15042581: pop edi */
    eax = esi; /* 0x15042582: mov eax, esi */
    esi = POP32_VAL(esp); /* 0x15042584: pop esi */
    ebx = POP32_VAL(esp); /* 0x15042585: pop ebx */
    esp = ebp; ebp = POP32_VAL(esp); /* 0x15042586: leave  */
    RECOMP_FLAGS_OUT(); esp += 12; { RECOMP_REGS_OUT(); return; } /* 0x15042587: ret 8 */
L_1504258A:
    RECOMP_CALL(sub_1503B0D0); /* 0x1504258A: call 0x1503b0d0 */
    RECOMP_FLAGS_IN();
L_1504258F:
    ecx = ebp + (-0x10); /* 0x1504258F: lea ecx, [ebp - 0x10] */
    RECOMP_CALL(sub_150425D7); /* 0x15042592: call 0x150425d7 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0x150B02C0u); /* 0x15042597: push 0x150b02c0 */
    eax = ebp + (-0x10); /* 0x1504259C: lea eax, [ebp - 0x10] */
    PUSH32(esp, eax); /* 0x1504259F: push eax */
    RECOMP_CALL(sub_1503B2E0); /* 0x150425A0: call 0x1503b2e0 */
    RECOMP_FLAGS_IN();
    void_lift_trap(0x150425A5u, "int3 ");
    { RECOMP_REGS_OUT(); return; } /* end of function */
    RECOMP_REGS_OUT();
}

void sub_150425B0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x150425B0u);

L_150425B0:
    edi = edi; /* 0x150425B0: mov edi, edi */
    PUSH32(esp, ebp); /* 0x150425B2: push ebp */
    ebp = esp; /* 0x150425B3: mov ebp, esp */
    PUSH32(esp, ecx); /* 0x150425B5: push ecx */
    PUSH32(esp, esi); /* 0x150425B6: push esi */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x150425B7: push dword ptr [ebp + 8] */
    esi = ecx; /* 0x150425BA: mov esi, ecx */
    MEM32(ebp + (-0x4)) = esi; /* 0x150425BC: mov dword ptr [ebp - 4], esi */
    RECOMP_CALL(sub_15039A60); /* 0x150425BF: call 0x15039a60 */
    RECOMP_FLAGS_IN();
    MEM32(esi) = 0x1500120Cu; /* 0x150425C4: mov dword ptr [esi], 0x1500120c */
    eax = esi; /* 0x150425CA: mov eax, esi */
    esi = POP32_VAL(esp); /* 0x150425CC: pop esi */
    esp = ebp; ebp = POP32_VAL(esp); /* 0x150425CD: leave  */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x150425CE: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_150425D7(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x150425D7u);

L_150425D7:
    edi = edi; /* 0x150425D7: mov edi, edi */
    PUSH32(esp, ebp); /* 0x150425D9: push ebp */
    ebp = esp; /* 0x150425DA: mov ebp, esp */
    PUSH32(esp, 0xFFFFFFFFu); /* 0x150425DC: push -1 */
    PUSH32(esp, 0x150AF8B4u); /* 0x150425DE: push 0x150af8b4 */
    eax = MEM32(FS_BASE + (0)); /* 0x150425E3: mov eax, dword ptr fs:[0] */
    PUSH32(esp, eax); /* 0x150425E9: push eax */
    PUSH32(esp, ecx); /* 0x150425EA: push ecx */
    PUSH32(esp, esi); /* 0x150425EB: push esi */
    eax = MEM32(0x150BD340); /* 0x150425EC: mov eax, dword ptr [0x150bd340] */
    _flag_a = (uint32_t)((eax ^ ebp)); _flag_b = (uint32_t)((eax ^ ebp));
    eax = eax ^ ebp; /* 0x150425F1: xor eax, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, eax); /* 0x150425F3: push eax */
    eax = ebp + (-0xC); /* 0x150425F4: lea eax, [ebp - 0xc] */
    MEM32(FS_BASE + (0)) = eax; /* 0x150425F7: mov dword ptr fs:[0], eax */
    esi = ecx; /* 0x150425FD: mov esi, ecx */
    PUSH32(esp, 1); /* 0x150425FF: push 1 */
    eax = ebp + (-0x10); /* 0x15042601: lea eax, [ebp - 0x10] */
    MEM32(ebp + (-0x10)) = 0x15004894u; /* 0x15042604: mov dword ptr [ebp - 0x10], 0x15004894 */
    PUSH32(esp, eax); /* 0x1504260B: push eax */
    RECOMP_CALL(sub_15039A30); /* 0x1504260C: call 0x15039a30 */
    RECOMP_FLAGS_IN();
    MEM32(esi) = 0x1500120Cu; /* 0x15042611: mov dword ptr [esi], 0x1500120c */
    eax = esi; /* 0x15042617: mov eax, esi */
    ecx = MEM32(ebp + (-0xC)); /* 0x15042619: mov ecx, dword ptr [ebp - 0xc] */
    MEM32(FS_BASE + (0)) = ecx; /* 0x1504261C: mov dword ptr fs:[0], ecx */
    ecx = POP32_VAL(esp); /* 0x15042623: pop ecx */
    esi = POP32_VAL(esp); /* 0x15042624: pop esi */
    esp = ebp; ebp = POP32_VAL(esp); /* 0x15042625: leave  */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x15042626: ret  */
    RECOMP_REGS_OUT();
}

void sub_15042640(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x15042640u);

L_15042640:
    edi = edi; /* 0x15042640: mov edi, edi */
    PUSH32(esp, ebp); /* 0x15042642: push ebp */
    ebp = esp; /* 0x15042643: mov ebp, esp */
    PUSH32(esp, ecx); /* 0x15042645: push ecx */
    PUSH32(esp, esi); /* 0x15042646: push esi */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x15042647: push dword ptr [ebp + 8] */
    esi = ecx; /* 0x1504264A: mov esi, ecx */
    MEM32(ebp + (-0x4)) = esi; /* 0x1504264C: mov dword ptr [ebp - 4], esi */
    RECOMP_CALL(sub_15039A60); /* 0x1504264F: call 0x15039a60 */
    RECOMP_FLAGS_IN();
    MEM32(esi) = 0x15001224u; /* 0x15042654: mov dword ptr [esi], 0x15001224 */
    eax = esi; /* 0x1504265A: mov eax, esi */
    esi = POP32_VAL(esp); /* 0x1504265C: pop esi */
    esp = ebp; ebp = POP32_VAL(esp); /* 0x1504265D: leave  */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x1504265E: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_15042667(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x15042667u);

L_15042667:
    edi = edi; /* 0x15042667: mov edi, edi */
    PUSH32(esp, ebp); /* 0x15042669: push ebp */
    ebp = esp; /* 0x1504266A: mov ebp, esp */
    PUSH32(esp, ecx); /* 0x1504266C: push ecx */
    eax = MEM32(ebp + 0x8); /* 0x1504266D: mov eax, dword ptr [ebp + 8] */
    PUSH32(esp, esi); /* 0x15042670: push esi */
    esi = ecx; /* 0x15042671: mov esi, ecx */
    MEM32(ebp + (-0x4)) = esi; /* 0x15042673: mov dword ptr [ebp - 4], esi */
    MEM32(ebp + (-0x4)) = eax; /* 0x15042676: mov dword ptr [ebp - 4], eax */
    eax = ebp + (-0x4); /* 0x15042679: lea eax, [ebp - 4] */
    PUSH32(esp, eax); /* 0x1504267C: push eax */
    RECOMP_CALL(sub_150399C0); /* 0x1504267D: call 0x150399c0 */
    RECOMP_FLAGS_IN();
    MEM32(esi) = 0x15001224u; /* 0x15042682: mov dword ptr [esi], 0x15001224 */
    eax = esi; /* 0x15042688: mov eax, esi */
    esi = POP32_VAL(esp); /* 0x1504268A: pop esi */
    esp = ebp; ebp = POP32_VAL(esp); /* 0x1504268B: leave  */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x1504268C: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_15042695(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x15042695u);

L_15042695:
    edi = edi; /* 0x15042695: mov edi, edi */
    PUSH32(esp, ebp); /* 0x15042697: push ebp */
    ebp = esp; /* 0x15042698: mov ebp, esp */
    PUSH32(esp, 0xFFFFFFFFu); /* 0x1504269A: push -1 */
    PUSH32(esp, 0x150AF8D7u); /* 0x1504269C: push 0x150af8d7 */
    eax = MEM32(FS_BASE + (0)); /* 0x150426A1: mov eax, dword ptr fs:[0] */
    PUSH32(esp, eax); /* 0x150426A7: push eax */
    eax = MEM32(0x150BD340); /* 0x150426A8: mov eax, dword ptr [0x150bd340] */
    _flag_a = (uint32_t)((eax ^ ebp)); _flag_b = (uint32_t)((eax ^ ebp));
    eax = eax ^ ebp; /* 0x150426AD: xor eax, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, eax); /* 0x150426AF: push eax */
    eax = ebp + (-0xC); /* 0x150426B0: lea eax, [ebp - 0xc] */
    MEM32(FS_BASE + (0)) = eax; /* 0x150426B3: mov dword ptr fs:[0], eax */
    ecx = MEM32(ecx + 0x4); /* 0x150426B9: mov ecx, dword ptr [ecx + 4] */
    /* test ecx, ecx */ /* 0x150426BC: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_150426C5; /* 0x150426BE: je 0x150426c5 */
L_150426C0:
    RECOMP_CALL(sub_15042CE7); /* 0x150426C0: call 0x15042ce7 */
    RECOMP_FLAGS_IN();
L_150426C5:
    ecx = MEM32(ebp + (-0xC)); /* 0x150426C5: mov ecx, dword ptr [ebp - 0xc] */
    MEM32(FS_BASE + (0)) = ecx; /* 0x150426C8: mov dword ptr fs:[0], ecx */
    ecx = POP32_VAL(esp); /* 0x150426CF: pop ecx */
    esp = ebp; ebp = POP32_VAL(esp); /* 0x150426D0: leave  */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x150426D1: ret  */
    RECOMP_REGS_OUT();
}

void sub_150426DD(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x150426DDu);

L_150426DD:
    edi = edi; /* 0x150426DD: mov edi, edi */
    PUSH32(esp, ebp); /* 0x150426DF: push ebp */
    ebp = esp; /* 0x150426E0: mov ebp, esp */
    PUSH32(esp, 0xFFFFFFFFu); /* 0x150426E2: push -1 */
    PUSH32(esp, 0x150AF8B4u); /* 0x150426E4: push 0x150af8b4 */
    eax = MEM32(FS_BASE + (0)); /* 0x150426E9: mov eax, dword ptr fs:[0] */
    PUSH32(esp, eax); /* 0x150426EF: push eax */
    PUSH32(esp, esi); /* 0x150426F0: push esi */
    PUSH32(esp, edi); /* 0x150426F1: push edi */
    eax = MEM32(0x150BD340); /* 0x150426F2: mov eax, dword ptr [0x150bd340] */
    _flag_a = (uint32_t)((eax ^ ebp)); _flag_b = (uint32_t)((eax ^ ebp));
    eax = eax ^ ebp; /* 0x150426F7: xor eax, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, eax); /* 0x150426F9: push eax */
    eax = ebp + (-0xC); /* 0x150426FA: lea eax, [ebp - 0xc] */
    MEM32(FS_BASE + (0)) = eax; /* 0x150426FD: mov dword ptr fs:[0], eax */
    edi = ecx; /* 0x15042703: mov edi, ecx */
    /* cmp MEM32(edi), 0xE06D7363u */ /* 0x15042705: cmp dword ptr [edi], 0xe06d7363 */
    _flag_a = (uint32_t)(MEM32(edi)); _flag_b = (uint32_t)(0xE06D7363u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_15042783; /* 0x1504270B: jne 0x15042783 */
L_1504270D:
    /* cmp MEM32(edi + 0x10), 3 */ /* 0x1504270D: cmp dword ptr [edi + 0x10], 3 */
    _flag_a = (uint32_t)(MEM32(edi + 0x10)); _flag_b = (uint32_t)(3);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_15042783; /* 0x15042711: jne 0x15042783 */
L_15042713:
    eax = MEM32(edi + 0x14); /* 0x15042713: mov eax, dword ptr [edi + 0x14] */
    /* cmp eax, 0x19930520u */ /* 0x15042716: cmp eax, 0x19930520 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x19930520u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_15042732; /* 0x1504271B: je 0x15042732 */
L_1504271D:
    /* cmp eax, 0x19930521u */ /* 0x1504271D: cmp eax, 0x19930521 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x19930521u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_15042732; /* 0x15042722: je 0x15042732 */
L_15042724:
    /* cmp eax, 0x19930522u */ /* 0x15042724: cmp eax, 0x19930522 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x19930522u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_15042732; /* 0x15042729: je 0x15042732 */
L_1504272B:
    /* cmp eax, 0x01994000u */ /* 0x1504272B: cmp eax, 0x1994000 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x01994000u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_15042783; /* 0x15042730: jne 0x15042783 */
L_15042732:
    PUSH32(esp, MEM32(edi + 0x1C)); /* 0x15042732: push dword ptr [edi + 0x1c] */
    RECOMP_ICALL(MEM32(0x150C02A0)); /* 0x15042735: call dword ptr [0x150c02a0] */
    RECOMP_FLAGS_IN();
    edx = eax; /* 0x1504273B: mov edx, eax */
    /* test edx, edx */ /* 0x1504273D: test edx, edx */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(edx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_15042792; /* 0x1504273F: je 0x15042792 */
L_15042741:
    ecx = MEM32(edi + 0x18); /* 0x15042741: mov ecx, dword ptr [edi + 0x18] */
    /* test ecx, ecx */ /* 0x15042744: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1504277A; /* 0x15042746: je 0x1504277a */
L_15042748:
    /* cmp MEM32(edx + 0x4), 0 */ /* 0x15042748: cmp dword ptr [edx + 4], 0 */
    _flag_a = (uint32_t)(MEM32(edx + 0x4)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    eax = MEM32(edx + 0xC); /* 0x1504274C: mov eax, dword ptr [edx + 0xc] */
    eax = MEM32(eax + 0x4); /* 0x1504274F: mov eax, dword ptr [eax + 4] */
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1504275F; /* 0x15042752: je 0x1504275f */
L_15042754:
    PUSH32(esp, MEM32(edx + 0x4)); /* 0x15042754: push dword ptr [edx + 4] */
    PUSH32(esp, ecx); /* 0x15042757: push ecx */
    RECOMP_CALL(sub_15039F50); /* 0x15042758: call 0x15039f50 */
    RECOMP_FLAGS_IN();
    goto L_1504277A; /* 0x1504275D: jmp 0x1504277a */
L_1504275F:
    /* test MEM8(eax), 8 */ /* 0x1504275F: test byte ptr [eax], 8 */
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(8) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_1504277A; /* 0x15042762: je 0x1504277a */
L_15042764:
    ecx = MEM32(ecx); /* 0x15042764: mov ecx, dword ptr [ecx] */
    /* test ecx, ecx */ /* 0x15042766: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1504277A; /* 0x15042768: je 0x1504277a */
L_1504276A:
    eax = MEM32(ecx); /* 0x1504276A: mov eax, dword ptr [ecx] */
    PUSH32(esp, ecx); /* 0x1504276C: push ecx */
    esi = MEM32(eax + 0x8); /* 0x1504276D: mov esi, dword ptr [eax + 8] */
    ecx = esi; /* 0x15042770: mov ecx, esi */
    RECOMP_ICALL(MEM32(0x150C02B0)); /* 0x15042772: call dword ptr [0x150c02b0] */
    RECOMP_FLAGS_IN();
    RECOMP_ICALL(esi); /* 0x15042778: call esi */
    RECOMP_FLAGS_IN();
L_1504277A:
    PUSH32(esp, MEM32(edi + 0x18)); /* 0x1504277A: push dword ptr [edi + 0x18] */
    RECOMP_CALL(sub_15048840); /* 0x1504277D: call 0x15048840 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x15042782: pop ecx */
L_15042783:
    ecx = MEM32(ebp + (-0xC)); /* 0x15042783: mov ecx, dword ptr [ebp - 0xc] */
    MEM32(FS_BASE + (0)) = ecx; /* 0x15042786: mov dword ptr fs:[0], ecx */
    ecx = POP32_VAL(esp); /* 0x1504278D: pop ecx */
    edi = POP32_VAL(esp); /* 0x1504278E: pop edi */
    esi = POP32_VAL(esp); /* 0x1504278F: pop esi */
    esp = ebp; ebp = POP32_VAL(esp); /* 0x15042790: leave  */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x15042791: ret  */
L_15042792:
    RECOMP_CALL(sub_1503B0D0); /* 0x15042792: call 0x1503b0d0 */
    RECOMP_FLAGS_IN();
    void_lift_trap(0x15042797u, "int3 ");
    { RECOMP_REGS_OUT(); return; } /* end of function */
    RECOMP_REGS_OUT();
}

void sub_150427DB(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x150427DBu);

L_150427DB:
    edi = edi; /* 0x150427DB: mov edi, edi */
    PUSH32(esp, ebp); /* 0x150427DD: push ebp */
    ebp = esp; /* 0x150427DE: mov ebp, esp */
    PUSH32(esp, 0xFFFFFFFFu); /* 0x150427E0: push -1 */
    PUSH32(esp, 0x150AF8FAu); /* 0x150427E2: push 0x150af8fa */
    eax = MEM32(FS_BASE + (0)); /* 0x150427E7: mov eax, dword ptr fs:[0] */
    PUSH32(esp, eax); /* 0x150427ED: push eax */
    PUSH32(esp, ecx); /* 0x150427EE: push ecx */
    PUSH32(esp, ecx); /* 0x150427EF: push ecx */
    PUSH32(esp, esi); /* 0x150427F0: push esi */
    eax = MEM32(0x150BD340); /* 0x150427F1: mov eax, dword ptr [0x150bd340] */
    _flag_a = (uint32_t)((eax ^ ebp)); _flag_b = (uint32_t)((eax ^ ebp));
    eax = eax ^ ebp; /* 0x150427F6: xor eax, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, eax); /* 0x150427F8: push eax */
    eax = ebp + (-0xC); /* 0x150427F9: lea eax, [ebp - 0xc] */
    MEM32(FS_BASE + (0)) = eax; /* 0x150427FC: mov dword ptr fs:[0], eax */
    esi = ecx; /* 0x15042802: mov esi, ecx */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x15042804: push dword ptr [ebp + 8] */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x14))); _flag_b = (uint32_t)(0);
    MEM32(ebp + (-0x14)) = MEM32(ebp + (-0x14)) & 0; /* 0x15042807: and dword ptr [ebp - 0x14], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = ebp + (-0x14); /* 0x1504280B: lea ecx, [ebp - 0x14] */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x10))); _flag_b = (uint32_t)(0);
    MEM32(ebp + (-0x10)) = MEM32(ebp + (-0x10)) & 0; /* 0x1504280E: and dword ptr [ebp - 0x10], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_1504299D); /* 0x15042812: call 0x1504299d */
    RECOMP_FLAGS_IN();
    eax = MEM32(ebp + (-0x10)); /* 0x15042817: mov eax, dword ptr [ebp - 0x10] */
    ecx = MEM32(esi + 0x4); /* 0x1504281A: mov ecx, dword ptr [esi + 4] */
    MEM32(esi + 0x4) = eax; /* 0x1504281D: mov dword ptr [esi + 4], eax */
    eax = MEM32(ebp + (-0x14)); /* 0x15042820: mov eax, dword ptr [ebp - 0x14] */
    MEM32(esi) = eax; /* 0x15042823: mov dword ptr [esi], eax */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x4))); _flag_b = (uint32_t)(0);
    MEM32(ebp + (-0x4)) = MEM32(ebp + (-0x4)) & 0; /* 0x15042825: and dword ptr [ebp - 4], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    /* test ecx, ecx */ /* 0x15042829: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_15042832; /* 0x1504282B: je 0x15042832 */
L_1504282D:
    RECOMP_CALL(sub_15042CE7); /* 0x1504282D: call 0x15042ce7 */
    RECOMP_FLAGS_IN();
L_15042832:
    eax = esi; /* 0x15042832: mov eax, esi */
    ecx = MEM32(ebp + (-0xC)); /* 0x15042834: mov ecx, dword ptr [ebp - 0xc] */
    MEM32(FS_BASE + (0)) = ecx; /* 0x15042837: mov dword ptr fs:[0], ecx */
    ecx = POP32_VAL(esp); /* 0x1504283E: pop ecx */
    esi = POP32_VAL(esp); /* 0x1504283F: pop esi */
    esp = ebp; ebp = POP32_VAL(esp); /* 0x15042840: leave  */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x15042841: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_1504284F(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1504284Fu);

L_1504284F:
    edi = edi; /* 0x1504284F: mov edi, edi */
    PUSH32(esp, ebp); /* 0x15042851: push ebp */
    ebp = esp; /* 0x15042852: mov ebp, esp */
    PUSH32(esp, 0xFFFFFFFFu); /* 0x15042854: push -1 */
    PUSH32(esp, 0x150AF91Du); /* 0x15042856: push 0x150af91d */
    eax = MEM32(FS_BASE + (0)); /* 0x1504285B: mov eax, dword ptr fs:[0] */
    PUSH32(esp, eax); /* 0x15042861: push eax */
    PUSH32(esp, esi); /* 0x15042862: push esi */
    eax = MEM32(0x150BD340); /* 0x15042863: mov eax, dword ptr [0x150bd340] */
    _flag_a = (uint32_t)((eax ^ ebp)); _flag_b = (uint32_t)((eax ^ ebp));
    eax = eax ^ ebp; /* 0x15042868: xor eax, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, eax); /* 0x1504286A: push eax */
    eax = ebp + (-0xC); /* 0x1504286B: lea eax, [ebp - 0xc] */
    MEM32(FS_BASE + (0)) = eax; /* 0x1504286E: mov dword ptr fs:[0], eax */
    esi = ecx; /* 0x15042874: mov esi, ecx */
    eax = MEM32(ebp + 0x8); /* 0x15042876: mov eax, dword ptr [ebp + 8] */
    edx = MEM32(eax + 0x4); /* 0x15042879: mov edx, dword ptr [eax + 4] */
    eax = MEM32(eax); /* 0x1504287C: mov eax, dword ptr [eax] */
    /* test edx, edx */ /* 0x1504287E: test edx, edx */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(edx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_15042886; /* 0x15042880: je 0x15042886 */
L_15042882:
    _flag_a = (uint32_t)(MEM32(edx + 0x4)); _flag_b = (uint32_t)(1);
    MEM32(edx + 0x4) = MEM32(edx + 0x4) + 1; /* 0x15042882: lock inc dword ptr [edx + 4] */
    _flag_k = FK_INC;
L_15042886:
    ecx = MEM32(esi + 0x4); /* 0x15042886: mov ecx, dword ptr [esi + 4] */
    MEM32(esi + 0x4) = edx; /* 0x15042889: mov dword ptr [esi + 4], edx */
    MEM32(esi) = eax; /* 0x1504288C: mov dword ptr [esi], eax */
    MEM32(ebp + (-0x4)) = 1; /* 0x1504288E: mov dword ptr [ebp - 4], 1 */
    /* test ecx, ecx */ /* 0x15042895: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1504289E; /* 0x15042897: je 0x1504289e */
L_15042899:
    RECOMP_CALL(sub_15042CE7); /* 0x15042899: call 0x15042ce7 */
    RECOMP_FLAGS_IN();
L_1504289E:
    eax = esi; /* 0x1504289E: mov eax, esi */
    ecx = MEM32(ebp + (-0xC)); /* 0x150428A0: mov ecx, dword ptr [ebp - 0xc] */
    MEM32(FS_BASE + (0)) = ecx; /* 0x150428A3: mov dword ptr fs:[0], ecx */
    ecx = POP32_VAL(esp); /* 0x150428AA: pop ecx */
    esi = POP32_VAL(esp); /* 0x150428AB: pop esi */
    esp = ebp; ebp = POP32_VAL(esp); /* 0x150428AC: leave  */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x150428AD: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_150428C0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x150428C0u);

L_150428C0:
    edi = edi; /* 0x150428C0: mov edi, edi */
    PUSH32(esp, ebp); /* 0x150428C2: push ebp */
    ebp = esp; /* 0x150428C3: mov ebp, esp */
    /* test MEM8(ebp + 0x8), 1 */ /* 0x150428C5: test byte ptr [ebp + 8], 1 */
    _flag_a = (uint32_t)(MEM8(ebp + 0x8)) << 24; _flag_b = (uint32_t)(1) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    PUSH32(esp, esi); /* 0x150428C9: push esi */
    esi = ecx; /* 0x150428CA: mov esi, ecx */
    MEM32(esi) = 0x15001214u; /* 0x150428CC: mov dword ptr [esi], 0x15001214 */
    if (TEST_Z(_flag_a, _flag_b)) goto L_150428DB; /* 0x150428D2: je 0x150428db */
L_150428D4:
    PUSH32(esp, esi); /* 0x150428D4: push esi */
    RECOMP_CALL(sub_150460C0); /* 0x150428D5: call 0x150460c0 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x150428DA: pop ecx */
L_150428DB:
    eax = esi; /* 0x150428DB: mov eax, esi */
    esi = POP32_VAL(esp); /* 0x150428DD: pop esi */
    ebp = POP32_VAL(esp); /* 0x150428DE: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x150428DF: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_150428E8(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x150428E8u);

L_150428E8:
    edi = edi; /* 0x150428E8: mov edi, edi */
    PUSH32(esp, ebp); /* 0x150428EA: push ebp */
    ebp = esp; /* 0x150428EB: mov ebp, esp */
    PUSH32(esp, 0xFFFFFFFFu); /* 0x150428ED: push -1 */
    PUSH32(esp, 0x150AF940u); /* 0x150428EF: push 0x150af940 */
    eax = MEM32(FS_BASE + (0)); /* 0x150428F4: mov eax, dword ptr fs:[0] */
    PUSH32(esp, eax); /* 0x150428FA: push eax */
    PUSH32(esp, esi); /* 0x150428FB: push esi */
    eax = MEM32(0x150BD340); /* 0x150428FC: mov eax, dword ptr [0x150bd340] */
    _flag_a = (uint32_t)((eax ^ ebp)); _flag_b = (uint32_t)((eax ^ ebp));
    eax = eax ^ ebp; /* 0x15042901: xor eax, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, eax); /* 0x15042903: push eax */
    eax = ebp + (-0xC); /* 0x15042904: lea eax, [ebp - 0xc] */
    MEM32(FS_BASE + (0)) = eax; /* 0x15042907: mov dword ptr fs:[0], eax */
    esi = ecx; /* 0x1504290D: mov esi, ecx */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x4))); _flag_b = (uint32_t)(0);
    MEM32(ebp + (-0x4)) = MEM32(ebp + (-0x4)) & 0; /* 0x1504290F: and dword ptr [ebp - 4], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = MEM32(esi + 0x4); /* 0x15042913: mov ecx, dword ptr [esi + 4] */
    /* test ecx, ecx */ /* 0x15042916: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1504291F; /* 0x15042918: je 0x1504291f */
L_1504291A:
    RECOMP_CALL(sub_15042CE7); /* 0x1504291A: call 0x15042ce7 */
    RECOMP_FLAGS_IN();
L_1504291F:
    /* test MEM8(ebp + 0x8), 1 */ /* 0x1504291F: test byte ptr [ebp + 8], 1 */
    _flag_a = (uint32_t)(MEM8(ebp + 0x8)) << 24; _flag_b = (uint32_t)(1) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_1504292C; /* 0x15042923: je 0x1504292c */
L_15042925:
    PUSH32(esp, esi); /* 0x15042925: push esi */
    RECOMP_CALL(sub_150460C0); /* 0x15042926: call 0x150460c0 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1504292B: pop ecx */
L_1504292C:
    eax = esi; /* 0x1504292C: mov eax, esi */
    ecx = MEM32(ebp + (-0xC)); /* 0x1504292E: mov ecx, dword ptr [ebp - 0xc] */
    MEM32(FS_BASE + (0)) = ecx; /* 0x15042931: mov dword ptr fs:[0], ecx */
    ecx = POP32_VAL(esp); /* 0x15042938: pop ecx */
    esi = POP32_VAL(esp); /* 0x15042939: pop esi */
    esp = ebp; ebp = POP32_VAL(esp); /* 0x1504293A: leave  */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x1504293B: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_15042949(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x15042949u);

L_15042949:
    edi = edi; /* 0x15042949: mov edi, edi */
    PUSH32(esp, ebp); /* 0x1504294B: push ebp */
    ebp = esp; /* 0x1504294C: mov ebp, esp */
    PUSH32(esp, esi); /* 0x1504294E: push esi */
    esi = ecx; /* 0x1504294F: mov esi, ecx */
    RECOMP_CALL(sub_150426DD); /* 0x15042951: call 0x150426dd */
    RECOMP_FLAGS_IN();
    /* test MEM8(ebp + 0x8), 1 */ /* 0x15042956: test byte ptr [ebp + 8], 1 */
    _flag_a = (uint32_t)(MEM8(ebp + 0x8)) << 24; _flag_b = (uint32_t)(1) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_15042963; /* 0x1504295A: je 0x15042963 */
L_1504295C:
    PUSH32(esp, esi); /* 0x1504295C: push esi */
    RECOMP_CALL(sub_150460C0); /* 0x1504295D: call 0x150460c0 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x15042962: pop ecx */
L_15042963:
    eax = esi; /* 0x15042963: mov eax, esi */
    esi = POP32_VAL(esp); /* 0x15042965: pop esi */
    ebp = POP32_VAL(esp); /* 0x15042966: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x15042967: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_15042970(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x15042970u);

L_15042970:
    edi = edi; /* 0x15042970: mov edi, edi */
    PUSH32(esp, ebp); /* 0x15042972: push ebp */
    ebp = esp; /* 0x15042973: mov ebp, esp */
    PUSH32(esp, esi); /* 0x15042975: push esi */
    esi = ecx; /* 0x15042976: mov esi, ecx */
    MEM32(esi) = 0x1500120Cu; /* 0x15042978: mov dword ptr [esi], 0x1500120c */
    RECOMP_CALL(sub_15039B30); /* 0x1504297E: call 0x15039b30 */
    RECOMP_FLAGS_IN();
    /* test MEM8(ebp + 0x8), 1 */ /* 0x15042983: test byte ptr [ebp + 8], 1 */
    _flag_a = (uint32_t)(MEM8(ebp + 0x8)) << 24; _flag_b = (uint32_t)(1) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_15042990; /* 0x15042987: je 0x15042990 */
L_15042989:
    PUSH32(esp, esi); /* 0x15042989: push esi */
    RECOMP_CALL(sub_150460C0); /* 0x1504298A: call 0x150460c0 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1504298F: pop ecx */
L_15042990:
    eax = esi; /* 0x15042990: mov eax, esi */
    esi = POP32_VAL(esp); /* 0x15042992: pop esi */
    ebp = POP32_VAL(esp); /* 0x15042993: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x15042994: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_1504299D(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1504299Du);

L_1504299D:
    edi = edi; /* 0x1504299D: mov edi, edi */
    PUSH32(esp, ebp); /* 0x1504299F: push ebp */
    ebp = esp; /* 0x150429A0: mov ebp, esp */
    PUSH32(esp, esi); /* 0x150429A2: push esi */
    esi = MEM32(ebp + 0x8); /* 0x150429A3: mov esi, dword ptr [ebp + 8] */
    edx = ecx; /* 0x150429A6: mov edx, ecx */
    /* cmp edx, esi */ /* 0x150429A8: cmp edx, esi */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_150429C0; /* 0x150429AA: je 0x150429c0 */
L_150429AC:
    ecx = MEM32(edx + 0x4); /* 0x150429AC: mov ecx, dword ptr [edx + 4] */
    eax = MEM32(esi + 0x4); /* 0x150429AF: mov eax, dword ptr [esi + 4] */
    MEM32(edx + 0x4) = eax; /* 0x150429B2: mov dword ptr [edx + 4], eax */
    eax = MEM32(esi); /* 0x150429B5: mov eax, dword ptr [esi] */
    MEM32(esi + 0x4) = ecx; /* 0x150429B7: mov dword ptr [esi + 4], ecx */
    ecx = MEM32(edx); /* 0x150429BA: mov ecx, dword ptr [edx] */
    MEM32(edx) = eax; /* 0x150429BC: mov dword ptr [edx], eax */
    MEM32(esi) = ecx; /* 0x150429BE: mov dword ptr [esi], ecx */
L_150429C0:
    esi = POP32_VAL(esp); /* 0x150429C0: pop esi */
    ebp = POP32_VAL(esp); /* 0x150429C1: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x150429C2: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_15042A13(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x15042A13u);

L_15042A13:
    PUSH32(esp, 4); /* 0x15042A13: push 4 */
    eax = 0x150AF9A9u; /* 0x15042A15: mov eax, 0x150af9a9 */
    RECOMP_CALL(sub_15041ECF); /* 0x15042A1A: call 0x15041ecf */
    RECOMP_FLAGS_IN();
    esi = MEM32(ebp + 0x14); /* 0x15042A1F: mov esi, dword ptr [ebp + 0x14] */
    /* test MEM8(esi), 1 */ /* 0x15042A22: test byte ptr [esi], 1 */
    _flag_a = (uint32_t)(MEM8(esi)) << 24; _flag_b = (uint32_t)(1) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_15042A69; /* 0x15042A25: jne 0x15042a69 */
L_15042A27:
    /* cmp MEM32(esi + 0x18), 0 */ /* 0x15042A27: cmp dword ptr [esi + 0x18], 0 */
    _flag_a = (uint32_t)(MEM32(esi + 0x18)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_15042A69; /* 0x15042A2B: je 0x15042a69 */
L_15042A2D:
    _flag_a = (uint32_t)(MEM32(ebp + (-0x4))); _flag_b = (uint32_t)(0);
    MEM32(ebp + (-0x4)) = MEM32(ebp + (-0x4)) & 0; /* 0x15042A2D: and dword ptr [ebp - 4], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    eax = esi + 0x8; /* 0x15042A31: lea eax, [esi + 8] */
    /* test MEM8(esi), 4 */ /* 0x15042A34: test byte ptr [esi], 4 */
    _flag_a = (uint32_t)(MEM8(esi)) << 24; _flag_b = (uint32_t)(4) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    PUSH32(esp, eax); /* 0x15042A37: push eax */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x15042A38: push dword ptr [ebp + 0xc] */
    if (TEST_Z(_flag_a, _flag_b)) goto L_15042A54; /* 0x15042A3B: je 0x15042a54 */
L_15042A3D:
    RECOMP_CALL(sub_1503A070); /* 0x15042A3D: call 0x1503a070 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x15042A42: pop ecx */
    ecx = POP32_VAL(esp); /* 0x15042A43: pop ecx */
    PUSH32(esp, 1); /* 0x15042A44: push 1 */
    PUSH32(esp, eax); /* 0x15042A46: push eax */
    PUSH32(esp, MEM32(esi + 0x18)); /* 0x15042A47: push dword ptr [esi + 0x18] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x15042A4A: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_1503AB40); /* 0x15042A4D: call 0x1503ab40 */
    RECOMP_FLAGS_IN();
    goto L_15042A96; /* 0x15042A52: jmp 0x15042a96 */
L_15042A54:
    RECOMP_CALL(sub_1503A070); /* 0x15042A54: call 0x1503a070 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x15042A59: pop ecx */
    ecx = POP32_VAL(esp); /* 0x15042A5A: pop ecx */
    PUSH32(esp, eax); /* 0x15042A5B: push eax */
    PUSH32(esp, MEM32(esi + 0x18)); /* 0x15042A5C: push dword ptr [esi + 0x18] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x15042A5F: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_1503AB20); /* 0x15042A62: call 0x1503ab20 */
    RECOMP_FLAGS_IN();
    goto L_15042A96; /* 0x15042A67: jmp 0x15042a96 */
L_15042A69:
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x15042A69: push dword ptr [ebp + 0x10] */
    edi = MEM32(ebp + 0xC); /* 0x15042A6C: mov edi, dword ptr [ebp + 0xc] */
    PUSH32(esp, edi); /* 0x15042A6F: push edi */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x15042A70: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_1508DBF0); /* 0x15042A73: call 0x1508dbf0 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x15042A78: add esp, 0xc */
    _flag_k = FK_ADD;
    /* test MEM8(esi), 8 */ /* 0x15042A7B: test byte ptr [esi], 8 */
    _flag_a = (uint32_t)(MEM8(esi)) << 24; _flag_b = (uint32_t)(8) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_15042A96; /* 0x15042A7E: je 0x15042a96 */
L_15042A80:
    ecx = MEM32(edi); /* 0x15042A80: mov ecx, dword ptr [edi] */
    /* test ecx, ecx */ /* 0x15042A82: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_15042A96; /* 0x15042A84: je 0x15042a96 */
L_15042A86:
    eax = MEM32(ecx); /* 0x15042A86: mov eax, dword ptr [ecx] */
    PUSH32(esp, ecx); /* 0x15042A88: push ecx */
    esi = MEM32(eax + 0x4); /* 0x15042A89: mov esi, dword ptr [eax + 4] */
    ecx = esi; /* 0x15042A8C: mov ecx, esi */
    RECOMP_ICALL(MEM32(0x150C02B0)); /* 0x15042A8E: call dword ptr [0x150c02b0] */
    RECOMP_FLAGS_IN();
    RECOMP_ICALL(esi); /* 0x15042A94: call esi */
    RECOMP_FLAGS_IN();
L_15042A96:
    RECOMP_CALL(sub_15041E7C); /* 0x15042A96: call 0x15041e7c */
    RECOMP_FLAGS_IN();
    RECOMP_FLAGS_OUT(); esp += 20; { RECOMP_REGS_OUT(); return; } /* 0x15042A9B: ret 0x10 */
    RECOMP_REGS_OUT();
}

void sub_15042AAF(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x15042AAFu);

L_15042AAF:
    PUSH32(esp, 0x44u); /* 0x15042AAF: push 0x44 */
    eax = 0x150AFA04u; /* 0x15042AB1: mov eax, 0x150afa04 */
    RECOMP_CALL(sub_15041ECF); /* 0x15042AB6: call 0x15041ecf */
    RECOMP_FLAGS_IN();
    eax = MEM32(ebp + 0x10); /* 0x15042ABB: mov eax, dword ptr [ebp + 0x10] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edi = 0; /* 0x15042ABE: xor edi, edi */
    _cf = 0;
    _flag_k = FK_TEST;
    edx = MEM32(ebp + 0xC); /* 0x15042AC0: mov edx, dword ptr [ebp + 0xc] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ebx = 0; /* 0x15042AC3: xor ebx, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x18)) = edi; /* 0x15042AC5: mov dword ptr [ebp - 0x18], edi */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(1);
    ebx = ebx + 1; /* 0x15042AC8: inc ebx */
    _flag_k = FK_INC;
    _xmm[0] = xmm_ld(0x150048E0); /* 0x15042AC9: movaps xmm0, xmmword ptr [0x150048e0] */
    ecx = 0x19930520u; /* 0x15042AD0: mov ecx, 0x19930520 */
    MEM32(ebp + (-0x4)) = ebx; /* 0x15042AD5: mov dword ptr [ebp - 4], ebx */
    MEM32(ebp + (-0x50)) = 0xE06D7363u; /* 0x15042AD8: mov dword ptr [ebp - 0x50], 0xe06d7363 */
    MEM32(ebp + (-0x3C)) = ecx; /* 0x15042ADF: mov dword ptr [ebp - 0x3c], ecx */
    MEM32(ebp + (-0x38)) = edx; /* 0x15042AE2: mov dword ptr [ebp - 0x38], edx */
    xmm_st(ebp + (-0x4C), _xmm[0]); /* 0x15042AE5: movups xmmword ptr [ebp - 0x4c], xmm0 */
    /* test eax, eax */ /* 0x15042AE9: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_15042AFA; /* 0x15042AEB: je 0x15042afa */
L_15042AED:
    /* test MEM8(eax), 0x10u */ /* 0x15042AED: test byte ptr [eax], 0x10 */
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(0x10u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_15042AFA; /* 0x15042AF0: je 0x15042afa */
L_15042AF2:
    eax = MEM32(edx); /* 0x15042AF2: mov eax, dword ptr [edx] */
    eax = MEM32(eax + (-0x4)); /* 0x15042AF4: mov eax, dword ptr [eax - 4] */
    eax = MEM32(eax + 0x18); /* 0x15042AF7: mov eax, dword ptr [eax + 0x18] */
L_15042AFA:
    MEM32(ebp + (-0x34)) = eax; /* 0x15042AFA: mov dword ptr [ebp - 0x34], eax */
    /* test eax, eax */ /* 0x15042AFD: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_15042B0F; /* 0x15042AFF: je 0x15042b0f */
L_15042B01:
    /* test MEM8(eax), 8 */ /* 0x15042B01: test byte ptr [eax], 8 */
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(8) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    eax = 0x01994000u; /* 0x15042B04: mov eax, 0x1994000 */
    if (TEST_NZ(_flag_a, _flag_b)) { ecx = eax; } /* 0x15042B09: cmovne ecx, eax */
    MEM32(ebp + (-0x3C)) = ecx; /* 0x15042B0C: mov dword ptr [ebp - 0x3c], ecx */
L_15042B0F:
    MEM32(ebp + (-0x24)) = edi; /* 0x15042B0F: mov dword ptr [ebp - 0x24], edi */
    MEM32(ebp + (-0x20)) = edi; /* 0x15042B12: mov dword ptr [ebp - 0x20], edi */
    /* cmp MEM8(ebp + 0x14), 0 */ /* 0x15042B15: cmp byte ptr [ebp + 0x14], 0 */
    _flag_a = (uint32_t)(MEM8(ebp + 0x14)) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    MEM8(ebp + (-0x4)) = (uint8_t)(2); /* 0x15042B19: mov byte ptr [ebp - 4], 2 */
    if (CMP_EQ(_flag_a, _flag_b)) goto L_15042B51; /* 0x15042B1D: je 0x15042b51 */
L_15042B1F:
    PUSH32(esp, 0x54u); /* 0x15042B1F: push 0x54 */
    RECOMP_CALL(sub_15046090); /* 0x15042B21: call 0x15046090 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x15042B26: pop ecx */
    MEM32(ebp + (-0x1C)) = eax; /* 0x15042B27: mov dword ptr [ebp - 0x1c], eax */
    MEM8(ebp + (-0x4)) = (uint8_t)(3); /* 0x15042B2A: mov byte ptr [ebp - 4], 3 */
    /* test eax, eax */ /* 0x15042B2E: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_15042B40; /* 0x15042B30: je 0x15042b40 */
L_15042B32:
    PUSH32(esp, ebx); /* 0x15042B32: push ebx */
    ecx = ebp + (-0x50); /* 0x15042B33: lea ecx, [ebp - 0x50] */
    PUSH32(esp, ecx); /* 0x15042B36: push ecx */
    ecx = eax; /* 0x15042B37: mov ecx, eax */
    RECOMP_CALL(sub_1504248C); /* 0x15042B39: call 0x1504248c */
    RECOMP_FLAGS_IN();
    goto L_15042B42; /* 0x15042B3E: jmp 0x15042b42 */
L_15042B40:
    eax = edi; /* 0x15042B40: mov eax, edi */
L_15042B42:
    PUSH32(esp, eax); /* 0x15042B42: push eax */
    ecx = ebp + (-0x24); /* 0x15042B43: lea ecx, [ebp - 0x24] */
    MEM8(ebp + (-0x4)) = (uint8_t)(2); /* 0x15042B46: mov byte ptr [ebp - 4], 2 */
    RECOMP_CALL(sub_150423EA); /* 0x15042B4A: call 0x150423ea */
    RECOMP_FLAGS_IN();
    goto L_15042B75; /* 0x15042B4F: jmp 0x15042b75 */
L_15042B51:
    PUSH32(esp, ebx); /* 0x15042B51: push ebx */
    ecx = ebp + (-0x11); /* 0x15042B52: lea ecx, [ebp - 0x11] */
    RECOMP_CALL(sub_15043016); /* 0x15042B55: call 0x15043016 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, edi); /* 0x15042B5A: push edi */
    ecx = ebp + (-0x50); /* 0x15042B5B: lea ecx, [ebp - 0x50] */
    PUSH32(esp, ecx); /* 0x15042B5E: push ecx */
    ecx = eax; /* 0x15042B5F: mov ecx, eax */
    RECOMP_CALL(sub_1504248C); /* 0x15042B61: call 0x1504248c */
    RECOMP_FLAGS_IN();
    PUSH32(esp, ecx); /* 0x15042B66: push ecx */
    PUSH32(esp, 0x15042D50u); /* 0x15042B67: push 0x15042d50 */
    PUSH32(esp, eax); /* 0x15042B6C: push eax */
    ecx = ebp + (-0x24); /* 0x15042B6D: lea ecx, [ebp - 0x24] */
    RECOMP_CALL(sub_15042439); /* 0x15042B70: call 0x15042439 */
    RECOMP_FLAGS_IN();
L_15042B75:
    esi = MEM32(ebp + 0x8); /* 0x15042B75: mov esi, dword ptr [ebp + 8] */
    eax = ebp + (-0x24); /* 0x15042B78: lea eax, [ebp - 0x24] */
    PUSH32(esp, eax); /* 0x15042B7B: push eax */
    ecx = esi; /* 0x15042B7C: mov ecx, esi */
    MEM32(esi) = edi; /* 0x15042B7E: mov dword ptr [esi], edi */
    MEM32(esi + 0x4) = edi; /* 0x15042B80: mov dword ptr [esi + 4], edi */
    RECOMP_CALL(sub_1504299D); /* 0x15042B83: call 0x1504299d */
    RECOMP_FLAGS_IN();
    MEM32(ebp + (-0x18)) = ebx; /* 0x15042B88: mov dword ptr [ebp - 0x18], ebx */
    ecx = MEM32(ebp + (-0x20)); /* 0x15042B8B: mov ecx, dword ptr [ebp - 0x20] */
    MEM8(ebp + (-0x4)) = (uint8_t)(4); /* 0x15042B8E: mov byte ptr [ebp - 4], 4 */
    /* test ecx, ecx */ /* 0x15042B92: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_15042B9B; /* 0x15042B94: je 0x15042b9b */
L_15042B96:
    RECOMP_CALL(sub_15042CE7); /* 0x15042B96: call 0x15042ce7 */
    RECOMP_FLAGS_IN();
L_15042B9B:
    eax = esi; /* 0x15042B9B: mov eax, esi */
    RECOMP_CALL(sub_15041E7C); /* 0x15042B9D: call 0x15041e7c */
    RECOMP_FLAGS_IN();
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x15042BA2: ret  */
    RECOMP_REGS_OUT();
}

void sub_15042BD6(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x15042BD6u);

L_15042BD6:
    PUSH32(esp, 0x1Cu); /* 0x15042BD6: push 0x1c */
    eax = 0x150AFA57u; /* 0x15042BD8: mov eax, 0x150afa57 */
    RECOMP_CALL(sub_15041ECF); /* 0x15042BDD: call 0x15041ecf */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ebx = 0; /* 0x15042BE2: xor ebx, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edi = 0; /* 0x15042BE4: xor edi, edi */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x14)) = edi; /* 0x15042BE6: mov dword ptr [ebp - 0x14], edi */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(1);
    ebx = ebx + 1; /* 0x15042BE9: inc ebx */
    _flag_k = FK_INC;
    MEM32(ebp + (-0x4)) = ebx; /* 0x15042BEA: mov dword ptr [ebp - 4], ebx */
    RECOMP_CALL(sub_15068840); /* 0x15042BED: call 0x15068840 */
    RECOMP_FLAGS_IN();
    /* cmp MEM32(eax + 0x88), edi */ /* 0x15042BF2: cmp dword ptr [eax + 0x88], edi */
    _flag_a = (uint32_t)(MEM32(eax + 0x88)); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_15042CCD; /* 0x15042BF8: je 0x15042ccd */
L_15042BFE:
    RECOMP_CALL(sub_15068840); /* 0x15042BFE: call 0x15068840 */
    RECOMP_FLAGS_IN();
    /* cmp MEM32(eax + 0x90), edi */ /* 0x15042C03: cmp dword ptr [eax + 0x90], edi */
    _flag_a = (uint32_t)(MEM32(eax + 0x90)); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_15042CCD; /* 0x15042C09: jne 0x15042ccd */
L_15042C0F:
    RECOMP_CALL(sub_15068840); /* 0x15042C0F: call 0x15068840 */
    RECOMP_FLAGS_IN();
    eax = MEM32(eax + 0x88); /* 0x15042C14: mov eax, dword ptr [eax + 0x88] */
    /* cmp MEM32(eax), 0xE0434F4Du */ /* 0x15042C1A: cmp dword ptr [eax], 0xe0434f4d */
    _flag_a = (uint32_t)(MEM32(eax)); _flag_b = (uint32_t)(0xE0434F4Du);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_15042CCD; /* 0x15042C20: je 0x15042ccd */
L_15042C26:
    RECOMP_CALL(sub_15068840); /* 0x15042C26: call 0x15068840 */
    RECOMP_FLAGS_IN();
    eax = MEM32(eax + 0x88); /* 0x15042C2B: mov eax, dword ptr [eax + 0x88] */
    /* cmp MEM32(eax), 0xE0434352u */ /* 0x15042C31: cmp dword ptr [eax], 0xe0434352 */
    _flag_a = (uint32_t)(MEM32(eax)); _flag_b = (uint32_t)(0xE0434352u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_15042CCD; /* 0x15042C37: je 0x15042ccd */
L_15042C3D:
    PUSH32(esp, 0x54u); /* 0x15042C3D: push 0x54 */
    RECOMP_CALL(sub_15046090); /* 0x15042C3F: call 0x15046090 */
    RECOMP_FLAGS_IN();
    esi = eax; /* 0x15042C44: mov esi, eax */
    ecx = POP32_VAL(esp); /* 0x15042C46: pop ecx */
    MEM32(ebp + (-0x18)) = esi; /* 0x15042C47: mov dword ptr [ebp - 0x18], esi */
    MEM8(ebp + (-0x4)) = (uint8_t)(2); /* 0x15042C4A: mov byte ptr [ebp - 4], 2 */
    /* test esi, esi */ /* 0x15042C4E: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_15042C68; /* 0x15042C50: je 0x15042c68 */
L_15042C52:
    RECOMP_CALL(sub_15068840); /* 0x15042C52: call 0x15068840 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, ebx); /* 0x15042C57: push ebx */
    ecx = esi; /* 0x15042C58: mov ecx, esi */
    eax = MEM32(eax + 0x88); /* 0x15042C5A: mov eax, dword ptr [eax + 0x88] */
    PUSH32(esp, eax); /* 0x15042C60: push eax */
    RECOMP_CALL(sub_1504248C); /* 0x15042C61: call 0x1504248c */
    RECOMP_FLAGS_IN();
    goto L_15042C6A; /* 0x15042C66: jmp 0x15042c6a */
L_15042C68:
    eax = edi; /* 0x15042C68: mov eax, edi */
L_15042C6A:
    PUSH32(esp, eax); /* 0x15042C6A: push eax */
    ecx = ebp + (-0x1C); /* 0x15042C6B: lea ecx, [ebp - 0x1c] */
    MEM8(ebp + (-0x4)) = (uint8_t)(LO8(ebx)); /* 0x15042C6E: mov byte ptr [ebp - 4], bl */
    MEM32(ebp + (-0x1C)) = edi; /* 0x15042C71: mov dword ptr [ebp - 0x1c], edi */
    MEM32(ebp + (-0x18)) = edi; /* 0x15042C74: mov dword ptr [ebp - 0x18], edi */
    RECOMP_CALL(sub_15042310); /* 0x15042C77: call 0x15042310 */
    RECOMP_FLAGS_IN();
    esi = MEM32(ebp + 0x8); /* 0x15042C7C: mov esi, dword ptr [ebp + 8] */
    eax = ebp + (-0x1C); /* 0x15042C7F: lea eax, [ebp - 0x1c] */
    PUSH32(esp, eax); /* 0x15042C82: push eax */
    ecx = esi; /* 0x15042C83: mov ecx, esi */
    MEM32(esi) = edi; /* 0x15042C85: mov dword ptr [esi], edi */
    MEM32(esi + 0x4) = edi; /* 0x15042C87: mov dword ptr [esi + 4], edi */
    RECOMP_CALL(sub_1504299D); /* 0x15042C8A: call 0x1504299d */
    RECOMP_FLAGS_IN();
    MEM32(ebp + (-0x14)) = ebx; /* 0x15042C8F: mov dword ptr [ebp - 0x14], ebx */
    ecx = MEM32(ebp + (-0x18)); /* 0x15042C92: mov ecx, dword ptr [ebp - 0x18] */
    MEM8(ebp + (-0x4)) = (uint8_t)(3); /* 0x15042C95: mov byte ptr [ebp - 4], 3 */
    /* test ecx, ecx */ /* 0x15042C99: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_15042CA2; /* 0x15042C9B: je 0x15042ca2 */
L_15042C9D:
    RECOMP_CALL(sub_15042CE7); /* 0x15042C9D: call 0x15042ce7 */
    RECOMP_FLAGS_IN();
L_15042CA2:
    eax = esi; /* 0x15042CA2: mov eax, esi */
    goto L_15042CD5; /* 0x15042CA4: jmp 0x15042cd5 */
L_15042CCD:
    eax = MEM32(ebp + 0x8); /* 0x15042CCD: mov eax, dword ptr [ebp + 8] */
    MEM32(eax) = edi; /* 0x15042CD0: mov dword ptr [eax], edi */
    MEM32(eax + 0x4) = edi; /* 0x15042CD2: mov dword ptr [eax + 4], edi */
L_15042CD5:
    RECOMP_CALL(sub_15041E7C); /* 0x15042CD5: call 0x15041e7c */
    RECOMP_FLAGS_IN();
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x15042CDA: ret  */
    RECOMP_REGS_OUT();
}

void sub_15042CE7(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x15042CE7u);

L_15042CE7:
    edi = edi; /* 0x15042CE7: mov edi, edi */
    PUSH32(esp, edi); /* 0x15042CE9: push edi */
    edi = ecx; /* 0x15042CEA: mov edi, ecx */
    _flag_a = (uint32_t)((eax | 0xFFFFFFFFu)); _flag_b = (uint32_t)((eax | 0xFFFFFFFFu));
    eax = eax | 0xFFFFFFFFu; /* 0x15042CEC: or eax, 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(MEM32(edi + 0x4)); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    { uint32_t _old = MEM32(edi + 0x4), _sum = MEM32(edi + 0x4) + eax; eax = _old; MEM32(edi + 0x4) = _sum; } /* 0x15042CEF: lock xadd dword ptr [edi + 4], eax */
    _flag_k = FK_ADD;
    if (/* add result */ recomp_cond(_flag_k, _flag_a, _flag_b, CC_NE)) goto L_15042D10; /* 0x15042CF4: jne 0x15042d10 */
L_15042CF6:
    eax = MEM32(edi); /* 0x15042CF6: mov eax, dword ptr [edi] */
    PUSH32(esp, esi); /* 0x15042CF8: push esi */
    esi = MEM32(eax); /* 0x15042CF9: mov esi, dword ptr [eax] */
    ecx = esi; /* 0x15042CFB: mov ecx, esi */
    RECOMP_ICALL(MEM32(0x150C02B0)); /* 0x15042CFD: call dword ptr [0x150c02b0] */
    RECOMP_FLAGS_IN();
    ecx = edi; /* 0x15042D03: mov ecx, edi */
    RECOMP_ICALL(esi); /* 0x15042D05: call esi */
    RECOMP_FLAGS_IN();
    esi = POP32_VAL(esp); /* 0x15042D07: pop esi */
    ecx = edi; /* 0x15042D08: mov ecx, edi */
    edi = POP32_VAL(esp); /* 0x15042D0A: pop edi */
    goto L_15042D18; /* 0x15042D0B: jmp 0x15042d18 */
L_15042D10:
    edi = POP32_VAL(esp); /* 0x15042D10: pop edi */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x15042D11: ret  */
L_15042D18:
    edi = edi; /* 0x15042D18: mov edi, edi */
    PUSH32(esp, edi); /* 0x15042D1A: push edi */
    edi = ecx; /* 0x15042D1B: mov edi, ecx */
    _flag_a = (uint32_t)((eax | 0xFFFFFFFFu)); _flag_b = (uint32_t)((eax | 0xFFFFFFFFu));
    eax = eax | 0xFFFFFFFFu; /* 0x15042D1D: or eax, 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(MEM32(edi + 0x8)); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    { uint32_t _old = MEM32(edi + 0x8), _sum = MEM32(edi + 0x8) + eax; eax = _old; MEM32(edi + 0x8) = _sum; } /* 0x15042D20: lock xadd dword ptr [edi + 8], eax */
    _flag_k = FK_ADD;
    if (/* add result */ recomp_cond(_flag_k, _flag_a, _flag_b, CC_NE)) goto L_15042D3A; /* 0x15042D25: jne 0x15042d3a */
L_15042D27:
    eax = MEM32(edi); /* 0x15042D27: mov eax, dword ptr [edi] */
    PUSH32(esp, esi); /* 0x15042D29: push esi */
    esi = MEM32(eax + 0x4); /* 0x15042D2A: mov esi, dword ptr [eax + 4] */
    ecx = esi; /* 0x15042D2D: mov ecx, esi */
    RECOMP_ICALL(MEM32(0x150C02B0)); /* 0x15042D2F: call dword ptr [0x150c02b0] */
    RECOMP_FLAGS_IN();
    ecx = edi; /* 0x15042D35: mov ecx, edi */
    RECOMP_ICALL(esi); /* 0x15042D37: call esi */
    RECOMP_FLAGS_IN();
    esi = POP32_VAL(esp); /* 0x15042D39: pop esi */
L_15042D3A:
    edi = POP32_VAL(esp); /* 0x15042D3A: pop edi */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x15042D3B: ret  */
    RECOMP_REGS_OUT();
}

void sub_15042D50(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x15042D50u);

L_15042D50:
    edi = edi; /* 0x15042D50: mov edi, edi */
    PUSH32(esp, ebp); /* 0x15042D52: push ebp */
    ebp = esp; /* 0x15042D53: mov ebp, esp */
    ecx = MEM32(ebp + 0x8); /* 0x15042D55: mov ecx, dword ptr [ebp + 8] */
    RECOMP_CALL(sub_150426DD); /* 0x15042D58: call 0x150426dd */
    RECOMP_FLAGS_IN();
    ebp = POP32_VAL(esp); /* 0x15042D5D: pop ebp */
    goto L_15048840; /* 0x15042D5E: jmp 0x15048840 */
L_15048840:
    PUSH32(esp, 0x18u); /* 0x15048840: push 0x18 */
    PUSH32(esp, 0x150B0410u); /* 0x15048842: push 0x150b0410 */
    RECOMP_CALL(sub_1505E988); /* 0x15048847: call 0x1505e988 */
    RECOMP_FLAGS_IN();
    esi = MEM32(ebp + 0x8); /* 0x1504884C: mov esi, dword ptr [ebp + 8] */
    /* test esi, esi */ /* 0x1504884F: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_150488C3; /* 0x15048851: je 0x150488c3 */
L_15048853:
    eax = MEM32(0x150BEBA4); /* 0x15048853: mov eax, dword ptr [0x150beba4] */
    /* cmp eax, 3 */ /* 0x15048858: cmp eax, 3 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(3);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_150488E4; /* 0x1504885B: jne 0x150488e4 */
L_15048861:
    _flag_a = (uint32_t)(MEM32(ebp + (-0x1C))); _flag_b = (uint32_t)(0);
    MEM32(ebp + (-0x1C)) = MEM32(ebp + (-0x1C)) & 0; /* 0x15048861: and dword ptr [ebp - 0x1c], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, 4); /* 0x15048865: push 4 */
    RECOMP_CALL(sub_15068D80); /* 0x15048867: call 0x15068d80 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1504886C: pop ecx */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x4))); _flag_b = (uint32_t)(0);
    MEM32(ebp + (-0x4)) = MEM32(ebp + (-0x4)) & 0; /* 0x1504886D: and dword ptr [ebp - 4], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, esi); /* 0x15048871: push esi */
    RECOMP_CALL(sub_150475FD); /* 0x15048872: call 0x150475fd */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x15048877: pop ecx */
    edi = eax; /* 0x15048878: mov edi, eax */
    MEM32(ebp + (-0x1C)) = edi; /* 0x1504887A: mov dword ptr [ebp - 0x1c], edi */
    /* test edi, edi */ /* 0x1504887D: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1504888A; /* 0x1504887F: je 0x1504888a */
L_15048881:
    PUSH32(esp, esi); /* 0x15048881: push esi */
    PUSH32(esp, edi); /* 0x15048882: push edi */
    RECOMP_CALL(sub_15047635); /* 0x15048883: call 0x15047635 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x15048888: pop ecx */
    ecx = POP32_VAL(esp); /* 0x15048889: pop ecx */
L_1504888A:
    MEM32(ebp + (-0x4)) = 0xFFFFFFFEu; /* 0x1504888A: mov dword ptr [ebp - 4], 0xfffffffe */
    RECOMP_CALL(sub_150488D9); /* 0x15048891: call 0x150488d9 */
    RECOMP_FLAGS_IN();
L_15048896:
    /* test edi, edi */ /* 0x15048896: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_150488C3; /* 0x15048898: jne 0x150488c3 */
L_1504889A:
    PUSH32(esp, esi); /* 0x1504889A: push esi */
    PUSH32(esp, 0); /* 0x1504889B: push 0 */
    PUSH32(esp, MEM32(0x150BDB68)); /* 0x1504889D: push dword ptr [0x150bdb68] */
    RECOMP_ICALL(MEM32(0x150C0154)); /* 0x150488A3: call dword ptr [0x150c0154] */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x150488A9: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_150488C3; /* 0x150488AB: jne 0x150488c3 */
L_150488AD:
    RECOMP_CALL(sub_15036430); /* 0x150488AD: call 0x15036430 */
    RECOMP_FLAGS_IN();
    esi = eax; /* 0x150488B2: mov esi, eax */
    RECOMP_ICALL(MEM32(0x150C006C)); /* 0x150488B4: call dword ptr [0x150c006c] */
    RECOMP_FLAGS_IN();
    PUSH32(esp, eax); /* 0x150488BA: push eax */
    RECOMP_CALL(sub_150364C5); /* 0x150488BB: call 0x150364c5 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x150488C0: pop ecx */
    MEM32(esi) = eax; /* 0x150488C1: mov dword ptr [esi], eax */
L_150488C3:
    ecx = MEM32(ebp + (-0x10)); /* 0x150488C3: mov ecx, dword ptr [ebp - 0x10] */
    MEM32(FS_BASE + (0)) = ecx; /* 0x150488C6: mov dword ptr fs:[0], ecx */
    ecx = POP32_VAL(esp); /* 0x150488CD: pop ecx */
    edi = POP32_VAL(esp); /* 0x150488CE: pop edi */
    esi = POP32_VAL(esp); /* 0x150488CF: pop esi */
    ebx = POP32_VAL(esp); /* 0x150488D0: pop ebx */
    esp = ebp; ebp = POP32_VAL(esp); /* 0x150488D1: leave  */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x150488D2: ret  */
L_150488E4:
    /* cmp eax, 2 */ /* 0x150488E4: cmp eax, 2 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_NE(_flag_a, _flag_b)) goto L_1504889A; /* 0x150488E7: jne 0x1504889a */
L_150488E9:
    _flag_a = (uint32_t)(MEM32(ebp + (-0x20))); _flag_b = (uint32_t)(0);
    MEM32(ebp + (-0x20)) = MEM32(ebp + (-0x20)) & 0; /* 0x150488E9: and dword ptr [ebp - 0x20], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, 4); /* 0x150488ED: push 4 */
    RECOMP_CALL(sub_15068D80); /* 0x150488EF: call 0x15068d80 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x150488F4: pop ecx */
    MEM32(ebp + (-0x4)) = 1; /* 0x150488F5: mov dword ptr [ebp - 4], 1 */
    eax = ebp + (-0x24); /* 0x150488FC: lea eax, [ebp - 0x24] */
    PUSH32(esp, eax); /* 0x150488FF: push eax */
    eax = ebp + (-0x28); /* 0x15048900: lea eax, [ebp - 0x28] */
    PUSH32(esp, eax); /* 0x15048903: push eax */
    PUSH32(esp, esi); /* 0x15048904: push esi */
    RECOMP_CALL(sub_15046C73); /* 0x15048905: call 0x15046c73 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x1504890A: add esp, 0xc */
    _flag_k = FK_ADD;
    edi = eax; /* 0x1504890D: mov edi, eax */
    MEM32(ebp + (-0x20)) = edi; /* 0x1504890F: mov dword ptr [ebp - 0x20], edi */
    /* test edi, edi */ /* 0x15048912: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_15048925; /* 0x15048914: je 0x15048925 */
L_15048916:
    PUSH32(esp, edi); /* 0x15048916: push edi */
    PUSH32(esp, MEM32(ebp + (-0x24))); /* 0x15048917: push dword ptr [ebp - 0x24] */
    PUSH32(esp, MEM32(ebp + (-0x28))); /* 0x1504891A: push dword ptr [ebp - 0x28] */
    RECOMP_CALL(sub_15046CE4); /* 0x1504891D: call 0x15046ce4 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x15048922: add esp, 0xc */
    _flag_k = FK_ADD;
L_15048925:
    MEM32(ebp + (-0x4)) = 0xFFFFFFFEu; /* 0x15048925: mov dword ptr [ebp - 4], 0xfffffffe */
    RECOMP_CALL(sub_1504893C); /* 0x1504892C: call 0x1504893c */
    RECOMP_FLAGS_IN();
    RECOMP_BACKEDGE();
    goto L_15048896; /* 0x15048931: jmp 0x15048896 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    RECOMP_REGS_OUT();
}

void sub_15042DA0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x15042DA0u);

L_15042DA0:
    edi = edi; /* 0x15042DA0: mov edi, edi */
    PUSH32(esp, ebp); /* 0x15042DA2: push ebp */
    ebp = esp; /* 0x15042DA3: mov ebp, esp */
    PUSH32(esp, ecx); /* 0x15042DA5: push ecx */
    PUSH32(esp, esi); /* 0x15042DA6: push esi */
    esi = ecx; /* 0x15042DA7: mov esi, ecx */
    ecx = ebp + (-0x1); /* 0x15042DA9: lea ecx, [ebp - 1] */
    PUSH32(esp, esi); /* 0x15042DAC: push esi */
    RECOMP_CALL(sub_1504306F); /* 0x15042DAD: call 0x1504306f */
    RECOMP_FLAGS_IN();
    PUSH32(esp, esi); /* 0x15042DB2: push esi */
    RECOMP_CALL(sub_15048840); /* 0x15042DB3: call 0x15048840 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x15042DB8: pop ecx */
    esi = POP32_VAL(esp); /* 0x15042DB9: pop esi */
    esp = ebp; ebp = POP32_VAL(esp); /* 0x15042DBA: leave  */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x15042DBB: ret  */
    RECOMP_REGS_OUT();
}

void sub_15042E10(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x15042E10u);

L_15042E10:
    edi = edi; /* 0x15042E10: mov edi, edi */
    PUSH32(esp, ebp); /* 0x15042E12: push ebp */
    ebp = esp; /* 0x15042E13: mov ebp, esp */
    PUSH32(esp, esi); /* 0x15042E15: push esi */
    esi = ecx; /* 0x15042E16: mov esi, ecx */
    ecx = MEM32(ebp + 0x8); /* 0x15042E18: mov ecx, dword ptr [ebp + 8] */
    PUSH32(esp, 0x150BCD60u); /* 0x15042E1B: push 0x150bcd60 */
    RECOMP_CALL(sub_15041F20); /* 0x15042E20: call 0x15041f20 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(eax);
    _cf = (eax) != 0;
    eax = (uint32_t)(-(int32_t)eax); /* 0x15042E25: neg eax */
    _flag_k = FK_CMP;
    ecx = esi + 0x10; /* 0x15042E27: lea ecx, [esi + 0x10] */
    esi = POP32_VAL(esp); /* 0x15042E2A: pop esi */
    { uint32_t _sa = eax, _sb = eax, _sc = (uint32_t)CMP_B(_flag_a, _flag_b); /* 0x15042E2B: sbb eax, eax */
      eax = _sc ? 0xFFFFFFFFu : 0;
      _flag_a = recomp_flags_sbb(_sa, _sb, _sc); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ecx);
    eax = eax & ecx; /* 0x15042E2D: and eax, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    ebp = POP32_VAL(esp); /* 0x15042E2F: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x15042E30: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_15042E40(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x15042E40u);

L_15042E40:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x15042E40: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x15042E42: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_15042E4B(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x15042E4Bu);

L_15042E4B:
    PUSH32(esp, 0x10u); /* 0x15042E4B: push 0x10 */
    eax = 0x150AFA87u; /* 0x15042E4D: mov eax, 0x150afa87 */
    RECOMP_CALL(sub_15041E96); /* 0x15042E52: call 0x15041e96 */
    RECOMP_FLAGS_IN();
    ecx = ebp + (-0x1C); /* 0x15042E57: lea ecx, [ebp - 0x1c] */
    RECOMP_CALL(sub_150425D7); /* 0x15042E5A: call 0x150425d7 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(MEM32(ebp + (-0x4))); _flag_b = (uint32_t)(0);
    MEM32(ebp + (-0x4)) = MEM32(ebp + (-0x4)) & 0; /* 0x15042E5F: and dword ptr [ebp - 4], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    eax = ebp + (-0x1C); /* 0x15042E63: lea eax, [ebp - 0x1c] */
    PUSH32(esp, 0); /* 0x15042E66: push 0 */
    PUSH32(esp, 0x150B02C0u); /* 0x15042E68: push 0x150b02c0 */
    PUSH32(esp, eax); /* 0x15042E6D: push eax */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x15042E6E: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_15042AAF); /* 0x15042E71: call 0x15042aaf */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x10u; /* 0x15042E76: add esp, 0x10 */
    _flag_k = FK_ADD;
    MEM32(ebp + (-0x1C)) = 0x1500120Cu; /* 0x15042E79: mov dword ptr [ebp - 0x1c], 0x1500120c */
    ecx = ebp + (-0x1C); /* 0x15042E80: lea ecx, [ebp - 0x1c] */
    RECOMP_CALL(sub_15039B30); /* 0x15042E83: call 0x15039b30 */
    RECOMP_FLAGS_IN();
    eax = MEM32(ebp + 0x8); /* 0x15042E88: mov eax, dword ptr [ebp + 8] */
    RECOMP_CALL(sub_15041E7C); /* 0x15042E8B: call 0x15041e7c */
    RECOMP_FLAGS_IN();
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x15042E90: ret  */
    RECOMP_REGS_OUT();
}

void sub_15042E97(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x15042E97u);

L_15042E97:
    edi = edi; /* 0x15042E97: mov edi, edi */
    PUSH32(esp, ebp); /* 0x15042E99: push ebp */
    ebp = esp; /* 0x15042E9A: mov ebp, esp */
    PUSH32(esp, esi); /* 0x15042E9C: push esi */
    esi = ecx; /* 0x15042E9D: mov esi, ecx */
    ecx = MEM32(esi + 0x4); /* 0x15042E9F: mov ecx, dword ptr [esi + 4] */
    /* test ecx, ecx */ /* 0x15042EA2: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_15042EAB; /* 0x15042EA4: je 0x15042eab */
L_15042EA6:
    RECOMP_CALL(sub_15042CE7); /* 0x15042EA6: call 0x15042ce7 */
    RECOMP_FLAGS_IN();
L_15042EAB:
    eax = MEM32(ebp + 0xC); /* 0x15042EAB: mov eax, dword ptr [ebp + 0xc] */
    MEM32(esi + 0x4) = eax; /* 0x15042EAE: mov dword ptr [esi + 4], eax */
    eax = MEM32(ebp + 0x8); /* 0x15042EB1: mov eax, dword ptr [ebp + 8] */
    MEM32(esi) = eax; /* 0x15042EB4: mov dword ptr [esi], eax */
    esi = POP32_VAL(esp); /* 0x15042EB6: pop esi */
    ebp = POP32_VAL(esp); /* 0x15042EB7: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 12; { RECOMP_REGS_OUT(); return; } /* 0x15042EB8: ret 8 */
    RECOMP_REGS_OUT();
}

void sub_15042EC1(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x15042EC1u);

L_15042EC1:
    edi = edi; /* 0x15042EC1: mov edi, edi */
    PUSH32(esp, ebp); /* 0x15042EC3: push ebp */
    ebp = esp; /* 0x15042EC4: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x60u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x60u; /* 0x15042EC6: sub esp, 0x60 */
    _flag_k = FK_CMP;
    eax = MEM32(0x150BD340); /* 0x15042EC9: mov eax, dword ptr [0x150bd340] */
    _flag_a = (uint32_t)((eax ^ ebp)); _flag_b = (uint32_t)((eax ^ ebp));
    eax = eax ^ ebp; /* 0x15042ECE: xor eax, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x4)) = eax; /* 0x15042ED0: mov dword ptr [ebp - 4], eax */
    PUSH32(esp, ebx); /* 0x15042ED3: push ebx */
    ebx = ecx; /* 0x15042ED4: mov ebx, ecx */
    PUSH32(esp, esi); /* 0x15042ED6: push esi */
    PUSH32(esp, edi); /* 0x15042ED7: push edi */
    /* test ebx, ebx */ /* 0x15042ED8: test ebx, ebx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ebx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_15042F9B; /* 0x15042EDA: je 0x15042f9b */
L_15042EE0:
    PUSH32(esp, 0x14u); /* 0x15042EE0: push 0x14 */
    ecx = POP32_VAL(esp); /* 0x15042EE2: pop ecx */
    esi = ebx; /* 0x15042EE3: mov esi, ebx */
    edi = ebp + (-0x54); /* 0x15042EE5: lea edi, [ebp - 0x54] */
    while (ecx) { MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; --ecx; } /* 0x15042EE8: rep movsd dword ptr es:[edi], dword ptr [esi] */
    edx = MEM32(ebp + (-0x54)); /* 0x15042EEA: mov edx, dword ptr [ebp - 0x54] */
    eax = MEM32(ebp + (-0x44)); /* 0x15042EED: mov eax, dword ptr [ebp - 0x44] */
    /* cmp edx, 0xE06D7363u */ /* 0x15042EF0: cmp edx, 0xe06d7363 */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(0xE06D7363u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_15042F6A; /* 0x15042EF6: jne 0x15042f6a */
L_15042EF8:
    /* cmp eax, 3 */ /* 0x15042EF8: cmp eax, 3 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(3);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_15042F6A; /* 0x15042EFB: jne 0x15042f6a */
L_15042EFD:
    ecx = MEM32(ebp + (-0x40)); /* 0x15042EFD: mov ecx, dword ptr [ebp - 0x40] */
    /* cmp ecx, 0x19930520u */ /* 0x15042F00: cmp ecx, 0x19930520 */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x19930520u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_15042F20; /* 0x15042F06: je 0x15042f20 */
L_15042F08:
    /* cmp ecx, 0x19930521u */ /* 0x15042F08: cmp ecx, 0x19930521 */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x19930521u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_15042F20; /* 0x15042F0E: je 0x15042f20 */
L_15042F10:
    /* cmp ecx, 0x19930522u */ /* 0x15042F10: cmp ecx, 0x19930522 */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x19930522u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_15042F20; /* 0x15042F16: je 0x15042f20 */
L_15042F18:
    /* cmp ecx, 0x01994000u */ /* 0x15042F18: cmp ecx, 0x1994000 */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x01994000u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_15042F6A; /* 0x15042F1E: jne 0x15042f6a */
L_15042F20:
    PUSH32(esp, MEM32(ebp + (-0x38))); /* 0x15042F20: push dword ptr [ebp - 0x38] */
    RECOMP_ICALL(MEM32(0x150C02A0)); /* 0x15042F23: call dword ptr [0x150c02a0] */
    RECOMP_FLAGS_IN();
    /* cmp MEM32(ebp + (-0x3C)), 0 */ /* 0x15042F29: cmp dword ptr [ebp - 0x3c], 0 */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x3C))); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_15042F96; /* 0x15042F2D: je 0x15042f96 */
L_15042F2F:
    /* test eax, eax */ /* 0x15042F2F: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_15042F96; /* 0x15042F31: je 0x15042f96 */
L_15042F33:
    ecx = MEM32(eax + 0xC); /* 0x15042F33: mov ecx, dword ptr [eax + 0xc] */
    /* test ecx, ecx */ /* 0x15042F36: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_15042F96; /* 0x15042F38: je 0x15042f96 */
L_15042F3A:
    /* cmp MEM32(ecx), 0 */ /* 0x15042F3A: cmp dword ptr [ecx], 0 */
    _flag_a = (uint32_t)(MEM32(ecx)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_LE(_flag_a, _flag_b)) goto L_15042F96; /* 0x15042F3D: jle 0x15042f96 */
L_15042F3F:
    MEM32(ebp + (-0x38)) = eax; /* 0x15042F3F: mov dword ptr [ebp - 0x38], eax */
    eax = MEM32(eax + 0xC); /* 0x15042F42: mov eax, dword ptr [eax + 0xc] */
    esi = MEM32(eax + 0x4); /* 0x15042F45: mov esi, dword ptr [eax + 4] */
    eax = MEM32(esi + 0x14); /* 0x15042F48: mov eax, dword ptr [esi + 0x14] */
    RECOMP_CALL(sub_15069EB0); /* 0x15042F4B: call 0x15069eb0 */
    RECOMP_FLAGS_IN();
    edi = esp; /* 0x15042F50: mov edi, esp */
    ecx = ebx; /* 0x15042F52: mov ecx, ebx */
    PUSH32(esp, esi); /* 0x15042F54: push esi */
    PUSH32(esp, MEM32(esi + 0x14)); /* 0x15042F55: push dword ptr [esi + 0x14] */
    PUSH32(esp, MEM32(ebp + (-0x3C))); /* 0x15042F58: push dword ptr [ebp - 0x3c] */
    PUSH32(esp, edi); /* 0x15042F5B: push edi */
    RECOMP_CALL(sub_15042A13); /* 0x15042F5C: call 0x15042a13 */
    RECOMP_FLAGS_IN();
    eax = MEM32(ebp + (-0x44)); /* 0x15042F61: mov eax, dword ptr [ebp - 0x44] */
    edx = MEM32(ebp + (-0x54)); /* 0x15042F64: mov edx, dword ptr [ebp - 0x54] */
    MEM32(ebp + (-0x3C)) = edi; /* 0x15042F67: mov dword ptr [ebp - 0x3c], edi */
L_15042F6A:
    PUSH32(esp, 0xFu); /* 0x15042F6A: push 0xf */
    ecx = POP32_VAL(esp); /* 0x15042F6C: pop ecx */
    /* cmp eax, ecx */ /* 0x15042F6D: cmp eax, ecx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_A(_flag_a, _flag_b)) { eax = ecx; } /* 0x15042F6F: cmova eax, ecx */
    ecx = ebp + (-0x40); /* 0x15042F72: lea ecx, [ebp - 0x40] */
    PUSH32(esp, ecx); /* 0x15042F75: push ecx */
    PUSH32(esp, eax); /* 0x15042F76: push eax */
    PUSH32(esp, MEM32(ebp + (-0x50))); /* 0x15042F77: push dword ptr [ebp - 0x50] */
    MEM32(ebp + (-0x44)) = eax; /* 0x15042F7A: mov dword ptr [ebp - 0x44], eax */
    PUSH32(esp, edx); /* 0x15042F7D: push edx */
    RECOMP_ICALL(MEM32(0x150C005C)); /* 0x15042F7E: call dword ptr [0x150c005c] */
    RECOMP_FLAGS_IN();
    esp = ebp + (-0x6C); /* 0x15042F84: lea esp, [ebp - 0x6c] */
    edi = POP32_VAL(esp); /* 0x15042F87: pop edi */
    esi = POP32_VAL(esp); /* 0x15042F88: pop esi */
    ebx = POP32_VAL(esp); /* 0x15042F89: pop ebx */
    ecx = MEM32(ebp + (-0x4)); /* 0x15042F8A: mov ecx, dword ptr [ebp - 4] */
    _flag_a = (uint32_t)((ecx ^ ebp)); _flag_b = (uint32_t)((ecx ^ ebp));
    ecx = ecx ^ ebp; /* 0x15042F8D: xor ecx, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_1505E540); /* 0x15042F8F: call 0x1505e540 */
    RECOMP_FLAGS_IN();
    esp = ebp; ebp = POP32_VAL(esp); /* 0x15042F94: leave  */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x15042F95: ret  */
L_15042F96:
    RECOMP_CALL(sub_1503B0D0); /* 0x15042F96: call 0x1503b0d0 */
    RECOMP_FLAGS_IN();
L_15042F9B:
    PUSH32(esp, 0x15003F04u); /* 0x15042F9B: push 0x15003f04 */
    ecx = ebp + (-0x60); /* 0x15042FA0: lea ecx, [ebp - 0x60] */
    RECOMP_CALL(sub_1503A127); /* 0x15042FA3: call 0x1503a127 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0x150AFD1Cu); /* 0x15042FA8: push 0x150afd1c */
    eax = ebp + (-0x60); /* 0x15042FAD: lea eax, [ebp - 0x60] */
    PUSH32(esp, eax); /* 0x15042FB0: push eax */
    RECOMP_CALL(sub_1503B2E0); /* 0x15042FB1: call 0x1503b2e0 */
    RECOMP_FLAGS_IN();
    void_lift_trap(0x15042FB6u, "int3 ");
    { RECOMP_REGS_OUT(); return; } /* end of function */
    RECOMP_REGS_OUT();
}

void sub_15042FBD(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x15042FBDu);

L_15042FBD:
    edi = edi; /* 0x15042FBD: mov edi, edi */
    PUSH32(esp, ebp); /* 0x15042FBF: push ebp */
    ebp = esp; /* 0x15042FC0: mov ebp, esp */
    eax = MEM32(ebp + 0x8); /* 0x15042FC2: mov eax, dword ptr [ebp + 8] */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0xCu; /* 0x15042FC5: sub esp, 0xc */
    _flag_k = FK_CMP;
    /* test eax, eax */ /* 0x15042FC8: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_15042FD0; /* 0x15042FCA: jne 0x15042fd0 */
L_15042FCC:
    esp = ebp; ebp = POP32_VAL(esp); /* 0x15042FCC: leave  */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x15042FCD: ret 4 */
L_15042FD0:
    /* cmp eax, 0x0AAAAAAAu */ /* 0x15042FD0: cmp eax, 0xaaaaaaa */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x0AAAAAAAu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_A(_flag_a, _flag_b)) goto L_15042FF4; /* 0x15042FD5: ja 0x15042ff4 */
L_15042FD7:
    eax = (uint32_t)((int32_t)eax * (int32_t)0x18u); /* 0x15042FD7: imul eax, eax, 0x18 */
    PUSH32(esp, eax); /* 0x15042FDA: push eax */
    RECOMP_CALL(sub_15048F2F); /* 0x15042FDB: call 0x15048f2f */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x15042FE0: pop ecx */
    /* test eax, eax */ /* 0x15042FE1: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_15042FCC; /* 0x15042FE3: jne 0x15042fcc */
L_15042FE5:
    ecx = ebp + (-0xC); /* 0x15042FE5: lea ecx, [ebp - 0xc] */
    RECOMP_CALL(sub_150425D7); /* 0x15042FE8: call 0x150425d7 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0x150B02C0u); /* 0x15042FED: push 0x150b02c0 */
    goto L_15043006; /* 0x15042FF2: jmp 0x15043006 */
L_15042FF4:
    PUSH32(esp, 0x150048A4u); /* 0x15042FF4: push 0x150048a4 */
    ecx = ebp + (-0xC); /* 0x15042FF9: lea ecx, [ebp - 0xc] */
    RECOMP_CALL(sub_15042667); /* 0x15042FFC: call 0x15042667 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0x150B02F8u); /* 0x15043001: push 0x150b02f8 */
L_15043006:
    eax = ebp + (-0xC); /* 0x15043006: lea eax, [ebp - 0xc] */
    PUSH32(esp, eax); /* 0x15043009: push eax */
    RECOMP_CALL(sub_1503B2E0); /* 0x1504300A: call 0x1503b2e0 */
    RECOMP_FLAGS_IN();
    void_lift_trap(0x1504300Fu, "int3 ");
    { RECOMP_REGS_OUT(); return; } /* end of function */
    RECOMP_REGS_OUT();
}

void sub_15043016(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x15043016u);

L_15043016:
    edi = edi; /* 0x15043016: mov edi, edi */
    PUSH32(esp, ebp); /* 0x15043018: push ebp */
    ebp = esp; /* 0x15043019: mov ebp, esp */
    eax = MEM32(ebp + 0x8); /* 0x1504301B: mov eax, dword ptr [ebp + 8] */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0xCu; /* 0x1504301E: sub esp, 0xc */
    _flag_k = FK_CMP;
    /* test eax, eax */ /* 0x15043021: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_15043029; /* 0x15043023: jne 0x15043029 */
L_15043025:
    esp = ebp; ebp = POP32_VAL(esp); /* 0x15043025: leave  */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x15043026: ret 4 */
L_15043029:
    /* cmp eax, 0x030C30C3u */ /* 0x15043029: cmp eax, 0x30c30c3 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x030C30C3u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_A(_flag_a, _flag_b)) goto L_1504304D; /* 0x1504302E: ja 0x1504304d */
L_15043030:
    eax = (uint32_t)((int32_t)eax * (int32_t)0x54u); /* 0x15043030: imul eax, eax, 0x54 */
    PUSH32(esp, eax); /* 0x15043033: push eax */
    RECOMP_CALL(sub_15048F2F); /* 0x15043034: call 0x15048f2f */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x15043039: pop ecx */
    /* test eax, eax */ /* 0x1504303A: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_15043025; /* 0x1504303C: jne 0x15043025 */
L_1504303E:
    ecx = ebp + (-0xC); /* 0x1504303E: lea ecx, [ebp - 0xc] */
    RECOMP_CALL(sub_150425D7); /* 0x15043041: call 0x150425d7 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0x150B02C0u); /* 0x15043046: push 0x150b02c0 */
    goto L_1504305F; /* 0x1504304B: jmp 0x1504305f */
L_1504304D:
    PUSH32(esp, 0x150048A4u); /* 0x1504304D: push 0x150048a4 */
    ecx = ebp + (-0xC); /* 0x15043052: lea ecx, [ebp - 0xc] */
    RECOMP_CALL(sub_15042667); /* 0x15043055: call 0x15042667 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0x150B02F8u); /* 0x1504305A: push 0x150b02f8 */
L_1504305F:
    eax = ebp + (-0xC); /* 0x1504305F: lea eax, [ebp - 0xc] */
    PUSH32(esp, eax); /* 0x15043062: push eax */
    RECOMP_CALL(sub_1503B2E0); /* 0x15043063: call 0x1503b2e0 */
    RECOMP_FLAGS_IN();
    void_lift_trap(0x15043068u, "int3 ");
    { RECOMP_REGS_OUT(); return; } /* end of function */
    RECOMP_REGS_OUT();
}

void sub_1504306F(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1504306Fu);

L_1504306F:
    edi = edi; /* 0x1504306F: mov edi, edi */
    PUSH32(esp, ebp); /* 0x15043071: push ebp */
    ebp = esp; /* 0x15043072: mov ebp, esp */
    PUSH32(esp, esi); /* 0x15043074: push esi */
    PUSH32(esp, edi); /* 0x15043075: push edi */
    edi = MEM32(ebp + 0x8); /* 0x15043076: mov edi, dword ptr [ebp + 8] */
    PUSH32(esp, 0); /* 0x15043079: push 0 */
    eax = MEM32(edi); /* 0x1504307B: mov eax, dword ptr [edi] */
    esi = MEM32(eax + 0x8); /* 0x1504307D: mov esi, dword ptr [eax + 8] */
    ecx = esi; /* 0x15043080: mov ecx, esi */
    RECOMP_ICALL(MEM32(0x150C02B0)); /* 0x15043082: call dword ptr [0x150c02b0] */
    RECOMP_FLAGS_IN();
    ecx = edi; /* 0x15043088: mov ecx, edi */
    RECOMP_ICALL(esi); /* 0x1504308A: call esi */
    RECOMP_FLAGS_IN();
    edi = POP32_VAL(esp); /* 0x1504308C: pop edi */
    esi = POP32_VAL(esp); /* 0x1504308D: pop esi */
    ebp = POP32_VAL(esp); /* 0x1504308E: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x1504308F: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_150430A0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x150430A0u);

L_150430A0:
    edi = edi; /* 0x150430A0: mov edi, edi */
    PUSH32(esp, ebp); /* 0x150430A2: push ebp */
    ebp = esp; /* 0x150430A3: mov ebp, esp */
    PUSH32(esp, ecx); /* 0x150430A5: push ecx */
    PUSH32(esp, esi); /* 0x150430A6: push esi */
    esi = MEM32(ebp + 0xC); /* 0x150430A7: mov esi, dword ptr [ebp + 0xc] */
    PUSH32(esp, edi); /* 0x150430AA: push edi */
    _flag_a = (uint32_t)((edi | 0xFFFFFFFFu)); _flag_b = (uint32_t)((edi | 0xFFFFFFFFu));
    edi = edi | 0xFFFFFFFFu; /* 0x150430AB: or edi, 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp esi, edi */ /* 0x150430AE: cmp esi, edi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1504311E; /* 0x150430B0: je 0x1504311e */
L_150430B2:
    /* cmp esi, 0xFFFFFFFEu */ /* 0x150430B2: cmp esi, -2 */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(0xFFFFFFFEu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1504311E; /* 0x150430B5: je 0x1504311e */
L_150430B7:
    PUSH32(esp, edi); /* 0x150430B7: push edi */
    PUSH32(esp, esi); /* 0x150430B8: push esi */
    RECOMP_ICALL(MEM32(0x150C025C)); /* 0x150430B9: call dword ptr [0x150c025c] */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x150430BF: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_150430D6; /* 0x150430C1: jne 0x150430d6 */
L_150430C3:
    eax = ebp + (-0x4); /* 0x150430C3: lea eax, [ebp - 4] */
    PUSH32(esp, eax); /* 0x150430C6: push eax */
    PUSH32(esp, esi); /* 0x150430C7: push esi */
    RECOMP_ICALL(MEM32(0x150C0200)); /* 0x150430C8: call dword ptr [0x150c0200] */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x150430CE: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_150430D6; /* 0x150430D0: je 0x150430d6 */
L_150430D2:
    edi = esi; /* 0x150430D2: mov edi, esi */
    goto L_15043109; /* 0x150430D4: jmp 0x15043109 */
L_150430D6:
    RECOMP_ICALL(MEM32(0x150C006C)); /* 0x150430D6: call dword ptr [0x150c006c] */
    RECOMP_FLAGS_IN();
    /* cmp eax, 6 */ /* 0x150430DC: cmp eax, 6 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(6);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_150430F9; /* 0x150430DF: jne 0x150430f9 */
L_150430E1:
    RECOMP_CALL(sub_15036430); /* 0x150430E1: call 0x15036430 */
    RECOMP_FLAGS_IN();
    MEM32(eax) = 0xAu; /* 0x150430E6: mov dword ptr [eax], 0xa */
    RECOMP_CALL(sub_150363E0); /* 0x150430EC: call 0x150363e0 */
    RECOMP_FLAGS_IN();
    MEM32(eax) = 6; /* 0x150430F1: mov dword ptr [eax], 6 */
    goto L_15043106; /* 0x150430F7: jmp 0x15043106 */
L_150430F9:
    RECOMP_ICALL(MEM32(0x150C006C)); /* 0x150430F9: call dword ptr [0x150c006c] */
    RECOMP_FLAGS_IN();
    PUSH32(esp, eax); /* 0x150430FF: push eax */
    RECOMP_CALL(sub_150363FB); /* 0x15043100: call 0x150363fb */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x15043105: pop ecx */
L_15043106:
    MEM32(ebp + (-0x4)) = edi; /* 0x15043106: mov dword ptr [ebp - 4], edi */
L_15043109:
    PUSH32(esp, esi); /* 0x15043109: push esi */
    RECOMP_ICALL(MEM32(0x150C0124)); /* 0x1504310A: call dword ptr [0x150c0124] */
    RECOMP_FLAGS_IN();
    eax = MEM32(ebp + 0x8); /* 0x15043110: mov eax, dword ptr [ebp + 8] */
    /* test eax, eax */ /* 0x15043113: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_15043129; /* 0x15043115: je 0x15043129 */
L_15043117:
    ecx = MEM32(ebp + (-0x4)); /* 0x15043117: mov ecx, dword ptr [ebp - 4] */
    MEM32(eax) = ecx; /* 0x1504311A: mov dword ptr [eax], ecx */
    goto L_15043129; /* 0x1504311C: jmp 0x15043129 */
L_1504311E:
    RECOMP_CALL(sub_15036430); /* 0x1504311E: call 0x15036430 */
    RECOMP_FLAGS_IN();
    MEM32(eax) = 0xAu; /* 0x15043123: mov dword ptr [eax], 0xa */
L_15043129:
    eax = edi; /* 0x15043129: mov eax, edi */
    edi = POP32_VAL(esp); /* 0x1504312B: pop edi */
    esi = POP32_VAL(esp); /* 0x1504312C: pop esi */
    esp = ebp; ebp = POP32_VAL(esp); /* 0x1504312D: leave  */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1504312E: ret  */
    RECOMP_REGS_OUT();
}

void sub_15043140(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x15043140u);

L_15043140:
    edi = edi; /* 0x15043140: mov edi, edi */
    PUSH32(esp, ebp); /* 0x15043142: push ebp */
    ebp = esp; /* 0x15043143: mov ebp, esp */
    ecx = MEM32(ebp + 0x8); /* 0x15043145: mov ecx, dword ptr [ebp + 8] */
    /* test ecx, ecx */ /* 0x15043148: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1504316B; /* 0x1504314A: jne 0x1504316b */
L_1504314C:
    RECOMP_CALL(sub_15036430); /* 0x1504314C: call 0x15036430 */
    RECOMP_FLAGS_IN();
    MEM32(eax) = 0x16u; /* 0x15043151: mov dword ptr [eax], 0x16 */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x15043157: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, eax); /* 0x15043159: push eax */
    PUSH32(esp, eax); /* 0x1504315A: push eax */
    PUSH32(esp, eax); /* 0x1504315B: push eax */
    PUSH32(esp, eax); /* 0x1504315C: push eax */
    PUSH32(esp, eax); /* 0x1504315D: push eax */
    RECOMP_CALL(sub_1505A110); /* 0x1504315E: call 0x1505a110 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x14u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x14u; /* 0x15043163: add esp, 0x14 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)((eax | 0xFFFFFFFFu)); _flag_b = (uint32_t)((eax | 0xFFFFFFFFu));
    eax = eax | 0xFFFFFFFFu; /* 0x15043166: or eax, 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    ebp = POP32_VAL(esp); /* 0x15043169: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1504316A: ret  */
L_1504316B:
    /* cmp MEM8(ecx), 0 */ /* 0x1504316B: cmp byte ptr [ecx], 0 */
    _flag_a = (uint32_t)(MEM8(ecx)) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    RECOMP_BACKEDGE();
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1504314C; /* 0x1504316E: je 0x1504314c */
L_15043170:
    /* cmp MEM32(ebp + 0xC), 0 */ /* 0x15043170: cmp dword ptr [ebp + 0xc], 0 */
    _flag_a = (uint32_t)(MEM32(ebp + 0xC)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    PUSH32(esp, 0); /* 0x15043174: push 0 */
    if (CMP_NE(_flag_a, _flag_b)) goto L_15043187; /* 0x15043176: jne 0x15043187 */
L_15043178:
    eax = MEM32(0x150BA000); /* 0x15043178: mov eax, dword ptr [0x150ba000] */
    MEM32(ebp + 0xC) = eax; /* 0x1504317D: mov dword ptr [ebp + 0xc], eax */
    PUSH32(esp, 0x150BA000u); /* 0x15043180: push 0x150ba000 */
    goto L_1504318B; /* 0x15043185: jmp 0x1504318b */
L_15043187:
    eax = ebp + 0xC; /* 0x15043187: lea eax, [ebp + 0xc] */
    PUSH32(esp, eax); /* 0x1504318A: push eax */
L_1504318B:
    PUSH32(esp, ecx); /* 0x1504318B: push ecx */
    RECOMP_CALL(sub_15043310); /* 0x1504318C: call 0x15043310 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x15043191: add esp, 0xc */
    _flag_k = FK_ADD;
    ebp = POP32_VAL(esp); /* 0x15043194: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x15043195: ret  */
    RECOMP_REGS_OUT();
}

void sub_150431A0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x150431A0u);

L_150431A0:
    edi = edi; /* 0x150431A0: mov edi, edi */
    PUSH32(esp, ebp); /* 0x150431A2: push ebp */
    ebp = esp; /* 0x150431A3: mov ebp, esp */
    edx = MEM32(ebp + 0x8); /* 0x150431A5: mov edx, dword ptr [ebp + 8] */
    ecx = ebp + 0xC; /* 0x150431A8: lea ecx, [ebp + 0xc] */
    /* test edx, edx */ /* 0x150431AB: test edx, edx */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(edx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_150431CE; /* 0x150431AD: jne 0x150431ce */
L_150431AF:
    RECOMP_CALL(sub_15036430); /* 0x150431AF: call 0x15036430 */
    RECOMP_FLAGS_IN();
    MEM32(eax) = 0x16u; /* 0x150431B4: mov dword ptr [eax], 0x16 */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x150431BA: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, eax); /* 0x150431BC: push eax */
    PUSH32(esp, eax); /* 0x150431BD: push eax */
    PUSH32(esp, eax); /* 0x150431BE: push eax */
    PUSH32(esp, eax); /* 0x150431BF: push eax */
    PUSH32(esp, eax); /* 0x150431C0: push eax */
    RECOMP_CALL(sub_1505A110); /* 0x150431C1: call 0x1505a110 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x14u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x14u; /* 0x150431C6: add esp, 0x14 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)((eax | 0xFFFFFFFFu)); _flag_b = (uint32_t)((eax | 0xFFFFFFFFu));
    eax = eax | 0xFFFFFFFFu; /* 0x150431C9: or eax, 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    ebp = POP32_VAL(esp); /* 0x150431CC: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x150431CD: ret  */
L_150431CE:
    /* cmp MEM8(edx), 0 */ /* 0x150431CE: cmp byte ptr [edx], 0 */
    _flag_a = (uint32_t)(MEM8(edx)) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    RECOMP_BACKEDGE();
    if (CMP_EQ(_flag_a, _flag_b)) goto L_150431AF; /* 0x150431D1: je 0x150431af */
L_150431D3:
    eax = MEM32(ebp + 0xC); /* 0x150431D3: mov eax, dword ptr [ebp + 0xc] */
    /* test eax, eax */ /* 0x150431D6: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_Z(_flag_a, _flag_b)) goto L_150431AF; /* 0x150431D8: je 0x150431af */
L_150431DA:
    /* cmp MEM8(eax), 0 */ /* 0x150431DA: cmp byte ptr [eax], 0 */
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    RECOMP_BACKEDGE();
    if (CMP_EQ(_flag_a, _flag_b)) goto L_150431AF; /* 0x150431DD: je 0x150431af */
L_150431DF:
    eax = MEM32(ecx); /* 0x150431DF: mov eax, dword ptr [ecx] */
    ecx = ecx + 0x4; /* 0x150431E1: lea ecx, [ecx + 4] */
    /* test eax, eax */ /* 0x150431E4: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_150431DF; /* 0x150431E6: jne 0x150431df */
L_150431E8:
    PUSH32(esp, MEM32(ecx)); /* 0x150431E8: push dword ptr [ecx] */
    eax = ebp + 0xC; /* 0x150431EA: lea eax, [ebp + 0xc] */
    PUSH32(esp, eax); /* 0x150431ED: push eax */
    PUSH32(esp, edx); /* 0x150431EE: push edx */
    RECOMP_CALL(sub_15043310); /* 0x150431EF: call 0x15043310 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x150431F4: add esp, 0xc */
    _flag_k = FK_ADD;
    ebp = POP32_VAL(esp); /* 0x150431F7: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x150431F8: ret  */
    RECOMP_REGS_OUT();
}

void sub_15043200(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x15043200u);

L_15043200:
    edi = edi; /* 0x15043200: mov edi, edi */
    PUSH32(esp, ebp); /* 0x15043202: push ebp */
    ebp = esp; /* 0x15043203: mov ebp, esp */
    eax = MEM32(ebp + 0x8); /* 0x15043205: mov eax, dword ptr [ebp + 8] */
    /* test eax, eax */ /* 0x15043208: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1504322B; /* 0x1504320A: jne 0x1504322b */
L_1504320C:
    RECOMP_CALL(sub_15036430); /* 0x1504320C: call 0x15036430 */
    RECOMP_FLAGS_IN();
    MEM32(eax) = 0x16u; /* 0x15043211: mov dword ptr [eax], 0x16 */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x15043217: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, eax); /* 0x15043219: push eax */
    PUSH32(esp, eax); /* 0x1504321A: push eax */
    PUSH32(esp, eax); /* 0x1504321B: push eax */
    PUSH32(esp, eax); /* 0x1504321C: push eax */
    PUSH32(esp, eax); /* 0x1504321D: push eax */
    RECOMP_CALL(sub_1505A110); /* 0x1504321E: call 0x1505a110 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x14u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x14u; /* 0x15043223: add esp, 0x14 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)((eax | 0xFFFFFFFFu)); _flag_b = (uint32_t)((eax | 0xFFFFFFFFu));
    eax = eax | 0xFFFFFFFFu; /* 0x15043226: or eax, 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    ebp = POP32_VAL(esp); /* 0x15043229: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1504322A: ret  */
L_1504322B:
    /* cmp MEM8(eax), 0 */ /* 0x1504322B: cmp byte ptr [eax], 0 */
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    RECOMP_BACKEDGE();
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1504320C; /* 0x1504322E: je 0x1504320c */
L_15043230:
    ecx = MEM32(ebp + 0xC); /* 0x15043230: mov ecx, dword ptr [ebp + 0xc] */
    /* test ecx, ecx */ /* 0x15043233: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_Z(_flag_a, _flag_b)) goto L_1504320C; /* 0x15043235: je 0x1504320c */
L_15043237:
    /* cmp MEM8(ecx), 0 */ /* 0x15043237: cmp byte ptr [ecx], 0 */
    _flag_a = (uint32_t)(MEM8(ecx)) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    RECOMP_BACKEDGE();
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1504320C; /* 0x1504323A: je 0x1504320c */
L_1504323C:
    ecx = ebp + 0xC; /* 0x1504323C: lea ecx, [ebp + 0xc] */
    PUSH32(esp, ecx); /* 0x1504323F: push ecx */
    PUSH32(esp, eax); /* 0x15043240: push eax */
    RECOMP_CALL(sub_150435C0); /* 0x15043241: call 0x150435c0 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x15043246: pop ecx */
    ecx = POP32_VAL(esp); /* 0x15043247: pop ecx */
    ebp = POP32_VAL(esp); /* 0x15043248: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x15043249: ret  */
    RECOMP_REGS_OUT();
}

void sub_15043250(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x15043250u);

L_15043250:
    edi = edi; /* 0x15043250: mov edi, edi */
    PUSH32(esp, ebp); /* 0x15043252: push ebp */
    ebp = esp; /* 0x15043253: mov ebp, esp */
    edx = MEM32(ebp + 0x8); /* 0x15043255: mov edx, dword ptr [ebp + 8] */
    /* test edx, edx */ /* 0x15043258: test edx, edx */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(edx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1504327B; /* 0x1504325A: jne 0x1504327b */
L_1504325C:
    RECOMP_CALL(sub_15036430); /* 0x1504325C: call 0x15036430 */
    RECOMP_FLAGS_IN();
    MEM32(eax) = 0x16u; /* 0x15043261: mov dword ptr [eax], 0x16 */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x15043267: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, eax); /* 0x15043269: push eax */
    PUSH32(esp, eax); /* 0x1504326A: push eax */
    PUSH32(esp, eax); /* 0x1504326B: push eax */
    PUSH32(esp, eax); /* 0x1504326C: push eax */
    PUSH32(esp, eax); /* 0x1504326D: push eax */
    RECOMP_CALL(sub_1505A110); /* 0x1504326E: call 0x1505a110 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x14u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x14u; /* 0x15043273: add esp, 0x14 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)((eax | 0xFFFFFFFFu)); _flag_b = (uint32_t)((eax | 0xFFFFFFFFu));
    eax = eax | 0xFFFFFFFFu; /* 0x15043276: or eax, 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    ebp = POP32_VAL(esp); /* 0x15043279: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1504327A: ret  */
L_1504327B:
    /* cmp MEM8(edx), 0 */ /* 0x1504327B: cmp byte ptr [edx], 0 */
    _flag_a = (uint32_t)(MEM8(edx)) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    RECOMP_BACKEDGE();
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1504325C; /* 0x1504327E: je 0x1504325c */
L_15043280:
    eax = MEM32(ebp + 0xC); /* 0x15043280: mov eax, dword ptr [ebp + 0xc] */
    /* test eax, eax */ /* 0x15043283: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_Z(_flag_a, _flag_b)) goto L_1504325C; /* 0x15043285: je 0x1504325c */
L_15043287:
    /* cmp MEM8(eax), 0 */ /* 0x15043287: cmp byte ptr [eax], 0 */
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    RECOMP_BACKEDGE();
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1504325C; /* 0x1504328A: je 0x1504325c */
L_1504328C:
    ecx = ebp + 0xC; /* 0x1504328C: lea ecx, [ebp + 0xc] */
L_1504328F:
    eax = MEM32(ecx); /* 0x1504328F: mov eax, dword ptr [ecx] */
    ecx = ecx + 0x4; /* 0x15043291: lea ecx, [ecx + 4] */
    /* test eax, eax */ /* 0x15043294: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1504328F; /* 0x15043296: jne 0x1504328f */
L_15043298:
    PUSH32(esp, MEM32(ecx)); /* 0x15043298: push dword ptr [ecx] */
    eax = ebp + 0xC; /* 0x1504329A: lea eax, [ebp + 0xc] */
    PUSH32(esp, eax); /* 0x1504329D: push eax */
    PUSH32(esp, edx); /* 0x1504329E: push edx */
    RECOMP_CALL(sub_150435E0); /* 0x1504329F: call 0x150435e0 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x150432A4: add esp, 0xc */
    _flag_k = FK_ADD;
    ebp = POP32_VAL(esp); /* 0x150432A7: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x150432A8: ret  */
    RECOMP_REGS_OUT();
}

void sub_150432B0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x150432B0u);

L_150432B0:
    edi = edi; /* 0x150432B0: mov edi, edi */
    PUSH32(esp, ebp); /* 0x150432B2: push ebp */
    ebp = esp; /* 0x150432B3: mov ebp, esp */
    eax = MEM32(ebp + 0x8); /* 0x150432B5: mov eax, dword ptr [ebp + 8] */
    /* test eax, eax */ /* 0x150432B8: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_150432DB; /* 0x150432BA: jne 0x150432db */
L_150432BC:
    RECOMP_CALL(sub_15036430); /* 0x150432BC: call 0x15036430 */
    RECOMP_FLAGS_IN();
    MEM32(eax) = 0x16u; /* 0x150432C1: mov dword ptr [eax], 0x16 */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x150432C7: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, eax); /* 0x150432C9: push eax */
    PUSH32(esp, eax); /* 0x150432CA: push eax */
    PUSH32(esp, eax); /* 0x150432CB: push eax */
    PUSH32(esp, eax); /* 0x150432CC: push eax */
    PUSH32(esp, eax); /* 0x150432CD: push eax */
    RECOMP_CALL(sub_1505A110); /* 0x150432CE: call 0x1505a110 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x14u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x14u; /* 0x150432D3: add esp, 0x14 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)((eax | 0xFFFFFFFFu)); _flag_b = (uint32_t)((eax | 0xFFFFFFFFu));
    eax = eax | 0xFFFFFFFFu; /* 0x150432D6: or eax, 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    ebp = POP32_VAL(esp); /* 0x150432D9: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x150432DA: ret  */
L_150432DB:
    /* cmp MEM8(eax), 0 */ /* 0x150432DB: cmp byte ptr [eax], 0 */
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    RECOMP_BACKEDGE();
    if (CMP_EQ(_flag_a, _flag_b)) goto L_150432BC; /* 0x150432DE: je 0x150432bc */
L_150432E0:
    ecx = MEM32(ebp + 0xC); /* 0x150432E0: mov ecx, dword ptr [ebp + 0xc] */
    /* test ecx, ecx */ /* 0x150432E3: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_Z(_flag_a, _flag_b)) goto L_150432BC; /* 0x150432E5: je 0x150432bc */
L_150432E7:
    edx = MEM32(ecx); /* 0x150432E7: mov edx, dword ptr [ecx] */
    /* test edx, edx */ /* 0x150432E9: test edx, edx */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(edx);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_Z(_flag_a, _flag_b)) goto L_150432BC; /* 0x150432EB: je 0x150432bc */
L_150432ED:
    /* cmp MEM8(edx), 0 */ /* 0x150432ED: cmp byte ptr [edx], 0 */
    _flag_a = (uint32_t)(MEM8(edx)) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    RECOMP_BACKEDGE();
    if (CMP_EQ(_flag_a, _flag_b)) goto L_150432BC; /* 0x150432F0: je 0x150432bc */
L_150432F2:
    PUSH32(esp, 0); /* 0x150432F2: push 0 */
    PUSH32(esp, ecx); /* 0x150432F4: push ecx */
    PUSH32(esp, eax); /* 0x150432F5: push eax */
    RECOMP_CALL(sub_15043310); /* 0x150432F6: call 0x15043310 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x150432FB: add esp, 0xc */
    _flag_k = FK_ADD;
    ebp = POP32_VAL(esp); /* 0x150432FE: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x150432FF: ret  */
    RECOMP_REGS_OUT();
}

void sub_15043310(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x15043310u);

L_15043310:
    edi = edi; /* 0x15043310: mov edi, edi */
    PUSH32(esp, ebp); /* 0x15043312: push ebp */
    ebp = esp; /* 0x15043313: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x14u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x14u; /* 0x15043315: sub esp, 0x14 */
    _flag_k = FK_CMP;
    PUSH32(esp, ebx); /* 0x15043318: push ebx */
    ebx = MEM32(ebp + 0x8); /* 0x15043319: mov ebx, dword ptr [ebp + 8] */
    PUSH32(esp, esi); /* 0x1504331C: push esi */
    PUSH32(esp, edi); /* 0x1504331D: push edi */
    edi = ebx; /* 0x1504331E: mov edi, ebx */
    /* test ebx, ebx */ /* 0x15043320: test ebx, ebx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ebx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_15043346; /* 0x15043322: jne 0x15043346 */
L_15043324:
    RECOMP_CALL(sub_15036430); /* 0x15043324: call 0x15036430 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    esi = 0; /* 0x15043329: xor esi, esi */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, esi); /* 0x1504332B: push esi */
    PUSH32(esp, esi); /* 0x1504332C: push esi */
    PUSH32(esp, esi); /* 0x1504332D: push esi */
    PUSH32(esp, esi); /* 0x1504332E: push esi */
    PUSH32(esp, esi); /* 0x1504332F: push esi */
    MEM32(eax) = 0x16u; /* 0x15043330: mov dword ptr [eax], 0x16 */
    RECOMP_CALL(sub_1505A110); /* 0x15043336: call 0x1505a110 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x14u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x14u; /* 0x1504333B: add esp, 0x14 */
    _flag_k = FK_ADD;
L_1504333E:
    _flag_a = (uint32_t)((eax | 0xFFFFFFFFu)); _flag_b = (uint32_t)((eax | 0xFFFFFFFFu));
    eax = eax | 0xFFFFFFFFu; /* 0x1504333E: or eax, 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_1504352B; /* 0x15043341: jmp 0x1504352b */
L_15043346:
    /* cmp MEM8(ebx), 0 */ /* 0x15043346: cmp byte ptr [ebx], 0 */
    _flag_a = (uint32_t)(MEM8(ebx)) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    RECOMP_BACKEDGE();
    if (CMP_EQ(_flag_a, _flag_b)) goto L_15043324; /* 0x15043349: je 0x15043324 */
L_1504334B:
    eax = MEM32(ebp + 0xC); /* 0x1504334B: mov eax, dword ptr [ebp + 0xc] */
    /* test eax, eax */ /* 0x1504334E: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_Z(_flag_a, _flag_b)) goto L_15043324; /* 0x15043350: je 0x15043324 */
L_15043352:
    eax = MEM32(eax); /* 0x15043352: mov eax, dword ptr [eax] */
    /* test eax, eax */ /* 0x15043354: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_Z(_flag_a, _flag_b)) goto L_15043324; /* 0x15043356: je 0x15043324 */
L_15043358:
    /* cmp MEM8(eax), 0 */ /* 0x15043358: cmp byte ptr [eax], 0 */
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    RECOMP_BACKEDGE();
    if (CMP_EQ(_flag_a, _flag_b)) goto L_15043324; /* 0x1504335B: je 0x15043324 */
L_1504335D:
    PUSH32(esp, 0x5Cu); /* 0x1504335D: push 0x5c */
    PUSH32(esp, ebx); /* 0x1504335F: push ebx */
    RECOMP_CALL(sub_15055AA0); /* 0x15043360: call 0x15055aa0 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0x2Fu); /* 0x15043365: push 0x2f */
    PUSH32(esp, ebx); /* 0x15043367: push ebx */
    MEM32(ebp + (-0x4)) = eax; /* 0x15043368: mov dword ptr [ebp - 4], eax */
    RECOMP_CALL(sub_15055AA0); /* 0x1504336B: call 0x15055aa0 */
    RECOMP_FLAGS_IN();
    ecx = eax; /* 0x15043370: mov ecx, eax */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x10u; /* 0x15043372: add esp, 0x10 */
    _flag_k = FK_ADD;
    eax = MEM32(ebp + (-0x4)); /* 0x15043375: mov eax, dword ptr [ebp - 4] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    esi = 0; /* 0x15043378: xor esi, esi */
    _cf = 0;
    _flag_k = FK_TEST;
    /* test ecx, ecx */ /* 0x1504337A: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_150433FD; /* 0x1504337C: jne 0x150433fd */
L_1504337E:
    /* test eax, eax */ /* 0x1504337E: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_15043407; /* 0x15043380: jne 0x15043407 */
L_15043386:
    PUSH32(esp, 0x3Au); /* 0x15043386: push 0x3a */
    PUSH32(esp, ebx); /* 0x15043388: push ebx */
    RECOMP_CALL(sub_15051F70); /* 0x15043389: call 0x15051f70 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1504338E: pop ecx */
    ecx = POP32_VAL(esp); /* 0x1504338F: pop ecx */
    /* test eax, eax */ /* 0x15043390: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_15043407; /* 0x15043392: jne 0x15043407 */
L_15043394:
    ecx = ebx; /* 0x15043394: mov ecx, ebx */
    edx = ecx + 0x1; /* 0x15043396: lea edx, [ecx + 1] */
L_15043399:
    SET_LO8(eax, MEM8(ecx)); /* 0x15043399: mov al, byte ptr [ecx] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx + 1; /* 0x1504339B: inc ecx */
    _flag_k = FK_INC;
    /* test LO8(eax), LO8(eax) */ /* 0x1504339C: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_15043399; /* 0x1504339E: jne 0x15043399 */
L_150433A0:
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ecx = ecx - edx; /* 0x150433A0: sub ecx, edx */
    _flag_k = FK_CMP;
    PUSH32(esp, 1); /* 0x150433A2: push 1 */
    eax = ecx + 0x3; /* 0x150433A4: lea eax, [ecx + 3] */
    PUSH32(esp, eax); /* 0x150433A7: push eax */
    MEM32(ebp + (-0x4)) = eax; /* 0x150433A8: mov dword ptr [ebp - 4], eax */
    RECOMP_CALL(sub_15048EE2); /* 0x150433AB: call 0x15048ee2 */
    RECOMP_FLAGS_IN();
    edi = eax; /* 0x150433B0: mov edi, eax */
    ecx = POP32_VAL(esp); /* 0x150433B2: pop ecx */
    ecx = POP32_VAL(esp); /* 0x150433B3: pop ecx */
    /* test edi, edi */ /* 0x150433B4: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_Z(_flag_a, _flag_b)) goto L_1504333E; /* 0x150433B6: je 0x1504333e */
L_150433B8:
    PUSH32(esp, 0x150048F0u); /* 0x150433B8: push 0x150048f0 */
    PUSH32(esp, MEM32(ebp + (-0x4))); /* 0x150433BD: push dword ptr [ebp - 4] */
    PUSH32(esp, edi); /* 0x150433C0: push edi */
    RECOMP_CALL(sub_1508E640); /* 0x150433C1: call 0x1508e640 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x150433C6: add esp, 0xc */
    _flag_k = FK_ADD;
    /* test eax, eax */ /* 0x150433C9: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_150433DA; /* 0x150433CB: je 0x150433da */
L_150433CD:
    PUSH32(esp, esi); /* 0x150433CD: push esi */
    PUSH32(esp, esi); /* 0x150433CE: push esi */
    PUSH32(esp, esi); /* 0x150433CF: push esi */
    PUSH32(esp, esi); /* 0x150433D0: push esi */
    PUSH32(esp, esi); /* 0x150433D1: push esi */
    RECOMP_CALL(sub_1505A11B); /* 0x150433D2: call 0x1505a11b */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x14u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x14u; /* 0x150433D7: add esp, 0x14 */
    _flag_k = FK_ADD;
L_150433DA:
    PUSH32(esp, ebx); /* 0x150433DA: push ebx */
    PUSH32(esp, MEM32(ebp + (-0x4))); /* 0x150433DB: push dword ptr [ebp - 4] */
    PUSH32(esp, edi); /* 0x150433DE: push edi */
    RECOMP_CALL(sub_1508E450); /* 0x150433DF: call 0x1508e450 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x150433E4: add esp, 0xc */
    _flag_k = FK_ADD;
    /* test eax, eax */ /* 0x150433E7: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_150433F8; /* 0x150433E9: je 0x150433f8 */
L_150433EB:
    PUSH32(esp, esi); /* 0x150433EB: push esi */
    PUSH32(esp, esi); /* 0x150433EC: push esi */
    PUSH32(esp, esi); /* 0x150433ED: push esi */
    PUSH32(esp, esi); /* 0x150433EE: push esi */
    PUSH32(esp, esi); /* 0x150433EF: push esi */
    RECOMP_CALL(sub_1505A11B); /* 0x150433F0: call 0x1505a11b */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x14u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x14u; /* 0x150433F5: add esp, 0x14 */
    _flag_k = FK_ADD;
L_150433F8:
    eax = edi + 0x2; /* 0x150433F8: lea eax, [edi + 2] */
    goto L_15043407; /* 0x150433FB: jmp 0x15043407 */
L_150433FD:
    /* test eax, eax */ /* 0x150433FD: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_15043405; /* 0x150433FF: je 0x15043405 */
L_15043401:
    /* cmp ecx, eax */ /* 0x15043401: cmp ecx, eax */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_15043407; /* 0x15043403: jbe 0x15043407 */
L_15043405:
    eax = ecx; /* 0x15043405: mov eax, ecx */
L_15043407:
    PUSH32(esp, 0x2Eu); /* 0x15043407: push 0x2e */
    PUSH32(esp, eax); /* 0x15043409: push eax */
    RECOMP_CALL(sub_15055AA0); /* 0x1504340A: call 0x15055aa0 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1504340F: pop ecx */
    ecx = POP32_VAL(esp); /* 0x15043410: pop ecx */
    /* test eax, eax */ /* 0x15043411: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1504343C; /* 0x15043413: je 0x1504343c */
L_15043415:
    PUSH32(esp, esi); /* 0x15043415: push esi */
    PUSH32(esp, edi); /* 0x15043416: push edi */
    RECOMP_CALL(sub_15036590); /* 0x15043417: call 0x15036590 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1504341C: pop ecx */
    ecx = POP32_VAL(esp); /* 0x1504341D: pop ecx */
    /* test eax, eax */ /* 0x1504341E: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1504351B; /* 0x15043420: jne 0x1504351b */
L_15043426:
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x15043426: push dword ptr [ebp + 0x10] */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x15043429: push dword ptr [ebp + 0xc] */
    PUSH32(esp, edi); /* 0x1504342C: push edi */
    RECOMP_CALL(sub_15043536); /* 0x1504342D: call 0x15043536 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x15043432: add esp, 0xc */
    _flag_k = FK_ADD;
    esi = eax; /* 0x15043435: mov esi, eax */
    goto L_1504351E; /* 0x15043437: jmp 0x1504351e */
L_1504343C:
    ecx = edi; /* 0x1504343C: mov ecx, edi */
    edx = ecx + 0x1; /* 0x1504343E: lea edx, [ecx + 1] */
L_15043441:
    SET_LO8(eax, MEM8(ecx)); /* 0x15043441: mov al, byte ptr [ecx] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx + 1; /* 0x15043443: inc ecx */
    _flag_k = FK_INC;
    /* test LO8(eax), LO8(eax) */ /* 0x15043444: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_15043441; /* 0x15043446: jne 0x15043441 */
L_15043448:
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ecx = ecx - edx; /* 0x15043448: sub ecx, edx */
    _flag_k = FK_CMP;
    PUSH32(esp, 1); /* 0x1504344A: push 1 */
    MEM32(ebp + (-0xC)) = ecx; /* 0x1504344C: mov dword ptr [ebp - 0xc], ecx */
    eax = ecx + 0x5; /* 0x1504344F: lea eax, [ecx + 5] */
    PUSH32(esp, eax); /* 0x15043452: push eax */
    MEM32(ebp + (-0x8)) = eax; /* 0x15043453: mov dword ptr [ebp - 8], eax */
    RECOMP_CALL(sub_15048EE2); /* 0x15043456: call 0x15048ee2 */
    RECOMP_FLAGS_IN();
    MEM32(ebp + (-0x4)) = eax; /* 0x1504345B: mov dword ptr [ebp - 4], eax */
    ecx = POP32_VAL(esp); /* 0x1504345E: pop ecx */
    ecx = POP32_VAL(esp); /* 0x1504345F: pop ecx */
    /* test eax, eax */ /* 0x15043460: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_Z(_flag_a, _flag_b)) goto L_1504333E; /* 0x15043462: je 0x1504333e */
L_15043468:
    PUSH32(esp, edi); /* 0x15043468: push edi */
    PUSH32(esp, MEM32(ebp + (-0x8))); /* 0x15043469: push dword ptr [ebp - 8] */
    PUSH32(esp, eax); /* 0x1504346C: push eax */
    RECOMP_CALL(sub_1508E640); /* 0x1504346D: call 0x1508e640 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x15043472: add esp, 0xc */
    _flag_k = FK_ADD;
    /* test eax, eax */ /* 0x15043475: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_15043486; /* 0x15043477: je 0x15043486 */
L_15043479:
    PUSH32(esp, esi); /* 0x15043479: push esi */
    PUSH32(esp, esi); /* 0x1504347A: push esi */
    PUSH32(esp, esi); /* 0x1504347B: push esi */
    PUSH32(esp, esi); /* 0x1504347C: push esi */
    PUSH32(esp, esi); /* 0x1504347D: push esi */
    RECOMP_CALL(sub_1505A11B); /* 0x1504347E: call 0x1505a11b */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x14u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x14u; /* 0x15043483: add esp, 0x14 */
    _flag_k = FK_ADD;
L_15043486:
    ecx = MEM32(ebp + (-0x4)); /* 0x15043486: mov ecx, dword ptr [ebp - 4] */
    _flag_a = (uint32_t)(MEM32(ebp + (-0xC))); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM32(ebp + (-0xC)) = MEM32(ebp + (-0xC)) + ecx; /* 0x15043489: add dword ptr [ebp - 0xc], ecx */
    _flag_k = FK_ADD;
    RECOMP_CALL(sub_15036430); /* 0x1504348C: call 0x15036430 */
    RECOMP_FLAGS_IN();
    ecx = MEM32(ebp + (-0x8)); /* 0x15043491: mov ecx, dword ptr [ebp - 8] */
    edx = MEM32(ebp + (-0xC)); /* 0x15043494: mov edx, dword ptr [ebp - 0xc] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ecx = ecx - edx; /* 0x15043497: sub ecx, edx */
    _flag_k = FK_CMP;
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(MEM32(ebp + (-0x4)));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + MEM32(ebp + (-0x4)); /* 0x15043499: add ecx, dword ptr [ebp - 4] */
    _flag_k = FK_ADD;
    eax = MEM32(eax); /* 0x1504349C: mov eax, dword ptr [eax] */
    MEM32(ebp + (-0x14)) = eax; /* 0x1504349E: mov dword ptr [ebp - 0x14], eax */
    eax = 0x150BA014u; /* 0x150434A1: mov eax, 0x150ba014 */
    MEM32(ebp + (-0x10)) = ecx; /* 0x150434A6: mov dword ptr [ebp - 0x10], ecx */
    MEM32(ebp + (-0x8)) = eax; /* 0x150434A9: mov dword ptr [ebp - 8], eax */
L_150434AC:
    PUSH32(esp, MEM32(eax)); /* 0x150434AC: push dword ptr [eax] */
    PUSH32(esp, ecx); /* 0x150434AE: push ecx */
    PUSH32(esp, edx); /* 0x150434AF: push edx */
    RECOMP_CALL(sub_1508E640); /* 0x150434B0: call 0x1508e640 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x150434B5: add esp, 0xc */
    _flag_k = FK_ADD;
    /* test eax, eax */ /* 0x150434B8: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_150434C9; /* 0x150434BA: je 0x150434c9 */
L_150434BC:
    PUSH32(esp, esi); /* 0x150434BC: push esi */
    PUSH32(esp, esi); /* 0x150434BD: push esi */
    PUSH32(esp, esi); /* 0x150434BE: push esi */
    PUSH32(esp, esi); /* 0x150434BF: push esi */
    PUSH32(esp, esi); /* 0x150434C0: push esi */
    RECOMP_CALL(sub_1505A11B); /* 0x150434C1: call 0x1505a11b */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x14u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x14u; /* 0x150434C6: add esp, 0x14 */
    _flag_k = FK_ADD;
L_150434C9:
    PUSH32(esp, esi); /* 0x150434C9: push esi */
    PUSH32(esp, MEM32(ebp + (-0x4))); /* 0x150434CA: push dword ptr [ebp - 4] */
    RECOMP_CALL(sub_15036590); /* 0x150434CD: call 0x15036590 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x150434D2: pop ecx */
    ecx = POP32_VAL(esp); /* 0x150434D3: pop ecx */
    /* test eax, eax */ /* 0x150434D4: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_150434F3; /* 0x150434D6: je 0x150434f3 */
L_150434D8:
    eax = MEM32(ebp + (-0x8)); /* 0x150434D8: mov eax, dword ptr [ebp - 8] */
    edx = MEM32(ebp + (-0xC)); /* 0x150434DB: mov edx, dword ptr [ebp - 0xc] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - 4; /* 0x150434DE: sub eax, 4 */
    _flag_k = FK_CMP;
    ecx = MEM32(ebp + (-0x10)); /* 0x150434E1: mov ecx, dword ptr [ebp - 0x10] */
    MEM32(ebp + (-0x8)) = eax; /* 0x150434E4: mov dword ptr [ebp - 8], eax */
    /* cmp eax, 0x150BA008u */ /* 0x150434E7: cmp eax, 0x150ba008 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x150BA008u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_GE(_flag_a, _flag_b)) goto L_150434AC; /* 0x150434EC: jge 0x150434ac */
L_150434EE:
    _flag_a = (uint32_t)((esi | 0xFFFFFFFFu)); _flag_b = (uint32_t)((esi | 0xFFFFFFFFu));
    esi = esi | 0xFFFFFFFFu; /* 0x150434EE: or esi, 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_15043510; /* 0x150434F1: jmp 0x15043510 */
L_150434F3:
    RECOMP_CALL(sub_15036430); /* 0x150434F3: call 0x15036430 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x150434F8: push dword ptr [ebp + 0x10] */
    ecx = MEM32(ebp + (-0x14)); /* 0x150434FB: mov ecx, dword ptr [ebp - 0x14] */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x150434FE: push dword ptr [ebp + 0xc] */
    MEM32(eax) = ecx; /* 0x15043501: mov dword ptr [eax], ecx */
    PUSH32(esp, MEM32(ebp + (-0x4))); /* 0x15043503: push dword ptr [ebp - 4] */
    RECOMP_CALL(sub_15043536); /* 0x15043506: call 0x15043536 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x1504350B: add esp, 0xc */
    _flag_k = FK_ADD;
    esi = eax; /* 0x1504350E: mov esi, eax */
L_15043510:
    PUSH32(esp, MEM32(ebp + (-0x4))); /* 0x15043510: push dword ptr [ebp - 4] */
    RECOMP_CALL(sub_15048840); /* 0x15043513: call 0x15048840 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x15043518: pop ecx */
    goto L_1504351E; /* 0x15043519: jmp 0x1504351e */
L_1504351B:
    _flag_a = (uint32_t)((esi | 0xFFFFFFFFu)); _flag_b = (uint32_t)((esi | 0xFFFFFFFFu));
    esi = esi | 0xFFFFFFFFu; /* 0x1504351B: or esi, 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
L_1504351E:
    /* cmp edi, ebx */ /* 0x1504351E: cmp edi, ebx */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_15043529; /* 0x15043520: je 0x15043529 */
L_15043522:
    PUSH32(esp, edi); /* 0x15043522: push edi */
    RECOMP_CALL(sub_15048840); /* 0x15043523: call 0x15048840 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x15043528: pop ecx */
L_15043529:
    eax = esi; /* 0x15043529: mov eax, esi */
L_1504352B:
    edi = POP32_VAL(esp); /* 0x1504352B: pop edi */
    esi = POP32_VAL(esp); /* 0x1504352C: pop esi */
    ebx = POP32_VAL(esp); /* 0x1504352D: pop ebx */
    esp = ebp; ebp = POP32_VAL(esp); /* 0x1504352E: leave  */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1504352F: ret  */
    RECOMP_REGS_OUT();
}

void sub_15043536(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x15043536u);

L_15043536:
    edi = edi; /* 0x15043536: mov edi, edi */
    PUSH32(esp, ebp); /* 0x15043538: push ebp */
    ebp = esp; /* 0x15043539: mov ebp, esp */
    PUSH32(esp, ecx); /* 0x1504353B: push ecx */
    PUSH32(esp, ecx); /* 0x1504353C: push ecx */
    PUSH32(esp, esi); /* 0x1504353D: push esi */
    esi = MEM32(ebp + 0x8); /* 0x1504353E: mov esi, dword ptr [ebp + 8] */
    /* test esi, esi */ /* 0x15043541: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_15043564; /* 0x15043543: jne 0x15043564 */
L_15043545:
    RECOMP_CALL(sub_15036430); /* 0x15043545: call 0x15036430 */
    RECOMP_FLAGS_IN();
    MEM32(eax) = 0x16u; /* 0x1504354A: mov dword ptr [eax], 0x16 */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x15043550: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, eax); /* 0x15043552: push eax */
    PUSH32(esp, eax); /* 0x15043553: push eax */
    PUSH32(esp, eax); /* 0x15043554: push eax */
    PUSH32(esp, eax); /* 0x15043555: push eax */
    PUSH32(esp, eax); /* 0x15043556: push eax */
    RECOMP_CALL(sub_1505A110); /* 0x15043557: call 0x1505a110 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x14u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x14u; /* 0x1504355C: add esp, 0x14 */
    _flag_k = FK_ADD;
L_1504355F:
    _flag_a = (uint32_t)((eax | 0xFFFFFFFFu)); _flag_b = (uint32_t)((eax | 0xFFFFFFFFu));
    eax = eax | 0xFFFFFFFFu; /* 0x1504355F: or eax, 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_150435AB; /* 0x15043562: jmp 0x150435ab */
L_15043564:
    /* cmp MEM32(ebp + 0xC), 0 */ /* 0x15043564: cmp dword ptr [ebp + 0xc], 0 */
    _flag_a = (uint32_t)(MEM32(ebp + 0xC)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_EQ(_flag_a, _flag_b)) goto L_15043545; /* 0x15043568: je 0x15043545 */
L_1504356A:
    PUSH32(esp, esi); /* 0x1504356A: push esi */
    eax = ebp + (-0x8); /* 0x1504356B: lea eax, [ebp - 8] */
    PUSH32(esp, eax); /* 0x1504356E: push eax */
    eax = ebp + (-0x4); /* 0x1504356F: lea eax, [ebp - 4] */
    PUSH32(esp, eax); /* 0x15043572: push eax */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x15043573: push dword ptr [ebp + 0x10] */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x15043576: push dword ptr [ebp + 0xc] */
    RECOMP_CALL(sub_15045463); /* 0x15043579: call 0x15045463 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x14u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x14u; /* 0x1504357E: add esp, 0x14 */
    _flag_k = FK_ADD;
    /* cmp eax, 0xFFFFFFFFu */ /* 0x15043581: cmp eax, -1 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xFFFFFFFFu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1504355F; /* 0x15043584: je 0x1504355f */
L_15043586:
    PUSH32(esp, MEM32(ebp + (-0x8))); /* 0x15043586: push dword ptr [ebp - 8] */
    PUSH32(esp, MEM32(ebp + (-0x4))); /* 0x15043589: push dword ptr [ebp - 4] */
    PUSH32(esp, esi); /* 0x1504358C: push esi */
    PUSH32(esp, 2); /* 0x1504358D: push 2 */
    RECOMP_CALL(sub_15045199); /* 0x1504358F: call 0x15045199 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, MEM32(ebp + (-0x4))); /* 0x15043594: push dword ptr [ebp - 4] */
    esi = eax; /* 0x15043597: mov esi, eax */
    RECOMP_CALL(sub_15048840); /* 0x15043599: call 0x15048840 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, MEM32(ebp + (-0x8))); /* 0x1504359E: push dword ptr [ebp - 8] */
    RECOMP_CALL(sub_15048840); /* 0x150435A1: call 0x15048840 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x18u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x18u; /* 0x150435A6: add esp, 0x18 */
    _flag_k = FK_ADD;
    eax = esi; /* 0x150435A9: mov eax, esi */
L_150435AB:
    esi = POP32_VAL(esp); /* 0x150435AB: pop esi */
    esp = ebp; ebp = POP32_VAL(esp); /* 0x150435AC: leave  */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x150435AD: ret  */
    RECOMP_REGS_OUT();
}

void sub_150435C0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x150435C0u);

L_150435C0:
    edi = edi; /* 0x150435C0: mov edi, edi */
    PUSH32(esp, ebp); /* 0x150435C2: push ebp */
    ebp = esp; /* 0x150435C3: mov ebp, esp */
    PUSH32(esp, 0); /* 0x150435C5: push 0 */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x150435C7: push dword ptr [ebp + 0xc] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x150435CA: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_150435E0); /* 0x150435CD: call 0x150435e0 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x150435D2: add esp, 0xc */
    _flag_k = FK_ADD;
    ebp = POP32_VAL(esp); /* 0x150435D5: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x150435D6: ret  */
    RECOMP_REGS_OUT();
}

void sub_150435E0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x150435E0u);

L_150435E0:
    edi = edi; /* 0x150435E0: mov edi, edi */
    PUSH32(esp, ebp); /* 0x150435E2: push ebp */
    ebp = esp; /* 0x150435E3: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0xCu; /* 0x150435E5: sub esp, 0xc */
    _flag_k = FK_CMP;
    _flag_a = (uint32_t)(MEM32(ebp + (-0x8))); _flag_b = (uint32_t)(0);
    MEM32(ebp + (-0x8)) = MEM32(ebp + (-0x8)) & 0; /* 0x150435E8: and dword ptr [ebp - 8], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, ebx); /* 0x150435EC: push ebx */
    ebx = MEM32(ebp + 0x8); /* 0x150435ED: mov ebx, dword ptr [ebp + 8] */
    /* test ebx, ebx */ /* 0x150435F0: test ebx, ebx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ebx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_15043613; /* 0x150435F2: jne 0x15043613 */
L_150435F4:
    RECOMP_CALL(sub_15036430); /* 0x150435F4: call 0x15036430 */
    RECOMP_FLAGS_IN();
    MEM32(eax) = 0x16u; /* 0x150435F9: mov dword ptr [eax], 0x16 */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x150435FF: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, eax); /* 0x15043601: push eax */
    PUSH32(esp, eax); /* 0x15043602: push eax */
    PUSH32(esp, eax); /* 0x15043603: push eax */
    PUSH32(esp, eax); /* 0x15043604: push eax */
    PUSH32(esp, eax); /* 0x15043605: push eax */
    RECOMP_CALL(sub_1505A110); /* 0x15043606: call 0x1505a110 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x14u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x14u; /* 0x1504360B: add esp, 0x14 */
    _flag_k = FK_ADD;
    goto L_15043860; /* 0x1504360E: jmp 0x15043860 */
L_15043613:
    /* cmp MEM8(ebx), 0 */ /* 0x15043613: cmp byte ptr [ebx], 0 */
    _flag_a = (uint32_t)(MEM8(ebx)) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    RECOMP_BACKEDGE();
    if (CMP_EQ(_flag_a, _flag_b)) goto L_150435F4; /* 0x15043616: je 0x150435f4 */
L_15043618:
    PUSH32(esp, esi); /* 0x15043618: push esi */
    esi = MEM32(ebp + 0xC); /* 0x15043619: mov esi, dword ptr [ebp + 0xc] */
    /* test esi, esi */ /* 0x1504361C: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1504363F; /* 0x1504361E: jne 0x1504363f */
L_15043620:
    RECOMP_CALL(sub_15036430); /* 0x15043620: call 0x15036430 */
    RECOMP_FLAGS_IN();
    MEM32(eax) = 0x16u; /* 0x15043625: mov dword ptr [eax], 0x16 */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1504362B: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, eax); /* 0x1504362D: push eax */
    PUSH32(esp, eax); /* 0x1504362E: push eax */
    PUSH32(esp, eax); /* 0x1504362F: push eax */
    PUSH32(esp, eax); /* 0x15043630: push eax */
    PUSH32(esp, eax); /* 0x15043631: push eax */
    RECOMP_CALL(sub_1505A110); /* 0x15043632: call 0x1505a110 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x14u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x14u; /* 0x15043637: add esp, 0x14 */
    _flag_k = FK_ADD;
    goto L_1504385F; /* 0x1504363A: jmp 0x1504385f */
L_1504363F:
    eax = MEM32(esi); /* 0x1504363F: mov eax, dword ptr [esi] */
    /* test eax, eax */ /* 0x15043641: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_Z(_flag_a, _flag_b)) goto L_15043620; /* 0x15043643: je 0x15043620 */
L_15043645:
    /* cmp MEM8(eax), 0 */ /* 0x15043645: cmp byte ptr [eax], 0 */
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    RECOMP_BACKEDGE();
    if (CMP_EQ(_flag_a, _flag_b)) goto L_15043620; /* 0x15043648: je 0x15043620 */
L_1504364A:
    RECOMP_CALL(sub_15036430); /* 0x1504364A: call 0x15036430 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x1504364F: push dword ptr [ebp + 0x10] */
    PUSH32(esp, esi); /* 0x15043652: push esi */
    _flag_a = (uint32_t)(MEM32(eax)); _flag_b = (uint32_t)(0);
    MEM32(eax) = MEM32(eax) & 0; /* 0x15043653: and dword ptr [eax], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, ebx); /* 0x15043656: push ebx */
    RECOMP_CALL(sub_15043310); /* 0x15043657: call 0x15043310 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x1504365C: add esp, 0xc */
    _flag_k = FK_ADD;
    RECOMP_CALL(sub_15036430); /* 0x1504365F: call 0x15036430 */
    RECOMP_FLAGS_IN();
    /* cmp MEM32(eax), 2 */ /* 0x15043664: cmp dword ptr [eax], 2 */
    _flag_a = (uint32_t)(MEM32(eax)); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_15043850; /* 0x15043667: jne 0x15043850 */
L_1504366D:
    PUSH32(esp, 0x5Cu); /* 0x1504366D: push 0x5c */
    PUSH32(esp, ebx); /* 0x1504366F: push ebx */
    RECOMP_CALL(sub_15051F70); /* 0x15043670: call 0x15051f70 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x15043675: pop ecx */
    ecx = POP32_VAL(esp); /* 0x15043676: pop ecx */
    /* test eax, eax */ /* 0x15043677: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_15043850; /* 0x15043679: jne 0x15043850 */
L_1504367F:
    PUSH32(esp, 0x2Fu); /* 0x1504367F: push 0x2f */
    PUSH32(esp, ebx); /* 0x15043681: push ebx */
    RECOMP_CALL(sub_15051F70); /* 0x15043682: call 0x15051f70 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x15043687: pop ecx */
    ecx = POP32_VAL(esp); /* 0x15043688: pop ecx */
    /* test eax, eax */ /* 0x15043689: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_15043850; /* 0x1504368B: jne 0x15043850 */
L_15043691:
    /* cmp MEM8(ebx), LO8(eax) */ /* 0x15043691: cmp byte ptr [ebx], al */
    _flag_a = (uint32_t)(MEM8(ebx)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1504369F; /* 0x15043693: je 0x1504369f */
L_15043695:
    /* cmp MEM8(ebx + 0x1), 0x3Au */ /* 0x15043695: cmp byte ptr [ebx + 1], 0x3a */
    _flag_a = (uint32_t)(MEM8(ebx + 0x1)) << 24; _flag_b = (uint32_t)(0x3Au) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_15043850; /* 0x15043699: je 0x15043850 */
L_1504369F:
    PUSH32(esp, 0x150048F4u); /* 0x1504369F: push 0x150048f4 */
    eax = ebp + (-0x8); /* 0x150436A4: lea eax, [ebp - 8] */
    PUSH32(esp, 0); /* 0x150436A7: push 0 */
    PUSH32(esp, eax); /* 0x150436A9: push eax */
    RECOMP_CALL(sub_1505D654); /* 0x150436AA: call 0x1505d654 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x150436AF: add esp, 0xc */
    _flag_k = FK_ADD;
    /* test eax, eax */ /* 0x150436B2: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_150436D7; /* 0x150436B4: je 0x150436d7 */
L_150436B6:
    /* cmp eax, 0x16u */ /* 0x150436B6: cmp eax, 0x16 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x16u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_150436CF; /* 0x150436B9: jne 0x150436cf */
L_150436BB:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x150436BB: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, eax); /* 0x150436BD: push eax */
    PUSH32(esp, eax); /* 0x150436BE: push eax */
    PUSH32(esp, eax); /* 0x150436BF: push eax */
    PUSH32(esp, eax); /* 0x150436C0: push eax */
    PUSH32(esp, eax); /* 0x150436C1: push eax */
    RECOMP_CALL(sub_1505A11B); /* 0x150436C2: call 0x1505a11b */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x14u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x14u; /* 0x150436C7: add esp, 0x14 */
    _flag_k = FK_ADD;
    goto L_15043850; /* 0x150436CA: jmp 0x15043850 */
L_150436CF:
    /* test eax, eax */ /* 0x150436CF: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_15043850; /* 0x150436D1: jne 0x15043850 */
L_150436D7:
    /* cmp MEM32(ebp + (-0x8)), 0 */ /* 0x150436D7: cmp dword ptr [ebp - 8], 0 */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x8))); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1504385F; /* 0x150436DB: je 0x1504385f */
L_150436E1:
    PUSH32(esp, 1); /* 0x150436E1: push 1 */
    PUSH32(esp, 0x104u); /* 0x150436E3: push 0x104 */
    RECOMP_CALL(sub_15048EE2); /* 0x150436E8: call 0x15048ee2 */
    RECOMP_FLAGS_IN();
    esi = eax; /* 0x150436ED: mov esi, eax */
    ecx = POP32_VAL(esp); /* 0x150436EF: pop ecx */
    ecx = POP32_VAL(esp); /* 0x150436F0: pop ecx */
    /* test esi, esi */ /* 0x150436F1: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_15043850; /* 0x150436F3: je 0x15043850 */
L_150436F9:
    ecx = MEM32(ebp + (-0x8)); /* 0x150436F9: mov ecx, dword ptr [ebp - 8] */
    PUSH32(esp, edi); /* 0x150436FC: push edi */
L_150436FD:
    edi = esi; /* 0x150436FD: mov edi, esi */
    goto L_15043745; /* 0x150436FF: jmp 0x15043745 */
L_15043701:
    /* cmp LO8(eax), 0x3Bu */ /* 0x15043701: cmp al, 0x3b */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(0x3Bu) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1504374E; /* 0x15043703: je 0x1504374e */
L_15043705:
    ecx = esi + 0x102; /* 0x15043705: lea ecx, [esi + 0x102] */
    /* cmp edi, ecx */ /* 0x1504370B: cmp edi, ecx */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_AE(_flag_a, _flag_b)) goto L_1504374E; /* 0x1504370D: jae 0x1504374e */
L_1504370F:
    eax = (int32_t)(int8_t)LO8(eax); /* 0x1504370F: movsx eax, al */
    PUSH32(esp, eax); /* 0x15043712: push eax */
    RECOMP_CALL(sub_150316F0); /* 0x15043713: call 0x150316f0 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x15043718: pop ecx */
    ecx = MEM32(ebp + (-0x4)); /* 0x15043719: mov ecx, dword ptr [ebp - 4] */
    /* test eax, eax */ /* 0x1504371C: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1504373F; /* 0x1504371E: je 0x1504373f */
L_15043720:
    /* cmp MEM8(ecx + 0x1), 0 */ /* 0x15043720: cmp byte ptr [ecx + 1], 0 */
    _flag_a = (uint32_t)(MEM8(ecx + 0x1)) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1504374E; /* 0x15043724: je 0x1504374e */
L_15043726:
    eax = edi + 0x1; /* 0x15043726: lea eax, [edi + 1] */
    MEM32(ebp + (-0xC)) = eax; /* 0x15043729: mov dword ptr [ebp - 0xc], eax */
    eax = esi + 0x102; /* 0x1504372C: lea eax, [esi + 0x102] */
    /* cmp MEM32(ebp + (-0xC)), eax */ /* 0x15043732: cmp dword ptr [ebp - 0xc], eax */
    _flag_a = (uint32_t)(MEM32(ebp + (-0xC))); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_AE(_flag_a, _flag_b)) goto L_1504374E; /* 0x15043735: jae 0x1504374e */
L_15043737:
    SET_LO8(eax, MEM8(ecx)); /* 0x15043737: mov al, byte ptr [ecx] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx + 1; /* 0x15043739: inc ecx */
    _flag_k = FK_INC;
    MEM8(edi) = (uint8_t)(LO8(eax)); /* 0x1504373A: mov byte ptr [edi], al */
    edi = MEM32(ebp + (-0xC)); /* 0x1504373C: mov edi, dword ptr [ebp - 0xc] */
L_1504373F:
    SET_LO8(eax, MEM8(ecx)); /* 0x1504373F: mov al, byte ptr [ecx] */
    MEM8(edi) = (uint8_t)(LO8(eax)); /* 0x15043741: mov byte ptr [edi], al */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(1);
    edi = edi + 1; /* 0x15043743: inc edi */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx + 1; /* 0x15043744: inc ecx */
    _flag_k = FK_INC;
L_15043745:
    SET_LO8(eax, MEM8(ecx)); /* 0x15043745: mov al, byte ptr [ecx] */
    MEM32(ebp + (-0x4)) = ecx; /* 0x15043747: mov dword ptr [ebp - 4], ecx */
    /* test LO8(eax), LO8(eax) */ /* 0x1504374A: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_15043701; /* 0x1504374C: jne 0x15043701 */
L_1504374E:
    MEM8(edi) = (uint8_t)(0); /* 0x1504374E: mov byte ptr [edi], 0 */
    /* cmp edi, esi */ /* 0x15043751: cmp edi, esi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_1504376E; /* 0x15043753: jbe 0x1504376e */
L_15043755:
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(1);
    edi = edi - 1; /* 0x15043755: dec edi */
    _flag_k = FK_DEC;
    SET_LO8(eax, MEM8(edi)); /* 0x15043756: mov al, byte ptr [edi] */
    /* cmp LO8(eax), 0x5Cu */ /* 0x15043758: cmp al, 0x5c */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(0x5Cu) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_1504376A; /* 0x1504375A: jne 0x1504376a */
L_1504375C:
    PUSH32(esp, 0x5Cu); /* 0x1504375C: push 0x5c */
    PUSH32(esp, esi); /* 0x1504375E: push esi */
    RECOMP_CALL(sub_15055AA0); /* 0x1504375F: call 0x15055aa0 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x15043764: pop ecx */
    ecx = POP32_VAL(esp); /* 0x15043765: pop ecx */
    /* cmp edi, eax */ /* 0x15043766: cmp edi, eax */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    goto L_1504376C; /* 0x15043768: jmp 0x1504376c */
L_1504376A:
    /* cmp LO8(eax), 0x2Fu */ /* 0x1504376A: cmp al, 0x2f */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(0x2Fu) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
L_1504376C:
    if (recomp_cond_cf(_flag_k, _flag_a, _flag_b, CC_E, _cf)) goto L_15043794; /* 0x1504376C: je 0x15043794 */
L_1504376E:
    PUSH32(esp, 0x150048FCu); /* 0x1504376E: push 0x150048fc */
    PUSH32(esp, 0x104u); /* 0x15043773: push 0x104 */
    PUSH32(esp, esi); /* 0x15043778: push esi */
    RECOMP_CALL(sub_1508E450); /* 0x15043779: call 0x1508e450 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x1504377E: add esp, 0xc */
    _flag_k = FK_ADD;
    /* test eax, eax */ /* 0x15043781: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_15043794; /* 0x15043783: je 0x15043794 */
L_15043785:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x15043785: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, eax); /* 0x15043787: push eax */
    PUSH32(esp, eax); /* 0x15043788: push eax */
    PUSH32(esp, eax); /* 0x15043789: push eax */
    PUSH32(esp, eax); /* 0x1504378A: push eax */
    PUSH32(esp, eax); /* 0x1504378B: push eax */
    RECOMP_CALL(sub_1505A11B); /* 0x1504378C: call 0x1505a11b */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x14u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x14u; /* 0x15043791: add esp, 0x14 */
    _flag_k = FK_ADD;
L_15043794:
    ecx = esi; /* 0x15043794: mov ecx, esi */
    edx = ecx + 0x1; /* 0x15043796: lea edx, [ecx + 1] */
L_15043799:
    SET_LO8(eax, MEM8(ecx)); /* 0x15043799: mov al, byte ptr [ecx] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx + 1; /* 0x1504379B: inc ecx */
    _flag_k = FK_INC;
    /* test LO8(eax), LO8(eax) */ /* 0x1504379C: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_15043799; /* 0x1504379E: jne 0x15043799 */
L_150437A0:
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ecx = ecx - edx; /* 0x150437A0: sub ecx, edx */
    _flag_k = FK_CMP;
    edx = ebx; /* 0x150437A2: mov edx, ebx */
    edi = edx + 0x1; /* 0x150437A4: lea edi, [edx + 1] */
L_150437A7:
    SET_LO8(eax, MEM8(edx)); /* 0x150437A7: mov al, byte ptr [edx] */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(1);
    edx = edx + 1; /* 0x150437A9: inc edx */
    _flag_k = FK_INC;
    /* test LO8(eax), LO8(eax) */ /* 0x150437AA: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_150437A7; /* 0x150437AC: jne 0x150437a7 */
L_150437AE:
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    edx = edx - edi; /* 0x150437AE: sub edx, edi */
    _flag_k = FK_CMP;
    eax = edx + ecx; /* 0x150437B0: lea eax, [edx + ecx] */
    ecx = 0x104u; /* 0x150437B3: mov ecx, 0x104 */
    /* cmp eax, ecx */ /* 0x150437B8: cmp eax, ecx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_AE(_flag_a, _flag_b)) goto L_15043848; /* 0x150437BA: jae 0x15043848 */
L_150437C0:
    PUSH32(esp, ebx); /* 0x150437C0: push ebx */
    PUSH32(esp, ecx); /* 0x150437C1: push ecx */
    PUSH32(esp, esi); /* 0x150437C2: push esi */
    RECOMP_CALL(sub_1508E450); /* 0x150437C3: call 0x1508e450 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x150437C8: add esp, 0xc */
    _flag_k = FK_ADD;
    /* test eax, eax */ /* 0x150437CB: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_150437DE; /* 0x150437CD: je 0x150437de */
L_150437CF:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x150437CF: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, eax); /* 0x150437D1: push eax */
    PUSH32(esp, eax); /* 0x150437D2: push eax */
    PUSH32(esp, eax); /* 0x150437D3: push eax */
    PUSH32(esp, eax); /* 0x150437D4: push eax */
    PUSH32(esp, eax); /* 0x150437D5: push eax */
    RECOMP_CALL(sub_1505A11B); /* 0x150437D6: call 0x1505a11b */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x14u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x14u; /* 0x150437DB: add esp, 0x14 */
    _flag_k = FK_ADD;
L_150437DE:
    RECOMP_CALL(sub_15036430); /* 0x150437DE: call 0x15036430 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x150437E3: push dword ptr [ebp + 0x10] */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x150437E6: push dword ptr [ebp + 0xc] */
    _flag_a = (uint32_t)(MEM32(eax)); _flag_b = (uint32_t)(0);
    MEM32(eax) = MEM32(eax) & 0; /* 0x150437E9: and dword ptr [eax], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, esi); /* 0x150437EC: push esi */
    RECOMP_CALL(sub_15043310); /* 0x150437ED: call 0x15043310 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x150437F2: add esp, 0xc */
    _flag_k = FK_ADD;
    RECOMP_CALL(sub_15036430); /* 0x150437F5: call 0x15036430 */
    RECOMP_FLAGS_IN();
    /* cmp MEM32(eax), 2 */ /* 0x150437FA: cmp dword ptr [eax], 2 */
    _flag_a = (uint32_t)(MEM32(eax)); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1504383A; /* 0x150437FD: je 0x1504383a */
L_150437FF:
    PUSH32(esp, 0x5Cu); /* 0x150437FF: push 0x5c */
    PUSH32(esp, esi); /* 0x15043801: push esi */
    RECOMP_CALL(sub_15051F70); /* 0x15043802: call 0x15051f70 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x15043807: pop ecx */
    ecx = POP32_VAL(esp); /* 0x15043808: pop ecx */
    /* cmp esi, eax */ /* 0x15043809: cmp esi, eax */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1504381B; /* 0x1504380B: je 0x1504381b */
L_1504380D:
    PUSH32(esp, 0x2Fu); /* 0x1504380D: push 0x2f */
    PUSH32(esp, esi); /* 0x1504380F: push esi */
    RECOMP_CALL(sub_15051F70); /* 0x15043810: call 0x15051f70 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x15043815: pop ecx */
    ecx = POP32_VAL(esp); /* 0x15043816: pop ecx */
    /* cmp esi, eax */ /* 0x15043817: cmp esi, eax */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_15043848; /* 0x15043819: jne 0x15043848 */
L_1504381B:
    edi = esi + 0x1; /* 0x1504381B: lea edi, [esi + 1] */
    PUSH32(esp, 0x5Cu); /* 0x1504381E: push 0x5c */
    PUSH32(esp, edi); /* 0x15043820: push edi */
    RECOMP_CALL(sub_15051F70); /* 0x15043821: call 0x15051f70 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x15043826: pop ecx */
    ecx = POP32_VAL(esp); /* 0x15043827: pop ecx */
    /* cmp edi, eax */ /* 0x15043828: cmp edi, eax */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1504383A; /* 0x1504382A: je 0x1504383a */
L_1504382C:
    PUSH32(esp, 0x2Fu); /* 0x1504382C: push 0x2f */
    PUSH32(esp, edi); /* 0x1504382E: push edi */
    RECOMP_CALL(sub_15051F70); /* 0x1504382F: call 0x15051f70 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x15043834: pop ecx */
    ecx = POP32_VAL(esp); /* 0x15043835: pop ecx */
    /* cmp edi, eax */ /* 0x15043836: cmp edi, eax */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_15043848; /* 0x15043838: jne 0x15043848 */
L_1504383A:
    ecx = MEM32(ebp + (-0x4)); /* 0x1504383A: mov ecx, dword ptr [ebp - 4] */
    /* cmp MEM8(ecx), 0 */ /* 0x1504383D: cmp byte ptr [ecx], 0 */
    _flag_a = (uint32_t)(MEM8(ecx)) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_15043848; /* 0x15043840: je 0x15043848 */
L_15043842:
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx + 1; /* 0x15043842: inc ecx */
    _flag_k = FK_INC;
    RECOMP_BACKEDGE();
    goto L_150436FD; /* 0x15043843: jmp 0x150436fd */
L_15043848:
    PUSH32(esp, esi); /* 0x15043848: push esi */
    RECOMP_CALL(sub_15048840); /* 0x15043849: call 0x15048840 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1504384E: pop ecx */
    edi = POP32_VAL(esp); /* 0x1504384F: pop edi */
L_15043850:
    /* cmp MEM32(ebp + (-0x8)), 0 */ /* 0x15043850: cmp dword ptr [ebp - 8], 0 */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x8))); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1504385F; /* 0x15043854: je 0x1504385f */
L_15043856:
    PUSH32(esp, MEM32(ebp + (-0x8))); /* 0x15043856: push dword ptr [ebp - 8] */
    RECOMP_CALL(sub_15048840); /* 0x15043859: call 0x15048840 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1504385E: pop ecx */
L_1504385F:
    esi = POP32_VAL(esp); /* 0x1504385F: pop esi */
L_15043860:
    _flag_a = (uint32_t)((eax | 0xFFFFFFFFu)); _flag_b = (uint32_t)((eax | 0xFFFFFFFFu));
    eax = eax | 0xFFFFFFFFu; /* 0x15043860: or eax, 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    ebx = POP32_VAL(esp); /* 0x15043863: pop ebx */
    esp = ebp; ebp = POP32_VAL(esp); /* 0x15043864: leave  */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x15043865: ret  */
    RECOMP_REGS_OUT();
}

void sub_15043870(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x15043870u);

L_15043870:
    edi = edi; /* 0x15043870: mov edi, edi */
    PUSH32(esp, ebp); /* 0x15043872: push ebp */
    ebp = esp; /* 0x15043873: mov ebp, esp */
    ecx = MEM32(ebp + 0x8); /* 0x15043875: mov ecx, dword ptr [ebp + 8] */
    /* test ecx, ecx */ /* 0x15043878: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1504389B; /* 0x1504387A: jne 0x1504389b */
L_1504387C:
    RECOMP_CALL(sub_15036430); /* 0x1504387C: call 0x15036430 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x15043881: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, ecx); /* 0x15043883: push ecx */
    PUSH32(esp, ecx); /* 0x15043884: push ecx */
    PUSH32(esp, ecx); /* 0x15043885: push ecx */
    PUSH32(esp, ecx); /* 0x15043886: push ecx */
    PUSH32(esp, ecx); /* 0x15043887: push ecx */
    MEM32(eax) = 0x16u; /* 0x15043888: mov dword ptr [eax], 0x16 */
    RECOMP_CALL(sub_1505A110); /* 0x1504388E: call 0x1505a110 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x14u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x14u; /* 0x15043893: add esp, 0x14 */
    _flag_k = FK_ADD;
    PUSH32(esp, 0x16u); /* 0x15043896: push 0x16 */
    eax = POP32_VAL(esp); /* 0x15043898: pop eax */
    ebp = POP32_VAL(esp); /* 0x15043899: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1504389A: ret  */
L_1504389B:
    eax = MEM32(0x150BCE90); /* 0x1504389B: mov eax, dword ptr [0x150bce90] */
    MEM32(ecx) = eax; /* 0x150438A0: mov dword ptr [ecx], eax */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x150438A2: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    ebp = POP32_VAL(esp); /* 0x150438A4: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x150438A5: ret  */
    RECOMP_REGS_OUT();
}

void sub_150438B0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x150438B0u);

L_150438B0:
    edi = edi; /* 0x150438B0: mov edi, edi */
    PUSH32(esp, ebp); /* 0x150438B2: push ebp */
    ebp = esp; /* 0x150438B3: mov ebp, esp */
    eax = MEM32(ebp + 0x8); /* 0x150438B5: mov eax, dword ptr [ebp + 8] */
    MEM32(0x150BCE90) = eax; /* 0x150438B8: mov dword ptr [0x150bce90], eax */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x150438BD: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    ebp = POP32_VAL(esp); /* 0x150438BF: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x150438C0: ret  */
    RECOMP_REGS_OUT();
}

void sub_150438D0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x150438D0u);

L_150438D0:
    edi = edi; /* 0x150438D0: mov edi, edi */
    PUSH32(esp, ebp); /* 0x150438D2: push ebp */
    ebp = esp; /* 0x150438D3: mov ebp, esp */
    /* cmp MEM32(ebp + 0xC), 0 */ /* 0x150438D5: cmp dword ptr [ebp + 0xc], 0 */
    _flag_a = (uint32_t)(MEM32(ebp + 0xC)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_150438F2; /* 0x150438D9: jne 0x150438f2 */
L_150438DB:
    /* cmp MEM32(ebp + 0x10), 0xFFFFu */ /* 0x150438DB: cmp dword ptr [ebp + 0x10], 0xffff */
    _flag_a = (uint32_t)(MEM32(ebp + 0x10)); _flag_b = (uint32_t)(0xFFFFu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_G(_flag_a, _flag_b)) goto L_150438FD; /* 0x150438E2: jg 0x150438fd */
L_150438E4:
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x150438E4: push dword ptr [ebp + 0x10] */
L_150438E7:
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x150438E7: push dword ptr [ebp + 8] */
    RECOMP_ICALL(MEM32(0x150C0174)); /* 0x150438EA: call dword ptr [0x150c0174] */
    RECOMP_FLAGS_IN();
    ebp = POP32_VAL(esp); /* 0x150438F0: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x150438F1: ret  */
L_150438F2:
    /* cmp MEM32(ebp + 0x10), 0xFFFFFFFFu */ /* 0x150438F2: cmp dword ptr [ebp + 0x10], -1 */
    _flag_a = (uint32_t)(MEM32(ebp + 0x10)); _flag_b = (uint32_t)(0xFFFFFFFFu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_150438FD; /* 0x150438F6: jne 0x150438fd */
L_150438F8:
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x150438F8: push dword ptr [ebp + 0xc] */
    RECOMP_BACKEDGE();
    goto L_150438E7; /* 0x150438FB: jmp 0x150438e7 */
L_150438FD:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x150438FD: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    ebp = POP32_VAL(esp); /* 0x150438FF: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x15043900: ret  */
    RECOMP_REGS_OUT();
}

void sub_15043910(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x15043910u);

L_15043910:
    edi = edi; /* 0x15043910: mov edi, edi */
    PUSH32(esp, ebp); /* 0x15043912: push ebp */
    ebp = esp; /* 0x15043913: mov ebp, esp */
    PUSH32(esp, 0); /* 0x15043915: push 0 */
    PUSH32(esp, 0); /* 0x15043917: push 0 */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x15043919: push dword ptr [ebp + 8] */
    RECOMP_ICALL(MEM32(0x150C016C)); /* 0x1504391C: call dword ptr [0x150c016c] */
    RECOMP_FLAGS_IN();
    ebp = POP32_VAL(esp); /* 0x15043922: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x15043923: ret  */
    RECOMP_REGS_OUT();
}

void sub_15043930(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x15043930u);

L_15043930:
    edi = edi; /* 0x15043930: mov edi, edi */
    PUSH32(esp, ebp); /* 0x15043932: push ebp */
    ebp = esp; /* 0x15043933: mov ebp, esp */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x15043935: push dword ptr [ebp + 8] */
    RECOMP_ICALL(MEM32(0x150C0170)); /* 0x15043938: call dword ptr [0x150c0170] */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x1504393E: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_15043949; /* 0x15043940: jne 0x15043949 */
L_15043942:
    ebp = POP32_VAL(esp); /* 0x15043942: pop ebp */
    { _itail_tgt = (uint32_t)(MEM32(0x150C006C)); goto _ljump; }
L_15043949:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x15043949: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    ebp = POP32_VAL(esp); /* 0x1504394B: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1504394C: ret  */
  _ljump:
    switch (_itail_tgt) {
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_15043960(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x15043960u);

L_15043960:
    edi = edi; /* 0x15043960: mov edi, edi */
    PUSH32(esp, ebp); /* 0x15043962: push ebp */
    ebp = esp; /* 0x15043963: mov ebp, esp */
    eax = MEM32(ebp + 0xC); /* 0x15043965: mov eax, dword ptr [ebp + 0xc] */
    /* test eax, eax */ /* 0x15043968: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1504398B; /* 0x1504396A: jne 0x1504398b */
L_1504396C:
    RECOMP_CALL(sub_15036430); /* 0x1504396C: call 0x15036430 */
    RECOMP_FLAGS_IN();
    MEM32(eax) = 0x16u; /* 0x15043971: mov dword ptr [eax], 0x16 */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x15043977: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, eax); /* 0x15043979: push eax */
    PUSH32(esp, eax); /* 0x1504397A: push eax */
    PUSH32(esp, eax); /* 0x1504397B: push eax */
    PUSH32(esp, eax); /* 0x1504397C: push eax */
    PUSH32(esp, eax); /* 0x1504397D: push eax */
    RECOMP_CALL(sub_1505A110); /* 0x1504397E: call 0x1505a110 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x14u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x14u; /* 0x15043983: add esp, 0x14 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)((eax | 0xFFFFFFFFu)); _flag_b = (uint32_t)((eax | 0xFFFFFFFFu));
    eax = eax | 0xFFFFFFFFu; /* 0x15043986: or eax, 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    ebp = POP32_VAL(esp); /* 0x15043989: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1504398A: ret  */
L_1504398B:
    /* cmp MEM8(eax), 0 */ /* 0x1504398B: cmp byte ptr [eax], 0 */
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    RECOMP_BACKEDGE();
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1504396C; /* 0x1504398E: je 0x1504396c */
L_15043990:
    ecx = MEM32(ebp + 0x10); /* 0x15043990: mov ecx, dword ptr [ebp + 0x10] */
    /* test ecx, ecx */ /* 0x15043993: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_Z(_flag_a, _flag_b)) goto L_1504396C; /* 0x15043995: je 0x1504396c */
L_15043997:
    /* cmp MEM8(ecx), 0 */ /* 0x15043997: cmp byte ptr [ecx], 0 */
    _flag_a = (uint32_t)(MEM8(ecx)) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    RECOMP_BACKEDGE();
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1504396C; /* 0x1504399A: je 0x1504396c */
L_1504399C:
    PUSH32(esp, 0); /* 0x1504399C: push 0 */
    ecx = ebp + 0x10; /* 0x1504399E: lea ecx, [ebp + 0x10] */
    PUSH32(esp, ecx); /* 0x150439A1: push ecx */
    PUSH32(esp, eax); /* 0x150439A2: push eax */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x150439A3: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_15043B60); /* 0x150439A6: call 0x15043b60 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x10u; /* 0x150439AB: add esp, 0x10 */
    _flag_k = FK_ADD;
    ebp = POP32_VAL(esp); /* 0x150439AE: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x150439AF: ret  */
    RECOMP_REGS_OUT();
}

void sub_150439C0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x150439C0u);

L_150439C0:
    edi = edi; /* 0x150439C0: mov edi, edi */
    PUSH32(esp, ebp); /* 0x150439C2: push ebp */
    ebp = esp; /* 0x150439C3: mov ebp, esp */
    edx = MEM32(ebp + 0xC); /* 0x150439C5: mov edx, dword ptr [ebp + 0xc] */
    /* test edx, edx */ /* 0x150439C8: test edx, edx */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(edx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_150439EB; /* 0x150439CA: jne 0x150439eb */
L_150439CC:
    RECOMP_CALL(sub_15036430); /* 0x150439CC: call 0x15036430 */
    RECOMP_FLAGS_IN();
    MEM32(eax) = 0x16u; /* 0x150439D1: mov dword ptr [eax], 0x16 */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x150439D7: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, eax); /* 0x150439D9: push eax */
    PUSH32(esp, eax); /* 0x150439DA: push eax */
    PUSH32(esp, eax); /* 0x150439DB: push eax */
    PUSH32(esp, eax); /* 0x150439DC: push eax */
    PUSH32(esp, eax); /* 0x150439DD: push eax */
    RECOMP_CALL(sub_1505A110); /* 0x150439DE: call 0x1505a110 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x14u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x14u; /* 0x150439E3: add esp, 0x14 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)((eax | 0xFFFFFFFFu)); _flag_b = (uint32_t)((eax | 0xFFFFFFFFu));
    eax = eax | 0xFFFFFFFFu; /* 0x150439E6: or eax, 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    ebp = POP32_VAL(esp); /* 0x150439E9: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x150439EA: ret  */
L_150439EB:
    /* cmp MEM8(edx), 0 */ /* 0x150439EB: cmp byte ptr [edx], 0 */
    _flag_a = (uint32_t)(MEM8(edx)) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    RECOMP_BACKEDGE();
    if (CMP_EQ(_flag_a, _flag_b)) goto L_150439CC; /* 0x150439EE: je 0x150439cc */
L_150439F0:
    eax = MEM32(ebp + 0x10); /* 0x150439F0: mov eax, dword ptr [ebp + 0x10] */
    /* test eax, eax */ /* 0x150439F3: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_Z(_flag_a, _flag_b)) goto L_150439CC; /* 0x150439F5: je 0x150439cc */
L_150439F7:
    /* cmp MEM8(eax), 0 */ /* 0x150439F7: cmp byte ptr [eax], 0 */
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    RECOMP_BACKEDGE();
    if (CMP_EQ(_flag_a, _flag_b)) goto L_150439CC; /* 0x150439FA: je 0x150439cc */
L_150439FC:
    ecx = ebp + 0x10; /* 0x150439FC: lea ecx, [ebp + 0x10] */
L_150439FF:
    eax = MEM32(ecx); /* 0x150439FF: mov eax, dword ptr [ecx] */
    ecx = ecx + 0x4; /* 0x15043A01: lea ecx, [ecx + 4] */
    /* test eax, eax */ /* 0x15043A04: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_150439FF; /* 0x15043A06: jne 0x150439ff */
L_15043A08:
    PUSH32(esp, MEM32(ecx)); /* 0x15043A08: push dword ptr [ecx] */
    eax = ebp + 0x10; /* 0x15043A0A: lea eax, [ebp + 0x10] */
    PUSH32(esp, eax); /* 0x15043A0D: push eax */
    PUSH32(esp, edx); /* 0x15043A0E: push edx */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x15043A0F: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_15043B60); /* 0x15043A12: call 0x15043b60 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x10u; /* 0x15043A17: add esp, 0x10 */
    _flag_k = FK_ADD;
    ebp = POP32_VAL(esp); /* 0x15043A1A: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x15043A1B: ret  */
    RECOMP_REGS_OUT();
}

void sub_15043A30(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x15043A30u);

L_15043A30:
    edi = edi; /* 0x15043A30: mov edi, edi */
    PUSH32(esp, ebp); /* 0x15043A32: push ebp */
    ebp = esp; /* 0x15043A33: mov ebp, esp */
    eax = MEM32(ebp + 0xC); /* 0x15043A35: mov eax, dword ptr [ebp + 0xc] */
    /* test eax, eax */ /* 0x15043A38: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_15043A5B; /* 0x15043A3A: jne 0x15043a5b */
L_15043A3C:
    RECOMP_CALL(sub_15036430); /* 0x15043A3C: call 0x15036430 */
    RECOMP_FLAGS_IN();
    MEM32(eax) = 0x16u; /* 0x15043A41: mov dword ptr [eax], 0x16 */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x15043A47: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, eax); /* 0x15043A49: push eax */
    PUSH32(esp, eax); /* 0x15043A4A: push eax */
    PUSH32(esp, eax); /* 0x15043A4B: push eax */
    PUSH32(esp, eax); /* 0x15043A4C: push eax */
    PUSH32(esp, eax); /* 0x15043A4D: push eax */
    RECOMP_CALL(sub_1505A110); /* 0x15043A4E: call 0x1505a110 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x14u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x14u; /* 0x15043A53: add esp, 0x14 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)((eax | 0xFFFFFFFFu)); _flag_b = (uint32_t)((eax | 0xFFFFFFFFu));
    eax = eax | 0xFFFFFFFFu; /* 0x15043A56: or eax, 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    ebp = POP32_VAL(esp); /* 0x15043A59: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x15043A5A: ret  */
L_15043A5B:
    /* cmp MEM8(eax), 0 */ /* 0x15043A5B: cmp byte ptr [eax], 0 */
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    RECOMP_BACKEDGE();
    if (CMP_EQ(_flag_a, _flag_b)) goto L_15043A3C; /* 0x15043A5E: je 0x15043a3c */
L_15043A60:
    ecx = MEM32(ebp + 0x10); /* 0x15043A60: mov ecx, dword ptr [ebp + 0x10] */
    /* test ecx, ecx */ /* 0x15043A63: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_Z(_flag_a, _flag_b)) goto L_15043A3C; /* 0x15043A65: je 0x15043a3c */
L_15043A67:
    /* cmp MEM8(ecx), 0 */ /* 0x15043A67: cmp byte ptr [ecx], 0 */
    _flag_a = (uint32_t)(MEM8(ecx)) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    RECOMP_BACKEDGE();
    if (CMP_EQ(_flag_a, _flag_b)) goto L_15043A3C; /* 0x15043A6A: je 0x15043a3c */
L_15043A6C:
    ecx = ebp + 0x10; /* 0x15043A6C: lea ecx, [ebp + 0x10] */
    PUSH32(esp, ecx); /* 0x15043A6F: push ecx */
    PUSH32(esp, eax); /* 0x15043A70: push eax */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x15043A71: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_15043E10); /* 0x15043A74: call 0x15043e10 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x15043A79: add esp, 0xc */
    _flag_k = FK_ADD;
    ebp = POP32_VAL(esp); /* 0x15043A7C: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x15043A7D: ret  */
    RECOMP_REGS_OUT();
}

void sub_15043A90(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x15043A90u);

L_15043A90:
    edi = edi; /* 0x15043A90: mov edi, edi */
    PUSH32(esp, ebp); /* 0x15043A92: push ebp */
    ebp = esp; /* 0x15043A93: mov ebp, esp */
    edx = MEM32(ebp + 0xC); /* 0x15043A95: mov edx, dword ptr [ebp + 0xc] */
    /* test edx, edx */ /* 0x15043A98: test edx, edx */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(edx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_15043ABB; /* 0x15043A9A: jne 0x15043abb */
L_15043A9C:
    RECOMP_CALL(sub_15036430); /* 0x15043A9C: call 0x15036430 */
    RECOMP_FLAGS_IN();
    MEM32(eax) = 0x16u; /* 0x15043AA1: mov dword ptr [eax], 0x16 */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x15043AA7: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, eax); /* 0x15043AA9: push eax */
    PUSH32(esp, eax); /* 0x15043AAA: push eax */
    PUSH32(esp, eax); /* 0x15043AAB: push eax */
    PUSH32(esp, eax); /* 0x15043AAC: push eax */
    PUSH32(esp, eax); /* 0x15043AAD: push eax */
    RECOMP_CALL(sub_1505A110); /* 0x15043AAE: call 0x1505a110 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x14u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x14u; /* 0x15043AB3: add esp, 0x14 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)((eax | 0xFFFFFFFFu)); _flag_b = (uint32_t)((eax | 0xFFFFFFFFu));
    eax = eax | 0xFFFFFFFFu; /* 0x15043AB6: or eax, 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    ebp = POP32_VAL(esp); /* 0x15043AB9: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x15043ABA: ret  */
L_15043ABB:
    /* cmp MEM8(edx), 0 */ /* 0x15043ABB: cmp byte ptr [edx], 0 */
    _flag_a = (uint32_t)(MEM8(edx)) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    RECOMP_BACKEDGE();
    if (CMP_EQ(_flag_a, _flag_b)) goto L_15043A9C; /* 0x15043ABE: je 0x15043a9c */
L_15043AC0:
    eax = MEM32(ebp + 0x10); /* 0x15043AC0: mov eax, dword ptr [ebp + 0x10] */
    /* test eax, eax */ /* 0x15043AC3: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_Z(_flag_a, _flag_b)) goto L_15043A9C; /* 0x15043AC5: je 0x15043a9c */
L_15043AC7:
    /* cmp MEM8(eax), 0 */ /* 0x15043AC7: cmp byte ptr [eax], 0 */
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    RECOMP_BACKEDGE();
    if (CMP_EQ(_flag_a, _flag_b)) goto L_15043A9C; /* 0x15043ACA: je 0x15043a9c */
L_15043ACC:
    ecx = ebp + 0x10; /* 0x15043ACC: lea ecx, [ebp + 0x10] */
L_15043ACF:
    eax = MEM32(ecx); /* 0x15043ACF: mov eax, dword ptr [ecx] */
    ecx = ecx + 0x4; /* 0x15043AD1: lea ecx, [ecx + 4] */
    /* test eax, eax */ /* 0x15043AD4: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_15043ACF; /* 0x15043AD6: jne 0x15043acf */
L_15043AD8:
    PUSH32(esp, MEM32(ecx)); /* 0x15043AD8: push dword ptr [ecx] */
    eax = ebp + 0x10; /* 0x15043ADA: lea eax, [ebp + 0x10] */
    PUSH32(esp, eax); /* 0x15043ADD: push eax */
    PUSH32(esp, edx); /* 0x15043ADE: push edx */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x15043ADF: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_15043E30); /* 0x15043AE2: call 0x15043e30 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x10u; /* 0x15043AE7: add esp, 0x10 */
    _flag_k = FK_ADD;
    ebp = POP32_VAL(esp); /* 0x15043AEA: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x15043AEB: ret  */
    RECOMP_REGS_OUT();
}

void sub_15043B00(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x15043B00u);

L_15043B00:
    edi = edi; /* 0x15043B00: mov edi, edi */
    PUSH32(esp, ebp); /* 0x15043B02: push ebp */
    ebp = esp; /* 0x15043B03: mov ebp, esp */
    eax = MEM32(ebp + 0xC); /* 0x15043B05: mov eax, dword ptr [ebp + 0xc] */
    /* test eax, eax */ /* 0x15043B08: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_15043B2B; /* 0x15043B0A: jne 0x15043b2b */
L_15043B0C:
    RECOMP_CALL(sub_15036430); /* 0x15043B0C: call 0x15036430 */
    RECOMP_FLAGS_IN();
    MEM32(eax) = 0x16u; /* 0x15043B11: mov dword ptr [eax], 0x16 */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x15043B17: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, eax); /* 0x15043B19: push eax */
    PUSH32(esp, eax); /* 0x15043B1A: push eax */
    PUSH32(esp, eax); /* 0x15043B1B: push eax */
    PUSH32(esp, eax); /* 0x15043B1C: push eax */
    PUSH32(esp, eax); /* 0x15043B1D: push eax */
    RECOMP_CALL(sub_1505A110); /* 0x15043B1E: call 0x1505a110 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x14u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x14u; /* 0x15043B23: add esp, 0x14 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)((eax | 0xFFFFFFFFu)); _flag_b = (uint32_t)((eax | 0xFFFFFFFFu));
    eax = eax | 0xFFFFFFFFu; /* 0x15043B26: or eax, 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    ebp = POP32_VAL(esp); /* 0x15043B29: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x15043B2A: ret  */
L_15043B2B:
    /* cmp MEM8(eax), 0 */ /* 0x15043B2B: cmp byte ptr [eax], 0 */
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    RECOMP_BACKEDGE();
    if (CMP_EQ(_flag_a, _flag_b)) goto L_15043B0C; /* 0x15043B2E: je 0x15043b0c */
L_15043B30:
    ecx = MEM32(ebp + 0x10); /* 0x15043B30: mov ecx, dword ptr [ebp + 0x10] */
    /* test ecx, ecx */ /* 0x15043B33: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_Z(_flag_a, _flag_b)) goto L_15043B0C; /* 0x15043B35: je 0x15043b0c */
L_15043B37:
    edx = MEM32(ecx); /* 0x15043B37: mov edx, dword ptr [ecx] */
    /* test edx, edx */ /* 0x15043B39: test edx, edx */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(edx);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_Z(_flag_a, _flag_b)) goto L_15043B0C; /* 0x15043B3B: je 0x15043b0c */
L_15043B3D:
    /* cmp MEM8(edx), 0 */ /* 0x15043B3D: cmp byte ptr [edx], 0 */
    _flag_a = (uint32_t)(MEM8(edx)) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    RECOMP_BACKEDGE();
    if (CMP_EQ(_flag_a, _flag_b)) goto L_15043B0C; /* 0x15043B40: je 0x15043b0c */
L_15043B42:
    PUSH32(esp, 0); /* 0x15043B42: push 0 */
    PUSH32(esp, ecx); /* 0x15043B44: push ecx */
    PUSH32(esp, eax); /* 0x15043B45: push eax */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x15043B46: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_15043B60); /* 0x15043B49: call 0x15043b60 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x10u; /* 0x15043B4E: add esp, 0x10 */
    _flag_k = FK_ADD;
    ebp = POP32_VAL(esp); /* 0x15043B51: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x15043B52: ret  */
    RECOMP_REGS_OUT();
}

void sub_15043B60(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x15043B60u);

L_15043B60:
    edi = edi; /* 0x15043B60: mov edi, edi */
    PUSH32(esp, ebp); /* 0x15043B62: push ebp */
    ebp = esp; /* 0x15043B63: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x14u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x14u; /* 0x15043B65: sub esp, 0x14 */
    _flag_k = FK_CMP;
    PUSH32(esp, ebx); /* 0x15043B68: push ebx */
    ebx = MEM32(ebp + 0xC); /* 0x15043B69: mov ebx, dword ptr [ebp + 0xc] */
    PUSH32(esp, esi); /* 0x15043B6C: push esi */
    PUSH32(esp, edi); /* 0x15043B6D: push edi */
    edi = ebx; /* 0x15043B6E: mov edi, ebx */
    /* test ebx, ebx */ /* 0x15043B70: test ebx, ebx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ebx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_15043B96; /* 0x15043B72: jne 0x15043b96 */
L_15043B74:
    RECOMP_CALL(sub_15036430); /* 0x15043B74: call 0x15036430 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    esi = 0; /* 0x15043B79: xor esi, esi */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, esi); /* 0x15043B7B: push esi */
    PUSH32(esp, esi); /* 0x15043B7C: push esi */
    PUSH32(esp, esi); /* 0x15043B7D: push esi */
    PUSH32(esp, esi); /* 0x15043B7E: push esi */
    PUSH32(esp, esi); /* 0x15043B7F: push esi */
    MEM32(eax) = 0x16u; /* 0x15043B80: mov dword ptr [eax], 0x16 */
    RECOMP_CALL(sub_1505A110); /* 0x15043B86: call 0x1505a110 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x14u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x14u; /* 0x15043B8B: add esp, 0x14 */
    _flag_k = FK_ADD;
L_15043B8E:
    _flag_a = (uint32_t)((eax | 0xFFFFFFFFu)); _flag_b = (uint32_t)((eax | 0xFFFFFFFFu));
    eax = eax | 0xFFFFFFFFu; /* 0x15043B8E: or eax, 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_15043D81; /* 0x15043B91: jmp 0x15043d81 */
L_15043B96:
    /* cmp MEM8(ebx), 0 */ /* 0x15043B96: cmp byte ptr [ebx], 0 */
    _flag_a = (uint32_t)(MEM8(ebx)) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    RECOMP_BACKEDGE();
    if (CMP_EQ(_flag_a, _flag_b)) goto L_15043B74; /* 0x15043B99: je 0x15043b74 */
L_15043B9B:
    eax = MEM32(ebp + 0x10); /* 0x15043B9B: mov eax, dword ptr [ebp + 0x10] */
    /* test eax, eax */ /* 0x15043B9E: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_Z(_flag_a, _flag_b)) goto L_15043B74; /* 0x15043BA0: je 0x15043b74 */
L_15043BA2:
    eax = MEM32(eax); /* 0x15043BA2: mov eax, dword ptr [eax] */
    /* test eax, eax */ /* 0x15043BA4: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_Z(_flag_a, _flag_b)) goto L_15043B74; /* 0x15043BA6: je 0x15043b74 */
L_15043BA8:
    /* cmp MEM8(eax), 0 */ /* 0x15043BA8: cmp byte ptr [eax], 0 */
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    RECOMP_BACKEDGE();
    if (CMP_EQ(_flag_a, _flag_b)) goto L_15043B74; /* 0x15043BAB: je 0x15043b74 */
L_15043BAD:
    PUSH32(esp, 0x5Cu); /* 0x15043BAD: push 0x5c */
    PUSH32(esp, ebx); /* 0x15043BAF: push ebx */
    RECOMP_CALL(sub_15055AA0); /* 0x15043BB0: call 0x15055aa0 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0x2Fu); /* 0x15043BB5: push 0x2f */
    PUSH32(esp, ebx); /* 0x15043BB7: push ebx */
    MEM32(ebp + (-0x4)) = eax; /* 0x15043BB8: mov dword ptr [ebp - 4], eax */
    RECOMP_CALL(sub_15055AA0); /* 0x15043BBB: call 0x15055aa0 */
    RECOMP_FLAGS_IN();
    ecx = eax; /* 0x15043BC0: mov ecx, eax */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x10u; /* 0x15043BC2: add esp, 0x10 */
    _flag_k = FK_ADD;
    eax = MEM32(ebp + (-0x4)); /* 0x15043BC5: mov eax, dword ptr [ebp - 4] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    esi = 0; /* 0x15043BC8: xor esi, esi */
    _cf = 0;
    _flag_k = FK_TEST;
    /* test ecx, ecx */ /* 0x15043BCA: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_15043C4D; /* 0x15043BCC: jne 0x15043c4d */
L_15043BCE:
    /* test eax, eax */ /* 0x15043BCE: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_15043C57; /* 0x15043BD0: jne 0x15043c57 */
L_15043BD6:
    PUSH32(esp, 0x3Au); /* 0x15043BD6: push 0x3a */
    PUSH32(esp, ebx); /* 0x15043BD8: push ebx */
    RECOMP_CALL(sub_15051F70); /* 0x15043BD9: call 0x15051f70 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x15043BDE: pop ecx */
    ecx = POP32_VAL(esp); /* 0x15043BDF: pop ecx */
    /* test eax, eax */ /* 0x15043BE0: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_15043C57; /* 0x15043BE2: jne 0x15043c57 */
L_15043BE4:
    ecx = ebx; /* 0x15043BE4: mov ecx, ebx */
    edx = ecx + 0x1; /* 0x15043BE6: lea edx, [ecx + 1] */
L_15043BE9:
    SET_LO8(eax, MEM8(ecx)); /* 0x15043BE9: mov al, byte ptr [ecx] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx + 1; /* 0x15043BEB: inc ecx */
    _flag_k = FK_INC;
    /* test LO8(eax), LO8(eax) */ /* 0x15043BEC: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_15043BE9; /* 0x15043BEE: jne 0x15043be9 */
L_15043BF0:
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ecx = ecx - edx; /* 0x15043BF0: sub ecx, edx */
    _flag_k = FK_CMP;
    PUSH32(esp, 1); /* 0x15043BF2: push 1 */
    eax = ecx + 0x3; /* 0x15043BF4: lea eax, [ecx + 3] */
    PUSH32(esp, eax); /* 0x15043BF7: push eax */
    MEM32(ebp + (-0x4)) = eax; /* 0x15043BF8: mov dword ptr [ebp - 4], eax */
    RECOMP_CALL(sub_15048EE2); /* 0x15043BFB: call 0x15048ee2 */
    RECOMP_FLAGS_IN();
    edi = eax; /* 0x15043C00: mov edi, eax */
    ecx = POP32_VAL(esp); /* 0x15043C02: pop ecx */
    ecx = POP32_VAL(esp); /* 0x15043C03: pop ecx */
    /* test edi, edi */ /* 0x15043C04: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_Z(_flag_a, _flag_b)) goto L_15043B8E; /* 0x15043C06: je 0x15043b8e */
L_15043C08:
    PUSH32(esp, 0x150048F0u); /* 0x15043C08: push 0x150048f0 */
    PUSH32(esp, MEM32(ebp + (-0x4))); /* 0x15043C0D: push dword ptr [ebp - 4] */
    PUSH32(esp, edi); /* 0x15043C10: push edi */
    RECOMP_CALL(sub_1508E640); /* 0x15043C11: call 0x1508e640 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x15043C16: add esp, 0xc */
    _flag_k = FK_ADD;
    /* test eax, eax */ /* 0x15043C19: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_15043C2A; /* 0x15043C1B: je 0x15043c2a */
L_15043C1D:
    PUSH32(esp, esi); /* 0x15043C1D: push esi */
    PUSH32(esp, esi); /* 0x15043C1E: push esi */
    PUSH32(esp, esi); /* 0x15043C1F: push esi */
    PUSH32(esp, esi); /* 0x15043C20: push esi */
    PUSH32(esp, esi); /* 0x15043C21: push esi */
    RECOMP_CALL(sub_1505A11B); /* 0x15043C22: call 0x1505a11b */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x14u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x14u; /* 0x15043C27: add esp, 0x14 */
    _flag_k = FK_ADD;
L_15043C2A:
    PUSH32(esp, ebx); /* 0x15043C2A: push ebx */
    PUSH32(esp, MEM32(ebp + (-0x4))); /* 0x15043C2B: push dword ptr [ebp - 4] */
    PUSH32(esp, edi); /* 0x15043C2E: push edi */
    RECOMP_CALL(sub_1508E450); /* 0x15043C2F: call 0x1508e450 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x15043C34: add esp, 0xc */
    _flag_k = FK_ADD;
    /* test eax, eax */ /* 0x15043C37: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_15043C48; /* 0x15043C39: je 0x15043c48 */
L_15043C3B:
    PUSH32(esp, esi); /* 0x15043C3B: push esi */
    PUSH32(esp, esi); /* 0x15043C3C: push esi */
    PUSH32(esp, esi); /* 0x15043C3D: push esi */
    PUSH32(esp, esi); /* 0x15043C3E: push esi */
    PUSH32(esp, esi); /* 0x15043C3F: push esi */
    RECOMP_CALL(sub_1505A11B); /* 0x15043C40: call 0x1505a11b */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x14u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x14u; /* 0x15043C45: add esp, 0x14 */
    _flag_k = FK_ADD;
L_15043C48:
    eax = edi + 0x2; /* 0x15043C48: lea eax, [edi + 2] */
    goto L_15043C57; /* 0x15043C4B: jmp 0x15043c57 */
L_15043C4D:
    /* test eax, eax */ /* 0x15043C4D: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_15043C55; /* 0x15043C4F: je 0x15043c55 */
L_15043C51:
    /* cmp ecx, eax */ /* 0x15043C51: cmp ecx, eax */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_15043C57; /* 0x15043C53: jbe 0x15043c57 */
L_15043C55:
    eax = ecx; /* 0x15043C55: mov eax, ecx */
L_15043C57:
    PUSH32(esp, 0x2Eu); /* 0x15043C57: push 0x2e */
    PUSH32(esp, eax); /* 0x15043C59: push eax */
    RECOMP_CALL(sub_15055AA0); /* 0x15043C5A: call 0x15055aa0 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x15043C5F: pop ecx */
    ecx = POP32_VAL(esp); /* 0x15043C60: pop ecx */
    /* test eax, eax */ /* 0x15043C61: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_15043C8F; /* 0x15043C63: je 0x15043c8f */
L_15043C65:
    PUSH32(esp, esi); /* 0x15043C65: push esi */
    PUSH32(esp, edi); /* 0x15043C66: push edi */
    RECOMP_CALL(sub_15036590); /* 0x15043C67: call 0x15036590 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x15043C6C: pop ecx */
    ecx = POP32_VAL(esp); /* 0x15043C6D: pop ecx */
    /* test eax, eax */ /* 0x15043C6E: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_15043D71; /* 0x15043C70: jne 0x15043d71 */
L_15043C76:
    PUSH32(esp, MEM32(ebp + 0x14)); /* 0x15043C76: push dword ptr [ebp + 0x14] */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x15043C79: push dword ptr [ebp + 0x10] */
    PUSH32(esp, edi); /* 0x15043C7C: push edi */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x15043C7D: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_15043D8C); /* 0x15043C80: call 0x15043d8c */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x10u; /* 0x15043C85: add esp, 0x10 */
    _flag_k = FK_ADD;
    esi = eax; /* 0x15043C88: mov esi, eax */
    goto L_15043D74; /* 0x15043C8A: jmp 0x15043d74 */
L_15043C8F:
    ecx = edi; /* 0x15043C8F: mov ecx, edi */
    edx = ecx + 0x1; /* 0x15043C91: lea edx, [ecx + 1] */
L_15043C94:
    SET_LO8(eax, MEM8(ecx)); /* 0x15043C94: mov al, byte ptr [ecx] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx + 1; /* 0x15043C96: inc ecx */
    _flag_k = FK_INC;
    /* test LO8(eax), LO8(eax) */ /* 0x15043C97: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_15043C94; /* 0x15043C99: jne 0x15043c94 */
L_15043C9B:
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ecx = ecx - edx; /* 0x15043C9B: sub ecx, edx */
    _flag_k = FK_CMP;
    PUSH32(esp, 1); /* 0x15043C9D: push 1 */
    MEM32(ebp + (-0xC)) = ecx; /* 0x15043C9F: mov dword ptr [ebp - 0xc], ecx */
    eax = ecx + 0x5; /* 0x15043CA2: lea eax, [ecx + 5] */
    PUSH32(esp, eax); /* 0x15043CA5: push eax */
    MEM32(ebp + (-0x8)) = eax; /* 0x15043CA6: mov dword ptr [ebp - 8], eax */
    RECOMP_CALL(sub_15048EE2); /* 0x15043CA9: call 0x15048ee2 */
    RECOMP_FLAGS_IN();
    MEM32(ebp + (-0x4)) = eax; /* 0x15043CAE: mov dword ptr [ebp - 4], eax */
    ecx = POP32_VAL(esp); /* 0x15043CB1: pop ecx */
    ecx = POP32_VAL(esp); /* 0x15043CB2: pop ecx */
    /* test eax, eax */ /* 0x15043CB3: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_Z(_flag_a, _flag_b)) goto L_15043B8E; /* 0x15043CB5: je 0x15043b8e */
L_15043CBB:
    PUSH32(esp, edi); /* 0x15043CBB: push edi */
    PUSH32(esp, MEM32(ebp + (-0x8))); /* 0x15043CBC: push dword ptr [ebp - 8] */
    PUSH32(esp, eax); /* 0x15043CBF: push eax */
    RECOMP_CALL(sub_1508E640); /* 0x15043CC0: call 0x1508e640 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x15043CC5: add esp, 0xc */
    _flag_k = FK_ADD;
    /* test eax, eax */ /* 0x15043CC8: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_15043CD9; /* 0x15043CCA: je 0x15043cd9 */
L_15043CCC:
    PUSH32(esp, esi); /* 0x15043CCC: push esi */
    PUSH32(esp, esi); /* 0x15043CCD: push esi */
    PUSH32(esp, esi); /* 0x15043CCE: push esi */
    PUSH32(esp, esi); /* 0x15043CCF: push esi */
    PUSH32(esp, esi); /* 0x15043CD0: push esi */
    RECOMP_CALL(sub_1505A11B); /* 0x15043CD1: call 0x1505a11b */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x14u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x14u; /* 0x15043CD6: add esp, 0x14 */
    _flag_k = FK_ADD;
L_15043CD9:
    ecx = MEM32(ebp + (-0x4)); /* 0x15043CD9: mov ecx, dword ptr [ebp - 4] */
    _flag_a = (uint32_t)(MEM32(ebp + (-0xC))); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM32(ebp + (-0xC)) = MEM32(ebp + (-0xC)) + ecx; /* 0x15043CDC: add dword ptr [ebp - 0xc], ecx */
    _flag_k = FK_ADD;
    RECOMP_CALL(sub_15036430); /* 0x15043CDF: call 0x15036430 */
    RECOMP_FLAGS_IN();
    ecx = MEM32(ebp + (-0x8)); /* 0x15043CE4: mov ecx, dword ptr [ebp - 8] */
    edx = MEM32(ebp + (-0xC)); /* 0x15043CE7: mov edx, dword ptr [ebp - 0xc] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ecx = ecx - edx; /* 0x15043CEA: sub ecx, edx */
    _flag_k = FK_CMP;
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(MEM32(ebp + (-0x4)));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + MEM32(ebp + (-0x4)); /* 0x15043CEC: add ecx, dword ptr [ebp - 4] */
    _flag_k = FK_ADD;
    eax = MEM32(eax); /* 0x15043CEF: mov eax, dword ptr [eax] */
    MEM32(ebp + (-0x14)) = eax; /* 0x15043CF1: mov dword ptr [ebp - 0x14], eax */
    eax = 0x150BA024u; /* 0x15043CF4: mov eax, 0x150ba024 */
    MEM32(ebp + (-0x10)) = ecx; /* 0x15043CF9: mov dword ptr [ebp - 0x10], ecx */
    MEM32(ebp + (-0x8)) = eax; /* 0x15043CFC: mov dword ptr [ebp - 8], eax */
L_15043CFF:
    PUSH32(esp, MEM32(eax)); /* 0x15043CFF: push dword ptr [eax] */
    PUSH32(esp, ecx); /* 0x15043D01: push ecx */
    PUSH32(esp, edx); /* 0x15043D02: push edx */
    RECOMP_CALL(sub_1508E640); /* 0x15043D03: call 0x1508e640 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x15043D08: add esp, 0xc */
    _flag_k = FK_ADD;
    /* test eax, eax */ /* 0x15043D0B: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_15043D1C; /* 0x15043D0D: je 0x15043d1c */
L_15043D0F:
    PUSH32(esp, esi); /* 0x15043D0F: push esi */
    PUSH32(esp, esi); /* 0x15043D10: push esi */
    PUSH32(esp, esi); /* 0x15043D11: push esi */
    PUSH32(esp, esi); /* 0x15043D12: push esi */
    PUSH32(esp, esi); /* 0x15043D13: push esi */
    RECOMP_CALL(sub_1505A11B); /* 0x15043D14: call 0x1505a11b */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x14u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x14u; /* 0x15043D19: add esp, 0x14 */
    _flag_k = FK_ADD;
L_15043D1C:
    PUSH32(esp, esi); /* 0x15043D1C: push esi */
    PUSH32(esp, MEM32(ebp + (-0x4))); /* 0x15043D1D: push dword ptr [ebp - 4] */
    RECOMP_CALL(sub_15036590); /* 0x15043D20: call 0x15036590 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x15043D25: pop ecx */
    ecx = POP32_VAL(esp); /* 0x15043D26: pop ecx */
    /* test eax, eax */ /* 0x15043D27: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_15043D46; /* 0x15043D29: je 0x15043d46 */
L_15043D2B:
    eax = MEM32(ebp + (-0x8)); /* 0x15043D2B: mov eax, dword ptr [ebp - 8] */
    edx = MEM32(ebp + (-0xC)); /* 0x15043D2E: mov edx, dword ptr [ebp - 0xc] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - 4; /* 0x15043D31: sub eax, 4 */
    _flag_k = FK_CMP;
    ecx = MEM32(ebp + (-0x10)); /* 0x15043D34: mov ecx, dword ptr [ebp - 0x10] */
    MEM32(ebp + (-0x8)) = eax; /* 0x15043D37: mov dword ptr [ebp - 8], eax */
    /* cmp eax, 0x150BA018u */ /* 0x15043D3A: cmp eax, 0x150ba018 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x150BA018u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_GE(_flag_a, _flag_b)) goto L_15043CFF; /* 0x15043D3F: jge 0x15043cff */
L_15043D41:
    _flag_a = (uint32_t)((esi | 0xFFFFFFFFu)); _flag_b = (uint32_t)((esi | 0xFFFFFFFFu));
    esi = esi | 0xFFFFFFFFu; /* 0x15043D41: or esi, 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_15043D66; /* 0x15043D44: jmp 0x15043d66 */
L_15043D46:
    RECOMP_CALL(sub_15036430); /* 0x15043D46: call 0x15036430 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, MEM32(ebp + 0x14)); /* 0x15043D4B: push dword ptr [ebp + 0x14] */
    ecx = MEM32(ebp + (-0x14)); /* 0x15043D4E: mov ecx, dword ptr [ebp - 0x14] */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x15043D51: push dword ptr [ebp + 0x10] */
    MEM32(eax) = ecx; /* 0x15043D54: mov dword ptr [eax], ecx */
    PUSH32(esp, MEM32(ebp + (-0x4))); /* 0x15043D56: push dword ptr [ebp - 4] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x15043D59: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_15043D8C); /* 0x15043D5C: call 0x15043d8c */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x10u; /* 0x15043D61: add esp, 0x10 */
    _flag_k = FK_ADD;
    esi = eax; /* 0x15043D64: mov esi, eax */
L_15043D66:
    PUSH32(esp, MEM32(ebp + (-0x4))); /* 0x15043D66: push dword ptr [ebp - 4] */
    RECOMP_CALL(sub_15048840); /* 0x15043D69: call 0x15048840 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x15043D6E: pop ecx */
    goto L_15043D74; /* 0x15043D6F: jmp 0x15043d74 */
L_15043D71:
    _flag_a = (uint32_t)((esi | 0xFFFFFFFFu)); _flag_b = (uint32_t)((esi | 0xFFFFFFFFu));
    esi = esi | 0xFFFFFFFFu; /* 0x15043D71: or esi, 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
L_15043D74:
    /* cmp edi, ebx */ /* 0x15043D74: cmp edi, ebx */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_15043D7F; /* 0x15043D76: je 0x15043d7f */
L_15043D78:
    PUSH32(esp, edi); /* 0x15043D78: push edi */
    RECOMP_CALL(sub_15048840); /* 0x15043D79: call 0x15048840 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x15043D7E: pop ecx */
L_15043D7F:
    eax = esi; /* 0x15043D7F: mov eax, esi */
L_15043D81:
    edi = POP32_VAL(esp); /* 0x15043D81: pop edi */
    esi = POP32_VAL(esp); /* 0x15043D82: pop esi */
    ebx = POP32_VAL(esp); /* 0x15043D83: pop ebx */
    esp = ebp; ebp = POP32_VAL(esp); /* 0x15043D84: leave  */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x15043D85: ret  */
    RECOMP_REGS_OUT();
}

void sub_15043D8C(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x15043D8Cu);

L_15043D8C:
    edi = edi; /* 0x15043D8C: mov edi, edi */
    PUSH32(esp, ebp); /* 0x15043D8E: push ebp */
    ebp = esp; /* 0x15043D8F: mov ebp, esp */
    PUSH32(esp, ecx); /* 0x15043D91: push ecx */
    PUSH32(esp, ecx); /* 0x15043D92: push ecx */
    PUSH32(esp, esi); /* 0x15043D93: push esi */
    esi = MEM32(ebp + 0xC); /* 0x15043D94: mov esi, dword ptr [ebp + 0xc] */
    /* test esi, esi */ /* 0x15043D97: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_15043DBA; /* 0x15043D99: jne 0x15043dba */
L_15043D9B:
    RECOMP_CALL(sub_15036430); /* 0x15043D9B: call 0x15036430 */
    RECOMP_FLAGS_IN();
    MEM32(eax) = 0x16u; /* 0x15043DA0: mov dword ptr [eax], 0x16 */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x15043DA6: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, eax); /* 0x15043DA8: push eax */
    PUSH32(esp, eax); /* 0x15043DA9: push eax */
    PUSH32(esp, eax); /* 0x15043DAA: push eax */
    PUSH32(esp, eax); /* 0x15043DAB: push eax */
    PUSH32(esp, eax); /* 0x15043DAC: push eax */
    RECOMP_CALL(sub_1505A110); /* 0x15043DAD: call 0x1505a110 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x14u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x14u; /* 0x15043DB2: add esp, 0x14 */
    _flag_k = FK_ADD;
L_15043DB5:
    _flag_a = (uint32_t)((eax | 0xFFFFFFFFu)); _flag_b = (uint32_t)((eax | 0xFFFFFFFFu));
    eax = eax | 0xFFFFFFFFu; /* 0x15043DB5: or eax, 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_15043E02; /* 0x15043DB8: jmp 0x15043e02 */
L_15043DBA:
    /* cmp MEM32(ebp + 0x10), 0 */ /* 0x15043DBA: cmp dword ptr [ebp + 0x10], 0 */
    _flag_a = (uint32_t)(MEM32(ebp + 0x10)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_EQ(_flag_a, _flag_b)) goto L_15043D9B; /* 0x15043DBE: je 0x15043d9b */
L_15043DC0:
    PUSH32(esp, esi); /* 0x15043DC0: push esi */
    eax = ebp + (-0x8); /* 0x15043DC1: lea eax, [ebp - 8] */
    PUSH32(esp, eax); /* 0x15043DC4: push eax */
    eax = ebp + (-0x4); /* 0x15043DC5: lea eax, [ebp - 4] */
    PUSH32(esp, eax); /* 0x15043DC8: push eax */
    PUSH32(esp, MEM32(ebp + 0x14)); /* 0x15043DC9: push dword ptr [ebp + 0x14] */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x15043DCC: push dword ptr [ebp + 0x10] */
    RECOMP_CALL(sub_15045463); /* 0x15043DCF: call 0x15045463 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x14u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x14u; /* 0x15043DD4: add esp, 0x14 */
    _flag_k = FK_ADD;
    /* cmp eax, 0xFFFFFFFFu */ /* 0x15043DD7: cmp eax, -1 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xFFFFFFFFu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_EQ(_flag_a, _flag_b)) goto L_15043DB5; /* 0x15043DDA: je 0x15043db5 */
L_15043DDC:
    PUSH32(esp, MEM32(ebp + (-0x8))); /* 0x15043DDC: push dword ptr [ebp - 8] */
    PUSH32(esp, MEM32(ebp + (-0x4))); /* 0x15043DDF: push dword ptr [ebp - 4] */
    PUSH32(esp, esi); /* 0x15043DE2: push esi */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x15043DE3: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_15045199); /* 0x15043DE6: call 0x15045199 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, MEM32(ebp + (-0x4))); /* 0x15043DEB: push dword ptr [ebp - 4] */
    esi = eax; /* 0x15043DEE: mov esi, eax */
    RECOMP_CALL(sub_15048840); /* 0x15043DF0: call 0x15048840 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, MEM32(ebp + (-0x8))); /* 0x15043DF5: push dword ptr [ebp - 8] */
    RECOMP_CALL(sub_15048840); /* 0x15043DF8: call 0x15048840 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x18u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x18u; /* 0x15043DFD: add esp, 0x18 */
    _flag_k = FK_ADD;
    eax = esi; /* 0x15043E00: mov eax, esi */
L_15043E02:
    esi = POP32_VAL(esp); /* 0x15043E02: pop esi */
    esp = ebp; ebp = POP32_VAL(esp); /* 0x15043E03: leave  */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x15043E04: ret  */
    RECOMP_REGS_OUT();
}

void sub_15043E10(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x15043E10u);

L_15043E10:
    edi = edi; /* 0x15043E10: mov edi, edi */
    PUSH32(esp, ebp); /* 0x15043E12: push ebp */
    ebp = esp; /* 0x15043E13: mov ebp, esp */
    PUSH32(esp, 0); /* 0x15043E15: push 0 */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x15043E17: push dword ptr [ebp + 0x10] */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x15043E1A: push dword ptr [ebp + 0xc] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x15043E1D: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_15043E30); /* 0x15043E20: call 0x15043e30 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x10u; /* 0x15043E25: add esp, 0x10 */
    _flag_k = FK_ADD;
    ebp = POP32_VAL(esp); /* 0x15043E28: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x15043E29: ret  */
    RECOMP_REGS_OUT();
}

void sub_15043E30(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x15043E30u);

L_15043E30:
    edi = edi; /* 0x15043E30: mov edi, edi */
    PUSH32(esp, ebp); /* 0x15043E32: push ebp */
    ebp = esp; /* 0x15043E33: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x10u; /* 0x15043E35: sub esp, 0x10 */
    _flag_k = FK_CMP;
    PUSH32(esp, ebx); /* 0x15043E38: push ebx */
    ebx = MEM32(ebp + 0xC); /* 0x15043E39: mov ebx, dword ptr [ebp + 0xc] */
    PUSH32(esp, esi); /* 0x15043E3C: push esi */
    PUSH32(esp, edi); /* 0x15043E3D: push edi */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edi = 0; /* 0x15043E3E: xor edi, edi */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x8)) = edi; /* 0x15043E40: mov dword ptr [ebp - 8], edi */
    esi = edi; /* 0x15043E43: mov esi, edi */
    /* test ebx, ebx */ /* 0x15043E45: test ebx, ebx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ebx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_15043E69; /* 0x15043E47: jne 0x15043e69 */
L_15043E49:
    RECOMP_CALL(sub_15036430); /* 0x15043E49: call 0x15036430 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, edi); /* 0x15043E4E: push edi */
    PUSH32(esp, edi); /* 0x15043E4F: push edi */
    PUSH32(esp, edi); /* 0x15043E50: push edi */
    PUSH32(esp, edi); /* 0x15043E51: push edi */
    MEM32(eax) = 0x16u; /* 0x15043E52: mov dword ptr [eax], 0x16 */
    PUSH32(esp, edi); /* 0x15043E58: push edi */
L_15043E59:
    RECOMP_CALL(sub_1505A110); /* 0x15043E59: call 0x1505a110 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x14u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x14u; /* 0x15043E5E: add esp, 0x14 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)((eax | 0xFFFFFFFFu)); _flag_b = (uint32_t)((eax | 0xFFFFFFFFu));
    eax = eax | 0xFFFFFFFFu; /* 0x15043E61: or eax, 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_150440C8; /* 0x15043E64: jmp 0x150440c8 */
L_15043E69:
    /* cmp MEM8(ebx), 0 */ /* 0x15043E69: cmp byte ptr [ebx], 0 */
    _flag_a = (uint32_t)(MEM8(ebx)) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    RECOMP_BACKEDGE();
    if (CMP_EQ(_flag_a, _flag_b)) goto L_15043E49; /* 0x15043E6C: je 0x15043e49 */
L_15043E6E:
    edi = MEM32(ebp + 0x10); /* 0x15043E6E: mov edi, dword ptr [ebp + 0x10] */
    /* test edi, edi */ /* 0x15043E71: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_15043E89; /* 0x15043E73: jne 0x15043e89 */
L_15043E75:
    RECOMP_CALL(sub_15036430); /* 0x15043E75: call 0x15036430 */
    RECOMP_FLAGS_IN();
    MEM32(eax) = 0x16u; /* 0x15043E7A: mov dword ptr [eax], 0x16 */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x15043E80: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, eax); /* 0x15043E82: push eax */
    PUSH32(esp, eax); /* 0x15043E83: push eax */
    PUSH32(esp, eax); /* 0x15043E84: push eax */
    PUSH32(esp, eax); /* 0x15043E85: push eax */
    PUSH32(esp, eax); /* 0x15043E86: push eax */
    RECOMP_BACKEDGE();
    goto L_15043E59; /* 0x15043E87: jmp 0x15043e59 */
L_15043E89:
    eax = MEM32(edi); /* 0x15043E89: mov eax, dword ptr [edi] */
    /* test eax, eax */ /* 0x15043E8B: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_Z(_flag_a, _flag_b)) goto L_15043E75; /* 0x15043E8D: je 0x15043e75 */
L_15043E8F:
    /* cmp MEM8(eax), 0 */ /* 0x15043E8F: cmp byte ptr [eax], 0 */
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    RECOMP_BACKEDGE();
    if (CMP_EQ(_flag_a, _flag_b)) goto L_15043E75; /* 0x15043E92: je 0x15043e75 */
L_15043E94:
    RECOMP_CALL(sub_15036430); /* 0x15043E94: call 0x15036430 */
    RECOMP_FLAGS_IN();
    eax = MEM32(eax); /* 0x15043E99: mov eax, dword ptr [eax] */
    MEM32(ebp + (-0x10)) = eax; /* 0x15043E9B: mov dword ptr [ebp - 0x10], eax */
    RECOMP_CALL(sub_15036430); /* 0x15043E9E: call 0x15036430 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, MEM32(ebp + 0x14)); /* 0x15043EA3: push dword ptr [ebp + 0x14] */
    PUSH32(esp, edi); /* 0x15043EA6: push edi */
    _flag_a = (uint32_t)(MEM32(eax)); _flag_b = (uint32_t)(esi);
    MEM32(eax) = MEM32(eax) & esi; /* 0x15043EA7: and dword ptr [eax], esi */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, ebx); /* 0x15043EA9: push ebx */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x15043EAA: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_15043B60); /* 0x15043EAD: call 0x15043b60 */
    RECOMP_FLAGS_IN();
    edi = eax; /* 0x15043EB2: mov edi, eax */
    MEM32(ebp + (-0x4)) = eax; /* 0x15043EB4: mov dword ptr [ebp - 4], eax */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x10u; /* 0x15043EB7: add esp, 0x10 */
    _flag_k = FK_ADD;
    /* cmp edi, 0xFFFFFFFFu */ /* 0x15043EBA: cmp edi, -1 */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(0xFFFFFFFFu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_15044098; /* 0x15043EBD: jne 0x15044098 */
L_15043EC3:
    RECOMP_CALL(sub_15036430); /* 0x15043EC3: call 0x15036430 */
    RECOMP_FLAGS_IN();
    /* cmp MEM32(eax), 2 */ /* 0x15043EC8: cmp dword ptr [eax], 2 */
    _flag_a = (uint32_t)(MEM32(eax)); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_15044098; /* 0x15043ECB: jne 0x15044098 */
L_15043ED1:
    PUSH32(esp, 0x2Fu); /* 0x15043ED1: push 0x2f */
    PUSH32(esp, ebx); /* 0x15043ED3: push ebx */
    RECOMP_CALL(sub_15051F70); /* 0x15043ED4: call 0x15051f70 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x15043ED9: pop ecx */
    ecx = POP32_VAL(esp); /* 0x15043EDA: pop ecx */
    /* test eax, eax */ /* 0x15043EDB: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_15044098; /* 0x15043EDD: jne 0x15044098 */
L_15043EE3:
    PUSH32(esp, 0x150048F4u); /* 0x15043EE3: push 0x150048f4 */
    PUSH32(esp, eax); /* 0x15043EE8: push eax */
    eax = ebp + (-0x8); /* 0x15043EE9: lea eax, [ebp - 8] */
    PUSH32(esp, eax); /* 0x15043EEC: push eax */
    RECOMP_CALL(sub_1505D654); /* 0x15043EED: call 0x1505d654 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x15043EF2: add esp, 0xc */
    _flag_k = FK_ADD;
    /* test eax, eax */ /* 0x15043EF5: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_15043F1A; /* 0x15043EF7: je 0x15043f1a */
L_15043EF9:
    /* cmp eax, 0x16u */ /* 0x15043EF9: cmp eax, 0x16 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x16u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_15043F12; /* 0x15043EFC: jne 0x15043f12 */
L_15043EFE:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x15043EFE: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, eax); /* 0x15043F00: push eax */
    PUSH32(esp, eax); /* 0x15043F01: push eax */
    PUSH32(esp, eax); /* 0x15043F02: push eax */
    PUSH32(esp, eax); /* 0x15043F03: push eax */
    PUSH32(esp, eax); /* 0x15043F04: push eax */
    RECOMP_CALL(sub_1505A11B); /* 0x15043F05: call 0x1505a11b */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x14u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x14u; /* 0x15043F0A: add esp, 0x14 */
    _flag_k = FK_ADD;
    goto L_15044098; /* 0x15043F0D: jmp 0x15044098 */
L_15043F12:
    /* test eax, eax */ /* 0x15043F12: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_15044098; /* 0x15043F14: jne 0x15044098 */
L_15043F1A:
    /* cmp MEM32(ebp + (-0x8)), esi */ /* 0x15043F1A: cmp dword ptr [ebp - 8], esi */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x8))); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_15044098; /* 0x15043F1D: je 0x15044098 */
L_15043F23:
    PUSH32(esp, 1); /* 0x15043F23: push 1 */
    PUSH32(esp, 0x104u); /* 0x15043F25: push 0x104 */
    RECOMP_CALL(sub_15048EE2); /* 0x15043F2A: call 0x15048ee2 */
    RECOMP_FLAGS_IN();
    esi = eax; /* 0x15043F2F: mov esi, eax */
    ecx = POP32_VAL(esp); /* 0x15043F31: pop ecx */
    ecx = POP32_VAL(esp); /* 0x15043F32: pop ecx */
    /* test esi, esi */ /* 0x15043F33: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_15044098; /* 0x15043F35: je 0x15044098 */
L_15043F3B:
    PUSH32(esp, 0x103u); /* 0x15043F3B: push 0x103 */
    PUSH32(esp, esi); /* 0x15043F40: push esi */
    PUSH32(esp, MEM32(ebp + (-0x8))); /* 0x15043F41: push dword ptr [ebp - 8] */
    RECOMP_CALL(sub_1505EB80); /* 0x15043F44: call 0x1505eb80 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x15043F49: add esp, 0xc */
    _flag_k = FK_ADD;
    MEM32(ebp + (-0xC)) = eax; /* 0x15043F4C: mov dword ptr [ebp - 0xc], eax */
    /* test eax, eax */ /* 0x15043F4F: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_15044098; /* 0x15043F51: je 0x15044098 */
L_15043F57:
    /* cmp MEM8(esi), 0 */ /* 0x15043F57: cmp byte ptr [esi], 0 */
    _flag_a = (uint32_t)(MEM8(esi)) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_15044095; /* 0x15043F5A: je 0x15044095 */
L_15043F60:
    ecx = esi; /* 0x15043F60: mov ecx, esi */
    edx = ecx + 0x1; /* 0x15043F62: lea edx, [ecx + 1] */
L_15043F65:
    SET_LO8(eax, MEM8(ecx)); /* 0x15043F65: mov al, byte ptr [ecx] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx + 1; /* 0x15043F67: inc ecx */
    _flag_k = FK_INC;
    /* test LO8(eax), LO8(eax) */ /* 0x15043F68: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_15043F65; /* 0x15043F6A: jne 0x15043f65 */
L_15043F6C:
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ecx = ecx - edx; /* 0x15043F6C: sub ecx, edx */
    _flag_k = FK_CMP;
    edi = esi + (-0x1); /* 0x15043F6E: lea edi, [esi - 1] */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edi = edi + ecx; /* 0x15043F71: add edi, ecx */
    _flag_k = FK_ADD;
    SET_LO8(eax, MEM8(edi)); /* 0x15043F73: mov al, byte ptr [edi] */
    /* cmp LO8(eax), 0x5Cu */ /* 0x15043F75: cmp al, 0x5c */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(0x5Cu) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_15043F9C; /* 0x15043F77: jne 0x15043f9c */
L_15043F79:
    PUSH32(esp, 0x5Cu); /* 0x15043F79: push 0x5c */
    PUSH32(esp, esi); /* 0x15043F7B: push esi */
    RECOMP_CALL(sub_15055AA0); /* 0x15043F7C: call 0x15055aa0 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x15043F81: pop ecx */
    ecx = POP32_VAL(esp); /* 0x15043F82: pop ecx */
    /* cmp edi, eax */ /* 0x15043F83: cmp edi, eax */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_15043FC6; /* 0x15043F85: je 0x15043fc6 */
L_15043F87:
    PUSH32(esp, 0x150048FCu); /* 0x15043F87: push 0x150048fc */
    PUSH32(esp, 0x104u); /* 0x15043F8C: push 0x104 */
    PUSH32(esp, esi); /* 0x15043F91: push esi */
    RECOMP_CALL(sub_1508E450); /* 0x15043F92: call 0x1508e450 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x15043F97: add esp, 0xc */
    _flag_k = FK_ADD;
    goto L_15043FC6; /* 0x15043F9A: jmp 0x15043fc6 */
L_15043F9C:
    /* cmp LO8(eax), 0x2Fu */ /* 0x15043F9C: cmp al, 0x2f */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(0x2Fu) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_15043FC6; /* 0x15043F9E: je 0x15043fc6 */
L_15043FA0:
    PUSH32(esp, 0x150048FCu); /* 0x15043FA0: push 0x150048fc */
    PUSH32(esp, 0x104u); /* 0x15043FA5: push 0x104 */
    PUSH32(esp, esi); /* 0x15043FAA: push esi */
    RECOMP_CALL(sub_1508E450); /* 0x15043FAB: call 0x1508e450 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x15043FB0: add esp, 0xc */
    _flag_k = FK_ADD;
    /* test eax, eax */ /* 0x15043FB3: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_15043FC6; /* 0x15043FB5: je 0x15043fc6 */
L_15043FB7:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x15043FB7: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, eax); /* 0x15043FB9: push eax */
    PUSH32(esp, eax); /* 0x15043FBA: push eax */
    PUSH32(esp, eax); /* 0x15043FBB: push eax */
    PUSH32(esp, eax); /* 0x15043FBC: push eax */
    PUSH32(esp, eax); /* 0x15043FBD: push eax */
    RECOMP_CALL(sub_1505A11B); /* 0x15043FBE: call 0x1505a11b */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x14u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x14u; /* 0x15043FC3: add esp, 0x14 */
    _flag_k = FK_ADD;
L_15043FC6:
    edx = esi; /* 0x15043FC6: mov edx, esi */
    ecx = edx + 0x1; /* 0x15043FC8: lea ecx, [edx + 1] */
L_15043FCB:
    SET_LO8(eax, MEM8(edx)); /* 0x15043FCB: mov al, byte ptr [edx] */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(1);
    edx = edx + 1; /* 0x15043FCD: inc edx */
    _flag_k = FK_INC;
    /* test LO8(eax), LO8(eax) */ /* 0x15043FCE: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_15043FCB; /* 0x15043FD0: jne 0x15043fcb */
L_15043FD2:
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    edx = edx - ecx; /* 0x15043FD2: sub edx, ecx */
    _flag_k = FK_CMP;
    ecx = ebx; /* 0x15043FD4: mov ecx, ebx */
    edi = ecx + 0x1; /* 0x15043FD6: lea edi, [ecx + 1] */
L_15043FD9:
    SET_LO8(eax, MEM8(ecx)); /* 0x15043FD9: mov al, byte ptr [ecx] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx + 1; /* 0x15043FDB: inc ecx */
    _flag_k = FK_INC;
    /* test LO8(eax), LO8(eax) */ /* 0x15043FDC: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_15043FD9; /* 0x15043FDE: jne 0x15043fd9 */
L_15043FE0:
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ecx = ecx - edi; /* 0x15043FE0: sub ecx, edi */
    _flag_k = FK_CMP;
    eax = ecx + edx; /* 0x15043FE2: lea eax, [ecx + edx] */
    ecx = 0x104u; /* 0x15043FE5: mov ecx, 0x104 */
    /* cmp eax, ecx */ /* 0x15043FEA: cmp eax, ecx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_AE(_flag_a, _flag_b)) goto L_15044095; /* 0x15043FEC: jae 0x15044095 */
L_15043FF2:
    PUSH32(esp, ebx); /* 0x15043FF2: push ebx */
    PUSH32(esp, ecx); /* 0x15043FF3: push ecx */
    PUSH32(esp, esi); /* 0x15043FF4: push esi */
    RECOMP_CALL(sub_1508E450); /* 0x15043FF5: call 0x1508e450 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x15043FFA: add esp, 0xc */
    _flag_k = FK_ADD;
    /* test eax, eax */ /* 0x15043FFD: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_15044010; /* 0x15043FFF: je 0x15044010 */
L_15044001:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x15044001: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, eax); /* 0x15044003: push eax */
    PUSH32(esp, eax); /* 0x15044004: push eax */
    PUSH32(esp, eax); /* 0x15044005: push eax */
    PUSH32(esp, eax); /* 0x15044006: push eax */
    PUSH32(esp, eax); /* 0x15044007: push eax */
    RECOMP_CALL(sub_1505A11B); /* 0x15044008: call 0x1505a11b */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x14u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x14u; /* 0x1504400D: add esp, 0x14 */
    _flag_k = FK_ADD;
L_15044010:
    RECOMP_CALL(sub_15036430); /* 0x15044010: call 0x15036430 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, MEM32(ebp + 0x14)); /* 0x15044015: push dword ptr [ebp + 0x14] */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x15044018: push dword ptr [ebp + 0x10] */
    _flag_a = (uint32_t)(MEM32(eax)); _flag_b = (uint32_t)(0);
    MEM32(eax) = MEM32(eax) & 0; /* 0x1504401B: and dword ptr [eax], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, esi); /* 0x1504401E: push esi */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x1504401F: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_15043B60); /* 0x15044022: call 0x15043b60 */
    RECOMP_FLAGS_IN();
    edi = eax; /* 0x15044027: mov edi, eax */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x10u; /* 0x15044029: add esp, 0x10 */
    _flag_k = FK_ADD;
    MEM32(ebp + (-0x4)) = edi; /* 0x1504402C: mov dword ptr [ebp - 4], edi */
    /* cmp edi, 0xFFFFFFFFu */ /* 0x1504402F: cmp edi, -1 */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(0xFFFFFFFFu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_15044098; /* 0x15044032: jne 0x15044098 */
L_15044034:
    RECOMP_CALL(sub_15036430); /* 0x15044034: call 0x15036430 */
    RECOMP_FLAGS_IN();
    /* cmp MEM32(eax), 2 */ /* 0x15044039: cmp dword ptr [eax], 2 */
    _flag_a = (uint32_t)(MEM32(eax)); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_15044079; /* 0x1504403C: je 0x15044079 */
L_1504403E:
    PUSH32(esp, 0x5Cu); /* 0x1504403E: push 0x5c */
    PUSH32(esp, esi); /* 0x15044040: push esi */
    RECOMP_CALL(sub_15051F70); /* 0x15044041: call 0x15051f70 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x15044046: pop ecx */
    ecx = POP32_VAL(esp); /* 0x15044047: pop ecx */
    /* cmp esi, eax */ /* 0x15044048: cmp esi, eax */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1504405A; /* 0x1504404A: je 0x1504405a */
L_1504404C:
    PUSH32(esp, 0x2Fu); /* 0x1504404C: push 0x2f */
    PUSH32(esp, esi); /* 0x1504404E: push esi */
    RECOMP_CALL(sub_15051F70); /* 0x1504404F: call 0x15051f70 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x15044054: pop ecx */
    ecx = POP32_VAL(esp); /* 0x15044055: pop ecx */
    /* cmp esi, eax */ /* 0x15044056: cmp esi, eax */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_15044095; /* 0x15044058: jne 0x15044095 */
L_1504405A:
    edi = esi + 0x1; /* 0x1504405A: lea edi, [esi + 1] */
    PUSH32(esp, 0x5Cu); /* 0x1504405D: push 0x5c */
    PUSH32(esp, edi); /* 0x1504405F: push edi */
    RECOMP_CALL(sub_15051F70); /* 0x15044060: call 0x15051f70 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x15044065: pop ecx */
    ecx = POP32_VAL(esp); /* 0x15044066: pop ecx */
    /* cmp edi, eax */ /* 0x15044067: cmp edi, eax */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_15044079; /* 0x15044069: je 0x15044079 */
L_1504406B:
    PUSH32(esp, 0x2Fu); /* 0x1504406B: push 0x2f */
    PUSH32(esp, edi); /* 0x1504406D: push edi */
    RECOMP_CALL(sub_15051F70); /* 0x1504406E: call 0x15051f70 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x15044073: pop ecx */
    ecx = POP32_VAL(esp); /* 0x15044074: pop ecx */
    /* cmp edi, eax */ /* 0x15044075: cmp edi, eax */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_15044095; /* 0x15044077: jne 0x15044095 */
L_15044079:
    PUSH32(esp, 0x103u); /* 0x15044079: push 0x103 */
    PUSH32(esp, esi); /* 0x1504407E: push esi */
    PUSH32(esp, MEM32(ebp + (-0xC))); /* 0x1504407F: push dword ptr [ebp - 0xc] */
    RECOMP_CALL(sub_1505EB80); /* 0x15044082: call 0x1505eb80 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x15044087: add esp, 0xc */
    _flag_k = FK_ADD;
    MEM32(ebp + (-0xC)) = eax; /* 0x1504408A: mov dword ptr [ebp - 0xc], eax */
    /* test eax, eax */ /* 0x1504408D: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_15043F57; /* 0x1504408F: jne 0x15043f57 */
L_15044095:
    edi = MEM32(ebp + (-0x4)); /* 0x15044095: mov edi, dword ptr [ebp - 4] */
L_15044098:
    RECOMP_CALL(sub_15036430); /* 0x15044098: call 0x15036430 */
    RECOMP_FLAGS_IN();
    /* cmp MEM32(eax), 0 */ /* 0x1504409D: cmp dword ptr [eax], 0 */
    _flag_a = (uint32_t)(MEM32(eax)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_150440AC; /* 0x150440A0: jne 0x150440ac */
L_150440A2:
    RECOMP_CALL(sub_15036430); /* 0x150440A2: call 0x15036430 */
    RECOMP_FLAGS_IN();
    ecx = MEM32(ebp + (-0x10)); /* 0x150440A7: mov ecx, dword ptr [ebp - 0x10] */
    MEM32(eax) = ecx; /* 0x150440AA: mov dword ptr [eax], ecx */
L_150440AC:
    /* test esi, esi */ /* 0x150440AC: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_150440B7; /* 0x150440AE: je 0x150440b7 */
L_150440B0:
    PUSH32(esp, esi); /* 0x150440B0: push esi */
    RECOMP_CALL(sub_15048840); /* 0x150440B1: call 0x15048840 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x150440B6: pop ecx */
L_150440B7:
    /* cmp MEM32(ebp + (-0x8)), 0 */ /* 0x150440B7: cmp dword ptr [ebp - 8], 0 */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x8))); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_150440C6; /* 0x150440BB: je 0x150440c6 */
L_150440BD:
    PUSH32(esp, MEM32(ebp + (-0x8))); /* 0x150440BD: push dword ptr [ebp - 8] */
    RECOMP_CALL(sub_15048840); /* 0x150440C0: call 0x15048840 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x150440C5: pop ecx */
L_150440C6:
    eax = edi; /* 0x150440C6: mov eax, edi */
L_150440C8:
    edi = POP32_VAL(esp); /* 0x150440C8: pop edi */
    esi = POP32_VAL(esp); /* 0x150440C9: pop esi */
    ebx = POP32_VAL(esp); /* 0x150440CA: pop ebx */
    esp = ebp; ebp = POP32_VAL(esp); /* 0x150440CB: leave  */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x150440CC: ret  */
    RECOMP_REGS_OUT();
}

void sub_150440E0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x150440E0u);

L_150440E0:
    edi = edi; /* 0x150440E0: mov edi, edi */
    PUSH32(esp, ebp); /* 0x150440E2: push ebp */
    ebp = esp; /* 0x150440E3: mov ebp, esp */
    eax = MEM32(ebp + 0x8); /* 0x150440E5: mov eax, dword ptr [ebp + 8] */
    PUSH32(esp, esi); /* 0x150440E8: push esi */
    /* test eax, eax */ /* 0x150440E9: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1504410C; /* 0x150440EB: jne 0x1504410c */
L_150440ED:
    RECOMP_CALL(sub_15036430); /* 0x150440ED: call 0x15036430 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    esi = 0; /* 0x150440F2: xor esi, esi */
    _cf = 0;
    _flag_k = FK_TEST;
L_150440F4:
    PUSH32(esp, esi); /* 0x150440F4: push esi */
    PUSH32(esp, esi); /* 0x150440F5: push esi */
    PUSH32(esp, esi); /* 0x150440F6: push esi */
    PUSH32(esp, esi); /* 0x150440F7: push esi */
    PUSH32(esp, esi); /* 0x150440F8: push esi */
    MEM32(eax) = 0x16u; /* 0x150440F9: mov dword ptr [eax], 0x16 */
    RECOMP_CALL(sub_1505A110); /* 0x150440FF: call 0x1505a110 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x14u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x14u; /* 0x15044104: add esp, 0x14 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)((eax | 0xFFFFFFFFu)); _flag_b = (uint32_t)((eax | 0xFFFFFFFFu));
    eax = eax | 0xFFFFFFFFu; /* 0x15044107: or eax, 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_15044134; /* 0x1504410A: jmp 0x15044134 */
L_1504410C:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    esi = 0; /* 0x1504410C: xor esi, esi */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp MEM16(eax), LO16(esi) */ /* 0x1504410E: cmp word ptr [eax], si */
    _flag_a = (uint32_t)(MEM16(eax)) << 16; _flag_b = (uint32_t)(LO16(esi)) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    if (CMP_NE(_flag_a, _flag_b)) goto L_1504411A; /* 0x15044111: jne 0x1504411a */
L_15044113:
    RECOMP_CALL(sub_15036430); /* 0x15044113: call 0x15036430 */
    RECOMP_FLAGS_IN();
    RECOMP_BACKEDGE();
    goto L_150440F4; /* 0x15044118: jmp 0x150440f4 */
L_1504411A:
    ecx = MEM32(ebp + 0xC); /* 0x1504411A: mov ecx, dword ptr [ebp + 0xc] */
    /* test ecx, ecx */ /* 0x1504411D: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_Z(_flag_a, _flag_b)) goto L_15044113; /* 0x1504411F: je 0x15044113 */
L_15044121:
    /* cmp MEM16(ecx), LO16(esi) */ /* 0x15044121: cmp word ptr [ecx], si */
    _flag_a = (uint32_t)(MEM16(ecx)) << 16; _flag_b = (uint32_t)(LO16(esi)) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    RECOMP_BACKEDGE();
    if (CMP_EQ(_flag_a, _flag_b)) goto L_15044113; /* 0x15044124: je 0x15044113 */
L_15044126:
    PUSH32(esp, esi); /* 0x15044126: push esi */
    ecx = ebp + 0xC; /* 0x15044127: lea ecx, [ebp + 0xc] */
    PUSH32(esp, ecx); /* 0x1504412A: push ecx */
    PUSH32(esp, eax); /* 0x1504412B: push eax */
    RECOMP_CALL(sub_150442E0); /* 0x1504412C: call 0x150442e0 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x15044131: add esp, 0xc */
    _flag_k = FK_ADD;
L_15044134:
    esi = POP32_VAL(esp); /* 0x15044134: pop esi */
    ebp = POP32_VAL(esp); /* 0x15044135: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x15044136: ret  */
    RECOMP_REGS_OUT();
}

void sub_15044140(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x15044140u);

L_15044140:
    edi = edi; /* 0x15044140: mov edi, edi */
    PUSH32(esp, ebp); /* 0x15044142: push ebp */
    ebp = esp; /* 0x15044143: mov ebp, esp */
    edx = MEM32(ebp + 0x8); /* 0x15044145: mov edx, dword ptr [ebp + 8] */
    ecx = ebp + 0xC; /* 0x15044148: lea ecx, [ebp + 0xc] */
    PUSH32(esp, esi); /* 0x1504414B: push esi */
    /* test edx, edx */ /* 0x1504414C: test edx, edx */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(edx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1504416F; /* 0x1504414E: jne 0x1504416f */
L_15044150:
    RECOMP_CALL(sub_15036430); /* 0x15044150: call 0x15036430 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    esi = 0; /* 0x15044155: xor esi, esi */
    _cf = 0;
    _flag_k = FK_TEST;
L_15044157:
    PUSH32(esp, esi); /* 0x15044157: push esi */
    PUSH32(esp, esi); /* 0x15044158: push esi */
    PUSH32(esp, esi); /* 0x15044159: push esi */
    PUSH32(esp, esi); /* 0x1504415A: push esi */
    PUSH32(esp, esi); /* 0x1504415B: push esi */
    MEM32(eax) = 0x16u; /* 0x1504415C: mov dword ptr [eax], 0x16 */
    RECOMP_CALL(sub_1505A110); /* 0x15044162: call 0x1505a110 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x14u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x14u; /* 0x15044167: add esp, 0x14 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)((eax | 0xFFFFFFFFu)); _flag_b = (uint32_t)((eax | 0xFFFFFFFFu));
    eax = eax | 0xFFFFFFFFu; /* 0x1504416A: or eax, 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_150441A1; /* 0x1504416D: jmp 0x150441a1 */
L_1504416F:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    esi = 0; /* 0x1504416F: xor esi, esi */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp MEM16(edx), LO16(esi) */ /* 0x15044171: cmp word ptr [edx], si */
    _flag_a = (uint32_t)(MEM16(edx)) << 16; _flag_b = (uint32_t)(LO16(esi)) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    if (CMP_NE(_flag_a, _flag_b)) goto L_1504417D; /* 0x15044174: jne 0x1504417d */
L_15044176:
    RECOMP_CALL(sub_15036430); /* 0x15044176: call 0x15036430 */
    RECOMP_FLAGS_IN();
    RECOMP_BACKEDGE();
    goto L_15044157; /* 0x1504417B: jmp 0x15044157 */
L_1504417D:
    eax = MEM32(ebp + 0xC); /* 0x1504417D: mov eax, dword ptr [ebp + 0xc] */
    /* test eax, eax */ /* 0x15044180: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_Z(_flag_a, _flag_b)) goto L_15044176; /* 0x15044182: je 0x15044176 */
L_15044184:
    /* cmp MEM16(eax), LO16(esi) */ /* 0x15044184: cmp word ptr [eax], si */
    _flag_a = (uint32_t)(MEM16(eax)) << 16; _flag_b = (uint32_t)(LO16(esi)) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    RECOMP_BACKEDGE();
    if (CMP_EQ(_flag_a, _flag_b)) goto L_15044176; /* 0x15044187: je 0x15044176 */
L_15044189:
    eax = MEM32(ecx); /* 0x15044189: mov eax, dword ptr [ecx] */
    ecx = ecx + 0x4; /* 0x1504418B: lea ecx, [ecx + 4] */
    /* test eax, eax */ /* 0x1504418E: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_15044189; /* 0x15044190: jne 0x15044189 */
L_15044192:
    PUSH32(esp, MEM32(ecx)); /* 0x15044192: push dword ptr [ecx] */
    eax = ebp + 0xC; /* 0x15044194: lea eax, [ebp + 0xc] */
    PUSH32(esp, eax); /* 0x15044197: push eax */
    PUSH32(esp, edx); /* 0x15044198: push edx */
    RECOMP_CALL(sub_150442E0); /* 0x15044199: call 0x150442e0 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x1504419E: add esp, 0xc */
    _flag_k = FK_ADD;
L_150441A1:
    esi = POP32_VAL(esp); /* 0x150441A1: pop esi */
    ebp = POP32_VAL(esp); /* 0x150441A2: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x150441A3: ret  */
    RECOMP_REGS_OUT();
}

void sub_150441B0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x150441B0u);

L_150441B0:
    edi = edi; /* 0x150441B0: mov edi, edi */
    PUSH32(esp, ebp); /* 0x150441B2: push ebp */
    ebp = esp; /* 0x150441B3: mov ebp, esp */
    eax = MEM32(ebp + 0x8); /* 0x150441B5: mov eax, dword ptr [ebp + 8] */
    PUSH32(esp, esi); /* 0x150441B8: push esi */
    /* test eax, eax */ /* 0x150441B9: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_150441DC; /* 0x150441BB: jne 0x150441dc */
L_150441BD:
    RECOMP_CALL(sub_15036430); /* 0x150441BD: call 0x15036430 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    esi = 0; /* 0x150441C2: xor esi, esi */
    _cf = 0;
    _flag_k = FK_TEST;
L_150441C4:
    PUSH32(esp, esi); /* 0x150441C4: push esi */
    PUSH32(esp, esi); /* 0x150441C5: push esi */
    PUSH32(esp, esi); /* 0x150441C6: push esi */
    PUSH32(esp, esi); /* 0x150441C7: push esi */
    PUSH32(esp, esi); /* 0x150441C8: push esi */
    MEM32(eax) = 0x16u; /* 0x150441C9: mov dword ptr [eax], 0x16 */
    RECOMP_CALL(sub_1505A110); /* 0x150441CF: call 0x1505a110 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x14u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x14u; /* 0x150441D4: add esp, 0x14 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)((eax | 0xFFFFFFFFu)); _flag_b = (uint32_t)((eax | 0xFFFFFFFFu));
    eax = eax | 0xFFFFFFFFu; /* 0x150441D7: or eax, 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_15044202; /* 0x150441DA: jmp 0x15044202 */
L_150441DC:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    esi = 0; /* 0x150441DC: xor esi, esi */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp MEM16(eax), LO16(esi) */ /* 0x150441DE: cmp word ptr [eax], si */
    _flag_a = (uint32_t)(MEM16(eax)) << 16; _flag_b = (uint32_t)(LO16(esi)) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    if (CMP_NE(_flag_a, _flag_b)) goto L_150441EA; /* 0x150441E1: jne 0x150441ea */
L_150441E3:
    RECOMP_CALL(sub_15036430); /* 0x150441E3: call 0x15036430 */
    RECOMP_FLAGS_IN();
    RECOMP_BACKEDGE();
    goto L_150441C4; /* 0x150441E8: jmp 0x150441c4 */
L_150441EA:
    ecx = MEM32(ebp + 0xC); /* 0x150441EA: mov ecx, dword ptr [ebp + 0xc] */
    /* test ecx, ecx */ /* 0x150441ED: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_Z(_flag_a, _flag_b)) goto L_150441E3; /* 0x150441EF: je 0x150441e3 */
L_150441F1:
    /* cmp MEM16(ecx), LO16(esi) */ /* 0x150441F1: cmp word ptr [ecx], si */
    _flag_a = (uint32_t)(MEM16(ecx)) << 16; _flag_b = (uint32_t)(LO16(esi)) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    RECOMP_BACKEDGE();
    if (CMP_EQ(_flag_a, _flag_b)) goto L_150441E3; /* 0x150441F4: je 0x150441e3 */
L_150441F6:
    ecx = ebp + 0xC; /* 0x150441F6: lea ecx, [ebp + 0xc] */
    PUSH32(esp, ecx); /* 0x150441F9: push ecx */
    PUSH32(esp, eax); /* 0x150441FA: push eax */
    RECOMP_CALL(sub_150445A0); /* 0x150441FB: call 0x150445a0 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x15044200: pop ecx */
    ecx = POP32_VAL(esp); /* 0x15044201: pop ecx */
L_15044202:
    esi = POP32_VAL(esp); /* 0x15044202: pop esi */
    ebp = POP32_VAL(esp); /* 0x15044203: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x15044204: ret  */
    RECOMP_REGS_OUT();
}

void sub_15044210(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x15044210u);

L_15044210:
    edi = edi; /* 0x15044210: mov edi, edi */
    PUSH32(esp, ebp); /* 0x15044212: push ebp */
    ebp = esp; /* 0x15044213: mov ebp, esp */
    edx = MEM32(ebp + 0x8); /* 0x15044215: mov edx, dword ptr [ebp + 8] */
    PUSH32(esp, esi); /* 0x15044218: push esi */
    /* test edx, edx */ /* 0x15044219: test edx, edx */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(edx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1504423C; /* 0x1504421B: jne 0x1504423c */
L_1504421D:
    RECOMP_CALL(sub_15036430); /* 0x1504421D: call 0x15036430 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    esi = 0; /* 0x15044222: xor esi, esi */
    _cf = 0;
    _flag_k = FK_TEST;
L_15044224:
    PUSH32(esp, esi); /* 0x15044224: push esi */
    PUSH32(esp, esi); /* 0x15044225: push esi */
    PUSH32(esp, esi); /* 0x15044226: push esi */
    PUSH32(esp, esi); /* 0x15044227: push esi */
    PUSH32(esp, esi); /* 0x15044228: push esi */
    MEM32(eax) = 0x16u; /* 0x15044229: mov dword ptr [eax], 0x16 */
    RECOMP_CALL(sub_1505A110); /* 0x1504422F: call 0x1505a110 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x14u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x14u; /* 0x15044234: add esp, 0x14 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)((eax | 0xFFFFFFFFu)); _flag_b = (uint32_t)((eax | 0xFFFFFFFFu));
    eax = eax | 0xFFFFFFFFu; /* 0x15044237: or eax, 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_15044271; /* 0x1504423A: jmp 0x15044271 */
L_1504423C:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    esi = 0; /* 0x1504423C: xor esi, esi */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp MEM16(edx), LO16(esi) */ /* 0x1504423E: cmp word ptr [edx], si */
    _flag_a = (uint32_t)(MEM16(edx)) << 16; _flag_b = (uint32_t)(LO16(esi)) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    if (CMP_NE(_flag_a, _flag_b)) goto L_1504424A; /* 0x15044241: jne 0x1504424a */
L_15044243:
    RECOMP_CALL(sub_15036430); /* 0x15044243: call 0x15036430 */
    RECOMP_FLAGS_IN();
    RECOMP_BACKEDGE();
    goto L_15044224; /* 0x15044248: jmp 0x15044224 */
L_1504424A:
    eax = MEM32(ebp + 0xC); /* 0x1504424A: mov eax, dword ptr [ebp + 0xc] */
    /* test eax, eax */ /* 0x1504424D: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_Z(_flag_a, _flag_b)) goto L_15044243; /* 0x1504424F: je 0x15044243 */
L_15044251:
    /* cmp MEM16(eax), LO16(esi) */ /* 0x15044251: cmp word ptr [eax], si */
    _flag_a = (uint32_t)(MEM16(eax)) << 16; _flag_b = (uint32_t)(LO16(esi)) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    RECOMP_BACKEDGE();
    if (CMP_EQ(_flag_a, _flag_b)) goto L_15044243; /* 0x15044254: je 0x15044243 */
L_15044256:
    ecx = ebp + 0xC; /* 0x15044256: lea ecx, [ebp + 0xc] */
L_15044259:
    eax = MEM32(ecx); /* 0x15044259: mov eax, dword ptr [ecx] */
    ecx = ecx + 0x4; /* 0x1504425B: lea ecx, [ecx + 4] */
    /* test eax, eax */ /* 0x1504425E: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_15044259; /* 0x15044260: jne 0x15044259 */
L_15044262:
    PUSH32(esp, MEM32(ecx)); /* 0x15044262: push dword ptr [ecx] */
    eax = ebp + 0xC; /* 0x15044264: lea eax, [ebp + 0xc] */
    PUSH32(esp, eax); /* 0x15044267: push eax */
    PUSH32(esp, edx); /* 0x15044268: push edx */
    RECOMP_CALL(sub_150445C0); /* 0x15044269: call 0x150445c0 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x1504426E: add esp, 0xc */
    _flag_k = FK_ADD;
L_15044271:
    esi = POP32_VAL(esp); /* 0x15044271: pop esi */
    ebp = POP32_VAL(esp); /* 0x15044272: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x15044273: ret  */
    RECOMP_REGS_OUT();
}

void sub_15044280(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x15044280u);

L_15044280:
    edi = edi; /* 0x15044280: mov edi, edi */
    PUSH32(esp, ebp); /* 0x15044282: push ebp */
    ebp = esp; /* 0x15044283: mov ebp, esp */
    eax = MEM32(ebp + 0x8); /* 0x15044285: mov eax, dword ptr [ebp + 8] */
    PUSH32(esp, esi); /* 0x15044288: push esi */
    /* test eax, eax */ /* 0x15044289: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_150442AC; /* 0x1504428B: jne 0x150442ac */
L_1504428D:
    RECOMP_CALL(sub_15036430); /* 0x1504428D: call 0x15036430 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    esi = 0; /* 0x15044292: xor esi, esi */
    _cf = 0;
    _flag_k = FK_TEST;
L_15044294:
    PUSH32(esp, esi); /* 0x15044294: push esi */
    PUSH32(esp, esi); /* 0x15044295: push esi */
    PUSH32(esp, esi); /* 0x15044296: push esi */
    PUSH32(esp, esi); /* 0x15044297: push esi */
    PUSH32(esp, esi); /* 0x15044298: push esi */
    MEM32(eax) = 0x16u; /* 0x15044299: mov dword ptr [eax], 0x16 */
    RECOMP_CALL(sub_1505A110); /* 0x1504429F: call 0x1505a110 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x14u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x14u; /* 0x150442A4: add esp, 0x14 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)((eax | 0xFFFFFFFFu)); _flag_b = (uint32_t)((eax | 0xFFFFFFFFu));
    eax = eax | 0xFFFFFFFFu; /* 0x150442A7: or eax, 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_150442D7; /* 0x150442AA: jmp 0x150442d7 */
L_150442AC:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    esi = 0; /* 0x150442AC: xor esi, esi */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp MEM16(eax), LO16(esi) */ /* 0x150442AE: cmp word ptr [eax], si */
    _flag_a = (uint32_t)(MEM16(eax)) << 16; _flag_b = (uint32_t)(LO16(esi)) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    if (CMP_NE(_flag_a, _flag_b)) goto L_150442BA; /* 0x150442B1: jne 0x150442ba */
L_150442B3:
    RECOMP_CALL(sub_15036430); /* 0x150442B3: call 0x15036430 */
    RECOMP_FLAGS_IN();
    RECOMP_BACKEDGE();
    goto L_15044294; /* 0x150442B8: jmp 0x15044294 */
L_150442BA:
    ecx = MEM32(ebp + 0xC); /* 0x150442BA: mov ecx, dword ptr [ebp + 0xc] */
    /* test ecx, ecx */ /* 0x150442BD: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_Z(_flag_a, _flag_b)) goto L_150442B3; /* 0x150442BF: je 0x150442b3 */
L_150442C1:
    edx = MEM32(ecx); /* 0x150442C1: mov edx, dword ptr [ecx] */
    /* test edx, edx */ /* 0x150442C3: test edx, edx */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(edx);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_Z(_flag_a, _flag_b)) goto L_150442B3; /* 0x150442C5: je 0x150442b3 */
L_150442C7:
    /* cmp MEM16(edx), LO16(esi) */ /* 0x150442C7: cmp word ptr [edx], si */
    _flag_a = (uint32_t)(MEM16(edx)) << 16; _flag_b = (uint32_t)(LO16(esi)) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    RECOMP_BACKEDGE();
    if (CMP_EQ(_flag_a, _flag_b)) goto L_150442B3; /* 0x150442CA: je 0x150442b3 */
L_150442CC:
    PUSH32(esp, esi); /* 0x150442CC: push esi */
    PUSH32(esp, ecx); /* 0x150442CD: push ecx */
    PUSH32(esp, eax); /* 0x150442CE: push eax */
    RECOMP_CALL(sub_150442E0); /* 0x150442CF: call 0x150442e0 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x150442D4: add esp, 0xc */
    _flag_k = FK_ADD;
L_150442D7:
    esi = POP32_VAL(esp); /* 0x150442D7: pop esi */
    ebp = POP32_VAL(esp); /* 0x150442D8: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x150442D9: ret  */
    RECOMP_REGS_OUT();
}

void sub_150442E0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x150442E0u);

L_150442E0:
    edi = edi; /* 0x150442E0: mov edi, edi */
    PUSH32(esp, ebp); /* 0x150442E2: push ebp */
    ebp = esp; /* 0x150442E3: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x14u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x14u; /* 0x150442E5: sub esp, 0x14 */
    _flag_k = FK_CMP;
    PUSH32(esp, ebx); /* 0x150442E8: push ebx */
    PUSH32(esp, esi); /* 0x150442E9: push esi */
    esi = MEM32(ebp + 0x8); /* 0x150442EA: mov esi, dword ptr [ebp + 8] */
    ebx = esi; /* 0x150442ED: mov ebx, esi */
    PUSH32(esp, edi); /* 0x150442EF: push edi */
    /* test esi, esi */ /* 0x150442F0: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_15044316; /* 0x150442F2: jne 0x15044316 */
L_150442F4:
    RECOMP_CALL(sub_15036430); /* 0x150442F4: call 0x15036430 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edi = 0; /* 0x150442F9: xor edi, edi */
    _cf = 0;
    _flag_k = FK_TEST;
L_150442FB:
    PUSH32(esp, edi); /* 0x150442FB: push edi */
    PUSH32(esp, edi); /* 0x150442FC: push edi */
    PUSH32(esp, edi); /* 0x150442FD: push edi */
    PUSH32(esp, edi); /* 0x150442FE: push edi */
    PUSH32(esp, edi); /* 0x150442FF: push edi */
    MEM32(eax) = 0x16u; /* 0x15044300: mov dword ptr [eax], 0x16 */
    RECOMP_CALL(sub_1505A110); /* 0x15044306: call 0x1505a110 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x14u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x14u; /* 0x1504430B: add esp, 0x14 */
    _flag_k = FK_ADD;
L_1504430E:
    _flag_a = (uint32_t)((eax | 0xFFFFFFFFu)); _flag_b = (uint32_t)((eax | 0xFFFFFFFFu));
    eax = eax | 0xFFFFFFFFu; /* 0x1504430E: or eax, 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_15044513; /* 0x15044311: jmp 0x15044513 */
L_15044316:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edi = 0; /* 0x15044316: xor edi, edi */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp MEM16(esi), LO16(edi) */ /* 0x15044318: cmp word ptr [esi], di */
    _flag_a = (uint32_t)(MEM16(esi)) << 16; _flag_b = (uint32_t)(LO16(edi)) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    if (CMP_NE(_flag_a, _flag_b)) goto L_15044324; /* 0x1504431B: jne 0x15044324 */
L_1504431D:
    RECOMP_CALL(sub_15036430); /* 0x1504431D: call 0x15036430 */
    RECOMP_FLAGS_IN();
    RECOMP_BACKEDGE();
    goto L_150442FB; /* 0x15044322: jmp 0x150442fb */
L_15044324:
    eax = MEM32(ebp + 0xC); /* 0x15044324: mov eax, dword ptr [ebp + 0xc] */
    /* test eax, eax */ /* 0x15044327: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_Z(_flag_a, _flag_b)) goto L_1504431D; /* 0x15044329: je 0x1504431d */
L_1504432B:
    eax = MEM32(eax); /* 0x1504432B: mov eax, dword ptr [eax] */
    /* test eax, eax */ /* 0x1504432D: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_Z(_flag_a, _flag_b)) goto L_1504431D; /* 0x1504432F: je 0x1504431d */
L_15044331:
    /* cmp MEM16(eax), LO16(edi) */ /* 0x15044331: cmp word ptr [eax], di */
    _flag_a = (uint32_t)(MEM16(eax)) << 16; _flag_b = (uint32_t)(LO16(edi)) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    RECOMP_BACKEDGE();
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1504431D; /* 0x15044334: je 0x1504431d */
L_15044336:
    PUSH32(esp, 0x5Cu); /* 0x15044336: push 0x5c */
    PUSH32(esp, esi); /* 0x15044338: push esi */
    RECOMP_CALL(sub_1508F7B0); /* 0x15044339: call 0x1508f7b0 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0x2Fu); /* 0x1504433E: push 0x2f */
    PUSH32(esp, esi); /* 0x15044340: push esi */
    MEM32(ebp + (-0x4)) = eax; /* 0x15044341: mov dword ptr [ebp - 4], eax */
    RECOMP_CALL(sub_1508F7B0); /* 0x15044344: call 0x1508f7b0 */
    RECOMP_FLAGS_IN();
    ecx = eax; /* 0x15044349: mov ecx, eax */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x10u; /* 0x1504434B: add esp, 0x10 */
    _flag_k = FK_ADD;
    eax = MEM32(ebp + (-0x4)); /* 0x1504434E: mov eax, dword ptr [ebp - 4] */
    /* test ecx, ecx */ /* 0x15044351: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_150443E2; /* 0x15044353: jne 0x150443e2 */
L_15044359:
    /* test eax, eax */ /* 0x15044359: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_150443EC; /* 0x1504435B: jne 0x150443ec */
L_15044361:
    PUSH32(esp, 0x3Au); /* 0x15044361: push 0x3a */
    PUSH32(esp, esi); /* 0x15044363: push esi */
    RECOMP_CALL(sub_1508F1B0); /* 0x15044364: call 0x1508f1b0 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x15044369: pop ecx */
    ecx = POP32_VAL(esp); /* 0x1504436A: pop ecx */
    /* test eax, eax */ /* 0x1504436B: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_150443EC; /* 0x1504436D: jne 0x150443ec */
L_1504436F:
    ecx = esi; /* 0x1504436F: mov ecx, esi */
    edx = ecx + 0x2; /* 0x15044371: lea edx, [ecx + 2] */
L_15044374:
    SET_LO16(eax, MEM16(ecx)); /* 0x15044374: mov ax, word ptr [ecx] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 2; /* 0x15044377: add ecx, 2 */
    _flag_k = FK_ADD;
    /* cmp LO16(eax), LO16(edi) */ /* 0x1504437A: cmp ax, di */
    _flag_a = (uint32_t)(LO16(eax)) << 16; _flag_b = (uint32_t)(LO16(edi)) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    RECOMP_BACKEDGE();
    if (CMP_NE(_flag_a, _flag_b)) goto L_15044374; /* 0x1504437D: jne 0x15044374 */
L_1504437F:
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ecx = ecx - edx; /* 0x1504437F: sub ecx, edx */
    _flag_k = FK_CMP;
    if (1u) _cf = (((ecx) >> 0) & 1u); /* 0x15044381: sar ecx, 1 */
    if (1u) { _flag_a = recomp_flags_pack(((uint32_t)((int32_t)ecx >> 1u)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ecx = (uint32_t)((int32_t)ecx >> 1u);
    PUSH32(esp, 2); /* 0x15044383: push 2 */
    eax = ecx + 0x3; /* 0x15044385: lea eax, [ecx + 3] */
    PUSH32(esp, eax); /* 0x15044388: push eax */
    MEM32(ebp + (-0x4)) = eax; /* 0x15044389: mov dword ptr [ebp - 4], eax */
    RECOMP_CALL(sub_15048EE2); /* 0x1504438C: call 0x15048ee2 */
    RECOMP_FLAGS_IN();
    ebx = eax; /* 0x15044391: mov ebx, eax */
    ecx = POP32_VAL(esp); /* 0x15044393: pop ecx */
    ecx = POP32_VAL(esp); /* 0x15044394: pop ecx */
    /* test ebx, ebx */ /* 0x15044395: test ebx, ebx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ebx);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_Z(_flag_a, _flag_b)) goto L_1504430E; /* 0x15044397: je 0x1504430e */
L_1504439D:
    PUSH32(esp, 0x15004900u); /* 0x1504439D: push 0x15004900 */
    PUSH32(esp, MEM32(ebp + (-0x4))); /* 0x150443A2: push dword ptr [ebp - 4] */
    PUSH32(esp, ebx); /* 0x150443A5: push ebx */
    RECOMP_CALL(sub_1508F250); /* 0x150443A6: call 0x1508f250 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x150443AB: add esp, 0xc */
    _flag_k = FK_ADD;
    /* test eax, eax */ /* 0x150443AE: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_150443BF; /* 0x150443B0: je 0x150443bf */
L_150443B2:
    PUSH32(esp, edi); /* 0x150443B2: push edi */
    PUSH32(esp, edi); /* 0x150443B3: push edi */
    PUSH32(esp, edi); /* 0x150443B4: push edi */
    PUSH32(esp, edi); /* 0x150443B5: push edi */
    PUSH32(esp, edi); /* 0x150443B6: push edi */
    RECOMP_CALL(sub_1505A11B); /* 0x150443B7: call 0x1505a11b */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x14u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x14u; /* 0x150443BC: add esp, 0x14 */
    _flag_k = FK_ADD;
L_150443BF:
    PUSH32(esp, esi); /* 0x150443BF: push esi */
    PUSH32(esp, MEM32(ebp + (-0x4))); /* 0x150443C0: push dword ptr [ebp - 4] */
    PUSH32(esp, ebx); /* 0x150443C3: push ebx */
    RECOMP_CALL(sub_1508F120); /* 0x150443C4: call 0x1508f120 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x150443C9: add esp, 0xc */
    _flag_k = FK_ADD;
    /* test eax, eax */ /* 0x150443CC: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_150443DD; /* 0x150443CE: je 0x150443dd */
L_150443D0:
    PUSH32(esp, edi); /* 0x150443D0: push edi */
    PUSH32(esp, edi); /* 0x150443D1: push edi */
    PUSH32(esp, edi); /* 0x150443D2: push edi */
    PUSH32(esp, edi); /* 0x150443D3: push edi */
    PUSH32(esp, edi); /* 0x150443D4: push edi */
    RECOMP_CALL(sub_1505A11B); /* 0x150443D5: call 0x1505a11b */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x14u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x14u; /* 0x150443DA: add esp, 0x14 */
    _flag_k = FK_ADD;
L_150443DD:
    eax = ebx + 0x4; /* 0x150443DD: lea eax, [ebx + 4] */
    goto L_150443EC; /* 0x150443E0: jmp 0x150443ec */
L_150443E2:
    /* test eax, eax */ /* 0x150443E2: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_150443EA; /* 0x150443E4: je 0x150443ea */
L_150443E6:
    /* cmp ecx, eax */ /* 0x150443E6: cmp ecx, eax */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_150443EC; /* 0x150443E8: jbe 0x150443ec */
L_150443EA:
    eax = ecx; /* 0x150443EA: mov eax, ecx */
L_150443EC:
    PUSH32(esp, 0x2Eu); /* 0x150443EC: push 0x2e */
    PUSH32(esp, eax); /* 0x150443EE: push eax */
    RECOMP_CALL(sub_1508F7B0); /* 0x150443EF: call 0x1508f7b0 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x150443F4: pop ecx */
    ecx = POP32_VAL(esp); /* 0x150443F5: pop ecx */
    /* test eax, eax */ /* 0x150443F6: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_15044421; /* 0x150443F8: je 0x15044421 */
L_150443FA:
    PUSH32(esp, edi); /* 0x150443FA: push edi */
    PUSH32(esp, ebx); /* 0x150443FB: push ebx */
    RECOMP_CALL(sub_15037B60); /* 0x150443FC: call 0x15037b60 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x15044401: pop ecx */
    ecx = POP32_VAL(esp); /* 0x15044402: pop ecx */
    /* test eax, eax */ /* 0x15044403: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_15044503; /* 0x15044405: jne 0x15044503 */
L_1504440B:
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x1504440B: push dword ptr [ebp + 0x10] */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x1504440E: push dword ptr [ebp + 0xc] */
    PUSH32(esp, ebx); /* 0x15044411: push ebx */
    RECOMP_CALL(sub_1504451E); /* 0x15044412: call 0x1504451e */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x15044417: add esp, 0xc */
    _flag_k = FK_ADD;
    edi = eax; /* 0x1504441A: mov edi, eax */
    goto L_15044506; /* 0x1504441C: jmp 0x15044506 */
L_15044421:
    esi = ebx; /* 0x15044421: mov esi, ebx */
    ecx = esi + 0x2; /* 0x15044423: lea ecx, [esi + 2] */
L_15044426:
    SET_LO16(eax, MEM16(esi)); /* 0x15044426: mov ax, word ptr [esi] */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esi = esi + 2; /* 0x15044429: add esi, 2 */
    _flag_k = FK_ADD;
    /* cmp LO16(eax), LO16(edi) */ /* 0x1504442C: cmp ax, di */
    _flag_a = (uint32_t)(LO16(eax)) << 16; _flag_b = (uint32_t)(LO16(edi)) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    RECOMP_BACKEDGE();
    if (CMP_NE(_flag_a, _flag_b)) goto L_15044426; /* 0x1504442F: jne 0x15044426 */
L_15044431:
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esi = esi - ecx; /* 0x15044431: sub esi, ecx */
    _flag_k = FK_CMP;
    if (1u) _cf = (((esi) >> 0) & 1u); /* 0x15044433: sar esi, 1 */
    if (1u) { _flag_a = recomp_flags_pack(((uint32_t)((int32_t)esi >> 1u)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    esi = (uint32_t)((int32_t)esi >> 1u);
    PUSH32(esp, 2); /* 0x15044435: push 2 */
    eax = esi + 0x5; /* 0x15044437: lea eax, [esi + 5] */
    PUSH32(esp, eax); /* 0x1504443A: push eax */
    MEM32(ebp + (-0x4)) = eax; /* 0x1504443B: mov dword ptr [ebp - 4], eax */
    RECOMP_CALL(sub_15048EE2); /* 0x1504443E: call 0x15048ee2 */
    RECOMP_FLAGS_IN();
    MEM32(ebp + (-0x8)) = eax; /* 0x15044443: mov dword ptr [ebp - 8], eax */
    ecx = POP32_VAL(esp); /* 0x15044446: pop ecx */
    ecx = POP32_VAL(esp); /* 0x15044447: pop ecx */
    /* test eax, eax */ /* 0x15044448: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_Z(_flag_a, _flag_b)) goto L_1504430E; /* 0x1504444A: je 0x1504430e */
L_15044450:
    PUSH32(esp, ebx); /* 0x15044450: push ebx */
    ecx = esi + 0x5; /* 0x15044451: lea ecx, [esi + 5] */
    PUSH32(esp, ecx); /* 0x15044454: push ecx */
    PUSH32(esp, eax); /* 0x15044455: push eax */
    RECOMP_CALL(sub_1508F250); /* 0x15044456: call 0x1508f250 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x1504445B: add esp, 0xc */
    _flag_k = FK_ADD;
    /* test eax, eax */ /* 0x1504445E: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1504446F; /* 0x15044460: je 0x1504446f */
L_15044462:
    PUSH32(esp, edi); /* 0x15044462: push edi */
    PUSH32(esp, edi); /* 0x15044463: push edi */
    PUSH32(esp, edi); /* 0x15044464: push edi */
    PUSH32(esp, edi); /* 0x15044465: push edi */
    PUSH32(esp, edi); /* 0x15044466: push edi */
    RECOMP_CALL(sub_1505A11B); /* 0x15044467: call 0x1505a11b */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x14u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x14u; /* 0x1504446C: add esp, 0x14 */
    _flag_k = FK_ADD;
L_1504446F:
    eax = MEM32(ebp + (-0x8)); /* 0x1504446F: mov eax, dword ptr [ebp - 8] */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esi = esi + esi; /* 0x15044472: add esi, esi */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + esi; /* 0x15044474: add eax, esi */
    _flag_k = FK_ADD;
    MEM32(ebp + (-0x10)) = eax; /* 0x15044476: mov dword ptr [ebp - 0x10], eax */
    RECOMP_CALL(sub_15036430); /* 0x15044479: call 0x15036430 */
    RECOMP_FLAGS_IN();
    ecx = MEM32(ebp + (-0x4)); /* 0x1504447E: mov ecx, dword ptr [ebp - 4] */
    if (1u) _cf = (((esi) >> 0) & 1u); /* 0x15044481: sar esi, 1 */
    if (1u) { _flag_a = recomp_flags_pack(((uint32_t)((int32_t)esi >> 1u)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    esi = (uint32_t)((int32_t)esi >> 1u);
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ecx = ecx - esi; /* 0x15044483: sub ecx, esi */
    _flag_k = FK_CMP;
    esi = MEM32(ebp + (-0x8)); /* 0x15044485: mov esi, dword ptr [ebp - 8] */
    eax = MEM32(eax); /* 0x15044488: mov eax, dword ptr [eax] */
    MEM32(ebp + (-0x14)) = eax; /* 0x1504448A: mov dword ptr [ebp - 0x14], eax */
    eax = 0x150BA034u; /* 0x1504448D: mov eax, 0x150ba034 */
    MEM32(ebp + (-0x4)) = ecx; /* 0x15044492: mov dword ptr [ebp - 4], ecx */
    MEM32(ebp + (-0xC)) = eax; /* 0x15044495: mov dword ptr [ebp - 0xc], eax */
L_15044498:
    PUSH32(esp, MEM32(eax)); /* 0x15044498: push dword ptr [eax] */
    PUSH32(esp, ecx); /* 0x1504449A: push ecx */
    PUSH32(esp, MEM32(ebp + (-0x10))); /* 0x1504449B: push dword ptr [ebp - 0x10] */
    RECOMP_CALL(sub_1508F250); /* 0x1504449E: call 0x1508f250 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x150444A3: add esp, 0xc */
    _flag_k = FK_ADD;
    /* test eax, eax */ /* 0x150444A6: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_150444B7; /* 0x150444A8: je 0x150444b7 */
L_150444AA:
    PUSH32(esp, edi); /* 0x150444AA: push edi */
    PUSH32(esp, edi); /* 0x150444AB: push edi */
    PUSH32(esp, edi); /* 0x150444AC: push edi */
    PUSH32(esp, edi); /* 0x150444AD: push edi */
    PUSH32(esp, edi); /* 0x150444AE: push edi */
    RECOMP_CALL(sub_1505A11B); /* 0x150444AF: call 0x1505a11b */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x14u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x14u; /* 0x150444B4: add esp, 0x14 */
    _flag_k = FK_ADD;
L_150444B7:
    PUSH32(esp, edi); /* 0x150444B7: push edi */
    PUSH32(esp, esi); /* 0x150444B8: push esi */
    RECOMP_CALL(sub_15037B60); /* 0x150444B9: call 0x15037b60 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x150444BE: pop ecx */
    ecx = POP32_VAL(esp); /* 0x150444BF: pop ecx */
    /* test eax, eax */ /* 0x150444C0: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_150444DC; /* 0x150444C2: je 0x150444dc */
L_150444C4:
    eax = MEM32(ebp + (-0xC)); /* 0x150444C4: mov eax, dword ptr [ebp - 0xc] */
    ecx = MEM32(ebp + (-0x4)); /* 0x150444C7: mov ecx, dword ptr [ebp - 4] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - 4; /* 0x150444CA: sub eax, 4 */
    _flag_k = FK_CMP;
    MEM32(ebp + (-0xC)) = eax; /* 0x150444CD: mov dword ptr [ebp - 0xc], eax */
    /* cmp eax, 0x150BA028u */ /* 0x150444D0: cmp eax, 0x150ba028 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x150BA028u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_GE(_flag_a, _flag_b)) goto L_15044498; /* 0x150444D5: jge 0x15044498 */
L_150444D7:
    _flag_a = (uint32_t)((edi | 0xFFFFFFFFu)); _flag_b = (uint32_t)((edi | 0xFFFFFFFFu));
    edi = edi | 0xFFFFFFFFu; /* 0x150444D7: or edi, 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_150444F7; /* 0x150444DA: jmp 0x150444f7 */
L_150444DC:
    RECOMP_CALL(sub_15036430); /* 0x150444DC: call 0x15036430 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x150444E1: push dword ptr [ebp + 0x10] */
    ecx = MEM32(ebp + (-0x14)); /* 0x150444E4: mov ecx, dword ptr [ebp - 0x14] */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x150444E7: push dword ptr [ebp + 0xc] */
    MEM32(eax) = ecx; /* 0x150444EA: mov dword ptr [eax], ecx */
    PUSH32(esp, esi); /* 0x150444EC: push esi */
    RECOMP_CALL(sub_1504451E); /* 0x150444ED: call 0x1504451e */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x150444F2: add esp, 0xc */
    _flag_k = FK_ADD;
    edi = eax; /* 0x150444F5: mov edi, eax */
L_150444F7:
    PUSH32(esp, esi); /* 0x150444F7: push esi */
    RECOMP_CALL(sub_15048840); /* 0x150444F8: call 0x15048840 */
    RECOMP_FLAGS_IN();
    esi = MEM32(ebp + 0x8); /* 0x150444FD: mov esi, dword ptr [ebp + 8] */
    ecx = POP32_VAL(esp); /* 0x15044500: pop ecx */
    goto L_15044506; /* 0x15044501: jmp 0x15044506 */
L_15044503:
    _flag_a = (uint32_t)((edi | 0xFFFFFFFFu)); _flag_b = (uint32_t)((edi | 0xFFFFFFFFu));
    edi = edi | 0xFFFFFFFFu; /* 0x15044503: or edi, 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
L_15044506:
    /* cmp ebx, esi */ /* 0x15044506: cmp ebx, esi */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_15044511; /* 0x15044508: je 0x15044511 */
L_1504450A:
    PUSH32(esp, ebx); /* 0x1504450A: push ebx */
    RECOMP_CALL(sub_15048840); /* 0x1504450B: call 0x15048840 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x15044510: pop ecx */
L_15044511:
    eax = edi; /* 0x15044511: mov eax, edi */
L_15044513:
    edi = POP32_VAL(esp); /* 0x15044513: pop edi */
    esi = POP32_VAL(esp); /* 0x15044514: pop esi */
    ebx = POP32_VAL(esp); /* 0x15044515: pop ebx */
    esp = ebp; ebp = POP32_VAL(esp); /* 0x15044516: leave  */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x15044517: ret  */
    RECOMP_REGS_OUT();
}

void sub_1504451E(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1504451Eu);

L_1504451E:
    edi = edi; /* 0x1504451E: mov edi, edi */
    PUSH32(esp, ebp); /* 0x15044520: push ebp */
    ebp = esp; /* 0x15044521: mov ebp, esp */
    PUSH32(esp, ecx); /* 0x15044523: push ecx */
    PUSH32(esp, ecx); /* 0x15044524: push ecx */
    PUSH32(esp, esi); /* 0x15044525: push esi */
    esi = MEM32(ebp + 0x8); /* 0x15044526: mov esi, dword ptr [ebp + 8] */
    /* test esi, esi */ /* 0x15044529: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1504454C; /* 0x1504452B: jne 0x1504454c */
L_1504452D:
    RECOMP_CALL(sub_15036430); /* 0x1504452D: call 0x15036430 */
    RECOMP_FLAGS_IN();
    MEM32(eax) = 0x16u; /* 0x15044532: mov dword ptr [eax], 0x16 */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x15044538: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, eax); /* 0x1504453A: push eax */
    PUSH32(esp, eax); /* 0x1504453B: push eax */
    PUSH32(esp, eax); /* 0x1504453C: push eax */
    PUSH32(esp, eax); /* 0x1504453D: push eax */
    PUSH32(esp, eax); /* 0x1504453E: push eax */
    RECOMP_CALL(sub_1505A110); /* 0x1504453F: call 0x1505a110 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x14u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x14u; /* 0x15044544: add esp, 0x14 */
    _flag_k = FK_ADD;
L_15044547:
    _flag_a = (uint32_t)((eax | 0xFFFFFFFFu)); _flag_b = (uint32_t)((eax | 0xFFFFFFFFu));
    eax = eax | 0xFFFFFFFFu; /* 0x15044547: or eax, 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_15044593; /* 0x1504454A: jmp 0x15044593 */
L_1504454C:
    /* cmp MEM32(ebp + 0xC), 0 */ /* 0x1504454C: cmp dword ptr [ebp + 0xc], 0 */
    _flag_a = (uint32_t)(MEM32(ebp + 0xC)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1504452D; /* 0x15044550: je 0x1504452d */
L_15044552:
    PUSH32(esp, esi); /* 0x15044552: push esi */
    eax = ebp + (-0x8); /* 0x15044553: lea eax, [ebp - 8] */
    PUSH32(esp, eax); /* 0x15044556: push eax */
    eax = ebp + (-0x4); /* 0x15044557: lea eax, [ebp - 4] */
    PUSH32(esp, eax); /* 0x1504455A: push eax */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x1504455B: push dword ptr [ebp + 0x10] */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x1504455E: push dword ptr [ebp + 0xc] */
    RECOMP_CALL(sub_15045BA0); /* 0x15044561: call 0x15045ba0 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x14u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x14u; /* 0x15044566: add esp, 0x14 */
    _flag_k = FK_ADD;
    /* cmp eax, 0xFFFFFFFFu */ /* 0x15044569: cmp eax, -1 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xFFFFFFFFu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_EQ(_flag_a, _flag_b)) goto L_15044547; /* 0x1504456C: je 0x15044547 */
L_1504456E:
    PUSH32(esp, MEM32(ebp + (-0x8))); /* 0x1504456E: push dword ptr [ebp - 8] */
    PUSH32(esp, MEM32(ebp + (-0x4))); /* 0x15044571: push dword ptr [ebp - 4] */
    PUSH32(esp, esi); /* 0x15044574: push esi */
    PUSH32(esp, 2); /* 0x15044575: push 2 */
    RECOMP_CALL(sub_150458C9); /* 0x15044577: call 0x150458c9 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, MEM32(ebp + (-0x4))); /* 0x1504457C: push dword ptr [ebp - 4] */
    esi = eax; /* 0x1504457F: mov esi, eax */
    RECOMP_CALL(sub_15048840); /* 0x15044581: call 0x15048840 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, MEM32(ebp + (-0x8))); /* 0x15044586: push dword ptr [ebp - 8] */
    RECOMP_CALL(sub_15048840); /* 0x15044589: call 0x15048840 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x18u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x18u; /* 0x1504458E: add esp, 0x18 */
    _flag_k = FK_ADD;
    eax = esi; /* 0x15044591: mov eax, esi */
L_15044593:
    esi = POP32_VAL(esp); /* 0x15044593: pop esi */
    esp = ebp; ebp = POP32_VAL(esp); /* 0x15044594: leave  */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x15044595: ret  */
    RECOMP_REGS_OUT();
}

void sub_150445A0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x150445A0u);

L_150445A0:
    edi = edi; /* 0x150445A0: mov edi, edi */
    PUSH32(esp, ebp); /* 0x150445A2: push ebp */
    ebp = esp; /* 0x150445A3: mov ebp, esp */
    PUSH32(esp, 0); /* 0x150445A5: push 0 */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x150445A7: push dword ptr [ebp + 0xc] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x150445AA: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_150445C0); /* 0x150445AD: call 0x150445c0 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x150445B2: add esp, 0xc */
    _flag_k = FK_ADD;
    ebp = POP32_VAL(esp); /* 0x150445B5: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x150445B6: ret  */
    RECOMP_REGS_OUT();
}

void sub_150445C0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x150445C0u);

L_150445C0:
    edi = edi; /* 0x150445C0: mov edi, edi */
    PUSH32(esp, ebp); /* 0x150445C2: push ebp */
    ebp = esp; /* 0x150445C3: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0xCu; /* 0x150445C5: sub esp, 0xc */
    _flag_k = FK_CMP;
    PUSH32(esp, esi); /* 0x150445C8: push esi */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    esi = 0; /* 0x150445C9: xor esi, esi */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, edi); /* 0x150445CB: push edi */
    edi = MEM32(ebp + 0x8); /* 0x150445CC: mov edi, dword ptr [ebp + 8] */
    MEM32(ebp + (-0x8)) = esi; /* 0x150445CF: mov dword ptr [ebp - 8], esi */
    MEM32(ebp + (-0x4)) = esi; /* 0x150445D2: mov dword ptr [ebp - 4], esi */
    /* test edi, edi */ /* 0x150445D5: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_150445F6; /* 0x150445D7: jne 0x150445f6 */
L_150445D9:
    RECOMP_CALL(sub_15036430); /* 0x150445D9: call 0x15036430 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, esi); /* 0x150445DE: push esi */
    PUSH32(esp, esi); /* 0x150445DF: push esi */
    PUSH32(esp, esi); /* 0x150445E0: push esi */
    PUSH32(esp, esi); /* 0x150445E1: push esi */
    PUSH32(esp, esi); /* 0x150445E2: push esi */
    MEM32(eax) = 0x16u; /* 0x150445E3: mov dword ptr [eax], 0x16 */
    RECOMP_CALL(sub_1505A110); /* 0x150445E9: call 0x1505a110 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x14u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x14u; /* 0x150445EE: add esp, 0x14 */
    _flag_k = FK_ADD;
    goto L_15044813; /* 0x150445F1: jmp 0x15044813 */
L_150445F6:
    /* cmp MEM16(edi), LO16(esi) */ /* 0x150445F6: cmp word ptr [edi], si */
    _flag_a = (uint32_t)(MEM16(edi)) << 16; _flag_b = (uint32_t)(LO16(esi)) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    RECOMP_BACKEDGE();
    if (CMP_EQ(_flag_a, _flag_b)) goto L_150445D9; /* 0x150445F9: je 0x150445d9 */
L_150445FB:
    PUSH32(esp, ebx); /* 0x150445FB: push ebx */
    ebx = MEM32(ebp + 0xC); /* 0x150445FC: mov ebx, dword ptr [ebp + 0xc] */
    /* test ebx, ebx */ /* 0x150445FF: test ebx, ebx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ebx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_15044620; /* 0x15044601: jne 0x15044620 */
L_15044603:
    RECOMP_CALL(sub_15036430); /* 0x15044603: call 0x15036430 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, esi); /* 0x15044608: push esi */
    PUSH32(esp, esi); /* 0x15044609: push esi */
    PUSH32(esp, esi); /* 0x1504460A: push esi */
    PUSH32(esp, esi); /* 0x1504460B: push esi */
    PUSH32(esp, esi); /* 0x1504460C: push esi */
    MEM32(eax) = 0x16u; /* 0x1504460D: mov dword ptr [eax], 0x16 */
    RECOMP_CALL(sub_1505A110); /* 0x15044613: call 0x1505a110 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x14u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x14u; /* 0x15044618: add esp, 0x14 */
    _flag_k = FK_ADD;
    goto L_15044812; /* 0x1504461B: jmp 0x15044812 */
L_15044620:
    eax = MEM32(ebx); /* 0x15044620: mov eax, dword ptr [ebx] */
    /* test eax, eax */ /* 0x15044622: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_Z(_flag_a, _flag_b)) goto L_15044603; /* 0x15044624: je 0x15044603 */
L_15044626:
    /* cmp MEM16(eax), LO16(esi) */ /* 0x15044626: cmp word ptr [eax], si */
    _flag_a = (uint32_t)(MEM16(eax)) << 16; _flag_b = (uint32_t)(LO16(esi)) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    RECOMP_BACKEDGE();
    if (CMP_EQ(_flag_a, _flag_b)) goto L_15044603; /* 0x15044629: je 0x15044603 */
L_1504462B:
    RECOMP_CALL(sub_15036430); /* 0x1504462B: call 0x15036430 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x15044630: push dword ptr [ebp + 0x10] */
    PUSH32(esp, ebx); /* 0x15044633: push ebx */
    PUSH32(esp, edi); /* 0x15044634: push edi */
    MEM32(eax) = esi; /* 0x15044635: mov dword ptr [eax], esi */
    RECOMP_CALL(sub_150442E0); /* 0x15044637: call 0x150442e0 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x1504463C: add esp, 0xc */
    _flag_k = FK_ADD;
    RECOMP_CALL(sub_15036430); /* 0x1504463F: call 0x15036430 */
    RECOMP_FLAGS_IN();
    /* cmp MEM32(eax), 2 */ /* 0x15044644: cmp dword ptr [eax], 2 */
    _flag_a = (uint32_t)(MEM32(eax)); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_15044803; /* 0x15044647: jne 0x15044803 */
L_1504464D:
    PUSH32(esp, 0x5Cu); /* 0x1504464D: push 0x5c */
    eax = POP32_VAL(esp); /* 0x1504464F: pop eax */
    PUSH32(esp, eax); /* 0x15044650: push eax */
    PUSH32(esp, edi); /* 0x15044651: push edi */
    RECOMP_CALL(sub_1508F1B0); /* 0x15044652: call 0x1508f1b0 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x15044657: pop ecx */
    ecx = POP32_VAL(esp); /* 0x15044658: pop ecx */
    /* test eax, eax */ /* 0x15044659: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_15044803; /* 0x1504465B: jne 0x15044803 */
L_15044661:
    PUSH32(esp, 0x2Fu); /* 0x15044661: push 0x2f */
    eax = POP32_VAL(esp); /* 0x15044663: pop eax */
    PUSH32(esp, eax); /* 0x15044664: push eax */
    PUSH32(esp, edi); /* 0x15044665: push edi */
    RECOMP_CALL(sub_1508F1B0); /* 0x15044666: call 0x1508f1b0 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1504466B: pop ecx */
    ecx = POP32_VAL(esp); /* 0x1504466C: pop ecx */
    /* test eax, eax */ /* 0x1504466D: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_15044803; /* 0x1504466F: jne 0x15044803 */
L_15044675:
    /* cmp MEM16(edi), LO16(esi) */ /* 0x15044675: cmp word ptr [edi], si */
    _flag_a = (uint32_t)(MEM16(edi)) << 16; _flag_b = (uint32_t)(LO16(esi)) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_15044685; /* 0x15044678: je 0x15044685 */
L_1504467A:
    /* cmp MEM16(edi + 0x2), 0x3Au */ /* 0x1504467A: cmp word ptr [edi + 2], 0x3a */
    _flag_a = (uint32_t)(MEM16(edi + 0x2)) << 16; _flag_b = (uint32_t)(0x3Au) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_15044803; /* 0x1504467F: je 0x15044803 */
L_15044685:
    PUSH32(esp, 0x15004908u); /* 0x15044685: push 0x15004908 */
    eax = ebp + (-0x4); /* 0x1504468A: lea eax, [ebp - 4] */
    PUSH32(esp, esi); /* 0x1504468D: push esi */
    PUSH32(esp, eax); /* 0x1504468E: push eax */
    RECOMP_CALL(sub_1505BF8C); /* 0x1504468F: call 0x1505bf8c */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x15044694: add esp, 0xc */
    _flag_k = FK_ADD;
    /* test eax, eax */ /* 0x15044697: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_150446BA; /* 0x15044699: je 0x150446ba */
L_1504469B:
    /* cmp eax, 0x16u */ /* 0x1504469B: cmp eax, 0x16 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x16u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_150446B2; /* 0x1504469E: jne 0x150446b2 */
L_150446A0:
    PUSH32(esp, esi); /* 0x150446A0: push esi */
    PUSH32(esp, esi); /* 0x150446A1: push esi */
    PUSH32(esp, esi); /* 0x150446A2: push esi */
    PUSH32(esp, esi); /* 0x150446A3: push esi */
    PUSH32(esp, esi); /* 0x150446A4: push esi */
    RECOMP_CALL(sub_1505A11B); /* 0x150446A5: call 0x1505a11b */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x14u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x14u; /* 0x150446AA: add esp, 0x14 */
    _flag_k = FK_ADD;
    goto L_15044803; /* 0x150446AD: jmp 0x15044803 */
L_150446B2:
    /* test eax, eax */ /* 0x150446B2: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_15044803; /* 0x150446B4: jne 0x15044803 */
L_150446BA:
    /* cmp MEM32(ebp + (-0x4)), esi */ /* 0x150446BA: cmp dword ptr [ebp - 4], esi */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x4))); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_15044812; /* 0x150446BD: je 0x15044812 */
L_150446C3:
    PUSH32(esp, 2); /* 0x150446C3: push 2 */
    PUSH32(esp, 0x104u); /* 0x150446C5: push 0x104 */
    RECOMP_CALL(sub_15048EE2); /* 0x150446CA: call 0x15048ee2 */
    RECOMP_FLAGS_IN();
    esi = eax; /* 0x150446CF: mov esi, eax */
    ecx = POP32_VAL(esp); /* 0x150446D1: pop ecx */
    ecx = POP32_VAL(esp); /* 0x150446D2: pop ecx */
    /* test esi, esi */ /* 0x150446D3: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_15044803; /* 0x150446D5: je 0x15044803 */
L_150446DB:
    ebx = MEM32(ebp + (-0x4)); /* 0x150446DB: mov ebx, dword ptr [ebp - 4] */
L_150446DE:
    eax = (uint32_t)MEM16(ebx); /* 0x150446DE: movzx eax, word ptr [ebx] */
    ecx = esi; /* 0x150446E1: mov ecx, esi */
    /* test LO16(eax), LO16(eax) */ /* 0x150446E3: test ax, ax */
    _flag_a = (uint32_t)(LO16(eax)) << 16; _flag_b = (uint32_t)(LO16(eax)) << 16;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 16);
    if (TEST_Z(_flag_a, _flag_b)) goto L_1504470D; /* 0x150446E6: je 0x1504470d */
L_150446E8:
    edx = eax; /* 0x150446E8: mov edx, eax */
L_150446EA:
    /* cmp LO16(edx), 0x3Bu */ /* 0x150446EA: cmp dx, 0x3b */
    _flag_a = (uint32_t)(LO16(edx)) << 16; _flag_b = (uint32_t)(0x3Bu) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1504470D; /* 0x150446EE: je 0x1504470d */
L_150446F0:
    eax = esi + 0x204; /* 0x150446F0: lea eax, [esi + 0x204] */
    /* cmp ecx, eax */ /* 0x150446F6: cmp ecx, eax */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_AE(_flag_a, _flag_b)) goto L_1504470D; /* 0x150446F8: jae 0x1504470d */
L_150446FA:
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ebx = ebx + 2; /* 0x150446FA: add ebx, 2 */
    _flag_k = FK_ADD;
    MEM16(ecx) = (uint16_t)(LO16(edx)); /* 0x150446FD: mov word ptr [ecx], dx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 2; /* 0x15044700: add ecx, 2 */
    _flag_k = FK_ADD;
    eax = (uint32_t)MEM16(ebx); /* 0x15044703: movzx eax, word ptr [ebx] */
    edx = eax; /* 0x15044706: mov edx, eax */
    /* test LO16(eax), LO16(eax) */ /* 0x15044708: test ax, ax */
    _flag_a = (uint32_t)(LO16(eax)) << 16; _flag_b = (uint32_t)(LO16(eax)) << 16;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 16);
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_150446EA; /* 0x1504470B: jne 0x150446ea */
L_1504470D:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1504470D: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM16(ecx) = (uint16_t)(LO16(eax)); /* 0x1504470F: mov word ptr [ecx], ax */
    /* cmp ecx, esi */ /* 0x15044712: cmp ecx, esi */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_1504472C; /* 0x15044714: jbe 0x1504472c */
L_15044716:
    ecx = (uint32_t)MEM16(ecx + (-0x2)); /* 0x15044716: movzx ecx, word ptr [ecx - 2] */
    PUSH32(esp, 0x5Cu); /* 0x1504471A: push 0x5c */
    edx = POP32_VAL(esp); /* 0x1504471C: pop edx */
    eax = ecx; /* 0x1504471D: mov eax, ecx */
    /* cmp LO16(ecx), LO16(edx) */ /* 0x1504471F: cmp cx, dx */
    _flag_a = (uint32_t)(LO16(ecx)) << 16; _flag_b = (uint32_t)(LO16(edx)) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_15044752; /* 0x15044722: je 0x15044752 */
L_15044724:
    PUSH32(esp, 0x2Fu); /* 0x15044724: push 0x2f */
    ecx = POP32_VAL(esp); /* 0x15044726: pop ecx */
    /* cmp LO16(eax), LO16(ecx) */ /* 0x15044727: cmp ax, cx */
    _flag_a = (uint32_t)(LO16(eax)) << 16; _flag_b = (uint32_t)(LO16(ecx)) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_15044752; /* 0x1504472A: je 0x15044752 */
L_1504472C:
    PUSH32(esp, 0x15004914u); /* 0x1504472C: push 0x15004914 */
    PUSH32(esp, 0x104u); /* 0x15044731: push 0x104 */
    PUSH32(esp, esi); /* 0x15044736: push esi */
    RECOMP_CALL(sub_1508F120); /* 0x15044737: call 0x1508f120 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x1504473C: add esp, 0xc */
    _flag_k = FK_ADD;
    /* test eax, eax */ /* 0x1504473F: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_15044752; /* 0x15044741: je 0x15044752 */
L_15044743:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x15044743: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, eax); /* 0x15044745: push eax */
    PUSH32(esp, eax); /* 0x15044746: push eax */
    PUSH32(esp, eax); /* 0x15044747: push eax */
    PUSH32(esp, eax); /* 0x15044748: push eax */
    PUSH32(esp, eax); /* 0x15044749: push eax */
    RECOMP_CALL(sub_1505A11B); /* 0x1504474A: call 0x1505a11b */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x14u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x14u; /* 0x1504474F: add esp, 0x14 */
    _flag_k = FK_ADD;
L_15044752:
    edx = esi; /* 0x15044752: mov edx, esi */
    ecx = edx + 0x2; /* 0x15044754: lea ecx, [edx + 2] */
L_15044757:
    SET_LO16(eax, MEM16(edx)); /* 0x15044757: mov ax, word ptr [edx] */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edx = edx + 2; /* 0x1504475A: add edx, 2 */
    _flag_k = FK_ADD;
    /* cmp LO16(eax), MEM16(ebp + (-0x8)) */ /* 0x1504475D: cmp ax, word ptr [ebp - 8] */
    _flag_a = (uint32_t)(LO16(eax)) << 16; _flag_b = (uint32_t)(MEM16(ebp + (-0x8))) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    RECOMP_BACKEDGE();
    if (CMP_NE(_flag_a, _flag_b)) goto L_15044757; /* 0x15044761: jne 0x15044757 */
L_15044763:
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    edx = edx - ecx; /* 0x15044763: sub edx, ecx */
    _flag_k = FK_CMP;
    ecx = edi; /* 0x15044765: mov ecx, edi */
    if (1u) _cf = (((edx) >> 0) & 1u); /* 0x15044767: sar edx, 1 */
    if (1u) { _flag_a = recomp_flags_pack(((uint32_t)((int32_t)edx >> 1u)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    edx = (uint32_t)((int32_t)edx >> 1u);
    eax = ecx + 0x2; /* 0x15044769: lea eax, [ecx + 2] */
    MEM32(ebp + (-0xC)) = eax; /* 0x1504476C: mov dword ptr [ebp - 0xc], eax */
L_1504476F:
    SET_LO16(eax, MEM16(ecx)); /* 0x1504476F: mov ax, word ptr [ecx] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 2; /* 0x15044772: add ecx, 2 */
    _flag_k = FK_ADD;
    /* cmp LO16(eax), MEM16(ebp + (-0x8)) */ /* 0x15044775: cmp ax, word ptr [ebp - 8] */
    _flag_a = (uint32_t)(LO16(eax)) << 16; _flag_b = (uint32_t)(MEM16(ebp + (-0x8))) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    RECOMP_BACKEDGE();
    if (CMP_NE(_flag_a, _flag_b)) goto L_1504476F; /* 0x15044779: jne 0x1504476f */
L_1504477B:
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(MEM32(ebp + (-0xC)));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ecx = ecx - MEM32(ebp + (-0xC)); /* 0x1504477B: sub ecx, dword ptr [ebp - 0xc] */
    _flag_k = FK_CMP;
    if (1u) _cf = (((ecx) >> 0) & 1u); /* 0x1504477E: sar ecx, 1 */
    if (1u) { _flag_a = recomp_flags_pack(((uint32_t)((int32_t)ecx >> 1u)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ecx = (uint32_t)((int32_t)ecx >> 1u);
    eax = ecx + edx; /* 0x15044780: lea eax, [ecx + edx] */
    ecx = 0x104u; /* 0x15044783: mov ecx, 0x104 */
    /* cmp eax, ecx */ /* 0x15044788: cmp eax, ecx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_AE(_flag_a, _flag_b)) goto L_150447FC; /* 0x1504478A: jae 0x150447fc */
L_1504478C:
    PUSH32(esp, edi); /* 0x1504478C: push edi */
    PUSH32(esp, ecx); /* 0x1504478D: push ecx */
    PUSH32(esp, esi); /* 0x1504478E: push esi */
    RECOMP_CALL(sub_1508F120); /* 0x1504478F: call 0x1508f120 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x15044794: add esp, 0xc */
    _flag_k = FK_ADD;
    /* test eax, eax */ /* 0x15044797: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_150447AA; /* 0x15044799: je 0x150447aa */
L_1504479B:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1504479B: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, eax); /* 0x1504479D: push eax */
    PUSH32(esp, eax); /* 0x1504479E: push eax */
    PUSH32(esp, eax); /* 0x1504479F: push eax */
    PUSH32(esp, eax); /* 0x150447A0: push eax */
    PUSH32(esp, eax); /* 0x150447A1: push eax */
    RECOMP_CALL(sub_1505A11B); /* 0x150447A2: call 0x1505a11b */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x14u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x14u; /* 0x150447A7: add esp, 0x14 */
    _flag_k = FK_ADD;
L_150447AA:
    RECOMP_CALL(sub_15036430); /* 0x150447AA: call 0x15036430 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x150447AF: push dword ptr [ebp + 0x10] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x150447B2: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x150447B4: push dword ptr [ebp + 0xc] */
    MEM32(eax) = ecx; /* 0x150447B7: mov dword ptr [eax], ecx */
    PUSH32(esp, esi); /* 0x150447B9: push esi */
    RECOMP_CALL(sub_150442E0); /* 0x150447BA: call 0x150442e0 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x150447BF: add esp, 0xc */
    _flag_k = FK_ADD;
    RECOMP_CALL(sub_15036430); /* 0x150447C2: call 0x15036430 */
    RECOMP_FLAGS_IN();
    /* cmp MEM32(eax), 2 */ /* 0x150447C7: cmp dword ptr [eax], 2 */
    _flag_a = (uint32_t)(MEM32(eax)); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_150447ED; /* 0x150447CA: je 0x150447ed */
L_150447CC:
    eax = (uint32_t)MEM16(esi); /* 0x150447CC: movzx eax, word ptr [esi] */
    PUSH32(esp, 0x5Cu); /* 0x150447CF: push 0x5c */
    edx = POP32_VAL(esp); /* 0x150447D1: pop edx */
    PUSH32(esp, 0x2Fu); /* 0x150447D2: push 0x2f */
    ecx = POP32_VAL(esp); /* 0x150447D4: pop ecx */
    /* cmp LO16(eax), LO16(edx) */ /* 0x150447D5: cmp ax, dx */
    _flag_a = (uint32_t)(LO16(eax)) << 16; _flag_b = (uint32_t)(LO16(edx)) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_150447DF; /* 0x150447D8: je 0x150447df */
L_150447DA:
    /* cmp LO16(eax), LO16(ecx) */ /* 0x150447DA: cmp ax, cx */
    _flag_a = (uint32_t)(LO16(eax)) << 16; _flag_b = (uint32_t)(LO16(ecx)) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    if (CMP_NE(_flag_a, _flag_b)) goto L_150447FC; /* 0x150447DD: jne 0x150447fc */
L_150447DF:
    eax = (uint32_t)MEM16(esi + 0x2); /* 0x150447DF: movzx eax, word ptr [esi + 2] */
    /* cmp LO16(eax), LO16(edx) */ /* 0x150447E3: cmp ax, dx */
    _flag_a = (uint32_t)(LO16(eax)) << 16; _flag_b = (uint32_t)(LO16(edx)) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_150447ED; /* 0x150447E6: je 0x150447ed */
L_150447E8:
    /* cmp LO16(eax), LO16(ecx) */ /* 0x150447E8: cmp ax, cx */
    _flag_a = (uint32_t)(LO16(eax)) << 16; _flag_b = (uint32_t)(LO16(ecx)) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    if (CMP_NE(_flag_a, _flag_b)) goto L_150447FC; /* 0x150447EB: jne 0x150447fc */
L_150447ED:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x150447ED: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp MEM16(ebx), LO16(eax) */ /* 0x150447EF: cmp word ptr [ebx], ax */
    _flag_a = (uint32_t)(MEM16(ebx)) << 16; _flag_b = (uint32_t)(LO16(eax)) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_150447FC; /* 0x150447F2: je 0x150447fc */
L_150447F4:
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ebx = ebx + 2; /* 0x150447F4: add ebx, 2 */
    _flag_k = FK_ADD;
    RECOMP_BACKEDGE();
    goto L_150446DE; /* 0x150447F7: jmp 0x150446de */
L_150447FC:
    PUSH32(esp, esi); /* 0x150447FC: push esi */
    RECOMP_CALL(sub_15048840); /* 0x150447FD: call 0x15048840 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x15044802: pop ecx */
L_15044803:
    /* cmp MEM32(ebp + (-0x4)), 0 */ /* 0x15044803: cmp dword ptr [ebp - 4], 0 */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x4))); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_15044812; /* 0x15044807: je 0x15044812 */
L_15044809:
    PUSH32(esp, MEM32(ebp + (-0x4))); /* 0x15044809: push dword ptr [ebp - 4] */
    RECOMP_CALL(sub_15048840); /* 0x1504480C: call 0x15048840 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x15044811: pop ecx */
L_15044812:
    ebx = POP32_VAL(esp); /* 0x15044812: pop ebx */
L_15044813:
    edi = POP32_VAL(esp); /* 0x15044813: pop edi */
    _flag_a = (uint32_t)((eax | 0xFFFFFFFFu)); _flag_b = (uint32_t)((eax | 0xFFFFFFFFu));
    eax = eax | 0xFFFFFFFFu; /* 0x15044814: or eax, 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    esi = POP32_VAL(esp); /* 0x15044817: pop esi */
    esp = ebp; ebp = POP32_VAL(esp); /* 0x15044818: leave  */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x15044819: ret  */
    RECOMP_REGS_OUT();
}

void sub_15044820(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x15044820u);

L_15044820:
    edi = edi; /* 0x15044820: mov edi, edi */
    PUSH32(esp, ebp); /* 0x15044822: push ebp */
    ebp = esp; /* 0x15044823: mov ebp, esp */
    eax = MEM32(ebp + 0xC); /* 0x15044825: mov eax, dword ptr [ebp + 0xc] */
    PUSH32(esp, esi); /* 0x15044828: push esi */
    /* test eax, eax */ /* 0x15044829: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1504484C; /* 0x1504482B: jne 0x1504484c */
L_1504482D:
    RECOMP_CALL(sub_15036430); /* 0x1504482D: call 0x15036430 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    esi = 0; /* 0x15044832: xor esi, esi */
    _cf = 0;
    _flag_k = FK_TEST;
L_15044834:
    PUSH32(esp, esi); /* 0x15044834: push esi */
    PUSH32(esp, esi); /* 0x15044835: push esi */
    PUSH32(esp, esi); /* 0x15044836: push esi */
    PUSH32(esp, esi); /* 0x15044837: push esi */
    PUSH32(esp, esi); /* 0x15044838: push esi */
    MEM32(eax) = 0x16u; /* 0x15044839: mov dword ptr [eax], 0x16 */
    RECOMP_CALL(sub_1505A110); /* 0x1504483F: call 0x1505a110 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x14u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x14u; /* 0x15044844: add esp, 0x14 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)((eax | 0xFFFFFFFFu)); _flag_b = (uint32_t)((eax | 0xFFFFFFFFu));
    eax = eax | 0xFFFFFFFFu; /* 0x15044847: or eax, 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_15044877; /* 0x1504484A: jmp 0x15044877 */
L_1504484C:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    esi = 0; /* 0x1504484C: xor esi, esi */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp MEM16(eax), LO16(esi) */ /* 0x1504484E: cmp word ptr [eax], si */
    _flag_a = (uint32_t)(MEM16(eax)) << 16; _flag_b = (uint32_t)(LO16(esi)) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    if (CMP_NE(_flag_a, _flag_b)) goto L_1504485A; /* 0x15044851: jne 0x1504485a */
L_15044853:
    RECOMP_CALL(sub_15036430); /* 0x15044853: call 0x15036430 */
    RECOMP_FLAGS_IN();
    RECOMP_BACKEDGE();
    goto L_15044834; /* 0x15044858: jmp 0x15044834 */
L_1504485A:
    ecx = MEM32(ebp + 0x10); /* 0x1504485A: mov ecx, dword ptr [ebp + 0x10] */
    /* test ecx, ecx */ /* 0x1504485D: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_Z(_flag_a, _flag_b)) goto L_15044853; /* 0x1504485F: je 0x15044853 */
L_15044861:
    /* cmp MEM16(ecx), LO16(esi) */ /* 0x15044861: cmp word ptr [ecx], si */
    _flag_a = (uint32_t)(MEM16(ecx)) << 16; _flag_b = (uint32_t)(LO16(esi)) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    RECOMP_BACKEDGE();
    if (CMP_EQ(_flag_a, _flag_b)) goto L_15044853; /* 0x15044864: je 0x15044853 */
L_15044866:
    PUSH32(esp, esi); /* 0x15044866: push esi */
    ecx = ebp + 0x10; /* 0x15044867: lea ecx, [ebp + 0x10] */
    PUSH32(esp, ecx); /* 0x1504486A: push ecx */
    PUSH32(esp, eax); /* 0x1504486B: push eax */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x1504486C: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_15044A30); /* 0x1504486F: call 0x15044a30 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x10u; /* 0x15044874: add esp, 0x10 */
    _flag_k = FK_ADD;
L_15044877:
    esi = POP32_VAL(esp); /* 0x15044877: pop esi */
    ebp = POP32_VAL(esp); /* 0x15044878: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x15044879: ret  */
    RECOMP_REGS_OUT();
}

void sub_15044880(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x15044880u);

L_15044880:
    edi = edi; /* 0x15044880: mov edi, edi */
    PUSH32(esp, ebp); /* 0x15044882: push ebp */
    ebp = esp; /* 0x15044883: mov ebp, esp */
    edx = MEM32(ebp + 0xC); /* 0x15044885: mov edx, dword ptr [ebp + 0xc] */
    PUSH32(esp, esi); /* 0x15044888: push esi */
    /* test edx, edx */ /* 0x15044889: test edx, edx */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(edx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_150448AC; /* 0x1504488B: jne 0x150448ac */
L_1504488D:
    RECOMP_CALL(sub_15036430); /* 0x1504488D: call 0x15036430 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    esi = 0; /* 0x15044892: xor esi, esi */
    _cf = 0;
    _flag_k = FK_TEST;
L_15044894:
    PUSH32(esp, esi); /* 0x15044894: push esi */
    PUSH32(esp, esi); /* 0x15044895: push esi */
    PUSH32(esp, esi); /* 0x15044896: push esi */
    PUSH32(esp, esi); /* 0x15044897: push esi */
    PUSH32(esp, esi); /* 0x15044898: push esi */
    MEM32(eax) = 0x16u; /* 0x15044899: mov dword ptr [eax], 0x16 */
    RECOMP_CALL(sub_1505A110); /* 0x1504489F: call 0x1505a110 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x14u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x14u; /* 0x150448A4: add esp, 0x14 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)((eax | 0xFFFFFFFFu)); _flag_b = (uint32_t)((eax | 0xFFFFFFFFu));
    eax = eax | 0xFFFFFFFFu; /* 0x150448A7: or eax, 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_150448E4; /* 0x150448AA: jmp 0x150448e4 */
L_150448AC:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    esi = 0; /* 0x150448AC: xor esi, esi */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp MEM16(edx), LO16(esi) */ /* 0x150448AE: cmp word ptr [edx], si */
    _flag_a = (uint32_t)(MEM16(edx)) << 16; _flag_b = (uint32_t)(LO16(esi)) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    if (CMP_NE(_flag_a, _flag_b)) goto L_150448BA; /* 0x150448B1: jne 0x150448ba */
L_150448B3:
    RECOMP_CALL(sub_15036430); /* 0x150448B3: call 0x15036430 */
    RECOMP_FLAGS_IN();
    RECOMP_BACKEDGE();
    goto L_15044894; /* 0x150448B8: jmp 0x15044894 */
L_150448BA:
    eax = MEM32(ebp + 0x10); /* 0x150448BA: mov eax, dword ptr [ebp + 0x10] */
    /* test eax, eax */ /* 0x150448BD: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_Z(_flag_a, _flag_b)) goto L_150448B3; /* 0x150448BF: je 0x150448b3 */
L_150448C1:
    /* cmp MEM16(eax), LO16(esi) */ /* 0x150448C1: cmp word ptr [eax], si */
    _flag_a = (uint32_t)(MEM16(eax)) << 16; _flag_b = (uint32_t)(LO16(esi)) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    RECOMP_BACKEDGE();
    if (CMP_EQ(_flag_a, _flag_b)) goto L_150448B3; /* 0x150448C4: je 0x150448b3 */
L_150448C6:
    ecx = ebp + 0x10; /* 0x150448C6: lea ecx, [ebp + 0x10] */
L_150448C9:
    eax = MEM32(ecx); /* 0x150448C9: mov eax, dword ptr [ecx] */
    ecx = ecx + 0x4; /* 0x150448CB: lea ecx, [ecx + 4] */
    /* test eax, eax */ /* 0x150448CE: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_150448C9; /* 0x150448D0: jne 0x150448c9 */
L_150448D2:
    PUSH32(esp, MEM32(ecx)); /* 0x150448D2: push dword ptr [ecx] */
    eax = ebp + 0x10; /* 0x150448D4: lea eax, [ebp + 0x10] */
    PUSH32(esp, eax); /* 0x150448D7: push eax */
    PUSH32(esp, edx); /* 0x150448D8: push edx */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x150448D9: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_15044A30); /* 0x150448DC: call 0x15044a30 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x10u; /* 0x150448E1: add esp, 0x10 */
    _flag_k = FK_ADD;
L_150448E4:
    esi = POP32_VAL(esp); /* 0x150448E4: pop esi */
    ebp = POP32_VAL(esp); /* 0x150448E5: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x150448E6: ret  */
    RECOMP_REGS_OUT();
}

void sub_150448F0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x150448F0u);

L_150448F0:
    edi = edi; /* 0x150448F0: mov edi, edi */
    PUSH32(esp, ebp); /* 0x150448F2: push ebp */
    ebp = esp; /* 0x150448F3: mov ebp, esp */
    eax = MEM32(ebp + 0xC); /* 0x150448F5: mov eax, dword ptr [ebp + 0xc] */
    PUSH32(esp, esi); /* 0x150448F8: push esi */
    /* test eax, eax */ /* 0x150448F9: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1504491C; /* 0x150448FB: jne 0x1504491c */
L_150448FD:
    RECOMP_CALL(sub_15036430); /* 0x150448FD: call 0x15036430 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    esi = 0; /* 0x15044902: xor esi, esi */
    _cf = 0;
    _flag_k = FK_TEST;
L_15044904:
    PUSH32(esp, esi); /* 0x15044904: push esi */
    PUSH32(esp, esi); /* 0x15044905: push esi */
    PUSH32(esp, esi); /* 0x15044906: push esi */
    PUSH32(esp, esi); /* 0x15044907: push esi */
    PUSH32(esp, esi); /* 0x15044908: push esi */
    MEM32(eax) = 0x16u; /* 0x15044909: mov dword ptr [eax], 0x16 */
    RECOMP_CALL(sub_1505A110); /* 0x1504490F: call 0x1505a110 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x14u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x14u; /* 0x15044914: add esp, 0x14 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)((eax | 0xFFFFFFFFu)); _flag_b = (uint32_t)((eax | 0xFFFFFFFFu));
    eax = eax | 0xFFFFFFFFu; /* 0x15044917: or eax, 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_15044946; /* 0x1504491A: jmp 0x15044946 */
L_1504491C:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    esi = 0; /* 0x1504491C: xor esi, esi */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp MEM16(eax), LO16(esi) */ /* 0x1504491E: cmp word ptr [eax], si */
    _flag_a = (uint32_t)(MEM16(eax)) << 16; _flag_b = (uint32_t)(LO16(esi)) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    if (CMP_NE(_flag_a, _flag_b)) goto L_1504492A; /* 0x15044921: jne 0x1504492a */
L_15044923:
    RECOMP_CALL(sub_15036430); /* 0x15044923: call 0x15036430 */
    RECOMP_FLAGS_IN();
    RECOMP_BACKEDGE();
    goto L_15044904; /* 0x15044928: jmp 0x15044904 */
L_1504492A:
    ecx = MEM32(ebp + 0x10); /* 0x1504492A: mov ecx, dword ptr [ebp + 0x10] */
    /* test ecx, ecx */ /* 0x1504492D: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_Z(_flag_a, _flag_b)) goto L_15044923; /* 0x1504492F: je 0x15044923 */
L_15044931:
    /* cmp MEM16(ecx), LO16(esi) */ /* 0x15044931: cmp word ptr [ecx], si */
    _flag_a = (uint32_t)(MEM16(ecx)) << 16; _flag_b = (uint32_t)(LO16(esi)) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    RECOMP_BACKEDGE();
    if (CMP_EQ(_flag_a, _flag_b)) goto L_15044923; /* 0x15044934: je 0x15044923 */
L_15044936:
    ecx = ebp + 0x10; /* 0x15044936: lea ecx, [ebp + 0x10] */
    PUSH32(esp, ecx); /* 0x15044939: push ecx */
    PUSH32(esp, eax); /* 0x1504493A: push eax */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x1504493B: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_15044D00); /* 0x1504493E: call 0x15044d00 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x15044943: add esp, 0xc */
    _flag_k = FK_ADD;
L_15044946:
    esi = POP32_VAL(esp); /* 0x15044946: pop esi */
    ebp = POP32_VAL(esp); /* 0x15044947: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x15044948: ret  */
    RECOMP_REGS_OUT();
}

void sub_15044950(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x15044950u);

L_15044950:
    edi = edi; /* 0x15044950: mov edi, edi */
    PUSH32(esp, ebp); /* 0x15044952: push ebp */
    ebp = esp; /* 0x15044953: mov ebp, esp */
    edx = MEM32(ebp + 0xC); /* 0x15044955: mov edx, dword ptr [ebp + 0xc] */
    PUSH32(esp, esi); /* 0x15044958: push esi */
    /* test edx, edx */ /* 0x15044959: test edx, edx */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(edx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1504497C; /* 0x1504495B: jne 0x1504497c */
L_1504495D:
    RECOMP_CALL(sub_15036430); /* 0x1504495D: call 0x15036430 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    esi = 0; /* 0x15044962: xor esi, esi */
    _cf = 0;
    _flag_k = FK_TEST;
L_15044964:
    PUSH32(esp, esi); /* 0x15044964: push esi */
    PUSH32(esp, esi); /* 0x15044965: push esi */
    PUSH32(esp, esi); /* 0x15044966: push esi */
    PUSH32(esp, esi); /* 0x15044967: push esi */
    PUSH32(esp, esi); /* 0x15044968: push esi */
    MEM32(eax) = 0x16u; /* 0x15044969: mov dword ptr [eax], 0x16 */
    RECOMP_CALL(sub_1505A110); /* 0x1504496F: call 0x1505a110 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x14u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x14u; /* 0x15044974: add esp, 0x14 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)((eax | 0xFFFFFFFFu)); _flag_b = (uint32_t)((eax | 0xFFFFFFFFu));
    eax = eax | 0xFFFFFFFFu; /* 0x15044977: or eax, 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_150449B4; /* 0x1504497A: jmp 0x150449b4 */
L_1504497C:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    esi = 0; /* 0x1504497C: xor esi, esi */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp MEM16(edx), LO16(esi) */ /* 0x1504497E: cmp word ptr [edx], si */
    _flag_a = (uint32_t)(MEM16(edx)) << 16; _flag_b = (uint32_t)(LO16(esi)) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    if (CMP_NE(_flag_a, _flag_b)) goto L_1504498A; /* 0x15044981: jne 0x1504498a */
L_15044983:
    RECOMP_CALL(sub_15036430); /* 0x15044983: call 0x15036430 */
    RECOMP_FLAGS_IN();
    RECOMP_BACKEDGE();
    goto L_15044964; /* 0x15044988: jmp 0x15044964 */
L_1504498A:
    eax = MEM32(ebp + 0x10); /* 0x1504498A: mov eax, dword ptr [ebp + 0x10] */
    /* test eax, eax */ /* 0x1504498D: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_Z(_flag_a, _flag_b)) goto L_15044983; /* 0x1504498F: je 0x15044983 */
L_15044991:
    /* cmp MEM16(eax), LO16(esi) */ /* 0x15044991: cmp word ptr [eax], si */
    _flag_a = (uint32_t)(MEM16(eax)) << 16; _flag_b = (uint32_t)(LO16(esi)) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    RECOMP_BACKEDGE();
    if (CMP_EQ(_flag_a, _flag_b)) goto L_15044983; /* 0x15044994: je 0x15044983 */
L_15044996:
    ecx = ebp + 0x10; /* 0x15044996: lea ecx, [ebp + 0x10] */
L_15044999:
    eax = MEM32(ecx); /* 0x15044999: mov eax, dword ptr [ecx] */
    ecx = ecx + 0x4; /* 0x1504499B: lea ecx, [ecx + 4] */
    /* test eax, eax */ /* 0x1504499E: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_15044999; /* 0x150449A0: jne 0x15044999 */
L_150449A2:
    PUSH32(esp, MEM32(ecx)); /* 0x150449A2: push dword ptr [ecx] */
    eax = ebp + 0x10; /* 0x150449A4: lea eax, [ebp + 0x10] */
    PUSH32(esp, eax); /* 0x150449A7: push eax */
    PUSH32(esp, edx); /* 0x150449A8: push edx */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x150449A9: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_15044D20); /* 0x150449AC: call 0x15044d20 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x10u; /* 0x150449B1: add esp, 0x10 */
    _flag_k = FK_ADD;
L_150449B4:
    esi = POP32_VAL(esp); /* 0x150449B4: pop esi */
    ebp = POP32_VAL(esp); /* 0x150449B5: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x150449B6: ret  */
    RECOMP_REGS_OUT();
}

void sub_150449C0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x150449C0u);

L_150449C0:
    edi = edi; /* 0x150449C0: mov edi, edi */
    PUSH32(esp, ebp); /* 0x150449C2: push ebp */
    ebp = esp; /* 0x150449C3: mov ebp, esp */
    eax = MEM32(ebp + 0xC); /* 0x150449C5: mov eax, dword ptr [ebp + 0xc] */
    PUSH32(esp, esi); /* 0x150449C8: push esi */
    /* test eax, eax */ /* 0x150449C9: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_150449EC; /* 0x150449CB: jne 0x150449ec */
L_150449CD:
    RECOMP_CALL(sub_15036430); /* 0x150449CD: call 0x15036430 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    esi = 0; /* 0x150449D2: xor esi, esi */
    _cf = 0;
    _flag_k = FK_TEST;
L_150449D4:
    PUSH32(esp, esi); /* 0x150449D4: push esi */
    PUSH32(esp, esi); /* 0x150449D5: push esi */
    PUSH32(esp, esi); /* 0x150449D6: push esi */
    PUSH32(esp, esi); /* 0x150449D7: push esi */
    PUSH32(esp, esi); /* 0x150449D8: push esi */
    MEM32(eax) = 0x16u; /* 0x150449D9: mov dword ptr [eax], 0x16 */
    RECOMP_CALL(sub_1505A110); /* 0x150449DF: call 0x1505a110 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x14u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x14u; /* 0x150449E4: add esp, 0x14 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)((eax | 0xFFFFFFFFu)); _flag_b = (uint32_t)((eax | 0xFFFFFFFFu));
    eax = eax | 0xFFFFFFFFu; /* 0x150449E7: or eax, 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_15044A1A; /* 0x150449EA: jmp 0x15044a1a */
L_150449EC:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    esi = 0; /* 0x150449EC: xor esi, esi */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp MEM16(eax), LO16(esi) */ /* 0x150449EE: cmp word ptr [eax], si */
    _flag_a = (uint32_t)(MEM16(eax)) << 16; _flag_b = (uint32_t)(LO16(esi)) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    if (CMP_NE(_flag_a, _flag_b)) goto L_150449FA; /* 0x150449F1: jne 0x150449fa */
L_150449F3:
    RECOMP_CALL(sub_15036430); /* 0x150449F3: call 0x15036430 */
    RECOMP_FLAGS_IN();
    RECOMP_BACKEDGE();
    goto L_150449D4; /* 0x150449F8: jmp 0x150449d4 */
L_150449FA:
    ecx = MEM32(ebp + 0x10); /* 0x150449FA: mov ecx, dword ptr [ebp + 0x10] */
    /* test ecx, ecx */ /* 0x150449FD: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_Z(_flag_a, _flag_b)) goto L_150449F3; /* 0x150449FF: je 0x150449f3 */
L_15044A01:
    edx = MEM32(ecx); /* 0x15044A01: mov edx, dword ptr [ecx] */
    /* test edx, edx */ /* 0x15044A03: test edx, edx */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(edx);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_Z(_flag_a, _flag_b)) goto L_150449F3; /* 0x15044A05: je 0x150449f3 */
L_15044A07:
    /* cmp MEM16(edx), LO16(esi) */ /* 0x15044A07: cmp word ptr [edx], si */
    _flag_a = (uint32_t)(MEM16(edx)) << 16; _flag_b = (uint32_t)(LO16(esi)) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    RECOMP_BACKEDGE();
    if (CMP_EQ(_flag_a, _flag_b)) goto L_150449F3; /* 0x15044A0A: je 0x150449f3 */
L_15044A0C:
    PUSH32(esp, esi); /* 0x15044A0C: push esi */
    PUSH32(esp, ecx); /* 0x15044A0D: push ecx */
    PUSH32(esp, eax); /* 0x15044A0E: push eax */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x15044A0F: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_15044A30); /* 0x15044A12: call 0x15044a30 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x10u; /* 0x15044A17: add esp, 0x10 */
    _flag_k = FK_ADD;
L_15044A1A:
    esi = POP32_VAL(esp); /* 0x15044A1A: pop esi */
    ebp = POP32_VAL(esp); /* 0x15044A1B: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x15044A1C: ret  */
    RECOMP_REGS_OUT();
}

void sub_15044A30(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x15044A30u);

L_15044A30:
    edi = edi; /* 0x15044A30: mov edi, edi */
    PUSH32(esp, ebp); /* 0x15044A32: push ebp */
    ebp = esp; /* 0x15044A33: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x14u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x14u; /* 0x15044A35: sub esp, 0x14 */
    _flag_k = FK_CMP;
    PUSH32(esp, ebx); /* 0x15044A38: push ebx */
    PUSH32(esp, esi); /* 0x15044A39: push esi */
    esi = MEM32(ebp + 0xC); /* 0x15044A3A: mov esi, dword ptr [ebp + 0xc] */
    ebx = esi; /* 0x15044A3D: mov ebx, esi */
    PUSH32(esp, edi); /* 0x15044A3F: push edi */
    /* test esi, esi */ /* 0x15044A40: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_15044A66; /* 0x15044A42: jne 0x15044a66 */
L_15044A44:
    RECOMP_CALL(sub_15036430); /* 0x15044A44: call 0x15036430 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edi = 0; /* 0x15044A49: xor edi, edi */
    _cf = 0;
    _flag_k = FK_TEST;
L_15044A4B:
    PUSH32(esp, edi); /* 0x15044A4B: push edi */
    PUSH32(esp, edi); /* 0x15044A4C: push edi */
    PUSH32(esp, edi); /* 0x15044A4D: push edi */
    PUSH32(esp, edi); /* 0x15044A4E: push edi */
    PUSH32(esp, edi); /* 0x15044A4F: push edi */
    MEM32(eax) = 0x16u; /* 0x15044A50: mov dword ptr [eax], 0x16 */
    RECOMP_CALL(sub_1505A110); /* 0x15044A56: call 0x1505a110 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x14u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x14u; /* 0x15044A5B: add esp, 0x14 */
    _flag_k = FK_ADD;
L_15044A5E:
    _flag_a = (uint32_t)((eax | 0xFFFFFFFFu)); _flag_b = (uint32_t)((eax | 0xFFFFFFFFu));
    eax = eax | 0xFFFFFFFFu; /* 0x15044A5E: or eax, 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_15044C69; /* 0x15044A61: jmp 0x15044c69 */
L_15044A66:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edi = 0; /* 0x15044A66: xor edi, edi */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp MEM16(esi), LO16(edi) */ /* 0x15044A68: cmp word ptr [esi], di */
    _flag_a = (uint32_t)(MEM16(esi)) << 16; _flag_b = (uint32_t)(LO16(edi)) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    if (CMP_NE(_flag_a, _flag_b)) goto L_15044A74; /* 0x15044A6B: jne 0x15044a74 */
L_15044A6D:
    RECOMP_CALL(sub_15036430); /* 0x15044A6D: call 0x15036430 */
    RECOMP_FLAGS_IN();
    RECOMP_BACKEDGE();
    goto L_15044A4B; /* 0x15044A72: jmp 0x15044a4b */
L_15044A74:
    eax = MEM32(ebp + 0x10); /* 0x15044A74: mov eax, dword ptr [ebp + 0x10] */
    /* test eax, eax */ /* 0x15044A77: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_Z(_flag_a, _flag_b)) goto L_15044A6D; /* 0x15044A79: je 0x15044a6d */
L_15044A7B:
    eax = MEM32(eax); /* 0x15044A7B: mov eax, dword ptr [eax] */
    /* test eax, eax */ /* 0x15044A7D: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_Z(_flag_a, _flag_b)) goto L_15044A6D; /* 0x15044A7F: je 0x15044a6d */
L_15044A81:
    /* cmp MEM16(eax), LO16(edi) */ /* 0x15044A81: cmp word ptr [eax], di */
    _flag_a = (uint32_t)(MEM16(eax)) << 16; _flag_b = (uint32_t)(LO16(edi)) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    RECOMP_BACKEDGE();
    if (CMP_EQ(_flag_a, _flag_b)) goto L_15044A6D; /* 0x15044A84: je 0x15044a6d */
L_15044A86:
    PUSH32(esp, 0x5Cu); /* 0x15044A86: push 0x5c */
    PUSH32(esp, esi); /* 0x15044A88: push esi */
    RECOMP_CALL(sub_1508F7B0); /* 0x15044A89: call 0x1508f7b0 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0x2Fu); /* 0x15044A8E: push 0x2f */
    PUSH32(esp, esi); /* 0x15044A90: push esi */
    MEM32(ebp + (-0x4)) = eax; /* 0x15044A91: mov dword ptr [ebp - 4], eax */
    RECOMP_CALL(sub_1508F7B0); /* 0x15044A94: call 0x1508f7b0 */
    RECOMP_FLAGS_IN();
    ecx = eax; /* 0x15044A99: mov ecx, eax */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x10u; /* 0x15044A9B: add esp, 0x10 */
    _flag_k = FK_ADD;
    eax = MEM32(ebp + (-0x4)); /* 0x15044A9E: mov eax, dword ptr [ebp - 4] */
    /* test ecx, ecx */ /* 0x15044AA1: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_15044B32; /* 0x15044AA3: jne 0x15044b32 */
L_15044AA9:
    /* test eax, eax */ /* 0x15044AA9: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_15044B3C; /* 0x15044AAB: jne 0x15044b3c */
L_15044AB1:
    PUSH32(esp, 0x3Au); /* 0x15044AB1: push 0x3a */
    PUSH32(esp, esi); /* 0x15044AB3: push esi */
    RECOMP_CALL(sub_1508F1B0); /* 0x15044AB4: call 0x1508f1b0 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x15044AB9: pop ecx */
    ecx = POP32_VAL(esp); /* 0x15044ABA: pop ecx */
    /* test eax, eax */ /* 0x15044ABB: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_15044B3C; /* 0x15044ABD: jne 0x15044b3c */
L_15044ABF:
    ecx = esi; /* 0x15044ABF: mov ecx, esi */
    edx = ecx + 0x2; /* 0x15044AC1: lea edx, [ecx + 2] */
L_15044AC4:
    SET_LO16(eax, MEM16(ecx)); /* 0x15044AC4: mov ax, word ptr [ecx] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 2; /* 0x15044AC7: add ecx, 2 */
    _flag_k = FK_ADD;
    /* cmp LO16(eax), LO16(edi) */ /* 0x15044ACA: cmp ax, di */
    _flag_a = (uint32_t)(LO16(eax)) << 16; _flag_b = (uint32_t)(LO16(edi)) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    RECOMP_BACKEDGE();
    if (CMP_NE(_flag_a, _flag_b)) goto L_15044AC4; /* 0x15044ACD: jne 0x15044ac4 */
L_15044ACF:
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ecx = ecx - edx; /* 0x15044ACF: sub ecx, edx */
    _flag_k = FK_CMP;
    if (1u) _cf = (((ecx) >> 0) & 1u); /* 0x15044AD1: sar ecx, 1 */
    if (1u) { _flag_a = recomp_flags_pack(((uint32_t)((int32_t)ecx >> 1u)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ecx = (uint32_t)((int32_t)ecx >> 1u);
    PUSH32(esp, 2); /* 0x15044AD3: push 2 */
    eax = ecx + 0x3; /* 0x15044AD5: lea eax, [ecx + 3] */
    PUSH32(esp, eax); /* 0x15044AD8: push eax */
    MEM32(ebp + (-0x4)) = eax; /* 0x15044AD9: mov dword ptr [ebp - 4], eax */
    RECOMP_CALL(sub_15048EE2); /* 0x15044ADC: call 0x15048ee2 */
    RECOMP_FLAGS_IN();
    ebx = eax; /* 0x15044AE1: mov ebx, eax */
    ecx = POP32_VAL(esp); /* 0x15044AE3: pop ecx */
    ecx = POP32_VAL(esp); /* 0x15044AE4: pop ecx */
    /* test ebx, ebx */ /* 0x15044AE5: test ebx, ebx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ebx);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_Z(_flag_a, _flag_b)) goto L_15044A5E; /* 0x15044AE7: je 0x15044a5e */
L_15044AED:
    PUSH32(esp, 0x15004900u); /* 0x15044AED: push 0x15004900 */
    PUSH32(esp, MEM32(ebp + (-0x4))); /* 0x15044AF2: push dword ptr [ebp - 4] */
    PUSH32(esp, ebx); /* 0x15044AF5: push ebx */
    RECOMP_CALL(sub_1508F250); /* 0x15044AF6: call 0x1508f250 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x15044AFB: add esp, 0xc */
    _flag_k = FK_ADD;
    /* test eax, eax */ /* 0x15044AFE: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_15044B0F; /* 0x15044B00: je 0x15044b0f */
L_15044B02:
    PUSH32(esp, edi); /* 0x15044B02: push edi */
    PUSH32(esp, edi); /* 0x15044B03: push edi */
    PUSH32(esp, edi); /* 0x15044B04: push edi */
    PUSH32(esp, edi); /* 0x15044B05: push edi */
    PUSH32(esp, edi); /* 0x15044B06: push edi */
    RECOMP_CALL(sub_1505A11B); /* 0x15044B07: call 0x1505a11b */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x14u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x14u; /* 0x15044B0C: add esp, 0x14 */
    _flag_k = FK_ADD;
L_15044B0F:
    PUSH32(esp, esi); /* 0x15044B0F: push esi */
    PUSH32(esp, MEM32(ebp + (-0x4))); /* 0x15044B10: push dword ptr [ebp - 4] */
    PUSH32(esp, ebx); /* 0x15044B13: push ebx */
    RECOMP_CALL(sub_1508F120); /* 0x15044B14: call 0x1508f120 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x15044B19: add esp, 0xc */
    _flag_k = FK_ADD;
    /* test eax, eax */ /* 0x15044B1C: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_15044B2D; /* 0x15044B1E: je 0x15044b2d */
L_15044B20:
    PUSH32(esp, edi); /* 0x15044B20: push edi */
    PUSH32(esp, edi); /* 0x15044B21: push edi */
    PUSH32(esp, edi); /* 0x15044B22: push edi */
    PUSH32(esp, edi); /* 0x15044B23: push edi */
    PUSH32(esp, edi); /* 0x15044B24: push edi */
    RECOMP_CALL(sub_1505A11B); /* 0x15044B25: call 0x1505a11b */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x14u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x14u; /* 0x15044B2A: add esp, 0x14 */
    _flag_k = FK_ADD;
L_15044B2D:
    eax = ebx + 0x4; /* 0x15044B2D: lea eax, [ebx + 4] */
    goto L_15044B3C; /* 0x15044B30: jmp 0x15044b3c */
L_15044B32:
    /* test eax, eax */ /* 0x15044B32: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_15044B3A; /* 0x15044B34: je 0x15044b3a */
L_15044B36:
    /* cmp ecx, eax */ /* 0x15044B36: cmp ecx, eax */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_15044B3C; /* 0x15044B38: jbe 0x15044b3c */
L_15044B3A:
    eax = ecx; /* 0x15044B3A: mov eax, ecx */
L_15044B3C:
    PUSH32(esp, 0x2Eu); /* 0x15044B3C: push 0x2e */
    PUSH32(esp, eax); /* 0x15044B3E: push eax */
    RECOMP_CALL(sub_1508F7B0); /* 0x15044B3F: call 0x1508f7b0 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x15044B44: pop ecx */
    ecx = POP32_VAL(esp); /* 0x15044B45: pop ecx */
    /* test eax, eax */ /* 0x15044B46: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_15044B74; /* 0x15044B48: je 0x15044b74 */
L_15044B4A:
    PUSH32(esp, edi); /* 0x15044B4A: push edi */
    PUSH32(esp, ebx); /* 0x15044B4B: push ebx */
    RECOMP_CALL(sub_15037B60); /* 0x15044B4C: call 0x15037b60 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x15044B51: pop ecx */
    ecx = POP32_VAL(esp); /* 0x15044B52: pop ecx */
    /* test eax, eax */ /* 0x15044B53: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_15044C59; /* 0x15044B55: jne 0x15044c59 */
L_15044B5B:
    PUSH32(esp, MEM32(ebp + 0x14)); /* 0x15044B5B: push dword ptr [ebp + 0x14] */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x15044B5E: push dword ptr [ebp + 0x10] */
    PUSH32(esp, ebx); /* 0x15044B61: push ebx */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x15044B62: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_15044C74); /* 0x15044B65: call 0x15044c74 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x10u; /* 0x15044B6A: add esp, 0x10 */
    _flag_k = FK_ADD;
    edi = eax; /* 0x15044B6D: mov edi, eax */
    goto L_15044C5C; /* 0x15044B6F: jmp 0x15044c5c */
L_15044B74:
    esi = ebx; /* 0x15044B74: mov esi, ebx */
    ecx = esi + 0x2; /* 0x15044B76: lea ecx, [esi + 2] */
L_15044B79:
    SET_LO16(eax, MEM16(esi)); /* 0x15044B79: mov ax, word ptr [esi] */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esi = esi + 2; /* 0x15044B7C: add esi, 2 */
    _flag_k = FK_ADD;
    /* cmp LO16(eax), LO16(edi) */ /* 0x15044B7F: cmp ax, di */
    _flag_a = (uint32_t)(LO16(eax)) << 16; _flag_b = (uint32_t)(LO16(edi)) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    RECOMP_BACKEDGE();
    if (CMP_NE(_flag_a, _flag_b)) goto L_15044B79; /* 0x15044B82: jne 0x15044b79 */
L_15044B84:
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esi = esi - ecx; /* 0x15044B84: sub esi, ecx */
    _flag_k = FK_CMP;
    if (1u) _cf = (((esi) >> 0) & 1u); /* 0x15044B86: sar esi, 1 */
    if (1u) { _flag_a = recomp_flags_pack(((uint32_t)((int32_t)esi >> 1u)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    esi = (uint32_t)((int32_t)esi >> 1u);
    PUSH32(esp, 2); /* 0x15044B88: push 2 */
    eax = esi + 0x5; /* 0x15044B8A: lea eax, [esi + 5] */
    PUSH32(esp, eax); /* 0x15044B8D: push eax */
    MEM32(ebp + (-0x4)) = eax; /* 0x15044B8E: mov dword ptr [ebp - 4], eax */
    RECOMP_CALL(sub_15048EE2); /* 0x15044B91: call 0x15048ee2 */
    RECOMP_FLAGS_IN();
    MEM32(ebp + (-0x8)) = eax; /* 0x15044B96: mov dword ptr [ebp - 8], eax */
    ecx = POP32_VAL(esp); /* 0x15044B99: pop ecx */
    ecx = POP32_VAL(esp); /* 0x15044B9A: pop ecx */
    /* test eax, eax */ /* 0x15044B9B: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_Z(_flag_a, _flag_b)) goto L_15044A5E; /* 0x15044B9D: je 0x15044a5e */
L_15044BA3:
    PUSH32(esp, ebx); /* 0x15044BA3: push ebx */
    ecx = esi + 0x5; /* 0x15044BA4: lea ecx, [esi + 5] */
    PUSH32(esp, ecx); /* 0x15044BA7: push ecx */
    PUSH32(esp, eax); /* 0x15044BA8: push eax */
    RECOMP_CALL(sub_1508F250); /* 0x15044BA9: call 0x1508f250 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x15044BAE: add esp, 0xc */
    _flag_k = FK_ADD;
    /* test eax, eax */ /* 0x15044BB1: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_15044BC2; /* 0x15044BB3: je 0x15044bc2 */
L_15044BB5:
    PUSH32(esp, edi); /* 0x15044BB5: push edi */
    PUSH32(esp, edi); /* 0x15044BB6: push edi */
    PUSH32(esp, edi); /* 0x15044BB7: push edi */
    PUSH32(esp, edi); /* 0x15044BB8: push edi */
    PUSH32(esp, edi); /* 0x15044BB9: push edi */
    RECOMP_CALL(sub_1505A11B); /* 0x15044BBA: call 0x1505a11b */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x14u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x14u; /* 0x15044BBF: add esp, 0x14 */
    _flag_k = FK_ADD;
L_15044BC2:
    eax = MEM32(ebp + (-0x8)); /* 0x15044BC2: mov eax, dword ptr [ebp - 8] */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esi = esi + esi; /* 0x15044BC5: add esi, esi */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + esi; /* 0x15044BC7: add eax, esi */
    _flag_k = FK_ADD;
    MEM32(ebp + (-0x10)) = eax; /* 0x15044BC9: mov dword ptr [ebp - 0x10], eax */
    RECOMP_CALL(sub_15036430); /* 0x15044BCC: call 0x15036430 */
    RECOMP_FLAGS_IN();
    ecx = MEM32(ebp + (-0x4)); /* 0x15044BD1: mov ecx, dword ptr [ebp - 4] */
    if (1u) _cf = (((esi) >> 0) & 1u); /* 0x15044BD4: sar esi, 1 */
    if (1u) { _flag_a = recomp_flags_pack(((uint32_t)((int32_t)esi >> 1u)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    esi = (uint32_t)((int32_t)esi >> 1u);
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ecx = ecx - esi; /* 0x15044BD6: sub ecx, esi */
    _flag_k = FK_CMP;
    esi = MEM32(ebp + (-0x8)); /* 0x15044BD8: mov esi, dword ptr [ebp - 8] */
    eax = MEM32(eax); /* 0x15044BDB: mov eax, dword ptr [eax] */
    MEM32(ebp + (-0x14)) = eax; /* 0x15044BDD: mov dword ptr [ebp - 0x14], eax */
    eax = 0x150BA044u; /* 0x15044BE0: mov eax, 0x150ba044 */
    MEM32(ebp + (-0x4)) = ecx; /* 0x15044BE5: mov dword ptr [ebp - 4], ecx */
    MEM32(ebp + (-0xC)) = eax; /* 0x15044BE8: mov dword ptr [ebp - 0xc], eax */
L_15044BEB:
    PUSH32(esp, MEM32(eax)); /* 0x15044BEB: push dword ptr [eax] */
    PUSH32(esp, ecx); /* 0x15044BED: push ecx */
    PUSH32(esp, MEM32(ebp + (-0x10))); /* 0x15044BEE: push dword ptr [ebp - 0x10] */
    RECOMP_CALL(sub_1508F250); /* 0x15044BF1: call 0x1508f250 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x15044BF6: add esp, 0xc */
    _flag_k = FK_ADD;
    /* test eax, eax */ /* 0x15044BF9: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_15044C0A; /* 0x15044BFB: je 0x15044c0a */
L_15044BFD:
    PUSH32(esp, edi); /* 0x15044BFD: push edi */
    PUSH32(esp, edi); /* 0x15044BFE: push edi */
    PUSH32(esp, edi); /* 0x15044BFF: push edi */
    PUSH32(esp, edi); /* 0x15044C00: push edi */
    PUSH32(esp, edi); /* 0x15044C01: push edi */
    RECOMP_CALL(sub_1505A11B); /* 0x15044C02: call 0x1505a11b */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x14u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x14u; /* 0x15044C07: add esp, 0x14 */
    _flag_k = FK_ADD;
L_15044C0A:
    PUSH32(esp, edi); /* 0x15044C0A: push edi */
    PUSH32(esp, esi); /* 0x15044C0B: push esi */
    RECOMP_CALL(sub_15037B60); /* 0x15044C0C: call 0x15037b60 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x15044C11: pop ecx */
    ecx = POP32_VAL(esp); /* 0x15044C12: pop ecx */
    /* test eax, eax */ /* 0x15044C13: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_15044C2F; /* 0x15044C15: je 0x15044c2f */
L_15044C17:
    eax = MEM32(ebp + (-0xC)); /* 0x15044C17: mov eax, dword ptr [ebp - 0xc] */
    ecx = MEM32(ebp + (-0x4)); /* 0x15044C1A: mov ecx, dword ptr [ebp - 4] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - 4; /* 0x15044C1D: sub eax, 4 */
    _flag_k = FK_CMP;
    MEM32(ebp + (-0xC)) = eax; /* 0x15044C20: mov dword ptr [ebp - 0xc], eax */
    /* cmp eax, 0x150BA038u */ /* 0x15044C23: cmp eax, 0x150ba038 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x150BA038u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_GE(_flag_a, _flag_b)) goto L_15044BEB; /* 0x15044C28: jge 0x15044beb */
L_15044C2A:
    _flag_a = (uint32_t)((edi | 0xFFFFFFFFu)); _flag_b = (uint32_t)((edi | 0xFFFFFFFFu));
    edi = edi | 0xFFFFFFFFu; /* 0x15044C2A: or edi, 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_15044C4D; /* 0x15044C2D: jmp 0x15044c4d */
L_15044C2F:
    RECOMP_CALL(sub_15036430); /* 0x15044C2F: call 0x15036430 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, MEM32(ebp + 0x14)); /* 0x15044C34: push dword ptr [ebp + 0x14] */
    ecx = MEM32(ebp + (-0x14)); /* 0x15044C37: mov ecx, dword ptr [ebp - 0x14] */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x15044C3A: push dword ptr [ebp + 0x10] */
    MEM32(eax) = ecx; /* 0x15044C3D: mov dword ptr [eax], ecx */
    PUSH32(esp, esi); /* 0x15044C3F: push esi */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x15044C40: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_15044C74); /* 0x15044C43: call 0x15044c74 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x10u; /* 0x15044C48: add esp, 0x10 */
    _flag_k = FK_ADD;
    edi = eax; /* 0x15044C4B: mov edi, eax */
L_15044C4D:
    PUSH32(esp, esi); /* 0x15044C4D: push esi */
    RECOMP_CALL(sub_15048840); /* 0x15044C4E: call 0x15048840 */
    RECOMP_FLAGS_IN();
    esi = MEM32(ebp + 0xC); /* 0x15044C53: mov esi, dword ptr [ebp + 0xc] */
    ecx = POP32_VAL(esp); /* 0x15044C56: pop ecx */
    goto L_15044C5C; /* 0x15044C57: jmp 0x15044c5c */
L_15044C59:
    _flag_a = (uint32_t)((edi | 0xFFFFFFFFu)); _flag_b = (uint32_t)((edi | 0xFFFFFFFFu));
    edi = edi | 0xFFFFFFFFu; /* 0x15044C59: or edi, 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
L_15044C5C:
    /* cmp ebx, esi */ /* 0x15044C5C: cmp ebx, esi */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_15044C67; /* 0x15044C5E: je 0x15044c67 */
L_15044C60:
    PUSH32(esp, ebx); /* 0x15044C60: push ebx */
    RECOMP_CALL(sub_15048840); /* 0x15044C61: call 0x15048840 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x15044C66: pop ecx */
L_15044C67:
    eax = edi; /* 0x15044C67: mov eax, edi */
L_15044C69:
    edi = POP32_VAL(esp); /* 0x15044C69: pop edi */
    esi = POP32_VAL(esp); /* 0x15044C6A: pop esi */
    ebx = POP32_VAL(esp); /* 0x15044C6B: pop ebx */
    esp = ebp; ebp = POP32_VAL(esp); /* 0x15044C6C: leave  */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x15044C6D: ret  */
    RECOMP_REGS_OUT();
}

void sub_15044C74(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x15044C74u);

L_15044C74:
    edi = edi; /* 0x15044C74: mov edi, edi */
    PUSH32(esp, ebp); /* 0x15044C76: push ebp */
    ebp = esp; /* 0x15044C77: mov ebp, esp */
    PUSH32(esp, ecx); /* 0x15044C79: push ecx */
    PUSH32(esp, ecx); /* 0x15044C7A: push ecx */
    PUSH32(esp, esi); /* 0x15044C7B: push esi */
    esi = MEM32(ebp + 0xC); /* 0x15044C7C: mov esi, dword ptr [ebp + 0xc] */
    /* test esi, esi */ /* 0x15044C7F: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_15044CA2; /* 0x15044C81: jne 0x15044ca2 */
L_15044C83:
    RECOMP_CALL(sub_15036430); /* 0x15044C83: call 0x15036430 */
    RECOMP_FLAGS_IN();
    MEM32(eax) = 0x16u; /* 0x15044C88: mov dword ptr [eax], 0x16 */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x15044C8E: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, eax); /* 0x15044C90: push eax */
    PUSH32(esp, eax); /* 0x15044C91: push eax */
    PUSH32(esp, eax); /* 0x15044C92: push eax */
    PUSH32(esp, eax); /* 0x15044C93: push eax */
    PUSH32(esp, eax); /* 0x15044C94: push eax */
    RECOMP_CALL(sub_1505A110); /* 0x15044C95: call 0x1505a110 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x14u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x14u; /* 0x15044C9A: add esp, 0x14 */
    _flag_k = FK_ADD;
L_15044C9D:
    _flag_a = (uint32_t)((eax | 0xFFFFFFFFu)); _flag_b = (uint32_t)((eax | 0xFFFFFFFFu));
    eax = eax | 0xFFFFFFFFu; /* 0x15044C9D: or eax, 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_15044CEA; /* 0x15044CA0: jmp 0x15044cea */
L_15044CA2:
    /* cmp MEM32(ebp + 0x10), 0 */ /* 0x15044CA2: cmp dword ptr [ebp + 0x10], 0 */
    _flag_a = (uint32_t)(MEM32(ebp + 0x10)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_EQ(_flag_a, _flag_b)) goto L_15044C83; /* 0x15044CA6: je 0x15044c83 */
L_15044CA8:
    PUSH32(esp, esi); /* 0x15044CA8: push esi */
    eax = ebp + (-0x8); /* 0x15044CA9: lea eax, [ebp - 8] */
    PUSH32(esp, eax); /* 0x15044CAC: push eax */
    eax = ebp + (-0x4); /* 0x15044CAD: lea eax, [ebp - 4] */
    PUSH32(esp, eax); /* 0x15044CB0: push eax */
    PUSH32(esp, MEM32(ebp + 0x14)); /* 0x15044CB1: push dword ptr [ebp + 0x14] */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x15044CB4: push dword ptr [ebp + 0x10] */
    RECOMP_CALL(sub_15045BA0); /* 0x15044CB7: call 0x15045ba0 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x14u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x14u; /* 0x15044CBC: add esp, 0x14 */
    _flag_k = FK_ADD;
    /* cmp eax, 0xFFFFFFFFu */ /* 0x15044CBF: cmp eax, -1 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xFFFFFFFFu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_EQ(_flag_a, _flag_b)) goto L_15044C9D; /* 0x15044CC2: je 0x15044c9d */
L_15044CC4:
    PUSH32(esp, MEM32(ebp + (-0x8))); /* 0x15044CC4: push dword ptr [ebp - 8] */
    PUSH32(esp, MEM32(ebp + (-0x4))); /* 0x15044CC7: push dword ptr [ebp - 4] */
    PUSH32(esp, esi); /* 0x15044CCA: push esi */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x15044CCB: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_150458C9); /* 0x15044CCE: call 0x150458c9 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, MEM32(ebp + (-0x4))); /* 0x15044CD3: push dword ptr [ebp - 4] */
    esi = eax; /* 0x15044CD6: mov esi, eax */
    RECOMP_CALL(sub_15048840); /* 0x15044CD8: call 0x15048840 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, MEM32(ebp + (-0x8))); /* 0x15044CDD: push dword ptr [ebp - 8] */
    RECOMP_CALL(sub_15048840); /* 0x15044CE0: call 0x15048840 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x18u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x18u; /* 0x15044CE5: add esp, 0x18 */
    _flag_k = FK_ADD;
    eax = esi; /* 0x15044CE8: mov eax, esi */
L_15044CEA:
    esi = POP32_VAL(esp); /* 0x15044CEA: pop esi */
    esp = ebp; ebp = POP32_VAL(esp); /* 0x15044CEB: leave  */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x15044CEC: ret  */
    RECOMP_REGS_OUT();
}

void sub_15044D00(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x15044D00u);

L_15044D00:
    edi = edi; /* 0x15044D00: mov edi, edi */
    PUSH32(esp, ebp); /* 0x15044D02: push ebp */
    ebp = esp; /* 0x15044D03: mov ebp, esp */
    PUSH32(esp, 0); /* 0x15044D05: push 0 */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x15044D07: push dword ptr [ebp + 0x10] */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x15044D0A: push dword ptr [ebp + 0xc] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x15044D0D: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_15044D20); /* 0x15044D10: call 0x15044d20 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x10u; /* 0x15044D15: add esp, 0x10 */
    _flag_k = FK_ADD;
    ebp = POP32_VAL(esp); /* 0x15044D18: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x15044D19: ret  */
    RECOMP_REGS_OUT();
}

void sub_15044D20(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x15044D20u);

L_15044D20:
    edi = edi; /* 0x15044D20: mov edi, edi */
    PUSH32(esp, ebp); /* 0x15044D22: push ebp */
    ebp = esp; /* 0x15044D23: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x18u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x18u; /* 0x15044D25: sub esp, 0x18 */
    _flag_k = FK_CMP;
    PUSH32(esp, ebx); /* 0x15044D28: push ebx */
    PUSH32(esp, esi); /* 0x15044D29: push esi */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ebx = 0; /* 0x15044D2A: xor ebx, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, edi); /* 0x15044D2C: push edi */
    edi = MEM32(ebp + 0xC); /* 0x15044D2D: mov edi, dword ptr [ebp + 0xc] */
    esi = ebx; /* 0x15044D30: mov esi, ebx */
    MEM32(ebp + (-0x8)) = ebx; /* 0x15044D32: mov dword ptr [ebp - 8], ebx */
    MEM32(ebp + (-0x4)) = ebx; /* 0x15044D35: mov dword ptr [ebp - 4], ebx */
    /* test edi, edi */ /* 0x15044D38: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_15044D5C; /* 0x15044D3A: jne 0x15044d5c */
L_15044D3C:
    RECOMP_CALL(sub_15036430); /* 0x15044D3C: call 0x15036430 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, ebx); /* 0x15044D41: push ebx */
    PUSH32(esp, ebx); /* 0x15044D42: push ebx */
    PUSH32(esp, ebx); /* 0x15044D43: push ebx */
    PUSH32(esp, ebx); /* 0x15044D44: push ebx */
    MEM32(eax) = 0x16u; /* 0x15044D45: mov dword ptr [eax], 0x16 */
    PUSH32(esp, ebx); /* 0x15044D4B: push ebx */
L_15044D4C:
    RECOMP_CALL(sub_1505A110); /* 0x15044D4C: call 0x1505a110 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x14u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x14u; /* 0x15044D51: add esp, 0x14 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)((eax | 0xFFFFFFFFu)); _flag_b = (uint32_t)((eax | 0xFFFFFFFFu));
    eax = eax | 0xFFFFFFFFu; /* 0x15044D54: or eax, 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_15044F91; /* 0x15044D57: jmp 0x15044f91 */
L_15044D5C:
    /* cmp MEM16(edi), LO16(ebx) */ /* 0x15044D5C: cmp word ptr [edi], bx */
    _flag_a = (uint32_t)(MEM16(edi)) << 16; _flag_b = (uint32_t)(LO16(ebx)) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    RECOMP_BACKEDGE();
    if (CMP_EQ(_flag_a, _flag_b)) goto L_15044D3C; /* 0x15044D5F: je 0x15044d3c */
L_15044D61:
    ebx = MEM32(ebp + 0x10); /* 0x15044D61: mov ebx, dword ptr [ebp + 0x10] */
    /* test ebx, ebx */ /* 0x15044D64: test ebx, ebx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ebx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_15044D7C; /* 0x15044D66: jne 0x15044d7c */
L_15044D68:
    RECOMP_CALL(sub_15036430); /* 0x15044D68: call 0x15036430 */
    RECOMP_FLAGS_IN();
    MEM32(eax) = 0x16u; /* 0x15044D6D: mov dword ptr [eax], 0x16 */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x15044D73: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, eax); /* 0x15044D75: push eax */
    PUSH32(esp, eax); /* 0x15044D76: push eax */
    PUSH32(esp, eax); /* 0x15044D77: push eax */
    PUSH32(esp, eax); /* 0x15044D78: push eax */
    PUSH32(esp, eax); /* 0x15044D79: push eax */
    RECOMP_BACKEDGE();
    goto L_15044D4C; /* 0x15044D7A: jmp 0x15044d4c */
L_15044D7C:
    eax = MEM32(ebx); /* 0x15044D7C: mov eax, dword ptr [ebx] */
    /* test eax, eax */ /* 0x15044D7E: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_Z(_flag_a, _flag_b)) goto L_15044D68; /* 0x15044D80: je 0x15044d68 */
L_15044D82:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x15044D82: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp MEM16(eax), LO16(ecx) */ /* 0x15044D84: cmp word ptr [eax], cx */
    _flag_a = (uint32_t)(MEM16(eax)) << 16; _flag_b = (uint32_t)(LO16(ecx)) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    RECOMP_BACKEDGE();
    if (CMP_EQ(_flag_a, _flag_b)) goto L_15044D68; /* 0x15044D87: je 0x15044d68 */
L_15044D89:
    RECOMP_CALL(sub_15036430); /* 0x15044D89: call 0x15036430 */
    RECOMP_FLAGS_IN();
    eax = MEM32(eax); /* 0x15044D8E: mov eax, dword ptr [eax] */
    MEM32(ebp + (-0x18)) = eax; /* 0x15044D90: mov dword ptr [ebp - 0x18], eax */
    RECOMP_CALL(sub_15036430); /* 0x15044D93: call 0x15036430 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, MEM32(ebp + 0x14)); /* 0x15044D98: push dword ptr [ebp + 0x14] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x15044D9B: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, ebx); /* 0x15044D9D: push ebx */
    PUSH32(esp, edi); /* 0x15044D9E: push edi */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x15044D9F: push dword ptr [ebp + 8] */
    MEM32(eax) = ecx; /* 0x15044DA2: mov dword ptr [eax], ecx */
    RECOMP_CALL(sub_15044A30); /* 0x15044DA4: call 0x15044a30 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x10u; /* 0x15044DA9: add esp, 0x10 */
    _flag_k = FK_ADD;
    MEM32(ebp + (-0x10)) = eax; /* 0x15044DAC: mov dword ptr [ebp - 0x10], eax */
    /* cmp eax, 0xFFFFFFFFu */ /* 0x15044DAF: cmp eax, -1 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xFFFFFFFFu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_15044F5F; /* 0x15044DB2: jne 0x15044f5f */
L_15044DB8:
    RECOMP_CALL(sub_15036430); /* 0x15044DB8: call 0x15036430 */
    RECOMP_FLAGS_IN();
    /* cmp MEM32(eax), 2 */ /* 0x15044DBD: cmp dword ptr [eax], 2 */
    _flag_a = (uint32_t)(MEM32(eax)); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_15044F5F; /* 0x15044DC0: jne 0x15044f5f */
L_15044DC6:
    PUSH32(esp, 0x2Fu); /* 0x15044DC6: push 0x2f */
    eax = POP32_VAL(esp); /* 0x15044DC8: pop eax */
    PUSH32(esp, eax); /* 0x15044DC9: push eax */
    PUSH32(esp, edi); /* 0x15044DCA: push edi */
    RECOMP_CALL(sub_1508F1B0); /* 0x15044DCB: call 0x1508f1b0 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x15044DD0: pop ecx */
    ecx = POP32_VAL(esp); /* 0x15044DD1: pop ecx */
    /* test eax, eax */ /* 0x15044DD2: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_15044F5F; /* 0x15044DD4: jne 0x15044f5f */
L_15044DDA:
    PUSH32(esp, 0x15004908u); /* 0x15044DDA: push 0x15004908 */
    PUSH32(esp, eax); /* 0x15044DDF: push eax */
    eax = ebp + (-0x4); /* 0x15044DE0: lea eax, [ebp - 4] */
    PUSH32(esp, eax); /* 0x15044DE3: push eax */
    RECOMP_CALL(sub_1505BF8C); /* 0x15044DE4: call 0x1505bf8c */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x15044DE9: add esp, 0xc */
    _flag_k = FK_ADD;
    /* test eax, eax */ /* 0x15044DEC: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_15044E11; /* 0x15044DEE: je 0x15044e11 */
L_15044DF0:
    /* cmp eax, 0x16u */ /* 0x15044DF0: cmp eax, 0x16 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x16u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_15044E09; /* 0x15044DF3: jne 0x15044e09 */
L_15044DF5:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x15044DF5: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, eax); /* 0x15044DF7: push eax */
    PUSH32(esp, eax); /* 0x15044DF8: push eax */
    PUSH32(esp, eax); /* 0x15044DF9: push eax */
    PUSH32(esp, eax); /* 0x15044DFA: push eax */
    PUSH32(esp, eax); /* 0x15044DFB: push eax */
    RECOMP_CALL(sub_1505A11B); /* 0x15044DFC: call 0x1505a11b */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x14u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x14u; /* 0x15044E01: add esp, 0x14 */
    _flag_k = FK_ADD;
    goto L_15044F5F; /* 0x15044E04: jmp 0x15044f5f */
L_15044E09:
    /* test eax, eax */ /* 0x15044E09: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_15044F5F; /* 0x15044E0B: jne 0x15044f5f */
L_15044E11:
    /* cmp MEM32(ebp + (-0x4)), esi */ /* 0x15044E11: cmp dword ptr [ebp - 4], esi */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x4))); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_15044F5F; /* 0x15044E14: je 0x15044f5f */
L_15044E1A:
    PUSH32(esp, 2); /* 0x15044E1A: push 2 */
    PUSH32(esp, 0x104u); /* 0x15044E1C: push 0x104 */
    RECOMP_CALL(sub_15048EE2); /* 0x15044E21: call 0x15048ee2 */
    RECOMP_FLAGS_IN();
    esi = eax; /* 0x15044E26: mov esi, eax */
    ecx = POP32_VAL(esp); /* 0x15044E28: pop ecx */
    ecx = POP32_VAL(esp); /* 0x15044E29: pop ecx */
    /* test esi, esi */ /* 0x15044E2A: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_15044F5F; /* 0x15044E2C: je 0x15044f5f */
L_15044E32:
    PUSH32(esp, 0x103u); /* 0x15044E32: push 0x103 */
    PUSH32(esp, esi); /* 0x15044E37: push esi */
    PUSH32(esp, MEM32(ebp + (-0x4))); /* 0x15044E38: push dword ptr [ebp - 4] */
    goto L_15044F4C; /* 0x15044E3B: jmp 0x15044f4c */
L_15044E40:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x15044E40: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp MEM16(esi), LO16(eax) */ /* 0x15044E42: cmp word ptr [esi], ax */
    _flag_a = (uint32_t)(MEM16(esi)) << 16; _flag_b = (uint32_t)(LO16(eax)) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_15044F5F; /* 0x15044E45: je 0x15044f5f */
L_15044E4B:
    ecx = esi; /* 0x15044E4B: mov ecx, esi */
    edx = ecx + 0x2; /* 0x15044E4D: lea edx, [ecx + 2] */
L_15044E50:
    SET_LO16(eax, MEM16(ecx)); /* 0x15044E50: mov ax, word ptr [ecx] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 2; /* 0x15044E53: add ecx, 2 */
    _flag_k = FK_ADD;
    /* cmp LO16(eax), MEM16(ebp + (-0x8)) */ /* 0x15044E56: cmp ax, word ptr [ebp - 8] */
    _flag_a = (uint32_t)(LO16(eax)) << 16; _flag_b = (uint32_t)(MEM16(ebp + (-0x8))) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    RECOMP_BACKEDGE();
    if (CMP_NE(_flag_a, _flag_b)) goto L_15044E50; /* 0x15044E5A: jne 0x15044e50 */
L_15044E5C:
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ecx = ecx - edx; /* 0x15044E5C: sub ecx, edx */
    _flag_k = FK_CMP;
    if (1u) _cf = (((ecx) >> 0) & 1u); /* 0x15044E5E: sar ecx, 1 */
    if (1u) { _flag_a = recomp_flags_pack(((uint32_t)((int32_t)ecx >> 1u)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ecx = (uint32_t)((int32_t)ecx >> 1u);
    PUSH32(esp, 0x5Cu); /* 0x15044E60: push 0x5c */
    eax = (uint32_t)MEM16(esi + ecx * 2 + (-0x2)); /* 0x15044E62: movzx eax, word ptr [esi + ecx*2 - 2] */
    ecx = POP32_VAL(esp); /* 0x15044E67: pop ecx */
    /* cmp LO16(eax), LO16(ecx) */ /* 0x15044E68: cmp ax, cx */
    _flag_a = (uint32_t)(LO16(eax)) << 16; _flag_b = (uint32_t)(LO16(ecx)) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_15044E9B; /* 0x15044E6B: je 0x15044e9b */
L_15044E6D:
    PUSH32(esp, 0x2Fu); /* 0x15044E6D: push 0x2f */
    ecx = POP32_VAL(esp); /* 0x15044E6F: pop ecx */
    /* cmp LO16(eax), LO16(ecx) */ /* 0x15044E70: cmp ax, cx */
    _flag_a = (uint32_t)(LO16(eax)) << 16; _flag_b = (uint32_t)(LO16(ecx)) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_15044E9B; /* 0x15044E73: je 0x15044e9b */
L_15044E75:
    PUSH32(esp, 0x15004914u); /* 0x15044E75: push 0x15004914 */
    PUSH32(esp, 0x104u); /* 0x15044E7A: push 0x104 */
    PUSH32(esp, esi); /* 0x15044E7F: push esi */
    RECOMP_CALL(sub_1508F120); /* 0x15044E80: call 0x1508f120 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x15044E85: add esp, 0xc */
    _flag_k = FK_ADD;
    /* test eax, eax */ /* 0x15044E88: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_15044E9B; /* 0x15044E8A: je 0x15044e9b */
L_15044E8C:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x15044E8C: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, eax); /* 0x15044E8E: push eax */
    PUSH32(esp, eax); /* 0x15044E8F: push eax */
    PUSH32(esp, eax); /* 0x15044E90: push eax */
    PUSH32(esp, eax); /* 0x15044E91: push eax */
    PUSH32(esp, eax); /* 0x15044E92: push eax */
    RECOMP_CALL(sub_1505A11B); /* 0x15044E93: call 0x1505a11b */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x14u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x14u; /* 0x15044E98: add esp, 0x14 */
    _flag_k = FK_ADD;
L_15044E9B:
    edx = esi; /* 0x15044E9B: mov edx, esi */
    ecx = edx + 0x2; /* 0x15044E9D: lea ecx, [edx + 2] */
L_15044EA0:
    SET_LO16(eax, MEM16(edx)); /* 0x15044EA0: mov ax, word ptr [edx] */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edx = edx + 2; /* 0x15044EA3: add edx, 2 */
    _flag_k = FK_ADD;
    /* cmp LO16(eax), MEM16(ebp + (-0x8)) */ /* 0x15044EA6: cmp ax, word ptr [ebp - 8] */
    _flag_a = (uint32_t)(LO16(eax)) << 16; _flag_b = (uint32_t)(MEM16(ebp + (-0x8))) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    RECOMP_BACKEDGE();
    if (CMP_NE(_flag_a, _flag_b)) goto L_15044EA0; /* 0x15044EAA: jne 0x15044ea0 */
L_15044EAC:
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    edx = edx - ecx; /* 0x15044EAC: sub edx, ecx */
    _flag_k = FK_CMP;
    ecx = edi; /* 0x15044EAE: mov ecx, edi */
    if (1u) _cf = (((edx) >> 0) & 1u); /* 0x15044EB0: sar edx, 1 */
    if (1u) { _flag_a = recomp_flags_pack(((uint32_t)((int32_t)edx >> 1u)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    edx = (uint32_t)((int32_t)edx >> 1u);
    eax = ecx + 0x2; /* 0x15044EB2: lea eax, [ecx + 2] */
    MEM32(ebp + (-0x14)) = eax; /* 0x15044EB5: mov dword ptr [ebp - 0x14], eax */
L_15044EB8:
    SET_LO16(eax, MEM16(ecx)); /* 0x15044EB8: mov ax, word ptr [ecx] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 2; /* 0x15044EBB: add ecx, 2 */
    _flag_k = FK_ADD;
    /* cmp LO16(eax), MEM16(ebp + (-0x8)) */ /* 0x15044EBE: cmp ax, word ptr [ebp - 8] */
    _flag_a = (uint32_t)(LO16(eax)) << 16; _flag_b = (uint32_t)(MEM16(ebp + (-0x8))) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    RECOMP_BACKEDGE();
    if (CMP_NE(_flag_a, _flag_b)) goto L_15044EB8; /* 0x15044EC2: jne 0x15044eb8 */
L_15044EC4:
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(MEM32(ebp + (-0x14)));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ecx = ecx - MEM32(ebp + (-0x14)); /* 0x15044EC4: sub ecx, dword ptr [ebp - 0x14] */
    _flag_k = FK_CMP;
    if (1u) _cf = (((ecx) >> 0) & 1u); /* 0x15044EC7: sar ecx, 1 */
    if (1u) { _flag_a = recomp_flags_pack(((uint32_t)((int32_t)ecx >> 1u)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ecx = (uint32_t)((int32_t)ecx >> 1u);
    eax = ecx + edx; /* 0x15044EC9: lea eax, [ecx + edx] */
    ecx = 0x104u; /* 0x15044ECC: mov ecx, 0x104 */
    /* cmp eax, ecx */ /* 0x15044ED1: cmp eax, ecx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_AE(_flag_a, _flag_b)) goto L_15044F5F; /* 0x15044ED3: jae 0x15044f5f */
L_15044ED9:
    PUSH32(esp, edi); /* 0x15044ED9: push edi */
    PUSH32(esp, ecx); /* 0x15044EDA: push ecx */
    PUSH32(esp, esi); /* 0x15044EDB: push esi */
    RECOMP_CALL(sub_1508F120); /* 0x15044EDC: call 0x1508f120 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x15044EE1: add esp, 0xc */
    _flag_k = FK_ADD;
    /* test eax, eax */ /* 0x15044EE4: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_15044EF7; /* 0x15044EE6: je 0x15044ef7 */
L_15044EE8:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x15044EE8: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, eax); /* 0x15044EEA: push eax */
    PUSH32(esp, eax); /* 0x15044EEB: push eax */
    PUSH32(esp, eax); /* 0x15044EEC: push eax */
    PUSH32(esp, eax); /* 0x15044EED: push eax */
    PUSH32(esp, eax); /* 0x15044EEE: push eax */
    RECOMP_CALL(sub_1505A11B); /* 0x15044EEF: call 0x1505a11b */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x14u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x14u; /* 0x15044EF4: add esp, 0x14 */
    _flag_k = FK_ADD;
L_15044EF7:
    RECOMP_CALL(sub_15036430); /* 0x15044EF7: call 0x15036430 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, MEM32(ebp + 0x14)); /* 0x15044EFC: push dword ptr [ebp + 0x14] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x15044EFF: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, ebx); /* 0x15044F01: push ebx */
    PUSH32(esp, esi); /* 0x15044F02: push esi */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x15044F03: push dword ptr [ebp + 8] */
    MEM32(eax) = ecx; /* 0x15044F06: mov dword ptr [eax], ecx */
    RECOMP_CALL(sub_15044A30); /* 0x15044F08: call 0x15044a30 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x10u; /* 0x15044F0D: add esp, 0x10 */
    _flag_k = FK_ADD;
    MEM32(ebp + (-0x10)) = eax; /* 0x15044F10: mov dword ptr [ebp - 0x10], eax */
    /* cmp eax, 0xFFFFFFFFu */ /* 0x15044F13: cmp eax, -1 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xFFFFFFFFu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_15044F5F; /* 0x15044F16: jne 0x15044f5f */
L_15044F18:
    RECOMP_CALL(sub_15036430); /* 0x15044F18: call 0x15036430 */
    RECOMP_FLAGS_IN();
    /* cmp MEM32(eax), 2 */ /* 0x15044F1D: cmp dword ptr [eax], 2 */
    _flag_a = (uint32_t)(MEM32(eax)); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_15044F43; /* 0x15044F20: je 0x15044f43 */
L_15044F22:
    eax = (uint32_t)MEM16(esi); /* 0x15044F22: movzx eax, word ptr [esi] */
    PUSH32(esp, 0x5Cu); /* 0x15044F25: push 0x5c */
    edx = POP32_VAL(esp); /* 0x15044F27: pop edx */
    PUSH32(esp, 0x2Fu); /* 0x15044F28: push 0x2f */
    ecx = POP32_VAL(esp); /* 0x15044F2A: pop ecx */
    /* cmp LO16(eax), LO16(edx) */ /* 0x15044F2B: cmp ax, dx */
    _flag_a = (uint32_t)(LO16(eax)) << 16; _flag_b = (uint32_t)(LO16(edx)) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_15044F35; /* 0x15044F2E: je 0x15044f35 */
L_15044F30:
    /* cmp LO16(eax), LO16(ecx) */ /* 0x15044F30: cmp ax, cx */
    _flag_a = (uint32_t)(LO16(eax)) << 16; _flag_b = (uint32_t)(LO16(ecx)) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    if (CMP_NE(_flag_a, _flag_b)) goto L_15044F5F; /* 0x15044F33: jne 0x15044f5f */
L_15044F35:
    eax = (uint32_t)MEM16(esi + 0x2); /* 0x15044F35: movzx eax, word ptr [esi + 2] */
    /* cmp LO16(eax), LO16(edx) */ /* 0x15044F39: cmp ax, dx */
    _flag_a = (uint32_t)(LO16(eax)) << 16; _flag_b = (uint32_t)(LO16(edx)) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_15044F43; /* 0x15044F3C: je 0x15044f43 */
L_15044F3E:
    /* cmp LO16(eax), LO16(ecx) */ /* 0x15044F3E: cmp ax, cx */
    _flag_a = (uint32_t)(LO16(eax)) << 16; _flag_b = (uint32_t)(LO16(ecx)) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    if (CMP_NE(_flag_a, _flag_b)) goto L_15044F5F; /* 0x15044F41: jne 0x15044f5f */
L_15044F43:
    PUSH32(esp, 0x103u); /* 0x15044F43: push 0x103 */
    PUSH32(esp, esi); /* 0x15044F48: push esi */
    PUSH32(esp, MEM32(ebp + (-0xC))); /* 0x15044F49: push dword ptr [ebp - 0xc] */
L_15044F4C:
    RECOMP_CALL(sub_1505EC22); /* 0x15044F4C: call 0x1505ec22 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x15044F51: add esp, 0xc */
    _flag_k = FK_ADD;
    MEM32(ebp + (-0xC)) = eax; /* 0x15044F54: mov dword ptr [ebp - 0xc], eax */
    /* test eax, eax */ /* 0x15044F57: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_15044E40; /* 0x15044F59: jne 0x15044e40 */
L_15044F5F:
    RECOMP_CALL(sub_15036430); /* 0x15044F5F: call 0x15036430 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x15044F64: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp MEM32(eax), ecx */ /* 0x15044F66: cmp dword ptr [eax], ecx */
    _flag_a = (uint32_t)(MEM32(eax)); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_15044F74; /* 0x15044F68: jne 0x15044f74 */
L_15044F6A:
    RECOMP_CALL(sub_15036430); /* 0x15044F6A: call 0x15036430 */
    RECOMP_FLAGS_IN();
    ecx = MEM32(ebp + (-0x18)); /* 0x15044F6F: mov ecx, dword ptr [ebp - 0x18] */
    MEM32(eax) = ecx; /* 0x15044F72: mov dword ptr [eax], ecx */
L_15044F74:
    /* test esi, esi */ /* 0x15044F74: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_15044F7F; /* 0x15044F76: je 0x15044f7f */
L_15044F78:
    PUSH32(esp, esi); /* 0x15044F78: push esi */
    RECOMP_CALL(sub_15048840); /* 0x15044F79: call 0x15048840 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x15044F7E: pop ecx */
L_15044F7F:
    /* cmp MEM32(ebp + (-0x4)), 0 */ /* 0x15044F7F: cmp dword ptr [ebp - 4], 0 */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x4))); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_15044F8E; /* 0x15044F83: je 0x15044f8e */
L_15044F85:
    PUSH32(esp, MEM32(ebp + (-0x4))); /* 0x15044F85: push dword ptr [ebp - 4] */
    RECOMP_CALL(sub_15048840); /* 0x15044F88: call 0x15048840 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x15044F8D: pop ecx */
L_15044F8E:
    eax = MEM32(ebp + (-0x10)); /* 0x15044F8E: mov eax, dword ptr [ebp - 0x10] */
L_15044F91:
    edi = POP32_VAL(esp); /* 0x15044F91: pop edi */
    esi = POP32_VAL(esp); /* 0x15044F92: pop esi */
    ebx = POP32_VAL(esp); /* 0x15044F93: pop ebx */
    esp = ebp; ebp = POP32_VAL(esp); /* 0x15044F94: leave  */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x15044F95: ret  */
    RECOMP_REGS_OUT();
}

void sub_15044FA0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x15044FA0u);

L_15044FA0:
    edi = edi; /* 0x15044FA0: mov edi, edi */
    PUSH32(esp, ebp); /* 0x15044FA2: push ebp */
    ebp = esp; /* 0x15044FA3: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x18u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x18u; /* 0x15044FA5: sub esp, 0x18 */
    _flag_k = FK_CMP;
    eax = MEM32(0x150BD340); /* 0x15044FA8: mov eax, dword ptr [0x150bd340] */
    _flag_a = (uint32_t)((eax ^ ebp)); _flag_b = (uint32_t)((eax ^ ebp));
    eax = eax ^ ebp; /* 0x15044FAD: xor eax, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x4)) = eax; /* 0x15044FAF: mov dword ptr [ebp - 4], eax */
    PUSH32(esp, ebx); /* 0x15044FB2: push ebx */
    PUSH32(esp, esi); /* 0x15044FB3: push esi */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ebx = 0; /* 0x15044FB4: xor ebx, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
    eax = ebp + (-0x18); /* 0x15044FB6: lea eax, [ebp - 0x18] */
    PUSH32(esp, 0x15004918u); /* 0x15044FB9: push 0x15004918 */
    PUSH32(esp, ebx); /* 0x15044FBE: push ebx */
    PUSH32(esp, eax); /* 0x15044FBF: push eax */
    MEM32(ebp + (-0x18)) = ebx; /* 0x15044FC0: mov dword ptr [ebp - 0x18], ebx */
    esi = ebx; /* 0x15044FC3: mov esi, ebx */
    RECOMP_CALL(sub_1505BF8C); /* 0x15044FC5: call 0x1505bf8c */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x15044FCA: add esp, 0xc */
    _flag_k = FK_ADD;
    /* test eax, eax */ /* 0x15044FCD: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_15044FE3; /* 0x15044FCF: je 0x15044fe3 */
L_15044FD1:
    /* cmp eax, 0x16u */ /* 0x15044FD1: cmp eax, 0x16 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x16u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_15044FE3; /* 0x15044FD4: jne 0x15044fe3 */
L_15044FD6:
    PUSH32(esp, ebx); /* 0x15044FD6: push ebx */
    PUSH32(esp, ebx); /* 0x15044FD7: push ebx */
    PUSH32(esp, ebx); /* 0x15044FD8: push ebx */
    PUSH32(esp, ebx); /* 0x15044FD9: push ebx */
    PUSH32(esp, ebx); /* 0x15044FDA: push ebx */
    RECOMP_CALL(sub_1505A11B); /* 0x15044FDB: call 0x1505a11b */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x14u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x14u; /* 0x15044FE0: add esp, 0x14 */
    _flag_k = FK_ADD;
L_15044FE3:
    ecx = MEM32(ebp + 0x8); /* 0x15044FE3: mov ecx, dword ptr [ebp + 8] */
    eax = MEM32(ebp + (-0x18)); /* 0x15044FE6: mov eax, dword ptr [ebp - 0x18] */
    MEM32(ebp + (-0x14)) = eax; /* 0x15044FE9: mov dword ptr [ebp - 0x14], eax */
    /* test ecx, ecx */ /* 0x15044FEC: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_15045008; /* 0x15044FEE: jne 0x15045008 */
L_15044FF0:
    /* test eax, eax */ /* 0x15044FF0: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1504507C; /* 0x15044FF2: je 0x1504507c */
L_15044FF8:
    PUSH32(esp, ebx); /* 0x15044FF8: push ebx */
    PUSH32(esp, eax); /* 0x15044FF9: push eax */
    RECOMP_CALL(sub_15037B60); /* 0x15044FFA: call 0x15037b60 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(eax);
    _cf = (eax) != 0;
    eax = (uint32_t)(-(int32_t)eax); /* 0x15044FFF: neg eax */
    _flag_k = FK_CMP;
    ecx = POP32_VAL(esp); /* 0x15045001: pop ecx */
    { uint32_t _sa = esi, _sb = esi, _sc = (uint32_t)CMP_B(_flag_a, _flag_b); /* 0x15045002: sbb esi, esi */
      esi = _sc ? 0xFFFFFFFFu : 0;
      _flag_a = recomp_flags_sbb(_sa, _sb, _sc); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    ecx = POP32_VAL(esp); /* 0x15045004: pop ecx */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi + 1; /* 0x15045005: inc esi */
    _flag_k = FK_INC;
    goto L_15045079; /* 0x15045006: jmp 0x15045079 */
L_15045008:
    MEM32(ebp + (-0x10)) = 0x15004928u; /* 0x15045008: mov dword ptr [ebp - 0x10], 0x15004928 */
    MEM32(ebp + (-0xC)) = ecx; /* 0x1504500F: mov dword ptr [ebp - 0xc], ecx */
    MEM32(ebp + (-0x8)) = ebx; /* 0x15045012: mov dword ptr [ebp - 8], ebx */
    PUSH32(esp, edi); /* 0x15045015: push edi */
    /* test eax, eax */ /* 0x15045016: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1504505F; /* 0x15045018: je 0x1504505f */
L_1504501A:
    RECOMP_CALL(sub_15036430); /* 0x1504501A: call 0x15036430 */
    RECOMP_FLAGS_IN();
    edi = MEM32(eax); /* 0x1504501F: mov edi, dword ptr [eax] */
    RECOMP_CALL(sub_15036430); /* 0x15045021: call 0x15036430 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, ebx); /* 0x15045026: push ebx */
    MEM32(eax) = ebx; /* 0x15045027: mov dword ptr [eax], ebx */
    eax = ebp + (-0x14); /* 0x15045029: lea eax, [ebp - 0x14] */
    PUSH32(esp, eax); /* 0x1504502C: push eax */
    PUSH32(esp, MEM32(ebp + (-0x14))); /* 0x1504502D: push dword ptr [ebp - 0x14] */
    PUSH32(esp, ebx); /* 0x15045030: push ebx */
    RECOMP_CALL(sub_15044A30); /* 0x15045031: call 0x15044a30 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x10u; /* 0x15045036: add esp, 0x10 */
    _flag_k = FK_ADD;
    esi = eax; /* 0x15045039: mov esi, eax */
    RECOMP_CALL(sub_15036430); /* 0x1504503B: call 0x15036430 */
    RECOMP_FLAGS_IN();
    /* cmp esi, 0xFFFFFFFFu */ /* 0x15045040: cmp esi, -1 */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(0xFFFFFFFFu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_15045049; /* 0x15045043: je 0x15045049 */
L_15045045:
    MEM32(eax) = edi; /* 0x15045045: mov dword ptr [eax], edi */
    goto L_15045078; /* 0x15045047: jmp 0x15045078 */
L_15045049:
    /* cmp MEM32(eax), 2 */ /* 0x15045049: cmp dword ptr [eax], 2 */
    _flag_a = (uint32_t)(MEM32(eax)); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_15045058; /* 0x1504504C: je 0x15045058 */
L_1504504E:
    RECOMP_CALL(sub_15036430); /* 0x1504504E: call 0x15036430 */
    RECOMP_FLAGS_IN();
    /* cmp MEM32(eax), 0xDu */ /* 0x15045053: cmp dword ptr [eax], 0xd */
    _flag_a = (uint32_t)(MEM32(eax)); _flag_b = (uint32_t)(0xDu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_15045078; /* 0x15045056: jne 0x15045078 */
L_15045058:
    RECOMP_CALL(sub_15036430); /* 0x15045058: call 0x15036430 */
    RECOMP_FLAGS_IN();
    MEM32(eax) = edi; /* 0x1504505D: mov dword ptr [eax], edi */
L_1504505F:
    PUSH32(esp, ebx); /* 0x1504505F: push ebx */
    eax = ebp + (-0x14); /* 0x15045060: lea eax, [ebp - 0x14] */
    ecx = 0x15004930u; /* 0x15045063: mov ecx, 0x15004930 */
    PUSH32(esp, eax); /* 0x15045068: push eax */
    PUSH32(esp, ecx); /* 0x15045069: push ecx */
    PUSH32(esp, ebx); /* 0x1504506A: push ebx */
    MEM32(ebp + (-0x14)) = ecx; /* 0x1504506B: mov dword ptr [ebp - 0x14], ecx */
    RECOMP_CALL(sub_15044D20); /* 0x1504506E: call 0x15044d20 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x10u; /* 0x15045073: add esp, 0x10 */
    _flag_k = FK_ADD;
    esi = eax; /* 0x15045076: mov esi, eax */
L_15045078:
    edi = POP32_VAL(esp); /* 0x15045078: pop edi */
L_15045079:
    eax = MEM32(ebp + (-0x18)); /* 0x15045079: mov eax, dword ptr [ebp - 0x18] */
L_1504507C:
    PUSH32(esp, eax); /* 0x1504507C: push eax */
    RECOMP_CALL(sub_15048840); /* 0x1504507D: call 0x15048840 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x15045082: pop ecx */
    ecx = MEM32(ebp + (-0x4)); /* 0x15045083: mov ecx, dword ptr [ebp - 4] */
    eax = esi; /* 0x15045086: mov eax, esi */
    esi = POP32_VAL(esp); /* 0x15045088: pop esi */
    _flag_a = (uint32_t)((ecx ^ ebp)); _flag_b = (uint32_t)((ecx ^ ebp));
    ecx = ecx ^ ebp; /* 0x15045089: xor ecx, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    ebx = POP32_VAL(esp); /* 0x1504508B: pop ebx */
    RECOMP_CALL(sub_1505E540); /* 0x1504508C: call 0x1505e540 */
    RECOMP_FLAGS_IN();
    esp = ebp; ebp = POP32_VAL(esp); /* 0x15045091: leave  */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x15045092: ret  */
    RECOMP_REGS_OUT();
}

void sub_150450A0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x150450A0u);

L_150450A0:
    edi = edi; /* 0x150450A0: mov edi, edi */
    PUSH32(esp, ebp); /* 0x150450A2: push ebp */
    ebp = esp; /* 0x150450A3: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x18u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x18u; /* 0x150450A5: sub esp, 0x18 */
    _flag_k = FK_CMP;
    eax = MEM32(0x150BD340); /* 0x150450A8: mov eax, dword ptr [0x150bd340] */
    _flag_a = (uint32_t)((eax ^ ebp)); _flag_b = (uint32_t)((eax ^ ebp));
    eax = eax ^ ebp; /* 0x150450AD: xor eax, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x4)) = eax; /* 0x150450AF: mov dword ptr [ebp - 4], eax */
    PUSH32(esp, ebx); /* 0x150450B2: push ebx */
    PUSH32(esp, esi); /* 0x150450B3: push esi */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ebx = 0; /* 0x150450B4: xor ebx, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
    eax = ebp + (-0x18); /* 0x150450B6: lea eax, [ebp - 0x18] */
    PUSH32(esp, 0x15004940u); /* 0x150450B9: push 0x15004940 */
    PUSH32(esp, ebx); /* 0x150450BE: push ebx */
    PUSH32(esp, eax); /* 0x150450BF: push eax */
    MEM32(ebp + (-0x18)) = ebx; /* 0x150450C0: mov dword ptr [ebp - 0x18], ebx */
    esi = ebx; /* 0x150450C3: mov esi, ebx */
    RECOMP_CALL(sub_1505D654); /* 0x150450C5: call 0x1505d654 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x150450CA: add esp, 0xc */
    _flag_k = FK_ADD;
    /* test eax, eax */ /* 0x150450CD: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_150450E3; /* 0x150450CF: je 0x150450e3 */
L_150450D1:
    /* cmp eax, 0x16u */ /* 0x150450D1: cmp eax, 0x16 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x16u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_150450E3; /* 0x150450D4: jne 0x150450e3 */
L_150450D6:
    PUSH32(esp, ebx); /* 0x150450D6: push ebx */
    PUSH32(esp, ebx); /* 0x150450D7: push ebx */
    PUSH32(esp, ebx); /* 0x150450D8: push ebx */
    PUSH32(esp, ebx); /* 0x150450D9: push ebx */
    PUSH32(esp, ebx); /* 0x150450DA: push ebx */
    RECOMP_CALL(sub_1505A11B); /* 0x150450DB: call 0x1505a11b */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x14u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x14u; /* 0x150450E0: add esp, 0x14 */
    _flag_k = FK_ADD;
L_150450E3:
    ecx = MEM32(ebp + 0x8); /* 0x150450E3: mov ecx, dword ptr [ebp + 8] */
    eax = MEM32(ebp + (-0x18)); /* 0x150450E6: mov eax, dword ptr [ebp - 0x18] */
    MEM32(ebp + (-0x14)) = eax; /* 0x150450E9: mov dword ptr [ebp - 0x14], eax */
    /* test ecx, ecx */ /* 0x150450EC: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_15045108; /* 0x150450EE: jne 0x15045108 */
L_150450F0:
    /* test eax, eax */ /* 0x150450F0: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1504517C; /* 0x150450F2: je 0x1504517c */
L_150450F8:
    PUSH32(esp, ebx); /* 0x150450F8: push ebx */
    PUSH32(esp, eax); /* 0x150450F9: push eax */
    RECOMP_CALL(sub_15036590); /* 0x150450FA: call 0x15036590 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(eax);
    _cf = (eax) != 0;
    eax = (uint32_t)(-(int32_t)eax); /* 0x150450FF: neg eax */
    _flag_k = FK_CMP;
    ecx = POP32_VAL(esp); /* 0x15045101: pop ecx */
    { uint32_t _sa = esi, _sb = esi, _sc = (uint32_t)CMP_B(_flag_a, _flag_b); /* 0x15045102: sbb esi, esi */
      esi = _sc ? 0xFFFFFFFFu : 0;
      _flag_a = recomp_flags_sbb(_sa, _sb, _sc); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    ecx = POP32_VAL(esp); /* 0x15045104: pop ecx */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi + 1; /* 0x15045105: inc esi */
    _flag_k = FK_INC;
    goto L_15045179; /* 0x15045106: jmp 0x15045179 */
L_15045108:
    MEM32(ebp + (-0x10)) = 0x15004948u; /* 0x15045108: mov dword ptr [ebp - 0x10], 0x15004948 */
    MEM32(ebp + (-0xC)) = ecx; /* 0x1504510F: mov dword ptr [ebp - 0xc], ecx */
    MEM32(ebp + (-0x8)) = ebx; /* 0x15045112: mov dword ptr [ebp - 8], ebx */
    PUSH32(esp, edi); /* 0x15045115: push edi */
    /* test eax, eax */ /* 0x15045116: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1504515F; /* 0x15045118: je 0x1504515f */
L_1504511A:
    RECOMP_CALL(sub_15036430); /* 0x1504511A: call 0x15036430 */
    RECOMP_FLAGS_IN();
    edi = MEM32(eax); /* 0x1504511F: mov edi, dword ptr [eax] */
    RECOMP_CALL(sub_15036430); /* 0x15045121: call 0x15036430 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, ebx); /* 0x15045126: push ebx */
    MEM32(eax) = ebx; /* 0x15045127: mov dword ptr [eax], ebx */
    eax = ebp + (-0x14); /* 0x15045129: lea eax, [ebp - 0x14] */
    PUSH32(esp, eax); /* 0x1504512C: push eax */
    PUSH32(esp, MEM32(ebp + (-0x14))); /* 0x1504512D: push dword ptr [ebp - 0x14] */
    PUSH32(esp, ebx); /* 0x15045130: push ebx */
    RECOMP_CALL(sub_15043B60); /* 0x15045131: call 0x15043b60 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x10u; /* 0x15045136: add esp, 0x10 */
    _flag_k = FK_ADD;
    esi = eax; /* 0x15045139: mov esi, eax */
    RECOMP_CALL(sub_15036430); /* 0x1504513B: call 0x15036430 */
    RECOMP_FLAGS_IN();
    /* cmp esi, 0xFFFFFFFFu */ /* 0x15045140: cmp esi, -1 */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(0xFFFFFFFFu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_15045149; /* 0x15045143: je 0x15045149 */
L_15045145:
    MEM32(eax) = edi; /* 0x15045145: mov dword ptr [eax], edi */
    goto L_15045178; /* 0x15045147: jmp 0x15045178 */
L_15045149:
    /* cmp MEM32(eax), 2 */ /* 0x15045149: cmp dword ptr [eax], 2 */
    _flag_a = (uint32_t)(MEM32(eax)); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_15045158; /* 0x1504514C: je 0x15045158 */
L_1504514E:
    RECOMP_CALL(sub_15036430); /* 0x1504514E: call 0x15036430 */
    RECOMP_FLAGS_IN();
    /* cmp MEM32(eax), 0xDu */ /* 0x15045153: cmp dword ptr [eax], 0xd */
    _flag_a = (uint32_t)(MEM32(eax)); _flag_b = (uint32_t)(0xDu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_15045178; /* 0x15045156: jne 0x15045178 */
L_15045158:
    RECOMP_CALL(sub_15036430); /* 0x15045158: call 0x15036430 */
    RECOMP_FLAGS_IN();
    MEM32(eax) = edi; /* 0x1504515D: mov dword ptr [eax], edi */
L_1504515F:
    PUSH32(esp, ebx); /* 0x1504515F: push ebx */
    eax = ebp + (-0x14); /* 0x15045160: lea eax, [ebp - 0x14] */
    ecx = 0x1500494Cu; /* 0x15045163: mov ecx, 0x1500494c */
    PUSH32(esp, eax); /* 0x15045168: push eax */
    PUSH32(esp, ecx); /* 0x15045169: push ecx */
    PUSH32(esp, ebx); /* 0x1504516A: push ebx */
    MEM32(ebp + (-0x14)) = ecx; /* 0x1504516B: mov dword ptr [ebp - 0x14], ecx */
    RECOMP_CALL(sub_15043E30); /* 0x1504516E: call 0x15043e30 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x10u; /* 0x15045173: add esp, 0x10 */
    _flag_k = FK_ADD;
    esi = eax; /* 0x15045176: mov esi, eax */
L_15045178:
    edi = POP32_VAL(esp); /* 0x15045178: pop edi */
L_15045179:
    eax = MEM32(ebp + (-0x18)); /* 0x15045179: mov eax, dword ptr [ebp - 0x18] */
L_1504517C:
    PUSH32(esp, eax); /* 0x1504517C: push eax */
    RECOMP_CALL(sub_15048840); /* 0x1504517D: call 0x15048840 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x15045182: pop ecx */
    ecx = MEM32(ebp + (-0x4)); /* 0x15045183: mov ecx, dword ptr [ebp - 4] */
    eax = esi; /* 0x15045186: mov eax, esi */
    esi = POP32_VAL(esp); /* 0x15045188: pop esi */
    _flag_a = (uint32_t)((ecx ^ ebp)); _flag_b = (uint32_t)((ecx ^ ebp));
    ecx = ecx ^ ebp; /* 0x15045189: xor ecx, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    ebx = POP32_VAL(esp); /* 0x1504518B: pop ebx */
    RECOMP_CALL(sub_1505E540); /* 0x1504518C: call 0x1505e540 */
    RECOMP_FLAGS_IN();
    esp = ebp; ebp = POP32_VAL(esp); /* 0x15045191: leave  */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x15045192: ret  */
    RECOMP_REGS_OUT();
}

void sub_15045199(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x15045199u);

L_15045199:
    edi = edi; /* 0x15045199: mov edi, edi */
    PUSH32(esp, ebp); /* 0x1504519B: push ebp */
    ebp = esp; /* 0x1504519C: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x6Cu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x6Cu; /* 0x1504519E: sub esp, 0x6c */
    _flag_k = FK_CMP;
    eax = MEM32(ebp + 0x8); /* 0x150451A1: mov eax, dword ptr [ebp + 8] */
    PUSH32(esp, ebx); /* 0x150451A4: push ebx */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ebx = 0; /* 0x150451A5: xor ebx, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0xC)) = ebx; /* 0x150451A7: mov dword ptr [ebp - 0xc], ebx */
    MEM8(ebp + (-0x1)) = (uint8_t)(LO8(ebx)); /* 0x150451AA: mov byte ptr [ebp - 1], bl */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - ebx; /* 0x150451AD: sub eax, ebx */
    _flag_k = FK_CMP;
    if (/* sub result */ CMP_EQ(_flag_a, _flag_b)) goto L_150451F0; /* 0x150451AF: je 0x150451f0 */
L_150451B1:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - 1; /* 0x150451B1: sub eax, 1 */
    _flag_k = FK_CMP;
    if (/* sub result */ CMP_EQ(_flag_a, _flag_b)) goto L_150451F0; /* 0x150451B4: je 0x150451f0 */
L_150451B6:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - 1; /* 0x150451B6: sub eax, 1 */
    _flag_k = FK_CMP;
    if (/* sub result */ CMP_EQ(_flag_a, _flag_b)) goto L_150451F0; /* 0x150451B9: je 0x150451f0 */
L_150451BB:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - 1; /* 0x150451BB: sub eax, 1 */
    _flag_k = FK_CMP;
    if (/* sub result */ CMP_EQ(_flag_a, _flag_b)) goto L_150451F0; /* 0x150451BE: je 0x150451f0 */
L_150451C0:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - 1; /* 0x150451C0: sub eax, 1 */
    _flag_k = FK_CMP;
    if (/* sub result */ CMP_EQ(_flag_a, _flag_b)) goto L_150451EC; /* 0x150451C3: je 0x150451ec */
L_150451C5:
    RECOMP_CALL(sub_150363E0); /* 0x150451C5: call 0x150363e0 */
    RECOMP_FLAGS_IN();
    MEM32(eax) = ebx; /* 0x150451CA: mov dword ptr [eax], ebx */
    RECOMP_CALL(sub_15036430); /* 0x150451CC: call 0x15036430 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, ebx); /* 0x150451D1: push ebx */
    PUSH32(esp, ebx); /* 0x150451D2: push ebx */
    PUSH32(esp, ebx); /* 0x150451D3: push ebx */
    PUSH32(esp, ebx); /* 0x150451D4: push ebx */
    PUSH32(esp, ebx); /* 0x150451D5: push ebx */
    MEM32(eax) = 0x16u; /* 0x150451D6: mov dword ptr [eax], 0x16 */
    RECOMP_CALL(sub_1505A110); /* 0x150451DC: call 0x1505a110 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x14u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x14u; /* 0x150451E1: add esp, 0x14 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)((eax | 0xFFFFFFFFu)); _flag_b = (uint32_t)((eax | 0xFFFFFFFFu));
    eax = eax | 0xFFFFFFFFu; /* 0x150451E4: or eax, 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_15045452; /* 0x150451E7: jmp 0x15045452 */
L_150451EC:
    MEM8(ebp + (-0x1)) = (uint8_t)(1); /* 0x150451EC: mov byte ptr [ebp - 1], 1 */
L_150451F0:
    eax = MEM32(ebp + 0x10); /* 0x150451F0: mov eax, dword ptr [ebp + 0x10] */
    MEM32(ebp + (-0x14)) = eax; /* 0x150451F3: mov dword ptr [ebp - 0x14], eax */
    goto L_1504520A; /* 0x150451F6: jmp 0x1504520a */
L_150451F8:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x150451F8: inc eax */
    _flag_k = FK_INC;
    ecx = eax; /* 0x150451F9: mov ecx, eax */
    /* cmp MEM8(eax), LO8(ebx) */ /* 0x150451FB: cmp byte ptr [eax], bl */
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(ebx)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    RECOMP_BACKEDGE();
    if (CMP_NE(_flag_a, _flag_b)) goto L_150451F8; /* 0x150451FD: jne 0x150451f8 */
L_150451FF:
    /* cmp MEM8(ecx + 0x1), LO8(ebx) */ /* 0x150451FF: cmp byte ptr [ecx + 1], bl */
    _flag_a = (uint32_t)(MEM8(ecx + 0x1)) << 24; _flag_b = (uint32_t)(LO8(ebx)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1504520A; /* 0x15045202: je 0x1504520a */
L_15045204:
    MEM8(ecx) = (uint8_t)(0x20u); /* 0x15045204: mov byte ptr [ecx], 0x20 */
    eax = ecx + 0x1; /* 0x15045207: lea eax, [ecx + 1] */
L_1504520A:
    /* cmp MEM8(eax), LO8(ebx) */ /* 0x1504520A: cmp byte ptr [eax], bl */
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(ebx)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    RECOMP_BACKEDGE();
    if (CMP_NE(_flag_a, _flag_b)) goto L_150451F8; /* 0x1504520C: jne 0x150451f8 */
L_1504520E:
    PUSH32(esp, esi); /* 0x1504520E: push esi */
    PUSH32(esp, edi); /* 0x1504520F: push edi */
    PUSH32(esp, 0x44u); /* 0x15045210: push 0x44 */
    esi = POP32_VAL(esp); /* 0x15045212: pop esi */
    PUSH32(esp, esi); /* 0x15045213: push esi */
    eax = ebp + (-0x6C); /* 0x15045214: lea eax, [ebp - 0x6c] */
    PUSH32(esp, ebx); /* 0x15045217: push ebx */
    PUSH32(esp, eax); /* 0x15045218: push eax */
    RECOMP_CALL(sub_1508E3D0); /* 0x15045219: call 0x1508e3d0 */
    RECOMP_FLAGS_IN();
    MEM32(ebp + (-0x6C)) = esi; /* 0x1504521E: mov dword ptr [ebp - 0x6c], esi */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x15045221: add esp, 0xc */
    _flag_k = FK_ADD;
    esi = MEM32(0x150BEBAC); /* 0x15045224: mov esi, dword ptr [0x150bebac] */
    /* test esi, esi */ /* 0x1504522A: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_15045253; /* 0x1504522C: je 0x15045253 */
L_1504522E:
    edi = esi + (-0x1); /* 0x1504522E: lea edi, [esi - 1] */
L_15045231:
    eax = edi; /* 0x15045231: mov eax, edi */
    edx = edi; /* 0x15045233: mov edx, edi */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x1Fu);
    eax = eax & 0x1Fu; /* 0x15045235: and eax, 0x1f */
    _cf = 0;
    _flag_k = FK_TEST;
    if (5u) _cf = (((edx) >> 4) & 1u); /* 0x15045238: sar edx, 5 */
    if (5u) { _flag_a = recomp_flags_pack(((uint32_t)((int32_t)edx >> 5u)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    edx = (uint32_t)((int32_t)edx >> 5u);
    ecx = (uint32_t)((int32_t)eax * (int32_t)0x24u); /* 0x1504523B: imul ecx, eax, 0x24 */
    eax = MEM32(edx * 4 + 0x150BEBC0); /* 0x1504523E: mov eax, dword ptr [edx*4 + 0x150bebc0] */
    /* cmp MEM8(eax + ecx + 0x4), LO8(ebx) */ /* 0x15045245: cmp byte ptr [eax + ecx + 4], bl */
    _flag_a = (uint32_t)(MEM8(eax + ecx + 0x4)) << 24; _flag_b = (uint32_t)(LO8(ebx)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_15045251; /* 0x15045249: jne 0x15045251 */
L_1504524B:
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(1);
    edi = edi - 1; /* 0x1504524B: dec edi */
    _flag_k = FK_DEC;
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esi = esi - 1; /* 0x1504524C: sub esi, 1 */
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (/* sub result */ CMP_NE(_flag_a, _flag_b)) goto L_15045231; /* 0x1504524F: jne 0x15045231 */
L_15045251:
    /* test esi, esi */ /* 0x15045251: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
L_15045253:
    if (recomp_cond_cf(_flag_k, _flag_a, _flag_b, CC_S, _cf)) goto L_15045442; /* 0x15045253: js 0x15045442 */
L_15045259:
    /* cmp esi, 0x3332u */ /* 0x15045259: cmp esi, 0x3332 */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(0x3332u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_AE(_flag_a, _flag_b)) goto L_15045442; /* 0x1504525F: jae 0x15045442 */
L_15045265:
    eax = (uint32_t)((int32_t)esi * (int32_t)5); /* 0x15045265: imul eax, esi, 5 */
    PUSH32(esp, 1); /* 0x15045268: push 1 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 4; /* 0x1504526A: add eax, 4 */
    _flag_k = FK_ADD;
    MEM16(ebp + (-0x3A)) = (uint16_t)(LO16(eax)); /* 0x1504526D: mov word ptr [ebp - 0x3a], ax */
    eax = (uint32_t)LO16(eax); /* 0x15045271: movzx eax, ax */
    PUSH32(esp, eax); /* 0x15045274: push eax */
    RECOMP_CALL(sub_15048EE2); /* 0x15045275: call 0x15048ee2 */
    RECOMP_FLAGS_IN();
    MEM32(ebp + (-0x38)) = eax; /* 0x1504527A: mov dword ptr [ebp - 0x38], eax */
    ecx = POP32_VAL(esp); /* 0x1504527D: pop ecx */
    ecx = POP32_VAL(esp); /* 0x1504527E: pop ecx */
    /* test eax, eax */ /* 0x1504527F: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_15045442; /* 0x15045281: je 0x15045442 */
L_15045287:
    MEM32(eax) = esi; /* 0x15045287: mov dword ptr [eax], esi */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edx = 0; /* 0x15045289: xor edx, edx */
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = MEM32(ebp + (-0x38)); /* 0x1504528B: mov ecx, dword ptr [ebp - 0x38] */
    _flag_a = (uint32_t)((edi | 0xFFFFFFFFu)); _flag_b = (uint32_t)((edi | 0xFFFFFFFFu));
    edi = edi | 0xFFFFFFFFu; /* 0x1504528E: or edi, 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    eax = ecx + 0x4; /* 0x15045291: lea eax, [ecx + 4] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + esi; /* 0x15045294: add eax, esi */
    _flag_k = FK_ADD;
    ebx = ecx + 0x4; /* 0x15045296: lea ebx, [ecx + 4] */
    MEM32(ebp + (-0x8)) = eax; /* 0x15045299: mov dword ptr [ebp - 8], eax */
    /* test esi, esi */ /* 0x1504529C: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if ((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) == 0u || (((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_150452DB; /* 0x1504529E: jle 0x150452db */
L_150452A0:
    eax = edx; /* 0x150452A0: mov eax, edx */
    ecx = edx; /* 0x150452A2: mov ecx, edx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x1Fu);
    eax = eax & 0x1Fu; /* 0x150452A4: and eax, 0x1f */
    _cf = 0;
    _flag_k = FK_TEST;
    if (5u) _cf = (((ecx) >> 4) & 1u); /* 0x150452A7: shr ecx, 5 */
    if (5u) { _flag_a = recomp_flags_pack((ecx >> 5u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ecx = ecx >> 5u; /* 0x150452A7: shr ecx, 5 */
    eax = (uint32_t)((int32_t)eax * (int32_t)0x24u); /* 0x150452AA: imul eax, eax, 0x24 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(ecx * 4 + 0x150BEBC0));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + MEM32(ecx * 4 + 0x150BEBC0); /* 0x150452AD: add eax, dword ptr [ecx*4 + 0x150bebc0] */
    _flag_k = FK_ADD;
    SET_LO8(ecx, MEM8(eax + 0x4)); /* 0x150452B4: mov cl, byte ptr [eax + 4] */
    /* test LO8(ecx), 0x10u */ /* 0x150452B7: test cl, 0x10 */
    _flag_a = (uint32_t)(LO8(ecx)) << 24; _flag_b = (uint32_t)(0x10u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_150452C2; /* 0x150452BA: jne 0x150452c2 */
L_150452BC:
    MEM8(ebx) = (uint8_t)(LO8(ecx)); /* 0x150452BC: mov byte ptr [ebx], cl */
    ecx = MEM32(eax); /* 0x150452BE: mov ecx, dword ptr [eax] */
    goto L_150452C7; /* 0x150452C0: jmp 0x150452c7 */
L_150452C2:
    MEM8(ebx) = (uint8_t)(0); /* 0x150452C2: mov byte ptr [ebx], 0 */
    ecx = edi; /* 0x150452C5: mov ecx, edi */
L_150452C7:
    eax = MEM32(ebp + (-0x8)); /* 0x150452C7: mov eax, dword ptr [ebp - 8] */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(1);
    edx = edx + 1; /* 0x150452CA: inc edx */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(1);
    ebx = ebx + 1; /* 0x150452CB: inc ebx */
    _flag_k = FK_INC;
    MEM32(eax) = ecx; /* 0x150452CC: mov dword ptr [eax], ecx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 4; /* 0x150452CE: add eax, 4 */
    _flag_k = FK_ADD;
    MEM32(ebp + (-0x8)) = eax; /* 0x150452D1: mov dword ptr [ebp - 8], eax */
    /* cmp edx, esi */ /* 0x150452D4: cmp edx, esi */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_L(_flag_a, _flag_b)) goto L_150452A0; /* 0x150452D6: jl 0x150452a0 */
L_150452D8:
    ecx = MEM32(ebp + (-0x38)); /* 0x150452D8: mov ecx, dword ptr [ebp - 0x38] */
L_150452DB:
    /* cmp MEM8(ebp + (-0x1)), 0 */ /* 0x150452DB: cmp byte ptr [ebp - 1], 0 */
    _flag_a = (uint32_t)(MEM8(ebp + (-0x1))) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1504538F; /* 0x150452DF: je 0x1504538f */
L_150452E5:
    edx = ecx + 0x4; /* 0x150452E5: lea edx, [ecx + 4] */
    PUSH32(esp, 3); /* 0x150452E8: push 3 */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edx = edx + esi; /* 0x150452EA: add edx, esi */
    _flag_k = FK_ADD;
    eax = ecx + 0x4; /* 0x150452EC: lea eax, [ecx + 4] */
    ebx = POP32_VAL(esp); /* 0x150452EF: pop ebx */
    /* cmp esi, ebx */ /* 0x150452F0: cmp esi, ebx */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    MEM32(ebp + (-0x8)) = eax; /* 0x150452F2: mov dword ptr [ebp - 8], eax */
    MEM32(ebp + (-0xC)) = edx; /* 0x150452F5: mov dword ptr [ebp - 0xc], edx */
    if (CMP_L(_flag_a, _flag_b)) { ebx = esi; } /* 0x150452F8: cmovl ebx, esi */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x150452FB: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    /* test ebx, ebx */ /* 0x150452FD: test ebx, ebx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ebx);
    _cf = 0;
    _flag_k = FK_TEST;
    if ((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) == 0u || (((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_15045388; /* 0x150452FF: jle 0x15045388 */
L_15045305:
    /* cmp ebx, 4 */ /* 0x15045305: cmp ebx, 4 */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_B(_flag_a, _flag_b)) goto L_15045378; /* 0x15045308: jb 0x15045378 */
L_1504530A:
    esi = eax + (-0x1); /* 0x1504530A: lea esi, [eax - 1] */
    eax = ebx + (-0x1); /* 0x1504530D: lea eax, [ebx - 1] */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esi = esi + ebx; /* 0x15045310: add esi, ebx */
    _flag_k = FK_ADD;
    eax = edx + eax * 4; /* 0x15045312: lea eax, [edx + eax*4] */
    /* cmp MEM32(ebp + (-0x8)), eax */ /* 0x15045315: cmp dword ptr [ebp - 8], eax */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x8))); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_A(_flag_a, _flag_b)) goto L_1504531E; /* 0x15045318: ja 0x1504531e */
L_1504531A:
    /* cmp esi, edx */ /* 0x1504531A: cmp esi, edx */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_AE(_flag_a, _flag_b)) goto L_15045375; /* 0x1504531C: jae 0x15045375 */
L_1504531E:
    eax = ebx; /* 0x1504531E: mov eax, ebx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x80000003u);
    eax = eax & 0x80000003u; /* 0x15045320: and eax, 0x80000003 */
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) == 0u)) goto L_1504532C; /* 0x15045325: jns 0x1504532c */
L_15045327:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax - 1; /* 0x15045327: dec eax */
    _flag_k = FK_DEC;
    _flag_a = (uint32_t)((eax | 0xFFFFFFFCu)); _flag_b = (uint32_t)((eax | 0xFFFFFFFCu));
    eax = eax | 0xFFFFFFFCu; /* 0x15045328: or eax, 0xfffffffc */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x1504532B: inc eax */
    _flag_k = FK_INC;
L_1504532C:
    edx = ebx; /* 0x1504532C: mov edx, ebx */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    edx = edx - eax; /* 0x1504532E: sub edx, eax */
    _flag_k = FK_CMP;
L_15045330:
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 4; /* 0x15045330: add ecx, 4 */
    _flag_k = FK_ADD;
    /* cmp ecx, edx */ /* 0x15045333: cmp ecx, edx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_L(_flag_a, _flag_b)) goto L_15045330; /* 0x15045335: jl 0x15045330 */
L_15045337:
    eax = edx + 0x3; /* 0x15045337: lea eax, [edx + 3] */
    MEM32(ebp + (-0x10)) = ecx; /* 0x1504533A: mov dword ptr [ebp - 0x10], ecx */
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFFu : 0; /* 0x1504533D: cdq  */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(3);
    edx = edx & 3; /* 0x1504533E: and edx, 3 */
    _cf = 0;
    _flag_k = FK_TEST;
    esi = edx + eax; /* 0x15045341: lea esi, [edx + eax] */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(0xFFFFFFFCu);
    esi = esi & 0xFFFFFFFCu; /* 0x15045344: and esi, 0xfffffffc */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, esi); /* 0x15045347: push esi */
    PUSH32(esp, 0); /* 0x15045348: push 0 */
    PUSH32(esp, MEM32(ebp + (-0x8))); /* 0x1504534A: push dword ptr [ebp - 8] */
    RECOMP_CALL(sub_1508E3D0); /* 0x1504534D: call 0x1508e3d0 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(MEM32(ebp + (-0x8))); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM32(ebp + (-0x8)) = MEM32(ebp + (-0x8)) + esi; /* 0x15045352: add dword ptr [ebp - 8], esi */
    _flag_k = FK_ADD;
    eax = edi; /* 0x15045355: mov eax, edi */
    edx = MEM32(ebp + (-0xC)); /* 0x15045357: mov edx, dword ptr [ebp - 0xc] */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x1504535A: add esp, 0xc */
    _flag_k = FK_ADD;
    if (2u) _cf = (((esi) >> 30) & 1u); /* 0x1504535D: shl esi, 2 */
    if (2u) { _flag_a = recomp_flags_pack((esi << 2u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    esi = esi << 2u; /* 0x1504535D: shl esi, 2 */
    edi = edx; /* 0x15045360: mov edi, edx */
    ecx = esi; /* 0x15045362: mov ecx, esi */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edx = edx + esi; /* 0x15045364: add edx, esi */
    _flag_k = FK_ADD;
    if (2u) _cf = (((ecx) >> 1) & 1u); /* 0x15045366: shr ecx, 2 */
    if (2u) { _flag_a = recomp_flags_pack((ecx >> 2u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ecx = ecx >> 2u; /* 0x15045366: shr ecx, 2 */
    { uint32_t _n = ecx, _b = _n * 4u; /* 0x15045369: rep stosd dword ptr es:[edi], eax */ if (_df > 0) { MEMSET32((void*)ADDR(edi), eax, _n); edi += _b; } else { MEMSET32((void*)ADDR(edi - _b + 4u), eax, _n); edi -= _b; } ecx = 0; }
    ecx = MEM32(ebp + (-0x10)); /* 0x1504536B: mov ecx, dword ptr [ebp - 0x10] */
    _flag_a = (uint32_t)((edi | 0xFFFFFFFFu)); _flag_b = (uint32_t)((edi | 0xFFFFFFFFu));
    edi = edi | 0xFFFFFFFFu; /* 0x1504536E: or edi, 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp ecx, ebx */ /* 0x15045371: cmp ecx, ebx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_GE(_flag_a, _flag_b)) goto L_15045388; /* 0x15045373: jge 0x15045388 */
L_15045375:
    eax = MEM32(ebp + (-0x8)); /* 0x15045375: mov eax, dword ptr [ebp - 8] */
L_15045378:
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ebx = ebx - ecx; /* 0x15045378: sub ebx, ecx */
    _flag_k = FK_CMP;
L_1504537A:
    MEM8(eax) = (uint8_t)(0); /* 0x1504537A: mov byte ptr [eax], 0 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x1504537D: inc eax */
    _flag_k = FK_INC;
    MEM32(edx) = edi; /* 0x1504537E: mov dword ptr [edx], edi */
    edx = edx + 0x4; /* 0x15045380: lea edx, [edx + 4] */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(1);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ebx = ebx - 1; /* 0x15045383: sub ebx, 1 */
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (/* sub result */ CMP_NE(_flag_a, _flag_b)) goto L_1504537A; /* 0x15045386: jne 0x1504537a */
L_15045388:
    MEM32(ebp + (-0xC)) = 8; /* 0x15045388: mov dword ptr [ebp - 0xc], 8 */
L_1504538F:
    RECOMP_CALL(sub_150363E0); /* 0x1504538F: call 0x150363e0 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x15045394: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(eax) = ecx; /* 0x15045396: mov dword ptr [eax], ecx */
    eax = ebp + (-0x28); /* 0x15045398: lea eax, [ebp - 0x28] */
    PUSH32(esp, eax); /* 0x1504539B: push eax */
    eax = ebp + (-0x6C); /* 0x1504539C: lea eax, [ebp - 0x6c] */
    PUSH32(esp, eax); /* 0x1504539F: push eax */
    PUSH32(esp, ecx); /* 0x150453A0: push ecx */
    PUSH32(esp, MEM32(ebp + 0x14)); /* 0x150453A1: push dword ptr [ebp + 0x14] */
    PUSH32(esp, MEM32(ebp + (-0xC))); /* 0x150453A4: push dword ptr [ebp - 0xc] */
    PUSH32(esp, 1); /* 0x150453A7: push 1 */
    PUSH32(esp, ecx); /* 0x150453A9: push ecx */
    PUSH32(esp, ecx); /* 0x150453AA: push ecx */
    PUSH32(esp, MEM32(ebp + (-0x14))); /* 0x150453AB: push dword ptr [ebp - 0x14] */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x150453AE: push dword ptr [ebp + 0xc] */
    RECOMP_ICALL(MEM32(0x150C0230)); /* 0x150453B1: call dword ptr [0x150c0230] */
    RECOMP_FLAGS_IN();
    esi = eax; /* 0x150453B7: mov esi, eax */
    RECOMP_ICALL(MEM32(0x150C006C)); /* 0x150453B9: call dword ptr [0x150c006c] */
    RECOMP_FLAGS_IN();
    PUSH32(esp, MEM32(ebp + (-0x38))); /* 0x150453BF: push dword ptr [ebp - 0x38] */
    ebx = eax; /* 0x150453C2: mov ebx, eax */
    RECOMP_CALL(sub_15048840); /* 0x150453C4: call 0x15048840 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x150453C9: pop ecx */
    /* test esi, esi */ /* 0x150453CA: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_150453D9; /* 0x150453CC: jne 0x150453d9 */
L_150453CE:
    PUSH32(esp, ebx); /* 0x150453CE: push ebx */
    RECOMP_CALL(sub_150363FB); /* 0x150453CF: call 0x150363fb */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x150453D4: pop ecx */
    eax = edi; /* 0x150453D5: mov eax, edi */
    goto L_15045450; /* 0x150453D7: jmp 0x15045450 */
L_150453D9:
    eax = MEM32(ebp + 0x8); /* 0x150453D9: mov eax, dword ptr [ebp + 8] */
    /* cmp eax, 2 */ /* 0x150453DC: cmp eax, 2 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_15045455; /* 0x150453DF: je 0x15045455 */
L_150453E1:
    /* test eax, eax */ /* 0x150453E1: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_15045420; /* 0x150453E3: jne 0x15045420 */
L_150453E5:
    PUSH32(esp, edi); /* 0x150453E5: push edi */
    PUSH32(esp, MEM32(ebp + (-0x28))); /* 0x150453E6: push dword ptr [ebp - 0x28] */
    RECOMP_ICALL(MEM32(0x150C025C)); /* 0x150453E9: call dword ptr [0x150c025c] */
    RECOMP_FLAGS_IN();
    eax = ebp + (-0x18); /* 0x150453EF: lea eax, [ebp - 0x18] */
    PUSH32(esp, eax); /* 0x150453F2: push eax */
    PUSH32(esp, MEM32(ebp + (-0x28))); /* 0x150453F3: push dword ptr [ebp - 0x28] */
    RECOMP_ICALL(MEM32(0x150C0200)); /* 0x150453F6: call dword ptr [0x150c0200] */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x150453FC: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_15045405; /* 0x150453FE: je 0x15045405 */
L_15045400:
    esi = MEM32(ebp + (-0x18)); /* 0x15045400: mov esi, dword ptr [ebp - 0x18] */
    goto L_15045415; /* 0x15045403: jmp 0x15045415 */
L_15045405:
    RECOMP_ICALL(MEM32(0x150C006C)); /* 0x15045405: call dword ptr [0x150c006c] */
    RECOMP_FLAGS_IN();
    PUSH32(esp, eax); /* 0x1504540B: push eax */
    RECOMP_CALL(sub_150363FB); /* 0x1504540C: call 0x150363fb */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x15045411: pop ecx */
    _flag_a = (uint32_t)((esi | 0xFFFFFFFFu)); _flag_b = (uint32_t)((esi | 0xFFFFFFFFu));
    esi = esi | 0xFFFFFFFFu; /* 0x15045412: or esi, 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
L_15045415:
    PUSH32(esp, MEM32(ebp + (-0x28))); /* 0x15045415: push dword ptr [ebp - 0x28] */
    RECOMP_ICALL(MEM32(0x150C0124)); /* 0x15045418: call dword ptr [0x150c0124] */
    RECOMP_FLAGS_IN();
    goto L_15045435; /* 0x1504541E: jmp 0x15045435 */
L_15045420:
    /* cmp eax, 4 */ /* 0x15045420: cmp eax, 4 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_15045432; /* 0x15045423: jne 0x15045432 */
L_15045425:
    PUSH32(esp, MEM32(ebp + (-0x28))); /* 0x15045425: push dword ptr [ebp - 0x28] */
    RECOMP_ICALL(MEM32(0x150C0124)); /* 0x15045428: call dword ptr [0x150c0124] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    esi = 0; /* 0x1504542E: xor esi, esi */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_15045435; /* 0x15045430: jmp 0x15045435 */
L_15045432:
    esi = MEM32(ebp + (-0x28)); /* 0x15045432: mov esi, dword ptr [ebp - 0x28] */
L_15045435:
    PUSH32(esp, MEM32(ebp + (-0x24))); /* 0x15045435: push dword ptr [ebp - 0x24] */
    RECOMP_ICALL(MEM32(0x150C0124)); /* 0x15045438: call dword ptr [0x150c0124] */
    RECOMP_FLAGS_IN();
    eax = esi; /* 0x1504543E: mov eax, esi */
    goto L_15045450; /* 0x15045440: jmp 0x15045450 */
L_15045442:
    RECOMP_CALL(sub_15036430); /* 0x15045442: call 0x15036430 */
    RECOMP_FLAGS_IN();
    MEM32(eax) = 0xCu; /* 0x15045447: mov dword ptr [eax], 0xc */
    _flag_a = (uint32_t)((eax | 0xFFFFFFFFu)); _flag_b = (uint32_t)((eax | 0xFFFFFFFFu));
    eax = eax | 0xFFFFFFFFu; /* 0x1504544D: or eax, 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
L_15045450:
    edi = POP32_VAL(esp); /* 0x15045450: pop edi */
    esi = POP32_VAL(esp); /* 0x15045451: pop esi */
L_15045452:
    ebx = POP32_VAL(esp); /* 0x15045452: pop ebx */
    esp = ebp; ebp = POP32_VAL(esp); /* 0x15045453: leave  */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x15045454: ret  */
L_15045455:
    PUSH32(esp, 0); /* 0x15045455: push 0 */
    RECOMP_CALL(sub_15067FB0); /* 0x15045457: call 0x15067fb0 */
    RECOMP_FLAGS_IN();
    void_lift_trap(0x1504545Cu, "int3 ");
    { RECOMP_REGS_OUT(); return; } /* end of function */
    RECOMP_REGS_OUT();
}

void sub_15045463(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x15045463u);

L_15045463:
    edi = edi; /* 0x15045463: mov edi, edi */
    PUSH32(esp, ebp); /* 0x15045465: push ebp */
    ebp = esp; /* 0x15045466: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x44u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x44u; /* 0x15045468: sub esp, 0x44 */
    _flag_k = FK_CMP;
    eax = MEM32(0x150BD340); /* 0x1504546B: mov eax, dword ptr [0x150bd340] */
    _flag_a = (uint32_t)((eax ^ ebp)); _flag_b = (uint32_t)((eax ^ ebp));
    eax = eax ^ ebp; /* 0x15045470: xor eax, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x4)) = eax; /* 0x15045472: mov dword ptr [ebp - 4], eax */
    ecx = MEM32(ebp + 0x8); /* 0x15045475: mov ecx, dword ptr [ebp + 8] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edx = 0; /* 0x15045478: xor edx, edx */
    _cf = 0;
    _flag_k = FK_TEST;
    eax = MEM32(ebp + 0xC); /* 0x1504547A: mov eax, dword ptr [ebp + 0xc] */
    PUSH32(esp, ebx); /* 0x1504547D: push ebx */
    PUSH32(esp, esi); /* 0x1504547E: push esi */
    PUSH32(esp, edi); /* 0x1504547F: push edi */
    esi = 0x15004954u; /* 0x15045480: mov esi, 0x15004954 */
    MEM32(ebp + (-0x28)) = eax; /* 0x15045485: mov dword ptr [ebp - 0x28], eax */
    eax = MEM32(ebp + 0x10); /* 0x15045488: mov eax, dword ptr [ebp + 0x10] */
    edi = ebp + (-0x10); /* 0x1504548B: lea edi, [ebp - 0x10] */
    MEM32(ebp + (-0x20)) = eax; /* 0x1504548E: mov dword ptr [ebp - 0x20], eax */
    ebx = edx; /* 0x15045491: mov ebx, edx */
    eax = MEM32(ebp + 0x14); /* 0x15045493: mov eax, dword ptr [ebp + 0x14] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x15045496: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(ebp + (-0x38)) = edx; /* 0x15045497: mov dword ptr [ebp - 0x38], edx */
    MEM32(ebp + (-0x24)) = edx; /* 0x1504549A: mov dword ptr [ebp - 0x24], edx */
    MEM32(ebp + (-0x18)) = edx; /* 0x1504549D: mov dword ptr [ebp - 0x18], edx */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x150454A0: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(ebp + (-0x2C)) = edx; /* 0x150454A1: mov dword ptr [ebp - 0x2c], edx */
    MEM32(ebp + (-0x3C)) = edx; /* 0x150454A4: mov dword ptr [ebp - 0x3c], edx */
    edx = ecx; /* 0x150454A7: mov edx, ecx */
    PUSH32(esp, 2); /* 0x150454A9: push 2 */
    MEM16(edi) = MEM16(esi); esi += _df * 2; edi += _df * 2; /* 0x150454AB: movsw word ptr es:[edi], word ptr [esi] */
    MEM32(ebp + (-0x44)) = ecx; /* 0x150454AD: mov dword ptr [ebp - 0x44], ecx */
    ecx = MEM32(ecx); /* 0x150454B0: mov ecx, dword ptr [ecx] */
    MEM32(ebp + (-0x14)) = eax; /* 0x150454B2: mov dword ptr [ebp - 0x14], eax */
    MEM8(edi) = MEM8(esi); esi += _df; edi += _df; /* 0x150454B5: movsb byte ptr es:[edi], byte ptr [esi] */
    MEM32(ebp + (-0x34)) = ebx; /* 0x150454B6: mov dword ptr [ebp - 0x34], ebx */
    eax = POP32_VAL(esp); /* 0x150454B9: pop eax */
    MEM32(ebp + (-0x40)) = eax; /* 0x150454BA: mov dword ptr [ebp - 0x40], eax */
    edi = eax; /* 0x150454BD: mov edi, eax */
    MEM32(ebp + (-0x30)) = eax; /* 0x150454BF: mov dword ptr [ebp - 0x30], eax */
    /* test ecx, ecx */ /* 0x150454C2: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_150454E1; /* 0x150454C4: je 0x150454e1 */
L_150454C6:
    edx = edx + 0x4; /* 0x150454C6: lea edx, [edx + 4] */
    esi = ecx + 0x1; /* 0x150454C9: lea esi, [ecx + 1] */
L_150454CC:
    SET_LO8(eax, MEM8(ecx)); /* 0x150454CC: mov al, byte ptr [ecx] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx + 1; /* 0x150454CE: inc ecx */
    _flag_k = FK_INC;
    /* test LO8(eax), LO8(eax) */ /* 0x150454CF: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_150454CC; /* 0x150454D1: jne 0x150454cc */
L_150454D3:
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ecx = ecx - esi; /* 0x150454D3: sub ecx, esi */
    _flag_k = FK_CMP;
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx + 1; /* 0x150454D5: inc ecx */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edi = edi + ecx; /* 0x150454D6: add edi, ecx */
    _flag_k = FK_ADD;
    ecx = MEM32(edx); /* 0x150454D8: mov ecx, dword ptr [edx] */
    /* test ecx, ecx */ /* 0x150454DA: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_150454C6; /* 0x150454DC: jne 0x150454c6 */
L_150454DE:
    MEM32(ebp + (-0x30)) = edi; /* 0x150454DE: mov dword ptr [ebp - 0x30], edi */
L_150454E1:
    PUSH32(esp, 1); /* 0x150454E1: push 1 */
    PUSH32(esp, edi); /* 0x150454E3: push edi */
    RECOMP_CALL(sub_15048EE2); /* 0x150454E4: call 0x15048ee2 */
    RECOMP_FLAGS_IN();
    esi = MEM32(ebp + (-0x20)); /* 0x150454E9: mov esi, dword ptr [ebp - 0x20] */
    ecx = POP32_VAL(esp); /* 0x150454EC: pop ecx */
    ecx = POP32_VAL(esp); /* 0x150454ED: pop ecx */
    MEM32(esi) = eax; /* 0x150454EE: mov dword ptr [esi], eax */
    /* test eax, eax */ /* 0x150454F0: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_15045517; /* 0x150454F2: jne 0x15045517 */
L_150454F4:
    eax = MEM32(ebp + (-0x14)); /* 0x150454F4: mov eax, dword ptr [ebp - 0x14] */
    _flag_a = (uint32_t)(MEM32(eax)); _flag_b = (uint32_t)(ebx);
    MEM32(eax) = MEM32(eax) & ebx; /* 0x150454F7: and dword ptr [eax], ebx */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_15036430); /* 0x150454F9: call 0x15036430 */
    RECOMP_FLAGS_IN();
    MEM32(eax) = 0xCu; /* 0x150454FE: mov dword ptr [eax], 0xc */
    RECOMP_CALL(sub_150363E0); /* 0x15045504: call 0x150363e0 */
    RECOMP_FLAGS_IN();
    MEM32(eax) = 8; /* 0x15045509: mov dword ptr [eax], 8 */
    _flag_a = (uint32_t)((eax | 0xFFFFFFFFu)); _flag_b = (uint32_t)((eax | 0xFFFFFFFFu));
    eax = eax | 0xFFFFFFFFu; /* 0x1504550F: or eax, 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_150458B4; /* 0x15045512: jmp 0x150458b4 */
L_15045517:
    eax = ebp + (-0x10); /* 0x15045517: lea eax, [ebp - 0x10] */
    PUSH32(esp, eax); /* 0x1504551A: push eax */
    eax = ebp + (-0x2C); /* 0x1504551B: lea eax, [ebp - 0x2c] */
    PUSH32(esp, 0); /* 0x1504551E: push 0 */
    PUSH32(esp, eax); /* 0x15045520: push eax */
    RECOMP_CALL(sub_1505D654); /* 0x15045521: call 0x1505d654 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x15045526: add esp, 0xc */
    _flag_k = FK_ADD;
    /* test eax, eax */ /* 0x15045529: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1504554A; /* 0x1504552B: je 0x1504554a */
L_1504552D:
    /* cmp eax, 0x16u */ /* 0x1504552D: cmp eax, 0x16 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x16u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_15045546; /* 0x15045530: jne 0x15045546 */
L_15045532:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x15045532: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, eax); /* 0x15045534: push eax */
    PUSH32(esp, eax); /* 0x15045535: push eax */
    PUSH32(esp, eax); /* 0x15045536: push eax */
    PUSH32(esp, eax); /* 0x15045537: push eax */
    PUSH32(esp, eax); /* 0x15045538: push eax */
    RECOMP_CALL(sub_1505A11B); /* 0x15045539: call 0x1505a11b */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x14u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x14u; /* 0x1504553E: add esp, 0x14 */
    _flag_k = FK_ADD;
    goto L_150455C6; /* 0x15045541: jmp 0x150455c6 */
L_15045546:
    /* test eax, eax */ /* 0x15045546: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_150455C6; /* 0x15045548: jne 0x150455c6 */
L_1504554A:
    ecx = ebp + (-0x10); /* 0x1504554A: lea ecx, [ebp - 0x10] */
    edx = ecx + 0x1; /* 0x1504554D: lea edx, [ecx + 1] */
L_15045550:
    SET_LO8(eax, MEM8(ecx)); /* 0x15045550: mov al, byte ptr [ecx] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx + 1; /* 0x15045552: inc ecx */
    _flag_k = FK_INC;
    /* test LO8(eax), LO8(eax) */ /* 0x15045553: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_15045550; /* 0x15045555: jne 0x15045550 */
L_15045557:
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ecx = ecx - edx; /* 0x15045557: sub ecx, edx */
    _flag_k = FK_CMP;
    edi = ecx + 0x2; /* 0x15045559: lea edi, [ecx + 2] */
    ecx = MEM32(ebp + (-0x2C)); /* 0x1504555C: mov ecx, dword ptr [ebp - 0x2c] */
    MEM32(ebp + (-0x1C)) = edi; /* 0x1504555F: mov dword ptr [ebp - 0x1c], edi */
    /* test ecx, ecx */ /* 0x15045562: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_15045577; /* 0x15045564: je 0x15045577 */
L_15045566:
    edx = ecx + 0x1; /* 0x15045566: lea edx, [ecx + 1] */
L_15045569:
    SET_LO8(eax, MEM8(ecx)); /* 0x15045569: mov al, byte ptr [ecx] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx + 1; /* 0x1504556B: inc ecx */
    _flag_k = FK_INC;
    /* test LO8(eax), LO8(eax) */ /* 0x1504556C: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_15045569; /* 0x1504556E: jne 0x15045569 */
L_15045570:
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ecx = ecx - edx; /* 0x15045570: sub ecx, edx */
    _flag_k = FK_CMP;
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edi = edi + ecx; /* 0x15045572: add edi, ecx */
    _flag_k = FK_ADD;
    MEM32(ebp + (-0x1C)) = edi; /* 0x15045574: mov dword ptr [ebp - 0x1c], edi */
L_15045577:
    eax = MEM32(ebp + (-0x28)); /* 0x15045577: mov eax, dword ptr [ebp - 0x28] */
    /* test eax, eax */ /* 0x1504557A: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_150456EA; /* 0x1504557C: je 0x150456ea */
L_15045582:
    ecx = MEM32(eax); /* 0x15045582: mov ecx, dword ptr [eax] */
    edx = eax; /* 0x15045584: mov edx, eax */
    /* test ecx, ecx */ /* 0x15045586: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_150455AB; /* 0x15045588: je 0x150455ab */
L_1504558A:
    PUSH32(esp, 2); /* 0x1504558A: push 2 */
    ebx = POP32_VAL(esp); /* 0x1504558C: pop ebx */
L_1504558D:
    edx = edx + 0x4; /* 0x1504558D: lea edx, [edx + 4] */
    esi = ecx + 0x1; /* 0x15045590: lea esi, [ecx + 1] */
L_15045593:
    SET_LO8(eax, MEM8(ecx)); /* 0x15045593: mov al, byte ptr [ecx] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx + 1; /* 0x15045595: inc ecx */
    _flag_k = FK_INC;
    /* test LO8(eax), LO8(eax) */ /* 0x15045596: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_15045593; /* 0x15045598: jne 0x15045593 */
L_1504559A:
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ecx = ecx - esi; /* 0x1504559A: sub ecx, esi */
    _flag_k = FK_CMP;
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx + 1; /* 0x1504559C: inc ecx */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ebx = ebx + ecx; /* 0x1504559D: add ebx, ecx */
    _flag_k = FK_ADD;
    ecx = MEM32(edx); /* 0x1504559F: mov ecx, dword ptr [edx] */
    /* test ecx, ecx */ /* 0x150455A1: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1504558D; /* 0x150455A3: jne 0x1504558d */
L_150455A5:
    esi = MEM32(ebp + (-0x20)); /* 0x150455A5: mov esi, dword ptr [ebp - 0x20] */
    MEM32(ebp + (-0x40)) = ebx; /* 0x150455A8: mov dword ptr [ebp - 0x40], ebx */
L_150455AB:
    edx = MEM32(0x150BDAF4); /* 0x150455AB: mov edx, dword ptr [0x150bdaf4] */
    /* test edx, edx */ /* 0x150455B1: test edx, edx */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(edx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_150455E2; /* 0x150455B3: jne 0x150455e2 */
L_150455B5:
    RECOMP_CALL(sub_1505E8DE); /* 0x150455B5: call 0x1505e8de */
    RECOMP_FLAGS_IN();
    edx = eax; /* 0x150455BA: mov edx, eax */
    MEM32(0x150BDAF4) = edx; /* 0x150455BC: mov dword ptr [0x150bdaf4], edx */
    /* test edx, edx */ /* 0x150455C2: test edx, edx */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(edx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_150455E2; /* 0x150455C4: jne 0x150455e2 */
L_150455C6:
    _flag_a = (uint32_t)((eax | 0xFFFFFFFFu)); _flag_b = (uint32_t)((eax | 0xFFFFFFFFu));
    eax = eax | 0xFFFFFFFFu; /* 0x150455C6: or eax, 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x24)) = eax; /* 0x150455C9: mov dword ptr [ebp - 0x24], eax */
    PUSH32(esp, MEM32(esi)); /* 0x150455CC: push dword ptr [esi] */
    RECOMP_CALL(sub_15048840); /* 0x150455CE: call 0x15048840 */
    RECOMP_FLAGS_IN();
    eax = MEM32(ebp + (-0x14)); /* 0x150455D3: mov eax, dword ptr [ebp - 0x14] */
    _flag_a = (uint32_t)(MEM32(esi)); _flag_b = (uint32_t)(0);
    MEM32(esi) = MEM32(esi) & 0; /* 0x150455D6: and dword ptr [esi], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = POP32_VAL(esp); /* 0x150455D9: pop ecx */
    _flag_a = (uint32_t)(MEM32(eax)); _flag_b = (uint32_t)(0);
    MEM32(eax) = MEM32(eax) & 0; /* 0x150455DA: and dword ptr [eax], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_1504588A; /* 0x150455DD: jmp 0x1504588a */
L_150455E2:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    esi = 0; /* 0x150455E2: xor esi, esi */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp MEM8(edx), 0 */ /* 0x150455E4: cmp byte ptr [edx], 0 */
    _flag_a = (uint32_t)(MEM8(edx)) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    MEM32(ebp + (-0x18)) = esi; /* 0x150455E7: mov dword ptr [ebp - 0x18], esi */
    if (CMP_EQ(_flag_a, _flag_b)) goto L_15045612; /* 0x150455EA: je 0x15045612 */
L_150455EC:
    ecx = edx; /* 0x150455EC: mov ecx, edx */
    SET_LO8(eax, MEM8(ecx)); /* 0x150455EE: mov al, byte ptr [ecx] */
L_150455F0:
    /* cmp LO8(eax), 0x3Du */ /* 0x150455F0: cmp al, 0x3d */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(0x3Du) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_15045612; /* 0x150455F2: je 0x15045612 */
L_150455F4:
    esi = ecx + 0x1; /* 0x150455F4: lea esi, [ecx + 1] */
L_150455F7:
    SET_LO8(eax, MEM8(ecx)); /* 0x150455F7: mov al, byte ptr [ecx] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx + 1; /* 0x150455F9: inc ecx */
    _flag_k = FK_INC;
    /* test LO8(eax), LO8(eax) */ /* 0x150455FA: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_150455F7; /* 0x150455FC: jne 0x150455f7 */
L_150455FE:
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ecx = ecx - esi; /* 0x150455FE: sub ecx, esi */
    _flag_k = FK_CMP;
    esi = MEM32(ebp + (-0x18)); /* 0x15045600: mov esi, dword ptr [ebp - 0x18] */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi + 1; /* 0x15045603: inc esi */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esi = esi + ecx; /* 0x15045604: add esi, ecx */
    _flag_k = FK_ADD;
    MEM32(ebp + (-0x18)) = esi; /* 0x15045606: mov dword ptr [ebp - 0x18], esi */
    ecx = edx + esi; /* 0x15045609: lea ecx, [edx + esi] */
    SET_LO8(eax, MEM8(ecx)); /* 0x1504560C: mov al, byte ptr [ecx] */
    /* test LO8(eax), LO8(eax) */ /* 0x1504560E: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_150455F0; /* 0x15045610: jne 0x150455f0 */
L_15045612:
    eax = edx + esi; /* 0x15045612: lea eax, [edx + esi] */
    ebx = esi; /* 0x15045615: mov ebx, esi */
    /* cmp MEM8(eax), 0x3Du */ /* 0x15045617: cmp byte ptr [eax], 0x3d */
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(0x3Du) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    MEM32(ebp + (-0x34)) = ebx; /* 0x1504561A: mov dword ptr [ebp - 0x34], ebx */
    if (CMP_NE(_flag_a, _flag_b)) goto L_15045653; /* 0x1504561D: jne 0x15045653 */
L_1504561F:
    /* cmp MEM8(eax + 0x1), 0 */ /* 0x1504561F: cmp byte ptr [eax + 1], 0 */
    _flag_a = (uint32_t)(MEM8(eax + 0x1)) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1504564D; /* 0x15045623: je 0x1504564d */
L_15045625:
    /* cmp MEM8(eax + 0x2), 0x3Au */ /* 0x15045625: cmp byte ptr [eax + 2], 0x3a */
    _flag_a = (uint32_t)(MEM8(eax + 0x2)) << 24; _flag_b = (uint32_t)(0x3Au) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_1504564D; /* 0x15045629: jne 0x1504564d */
L_1504562B:
    /* cmp MEM8(eax + 0x3), 0x3Du */ /* 0x1504562B: cmp byte ptr [eax + 3], 0x3d */
    _flag_a = (uint32_t)(MEM8(eax + 0x3)) << 24; _flag_b = (uint32_t)(0x3Du) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_1504564D; /* 0x1504562F: jne 0x1504564d */
L_15045631:
    ecx = eax + 0x4; /* 0x15045631: lea ecx, [eax + 4] */
    esi = ecx + 0x1; /* 0x15045634: lea esi, [ecx + 1] */
L_15045637:
    SET_LO8(eax, MEM8(ecx)); /* 0x15045637: mov al, byte ptr [ecx] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx + 1; /* 0x15045639: inc ecx */
    _flag_k = FK_INC;
    /* test LO8(eax), LO8(eax) */ /* 0x1504563A: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_15045637; /* 0x1504563C: jne 0x15045637 */
L_1504563E:
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ecx = ecx - esi; /* 0x1504563E: sub ecx, esi */
    _flag_k = FK_CMP;
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(5);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ebx = ebx + 5; /* 0x15045640: add ebx, 5 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ebx = ebx + ecx; /* 0x15045643: add ebx, ecx */
    _flag_k = FK_ADD;
    eax = edx + ebx; /* 0x15045645: lea eax, [edx + ebx] */
    /* cmp MEM8(eax), 0x3Du */ /* 0x15045648: cmp byte ptr [eax], 0x3d */
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(0x3Du) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    RECOMP_BACKEDGE();
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1504561F; /* 0x1504564B: je 0x1504561f */
L_1504564D:
    esi = MEM32(ebp + (-0x18)); /* 0x1504564D: mov esi, dword ptr [ebp - 0x18] */
    MEM32(ebp + (-0x34)) = ebx; /* 0x15045650: mov dword ptr [ebp - 0x34], ebx */
L_15045653:
    eax = MEM32(ebp + (-0x40)); /* 0x15045653: mov eax, dword ptr [ebp - 0x40] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - esi; /* 0x15045656: sub eax, esi */
    _flag_k = FK_CMP;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + ebx; /* 0x15045658: add eax, ebx */
    _flag_k = FK_ADD;
    MEM32(ebp + (-0x38)) = eax; /* 0x1504565A: mov dword ptr [ebp - 0x38], eax */
    eax = MEM32(ebp + (-0x28)); /* 0x1504565D: mov eax, dword ptr [ebp - 0x28] */
    esi = eax; /* 0x15045660: mov esi, eax */
    edx = MEM32(eax); /* 0x15045662: mov edx, dword ptr [eax] */
    /* test edx, edx */ /* 0x15045664: test edx, edx */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(edx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1504569E; /* 0x15045666: je 0x1504569e */
L_15045668:
    ecx = ebp + (-0x10); /* 0x15045668: lea ecx, [ebp - 0x10] */
    edi = ecx + 0x1; /* 0x1504566B: lea edi, [ecx + 1] */
L_1504566E:
    SET_LO8(eax, MEM8(ecx)); /* 0x1504566E: mov al, byte ptr [ecx] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx + 1; /* 0x15045670: inc ecx */
    _flag_k = FK_INC;
    /* test LO8(eax), LO8(eax) */ /* 0x15045671: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1504566E; /* 0x15045673: jne 0x1504566e */
L_15045675:
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ecx = ecx - edi; /* 0x15045675: sub ecx, edi */
    _flag_k = FK_CMP;
    eax = ebp + (-0x10); /* 0x15045677: lea eax, [ebp - 0x10] */
    PUSH32(esp, ecx); /* 0x1504567A: push ecx */
    PUSH32(esp, eax); /* 0x1504567B: push eax */
    PUSH32(esp, edx); /* 0x1504567C: push edx */
    RECOMP_CALL(sub_15054FE0); /* 0x1504567D: call 0x15054fe0 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x15045682: add esp, 0xc */
    _flag_k = FK_ADD;
    /* test eax, eax */ /* 0x15045685: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_15045694; /* 0x15045687: je 0x15045694 */
L_15045689:
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esi = esi + 4; /* 0x15045689: add esi, 4 */
    _flag_k = FK_ADD;
    edx = MEM32(esi); /* 0x1504568C: mov edx, dword ptr [esi] */
    /* test edx, edx */ /* 0x1504568E: test edx, edx */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(edx);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_15045668; /* 0x15045690: jne 0x15045668 */
L_15045692:
    goto L_1504569B; /* 0x15045692: jmp 0x1504569b */
L_15045694:
    MEM32(ebp + (-0x3C)) = 1; /* 0x15045694: mov dword ptr [ebp - 0x3c], 1 */
L_1504569B:
    edi = MEM32(ebp + (-0x1C)); /* 0x1504569B: mov edi, dword ptr [ebp - 0x1c] */
L_1504569E:
    ecx = MEM32(ebp + (-0x38)); /* 0x1504569E: mov ecx, dword ptr [ebp - 0x38] */
    /* cmp MEM32(ebp + (-0x3C)), 0 */ /* 0x150456A1: cmp dword ptr [ebp - 0x3c], 0 */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x3C))); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    PUSH32(esp, 1); /* 0x150456A5: push 1 */
    eax = ecx + edi; /* 0x150456A7: lea eax, [ecx + edi] */
    if (CMP_NE(_flag_a, _flag_b)) { eax = ecx; } /* 0x150456AA: cmovne eax, ecx */
    PUSH32(esp, eax); /* 0x150456AD: push eax */
    RECOMP_CALL(sub_15048EE2); /* 0x150456AE: call 0x15048ee2 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x150456B3: pop ecx */
    ecx = POP32_VAL(esp); /* 0x150456B4: pop ecx */
    ecx = MEM32(ebp + (-0x14)); /* 0x150456B5: mov ecx, dword ptr [ebp - 0x14] */
    MEM32(ecx) = eax; /* 0x150456B8: mov dword ptr [ecx], eax */
    /* test eax, eax */ /* 0x150456BA: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_150456F1; /* 0x150456BC: jne 0x150456f1 */
L_150456BE:
    ebx = MEM32(ebp + (-0x20)); /* 0x150456BE: mov ebx, dword ptr [ebp - 0x20] */
    PUSH32(esp, MEM32(ebx)); /* 0x150456C1: push dword ptr [ebx] */
    RECOMP_CALL(sub_15048840); /* 0x150456C3: call 0x15048840 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(MEM32(ebx)); _flag_b = (uint32_t)(0);
    MEM32(ebx) = MEM32(ebx) & 0; /* 0x150456C8: and dword ptr [ebx], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = POP32_VAL(esp); /* 0x150456CB: pop ecx */
    RECOMP_CALL(sub_15036430); /* 0x150456CC: call 0x15036430 */
    RECOMP_FLAGS_IN();
    MEM32(eax) = 0xCu; /* 0x150456D1: mov dword ptr [eax], 0xc */
    RECOMP_CALL(sub_150363E0); /* 0x150456D7: call 0x150363e0 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)((ebx | 0xFFFFFFFFu)); _flag_b = (uint32_t)((ebx | 0xFFFFFFFFu));
    ebx = ebx | 0xFFFFFFFFu; /* 0x150456DC: or ebx, 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(eax) = 8; /* 0x150456DF: mov dword ptr [eax], 8 */
    goto L_1504588D; /* 0x150456E5: jmp 0x1504588d */
L_150456EA:
    eax = MEM32(ebp + (-0x14)); /* 0x150456EA: mov eax, dword ptr [ebp - 0x14] */
    _flag_a = (uint32_t)(MEM32(eax)); _flag_b = (uint32_t)(ebx);
    MEM32(eax) = MEM32(eax) & ebx; /* 0x150456ED: and dword ptr [eax], ebx */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_150456F4; /* 0x150456EF: jmp 0x150456f4 */
L_150456F1:
    esi = MEM32(ebp + (-0x20)); /* 0x150456F1: mov esi, dword ptr [ebp - 0x20] */
L_150456F4:
    eax = MEM32(ebp + (-0x44)); /* 0x150456F4: mov eax, dword ptr [ebp - 0x44] */
    esi = MEM32(esi); /* 0x150456F7: mov esi, dword ptr [esi] */
    /* cmp MEM32(eax), 0 */ /* 0x150456F9: cmp dword ptr [eax], 0 */
    _flag_a = (uint32_t)(MEM32(eax)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_15045704; /* 0x150456FC: jne 0x15045704 */
L_150456FE:
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi + 1; /* 0x150456FE: inc esi */
    _flag_k = FK_INC;
    goto L_1504578C; /* 0x150456FF: jmp 0x1504578c */
L_15045704:
    edi = eax; /* 0x15045704: mov edi, eax */
    PUSH32(esp, MEM32(edi)); /* 0x15045706: push dword ptr [edi] */
    PUSH32(esp, MEM32(ebp + (-0x30))); /* 0x15045708: push dword ptr [ebp - 0x30] */
    PUSH32(esp, esi); /* 0x1504570B: push esi */
    RECOMP_CALL(sub_1508E640); /* 0x1504570C: call 0x1508e640 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x15045711: add esp, 0xc */
    _flag_k = FK_ADD;
    /* test eax, eax */ /* 0x15045714: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_15045727; /* 0x15045716: je 0x15045727 */
L_15045718:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x15045718: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, eax); /* 0x1504571A: push eax */
    PUSH32(esp, eax); /* 0x1504571B: push eax */
    PUSH32(esp, eax); /* 0x1504571C: push eax */
    PUSH32(esp, eax); /* 0x1504571D: push eax */
    PUSH32(esp, eax); /* 0x1504571E: push eax */
    RECOMP_CALL(sub_1505A11B); /* 0x1504571F: call 0x1505a11b */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x14u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x14u; /* 0x15045724: add esp, 0x14 */
    _flag_k = FK_ADD;
L_15045727:
    ecx = MEM32(edi); /* 0x15045727: mov ecx, dword ptr [edi] */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edi = edi + 4; /* 0x15045729: add edi, 4 */
    _flag_k = FK_ADD;
    edx = ecx + 0x1; /* 0x1504572C: lea edx, [ecx + 1] */
L_1504572F:
    SET_LO8(eax, MEM8(ecx)); /* 0x1504572F: mov al, byte ptr [ecx] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx + 1; /* 0x15045731: inc ecx */
    _flag_k = FK_INC;
    /* test LO8(eax), LO8(eax) */ /* 0x15045732: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1504572F; /* 0x15045734: jne 0x1504572f */
L_15045736:
    eax = MEM32(edi); /* 0x15045736: mov eax, dword ptr [edi] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ecx = ecx - edx; /* 0x15045738: sub ecx, edx */
    _flag_k = FK_CMP;
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi + 1; /* 0x1504573A: inc esi */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esi = esi + ecx; /* 0x1504573B: add esi, ecx */
    _flag_k = FK_ADD;
    /* test eax, eax */ /* 0x1504573D: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_15045789; /* 0x1504573F: je 0x15045789 */
L_15045741:
    ebx = MEM32(ebp + (-0x20)); /* 0x15045741: mov ebx, dword ptr [ebp - 0x20] */
L_15045744:
    PUSH32(esp, eax); /* 0x15045744: push eax */
    eax = MEM32(ebx); /* 0x15045745: mov eax, dword ptr [ebx] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - esi; /* 0x15045747: sub eax, esi */
    _flag_k = FK_CMP;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(ebp + (-0x30)));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + MEM32(ebp + (-0x30)); /* 0x15045749: add eax, dword ptr [ebp - 0x30] */
    _flag_k = FK_ADD;
    PUSH32(esp, eax); /* 0x1504574C: push eax */
    PUSH32(esp, esi); /* 0x1504574D: push esi */
    RECOMP_CALL(sub_1508E640); /* 0x1504574E: call 0x1508e640 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x15045753: add esp, 0xc */
    _flag_k = FK_ADD;
    /* test eax, eax */ /* 0x15045756: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_15045769; /* 0x15045758: je 0x15045769 */
L_1504575A:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1504575A: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, eax); /* 0x1504575C: push eax */
    PUSH32(esp, eax); /* 0x1504575D: push eax */
    PUSH32(esp, eax); /* 0x1504575E: push eax */
    PUSH32(esp, eax); /* 0x1504575F: push eax */
    PUSH32(esp, eax); /* 0x15045760: push eax */
    RECOMP_CALL(sub_1505A11B); /* 0x15045761: call 0x1505a11b */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x14u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x14u; /* 0x15045766: add esp, 0x14 */
    _flag_k = FK_ADD;
L_15045769:
    ecx = MEM32(edi); /* 0x15045769: mov ecx, dword ptr [edi] */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edi = edi + 4; /* 0x1504576B: add edi, 4 */
    _flag_k = FK_ADD;
    edx = ecx + 0x1; /* 0x1504576E: lea edx, [ecx + 1] */
L_15045771:
    SET_LO8(eax, MEM8(ecx)); /* 0x15045771: mov al, byte ptr [ecx] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx + 1; /* 0x15045773: inc ecx */
    _flag_k = FK_INC;
    /* test LO8(eax), LO8(eax) */ /* 0x15045774: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_15045771; /* 0x15045776: jne 0x15045771 */
L_15045778:
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ecx = ecx - edx; /* 0x15045778: sub ecx, edx */
    _flag_k = FK_CMP;
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esi = esi + ecx; /* 0x1504577A: add esi, ecx */
    _flag_k = FK_ADD;
    MEM8(esi) = (uint8_t)(0x20u); /* 0x1504577C: mov byte ptr [esi], 0x20 */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi + 1; /* 0x1504577F: inc esi */
    _flag_k = FK_INC;
    eax = MEM32(edi); /* 0x15045780: mov eax, dword ptr [edi] */
    /* test eax, eax */ /* 0x15045782: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_15045744; /* 0x15045784: jne 0x15045744 */
L_15045786:
    ebx = MEM32(ebp + (-0x34)); /* 0x15045786: mov ebx, dword ptr [ebp - 0x34] */
L_15045789:
    edi = MEM32(ebp + (-0x1C)); /* 0x15045789: mov edi, dword ptr [ebp - 0x1c] */
L_1504578C:
    /* cmp MEM32(ebp + (-0x28)), 0 */ /* 0x1504578C: cmp dword ptr [ebp - 0x28], 0 */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x28))); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    ecx = MEM32(ebp + (-0x14)); /* 0x15045790: mov ecx, dword ptr [ebp - 0x14] */
    MEM16(esi + (-0x1)) = (uint16_t)(0); /* 0x15045793: mov word ptr [esi - 1], 0 */
    esi = MEM32(ecx); /* 0x15045799: mov esi, dword ptr [ecx] */
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1504587B; /* 0x1504579B: je 0x1504587b */
L_150457A1:
    eax = ebx; /* 0x150457A1: mov eax, ebx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(ebp + (-0x18)));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - MEM32(ebp + (-0x18)); /* 0x150457A3: sub eax, dword ptr [ebp - 0x18] */
    _flag_k = FK_CMP;
    PUSH32(esp, eax); /* 0x150457A6: push eax */
    eax = MEM32(0x150BDAF4); /* 0x150457A7: mov eax, dword ptr [0x150bdaf4] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(ebp + (-0x18)));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + MEM32(ebp + (-0x18)); /* 0x150457AC: add eax, dword ptr [ebp - 0x18] */
    _flag_k = FK_ADD;
    PUSH32(esp, eax); /* 0x150457AF: push eax */
    PUSH32(esp, esi); /* 0x150457B0: push esi */
    RECOMP_CALL(sub_1508DBF0); /* 0x150457B1: call 0x1508dbf0 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(MEM32(ebp + (-0x18)));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ebx = ebx - MEM32(ebp + (-0x18)); /* 0x150457B6: sub ebx, dword ptr [ebp - 0x18] */
    _flag_k = FK_CMP;
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x150457B9: add esp, 0xc */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esi = esi + ebx; /* 0x150457BC: add esi, ebx */
    _flag_k = FK_ADD;
    ebx = MEM32(ebp + (-0x28)); /* 0x150457BE: mov ebx, dword ptr [ebp - 0x28] */
    eax = MEM32(ebx); /* 0x150457C1: mov eax, dword ptr [ebx] */
    /* test eax, eax */ /* 0x150457C3: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1504580C; /* 0x150457C5: je 0x1504580c */
L_150457C7:
    edi = MEM32(ebp + (-0x14)); /* 0x150457C7: mov edi, dword ptr [ebp - 0x14] */
L_150457CA:
    PUSH32(esp, eax); /* 0x150457CA: push eax */
    eax = MEM32(ebp + (-0x38)); /* 0x150457CB: mov eax, dword ptr [ebp - 0x38] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - esi; /* 0x150457CE: sub eax, esi */
    _flag_k = FK_CMP;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(edi));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + MEM32(edi); /* 0x150457D0: add eax, dword ptr [edi] */
    _flag_k = FK_ADD;
    PUSH32(esp, eax); /* 0x150457D2: push eax */
    PUSH32(esp, esi); /* 0x150457D3: push esi */
    RECOMP_CALL(sub_1508E640); /* 0x150457D4: call 0x1508e640 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x150457D9: add esp, 0xc */
    _flag_k = FK_ADD;
    /* test eax, eax */ /* 0x150457DC: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_150457EF; /* 0x150457DE: je 0x150457ef */
L_150457E0:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x150457E0: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, eax); /* 0x150457E2: push eax */
    PUSH32(esp, eax); /* 0x150457E3: push eax */
    PUSH32(esp, eax); /* 0x150457E4: push eax */
    PUSH32(esp, eax); /* 0x150457E5: push eax */
    PUSH32(esp, eax); /* 0x150457E6: push eax */
    RECOMP_CALL(sub_1505A11B); /* 0x150457E7: call 0x1505a11b */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x14u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x14u; /* 0x150457EC: add esp, 0x14 */
    _flag_k = FK_ADD;
L_150457EF:
    ecx = MEM32(ebx); /* 0x150457EF: mov ecx, dword ptr [ebx] */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ebx = ebx + 4; /* 0x150457F1: add ebx, 4 */
    _flag_k = FK_ADD;
    edx = ecx + 0x1; /* 0x150457F4: lea edx, [ecx + 1] */
L_150457F7:
    SET_LO8(eax, MEM8(ecx)); /* 0x150457F7: mov al, byte ptr [ecx] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx + 1; /* 0x150457F9: inc ecx */
    _flag_k = FK_INC;
    /* test LO8(eax), LO8(eax) */ /* 0x150457FA: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_150457F7; /* 0x150457FC: jne 0x150457f7 */
L_150457FE:
    eax = MEM32(ebx); /* 0x150457FE: mov eax, dword ptr [ebx] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ecx = ecx - edx; /* 0x15045800: sub ecx, edx */
    _flag_k = FK_CMP;
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi + 1; /* 0x15045802: inc esi */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esi = esi + ecx; /* 0x15045803: add esi, ecx */
    _flag_k = FK_ADD;
    /* test eax, eax */ /* 0x15045805: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_150457CA; /* 0x15045807: jne 0x150457ca */
L_15045809:
    edi = MEM32(ebp + (-0x1C)); /* 0x15045809: mov edi, dword ptr [ebp - 0x1c] */
L_1504580C:
    /* cmp MEM32(ebp + (-0x3C)), 0 */ /* 0x1504580C: cmp dword ptr [ebp - 0x3c], 0 */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x3C))); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_15045878; /* 0x15045810: jne 0x15045878 */
L_15045812:
    eax = ebp + (-0x10); /* 0x15045812: lea eax, [ebp - 0x10] */
    PUSH32(esp, eax); /* 0x15045815: push eax */
    PUSH32(esp, edi); /* 0x15045816: push edi */
    PUSH32(esp, esi); /* 0x15045817: push esi */
    RECOMP_CALL(sub_1508E640); /* 0x15045818: call 0x1508e640 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x1504581D: add esp, 0xc */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ebx = 0; /* 0x15045820: xor ebx, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
    /* test eax, eax */ /* 0x15045822: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_15045833; /* 0x15045824: je 0x15045833 */
L_15045826:
    PUSH32(esp, ebx); /* 0x15045826: push ebx */
    PUSH32(esp, ebx); /* 0x15045827: push ebx */
    PUSH32(esp, ebx); /* 0x15045828: push ebx */
    PUSH32(esp, ebx); /* 0x15045829: push ebx */
    PUSH32(esp, ebx); /* 0x1504582A: push ebx */
    RECOMP_CALL(sub_1505A11B); /* 0x1504582B: call 0x1505a11b */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x14u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x14u; /* 0x15045830: add esp, 0x14 */
    _flag_k = FK_ADD;
L_15045833:
    PUSH32(esp, 0x15004034u); /* 0x15045833: push 0x15004034 */
    PUSH32(esp, edi); /* 0x15045838: push edi */
    PUSH32(esp, esi); /* 0x15045839: push esi */
    RECOMP_CALL(sub_1508E450); /* 0x1504583A: call 0x1508e450 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x1504583F: add esp, 0xc */
    _flag_k = FK_ADD;
    /* test eax, eax */ /* 0x15045842: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_15045853; /* 0x15045844: je 0x15045853 */
L_15045846:
    PUSH32(esp, ebx); /* 0x15045846: push ebx */
    PUSH32(esp, ebx); /* 0x15045847: push ebx */
    PUSH32(esp, ebx); /* 0x15045848: push ebx */
    PUSH32(esp, ebx); /* 0x15045849: push ebx */
    PUSH32(esp, ebx); /* 0x1504584A: push ebx */
    RECOMP_CALL(sub_1505A11B); /* 0x1504584B: call 0x1505a11b */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x14u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x14u; /* 0x15045850: add esp, 0x14 */
    _flag_k = FK_ADD;
L_15045853:
    eax = MEM32(ebp + (-0x2C)); /* 0x15045853: mov eax, dword ptr [ebp - 0x2c] */
    /* test eax, eax */ /* 0x15045856: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_15045876; /* 0x15045858: je 0x15045876 */
L_1504585A:
    PUSH32(esp, eax); /* 0x1504585A: push eax */
    PUSH32(esp, edi); /* 0x1504585B: push edi */
    PUSH32(esp, esi); /* 0x1504585C: push esi */
    RECOMP_CALL(sub_1508E450); /* 0x1504585D: call 0x1508e450 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x15045862: add esp, 0xc */
    _flag_k = FK_ADD;
    /* test eax, eax */ /* 0x15045865: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_15045876; /* 0x15045867: je 0x15045876 */
L_15045869:
    PUSH32(esp, ebx); /* 0x15045869: push ebx */
    PUSH32(esp, ebx); /* 0x1504586A: push ebx */
    PUSH32(esp, ebx); /* 0x1504586B: push ebx */
    PUSH32(esp, ebx); /* 0x1504586C: push ebx */
    PUSH32(esp, ebx); /* 0x1504586D: push ebx */
    RECOMP_CALL(sub_1505A11B); /* 0x1504586E: call 0x1505a11b */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x14u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x14u; /* 0x15045873: add esp, 0x14 */
    _flag_k = FK_ADD;
L_15045876:
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esi = esi + edi; /* 0x15045876: add esi, edi */
    _flag_k = FK_ADD;
L_15045878:
    ecx = MEM32(ebp + (-0x14)); /* 0x15045878: mov ecx, dword ptr [ebp - 0x14] */
L_1504587B:
    /* test esi, esi */ /* 0x1504587B: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1504588A; /* 0x1504587D: je 0x1504588a */
L_1504587F:
    /* cmp esi, MEM32(ecx) */ /* 0x1504587F: cmp esi, dword ptr [ecx] */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(MEM32(ecx));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_15045887; /* 0x15045881: jne 0x15045887 */
L_15045883:
    MEM8(esi) = (uint8_t)(0); /* 0x15045883: mov byte ptr [esi], 0 */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi + 1; /* 0x15045886: inc esi */
    _flag_k = FK_INC;
L_15045887:
    MEM8(esi) = (uint8_t)(0); /* 0x15045887: mov byte ptr [esi], 0 */
L_1504588A:
    ebx = MEM32(ebp + (-0x24)); /* 0x1504588A: mov ebx, dword ptr [ebp - 0x24] */
L_1504588D:
    eax = MEM32(0x150BDAF4); /* 0x1504588D: mov eax, dword ptr [0x150bdaf4] */
    /* test eax, eax */ /* 0x15045892: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1504589D; /* 0x15045894: je 0x1504589d */
L_15045896:
    PUSH32(esp, eax); /* 0x15045896: push eax */
    RECOMP_CALL(sub_15048840); /* 0x15045897: call 0x15048840 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1504589C: pop ecx */
L_1504589D:
    _flag_a = (uint32_t)(MEM32(0x150BDAF4)); _flag_b = (uint32_t)(0);
    MEM32(0x150BDAF4) = MEM32(0x150BDAF4) & 0; /* 0x1504589D: and dword ptr [0x150bdaf4], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    eax = MEM32(ebp + (-0x2C)); /* 0x150458A4: mov eax, dword ptr [ebp - 0x2c] */
    /* test eax, eax */ /* 0x150458A7: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_150458B2; /* 0x150458A9: je 0x150458b2 */
L_150458AB:
    PUSH32(esp, eax); /* 0x150458AB: push eax */
    RECOMP_CALL(sub_15048840); /* 0x150458AC: call 0x15048840 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x150458B1: pop ecx */
L_150458B2:
    eax = ebx; /* 0x150458B2: mov eax, ebx */
L_150458B4:
    ecx = MEM32(ebp + (-0x4)); /* 0x150458B4: mov ecx, dword ptr [ebp - 4] */
    edi = POP32_VAL(esp); /* 0x150458B7: pop edi */
    esi = POP32_VAL(esp); /* 0x150458B8: pop esi */
    _flag_a = (uint32_t)((ecx ^ ebp)); _flag_b = (uint32_t)((ecx ^ ebp));
    ecx = ecx ^ ebp; /* 0x150458B9: xor ecx, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    ebx = POP32_VAL(esp); /* 0x150458BB: pop ebx */
    RECOMP_CALL(sub_1505E540); /* 0x150458BC: call 0x1505e540 */
    RECOMP_FLAGS_IN();
    esp = ebp; ebp = POP32_VAL(esp); /* 0x150458C1: leave  */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x150458C2: ret  */
    RECOMP_REGS_OUT();
}

void sub_150458C9(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x150458C9u);

L_150458C9:
    edi = edi; /* 0x150458C9: mov edi, edi */
    PUSH32(esp, ebp); /* 0x150458CB: push ebp */
    ebp = esp; /* 0x150458CC: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x6Cu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x6Cu; /* 0x150458CE: sub esp, 0x6c */
    _flag_k = FK_CMP;
    eax = MEM32(ebp + 0x8); /* 0x150458D1: mov eax, dword ptr [ebp + 8] */
    PUSH32(esp, ebx); /* 0x150458D4: push ebx */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ebx = 0; /* 0x150458D5: xor ebx, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x10)) = ebx; /* 0x150458D7: mov dword ptr [ebp - 0x10], ebx */
    MEM8(ebp + (-0x1)) = (uint8_t)(LO8(ebx)); /* 0x150458DA: mov byte ptr [ebp - 1], bl */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - ebx; /* 0x150458DD: sub eax, ebx */
    _flag_k = FK_CMP;
    if (/* sub result */ CMP_EQ(_flag_a, _flag_b)) goto L_15045920; /* 0x150458DF: je 0x15045920 */
L_150458E1:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - 1; /* 0x150458E1: sub eax, 1 */
    _flag_k = FK_CMP;
    if (/* sub result */ CMP_EQ(_flag_a, _flag_b)) goto L_15045920; /* 0x150458E4: je 0x15045920 */
L_150458E6:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - 1; /* 0x150458E6: sub eax, 1 */
    _flag_k = FK_CMP;
    if (/* sub result */ CMP_EQ(_flag_a, _flag_b)) goto L_15045920; /* 0x150458E9: je 0x15045920 */
L_150458EB:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - 1; /* 0x150458EB: sub eax, 1 */
    _flag_k = FK_CMP;
    if (/* sub result */ CMP_EQ(_flag_a, _flag_b)) goto L_15045920; /* 0x150458EE: je 0x15045920 */
L_150458F0:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - 1; /* 0x150458F0: sub eax, 1 */
    _flag_k = FK_CMP;
    if (/* sub result */ CMP_EQ(_flag_a, _flag_b)) goto L_1504591C; /* 0x150458F3: je 0x1504591c */
L_150458F5:
    RECOMP_CALL(sub_150363E0); /* 0x150458F5: call 0x150363e0 */
    RECOMP_FLAGS_IN();
    MEM32(eax) = ebx; /* 0x150458FA: mov dword ptr [eax], ebx */
    RECOMP_CALL(sub_15036430); /* 0x150458FC: call 0x15036430 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, ebx); /* 0x15045901: push ebx */
    PUSH32(esp, ebx); /* 0x15045902: push ebx */
    PUSH32(esp, ebx); /* 0x15045903: push ebx */
    PUSH32(esp, ebx); /* 0x15045904: push ebx */
    PUSH32(esp, ebx); /* 0x15045905: push ebx */
    MEM32(eax) = 0x16u; /* 0x15045906: mov dword ptr [eax], 0x16 */
    RECOMP_CALL(sub_1505A110); /* 0x1504590C: call 0x1505a110 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x14u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x14u; /* 0x15045911: add esp, 0x14 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)((eax | 0xFFFFFFFFu)); _flag_b = (uint32_t)((eax | 0xFFFFFFFFu));
    eax = eax | 0xFFFFFFFFu; /* 0x15045914: or eax, 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_15045B8F; /* 0x15045917: jmp 0x15045b8f */
L_1504591C:
    MEM8(ebp + (-0x1)) = (uint8_t)(1); /* 0x1504591C: mov byte ptr [ebp - 1], 1 */
L_15045920:
    eax = MEM32(ebp + 0x10); /* 0x15045920: mov eax, dword ptr [ebp + 0x10] */
    MEM32(ebp + (-0x14)) = eax; /* 0x15045923: mov dword ptr [ebp - 0x14], eax */
    goto L_15045941; /* 0x15045926: jmp 0x15045941 */
L_15045928:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 2; /* 0x15045928: add eax, 2 */
    _flag_k = FK_ADD;
    ecx = eax; /* 0x1504592B: mov ecx, eax */
    /* cmp MEM16(eax), LO16(ebx) */ /* 0x1504592D: cmp word ptr [eax], bx */
    _flag_a = (uint32_t)(MEM16(eax)) << 16; _flag_b = (uint32_t)(LO16(ebx)) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    RECOMP_BACKEDGE();
    if (CMP_NE(_flag_a, _flag_b)) goto L_15045928; /* 0x15045930: jne 0x15045928 */
L_15045932:
    /* cmp MEM16(ecx + 0x2), LO16(ebx) */ /* 0x15045932: cmp word ptr [ecx + 2], bx */
    _flag_a = (uint32_t)(MEM16(ecx + 0x2)) << 16; _flag_b = (uint32_t)(LO16(ebx)) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_15045941; /* 0x15045936: je 0x15045941 */
L_15045938:
    PUSH32(esp, 0x20u); /* 0x15045938: push 0x20 */
    eax = POP32_VAL(esp); /* 0x1504593A: pop eax */
    MEM16(ecx) = (uint16_t)(LO16(eax)); /* 0x1504593B: mov word ptr [ecx], ax */
    eax = ecx + 0x2; /* 0x1504593E: lea eax, [ecx + 2] */
L_15045941:
    /* cmp MEM16(eax), LO16(ebx) */ /* 0x15045941: cmp word ptr [eax], bx */
    _flag_a = (uint32_t)(MEM16(eax)) << 16; _flag_b = (uint32_t)(LO16(ebx)) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    RECOMP_BACKEDGE();
    if (CMP_NE(_flag_a, _flag_b)) goto L_15045928; /* 0x15045944: jne 0x15045928 */
L_15045946:
    PUSH32(esp, esi); /* 0x15045946: push esi */
    PUSH32(esp, edi); /* 0x15045947: push edi */
    PUSH32(esp, 0x44u); /* 0x15045948: push 0x44 */
    esi = POP32_VAL(esp); /* 0x1504594A: pop esi */
    PUSH32(esp, esi); /* 0x1504594B: push esi */
    eax = ebp + (-0x6C); /* 0x1504594C: lea eax, [ebp - 0x6c] */
    PUSH32(esp, ebx); /* 0x1504594F: push ebx */
    PUSH32(esp, eax); /* 0x15045950: push eax */
    RECOMP_CALL(sub_1508E3D0); /* 0x15045951: call 0x1508e3d0 */
    RECOMP_FLAGS_IN();
    MEM32(ebp + (-0x6C)) = esi; /* 0x15045956: mov dword ptr [ebp - 0x6c], esi */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x15045959: add esp, 0xc */
    _flag_k = FK_ADD;
    esi = MEM32(0x150BEBAC); /* 0x1504595C: mov esi, dword ptr [0x150bebac] */
    /* test esi, esi */ /* 0x15045962: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1504598B; /* 0x15045964: je 0x1504598b */
L_15045966:
    edi = esi + (-0x1); /* 0x15045966: lea edi, [esi - 1] */
L_15045969:
    eax = edi; /* 0x15045969: mov eax, edi */
    edx = edi; /* 0x1504596B: mov edx, edi */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x1Fu);
    eax = eax & 0x1Fu; /* 0x1504596D: and eax, 0x1f */
    _cf = 0;
    _flag_k = FK_TEST;
    if (5u) _cf = (((edx) >> 4) & 1u); /* 0x15045970: sar edx, 5 */
    if (5u) { _flag_a = recomp_flags_pack(((uint32_t)((int32_t)edx >> 5u)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    edx = (uint32_t)((int32_t)edx >> 5u);
    ecx = (uint32_t)((int32_t)eax * (int32_t)0x24u); /* 0x15045973: imul ecx, eax, 0x24 */
    eax = MEM32(edx * 4 + 0x150BEBC0); /* 0x15045976: mov eax, dword ptr [edx*4 + 0x150bebc0] */
    /* cmp MEM8(eax + ecx + 0x4), LO8(ebx) */ /* 0x1504597D: cmp byte ptr [eax + ecx + 4], bl */
    _flag_a = (uint32_t)(MEM8(eax + ecx + 0x4)) << 24; _flag_b = (uint32_t)(LO8(ebx)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_15045989; /* 0x15045981: jne 0x15045989 */
L_15045983:
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(1);
    edi = edi - 1; /* 0x15045983: dec edi */
    _flag_k = FK_DEC;
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esi = esi - 1; /* 0x15045984: sub esi, 1 */
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (/* sub result */ CMP_NE(_flag_a, _flag_b)) goto L_15045969; /* 0x15045987: jne 0x15045969 */
L_15045989:
    /* test esi, esi */ /* 0x15045989: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
L_1504598B:
    if (recomp_cond_cf(_flag_k, _flag_a, _flag_b, CC_S, _cf)) goto L_15045B7F; /* 0x1504598B: js 0x15045b7f */
L_15045991:
    /* cmp esi, 0x3332u */ /* 0x15045991: cmp esi, 0x3332 */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(0x3332u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_AE(_flag_a, _flag_b)) goto L_15045B7F; /* 0x15045997: jae 0x15045b7f */
L_1504599D:
    eax = (uint32_t)((int32_t)esi * (int32_t)5); /* 0x1504599D: imul eax, esi, 5 */
    PUSH32(esp, 1); /* 0x150459A0: push 1 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 4; /* 0x150459A2: add eax, 4 */
    _flag_k = FK_ADD;
    MEM16(ebp + (-0x3A)) = (uint16_t)(LO16(eax)); /* 0x150459A5: mov word ptr [ebp - 0x3a], ax */
    eax = (uint32_t)LO16(eax); /* 0x150459A9: movzx eax, ax */
    PUSH32(esp, eax); /* 0x150459AC: push eax */
    RECOMP_CALL(sub_15048EE2); /* 0x150459AD: call 0x15048ee2 */
    RECOMP_FLAGS_IN();
    MEM32(ebp + (-0x38)) = eax; /* 0x150459B2: mov dword ptr [ebp - 0x38], eax */
    ecx = POP32_VAL(esp); /* 0x150459B5: pop ecx */
    ecx = POP32_VAL(esp); /* 0x150459B6: pop ecx */
    /* test eax, eax */ /* 0x150459B7: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_15045B7F; /* 0x150459B9: je 0x15045b7f */
L_150459BF:
    MEM32(eax) = esi; /* 0x150459BF: mov dword ptr [eax], esi */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edx = 0; /* 0x150459C1: xor edx, edx */
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = MEM32(ebp + (-0x38)); /* 0x150459C3: mov ecx, dword ptr [ebp - 0x38] */
    _flag_a = (uint32_t)((edi | 0xFFFFFFFFu)); _flag_b = (uint32_t)((edi | 0xFFFFFFFFu));
    edi = edi | 0xFFFFFFFFu; /* 0x150459C6: or edi, 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    eax = ecx + 0x4; /* 0x150459C9: lea eax, [ecx + 4] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + esi; /* 0x150459CC: add eax, esi */
    _flag_k = FK_ADD;
    ebx = ecx + 0x4; /* 0x150459CE: lea ebx, [ecx + 4] */
    MEM32(ebp + (-0x8)) = eax; /* 0x150459D1: mov dword ptr [ebp - 8], eax */
    /* test esi, esi */ /* 0x150459D4: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if ((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) == 0u || (((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_15045A13; /* 0x150459D6: jle 0x15045a13 */
L_150459D8:
    eax = edx; /* 0x150459D8: mov eax, edx */
    ecx = edx; /* 0x150459DA: mov ecx, edx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x1Fu);
    eax = eax & 0x1Fu; /* 0x150459DC: and eax, 0x1f */
    _cf = 0;
    _flag_k = FK_TEST;
    if (5u) _cf = (((ecx) >> 4) & 1u); /* 0x150459DF: shr ecx, 5 */
    if (5u) { _flag_a = recomp_flags_pack((ecx >> 5u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ecx = ecx >> 5u; /* 0x150459DF: shr ecx, 5 */
    eax = (uint32_t)((int32_t)eax * (int32_t)0x24u); /* 0x150459E2: imul eax, eax, 0x24 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(ecx * 4 + 0x150BEBC0));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + MEM32(ecx * 4 + 0x150BEBC0); /* 0x150459E5: add eax, dword ptr [ecx*4 + 0x150bebc0] */
    _flag_k = FK_ADD;
    SET_LO8(ecx, MEM8(eax + 0x4)); /* 0x150459EC: mov cl, byte ptr [eax + 4] */
    /* test LO8(ecx), 0x10u */ /* 0x150459EF: test cl, 0x10 */
    _flag_a = (uint32_t)(LO8(ecx)) << 24; _flag_b = (uint32_t)(0x10u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_150459FA; /* 0x150459F2: jne 0x150459fa */
L_150459F4:
    MEM8(ebx) = (uint8_t)(LO8(ecx)); /* 0x150459F4: mov byte ptr [ebx], cl */
    ecx = MEM32(eax); /* 0x150459F6: mov ecx, dword ptr [eax] */
    goto L_150459FF; /* 0x150459F8: jmp 0x150459ff */
L_150459FA:
    MEM8(ebx) = (uint8_t)(0); /* 0x150459FA: mov byte ptr [ebx], 0 */
    ecx = edi; /* 0x150459FD: mov ecx, edi */
L_150459FF:
    eax = MEM32(ebp + (-0x8)); /* 0x150459FF: mov eax, dword ptr [ebp - 8] */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(1);
    edx = edx + 1; /* 0x15045A02: inc edx */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(1);
    ebx = ebx + 1; /* 0x15045A03: inc ebx */
    _flag_k = FK_INC;
    MEM32(eax) = ecx; /* 0x15045A04: mov dword ptr [eax], ecx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 4; /* 0x15045A06: add eax, 4 */
    _flag_k = FK_ADD;
    MEM32(ebp + (-0x8)) = eax; /* 0x15045A09: mov dword ptr [ebp - 8], eax */
    /* cmp edx, esi */ /* 0x15045A0C: cmp edx, esi */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_L(_flag_a, _flag_b)) goto L_150459D8; /* 0x15045A0E: jl 0x150459d8 */
L_15045A10:
    ecx = MEM32(ebp + (-0x38)); /* 0x15045A10: mov ecx, dword ptr [ebp - 0x38] */
L_15045A13:
    /* cmp MEM8(ebp + (-0x1)), 0 */ /* 0x15045A13: cmp byte ptr [ebp - 1], 0 */
    _flag_a = (uint32_t)(MEM8(ebp + (-0x1))) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_15045AC5; /* 0x15045A17: je 0x15045ac5 */
L_15045A1D:
    edx = ecx + 0x4; /* 0x15045A1D: lea edx, [ecx + 4] */
    PUSH32(esp, 3); /* 0x15045A20: push 3 */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edx = edx + esi; /* 0x15045A22: add edx, esi */
    _flag_k = FK_ADD;
    eax = ecx + 0x4; /* 0x15045A24: lea eax, [ecx + 4] */
    ebx = POP32_VAL(esp); /* 0x15045A27: pop ebx */
    /* cmp esi, ebx */ /* 0x15045A28: cmp esi, ebx */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    MEM32(ebp + (-0x8)) = eax; /* 0x15045A2A: mov dword ptr [ebp - 8], eax */
    MEM32(ebp + (-0xC)) = edx; /* 0x15045A2D: mov dword ptr [ebp - 0xc], edx */
    if (CMP_L(_flag_a, _flag_b)) { ebx = esi; } /* 0x15045A30: cmovl ebx, esi */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x15045A33: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    /* test ebx, ebx */ /* 0x15045A35: test ebx, ebx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ebx);
    _cf = 0;
    _flag_k = FK_TEST;
    if ((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) == 0u || (((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_15045AC0; /* 0x15045A37: jle 0x15045ac0 */
L_15045A3D:
    /* cmp ebx, 4 */ /* 0x15045A3D: cmp ebx, 4 */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_B(_flag_a, _flag_b)) goto L_15045AB0; /* 0x15045A40: jb 0x15045ab0 */
L_15045A42:
    esi = eax + (-0x1); /* 0x15045A42: lea esi, [eax - 1] */
    eax = ebx + (-0x1); /* 0x15045A45: lea eax, [ebx - 1] */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esi = esi + ebx; /* 0x15045A48: add esi, ebx */
    _flag_k = FK_ADD;
    eax = edx + eax * 4; /* 0x15045A4A: lea eax, [edx + eax*4] */
    /* cmp MEM32(ebp + (-0x8)), eax */ /* 0x15045A4D: cmp dword ptr [ebp - 8], eax */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x8))); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_A(_flag_a, _flag_b)) goto L_15045A56; /* 0x15045A50: ja 0x15045a56 */
L_15045A52:
    /* cmp esi, edx */ /* 0x15045A52: cmp esi, edx */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_AE(_flag_a, _flag_b)) goto L_15045AAD; /* 0x15045A54: jae 0x15045aad */
L_15045A56:
    eax = ebx; /* 0x15045A56: mov eax, ebx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x80000003u);
    eax = eax & 0x80000003u; /* 0x15045A58: and eax, 0x80000003 */
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) == 0u)) goto L_15045A64; /* 0x15045A5D: jns 0x15045a64 */
L_15045A5F:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax - 1; /* 0x15045A5F: dec eax */
    _flag_k = FK_DEC;
    _flag_a = (uint32_t)((eax | 0xFFFFFFFCu)); _flag_b = (uint32_t)((eax | 0xFFFFFFFCu));
    eax = eax | 0xFFFFFFFCu; /* 0x15045A60: or eax, 0xfffffffc */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x15045A63: inc eax */
    _flag_k = FK_INC;
L_15045A64:
    edx = ebx; /* 0x15045A64: mov edx, ebx */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    edx = edx - eax; /* 0x15045A66: sub edx, eax */
    _flag_k = FK_CMP;
L_15045A68:
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 4; /* 0x15045A68: add ecx, 4 */
    _flag_k = FK_ADD;
    /* cmp ecx, edx */ /* 0x15045A6B: cmp ecx, edx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_L(_flag_a, _flag_b)) goto L_15045A68; /* 0x15045A6D: jl 0x15045a68 */
L_15045A6F:
    eax = edx + 0x3; /* 0x15045A6F: lea eax, [edx + 3] */
    MEM32(ebp + (-0x10)) = ecx; /* 0x15045A72: mov dword ptr [ebp - 0x10], ecx */
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFFu : 0; /* 0x15045A75: cdq  */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(3);
    edx = edx & 3; /* 0x15045A76: and edx, 3 */
    _cf = 0;
    _flag_k = FK_TEST;
    esi = edx + eax; /* 0x15045A79: lea esi, [edx + eax] */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(0xFFFFFFFCu);
    esi = esi & 0xFFFFFFFCu; /* 0x15045A7C: and esi, 0xfffffffc */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, esi); /* 0x15045A7F: push esi */
    PUSH32(esp, 0); /* 0x15045A80: push 0 */
    PUSH32(esp, MEM32(ebp + (-0x8))); /* 0x15045A82: push dword ptr [ebp - 8] */
    RECOMP_CALL(sub_1508E3D0); /* 0x15045A85: call 0x1508e3d0 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(MEM32(ebp + (-0x8))); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM32(ebp + (-0x8)) = MEM32(ebp + (-0x8)) + esi; /* 0x15045A8A: add dword ptr [ebp - 8], esi */
    _flag_k = FK_ADD;
    eax = edi; /* 0x15045A8D: mov eax, edi */
    edx = MEM32(ebp + (-0xC)); /* 0x15045A8F: mov edx, dword ptr [ebp - 0xc] */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x15045A92: add esp, 0xc */
    _flag_k = FK_ADD;
    if (2u) _cf = (((esi) >> 30) & 1u); /* 0x15045A95: shl esi, 2 */
    if (2u) { _flag_a = recomp_flags_pack((esi << 2u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    esi = esi << 2u; /* 0x15045A95: shl esi, 2 */
    edi = edx; /* 0x15045A98: mov edi, edx */
    ecx = esi; /* 0x15045A9A: mov ecx, esi */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edx = edx + esi; /* 0x15045A9C: add edx, esi */
    _flag_k = FK_ADD;
    if (2u) _cf = (((ecx) >> 1) & 1u); /* 0x15045A9E: shr ecx, 2 */
    if (2u) { _flag_a = recomp_flags_pack((ecx >> 2u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ecx = ecx >> 2u; /* 0x15045A9E: shr ecx, 2 */
    { uint32_t _n = ecx, _b = _n * 4u; /* 0x15045AA1: rep stosd dword ptr es:[edi], eax */ if (_df > 0) { MEMSET32((void*)ADDR(edi), eax, _n); edi += _b; } else { MEMSET32((void*)ADDR(edi - _b + 4u), eax, _n); edi -= _b; } ecx = 0; }
    ecx = MEM32(ebp + (-0x10)); /* 0x15045AA3: mov ecx, dword ptr [ebp - 0x10] */
    _flag_a = (uint32_t)((edi | 0xFFFFFFFFu)); _flag_b = (uint32_t)((edi | 0xFFFFFFFFu));
    edi = edi | 0xFFFFFFFFu; /* 0x15045AA6: or edi, 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp ecx, ebx */ /* 0x15045AA9: cmp ecx, ebx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_GE(_flag_a, _flag_b)) goto L_15045AC0; /* 0x15045AAB: jge 0x15045ac0 */
L_15045AAD:
    eax = MEM32(ebp + (-0x8)); /* 0x15045AAD: mov eax, dword ptr [ebp - 8] */
L_15045AB0:
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ebx = ebx - ecx; /* 0x15045AB0: sub ebx, ecx */
    _flag_k = FK_CMP;
L_15045AB2:
    MEM8(eax) = (uint8_t)(0); /* 0x15045AB2: mov byte ptr [eax], 0 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x15045AB5: inc eax */
    _flag_k = FK_INC;
    MEM32(edx) = edi; /* 0x15045AB6: mov dword ptr [edx], edi */
    edx = edx + 0x4; /* 0x15045AB8: lea edx, [edx + 4] */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(1);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ebx = ebx - 1; /* 0x15045ABB: sub ebx, 1 */
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (/* sub result */ CMP_NE(_flag_a, _flag_b)) goto L_15045AB2; /* 0x15045ABE: jne 0x15045ab2 */
L_15045AC0:
    PUSH32(esp, 8); /* 0x15045AC0: push 8 */
    ebx = POP32_VAL(esp); /* 0x15045AC2: pop ebx */
    goto L_15045AC8; /* 0x15045AC3: jmp 0x15045ac8 */
L_15045AC5:
    ebx = MEM32(ebp + (-0x10)); /* 0x15045AC5: mov ebx, dword ptr [ebp - 0x10] */
L_15045AC8:
    RECOMP_CALL(sub_150363E0); /* 0x15045AC8: call 0x150363e0 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x15045ACD: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)((ebx | 0x400u)); _flag_b = (uint32_t)((ebx | 0x400u));
    ebx = ebx | 0x400u; /* 0x15045ACF: or ebx, 0x400 */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(eax) = ecx; /* 0x15045AD5: mov dword ptr [eax], ecx */
    eax = ebp + (-0x28); /* 0x15045AD7: lea eax, [ebp - 0x28] */
    PUSH32(esp, eax); /* 0x15045ADA: push eax */
    eax = ebp + (-0x6C); /* 0x15045ADB: lea eax, [ebp - 0x6c] */
    PUSH32(esp, eax); /* 0x15045ADE: push eax */
    PUSH32(esp, ecx); /* 0x15045ADF: push ecx */
    PUSH32(esp, MEM32(ebp + 0x14)); /* 0x15045AE0: push dword ptr [ebp + 0x14] */
    PUSH32(esp, ebx); /* 0x15045AE3: push ebx */
    PUSH32(esp, 1); /* 0x15045AE4: push 1 */
    PUSH32(esp, ecx); /* 0x15045AE6: push ecx */
    PUSH32(esp, ecx); /* 0x15045AE7: push ecx */
    PUSH32(esp, MEM32(ebp + (-0x14))); /* 0x15045AE8: push dword ptr [ebp - 0x14] */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x15045AEB: push dword ptr [ebp + 0xc] */
    RECOMP_ICALL(MEM32(0x150C0208)); /* 0x15045AEE: call dword ptr [0x150c0208] */
    RECOMP_FLAGS_IN();
    esi = eax; /* 0x15045AF4: mov esi, eax */
    RECOMP_ICALL(MEM32(0x150C006C)); /* 0x15045AF6: call dword ptr [0x150c006c] */
    RECOMP_FLAGS_IN();
    PUSH32(esp, MEM32(ebp + (-0x38))); /* 0x15045AFC: push dword ptr [ebp - 0x38] */
    ebx = eax; /* 0x15045AFF: mov ebx, eax */
    RECOMP_CALL(sub_15048840); /* 0x15045B01: call 0x15048840 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x15045B06: pop ecx */
    /* test esi, esi */ /* 0x15045B07: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_15045B16; /* 0x15045B09: jne 0x15045b16 */
L_15045B0B:
    PUSH32(esp, ebx); /* 0x15045B0B: push ebx */
    RECOMP_CALL(sub_150363FB); /* 0x15045B0C: call 0x150363fb */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x15045B11: pop ecx */
    eax = edi; /* 0x15045B12: mov eax, edi */
    goto L_15045B8D; /* 0x15045B14: jmp 0x15045b8d */
L_15045B16:
    eax = MEM32(ebp + 0x8); /* 0x15045B16: mov eax, dword ptr [ebp + 8] */
    /* cmp eax, 2 */ /* 0x15045B19: cmp eax, 2 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_15045B92; /* 0x15045B1C: je 0x15045b92 */
L_15045B1E:
    /* test eax, eax */ /* 0x15045B1E: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_15045B5D; /* 0x15045B20: jne 0x15045b5d */
L_15045B22:
    PUSH32(esp, edi); /* 0x15045B22: push edi */
    PUSH32(esp, MEM32(ebp + (-0x28))); /* 0x15045B23: push dword ptr [ebp - 0x28] */
    RECOMP_ICALL(MEM32(0x150C025C)); /* 0x15045B26: call dword ptr [0x150c025c] */
    RECOMP_FLAGS_IN();
    eax = ebp + (-0x18); /* 0x15045B2C: lea eax, [ebp - 0x18] */
    PUSH32(esp, eax); /* 0x15045B2F: push eax */
    PUSH32(esp, MEM32(ebp + (-0x28))); /* 0x15045B30: push dword ptr [ebp - 0x28] */
    RECOMP_ICALL(MEM32(0x150C0200)); /* 0x15045B33: call dword ptr [0x150c0200] */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x15045B39: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_15045B42; /* 0x15045B3B: je 0x15045b42 */
L_15045B3D:
    esi = MEM32(ebp + (-0x18)); /* 0x15045B3D: mov esi, dword ptr [ebp - 0x18] */
    goto L_15045B52; /* 0x15045B40: jmp 0x15045b52 */
L_15045B42:
    RECOMP_ICALL(MEM32(0x150C006C)); /* 0x15045B42: call dword ptr [0x150c006c] */
    RECOMP_FLAGS_IN();
    PUSH32(esp, eax); /* 0x15045B48: push eax */
    RECOMP_CALL(sub_150363FB); /* 0x15045B49: call 0x150363fb */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x15045B4E: pop ecx */
    _flag_a = (uint32_t)((esi | 0xFFFFFFFFu)); _flag_b = (uint32_t)((esi | 0xFFFFFFFFu));
    esi = esi | 0xFFFFFFFFu; /* 0x15045B4F: or esi, 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
L_15045B52:
    PUSH32(esp, MEM32(ebp + (-0x28))); /* 0x15045B52: push dword ptr [ebp - 0x28] */
    RECOMP_ICALL(MEM32(0x150C0124)); /* 0x15045B55: call dword ptr [0x150c0124] */
    RECOMP_FLAGS_IN();
    goto L_15045B72; /* 0x15045B5B: jmp 0x15045b72 */
L_15045B5D:
    /* cmp eax, 4 */ /* 0x15045B5D: cmp eax, 4 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_15045B6F; /* 0x15045B60: jne 0x15045b6f */
L_15045B62:
    PUSH32(esp, MEM32(ebp + (-0x28))); /* 0x15045B62: push dword ptr [ebp - 0x28] */
    RECOMP_ICALL(MEM32(0x150C0124)); /* 0x15045B65: call dword ptr [0x150c0124] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    esi = 0; /* 0x15045B6B: xor esi, esi */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_15045B72; /* 0x15045B6D: jmp 0x15045b72 */
L_15045B6F:
    esi = MEM32(ebp + (-0x28)); /* 0x15045B6F: mov esi, dword ptr [ebp - 0x28] */
L_15045B72:
    PUSH32(esp, MEM32(ebp + (-0x24))); /* 0x15045B72: push dword ptr [ebp - 0x24] */
    RECOMP_ICALL(MEM32(0x150C0124)); /* 0x15045B75: call dword ptr [0x150c0124] */
    RECOMP_FLAGS_IN();
    eax = esi; /* 0x15045B7B: mov eax, esi */
    goto L_15045B8D; /* 0x15045B7D: jmp 0x15045b8d */
L_15045B7F:
    RECOMP_CALL(sub_15036430); /* 0x15045B7F: call 0x15036430 */
    RECOMP_FLAGS_IN();
    MEM32(eax) = 0xCu; /* 0x15045B84: mov dword ptr [eax], 0xc */
    _flag_a = (uint32_t)((eax | 0xFFFFFFFFu)); _flag_b = (uint32_t)((eax | 0xFFFFFFFFu));
    eax = eax | 0xFFFFFFFFu; /* 0x15045B8A: or eax, 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
L_15045B8D:
    edi = POP32_VAL(esp); /* 0x15045B8D: pop edi */
    esi = POP32_VAL(esp); /* 0x15045B8E: pop esi */
L_15045B8F:
    ebx = POP32_VAL(esp); /* 0x15045B8F: pop ebx */
    esp = ebp; ebp = POP32_VAL(esp); /* 0x15045B90: leave  */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x15045B91: ret  */
L_15045B92:
    PUSH32(esp, 0); /* 0x15045B92: push 0 */
    RECOMP_CALL(sub_15067FB0); /* 0x15045B94: call 0x15067fb0 */
    RECOMP_FLAGS_IN();
    void_lift_trap(0x15045B99u, "int3 ");
    { RECOMP_REGS_OUT(); return; } /* end of function */
    RECOMP_REGS_OUT();
}

void sub_15045BA0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x15045BA0u);

L_15045BA0:
    edi = edi; /* 0x15045BA0: mov edi, edi */
    PUSH32(esp, ebp); /* 0x15045BA2: push ebp */
    ebp = esp; /* 0x15045BA3: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x50u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x50u; /* 0x15045BA5: sub esp, 0x50 */
    _flag_k = FK_CMP;
    eax = MEM32(0x150BD340); /* 0x15045BA8: mov eax, dword ptr [0x150bd340] */
    _flag_a = (uint32_t)((eax ^ ebp)); _flag_b = (uint32_t)((eax ^ ebp));
    eax = eax ^ ebp; /* 0x15045BAD: xor eax, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x4)) = eax; /* 0x15045BAF: mov dword ptr [ebp - 4], eax */
    PUSH32(esp, ebx); /* 0x15045BB2: push ebx */
    PUSH32(esp, esi); /* 0x15045BB3: push esi */
    eax = MEM32(ebp + 0x8); /* 0x15045BB4: mov eax, dword ptr [ebp + 8] */
    esi = 0x15004960u; /* 0x15045BB7: mov esi, 0x15004960 */
    PUSH32(esp, edi); /* 0x15045BBC: push edi */
    edx = MEM32(ebp + 0xC); /* 0x15045BBD: mov edx, dword ptr [ebp + 0xc] */
    edi = ebp + (-0x1C); /* 0x15045BC0: lea edi, [ebp - 0x1c] */
    PUSH32(esp, 5); /* 0x15045BC3: push 5 */
    ecx = POP32_VAL(esp); /* 0x15045BC5: pop ecx */
    while (ecx) { MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; --ecx; } /* 0x15045BC6: rep movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(ebp + (-0x50)) = eax; /* 0x15045BC8: mov dword ptr [ebp - 0x50], eax */
    eax = MEM32(ebp + 0x10); /* 0x15045BCB: mov eax, dword ptr [ebp + 0x10] */
    MEM32(ebp + (-0x2C)) = eax; /* 0x15045BCE: mov dword ptr [ebp - 0x2c], eax */
    eax = MEM32(ebp + 0x14); /* 0x15045BD1: mov eax, dword ptr [ebp + 0x14] */
    MEM32(ebp + (-0x20)) = eax; /* 0x15045BD4: mov dword ptr [ebp - 0x20], eax */
    eax = MEM32(ebp + (-0x50)); /* 0x15045BD7: mov eax, dword ptr [ebp - 0x50] */
    MEM32(ebp + (-0x44)) = edx; /* 0x15045BDA: mov dword ptr [ebp - 0x44], edx */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edx = 0; /* 0x15045BDD: xor edx, edx */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM16(edi) = MEM16(esi); esi += _df * 2; edi += _df * 2; /* 0x15045BDF: movsw word ptr es:[edi], word ptr [esi] */
    ebx = edx; /* 0x15045BE1: mov ebx, edx */
    PUSH32(esp, 2); /* 0x15045BE3: push 2 */
    ecx = MEM32(eax); /* 0x15045BE5: mov ecx, dword ptr [eax] */
    MEM32(ebp + (-0x24)) = edx; /* 0x15045BE7: mov dword ptr [ebp - 0x24], edx */
    MEM32(ebp + (-0x28)) = edx; /* 0x15045BEA: mov dword ptr [ebp - 0x28], edx */
    MEM32(ebp + (-0x34)) = edx; /* 0x15045BED: mov dword ptr [ebp - 0x34], edx */
    MEM32(ebp + (-0x30)) = edx; /* 0x15045BF0: mov dword ptr [ebp - 0x30], edx */
    MEM32(ebp + (-0x3C)) = edx; /* 0x15045BF3: mov dword ptr [ebp - 0x3c], edx */
    MEM32(ebp + (-0x48)) = edx; /* 0x15045BF6: mov dword ptr [ebp - 0x48], edx */
    edx = eax; /* 0x15045BF9: mov edx, eax */
    MEM32(ebp + (-0x38)) = ebx; /* 0x15045BFB: mov dword ptr [ebp - 0x38], ebx */
    edi = POP32_VAL(esp); /* 0x15045BFE: pop edi */
    MEM32(ebp + (-0x40)) = edi; /* 0x15045BFF: mov dword ptr [ebp - 0x40], edi */
    /* test ecx, ecx */ /* 0x15045C02: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_15045C28; /* 0x15045C04: je 0x15045c28 */
L_15045C06:
    edx = edx + 0x4; /* 0x15045C06: lea edx, [edx + 4] */
    esi = ecx + 0x2; /* 0x15045C09: lea esi, [ecx + 2] */
L_15045C0C:
    SET_LO16(eax, MEM16(ecx)); /* 0x15045C0C: mov ax, word ptr [ecx] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 2; /* 0x15045C0F: add ecx, 2 */
    _flag_k = FK_ADD;
    /* cmp LO16(eax), MEM16(ebp + (-0x24)) */ /* 0x15045C12: cmp ax, word ptr [ebp - 0x24] */
    _flag_a = (uint32_t)(LO16(eax)) << 16; _flag_b = (uint32_t)(MEM16(ebp + (-0x24))) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    RECOMP_BACKEDGE();
    if (CMP_NE(_flag_a, _flag_b)) goto L_15045C0C; /* 0x15045C16: jne 0x15045c0c */
L_15045C18:
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ecx = ecx - esi; /* 0x15045C18: sub ecx, esi */
    _flag_k = FK_CMP;
    if (1u) _cf = (((ecx) >> 0) & 1u); /* 0x15045C1A: sar ecx, 1 */
    if (1u) { _flag_a = recomp_flags_pack(((uint32_t)((int32_t)ecx >> 1u)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ecx = (uint32_t)((int32_t)ecx >> 1u);
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx + 1; /* 0x15045C1C: inc ecx */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edi = edi + ecx; /* 0x15045C1D: add edi, ecx */
    _flag_k = FK_ADD;
    ecx = MEM32(edx); /* 0x15045C1F: mov ecx, dword ptr [edx] */
    /* test ecx, ecx */ /* 0x15045C21: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_15045C06; /* 0x15045C23: jne 0x15045c06 */
L_15045C25:
    MEM32(ebp + (-0x40)) = edi; /* 0x15045C25: mov dword ptr [ebp - 0x40], edi */
L_15045C28:
    PUSH32(esp, 2); /* 0x15045C28: push 2 */
    PUSH32(esp, edi); /* 0x15045C2A: push edi */
    RECOMP_CALL(sub_15048EE2); /* 0x15045C2B: call 0x15048ee2 */
    RECOMP_FLAGS_IN();
    esi = MEM32(ebp + (-0x2C)); /* 0x15045C30: mov esi, dword ptr [ebp - 0x2c] */
    ecx = POP32_VAL(esp); /* 0x15045C33: pop ecx */
    ecx = POP32_VAL(esp); /* 0x15045C34: pop ecx */
    MEM32(esi) = eax; /* 0x15045C35: mov dword ptr [esi], eax */
    /* test eax, eax */ /* 0x15045C37: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_15045C5E; /* 0x15045C39: jne 0x15045c5e */
L_15045C3B:
    ecx = MEM32(ebp + (-0x20)); /* 0x15045C3B: mov ecx, dword ptr [ebp - 0x20] */
    MEM32(ecx) = eax; /* 0x15045C3E: mov dword ptr [ecx], eax */
    RECOMP_CALL(sub_15036430); /* 0x15045C40: call 0x15036430 */
    RECOMP_FLAGS_IN();
    MEM32(eax) = 0xCu; /* 0x15045C45: mov dword ptr [eax], 0xc */
    RECOMP_CALL(sub_150363E0); /* 0x15045C4B: call 0x150363e0 */
    RECOMP_FLAGS_IN();
    MEM32(eax) = 8; /* 0x15045C50: mov dword ptr [eax], 8 */
    _flag_a = (uint32_t)((eax | 0xFFFFFFFFu)); _flag_b = (uint32_t)((eax | 0xFFFFFFFFu));
    eax = eax | 0xFFFFFFFFu; /* 0x15045C56: or eax, 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_15046075; /* 0x15045C59: jmp 0x15046075 */
L_15045C5E:
    eax = ebp + (-0x1C); /* 0x15045C5E: lea eax, [ebp - 0x1c] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edi = 0; /* 0x15045C61: xor edi, edi */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, eax); /* 0x15045C63: push eax */
    eax = ebp + (-0x3C); /* 0x15045C64: lea eax, [ebp - 0x3c] */
    PUSH32(esp, edi); /* 0x15045C67: push edi */
    PUSH32(esp, eax); /* 0x15045C68: push eax */
    RECOMP_CALL(sub_1505BF8C); /* 0x15045C69: call 0x1505bf8c */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x15045C6E: add esp, 0xc */
    _flag_k = FK_ADD;
    /* test eax, eax */ /* 0x15045C71: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_15045C95; /* 0x15045C73: je 0x15045c95 */
L_15045C75:
    /* cmp eax, 0x16u */ /* 0x15045C75: cmp eax, 0x16 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x16u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_15045C89; /* 0x15045C78: jne 0x15045c89 */
L_15045C7A:
    PUSH32(esp, edi); /* 0x15045C7A: push edi */
    PUSH32(esp, edi); /* 0x15045C7B: push edi */
    PUSH32(esp, edi); /* 0x15045C7C: push edi */
    PUSH32(esp, edi); /* 0x15045C7D: push edi */
    PUSH32(esp, edi); /* 0x15045C7E: push edi */
    RECOMP_CALL(sub_1505A11B); /* 0x15045C7F: call 0x1505a11b */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x14u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x14u; /* 0x15045C84: add esp, 0x14 */
    _flag_k = FK_ADD;
    goto L_15045C8D; /* 0x15045C87: jmp 0x15045c8d */
L_15045C89:
    /* test eax, eax */ /* 0x15045C89: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_15045C95; /* 0x15045C8B: je 0x15045c95 */
L_15045C8D:
    _flag_a = (uint32_t)((eax | 0xFFFFFFFFu)); _flag_b = (uint32_t)((eax | 0xFFFFFFFFu));
    eax = eax | 0xFFFFFFFFu; /* 0x15045C8D: or eax, 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_15045D2E; /* 0x15045C90: jmp 0x15045d2e */
L_15045C95:
    ecx = ebp + (-0x1C); /* 0x15045C95: lea ecx, [ebp - 0x1c] */
    edx = ecx + 0x2; /* 0x15045C98: lea edx, [ecx + 2] */
L_15045C9B:
    SET_LO16(eax, MEM16(ecx)); /* 0x15045C9B: mov ax, word ptr [ecx] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 2; /* 0x15045C9E: add ecx, 2 */
    _flag_k = FK_ADD;
    /* cmp LO16(eax), LO16(edi) */ /* 0x15045CA1: cmp ax, di */
    _flag_a = (uint32_t)(LO16(eax)) << 16; _flag_b = (uint32_t)(LO16(edi)) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    RECOMP_BACKEDGE();
    if (CMP_NE(_flag_a, _flag_b)) goto L_15045C9B; /* 0x15045CA4: jne 0x15045c9b */
L_15045CA6:
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ecx = ecx - edx; /* 0x15045CA6: sub ecx, edx */
    _flag_k = FK_CMP;
    if (1u) _cf = (((ecx) >> 0) & 1u); /* 0x15045CA8: sar ecx, 1 */
    if (1u) { _flag_a = recomp_flags_pack(((uint32_t)((int32_t)ecx >> 1u)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ecx = (uint32_t)((int32_t)ecx >> 1u);
    edi = ecx + 0x2; /* 0x15045CAA: lea edi, [ecx + 2] */
    ecx = MEM32(ebp + (-0x3C)); /* 0x15045CAD: mov ecx, dword ptr [ebp - 0x3c] */
    MEM32(ebp + (-0x4C)) = edi; /* 0x15045CB0: mov dword ptr [ebp - 0x4c], edi */
    /* test ecx, ecx */ /* 0x15045CB3: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_15045CCF; /* 0x15045CB5: je 0x15045ccf */
L_15045CB7:
    edx = ecx + 0x2; /* 0x15045CB7: lea edx, [ecx + 2] */
L_15045CBA:
    SET_LO16(eax, MEM16(ecx)); /* 0x15045CBA: mov ax, word ptr [ecx] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 2; /* 0x15045CBD: add ecx, 2 */
    _flag_k = FK_ADD;
    /* cmp LO16(eax), MEM16(ebp + (-0x24)) */ /* 0x15045CC0: cmp ax, word ptr [ebp - 0x24] */
    _flag_a = (uint32_t)(LO16(eax)) << 16; _flag_b = (uint32_t)(MEM16(ebp + (-0x24))) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    RECOMP_BACKEDGE();
    if (CMP_NE(_flag_a, _flag_b)) goto L_15045CBA; /* 0x15045CC4: jne 0x15045cba */
L_15045CC6:
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ecx = ecx - edx; /* 0x15045CC6: sub ecx, edx */
    _flag_k = FK_CMP;
    if (1u) _cf = (((ecx) >> 0) & 1u); /* 0x15045CC8: sar ecx, 1 */
    if (1u) { _flag_a = recomp_flags_pack(((uint32_t)((int32_t)ecx >> 1u)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ecx = (uint32_t)((int32_t)ecx >> 1u);
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edi = edi + ecx; /* 0x15045CCA: add edi, ecx */
    _flag_k = FK_ADD;
    MEM32(ebp + (-0x4C)) = edi; /* 0x15045CCC: mov dword ptr [ebp - 0x4c], edi */
L_15045CCF:
    eax = MEM32(ebp + (-0x44)); /* 0x15045CCF: mov eax, dword ptr [ebp - 0x44] */
    /* test eax, eax */ /* 0x15045CD2: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_15045E77; /* 0x15045CD4: je 0x15045e77 */
L_15045CDA:
    ecx = MEM32(eax); /* 0x15045CDA: mov ecx, dword ptr [eax] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ebx = 0; /* 0x15045CDC: xor ebx, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
    edx = eax; /* 0x15045CDE: mov edx, eax */
    PUSH32(esp, 2); /* 0x15045CE0: push 2 */
    edi = POP32_VAL(esp); /* 0x15045CE2: pop edi */
    MEM32(ebp + (-0x28)) = edi; /* 0x15045CE3: mov dword ptr [ebp - 0x28], edi */
    /* test ecx, ecx */ /* 0x15045CE6: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_15045D0E; /* 0x15045CE8: je 0x15045d0e */
L_15045CEA:
    edx = edx + 0x4; /* 0x15045CEA: lea edx, [edx + 4] */
    esi = ecx + 0x2; /* 0x15045CED: lea esi, [ecx + 2] */
L_15045CF0:
    SET_LO16(eax, MEM16(ecx)); /* 0x15045CF0: mov ax, word ptr [ecx] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 2; /* 0x15045CF3: add ecx, 2 */
    _flag_k = FK_ADD;
    /* cmp LO16(eax), LO16(ebx) */ /* 0x15045CF6: cmp ax, bx */
    _flag_a = (uint32_t)(LO16(eax)) << 16; _flag_b = (uint32_t)(LO16(ebx)) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    RECOMP_BACKEDGE();
    if (CMP_NE(_flag_a, _flag_b)) goto L_15045CF0; /* 0x15045CF9: jne 0x15045cf0 */
L_15045CFB:
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ecx = ecx - esi; /* 0x15045CFB: sub ecx, esi */
    _flag_k = FK_CMP;
    if (1u) _cf = (((ecx) >> 0) & 1u); /* 0x15045CFD: sar ecx, 1 */
    if (1u) { _flag_a = recomp_flags_pack(((uint32_t)((int32_t)ecx >> 1u)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ecx = (uint32_t)((int32_t)ecx >> 1u);
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx + 1; /* 0x15045CFF: inc ecx */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edi = edi + ecx; /* 0x15045D00: add edi, ecx */
    _flag_k = FK_ADD;
    ecx = MEM32(edx); /* 0x15045D02: mov ecx, dword ptr [edx] */
    /* test ecx, ecx */ /* 0x15045D04: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_15045CEA; /* 0x15045D06: jne 0x15045cea */
L_15045D08:
    esi = MEM32(ebp + (-0x2C)); /* 0x15045D08: mov esi, dword ptr [ebp - 0x2c] */
    MEM32(ebp + (-0x28)) = edi; /* 0x15045D0B: mov dword ptr [ebp - 0x28], edi */
L_15045D0E:
    ecx = MEM32(0x150BDAF8); /* 0x15045D0E: mov ecx, dword ptr [0x150bdaf8] */
    /* test ecx, ecx */ /* 0x15045D14: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_15045D45; /* 0x15045D16: jne 0x15045d45 */
L_15045D18:
    RECOMP_CALL(sub_1505E873); /* 0x15045D18: call 0x1505e873 */
    RECOMP_FLAGS_IN();
    ecx = eax; /* 0x15045D1D: mov ecx, eax */
    MEM32(0x150BDAF8) = ecx; /* 0x15045D1F: mov dword ptr [0x150bdaf8], ecx */
    /* test ecx, ecx */ /* 0x15045D25: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_15045D45; /* 0x15045D27: jne 0x15045d45 */
L_15045D29:
    _flag_a = (uint32_t)((eax | 0xFFFFFFFFu)); _flag_b = (uint32_t)((eax | 0xFFFFFFFFu));
    eax = eax | 0xFFFFFFFFu; /* 0x15045D29: or eax, 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edi = 0; /* 0x15045D2C: xor edi, edi */
    _cf = 0;
    _flag_k = FK_TEST;
L_15045D2E:
    MEM32(ebp + (-0x34)) = eax; /* 0x15045D2E: mov dword ptr [ebp - 0x34], eax */
    PUSH32(esp, MEM32(esi)); /* 0x15045D31: push dword ptr [esi] */
    RECOMP_CALL(sub_15048840); /* 0x15045D33: call 0x15048840 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x15045D38: pop ecx */
    ecx = MEM32(ebp + (-0x20)); /* 0x15045D39: mov ecx, dword ptr [ebp - 0x20] */
    MEM32(esi) = edi; /* 0x15045D3C: mov dword ptr [esi], edi */
    MEM32(ecx) = edi; /* 0x15045D3E: mov dword ptr [ecx], edi */
    goto L_1504604C; /* 0x15045D40: jmp 0x1504604c */
L_15045D45:
    esi = ebx; /* 0x15045D45: mov esi, ebx */
    PUSH32(esp, 0x3Du); /* 0x15045D47: push 0x3d */
    edx = POP32_VAL(esp); /* 0x15045D49: pop edx */
    MEM32(ebp + (-0x30)) = esi; /* 0x15045D4A: mov dword ptr [ebp - 0x30], esi */
    MEM32(ebp + (-0x38)) = edx; /* 0x15045D4D: mov dword ptr [ebp - 0x38], edx */
    /* cmp MEM16(ecx), LO16(ebx) */ /* 0x15045D50: cmp word ptr [ecx], bx */
    _flag_a = (uint32_t)(MEM16(ecx)) << 16; _flag_b = (uint32_t)(LO16(ebx)) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_15045D89; /* 0x15045D53: je 0x15045d89 */
L_15045D55:
    edx = ecx; /* 0x15045D55: mov edx, ecx */
    eax = (uint32_t)MEM16(edx); /* 0x15045D57: movzx eax, word ptr [edx] */
L_15045D5A:
    /* cmp LO16(eax), MEM16(ebp + (-0x38)) */ /* 0x15045D5A: cmp ax, word ptr [ebp - 0x38] */
    _flag_a = (uint32_t)(LO16(eax)) << 16; _flag_b = (uint32_t)(MEM16(ebp + (-0x38))) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_15045D86; /* 0x15045D5E: je 0x15045d86 */
L_15045D60:
    esi = edx + 0x2; /* 0x15045D60: lea esi, [edx + 2] */
L_15045D63:
    SET_LO16(eax, MEM16(edx)); /* 0x15045D63: mov ax, word ptr [edx] */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edx = edx + 2; /* 0x15045D66: add edx, 2 */
    _flag_k = FK_ADD;
    /* cmp LO16(eax), LO16(ebx) */ /* 0x15045D69: cmp ax, bx */
    _flag_a = (uint32_t)(LO16(eax)) << 16; _flag_b = (uint32_t)(LO16(ebx)) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    RECOMP_BACKEDGE();
    if (CMP_NE(_flag_a, _flag_b)) goto L_15045D63; /* 0x15045D6C: jne 0x15045d63 */
L_15045D6E:
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    edx = edx - esi; /* 0x15045D6E: sub edx, esi */
    _flag_k = FK_CMP;
    esi = MEM32(ebp + (-0x30)); /* 0x15045D70: mov esi, dword ptr [ebp - 0x30] */
    if (1u) _cf = (((edx) >> 0) & 1u); /* 0x15045D73: sar edx, 1 */
    if (1u) { _flag_a = recomp_flags_pack(((uint32_t)((int32_t)edx >> 1u)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    edx = (uint32_t)((int32_t)edx >> 1u);
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi + 1; /* 0x15045D75: inc esi */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esi = esi + edx; /* 0x15045D76: add esi, edx */
    _flag_k = FK_ADD;
    MEM32(ebp + (-0x30)) = esi; /* 0x15045D78: mov dword ptr [ebp - 0x30], esi */
    edx = ecx + esi * 2; /* 0x15045D7B: lea edx, [ecx + esi*2] */
    eax = (uint32_t)MEM16(edx); /* 0x15045D7E: movzx eax, word ptr [edx] */
    /* test LO16(eax), LO16(eax) */ /* 0x15045D81: test ax, ax */
    _flag_a = (uint32_t)(LO16(eax)) << 16; _flag_b = (uint32_t)(LO16(eax)) << 16;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 16);
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_15045D5A; /* 0x15045D84: jne 0x15045d5a */
L_15045D86:
    PUSH32(esp, 0x3Du); /* 0x15045D86: push 0x3d */
    edx = POP32_VAL(esp); /* 0x15045D88: pop edx */
L_15045D89:
    eax = ecx + esi * 2; /* 0x15045D89: lea eax, [ecx + esi*2] */
    ebx = esi; /* 0x15045D8C: mov ebx, esi */
    MEM32(ebp + (-0x38)) = ebx; /* 0x15045D8E: mov dword ptr [ebp - 0x38], ebx */
    /* cmp MEM16(eax), LO16(edx) */ /* 0x15045D91: cmp word ptr [eax], dx */
    _flag_a = (uint32_t)(MEM16(eax)) << 16; _flag_b = (uint32_t)(LO16(edx)) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    if (CMP_NE(_flag_a, _flag_b)) goto L_15045DDE; /* 0x15045D94: jne 0x15045dde */
L_15045D96:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edi = 0; /* 0x15045D96: xor edi, edi */
    _cf = 0;
    _flag_k = FK_TEST;
L_15045D98:
    /* cmp MEM16(eax + 0x2), LO16(edi) */ /* 0x15045D98: cmp word ptr [eax + 2], di */
    _flag_a = (uint32_t)(MEM16(eax + 0x2)) << 16; _flag_b = (uint32_t)(LO16(edi)) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_15045DD5; /* 0x15045D9C: je 0x15045dd5 */
L_15045D9E:
    /* cmp MEM16(ecx + ebx * 2 + 0x4), 0x3Au */ /* 0x15045D9E: cmp word ptr [ecx + ebx*2 + 4], 0x3a */
    _flag_a = (uint32_t)(MEM16(ecx + ebx * 2 + 0x4)) << 16; _flag_b = (uint32_t)(0x3Au) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    if (CMP_NE(_flag_a, _flag_b)) goto L_15045DD5; /* 0x15045DA4: jne 0x15045dd5 */
L_15045DA6:
    /* cmp MEM16(ecx + ebx * 2 + 0x6), LO16(edx) */ /* 0x15045DA6: cmp word ptr [ecx + ebx*2 + 6], dx */
    _flag_a = (uint32_t)(MEM16(ecx + ebx * 2 + 0x6)) << 16; _flag_b = (uint32_t)(LO16(edx)) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    if (CMP_NE(_flag_a, _flag_b)) goto L_15045DD5; /* 0x15045DAB: jne 0x15045dd5 */
L_15045DAD:
    edx = ebx + 0x4; /* 0x15045DAD: lea edx, [ebx + 4] */
    edx = ecx + edx * 2; /* 0x15045DB0: lea edx, [ecx + edx*2] */
    esi = edx + 0x2; /* 0x15045DB3: lea esi, [edx + 2] */
L_15045DB6:
    SET_LO16(eax, MEM16(edx)); /* 0x15045DB6: mov ax, word ptr [edx] */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edx = edx + 2; /* 0x15045DB9: add edx, 2 */
    _flag_k = FK_ADD;
    /* cmp LO16(eax), LO16(edi) */ /* 0x15045DBC: cmp ax, di */
    _flag_a = (uint32_t)(LO16(eax)) << 16; _flag_b = (uint32_t)(LO16(edi)) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    RECOMP_BACKEDGE();
    if (CMP_NE(_flag_a, _flag_b)) goto L_15045DB6; /* 0x15045DBF: jne 0x15045db6 */
L_15045DC1:
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    edx = edx - esi; /* 0x15045DC1: sub edx, esi */
    _flag_k = FK_CMP;
    if (1u) _cf = (((edx) >> 0) & 1u); /* 0x15045DC3: sar edx, 1 */
    if (1u) { _flag_a = recomp_flags_pack(((uint32_t)((int32_t)edx >> 1u)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    edx = (uint32_t)((int32_t)edx >> 1u);
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(5);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edx = edx + 5; /* 0x15045DC5: add edx, 5 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ebx = ebx + edx; /* 0x15045DC8: add ebx, edx */
    _flag_k = FK_ADD;
    PUSH32(esp, 0x3Du); /* 0x15045DCA: push 0x3d */
    edx = POP32_VAL(esp); /* 0x15045DCC: pop edx */
    eax = ecx + ebx * 2; /* 0x15045DCD: lea eax, [ecx + ebx*2] */
    /* cmp MEM16(eax), LO16(edx) */ /* 0x15045DD0: cmp word ptr [eax], dx */
    _flag_a = (uint32_t)(MEM16(eax)) << 16; _flag_b = (uint32_t)(LO16(edx)) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    RECOMP_BACKEDGE();
    if (CMP_EQ(_flag_a, _flag_b)) goto L_15045D98; /* 0x15045DD3: je 0x15045d98 */
L_15045DD5:
    edi = MEM32(ebp + (-0x28)); /* 0x15045DD5: mov edi, dword ptr [ebp - 0x28] */
    esi = MEM32(ebp + (-0x30)); /* 0x15045DD8: mov esi, dword ptr [ebp - 0x30] */
    MEM32(ebp + (-0x38)) = ebx; /* 0x15045DDB: mov dword ptr [ebp - 0x38], ebx */
L_15045DDE:
    edx = MEM32(ebp + (-0x44)); /* 0x15045DDE: mov edx, dword ptr [ebp - 0x44] */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    edi = edi - esi; /* 0x15045DE1: sub edi, esi */
    _flag_k = FK_CMP;
    esi = edx; /* 0x15045DE3: mov esi, edx */
    edx = MEM32(edx); /* 0x15045DE5: mov edx, dword ptr [edx] */
    eax = edi + ebx; /* 0x15045DE7: lea eax, [edi + ebx] */
    MEM32(ebp + (-0x28)) = eax; /* 0x15045DEA: mov dword ptr [ebp - 0x28], eax */
    goto L_15045E1C; /* 0x15045DED: jmp 0x15045e1c */
L_15045DEF:
    ecx = ebp + (-0x1C); /* 0x15045DEF: lea ecx, [ebp - 0x1c] */
    edi = ecx + 0x2; /* 0x15045DF2: lea edi, [ecx + 2] */
L_15045DF5:
    SET_LO16(eax, MEM16(ecx)); /* 0x15045DF5: mov ax, word ptr [ecx] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 2; /* 0x15045DF8: add ecx, 2 */
    _flag_k = FK_ADD;
    /* cmp LO16(eax), MEM16(ebp + (-0x24)) */ /* 0x15045DFB: cmp ax, word ptr [ebp - 0x24] */
    _flag_a = (uint32_t)(LO16(eax)) << 16; _flag_b = (uint32_t)(MEM16(ebp + (-0x24))) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    RECOMP_BACKEDGE();
    if (CMP_NE(_flag_a, _flag_b)) goto L_15045DF5; /* 0x15045DFF: jne 0x15045df5 */
L_15045E01:
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ecx = ecx - edi; /* 0x15045E01: sub ecx, edi */
    _flag_k = FK_CMP;
    eax = ebp + (-0x1C); /* 0x15045E03: lea eax, [ebp - 0x1c] */
    if (1u) _cf = (((ecx) >> 0) & 1u); /* 0x15045E06: sar ecx, 1 */
    if (1u) { _flag_a = recomp_flags_pack(((uint32_t)((int32_t)ecx >> 1u)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ecx = (uint32_t)((int32_t)ecx >> 1u);
    PUSH32(esp, ecx); /* 0x15045E08: push ecx */
    PUSH32(esp, eax); /* 0x15045E09: push eax */
    PUSH32(esp, edx); /* 0x15045E0A: push edx */
    RECOMP_CALL(sub_1508D090); /* 0x15045E0B: call 0x1508d090 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x15045E10: add esp, 0xc */
    _flag_k = FK_ADD;
    /* test eax, eax */ /* 0x15045E13: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_15045E22; /* 0x15045E15: je 0x15045e22 */
L_15045E17:
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esi = esi + 4; /* 0x15045E17: add esi, 4 */
    _flag_k = FK_ADD;
    edx = MEM32(esi); /* 0x15045E1A: mov edx, dword ptr [esi] */
L_15045E1C:
    /* test edx, edx */ /* 0x15045E1C: test edx, edx */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(edx);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_15045DEF; /* 0x15045E1E: jne 0x15045def */
L_15045E20:
    goto L_15045E29; /* 0x15045E20: jmp 0x15045e29 */
L_15045E22:
    MEM32(ebp + (-0x48)) = 1; /* 0x15045E22: mov dword ptr [ebp - 0x48], 1 */
L_15045E29:
    eax = MEM32(ebp + (-0x4C)); /* 0x15045E29: mov eax, dword ptr [ebp - 0x4c] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(ebp + (-0x28)));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + MEM32(ebp + (-0x28)); /* 0x15045E2C: add eax, dword ptr [ebp - 0x28] */
    _flag_k = FK_ADD;
    /* cmp MEM32(ebp + (-0x48)), 0 */ /* 0x15045E2F: cmp dword ptr [ebp - 0x48], 0 */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x48))); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    PUSH32(esp, 2); /* 0x15045E33: push 2 */
    if (CMP_NE(_flag_a, _flag_b)) { eax = MEM32(ebp + (-0x28)); } /* 0x15045E35: cmovne eax, dword ptr [ebp - 0x28] */
    PUSH32(esp, eax); /* 0x15045E39: push eax */
    RECOMP_CALL(sub_15048EE2); /* 0x15045E3A: call 0x15048ee2 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x15045E3F: pop ecx */
    ecx = POP32_VAL(esp); /* 0x15045E40: pop ecx */
    ecx = MEM32(ebp + (-0x20)); /* 0x15045E41: mov ecx, dword ptr [ebp - 0x20] */
    MEM32(ecx) = eax; /* 0x15045E44: mov dword ptr [ecx], eax */
    /* test eax, eax */ /* 0x15045E46: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_15045E80; /* 0x15045E48: jne 0x15045e80 */
L_15045E4A:
    ebx = MEM32(ebp + (-0x2C)); /* 0x15045E4A: mov ebx, dword ptr [ebp - 0x2c] */
    PUSH32(esp, MEM32(ebx)); /* 0x15045E4D: push dword ptr [ebx] */
    RECOMP_CALL(sub_15048840); /* 0x15045E4F: call 0x15048840 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edi = 0; /* 0x15045E54: xor edi, edi */
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = POP32_VAL(esp); /* 0x15045E56: pop ecx */
    MEM32(ebx) = edi; /* 0x15045E57: mov dword ptr [ebx], edi */
    RECOMP_CALL(sub_15036430); /* 0x15045E59: call 0x15036430 */
    RECOMP_FLAGS_IN();
    MEM32(eax) = 0xCu; /* 0x15045E5E: mov dword ptr [eax], 0xc */
    RECOMP_CALL(sub_150363E0); /* 0x15045E64: call 0x150363e0 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)((ebx | 0xFFFFFFFFu)); _flag_b = (uint32_t)((ebx | 0xFFFFFFFFu));
    ebx = ebx | 0xFFFFFFFFu; /* 0x15045E69: or ebx, 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(eax) = 8; /* 0x15045E6C: mov dword ptr [eax], 8 */
    goto L_1504604F; /* 0x15045E72: jmp 0x1504604f */
L_15045E77:
    ecx = MEM32(ebp + (-0x20)); /* 0x15045E77: mov ecx, dword ptr [ebp - 0x20] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x15045E7A: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ecx) = eax; /* 0x15045E7C: mov dword ptr [ecx], eax */
    goto L_15045E83; /* 0x15045E7E: jmp 0x15045e83 */
L_15045E80:
    esi = MEM32(ebp + (-0x2C)); /* 0x15045E80: mov esi, dword ptr [ebp - 0x2c] */
L_15045E83:
    edi = MEM32(ebp + (-0x50)); /* 0x15045E83: mov edi, dword ptr [ebp - 0x50] */
    esi = MEM32(esi); /* 0x15045E86: mov esi, dword ptr [esi] */
    /* cmp MEM32(edi), 0 */ /* 0x15045E88: cmp dword ptr [edi], 0 */
    _flag_a = (uint32_t)(MEM32(edi)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_15045E95; /* 0x15045E8B: jne 0x15045e95 */
L_15045E8D:
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esi = esi + 2; /* 0x15045E8D: add esi, 2 */
    _flag_k = FK_ADD;
    goto L_15045F33; /* 0x15045E90: jmp 0x15045f33 */
L_15045E95:
    PUSH32(esp, MEM32(edi)); /* 0x15045E95: push dword ptr [edi] */
    PUSH32(esp, MEM32(ebp + (-0x40))); /* 0x15045E97: push dword ptr [ebp - 0x40] */
    PUSH32(esp, esi); /* 0x15045E9A: push esi */
    RECOMP_CALL(sub_1508F250); /* 0x15045E9B: call 0x1508f250 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x15045EA0: add esp, 0xc */
    _flag_k = FK_ADD;
    /* test eax, eax */ /* 0x15045EA3: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_15045EB6; /* 0x15045EA5: je 0x15045eb6 */
L_15045EA7:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x15045EA7: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, eax); /* 0x15045EA9: push eax */
    PUSH32(esp, eax); /* 0x15045EAA: push eax */
    PUSH32(esp, eax); /* 0x15045EAB: push eax */
    PUSH32(esp, eax); /* 0x15045EAC: push eax */
    PUSH32(esp, eax); /* 0x15045EAD: push eax */
    RECOMP_CALL(sub_1505A11B); /* 0x15045EAE: call 0x1505a11b */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x14u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x14u; /* 0x15045EB3: add esp, 0x14 */
    _flag_k = FK_ADD;
L_15045EB6:
    ecx = MEM32(edi); /* 0x15045EB6: mov ecx, dword ptr [edi] */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edi = edi + 4; /* 0x15045EB8: add edi, 4 */
    _flag_k = FK_ADD;
    edx = ecx + 0x2; /* 0x15045EBB: lea edx, [ecx + 2] */
L_15045EBE:
    SET_LO16(eax, MEM16(ecx)); /* 0x15045EBE: mov ax, word ptr [ecx] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 2; /* 0x15045EC1: add ecx, 2 */
    _flag_k = FK_ADD;
    /* cmp LO16(eax), MEM16(ebp + (-0x24)) */ /* 0x15045EC4: cmp ax, word ptr [ebp - 0x24] */
    _flag_a = (uint32_t)(LO16(eax)) << 16; _flag_b = (uint32_t)(MEM16(ebp + (-0x24))) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    RECOMP_BACKEDGE();
    if (CMP_NE(_flag_a, _flag_b)) goto L_15045EBE; /* 0x15045EC8: jne 0x15045ebe */
L_15045ECA:
    eax = MEM32(edi); /* 0x15045ECA: mov eax, dword ptr [edi] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ecx = ecx - edx; /* 0x15045ECC: sub ecx, edx */
    _flag_k = FK_CMP;
    if (1u) _cf = (((ecx) >> 0) & 1u); /* 0x15045ECE: sar ecx, 1 */
    if (1u) { _flag_a = recomp_flags_pack(((uint32_t)((int32_t)ecx >> 1u)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ecx = (uint32_t)((int32_t)ecx >> 1u);
    esi = esi + ecx * 2; /* 0x15045ED0: lea esi, [esi + ecx*2] */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esi = esi + 2; /* 0x15045ED3: add esi, 2 */
    _flag_k = FK_ADD;
    /* test eax, eax */ /* 0x15045ED6: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_15045F33; /* 0x15045ED8: je 0x15045f33 */
L_15045EDA:
    ebx = MEM32(ebp + (-0x2C)); /* 0x15045EDA: mov ebx, dword ptr [ebp - 0x2c] */
L_15045EDD:
    PUSH32(esp, eax); /* 0x15045EDD: push eax */
    eax = MEM32(ebp + (-0x40)); /* 0x15045EDE: mov eax, dword ptr [ebp - 0x40] */
    ecx = esi; /* 0x15045EE1: mov ecx, esi */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(MEM32(ebx));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ecx = ecx - MEM32(ebx); /* 0x15045EE3: sub ecx, dword ptr [ebx] */
    _flag_k = FK_CMP;
    if (1u) _cf = (((ecx) >> 0) & 1u); /* 0x15045EE5: sar ecx, 1 */
    if (1u) { _flag_a = recomp_flags_pack(((uint32_t)((int32_t)ecx >> 1u)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ecx = (uint32_t)((int32_t)ecx >> 1u);
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - ecx; /* 0x15045EE7: sub eax, ecx */
    _flag_k = FK_CMP;
    PUSH32(esp, eax); /* 0x15045EE9: push eax */
    PUSH32(esp, esi); /* 0x15045EEA: push esi */
    RECOMP_CALL(sub_1508F250); /* 0x15045EEB: call 0x1508f250 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x15045EF0: add esp, 0xc */
    _flag_k = FK_ADD;
    /* test eax, eax */ /* 0x15045EF3: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_15045F06; /* 0x15045EF5: je 0x15045f06 */
L_15045EF7:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x15045EF7: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, eax); /* 0x15045EF9: push eax */
    PUSH32(esp, eax); /* 0x15045EFA: push eax */
    PUSH32(esp, eax); /* 0x15045EFB: push eax */
    PUSH32(esp, eax); /* 0x15045EFC: push eax */
    PUSH32(esp, eax); /* 0x15045EFD: push eax */
    RECOMP_CALL(sub_1505A11B); /* 0x15045EFE: call 0x1505a11b */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x14u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x14u; /* 0x15045F03: add esp, 0x14 */
    _flag_k = FK_ADD;
L_15045F06:
    ecx = MEM32(edi); /* 0x15045F06: mov ecx, dword ptr [edi] */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edi = edi + 4; /* 0x15045F08: add edi, 4 */
    _flag_k = FK_ADD;
    edx = ecx + 0x2; /* 0x15045F0B: lea edx, [ecx + 2] */
L_15045F0E:
    SET_LO16(eax, MEM16(ecx)); /* 0x15045F0E: mov ax, word ptr [ecx] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 2; /* 0x15045F11: add ecx, 2 */
    _flag_k = FK_ADD;
    /* cmp LO16(eax), MEM16(ebp + (-0x24)) */ /* 0x15045F14: cmp ax, word ptr [ebp - 0x24] */
    _flag_a = (uint32_t)(LO16(eax)) << 16; _flag_b = (uint32_t)(MEM16(ebp + (-0x24))) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    RECOMP_BACKEDGE();
    if (CMP_NE(_flag_a, _flag_b)) goto L_15045F0E; /* 0x15045F18: jne 0x15045f0e */
L_15045F1A:
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ecx = ecx - edx; /* 0x15045F1A: sub ecx, edx */
    _flag_k = FK_CMP;
    if (1u) _cf = (((ecx) >> 0) & 1u); /* 0x15045F1C: sar ecx, 1 */
    if (1u) { _flag_a = recomp_flags_pack(((uint32_t)((int32_t)ecx >> 1u)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ecx = (uint32_t)((int32_t)ecx >> 1u);
    PUSH32(esp, 0x20u); /* 0x15045F1E: push 0x20 */
    eax = POP32_VAL(esp); /* 0x15045F20: pop eax */
    esi = esi + ecx * 2; /* 0x15045F21: lea esi, [esi + ecx*2] */
    MEM16(esi) = (uint16_t)(LO16(eax)); /* 0x15045F24: mov word ptr [esi], ax */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esi = esi + 2; /* 0x15045F27: add esi, 2 */
    _flag_k = FK_ADD;
    eax = MEM32(edi); /* 0x15045F2A: mov eax, dword ptr [edi] */
    /* test eax, eax */ /* 0x15045F2C: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_15045EDD; /* 0x15045F2E: jne 0x15045edd */
L_15045F30:
    ebx = MEM32(ebp + (-0x38)); /* 0x15045F30: mov ebx, dword ptr [ebp - 0x38] */
L_15045F33:
    edi = MEM32(ebp + (-0x44)); /* 0x15045F33: mov edi, dword ptr [ebp - 0x44] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x15045F36: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(esi + (-0x2)) = eax; /* 0x15045F38: mov dword ptr [esi - 2], eax */
    eax = MEM32(ebp + (-0x20)); /* 0x15045F3B: mov eax, dword ptr [ebp - 0x20] */
    esi = MEM32(eax); /* 0x15045F3E: mov esi, dword ptr [eax] */
    /* test edi, edi */ /* 0x15045F40: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1504602F; /* 0x15045F42: je 0x1504602f */
L_15045F48:
    ecx = MEM32(ebp + (-0x30)); /* 0x15045F48: mov ecx, dword ptr [ebp - 0x30] */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ebx = ebx - ecx; /* 0x15045F4B: sub ebx, ecx */
    _flag_k = FK_CMP;
    eax = MEM32(0x150BDAF8); /* 0x15045F4D: mov eax, dword ptr [0x150bdaf8] */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ebx = ebx + ebx; /* 0x15045F52: add ebx, ebx */
    _flag_k = FK_ADD;
    PUSH32(esp, ebx); /* 0x15045F54: push ebx */
    eax = eax + ecx * 2; /* 0x15045F55: lea eax, [eax + ecx*2] */
    PUSH32(esp, eax); /* 0x15045F58: push eax */
    PUSH32(esp, esi); /* 0x15045F59: push esi */
    RECOMP_CALL(sub_1508DBF0); /* 0x15045F5A: call 0x1508dbf0 */
    RECOMP_FLAGS_IN();
    eax = MEM32(edi); /* 0x15045F5F: mov eax, dword ptr [edi] */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x15045F61: add esp, 0xc */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esi = esi + ebx; /* 0x15045F64: add esi, ebx */
    _flag_k = FK_ADD;
    /* test eax, eax */ /* 0x15045F66: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_15045FBC; /* 0x15045F68: je 0x15045fbc */
L_15045F6A:
    ebx = MEM32(ebp + (-0x28)); /* 0x15045F6A: mov ebx, dword ptr [ebp - 0x28] */
L_15045F6D:
    PUSH32(esp, eax); /* 0x15045F6D: push eax */
    eax = MEM32(ebp + (-0x20)); /* 0x15045F6E: mov eax, dword ptr [ebp - 0x20] */
    ecx = esi; /* 0x15045F71: mov ecx, esi */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(MEM32(eax));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ecx = ecx - MEM32(eax); /* 0x15045F73: sub ecx, dword ptr [eax] */
    _flag_k = FK_CMP;
    eax = ebx; /* 0x15045F75: mov eax, ebx */
    if (1u) _cf = (((ecx) >> 0) & 1u); /* 0x15045F77: sar ecx, 1 */
    if (1u) { _flag_a = recomp_flags_pack(((uint32_t)((int32_t)ecx >> 1u)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ecx = (uint32_t)((int32_t)ecx >> 1u);
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - ecx; /* 0x15045F79: sub eax, ecx */
    _flag_k = FK_CMP;
    PUSH32(esp, eax); /* 0x15045F7B: push eax */
    PUSH32(esp, esi); /* 0x15045F7C: push esi */
    RECOMP_CALL(sub_1508F250); /* 0x15045F7D: call 0x1508f250 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x15045F82: add esp, 0xc */
    _flag_k = FK_ADD;
    /* test eax, eax */ /* 0x15045F85: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_15045F98; /* 0x15045F87: je 0x15045f98 */
L_15045F89:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x15045F89: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, eax); /* 0x15045F8B: push eax */
    PUSH32(esp, eax); /* 0x15045F8C: push eax */
    PUSH32(esp, eax); /* 0x15045F8D: push eax */
    PUSH32(esp, eax); /* 0x15045F8E: push eax */
    PUSH32(esp, eax); /* 0x15045F8F: push eax */
    RECOMP_CALL(sub_1505A11B); /* 0x15045F90: call 0x1505a11b */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x14u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x14u; /* 0x15045F95: add esp, 0x14 */
    _flag_k = FK_ADD;
L_15045F98:
    ecx = MEM32(edi); /* 0x15045F98: mov ecx, dword ptr [edi] */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edi = edi + 4; /* 0x15045F9A: add edi, 4 */
    _flag_k = FK_ADD;
    edx = ecx + 0x2; /* 0x15045F9D: lea edx, [ecx + 2] */
L_15045FA0:
    SET_LO16(eax, MEM16(ecx)); /* 0x15045FA0: mov ax, word ptr [ecx] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 2; /* 0x15045FA3: add ecx, 2 */
    _flag_k = FK_ADD;
    /* cmp LO16(eax), MEM16(ebp + (-0x24)) */ /* 0x15045FA6: cmp ax, word ptr [ebp - 0x24] */
    _flag_a = (uint32_t)(LO16(eax)) << 16; _flag_b = (uint32_t)(MEM16(ebp + (-0x24))) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    RECOMP_BACKEDGE();
    if (CMP_NE(_flag_a, _flag_b)) goto L_15045FA0; /* 0x15045FAA: jne 0x15045fa0 */
L_15045FAC:
    eax = MEM32(edi); /* 0x15045FAC: mov eax, dword ptr [edi] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ecx = ecx - edx; /* 0x15045FAE: sub ecx, edx */
    _flag_k = FK_CMP;
    if (1u) _cf = (((ecx) >> 0) & 1u); /* 0x15045FB0: sar ecx, 1 */
    if (1u) { _flag_a = recomp_flags_pack(((uint32_t)((int32_t)ecx >> 1u)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ecx = (uint32_t)((int32_t)ecx >> 1u);
    esi = esi + ecx * 2; /* 0x15045FB2: lea esi, [esi + ecx*2] */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esi = esi + 2; /* 0x15045FB5: add esi, 2 */
    _flag_k = FK_ADD;
    /* test eax, eax */ /* 0x15045FB8: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_15045F6D; /* 0x15045FBA: jne 0x15045f6d */
L_15045FBC:
    /* cmp MEM32(ebp + (-0x48)), 0 */ /* 0x15045FBC: cmp dword ptr [ebp - 0x48], 0 */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x48))); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_1504602C; /* 0x15045FC0: jne 0x1504602c */
L_15045FC2:
    ebx = MEM32(ebp + (-0x4C)); /* 0x15045FC2: mov ebx, dword ptr [ebp - 0x4c] */
    eax = ebp + (-0x1C); /* 0x15045FC5: lea eax, [ebp - 0x1c] */
    PUSH32(esp, eax); /* 0x15045FC8: push eax */
    PUSH32(esp, ebx); /* 0x15045FC9: push ebx */
    PUSH32(esp, esi); /* 0x15045FCA: push esi */
    RECOMP_CALL(sub_1508F250); /* 0x15045FCB: call 0x1508f250 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x15045FD0: add esp, 0xc */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edi = 0; /* 0x15045FD3: xor edi, edi */
    _cf = 0;
    _flag_k = FK_TEST;
    /* test eax, eax */ /* 0x15045FD5: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_15045FE6; /* 0x15045FD7: je 0x15045fe6 */
L_15045FD9:
    PUSH32(esp, edi); /* 0x15045FD9: push edi */
    PUSH32(esp, edi); /* 0x15045FDA: push edi */
    PUSH32(esp, edi); /* 0x15045FDB: push edi */
    PUSH32(esp, edi); /* 0x15045FDC: push edi */
    PUSH32(esp, edi); /* 0x15045FDD: push edi */
    RECOMP_CALL(sub_1505A11B); /* 0x15045FDE: call 0x1505a11b */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x14u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x14u; /* 0x15045FE3: add esp, 0x14 */
    _flag_k = FK_ADD;
L_15045FE6:
    PUSH32(esp, 0x15004978u); /* 0x15045FE6: push 0x15004978 */
    PUSH32(esp, ebx); /* 0x15045FEB: push ebx */
    PUSH32(esp, esi); /* 0x15045FEC: push esi */
    RECOMP_CALL(sub_1508F120); /* 0x15045FED: call 0x1508f120 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x15045FF2: add esp, 0xc */
    _flag_k = FK_ADD;
    /* test eax, eax */ /* 0x15045FF5: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_15046006; /* 0x15045FF7: je 0x15046006 */
L_15045FF9:
    PUSH32(esp, edi); /* 0x15045FF9: push edi */
    PUSH32(esp, edi); /* 0x15045FFA: push edi */
    PUSH32(esp, edi); /* 0x15045FFB: push edi */
    PUSH32(esp, edi); /* 0x15045FFC: push edi */
    PUSH32(esp, edi); /* 0x15045FFD: push edi */
    RECOMP_CALL(sub_1505A11B); /* 0x15045FFE: call 0x1505a11b */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x14u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x14u; /* 0x15046003: add esp, 0x14 */
    _flag_k = FK_ADD;
L_15046006:
    eax = MEM32(ebp + (-0x3C)); /* 0x15046006: mov eax, dword ptr [ebp - 0x3c] */
    /* test eax, eax */ /* 0x15046009: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_15046029; /* 0x1504600B: je 0x15046029 */
L_1504600D:
    PUSH32(esp, eax); /* 0x1504600D: push eax */
    PUSH32(esp, ebx); /* 0x1504600E: push ebx */
    PUSH32(esp, esi); /* 0x1504600F: push esi */
    RECOMP_CALL(sub_1508F120); /* 0x15046010: call 0x1508f120 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x15046015: add esp, 0xc */
    _flag_k = FK_ADD;
    /* test eax, eax */ /* 0x15046018: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_15046029; /* 0x1504601A: je 0x15046029 */
L_1504601C:
    PUSH32(esp, edi); /* 0x1504601C: push edi */
    PUSH32(esp, edi); /* 0x1504601D: push edi */
    PUSH32(esp, edi); /* 0x1504601E: push edi */
    PUSH32(esp, edi); /* 0x1504601F: push edi */
    PUSH32(esp, edi); /* 0x15046020: push edi */
    RECOMP_CALL(sub_1505A11B); /* 0x15046021: call 0x1505a11b */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x14u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x14u; /* 0x15046026: add esp, 0x14 */
    _flag_k = FK_ADD;
L_15046029:
    esi = esi + ebx * 2; /* 0x15046029: lea esi, [esi + ebx*2] */
L_1504602C:
    eax = MEM32(ebp + (-0x20)); /* 0x1504602C: mov eax, dword ptr [ebp - 0x20] */
L_1504602F:
    /* test esi, esi */ /* 0x1504602F: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1504604A; /* 0x15046031: je 0x1504604a */
L_15046033:
    /* cmp esi, MEM32(eax) */ /* 0x15046033: cmp esi, dword ptr [eax] */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(MEM32(eax));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_1504603F; /* 0x15046035: jne 0x1504603f */
L_15046037:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x15046037: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM16(esi) = (uint16_t)(LO16(eax)); /* 0x15046039: mov word ptr [esi], ax */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esi = esi + 2; /* 0x1504603C: add esi, 2 */
    _flag_k = FK_ADD;
L_1504603F:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1504603F: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edi = 0; /* 0x15046041: xor edi, edi */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM16(esi) = (uint16_t)(LO16(eax)); /* 0x15046043: mov word ptr [esi], ax */
    ebx = eax; /* 0x15046046: mov ebx, eax */
    goto L_1504604F; /* 0x15046048: jmp 0x1504604f */
L_1504604A:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edi = 0; /* 0x1504604A: xor edi, edi */
    _cf = 0;
    _flag_k = FK_TEST;
L_1504604C:
    ebx = MEM32(ebp + (-0x34)); /* 0x1504604C: mov ebx, dword ptr [ebp - 0x34] */
L_1504604F:
    eax = MEM32(0x150BDAF8); /* 0x1504604F: mov eax, dword ptr [0x150bdaf8] */
    /* test eax, eax */ /* 0x15046054: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1504605F; /* 0x15046056: je 0x1504605f */
L_15046058:
    PUSH32(esp, eax); /* 0x15046058: push eax */
    RECOMP_CALL(sub_15048840); /* 0x15046059: call 0x15048840 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1504605E: pop ecx */
L_1504605F:
    eax = MEM32(ebp + (-0x3C)); /* 0x1504605F: mov eax, dword ptr [ebp - 0x3c] */
    MEM32(0x150BDAF8) = edi; /* 0x15046062: mov dword ptr [0x150bdaf8], edi */
    /* test eax, eax */ /* 0x15046068: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_15046073; /* 0x1504606A: je 0x15046073 */
L_1504606C:
    PUSH32(esp, eax); /* 0x1504606C: push eax */
    RECOMP_CALL(sub_15048840); /* 0x1504606D: call 0x15048840 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x15046072: pop ecx */
L_15046073:
    eax = ebx; /* 0x15046073: mov eax, ebx */
L_15046075:
    ecx = MEM32(ebp + (-0x4)); /* 0x15046075: mov ecx, dword ptr [ebp - 4] */
    edi = POP32_VAL(esp); /* 0x15046078: pop edi */
    esi = POP32_VAL(esp); /* 0x15046079: pop esi */
    _flag_a = (uint32_t)((ecx ^ ebp)); _flag_b = (uint32_t)((ecx ^ ebp));
    ecx = ecx ^ ebp; /* 0x1504607A: xor ecx, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    ebx = POP32_VAL(esp); /* 0x1504607C: pop ebx */
    RECOMP_CALL(sub_1505E540); /* 0x1504607D: call 0x1505e540 */
    RECOMP_FLAGS_IN();
    esp = ebp; ebp = POP32_VAL(esp); /* 0x15046082: leave  */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x15046083: ret  */
    RECOMP_REGS_OUT();
}
